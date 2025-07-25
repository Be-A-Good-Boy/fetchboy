module main

import json
import net.http
import os
import strconv
import vargs

fn main() {
    mut args := vargs.new(os.args, 1);
    mut commands := {
        "help" : help,
        "install-self" : installself,
        "install-tools" : installtools
    };

    args.parse();

    command := args.command;

    if command == "" {
        welcome();
        0
    } else {
        if command !in commands {
            println("Command not found. [${command}]");
            exit(127);
        }
        commands[command]();
        0
    }
}

fn help() {
    info := json.decode(Info_general, $embed_file("resource/info.json").to_string()) or {
        panic("Info.json returns corrupted data.");
        exit(1);
    };
    message_help := $embed_file("resource/Help.txt").to_string();
    mut message_commands := "";
    mut message_options := "";

    for k, v in info.commands {
        mut calls := "${k}";

        for w in v.aliases {
            calls = "${calls}, ${w}";
        }

        spaces := " ".repeat(16 - calls.len); 

        message_commands = "${message_commands}  ${calls}${spaces}  ${v.description}\n";
    }

    unsafe {
        strconv.v_printf(
            message_help,
            info.usage,
            message_commands,
            message_options
        );
    }
}

fn installself() {
    osys := os.user_os();
    userprofile := os.getenv("USERPROFILE");

    fetch_dir := os.join_path(userprofile, ".fetch");

    mut program_extension := "";
    
    os.mkdir_all(fetch_dir) or {
        panic("Can't create .fetchboy in user directory. Error: $err");
        exit(1);
    };

    if osys == "windows" {
        program_extension = ".exe";
    }

    os.cp(os.executable(), os.join_path(fetch_dir, "fetchboy${program_extension}")) or {
        panic("Wasn't able to clone Fetchboy into directory. Error: $err");
        exit(1);
    };

    currentpath := os.getenv("Path");
    println(currentpath);
    os.setenv("Path", "${currentpath}:${fetch_dir}", true);
}

fn installtools() {
    //---//

    win_choco_link := "https://github.com/chocolatey/choco/releases/download/2.5.0/chocolatey-2.5.0.0.msi";
    win_git_portable_link := "https://github.com/git-for-windows/git/releases/download/v2.50.1.windows.1/PortableGit-2.50.1-64-bit.7z.exe";

    //---//

    /* osys := os.user_os();

    match osys {
        "windows" {

        }
        "macos" {

        }
        "linux", "netbsd" {
            println("You installed this obscure operating system. You should know how to do it yourself. Install Git.")
        }
        "freebsd" {
            result := os.execute("pkg install git");
        }
        "openbsd" {
            result := os.execute("pkg_add git");
        }
        "solaris" {
            result := os.execute("pkgutil -i git");
        }
        else {
            println("FetchCLI is unable to save you. Install the following: Git.");
        }
    }

    tmpdir := get_app_tmp_dir(); */
}

fn welcome() {
    println($embed_file("resource/Welcome.txt").to_string());
}

// ----- //

fn get_app_tmp_dir() string {
    tmpdir := os.join_path(os.temp_dir(), "fetchcli");

    os.mkdir_all(tmpdir) or {
        panic("Can't create directory. Error: $err");
        exit(1);
    };

    return tmpdir
}

// ----- //

struct Info_general {
    commands map[string]Info_command
    usage string
}

struct Info_command {
    aliases []string
    description string
}