
#ifndef V_COMMIT_HASH
	#define V_COMMIT_HASH "4037765828e709dd8bb9ce5c21b7778087bc2c56"
#endif

#define V_USE_SIGNAL_H

// V comptime_definitions:
// V compile time defines by -d or -define flags:
//     All custom defines      : gcboehm,gcboehm_full,gcboehm_opt,windows
//     Turned ON custom defines: gcboehm,gcboehm_full,gcboehm_opt,windows
#define CUSTOM_DEFINE_gcboehm
#define CUSTOM_DEFINE_gcboehm_full
#define CUSTOM_DEFINE_gcboehm_opt
#define CUSTOM_DEFINE_windows

#define __VTHREADS__ (1)
#define _VGCBOEHM (1)

// V typedefs:
typedef struct IError IError;
typedef struct net__http__Downloader net__http__Downloader;
typedef struct net__http__Handler net__http__Handler;
typedef struct net__Dialer net__Dialer;
typedef struct net__Connection net__Connection;
typedef struct io__Reader io__Reader;
typedef struct io__Writer io__Writer;
typedef struct io__RandomReader io__RandomReader;
typedef struct io__ReaderWriter io__ReaderWriter;
typedef struct io__RandomWriter io__RandomWriter;
typedef struct rand__PRNG rand__PRNG;
typedef struct v__embed_file__Decoder v__embed_file__Decoder;
typedef struct hash__Hash hash__Hash;
typedef struct hash__Hash32er hash__Hash32er;
typedef struct hash__Hash64er hash__Hash64er;
typedef struct none none;
typedef struct _option_anon_fn_mut_net__mbedtls__ssllistener_string__result_net__mbedtls__SSLCerts _option_anon_fn_mut_net__mbedtls__ssllistener_string__result_net__mbedtls__SSLCerts;

// BEGIN_multi_return_typedefs
typedef struct multi_return_u32_u32 multi_return_u32_u32;
typedef struct multi_return_int_int multi_return_int_int;
typedef struct multi_return_u64_int multi_return_u64_int;
typedef struct multi_return_strconv__Dec32_bool multi_return_strconv__Dec32_bool;
typedef struct multi_return_strconv__Dec64_bool multi_return_strconv__Dec64_bool;
typedef struct multi_return_u64_u64 multi_return_u64_u64;
typedef struct multi_return_int_int_int multi_return_int_int_int;
typedef struct multi_return_string_u16 multi_return_string_u16;
typedef struct multi_return_f64_f64 multi_return_f64_f64;
typedef struct multi_return_ref_sync__SpinLock_ref_sync__Subscription multi_return_ref_sync__SpinLock_ref_sync__Subscription;
// END_multi_return_typedefs

typedef struct strconv__BF_param strconv__BF_param;
typedef struct strconv__Dec32 strconv__Dec32;
typedef struct strconv__Dec64 strconv__Dec64;
typedef struct strconv__Uint128 strconv__Uint128;
typedef union strconv__Uf32 strconv__Uf32;
typedef union strconv__Uf64 strconv__Uf64;
typedef union strconv__Float64u strconv__Float64u;
typedef union strconv__Float32u strconv__Float32u;
typedef struct array array;
typedef struct VAssertMetaInfo VAssertMetaInfo;
typedef struct ExceptionRecord ExceptionRecord;
typedef struct ContextRecord ContextRecord;
typedef struct ExceptionPointers ExceptionPointers;
typedef struct DenseArray DenseArray;
typedef struct map map;
typedef struct _option _option;
typedef struct None__ None__;
typedef struct _result _result;
typedef struct Error Error;
typedef struct MessageError MessageError;
typedef struct SortedMap SortedMap;
typedef struct mapnode mapnode;
typedef struct string string;
typedef struct RunesIterator RunesIterator;
typedef union StrIntpMem StrIntpMem;
typedef struct StrIntpData StrIntpData;
typedef struct vargs__Args vargs__Args;
typedef struct time__TimeParseError time__TimeParseError;
typedef struct time__StopWatchOptions time__StopWatchOptions;
typedef struct time__StopWatch time__StopWatch;
typedef struct time__Time time__Time;
typedef struct time__SystemTime time__SystemTime;
typedef struct net__urllib__URL net__urllib__URL;
typedef struct net__urllib__Userinfo net__urllib__Userinfo;
typedef struct io__BufferedReader io__BufferedReader;
typedef struct io__BufferedWriter io__BufferedWriter;
typedef struct io__MultiWriter io__MultiWriter;
typedef struct io__Eof io__Eof;
typedef struct io__NotExpected io__NotExpected;
typedef struct io__ReaderWriterImpl io__ReaderWriterImpl;
typedef struct strings__textscanner__TextScanner strings__textscanner__TextScanner;
typedef struct rand__buffer__PRNGBuffer rand__buffer__PRNGBuffer;
typedef struct os__Eof os__Eof;
typedef struct os__NotExpected os__NotExpected;
typedef struct os__File os__File;
typedef struct os__FileNotOpenedError os__FileNotOpenedError;
typedef struct os__SizeOfTypeIs0Error os__SizeOfTypeIs0Error;
typedef struct os__SystemError os__SystemError;
typedef struct os__Result os__Result;
typedef struct os__ExecutableNotFoundError os__ExecutableNotFoundError;
typedef struct os__MkdirParams os__MkdirParams;
typedef struct os__Process os__Process;
typedef struct v__embed_file__EmbedFileDecoders v__embed_file__EmbedFileDecoders;
typedef struct v__embed_file__EmbedFileData v__embed_file__EmbedFileData;
typedef struct v__embed_file__EmbedFileIndexEntry v__embed_file__EmbedFileIndexEntry;
typedef struct rand__config__PRNGConfigStruct rand__config__PRNGConfigStruct;
typedef struct rand__config__NormalConfigStruct rand__config__NormalConfigStruct;
typedef struct rand__config__ShuffleConfigStruct rand__config__ShuffleConfigStruct;
typedef struct rand__wyrand__WyRandRNG rand__wyrand__WyRandRNG;
typedef struct sync__Subscription sync__Subscription;
typedef struct sync__Channel sync__Channel;
typedef struct sync__SpinLock sync__SpinLock;
typedef struct sync__Mutex sync__Mutex;
typedef struct sync__RwMutex sync__RwMutex;
typedef struct sync__Semaphore sync__Semaphore;
typedef struct sync__WaitGroup sync__WaitGroup;
typedef union net__AddrData net__AddrData;
typedef struct net__Ip6 net__Ip6;
typedef struct net__Ip net__Ip;
typedef struct net__Unix net__Unix;
typedef struct net__Addr net__Addr;
typedef struct net__ShutdownConfig net__ShutdownConfig;
typedef struct net__Socket net__Socket;
typedef struct net__TCPDialer net__TCPDialer;
typedef struct net__TcpConn net__TcpConn;
typedef struct net__TcpSocket net__TcpSocket;
typedef struct net__UdpSocket net__UdpSocket;
typedef struct net__UdpConn net__UdpConn;
typedef struct net__mbedtls__SSLCerts net__mbedtls__SSLCerts;
typedef struct net__mbedtls__SSLConn net__mbedtls__SSLConn;
typedef struct net__mbedtls__SSLListener net__mbedtls__SSLListener;
typedef struct net__mbedtls__SSLConnectConfig net__mbedtls__SSLConnectConfig;
typedef struct net__ssl__SSLDialer net__ssl__SSLDialer;
typedef struct net__ssl__SSLConn net__ssl__SSLConn;
typedef struct net__ssl__SSLConnectConfig net__ssl__SSLConnectConfig;
typedef struct net__socks__SOCKS5Dialer net__socks__SOCKS5Dialer;
typedef struct net__http__Cookie net__http__Cookie;
typedef struct net__http__SilentStreamingDownloader net__http__SilentStreamingDownloader;
typedef struct net__http__TerminalStreamingDownloader net__http__TerminalStreamingDownloader;
typedef struct net__http__HeaderKV net__http__HeaderKV;
typedef struct net__http__Header net__http__Header;
typedef struct net__http__HeaderRenderConfig net__http__HeaderRenderConfig;
typedef struct net__http__HeaderKeyError net__http__HeaderKeyError;
typedef struct net__http__HttpProxy net__http__HttpProxy;
typedef struct net__http__Request net__http__Request;
typedef struct net__http__UnexpectedExtraAttributeError net__http__UnexpectedExtraAttributeError;
typedef struct net__http__MultiplePathAttributesError net__http__MultiplePathAttributesError;
typedef struct net__http__Response net__http__Response;
typedef struct net__http__DebugHandler net__http__DebugHandler;
typedef struct main__Info_general main__Info_general;
typedef struct main__Info_command main__Info_command;
typedef struct _result_void _result_void;
typedef struct _result_int _result_int;
typedef struct _result_net__mbedtls__SSLCerts_ptr _result_net__mbedtls__SSLCerts_ptr;
typedef struct _result_u64 _result_u64;
typedef struct _result_i64 _result_i64;
typedef struct _result_string _result_string;
typedef struct _result_voidptr _result_voidptr;
typedef struct _result_os__File _result_os__File;
typedef struct _result_FILE_ptr _result_FILE_ptr;
typedef struct _result_Array_u8 _result_Array_u8;
typedef struct _result_strings__Builder _result_strings__Builder;
typedef struct _result_u32 _result_u32;
typedef struct _result_Array_net__Addr _result_Array_net__Addr;
typedef struct _result_multi_return_string_u16 _result_multi_return_string_u16;
typedef struct _result_net__Addr _result_net__Addr;
typedef struct _result_bool _result_bool;
typedef struct _result_net__Connection _result_net__Connection;
typedef struct _result_net__TcpConn_ptr _result_net__TcpConn_ptr;
typedef struct _result_net__TcpSocket _result_net__TcpSocket;
typedef struct _result_time__Time _result_time__Time;
typedef struct _result_u16 _result_u16;
typedef struct _result_net__mbedtls__SSLConn_ptr _result_net__mbedtls__SSLConn_ptr;
typedef struct _result_net__ssl__SSLConn_ptr _result_net__ssl__SSLConn_ptr;
typedef struct _result_main__Info_general _result_main__Info_general;
typedef struct _result_Map_string_main__Info_command _result_Map_string_main__Info_command;
typedef struct _result_main__Info_command _result_main__Info_command;
typedef struct _result_Array_string _result_Array_string;
typedef struct _option_int _option_int;
typedef struct _option_rune _option_rune;
typedef struct _option_u8 _option_u8;
typedef struct _option_string _option_string;
typedef struct _option_v__embed_file__Decoder _option_v__embed_file__Decoder;
typedef struct _option_net__Addr _option_net__Addr;

 // V preincludes:

#if defined(__TINYC__) && defined(__has_include)
// tcc does not support has_include properly yet, turn it off completely
#undef __has_include
#endif

// V cheaders:
// Generated by the V compiler

#if defined __GNUC__ && __GNUC__ >= 14
#pragma GCC diagnostic warning "-Wimplicit-function-declaration"
#pragma GCC diagnostic warning "-Wincompatible-pointer-types"
#pragma GCC diagnostic warning "-Wint-conversion"
#pragma GCC diagnostic warning "-Wreturn-mismatch"
#endif


#if defined(__TINYC__) && defined(__has_include)
// tcc does not support has_include properly yet, turn it off completely
#undef __has_include
#endif

#if defined(__has_include)

#if __has_include(<inttypes.h>)
#include <inttypes.h>
#else
#error VERROR_MESSAGE The C compiler can not find <inttypes.h>. Please install the package `build-essential`.
#endif

#else
#include <inttypes.h>
#endif


#if defined(__has_include)

#if __has_include(<stddef.h>)
#include <stddef.h>
#else
#error VERROR_MESSAGE The C compiler can not find <stddef.h>. Please install the package `build-essential`.
#endif

#else
#include <stddef.h>
#endif


//================================== builtin types ================================*/
#if defined(__x86_64__) || defined(_M_AMD64) || defined(__aarch64__) || defined(__arm64__) || defined(_M_ARM64) || (defined(__riscv_xlen) && __riscv_xlen == 64) || defined(__s390x__) || (defined(__powerpc64__) && defined(__LITTLE_ENDIAN__)) || defined(__loongarch64)
typedef int64_t vint_t;
#else
typedef int32_t vint_t;
#endif
typedef int64_t i64;
typedef int16_t i16;
typedef int8_t i8;
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint8_t u8;
typedef uint16_t u16;
typedef u8 byte;
typedef int32_t i32;
typedef uint32_t rune;
typedef size_t usize;
typedef ptrdiff_t isize;
#ifndef VNOFLOAT
typedef float f32;
typedef double f64;
#else
typedef int32_t f32;
typedef int64_t f64;
#endif
typedef int64_t int_literal;
#ifndef VNOFLOAT
typedef double float_literal;
#else
typedef int64_t float_literal;
#endif
typedef unsigned char* byteptr;
typedef void* voidptr;
typedef char* charptr;
typedef u8 array_fixed_byte_300 [300];

typedef struct sync__Channel* chan;

#ifndef CUSTOM_DEFINE_no_bool
	#ifndef __cplusplus
		#ifndef bool
			#ifdef CUSTOM_DEFINE_4bytebool
				typedef int bool;
			#else
				typedef u8 bool;
			#endif
			#define true 1
			#define false 0
		#endif
	#endif
#endif


typedef u64 (*MapHashFn)(voidptr);
typedef bool (*MapEqFn)(voidptr, voidptr);
typedef void (*MapCloneFn)(voidptr, voidptr);
typedef void (*MapFreeFn)(voidptr);

//============================== HELPER C MACROS =============================*/
// _SLIT0 is used as NULL string for literal arguments
// `"" s` is used to enforce a string literal argument
#define _SLIT0 (string){.str=(byteptr)(""), .len=0, .is_lit=1}
#define _S(s) ((string){.str=(byteptr)("" s), .len=(sizeof(s)-1), .is_lit=1})
#define _SLEN(s, n) ((string){.str=(byteptr)("" s), .len=n, .is_lit=1})
// optimized way to compare literal strings
#define _SLIT_EQ(sptr, slen, lit) (slen == sizeof("" lit)-1 && !vmemcmp(sptr, "" lit, slen))
#define _SLIT_NE(sptr, slen, lit) (slen != sizeof("" lit)-1 || vmemcmp(sptr, "" lit, slen))

// take the address of an rvalue
#define ADDR(type, expr) (&((type[]){expr}[0]))

// copy something to the heap
#define HEAP(type, expr) ((type*)memdup((void*)&((type[]){expr}[0]), sizeof(type)))
#define HEAP_noscan(type, expr) ((type*)memdup_noscan((void*)&((type[]){expr}[0]), sizeof(type)))
#define HEAP_align(type, expr, align) ((type*)memdup_align((void*)&((type[]){expr}[0]), sizeof(type), align))

#define _PUSH_MANY(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push_many(arr, tmp.data, tmp.len);}
#define _PUSH_MANY_noscan(arr, val, tmp, tmp_typ) {tmp_typ tmp = (val); array_push_many_noscan(arr, tmp.data, tmp.len);}

// unsigned/signed comparisons
static inline bool _us32_gt(uint32_t a, int32_t b) { return a > INT32_MAX || (int32_t)a > b; }
static inline bool _us32_ge(uint32_t a, int32_t b) { return a >= INT32_MAX || (int32_t)a >= b; }
static inline bool _us32_eq(uint32_t a, int32_t b) { return a <= INT32_MAX && (int32_t)a == b; }
static inline bool _us32_ne(uint32_t a, int32_t b) { return a > INT32_MAX || (int32_t)a != b; }
static inline bool _us32_le(uint32_t a, int32_t b) { return a <= INT32_MAX && (int32_t)a <= b; }
static inline bool _us32_lt(uint32_t a, int32_t b) { return a < INT32_MAX && (int32_t)a < b; }
static inline bool _us64_gt(uint64_t a, int64_t b) { return a > INT64_MAX || (int64_t)a > b; }
static inline bool _us64_ge(uint64_t a, int64_t b) { return a >= INT64_MAX || (int64_t)a >= b; }
static inline bool _us64_eq(uint64_t a, int64_t b) { return a <= INT64_MAX && (int64_t)a == b; }
static inline bool _us64_ne(uint64_t a, int64_t b) { return a > INT64_MAX || (int64_t)a != b; }
static inline bool _us64_le(uint64_t a, int64_t b) { return a <= INT64_MAX && (int64_t)a <= b; }
static inline bool _us64_lt(uint64_t a, int64_t b) { return a < INT64_MAX && (int64_t)a < b; }

#define EMPTY_VARG_INITIALIZATION 0
#define EMPTY_STRUCT_DECLARATION
#define E_STRUCT
// Due to a tcc bug, the length of an array needs to be specified, but GCC crashes if it is...
#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[])
#define TCCSKIP(x) x

#define __NOINLINE __attribute__((noinline))
#define __IRQHANDLER __attribute__((interrupt))

#define __V_architecture 0
#if defined(__x86_64__) || defined(_M_AMD64)
	#define __V_amd64  1
	#undef __V_architecture
	#define __V_architecture 1
#endif

#if defined(__aarch64__) || defined(__arm64__) || defined(_M_ARM64)
	#define __V_arm64  1
	#undef __V_architecture
	#define __V_architecture 2
#endif

#if defined(__arm__) || defined(_M_ARM)
	#define __V_arm32  1
	#undef __V_architecture
	#define __V_architecture 3
#endif

#if defined(__riscv) && __riscv_xlen == 64
	#define __V_rv64  1
	#undef __V_architecture
	#define __V_architecture 4
#endif

#if defined(__riscv) && __riscv_xlen == 32
	#define __V_rv32  1
	#undef __V_architecture
	#define __V_architecture 5
#endif

#if defined(__i386__) || defined(_M_IX86)
	#define __V_x86    1
	#undef __V_architecture
	#define __V_architecture 6
#endif

#if defined(__s390x__)
	#define __V_s390x  1
	#undef __V_architecture
	#define __V_architecture 7
#endif

#if defined(__powerpc64__) && defined(__LITTLE_ENDIAN__)
	#define __V_ppc64le  1
	#undef __V_architecture
	#define __V_architecture 8
#endif

#if defined(__loongarch64)
	#define __V_loongarch64  1
	#undef __V_architecture
	#define __V_architecture 9
#endif

// Using just __GNUC__ for detecting gcc, is not reliable because other compilers define it too:
#ifdef __GNUC__
	#define __V_GCC__
#endif
#ifdef __TINYC__
	#undef __V_GCC__
#endif
#ifdef __cplusplus
	#undef __V_GCC__
#endif
#ifdef __clang__
	#undef __V_GCC__
#endif

#ifdef _MSC_VER
	#undef __V_GCC__
	#undef EMPTY_STRUCT_DECLARATION
	#undef E_STRUCT
	#define EMPTY_STRUCT_DECLARATION unsigned char _dummy_pad
	#define E_STRUCT 0
#endif

#ifndef _WIN32
	#if defined __has_include
		#if __has_include (<execinfo.h>)
			#include <execinfo.h>
		#else
			// On linux: int backtrace(void **__array, int __size);
			// On BSD: size_t backtrace(void **, size_t);
		#endif
	#endif
#endif

#ifdef __TINYC__
	#define _Atomic volatile
	#undef EMPTY_STRUCT_DECLARATION
	#undef E_STRUCT
	#define EMPTY_STRUCT_DECLARATION unsigned char _dummy_pad
	#define E_STRUCT 0
	#undef EMPTY_ARRAY_OF_ELEMS
	#define EMPTY_ARRAY_OF_ELEMS(x,n) (x[n])
	#undef __NOINLINE
	#undef __IRQHANDLER
	// tcc does not support inlining at all
	#define __NOINLINE
	#define __IRQHANDLER
	#undef TCCSKIP
	#define TCCSKIP(x)
	// #include <byteswap.h>
	int tcc_backtrace(const char *fmt, ...);
#endif

// Use __offsetof_ptr instead of __offset_of, when you *do* have a valid pointer, to avoid UB:
#ifndef __offsetof_ptr
	#define __offsetof_ptr(ptr,PTYPE,FIELDNAME) ((size_t)((byte *)&((PTYPE *)ptr)->FIELDNAME - (byte *)ptr))
#endif

// for __offset_of
#ifndef __offsetof
#if defined(__TINYC__) || defined(_MSC_VER)
	#define __offsetof(PTYPE,FIELDNAME) ((size_t)(&((PTYPE *)0)->FIELDNAME))
#else
	#define __offsetof(st, m) __builtin_offsetof(st, m)
#endif
#endif

#define OPTION_CAST(x) (x)

#if defined(_WIN32) || defined(__CYGWIN__)
	#define VV_EXP extern __declspec(dllexport)
	#define VV_LOC static
#else
	// 4 < gcc < 5 is used by some older Ubuntu LTS and Centos versions,
	// and does not support __has_attribute(visibility) ...
	#ifndef __has_attribute
		#define __has_attribute(x) 0  // Compatibility with non-clang compilers.
	#endif
	#if (defined(__GNUC__) && (__GNUC__ >= 4)) || (defined(__clang__) && __has_attribute(visibility))
		#ifdef ARM
			#define VV_EXP  extern __attribute__((externally_visible,visibility("default")))
		#else
			#define VV_EXP  extern __attribute__((visibility("default")))
		#endif
		#if defined(__clang__) && (defined(_VUSECACHE) || defined(_VBUILDMODULE))
			#define VV_LOC static
		#else
			#define VV_LOC  __attribute__ ((visibility ("hidden")))
		#endif
	#else
		#define VV_EXP extern
		#define VV_LOC static
	#endif
#endif

#ifdef __cplusplus
	#include <utility>
	#define _MOV std::move
#else
	#define _MOV
#endif

// tcc does not support has_include properly yet, turn it off completely
#if defined(__TINYC__) && defined(__has_include)
#undef __has_include
#endif


#if !defined(VWEAK)
	#define VWEAK __attribute__((weak))
	#ifdef _MSC_VER
		#undef VWEAK
		#define VWEAK
	#endif
	#if defined(__MINGW32__) || defined(__MINGW64__)
		#undef VWEAK
		#define VWEAK
	#endif
#endif

#if !defined(VHIDDEN)
	#define VHIDDEN __attribute__((visibility("hidden")))
	#ifdef _MSC_VER
		#undef VHIDDEN
		#define VHIDDEN
	#endif
	#if defined(__MINGW32__) || defined(__MINGW64__)
		#undef VHIDDEN
		#define VHIDDEN
	#endif
#endif

#if !defined(VNORETURN)
	#if defined(__TINYC__)
		#include <stdnoreturn.h>
		#define VNORETURN noreturn
	#endif
	# if !defined(__TINYC__) && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
	#  define VNORETURN _Noreturn
	# elif !defined(VNORETURN) && defined(__GNUC__) && __GNUC__ >= 2
	#  define VNORETURN __attribute__((noreturn))
	# endif
	#ifndef VNORETURN
		#define VNORETURN
	#endif
#endif

#if !defined(VUNREACHABLE)
	#if defined(__GNUC__) && !defined(__clang__)
		#define V_GCC_VERSION  (__GNUC__ * 10000L + __GNUC_MINOR__ * 100L + __GNUC_PATCHLEVEL__)
		#if (V_GCC_VERSION >= 40500L) && !defined(__TINYC__)
			#define VUNREACHABLE()  do { __builtin_unreachable(); } while (0)
		#endif
	#endif
	#if defined(__clang__) && defined(__has_builtin) && !defined(__TINYC__)
		#if __has_builtin(__builtin_unreachable)
			#define VUNREACHABLE()  do { __builtin_unreachable(); } while (0)
		#endif
	#endif
	#ifndef VUNREACHABLE
		#define VUNREACHABLE() do { } while (0)
	#endif
#endif

//likely and unlikely macros
#if defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__)
	#define _likely_(x)  __builtin_expect(x,1)
	#define _unlikely_(x)  __builtin_expect(x,0)
#else
	#define _likely_(x) (x)
	#define _unlikely_(x) (x)
#endif


// c_headers
typedef int (*qsort_callback_func)(const void*, const void*);
#include <stdio.h>  // TODO: remove all these includes, define all function signatures and types manually
#include <stdlib.h>
#include <string.h>

#include <stdarg.h> // for va_list

//================================== GLOBALS =================================*/
int load_so(byteptr);
void _vinit(int ___argc, voidptr ___argv);
void _vcleanup(void);
#ifdef _WIN32
	// workaround for windows, export _vinit_caller/_vcleanup_caller, let dl.open()/dl.close() call it
	// NOTE: This is hardcoded in vlib/dl/dl_windows.c.v!
	VV_EXP void _vinit_caller();
	VV_EXP void _vcleanup_caller();
#endif
#define sigaction_size sizeof(sigaction);
#define _ARR_LEN(a) ( (sizeof(a)) / (sizeof(a[0])) )

void v_free(voidptr ptr);

#if INTPTR_MAX == INT32_MAX
	#define TARGET_IS_32BIT 1
#elif INTPTR_MAX == INT64_MAX
	#define TARGET_IS_64BIT 1
#else
	#error "The environment is not 32 or 64-bit."
#endif

#if defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __BIG_ENDIAN || defined(__BIG_ENDIAN__) || defined(__ARMEB__) || defined(__THUMBEB__) || defined(__AARCH64EB__) || defined(_MIBSEB) || defined(__MIBSEB) || defined(__MIBSEB__)
	#define TARGET_ORDER_IS_BIG 1
#elif defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ || defined(__BYTE_ORDER) && __BYTE_ORDER == __LITTLE_ENDIAN || defined(__LITTLE_ENDIAN__) || defined(__ARMEL__) || defined(__THUMBEL__) || defined(__AARCH64EL__) || defined(_MIPSEL) || defined(__MIPSEL) || defined(__MIPSEL__) || defined(_M_AMD64) || defined(_M_ARM64) || defined(_M_X64) || defined(_M_IX86)
	#define TARGET_ORDER_IS_LITTLE 1
#else
	#error "Unknown architecture endianness"
#endif

#ifndef _WIN32
	#include <ctype.h>
	#include <locale.h> // tolower
	#include <sys/time.h>
	#include <unistd.h> // sleep
	extern char **environ;
#endif

#if defined(__CYGWIN__) && !defined(_WIN32)
	#error Cygwin is not supported, please use MinGW or Visual Studio.
#endif

#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__vinix__) || defined(__serenity__) || defined(__sun) || defined(__plan9__)
	#include <sys/types.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __OpenBSD__
	#include <sys/types.h>
	#include <sys/resource.h>
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef __FreeBSD__
	#include <signal.h>
	#include <execinfo.h>
#endif

#ifdef __NetBSD__
	#include <sys/wait.h> // os__wait uses wait on nix
#endif

#ifdef _WIN32
	#define WINVER 0x0600
	#ifdef _WIN32_WINNT
		#undef _WIN32_WINNT
	#endif
	#define _WIN32_WINNT 0x0600
	#ifndef WIN32_FULL
	#define WIN32_LEAN_AND_MEAN
	#endif
	#ifndef _UNICODE
	#define _UNICODE
	#endif
	#ifndef UNICODE
	#define UNICODE
	#endif
	#include <windows.h>

	#include <io.h> // _waccess
	#include <direct.h> // _wgetcwd
	#ifdef V_USE_SIGNAL_H
	#include <signal.h> // signal and SIGSEGV for segmentation fault handler
	#endif

	#ifdef _MSC_VER
		// On MSVC these are the same (as long as /volatile:ms is passed)
		#define _Atomic volatile

		// MSVC cannot parse some things properly
		#undef OPTION_CAST
		#define OPTION_CAST(x)
		#undef __NOINLINE
		#undef __IRQHANDLER
		#define __NOINLINE __declspec(noinline)
		#define __IRQHANDLER __declspec(naked)

		#include <dbghelp.h>
		#pragma comment(lib, "Dbghelp")
	#endif
#else
	#include <pthread.h>
	#ifndef PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP
		// musl does not have that
		#define pthread_rwlockattr_setkind_np(a, b)
	#endif
#endif

// g_live_info is used by live.info()
static void* g_live_info = NULL;

#if defined(__MINGW32__) || defined(__MINGW64__) || (defined(_WIN32) && defined(__TINYC__))
	#undef PRId64
	#undef PRIi64
	#undef PRIo64
	#undef PRIu64
	#undef PRIx64
	#undef PRIX64
	#define PRId64 "lld"
	#define PRIi64 "lli"
	#define PRIo64 "llo"
	#define PRIu64 "llu"
	#define PRIx64 "llx"
	#define PRIX64 "llX"
#endif

#ifdef _VFREESTANDING
#undef _VFREESTANDING
#endif


// ============== wyhash ==============
#ifndef wyhash_final_version_3
#define wyhash_final_version_3

#ifndef WYHASH_CONDOM
// protections that produce different results:
// 1: normal valid behavior
// 2: extra protection against entropy loss (probability=2^-63), aka. "blind multiplication"
#define WYHASH_CONDOM 1
#endif

#ifndef WYHASH_32BIT_MUM
// 0: normal version, slow on 32 bit systems
// 1: faster on 32 bit systems but produces different results, incompatible with wy2u0k function
#define WYHASH_32BIT_MUM 0
#endif

// includes
#include <stdint.h>
#if defined(_MSC_VER) && defined(_M_X64)
	#include <intrin.h>
	#pragma intrinsic(_umul128)
#endif

// 128bit multiply function
static inline uint64_t _wyrot(uint64_t x) { return (x>>32)|(x<<32); }
static inline void _wymum(uint64_t *A, uint64_t *B){
#if(WYHASH_32BIT_MUM)
	uint64_t hh=(*A>>32)*(*B>>32), hl=(*A>>32)*(uint32_t)*B, lh=(uint32_t)*A*(*B>>32), ll=(uint64_t)(uint32_t)*A*(uint32_t)*B;
	#if(WYHASH_CONDOM>1)
	*A^=_wyrot(hl)^hh; *B^=_wyrot(lh)^ll;
	#else
	*A=_wyrot(hl)^hh; *B=_wyrot(lh)^ll;
	#endif
#elif defined(__SIZEOF_INT128__) && !defined(VWASM)
	__uint128_t r=*A; r*=*B;
	#if(WYHASH_CONDOM>1)
	*A^=(uint64_t)r; *B^=(uint64_t)(r>>64);
	#else
	*A=(uint64_t)r; *B=(uint64_t)(r>>64);
	#endif
#elif defined(_MSC_VER) && defined(_M_X64)
	#if(WYHASH_CONDOM>1)
	uint64_t  a,  b;
	a=_umul128(*A,*B,&b);
	*A^=a;  *B^=b;
	#else
	*A=_umul128(*A,*B,B);
	#endif
#else
	uint64_t ha=*A>>32, hb=*B>>32, la=(uint32_t)*A, lb=(uint32_t)*B, hi, lo;
	uint64_t rh=ha*hb, rm0=ha*lb, rm1=hb*la, rl=la*lb, t=rl+(rm0<<32), c=t<rl;
	lo=t+(rm1<<32); c+=lo<t; hi=rh+(rm0>>32)+(rm1>>32)+c;
	#if(WYHASH_CONDOM>1)
	*A^=lo;  *B^=hi;
	#else
	*A=lo;  *B=hi;
	#endif
#endif
}

// multiply and xor mix function, aka MUM
static inline uint64_t _wymix(uint64_t A, uint64_t B){ _wymum(&A,&B); return A^B; }

// endian macros
#ifndef WYHASH_LITTLE_ENDIAN
	#ifdef TARGET_ORDER_IS_LITTLE
		#define WYHASH_LITTLE_ENDIAN 1
	#else
		#define WYHASH_LITTLE_ENDIAN 0
	#endif
#endif

// read functions
#if (WYHASH_LITTLE_ENDIAN)
	static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return v;}
	static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v;}
#elif !defined(__TINYC__) && (defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__clang__))
	static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return __builtin_bswap64(v);}
	static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return __builtin_bswap32(v);}
#elif defined(_MSC_VER)
	static inline uint64_t _wyr8(const uint8_t *p) { uint64_t v; memcpy(&v, p, 8); return _byteswap_uint64(v);}
	static inline uint64_t _wyr4(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return _byteswap_ulong(v);}
#else
	static inline uint64_t _wyr8(const uint8_t *p) {
		uint64_t v; memcpy(&v, p, 8);
		return (((v >> 56) & 0xff)| ((v >> 40) & 0xff00)| ((v >> 24) & 0xff0000)| ((v >>  8) & 0xff000000)| ((v <<  8) & 0xff00000000)| ((v << 24) & 0xff0000000000)| ((v << 40) & 0xff000000000000)| ((v << 56) & 0xff00000000000000));
	}
	static inline uint64_t _wyr4(const uint8_t *p) {
		uint32_t v; memcpy(&v, p, 4);
		return (((v >> 24) & 0xff)| ((v >>  8) & 0xff00)| ((v <<  8) & 0xff0000)| ((v << 24) & 0xff000000));
	}
#endif
static inline uint64_t _wyr3(const uint8_t *p, size_t k) { return (((uint64_t)p[0])<<16)|(((uint64_t)p[k>>1])<<8)|p[k-1];}
// wyhash main function
static inline uint64_t wyhash(const void *key, size_t len, uint64_t seed, const uint64_t *secret){
	const uint8_t *p=(const uint8_t *)key; seed^=*secret;	uint64_t a, b;
	if (_likely_(len<=16)) {
		if (_likely_(len>=4)) { a=(_wyr4(p)<<32)|_wyr4(p+((len>>3)<<2)); b=(_wyr4(p+len-4)<<32)|_wyr4(p+len-4-((len>>3)<<2)); }
		else if (_likely_(len>0)) { a=_wyr3(p,len); b=0; }
		else a=b=0;
	} else {
		size_t i=len;
		if (_unlikely_(i>48)) {
			uint64_t see1=seed, see2=seed;
			do {
				seed=_wymix(_wyr8(p)^secret[1],_wyr8(p+8)^seed);
				see1=_wymix(_wyr8(p+16)^secret[2],_wyr8(p+24)^see1);
				see2=_wymix(_wyr8(p+32)^secret[3],_wyr8(p+40)^see2);
				p+=48; i-=48;
			} while(_likely_(i>48));
			seed^=see1^see2;
		}
		while(_unlikely_(i>16)) { seed=_wymix(_wyr8(p)^secret[1],_wyr8(p+8)^seed);  i-=16; p+=16; }
		a=_wyr8(p+i-16);  b=_wyr8(p+i-8);
	}
	return _wymix(secret[1]^len,_wymix(a^secret[1],b^seed));
}
// the default secret parameters
static const uint64_t _wyp[4] = {0xa0761d6478bd642f, 0xe7037ed1a0b428db, 0x8ebc6af09c88c6e3, 0x589965cc75374cc3};

// a useful 64bit-64bit mix function to produce deterministic pseudo random numbers that can pass BigCrush and PractRand
static inline uint64_t wyhash64(uint64_t A, uint64_t B){ A^=0xa0761d6478bd642f; B^=0xe7037ed1a0b428db; _wymum(&A,&B); return _wymix(A^0xa0761d6478bd642f,B^0xe7037ed1a0b428db);}

// the wyrand PRNG that pass BigCrush and PractRand
static inline uint64_t wyrand(uint64_t *seed){ *seed+=0xa0761d6478bd642f; return _wymix(*seed,*seed^0xe7037ed1a0b428db);}

#ifndef __vinix__
// convert any 64 bit pseudo random numbers to uniform distribution [0,1). It can be combined with wyrand, wyhash64 or wyhash.
static inline double wy2u01(uint64_t r){ const double _wynorm=1.0/(1ull<<52); return (r>>12)*_wynorm;}

// convert any 64 bit pseudo random numbers to APPROXIMATE Gaussian distribution. It can be combined with wyrand, wyhash64 or wyhash.
static inline double wy2gau(uint64_t r){ const double _wynorm=1.0/(1ull<<20); return ((r&0x1fffff)+((r>>21)&0x1fffff)+((r>>42)&0x1fffff))*_wynorm-3.0;}
#endif

#if(!WYHASH_32BIT_MUM)
// fast range integer random number generation on [0,k) credit to Daniel Lemire. May not work when WYHASH_32BIT_MUM=1. It can be combined with wyrand, wyhash64 or wyhash.
static inline uint64_t wy2u0k(uint64_t r, uint64_t k){ _wymum(&r,&k); return k; }
#endif
#endif

#define _IN_MAP(val, m) map_exists(m, val)



// V includes:

#if defined(__TINYC__) && defined(__has_include)
// tcc does not support has_include properly yet, turn it off completely
#undef __has_include
#endif

// added by module `builtin`, file: builtin_d_gcboehm.c.v:125:

#if defined(__has_include)

#if __has_include(<gc.h>)
#include <gc.h>
#else
#error VERROR_MESSAGE Header file <gc.h>, needed for module `builtin` was not found. Please install the corresponding development headers.
#endif

#else
#include <gc.h>
#endif


// added by module `builtin`, file: float.c.v:10:

#if defined(__has_include)

#if __has_include(<float.h>)
#include <float.h>
#else
#error VERROR_MESSAGE Header file <float.h>, needed for module `builtin` was not found. Please install the corresponding development headers.
#endif

#else
#include <float.h>
#endif


// added by module `json`, file: json_primitives.c.v:8:

#if defined(__has_include)

#if __has_include("cJSON.h")
#include "cJSON.h"
#else
#error VERROR_MESSAGE Header file "cJSON.h", needed for module `json` was not found. Please install the corresponding development headers.
#endif

#else
#include "cJSON.h"
#endif

// defined by module `json`
#define js_get(object, key) cJSON_GetObjectItemCaseSensitive((object), (key))

// added by module `time`, file: time.c.v:6:

#if defined(__has_include)

#if __has_include(<time.h>)
#include <time.h>
#else
#error VERROR_MESSAGE Header file <time.h>, needed for module `time` was not found. Please install the corresponding development headers.
#endif

#else
#include <time.h>
#endif


// added by module `time`, file: time_windows.c.v:6:

#if defined(__has_include)

#if __has_include(<time.h>)
#include <time.h>
#else
#error VERROR_MESSAGE Header file <time.h>, needed for module `time` was not found. Please install the corresponding development headers.
#endif

#else
#include <time.h>
#endif

// inserted by module `sync.stdatomic`, file: 1.declarations.c.v:8:
/*
     * This file is part of FFmpeg.
     *
     * FFmpeg is free software; you can redistribute it and/or
     * modify it under the terms of the GNU Lesser General Public
     * License as published by the Free Software Foundation; either
     * version 2.1 of the License, or (at your option) any later version.
     *
     * FFmpeg is distributed in the hope that it will be useful,
     * but WITHOUT ANY WARRANTY; without even the implied warranty of
     * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
     * Lesser General Public License for more details.
     *
     * You should have received a copy of the GNU Lesser General Public
     * License along with FFmpeg; if not, write to the Free Software
     * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
     */

#ifndef COMPAT_ATOMICS_WIN32_STDATOMIC_H
#define COMPAT_ATOMICS_WIN32_STDATOMIC_H

#define WIN32_LEAN_AND_MEAN
#include <stddef.h>
#include <stdint.h>
#include <windows.h>

#ifdef _MSC_VER
#define cpu_relax() _mm_pause()
#else
#define cpu_relax() __asm__ __volatile__ ("pause")
#endif

#define ATOMIC_FLAG_INIT 0

#define ATOMIC_VAR_INIT(value) (value)

#define atomic_init(obj, value) \
    do                          \
    {                           \
        *(obj) = (value);       \
    } while (0)

#define kill_dependency(y) ((void)0)

// memory order policies - we use "sequentially consistent" by default

#define memory_order_relaxed 0
#define memory_order_consume 1
#define memory_order_acquire 2
#define memory_order_release 3
#define memory_order_acq_rel 4
#define memory_order_seq_cst 5

#ifdef _MSC_VER
#define atomic_thread_fence(order) \
    do { \
        switch (order) { \
            case memory_order_release: \
                _WriteBarrier(); \
                _ReadWriteBarrier(); \
                break; \
            case memory_order_acquire: \
                _ReadBarrier(); \
                _ReadWriteBarrier(); \
                break; \
            case memory_order_acq_rel: \
                _ReadBarrier(); \
                _WriteBarrier(); \
                _ReadWriteBarrier(); \
                break; \
            case memory_order_seq_cst: \
                MemoryBarrier(); \
                break; \
            default: /* relaxed, consume */ \
                break; \
        } \
    } while (0)
#else
#define atomic_thread_fence(order) do { \
    switch (order) { \
        case memory_order_relaxed: \
            break; \
        case memory_order_acquire: \
        case memory_order_consume: \
        case memory_order_release: \
        case memory_order_acq_rel: \
            __asm__ __volatile__ ("" : : : "memory"); \
            break; \
        case memory_order_seq_cst: \
            __asm__ __volatile__ ("mfence" : : : "memory"); \
            break; \
        default: \
            __asm__ __volatile__ ("mfence" : : : "memory"); \
            break; \
    } \
} while (0)
#endif

#define atomic_signal_fence(order) \
    ((void)0)

#define atomic_is_lock_free(obj) 0

typedef intptr_t atomic_flag;
typedef _Atomic bool                    atomic_bool;
typedef _Atomic char                    atomic_char;
typedef _Atomic signed char             atomic_schar;
typedef _Atomic unsigned char           atomic_uchar;
typedef _Atomic short                   atomic_short;
typedef _Atomic unsigned short          atomic_ushort;
typedef _Atomic int                     atomic_int;
typedef _Atomic unsigned int            atomic_uint;
typedef _Atomic long                    atomic_long;
typedef _Atomic unsigned long           atomic_ulong;
typedef _Atomic long long               atomic_llong;
typedef _Atomic unsigned long long      atomic_ullong;
typedef intptr_t atomic_wchar_t;
typedef intptr_t atomic_int_least8_t;
typedef intptr_t atomic_uint_least8_t;
typedef intptr_t atomic_int_least16_t;
typedef intptr_t atomic_uint_least16_t;
typedef intptr_t atomic_int_least32_t;
typedef intptr_t atomic_uint_least32_t;
typedef intptr_t atomic_int_least64_t;
typedef intptr_t atomic_uint_least64_t;
typedef intptr_t atomic_int_fast8_t;
typedef intptr_t atomic_uint_fast8_t;
typedef intptr_t atomic_int_fast16_t;
typedef intptr_t atomic_uint_fast16_t;
typedef intptr_t atomic_int_fast32_t;
typedef intptr_t atomic_uint_fast32_t;
typedef intptr_t atomic_int_fast64_t;
typedef intptr_t atomic_uint_fast64_t;
typedef _Atomic intptr_t                atomic_intptr_t;
typedef _Atomic uintptr_t               atomic_uintptr_t;
typedef _Atomic size_t                  atomic_size_t;
typedef intptr_t atomic_ptrdiff_t;
typedef intptr_t atomic_intmax_t;
typedef intptr_t atomic_uintmax_t;

#ifdef __TINYC__
/*
    For TCC it is missing the x64 version of _InterlockedExchangeAdd64 so we
    fake it (works the same) with InterlockedCompareExchange64 until it
    succeeds
*/

__CRT_INLINE LONGLONG _InterlockedExchangeAdd64(LONGLONG volatile *Addend, LONGLONG Value)
{
    LONGLONG Old;
    do
    {
        Old = *Addend;
    } while (InterlockedCompareExchange64(Addend, Old + Value, Old) != Old);
    return Old;
}

__CRT_INLINE LONG _InterlockedExchangeAdd(LONG volatile *Addend, LONG Value)
{
    LONG Old;
    do
    {
        Old = *Addend;
    } while (InterlockedCompareExchange(Addend, Old + Value, Old) != Old);
    return Old;
}

#define InterlockedIncrement64 _InterlockedExchangeAdd64

#endif

#define atomic_store(object, desired) \
    do                                \
    {                                 \
        MemoryBarrier();              \
        *(object) = (desired);        \
        MemoryBarrier();              \
    } while (0)

#define atomic_store_explicit(object, desired, order) \
    atomic_store(object, desired)

#define atomic_load(object) \
    (MemoryBarrier(), *(object))

#define atomic_load_explicit(object, order) \
    atomic_load(object)

#define atomic_exchange(object, desired) \
    InterlockedExchangePointer(object, desired)

#define atomic_exchange_explicit(object, desired, order) \
    atomic_exchange(object, desired)

static inline int atomic_compare_exchange_strong(intptr_t volatile *object, intptr_t volatile *expected,
                                                 intptr_t desired)
{
    intptr_t old = *expected;
    *expected = (intptr_t)InterlockedCompareExchangePointer(
        (PVOID *)object, (PVOID)desired, (PVOID)old);
    return *expected == old;
}

#define atomic_compare_exchange_strong_explicit(object, expected, desired, success, failure) \
    atomic_compare_exchange_strong(object, expected, desired)

#define atomic_compare_exchange_weak(object, expected, desired) \
    atomic_compare_exchange_strong(object, expected, desired)

#define atomic_compare_exchange_weak_explicit(object, expected, desired, success, failure) \
    atomic_compare_exchange_weak(object, expected, desired)

#ifdef _WIN64

#define atomic_fetch_add(object, operand) \
    InterlockedExchangeAdd64(object, operand)

#define atomic_fetch_sub(object, operand) \
    InterlockedExchangeAdd64(object, -(operand))

#define atomic_fetch_or(object, operand) \
    InterlockedOr64(object, operand)

#define atomic_fetch_xor(object, operand) \
    InterlockedXor64(object, operand)

#define atomic_fetch_and(object, operand) \
    InterlockedAnd64(object, operand)
#else
#define atomic_fetch_add(object, operand) \
    InterlockedExchangeAdd(object, operand)

#define atomic_fetch_sub(object, operand) \
    InterlockedExchangeAdd(object, -(operand))

#define atomic_fetch_or(object, operand) \
    InterlockedOr(object, operand)

#define atomic_fetch_xor(object, operand) \
    InterlockedXor(object, operand)

#define atomic_fetch_and(object, operand) \
    InterlockedAnd(object, operand)
#endif /* _WIN64 */

/* specialized versions with explicit object size */

#define atomic_load_ptr atomic_load
#define atomic_store_ptr atomic_store
#define atomic_compare_exchange_weak_ptr atomic_compare_exchange_weak
#define atomic_compare_exchange_strong_ptr atomic_compare_exchange_strong
#define atomic_exchange_ptr atomic_exchange
#define atomic_fetch_add_ptr atomic_fetch_add
#define atomic_fetch_sub_ptr atomic_fetch_sub
#define atomic_fetch_and_ptr atomic_fetch_and
#define atomic_fetch_or_ptr atomic_fetch_or
#define atomic_fetch_xor_ptr atomic_fetch_xor

static inline void atomic_store_u64(unsigned long long volatile * object, unsigned long long desired) {
    do {
        MemoryBarrier();
        *(object) = (desired);
        MemoryBarrier();
    } while (0);
}

static inline unsigned long long atomic_load_u64(unsigned long long volatile * object) {
    return (MemoryBarrier(), *(object));
}

#define atomic_exchange_u64(object, desired) \
    InterlockedExchange64(object, desired)

static inline int atomic_compare_exchange_strong_u64(unsigned long long volatile * object, unsigned long long volatile * expected,
                                                 unsigned long long desired)
{
	unsigned long long old = *expected;
    *expected = InterlockedCompareExchange64(object, desired, old);
    return *expected == old;
}

#define atomic_compare_exchange_weak_u64(object, expected, desired) \
    atomic_compare_exchange_strong_u64(object, expected, desired)

#define atomic_fetch_add_u64(object, operand) \
    InterlockedExchangeAdd64(object, operand)

#define atomic_fetch_sub_u64(object, operand) \
    InterlockedExchangeAdd64(object, -(operand))

#define atomic_fetch_or_u64(object, operand) \
    InterlockedOr64(object, operand)

#define atomic_fetch_xor_u64(object, operand) \
    InterlockedXor64(object, operand)

#define atomic_fetch_and_u64(object, operand) \
    InterlockedAnd64(object, operand)



static inline void atomic_store_u32(unsigned volatile * object, unsigned desired) {
    do {
        MemoryBarrier();
        *(object) = (desired);
        MemoryBarrier();
    } while (0);
}

static inline unsigned atomic_load_u32(unsigned volatile * object) {
    return (MemoryBarrier(), *(object));
}

#define atomic_exchange_u32(object, desired) \
    InterlockedExchange(object, desired)

static inline int atomic_compare_exchange_strong_u32(unsigned volatile * object, unsigned volatile * expected,
                                                 unsigned desired)
{
	unsigned old = *expected;
    *expected = InterlockedCompareExchange((void *)object, desired, old);
    return *expected == old;
}

#define atomic_compare_exchange_weak_u32(object, expected, desired) \
    atomic_compare_exchange_strong_u32(object, expected, desired)

#define atomic_fetch_add_u32(object, operand) \
    InterlockedExchangeAdd(object, operand)

#define atomic_fetch_sub_u32(object, operand) \
    InterlockedExchangeAdd(object, -(operand))

#define atomic_fetch_or_u32(object, operand) \
    InterlockedOr(object, operand)

#define atomic_fetch_xor_u32(object, operand) \
    InterlockedXor(object, operand)

#define atomic_fetch_and_u32(object, operand) \
    InterlockedAnd(object, operand)

#ifdef _MSC_VER

#define InterlockedExchangeAdd16 _InterlockedExchangeAdd16

#else

#define InterlockedExchange16 ManualInterlockedExchange16
#define InterlockedExchangeAdd16 ManualInterlockedExchangeAdd16

static inline uint16_t ManualInterlockedExchange16(volatile uint16_t* object, uint16_t desired) {
    __asm__ __volatile__ (
        "xchgw %0, %1"
        : "+r" (desired),
          "+m" (*object)
        :
        : "memory"
    );
    return desired;
}

static inline unsigned short ManualInterlockedExchangeAdd16(unsigned short volatile* Addend, unsigned short Value) {
    __asm__ __volatile__ (
        "lock xaddw %w[value], %[mem]"
        : [mem] "+m" (*Addend), [value] "+r" (Value)
        : : "memory"
    );
    return Value;
}
#endif

static inline void atomic_store_u16(unsigned short volatile * object, unsigned short desired) {
    do {
        MemoryBarrier();
        *(object) = (desired);
        MemoryBarrier();
    } while (0);
}

static inline unsigned short atomic_load_u16(unsigned short volatile * object) {
    return (MemoryBarrier(), *(object));
}

#define atomic_exchange_u16(object, desired) \
    InterlockedExchange16(object, desired)

static inline int atomic_compare_exchange_strong_u16(unsigned short volatile * object, unsigned short volatile * expected,
                                                 unsigned short desired)
{
	unsigned short old = *expected;
    *expected = InterlockedCompareExchange16(object, desired, old);
    return *expected == old;
}

#define atomic_compare_exchange_weak_u16(object, expected, desired) \
    atomic_compare_exchange_strong_u16((void*)object, expected, desired)

#define atomic_fetch_add_u16(object, operand) \
    InterlockedExchangeAdd16(object, operand)

#define atomic_fetch_sub_u16(object, operand) \
    InterlockedExchangeAdd16(object, -(operand))

#define atomic_fetch_or_u16(object, operand) \
    InterlockedOr16(object, operand)

#define atomic_fetch_xor_u16(object, operand) \
    InterlockedXor16(object, operand)

#define atomic_fetch_and_u16(object, operand) \
    InterlockedAnd16(object, operand)


#define atomic_fetch_add_explicit(object, operand, order) \
    atomic_fetch_add(object, operand)

#define atomic_fetch_sub_explicit(object, operand, order) \
    atomic_fetch_sub(object, operand)

#define atomic_fetch_or_explicit(object, operand, order) \
    atomic_fetch_or(object, operand)

#define atomic_fetch_xor_explicit(object, operand, order) \
    atomic_fetch_xor(object, operand)

#define atomic_fetch_and_explicit(object, operand, order) \
    atomic_fetch_and(object, operand)

#define atomic_flag_test_and_set(object) \
    atomic_exchange(object, 1)

#define atomic_flag_test_and_set_explicit(object, order) \
    atomic_flag_test_and_set(object)

#define atomic_flag_clear(object) \
    atomic_store(object, 0)

#define atomic_flag_clear_explicit(object, order) \
    atomic_flag_clear(object)

#ifdef _MSC_VER

#define InterlockedCompareExchange8 _InterlockedCompareExchange8
#define InterlockedExchangeAdd8 _InterlockedExchangeAdd8
#define InterlockedOr8 _InterlockedOr8
#define InterlockedXor8 _InterlockedXor8
#define InterlockedAnd8 _InterlockedAnd8

#else

#define InterlockedExchange8 ManualInterlockedExchange8
#define InterlockedCompareExchange8 ManualInterlockedCompareExchange8
#define InterlockedExchangeAdd8 ManualInterlockedExchangeAdd8
#define InterlockedOr8 ManualInterlockedOr8
#define InterlockedXor8 ManualInterlockedXor8
#define InterlockedAnd8 ManualInterlockedAnd8

static inline char ManualInterlockedExchange8(char volatile* object, char desired) {
    __asm__ __volatile__ (
        "xchgb %0, %1"
        : "+q" (desired), "+m" (*object)
        :
        : "memory"
    );
    return desired;
}

static inline unsigned char ManualInterlockedCompareExchange8(unsigned char volatile * dest, unsigned char exchange, unsigned char comparand) {
   unsigned char result;

    __asm__ volatile (
      "lock cmpxchgb %[exchange], %[dest]"
      : "=a" (result), [dest] "+m" (*dest)
      : [exchange] "q" (exchange), "a" (comparand)
      : "memory"
    );

    return result;
}

static inline unsigned char ManualInterlockedExchangeAdd8(unsigned char volatile * dest, unsigned char value) {
    unsigned char oldValue;
    unsigned char newValue;
    do {
        oldValue = *dest;
    } while (ManualInterlockedCompareExchange8(dest, oldValue + value, oldValue) != oldValue);
    return oldValue;
}

static inline unsigned char ManualInterlockedOr8(unsigned char volatile * dest, unsigned char value) {
    unsigned char oldValue;
    do {
        oldValue = *dest;
    } while (ManualInterlockedCompareExchange8(dest, oldValue | value, oldValue) != oldValue);
    return oldValue;
}

static inline unsigned char ManualInterlockedXor8(unsigned char volatile * dest, unsigned char value) {
    unsigned char oldValue;
    do {
        oldValue = *dest;
    } while (ManualInterlockedCompareExchange8(dest, oldValue ^ value, oldValue) != oldValue);
    return oldValue;
}

static inline unsigned char ManualInterlockedAnd8(unsigned char volatile * dest, unsigned char value) {
    unsigned char oldValue;
    do {
        oldValue = *dest;
    } while (ManualInterlockedCompareExchange8(dest, oldValue & value, oldValue) != oldValue);
    return oldValue;
}
#endif

static inline void atomic_store_byte(unsigned char volatile * object, unsigned char desired) {
    do {
        MemoryBarrier();
        *(object) = (desired);
        MemoryBarrier();
    } while (0);
}

static inline unsigned char atomic_load_byte(unsigned char volatile * object) {
    return (MemoryBarrier(), *(object));
}

#define atomic_exchange_byte(object, desired) \
    InterlockedExchange8(object, desired)

static inline int atomic_compare_exchange_strong_byte(unsigned char volatile * object, unsigned char volatile * expected,
                                                 unsigned char desired)
{
	unsigned char old = *expected;
    *expected = InterlockedCompareExchange8(object, desired, old);
    return *expected == old;
}

#define atomic_compare_exchange_weak_byte(object, expected, desired) \
    atomic_compare_exchange_strong_byte(object, expected, desired)

#define atomic_fetch_add_byte(object, operand) \
    InterlockedExchangeAdd8(object, operand)

#define atomic_fetch_sub_byte(object, operand) \
    InterlockedExchangeAdd8(object, -(operand))

#define atomic_fetch_or_byte(object, operand) \
    InterlockedOr8(object, operand)

#define atomic_fetch_xor_byte(object, operand) \
    InterlockedXor8(object, operand)

#define atomic_fetch_and_byte(object, operand) \
    InterlockedAnd8(object, operand)

#endif /* COMPAT_ATOMICS_WIN32_STDATOMIC_H */


// added by module `os`, file: fd.c.v:10:

#if defined(__has_include)

#if __has_include(<winsock2.h>)
#include <winsock2.h>
#else
#error VERROR_MESSAGE Header file <winsock2.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <winsock2.h>
#endif


// added by module `os`, file: os.c.v:5:

#if defined(__has_include)

#if __has_include(<sys/stat.h>)
#include <sys/stat.h>
#else
#error VERROR_MESSAGE Header file <sys/stat.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/stat.h>
#endif


// added by module `os`, file: os.c.v:6:
#include <errno.h>

// added by module `os`, file: os_windows.c.v:6:

#if defined(__has_include)

#if __has_include(<process.h>)
#include <process.h>
#else
#error VERROR_MESSAGE Header file <process.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <process.h>
#endif


// added by module `os`, file: os_windows.c.v:7:

#if defined(__has_include)

#if __has_include(<sys/utime.h>)
#include <sys/utime.h>
#else
#error VERROR_MESSAGE Header file <sys/utime.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <sys/utime.h>
#endif


// added by module `os`, file: password_windows.c.v:3:

#if defined(__has_include)

#if __has_include(<windows.h>)
#include <windows.h>
#else
#error VERROR_MESSAGE Header file <windows.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <windows.h>
#endif


// added by module `os`, file: signal.c.v:3:

#if defined(__has_include)

#if __has_include(<signal.h>)
#include <signal.h>
#else
#error VERROR_MESSAGE Header file <signal.h>, needed for module `os` was not found. Please install the corresponding development headers.
#endif

#else
#include <signal.h>
#endif


// added by module `runtime`, file: used_memory_windows.c.v:4:

#if defined(__has_include)

#if __has_include(<psapi.h>)
#include <psapi.h>
#else
#error VERROR_MESSAGE Header file <psapi.h>, needed for module `runtime` was not found. Please install the corresponding development headers.
#endif

#else
#include <psapi.h>
#endif


// added by module `sync`, file: sync_windows.c.v:8:

#if defined(__has_include)

#if __has_include(<synchapi.h>)
#include <synchapi.h>
#else
#error VERROR_MESSAGE Header file <synchapi.h>, needed for module `sync` was not found. Please install the corresponding development headers.
#endif

#else
#include <synchapi.h>
#endif


// added by module `sync`, file: sync_windows.c.v:9:

#if defined(__has_include)

#if __has_include(<time.h>)
#include <time.h>
#else
#error VERROR_MESSAGE Header file <time.h>, needed for module `sync` was not found. Please install the corresponding development headers.
#endif

#else
#include <time.h>
#endif


// added by module `net`, file: aasocket.c.v:6:

#if defined(__has_include)

#if __has_include("D:\Apps\v/vlib/net/ipv6_v6only.h")
#include "D:\Apps\v/vlib/net/ipv6_v6only.h"
#else
#error VERROR_MESSAGE Header file "D:\Apps\v/vlib/net/ipv6_v6only.h", needed for module `net` was not found. Please install the corresponding development headers.
#endif

#else
#include "D:\Apps\v/vlib/net/ipv6_v6only.h"
#endif


// added by module `net`, file: aasocket.c.v:16:

#if defined(__has_include)

#if __has_include("D:\Apps\v/vlib/net/afunix.h")
#include "D:\Apps\v/vlib/net/afunix.h"
#else
#error VERROR_MESSAGE Header file "D:\Apps\v/vlib/net/afunix.h", needed for module `net` was not found. Please install the corresponding development headers.
#endif

#else
#include "D:\Apps\v/vlib/net/afunix.h"
#endif


// added by module `net`, file: net_windows.c.v:7:

#if defined(__has_include)

#if __has_include(<winsock2.h>)
#include <winsock2.h>
#else
#error VERROR_MESSAGE Header file <winsock2.h>, needed for module `net` was not found. Please install the corresponding development headers.
#endif

#else
#include <winsock2.h>
#endif


// added by module `net`, file: net_windows.c.v:8:

#if defined(__has_include)

#if __has_include(<ws2tcpip.h>)
#include <ws2tcpip.h>
#else
#error VERROR_MESSAGE Header file <ws2tcpip.h>, needed for module `net` was not found. Please install the corresponding development headers.
#endif

#else
#include <ws2tcpip.h>
#endif


// added by module `net.mbedtls`, file: mbedtls.c.v:127:

#if defined(__has_include)

#if __has_include(<mbedtls/net_sockets.h>)
#include <mbedtls/net_sockets.h>
#else
#error VERROR_MESSAGE Header file <mbedtls/net_sockets.h>, needed for module `net.mbedtls` was not found. Please install the corresponding development headers.
#endif

#else
#include <mbedtls/net_sockets.h>
#endif


// added by module `net.mbedtls`, file: mbedtls.c.v:128:

#if defined(__has_include)

#if __has_include(<mbedtls/ssl.h>)
#include <mbedtls/ssl.h>
#else
#error VERROR_MESSAGE Header file <mbedtls/ssl.h>, needed for module `net.mbedtls` was not found. Please install the corresponding development headers.
#endif

#else
#include <mbedtls/ssl.h>
#endif


// added by module `net.mbedtls`, file: mbedtls.c.v:129:

#if defined(__has_include)

#if __has_include(<mbedtls/entropy.h>)
#include <mbedtls/entropy.h>
#else
#error VERROR_MESSAGE Header file <mbedtls/entropy.h>, needed for module `net.mbedtls` was not found. Please install the corresponding development headers.
#endif

#else
#include <mbedtls/entropy.h>
#endif


// added by module `net.mbedtls`, file: mbedtls.c.v:130:

#if defined(__has_include)

#if __has_include(<mbedtls/ctr_drbg.h>)
#include <mbedtls/ctr_drbg.h>
#else
#error VERROR_MESSAGE Header file <mbedtls/ctr_drbg.h>, needed for module `net.mbedtls` was not found. Please install the corresponding development headers.
#endif

#else
#include <mbedtls/ctr_drbg.h>
#endif


// added by module `net.mbedtls`, file: mbedtls.c.v:131:

#if defined(__has_include)

#if __has_include(<mbedtls/error.h>)
#include <mbedtls/error.h>
#else
#error VERROR_MESSAGE Header file <mbedtls/error.h>, needed for module `net.mbedtls` was not found. Please install the corresponding development headers.
#endif

#else
#include <mbedtls/error.h>
#endif

// defined by module `net.http`
#define VSCHANNEL_REALLOC GC_REALLOC

// added by module `net.http`, file: backend_vschannel_windows.c.v:12:

#if defined(__has_include)

#if __has_include("vschannel.c")
#include "vschannel.c"
#else
#error VERROR_MESSAGE Header file "vschannel.c", needed for module `net.http` was not found. Please install the corresponding development headers.
#endif

#else
#include "vschannel.c"
#endif


// added by module `net.http`, file: download_windows.c.v:9:

#if defined(__has_include)

#if __has_include(<urlmon.h>)
#include <urlmon.h>
#else
#error VERROR_MESSAGE Header file <urlmon.h>, needed for module `net.http` was not found. Please install the corresponding development headers.
#endif

#else
#include <urlmon.h>
#endif


// V global/const #define ... :
#define _const_strconv__int_size 32
#define _const_strconv__max_size_f64_char 512
#define _const_std_output_handle -11
#define _const_std_error_handle -12
#define _const_enable_processed_output 1
#define _const_enable_wrap_at_eol_output 2
#define _const_evable_virtual_terminal_processing 4
#define _const_max_int 2147483647
#define _const_hashbits 24
#define _const_max_cached_hashbits 16
#define _const_init_log_capicity 5
#define _const_init_capicity 32
#define _const_init_even_index 30
#define _const_extra_metas_inc 4
#define _const_rune_maps_columns_in_row 4
#define _const_rune_maps_ul -3
#define _const_rune_maps_utl -2
#define _const_replace_stack_buffer_size 10
#define _const_kmp_stack_buffer_size 20
#define _const_cp_utf8 65001
#define _const_time__seconds_per_minute 60
#define _const_time__seconds_per_hour 3600
#define _const_time__seconds_per_day 86400
#define _const_os__max_path_buffer_size 8192
#define _const_os__fslash '/'
#define _const_os__bslash '\\'
#define _const_os__dot '.'
#define _const_os__buf_size 4096
#define _const_os__error_code_not_set -1
#define _const_os__max_path_len 4096
#define _const_os__f_ok 0
#define _const_os__x_ok 1
#define _const_os__max_error_code 15841
#define _const_sync__spinloops 750
#define _const_sync__spinloops_sem 4000
#define _const_net__max_ip_len 24
#define _const_net__max_ip6_len 46
#define _const_net__max_unix_path 108
#define _const_net__msg_nosignal 0
#define _const_net__msg_dontwait 0
#define _const_net__error_ewouldblock 10035
#define _const_net__error_eagain 10035
#define _const_net__wsa_v22 514
#define _const_net__http__default_server_port 9009

// Enum definitions:

typedef enum {
	strconv__ParserState__ok, // 
	strconv__ParserState__pzero, // +1
	strconv__ParserState__mzero, // +2
	strconv__ParserState__pinf, // +3
	strconv__ParserState__minf, // +4
	strconv__ParserState__invalid_number, // +5
	strconv__ParserState__extra_char, // +6
}  strconv__ParserState;

typedef enum {
	strconv__Align_text__right = 0, // 0
	strconv__Align_text__left, // 0+1
	strconv__Align_text__center, // 0+2
}  strconv__Align_text;

typedef enum {
	strconv__Char_parse_state__start, // 
	strconv__Char_parse_state__norm_char, // +1
	strconv__Char_parse_state__field_char, // +2
	strconv__Char_parse_state__pad_ch, // +3
	strconv__Char_parse_state__len_set_start, // +4
	strconv__Char_parse_state__len_set_in, // +5
	strconv__Char_parse_state__check_type, // +6
	strconv__Char_parse_state__check_float, // +7
	strconv__Char_parse_state__check_float_in, // +8
	strconv__Char_parse_state__reset_params, // +9
}  strconv__Char_parse_state;

typedef enum {
	ArrayFlags__noslices = 1U, // u64(1) << 0
	ArrayFlags__noshrink = 2U, // u64(1) << 1
	ArrayFlags__nogrow = 4U, // u64(1) << 2
	ArrayFlags__nofree = 8U, // u64(1) << 3
}  ArrayFlags;

typedef enum {
	AttributeKind__plain, // 
	AttributeKind__string, // +1
	AttributeKind__number, // +2
	AttributeKind__bool, // +3
	AttributeKind__comptime_define, // +4
}  AttributeKind;

typedef enum {
	ChanState__success, // 
	ChanState__not_ready, // +1
	ChanState__closed, // +2
}  ChanState;

typedef enum {
	MapMode__to_upper, // 
	MapMode__to_lower, // +1
	MapMode__to_title, // +2
}  MapMode;

typedef enum {
	TrimMode__trim_left, // 
	TrimMode__trim_right, // +1
	TrimMode__trim_both, // +2
}  TrimMode;

typedef enum {
	StrIntpType__si_no_str = 0, // 0
	StrIntpType__si_c, // 0+1
	StrIntpType__si_u8, // 0+2
	StrIntpType__si_i8, // 0+3
	StrIntpType__si_u16, // 0+4
	StrIntpType__si_i16, // 0+5
	StrIntpType__si_u32, // 0+6
	StrIntpType__si_i32, // 0+7
	StrIntpType__si_u64, // 0+8
	StrIntpType__si_i64, // 0+9
	StrIntpType__si_e32, // 0+10
	StrIntpType__si_e64, // 0+11
	StrIntpType__si_f32, // 0+12
	StrIntpType__si_f64, // 0+13
	StrIntpType__si_g32, // 0+14
	StrIntpType__si_g64, // 0+15
	StrIntpType__si_s, // 0+16
	StrIntpType__si_p, // 0+17
	StrIntpType__si_r, // 0+18
	StrIntpType__si_vp, // 0+19
}  StrIntpType;

typedef enum {
	time__FormatTime__hhmm12, // 
	time__FormatTime__hhmm24, // +1
	time__FormatTime__hhmmss12, // +2
	time__FormatTime__hhmmss24, // +3
	time__FormatTime__hhmmss24_milli, // +4
	time__FormatTime__hhmmss24_micro, // +5
	time__FormatTime__hhmmss24_nano, // +6
	time__FormatTime__no_time, // +7
}  time__FormatTime;

typedef enum {
	time__FormatDate__ddmmyy, // 
	time__FormatDate__ddmmyyyy, // +1
	time__FormatDate__mmddyy, // +2
	time__FormatDate__mmddyyyy, // +3
	time__FormatDate__mmmd, // +4
	time__FormatDate__mmmdd, // +5
	time__FormatDate__mmmddyy, // +6
	time__FormatDate__mmmddyyyy, // +7
	time__FormatDate__no_date, // +8
	time__FormatDate__yyyymmdd, // +9
	time__FormatDate__yymmdd, // +10
}  time__FormatDate;

typedef enum {
	time__FormatDelimiter__dot, // 
	time__FormatDelimiter__hyphen, // +1
	time__FormatDelimiter__slash, // +2
	time__FormatDelimiter__space, // +3
	time__FormatDelimiter__no_delimiter, // +4
}  time__FormatDelimiter;

typedef enum {
	net__urllib__EncodingMode__encode_path, // 
	net__urllib__EncodingMode__encode_path_segment, // +1
	net__urllib__EncodingMode__encode_host, // +2
	net__urllib__EncodingMode__encode_zone, // +3
	net__urllib__EncodingMode__encode_user_password, // +4
	net__urllib__EncodingMode__encode_query_component, // +5
	net__urllib__EncodingMode__encode_fragment, // +6
}  net__urllib__EncodingMode;

typedef enum {
	os__SeekMode__start, // 
	os__SeekMode__current, // +1
	os__SeekMode__end, // +2
}  os__SeekMode;

typedef enum {
	os__FileBufferMode__fully_buffered = _IOFBF, // _IOFBF
	os__FileBufferMode__line_buffered = _IOLBF, // _IOLBF
	os__FileBufferMode__not_buffered = _IONBF, // _IONBF
}  os__FileBufferMode;

typedef enum {
	os__FileType__unknown, // 
	os__FileType__regular, // +1
	os__FileType__directory, // +2
	os__FileType__character_device, // +3
	os__FileType__block_device, // +4
	os__FileType__fifo, // +5
	os__FileType__symbolic_link, // +6
	os__FileType__socket, // +7
}  os__FileType;

typedef enum {
	os__ChildProcessPipeKind__stdin, // 
	os__ChildProcessPipeKind__stdout, // +1
	os__ChildProcessPipeKind__stderr, // +2
}  os__ChildProcessPipeKind;

typedef enum {
	os__ProcessState__not_started, // 
	os__ProcessState__running, // +1
	os__ProcessState__stopped, // +2
	os__ProcessState__exited, // +3
	os__ProcessState__aborted, // +4
	os__ProcessState__closed, // +5
}  os__ProcessState;

typedef enum {
	os__Signal__hup = 1, // 1
	os__Signal__int = 2, // 2
	os__Signal__quit = 3, // 3
	os__Signal__ill = 4, // 4
	os__Signal__trap = 5, // 5
	os__Signal__abrt = 6, // 6
	os__Signal__bus = 7, // 7
	os__Signal__fpe = 8, // 8
	os__Signal__kill = 9, // 9
	os__Signal__usr1 = 10, // 10
	os__Signal__segv = 11, // 11
	os__Signal__usr2 = 12, // 12
	os__Signal__pipe = 13, // 13
	os__Signal__alrm = 14, // 14
	os__Signal__term = 15, // 15
	os__Signal__stkflt = 16, // 16
	os__Signal__chld = 17, // 17
	os__Signal__cont = 18, // 18
	os__Signal__stop = 19, // 19
	os__Signal__tstp = 20, // 20
	os__Signal__ttin = 21, // 21
	os__Signal__ttou = 22, // 22
	os__Signal__urg = 23, // 23
	os__Signal__xcpu = 24, // 24
	os__Signal__xfsz = 25, // 25
	os__Signal__vtalrm = 26, // 26
	os__Signal__prof = 27, // 27
	os__Signal__winch = 28, // 28
	os__Signal__poll = 29, // 29
	os__Signal__pwr = 30, // 30
	os__Signal__sys = 31, // 31
}  os__Signal;

typedef enum {
	sync__BufferElemStat__unused = 0, // 0
	sync__BufferElemStat__writing, // 0+1
	sync__BufferElemStat__written, // 0+2
	sync__BufferElemStat__reading, // 0+3
}  sync__BufferElemStat;

typedef enum {
	sync__Direction__pop, // 
	sync__Direction__push, // +1
}  sync__Direction;

typedef enum {
	net__Select__read, // 
	net__Select__write, // +1
	net__Select__except, // +2
}  net__Select;

typedef enum {
	net__SocketType__udp = SOCK_DGRAM, // SOCK_DGRAM
	net__SocketType__tcp = SOCK_STREAM, // SOCK_STREAM
	net__SocketType__seqpacket = SOCK_SEQPACKET, // SOCK_SEQPACKET
}  net__SocketType;

typedef enum {
	net__AddrFamily__unix = AF_UNIX, // AF_UNIX
	net__AddrFamily__ip = AF_INET, // AF_INET
	net__AddrFamily__ip6 = AF_INET6, // AF_INET6
	net__AddrFamily__unspec = AF_UNSPEC, // AF_UNSPEC
}  net__AddrFamily;

typedef enum {
	net__ShutdownDirection__read, // 
	net__ShutdownDirection__write, // +1
	net__ShutdownDirection__read_and_write, // +2
}  net__ShutdownDirection;

typedef enum {
	net__WsaError__wsaeintr = 10004, // 10004
	net__WsaError__wsaebadf = 10009, // 10009
	net__WsaError__wsaeacces = 10013, // 10013
	net__WsaError__wsaefault = 10014, // 10014
	net__WsaError__wsaeinval = 10022, // 10022
	net__WsaError__wsaemfile = 10024, // 10024
	net__WsaError__wsaewouldblock = 10035, // 10035
	net__WsaError__wsaeinprogress = 10036, // 10036
	net__WsaError__wsaealready = 10037, // 10037
	net__WsaError__wsaenotsock = 10038, // 10038
	net__WsaError__wsaedestaddrreq = 10039, // 10039
	net__WsaError__wsaemsgsize = 10040, // 10040
	net__WsaError__wsaeprototype = 10041, // 10041
	net__WsaError__wsaenoprotoopt = 10042, // 10042
	net__WsaError__wsaeprotonosupport = 10043, // 10043
	net__WsaError__wsaesocktnosupport = 10044, // 10044
	net__WsaError__wsaeopnotsupp = 10045, // 10045
	net__WsaError__wsaepfnosupport = 10046, // 10046
	net__WsaError__wsaeafnosupport = 10047, // 10047
	net__WsaError__wsaeaddrinuse = 10048, // 10048
	net__WsaError__wsaeaddrnotavail = 10049, // 10049
	net__WsaError__wsaenetdown = 10050, // 10050
	net__WsaError__wsaenetunreach = 10051, // 10051
	net__WsaError__wsaenetreset = 10052, // 10052
	net__WsaError__wsaeconnaborted = 10053, // 10053
	net__WsaError__wsaeconnreset = 10054, // 10054
	net__WsaError__wsaenobufs = 10055, // 10055
	net__WsaError__wsaeisconn = 10056, // 10056
	net__WsaError__wsaenotconn = 10057, // 10057
	net__WsaError__wsaeshutdown = 10058, // 10058
	net__WsaError__wsaetoomanyrefs = 10059, // 10059
	net__WsaError__wsaetimedout = 10060, // 10060
	net__WsaError__wsaeconnrefused = 10061, // 10061
	net__WsaError__wsaeloop = 10062, // 10062
	net__WsaError__wsaenametoolong = 10063, // 10063
	net__WsaError__wsaehostdown = 10064, // 10064
	net__WsaError__wsaehostunreach = 10065, // 10065
	net__WsaError__wsaenotempty = 10066, // 10066
	net__WsaError__wsaeproclim = 10067, // 10067
	net__WsaError__wsaeusers = 10068, // 10068
	net__WsaError__wsaedquot = 10069, // 10069
	net__WsaError__wsaestale = 10070, // 10070
	net__WsaError__wsaeremote = 10071, // 10071
	net__WsaError__wsasysnotready = 10091, // 10091
	net__WsaError__wsavernotsupported = 10092, // 10092
	net__WsaError__wsanotinitialised = 10093, // 10093
	net__WsaError__wsaediscon = 10101, // 10101
	net__WsaError__wsaenomore = 10102, // 10102
	net__WsaError__wsaecancelled = 10103, // 10103
	net__WsaError__wsaeinvalidproctable = 10104, // 10104
	net__WsaError__wsaeinvalidprovider = 10105, // 10105
	net__WsaError__wsaeproviderfailedinit = 10106, // 10106
	net__WsaError__wsasyscallfailure = 10107, // 10107
	net__WsaError__wsaservice_not_found = 10108, // 10108
	net__WsaError__wsatype_not_found = 10109, // 10109
	net__WsaError__wsa_e_no_more = 10110, // 10110
	net__WsaError__wsa_e_cancelled = 10111, // 10111
	net__WsaError__wsaerefused = 10112, // 10112
	net__WsaError__wsahost_not_found = 11001, // 11001
	net__WsaError__wsatry_again = 11002, // 11002
	net__WsaError__wsano_recovery = 11003, // 11003
	net__WsaError__wsano_data = 11004, // 11004
	net__WsaError__wsa_qos_receivers = 11005, // 11005
	net__WsaError__wsa_qos_senders = 11006, // 11006
	net__WsaError__wsa_qos_no_senders = 11007, // 11007
	net__WsaError__wsa_qos_no_receivers = 11008, // 11008
	net__WsaError__wsa_qos_request_confirmed = 11009, // 11009
	net__WsaError__wsa_qos_admission_failure = 11010, // 11010
	net__WsaError__wsa_qos_policy_failure = 11011, // 11011
	net__WsaError__wsa_qos_bad_style = 11012, // 11012
	net__WsaError__wsa_qos_bad_object = 11013, // 11013
	net__WsaError__wsa_qos_traffic_ctrl_error = 11014, // 11014
	net__WsaError__wsa_qos_generic_error = 11015, // 11015
	net__WsaError__wsa_qos_eservicetype = 11016, // 11016
	net__WsaError__wsa_qos_eflowspec = 11017, // 11017
	net__WsaError__wsa_qos_eprovspecbuf = 11018, // 11018
	net__WsaError__wsa_qos_efilterstyle = 11019, // 11019
	net__WsaError__wsa_qos_efiltertype = 11020, // 11020
	net__WsaError__wsa_qos_efiltercount = 11021, // 11021
	net__WsaError__wsa_qos_eobjlength = 11022, // 11022
	net__WsaError__wsa_qos_eflowcount = 11023, // 11023
	net__WsaError__wsa_qos_eunkownpsobj = 11024, // 11024
	net__WsaError__wsa_qos_epolicyobj = 11025, // 11025
	net__WsaError__wsa_qos_eflowdesc = 11026, // 11026
	net__WsaError__wsa_qos_epsflowspec = 11027, // 11027
	net__WsaError__wsa_qos_epsfilterspec = 11028, // 11028
	net__WsaError__wsa_qos_esdmodeobj = 11029, // 11029
	net__WsaError__wsa_qos_eshaperateobj = 11030, // 11030
	net__WsaError__wsa_qos_reserved_petype = 11031, // 11031
	net__WsaError__wsa_secure_host_not_found = 11032, // 11032
	net__WsaError__wsa_ipsec_name_policy_error = 11033, // 11033
}  net__WsaError;

typedef enum {
	net__SocketOption__broadcast = SO_BROADCAST, // SO_BROADCAST
	net__SocketOption__debug = SO_DEBUG, // SO_DEBUG
	net__SocketOption__dont_route = SO_DONTROUTE, // SO_DONTROUTE
	net__SocketOption__error = SO_ERROR, // SO_ERROR
	net__SocketOption__keep_alive = SO_KEEPALIVE, // SO_KEEPALIVE
	net__SocketOption__linger = SO_LINGER, // SO_LINGER
	net__SocketOption__oob_inline = SO_OOBINLINE, // SO_OOBINLINE
	net__SocketOption__reuse_addr = SO_REUSEADDR, // SO_REUSEADDR
	net__SocketOption__receive_buf_size = SO_RCVBUF, // SO_RCVBUF
	net__SocketOption__receive_low_size = SO_RCVLOWAT, // SO_RCVLOWAT
	net__SocketOption__receive_timeout = SO_RCVTIMEO, // SO_RCVTIMEO
	net__SocketOption__send_buf_size = SO_SNDBUF, // SO_SNDBUF
	net__SocketOption__send_low_size = SO_SNDLOWAT, // SO_SNDLOWAT
	net__SocketOption__send_timeout = SO_SNDTIMEO, // SO_SNDTIMEO
	net__SocketOption__socket_type = SO_TYPE, // SO_TYPE
	net__SocketOption__ipv6_only = IPV6_V6ONLY, // IPV6_V6ONLY
	net__SocketOption__ip_proto_ipv6 = IPPROTO_IPV6, // IPPROTO_IPV6
}  net__SocketOption;

typedef enum {
	net__mbedtls__Select__read, // 
	net__mbedtls__Select__write, // +1
	net__mbedtls__Select__except, // +2
}  net__mbedtls__Select;

typedef enum {
	net__http__SameSite__same_site_not_set, // 
	net__http__SameSite__same_site_default_mode = 1, // 1
	net__http__SameSite__same_site_lax_mode, // 1+1
	net__http__SameSite__same_site_strict_mode, // 1+2
	net__http__SameSite__same_site_none_mode, // 1+3
}  net__http__SameSite;

typedef enum {
	net__http__CommonHeader__accept, // 
	net__http__CommonHeader__accept_ch, // +1
	net__http__CommonHeader__accept_charset, // +2
	net__http__CommonHeader__accept_ch_lifetime, // +3
	net__http__CommonHeader__accept_encoding, // +4
	net__http__CommonHeader__accept_language, // +5
	net__http__CommonHeader__accept_patch, // +6
	net__http__CommonHeader__accept_post, // +7
	net__http__CommonHeader__accept_ranges, // +8
	net__http__CommonHeader__access_control_allow_credentials, // +9
	net__http__CommonHeader__access_control_allow_headers, // +10
	net__http__CommonHeader__access_control_allow_methods, // +11
	net__http__CommonHeader__access_control_allow_origin, // +12
	net__http__CommonHeader__access_control_expose_headers, // +13
	net__http__CommonHeader__access_control_max_age, // +14
	net__http__CommonHeader__access_control_request_headers, // +15
	net__http__CommonHeader__access_control_request_method, // +16
	net__http__CommonHeader__age, // +17
	net__http__CommonHeader__allow, // +18
	net__http__CommonHeader__alt_svc, // +19
	net__http__CommonHeader__authorization, // +20
	net__http__CommonHeader__authority, // +21
	net__http__CommonHeader__cache_control, // +22
	net__http__CommonHeader__clear_site_data, // +23
	net__http__CommonHeader__connection, // +24
	net__http__CommonHeader__content_disposition, // +25
	net__http__CommonHeader__content_encoding, // +26
	net__http__CommonHeader__content_language, // +27
	net__http__CommonHeader__content_length, // +28
	net__http__CommonHeader__content_location, // +29
	net__http__CommonHeader__content_range, // +30
	net__http__CommonHeader__content_security_policy, // +31
	net__http__CommonHeader__content_security_policy_report_only, // +32
	net__http__CommonHeader__content_type, // +33
	net__http__CommonHeader__cookie, // +34
	net__http__CommonHeader__cross_origin_embedder_policy, // +35
	net__http__CommonHeader__cross_origin_opener_policy, // +36
	net__http__CommonHeader__cross_origin_resource_policy, // +37
	net__http__CommonHeader__date, // +38
	net__http__CommonHeader__device_memory, // +39
	net__http__CommonHeader__digest, // +40
	net__http__CommonHeader__dnt, // +41
	net__http__CommonHeader__early_data, // +42
	net__http__CommonHeader__etag, // +43
	net__http__CommonHeader__expect, // +44
	net__http__CommonHeader__expect_ct, // +45
	net__http__CommonHeader__expires, // +46
	net__http__CommonHeader__feature_policy, // +47
	net__http__CommonHeader__forwarded, // +48
	net__http__CommonHeader__from, // +49
	net__http__CommonHeader__host, // +50
	net__http__CommonHeader__if_match, // +51
	net__http__CommonHeader__if_modified_since, // +52
	net__http__CommonHeader__if_none_match, // +53
	net__http__CommonHeader__if_range, // +54
	net__http__CommonHeader__if_unmodified_since, // +55
	net__http__CommonHeader__index, // +56
	net__http__CommonHeader__keep_alive, // +57
	net__http__CommonHeader__large_allocation, // +58
	net__http__CommonHeader__last_modified, // +59
	net__http__CommonHeader__link, // +60
	net__http__CommonHeader__location, // +61
	net__http__CommonHeader__nel, // +62
	net__http__CommonHeader__origin, // +63
	net__http__CommonHeader__pragma, // +64
	net__http__CommonHeader__proxy_authenticate, // +65
	net__http__CommonHeader__proxy_authorization, // +66
	net__http__CommonHeader__range, // +67
	net__http__CommonHeader__referer, // +68
	net__http__CommonHeader__referrer_policy, // +69
	net__http__CommonHeader__retry_after, // +70
	net__http__CommonHeader__save_data, // +71
	net__http__CommonHeader__sec_fetch_dest, // +72
	net__http__CommonHeader__sec_fetch_mode, // +73
	net__http__CommonHeader__sec_fetch_site, // +74
	net__http__CommonHeader__sec_fetch_user, // +75
	net__http__CommonHeader__sec_websocket_accept, // +76
	net__http__CommonHeader__sec_websocket_key, // +77
	net__http__CommonHeader__server, // +78
	net__http__CommonHeader__server_timing, // +79
	net__http__CommonHeader__set_cookie, // +80
	net__http__CommonHeader__sourcemap, // +81
	net__http__CommonHeader__strict_transport_security, // +82
	net__http__CommonHeader__te, // +83
	net__http__CommonHeader__timing_allow_origin, // +84
	net__http__CommonHeader__tk, // +85
	net__http__CommonHeader__trailer, // +86
	net__http__CommonHeader__transfer_encoding, // +87
	net__http__CommonHeader__upgrade, // +88
	net__http__CommonHeader__upgrade_insecure_requests, // +89
	net__http__CommonHeader__user_agent, // +90
	net__http__CommonHeader__vary, // +91
	net__http__CommonHeader__via, // +92
	net__http__CommonHeader__want_digest, // +93
	net__http__CommonHeader__warning, // +94
	net__http__CommonHeader__www_authenticate, // +95
	net__http__CommonHeader__x_content_type_options, // +96
	net__http__CommonHeader__x_dns_prefetch_control, // +97
	net__http__CommonHeader__x_forwarded_for, // +98
	net__http__CommonHeader__x_forwarded_host, // +99
	net__http__CommonHeader__x_forwarded_proto, // +100
	net__http__CommonHeader__x_frame_options, // +101
	net__http__CommonHeader__x_xss_protection, // +102
}  net__http__CommonHeader;

typedef enum {
	net__http__Method__get, // 
	net__http__Method__head, // +1
	net__http__Method__post, // +2
	net__http__Method__put, // +3
	net__http__Method__acl, // +4
	net__http__Method__baseline_control, // +5
	net__http__Method__bind, // +6
	net__http__Method__checkin, // +7
	net__http__Method__checkout, // +8
	net__http__Method__connect, // +9
	net__http__Method__copy, // +10
	net__http__Method__delete, // +11
	net__http__Method__label, // +12
	net__http__Method__link, // +13
	net__http__Method__lock, // +14
	net__http__Method__merge, // +15
	net__http__Method__mkactivity, // +16
	net__http__Method__mkcalendar, // +17
	net__http__Method__mkcol, // +18
	net__http__Method__mkredirectref, // +19
	net__http__Method__mkworkspace, // +20
	net__http__Method__move, // +21
	net__http__Method__options, // +22
	net__http__Method__orderpatch, // +23
	net__http__Method__patch, // +24
	net__http__Method__pri, // +25
	net__http__Method__propfind, // +26
	net__http__Method__proppatch, // +27
	net__http__Method__rebind, // +28
	net__http__Method__report, // +29
	net__http__Method__search, // +30
	net__http__Method__trace, // +31
	net__http__Method__unbind, // +32
	net__http__Method__uncheckout, // +33
	net__http__Method__unlink, // +34
	net__http__Method__unlock, // +35
	net__http__Method__update, // +36
	net__http__Method__updateredirectref, // +37
	net__http__Method__version_control, // +38
}  net__http__Method;

typedef enum {
	net__http__ServerStatus__closed, // 
	net__http__ServerStatus__running, // +1
	net__http__ServerStatus__stopped, // +2
}  net__http__ServerStatus;

typedef enum {
	net__http__Status__unknown = -1, // -1
	net__http__Status__unassigned = 0, // 0
	net__http__Status__cont = 100, // 100
	net__http__Status__switching_protocols = 101, // 101
	net__http__Status__processing = 102, // 102
	net__http__Status__checkpoint_draft = 103, // 103
	net__http__Status__ok = 200, // 200
	net__http__Status__created = 201, // 201
	net__http__Status__accepted = 202, // 202
	net__http__Status__non_authoritative_information = 203, // 203
	net__http__Status__no_content = 204, // 204
	net__http__Status__reset_content = 205, // 205
	net__http__Status__partial_content = 206, // 206
	net__http__Status__multi_status = 207, // 207
	net__http__Status__already_reported = 208, // 208
	net__http__Status__im_used = 226, // 226
	net__http__Status__multiple_choices = 300, // 300
	net__http__Status__moved_permanently = 301, // 301
	net__http__Status__found = 302, // 302
	net__http__Status__see_other = 303, // 303
	net__http__Status__not_modified = 304, // 304
	net__http__Status__use_proxy = 305, // 305
	net__http__Status__switch_proxy = 306, // 306
	net__http__Status__temporary_redirect = 307, // 307
	net__http__Status__permanent_redirect = 308, // 308
	net__http__Status__bad_request = 400, // 400
	net__http__Status__unauthorized = 401, // 401
	net__http__Status__payment_required = 402, // 402
	net__http__Status__forbidden = 403, // 403
	net__http__Status__not_found = 404, // 404
	net__http__Status__method_not_allowed = 405, // 405
	net__http__Status__not_acceptable = 406, // 406
	net__http__Status__proxy_authentication_required = 407, // 407
	net__http__Status__request_timeout = 408, // 408
	net__http__Status__conflict = 409, // 409
	net__http__Status__gone = 410, // 410
	net__http__Status__length_required = 411, // 411
	net__http__Status__precondition_failed = 412, // 412
	net__http__Status__request_entity_too_large = 413, // 413
	net__http__Status__request_uri_too_long = 414, // 414
	net__http__Status__unsupported_media_type = 415, // 415
	net__http__Status__requested_range_not_satisfiable = 416, // 416
	net__http__Status__expectation_failed = 417, // 417
	net__http__Status__im_a_teapot = 418, // 418
	net__http__Status__misdirected_request = 421, // 421
	net__http__Status__unprocessable_entity = 422, // 422
	net__http__Status__locked = 423, // 423
	net__http__Status__failed_dependency = 424, // 424
	net__http__Status__unordered_collection = 425, // 425
	net__http__Status__upgrade_required = 426, // 426
	net__http__Status__precondition_required = 428, // 428
	net__http__Status__too_many_requests = 429, // 429
	net__http__Status__request_header_fields_too_large = 431, // 431
	net__http__Status__unavailable_for_legal_reasons = 451, // 451
	net__http__Status__client_closed_request = 499, // 499
	net__http__Status__internal_server_error = 500, // 500
	net__http__Status__not_implemented = 501, // 501
	net__http__Status__bad_gateway = 502, // 502
	net__http__Status__service_unavailable = 503, // 503
	net__http__Status__gateway_timeout = 504, // 504
	net__http__Status__http_version_not_supported = 505, // 505
	net__http__Status__variant_also_negotiates = 506, // 506
	net__http__Status__insufficient_storage = 507, // 507
	net__http__Status__loop_detected = 508, // 508
	net__http__Status__bandwidth_limit_exceeded = 509, // 509
	net__http__Status__not_extended = 510, // 510
	net__http__Status__network_authentication_required = 511, // 511
}  net__http__Status;

typedef enum {
	net__http__Version__unknown, // 
	net__http__Version__v1_1, // +1
	net__http__Version__v2_0, // +2
	net__http__Version__v1_0, // +3
}  net__http__Version;

// Thread definitions:
typedef HANDLE __v_thread;

// V type definitions:
struct IError {
	union {
		void* _object;
		None__* _None__;
		voidptr* _voidptr;
		Error* _Error;
		MessageError* _MessageError;
		time__TimeParseError* _time__TimeParseError;
		io__Eof* _io__Eof;
		io__NotExpected* _io__NotExpected;
		os__Eof* _os__Eof;
		os__NotExpected* _os__NotExpected;
		os__FileNotOpenedError* _os__FileNotOpenedError;
		os__SizeOfTypeIs0Error* _os__SizeOfTypeIs0Error;
		os__ExecutableNotFoundError* _os__ExecutableNotFoundError;
		net__http__HeaderKeyError* _net__http__HeaderKeyError;
		net__http__UnexpectedExtraAttributeError* _net__http__UnexpectedExtraAttributeError;
		net__http__MultiplePathAttributesError* _net__http__MultiplePathAttributesError;
	};
	int _typ;
};

struct string {
	u8* str;
	int len;
	int is_lit;
};

struct array {
	voidptr data;
	int offset;
	int len;
	int cap;
	ArrayFlags flags;
	int element_size;
};

struct DenseArray {
	int key_bytes;
	int value_bytes;
	int cap;
	int len;
	u32 deletes;
	u8* all_deleted;
	u8* keys;
	u8* values;
};

struct map {
	int key_bytes;
	int value_bytes;
	u32 even_index;
	u8 cached_hashbits;
	u8 shift;
	DenseArray key_values;
	u32* metas;
	u32 extra_metas;
	bool has_string_keys;
	MapHashFn hash_fn;
	MapEqFn key_eq_fn;
	MapCloneFn clone_fn;
	MapFreeFn free_fn;
	int len;
};

struct Error {
	EMPTY_STRUCT_DECLARATION;
};

struct _option {
	u8 state;
	IError err;
};

struct _result {
	bool is_error;
	IError err;
};
typedef array Array_string;
typedef array Array_u8;
typedef array Array_voidptr;
typedef u64 Array_fixed_u64_2 [2];
typedef char Array_fixed_char_254 [254];
typedef array Array_VCastTypeIndexName;
typedef array Array_MethodParam;
typedef array Array_int;
typedef array Array_rune;
typedef string Array_fixed_string_11 [11];
typedef voidptr Array_fixed_voidptr_11 [11];
typedef array Array_RepIndex;
typedef map Map_string_main__Info_command;
typedef map Map_string_int;
typedef array Array_bool;
typedef array Array_net__http__Cookie_ptr;
typedef map Map_string_string;
typedef array Array_net__http__HeaderConfig;
typedef map Map_net__http__CommonHeader_string;
typedef array Array_net__http__FileData;
typedef map Map_string_Array_net__http__FileData;
typedef array Array_net__http__LineSegmentIndexes;
typedef array Array_net__http__Cookie;
typedef chan chan_net__TcpConn_ptr;
typedef array Array___v_thread;
typedef array Array_char_ptr;
typedef u16 Array_fixed_u16_260 [260];
typedef u16 Array_fixed_u16_14 [14];
typedef int Array_fixed_int_3 [3];
typedef u8 Array_fixed_u8_65536 [65536];
typedef array Array_u16;
typedef array Array_os__Signal;
typedef char Array_fixed_char_256 [256];
typedef map Map_K_Array_V;
typedef map Map_T_Array_int;
typedef map Map_T_int;
typedef array Array_net__urllib__QueryValue;
typedef map Map_string_Array_string;
typedef u8 Array_fixed_u8_8 [8];
typedef u8 Array_fixed_u8_4 [4];
typedef u8 Array_fixed_u8_16 [16];
typedef array Array_net__Addr;
typedef u32 Array_fixed_u32_4 [4];
typedef char Array_fixed_char_108 [108];
typedef u8 Array_fixed_u8_108 [108];
typedef u8 Array_fixed_u8_257 [257];
typedef u8 Array_fixed_u8_129 [129];
typedef array Array_IError;
typedef array Array_io__Writer;
typedef array Array_u32;
typedef array Array_sync__Channel_ptr;
typedef array Array_sync__Direction;
typedef array Array_sync__Subscription;
typedef chan chan_bool;
typedef array Array_chan_bool;
typedef u8 Array_fixed_u8_63 [63];
typedef map Map_string_v__embed_file__Decoder;
typedef u8 Array_fixed_u8_5 [5];
typedef u8 Array_fixed_u8_25 [25];
typedef u8 Array_fixed_u8_32 [32];
typedef u8 Array_fixed_u8_64 [64];
typedef u8 Array_fixed_u8_256 [256];
typedef u64 Array_fixed_u64_309 [309];
typedef u64 Array_fixed_u64_324 [324];
typedef u32 Array_fixed_u32_10 [10];
typedef u64 Array_fixed_u64_20 [20];
typedef u64 Array_fixed_u64_584 [584];
typedef u64 Array_fixed_u64_652 [652];
typedef f64 Array_fixed_f64_36 [36];
typedef u8 Array_fixed_u8_26 [26];
typedef u8 Array_fixed_u8_512 [512];
typedef u64 Array_fixed_u64_18 [18];
typedef u64 Array_fixed_u64_47 [47];
typedef u64 Array_fixed_u64_31 [31];
typedef u8 Array_fixed_u8_17 [17];
typedef i32 Array_fixed_i32_1264 [1264];
typedef array Array_MapMode;
typedef int Array_fixed_int_10 [10];
typedef int Array_fixed_int_20 [20];
typedef array Array_TrimMode;
typedef array Array_StrIntpType;
typedef string Array_fixed_string_7 [7];
typedef map Map_string_i64;
typedef u8 Array_fixed_u8_10 [10];
typedef char Array_fixed_char_1024 [1024];
typedef int Array_fixed_int_12 [12];
typedef int Array_fixed_int_13 [13];
typedef int Array_fixed_int_123 [123];
typedef u8 Array_fixed_u8_4096 [4096];
typedef u8 Array_fixed_u8_8192 [8192];
typedef u16 Array_fixed_u16_32768 [32768];
typedef u16 Array_fixed_u16_255 [255];
typedef u16 Array_fixed_u16_4096 [4096];
typedef array Array_os__ProcessState;
typedef u16 Array_fixed_u16_8 [8];
typedef int Array_fixed_int_4 [4];
typedef char Array_fixed_char_24 [24];
typedef char Array_fixed_char_46 [46];
typedef array Array_net__SocketOption;
typedef array Array_net__AddrFamily;
typedef u8 Array_fixed_u8_400 [400];
typedef map Map_string_net__http__CommonHeader;
typedef array Array_net__http__Status;
typedef map Map_string_main__help;
#define C__BOOL BOOL
#define C__HINSTANCE HINSTANCE
#define C__HICON HICON
#define C__HCURSOR HCURSOR
#define C__HBRUSH HBRUSH
#define C__HWND HWND
#define C__HGLOBAL HGLOBAL
#define C__HANDLE HANDLE
#define C__LRESULT LRESULT
#define C__CHAR CHAR
#define C__TCHAR TCHAR
#define C__WCHAR WCHAR
#define C__LPSTR LPSTR
#define C__LPWSTR LPWSTR
#define C__LPTSTR LPTSTR
#define C__LPCTSTR LPCTSTR
#define C__intptr_t intptr_t
typedef Array_u8 strings__Builder;
typedef i64 time__Duration;
typedef voidptr os__HANDLE;
typedef voidptr os__HMODULE;
#define C__time_t time_t
typedef voidptr sync__MHANDLE;
typedef voidptr sync__SHANDLE;
typedef void (*FnExitCb)();
typedef void (*FnGC_WarnCB)(char*,usize);
typedef int (*VectoredExceptionHandler)(ExceptionPointers*);
typedef int (*FnSortCB)(voidptr,voidptr);
typedef bool (*anon_fn_u8__bool)(u8);
typedef _result_void (*net__http__RequestRedirectFn)(net__http__Request*,int,string);
typedef _result_void (*net__http__RequestProgressFn)(net__http__Request*,Array_u8,u64);
typedef _result_void (*net__http__RequestProgressBodyFn)(net__http__Request*,Array_u8,u64,u64,int);
typedef _result_void (*net__http__RequestFinishFn)(net__http__Request*,u64);
typedef _result_int (*net__http__FnReceiveChunk)(voidptr,u8*,int);
typedef void (*os__ShellExecuteWin)(voidptr,u16*,u16*,u16*,u16*,int);
typedef void (*os__FnWalkContextCB)(voidptr,string);
typedef u32 (*os__VectoredExceptionHandler)(ExceptionPointers*);
typedef u64 (*os__FN_NTSuspendResume)(voidptr);
typedef void (*os__SignalHandler)(os__Signal);
typedef void (*os__FN_SA_Handler)(int);
typedef void (*dl__FN_vinit_caller)();
typedef void (*dl__FN_vcleanup_caller)();
typedef _result_net__mbedtls__SSLCerts_ptr (*anon_fn_mut_net__mbedtls__ssllistener_string__result_net__mbedtls__SSLCerts)(net__mbedtls__SSLListener*,string);
struct net__http__Downloader {
	union {
		void* _object;
		voidptr* _voidptr;
		net__http__TerminalStreamingDownloader* _net__http__TerminalStreamingDownloader;
		net__http__SilentStreamingDownloader* _net__http__SilentStreamingDownloader;
	};
	int _typ;
};
struct net__http__Handler {
	union {
		void* _object;
		net__http__DebugHandler* _net__http__DebugHandler;
		voidptr* _voidptr;
	};
	int _typ;
};
struct net__Dialer {
	union {
		void* _object;
		net__TCPDialer* _net__TCPDialer;
		voidptr* _voidptr;
		net__ssl__SSLDialer* _net__ssl__SSLDialer;
		net__socks__SOCKS5Dialer* _net__socks__SOCKS5Dialer;
	};
	int _typ;
};
struct net__Connection {
	union {
		void* _object;
		net__TcpConn* _net__TcpConn;
		voidptr* _voidptr;
		net__ssl__SSLConn* _net__ssl__SSLConn;
		net__mbedtls__SSLConn* _net__mbedtls__SSLConn;
	};
	int _typ;
};
struct io__Reader {
	union {
		void* _object;
		net__TcpConn* _net__TcpConn;
		voidptr* _voidptr;
		net__ssl__SSLConn* _net__ssl__SSLConn;
		os__File* _os__File;
		io__BufferedReader* _io__BufferedReader;
		net__mbedtls__SSLConn* _net__mbedtls__SSLConn;
		io__ReaderWriterImpl* _io__ReaderWriterImpl;
	};
	int _typ;
};
struct io__Writer {
	union {
		void* _object;
		io__MultiWriter* _io__MultiWriter;
		voidptr* _voidptr;
		net__ssl__SSLConn* _net__ssl__SSLConn;
		os__File* _os__File;
		net__TcpConn* _net__TcpConn;
		net__mbedtls__SSLConn* _net__mbedtls__SSLConn;
		net__UdpConn* _net__UdpConn;
		io__BufferedWriter* _io__BufferedWriter;
		io__ReaderWriterImpl* _io__ReaderWriterImpl;
	};
	int _typ;
};
struct io__RandomReader {
	union {
		void* _object;
		os__File* _os__File;
		voidptr* _voidptr;
	};
	int _typ;
};
struct io__ReaderWriter {
	union {
		void* _object;
		io__ReaderWriterImpl* _io__ReaderWriterImpl;
		voidptr* _voidptr;
	};
	int _typ;
};
struct io__RandomWriter {
	union {
		void* _object;
	};
	int _typ;
};
struct rand__PRNG {
	union {
		void* _object;
		rand__wyrand__WyRandRNG* _rand__wyrand__WyRandRNG;
		voidptr* _voidptr;
	};
	int _typ;
};
struct v__embed_file__Decoder {
	union {
		void* _object;
	};
	int _typ;
};
struct hash__Hash {
	union {
		void* _object;
	};
	int _typ;
};
struct hash__Hash32er {
	union {
		void* _object;
	};
	int _typ;
};
struct hash__Hash64er {
	union {
		void* _object;
	};
	int _typ;
};
// #start sorted_symbols
struct none {
	EMPTY_STRUCT_DECLARATION;
};

struct ContextRecord {
	EMPTY_STRUCT_DECLARATION;
};

struct ExceptionPointers {
	ExceptionRecord* exception_record;
	ContextRecord* context_record;
};

struct None__ {
	Error Error;
};

struct net__http__HeaderKV {
	string key;
	string value;
};

struct net__http__MultiplePathAttributesError {
	Error Error;
};

struct net__http__DebugHandler {
	EMPTY_STRUCT_DECLARATION;
};

struct os__Eof {
	Error Error;
};

struct os__FileNotOpenedError {
	Error Error;
};

struct os__SizeOfTypeIs0Error {
	Error Error;
};

struct os__ExecutableNotFoundError {
	Error Error;
};

struct net__TCPDialer {
	EMPTY_STRUCT_DECLARATION;
};

struct io__Eof {
	Error Error;
};

struct sync__Subscription {
	sync__Semaphore* sem;
	sync__Subscription** prev;
	sync__Subscription* nxt;
};

struct VAssertMetaInfo {
	string fpath;
	int line_nr;
	string fn_name;
	string src;
	string op;
	string llabel;
	string rlabel;
	string lvalue;
	string rvalue;
	string message;
	bool has_msg;
};

struct ExceptionRecord {
	u32 code;
	u32 flags;
	ExceptionRecord* record;
	voidptr address;
	u32 param_count;
};

union strconv__Float64u {
	f64 f;
	u64 u;
};

union strconv__Float32u {
	f32 f;
	u32 u;
};

struct MessageError {
	string msg;
	int code;
};

struct SortedMap {
	int value_bytes;
	mapnode* root;
	int len;
};

struct RunesIterator {
	string s;
	int i;
};

union StrIntpMem {
	u32 d_c;
	u8 d_u8;
	i8 d_i8;
	u16 d_u16;
	i16 d_i16;
	u32 d_u32;
	int d_i32;
	u64 d_u64;
	i64 d_i64;
	f32 d_f32;
	f64 d_f64;
	string d_s;
	string d_r;
	voidptr d_p;
	voidptr d_vp;
};

struct strconv__BF_param {
	u8 pad_ch;
	int len0;
	int len1;
	bool positive;
	bool sign_flag;
	strconv__Align_text align;
	bool rm_tail_zero;
};

struct main__Info_general {
	Map_string_main__Info_command commands;
	string usage;
};

struct main__Info_command {
	Array_string aliases;
	string description;
};

struct strconv__Dec32 {
	u32 m;
	int e;
};

union strconv__Uf32 {
	f32 f;
	u32 u;
};

struct strconv__Dec64 {
	u64 m;
	int e;
};

struct strconv__Uint128 {
	u64 lo;
	u64 hi;
};

union strconv__Uf64 {
	f64 f;
	u64 u;
};

struct time__Time {
	i64 __v_unix;
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int nanosecond;
	bool is_local;
};

struct os__File {
	voidptr cfile;
	int fd;
	bool is_opened;
};
typedef net__http__HeaderKV Array_fixed_net__http__HeaderKV_50 [50];

struct net__http__HeaderRenderConfig {
	net__http__Version version;
	bool coerce;
	bool canonicalize;
};

struct net__http__HeaderKeyError {
	Error Error;
	int code;
	string header;
	u8 invalid_char;
};

struct net__http__HttpProxy {
	string scheme;
	string username;
	string password;
	string host;
	string hostname;
	int port;
	string url;
};

struct net__urllib__URL {
	string scheme;
	string opaque;
	net__urllib__Userinfo* user;
	string host;
	string path;
	string raw_path;
	bool force_query;
	string raw_query;
	string fragment;
};

struct io__BufferedReader {
	io__Reader reader;
	Array_u8 buf;
	int offset;
	int len;
	int fails;
	int mfails;
	bool end_of_stream;
	int total_read;
};

struct net__http__UnexpectedExtraAttributeError {
	Error Error;
	Array_string attributes;
};

struct os__NotExpected {
	string cause;
	int code;
};

struct os__SystemError {
	string msg;
	int code;
};

struct os__Result {
	int exit_code;
	string output;
};

struct os__MkdirParams {
	u32 mode;
};

struct vargs__Args {
	Array_string orig;
	int start;
	string command;
	Map_string_string options;
	Map_string_string aliases;
	Array_string unknown;
};
struct _option_anon_fn_mut_net__mbedtls__ssllistener_string__result_net__mbedtls__SSLCerts {
	byte state;
	IError err;
	byte data[sizeof(void*) > 1 ? sizeof(void*) : 1];
};

struct net__mbedtls__SSLConnectConfig {
	string verify;
	string cert;
	string cert_key;
	bool validate;
	bool in_memory_verification;
	_option_anon_fn_mut_net__mbedtls__ssllistener_string__result_net__mbedtls__SSLCerts get_certificate;
};

struct time__TimeParseError {
	Error Error;
	int code;
	string message;
};

struct time__StopWatchOptions {
	bool auto_start;
};

struct time__StopWatch {
	u64 elapsed;
	u64 start;
	u64 end;
};

struct time__SystemTime {
	u16 year;
	u16 month;
	u16 day_of_week;
	u16 day;
	u16 hour;
	u16 minute;
	u16 second;
	u16 millisecond;
};

struct net__urllib__Userinfo {
	string username;
	string password;
	bool password_set;
};

struct net__ShutdownConfig {
	net__ShutdownDirection how;
};

struct net__Socket {
	int handle;
};

struct net__socks__SOCKS5Dialer {
	net__Dialer dialer;
	string proxy_address;
	string username;
	string password;
};

struct io__NotExpected {
	string cause;
	int code;
};

struct io__BufferedWriter {
	int n;
	io__Writer wr;
	Array_u8 buf;
};

struct io__MultiWriter {
	Array_io__Writer writers;
};

struct io__ReaderWriterImpl {
	io__Reader r;
	io__Writer w;
};

struct rand__config__NormalConfigStruct {
	f64 mu;
	f64 sigma;
};

struct rand__config__ShuffleConfigStruct {
	int start;
	int end;
};

struct rand__config__PRNGConfigStruct {
	Array_u32 seed_;
};

struct sync__Semaphore {
	SRWLOCK mtx;
	CONDITION_VARIABLE cond;
	u32 count;
};

struct sync__Mutex {
	SRWLOCK mx;
};

struct sync__RwMutex {
	SRWLOCK mx;
};

struct strings__textscanner__TextScanner {
	string input;
	int ilen;
	int pos;
};

struct v__embed_file__EmbedFileDecoders {
	Map_string_v__embed_file__Decoder decoders;
};

struct v__embed_file__EmbedFileData {
	string apath;
	string compression_type;
	u8* compressed;
	u8* uncompressed;
	bool free_compressed;
	bool free_uncompressed;
	int len;
	string path;
};

struct v__embed_file__EmbedFileIndexEntry {
	int id;
	string path;
	string algo;
	u8* data;
};

struct net__mbedtls__SSLCerts {
	mbedtls_x509_crt cacert;
	mbedtls_x509_crt client_cert;
	mbedtls_pk_context client_key;
};

struct rand__buffer__PRNGBuffer {
	int bytes_left;
	u64 buffer;
};

struct mapnode {
	voidptr* children;
	int len;
	Array_fixed_string_11 keys;
	Array_fixed_voidptr_11 values;
};

struct StrIntpData {
	string str;
	u32 fmt;
	StrIntpMem d;
};

struct net__http__Cookie {
	string name;
	string value;
	string path;
	string domain;
	time__Time expires;
	string raw_expires;
	int max_age;
	bool secure;
	bool http_only;
	net__http__SameSite same_site;
	string raw;
	Array_string unparsed;
};

struct net__http__Header {
	Array_fixed_net__http__HeaderKV_50 data;
	int cur_pos;
};

struct net__http__SilentStreamingDownloader {
	string path;
	os__File f;
};

struct os__Process {
	string filename;
	int pid;
	int code;
	os__ProcessState status;
	string err;
	Array_string args;
	string work_folder;
	bool env_is_custom;
	Array_string env;
	bool use_stdio_ctl;
	bool use_pgroup;
	Array_fixed_int_3 stdio_fd;
	voidptr wdata;
	bool create_no_window;
};

struct net__ssl__SSLConnectConfig {
	net__mbedtls__SSLConnectConfig SSLConnectConfig;
};

struct net__mbedtls__SSLConn {
	net__mbedtls__SSLConnectConfig config;
	mbedtls_net_context server_fd;
	mbedtls_ssl_context ssl;
	mbedtls_ssl_config conf;
	net__mbedtls__SSLCerts* certs;
	int handle;
	time__Duration duration;
	bool opened;
	string ip;
	bool owns_socket;
};

struct net__Unix {
	Array_fixed_u8_108 path;
};
#pragma pack(push, 1)

struct net__Ip {
	u16 port;
	Array_fixed_u8_4 addr;
	Array_fixed_u8_8 sin_pad;
};
#pragma pack(pop)
#pragma pack(push, 1)

struct net__Ip6 {
	u16 port;
	u32 flow_info;
	Array_fixed_u8_16 addr;
	u32 scope_id;
};
#pragma pack(pop)

struct net__TcpSocket {
	net__Socket Socket;
};

struct rand__wyrand__WyRandRNG {
	rand__buffer__PRNGBuffer PRNGBuffer;
	u64 state;
	int bytes_left;
	u64 buffer;
};

struct sync__SpinLock {
	u8 locked;
	Array_fixed_u8_63 padding;
};

struct sync__Channel {
	u8* ringbuf;
	u8* statusbuf;
	u32 objsize;
	sync__Semaphore writesem;
	sync__Semaphore readsem;
	sync__Semaphore writesem_im;
	sync__Semaphore readsem_im;
	atomic_uintptr_t write_adr;
	atomic_uintptr_t read_adr;
	atomic_uintptr_t adr_read;
	atomic_uintptr_t adr_written;
	u32 write_free;
	u32 read_avail;
	u32 buf_elem_write_idx;
	u32 buf_elem_read_idx;
	sync__Subscription* write_subscriber;
	sync__Subscription* read_subscriber;
	sync__SpinLock* write_sub_mtx;
	sync__SpinLock* read_sub_mtx;
	u16 closed;
	u32 cap;
};

struct sync__WaitGroup {
	u32 task_count;
	u32 wait_count;
	sync__Semaphore sem;
};

struct net__mbedtls__SSLListener {
	string saddr;
	net__mbedtls__SSLConnectConfig config;
	mbedtls_net_context server_fd;
	mbedtls_ssl_context ssl;
	mbedtls_ssl_config conf;
	net__mbedtls__SSLCerts* certs;
	bool opened;
};

struct net__http__Request {
	Map_string_string cookies;
	net__http__Version version;
	net__http__Method method;
	net__http__Header header;
	string host;
	string data;
	string url;
	string user_agent;
	bool verbose;
	voidptr user_ptr;
	net__http__HttpProxy* proxy;
	i64 read_timeout;
	i64 write_timeout;
	bool validate;
	string verify;
	string cert;
	string cert_key;
	bool in_memory_verification;
	bool allow_redirect;
	int max_retries;
	net__http__RequestRedirectFn on_redirect;
	net__http__RequestProgressFn on_progress;
	net__http__RequestProgressBodyFn on_progress_body;
	net__http__RequestFinishFn on_finish;
	i64 stop_copying_limit;
	i64 stop_receiving_limit;
};

struct net__http__Response {
	string body;
	net__http__Header header;
	int status_code;
	string status_msg;
	string http_version;
};

struct net__ssl__SSLConn {
	net__mbedtls__SSLConn SSLConn;
};

struct net__http__TerminalStreamingDownloader {
	net__http__SilentStreamingDownloader SilentStreamingDownloader;
	time__Time start_time;
	time__Time past_time;
	u64 past_received;
};

struct net__TcpConn {
	net__TcpSocket sock;
	int handle;
	time__Time write_deadline;
	time__Time read_deadline;
	time__Duration read_timeout;
	time__Duration write_timeout;
	bool is_blocking;
};

struct net__ssl__SSLDialer {
	net__ssl__SSLConnectConfig config;
};

union net__AddrData {
	net__Unix Unix;
	net__Ip Ip;
	net__Ip6 Ip6;
};
#pragma pack(push, 1)

struct net__Addr {
	u16 f;
	net__AddrData addr;
};
#pragma pack(pop)

struct net__UdpSocket {
	net__Socket Socket;
	net__Addr l;
	bool has_r;
	net__Addr r;
};

struct net__UdpConn {
	net__UdpSocket sock;
	time__Time write_deadline;
	time__Time read_deadline;
	time__Duration read_timeout;
	time__Duration write_timeout;
};
// #end sorted_symbols

// BEGIN_multi_return_structs
struct multi_return_u32_u32 {
	u32 arg0;
	u32 arg1;
};

struct multi_return_int_int {
	int arg0;
	int arg1;
};

struct multi_return_u64_int {
	u64 arg0;
	int arg1;
};

struct multi_return_strconv__Dec32_bool {
	strconv__Dec32 arg0;
	bool arg1;
};

struct multi_return_strconv__Dec64_bool {
	strconv__Dec64 arg0;
	bool arg1;
};

struct multi_return_u64_u64 {
	u64 arg0;
	u64 arg1;
};

struct multi_return_int_int_int {
	int arg0;
	int arg1;
	int arg2;
};

struct multi_return_string_u16 {
	string arg0;
	u16 arg1;
};

struct multi_return_f64_f64 {
	f64 arg0;
	f64 arg1;
};

struct multi_return_ref_sync__SpinLock_ref_sync__Subscription {
	sync__SpinLock* arg0;
	sync__Subscription** arg1;
};

// END_multi_return_structs

static bool Array_u8_contains(Array_u8 a, u8 v);
static bool Array_string_contains(Array_string a, string v);

// V Option_xxx definitions:
struct _option_int {
	byte state;
	IError err;
	byte data[sizeof(int) > 1 ? sizeof(int) : 1];
};

struct _option_rune {
	byte state;
	IError err;
	byte data[sizeof(rune) > 1 ? sizeof(rune) : 1];
};

struct _option_u8 {
	byte state;
	IError err;
	byte data[sizeof(u8) > 1 ? sizeof(u8) : 1];
};

struct _option_string {
	byte state;
	IError err;
	byte data[sizeof(string) > 1 ? sizeof(string) : 1];
};

struct _option_v__embed_file__Decoder {
	byte state;
	IError err;
	byte data[sizeof(v__embed_file__Decoder) > 1 ? sizeof(v__embed_file__Decoder) : 1];
};

struct _option_net__Addr {
	byte state;
	IError err;
	byte data[sizeof(net__Addr) > 1 ? sizeof(net__Addr) : 1];
};


// V result_xxx definitions:
struct _result_void {
	bool is_error;
	IError err;
	byte data[sizeof(u8) > 1 ? sizeof(u8) : 1];
};

struct _result_int {
	bool is_error;
	IError err;
	byte data[sizeof(int) > 1 ? sizeof(int) : 1];
};

struct _result_net__mbedtls__SSLCerts_ptr {
	bool is_error;
	IError err;
	byte data[sizeof(net__mbedtls__SSLCerts*) > 1 ? sizeof(net__mbedtls__SSLCerts*) : 1];
};

struct _result_u64 {
	bool is_error;
	IError err;
	byte data[sizeof(u64) > 1 ? sizeof(u64) : 1];
};

struct _result_i64 {
	bool is_error;
	IError err;
	byte data[sizeof(i64) > 1 ? sizeof(i64) : 1];
};

struct _result_string {
	bool is_error;
	IError err;
	byte data[sizeof(string) > 1 ? sizeof(string) : 1];
};

struct _result_voidptr {
	bool is_error;
	IError err;
	byte data[sizeof(voidptr) > 1 ? sizeof(voidptr) : 1];
};

struct _result_os__File {
	bool is_error;
	IError err;
	byte data[sizeof(os__File) > 1 ? sizeof(os__File) : 1];
};

struct _result_FILE_ptr {
	bool is_error;
	IError err;
	byte data[sizeof(FILE*) > 1 ? sizeof(FILE*) : 1];
};

struct _result_Array_u8 {
	bool is_error;
	IError err;
	byte data[sizeof(Array_u8) > 1 ? sizeof(Array_u8) : 1];
};

struct _result_strings__Builder {
	bool is_error;
	IError err;
	byte data[sizeof(strings__Builder) > 1 ? sizeof(strings__Builder) : 1];
};

struct _result_u32 {
	bool is_error;
	IError err;
	byte data[sizeof(u32) > 1 ? sizeof(u32) : 1];
};

struct _result_Array_net__Addr {
	bool is_error;
	IError err;
	byte data[sizeof(Array_net__Addr) > 1 ? sizeof(Array_net__Addr) : 1];
};

struct _result_multi_return_string_u16 {
	bool is_error;
	IError err;
	byte data[sizeof(multi_return_string_u16) > 1 ? sizeof(multi_return_string_u16) : 1];
};

struct _result_net__Addr {
	bool is_error;
	IError err;
	byte data[sizeof(net__Addr) > 1 ? sizeof(net__Addr) : 1];
};

struct _result_bool {
	bool is_error;
	IError err;
	byte data[sizeof(bool) > 1 ? sizeof(bool) : 1];
};

struct _result_net__Connection {
	bool is_error;
	IError err;
	byte data[sizeof(net__Connection) > 1 ? sizeof(net__Connection) : 1];
};

struct _result_net__TcpConn_ptr {
	bool is_error;
	IError err;
	byte data[sizeof(net__TcpConn*) > 1 ? sizeof(net__TcpConn*) : 1];
};

struct _result_net__TcpSocket {
	bool is_error;
	IError err;
	byte data[sizeof(net__TcpSocket) > 1 ? sizeof(net__TcpSocket) : 1];
};

struct _result_time__Time {
	bool is_error;
	IError err;
	byte data[sizeof(time__Time) > 1 ? sizeof(time__Time) : 1];
};

struct _result_u16 {
	bool is_error;
	IError err;
	byte data[sizeof(u16) > 1 ? sizeof(u16) : 1];
};

struct _result_net__mbedtls__SSLConn_ptr {
	bool is_error;
	IError err;
	byte data[sizeof(net__mbedtls__SSLConn*) > 1 ? sizeof(net__mbedtls__SSLConn*) : 1];
};

struct _result_net__ssl__SSLConn_ptr {
	bool is_error;
	IError err;
	byte data[sizeof(net__ssl__SSLConn*) > 1 ? sizeof(net__ssl__SSLConn*) : 1];
};

struct _result_main__Info_general {
	bool is_error;
	IError err;
	byte data[sizeof(main__Info_general) > 1 ? sizeof(main__Info_general) : 1];
};

struct _result_Map_string_main__Info_command {
	bool is_error;
	IError err;
	byte data[sizeof(Map_string_main__Info_command) > 1 ? sizeof(Map_string_main__Info_command) : 1];
};

struct _result_main__Info_command {
	bool is_error;
	IError err;
	byte data[sizeof(main__Info_command) > 1 ? sizeof(main__Info_command) : 1];
};

struct _result_Array_string {
	bool is_error;
	IError err;
	byte data[sizeof(Array_string) > 1 ? sizeof(Array_string) : 1];
};


// V definitions:
static char * v_typeof_interface_IError(int sidx);
int v_typeof_interface_idx_IError(int sidx);
static char * v_typeof_interface_net__http__Downloader(int sidx);
int v_typeof_interface_idx_net__http__Downloader(int sidx);
static char * v_typeof_interface_net__http__Handler(int sidx);
int v_typeof_interface_idx_net__http__Handler(int sidx);
static char * v_typeof_interface_net__Dialer(int sidx);
int v_typeof_interface_idx_net__Dialer(int sidx);
static char * v_typeof_interface_net__Connection(int sidx);
int v_typeof_interface_idx_net__Connection(int sidx);
static char * v_typeof_interface_io__Reader(int sidx);
int v_typeof_interface_idx_io__Reader(int sidx);
static char * v_typeof_interface_io__Writer(int sidx);
int v_typeof_interface_idx_io__Writer(int sidx);
static char * v_typeof_interface_io__RandomReader(int sidx);
int v_typeof_interface_idx_io__RandomReader(int sidx);
static char * v_typeof_interface_io__ReaderWriter(int sidx);
int v_typeof_interface_idx_io__ReaderWriter(int sidx);
static char * v_typeof_interface_io__RandomWriter(int sidx);
int v_typeof_interface_idx_io__RandomWriter(int sidx);
static char * v_typeof_interface_rand__PRNG(int sidx);
int v_typeof_interface_idx_rand__PRNG(int sidx);
static char * v_typeof_interface_v__embed_file__Decoder(int sidx);
int v_typeof_interface_idx_v__embed_file__Decoder(int sidx);
static char * v_typeof_interface_hash__Hash(int sidx);
int v_typeof_interface_idx_hash__Hash(int sidx);
static char * v_typeof_interface_hash__Hash32er(int sidx);
int v_typeof_interface_idx_hash__Hash32er(int sidx);
static char * v_typeof_interface_hash__Hash64er(int sidx);
int v_typeof_interface_idx_hash__Hash64er(int sidx);
// end of definitions #endif
strings__Builder strings__new_builder(int initial_size);
Array_u8 strings__Builder_reuse_as_plain_u8_array(strings__Builder* b);
void strings__Builder_write_ptr(strings__Builder* b, u8* ptr, int len);
void strings__Builder_write_rune(strings__Builder* b, rune r);
void strings__Builder_write_runes(strings__Builder* b, Array_rune runes);
void strings__Builder_write_u8(strings__Builder* b, u8 data);
void strings__Builder_write_byte(strings__Builder* b, u8 data);
void strings__Builder_write_decimal(strings__Builder* b, i64 n);
_result_int strings__Builder_write(strings__Builder* b, Array_u8 data);
void strings__Builder_drain_builder(strings__Builder* b, strings__Builder* other, int other_new_cap);
u8 strings__Builder_byte_at(strings__Builder* b, int n);
void strings__Builder_write_string(strings__Builder* b, string s);
void strings__Builder_write_string2(strings__Builder* b, string s1, string s2);
void strings__Builder_go_back(strings__Builder* b, int n);
string strings__Builder_spart(strings__Builder* b, int start_pos, int n);
string strings__Builder_cut_last(strings__Builder* b, int n);
string strings__Builder_cut_to(strings__Builder* b, int pos);
void strings__Builder_go_back_to(strings__Builder* b, int pos);
void strings__Builder_writeln(strings__Builder* b, string s);
void strings__Builder_writeln2(strings__Builder* b, string s1, string s2);
string strings__Builder_last_n(strings__Builder* b, int n);
string strings__Builder_after(strings__Builder* b, int n);
string strings__Builder_str(strings__Builder* b);
void strings__Builder_ensure_cap(strings__Builder* b, int n);
void strings__Builder_grow_len(strings__Builder* b, int n);
void strings__Builder_free(strings__Builder* b);
int math__bits__trailing_zeros_32(u32 x);
int math__bits__trailing_zeros_64(u64 x);
int math__bits__len_32(u32 x);
multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y);
_result_u64 strconv__common_parse_uint(string s, int _base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit);
multi_return_u64_int strconv__common_parse_uint2(string s, int _base, int _bit_size);
_result_i64 strconv__common_parse_int(string _s, int base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit);
string strconv__Dec32_get_string_32(strconv__Dec32 d, bool neg, int i_n_digit, int i_pad_digit);
VV_LOC multi_return_strconv__Dec32_bool strconv__f32_to_decimal_exact_int(u32 i_mant, u32 exp);
VV_LOC strconv__Dec32 strconv__f32_to_decimal(u32 mant, u32 exp);
string strconv__f32_to_str(f32 f, int n_digit);
VV_LOC string strconv__Dec64_get_string_64(strconv__Dec64 d, bool neg, int i_n_digit, int i_pad_digit);
VV_LOC multi_return_strconv__Dec64_bool strconv__f64_to_decimal_exact_int(u64 i_mant, u64 exp);
VV_LOC strconv__Dec64 strconv__f64_to_decimal(u64 mant, u64 exp);
string strconv__f64_to_str(f64 f, int n_digit);
string strconv__f64_to_str_pad(f64 f, int n_digit);
string strconv__format_str(string s, strconv__BF_param p);
void strconv__format_str_sb(string s, strconv__BF_param p, strings__Builder* sb);
void strconv__format_dec_sb(u64 d, strconv__BF_param p, strings__Builder* res);
string strconv__f64_to_str_lnd1(f64 f, int dec_digit);
string strconv__format_fl(f64 f, strconv__BF_param p);
string strconv__format_es(f64 f, strconv__BF_param p);
string strconv__remove_tail_zeros(string s);
string strconv__ftoa_64(f64 f);
string strconv__ftoa_32(f32 f);
string strconv__format_int(i64 n, int radix);
string strconv__format_uint(u64 n, int radix);
string strconv__f32_to_str_l(f32 f);
string strconv__f32_to_str_l_with_dot(f32 f);
string strconv__f64_to_str_l(f64 f);
string strconv__f64_to_str_l_with_dot(f64 f);
string strconv__fxx_to_str_l_parse(string s);
string strconv__fxx_to_str_l_parse_with_dot(string s);
VV_LOC u32 strconv__bool_to_u32(bool b);
VV_LOC u64 strconv__bool_to_u64(bool b);
VV_LOC string strconv__get_string_special(bool neg, bool expZero, bool mantZero);
VV_LOC u32 strconv__mul_shift_32(u32 m, u64 mul, int ishift);
VV_LOC u32 strconv__mul_pow5_invdiv_pow2(u32 m, u32 q, int j);
VV_LOC u32 strconv__mul_pow5_div_pow2(u32 m, u32 i, int j);
VV_LOC u32 strconv__pow5_factor_32(u32 i_v);
VV_LOC bool strconv__multiple_of_power_of_five_32(u32 v, u32 p);
VV_LOC bool strconv__multiple_of_power_of_two_32(u32 v, u32 p);
VV_LOC u32 strconv__log10_pow2(int e);
VV_LOC u32 strconv__log10_pow5(int e);
VV_LOC int strconv__pow5_bits(int e);
VV_LOC u64 strconv__shift_right_128(strconv__Uint128 v, int shift);
VV_LOC u64 strconv__mul_shift_64(u64 m, strconv__Uint128 mul, int shift);
VV_LOC u32 strconv__pow5_factor_64(u64 v_i);
VV_LOC bool strconv__multiple_of_power_of_five_64(u64 v, u32 p);
VV_LOC bool strconv__multiple_of_power_of_two_64(u64 v, u32 p);
int strconv__dec_digits(u64 n);
void strconv__v_printf(string str, Array_voidptr pt);
string strconv__v_sprintf(string str, Array_voidptr pt);
VV_LOC void strconv__v_sprintf_panic(int idx, int len);
VV_LOC f64 strconv__fabs(f64 x);
string strconv__format_fl_old(f64 f, strconv__BF_param p);
VV_LOC string strconv__format_es_old(f64 f, strconv__BF_param p);
VV_LOC string strconv__remove_tail_zeros_old(string s);
string strconv__format_dec_old(u64 d, strconv__BF_param p);
VV_LOC array __new_array(int mylen, int cap, int elm_size);
VV_LOC array __new_array_with_default(int mylen, int cap, int elm_size, voidptr val);
VV_LOC array __new_array_with_multi_default(int mylen, int cap, int elm_size, voidptr val);
VV_LOC array __new_array_with_array_default(int mylen, int cap, int elm_size, array val, int depth);
VV_LOC array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array);
void array_ensure_cap(array* a, int required);
void array_insert(array* a, int i, voidptr val);
VV_LOC void array_insert_many(array* a, int i, voidptr val, int size);
void array_prepend(array* a, voidptr val);
VV_LOC void array_prepend_many(array* a, voidptr val, int size);
void array_clear(array* a);
void array_trim(array* a, int index);
VV_LOC voidptr array_get_unsafe(array a, int i);
VV_LOC voidptr array_get(array a, int i);
VV_LOC voidptr array_get_with_check(array a, int i);
voidptr array_first(array a);
VV_LOC array array_slice(array a, int start, int _end);
VV_LOC array array_slice_ni(array a, int _start, int _end);
VV_LOC array array_clone_static_to_depth(array a, int depth);
array array_clone(array* a);
array array_clone_to_depth(array* a, int depth);
VV_LOC void array_set_unsafe(array* a, int i, voidptr val);
VV_LOC void array_set(array* a, int i, voidptr val);
VV_LOC void array_push(array* a, voidptr val);
void array_push_many(array* a, voidptr val, int size);
void array_free(array* a);
array array_filter(array a, bool (*predicate)(voidptr ));
array array_map(array a, voidptr (*callback)(voidptr ));
void Array_string_free(Array_string* a);
string Array_string_str(Array_string a);
int copy(Array_u8* dst, Array_u8 src);
Array_u8 voidptr_vbytes(voidptr data, int len);
Array_u8 u8_vbytes(u8* data, int len);
void u8_free(u8* data);
VV_LOC void panic_on_negative_len(int len);
VV_LOC void panic_on_negative_cap(int cap);
VV_LOC array __new_array_noscan(int mylen, int cap, int elm_size);
VV_LOC array __new_array_with_default_noscan(int mylen, int cap, int elm_size, voidptr val);
VV_LOC array __new_array_with_multi_default_noscan(int mylen, int cap, int elm_size, voidptr val);
VV_LOC array __new_array_with_array_default_noscan(int mylen, int cap, int elm_size, array val);
VV_LOC array new_array_from_c_array_noscan(int len, int cap, int elm_size, voidptr c_array);
VV_LOC void array_ensure_cap_noscan(array* a, int required);
VV_LOC array array_repeat_to_depth_noscan(array a, int count, int depth);
VV_LOC void array_insert_noscan(array* a, int i, voidptr val);
VV_LOC void array_insert_many_noscan(array* a, int i, voidptr val, int size);
VV_LOC void array_prepend_noscan(array* a, voidptr val);
VV_LOC void array_prepend_many_noscan(array* a, voidptr val, int size);
VV_LOC voidptr array_pop_noscan(array* a);
VV_LOC array array_clone_static_to_depth_noscan(array a, int depth);
VV_LOC array array_clone_to_depth_noscan(array* a, int depth);
VV_LOC void array_push_noscan(array* a, voidptr val);
VV_LOC void array_push_many_noscan(array* a, voidptr val, int size);
VV_LOC array array_reverse_noscan(array a);
VV_LOC void array_grow_cap_noscan(array* a, int amount);
VV_LOC void array_grow_len_noscan(array* a, int amount);
void print_backtrace(void);
bool print_backtrace_skipping_top_frames(int skipframes);
VV_LOC bool print_backtrace_skipping_top_frames_tcc(int skipframes);
VV_LOC void v_segmentation_fault_handler(i32 signal_number);
void _v_exit(int code);
_result_void at_exit(void (*cb)());
void panic_option_not_set(string s);
void panic_result_not_set(string s);
string vcurrent_hash(void);
void _v_panic(string s);
void panic_n(string s, i64 number1);
void panic_n2(string s, i64 number1, i64 number2);
void eprintln(string s);
void eprint(string s);
void flush_stdout(void);
void flush_stderr(void);
void unbuffer_stdout(void);
void print(string s);
void println(string s);
VV_LOC void _writeln_to_fd(int fd, string s);
VV_LOC void _write_buf_to_fd(int fd, u8* buf, int buf_len);
VV_LOC void _memory_panic(string fname, isize size);
u8* _v_malloc(isize n);
u8* malloc_noscan(isize n);
VV_LOC u64 __at_least_one(u64 how_many);
u8* malloc_uncollectable(isize n);
u8* v_realloc(u8* b, isize n);
u8* realloc_data(u8* old_data, int old_size, int new_size);
u8* vcalloc(isize n);
u8* vcalloc_noscan(isize n);
void _v_free(voidptr ptr);
voidptr memdup(voidptr src, isize sz);
voidptr memdup_noscan(voidptr src, isize sz);
voidptr memdup_uncollectable(voidptr src, isize sz);
VV_LOC int v_fixed_index(int i, int len);
Array_string arguments(void);
bool isnil(voidptr v);
void VAssertMetaInfo_free(VAssertMetaInfo* ami);
void gc_set_warn_proc(void (*cb)(char* msg, usize arg));
VV_LOC void internal_gc_warn_proc_none(char* msg, usize arg);
VV_LOC void restore_codepage(void);
VV_LOC int is_terminal(int fd);
VV_LOC void builtin_init(void);
VV_LOC void add_vectored_exception_handler(int (*handler)(ExceptionPointers* ));
VV_LOC int __attribute__((stdcall)) unhandled_exception_handler(ExceptionPointers* e);
VV_LOC void add_unhandled_exception_handler(void);
int vstrlen(u8* s);
int vstrlen_char(char* s);
voidptr vmemcpy(voidptr dest, const voidptr const_src, isize n);
voidptr vmemmove(voidptr dest, const voidptr const_src, isize n);
int vmemcmp(const voidptr const_s1, const voidptr const_s2, isize n);
voidptr vmemset(voidptr s, int c, isize n);
string f64_str(f64 x);
string f64_strg(f64 x);
string float_literal_str(float_literal d);
string f32_str(f32 x);
string f32_strg(f32 x);
f32 f32_abs(f32 a);
f64 f64_abs(f64 a);
f64 f64_max(f64 a, f64 b);
string ptr_str(voidptr ptr);
string isize_str(isize x);
string usize_str(usize x);
string char_str(char* cptr);
VV_LOC string int_str_l(int nn, int max);
string i8_str(i8 n);
string i16_str(i16 n);
string u16_str(u16 n);
string i32_str(i32 n);
string int_str(int n);
string u32_str(u32 nn);
string int_literal_str(int_literal n);
string i64_str(i64 nn);
string u64_str(u64 nn);
string bool_str(bool b);
VV_LOC string u64_to_hex(u64 nn, u8 len);
VV_LOC string u64_to_hex_no_leading_zeros(u64 nn, u8 len);
string i8_hex(i8 nn);
string u16_hex(u16 nn);
string i16_hex(i16 nn);
string u32_hex(u32 nn);
string int_hex(int nn);
string u64_hex(u64 nn);
string i64_hex(i64 nn);
string voidptr_str(voidptr nn);
string byteptr_str(byteptr nn);
string charptr_str(charptr nn);
string u8_str(u8 b);
string u8_ascii_str(u8 b);
string Array_u8_bytestr(Array_u8 b);
VV_LOC string _Atomic__int_str(int x);
int int_min(int a, int b);
VV_LOC bool fast_string_eq(string a, string b);
VV_LOC u64 map_hash_string(voidptr pkey);
VV_LOC u64 map_hash_int_1(voidptr pkey);
VV_LOC u64 map_hash_int_2(voidptr pkey);
VV_LOC u64 map_hash_int_4(voidptr pkey);
VV_LOC u64 map_hash_int_8(voidptr pkey);
VV_LOC void DenseArray_zeros_to_end(DenseArray* d);
VV_LOC DenseArray new_dense_array(int key_bytes, int value_bytes);
VV_LOC voidptr DenseArray_key(DenseArray* d, int i);
VV_LOC voidptr DenseArray_value(DenseArray* d, int i);
VV_LOC bool DenseArray_has_index(DenseArray* d, int i);
VV_LOC int DenseArray_expand(DenseArray* d);
VV_LOC bool map_eq_string(voidptr a, voidptr b);
VV_LOC bool map_eq_int_1(voidptr a, voidptr b);
VV_LOC bool map_eq_int_2(voidptr a, voidptr b);
VV_LOC bool map_eq_int_4(voidptr a, voidptr b);
VV_LOC bool map_eq_int_8(voidptr a, voidptr b);
VV_LOC void map_clone_string(voidptr dest, voidptr pkey);
VV_LOC void map_clone_int_1(voidptr dest, voidptr pkey);
VV_LOC void map_clone_int_2(voidptr dest, voidptr pkey);
VV_LOC void map_clone_int_4(voidptr dest, voidptr pkey);
VV_LOC void map_clone_int_8(voidptr dest, voidptr pkey);
VV_LOC void map_free_string(voidptr pkey);
VV_LOC void map_free_nop(voidptr _d1);
VV_LOC map new_map(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ));
VV_LOC map new_map_init(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
VV_LOC map new_map_update_init(map* update, int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
map map_move(map* m);
void map_clear(map* m);
VV_LOC multi_return_u32_u32 map_key_to_index(map* m, voidptr pkey);
VV_LOC multi_return_u32_u32 map_meta_less(map* m, u32 _index, u32 _metas);
VV_LOC void map_meta_greater(map* m, u32 _index, u32 _metas, u32 kvi);
VV_LOC void map_ensure_extra_metas(map* m, u32 probe_count);
VV_LOC void map_set(map* m, voidptr key, voidptr value);
VV_LOC void map_expand(map* m);
VV_LOC void map_rehash(map* m);
void map_reserve(map* m, u32 meta_bytes);
VV_LOC void map_cached_rehash(map* m, u32 old_cap);
VV_LOC voidptr map_get_and_set(map* m, voidptr key, voidptr zero);
VV_LOC voidptr map_get(map* m, voidptr key, voidptr zero);
VV_LOC voidptr map_get_check(map* m, voidptr key);
VV_LOC bool map_exists(map* m, voidptr key);
VV_LOC void DenseArray_delete(DenseArray* d, int i);
void map_delete(map* m, voidptr key);
array map_keys(map* m);
array map_values(map* m);
VV_LOC DenseArray DenseArray_clone(DenseArray* d);
map map_clone(map* m);
void map_free(map* m);
VV_LOC u8* __malloc_at_least_one(u64 how_many_bytes, bool noscan);
VV_LOC DenseArray new_dense_array_noscan(int key_bytes, bool key_noscan, int value_bytes, bool value_noscan);
VV_LOC map new_map_noscan_key(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ));
VV_LOC map new_map_noscan_value(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ));
VV_LOC map new_map_noscan_key_value(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ));
VV_LOC map new_map_init_noscan_key(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
VV_LOC map new_map_init_noscan_value(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
VV_LOC map new_map_init_noscan_key_value(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values);
void IError_free(IError* ie);
VV_LOC void _option_none(voidptr data, _option* option, int size);
VV_LOC void _option_ok(voidptr data, _option* option, int size);
VV_LOC void _option_clone(_option* current, _option* option, int size);
VV_LOC string None___str(None__ _d1);
string none_str(none _d1);
VV_LOC void _result_ok(voidptr data, _result* res, int size);
string IError_str(IError err);
string Error_msg(Error err);
int Error_code(Error err);
string MessageError_str(MessageError err);
string MessageError_msg(MessageError err);
int MessageError_code(MessageError err);
void MessageError_free(MessageError* err);
IError _v_error(string message);
IError error_with_code(string message, int code);
string rune_str(rune c);
string Array_rune_string(Array_rune ra);
rune rune_to_upper(rune c);
rune rune_to_lower(rune c);
VV_LOC rune rune_map_to(rune c, MapMode mode);
VV_LOC void mapnode_free(mapnode* n);
void SortedMap_free(SortedMap* m);
Array_rune string_runes(string s);
string cstring_to_vstring(const char* const_s);
string tos_clone(const u8* const_s);
string tos(u8* s, int len);
string tos2(u8* s);
string tos3(char* s);
string tos4(u8* s);
string tos5(char* s);
string u8_vstring_with_len(u8* bp, int len);
string char_vstring_literal_with_len(char* cp, int len);
bool string_is_pure_ascii(string s);
VV_LOC string string_clone_static(string a);
string string_clone(string a);
string string_replace_once(string s, string rep, string with);
string string_replace(string s, string rep, string with);
int string_int(string s);
u8 string_u8(string s);
u64 string_u64(string s);
VV_LOC bool string__eq(string s, string a);
VV_LOC bool string__lt(string s, string a);
VV_LOC string string__plus(string s, string a);
VV_LOC string string_plus_two(string s, string a, string b);
Array_string string_split(string s, string delim);
Array_string string_split_nth(string s, string delim, int nth);
Array_string string_split_into_lines(string s);
string string_substr(string s, int start, int _end);
string string_substr_unsafe(string s, int start, int _end);
_result_string string_substr_with_check(string s, int start, int _end);
string string_substr_ni(string s, int _start, int _end);
VV_LOC int string_index_(string s, string p);
_option_int string_index(string s, string p);
_option_int string_last_index(string s, string needle);
VV_LOC int string_index_kmp(string s, string p);
VV_LOC int string_index_last_(string s, string p);
int string_index_after_(string s, string p, int start);
int string_index_u8(string s, u8 c);
int string_count(string s, string substr);
bool string_contains_u8(string s, u8 x);
bool string_contains(string s, string substr);
bool string_contains_only(string s, string chars);
bool string_starts_with(string s, string p);
bool string_ends_with(string s, string p);
string string_to_lower_ascii(string s);
string string_to_lower(string s);
string string_to_upper_ascii(string s);
string string_to_upper(string s);
string string_capitalize(string s);
string string_trim_space(string s);
string string_trim(string s, string cutset);
VV_LOC string string_trim_chars(string s, string cutset, TrimMode mode);
VV_LOC string string_trim_runes(string s, string cutset, TrimMode mode);
string string_trim_left(string s, string cutset);
string string_trim_right(string s, string cutset);
string string_str(string s);
VV_LOC u8 string_at(string s, int idx);
VV_LOC _option_u8 string_at_with_check(string s, int idx);
bool u8_is_letter(u8 c);
bool u8_is_alnum(u8 c);
void string_free(string* s);
string string_all_before_last(string s, string sub);
string string_all_after(string s, string sub);
string string_all_after_last(string s, string sub);
string Array_string_join(Array_string a, string sep);
Array_u8 string_bytes(string s);
string string_repeat(string s, int count);
RunesIterator string_runes_iterator(string s);
_option_rune RunesIterator_next(RunesIterator* ri);
string byteptr_vstring(byteptr bp);
string byteptr_vstring_with_len(byteptr bp, int len);
string charptr_vstring(charptr cp);
string charptr_vstring_with_len(charptr cp, int len);
string byteptr_vstring_literal(byteptr bp);
string charptr_vstring_literal(charptr cp);
string StrIntpType_str(StrIntpType x);
VV_LOC f32 fabs32(f32 x);
VV_LOC f64 fabs64(f64 x);
VV_LOC u64 abs64(i64 x);
VV_LOC void StrIntpData_process_str_intp_data(StrIntpData* data, strings__Builder* sb);
string str_intp(int data_len, StrIntpData* input_base);
u16* string_to_wide(string _str);
string string_from_wide(u16* _wstr);
string string_from_wide2(u16* _wstr, int len);
int utf8_char_len(u8 b);
string utf32_to_str(u32 code);
string utf32_to_str_no_malloc(u32 code, u8* buf);
int utf32_decode_to_buffer(u32 code, u8* buf);
int string_utf32_code(string _rune);
VV_LOC rune impl_utf8_to_utf32(u8* _bytes, int _bytes_len);
int utf8_str_visible_length(string s);
bool ArrayFlags_has(ArrayFlags* e, ArrayFlags flag_);
void ArrayFlags_set(ArrayFlags* e, ArrayFlags flag_);
void ArrayFlags_clear(ArrayFlags* e, ArrayFlags flag_);
_result_voidptr json__decode(voidptr typ, string s);
VV_LOC int json__decode_int(struct cJSON* root);
VV_LOC i8 json__decode_i8(struct cJSON* root);
VV_LOC i16 json__decode_i16(struct cJSON* root);
VV_LOC i64 json__decode_i64(struct cJSON* root);
VV_LOC u8 json__decode_byte(struct cJSON* root);
VV_LOC u8 json__decode_u8(struct cJSON* root);
VV_LOC u16 json__decode_u16(struct cJSON* root);
VV_LOC u32 json__decode_u32(struct cJSON* root);
VV_LOC u64 json__decode_u64(struct cJSON* root);
VV_LOC f32 json__decode_f32(struct cJSON* root);
VV_LOC f64 json__decode_f64(struct cJSON* root);
VV_LOC rune json__decode_rune(struct cJSON* root);
VV_LOC string json__decode_string(struct cJSON* root);
VV_LOC bool json__decode_bool(struct cJSON* root);
VV_LOC struct cJSON* json__encode_int(int val);
VV_LOC struct cJSON* json__encode_i8(i8 val);
VV_LOC struct cJSON* json__encode_i16(i16 val);
VV_LOC struct cJSON* json__encode_i64(i64 val);
VV_LOC struct cJSON* json__encode_byte(u8 root);
VV_LOC struct cJSON* json__encode_u8(u8 val);
VV_LOC struct cJSON* json__encode_u16(u16 val);
VV_LOC struct cJSON* json__encode_u32(u32 val);
VV_LOC struct cJSON* json__encode_u64(u64 val);
VV_LOC struct cJSON* json__encode_f32(f32 val);
VV_LOC struct cJSON* json__encode_f64(f64 val);
VV_LOC struct cJSON* json__encode_bool(bool val);
VV_LOC struct cJSON* json__encode_rune(rune val);
VV_LOC struct cJSON* json__encode_string(string val);
VV_LOC struct cJSON* json__json_parse(string s);
VV_LOC string json__json_print(struct cJSON* data);
VV_LOC string json__json_print_pretty(struct cJSON* data);
VV_LOC Array_string vargs__parse_option(string v);
VV_LOC bool vargs__starts_with_hypen(string v);
VV_LOC void vargs__Args_insert_option(vargs__Args* v, string name, string val);
vargs__Args vargs__new(Array_string a, int start_at);
vargs__Args vargs__Args_parse(vargs__Args* v);
string vargs__Args_str(vargs__Args v);
i64 time__portable_timegm(struct tm* t);
int time__days_from_unix_epoch(int year, int month, int day);
i64 time__Duration_nanoseconds(time__Duration d);
i64 time__Duration_microseconds(time__Duration d);
i64 time__Duration_milliseconds(time__Duration d);
f64 time__Duration_seconds(time__Duration d);
string time__Duration_str(time__Duration d);
VV_LOC void time__int_to_byte_array_no_pad(int value, Array_u8* arr, int size);
string time__Time_format_ss(time__Time t);
string time__Time_http_header_string(time__Time t);
bool time__Time__eq(time__Time t1, time__Time t2);
bool time__Time__lt(time__Time t1, time__Time t2);
time__Duration time__Time__minus(time__Time lhs, time__Time rhs);
string time__TimeParseError_msg(time__TimeParseError err);
time__StopWatch time__new_stopwatch(time__StopWatchOptions opts);
void time__StopWatch_start(time__StopWatch* t);
time__Duration time__StopWatch_elapsed(time__StopWatch t);
time__Time time__now(void);
VV_LOC time__Time time__time_with_unix(time__Time t);
string time__Time_str(time__Time t);
int time__Duration_sys_milliseconds(time__Duration d);
string time__Time_smonth(time__Time t);
i64 time__Time_unix(time__Time t);
time__Time time__Time_add(time__Time t, time__Duration duration_in_nanosecond);
int time__day_of_week(int y, int m, int d);
int time__Time_day_of_week(time__Time t);
string time__Time_weekday_str(time__Time t);
time__Time time__Time_as_local(time__Time t);
VV_LOC i64 time__make_unix_time(struct tm t);
VV_LOC u64 time__init_win_time_freq(void);
VV_LOC u64 time__init_win_time_start(void);
u64 time__sys_mono_now(void);
VV_LOC time__Time time__win_now(void);
VV_LOC i64 time__SystemTime_unix(time__SystemTime st);
VV_LOC time__Time time__linux_now(void);
void time__sleep(time__Duration duration);
time__Time time__unix(i64 epoch);
time__Time time__unix_nanosecond(i64 abs_unix_timestamp, int nanosecond);
VV_LOC multi_return_int_int_int time__calculate_date_from_day_offset(i64 day_offset_);
VV_LOC multi_return_int_int_int time__calculate_time_from_second_offset(i64 second_offset_);
VV_LOC string net__urllib__error_msg(string message, string val);
VV_LOC bool net__urllib__should_escape(u8 c, net__urllib__EncodingMode mode);
VV_LOC _result_string net__urllib__unescape(string s_, net__urllib__EncodingMode mode);
VV_LOC string net__urllib__escape(string s, net__urllib__EncodingMode mode);
VV_LOC bool net__urllib__Userinfo_empty(net__urllib__Userinfo* u);
VV_LOC string net__urllib__Userinfo_str(net__urllib__Userinfo* u);
string net__urllib__URL_escaped_path(net__urllib__URL* u);
VV_LOC bool net__urllib__valid_encoded_path(string s);
string net__urllib__URL_str(net__urllib__URL u);
bool net__urllib__ishex(u8 c);
VV_LOC u8 net__urllib__unhex(u8 c);
_result_int io__BufferedReader_read(io__BufferedReader* r, Array_u8* buf);
void io__BufferedReader_free(io__BufferedReader* r);
VV_LOC bool io__BufferedReader_fill_buffer(io__BufferedReader* r);
VV_LOC bool io__BufferedReader_needs_fill(io__BufferedReader r);
bool io__BufferedReader_end_of_stream(io__BufferedReader r);
int io__BufferedWriter_buffered(io__BufferedWriter b);
_result_void io__BufferedWriter_flush(io__BufferedWriter* b);
int io__BufferedWriter_available(io__BufferedWriter b);
_result_int io__BufferedWriter_write(io__BufferedWriter* b, Array_u8 src);
_result_int io__MultiWriter_write(io__MultiWriter* m, Array_u8 buf);
VV_LOC string io__NotExpected_msg(io__NotExpected err);
VV_LOC int io__NotExpected_code(io__NotExpected err);
_result_int io__ReaderWriterImpl_read(io__ReaderWriterImpl* r, Array_u8* buf);
_result_int io__ReaderWriterImpl_write(io__ReaderWriterImpl* r, Array_u8 buf);
strings__textscanner__TextScanner strings__textscanner__new(string input);
void strings__textscanner__TextScanner_free(strings__textscanner__TextScanner* ss);
int strings__textscanner__TextScanner_next(strings__textscanner__TextScanner* ss);
void strings__textscanner__TextScanner_skip_n(strings__textscanner__TextScanner* ss, int n);
int strings__textscanner__TextScanner_peek(strings__textscanner__TextScanner* ss);
int strings__textscanner__TextScanner_peek_back(strings__textscanner__TextScanner* ss);
int strings__textscanner__TextScanner_peek_back_n(strings__textscanner__TextScanner* ss, int n);
int strings__textscanner__TextScanner_current(strings__textscanner__TextScanner* ss);
u16 net__conv__hton16(u16 host);
u16 net__conv__ntoh16(u16 net);
u16 net__conv__reverse_bytes_u16(u16 a);
u64 hash__wymum(u64 a, u64 b);
string os__getenv(string key);
_option_string os__getenv_opt(string key);
int os__setenv(string name, string value, bool overwrite);
VV_LOC string os__NotExpected_msg(os__NotExpected err);
VV_LOC int os__NotExpected_code(os__NotExpected err);
_result_os__File os__create(string path);
_result_int os__File_read(os__File* f, Array_u8* buf);
_result_int os__File_write(os__File* f, Array_u8 buf);
VV_LOC _result_int os__fread(voidptr ptr, int item_size, int items, FILE* stream);
_result_int os__File_read_from(os__File* f, u64 pos, Array_u8* buf);
string os__FileNotOpenedError_msg(os__FileNotOpenedError err);
string os__SizeOfTypeIs0Error_msg(os__SizeOfTypeIs0Error err);
VV_LOC IError os__error_file_not_opened(void);
bool os__is_abs_path(string path);
string os__abs_path(string path);
string os__norm_path(string path);
VV_LOC string os__clean_path(string path);
VV_LOC int os__win_volume_len(string path);
VV_LOC bool os__is_slash(u8 b);
VV_LOC bool os__is_unc_path(string path);
VV_LOC bool os__has_drive_letter(string path);
VV_LOC bool os__starts_w_slash_slash(string path);
VV_LOC bool os__is_drive_rooted(string path);
VV_LOC bool os__is_normal_path(string path);
VV_LOC bool os__is_curr_dir_ref(int byte_one, int byte_two, int byte_three);
_result_Array_u8 os__read_bytes(string path);
VV_LOC _result_int os__find_cfile_size(FILE* fp);
VV_LOC _result_strings__Builder os__slurp_file_in_builder(FILE* fp);
_result_void os__cp(string src, string dst);
_result_FILE_ptr os__vfopen(string path, string mode);
int os__fileno(voidptr cfile);
string os__posix_get_error_msg(int code);
bool os__exists(string path);
bool os__is_executable(string path);
string os__executable(void);
string os__getwd(void);
string os__real_path(string fpath);
VV_LOC void os__normalize_drive_letter(string path);
IError os__error_posix(os__SystemError e);
IError os__error_win32(os__SystemError e);
void os__Result_free(os__Result* result);
VV_LOC string os__executable_fallback(void);
string os__dir(string path);
string os__user_os(void);
string os__ExecutableNotFoundError_msg(os__ExecutableNotFoundError err);
VV_LOC IError os__error_failed_to_find_executable(void);
_result_string os__find_abs_path_of_executable(string exe_name);
bool os__is_file(string path);
string os__join_path(string base, Array_string dirs);
string os__join_path_single(string base, string elem);
VV_LOC void os__normalize_path_in_builder(strings__Builder* sb);
_result_void os__mkdir_all(string opath, os__MkdirParams params);
string os__resource_abs_path(string path);
bool os__is_dir(string path);
_result_void os__mkdir(string path, os__MkdirParams params);
VV_LOC voidptr os__ptr_win_get_error_msg(u32 code);
string os__get_error_msg(int code);
void os__File_close(os__File* f);
void os__Process_close(os__Process* p);
void os__Process_free(os__Process* p);
VV_LOC u32 rand__seed__nr_next(u32 prev);
Array_u32 rand__seed__time_seed_array(int count);
u64 rand__seed__time_seed_64(void);
int runtime__nr_jobs(void);
int runtime__nr_cpus(void);
string v__embed_file__EmbedFileData_str(v__embed_file__EmbedFileData ed);
void v__embed_file__EmbedFileData_free(v__embed_file__EmbedFileData* ed);
string v__embed_file__EmbedFileData_to_string(v__embed_file__EmbedFileData* original);
u8* v__embed_file__EmbedFileData_data(v__embed_file__EmbedFileData* ed);
v__embed_file__EmbedFileIndexEntry* v__embed_file__find_index_entry_by_path(voidptr start, string path, string algo);
VV_LOC void v__embed_file__reload_from_file_at_runtime(v__embed_file__EmbedFileData* ed);
void rand__wyrand__WyRandRNG_seed(rand__wyrand__WyRandRNG* rng, Array_u32 seed_data);
u8 rand__wyrand__WyRandRNG_u8(rand__wyrand__WyRandRNG* rng);
u16 rand__wyrand__WyRandRNG_u16(rand__wyrand__WyRandRNG* rng);
u32 rand__wyrand__WyRandRNG_u32(rand__wyrand__WyRandRNG* rng);
u64 rand__wyrand__WyRandRNG_u64(rand__wyrand__WyRandRNG* rng);
int rand__wyrand__WyRandRNG_block_size(rand__wyrand__WyRandRNG* rng);
void rand__wyrand__WyRandRNG_free(rand__wyrand__WyRandRNG* rng);
VV_LOC void rand__deinit(void);
VV_LOC void rand__init(void);
_result_u32 rand__PRNG_u32n(rand__PRNG* rng, u32 max);
_result_int rand__PRNG_intn(rand__PRNG* rng, int max);
rand__PRNG* rand__new_default(rand__config__PRNGConfigStruct config_);
_result_int rand__intn(int max);
VV_LOC sync__Channel* sync__new_channel_st(u32 n, u32 st);
VV_LOC sync__Channel* sync__new_channel_st_noscan(u32 n, u32 st);
string sync__Channel_auto_str(sync__Channel* ch, string __v_typename);
void sync__Channel_close(sync__Channel* ch);
int sync__Channel_len(sync__Channel* ch);
bool sync__Channel_closed(sync__Channel* ch);
void sync__Channel_push(sync__Channel* ch, voidptr src);
ChanState sync__Channel_try_push(sync__Channel* ch, voidptr src);
VV_LOC ChanState sync__Channel_try_push_priv(sync__Channel* ch, voidptr src, bool no_block);
bool sync__Channel_pop(sync__Channel* ch, voidptr dest);
ChanState sync__Channel_try_pop(sync__Channel* ch, voidptr dest);
VV_LOC ChanState sync__Channel_try_pop_priv(sync__Channel* ch, voidptr dest, bool no_block);
int sync__channel_select(Array_sync__Channel_ptr* channels, Array_sync__Direction dir, Array_voidptr* objrefs, time__Duration timeout);
string sync__Mutex_str(sync__Mutex* m);
string sync__RwMutex_str(sync__RwMutex* m);
sync__SpinLock* sync__new_spin_lock(void);
void sync__SpinLock_lock(sync__SpinLock* s);
void sync__SpinLock_unlock(sync__SpinLock* s);
void sync__Mutex_init(sync__Mutex* m);
void sync__RwMutex_init(sync__RwMutex* m);
void sync__Mutex_lock(sync__Mutex* m);
void sync__Mutex_unlock(sync__Mutex* m);
void sync__RwMutex_rlock(sync__RwMutex* m);
void sync__RwMutex_lock(sync__RwMutex* m);
void sync__RwMutex_runlock(sync__RwMutex* m);
void sync__RwMutex_unlock(sync__RwMutex* m);
void sync__Semaphore_init(sync__Semaphore* sem, u32 n);
void sync__Semaphore_post(sync__Semaphore* sem);
void sync__Semaphore_wait(sync__Semaphore* sem);
bool sync__Semaphore_try_wait(sync__Semaphore* sem);
bool sync__Semaphore_timed_wait(sync__Semaphore* sem, time__Duration timeout);
void sync__Semaphore_destroy(sync__Semaphore _v_toheap_s);
void sync__WaitGroup_init(sync__WaitGroup* wg);
net__Addr net__new_ip6(u16 port, Array_fixed_u8_16 addr);
net__Addr net__new_ip(u16 port, Array_fixed_u8_4 addr);
net__AddrFamily net__Addr_family(net__Addr a);
string net__Ip_str(net__Ip a);
string net__Ip6_str(net__Ip6 a);
u32 net__Addr_len(net__Addr a);
_result_Array_net__Addr net__resolve_addrs(string addr, net__AddrFamily family, net__SocketType typ);
_result_Array_net__Addr net__resolve_addrs_fuzzy(string addr, net__SocketType typ);
_result_Array_net__Addr net__resolve_ipaddrs(string addr, net__AddrFamily family, net__SocketType typ);
string net__Addr_str(net__Addr a);
net__Addr net__addr_from_socket_handle(int handle);
_result_net__Addr net__peer_addr_from_socket_handle(int handle);
int net__shutdown(int handle, net__ShutdownConfig config);
_result_void net__close(int handle);
VV_LOC _result_bool net__select(int handle, net__Select test, time__Duration timeout);
VV_LOC _result_bool net__select_deadline(int handle, net__Select test, time__Time deadline);
VV_LOC _result_void net__wait_for_common(int handle, time__Time deadline, time__Duration timeout, net__Select test);
VV_LOC _result_void net__wait_for_write(int handle, time__Time deadline, time__Duration timeout);
VV_LOC _result_void net__wait_for_read(int handle, time__Time deadline, time__Duration timeout);
_result_int net__socket_error_message(int potential_code, string s);
_result_int net__socket_error(int potential_code);
_result_void net__wrap_error(int error_code);
net__WsaError net__wsa_error(int code);
int net__error_code(void);
VV_LOC void net__init(void);
_result_net__Addr net__Socket_address(net__Socket* s);
_result_net__Connection net__TCPDialer_dial(net__TCPDialer t, string address);
_result_net__TcpConn_ptr net__dial_tcp(string oaddress);
_result_void net__TcpConn_close(net__TcpConn* c);
_result_int net__TcpConn_read_ptr(net__TcpConn _v_toheap_c, u8* buf_ptr, int len);
_result_int net__TcpConn_read(net__TcpConn _v_toheap_c, Array_u8* buf);
_result_time__Time net__TcpConn_read_deadline(net__TcpConn* c);
_result_int net__TcpConn_write_ptr(net__TcpConn* c, u8* b, int len);
_result_int net__TcpConn_write(net__TcpConn* c, Array_u8 bytes);
_result_time__Time net__TcpConn_write_deadline(net__TcpConn* c);
time__Duration net__TcpConn_read_timeout(net__TcpConn* c);
time__Duration net__TcpConn_write_timeout(net__TcpConn* c);
_result_void net__TcpConn_wait_for_read(net__TcpConn _v_toheap_c);
_result_void net__TcpConn_wait_for_write(net__TcpConn* c);
_result_net__Addr net__TcpConn_peer_addr(net__TcpConn* c);
_result_net__Addr net__TcpConn_addr(net__TcpConn* c);
string net__TcpConn_str(net__TcpConn _v_toheap_c);
_result_net__TcpSocket net__new_tcp_socket(net__AddrFamily family);
VV_LOC _result_void net__TcpSocket_set_option(net__TcpSocket* s, int level, int opt, int value);
_result_void net__TcpSocket_set_option_int(net__TcpSocket* s, net__SocketOption opt, int value);
VV_LOC _result_void net__TcpSocket_set_default_options(net__TcpSocket* s);
VV_LOC _result_void net__TcpSocket_close(net__TcpSocket* s);
VV_LOC _result_void net__TcpSocket_connect(net__TcpSocket* s, net__Addr a);
_result_int net__UdpConn_write_ptr(net__UdpConn* c, u8* b, int len);
_result_int net__UdpConn_write(net__UdpConn* c, Array_u8 buf);
_result_int net__UdpConn_write_to_ptr(net__UdpConn* c, net__Addr addr, u8* b, int len);
_result_time__Time net__UdpConn_write_deadline(net__UdpConn* c);
time__Duration net__UdpConn_write_timeout(net__UdpConn* c);
_result_void net__UdpConn_wait_for_write(net__UdpConn* c);
string net__UdpConn_str(net__UdpConn* c);
_option_net__Addr net__UdpSocket_remote(net__UdpSocket* s);
_result_u16 net__validate_port(int port);
_result_multi_return_string_u16 net__split_address(string addr);
VV_LOC void net__mbedtls__init(void);
net__mbedtls__SSLCerts* net__mbedtls__new_sslcerts(void);
_result_net__mbedtls__SSLCerts_ptr net__mbedtls__new_sslcerts_in_memory(string verify, string cert, string cert_key);
_result_net__mbedtls__SSLCerts_ptr net__mbedtls__new_sslcerts_from_file(string verify, string cert, string cert_key);
void net__mbedtls__SSLCerts_cleanup(net__mbedtls__SSLCerts* c);
VV_LOC _result_void net__mbedtls__SSLListener_init(net__mbedtls__SSLListener* l);
VV_LOC void net__mbedtls__SSLListener_init_sni(net__mbedtls__SSLListener* l, _result_net__mbedtls__SSLCerts_ptr (*get_cert_callback)(net__mbedtls__SSLListener* , string ));
struct _V_anon_fn_51e955ba27ff4810_voidptr_c__mbedtls_ssl_context_char_int__int_6734_Ctx {
	_result_net__mbedtls__SSLCerts_ptr (*get_cert_callback) (net__mbedtls__SSLListener*, string);
	net__mbedtls__SSLListener* l;
};

struct _V_anon_fn_51e955ba27ff4810_voidptr_c__mbedtls_ssl_context_char_int__int_6734_Ctx;
VV_LOC int anon_fn_51e955ba27ff4810_voidptr_c__mbedtls_ssl_context_char_int__int_6734(voidptr p_info, mbedtls_ssl_context* ssl, char* name, int lng);
_result_net__mbedtls__SSLConn_ptr net__mbedtls__new_ssl_conn(net__mbedtls__SSLConnectConfig config);
_result_void net__mbedtls__SSLConn_close(net__mbedtls__SSLConn* s);
_result_void net__mbedtls__SSLConn_shutdown(net__mbedtls__SSLConn* s);
VV_LOC _result_void net__mbedtls__SSLConn_init(net__mbedtls__SSLConn* s);
_result_void net__mbedtls__SSLConn_connect(net__mbedtls__SSLConn* s, net__TcpConn* tcp_conn, string hostname);
_result_void net__mbedtls__SSLConn_dial(net__mbedtls__SSLConn* s, string hostname, int port);
_result_net__Addr net__mbedtls__SSLConn_addr(net__mbedtls__SSLConn* s);
_result_net__Addr net__mbedtls__SSLConn_peer_addr(net__mbedtls__SSLConn* s);
_result_int net__mbedtls__SSLConn_socket_read_into_ptr(net__mbedtls__SSLConn* s, u8* buf_ptr, int len);
_result_int net__mbedtls__SSLConn_read(net__mbedtls__SSLConn* s, Array_u8* buffer);
_result_int net__mbedtls__SSLConn_write_ptr(net__mbedtls__SSLConn* s, u8* bytes, int len);
_result_int net__mbedtls__SSLConn_write(net__mbedtls__SSLConn* s, Array_u8 bytes);
_result_int net__mbedtls__SSLConn_write_string(net__mbedtls__SSLConn* s, string str);
VV_LOC _result_bool net__mbedtls__select(int handle, net__mbedtls__Select test, time__Duration timeout);
VV_LOC _result_void net__mbedtls__wait_for(int handle, net__mbedtls__Select what, time__Duration timeout);
VV_LOC _result_void net__mbedtls__SSLConn_wait_for_write(net__mbedtls__SSLConn* s, time__Duration timeout);
VV_LOC _result_void net__mbedtls__SSLConn_wait_for_read(net__mbedtls__SSLConn* s, time__Duration timeout);
_result_net__Connection net__ssl__SSLDialer_dial(net__ssl__SSLDialer d, string address);
_result_net__ssl__SSLConn_ptr net__ssl__new_ssl_conn(net__ssl__SSLConnectConfig config);
_result_net__Connection net__socks__SOCKS5Dialer_dial(net__socks__SOCKS5Dialer sd, string address);
VV_LOC _result_net__Connection net__socks__handshake(net__Connection* con, string host, string username, string password);
VV_LOC string net__socks__reply(u8 code);
VV_LOC _result_Array_u8 net__socks__parse_ipv4(string addr);
string net__http__Cookie_str(net__http__Cookie* c);
VV_LOC string net__http__sanitize(bool (*valid)(u8 ), string v);
string net__http__sanitize_cookie_value(string v);
VV_LOC string net__http__sanitize_cookie_path(string v);
VV_LOC bool net__http__valid_cookie_value_byte(u8 b);
VV_LOC bool net__http__valid_cookie_path_byte(u8 b);
VV_LOC bool net__http__valid_cookie_domain(string v);
bool net__http__is_cookie_domain_name(string _s);
VV_LOC bool net__http__is_cookie_name_valid(string name);
_result_void net__http__SilentStreamingDownloader_on_start(net__http__SilentStreamingDownloader* d, net__http__Request* request, string path);
_result_void net__http__SilentStreamingDownloader_on_chunk(net__http__SilentStreamingDownloader* d, net__http__Request* request, Array_u8 chunk, u64 already_received, u64 expected);
_result_void net__http__SilentStreamingDownloader_on_finish(net__http__SilentStreamingDownloader* d, net__http__Request* request, net__http__Response* response);
_result_void net__http__TerminalStreamingDownloader_on_start(net__http__TerminalStreamingDownloader* d, net__http__Request* request, string path);
_result_void net__http__TerminalStreamingDownloader_on_chunk(net__http__TerminalStreamingDownloader* d, net__http__Request* request, Array_u8 chunk, u64 already_received, u64 expected);
_result_void net__http__TerminalStreamingDownloader_on_finish(net__http__TerminalStreamingDownloader* d, net__http__Request* request, net__http__Response* response);
string net__http__CommonHeader_str(net__http__CommonHeader h);
void net__http__Header_free(net__http__Header* h);
string net__http__Header_render(net__http__Header h, net__http__HeaderRenderConfig flags);
void net__http__Header_render_into_sb(net__http__Header h, strings__Builder* sb, net__http__HeaderRenderConfig flags);
VV_LOC string net__http__canonicalize(string name);
string net__http__HeaderKeyError_msg(net__http__HeaderKeyError err);
int net__http__HeaderKeyError_code(net__http__HeaderKeyError err);
string net__http__Header_str(net__http__Header h);
string net__http__Method_str(net__http__Method m);
VV_LOC void net__http__Request_free(net__http__Request* req);
string net__http__UnexpectedExtraAttributeError_msg(net__http__UnexpectedExtraAttributeError err);
string net__http__MultiplePathAttributesError_msg(net__http__MultiplePathAttributesError err);
VV_LOC void net__http__Response_free(net__http__Response* resp);
void net__http__Response_set_status(net__http__Response* r, net__http__Status s);
void net__http__Response_set_version(net__http__Response* r, net__http__Version v);
VV_LOC net__http__Response net__http__DebugHandler_handle(net__http__DebugHandler d, net__http__Request req);
string net__http__Status_str(net__http__Status code);
int net__http__Status_int(net__http__Status code);
string net__http__Version_str(net__http__Version v);
multi_return_int_int net__http__Version_protos(net__http__Version v);
VV_LOC void main__main(void);
VV_LOC void main__help(void);
VV_LOC void main__installself(void);
VV_LOC void main__installtools(void);
VV_LOC void main__welcome(void);
static string Map_string_string_str(Map_string_string m);
static string indent_Map_string_string_str(Map_string_string m, int indent_count);
static string net__WsaError_str(net__WsaError it);
static string net__TcpSocket_str(net__TcpSocket it);
static string indent_net__TcpSocket_str(net__TcpSocket it, int indent_count);
static string net__Socket_str(net__Socket it);
static string indent_net__Socket_str(net__Socket it, int indent_count);

// V global/const non-precomputed definitions:
string _const_strconv__digit_pairs; // a string literal, inited later
string _const_strconv__base_digits; // a string literal, inited later
string _const_digit_pairs; // a string literal, inited later
string _const_time__months_string; // a string literal, inited later
string _const_net__urllib__err_msg_escape; // a string literal, inited later
string _const_os__fslash_str; // a string literal, inited later
string _const_os__dot_dot; // a string literal, inited later
string _const_os__empty_str; // a string literal, inited later
string _const_os__dot_str; // a string literal, inited later
string _const_os__path_separator; // a string literal, inited later
string _const_os__path_delimiter; // a string literal, inited later
const u32 _const_math__bits__de_bruijn32 = 125613361; // precomputed2
Array_fixed_u8_32 _const_math__bits__de_bruijn32tab = {((u8)(0)), 1, 28, 2, 29, 14, 24, 3, 30, 22, 20, 15, 25, 17, 4, 8, 
31, 27, 13, 23, 21, 19, 16, 7, 26, 12, 18, 6, 11, 5, 10, 9}; // fixed array const
const u64 _const_math__bits__de_bruijn64 = 285870213051353865U; // precomputed2
Array_fixed_u8_64 _const_math__bits__de_bruijn64tab = {((u8)(0)), 1, 56, 2, 57, 49, 28, 3, 61, 58, 42, 50, 38, 29, 17, 4, 
62, 47, 59, 36, 45, 43, 51, 22, 53, 39, 33, 30, 24, 18, 12, 5, 
63, 55, 48, 27, 60, 41, 37, 16, 46, 35, 44, 21, 52, 32, 23, 11, 
54, 26, 40, 15, 34, 20, 31, 10, 25, 14, 19, 9, 13, 8, 7, 6}; // fixed array const
const u64 _const_math__bits__two32 = 4294967296U; // precomputed2
const u64 _const_math__bits__mask32 = 4294967295U; // precomputed2
Array_fixed_u8_256 _const_math__bits__len_8_tab = {((u8)(0x00)), 0x01, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08}; // fixed array const
const u32 _const_strconv__single_plus_zero = 0; // precomputed2
const u32 _const_strconv__single_minus_zero = 2147483648; // precomputed2
const u32 _const_strconv__single_plus_infinity = 2139095040; // precomputed2
const u32 _const_strconv__single_minus_infinity = 4286578688; // precomputed2
const u64 _const_strconv__double_plus_zero = 0U; // precomputed2
const u64 _const_strconv__double_minus_zero = 9223372036854775808U; // precomputed2
const u64 _const_strconv__double_plus_infinity = 9218868437227405312U; // precomputed2
const u64 _const_strconv__double_minus_infinity = 18442240474082181120U; // precomputed2
Array_fixed_u32_10 _const_strconv__ten_pow_table_32 = {((u32)(1U)), ((u32)(10U)), ((u32)(100U)), ((u32)(1000U)), ((u32)(10000U)), ((u32)(100000U)), ((u32)(1000000U)), ((u32)(10000000U)), ((u32)(100000000U)), ((u32)(1000000000U))}; // fixed array const
const u32 _const_strconv__mantbits32 = 23; // precomputed2
const u32 _const_strconv__expbits32 = 8; // precomputed2
Array_fixed_u64_20 _const_strconv__ten_pow_table_64 = {((u64)(1U)), ((u64)(10U)), ((u64)(100U)), ((u64)(1000U)), ((u64)(10000U)), ((u64)(100000U)), ((u64)(1000000U)), ((u64)(10000000U)), ((u64)(100000000U)), ((u64)(1000000000U)), ((u64)(10000000000U)), ((u64)(100000000000U)), ((u64)(1000000000000U)), ((u64)(10000000000000U)), ((u64)(100000000000000U)), ((u64)(1000000000000000U)), ((u64)(10000000000000000U)), ((u64)(100000000000000000U)), ((u64)(1000000000000000000U)), ((u64)(10000000000000000000U))}; // fixed array const
const u32 _const_strconv__mantbits64 = 52; // precomputed2
const u32 _const_strconv__expbits64 = 11; // precomputed2
Array_fixed_f64_36 _const_strconv__dec_round = {((f64)(0.5)), 0.05, 0.005, 0.0005, 0.00005, 0.000005, 0.0000005, 0.00000005, 0.000000005, 0.0000000005, 0.00000000005, 0.000000000005, 0.0000000000005, 0.00000000000005, 0.000000000000005, 0.0000000000000005, 
0.00000000000000005, 0.000000000000000005, 0.0000000000000000005, 0.00000000000000000005, 0.000000000000000000005, 0.0000000000000000000005, 0.00000000000000000000005, 0.000000000000000000000005, 0.0000000000000000000000005, 0.00000000000000000000000005, 0.000000000000000000000000005, 0.0000000000000000000000000005, 0.00000000000000000000000000005, 0.000000000000000000000000000005, 0.0000000000000000000000000000005, 0.00000000000000000000000000000005, 0.000000000000000000000000000000005, 0.0000000000000000000000000000000005, 0.00000000000000000000000000000000005, 0.000000000000000000000000000000000005}; // fixed array const
Array_fixed_u64_47 _const_strconv__pow5_split_32 = {((u64)(1152921504606846976U)), ((u64)(1441151880758558720U)), ((u64)(1801439850948198400U)), ((u64)(2251799813685248000U)), ((u64)(1407374883553280000U)), ((u64)(1759218604441600000U)), ((u64)(2199023255552000000U)), ((u64)(1374389534720000000U)), ((u64)(1717986918400000000U)), ((u64)(2147483648000000000U)), ((u64)(1342177280000000000U)), ((u64)(1677721600000000000U)), ((u64)(2097152000000000000U)), ((u64)(1310720000000000000U)), ((u64)(1638400000000000000U)), ((u64)(2048000000000000000U)), 
((u64)(1280000000000000000U)), ((u64)(1600000000000000000U)), ((u64)(2000000000000000000U)), ((u64)(1250000000000000000U)), ((u64)(1562500000000000000U)), ((u64)(1953125000000000000U)), ((u64)(1220703125000000000U)), ((u64)(1525878906250000000U)), ((u64)(1907348632812500000U)), ((u64)(1192092895507812500U)), ((u64)(1490116119384765625U)), ((u64)(1862645149230957031U)), ((u64)(1164153218269348144U)), ((u64)(1455191522836685180U)), ((u64)(1818989403545856475U)), ((u64)(2273736754432320594U)), 
((u64)(1421085471520200371U)), ((u64)(1776356839400250464U)), ((u64)(2220446049250313080U)), ((u64)(1387778780781445675U)), ((u64)(1734723475976807094U)), ((u64)(2168404344971008868U)), ((u64)(1355252715606880542U)), ((u64)(1694065894508600678U)), ((u64)(2117582368135750847U)), ((u64)(1323488980084844279U)), ((u64)(1654361225106055349U)), ((u64)(2067951531382569187U)), ((u64)(1292469707114105741U)), ((u64)(1615587133892632177U)), ((u64)(2019483917365790221U))}; // fixed array const
Array_fixed_u64_31 _const_strconv__pow5_inv_split_32 = {((u64)(576460752303423489U)), ((u64)(461168601842738791U)), ((u64)(368934881474191033U)), ((u64)(295147905179352826U)), ((u64)(472236648286964522U)), ((u64)(377789318629571618U)), ((u64)(302231454903657294U)), ((u64)(483570327845851670U)), ((u64)(386856262276681336U)), ((u64)(309485009821345069U)), ((u64)(495176015714152110U)), ((u64)(396140812571321688U)), ((u64)(316912650057057351U)), ((u64)(507060240091291761U)), ((u64)(405648192073033409U)), ((u64)(324518553658426727U)), 
((u64)(519229685853482763U)), ((u64)(415383748682786211U)), ((u64)(332306998946228969U)), ((u64)(531691198313966350U)), ((u64)(425352958651173080U)), ((u64)(340282366920938464U)), ((u64)(544451787073501542U)), ((u64)(435561429658801234U)), ((u64)(348449143727040987U)), ((u64)(557518629963265579U)), ((u64)(446014903970612463U)), ((u64)(356811923176489971U)), ((u64)(570899077082383953U)), ((u64)(456719261665907162U)), ((u64)(365375409332725730U))}; // fixed array const
Array_fixed_u64_652 _const_strconv__pow5_split_64_x = {((u64)(0x0000000000000000U)), ((u64)(0x0100000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0140000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0190000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01f4000000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0138800000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0186a00000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01e8480000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01312d0000000000U)), 
((u64)(0x0000000000000000U)), ((u64)(0x017d784000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01dcd65000000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x012a05f200000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x0174876e80000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01d1a94a20000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x012309ce54000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x016bcc41e9000000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01c6bf5263400000U)), 
((u64)(0x0000000000000000U)), ((u64)(0x011c37937e080000U)), ((u64)(0x0000000000000000U)), ((u64)(0x016345785d8a0000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01bc16d674ec8000U)), ((u64)(0x0000000000000000U)), ((u64)(0x01158e460913d000U)), ((u64)(0x0000000000000000U)), ((u64)(0x015af1d78b58c400U)), ((u64)(0x0000000000000000U)), ((u64)(0x01b1ae4d6e2ef500U)), ((u64)(0x0000000000000000U)), ((u64)(0x010f0cf064dd5920U)), ((u64)(0x0000000000000000U)), ((u64)(0x0152d02c7e14af68U)), 
((u64)(0x0000000000000000U)), ((u64)(0x01a784379d99db42U)), ((u64)(0x4000000000000000U)), ((u64)(0x0108b2a2c2802909U)), ((u64)(0x9000000000000000U)), ((u64)(0x014adf4b7320334bU)), ((u64)(0x7400000000000000U)), ((u64)(0x019d971e4fe8401eU)), ((u64)(0x0880000000000000U)), ((u64)(0x01027e72f1f12813U)), ((u64)(0xcaa0000000000000U)), ((u64)(0x01431e0fae6d7217U)), ((u64)(0xbd48000000000000U)), ((u64)(0x0193e5939a08ce9dU)), ((u64)(0x2c9a000000000000U)), ((u64)(0x01f8def8808b0245U)), 
((u64)(0x3be0400000000000U)), ((u64)(0x013b8b5b5056e16bU)), ((u64)(0x0ad8500000000000U)), ((u64)(0x018a6e32246c99c6U)), ((u64)(0x8d8e640000000000U)), ((u64)(0x01ed09bead87c037U)), ((u64)(0xb878fe8000000000U)), ((u64)(0x013426172c74d822U)), ((u64)(0x66973e2000000000U)), ((u64)(0x01812f9cf7920e2bU)), ((u64)(0x403d0da800000000U)), ((u64)(0x01e17b84357691b6U)), ((u64)(0xe826288900000000U)), ((u64)(0x012ced32a16a1b11U)), ((u64)(0x622fb2ab40000000U)), ((u64)(0x0178287f49c4a1d6U)), 
((u64)(0xfabb9f5610000000U)), ((u64)(0x01d6329f1c35ca4bU)), ((u64)(0x7cb54395ca000000U)), ((u64)(0x0125dfa371a19e6fU)), ((u64)(0x5be2947b3c800000U)), ((u64)(0x016f578c4e0a060bU)), ((u64)(0x32db399a0ba00000U)), ((u64)(0x01cb2d6f618c878eU)), ((u64)(0xdfc9040047440000U)), ((u64)(0x011efc659cf7d4b8U)), ((u64)(0x17bb450059150000U)), ((u64)(0x0166bb7f0435c9e7U)), ((u64)(0xddaa16406f5a4000U)), ((u64)(0x01c06a5ec5433c60U)), ((u64)(0x8a8a4de845986800U)), ((u64)(0x0118427b3b4a05bcU)), 
((u64)(0xad2ce16256fe8200U)), ((u64)(0x015e531a0a1c872bU)), ((u64)(0x987819baecbe2280U)), ((u64)(0x01b5e7e08ca3a8f6U)), ((u64)(0x1f4b1014d3f6d590U)), ((u64)(0x0111b0ec57e6499aU)), ((u64)(0xa71dd41a08f48af4U)), ((u64)(0x01561d276ddfdc00U)), ((u64)(0xd0e549208b31adb1U)), ((u64)(0x01aba4714957d300U)), ((u64)(0x828f4db456ff0c8eU)), ((u64)(0x010b46c6cdd6e3e0U)), ((u64)(0xa33321216cbecfb2U)), ((u64)(0x014e1878814c9cd8U)), ((u64)(0xcbffe969c7ee839eU)), ((u64)(0x01a19e96a19fc40eU)), 
((u64)(0x3f7ff1e21cf51243U)), ((u64)(0x0105031e2503da89U)), ((u64)(0x8f5fee5aa43256d4U)), ((u64)(0x014643e5ae44d12bU)), ((u64)(0x7337e9f14d3eec89U)), ((u64)(0x0197d4df19d60576U)), ((u64)(0x1005e46da08ea7abU)), ((u64)(0x01fdca16e04b86d4U)), ((u64)(0x8a03aec4845928cbU)), ((u64)(0x013e9e4e4c2f3444U)), ((u64)(0xac849a75a56f72fdU)), ((u64)(0x018e45e1df3b0155U)), ((u64)(0x17a5c1130ecb4fbdU)), ((u64)(0x01f1d75a5709c1abU)), ((u64)(0xeec798abe93f11d6U)), ((u64)(0x013726987666190aU)), 
((u64)(0xaa797ed6e38ed64bU)), ((u64)(0x0184f03e93ff9f4dU)), ((u64)(0x1517de8c9c728bdeU)), ((u64)(0x01e62c4e38ff8721U)), ((u64)(0xad2eeb17e1c7976bU)), ((u64)(0x012fdbb0e39fb474U)), ((u64)(0xd87aa5ddda397d46U)), ((u64)(0x017bd29d1c87a191U)), ((u64)(0x4e994f5550c7dc97U)), ((u64)(0x01dac74463a989f6U)), ((u64)(0xf11fd195527ce9deU)), ((u64)(0x0128bc8abe49f639U)), ((u64)(0x6d67c5faa71c2456U)), ((u64)(0x0172ebad6ddc73c8U)), ((u64)(0x88c1b77950e32d6cU)), ((u64)(0x01cfa698c95390baU)), 
((u64)(0x957912abd28dfc63U)), ((u64)(0x0121c81f7dd43a74U)), ((u64)(0xbad75756c7317b7cU)), ((u64)(0x016a3a275d494911U)), ((u64)(0x298d2d2c78fdda5bU)), ((u64)(0x01c4c8b1349b9b56U)), ((u64)(0xd9f83c3bcb9ea879U)), ((u64)(0x011afd6ec0e14115U)), ((u64)(0x50764b4abe865297U)), ((u64)(0x0161bcca7119915bU)), ((u64)(0x2493de1d6e27e73dU)), ((u64)(0x01ba2bfd0d5ff5b2U)), ((u64)(0x56dc6ad264d8f086U)), ((u64)(0x01145b7e285bf98fU)), ((u64)(0x2c938586fe0f2ca8U)), ((u64)(0x0159725db272f7f3U)), 
((u64)(0xf7b866e8bd92f7d2U)), ((u64)(0x01afcef51f0fb5efU)), ((u64)(0xfad34051767bdae3U)), ((u64)(0x010de1593369d1b5U)), ((u64)(0x79881065d41ad19cU)), ((u64)(0x015159af80444623U)), ((u64)(0x57ea147f49218603U)), ((u64)(0x01a5b01b605557acU)), ((u64)(0xb6f24ccf8db4f3c1U)), ((u64)(0x01078e111c3556cbU)), ((u64)(0xa4aee003712230b2U)), ((u64)(0x014971956342ac7eU)), ((u64)(0x4dda98044d6abcdfU)), ((u64)(0x019bcdfabc13579eU)), ((u64)(0xf0a89f02b062b60bU)), ((u64)(0x010160bcb58c16c2U)), 
((u64)(0xacd2c6c35c7b638eU)), ((u64)(0x0141b8ebe2ef1c73U)), ((u64)(0x98077874339a3c71U)), ((u64)(0x01922726dbaae390U)), ((u64)(0xbe0956914080cb8eU)), ((u64)(0x01f6b0f092959c74U)), ((u64)(0xf6c5d61ac8507f38U)), ((u64)(0x013a2e965b9d81c8U)), ((u64)(0x34774ba17a649f07U)), ((u64)(0x0188ba3bf284e23bU)), ((u64)(0x01951e89d8fdc6c8U)), ((u64)(0x01eae8caef261acaU)), ((u64)(0x40fd3316279e9c3dU)), ((u64)(0x0132d17ed577d0beU)), ((u64)(0xd13c7fdbb186434cU)), ((u64)(0x017f85de8ad5c4edU)), 
((u64)(0x458b9fd29de7d420U)), ((u64)(0x01df67562d8b3629U)), ((u64)(0xcb7743e3a2b0e494U)), ((u64)(0x012ba095dc7701d9U)), ((u64)(0x3e5514dc8b5d1db9U)), ((u64)(0x017688bb5394c250U)), ((u64)(0x4dea5a13ae346527U)), ((u64)(0x01d42aea2879f2e4U)), ((u64)(0xb0b2784c4ce0bf38U)), ((u64)(0x01249ad2594c37ceU)), ((u64)(0x5cdf165f6018ef06U)), ((u64)(0x016dc186ef9f45c2U)), ((u64)(0xf416dbf7381f2ac8U)), ((u64)(0x01c931e8ab871732U)), ((u64)(0xd88e497a83137abdU)), ((u64)(0x011dbf316b346e7fU)), 
((u64)(0xceb1dbd923d8596cU)), ((u64)(0x01652efdc6018a1fU)), ((u64)(0xc25e52cf6cce6fc7U)), ((u64)(0x01be7abd3781eca7U)), ((u64)(0xd97af3c1a40105dcU)), ((u64)(0x01170cb642b133e8U)), ((u64)(0x0fd9b0b20d014754U)), ((u64)(0x015ccfe3d35d80e3U)), ((u64)(0xd3d01cde90419929U)), ((u64)(0x01b403dcc834e11bU)), ((u64)(0x6462120b1a28ffb9U)), ((u64)(0x01108269fd210cb1U)), ((u64)(0xbd7a968de0b33fa8U)), ((u64)(0x0154a3047c694fddU)), ((u64)(0x2cd93c3158e00f92U)), ((u64)(0x01a9cbc59b83a3d5U)), 
((u64)(0x3c07c59ed78c09bbU)), ((u64)(0x010a1f5b81324665U)), ((u64)(0x8b09b7068d6f0c2aU)), ((u64)(0x014ca732617ed7feU)), ((u64)(0x2dcc24c830cacf34U)), ((u64)(0x019fd0fef9de8dfeU)), ((u64)(0xdc9f96fd1e7ec180U)), ((u64)(0x0103e29f5c2b18beU)), ((u64)(0x93c77cbc661e71e1U)), ((u64)(0x0144db473335deeeU)), ((u64)(0x38b95beb7fa60e59U)), ((u64)(0x01961219000356aaU)), ((u64)(0xc6e7b2e65f8f91efU)), ((u64)(0x01fb969f40042c54U)), ((u64)(0xfc50cfcffbb9bb35U)), ((u64)(0x013d3e2388029bb4U)), 
((u64)(0x3b6503c3faa82a03U)), ((u64)(0x018c8dac6a0342a2U)), ((u64)(0xca3e44b4f9523484U)), ((u64)(0x01efb1178484134aU)), ((u64)(0xbe66eaf11bd360d2U)), ((u64)(0x0135ceaeb2d28c0eU)), ((u64)(0x6e00a5ad62c83907U)), ((u64)(0x0183425a5f872f12U)), ((u64)(0x0980cf18bb7a4749U)), ((u64)(0x01e412f0f768fad7U)), ((u64)(0x65f0816f752c6c8dU)), ((u64)(0x012e8bd69aa19cc6U)), ((u64)(0xff6ca1cb527787b1U)), ((u64)(0x017a2ecc414a03f7U)), ((u64)(0xff47ca3e2715699dU)), ((u64)(0x01d8ba7f519c84f5U)), 
((u64)(0xbf8cde66d86d6202U)), ((u64)(0x0127748f9301d319U)), ((u64)(0x2f7016008e88ba83U)), ((u64)(0x017151b377c247e0U)), ((u64)(0x3b4c1b80b22ae923U)), ((u64)(0x01cda62055b2d9d8U)), ((u64)(0x250f91306f5ad1b6U)), ((u64)(0x012087d4358fc827U)), ((u64)(0xee53757c8b318623U)), ((u64)(0x0168a9c942f3ba30U)), ((u64)(0x29e852dbadfde7acU)), ((u64)(0x01c2d43b93b0a8bdU)), ((u64)(0x3a3133c94cbeb0ccU)), ((u64)(0x0119c4a53c4e6976U)), ((u64)(0xc8bd80bb9fee5cffU)), ((u64)(0x016035ce8b6203d3U)), 
((u64)(0xbaece0ea87e9f43eU)), ((u64)(0x01b843422e3a84c8U)), ((u64)(0x74d40c9294f238a7U)), ((u64)(0x01132a095ce492fdU)), ((u64)(0xd2090fb73a2ec6d1U)), ((u64)(0x0157f48bb41db7bcU)), ((u64)(0x068b53a508ba7885U)), ((u64)(0x01adf1aea12525acU)), ((u64)(0x8417144725748b53U)), ((u64)(0x010cb70d24b7378bU)), ((u64)(0x651cd958eed1ae28U)), ((u64)(0x014fe4d06de5056eU)), ((u64)(0xfe640faf2a8619b2U)), ((u64)(0x01a3de04895e46c9U)), ((u64)(0x3efe89cd7a93d00fU)), ((u64)(0x01066ac2d5daec3eU)), 
((u64)(0xcebe2c40d938c413U)), ((u64)(0x014805738b51a74dU)), ((u64)(0x426db7510f86f518U)), ((u64)(0x019a06d06e261121U)), ((u64)(0xc9849292a9b4592fU)), ((u64)(0x0100444244d7cab4U)), ((u64)(0xfbe5b73754216f7aU)), ((u64)(0x01405552d60dbd61U)), ((u64)(0x7adf25052929cb59U)), ((u64)(0x01906aa78b912cbaU)), ((u64)(0x1996ee4673743e2fU)), ((u64)(0x01f485516e7577e9U)), ((u64)(0xaffe54ec0828a6ddU)), ((u64)(0x0138d352e5096af1U)), ((u64)(0x1bfdea270a32d095U)), ((u64)(0x018708279e4bc5aeU)), 
((u64)(0xa2fd64b0ccbf84baU)), ((u64)(0x01e8ca3185deb719U)), ((u64)(0x05de5eee7ff7b2f4U)), ((u64)(0x01317e5ef3ab3270U)), ((u64)(0x0755f6aa1ff59fb1U)), ((u64)(0x017dddf6b095ff0cU)), ((u64)(0x092b7454a7f3079eU)), ((u64)(0x01dd55745cbb7ecfU)), ((u64)(0x65bb28b4e8f7e4c3U)), ((u64)(0x012a5568b9f52f41U)), ((u64)(0xbf29f2e22335ddf3U)), ((u64)(0x0174eac2e8727b11U)), ((u64)(0x2ef46f9aac035570U)), ((u64)(0x01d22573a28f19d6U)), ((u64)(0xdd58c5c0ab821566U)), ((u64)(0x0123576845997025U)), 
((u64)(0x54aef730d6629ac0U)), ((u64)(0x016c2d4256ffcc2fU)), ((u64)(0x29dab4fd0bfb4170U)), ((u64)(0x01c73892ecbfbf3bU)), ((u64)(0xfa28b11e277d08e6U)), ((u64)(0x011c835bd3f7d784U)), ((u64)(0x38b2dd65b15c4b1fU)), ((u64)(0x0163a432c8f5cd66U)), ((u64)(0xc6df94bf1db35de7U)), ((u64)(0x01bc8d3f7b3340bfU)), ((u64)(0xdc4bbcf772901ab0U)), ((u64)(0x0115d847ad000877U)), ((u64)(0xd35eac354f34215cU)), ((u64)(0x015b4e5998400a95U)), ((u64)(0x48365742a30129b4U)), ((u64)(0x01b221effe500d3bU)), 
((u64)(0x0d21f689a5e0ba10U)), ((u64)(0x010f5535fef20845U)), ((u64)(0x506a742c0f58e894U)), ((u64)(0x01532a837eae8a56U)), ((u64)(0xe4851137132f22b9U)), ((u64)(0x01a7f5245e5a2cebU)), ((u64)(0x6ed32ac26bfd75b4U)), ((u64)(0x0108f936baf85c13U)), ((u64)(0x4a87f57306fcd321U)), ((u64)(0x014b378469b67318U)), ((u64)(0x5d29f2cfc8bc07e9U)), ((u64)(0x019e056584240fdeU)), ((u64)(0xfa3a37c1dd7584f1U)), ((u64)(0x0102c35f729689eaU)), ((u64)(0xb8c8c5b254d2e62eU)), ((u64)(0x014374374f3c2c65U)), 
((u64)(0x26faf71eea079fb9U)), ((u64)(0x01945145230b377fU)), ((u64)(0xf0b9b4e6a48987a8U)), ((u64)(0x01f965966bce055eU)), ((u64)(0x5674111026d5f4c9U)), ((u64)(0x013bdf7e0360c35bU)), ((u64)(0x2c111554308b71fbU)), ((u64)(0x018ad75d8438f432U)), ((u64)(0xb7155aa93cae4e7aU)), ((u64)(0x01ed8d34e547313eU)), ((u64)(0x326d58a9c5ecf10cU)), ((u64)(0x013478410f4c7ec7U)), ((u64)(0xff08aed437682d4fU)), ((u64)(0x01819651531f9e78U)), ((u64)(0x3ecada89454238a3U)), ((u64)(0x01e1fbe5a7e78617U)), 
((u64)(0x873ec895cb496366U)), ((u64)(0x012d3d6f88f0b3ceU)), ((u64)(0x290e7abb3e1bbc3fU)), ((u64)(0x01788ccb6b2ce0c2U)), ((u64)(0xb352196a0da2ab4fU)), ((u64)(0x01d6affe45f818f2U)), ((u64)(0xb0134fe24885ab11U)), ((u64)(0x01262dfeebbb0f97U)), ((u64)(0x9c1823dadaa715d6U)), ((u64)(0x016fb97ea6a9d37dU)), ((u64)(0x031e2cd19150db4bU)), ((u64)(0x01cba7de5054485dU)), ((u64)(0x21f2dc02fad2890fU)), ((u64)(0x011f48eaf234ad3aU)), ((u64)(0xaa6f9303b9872b53U)), ((u64)(0x01671b25aec1d888U)), 
((u64)(0xd50b77c4a7e8f628U)), ((u64)(0x01c0e1ef1a724eaaU)), ((u64)(0xc5272adae8f199d9U)), ((u64)(0x01188d357087712aU)), ((u64)(0x7670f591a32e004fU)), ((u64)(0x015eb082cca94d75U)), ((u64)(0xd40d32f60bf98063U)), ((u64)(0x01b65ca37fd3a0d2U)), ((u64)(0xc4883fd9c77bf03eU)), ((u64)(0x0111f9e62fe44483U)), ((u64)(0xb5aa4fd0395aec4dU)), ((u64)(0x0156785fbbdd55a4U)), ((u64)(0xe314e3c447b1a760U)), ((u64)(0x01ac1677aad4ab0dU)), ((u64)(0xaded0e5aaccf089cU)), ((u64)(0x010b8e0acac4eae8U)), 
((u64)(0xd96851f15802cac3U)), ((u64)(0x014e718d7d7625a2U)), ((u64)(0x8fc2666dae037d74U)), ((u64)(0x01a20df0dcd3af0bU)), ((u64)(0x39d980048cc22e68U)), ((u64)(0x010548b68a044d67U)), ((u64)(0x084fe005aff2ba03U)), ((u64)(0x01469ae42c8560c1U)), ((u64)(0x4a63d8071bef6883U)), ((u64)(0x0198419d37a6b8f1U)), ((u64)(0x9cfcce08e2eb42a4U)), ((u64)(0x01fe52048590672dU)), ((u64)(0x821e00c58dd309a7U)), ((u64)(0x013ef342d37a407cU)), ((u64)(0xa2a580f6f147cc10U)), ((u64)(0x018eb0138858d09bU)), 
((u64)(0x8b4ee134ad99bf15U)), ((u64)(0x01f25c186a6f04c2U)), ((u64)(0x97114cc0ec80176dU)), ((u64)(0x0137798f428562f9U)), ((u64)(0xfcd59ff127a01d48U)), ((u64)(0x018557f31326bbb7U)), ((u64)(0xfc0b07ed7188249aU)), ((u64)(0x01e6adefd7f06aa5U)), ((u64)(0xbd86e4f466f516e0U)), ((u64)(0x01302cb5e6f642a7U)), ((u64)(0xace89e3180b25c98U)), ((u64)(0x017c37e360b3d351U)), ((u64)(0x1822c5bde0def3beU)), ((u64)(0x01db45dc38e0c826U)), ((u64)(0xcf15bb96ac8b5857U)), ((u64)(0x01290ba9a38c7d17U)), 
((u64)(0xc2db2a7c57ae2e6dU)), ((u64)(0x01734e940c6f9c5dU)), ((u64)(0x3391f51b6d99ba08U)), ((u64)(0x01d022390f8b8375U)), ((u64)(0x403b393124801445U)), ((u64)(0x01221563a9b73229U)), ((u64)(0x904a077d6da01956U)), ((u64)(0x016a9abc9424feb3U)), ((u64)(0x745c895cc9081facU)), ((u64)(0x01c5416bb92e3e60U)), ((u64)(0x48b9d5d9fda513cbU)), ((u64)(0x011b48e353bce6fcU)), ((u64)(0x5ae84b507d0e58beU)), ((u64)(0x01621b1c28ac20bbU)), ((u64)(0x31a25e249c51eeeeU)), ((u64)(0x01baa1e332d728eaU)), 
((u64)(0x5f057ad6e1b33554U)), ((u64)(0x0114a52dffc67992U)), ((u64)(0xf6c6d98c9a2002aaU)), ((u64)(0x0159ce797fb817f6U)), ((u64)(0xb4788fefc0a80354U)), ((u64)(0x01b04217dfa61df4U)), ((u64)(0xf0cb59f5d8690214U)), ((u64)(0x010e294eebc7d2b8U)), ((u64)(0x2cfe30734e83429aU)), ((u64)(0x0151b3a2a6b9c767U)), ((u64)(0xf83dbc9022241340U)), ((u64)(0x01a6208b50683940U)), ((u64)(0x9b2695da15568c08U)), ((u64)(0x0107d457124123c8U)), ((u64)(0xc1f03b509aac2f0aU)), ((u64)(0x0149c96cd6d16cbaU)), 
((u64)(0x726c4a24c1573acdU)), ((u64)(0x019c3bc80c85c7e9U)), ((u64)(0xe783ae56f8d684c0U)), ((u64)(0x0101a55d07d39cf1U)), ((u64)(0x616499ecb70c25f0U)), ((u64)(0x01420eb449c8842eU)), ((u64)(0xf9bdc067e4cf2f6cU)), ((u64)(0x019292615c3aa539U)), ((u64)(0x782d3081de02fb47U)), ((u64)(0x01f736f9b3494e88U)), ((u64)(0x4b1c3e512ac1dd0cU)), ((u64)(0x013a825c100dd115U)), ((u64)(0x9de34de57572544fU)), ((u64)(0x018922f31411455aU)), ((u64)(0x455c215ed2cee963U)), ((u64)(0x01eb6bafd91596b1U)), 
((u64)(0xcb5994db43c151deU)), ((u64)(0x0133234de7ad7e2eU)), ((u64)(0x7e2ffa1214b1a655U)), ((u64)(0x017fec216198ddbaU)), ((u64)(0x1dbbf89699de0febU)), ((u64)(0x01dfe729b9ff1529U)), ((u64)(0xb2957b5e202ac9f3U)), ((u64)(0x012bf07a143f6d39U)), ((u64)(0x1f3ada35a8357c6fU)), ((u64)(0x0176ec98994f4888U)), ((u64)(0x270990c31242db8bU)), ((u64)(0x01d4a7bebfa31aaaU)), ((u64)(0x5865fa79eb69c937U)), ((u64)(0x0124e8d737c5f0aaU)), ((u64)(0xee7f791866443b85U)), ((u64)(0x016e230d05b76cd4U)), 
((u64)(0x2a1f575e7fd54a66U)), ((u64)(0x01c9abd04725480aU)), ((u64)(0x5a53969b0fe54e80U)), ((u64)(0x011e0b622c774d06U)), ((u64)(0xf0e87c41d3dea220U)), ((u64)(0x01658e3ab7952047U)), ((u64)(0xed229b5248d64aa8U)), ((u64)(0x01bef1c9657a6859U)), ((u64)(0x3435a1136d85eea9U)), ((u64)(0x0117571ddf6c8138U)), ((u64)(0x4143095848e76a53U)), ((u64)(0x015d2ce55747a186U)), ((u64)(0xd193cbae5b2144e8U)), ((u64)(0x01b4781ead1989e7U)), ((u64)(0xe2fc5f4cf8f4cb11U)), ((u64)(0x0110cb132c2ff630U)), 
((u64)(0x1bbb77203731fdd5U)), ((u64)(0x0154fdd7f73bf3bdU)), ((u64)(0x62aa54e844fe7d4aU)), ((u64)(0x01aa3d4df50af0acU)), ((u64)(0xbdaa75112b1f0e4eU)), ((u64)(0x010a6650b926d66bU)), ((u64)(0xad15125575e6d1e2U)), ((u64)(0x014cffe4e7708c06U)), ((u64)(0x585a56ead360865bU)), ((u64)(0x01a03fde214caf08U)), ((u64)(0x37387652c41c53f8U)), ((u64)(0x010427ead4cfed65U)), ((u64)(0x850693e7752368f7U)), ((u64)(0x014531e58a03e8beU)), ((u64)(0x264838e1526c4334U)), ((u64)(0x01967e5eec84e2eeU)), 
((u64)(0xafda4719a7075402U)), ((u64)(0x01fc1df6a7a61ba9U)), ((u64)(0x0de86c7008649481U)), ((u64)(0x013d92ba28c7d14aU)), ((u64)(0x9162878c0a7db9a1U)), ((u64)(0x018cf768b2f9c59cU)), ((u64)(0xb5bb296f0d1d280aU)), ((u64)(0x01f03542dfb83703U)), ((u64)(0x5194f9e568323906U)), ((u64)(0x01362149cbd32262U)), ((u64)(0xe5fa385ec23ec747U)), ((u64)(0x0183a99c3ec7eafaU)), ((u64)(0x9f78c67672ce7919U)), ((u64)(0x01e494034e79e5b9U)), ((u64)(0x03ab7c0a07c10bb0U)), ((u64)(0x012edc82110c2f94U)), 
((u64)(0x04965b0c89b14e9cU)), ((u64)(0x017a93a2954f3b79U)), ((u64)(0x45bbf1cfac1da243U)), ((u64)(0x01d9388b3aa30a57U)), ((u64)(0x8b957721cb92856aU)), ((u64)(0x0127c35704a5e676U)), ((u64)(0x2e7ad4ea3e7726c4U)), ((u64)(0x0171b42cc5cf6014U)), ((u64)(0x3a198a24ce14f075U)), ((u64)(0x01ce2137f7433819U)), ((u64)(0xc44ff65700cd1649U)), ((u64)(0x0120d4c2fa8a030fU)), ((u64)(0xb563f3ecc1005bdbU)), ((u64)(0x016909f3b92c83d3U)), ((u64)(0xa2bcf0e7f14072d2U)), ((u64)(0x01c34c70a777a4c8U)), 
((u64)(0x65b61690f6c847c3U)), ((u64)(0x011a0fc668aac6fdU)), ((u64)(0xbf239c35347a59b4U)), ((u64)(0x016093b802d578bcU)), ((u64)(0xeeec83428198f021U)), ((u64)(0x01b8b8a6038ad6ebU)), ((u64)(0x7553d20990ff9615U)), ((u64)(0x01137367c236c653U)), ((u64)(0x52a8c68bf53f7b9aU)), ((u64)(0x01585041b2c477e8U)), ((u64)(0x6752f82ef28f5a81U)), ((u64)(0x01ae64521f7595e2U)), ((u64)(0x8093db1d57999890U)), ((u64)(0x010cfeb353a97dadU)), ((u64)(0xe0b8d1e4ad7ffeb4U)), ((u64)(0x01503e602893dd18U)), 
((u64)(0x18e7065dd8dffe62U)), ((u64)(0x01a44df832b8d45fU)), ((u64)(0x6f9063faa78bfefdU)), ((u64)(0x0106b0bb1fb384bbU)), ((u64)(0x4b747cf9516efebcU)), ((u64)(0x01485ce9e7a065eaU)), ((u64)(0xde519c37a5cabe6bU)), ((u64)(0x019a742461887f64U)), ((u64)(0x0af301a2c79eb703U)), ((u64)(0x01008896bcf54f9fU)), ((u64)(0xcdafc20b798664c4U)), ((u64)(0x0140aabc6c32a386U)), ((u64)(0x811bb28e57e7fdf5U)), ((u64)(0x0190d56b873f4c68U)), ((u64)(0xa1629f31ede1fd72U)), ((u64)(0x01f50ac6690f1f82U)), 
((u64)(0xa4dda37f34ad3e67U)), ((u64)(0x013926bc01a973b1U)), ((u64)(0x0e150c5f01d88e01U)), ((u64)(0x0187706b0213d09eU)), ((u64)(0x919a4f76c24eb181U)), ((u64)(0x01e94c85c298c4c5U)), ((u64)(0x7b0071aa39712ef1U)), ((u64)(0x0131cfd3999f7afbU)), ((u64)(0x59c08e14c7cd7aadU)), ((u64)(0x017e43c8800759baU)), ((u64)(0xf030b199f9c0d958U)), ((u64)(0x01ddd4baa0093028U)), ((u64)(0x961e6f003c1887d7U)), ((u64)(0x012aa4f4a405be19U)), ((u64)(0xfba60ac04b1ea9cdU)), ((u64)(0x01754e31cd072d9fU)), 
((u64)(0xfa8f8d705de65440U)), ((u64)(0x01d2a1be4048f907U)), ((u64)(0xfc99b8663aaff4a8U)), ((u64)(0x0123a516e82d9ba4U)), ((u64)(0x3bc0267fc95bf1d2U)), ((u64)(0x016c8e5ca239028eU)), ((u64)(0xcab0301fbbb2ee47U)), ((u64)(0x01c7b1f3cac74331U)), ((u64)(0x1eae1e13d54fd4ecU)), ((u64)(0x011ccf385ebc89ffU)), ((u64)(0xe659a598caa3ca27U)), ((u64)(0x01640306766bac7eU)), ((u64)(0x9ff00efefd4cbcb1U)), ((u64)(0x01bd03c81406979eU)), ((u64)(0x23f6095f5e4ff5efU)), ((u64)(0x0116225d0c841ec3U)), 
((u64)(0xecf38bb735e3f36aU)), ((u64)(0x015baaf44fa52673U)), ((u64)(0xe8306ea5035cf045U)), ((u64)(0x01b295b1638e7010U)), ((u64)(0x911e4527221a162bU)), ((u64)(0x010f9d8ede39060aU)), ((u64)(0x3565d670eaa09bb6U)), ((u64)(0x015384f295c7478dU)), ((u64)(0x82bf4c0d2548c2a3U)), ((u64)(0x01a8662f3b391970U)), ((u64)(0x51b78f88374d79a6U)), ((u64)(0x01093fdd8503afe6U)), ((u64)(0xe625736a4520d810U)), ((u64)(0x014b8fd4e6449bdfU)), ((u64)(0xdfaed044d6690e14U)), ((u64)(0x019e73ca1fd5c2d7U)), ((u64)(0xebcd422b0601a8ccU)), ((u64)(0x0103085e53e599c6U)), ((u64)(0xa6c092b5c78212ffU)), ((u64)(0x0143ca75e8df0038U)), ((u64)(0xd070b763396297bfU)), ((u64)(0x0194bd136316c046U)), ((u64)(0x848ce53c07bb3dafU)), ((u64)(0x01f9ec583bdc7058U)), ((u64)(0x52d80f4584d5068dU)), ((u64)(0x013c33b72569c637U)), ((u64)(0x278e1316e60a4831U)), ((u64)(0x018b40a4eec437c5U))}; // fixed array const
Array_fixed_u64_584 _const_strconv__pow5_inv_split_64_x = {((u64)(0x0000000000000001U)), ((u64)(0x0400000000000000U)), ((u64)(0x3333333333333334U)), ((u64)(0x0333333333333333U)), ((u64)(0x28f5c28f5c28f5c3U)), ((u64)(0x028f5c28f5c28f5cU)), ((u64)(0xed916872b020c49cU)), ((u64)(0x020c49ba5e353f7cU)), ((u64)(0xaf4f0d844d013a93U)), ((u64)(0x0346dc5d63886594U)), ((u64)(0x8c3f3e0370cdc876U)), ((u64)(0x029f16b11c6d1e10U)), ((u64)(0xd698fe69270b06c5U)), ((u64)(0x0218def416bdb1a6U)), ((u64)(0xf0f4ca41d811a46eU)), ((u64)(0x035afe535795e90aU)), 
((u64)(0xf3f70834acdae9f1U)), ((u64)(0x02af31dc4611873bU)), ((u64)(0x5cc5a02a23e254c1U)), ((u64)(0x0225c17d04dad296U)), ((u64)(0xfad5cd10396a2135U)), ((u64)(0x036f9bfb3af7b756U)), ((u64)(0xfbde3da69454e75eU)), ((u64)(0x02bfaffc2f2c92abU)), ((u64)(0x2fe4fe1edd10b918U)), ((u64)(0x0232f33025bd4223U)), ((u64)(0x4ca19697c81ac1bfU)), ((u64)(0x0384b84d092ed038U)), ((u64)(0x3d4e1213067bce33U)), ((u64)(0x02d09370d4257360U)), ((u64)(0x643e74dc052fd829U)), ((u64)(0x024075f3dceac2b3U)), 
((u64)(0x6d30baf9a1e626a7U)), ((u64)(0x039a5652fb113785U)), ((u64)(0x2426fbfae7eb5220U)), ((u64)(0x02e1dea8c8da92d1U)), ((u64)(0x1cebfcc8b9890e80U)), ((u64)(0x024e4bba3a487574U)), ((u64)(0x94acc7a78f41b0ccU)), ((u64)(0x03b07929f6da5586U)), ((u64)(0xaa23d2ec729af3d7U)), ((u64)(0x02f394219248446bU)), ((u64)(0xbb4fdbf05baf2979U)), ((u64)(0x025c768141d369efU)), ((u64)(0xc54c931a2c4b758dU)), ((u64)(0x03c7240202ebdcb2U)), ((u64)(0x9dd6dc14f03c5e0bU)), ((u64)(0x0305b66802564a28U)), 
((u64)(0x4b1249aa59c9e4d6U)), ((u64)(0x026af8533511d4edU)), ((u64)(0x44ea0f76f60fd489U)), ((u64)(0x03de5a1ebb4fbb15U)), ((u64)(0x6a54d92bf80caa07U)), ((u64)(0x0318481895d96277U)), ((u64)(0x21dd7a89933d54d2U)), ((u64)(0x0279d346de4781f9U)), ((u64)(0x362f2a75b8622150U)), ((u64)(0x03f61ed7ca0c0328U)), ((u64)(0xf825bb91604e810dU)), ((u64)(0x032b4bdfd4d668ecU)), ((u64)(0xc684960de6a5340bU)), ((u64)(0x0289097fdd7853f0U)), ((u64)(0xd203ab3e521dc33cU)), ((u64)(0x02073accb12d0ff3U)), 
((u64)(0xe99f7863b696052cU)), ((u64)(0x033ec47ab514e652U)), ((u64)(0x87b2c6b62bab3757U)), ((u64)(0x02989d2ef743eb75U)), ((u64)(0xd2f56bc4efbc2c45U)), ((u64)(0x0213b0f25f69892aU)), ((u64)(0x1e55793b192d13a2U)), ((u64)(0x0352b4b6ff0f41deU)), ((u64)(0x4b77942f475742e8U)), ((u64)(0x02a8909265a5ce4bU)), ((u64)(0xd5f9435905df68baU)), ((u64)(0x022073a8515171d5U)), ((u64)(0x565b9ef4d6324129U)), ((u64)(0x03671f73b54f1c89U)), ((u64)(0xdeafb25d78283421U)), ((u64)(0x02b8e5f62aa5b06dU)), 
((u64)(0x188c8eb12cecf681U)), ((u64)(0x022d84c4eeeaf38bU)), ((u64)(0x8dadb11b7b14bd9bU)), ((u64)(0x037c07a17e44b8deU)), ((u64)(0x7157c0e2c8dd647cU)), ((u64)(0x02c99fb46503c718U)), ((u64)(0x8ddfcd823a4ab6caU)), ((u64)(0x023ae629ea696c13U)), ((u64)(0x1632e269f6ddf142U)), ((u64)(0x0391704310a8acecU)), ((u64)(0x44f581ee5f17f435U)), ((u64)(0x02dac035a6ed5723U)), ((u64)(0x372ace584c1329c4U)), ((u64)(0x024899c4858aac1cU)), ((u64)(0xbeaae3c079b842d3U)), ((u64)(0x03a75c6da27779c6U)), 
((u64)(0x6555830061603576U)), ((u64)(0x02ec49f14ec5fb05U)), ((u64)(0xb7779c004de6912bU)), ((u64)(0x0256a18dd89e626aU)), ((u64)(0xf258f99a163db512U)), ((u64)(0x03bdcf495a9703ddU)), ((u64)(0x5b7a614811caf741U)), ((u64)(0x02fe3f6de212697eU)), ((u64)(0xaf951aa00e3bf901U)), ((u64)(0x0264ff8b1b41edfeU)), ((u64)(0x7f54f7667d2cc19bU)), ((u64)(0x03d4cc11c5364997U)), ((u64)(0x32aa5f8530f09ae3U)), ((u64)(0x0310a3416a91d479U)), ((u64)(0xf55519375a5a1582U)), ((u64)(0x0273b5cdeedb1060U)), 
((u64)(0xbbbb5b8bc3c3559dU)), ((u64)(0x03ec56164af81a34U)), ((u64)(0x2fc916096969114aU)), ((u64)(0x03237811d593482aU)), ((u64)(0x596dab3ababa743cU)), ((u64)(0x0282c674aadc39bbU)), ((u64)(0x478aef622efb9030U)), ((u64)(0x0202385d557cfafcU)), ((u64)(0xd8de4bd04b2c19e6U)), ((u64)(0x0336c0955594c4c6U)), ((u64)(0xad7ea30d08f014b8U)), ((u64)(0x029233aaaadd6a38U)), ((u64)(0x24654f3da0c01093U)), ((u64)(0x020e8fbbbbe454faU)), ((u64)(0x3a3bb1fc346680ebU)), ((u64)(0x034a7f92c63a2190U)), 
((u64)(0x94fc8e635d1ecd89U)), ((u64)(0x02a1ffa89e94e7a6U)), ((u64)(0xaa63a51c4a7f0ad4U)), ((u64)(0x021b32ed4baa52ebU)), ((u64)(0xdd6c3b607731aaedU)), ((u64)(0x035eb7e212aa1e45U)), ((u64)(0x1789c919f8f488bdU)), ((u64)(0x02b22cb4dbbb4b6bU)), ((u64)(0xac6e3a7b2d906d64U)), ((u64)(0x022823c3e2fc3c55U)), ((u64)(0x13e390c515b3e23aU)), ((u64)(0x03736c6c9e606089U)), ((u64)(0xdcb60d6a77c31b62U)), ((u64)(0x02c2bd23b1e6b3a0U)), ((u64)(0x7d5e7121f968e2b5U)), ((u64)(0x0235641c8e52294dU)), 
((u64)(0xc8971b698f0e3787U)), ((u64)(0x0388a02db0837548U)), ((u64)(0xa078e2bad8d82c6cU)), ((u64)(0x02d3b357c0692aa0U)), ((u64)(0xe6c71bc8ad79bd24U)), ((u64)(0x0242f5dfcd20eee6U)), ((u64)(0x0ad82c7448c2c839U)), ((u64)(0x039e5632e1ce4b0bU)), ((u64)(0x3be023903a356cfaU)), ((u64)(0x02e511c24e3ea26fU)), ((u64)(0x2fe682d9c82abd95U)), ((u64)(0x0250db01d8321b8cU)), ((u64)(0x4ca4048fa6aac8eeU)), ((u64)(0x03b4919c8d1cf8e0U)), ((u64)(0x3d5003a61eef0725U)), ((u64)(0x02f6dae3a4172d80U)), 
((u64)(0x9773361e7f259f51U)), ((u64)(0x025f1582e9ac2466U)), ((u64)(0x8beb89ca6508fee8U)), ((u64)(0x03cb559e42ad070aU)), ((u64)(0x6fefa16eb73a6586U)), ((u64)(0x0309114b688a6c08U)), ((u64)(0xf3261abef8fb846bU)), ((u64)(0x026da76f86d52339U)), ((u64)(0x51d691318e5f3a45U)), ((u64)(0x03e2a57f3e21d1f6U)), ((u64)(0x0e4540f471e5c837U)), ((u64)(0x031bb798fe8174c5U)), ((u64)(0xd8376729f4b7d360U)), ((u64)(0x027c92e0cb9ac3d0U)), ((u64)(0xf38bd84321261effU)), ((u64)(0x03fa849adf5e061aU)), 
((u64)(0x293cad0280eb4bffU)), ((u64)(0x032ed07be5e4d1afU)), ((u64)(0xedca240200bc3cccU)), ((u64)(0x028bd9fcb7ea4158U)), ((u64)(0xbe3b50019a3030a4U)), ((u64)(0x02097b309321cde0U)), ((u64)(0xc9f88002904d1a9fU)), ((u64)(0x03425eb41e9c7c9aU)), ((u64)(0x3b2d3335403daee6U)), ((u64)(0x029b7ef67ee396e2U)), ((u64)(0x95bdc291003158b8U)), ((u64)(0x0215ff2b98b6124eU)), ((u64)(0x892f9db4cd1bc126U)), ((u64)(0x035665128df01d4aU)), ((u64)(0x07594af70a7c9a85U)), ((u64)(0x02ab840ed7f34aa2U)), 
((u64)(0x6c476f2c0863aed1U)), ((u64)(0x0222d00bdff5d54eU)), ((u64)(0x13a57eacda3917b4U)), ((u64)(0x036ae67966562217U)), ((u64)(0x0fb7988a482dac90U)), ((u64)(0x02bbeb9451de81acU)), ((u64)(0xd95fad3b6cf156daU)), ((u64)(0x022fefa9db1867bcU)), ((u64)(0xf565e1f8ae4ef15cU)), ((u64)(0x037fe5dc91c0a5faU)), ((u64)(0x911e4e608b725ab0U)), ((u64)(0x02ccb7e3a7cd5195U)), ((u64)(0xda7ea51a0928488dU)), ((u64)(0x023d5fe9530aa7aaU)), ((u64)(0xf7310829a8407415U)), ((u64)(0x039566421e7772aaU)), 
((u64)(0x2c2739baed005cdeU)), ((u64)(0x02ddeb68185f8eefU)), ((u64)(0xbcec2e2f24004a4bU)), ((u64)(0x024b22b9ad193f25U)), ((u64)(0x94ad16b1d333aa11U)), ((u64)(0x03ab6ac2ae8ecb6fU)), ((u64)(0xaa241227dc2954dbU)), ((u64)(0x02ef889bbed8a2bfU)), ((u64)(0x54e9a81fe35443e2U)), ((u64)(0x02593a163246e899U)), ((u64)(0x2175d9cc9eed396aU)), ((u64)(0x03c1f689ea0b0dc2U)), ((u64)(0xe7917b0a18bdc788U)), ((u64)(0x03019207ee6f3e34U)), ((u64)(0xb9412f3b46fe393aU)), ((u64)(0x0267a8065858fe90U)), 
((u64)(0xf535185ed7fd285cU)), ((u64)(0x03d90cd6f3c1974dU)), ((u64)(0xc42a79e57997537dU)), ((u64)(0x03140a458fce12a4U)), ((u64)(0x03552e512e12a931U)), ((u64)(0x02766e9e0ca4dbb7U)), ((u64)(0x9eeeb081e3510eb4U)), ((u64)(0x03f0b0fce107c5f1U)), ((u64)(0x4bf226ce4f740bc3U)), ((u64)(0x0326f3fd80d304c1U)), ((u64)(0xa3281f0b72c33c9cU)), ((u64)(0x02858ffe00a8d09aU)), ((u64)(0x1c2018d5f568fd4aU)), ((u64)(0x020473319a20a6e2U)), ((u64)(0xf9ccf48988a7fba9U)), ((u64)(0x033a51e8f69aa49cU)), 
((u64)(0xfb0a5d3ad3b99621U)), ((u64)(0x02950e53f87bb6e3U)), ((u64)(0x2f3b7dc8a96144e7U)), ((u64)(0x0210d8432d2fc583U)), ((u64)(0xe52bfc7442353b0cU)), ((u64)(0x034e26d1e1e608d1U)), ((u64)(0xb756639034f76270U)), ((u64)(0x02a4ebdb1b1e6d74U)), ((u64)(0x2c451c735d92b526U)), ((u64)(0x021d897c15b1f12aU)), ((u64)(0x13a1c71efc1deea3U)), ((u64)(0x0362759355e981ddU)), ((u64)(0x761b05b2634b2550U)), ((u64)(0x02b52adc44bace4aU)), ((u64)(0x91af37c1e908eaa6U)), ((u64)(0x022a88b036fbd83bU)), 
((u64)(0x82b1f2cfdb417770U)), ((u64)(0x03774119f192f392U)), ((u64)(0xcef4c23fe29ac5f3U)), ((u64)(0x02c5cdae5adbf60eU)), ((u64)(0x3f2a34ffe87bd190U)), ((u64)(0x0237d7beaf165e72U)), ((u64)(0x984387ffda5fb5b2U)), ((u64)(0x038c8c644b56fd83U)), ((u64)(0xe0360666484c915bU)), ((u64)(0x02d6d6b6a2abfe02U)), ((u64)(0x802b3851d3707449U)), ((u64)(0x024578921bbccb35U)), ((u64)(0x99dec082ebe72075U)), ((u64)(0x03a25a835f947855U)), ((u64)(0xae4bcd358985b391U)), ((u64)(0x02e8486919439377U)), 
((u64)(0xbea30a913ad15c74U)), ((u64)(0x02536d20e102dc5fU)), ((u64)(0xfdd1aa81f7b560b9U)), ((u64)(0x03b8ae9b019e2d65U)), ((u64)(0x97daeece5fc44d61U)), ((u64)(0x02fa2548ce182451U)), ((u64)(0xdfe258a51969d781U)), ((u64)(0x0261b76d71ace9daU)), ((u64)(0x996a276e8f0fbf34U)), ((u64)(0x03cf8be24f7b0fc4U)), ((u64)(0xe121b9253f3fcc2aU)), ((u64)(0x030c6fe83f95a636U)), ((u64)(0xb41afa8432997022U)), ((u64)(0x02705986994484f8U)), ((u64)(0xecf7f739ea8f19cfU)), ((u64)(0x03e6f5a4286da18dU)), 
((u64)(0x23f99294bba5ae40U)), ((u64)(0x031f2ae9b9f14e0bU)), ((u64)(0x4ffadbaa2fb7be99U)), ((u64)(0x027f5587c7f43e6fU)), ((u64)(0x7ff7c5dd1925fdc2U)), ((u64)(0x03feef3fa6539718U)), ((u64)(0xccc637e4141e649bU)), ((u64)(0x033258ffb842df46U)), ((u64)(0xd704f983434b83afU)), ((u64)(0x028ead9960357f6bU)), ((u64)(0x126a6135cf6f9c8cU)), ((u64)(0x020bbe144cf79923U)), ((u64)(0x83dd685618b29414U)), ((u64)(0x0345fced47f28e9eU)), ((u64)(0x9cb12044e08edcddU)), ((u64)(0x029e63f1065ba54bU)), 
((u64)(0x16f419d0b3a57d7dU)), ((u64)(0x02184ff405161dd6U)), ((u64)(0x8b20294dec3bfbfbU)), ((u64)(0x035a19866e89c956U)), ((u64)(0x3c19baa4bcfcc996U)), ((u64)(0x02ae7ad1f207d445U)), ((u64)(0xc9ae2eea30ca3adfU)), ((u64)(0x02252f0e5b39769dU)), ((u64)(0x0f7d17dd1add2afdU)), ((u64)(0x036eb1b091f58a96U)), ((u64)(0x3f97464a7be42264U)), ((u64)(0x02bef48d41913babU)), ((u64)(0xcc790508631ce850U)), ((u64)(0x02325d3dce0dc955U)), ((u64)(0xe0c1a1a704fb0d4dU)), ((u64)(0x0383c862e3494222U)), 
((u64)(0x4d67b4859d95a43eU)), ((u64)(0x02cfd3824f6dce82U)), ((u64)(0x711fc39e17aae9cbU)), ((u64)(0x023fdc683f8b0b9bU)), ((u64)(0xe832d2968c44a945U)), ((u64)(0x039960a6cc11ac2bU)), ((u64)(0xecf575453d03ba9eU)), ((u64)(0x02e11a1f09a7bcefU)), ((u64)(0x572ac4376402fbb1U)), ((u64)(0x024dae7f3aec9726U)), ((u64)(0x58446d256cd192b5U)), ((u64)(0x03af7d985e47583dU)), ((u64)(0x79d0575123dadbc4U)), ((u64)(0x02f2cae04b6c4697U)), ((u64)(0x94a6ac40e97be303U)), ((u64)(0x025bd5803c569edfU)), 
((u64)(0x8771139b0f2c9e6cU)), ((u64)(0x03c62266c6f0fe32U)), ((u64)(0x9f8da948d8f07ebdU)), ((u64)(0x0304e85238c0cb5bU)), ((u64)(0xe60aedd3e0c06564U)), ((u64)(0x026a5374fa33d5e2U)), ((u64)(0xa344afb9679a3bd2U)), ((u64)(0x03dd5254c3862304U)), ((u64)(0xe903bfc78614fca8U)), ((u64)(0x031775109c6b4f36U)), ((u64)(0xba6966393810ca20U)), ((u64)(0x02792a73b055d8f8U)), ((u64)(0x2a423d2859b4769aU)), ((u64)(0x03f510b91a22f4c1U)), ((u64)(0xee9b642047c39215U)), ((u64)(0x032a73c7481bf700U)), 
((u64)(0xbee2b680396941aaU)), ((u64)(0x02885c9f6ce32c00U)), ((u64)(0xff1bc53361210155U)), ((u64)(0x0206b07f8a4f5666U)), ((u64)(0x31c6085235019bbbU)), ((u64)(0x033de73276e5570bU)), ((u64)(0x27d1a041c4014963U)), ((u64)(0x0297ec285f1ddf3cU)), ((u64)(0xeca7b367d0010782U)), ((u64)(0x021323537f4b18fcU)), ((u64)(0xadd91f0c8001a59dU)), ((u64)(0x0351d21f3211c194U)), ((u64)(0xf17a7f3d3334847eU)), ((u64)(0x02a7db4c280e3476U)), ((u64)(0x279532975c2a0398U)), ((u64)(0x021fe2a3533e905fU)), 
((u64)(0xd8eeb75893766c26U)), ((u64)(0x0366376bb8641a31U)), ((u64)(0x7a5892ad42c52352U)), ((u64)(0x02b82c562d1ce1c1U)), ((u64)(0xfb7a0ef102374f75U)), ((u64)(0x022cf044f0e3e7cdU)), ((u64)(0xc59017e8038bb254U)), ((u64)(0x037b1a07e7d30c7cU)), ((u64)(0x37a67986693c8eaaU)), ((u64)(0x02c8e19feca8d6caU)), ((u64)(0xf951fad1edca0bbbU)), ((u64)(0x023a4e198a20abd4U)), ((u64)(0x28832ae97c76792bU)), ((u64)(0x03907cf5a9cddfbbU)), ((u64)(0x2068ef21305ec756U)), ((u64)(0x02d9fd9154a4b2fcU)), 
((u64)(0x19ed8c1a8d189f78U)), ((u64)(0x0247fe0ddd508f30U)), ((u64)(0x5caf4690e1c0ff26U)), ((u64)(0x03a66349621a7eb3U)), ((u64)(0x4a25d20d81673285U)), ((u64)(0x02eb82a11b48655cU)), ((u64)(0x3b5174d79ab8f537U)), ((u64)(0x0256021a7c39eab0U)), ((u64)(0x921bee25c45b21f1U)), ((u64)(0x03bcd02a605caab3U)), ((u64)(0xdb498b5169e2818eU)), ((u64)(0x02fd735519e3bbc2U)), ((u64)(0x15d46f7454b53472U)), ((u64)(0x02645c4414b62fcfU)), ((u64)(0xefba4bed545520b6U)), ((u64)(0x03d3c6d35456b2e4U)), 
((u64)(0xf2fb6ff110441a2bU)), ((u64)(0x030fd242a9def583U)), ((u64)(0x8f2f8cc0d9d014efU)), ((u64)(0x02730e9bbb18c469U)), ((u64)(0xb1e5ae015c80217fU)), ((u64)(0x03eb4a92c4f46d75U)), ((u64)(0xc1848b344a001accU)), ((u64)(0x0322a20f03f6bdf7U)), ((u64)(0xce03a2903b3348a3U)), ((u64)(0x02821b3f365efe5fU)), ((u64)(0xd802e873628f6d4fU)), ((u64)(0x0201af65c518cb7fU)), ((u64)(0x599e40b89db2487fU)), ((u64)(0x0335e56fa1c14599U)), ((u64)(0xe14b66fa17c1d399U)), ((u64)(0x029184594e3437adU)), 
((u64)(0x81091f2e7967dc7aU)), ((u64)(0x020e037aa4f692f1U)), ((u64)(0x9b41cb7d8f0c93f6U)), ((u64)(0x03499f2aa18a84b5U)), ((u64)(0xaf67d5fe0c0a0ff8U)), ((u64)(0x02a14c221ad536f7U)), ((u64)(0xf2b977fe70080cc7U)), ((u64)(0x021aa34e7bddc592U)), ((u64)(0x1df58cca4cd9ae0bU)), ((u64)(0x035dd2172c9608ebU)), ((u64)(0xe4c470a1d7148b3cU)), ((u64)(0x02b174df56de6d88U)), ((u64)(0x83d05a1b1276d5caU)), ((u64)(0x022790b2abe5246dU)), ((u64)(0x9fb3c35e83f1560fU)), ((u64)(0x0372811ddfd50715U)), 
((u64)(0xb2f635e5365aab3fU)), ((u64)(0x02c200e4b310d277U)), ((u64)(0xf591c4b75eaeef66U)), ((u64)(0x0234cd83c273db92U)), ((u64)(0xef4fa125644b18a3U)), ((u64)(0x0387af39371fc5b7U)), ((u64)(0x8c3fb41de9d5ad4fU)), ((u64)(0x02d2f2942c196af9U)), ((u64)(0x3cffc34b2177bdd9U)), ((u64)(0x02425ba9bce12261U)), ((u64)(0x94cc6bab68bf9628U)), ((u64)(0x039d5f75fb01d09bU)), ((u64)(0x10a38955ed6611b9U)), ((u64)(0x02e44c5e6267da16U)), ((u64)(0xda1c6dde5784dafbU)), ((u64)(0x02503d184eb97b44U)), 
((u64)(0xf693e2fd58d49191U)), ((u64)(0x03b394f3b128c53aU)), ((u64)(0xc5431bfde0aa0e0eU)), ((u64)(0x02f610c2f4209dc8U)), ((u64)(0x6a9c1664b3bb3e72U)), ((u64)(0x025e73cf29b3b16dU)), ((u64)(0x10f9bd6dec5eca4fU)), ((u64)(0x03ca52e50f85e8afU)), ((u64)(0xda616457f04bd50cU)), ((u64)(0x03084250d937ed58U)), ((u64)(0xe1e783798d09773dU)), ((u64)(0x026d01da475ff113U)), ((u64)(0x030c058f480f252eU)), ((u64)(0x03e19c9072331b53U)), ((u64)(0x68d66ad906728425U)), ((u64)(0x031ae3a6c1c27c42U)), 
((u64)(0x8711ef14052869b7U)), ((u64)(0x027be952349b969bU)), ((u64)(0x0b4fe4ecd50d75f2U)), ((u64)(0x03f97550542c242cU)), ((u64)(0xa2a650bd773df7f5U)), ((u64)(0x032df7737689b689U)), ((u64)(0xb551da312c31932aU)), ((u64)(0x028b2c5c5ed49207U)), ((u64)(0x5ddb14f4235adc22U)), ((u64)(0x0208f049e576db39U)), ((u64)(0x2fc4ee536bc49369U)), ((u64)(0x034180763bf15ec2U)), ((u64)(0xbfd0bea92303a921U)), ((u64)(0x029acd2b63277f01U)), ((u64)(0x9973cbba8269541aU)), ((u64)(0x021570ef8285ff34U)), 
((u64)(0x5bec792a6a42202aU)), ((u64)(0x0355817f373ccb87U)), ((u64)(0xe3239421ee9b4cefU)), ((u64)(0x02aacdff5f63d605U)), ((u64)(0xb5b6101b25490a59U)), ((u64)(0x02223e65e5e97804U)), ((u64)(0x22bce691d541aa27U)), ((u64)(0x0369fd6fd64259a1U)), ((u64)(0xb563eba7ddce21b9U)), ((u64)(0x02bb31264501e14dU)), ((u64)(0xf78322ecb171b494U)), ((u64)(0x022f5a850401810aU)), ((u64)(0x259e9e47824f8753U)), ((u64)(0x037ef73b399c01abU)), ((u64)(0x1e187e9f9b72d2a9U)), ((u64)(0x02cbf8fc2e1667bcU)), 
((u64)(0x4b46cbb2e2c24221U)), ((u64)(0x023cc73024deb963U)), ((u64)(0x120adf849e039d01U)), ((u64)(0x039471e6a1645bd2U)), ((u64)(0xdb3be603b19c7d9aU)), ((u64)(0x02dd27ebb4504974U)), ((u64)(0x7c2feb3627b0647cU)), ((u64)(0x024a865629d9d45dU)), ((u64)(0x2d197856a5e7072cU)), ((u64)(0x03aa7089dc8fba2fU)), ((u64)(0x8a7ac6abb7ec05bdU)), ((u64)(0x02eec06e4a0c94f2U)), ((u64)(0xd52f05562cbcd164U)), ((u64)(0x025899f1d4d6dd8eU)), ((u64)(0x21e4d556adfae8a0U)), ((u64)(0x03c0f64fbaf1627eU)), 
((u64)(0xe7ea444557fbed4dU)), ((u64)(0x0300c50c958de864U)), ((u64)(0xecbb69d1132ff10aU)), ((u64)(0x0267040a113e5383U)), ((u64)(0xadf8a94e851981aaU)), ((u64)(0x03d8067681fd526cU)), ((u64)(0x8b2d543ed0e13488U)), ((u64)(0x0313385ece6441f0U)), ((u64)(0xd5bddcff0d80f6d3U)), ((u64)(0x0275c6b23eb69b26U)), ((u64)(0x892fc7fe7c018aebU)), ((u64)(0x03efa45064575ea4U)), ((u64)(0x3a8c9ffec99ad589U)), ((u64)(0x03261d0d1d12b21dU)), ((u64)(0xc8707fff07af113bU)), ((u64)(0x0284e40a7da88e7dU)), 
((u64)(0x39f39998d2f2742fU)), ((u64)(0x0203e9a1fe2071feU)), ((u64)(0x8fec28f484b7204bU)), ((u64)(0x033975cffd00b663U)), ((u64)(0xd989ba5d36f8e6a2U)), ((u64)(0x02945e3ffd9a2b82U)), ((u64)(0x47a161e42bfa521cU)), ((u64)(0x02104b66647b5602U)), ((u64)(0x0c35696d132a1cf9U)), ((u64)(0x034d4570a0c5566aU)), ((u64)(0x09c454574288172dU)), ((u64)(0x02a4378d4d6aab88U)), ((u64)(0xa169dd129ba0128bU)), ((u64)(0x021cf93dd7888939U)), ((u64)(0x0242fb50f9001dabU)), ((u64)(0x03618ec958da7529U)), 
((u64)(0x9b68c90d940017bcU)), ((u64)(0x02b4723aad7b90edU)), ((u64)(0x4920a0d7a999ac96U)), ((u64)(0x0229f4fbbdfc73f1U)), ((u64)(0x750101590f5c4757U)), ((u64)(0x037654c5fcc71fe8U)), ((u64)(0x2a6734473f7d05dfU)), ((u64)(0x02c5109e63d27fedU)), ((u64)(0xeeb8f69f65fd9e4cU)), ((u64)(0x0237407eb641fff0U)), ((u64)(0xe45b24323cc8fd46U)), ((u64)(0x038b9a6456cfffe7U)), ((u64)(0xb6af502830a0ca9fU)), ((u64)(0x02d6151d123fffecU)), ((u64)(0xf88c402026e7087fU)), ((u64)(0x0244ddb0db666656U)), 
((u64)(0x2746cd003e3e73feU)), ((u64)(0x03a162b4923d708bU)), ((u64)(0x1f6bd73364fec332U)), ((u64)(0x02e7822a0e978d3cU)), ((u64)(0xe5efdf5c50cbcf5bU)), ((u64)(0x0252ce880bac70fcU)), ((u64)(0x3cb2fefa1adfb22bU)), ((u64)(0x03b7b0d9ac471b2eU)), ((u64)(0x308f3261af195b56U)), ((u64)(0x02f95a47bd05af58U)), ((u64)(0x5a0c284e25ade2abU)), ((u64)(0x0261150630d15913U)), ((u64)(0x29ad0d49d5e30445U)), ((u64)(0x03ce8809e7b55b52U)), ((u64)(0x548a7107de4f369dU)), ((u64)(0x030ba007ec9115dbU)), ((u64)(0xdd3b8d9fe50c2bb1U)), ((u64)(0x026fb3398a0dab15U)), ((u64)(0x952c15cca1ad12b5U)), ((u64)(0x03e5eb8f434911bcU)), ((u64)(0x775677d6e7bda891U)), ((u64)(0x031e560c35d40e30U)), ((u64)(0xc5dec645863153a7U)), ((u64)(0x027eab3cf7dcd826U))}; // fixed array const
bool v_memory_panic = false; // global 6

int g_main_argc = ((int)(0)); // global 6

voidptr g_main_argv = ((void*)0); // global 6

voidptr g_live_reload_info; // global 6

u32 g_original_codepage = ((u32)(0U)); // global 6

i64 _const_min_i64; // inited later
i64 _const_max_i64; // inited later
const u64 _const_max_u64 = 18446744073709551615U; // precomputed2
const f64 _const_max_load_factor = 0.8; // precomputed2
const u32 _const_hash_mask = 16777215; // precomputed2
const u32 _const_probe_inc = 16777216; // precomputed2
IError _const_none__; // inited later
Array_fixed_i32_1264 _const_rune_maps = {((i32)(0xB5)), 0xB5, 743, 0, 0xC0, 0xD6, 0, 32, 0xD8, 0xDE, 0, 32, 0xE0, 0xF6, -32, 0, 
0xF8, 0xFE, -32, 0, 0xFF, 0xFF, 121, 0, 0x100, 0x12F, -3, -3, 0x130, 0x130, 0, -199, 
0x131, 0x131, -232, 0, 0x132, 0x137, -3, -3, 0x139, 0x148, -3, -3, 0x14A, 0x177, -3, -3, 
0x178, 0x178, 0, -121, 0x179, 0x17E, -3, -3, 0x17F, 0x17F, -300, 0, 0x180, 0x180, 195, 0, 
0x181, 0x181, 0, 210, 0x182, 0x185, -3, -3, 0x186, 0x186, 0, 206, 0x187, 0x188, -3, -3, 
0x189, 0x18A, 0, 205, 0x18B, 0x18C, -3, -3, 0x18E, 0x18E, 0, 79, 0x18F, 0x18F, 0, 202, 
0x190, 0x190, 0, 203, 0x191, 0x192, -3, -3, 0x193, 0x193, 0, 205, 0x194, 0x194, 0, 207, 
0x195, 0x195, 97, 0, 0x196, 0x196, 0, 211, 0x197, 0x197, 0, 209, 0x198, 0x199, -3, -3, 
0x19A, 0x19A, 163, 0, 0x19C, 0x19C, 0, 211, 0x19D, 0x19D, 0, 213, 0x19E, 0x19E, 130, 0, 
0x19F, 0x19F, 0, 214, 0x1A0, 0x1A5, -3, -3, 0x1A6, 0x1A6, 0, 218, 0x1A7, 0x1A8, -3, -3, 
0x1A9, 0x1A9, 0, 218, 0x1AC, 0x1AD, -3, -3, 0x1AE, 0x1AE, 0, 218, 0x1AF, 0x1B0, -3, -3, 
0x1B1, 0x1B2, 0, 217, 0x1B3, 0x1B6, -3, -3, 0x1B7, 0x1B7, 0, 219, 0x1B8, 0x1B9, -3, -3, 
0x1BC, 0x1BD, -3, -3, 0x1BF, 0x1BF, 56, 0, 0x1C4, 0x1CC, -2, -2, 0x1CD, 0x1DC, -3, -3, 
0x1DD, 0x1DD, -79, 0, 0x1DE, 0x1EF, -3, -3, 0x1F1, 0x1F3, -2, -2, 0x1F4, 0x1F5, -3, -3, 
0x1F6, 0x1F6, 0, -97, 0x1F7, 0x1F7, 0, -56, 0x1F8, 0x21F, -3, -3, 0x220, 0x220, 0, -130, 
0x222, 0x233, -3, -3, 0x23A, 0x23A, 0, 10795, 0x23B, 0x23C, -3, -3, 0x23D, 0x23D, 0, -163, 
0x23E, 0x23E, 0, 10792, 0x23F, 0x240, 10815, 0, 0x241, 0x242, -3, -3, 0x243, 0x243, 0, -195, 
0x244, 0x244, 0, 69, 0x245, 0x245, 0, 71, 0x246, 0x24F, -3, -3, 0x250, 0x250, 10783, 0, 
0x251, 0x251, 10780, 0, 0x252, 0x252, 10782, 0, 0x253, 0x253, -210, 0, 0x254, 0x254, -206, 0, 
0x256, 0x257, -205, 0, 0x259, 0x259, -202, 0, 0x25B, 0x25B, -203, 0, 0x25C, 0x25C, 42319, 0, 
0x260, 0x260, -205, 0, 0x261, 0x261, 42315, 0, 0x263, 0x263, -207, 0, 0x265, 0x265, 42280, 0, 
0x266, 0x266, 42308, 0, 0x268, 0x268, -209, 0, 0x269, 0x269, -211, 0, 0x26A, 0x26A, 42308, 0, 
0x26B, 0x26B, 10743, 0, 0x26C, 0x26C, 42305, 0, 0x26F, 0x26F, -211, 0, 0x271, 0x271, 10749, 0, 
0x272, 0x272, -213, 0, 0x275, 0x275, -214, 0, 0x27D, 0x27D, 10727, 0, 0x280, 0x280, -218, 0, 
0x282, 0x282, 42307, 0, 0x283, 0x283, -218, 0, 0x287, 0x287, 42282, 0, 0x288, 0x288, -218, 0, 
0x289, 0x289, -69, 0, 0x28A, 0x28B, -217, 0, 0x28C, 0x28C, -71, 0, 0x292, 0x292, -219, 0, 
0x29D, 0x29D, 42261, 0, 0x29E, 0x29E, 42258, 0, 0x345, 0x345, 84, 0, 0x370, 0x373, -3, -3, 
0x376, 0x377, -3, -3, 0x37B, 0x37D, 130, 0, 0x37F, 0x37F, 0, 116, 0x386, 0x386, 0, 38, 
0x388, 0x38A, 0, 37, 0x38C, 0x38C, 0, 64, 0x38E, 0x38F, 0, 63, 0x391, 0x3A1, 0, 32, 
0x3A3, 0x3AB, 0, 32, 0x3AC, 0x3AC, -38, 0, 0x3AD, 0x3AF, -37, 0, 0x3B1, 0x3C1, -32, 0, 
0x3C2, 0x3C2, -31, 0, 0x3C3, 0x3CB, -32, 0, 0x3CC, 0x3CC, -64, 0, 0x3CD, 0x3CE, -63, 0, 
0x3CF, 0x3CF, 0, 8, 0x3D0, 0x3D0, -62, 0, 0x3D1, 0x3D1, -57, 0, 0x3D5, 0x3D5, -47, 0, 
0x3D6, 0x3D6, -54, 0, 0x3D7, 0x3D7, -8, 0, 0x3D8, 0x3EF, -3, -3, 0x3F0, 0x3F0, -86, 0, 
0x3F1, 0x3F1, -80, 0, 0x3F2, 0x3F2, 7, 0, 0x3F3, 0x3F3, -116, 0, 0x3F4, 0x3F4, 0, -60, 
0x3F5, 0x3F5, -96, 0, 0x3F7, 0x3F8, -3, -3, 0x3F9, 0x3F9, 0, -7, 0x3FA, 0x3FB, -3, -3, 
0x3FD, 0x3FF, 0, -130, 0x400, 0x40F, 0, 80, 0x410, 0x42F, 0, 32, 0x430, 0x44F, -32, 0, 
0x450, 0x45F, -80, 0, 0x460, 0x481, -3, -3, 0x48A, 0x4BF, -3, -3, 0x4C0, 0x4C0, 0, 15, 
0x4C1, 0x4CE, -3, -3, 0x4CF, 0x4CF, -15, 0, 0x4D0, 0x52F, -3, -3, 0x531, 0x556, 0, 48, 
0x561, 0x586, -48, 0, 0x10A0, 0x10C5, 0, 7264, 0x10C7, 0x10C7, 0, 7264, 0x10CD, 0x10CD, 0, 7264, 
0x10D0, 0x10FA, 3008, 0, 0x10FD, 0x10FF, 3008, 0, 0x13A0, 0x13EF, 0, 38864, 0x13F0, 0x13F5, 0, 8, 
0x13F8, 0x13FD, -8, 0, 0x1C80, 0x1C80, -6254, 0, 0x1C81, 0x1C81, -6253, 0, 0x1C82, 0x1C82, -6244, 0, 
0x1C83, 0x1C84, -6242, 0, 0x1C85, 0x1C85, -6243, 0, 0x1C86, 0x1C86, -6236, 0, 0x1C87, 0x1C87, -6181, 0, 
0x1C88, 0x1C88, 35266, 0, 0x1C90, 0x1CBA, 0, -3008, 0x1CBD, 0x1CBF, 0, -3008, 0x1D79, 0x1D79, 35332, 0, 
0x1D7D, 0x1D7D, 3814, 0, 0x1D8E, 0x1D8E, 35384, 0, 0x1E00, 0x1E95, -3, -3, 0x1E9B, 0x1E9B, -59, 0, 
0x1E9E, 0x1E9E, 0, -7615, 0x1EA0, 0x1EFF, -3, -3, 0x1F00, 0x1F07, 8, 0, 0x1F08, 0x1F0F, 0, -8, 
0x1F10, 0x1F15, 8, 0, 0x1F18, 0x1F1D, 0, -8, 0x1F20, 0x1F27, 8, 0, 0x1F28, 0x1F2F, 0, -8, 
0x1F30, 0x1F37, 8, 0, 0x1F38, 0x1F3F, 0, -8, 0x1F40, 0x1F45, 8, 0, 0x1F48, 0x1F4D, 0, -8, 
0x1F51, 0x1F51, 8, 0, 0x1F53, 0x1F53, 8, 0, 0x1F55, 0x1F55, 8, 0, 0x1F57, 0x1F57, 8, 0, 
0x1F59, 0x1F59, 0, -8, 0x1F5B, 0x1F5B, 0, -8, 0x1F5D, 0x1F5D, 0, -8, 0x1F5F, 0x1F5F, 0, -8, 
0x1F60, 0x1F67, 8, 0, 0x1F68, 0x1F6F, 0, -8, 0x1F70, 0x1F71, 74, 0, 0x1F72, 0x1F75, 86, 0, 
0x1F76, 0x1F77, 100, 0, 0x1F78, 0x1F79, 128, 0, 0x1F7A, 0x1F7B, 112, 0, 0x1F7C, 0x1F7D, 126, 0, 
0x1F80, 0x1F87, 8, 0, 0x1F88, 0x1F8F, 0, -8, 0x1F90, 0x1F97, 8, 0, 0x1F98, 0x1F9F, 0, -8, 
0x1FA0, 0x1FA7, 8, 0, 0x1FA8, 0x1FAF, 0, -8, 0x1FB0, 0x1FB1, 8, 0, 0x1FB3, 0x1FB3, 9, 0, 
0x1FB8, 0x1FB9, 0, -8, 0x1FBA, 0x1FBB, 0, -74, 0x1FBC, 0x1FBC, 0, -9, 0x1FBE, 0x1FBE, -7205, 0, 
0x1FC3, 0x1FC3, 9, 0, 0x1FC8, 0x1FCB, 0, -86, 0x1FCC, 0x1FCC, 0, -9, 0x1FD0, 0x1FD1, 8, 0, 
0x1FD8, 0x1FD9, 0, -8, 0x1FDA, 0x1FDB, 0, -100, 0x1FE0, 0x1FE1, 8, 0, 0x1FE5, 0x1FE5, 7, 0, 
0x1FE8, 0x1FE9, 0, -8, 0x1FEA, 0x1FEB, 0, -112, 0x1FEC, 0x1FEC, 0, -7, 0x1FF3, 0x1FF3, 9, 0, 
0x1FF8, 0x1FF9, 0, -128, 0x1FFA, 0x1FFB, 0, -126, 0x1FFC, 0x1FFC, 0, -9, 0x2126, 0x2126, 0, -7517, 
0x212A, 0x212A, 0, -8383, 0x212B, 0x212B, 0, -8262, 0x2132, 0x2132, 0, 28, 0x214E, 0x214E, -28, 0, 
0x2160, 0x216F, 0, 16, 0x2170, 0x217F, -16, 0, 0x2183, 0x2184, -3, -3, 0x24B6, 0x24CF, 0, 26, 
0x24D0, 0x24E9, -26, 0, 0x2C00, 0x2C2F, 0, 48, 0x2C30, 0x2C5F, -48, 0, 0x2C60, 0x2C61, -3, -3, 
0x2C62, 0x2C62, 0, -10743, 0x2C63, 0x2C63, 0, -3814, 0x2C64, 0x2C64, 0, -10727, 0x2C65, 0x2C65, -10795, 0, 
0x2C66, 0x2C66, -10792, 0, 0x2C67, 0x2C6C, -3, -3, 0x2C6D, 0x2C6D, 0, -10780, 0x2C6E, 0x2C6E, 0, -10749, 
0x2C6F, 0x2C6F, 0, -10783, 0x2C70, 0x2C70, 0, -10782, 0x2C72, 0x2C73, -3, -3, 0x2C75, 0x2C76, -3, -3, 
0x2C7E, 0x2C7F, 0, -10815, 0x2C80, 0x2CE3, -3, -3, 0x2CEB, 0x2CEE, -3, -3, 0x2CF2, 0x2CF3, -3, -3, 
0x2D00, 0x2D25, -7264, 0, 0x2D27, 0x2D27, -7264, 0, 0x2D2D, 0x2D2D, -7264, 0, 0xA640, 0xA66D, -3, -3, 
0xA680, 0xA69B, -3, -3, 0xA722, 0xA72F, -3, -3, 0xA732, 0xA76F, -3, -3, 0xA779, 0xA77C, -3, -3, 
0xA77D, 0xA77D, 0, -35332, 0xA77E, 0xA787, -3, -3, 0xA78B, 0xA78C, -3, -3, 0xA78D, 0xA78D, 0, -42280, 
0xA790, 0xA793, -3, -3, 0xA794, 0xA794, 48, 0, 0xA796, 0xA7A9, -3, -3, 0xA7AA, 0xA7AA, 0, -42308, 
0xA7AB, 0xA7AB, 0, -42319, 0xA7AC, 0xA7AC, 0, -42315, 0xA7AD, 0xA7AD, 0, -42305, 0xA7AE, 0xA7AE, 0, -42308, 
0xA7B0, 0xA7B0, 0, -42258, 0xA7B1, 0xA7B1, 0, -42282, 0xA7B2, 0xA7B2, 0, -42261, 0xA7B3, 0xA7B3, 0, 928, 
0xA7B4, 0xA7C3, -3, -3, 0xA7C4, 0xA7C4, 0, -48, 0xA7C5, 0xA7C5, 0, -42307, 0xA7C6, 0xA7C6, 0, -35384, 
0xA7C7, 0xA7CA, -3, -3, 0xA7D0, 0xA7D1, -3, -3, 0xA7D6, 0xA7D9, -3, -3, 0xA7F5, 0xA7F6, -3, -3, 
0xAB53, 0xAB53, -928, 0, 0xAB70, 0xABBF, -38864, 0, 0xFF21, 0xFF3A, 0, 32, 0xFF41, 0xFF5A, -32, 0, 
0x10400, 0x10427, 0, 40, 0x10428, 0x1044F, -40, 0, 0x104B0, 0x104D3, 0, 40, 0x104D8, 0x104FB, -40, 0, 
0x10570, 0x1057A, 0, 39, 0x1057C, 0x1058A, 0, 39, 0x1058C, 0x10592, 0, 39, 0x10594, 0x10595, 0, 39, 
0x10597, 0x105A1, -39, 0, 0x105A3, 0x105B1, -39, 0, 0x105B3, 0x105B9, -39, 0, 0x105BB, 0x105BC, -39, 0, 
0x10C80, 0x10CB2, 0, 64, 0x10CC0, 0x10CF2, -64, 0, 0x118A0, 0x118BF, 0, 32, 0x118C0, 0x118DF, -32, 0, 
0x16E40, 0x16E5F, 0, 32, 0x16E60, 0x16E7F, -32, 0, 0x1E900, 0x1E921, 0, 34, 0x1E922, 0x1E943, -34, 0}; // fixed array const
time__Duration _const_time__nanosecond; // inited later
time__Duration _const_time__infinite; // inited later
Array_fixed_string_7 _const_time__long_days = {_S("Monday"), _S("Tuesday"), _S("Wednesday"), _S("Thursday"), _S("Friday"), _S("Saturday"), _S("Sunday")}; // fixed array const
u64 _const_time__start_time; // inited later
u64 _const_time__freq_time; // inited later
string _const_os__wd_at_startup; // inited later
Array_string _const_os__executable_suffixes; // inited later
v__embed_file__EmbedFileDecoders* g_embed_file_decoders; // global 6

const u64 _const_rand__wyrand__wyp0 = 11562461410679940143U; // precomputed2
const u64 _const_rand__wyrand__wyp1 = 16646288086500911323U; // precomputed2
rand__PRNG* default_rng; // global 6

Array_fixed_u8_16 _const_net__addr_ip6_any = {0}; // fixed array const
Array_fixed_u8_4 _const_net__addr_ip_any = {0}; // fixed array const
u32 _const_net__aoffset; // inited later
IError _const_net__err_port_out_of_range; // inited later
IError _const_net__err_no_udp_remote; // inited later
IError _const_net__err_timed_out; // inited later
mbedtls_ctr_drbg_context _const_net__mbedtls__ctr_drbg; // inited later
mbedtls_entropy_context _const_net__mbedtls__entropy; // inited later
i64 _const_net__mbedtls__mbedtls_client_read_timeout_ms; // inited later
i64 _const_net__mbedtls__mbedtls_server_read_timeout_ms; // inited later
const u8 _const_net__socks__socks_version5 = 5; // precomputed2
const u8 _const_net__socks__addr_type_ipv4 = 1; // precomputed2
const u8 _const_net__socks__addr_type_fqdn = 3; // precomputed2
const u8 _const_net__socks__no_auth = 0; // precomputed2
const u8 _const_net__socks__auth_user_password = 2; // precomputed2
Map_string_net__http__CommonHeader _const_net__http__common_header_map; // inited later
time__Duration _const_time__microsecond; // inited later
Array_string _const_os__args; // inited later
time__Duration _const_net__infinite_timeout; // inited later
time__Duration _const_time__millisecond; // inited later
time__Duration _const_time__second; // inited later
time__Duration _const_time__minute; // inited later
i64 _const_net__tcp_default_read_timeout; // inited later
i64 _const_net__tcp_default_write_timeout; // inited later
time__Duration _const_time__hour; // inited later

// V interface table:
static IError I_None___to_Interface_IError(None__* x);
const int _IError_None___index = 0;
static IError I_voidptr_to_Interface_IError(voidptr* x);
const int _IError_voidptr_index = 1;
static IError I_Error_to_Interface_IError(Error* x);
const int _IError_Error_index = 2;
static IError I_MessageError_to_Interface_IError(MessageError* x);
const int _IError_MessageError_index = 3;
static IError I_time__TimeParseError_to_Interface_IError(time__TimeParseError* x);
const int _IError_time__TimeParseError_index = 4;
static IError I_io__Eof_to_Interface_IError(io__Eof* x);
const int _IError_io__Eof_index = 5;
static IError I_io__NotExpected_to_Interface_IError(io__NotExpected* x);
const int _IError_io__NotExpected_index = 6;
static IError I_os__Eof_to_Interface_IError(os__Eof* x);
const int _IError_os__Eof_index = 7;
static IError I_os__NotExpected_to_Interface_IError(os__NotExpected* x);
const int _IError_os__NotExpected_index = 8;
static IError I_os__FileNotOpenedError_to_Interface_IError(os__FileNotOpenedError* x);
const int _IError_os__FileNotOpenedError_index = 9;
static IError I_os__SizeOfTypeIs0Error_to_Interface_IError(os__SizeOfTypeIs0Error* x);
const int _IError_os__SizeOfTypeIs0Error_index = 10;
static IError I_os__ExecutableNotFoundError_to_Interface_IError(os__ExecutableNotFoundError* x);
const int _IError_os__ExecutableNotFoundError_index = 11;
static IError I_net__http__HeaderKeyError_to_Interface_IError(net__http__HeaderKeyError* x);
const int _IError_net__http__HeaderKeyError_index = 12;
static IError I_net__http__UnexpectedExtraAttributeError_to_Interface_IError(net__http__UnexpectedExtraAttributeError* x);
const int _IError_net__http__UnexpectedExtraAttributeError_index = 13;
static IError I_net__http__MultiplePathAttributesError_to_Interface_IError(net__http__MultiplePathAttributesError* x);
const int _IError_net__http__MultiplePathAttributesError_index = 14;
// ^^^ number of types for interface IError: 15

// Methods wrapper for interface "IError"
static inline int None___code_Interface_IError_method_wrapper(None__* err) {
	return Error_code(err->Error);
}
static inline string None___msg_Interface_IError_method_wrapper(None__* err) {
	return Error_msg(err->Error);
}
static inline int Error_code_Interface_IError_method_wrapper(Error* err) {
	return Error_code(*err);
}
static inline string Error_msg_Interface_IError_method_wrapper(Error* err) {
	return Error_msg(*err);
}
static inline int MessageError_code_Interface_IError_method_wrapper(MessageError* err) {
	return MessageError_code(*err);
}
static inline string MessageError_msg_Interface_IError_method_wrapper(MessageError* err) {
	return MessageError_msg(*err);
}
static inline int time__TimeParseError_code_Interface_IError_method_wrapper(time__TimeParseError* err) {
	return Error_code(err->Error);
}
static inline string time__TimeParseError_msg_Interface_IError_method_wrapper(time__TimeParseError* err) {
	return time__TimeParseError_msg(*err);
}
static inline int io__Eof_code_Interface_IError_method_wrapper(io__Eof* err) {
	return Error_code(err->Error);
}
static inline string io__Eof_msg_Interface_IError_method_wrapper(io__Eof* err) {
	return Error_msg(err->Error);
}
static inline int io__NotExpected_code_Interface_IError_method_wrapper(io__NotExpected* err) {
	return io__NotExpected_code(*err);
}
static inline string io__NotExpected_msg_Interface_IError_method_wrapper(io__NotExpected* err) {
	return io__NotExpected_msg(*err);
}
static inline int os__Eof_code_Interface_IError_method_wrapper(os__Eof* err) {
	return Error_code(err->Error);
}
static inline string os__Eof_msg_Interface_IError_method_wrapper(os__Eof* err) {
	return Error_msg(err->Error);
}
static inline int os__NotExpected_code_Interface_IError_method_wrapper(os__NotExpected* err) {
	return os__NotExpected_code(*err);
}
static inline string os__NotExpected_msg_Interface_IError_method_wrapper(os__NotExpected* err) {
	return os__NotExpected_msg(*err);
}
static inline int os__FileNotOpenedError_code_Interface_IError_method_wrapper(os__FileNotOpenedError* err) {
	return Error_code(err->Error);
}
static inline string os__FileNotOpenedError_msg_Interface_IError_method_wrapper(os__FileNotOpenedError* err) {
	return os__FileNotOpenedError_msg(*err);
}
static inline int os__SizeOfTypeIs0Error_code_Interface_IError_method_wrapper(os__SizeOfTypeIs0Error* err) {
	return Error_code(err->Error);
}
static inline string os__SizeOfTypeIs0Error_msg_Interface_IError_method_wrapper(os__SizeOfTypeIs0Error* err) {
	return os__SizeOfTypeIs0Error_msg(*err);
}
static inline int os__ExecutableNotFoundError_code_Interface_IError_method_wrapper(os__ExecutableNotFoundError* err) {
	return Error_code(err->Error);
}
static inline string os__ExecutableNotFoundError_msg_Interface_IError_method_wrapper(os__ExecutableNotFoundError* err) {
	return os__ExecutableNotFoundError_msg(*err);
}
static inline int net__http__HeaderKeyError_code_Interface_IError_method_wrapper(net__http__HeaderKeyError* err) {
	return net__http__HeaderKeyError_code(*err);
}
static inline string net__http__HeaderKeyError_msg_Interface_IError_method_wrapper(net__http__HeaderKeyError* err) {
	return net__http__HeaderKeyError_msg(*err);
}
static inline int net__http__UnexpectedExtraAttributeError_code_Interface_IError_method_wrapper(net__http__UnexpectedExtraAttributeError* err) {
	return Error_code(err->Error);
}
static inline string net__http__UnexpectedExtraAttributeError_msg_Interface_IError_method_wrapper(net__http__UnexpectedExtraAttributeError* err) {
	return net__http__UnexpectedExtraAttributeError_msg(*err);
}
static inline int net__http__MultiplePathAttributesError_code_Interface_IError_method_wrapper(net__http__MultiplePathAttributesError* err) {
	return Error_code(err->Error);
}
static inline string net__http__MultiplePathAttributesError_msg_Interface_IError_method_wrapper(net__http__MultiplePathAttributesError* err) {
	return net__http__MultiplePathAttributesError_msg(*err);
}

struct _IError_interface_methods {
	int (*_method_code)(void* _);
	string (*_method_msg)(void* _);
};

struct _IError_interface_methods IError_name_table[15] = {
	{
		._method_code = (void*) None___code_Interface_IError_method_wrapper,
		._method_msg = (void*) None___msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) 0,
		._method_msg = (void*) 0,
	},
	{
		._method_code = (void*) Error_code_Interface_IError_method_wrapper,
		._method_msg = (void*) Error_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) MessageError_code_Interface_IError_method_wrapper,
		._method_msg = (void*) MessageError_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) time__TimeParseError_code_Interface_IError_method_wrapper,
		._method_msg = (void*) time__TimeParseError_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) io__Eof_code_Interface_IError_method_wrapper,
		._method_msg = (void*) io__Eof_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) io__NotExpected_code_Interface_IError_method_wrapper,
		._method_msg = (void*) io__NotExpected_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) os__Eof_code_Interface_IError_method_wrapper,
		._method_msg = (void*) os__Eof_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) os__NotExpected_code_Interface_IError_method_wrapper,
		._method_msg = (void*) os__NotExpected_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) os__FileNotOpenedError_code_Interface_IError_method_wrapper,
		._method_msg = (void*) os__FileNotOpenedError_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) os__SizeOfTypeIs0Error_code_Interface_IError_method_wrapper,
		._method_msg = (void*) os__SizeOfTypeIs0Error_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) os__ExecutableNotFoundError_code_Interface_IError_method_wrapper,
		._method_msg = (void*) os__ExecutableNotFoundError_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) net__http__HeaderKeyError_code_Interface_IError_method_wrapper,
		._method_msg = (void*) net__http__HeaderKeyError_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) net__http__UnexpectedExtraAttributeError_code_Interface_IError_method_wrapper,
		._method_msg = (void*) net__http__UnexpectedExtraAttributeError_msg_Interface_IError_method_wrapper,
	},
	{
		._method_code = (void*) net__http__MultiplePathAttributesError_code_Interface_IError_method_wrapper,
		._method_msg = (void*) net__http__MultiplePathAttributesError_msg_Interface_IError_method_wrapper,
	},
};


// Casting functions for converting "None__" to interface "IError"

static inline IError I_None___to_Interface_IError(None__* x) {
return (IError) {
		._None__ = x,
		._typ = _IError_None___index,
	};
}

// Casting functions for converting "voidptr" to interface "IError"

static inline IError I_voidptr_to_Interface_IError(voidptr* x) {
return (IError) {
		._voidptr = x,
		._typ = _IError_voidptr_index,
	};
}

// Casting functions for converting "Error" to interface "IError"

static inline IError I_Error_to_Interface_IError(Error* x) {
return (IError) {
		._Error = x,
		._typ = _IError_Error_index,
	};
}

// Casting functions for converting "MessageError" to interface "IError"

static inline IError I_MessageError_to_Interface_IError(MessageError* x) {
return (IError) {
		._MessageError = x,
		._typ = _IError_MessageError_index,
	};
}

// Casting functions for converting "time__TimeParseError" to interface "IError"

static inline IError I_time__TimeParseError_to_Interface_IError(time__TimeParseError* x) {
return (IError) {
		._time__TimeParseError = x,
		._typ = _IError_time__TimeParseError_index,
	};
}

// Casting functions for converting "io__Eof" to interface "IError"

static inline IError I_io__Eof_to_Interface_IError(io__Eof* x) {
return (IError) {
		._io__Eof = x,
		._typ = _IError_io__Eof_index,
	};
}

// Casting functions for converting "io__NotExpected" to interface "IError"

static inline IError I_io__NotExpected_to_Interface_IError(io__NotExpected* x) {
return (IError) {
		._io__NotExpected = x,
		._typ = _IError_io__NotExpected_index,
	};
}

// Casting functions for converting "os__Eof" to interface "IError"

static inline IError I_os__Eof_to_Interface_IError(os__Eof* x) {
return (IError) {
		._os__Eof = x,
		._typ = _IError_os__Eof_index,
	};
}

// Casting functions for converting "os__NotExpected" to interface "IError"

static inline IError I_os__NotExpected_to_Interface_IError(os__NotExpected* x) {
return (IError) {
		._os__NotExpected = x,
		._typ = _IError_os__NotExpected_index,
	};
}

// Casting functions for converting "os__FileNotOpenedError" to interface "IError"

static inline IError I_os__FileNotOpenedError_to_Interface_IError(os__FileNotOpenedError* x) {
return (IError) {
		._os__FileNotOpenedError = x,
		._typ = _IError_os__FileNotOpenedError_index,
	};
}

// Casting functions for converting "os__SizeOfTypeIs0Error" to interface "IError"

static inline IError I_os__SizeOfTypeIs0Error_to_Interface_IError(os__SizeOfTypeIs0Error* x) {
return (IError) {
		._os__SizeOfTypeIs0Error = x,
		._typ = _IError_os__SizeOfTypeIs0Error_index,
	};
}

// Casting functions for converting "os__ExecutableNotFoundError" to interface "IError"

static inline IError I_os__ExecutableNotFoundError_to_Interface_IError(os__ExecutableNotFoundError* x) {
return (IError) {
		._os__ExecutableNotFoundError = x,
		._typ = _IError_os__ExecutableNotFoundError_index,
	};
}

// Casting functions for converting "net__http__HeaderKeyError" to interface "IError"

static inline IError I_net__http__HeaderKeyError_to_Interface_IError(net__http__HeaderKeyError* x) {
return (IError) {
		._net__http__HeaderKeyError = x,
		._typ = _IError_net__http__HeaderKeyError_index,
	};
}

// Casting functions for converting "net__http__UnexpectedExtraAttributeError" to interface "IError"

static inline IError I_net__http__UnexpectedExtraAttributeError_to_Interface_IError(net__http__UnexpectedExtraAttributeError* x) {
return (IError) {
		._net__http__UnexpectedExtraAttributeError = x,
		._typ = _IError_net__http__UnexpectedExtraAttributeError_index,
	};
}

// Casting functions for converting "net__http__MultiplePathAttributesError" to interface "IError"

static inline IError I_net__http__MultiplePathAttributesError_to_Interface_IError(net__http__MultiplePathAttributesError* x) {
return (IError) {
		._net__http__MultiplePathAttributesError = x,
		._typ = _IError_net__http__MultiplePathAttributesError_index,
	};
}

static net__http__Downloader I_voidptr_to_Interface_net__http__Downloader(voidptr* x);
const int _net__http__Downloader_voidptr_index = 0;
static net__http__Downloader I_net__http__TerminalStreamingDownloader_to_Interface_net__http__Downloader(net__http__TerminalStreamingDownloader* x);
const int _net__http__Downloader_net__http__TerminalStreamingDownloader_index = 1;
static net__http__Downloader I_net__http__SilentStreamingDownloader_to_Interface_net__http__Downloader(net__http__SilentStreamingDownloader* x);
const int _net__http__Downloader_net__http__SilentStreamingDownloader_index = 2;
// ^^^ number of types for interface net__http__Downloader: 3

// Methods wrapper for interface "net__http__Downloader"

struct _net__http__Downloader_interface_methods {
	_result_void (*_method_on_chunk)(void* _, net__http__Request* request, Array_u8 chunk, u64 already_received, u64 expected);
	_result_void (*_method_on_finish)(void* _, net__http__Request* request, net__http__Response* response);
	_result_void (*_method_on_start)(void* _, net__http__Request* request, string path);
};

struct _net__http__Downloader_interface_methods net__http__Downloader_name_table[3] = {
	{
		._method_on_chunk = (void*) 0,
		._method_on_finish = (void*) 0,
		._method_on_start = (void*) 0,
	},
	{
		._method_on_chunk = (void*) net__http__TerminalStreamingDownloader_on_chunk,
		._method_on_finish = (void*) net__http__TerminalStreamingDownloader_on_finish,
		._method_on_start = (void*) net__http__TerminalStreamingDownloader_on_start,
	},
	{
		._method_on_chunk = (void*) net__http__SilentStreamingDownloader_on_chunk,
		._method_on_finish = (void*) net__http__SilentStreamingDownloader_on_finish,
		._method_on_start = (void*) net__http__SilentStreamingDownloader_on_start,
	},
};


// Casting functions for converting "voidptr" to interface "net__http__Downloader"

static inline net__http__Downloader I_voidptr_to_Interface_net__http__Downloader(voidptr* x) {
return (net__http__Downloader) {
		._voidptr = x,
		._typ = _net__http__Downloader_voidptr_index,
	};
}

// Casting functions for converting "net__http__TerminalStreamingDownloader" to interface "net__http__Downloader"

static inline net__http__Downloader I_net__http__TerminalStreamingDownloader_to_Interface_net__http__Downloader(net__http__TerminalStreamingDownloader* x) {
return (net__http__Downloader) {
		._net__http__TerminalStreamingDownloader = x,
		._typ = _net__http__Downloader_net__http__TerminalStreamingDownloader_index,
	};
}

// Casting functions for converting "net__http__SilentStreamingDownloader" to interface "net__http__Downloader"

static inline net__http__Downloader I_net__http__SilentStreamingDownloader_to_Interface_net__http__Downloader(net__http__SilentStreamingDownloader* x) {
return (net__http__Downloader) {
		._net__http__SilentStreamingDownloader = x,
		._typ = _net__http__Downloader_net__http__SilentStreamingDownloader_index,
	};
}

static net__http__Handler I_net__http__DebugHandler_to_Interface_net__http__Handler(net__http__DebugHandler* x);
const int _net__http__Handler_net__http__DebugHandler_index = 0;
static net__http__Handler I_voidptr_to_Interface_net__http__Handler(voidptr* x);
const int _net__http__Handler_voidptr_index = 1;
// ^^^ number of types for interface net__http__Handler: 2

// Methods wrapper for interface "net__http__Handler"
static inline net__http__Response net__http__DebugHandler_handle_Interface_net__http__Handler_method_wrapper(net__http__DebugHandler* d, net__http__Request req) {
	return net__http__DebugHandler_handle(*d, req);
}

struct _net__http__Handler_interface_methods {
	net__http__Response (*_method_handle)(void* _, net__http__Request );
};

struct _net__http__Handler_interface_methods net__http__Handler_name_table[2] = {
	{
		._method_handle = (void*) net__http__DebugHandler_handle_Interface_net__http__Handler_method_wrapper,
	},
	{
		._method_handle = (void*) 0,
	},
};


// Casting functions for converting "net__http__DebugHandler" to interface "net__http__Handler"

static inline net__http__Handler I_net__http__DebugHandler_to_Interface_net__http__Handler(net__http__DebugHandler* x) {
return (net__http__Handler) {
		._net__http__DebugHandler = x,
		._typ = _net__http__Handler_net__http__DebugHandler_index,
	};
}

// Casting functions for converting "voidptr" to interface "net__http__Handler"

static inline net__http__Handler I_voidptr_to_Interface_net__http__Handler(voidptr* x) {
return (net__http__Handler) {
		._voidptr = x,
		._typ = _net__http__Handler_voidptr_index,
	};
}

static net__Dialer I_net__TCPDialer_to_Interface_net__Dialer(net__TCPDialer* x);
const int _net__Dialer_net__TCPDialer_index = 0;
static net__Dialer I_voidptr_to_Interface_net__Dialer(voidptr* x);
const int _net__Dialer_voidptr_index = 1;
static net__Dialer I_net__ssl__SSLDialer_to_Interface_net__Dialer(net__ssl__SSLDialer* x);
const int _net__Dialer_net__ssl__SSLDialer_index = 2;
static net__Dialer I_net__socks__SOCKS5Dialer_to_Interface_net__Dialer(net__socks__SOCKS5Dialer* x);
const int _net__Dialer_net__socks__SOCKS5Dialer_index = 3;
// ^^^ number of types for interface net__Dialer: 4

// Methods wrapper for interface "net__Dialer"
static inline _result_net__Connection net__TCPDialer_dial_Interface_net__Dialer_method_wrapper(net__TCPDialer* t, string address) {
	return net__TCPDialer_dial(*t, address);
}
static inline _result_net__Connection net__ssl__SSLDialer_dial_Interface_net__Dialer_method_wrapper(net__ssl__SSLDialer* d, string address) {
	return net__ssl__SSLDialer_dial(*d, address);
}
static inline _result_net__Connection net__socks__SOCKS5Dialer_dial_Interface_net__Dialer_method_wrapper(net__socks__SOCKS5Dialer* sd, string address) {
	return net__socks__SOCKS5Dialer_dial(*sd, address);
}

struct _net__Dialer_interface_methods {
	_result_net__Connection (*_method_dial)(void* _, string address);
};

struct _net__Dialer_interface_methods net__Dialer_name_table[4] = {
	{
		._method_dial = (void*) net__TCPDialer_dial_Interface_net__Dialer_method_wrapper,
	},
	{
		._method_dial = (void*) 0,
	},
	{
		._method_dial = (void*) net__ssl__SSLDialer_dial_Interface_net__Dialer_method_wrapper,
	},
	{
		._method_dial = (void*) net__socks__SOCKS5Dialer_dial_Interface_net__Dialer_method_wrapper,
	},
};


// Casting functions for converting "net__TCPDialer" to interface "net__Dialer"

static inline net__Dialer I_net__TCPDialer_to_Interface_net__Dialer(net__TCPDialer* x) {
return (net__Dialer) {
		._net__TCPDialer = x,
		._typ = _net__Dialer_net__TCPDialer_index,
	};
}

// Casting functions for converting "voidptr" to interface "net__Dialer"

static inline net__Dialer I_voidptr_to_Interface_net__Dialer(voidptr* x) {
return (net__Dialer) {
		._voidptr = x,
		._typ = _net__Dialer_voidptr_index,
	};
}

// Casting functions for converting "net__ssl__SSLDialer" to interface "net__Dialer"

static inline net__Dialer I_net__ssl__SSLDialer_to_Interface_net__Dialer(net__ssl__SSLDialer* x) {
return (net__Dialer) {
		._net__ssl__SSLDialer = x,
		._typ = _net__Dialer_net__ssl__SSLDialer_index,
	};
}

// Casting functions for converting "net__socks__SOCKS5Dialer" to interface "net__Dialer"

static inline net__Dialer I_net__socks__SOCKS5Dialer_to_Interface_net__Dialer(net__socks__SOCKS5Dialer* x) {
return (net__Dialer) {
		._net__socks__SOCKS5Dialer = x,
		._typ = _net__Dialer_net__socks__SOCKS5Dialer_index,
	};
}

static net__Connection I_net__TcpConn_to_Interface_net__Connection(net__TcpConn* x);
const int _net__Connection_net__TcpConn_index = 0;
static net__Connection I_voidptr_to_Interface_net__Connection(voidptr* x);
const int _net__Connection_voidptr_index = 1;
static net__Connection I_net__ssl__SSLConn_to_Interface_net__Connection(net__ssl__SSLConn* x);
const int _net__Connection_net__ssl__SSLConn_index = 2;
static net__Connection I_net__mbedtls__SSLConn_to_Interface_net__Connection(net__mbedtls__SSLConn* x);
const int _net__Connection_net__mbedtls__SSLConn_index = 3;
// ^^^ number of types for interface net__Connection: 4

// Methods wrapper for interface "net__Connection"
static inline _result_int net__TcpConn_read_Interface_net__Connection_method_wrapper(net__TcpConn* c, Array_u8* buf) {
	return net__TcpConn_read(*c, buf);
}

struct _net__Connection_interface_methods {
	_result_net__Addr (*_method_addr)(void* _);
	_result_void (*_method_close)(void* _);
	_result_net__Addr (*_method_peer_addr)(void* _);
	_result_int (*_method_read)(void* _, Array_u8* );
	_result_int (*_method_write)(void* _, Array_u8 );
};

struct _net__Connection_interface_methods net__Connection_name_table[4] = {
	{
		._method_addr = (void*) net__TcpConn_addr,
		._method_close = (void*) net__TcpConn_close,
		._method_peer_addr = (void*) net__TcpConn_peer_addr,
		._method_read = (void*) net__TcpConn_read_Interface_net__Connection_method_wrapper,
		._method_write = (void*) net__TcpConn_write,
	},
	{
		._method_addr = (void*) 0,
		._method_close = (void*) 0,
		._method_peer_addr = (void*) 0,
		._method_read = (void*) 0,
		._method_write = (void*) 0,
	},
	{
		._method_addr = (void*) net__mbedtls__SSLConn_addr,
		._method_close = (void*) net__mbedtls__SSLConn_close,
		._method_peer_addr = (void*) net__mbedtls__SSLConn_peer_addr,
		._method_read = (void*) net__mbedtls__SSLConn_read,
		._method_write = (void*) net__mbedtls__SSLConn_write,
	},
	{
		._method_addr = (void*) net__mbedtls__SSLConn_addr,
		._method_close = (void*) net__mbedtls__SSLConn_close,
		._method_peer_addr = (void*) net__mbedtls__SSLConn_peer_addr,
		._method_read = (void*) net__mbedtls__SSLConn_read,
		._method_write = (void*) net__mbedtls__SSLConn_write,
	},
};


// Casting functions for converting "net__TcpConn" to interface "net__Connection"

static inline net__Connection I_net__TcpConn_to_Interface_net__Connection(net__TcpConn* x) {
return (net__Connection) {
		._net__TcpConn = x,
		._typ = _net__Connection_net__TcpConn_index,
	};
}

// Casting functions for converting "voidptr" to interface "net__Connection"

static inline net__Connection I_voidptr_to_Interface_net__Connection(voidptr* x) {
return (net__Connection) {
		._voidptr = x,
		._typ = _net__Connection_voidptr_index,
	};
}

// Casting functions for converting "net__ssl__SSLConn" to interface "net__Connection"

static inline net__Connection I_net__ssl__SSLConn_to_Interface_net__Connection(net__ssl__SSLConn* x) {
return (net__Connection) {
		._net__ssl__SSLConn = x,
		._typ = _net__Connection_net__ssl__SSLConn_index,
	};
}

// Casting functions for converting "net__mbedtls__SSLConn" to interface "net__Connection"

static inline net__Connection I_net__mbedtls__SSLConn_to_Interface_net__Connection(net__mbedtls__SSLConn* x) {
return (net__Connection) {
		._net__mbedtls__SSLConn = x,
		._typ = _net__Connection_net__mbedtls__SSLConn_index,
	};
}

static io__Reader I_net__TcpConn_to_Interface_io__Reader(net__TcpConn* x);
const int _io__Reader_net__TcpConn_index = 0;
static io__Reader I_voidptr_to_Interface_io__Reader(voidptr* x);
const int _io__Reader_voidptr_index = 1;
static io__Reader I_net__ssl__SSLConn_to_Interface_io__Reader(net__ssl__SSLConn* x);
const int _io__Reader_net__ssl__SSLConn_index = 2;
static io__Reader I_os__File_to_Interface_io__Reader(os__File* x);
const int _io__Reader_os__File_index = 3;
static io__Reader I_io__BufferedReader_to_Interface_io__Reader(io__BufferedReader* x);
const int _io__Reader_io__BufferedReader_index = 4;
static io__Reader I_net__mbedtls__SSLConn_to_Interface_io__Reader(net__mbedtls__SSLConn* x);
const int _io__Reader_net__mbedtls__SSLConn_index = 5;
static io__Reader I_io__ReaderWriterImpl_to_Interface_io__Reader(io__ReaderWriterImpl* x);
const int _io__Reader_io__ReaderWriterImpl_index = 6;
// ^^^ number of types for interface io__Reader: 7

// Methods wrapper for interface "io__Reader"
static inline _result_int net__TcpConn_read_Interface_io__Reader_method_wrapper(net__TcpConn* c, Array_u8* buf) {
	return net__TcpConn_read(*c, buf);
}

struct _io__Reader_interface_methods {
	_result_int (*_method_read)(void* _, Array_u8* buf);
};

struct _io__Reader_interface_methods io__Reader_name_table[7] = {
	{
		._method_read = (void*) net__TcpConn_read_Interface_io__Reader_method_wrapper,
	},
	{
		._method_read = (void*) 0,
	},
	{
		._method_read = (void*) net__mbedtls__SSLConn_read,
	},
	{
		._method_read = (void*) os__File_read,
	},
	{
		._method_read = (void*) io__BufferedReader_read,
	},
	{
		._method_read = (void*) net__mbedtls__SSLConn_read,
	},
	{
		._method_read = (void*) io__ReaderWriterImpl_read,
	},
};


// Casting functions for converting "net__TcpConn" to interface "io__Reader"

static inline io__Reader I_net__TcpConn_to_Interface_io__Reader(net__TcpConn* x) {
return (io__Reader) {
		._net__TcpConn = x,
		._typ = _io__Reader_net__TcpConn_index,
	};
}

// Casting functions for converting "voidptr" to interface "io__Reader"

static inline io__Reader I_voidptr_to_Interface_io__Reader(voidptr* x) {
return (io__Reader) {
		._voidptr = x,
		._typ = _io__Reader_voidptr_index,
	};
}

// Casting functions for converting "net__ssl__SSLConn" to interface "io__Reader"

static inline io__Reader I_net__ssl__SSLConn_to_Interface_io__Reader(net__ssl__SSLConn* x) {
return (io__Reader) {
		._net__ssl__SSLConn = x,
		._typ = _io__Reader_net__ssl__SSLConn_index,
	};
}

// Casting functions for converting "os__File" to interface "io__Reader"

static inline io__Reader I_os__File_to_Interface_io__Reader(os__File* x) {
return (io__Reader) {
		._os__File = x,
		._typ = _io__Reader_os__File_index,
	};
}

// Casting functions for converting "io__BufferedReader" to interface "io__Reader"

static inline io__Reader I_io__BufferedReader_to_Interface_io__Reader(io__BufferedReader* x) {
return (io__Reader) {
		._io__BufferedReader = x,
		._typ = _io__Reader_io__BufferedReader_index,
	};
}

// Casting functions for converting "net__mbedtls__SSLConn" to interface "io__Reader"

static inline io__Reader I_net__mbedtls__SSLConn_to_Interface_io__Reader(net__mbedtls__SSLConn* x) {
return (io__Reader) {
		._net__mbedtls__SSLConn = x,
		._typ = _io__Reader_net__mbedtls__SSLConn_index,
	};
}

// Casting functions for converting "io__ReaderWriterImpl" to interface "io__Reader"

static inline io__Reader I_io__ReaderWriterImpl_to_Interface_io__Reader(io__ReaderWriterImpl* x) {
return (io__Reader) {
		._io__ReaderWriterImpl = x,
		._typ = _io__Reader_io__ReaderWriterImpl_index,
	};
}

static io__Writer I_io__MultiWriter_to_Interface_io__Writer(io__MultiWriter* x);
const int _io__Writer_io__MultiWriter_index = 0;
static io__Writer I_voidptr_to_Interface_io__Writer(voidptr* x);
const int _io__Writer_voidptr_index = 1;
static io__Writer I_net__ssl__SSLConn_to_Interface_io__Writer(net__ssl__SSLConn* x);
const int _io__Writer_net__ssl__SSLConn_index = 2;
static io__Writer I_os__File_to_Interface_io__Writer(os__File* x);
const int _io__Writer_os__File_index = 3;
static io__Writer I_net__TcpConn_to_Interface_io__Writer(net__TcpConn* x);
const int _io__Writer_net__TcpConn_index = 4;
static io__Writer I_net__mbedtls__SSLConn_to_Interface_io__Writer(net__mbedtls__SSLConn* x);
const int _io__Writer_net__mbedtls__SSLConn_index = 5;
static io__Writer I_net__UdpConn_to_Interface_io__Writer(net__UdpConn* x);
const int _io__Writer_net__UdpConn_index = 6;
static io__Writer I_io__BufferedWriter_to_Interface_io__Writer(io__BufferedWriter* x);
const int _io__Writer_io__BufferedWriter_index = 7;
static io__Writer I_io__ReaderWriterImpl_to_Interface_io__Writer(io__ReaderWriterImpl* x);
const int _io__Writer_io__ReaderWriterImpl_index = 8;
// ^^^ number of types for interface io__Writer: 9

// Methods wrapper for interface "io__Writer"

struct _io__Writer_interface_methods {
	_result_int (*_method_write)(void* _, Array_u8 buf);
};

struct _io__Writer_interface_methods io__Writer_name_table[9] = {
	{
		._method_write = (void*) io__MultiWriter_write,
	},
	{
		._method_write = (void*) 0,
	},
	{
		._method_write = (void*) net__mbedtls__SSLConn_write,
	},
	{
		._method_write = (void*) os__File_write,
	},
	{
		._method_write = (void*) net__TcpConn_write,
	},
	{
		._method_write = (void*) net__mbedtls__SSLConn_write,
	},
	{
		._method_write = (void*) net__UdpConn_write,
	},
	{
		._method_write = (void*) io__BufferedWriter_write,
	},
	{
		._method_write = (void*) io__ReaderWriterImpl_write,
	},
};


// Casting functions for converting "io__MultiWriter" to interface "io__Writer"

static inline io__Writer I_io__MultiWriter_to_Interface_io__Writer(io__MultiWriter* x) {
return (io__Writer) {
		._io__MultiWriter = x,
		._typ = _io__Writer_io__MultiWriter_index,
	};
}

// Casting functions for converting "voidptr" to interface "io__Writer"

static inline io__Writer I_voidptr_to_Interface_io__Writer(voidptr* x) {
return (io__Writer) {
		._voidptr = x,
		._typ = _io__Writer_voidptr_index,
	};
}

// Casting functions for converting "net__ssl__SSLConn" to interface "io__Writer"

static inline io__Writer I_net__ssl__SSLConn_to_Interface_io__Writer(net__ssl__SSLConn* x) {
return (io__Writer) {
		._net__ssl__SSLConn = x,
		._typ = _io__Writer_net__ssl__SSLConn_index,
	};
}

// Casting functions for converting "os__File" to interface "io__Writer"

static inline io__Writer I_os__File_to_Interface_io__Writer(os__File* x) {
return (io__Writer) {
		._os__File = x,
		._typ = _io__Writer_os__File_index,
	};
}

// Casting functions for converting "net__TcpConn" to interface "io__Writer"

static inline io__Writer I_net__TcpConn_to_Interface_io__Writer(net__TcpConn* x) {
return (io__Writer) {
		._net__TcpConn = x,
		._typ = _io__Writer_net__TcpConn_index,
	};
}

// Casting functions for converting "net__mbedtls__SSLConn" to interface "io__Writer"

static inline io__Writer I_net__mbedtls__SSLConn_to_Interface_io__Writer(net__mbedtls__SSLConn* x) {
return (io__Writer) {
		._net__mbedtls__SSLConn = x,
		._typ = _io__Writer_net__mbedtls__SSLConn_index,
	};
}

// Casting functions for converting "net__UdpConn" to interface "io__Writer"

static inline io__Writer I_net__UdpConn_to_Interface_io__Writer(net__UdpConn* x) {
return (io__Writer) {
		._net__UdpConn = x,
		._typ = _io__Writer_net__UdpConn_index,
	};
}

// Casting functions for converting "io__BufferedWriter" to interface "io__Writer"

static inline io__Writer I_io__BufferedWriter_to_Interface_io__Writer(io__BufferedWriter* x) {
return (io__Writer) {
		._io__BufferedWriter = x,
		._typ = _io__Writer_io__BufferedWriter_index,
	};
}

// Casting functions for converting "io__ReaderWriterImpl" to interface "io__Writer"

static inline io__Writer I_io__ReaderWriterImpl_to_Interface_io__Writer(io__ReaderWriterImpl* x) {
return (io__Writer) {
		._io__ReaderWriterImpl = x,
		._typ = _io__Writer_io__ReaderWriterImpl_index,
	};
}

static io__RandomReader I_os__File_to_Interface_io__RandomReader(os__File* x);
const int _io__RandomReader_os__File_index = 0;
static io__RandomReader I_voidptr_to_Interface_io__RandomReader(voidptr* x);
const int _io__RandomReader_voidptr_index = 1;
// ^^^ number of types for interface io__RandomReader: 2

// Methods wrapper for interface "io__RandomReader"

struct _io__RandomReader_interface_methods {
	_result_int (*_method_read_from)(void* _, u64 pos, Array_u8* buf);
};

struct _io__RandomReader_interface_methods io__RandomReader_name_table[2] = {
	{
		._method_read_from = (void*) os__File_read_from,
	},
	{
		._method_read_from = (void*) 0,
	},
};


// Casting functions for converting "os__File" to interface "io__RandomReader"

static inline io__RandomReader I_os__File_to_Interface_io__RandomReader(os__File* x) {
return (io__RandomReader) {
		._os__File = x,
		._typ = _io__RandomReader_os__File_index,
	};
}

// Casting functions for converting "voidptr" to interface "io__RandomReader"

static inline io__RandomReader I_voidptr_to_Interface_io__RandomReader(voidptr* x) {
return (io__RandomReader) {
		._voidptr = x,
		._typ = _io__RandomReader_voidptr_index,
	};
}

static io__ReaderWriter I_io__ReaderWriterImpl_to_Interface_io__ReaderWriter(io__ReaderWriterImpl* x);
const int _io__ReaderWriter_io__ReaderWriterImpl_index = 0;
static io__ReaderWriter I_voidptr_to_Interface_io__ReaderWriter(voidptr* x);
const int _io__ReaderWriter_voidptr_index = 1;
// ^^^ number of types for interface io__ReaderWriter: 2

// Methods wrapper for interface "io__ReaderWriter"

struct _io__ReaderWriter_interface_methods {
	_result_int (*_method_read)(void* _, Array_u8* buf);
	_result_int (*_method_write)(void* _, Array_u8 buf);
};

struct _io__ReaderWriter_interface_methods io__ReaderWriter_name_table[2] = {
	{
		._method_read = (void*) io__ReaderWriterImpl_read,
		._method_write = (void*) io__ReaderWriterImpl_write,
	},
	{
		._method_read = (void*) 0,
		._method_write = (void*) 0,
	},
};


// Casting functions for converting "io__ReaderWriterImpl" to interface "io__ReaderWriter"

static inline io__ReaderWriter I_io__ReaderWriterImpl_to_Interface_io__ReaderWriter(io__ReaderWriterImpl* x) {
return (io__ReaderWriter) {
		._io__ReaderWriterImpl = x,
		._typ = _io__ReaderWriter_io__ReaderWriterImpl_index,
	};
}

// Casting functions for converting "voidptr" to interface "io__ReaderWriter"

static inline io__ReaderWriter I_voidptr_to_Interface_io__ReaderWriter(voidptr* x) {
return (io__ReaderWriter) {
		._voidptr = x,
		._typ = _io__ReaderWriter_voidptr_index,
	};
}

// ^^^ number of types for interface io__RandomWriter: 0

// Methods wrapper for interface "io__RandomWriter"

struct _io__RandomWriter_interface_methods {
	_result_int (*_method_write_to)(void* _, u64 pos, Array_u8 buf);
};

struct _io__RandomWriter_interface_methods io__RandomWriter_name_table[1];


static rand__PRNG I_rand__wyrand__WyRandRNG_to_Interface_rand__PRNG(rand__wyrand__WyRandRNG* x);
const int _rand__PRNG_rand__wyrand__WyRandRNG_index = 0;
static rand__PRNG I_voidptr_to_Interface_rand__PRNG(voidptr* x);
const int _rand__PRNG_voidptr_index = 1;
// ^^^ number of types for interface rand__PRNG: 2

// Methods wrapper for interface "rand__PRNG"

struct _rand__PRNG_interface_methods {
	int (*_method_block_size)(void* _);
	void (*_method__v_free)(void* _);
	void (*_method_seed)(void* _, Array_u32 seed_data);
	u16 (*_method_u16)(void* _);
	u32 (*_method_u32)(void* _);
	u64 (*_method_u64)(void* _);
	u8 (*_method_u8)(void* _);
};

struct _rand__PRNG_interface_methods rand__PRNG_name_table[2] = {
	{
		._method_block_size = (void*) rand__wyrand__WyRandRNG_block_size,
		._method__v_free = (void*) rand__wyrand__WyRandRNG_free,
		._method_seed = (void*) rand__wyrand__WyRandRNG_seed,
		._method_u16 = (void*) rand__wyrand__WyRandRNG_u16,
		._method_u32 = (void*) rand__wyrand__WyRandRNG_u32,
		._method_u64 = (void*) rand__wyrand__WyRandRNG_u64,
		._method_u8 = (void*) rand__wyrand__WyRandRNG_u8,
	},
	{
		._method_block_size = (void*) 0,
		._method__v_free = (void*) 0,
		._method_seed = (void*) 0,
		._method_u16 = (void*) 0,
		._method_u32 = (void*) 0,
		._method_u64 = (void*) 0,
		._method_u8 = (void*) 0,
	},
};


// Casting functions for converting "rand__wyrand__WyRandRNG" to interface "rand__PRNG"

static inline rand__PRNG I_rand__wyrand__WyRandRNG_to_Interface_rand__PRNG(rand__wyrand__WyRandRNG* x) {
return (rand__PRNG) {
		._rand__wyrand__WyRandRNG = x,
		._typ = _rand__PRNG_rand__wyrand__WyRandRNG_index,
	};
}

// Casting functions for converting "voidptr" to interface "rand__PRNG"

static inline rand__PRNG I_voidptr_to_Interface_rand__PRNG(voidptr* x) {
return (rand__PRNG) {
		._voidptr = x,
		._typ = _rand__PRNG_voidptr_index,
	};
}

// ^^^ number of types for interface v__embed_file__Decoder: 0

// Methods wrapper for interface "v__embed_file__Decoder"

struct _v__embed_file__Decoder_interface_methods {
	_result_Array_u8 (*_method_decompress)(void* _, Array_u8 );
};

struct _v__embed_file__Decoder_interface_methods v__embed_file__Decoder_name_table[1];


// ^^^ number of types for interface hash__Hash: 0

// Methods wrapper for interface "hash__Hash"

struct _hash__Hash_interface_methods {
	int (*_method_block_size)(void* _);
	void (*_method__v_free)(void* _);
	void (*_method_reset)(void* _);
	int (*_method_size)(void* _);
	Array_u8 (*_method_sum)(void* _, Array_u8 b);
	_result_int (*_method_write)(void* _, Array_u8 p);
};

struct _hash__Hash_interface_methods hash__Hash_name_table[1];


// ^^^ number of types for interface hash__Hash32er: 0

// Methods wrapper for interface "hash__Hash32er"

struct _hash__Hash32er_interface_methods {
	u32 (*_method_sum32)(void* _);
};

struct _hash__Hash32er_interface_methods hash__Hash32er_name_table[1];


// ^^^ number of types for interface hash__Hash64er: 0

// Methods wrapper for interface "hash__Hash64er"

struct _hash__Hash64er_interface_methods {
	u64 (*_method_sum64)(void* _);
};

struct _hash__Hash64er_interface_methods hash__Hash64er_name_table[1];



// V channel code:

static inline net__TcpConn* __chan_net__TcpConn_ptr_popval(chan_net__TcpConn_ptr ch) {
	net__TcpConn* val;
	sync__Channel_try_pop_priv(ch, &val, false);
	return val;
}

static inline void __chan_net__TcpConn_ptr_pushval(chan_net__TcpConn_ptr ch, net__TcpConn* val) {
	sync__Channel_try_push_priv(ch, &val, false);
}

static inline bool __chan_bool_popval(chan_bool ch) {
	bool val;
	sync__Channel_try_pop_priv(ch, &val, false);
	return val;
}

static inline void __chan_bool_pushval(chan_bool ch, bool val) {
	sync__Channel_try_push_priv(ch, &val, false);
}

// V closure helpers

#ifdef _MSC_VER
	#define __RETURN_ADDRESS() ((char*)_ReturnAddress())
#elif defined(__TINYC__) && defined(_WIN32)
	#define __RETURN_ADDRESS() ((char*)__builtin_return_address(0))
#else
	#define __RETURN_ADDRESS() ((char*)__builtin_extract_return_addr(__builtin_return_address(0)))
#endif

static int _V_page_size = 0x4000; // 16K
#define ASSUMED_PAGE_SIZE 0x4000
#define _CLOSURE_SIZE (((2*sizeof(void*) > sizeof(__closure_thunk) ? 2*sizeof(void*) : sizeof(__closure_thunk)) + sizeof(void*) - 1) & ~(sizeof(void*) - 1))
// equal to `max(2*sizeof(void*), sizeof(__closure_thunk))`, rounded up to the next multiple of `sizeof(void*)`

// refer to https://godbolt.org/z/r7P3EYv6c for a complete assembly
#ifdef __V_amd64
static const char __closure_thunk[] = {
	0xF3, 0x44, 0x0F, 0x7E, 0x3D, 0xF7, 0xBF, 0xFF, 0xFF,  // movq  xmm15, QWORD PTR [rip - userdata]
	0xFF, 0x25, 0xF9, 0xBF, 0xFF, 0xFF                     // jmp  QWORD PTR [rip - fn]
};
static char __CLOSURE_GET_DATA_BYTES[] = {
	0x66, 0x4C, 0x0F, 0x7E, 0xF8,  // movq rax, xmm15
	0xC3                           // ret
};
#elif defined(__V_x86)
static char __closure_thunk[] = {
	0xe8, 0x00, 0x00, 0x00, 0x00,        // call here
	                                     // here:
	0x59,                                // pop  ecx
	0x66, 0x0F, 0x6E, 0xF9,              // movd xmm7, ecx
	0xff, 0xA1, 0xff, 0xbf, 0xff, 0xff,  // jmp  DWORD PTR [ecx - 0x4001] # <fn>
};

static char __CLOSURE_GET_DATA_BYTES[] = {
	0x66, 0x0F, 0x7E, 0xF8,              // movd eax, xmm7
	0x8B, 0x80, 0xFB, 0xBF, 0xFF, 0xFF,  // mov eax, DWORD PTR [eax - 0x4005]
	0xc3                                 // ret
};

#elif defined(__V_arm64)
static char __closure_thunk[] = {
	0x11, 0x00, 0xFE, 0x5C,  // ldr d17, userdata
	0x30, 0x00, 0xFE, 0x58,  // ldr x16, fn
	0x00, 0x02, 0x1F, 0xD6   // br  x16
};
static char __CLOSURE_GET_DATA_BYTES[] = {
	0x20, 0x02, 0x66, 0x9E,  // fmov x0, d17
	0xC0, 0x03, 0x5F, 0xD6   // ret
};
#elif defined(__V_arm32)
static char __closure_thunk[] = {
	0x04, 0xC0, 0x4F, 0xE2,  // adr ip, here
                             // here:
	0x01, 0xC9, 0x4C, 0xE2,  // sub  ip, ip, #0x4000
	0x90, 0xCA, 0x07, 0xEE,  // vmov s15, ip
	0x00, 0xC0, 0x9C, 0xE5,  // ldr  ip, [ip, 0]
	0x1C, 0xFF, 0x2F, 0xE1   // bx   ip
};
static char __CLOSURE_GET_DATA_BYTES[] = {
	0x90, 0x0A, 0x17, 0xEE,  // vmov r0, s15
	0x04, 0x00, 0x10, 0xE5,  // ldr r0, [r0, #-4]
	0x1E, 0xFF, 0x2F, 0xE1   // bx lr
};
#elif defined (__V_rv64)
static char __closure_thunk[] = {
	0x97, 0xCF, 0xFF, 0xFF,  // auipc t6, 0xffffc
	0x03, 0xBF, 0x8F, 0x00,  // ld    t5, 8(t6)
	0x07, 0xB3, 0x0F, 0x00,  // fld   ft6, 0(t6)
	0x67, 0x00, 0x0F, 0x00,  // jr    t5
};
static char __CLOSURE_GET_DATA_BYTES[] = {
	0x53, 0x05, 0x03, 0xE2,  // fmv.x.d a0, ft6
	0x67, 0x80, 0x00, 0x00,  // ret
};
#elif defined (__V_rv32)
static char __closure_thunk[] = {
	0x97, 0xCF, 0xFF, 0xFF,  // auipc t6, 0xffffc
	0x03, 0xAF, 0x4F, 0x00,  // lw    t5, 4(t6)
	0x07, 0xAB, 0x0F, 0x00,  // flw   fs6, 0(t6)
	0x67, 0x00, 0x0F, 0x00   // jr    t5
};
static char __CLOSURE_GET_DATA_BYTES[] = {
	0x53, 0x05, 0x0B, 0xE0,  // fmv.x.w a0, fs6
	0x67, 0x80, 0x00, 0x00   // ret
};
#elif defined (__V_s390x)
static char __closure_thunk[] = {
	0xC0, 0x70, 0xFF, 0xFF, 0xE0, 0x00,  // larl %r7, -16384
	0x68, 0xF0, 0x70, 0x00,		     // ld   %f15, 0(%r7)
	0xE3, 0x70, 0x70, 0x08, 0x00, 0x04,  // lg   %r7, 8(%r7)
	0x07, 0xF7,			     // br   %r7
};
static char __CLOSURE_GET_DATA_BYTES[] = {
	0xB3, 0xCD, 0x00, 0x2F,		     // lgdr %r2, %f15
	0x07, 0xFE,			     // br   %r14
};
#elif defined (__V_ppc64le)
static char __closure_thunk[] = {
	0xa6, 0x02, 0x08, 0x7c,	// mflr   %r0
	0x05, 0x00, 0x00, 0x48,	// bl     here
	0xa6, 0x02, 0xc8, 0x7d,	// here:  mflr %r14
	0xf8, 0xbf, 0xce, 0x39,	// addi   %r14, %r14, -16392
	0x00, 0x00, 0xce, 0xc9,	// lfd    %f14, 0(%r14)
	0x08, 0x00, 0xce, 0xe9,	// ld     %r14, 8(%r14)
	0xa6, 0x03, 0x08, 0x7c,	// mtlr   %r0
	0xa6, 0x03, 0xc9, 0x7d,	// mtctr  %r14
	0x20, 0x04, 0x80, 0x4e,	// bctr
};
static char __CLOSURE_GET_DATA_BYTES[] = {
	0x66, 0x00, 0xc3, 0x7d,	// mfvsrd %r3, %f14
	0x20, 0x00, 0x80, 0x4e,	// blr
};
#elif defined (__V_loongarch64)
static char __closure_thunk[] = {
	0x92, 0xFF, 0xFF, 0x1D,  // pcaddu12i t6, -4
	0x48, 0x02, 0x80, 0x2B,  // fld.d     f8, t6, 0
	0x51, 0x22, 0xC0, 0x28,  // ld.d      t5, t6, 8
	0x20, 0x02, 0x00, 0x4C,  // jr        t5
};
static char __CLOSURE_GET_DATA_BYTES[] = {
	0x04, 0xB9, 0x14, 0x01,  // movfr2gr.d a0, f8
	0x20, 0x00, 0x00, 0x4C,  // ret
};
#endif

static void*(*__CLOSURE_GET_DATA)(void) = 0;

static inline void __closure_set_data(char* closure, void* data) {
	void** p = (void**)(closure - ASSUMED_PAGE_SIZE);
	p[0] = data;
}

static inline void __closure_set_function(char* closure, void* f) {
	void** p = (void**)(closure - ASSUMED_PAGE_SIZE);
	p[1] = f;
}

#ifdef _WIN32
#include <synchapi.h>
static SRWLOCK _closure_mtx;
#define _closure_mtx_init() InitializeSRWLock(&_closure_mtx)
#define _closure_mtx_lock() AcquireSRWLockExclusive(&_closure_mtx)
#define _closure_mtx_unlock() ReleaseSRWLockExclusive(&_closure_mtx)
#elif defined(_VFREESTANDING)
#define _closure_mtx_init()
#define _closure_mtx_lock()
#define _closure_mtx_unlock()
#else
static pthread_mutex_t _closure_mtx;
#define _closure_mtx_init() pthread_mutex_init(&_closure_mtx, 0)
#define _closure_mtx_lock() pthread_mutex_lock(&_closure_mtx)
#define _closure_mtx_unlock() pthread_mutex_unlock(&_closure_mtx)
#endif


// end of V out (header)

// V embedded data:
static const unsigned char _v_embed_blob_0[585] = {
    0x7b,0x0d,0x0a,0x20,0x20,0x20,0x20,0x22,0x63,0x6f,0x6d,0x6d,0x61,0x6e,0x64,0x73,
    0x22,0x3a,0x20,0x7b,0x0d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x22,0x68,
    0x65,0x6c,0x70,0x22,0x3a,0x20,0x7b,0x0d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x22,0x61,0x6c,0x69,0x61,0x73,0x65,0x73,0x22,0x3a,0x20,
    0x5b,0x5d,0x2c,0x0d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x22,0x64,0x65,0x73,0x63,0x72,0x69,0x70,0x74,0x69,0x6f,0x6e,0x22,0x3a,0x20,
    0x22,0x50,0x72,0x69,0x6e,0x74,0x20,0x68,0x65,0x6c,0x70,0x22,0x0d,0x0a,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x7d,0x2c,0x0d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x22,0x65,0x78,0x74,0x72,0x61,0x63,0x74,0x22,0x3a,0x20,0x7b,0x0d,0x0a,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x22,0x61,0x6c,0x69,
    0x61,0x73,0x65,0x73,0x22,0x3a,0x20,0x5b,0x5d,0x2c,0x0d,0x0a,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x22,0x64,0x65,0x73,0x63,0x72,0x69,0x70,
    0x74,0x69,0x6f,0x6e,0x22,0x3a,0x20,0x22,0x45,0x78,0x74,0x72,0x61,0x63,0x74,0x20,
    0x47,0x6f,0x6f,0x64,0x20,0x42,0x6f,0x79,0x20,0x69,0x6e,0x20,0x74,0x68,0x65,0x20,
    0x28,0x63,0x75,0x72,0x72,0x65,0x6e,0x74,0x29,0x20,0x70,0x61,0x74,0x68,0x22,0x0d,
    0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7d,0x2c,0x0d,0x0a,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x22,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x2d,0x73,0x65,
    0x6c,0x66,0x22,0x3a,0x20,0x7b,0x0d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x22,0x61,0x6c,0x69,0x61,0x73,0x65,0x73,0x22,0x3a,0x20,0x5b,
    0x5d,0x2c,0x0d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x22,0x64,0x65,0x73,0x63,0x72,0x69,0x70,0x74,0x69,0x6f,0x6e,0x22,0x3a,0x20,0x22,
    0x42,0x69,0x6e,0x64,0x20,0x46,0x65,0x74,0x63,0x68,0x43,0x4c,0x49,0x20,0x74,0x6f,
    0x20,0x73,0x79,0x73,0x74,0x65,0x6d,0x27,0x73,0x20,0x70,0x61,0x74,0x68,0x22,0x0d,
    0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7d,0x2c,0x0d,0x0a,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x22,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x2d,0x74,0x6f,
    0x6f,0x6c,0x73,0x22,0x3a,0x20,0x7b,0x0d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x20,0x20,0x20,0x20,0x22,0x61,0x6c,0x69,0x61,0x73,0x65,0x73,0x22,0x3a,0x20,
    0x5b,0x5d,0x2c,0x0d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x20,0x22,0x64,0x65,0x73,0x63,0x72,0x69,0x70,0x74,0x69,0x6f,0x6e,0x22,0x3a,0x20,
    0x22,0x49,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x20,0x6e,0x65,0x63,0x65,0x73,0x73,0x61,
    0x72,0x79,0x20,0x74,0x6f,0x6f,0x6c,0x73,0x20,0x74,0x6f,0x20,0x6d,0x61,0x6b,0x65,
    0x20,0x74,0x68,0x65,0x20,0x64,0x65,0x76,0x65,0x6c,0x6f,0x70,0x6d,0x65,0x6e,0x74,
    0x20,0x77,0x6f,0x72,0x6b,0x22,0x0d,0x0a,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
    0x7d,0x0d,0x0a,0x20,0x20,0x20,0x20,0x7d,0x2c,0x0d,0x0a,0x20,0x20,0x20,0x20,0x22,
    0x75,0x73,0x61,0x67,0x65,0x22,0x3a,0x20,0x22,0x66,0x65,0x74,0x63,0x68,0x62,0x6f,
    0x79,0x20,0x5b,0x63,0x6f,0x6d,0x6d,0x61,0x6e,0x64,0x5d,0x20,0x5b,0x6f,0x70,0x74,
    0x69,0x6f,0x6e,0x73,0x5d,0x22,0x0d,0x0a,0x7d
};
static const unsigned char _v_embed_blob_1[108] = {
    0x50,0x72,0x6f,0x6a,0x65,0x63,0x74,0x20,0x61,0x6e,0x64,0x20,0x74,0x6f,0x6f,0x6c,
    0x73,0x20,0x6d,0x61,0x6e,0x61,0x67,0x65,0x6d,0x65,0x6e,0x74,0x20,0x66,0x6f,0x72,
    0x20,0x70,0x72,0x6f,0x6a,0x65,0x63,0x74,0x73,0x20,0x69,0x6e,0x20,0x61,0x20,0x47,
    0x6f,0x6f,0x64,0x20,0x42,0x6f,0x79,0x27,0x73,0x20,0x77,0x61,0x79,0x2e,0x0d,0x0a,
    0x0d,0x0a,0x55,0x73,0x61,0x67,0x65,0x3a,0x20,0x25,0x73,0x0d,0x0a,0x0d,0x0a,0x43,
    0x6f,0x6d,0x6d,0x61,0x6e,0x64,0x73,0x3a,0x0d,0x0a,0x25,0x73,0x0d,0x0a,0x0d,0x0a,
    0x4f,0x70,0x74,0x69,0x6f,0x6e,0x73,0x3a,0x0d,0x0a,0x25,0x73
};
static const unsigned char _v_embed_blob_2[264] = {
    0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x2e,
    0x2d,0x2d,0x7e,0x7e,0x2c,0x5f,0x5f,0x20,0x20,0x20,0x7c,0x0d,0x0a,0x20,0x20,0x3a,
    0x2d,0x2e,0x2e,0x2e,0x2e,0x2c,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x60,0x7e,0x7e,
    0x27,0x2e,0x5f,0x2e,0x27,0x20,0x20,0x7c,0x20,0x20,0x57,0x68,0x61,0x74,0x20,0x61,
    0x20,0x47,0x4f,0x4f,0x44,0x20,0x42,0x4f,0x59,0x21,0x0d,0x0a,0x20,0x20,0x20,0x60,
    0x2d,0x2c,0x2c,0x2c,0x20,0x20,0x2c,0x5f,0x20,0x20,0x20,0x20,0x20,0x20,0x3b,0x27,
    0x7e,0x55,0x27,0x20,0x20,0x20,0x7c,0x20,0x20,0x46,0x65,0x74,0x63,0x68,0x20,0x43,
    0x4c,0x49,0x20,0x66,0x6f,0x72,0x20,0x61,0x20,0x47,0x6f,0x6f,0x64,0x20,0x42,0x6f,
    0x79,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x20,0x60,0x66,0x65,0x74,0x63,0x68,
    0x62,0x6f,0x79,0x20,0x68,0x65,0x6c,0x70,0x60,0x20,0x66,0x6f,0x72,0x20,0x6d,0x6f,
    0x72,0x65,0x0d,0x0a,0x20,0x20,0x20,0x20,0x5f,0x2c,0x2d,0x27,0x20,0x2c,0x27,0x60,
    0x2d,0x5f,0x5f,0x3b,0x20,0x27,0x2d,0x2d,0x2e,0x20,0x20,0x20,0x20,0x20,0x7c,0x20,
    0x20,0x76,0x65,0x72,0x20,0x30,0x2e,0x31,0x2e,0x30,0x20,0x2d,0x20,0x77,0x72,0x69,
    0x74,0x74,0x65,0x6e,0x20,0x69,0x6e,0x20,0x56,0x20,0x28,0x79,0x65,0x73,0x2c,0x20,
    0x74,0x68,0x65,0x20,0x77,0x65,0x61,0x73,0x65,0x6c,0x29,0x0d,0x0a,0x20,0x20,0x20,
    0x28,0x5f,0x2f,0x27,0x7e,0x7e,0x20,0x20,0x20,0x20,0x20,0x20,0x27,0x27,0x27,0x27,
    0x28,0x3b,0x20,0x20,0x20,0x20,0x20,0x7c
};

const v__embed_file__EmbedFileIndexEntry _v_embed_file_index[] = {
	{0, { .str=(byteptr)("resource/info.json"), .len=18, .is_lit=1 }, { .str=(byteptr)("none"), .len=4, .is_lit=1 }, (byteptr)_v_embed_blob_0},
	{1, { .str=(byteptr)("resource/Help.txt"), .len=17, .is_lit=1 }, { .str=(byteptr)("none"), .len=4, .is_lit=1 }, (byteptr)_v_embed_blob_1},
	{2, { .str=(byteptr)("resource/Welcome.txt"), .len=20, .is_lit=1 }, { .str=(byteptr)("none"), .len=4, .is_lit=1 }, (byteptr)_v_embed_blob_2},
	{-1, { .str=(byteptr)(""), .len=0, .is_lit=1 }, { .str=(byteptr)(""), .len=0, .is_lit=1 }, NULL}
};
v__embed_file__EmbedFileData _v_embed_file_metadata(u64 ef_hash) {
	v__embed_file__EmbedFileData res;
	memset(&res, 0, sizeof(res));
	switch(ef_hash) {
		case 7696111033667594819U: {
			res.path = _S("resource/info.json");
			res.apath = _S("");
			res.uncompressed = v__embed_file__find_index_entry_by_path((voidptr)_v_embed_file_index, _S("resource/info.json"), _S("none"))->data;
			res.free_compressed = 0;
			res.free_uncompressed = 0;
			res.len = 585;
			break;
		} // case 7696111033667594819
		case 5696725965703975409U: {
			res.path = _S("resource/Help.txt");
			res.apath = _S("");
			res.uncompressed = v__embed_file__find_index_entry_by_path((voidptr)_v_embed_file_index, _S("resource/Help.txt"), _S("none"))->data;
			res.free_compressed = 0;
			res.free_uncompressed = 0;
			res.len = 108;
			break;
		} // case 5696725965703975409
		case 16627241802141774737U: {
			res.path = _S("resource/Welcome.txt");
			res.apath = _S("");
			res.uncompressed = v__embed_file__find_index_entry_by_path((voidptr)_v_embed_file_index, _S("resource/Welcome.txt"), _S("none"))->data;
			res.free_compressed = 0;
			res.free_uncompressed = 0;
			res.len = 264;
			break;
		} // case 16627241802141774737
		default: _v_panic(_S("unknown embed file"));
	} // switch
	return res;
}

// V closure helpers

	static char* _closure_ptr = 0;
	static int _closure_cap = 0;

static void __closure_alloc(void) {
#ifdef _WIN32
	char* p = VirtualAlloc(NULL, _V_page_size * 2, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	if (p == NULL) return;
#elif defined(_VFREESTANDING)
	char *p = malloc(_V_page_size * 2);
	if (p == NULL) return;
#else
	char* p = mmap(0, _V_page_size * 2, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
	if (p == MAP_FAILED) return;
#endif
	char* x = p + _V_page_size;
	int remaining = _V_page_size / _CLOSURE_SIZE;
	_closure_ptr = x;
	_closure_cap = remaining;
	while (remaining > 0) {
		memcpy(x, __closure_thunk, sizeof(__closure_thunk));
		remaining--;
		x += _CLOSURE_SIZE;
	}
#ifdef _WIN32
	DWORD _tmp;
	VirtualProtect(_closure_ptr, _V_page_size, PAGE_EXECUTE_READ, &_tmp);
#elif defined(_VFREESTANDING)
#else
	mprotect(_closure_ptr, _V_page_size, PROT_READ | PROT_EXEC);
#endif
}

#ifdef _WIN32
void __closure_init() {
	SYSTEM_INFO si;
	GetNativeSystemInfo(&si);
	uint32_t page_size = si.dwPageSize * (((ASSUMED_PAGE_SIZE - 1) / si.dwPageSize) + 1);
	_V_page_size = page_size;
	__closure_alloc();
	DWORD _tmp;
	VirtualProtect(_closure_ptr, page_size, PAGE_READWRITE, &_tmp);
	memcpy(_closure_ptr, __CLOSURE_GET_DATA_BYTES, sizeof(__CLOSURE_GET_DATA_BYTES));
	VirtualProtect(_closure_ptr, page_size, PAGE_EXECUTE_READ, &_tmp);
	__CLOSURE_GET_DATA = (void*)_closure_ptr;
	_closure_ptr += _CLOSURE_SIZE;
	_closure_cap--;
}
#else
static void __closure_init() {
#ifndef _VFREESTANDING
	uint32_t page_size = sysconf(_SC_PAGESIZE);
#else
	uint32_t page_size = 0x4000;
#endif
	page_size = page_size * (((ASSUMED_PAGE_SIZE - 1) / page_size) + 1);
	_V_page_size = page_size;
	__closure_alloc();
#ifndef _VFREESTANDING
	mprotect(_closure_ptr, page_size, PROT_READ | PROT_WRITE);
#endif
	memcpy(_closure_ptr, __CLOSURE_GET_DATA_BYTES, sizeof(__CLOSURE_GET_DATA_BYTES));
#ifndef _VFREESTANDING
	mprotect(_closure_ptr, page_size, PROT_READ | PROT_EXEC);
#endif
	__CLOSURE_GET_DATA = (void*)_closure_ptr;
	_closure_ptr += _CLOSURE_SIZE;
	_closure_cap--;
}
#endif

static void* __closure_create(void* fn, void* data) {
	_closure_mtx_lock();
	if (_closure_cap == 0) {
		__closure_alloc();
	}
	_closure_cap--;
	void* closure = _closure_ptr;
	_closure_ptr += _CLOSURE_SIZE;
	__closure_set_data(closure, data);
	__closure_set_function(closure, fn);
	_closure_mtx_unlock();
	return closure;
}


// V auto str functions:
static string Map_string_string_str(Map_string_string m) { return indent_Map_string_string_str(m, 0);}
static string indent_Map_string_string_str(Map_string_string m, int indent_count) { /* gen_str_for_map */
	strings__Builder sb = strings__new_builder(2 + m.key_values.len * 10);
	strings__Builder_write_string(&sb, _S("{"));
	bool is_first = true;
	for (int i = 0; i < m.key_values.len; ++i) {
		if (!DenseArray_has_index(&m.key_values, i)) { continue; }
		else if (!is_first) { strings__Builder_write_string(&sb, _S(", ")); }
		string key = *(string*)DenseArray_key(&m.key_values, i);
		strings__Builder_write_string(&sb, str_intp(2, _MOV((StrIntpData[]){{_S("'"), 0xfe10, {.d_s = key}},{_S("'"), 0, {.d_c = 0 }}})));
		strings__Builder_write_string(&sb, _S(": "));
		strings__Builder_write_string(&sb, str_intp(2, _MOV((StrIntpData[]){{_S("'"), 0xfe10, {.d_s = *(string*)DenseArray_value(&m.key_values, i)}},{_S("'"), 0, {.d_c = 0 }}})));
		is_first = false;
	}
	strings__Builder_write_string(&sb, _S("}"));
	string res = strings__Builder_str(&sb);
	strings__Builder_free(&sb);
	return res;
}
static string net__WsaError_str(net__WsaError it) { /* gen_str_for_enum */
	switch(it) {
		case net__WsaError__wsaeintr: return _S("wsaeintr");
		case net__WsaError__wsaebadf: return _S("wsaebadf");
		case net__WsaError__wsaeacces: return _S("wsaeacces");
		case net__WsaError__wsaefault: return _S("wsaefault");
		case net__WsaError__wsaeinval: return _S("wsaeinval");
		case net__WsaError__wsaemfile: return _S("wsaemfile");
		case net__WsaError__wsaewouldblock: return _S("wsaewouldblock");
		case net__WsaError__wsaeinprogress: return _S("wsaeinprogress");
		case net__WsaError__wsaealready: return _S("wsaealready");
		case net__WsaError__wsaenotsock: return _S("wsaenotsock");
		case net__WsaError__wsaedestaddrreq: return _S("wsaedestaddrreq");
		case net__WsaError__wsaemsgsize: return _S("wsaemsgsize");
		case net__WsaError__wsaeprototype: return _S("wsaeprototype");
		case net__WsaError__wsaenoprotoopt: return _S("wsaenoprotoopt");
		case net__WsaError__wsaeprotonosupport: return _S("wsaeprotonosupport");
		case net__WsaError__wsaesocktnosupport: return _S("wsaesocktnosupport");
		case net__WsaError__wsaeopnotsupp: return _S("wsaeopnotsupp");
		case net__WsaError__wsaepfnosupport: return _S("wsaepfnosupport");
		case net__WsaError__wsaeafnosupport: return _S("wsaeafnosupport");
		case net__WsaError__wsaeaddrinuse: return _S("wsaeaddrinuse");
		case net__WsaError__wsaeaddrnotavail: return _S("wsaeaddrnotavail");
		case net__WsaError__wsaenetdown: return _S("wsaenetdown");
		case net__WsaError__wsaenetunreach: return _S("wsaenetunreach");
		case net__WsaError__wsaenetreset: return _S("wsaenetreset");
		case net__WsaError__wsaeconnaborted: return _S("wsaeconnaborted");
		case net__WsaError__wsaeconnreset: return _S("wsaeconnreset");
		case net__WsaError__wsaenobufs: return _S("wsaenobufs");
		case net__WsaError__wsaeisconn: return _S("wsaeisconn");
		case net__WsaError__wsaenotconn: return _S("wsaenotconn");
		case net__WsaError__wsaeshutdown: return _S("wsaeshutdown");
		case net__WsaError__wsaetoomanyrefs: return _S("wsaetoomanyrefs");
		case net__WsaError__wsaetimedout: return _S("wsaetimedout");
		case net__WsaError__wsaeconnrefused: return _S("wsaeconnrefused");
		case net__WsaError__wsaeloop: return _S("wsaeloop");
		case net__WsaError__wsaenametoolong: return _S("wsaenametoolong");
		case net__WsaError__wsaehostdown: return _S("wsaehostdown");
		case net__WsaError__wsaehostunreach: return _S("wsaehostunreach");
		case net__WsaError__wsaenotempty: return _S("wsaenotempty");
		case net__WsaError__wsaeproclim: return _S("wsaeproclim");
		case net__WsaError__wsaeusers: return _S("wsaeusers");
		case net__WsaError__wsaedquot: return _S("wsaedquot");
		case net__WsaError__wsaestale: return _S("wsaestale");
		case net__WsaError__wsaeremote: return _S("wsaeremote");
		case net__WsaError__wsasysnotready: return _S("wsasysnotready");
		case net__WsaError__wsavernotsupported: return _S("wsavernotsupported");
		case net__WsaError__wsanotinitialised: return _S("wsanotinitialised");
		case net__WsaError__wsaediscon: return _S("wsaediscon");
		case net__WsaError__wsaenomore: return _S("wsaenomore");
		case net__WsaError__wsaecancelled: return _S("wsaecancelled");
		case net__WsaError__wsaeinvalidproctable: return _S("wsaeinvalidproctable");
		case net__WsaError__wsaeinvalidprovider: return _S("wsaeinvalidprovider");
		case net__WsaError__wsaeproviderfailedinit: return _S("wsaeproviderfailedinit");
		case net__WsaError__wsasyscallfailure: return _S("wsasyscallfailure");
		case net__WsaError__wsaservice_not_found: return _S("wsaservice_not_found");
		case net__WsaError__wsatype_not_found: return _S("wsatype_not_found");
		case net__WsaError__wsa_e_no_more: return _S("wsa_e_no_more");
		case net__WsaError__wsa_e_cancelled: return _S("wsa_e_cancelled");
		case net__WsaError__wsaerefused: return _S("wsaerefused");
		case net__WsaError__wsahost_not_found: return _S("wsahost_not_found");
		case net__WsaError__wsatry_again: return _S("wsatry_again");
		case net__WsaError__wsano_recovery: return _S("wsano_recovery");
		case net__WsaError__wsano_data: return _S("wsano_data");
		case net__WsaError__wsa_qos_receivers: return _S("wsa_qos_receivers");
		case net__WsaError__wsa_qos_senders: return _S("wsa_qos_senders");
		case net__WsaError__wsa_qos_no_senders: return _S("wsa_qos_no_senders");
		case net__WsaError__wsa_qos_no_receivers: return _S("wsa_qos_no_receivers");
		case net__WsaError__wsa_qos_request_confirmed: return _S("wsa_qos_request_confirmed");
		case net__WsaError__wsa_qos_admission_failure: return _S("wsa_qos_admission_failure");
		case net__WsaError__wsa_qos_policy_failure: return _S("wsa_qos_policy_failure");
		case net__WsaError__wsa_qos_bad_style: return _S("wsa_qos_bad_style");
		case net__WsaError__wsa_qos_bad_object: return _S("wsa_qos_bad_object");
		case net__WsaError__wsa_qos_traffic_ctrl_error: return _S("wsa_qos_traffic_ctrl_error");
		case net__WsaError__wsa_qos_generic_error: return _S("wsa_qos_generic_error");
		case net__WsaError__wsa_qos_eservicetype: return _S("wsa_qos_eservicetype");
		case net__WsaError__wsa_qos_eflowspec: return _S("wsa_qos_eflowspec");
		case net__WsaError__wsa_qos_eprovspecbuf: return _S("wsa_qos_eprovspecbuf");
		case net__WsaError__wsa_qos_efilterstyle: return _S("wsa_qos_efilterstyle");
		case net__WsaError__wsa_qos_efiltertype: return _S("wsa_qos_efiltertype");
		case net__WsaError__wsa_qos_efiltercount: return _S("wsa_qos_efiltercount");
		case net__WsaError__wsa_qos_eobjlength: return _S("wsa_qos_eobjlength");
		case net__WsaError__wsa_qos_eflowcount: return _S("wsa_qos_eflowcount");
		case net__WsaError__wsa_qos_eunkownpsobj: return _S("wsa_qos_eunkownpsobj");
		case net__WsaError__wsa_qos_epolicyobj: return _S("wsa_qos_epolicyobj");
		case net__WsaError__wsa_qos_eflowdesc: return _S("wsa_qos_eflowdesc");
		case net__WsaError__wsa_qos_epsflowspec: return _S("wsa_qos_epsflowspec");
		case net__WsaError__wsa_qos_epsfilterspec: return _S("wsa_qos_epsfilterspec");
		case net__WsaError__wsa_qos_esdmodeobj: return _S("wsa_qos_esdmodeobj");
		case net__WsaError__wsa_qos_eshaperateobj: return _S("wsa_qos_eshaperateobj");
		case net__WsaError__wsa_qos_reserved_petype: return _S("wsa_qos_reserved_petype");
		case net__WsaError__wsa_secure_host_not_found: return _S("wsa_secure_host_not_found");
		case net__WsaError__wsa_ipsec_name_policy_error: return _S("wsa_ipsec_name_policy_error");
		default: return _S("unknown enum value");
	}
}
static string net__TcpSocket_str(net__TcpSocket it) { return indent_net__TcpSocket_str(it, 0);}
static string net__Socket_str(net__Socket it) { return indent_net__Socket_str(it, 0);}

// V auto functions:
string indent_net__TcpSocket_str(net__TcpSocket it, int indent_count) {
	string indents = string_repeat(_S("    "), indent_count);
	string _t1 = indent_net__Socket_str(it.Socket, indent_count + 1);
	string res = str_intp( 7, _MOV((StrIntpData[]){
		{_S("net.TcpSocket{\n"), 0, {.d_c=0}},
		{_SLIT0, 0xfe10, {.d_s=indents}}, {_S("    Socket: "), 0, {.d_c=0}}, {_S(""), 16, {.d_s=_t1}}, {_S(""), 0, {.d_c=0}},
		{_S("\n"), 0xfe10, {.d_s=indents}}, {_S("}"), 0, {.d_c=0}},
	}));
	string_free(&_t1);
	string_free(&indents);
	return res;
}

string indent_net__Socket_str(net__Socket it, int indent_count) {
	string indents = string_repeat(_S("    "), indent_count);
	string res = str_intp( 7, _MOV((StrIntpData[]){
		{_S("net.Socket{\n"), 0, {.d_c=0}},
		{_SLIT0, 0xfe10, {.d_s=indents}}, {_S("    handle: "), 0, {.d_c=0}}, {_S(""), 7, {.d_i32=it.handle}}, {_S(""), 0, {.d_c=0}},
		{_S("\n"), 0xfe10, {.d_s=indents}}, {_S("}"), 0, {.d_c=0}},
	}));
	string_free(&indents);
	return res;
}

static bool Array_u8_contains(Array_u8 a, u8 v) {
	for (int i = 0; i < a.len; ++i) {
		if (((u8*)a.data)[i] == v) {
			return true;
		}
	}
	return false;
}

static bool Array_string_contains(Array_string a, string v) {
	for (int i = 0; i < a.len; ++i) {
		if (fast_string_eq(((string*)a.data)[i], v)) {
			return true;
		}
	}
	return false;
}


// V json forward decls:
_result_main__Info_general json__decode_main__Info_general(cJSON* root);
cJSON* json__encode_main__Info_general(main__Info_general val);

_result_Map_string_main__Info_command json__decode_Map_string_main__Info_command(cJSON* root);
cJSON* json__encode_Map_string_main__Info_command(Map_string_main__Info_command val);

_result_main__Info_command json__decode_main__Info_command(cJSON* root);
cJSON* json__encode_main__Info_command(main__Info_command val);

_result_Array_string json__decode_Array_string(cJSON* root);
cJSON* json__encode_Array_string(Array_string val);


// V gowrappers:

_result_main__Info_general json__decode_main__Info_general(cJSON* root) {
	main__Info_general res = (main__Info_general){.commands = new_map(sizeof(string), sizeof(main__Info_command), &map_hash_string, &map_eq_string, &map_clone_string, &map_free_string),.usage = (string){.str=(byteptr)"", .is_lit=1},};
	if (!root) {
		const char *error_ptr = cJSON_GetErrorPtr();
		if (error_ptr != NULL) {
			const int error_pos = (int)cJSON_GetErrorPos();
			int maxcontext_chars = 30;
			byte *buf = vcalloc_noscan(maxcontext_chars + 10);
			if (error_pos > 0) {
				int backlines = 1;
				int backchars = error_pos < maxcontext_chars-7 ? (int)error_pos : maxcontext_chars-7 ;
				char *prevline_ptr = (char*)error_ptr;
				while(backchars--){
					char prevc = *(prevline_ptr - 1);
					if(0==prevc){
						break;
					}
					if(10==prevc && !backlines--){
						break;
					}
					prevline_ptr--;
					if(123==prevc) {
						break; // stop at `{` too
					}
				}
				int maxchars = vstrlen_char(prevline_ptr);
				vmemcpy(buf, prevline_ptr, (maxchars < maxcontext_chars ? maxchars : maxcontext_chars));
			}
			string msg;
			msg = _S("failed to decode JSON string");
			if (buf[0] != '\0') {
				msg = string__plus(msg, _S(": "));
			}
			return (_result_main__Info_general){.is_error = true,.err = _v_error(string__plus(msg, tos2(buf))),.data = {0}};
		}
	}

	cJSON *jsonroot__t1 = js_get(root, "commands");
	_result_Map_string_main__Info_command _t1 = {0};
	if (jsonroot__t1) {
		_t1 = json__decode_Map_string_main__Info_command(jsonroot__t1);
		if (_t1.is_error) {
			return (_result_main__Info_general){ .is_error = true, .err = _t1.err, .data = {0} };
		}
	}
	if (jsonroot__t1) {
		res.commands = *(Map_string_main__Info_command*) _t1.data;
	}
	cJSON *jsonroot__t2 = js_get(root, "usage");
	if (jsonroot__t2) {
		if (!(cJSON_IsNull(jsonroot__t2) || cJSON_IsString(jsonroot__t2))) {
			return (_result_main__Info_general){ .is_error = true, .err = _v_error(string__plus(_S("type mismatch for field 'usage', expecting `string` type, got: "), json__json_print(jsonroot__t2))), .data = {0} };
		}
		res.usage = json__decode_string(jsonroot__t2);
	}
	_result_main__Info_general ret;
	_result_ok(&res, (_result*)&ret, sizeof(res));
	return ret;
}


cJSON* json__encode_main__Info_general(main__Info_general val) {
	cJSON *o;
	o = cJSON_CreateObject();
		cJSON_AddItemToObject(o, "commands", json__encode_Map_string_main__Info_command(val.commands));
		cJSON_AddItemToObject(o, "usage", json__encode_string(val.usage));
	return o;
}


_result_Map_string_main__Info_command json__decode_Map_string_main__Info_command(cJSON* root) {
	Map_string_main__Info_command res = new_map(sizeof(string), sizeof(main__Info_command), &map_hash_string, &map_eq_string, &map_clone_string, &map_free_string);
	if (!root) {
		const char *error_ptr = cJSON_GetErrorPtr();
		if (error_ptr != NULL) {
			const int error_pos = (int)cJSON_GetErrorPos();
			int maxcontext_chars = 30;
			byte *buf = vcalloc_noscan(maxcontext_chars + 10);
			if (error_pos > 0) {
				int backlines = 1;
				int backchars = error_pos < maxcontext_chars-7 ? (int)error_pos : maxcontext_chars-7 ;
				char *prevline_ptr = (char*)error_ptr;
				while(backchars--){
					char prevc = *(prevline_ptr - 1);
					if(0==prevc){
						break;
					}
					if(10==prevc && !backlines--){
						break;
					}
					prevline_ptr--;
					if(123==prevc) {
						break; // stop at `{` too
					}
				}
				int maxchars = vstrlen_char(prevline_ptr);
				vmemcpy(buf, prevline_ptr, (maxchars < maxcontext_chars ? maxchars : maxcontext_chars));
			}
			string msg;
			msg = _S("failed to decode JSON string");
			if (buf[0] != '\0') {
				msg = string__plus(msg, _S(": "));
			}
			return (_result_Map_string_main__Info_command){.is_error = true,.err = _v_error(string__plus(msg, tos2(buf))),.data = {0}};
		}
	}


		if(!cJSON_IsObject(root) && !cJSON_IsNull(root)) {
			return (_result_Map_string_main__Info_command){ .is_error = true, .err = _v_error(string__plus(_S("Json element is not an object: "), json__json_print(root))), .data = {0}};
		}
		res = new_map(sizeof(string), sizeof(main__Info_command), &map_hash_string, &map_eq_string, &map_clone_string, &map_free_string);
		cJSON *jsval = NULL;
		cJSON_ArrayForEach(jsval, root)
		{
			
		_result_main__Info_command val2 = json__decode_main__Info_command (js_get(root, jsval->string));
		if(val2.is_error) {
			map_free(&res);
			return *(_result_Map_string_main__Info_command*)&val2;
		}
		main__Info_command val = *(main__Info_command*)val2.data;

			string key = tos2((byteptr)jsval->string);
			map_set(&res, &key, &val);
		}

	_result_Map_string_main__Info_command ret;
	_result_ok(&res, (_result*)&ret, sizeof(res));
	return ret;
}


cJSON* json__encode_Map_string_main__Info_command(Map_string_main__Info_command val) {
	cJSON *o;

		o = cJSON_CreateObject();
		Array_string _t3 = map_keys(&val);
		for (int i = 0; i < _t3.len; ++i) {
			string key = ((string*)_t3.data)[i];
			cJSON_AddItemToObject(o, (char*) key.str, json__encode_main__Info_command ( *(main__Info_command*) map_get(&val, &key, &(main__Info_command[]) { (main__Info_command){.aliases = __new_array(0, 0, sizeof(string)),.description = (string){.str=(byteptr)"", .is_lit=1},} } ) ) );
		}
		array_free(&_t3);

	return o;
}


_result_main__Info_command json__decode_main__Info_command(cJSON* root) {
	main__Info_command res = (main__Info_command){.aliases = __new_array(0, 0, sizeof(string)),.description = (string){.str=(byteptr)"", .is_lit=1},};
	if (!root) {
		const char *error_ptr = cJSON_GetErrorPtr();
		if (error_ptr != NULL) {
			const int error_pos = (int)cJSON_GetErrorPos();
			int maxcontext_chars = 30;
			byte *buf = vcalloc_noscan(maxcontext_chars + 10);
			if (error_pos > 0) {
				int backlines = 1;
				int backchars = error_pos < maxcontext_chars-7 ? (int)error_pos : maxcontext_chars-7 ;
				char *prevline_ptr = (char*)error_ptr;
				while(backchars--){
					char prevc = *(prevline_ptr - 1);
					if(0==prevc){
						break;
					}
					if(10==prevc && !backlines--){
						break;
					}
					prevline_ptr--;
					if(123==prevc) {
						break; // stop at `{` too
					}
				}
				int maxchars = vstrlen_char(prevline_ptr);
				vmemcpy(buf, prevline_ptr, (maxchars < maxcontext_chars ? maxchars : maxcontext_chars));
			}
			string msg;
			msg = _S("failed to decode JSON string");
			if (buf[0] != '\0') {
				msg = string__plus(msg, _S(": "));
			}
			return (_result_main__Info_command){.is_error = true,.err = _v_error(string__plus(msg, tos2(buf))),.data = {0}};
		}
	}

	cJSON *jsonroot__t4 = js_get(root, "aliases");
	_result_Array_string _t4 = {0};
	if (jsonroot__t4) {
		_t4 = json__decode_Array_string(jsonroot__t4);
		if (_t4.is_error) {
			return (_result_main__Info_command){ .is_error = true, .err = _t4.err, .data = {0} };
		}
	}
	if (jsonroot__t4) {
		res.aliases = *(Array_string*) _t4.data;
	}
	cJSON *jsonroot__t5 = js_get(root, "description");
	if (jsonroot__t5) {
		if (!(cJSON_IsNull(jsonroot__t5) || cJSON_IsString(jsonroot__t5))) {
			return (_result_main__Info_command){ .is_error = true, .err = _v_error(string__plus(_S("type mismatch for field 'description', expecting `string` type, got: "), json__json_print(jsonroot__t5))), .data = {0} };
		}
		res.description = json__decode_string(jsonroot__t5);
	}
	_result_main__Info_command ret;
	_result_ok(&res, (_result*)&ret, sizeof(res));
	return ret;
}


cJSON* json__encode_main__Info_command(main__Info_command val) {
	cJSON *o;
	o = cJSON_CreateObject();
		cJSON_AddItemToObject(o, "aliases", json__encode_Array_string(val.aliases));
		cJSON_AddItemToObject(o, "description", json__encode_string(val.description));
	return o;
}


_result_Array_string json__decode_Array_string(cJSON* root) {
	Array_string res = __new_array(0, 0, sizeof(string));
	if (!root) {
		const char *error_ptr = cJSON_GetErrorPtr();
		if (error_ptr != NULL) {
			const int error_pos = (int)cJSON_GetErrorPos();
			int maxcontext_chars = 30;
			byte *buf = vcalloc_noscan(maxcontext_chars + 10);
			if (error_pos > 0) {
				int backlines = 1;
				int backchars = error_pos < maxcontext_chars-7 ? (int)error_pos : maxcontext_chars-7 ;
				char *prevline_ptr = (char*)error_ptr;
				while(backchars--){
					char prevc = *(prevline_ptr - 1);
					if(0==prevc){
						break;
					}
					if(10==prevc && !backlines--){
						break;
					}
					prevline_ptr--;
					if(123==prevc) {
						break; // stop at `{` too
					}
				}
				int maxchars = vstrlen_char(prevline_ptr);
				vmemcpy(buf, prevline_ptr, (maxchars < maxcontext_chars ? maxchars : maxcontext_chars));
			}
			string msg;
			msg = _S("failed to decode JSON string");
			if (buf[0] != '\0') {
				msg = string__plus(msg, _S(": "));
			}
			return (_result_Array_string){.is_error = true,.err = _v_error(string__plus(msg, tos2(buf))),.data = {0}};
		}
	}


	if(root && !cJSON_IsArray(root) && !cJSON_IsNull(root)) {
		return (_result_Array_string){.is_error = true, .err = _v_error(string__plus(_S("Json element is not an array: "), json__json_print(root))), .data = {0}};
	}
	res = __new_array(0, 0, sizeof(string));
	const cJSON *jsval = NULL;
	
	cJSON_ArrayForEach(jsval, root)
	{
		string val = json__decode_string((cJSON *)jsval); 
		array_push((array*)&res, &val);
		
	}

	_result_Array_string ret;
	_result_ok(&res, (_result*)&ret, sizeof(res));
	return ret;
}


cJSON* json__encode_Array_string(Array_string val) {
	cJSON *o;

	o = cJSON_CreateArray();
	for (int i = 0; i < val.len; i++){
		cJSON_AddItemToArray(o, json__encode_string( ((string*)val.data)[i] ));
	}

	return o;
}


// V anon functions:
VV_LOC int anon_fn_51e955ba27ff4810_voidptr_c__mbedtls_ssl_context_char_int__int_6734(voidptr p_info, mbedtls_ssl_context* ssl, char* name, int lng) {
	struct _V_anon_fn_51e955ba27ff4810_voidptr_c__mbedtls_ssl_context_char_int__int_6734_Ctx* _V_closure_ctx = __CLOSURE_GET_DATA();
	string host = char_vstring_literal_with_len(name, lng);
	_result_net__mbedtls__SSLCerts_ptr _t1;
	if (_t1 = _V_closure_ctx->get_cert_callback(_V_closure_ctx->l, host), !_t1.is_error) {
		net__mbedtls__SSLCerts* certs = *(net__mbedtls__SSLCerts**)_t1.data;
		return mbedtls_ssl_set_hs_own_cert(ssl, &certs->client_cert, &certs->client_key);
	} else {
		IError err = _t1.err;
		return -1;
	}
	return 0;
}


// >> typeof() support for sum types / interfaces
static char * v_typeof_interface_IError(int sidx) {
	if (sidx == _IError_None___index) return "None__";
	if (sidx == _IError_voidptr_index) return "voidptr";
	if (sidx == _IError_Error_index) return "Error";
	if (sidx == _IError_MessageError_index) return "MessageError";
	if (sidx == _IError_time__TimeParseError_index) return "time.TimeParseError";
	if (sidx == _IError_io__Eof_index) return "io.Eof";
	if (sidx == _IError_io__NotExpected_index) return "io.NotExpected";
	if (sidx == _IError_os__Eof_index) return "os.Eof";
	if (sidx == _IError_os__NotExpected_index) return "os.NotExpected";
	if (sidx == _IError_os__FileNotOpenedError_index) return "os.FileNotOpenedError";
	if (sidx == _IError_os__SizeOfTypeIs0Error_index) return "os.SizeOfTypeIs0Error";
	if (sidx == _IError_os__ExecutableNotFoundError_index) return "os.ExecutableNotFoundError";
	if (sidx == _IError_net__http__HeaderKeyError_index) return "net.http.HeaderKeyError";
	if (sidx == _IError_net__http__UnexpectedExtraAttributeError_index) return "net.http.UnexpectedExtraAttributeError";
	if (sidx == _IError_net__http__MultiplePathAttributesError_index) return "net.http.MultiplePathAttributesError";
	return "unknown IError";
}

int v_typeof_interface_idx_IError(int sidx) {
	if (sidx == _IError_None___index) return 109;
	if (sidx == _IError_voidptr_index) return 2;
	if (sidx == _IError_Error_index) return 110;
	if (sidx == _IError_MessageError_index) return 112;
	if (sidx == _IError_time__TimeParseError_index) return 298;
	if (sidx == _IError_io__Eof_index) return 383;
	if (sidx == _IError_io__NotExpected_index) return 384;
	if (sidx == _IError_os__Eof_index) return 218;
	if (sidx == _IError_os__NotExpected_index) return 219;
	if (sidx == _IError_os__FileNotOpenedError_index) return 220;
	if (sidx == _IError_os__SizeOfTypeIs0Error_index) return 221;
	if (sidx == _IError_os__ExecutableNotFoundError_index) return 242;
	if (sidx == _IError_net__http__HeaderKeyError_index) return 181;
	if (sidx == _IError_net__http__UnexpectedExtraAttributeError_index) return 197;
	if (sidx == _IError_net__http__MultiplePathAttributesError_index) return 198;
	return 30;
}
static char * v_typeof_interface_net__http__Downloader(int sidx) {
	if (sidx == _net__http__Downloader_voidptr_index) return "voidptr";
	if (sidx == _net__http__Downloader_net__http__TerminalStreamingDownloader_index) return "net.http.TerminalStreamingDownloader";
	if (sidx == _net__http__Downloader_net__http__SilentStreamingDownloader_index) return "net.http.SilentStreamingDownloader";
	return "unknown net.http.Downloader";
}

int v_typeof_interface_idx_net__http__Downloader(int sidx) {
	if (sidx == _net__http__Downloader_voidptr_index) return 2;
	if (sidx == _net__http__Downloader_net__http__TerminalStreamingDownloader_index) return 167;
	if (sidx == _net__http__Downloader_net__http__SilentStreamingDownloader_index) return 170;
	return 165;
}
static char * v_typeof_interface_net__http__Handler(int sidx) {
	if (sidx == _net__http__Handler_net__http__DebugHandler_index) return "net.http.DebugHandler";
	if (sidx == _net__http__Handler_voidptr_index) return "voidptr";
	return "unknown net.http.Handler";
}

int v_typeof_interface_idx_net__http__Handler(int sidx) {
	if (sidx == _net__http__Handler_net__http__DebugHandler_index) return 208;
	if (sidx == _net__http__Handler_voidptr_index) return 2;
	return 207;
}
static char * v_typeof_interface_net__Dialer(int sidx) {
	if (sidx == _net__Dialer_net__TCPDialer_index) return "net.TCPDialer";
	if (sidx == _net__Dialer_voidptr_index) return "voidptr";
	if (sidx == _net__Dialer_net__ssl__SSLDialer_index) return "net.ssl.SSLDialer";
	if (sidx == _net__Dialer_net__socks__SOCKS5Dialer_index) return "net.socks.SOCKS5Dialer";
	return "unknown net.Dialer";
}

int v_typeof_interface_idx_net__Dialer(int sidx) {
	if (sidx == _net__Dialer_net__TCPDialer_index) return 371;
	if (sidx == _net__Dialer_voidptr_index) return 2;
	if (sidx == _net__Dialer_net__ssl__SSLDialer_index) return 285;
	if (sidx == _net__Dialer_net__socks__SOCKS5Dialer_index) return 379;
	return 286;
}
static char * v_typeof_interface_net__Connection(int sidx) {
	if (sidx == _net__Connection_net__TcpConn_index) return "net.TcpConn";
	if (sidx == _net__Connection_voidptr_index) return "voidptr";
	if (sidx == _net__Connection_net__ssl__SSLConn_index) return "net.ssl.SSLConn";
	if (sidx == _net__Connection_net__mbedtls__SSLConn_index) return "net.mbedtls.SSLConn";
	return "unknown net.Connection";
}

int v_typeof_interface_idx_net__Connection(int sidx) {
	if (sidx == _net__Connection_net__TcpConn_index) return 193;
	if (sidx == _net__Connection_voidptr_index) return 2;
	if (sidx == _net__Connection_net__ssl__SSLConn_index) return 157;
	if (sidx == _net__Connection_net__mbedtls__SSLConn_index) return 288;
	return 287;
}
static char * v_typeof_interface_io__Reader(int sidx) {
	if (sidx == _io__Reader_net__TcpConn_index) return "net.TcpConn";
	if (sidx == _io__Reader_voidptr_index) return "voidptr";
	if (sidx == _io__Reader_net__ssl__SSLConn_index) return "net.ssl.SSLConn";
	if (sidx == _io__Reader_os__File_index) return "os.File";
	if (sidx == _io__Reader_io__BufferedReader_index) return "io.BufferedReader";
	if (sidx == _io__Reader_net__mbedtls__SSLConn_index) return "net.mbedtls.SSLConn";
	if (sidx == _io__Reader_io__ReaderWriterImpl_index) return "io.ReaderWriterImpl";
	return "unknown io.Reader";
}

int v_typeof_interface_idx_io__Reader(int sidx) {
	if (sidx == _io__Reader_net__TcpConn_index) return 193;
	if (sidx == _io__Reader_voidptr_index) return 2;
	if (sidx == _io__Reader_net__ssl__SSLConn_index) return 157;
	if (sidx == _io__Reader_os__File_index) return 169;
	if (sidx == _io__Reader_io__BufferedReader_index) return 195;
	if (sidx == _io__Reader_net__mbedtls__SSLConn_index) return 288;
	if (sidx == _io__Reader_io__ReaderWriterImpl_index) return 394;
	return 380;
}
static char * v_typeof_interface_io__Writer(int sidx) {
	if (sidx == _io__Writer_io__MultiWriter_index) return "io.MultiWriter";
	if (sidx == _io__Writer_voidptr_index) return "voidptr";
	if (sidx == _io__Writer_net__ssl__SSLConn_index) return "net.ssl.SSLConn";
	if (sidx == _io__Writer_os__File_index) return "os.File";
	if (sidx == _io__Writer_net__TcpConn_index) return "net.TcpConn";
	if (sidx == _io__Writer_net__mbedtls__SSLConn_index) return "net.mbedtls.SSLConn";
	if (sidx == _io__Writer_net__UdpConn_index) return "net.UdpConn";
	if (sidx == _io__Writer_io__BufferedWriter_index) return "io.BufferedWriter";
	if (sidx == _io__Writer_io__ReaderWriterImpl_index) return "io.ReaderWriterImpl";
	return "unknown io.Writer";
}

int v_typeof_interface_idx_io__Writer(int sidx) {
	if (sidx == _io__Writer_io__MultiWriter_index) return 390;
	if (sidx == _io__Writer_voidptr_index) return 2;
	if (sidx == _io__Writer_net__ssl__SSLConn_index) return 157;
	if (sidx == _io__Writer_os__File_index) return 169;
	if (sidx == _io__Writer_net__TcpConn_index) return 193;
	if (sidx == _io__Writer_net__mbedtls__SSLConn_index) return 288;
	if (sidx == _io__Writer_net__UdpConn_index) return 376;
	if (sidx == _io__Writer_io__BufferedWriter_index) return 386;
	if (sidx == _io__Writer_io__ReaderWriterImpl_index) return 394;
	return 385;
}
static char * v_typeof_interface_io__RandomReader(int sidx) {
	if (sidx == _io__RandomReader_os__File_index) return "os.File";
	if (sidx == _io__RandomReader_voidptr_index) return "voidptr";
	return "unknown io.RandomReader";
}

int v_typeof_interface_idx_io__RandomReader(int sidx) {
	if (sidx == _io__RandomReader_os__File_index) return 169;
	if (sidx == _io__RandomReader_voidptr_index) return 2;
	return 392;
}
static char * v_typeof_interface_io__ReaderWriter(int sidx) {
	if (sidx == _io__ReaderWriter_io__ReaderWriterImpl_index) return "io.ReaderWriterImpl";
	if (sidx == _io__ReaderWriter_voidptr_index) return "voidptr";
	return "unknown io.ReaderWriter";
}

int v_typeof_interface_idx_io__ReaderWriter(int sidx) {
	if (sidx == _io__ReaderWriter_io__ReaderWriterImpl_index) return 394;
	if (sidx == _io__ReaderWriter_voidptr_index) return 2;
	return 393;
}
static char * v_typeof_interface_io__RandomWriter(int sidx) {
	return "unknown io.RandomWriter";
}

int v_typeof_interface_idx_io__RandomWriter(int sidx) {
	return 395;
}
static char * v_typeof_interface_rand__PRNG(int sidx) {
	if (sidx == _rand__PRNG_rand__wyrand__WyRandRNG_index) return "rand.wyrand.WyRandRNG";
	if (sidx == _rand__PRNG_voidptr_index) return "voidptr";
	return "unknown rand.PRNG";
}

int v_typeof_interface_idx_rand__PRNG(int sidx) {
	if (sidx == _rand__PRNG_rand__wyrand__WyRandRNG_index) return 403;
	if (sidx == _rand__PRNG_voidptr_index) return 2;
	return 397;
}
static char * v_typeof_interface_v__embed_file__Decoder(int sidx) {
	return "unknown v.embed_file.Decoder";
}

int v_typeof_interface_idx_v__embed_file__Decoder(int sidx) {
	return 437;
}
static char * v_typeof_interface_hash__Hash(int sidx) {
	return "unknown hash.Hash";
}

int v_typeof_interface_idx_hash__Hash(int sidx) {
	return 468;
}
static char * v_typeof_interface_hash__Hash32er(int sidx) {
	return "unknown hash.Hash32er";
}

int v_typeof_interface_idx_hash__Hash32er(int sidx) {
	return 469;
}
static char * v_typeof_interface_hash__Hash64er(int sidx) {
	return "unknown hash.Hash64er";
}

int v_typeof_interface_idx_hash__Hash64er(int sidx) {
	return 470;
}
// << typeof() support for sum types

strings__Builder strings__new_builder(int initial_size) {
	strings__Builder res = ((__new_array_with_default_noscan(0, initial_size, sizeof(u8), 0)));
	ArrayFlags_set(&res.flags, ArrayFlags__noslices);
	return res;
}
Array_u8 strings__Builder_reuse_as_plain_u8_array(strings__Builder* b) {
	ArrayFlags_clear(&b->flags, ArrayFlags__noslices);
	return *b;
}
void strings__Builder_write_ptr(strings__Builder* b, u8* ptr, int len) {
	if (len == 0) {
		return;
	}
	array_push_many(b, ptr, len);
}
void strings__Builder_write_rune(strings__Builder* b, rune r) {
	Array_fixed_u8_5 buffer = {0};
	string res = utf32_to_str_no_malloc(((u32)(r)), &buffer[0]);
	if (res.len == 0) {
		return;
	}
	array_push_many(b, res.str, res.len);
}
void strings__Builder_write_runes(strings__Builder* b, Array_rune runes) {
	Array_fixed_u8_5 buffer = {0};
	for (int _t1 = 0; _t1 < runes.len; ++_t1) {
		rune r = ((rune*)runes.data)[_t1];
		string res = utf32_to_str_no_malloc(((u32)(r)), &buffer[0]);
		if (res.len == 0) {
			continue;
		}
		array_push_many(b, res.str, res.len);
	}
}
inline void strings__Builder_write_u8(strings__Builder* b, u8 data) {
	array_push_noscan((array*)b, _MOV((u8[]){ data }));
}
inline void strings__Builder_write_byte(strings__Builder* b, u8 data) {
	array_push_noscan((array*)b, _MOV((u8[]){ data }));
}
void strings__Builder_write_decimal(strings__Builder* b, i64 n) {
	if (n == 0) {
		strings__Builder_write_u8(b, 0x30);
		return;
	}
	Array_fixed_u8_25 buf = {0};
	i64 x = (n < 0 ? (-n) : (n));
	int i = 24;
	for (;;) {
		if (!(x != 0)) break;
		i64 nextx = (i64)(x / 10);
		i64 r = (i64)(x % 10);
		buf[i] = (u8)(((u8)(r)) + 0x30);
		x = nextx;
		i--;
	}
	if (n < 0) {
		buf[i] = '-';
		i--;
	}
	strings__Builder_write_ptr(b, &buf[(int)(i + 1)], (int)(24 - i));
}
_result_int strings__Builder_write(strings__Builder* b, Array_u8 data) {
	if (data.len == 0) {
		_result_int _t1 = {0};
		_result_ok(&(int[]) { 0 }, (_result*)(&_t1), sizeof(int));
		return _t1;
	}
	_PUSH_MANY_noscan(b, (data), _t2, strings__Builder);
	_result_int _t3 = {0};
	_result_ok(&(int[]) { data.len }, (_result*)(&_t3), sizeof(int));
	return _t3;
}
void strings__Builder_drain_builder(strings__Builder* b, strings__Builder* other, int other_new_cap) {
	if (other->len > 0) {
		_PUSH_MANY_noscan(b, (*other), _t1, strings__Builder);
	}
	strings__Builder_free(other);
	*other = strings__new_builder(other_new_cap);
}
inline u8 strings__Builder_byte_at(strings__Builder* b, int n) {
	return (*(u8*)array_get(*(((Array_u8*)(b))), n));
}
inline void strings__Builder_write_string(strings__Builder* b, string s) {
	if (s.len == 0) {
		return;
	}
	array_push_many(b, s.str, s.len);
}
inline void strings__Builder_write_string2(strings__Builder* b, string s1, string s2) {
	if (s1.len != 0) {
		array_push_many(b, s1.str, s1.len);
	}
	if (s2.len != 0) {
		array_push_many(b, s2.str, s2.len);
	}
}
void strings__Builder_go_back(strings__Builder* b, int n) {
	array_trim(b, (int)(b->len - n));
}
inline string strings__Builder_spart(strings__Builder* b, int start_pos, int n) {
	{ // Unsafe block
		u8* x = malloc_noscan((int)(n + 1));
		vmemcpy(x, ((u8*)(b->data)) + start_pos, n);
		x[n] = 0;
		return tos(x, n);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string strings__Builder_cut_last(strings__Builder* b, int n) {
	int cut_pos = (int)(b->len - n);
	string res = strings__Builder_spart(b, cut_pos, n);
	array_trim(b, cut_pos);
	return res;
}
string strings__Builder_cut_to(strings__Builder* b, int pos) {
	if (pos > b->len) {
		return _S("");
	}
	return strings__Builder_cut_last(b, (int)(b->len - pos));
}
void strings__Builder_go_back_to(strings__Builder* b, int pos) {
	array_trim(b, pos);
}
inline void strings__Builder_writeln(strings__Builder* b, string s) {
	if ((s).len != 0) {
		array_push_many(b, s.str, s.len);
	}
	array_push_noscan((array*)b, _MOV((u8[]){ ((u8)('\n')) }));
}
inline void strings__Builder_writeln2(strings__Builder* b, string s1, string s2) {
	if ((s1).len != 0) {
		array_push_many(b, s1.str, s1.len);
	}
	array_push_noscan((array*)b, _MOV((u8[]){ ((u8)('\n')) }));
	if ((s2).len != 0) {
		array_push_many(b, s2.str, s2.len);
	}
	array_push_noscan((array*)b, _MOV((u8[]){ ((u8)('\n')) }));
}
string strings__Builder_last_n(strings__Builder* b, int n) {
	if (n > b->len) {
		return _S("");
	}
	return strings__Builder_spart(b, (int)(b->len - n), n);
}
string strings__Builder_after(strings__Builder* b, int n) {
	if (n >= b->len) {
		return _S("");
	}
	return strings__Builder_spart(b, n, (int)(b->len - n));
}
string strings__Builder_str(strings__Builder* b) {
	array_push_noscan((array*)b, _MOV((u8[]){ ((u8)(0)) }));
	u8* bcopy = ((u8*)(memdup_noscan(b->data, b->len)));
	string s = u8_vstring_with_len(bcopy, (int)(b->len - 1));
	array_clear(b);
	return s;
}
void strings__Builder_ensure_cap(strings__Builder* b, int n) {
	if (n <= b->cap) {
		return;
	}
	u8* new_data = vcalloc((int)(n * b->element_size));
	if (b->data != ((void*)0)) {
		vmemcpy(new_data, b->data, (int)(b->len * b->element_size));
		if (ArrayFlags_has(&b->flags, ArrayFlags__noslices)) {
			_v_free(b->data);
		}
	}
	{ // Unsafe block
		b->data = new_data;
		b->offset = 0;
		b->cap = n;
	}
}
void strings__Builder_grow_len(strings__Builder* b, int n) {
	if (n <= 0) {
		return;
	}
	int new_len = (int)(b->len + n);
	strings__Builder_ensure_cap(b, new_len);
	{ // Unsafe block
		b->len = new_len;
	}
}
void strings__Builder_free(strings__Builder* b) {
	if (b->data != 0) {
		_v_free(b->data);
		{ // Unsafe block
			b->data = ((void*)0);
		}
	}
}
int math__bits__trailing_zeros_32(u32 x) {
	if (x == 0U) {
		return 32;
	}
	return ((int)(_const_math__bits__de_bruijn32tab[((u32)(((x & -x)) * _const_math__bits__de_bruijn32) >> (27))]));
}
int math__bits__trailing_zeros_64(u64 x) {
	if (x == 0U) {
		return 64;
	}
	return ((int)(_const_math__bits__de_bruijn64tab[((u64)(((x & -x)) * _const_math__bits__de_bruijn64) >> (58))]));
}
int math__bits__len_32(u32 x) {
	u32 y = x;
	int n = 0;
	if (y >= (65536)) {
		y >>= 16U;
		n = 16;
	}
	if (y >= (256)) {
		y >>= 8U;
		n += 8;
	}
	return (int)(n + ((int)(_const_math__bits__len_8_tab[y])));
}
multi_return_u64_u64 math__bits__mul_64(u64 x, u64 y) {
	u64 x0 = (x & _const_math__bits__mask32);
	u64 x1 = (x >> 32U);
	u64 y0 = (y & _const_math__bits__mask32);
	u64 y1 = (y >> 32U);
	u64 w0 = (u64)(x0 * y0);
	u64 t = (u64)((u64)(x1 * y0) + ((w0 >> 32U)));
	u64 w1 = (t & _const_math__bits__mask32);
	u64 w2 = (t >> 32U);
	w1 += (u64)(x0 * y1);
	u64 hi = (u64)((u64)((u64)(x1 * y1) + w2) + ((w1 >> 32U)));
	u64 lo = (u64)(x * y);
	return (multi_return_u64_u64){.arg0=hi, .arg1=lo};
}
_result_u64 strconv__common_parse_uint(string s, int _base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit) {
	multi_return_u64_int mr_730 = strconv__common_parse_uint2(s, _base, _bit_size);
	u64 result = mr_730.arg0;
	int err = mr_730.arg1;
	if (err != 0 && (error_on_non_digit || error_on_high_digit)) {
		switch (err) {
			case -1: {
				return (_result_u64){ .is_error=true, .err=_v_error(str_intp(3, _MOV((StrIntpData[]){{_S("common_parse_uint: wrong base "), 0xfe07, {.d_i32 = _base}}, {_S(" for "), 0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
			}
			case -2: {
				return (_result_u64){ .is_error=true, .err=_v_error(str_intp(3, _MOV((StrIntpData[]){{_S("common_parse_uint: wrong bit size "), 0xfe07, {.d_i32 = _bit_size}}, {_S(" for "), 0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
			}
			case -3: {
				return (_result_u64){ .is_error=true, .err=_v_error(str_intp(2, _MOV((StrIntpData[]){{_S("common_parse_uint: integer overflow "), 0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
			}
			default: {
				{
					return (_result_u64){ .is_error=true, .err=_v_error(str_intp(2, _MOV((StrIntpData[]){{_S("common_parse_uint: syntax error "), 0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
				}
			}
		}
		
	}
	_result_u64 _t5 = {0};
	_result_ok(&(u64[]) { result }, (_result*)(&_t5), sizeof(u64));
	return _t5;
}
multi_return_u64_int strconv__common_parse_uint2(string s, int _base, int _bit_size) {
	if ((s).len == 0) {
		return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=1};
	}
	int bit_size = _bit_size;
	int base = _base;
	int start_index = 0;
	if (base == 0) {
		base = 10;
		if (s.str[ 0] == '0') {
			u8 ch = (s.len > 1 ? ((s.str[ 1] | 32)) : ('0'));
			if (s.len >= 3) {
				if (ch == 'b') {
					base = 2;
					start_index += 2;
				} else if (ch == 'o') {
					base = 8;
					start_index += 2;
				} else if (ch == 'x') {
					base = 16;
					start_index += 2;
				}
				if (s.str[ start_index] == '_') {
					start_index++;
				}
			} else if (s.len >= 2 && (s.str[ 1] >= '0' && s.str[ 1] <= '9')) {
				base = 10;
				start_index++;
			} else {
				base = 8;
				start_index++;
			}
		}
	}
	if (bit_size == 0) {
		bit_size = _const_strconv__int_size;
	} else if (bit_size < 0 || bit_size > 64) {
		return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=-2};
	}
	u64 cutoff = (u64)((u64)(_const_max_u64 / ((u64)(base))) + ((u64)(1U)));
	u64 max_val = (bit_size == 64 ? (_const_max_u64) : ((u64)(((((u64)(1U)) << ((u64)(bit_size)))) - ((u64)(1U)))));
	int basem1 = (int)(base - 1);
	u64 n = ((u64)(0U));
	for (int i = start_index; i < s.len; ++i) {
		u8 c = s.str[ i];
		if (c == '_') {
			if (i == start_index || i >= ((int)(s.len - 1))) {
				return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=1};
			}
			if (s.str[ (int)(i - 1)] == '_' || s.str[ (int)(i + 1)] == '_') {
				return (multi_return_u64_int){.arg0=((u64)(0U)), .arg1=1};
			}
			continue;
		}
		int sub_count = 0;
		c -= 48;
		if (c >= 17) {
			sub_count++;
			c -= 7;
			if (c >= 42) {
				sub_count++;
				c -= 32;
			}
		}
		if (c > basem1 || (sub_count == 0 && c > 9)) {
			return (multi_return_u64_int){.arg0=n, .arg1=(int)(i + 1)};
		}
		if (n >= cutoff) {
			return (multi_return_u64_int){.arg0=max_val, .arg1=-3};
		}
		n *= ((u64)(base));
		u64 n1 = (u64)(n + ((u64)(c)));
		if (n1 < n || n1 > max_val) {
			return (multi_return_u64_int){.arg0=max_val, .arg1=-3};
		}
		n = n1;
	}
	return (multi_return_u64_int){.arg0=n, .arg1=0};
}
_result_i64 strconv__common_parse_int(string _s, int base, int _bit_size, bool error_on_non_digit, bool error_on_high_digit) {
	if ((_s).len == 0) {
		_result_i64 _t1 = {0};
		_result_ok(&(i64[]) { ((i64)(0)) }, (_result*)(&_t1), sizeof(i64));
		return _t1;
	}
	int bit_size = _bit_size;
	if (bit_size == 0) {
		bit_size = _const_strconv__int_size;
	}
	string s = _s;
	bool neg = false;
	if (s.str[ 0] == '+') {
		{ // Unsafe block
			s = tos(s.str + 1, (int)(s.len - 1));
		}
	} else if (s.str[ 0] == '-') {
		neg = true;
		{ // Unsafe block
			s = tos(s.str + 1, (int)(s.len - 1));
		}
	}
	_result_u64 _t2 = strconv__common_parse_uint(s, base, bit_size, error_on_non_digit, error_on_high_digit);
	if (_t2.is_error) {
		_result_i64 _t3 = {0};
		_t3.is_error = true;
		_t3.err = _t2.err;
		return _t3;
	}
	
 	u64 un = (*(u64*)_t2.data);
	if (un == 0U) {
		_result_i64 _t4 = {0};
		_result_ok(&(i64[]) { ((i64)(0)) }, (_result*)(&_t4), sizeof(i64));
		return _t4;
	}
	u64 cutoff = (((u64)(1U)) << ((u64)((int)(bit_size - 1))));
	if (!neg && un >= cutoff) {
		_result_i64 _t5 = {0};
		_result_ok(&(i64[]) { ((i64)((u64)(cutoff - ((u64)(1U))))) }, (_result*)(&_t5), sizeof(i64));
		return _t5;
	}
	if (neg && un > cutoff) {
		_result_i64 _t6 = {0};
		_result_ok(&(i64[]) { -((i64)(cutoff)) }, (_result*)(&_t6), sizeof(i64));
		return _t6;
	}
	_result_i64 _t8; /* if prepend */
	if (neg) {
		_result_ok(&(i64[]) { -((i64)(un)) }, (_result*)(&_t8), sizeof(i64));
	} else {
		_result_ok(&(i64[]) { ((i64)(un)) }, (_result*)(&_t8), sizeof(i64));
	}
	return _t8;
}
string strconv__Dec32_get_string_32(strconv__Dec32 d, bool neg, int i_n_digit, int i_pad_digit) {
	int n_digit = (int)(i_n_digit + 1);
	int pad_digit = (int)(i_pad_digit + 1);
	u32 out = d.m;
	int out_len = strconv__dec_digits(out);
	int out_len_original = out_len;
	int fw_zeros = 0;
	if (pad_digit > out_len) {
		fw_zeros = (int)(pad_digit - out_len);
	}
	Array_u8 buf = __new_array_with_default_noscan(((int)((int)((int)((int)(out_len + 5) + 1) + 1))), 0, sizeof(u8), 0);
	int i = 0;
	if (neg) {
		if (buf.data != 0) {
			((u8*)buf.data)[i] = '-';
		}
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (u32)(_const_strconv__ten_pow_table_32[(int)((int)(out_len - n_digit) - 1)] * 5U);
		out /= _const_strconv__ten_pow_table_32[(int)(out_len - n_digit)];
		out_len = n_digit;
	}
	int y = (int)(i + out_len);
	int x = 0;
	for (;;) {
		if (!(x < ((int)((int)(out_len - disp) - 1)))) break;
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u32)(out % 10U))));
		out /= 10U;
		i++;
		x++;
	}
	if (i_n_digit == 0) {
		{ // Unsafe block
			((u8*)buf.data)[i] = 0;
			return tos(((u8*)(&((u8*)buf.data)[0])), i);
		}
	}
	if (out_len >= 1) {
		((u8*)buf.data)[(int)(y - x)] = '.';
		x++;
		i++;
	}
	if ((int)(y - x) >= 0) {
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u32)(out % 10U))));
		i++;
	}
	for (;;) {
		if (!(fw_zeros > 0)) break;
		((u8*)buf.data)[i] = '0';
		i++;
		fw_zeros--;
	}
	((u8*)buf.data)[i] = 'e';
	i++;
	int exp = (int)((int)(d.e + out_len_original) - 1);
	if (exp < 0) {
		((u8*)buf.data)[i] = '-';
		i++;
		exp = -exp;
	} else {
		((u8*)buf.data)[i] = '+';
		i++;
	}
	int d1 = (int)(exp % 10);
	int d0 = (int)(exp / 10);
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d0)));
	i++;
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d1)));
	i++;
	((u8*)buf.data)[i] = 0;
	return tos(((u8*)(&((u8*)buf.data)[0])), i);
}
VV_LOC multi_return_strconv__Dec32_bool strconv__f32_to_decimal_exact_int(u32 i_mant, u32 exp) {
	strconv__Dec32 d = ((strconv__Dec32){.m = 0,.e = 0,});
	u32 e = (u32)(exp - 127U);
	if (e > _const_strconv__mantbits32) {
		return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=false};
	}
	u32 shift = (u32)(_const_strconv__mantbits32 - e);
	u32 mant = (i_mant | 0x00800000U);
	d.m = (mant >> shift);
	if (((d.m << shift)) != mant) {
		return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=false};
	}
	for (;;) {
		if (!(((u32)(d.m % 10U)) == 0U)) break;
		d.m /= 10U;
		d.e++;
	}
	return (multi_return_strconv__Dec32_bool){.arg0=d, .arg1=true};
}
VV_LOC strconv__Dec32 strconv__f32_to_decimal(u32 mant, u32 exp) {
	int e2 = 0;
	u32 m2 = ((u32)(0U));
	if (exp == 0U) {
		e2 = (int)((int)(-126 - ((int)(_const_strconv__mantbits32))) - 2);
		m2 = mant;
	} else {
		e2 = (int)((int)((int)(((int)(exp)) - 127) - ((int)(_const_strconv__mantbits32))) - 2);
		m2 = (((((u32)(1U)) << _const_strconv__mantbits32)) | mant);
	}
	bool even = ((m2 & 1U)) == 0U;
	bool accept_bounds = even;
	u32 mv = ((u32)((u32)(4 * m2)));
	u32 mp = ((u32)((u32)((u32)(4 * m2) + 2U)));
	u32 mm_shift = strconv__bool_to_u32(mant != 0U || exp <= 1U);
	u32 mm = ((u32)((u32)((u32)((u32)(4 * m2) - 1U) - mm_shift)));
	u32 vr = ((u32)(0U));
	u32 vp = ((u32)(0U));
	u32 vm = ((u32)(0U));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	u8 last_removed_digit = ((u8)(0));
	if (e2 >= 0) {
		u32 q = strconv__log10_pow2(e2);
		e10 = ((int)(q));
		int k = (int)((int)(59 + strconv__pow5_bits(((int)(q)))) - 1);
		int i = (int)((int)(-e2 + ((int)(q))) + k);
		vr = strconv__mul_pow5_invdiv_pow2(mv, q, i);
		vp = strconv__mul_pow5_invdiv_pow2(mp, q, i);
		vm = strconv__mul_pow5_invdiv_pow2(mm, q, i);
		if (q != 0U && (u32)(((u32)(vp - 1U)) / 10U) <= (u32)(vm / 10U)) {
			int l = (int)((int)(59 + strconv__pow5_bits(((int)((u32)(q - 1U))))) - 1);
			last_removed_digit = ((u8)((u32)(strconv__mul_pow5_invdiv_pow2(mv, (u32)(q - 1U), (int)((int)(-e2 + ((int)((u32)(q - 1U)))) + l)) % 10U)));
		}
		if (q <= 9U) {
			if ((u32)(mv % 5U) == 0U) {
				vr_is_trailing_zeros = strconv__multiple_of_power_of_five_32(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__multiple_of_power_of_five_32(mm, q);
			} else if (strconv__multiple_of_power_of_five_32(mp, q)) {
				vp--;
			}
		}
	} else {
		u32 q = strconv__log10_pow5(-e2);
		e10 = (int)(((int)(q)) + e2);
		int i = (int)(-e2 - ((int)(q)));
		int k = (int)(strconv__pow5_bits(i) - 61);
		int j = (int)(((int)(q)) - k);
		vr = strconv__mul_pow5_div_pow2(mv, ((u32)(i)), j);
		vp = strconv__mul_pow5_div_pow2(mp, ((u32)(i)), j);
		vm = strconv__mul_pow5_div_pow2(mm, ((u32)(i)), j);
		if (q != 0U && ((u32)(((u32)(vp - 1U)) / 10U)) <= (u32)(vm / 10U)) {
			j = (int)((int)(((int)(q)) - 1) - ((int)(strconv__pow5_bits((int)(i + 1)) - 61)));
			last_removed_digit = ((u8)((u32)(strconv__mul_pow5_div_pow2(mv, ((u32)((int)(i + 1))), j) % 10U)));
		}
		if (q <= 1U) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = mm_shift == 1U;
			} else {
				vp--;
			}
		} else if (q < 31U) {
			vr_is_trailing_zeros = strconv__multiple_of_power_of_two_32(mv, (u32)(q - 1U));
		}
	}
	int removed = 0;
	u32 out = ((u32)(0U));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		for (;;) {
			if (!((u32)(vp / 10U) > (u32)(vm / 10U))) break;
			vm_is_trailing_zeros = vm_is_trailing_zeros && ((u32)(vm % 10U)) == 0U;
			vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
			last_removed_digit = ((u8)((u32)(vr % 10U)));
			vr /= 10U;
			vp /= 10U;
			vm /= 10U;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			for (;;) {
				if (!((u32)(vm % 10U) == 0U)) break;
				vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
				last_removed_digit = ((u8)((u32)(vr % 10U)));
				vr /= 10U;
				vp /= 10U;
				vm /= 10U;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && last_removed_digit == 5 && ((u32)(vr % 2U)) == 0U) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		for (;;) {
			if (!((u32)(vp / 10U) > (u32)(vm / 10U))) break;
			last_removed_digit = ((u8)((u32)(vr % 10U)));
			vr /= 10U;
			vp /= 10U;
			vm /= 10U;
			removed++;
		}
		out = (u32)(vr + strconv__bool_to_u32(vr == vm || last_removed_digit >= 5));
	}
	return ((strconv__Dec32){.m = out,.e = (int)(e10 + removed),});
}
string strconv__f32_to_str(f32 f, int n_digit) {
	strconv__Uf32 u1 = ((strconv__Uf32){0});
	u1.f = f;
	u32 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits32 + _const_strconv__expbits32)))) != 0U;
	u32 mant = (u & ((u32)(((((u32)(1U)) << _const_strconv__mantbits32)) - ((u32)(1U)))));
	u32 exp = (((u >> _const_strconv__mantbits32)) & ((u32)(((((u32)(1U)) << _const_strconv__expbits32)) - ((u32)(1U)))));
	if (exp == 255U || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec32_bool mr_8566 = strconv__f32_to_decimal_exact_int(mant, exp);
	strconv__Dec32 d = mr_8566.arg0;
	bool ok = mr_8566.arg1;
	if (!ok) {
		d = strconv__f32_to_decimal(mant, exp);
	}
	return strconv__Dec32_get_string_32(d, neg, n_digit, 0);
}
VV_LOC string strconv__Dec64_get_string_64(strconv__Dec64 d, bool neg, int i_n_digit, int i_pad_digit) {
	int n_digit = (i_n_digit < 1 ? (1) : ((int)(i_n_digit + 1)));
	int pad_digit = (int)(i_pad_digit + 1);
	u64 out = d.m;
	int d_exp = d.e;
	int out_len = strconv__dec_digits(out);
	int out_len_original = out_len;
	int fw_zeros = 0;
	if (pad_digit > out_len) {
		fw_zeros = (int)(pad_digit - out_len);
	}
	Array_u8 buf = __new_array_with_default_noscan(((int)((int)((int)((int)(out_len + 6) + 1) + 1) + fw_zeros)), 0, sizeof(u8), 0);
	int i = 0;
	if (neg) {
		((u8*)buf.data)[i] = '-';
		i++;
	}
	int disp = 0;
	if (out_len <= 1) {
		disp = 1;
	}
	if (n_digit < out_len) {
		out += (u64)(_const_strconv__ten_pow_table_64[(int)((int)(out_len - n_digit) - 1)] * 5U);
		out /= _const_strconv__ten_pow_table_64[(int)(out_len - n_digit)];
		u64 out_div = (u64)(d.m / _const_strconv__ten_pow_table_64[(int)(out_len - n_digit)]);
		if (out_div < out && strconv__dec_digits(out_div) < strconv__dec_digits(out)) {
			d_exp++;
			n_digit++;
		}
		out_len = n_digit;
	}
	int y = (int)(i + out_len);
	int x = 0;
	for (;;) {
		if (!(x < ((int)((int)(out_len - disp) - 1)))) break;
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u64)(out % 10U))));
		out /= 10U;
		i++;
		x++;
	}
	if (out_len >= 1) {
		((u8*)buf.data)[(int)(y - x)] = '.';
		x++;
		i++;
	}
	if ((int)(y - x) >= 0) {
		((u8*)buf.data)[(int)(y - x)] = (rune)('0' + ((u8)((u64)(out % 10U))));
		i++;
	}
	for (;;) {
		if (!(fw_zeros > 0)) break;
		((u8*)buf.data)[i] = '0';
		i++;
		fw_zeros--;
	}
	((u8*)buf.data)[i] = 'e';
	i++;
	int exp = (int)((int)(d_exp + out_len_original) - 1);
	if (exp < 0) {
		((u8*)buf.data)[i] = '-';
		i++;
		exp = -exp;
	} else {
		((u8*)buf.data)[i] = '+';
		i++;
	}
	int d2 = (int)(exp % 10);
	exp /= 10;
	int d1 = (int)(exp % 10);
	int d0 = (int)(exp / 10);
	if (d0 > 0) {
		((u8*)buf.data)[i] = (rune)('0' + ((u8)(d0)));
		i++;
	}
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d1)));
	i++;
	((u8*)buf.data)[i] = (rune)('0' + ((u8)(d2)));
	i++;
	((u8*)buf.data)[i] = 0;
	return tos(((u8*)(&((u8*)buf.data)[0])), i);
}
VV_LOC multi_return_strconv__Dec64_bool strconv__f64_to_decimal_exact_int(u64 i_mant, u64 exp) {
	strconv__Dec64 d = ((strconv__Dec64){.m = 0,.e = 0,});
	u64 e = (u64)(exp - 1023U);
	if (e > _const_strconv__mantbits64) {
		return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=false};
	}
	u64 shift = (u64)(_const_strconv__mantbits64 - e);
	u64 mant = (i_mant | ((u64)(0x0010000000000000U)));
	d.m = (mant >> shift);
	if (((d.m << shift)) != mant) {
		return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=false};
	}
	for (;;) {
		if (!(((u64)(d.m % 10U)) == 0U)) break;
		d.m /= 10U;
		d.e++;
	}
	return (multi_return_strconv__Dec64_bool){.arg0=d, .arg1=true};
}
VV_LOC strconv__Dec64 strconv__f64_to_decimal(u64 mant, u64 exp) {
	int e2 = 0;
	u64 m2 = ((u64)(0U));
	if (exp == 0U) {
		e2 = (int)((int)(-1022 - ((int)(_const_strconv__mantbits64))) - 2);
		m2 = mant;
	} else {
		e2 = (int)((int)((int)(((int)(exp)) - 1023) - ((int)(_const_strconv__mantbits64))) - 2);
		m2 = (((((u64)(1U)) << _const_strconv__mantbits64)) | mant);
	}
	bool even = ((m2 & 1U)) == 0U;
	bool accept_bounds = even;
	u64 mv = ((u64)((u64)(4 * m2)));
	u64 mm_shift = strconv__bool_to_u64(mant != 0U || exp <= 1U);
	u64 vr = ((u64)(0U));
	u64 vp = ((u64)(0U));
	u64 vm = ((u64)(0U));
	int e10 = 0;
	bool vm_is_trailing_zeros = false;
	bool vr_is_trailing_zeros = false;
	if (e2 >= 0) {
		u32 q = (u32)(strconv__log10_pow2(e2) - strconv__bool_to_u32(e2 > 3));
		e10 = ((int)(q));
		int k = (int)((int)(122 + strconv__pow5_bits(((int)(q)))) - 1);
		int i = (int)((int)(-e2 + ((int)(q))) + k);
		strconv__Uint128 mul = *(((strconv__Uint128*)(&_const_strconv__pow5_inv_split_64_x[v_fixed_index((u32)(q * 2U), 584)])));
		vr = strconv__mul_shift_64((u64)(((u64)(4U)) * m2), mul, i);
		vp = strconv__mul_shift_64((u64)((u64)(((u64)(4U)) * m2) + ((u64)(2U))), mul, i);
		vm = strconv__mul_shift_64((u64)((u64)((u64)(((u64)(4U)) * m2) - ((u64)(1U))) - mm_shift), mul, i);
		if (q <= 21U) {
			if ((u64)(mv % 5U) == 0U) {
				vr_is_trailing_zeros = strconv__multiple_of_power_of_five_64(mv, q);
			} else if (accept_bounds) {
				vm_is_trailing_zeros = strconv__multiple_of_power_of_five_64((u64)((u64)(mv - 1U) - mm_shift), q);
			} else if (strconv__multiple_of_power_of_five_64((u64)(mv + 2U), q)) {
				vp--;
			}
		}
	} else {
		u32 q = (u32)(strconv__log10_pow5(-e2) - strconv__bool_to_u32(-e2 > 1));
		e10 = (int)(((int)(q)) + e2);
		int i = (int)(-e2 - ((int)(q)));
		int k = (int)(strconv__pow5_bits(i) - 121);
		int j = (int)(((int)(q)) - k);
		strconv__Uint128 mul = *(((strconv__Uint128*)(&_const_strconv__pow5_split_64_x[v_fixed_index((int)(i * 2), 652)])));
		vr = strconv__mul_shift_64((u64)(((u64)(4U)) * m2), mul, j);
		vp = strconv__mul_shift_64((u64)((u64)(((u64)(4U)) * m2) + ((u64)(2U))), mul, j);
		vm = strconv__mul_shift_64((u64)((u64)((u64)(((u64)(4U)) * m2) - ((u64)(1U))) - mm_shift), mul, j);
		if (q <= 1U) {
			vr_is_trailing_zeros = true;
			if (accept_bounds) {
				vm_is_trailing_zeros = (mm_shift == 1U);
			} else {
				vp--;
			}
		} else if (q < 63U) {
			vr_is_trailing_zeros = strconv__multiple_of_power_of_two_64(mv, (u32)(q - 1U));
		}
	}
	int removed = 0;
	u8 last_removed_digit = ((u8)(0));
	u64 out = ((u64)(0U));
	if (vm_is_trailing_zeros || vr_is_trailing_zeros) {
		for (;;) {
			u64 vp_div_10 = (u64)(vp / 10U);
			u64 vm_div_10 = (u64)(vm / 10U);
			if (vp_div_10 <= vm_div_10) {
				break;
			}
			u64 vm_mod_10 = (u64)(vm % 10U);
			u64 vr_div_10 = (u64)(vr / 10U);
			u64 vr_mod_10 = (u64)(vr % 10U);
			vm_is_trailing_zeros = vm_is_trailing_zeros && vm_mod_10 == 0U;
			vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
			last_removed_digit = ((u8)(vr_mod_10));
			vr = vr_div_10;
			vp = vp_div_10;
			vm = vm_div_10;
			removed++;
		}
		if (vm_is_trailing_zeros) {
			for (;;) {
				u64 vm_div_10 = (u64)(vm / 10U);
				u64 vm_mod_10 = (u64)(vm % 10U);
				if (vm_mod_10 != 0U) {
					break;
				}
				u64 vp_div_10 = (u64)(vp / 10U);
				u64 vr_div_10 = (u64)(vr / 10U);
				u64 vr_mod_10 = (u64)(vr % 10U);
				vr_is_trailing_zeros = vr_is_trailing_zeros && last_removed_digit == 0;
				last_removed_digit = ((u8)(vr_mod_10));
				vr = vr_div_10;
				vp = vp_div_10;
				vm = vm_div_10;
				removed++;
			}
		}
		if (vr_is_trailing_zeros && last_removed_digit == 5 && ((u64)(vr % 2U)) == 0U) {
			last_removed_digit = 4;
		}
		out = vr;
		if ((vr == vm && (!accept_bounds || !vm_is_trailing_zeros)) || last_removed_digit >= 5) {
			out++;
		}
	} else {
		bool round_up = false;
		for (;;) {
			if (!((u64)(vp / 100U) > (u64)(vm / 100U))) break;
			round_up = ((u64)(vr % 100U)) >= 50U;
			vr /= 100U;
			vp /= 100U;
			vm /= 100U;
			removed += 2;
		}
		for (;;) {
			if (!((u64)(vp / 10U) > (u64)(vm / 10U))) break;
			round_up = ((u64)(vr % 10U)) >= 5U;
			vr /= 10U;
			vp /= 10U;
			vm /= 10U;
			removed++;
		}
		out = (u64)(vr + strconv__bool_to_u64(vr == vm || round_up));
	}
	return ((strconv__Dec64){.m = out,.e = (int)(e10 + removed),});
}
string strconv__f64_to_str(f64 f, int n_digit) {
	strconv__Uf64 u1 = ((strconv__Uf64){0});
	u1.f = f;
	u64 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits64 + _const_strconv__expbits64)))) != 0U;
	u64 mant = (u & ((u64)(((((u64)(1U)) << _const_strconv__mantbits64)) - ((u64)(1U)))));
	u64 exp = (((u >> _const_strconv__mantbits64)) & ((u64)(((((u64)(1U)) << _const_strconv__expbits64)) - ((u64)(1U)))));
	if (exp == 2047U || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec64_bool mr_9551 = strconv__f64_to_decimal_exact_int(mant, exp);
	strconv__Dec64 d = mr_9551.arg0;
	bool ok = mr_9551.arg1;
	if (!ok) {
		d = strconv__f64_to_decimal(mant, exp);
	}
	return strconv__Dec64_get_string_64(d, neg, n_digit, 0);
}
string strconv__f64_to_str_pad(f64 f, int n_digit) {
	strconv__Uf64 u1 = ((strconv__Uf64){0});
	u1.f = f;
	u64 u = u1.u;
	bool neg = ((u >> ((u32)(_const_strconv__mantbits64 + _const_strconv__expbits64)))) != 0U;
	u64 mant = (u & ((u64)(((((u64)(1U)) << _const_strconv__mantbits64)) - ((u64)(1U)))));
	u64 exp = (((u >> _const_strconv__mantbits64)) & ((u64)(((((u64)(1U)) << _const_strconv__expbits64)) - ((u64)(1U)))));
	if (exp == 2047U || (exp == 0U && mant == 0U)) {
		return strconv__get_string_special(neg, exp == 0U, mant == 0U);
	}
	multi_return_strconv__Dec64_bool mr_10332 = strconv__f64_to_decimal_exact_int(mant, exp);
	strconv__Dec64 d = mr_10332.arg0;
	bool ok = mr_10332.arg1;
	if (!ok) {
		d = strconv__f64_to_decimal(mant, exp);
	}
	return strconv__Dec64_get_string_64(d, neg, n_digit, n_digit);
}
string strconv__format_str(string s, strconv__BF_param p) {
	bool strconv__format_str_defer_0 = false;
	strings__Builder res;
	if (p.len0 <= 0) {
		return string_clone(s);
	}
	int dif = (int)(p.len0 - utf8_str_visible_length(s));
	if (dif <= 0) {
		return string_clone(s);
	}
	res = strings__new_builder((int)(s.len + dif));
	strconv__format_str_defer_0 = true;
	if (p.align == strconv__Align_text__right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(&res, p.pad_ch);
		}
	}
	strings__Builder_write_string(&res, s);
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(&res, p.pad_ch);
		}
	}
	string _t3 = strings__Builder_str(&res);
	// Defer begin
	if (strconv__format_str_defer_0) {
		strings__Builder_free(&res);
	}
	// Defer end
	return _t3;
}
void strconv__format_str_sb(string s, strconv__BF_param p, strings__Builder* sb) {
	if (p.len0 <= 0) {
		strings__Builder_write_string(sb, s);
		return;
	}
	int dif = (int)(p.len0 - utf8_str_visible_length(s));
	if (dif <= 0) {
		strings__Builder_write_string(sb, s);
		return;
	}
	if (p.align == strconv__Align_text__right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(sb, p.pad_ch);
		}
	}
	strings__Builder_write_string(sb, s);
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(sb, p.pad_ch);
		}
	}
}
void strconv__format_dec_sb(u64 d, strconv__BF_param p, strings__Builder* res) {
	int n_char = strconv__dec_digits(d);
	int sign_len = (!p.positive || p.sign_flag ? (1) : (0));
	int number_len = (int)(sign_len + n_char);
	int dif = (int)(p.len0 - number_len);
	bool sign_written = false;
	if (p.align == strconv__Align_text__right) {
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					strings__Builder_write_u8(res, '+');
					sign_written = true;
				}
			} else {
				strings__Builder_write_u8(res, '-');
				sign_written = true;
			}
		}
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(res, p.pad_ch);
		}
	}
	if (!sign_written) {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_u8(res, '+');
			}
		} else {
			strings__Builder_write_u8(res, '-');
		}
	}
	Array_fixed_u8_32 buf = {0};
	int i = 20;
	u64 n = d;
	u64 d_i = ((u64)(0U));
	if (n > 0U) {
		for (;;) {
			if (!(n > 0U)) break;
			u64 n1 = (u64)(n / 100U);
			d_i = (((u64)(n - ((u64)(n1 * 100U)))) << 1U);
			n = n1;
			{ // Unsafe block
				buf[i] = _const_strconv__digit_pairs.str[d_i];
			}
			i--;
			d_i++;
			{ // Unsafe block
				buf[i] = _const_strconv__digit_pairs.str[d_i];
			}
			i--;
		}
		i++;
		if (d_i < 20U) {
			i++;
		}
		strings__Builder_write_ptr(res, &buf[i], n_char);
	} else {
		strings__Builder_write_u8(res, '0');
	}
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(res, p.pad_ch);
		}
	}
	return;
}
string strconv__f64_to_str_lnd1(f64 f, int dec_digit) {
	{ // Unsafe block
		string s = strconv__f64_to_str((f64)(f + _const_strconv__dec_round[dec_digit]), 18);
		if (s.len > 2 && (s.str[ 0] == 'n' || s.str[ 1] == 'i')) {
			return s;
		}
		bool m_sgn_flag = false;
		int sgn = 1;
		Array_fixed_u8_26 b = {0};
		int d_pos = 1;
		int i = 0;
		int i1 = 0;
		int exp = 0;
		int exp_sgn = 1;
		int dot_res_sp = -1;
		for (int _t2 = 0; _t2 < s.len; ++_t2) {
			u8 c = s.str[_t2];

			if (c == ('-')) {
				sgn = -1;
				i++;
			}
			else if (c == ('+')) {
				sgn = 1;
				i++;
			}
			else if ((c >= '0' && c <= '9')) {
				b[i1] = c;
				i1++;
				i++;
			}
			else if (c == ('.')) {
				if (sgn > 0) {
					d_pos = i;
				} else {
					d_pos = (int)(i - 1);
				}
				i++;
			}
			else if (c == ('e')) {
				i++;
				break;
			}
			else {
				string_free(&s);
				return _S("[Float conversion error!!]");
			}
		}
		b[i1] = 0;
		if (s.str[ i] == '-') {
			exp_sgn = -1;
			i++;
		} else if (s.str[ i] == '+') {
			exp_sgn = 1;
			i++;
		}
		int c = i;
		for (;;) {
			if (!(c < s.len)) break;
			exp = (int)((int)(exp * 10) + ((int)((rune)(s.str[ c] - '0'))));
			c++;
		}
		Array_u8 res = __new_array_with_default_noscan((int)(exp + 40), 0, sizeof(u8), &(u8[]){0});
		int r_i = 0;
		string_free(&s);
		if (sgn == 1) {
			if (m_sgn_flag) {
				((u8*)res.data)[r_i] = '+';
				r_i++;
			}
		} else {
			((u8*)res.data)[r_i] = '-';
			r_i++;
		}
		i = 0;
		if (exp_sgn >= 0) {
			for (;;) {
				if (!(b[i] != 0)) break;
				((u8*)res.data)[r_i] = b[i];
				r_i++;
				i++;
				if (i >= d_pos && exp >= 0) {
					if (exp == 0) {
						dot_res_sp = r_i;
						((u8*)res.data)[r_i] = '.';
						r_i++;
					}
					exp--;
				}
			}
			for (;;) {
				if (!(exp >= 0)) break;
				((u8*)res.data)[r_i] = '0';
				r_i++;
				exp--;
			}
		} else {
			bool dot_p = true;
			for (;;) {
				if (!(exp > 0)) break;
				((u8*)res.data)[r_i] = '0';
				r_i++;
				exp--;
				if (dot_p) {
					dot_res_sp = r_i;
					((u8*)res.data)[r_i] = '.';
					r_i++;
					dot_p = false;
				}
			}
			for (;;) {
				if (!(b[i] != 0)) break;
				((u8*)res.data)[r_i] = b[i];
				r_i++;
				i++;
			}
		}
		if (dec_digit <= 0) {
			if (dot_res_sp < 0) {
				dot_res_sp = (int)(i + 1);
			}
			string tmp_res = string_clone(tos(res.data, dot_res_sp));
			array_free(&res);
			return tmp_res;
		}
		if (dot_res_sp >= 0) {
			r_i = (int)((int)(dot_res_sp + dec_digit) + 1);
			((u8*)res.data)[r_i] = 0;
			for (int c1 = 1; c1 < (int)(dec_digit + 1); ++c1) {
				if (((u8*)res.data)[(int)(r_i - c1)] == 0) {
					((u8*)res.data)[(int)(r_i - c1)] = '0';
				}
			}
			string tmp_res = string_clone(tos(res.data, r_i));
			array_free(&res);
			return tmp_res;
		} else {
			if (dec_digit > 0) {
				int c1 = 0;
				((u8*)res.data)[r_i] = '.';
				r_i++;
				for (;;) {
					if (!(c1 < dec_digit)) break;
					((u8*)res.data)[r_i] = '0';
					r_i++;
					c1++;
				}
				((u8*)res.data)[r_i] = 0;
			}
			string tmp_res = string_clone(tos(res.data, r_i));
			array_free(&res);
			return tmp_res;
		}
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string strconv__format_fl(f64 f, strconv__BF_param p) {
	{ // Unsafe block
		string fs = strconv__f64_to_str_lnd1((f >= ((f64)(0.0)) ? (f) : (-f)), p.len1);
		if (fs.str[ 0] == '[') {
			return fs;
		}
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros(fs);
			string_free(&tmp);
		}
		Array_fixed_u8_512 buf = {0};
		Array_fixed_u8_512 out = {0};
		int buf_i = 0;
		int out_i = 0;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					out[out_i] = '+';
					out_i++;
					sign_len_diff = -1;
				}
			} else {
				out[out_i] = '-';
				out_i++;
				sign_len_diff = -1;
			}
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					buf[buf_i] = '+';
					buf_i++;
				}
			} else {
				buf[buf_i] = '-';
				buf_i++;
			}
		}
		vmemcpy(&buf[buf_i], fs.str, fs.len);
		buf_i += fs.len;
		int dif = (int)((int)(p.len0 - buf_i) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		vmemcpy(&out[out_i], &buf[0], buf_i);
		out_i += buf_i;
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		out[out_i] = 0;
		string tmp = fs;
		fs = tos_clone(&out[0]);
		string_free(&tmp);
		return fs;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string strconv__format_es(f64 f, strconv__BF_param p) {
	{ // Unsafe block
		string fs = strconv__f64_to_str_pad((f > 0 ? (f) : (-f)), p.len1);
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros(fs);
			string_free(&tmp);
		}
		Array_fixed_u8_512 buf = {0};
		Array_fixed_u8_512 out = {0};
		int buf_i = 0;
		int out_i = 0;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					out[out_i] = '+';
					out_i++;
					sign_len_diff = -1;
				}
			} else {
				out[out_i] = '-';
				out_i++;
				sign_len_diff = -1;
			}
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					buf[buf_i] = '+';
					buf_i++;
				}
			} else {
				buf[buf_i] = '-';
				buf_i++;
			}
		}
		vmemcpy(&buf[buf_i], fs.str, fs.len);
		buf_i += fs.len;
		int dif = (int)((int)(p.len0 - buf_i) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		vmemcpy(&out[out_i], &buf[0], buf_i);
		out_i += buf_i;
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				out[out_i] = p.pad_ch;
				out_i++;
			}
		}
		out[out_i] = 0;
		string tmp = fs;
		fs = tos_clone(&out[0]);
		string_free(&tmp);
		return fs;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string strconv__remove_tail_zeros(string s) {
	{ // Unsafe block
		u8* buf = malloc_noscan((int)(s.len + 1));
		int i_d = 0;
		int i_s = 0;
		for (;;) {
			if (!(i_s < s.len && !(s.str[ i_s] == '-' || s.str[ i_s] == '+') && (s.str[ i_s] > '9' || s.str[ i_s] < '0'))) break;
			buf[i_d] = s.str[ i_s];
			i_s++;
			i_d++;
		}
		if (i_s < s.len && (s.str[ i_s] == '-' || s.str[ i_s] == '+')) {
			buf[i_d] = s.str[ i_s];
			i_s++;
			i_d++;
		}
		for (;;) {
			if (!(i_s < s.len && s.str[ i_s] >= '0' && s.str[ i_s] <= '9')) break;
			buf[i_d] = s.str[ i_s];
			i_s++;
			i_d++;
		}
		if (i_s < s.len && s.str[ i_s] == '.') {
			int i_s1 = (int)(i_s + 1);
			int sum = 0;
			int i_s2 = i_s1;
			for (;;) {
				if (!(i_s1 < s.len && s.str[ i_s1] >= '0' && s.str[ i_s1] <= '9')) break;
				sum += (u8)(s.str[ i_s1] - ((u8)('0')));
				if (s.str[ i_s1] != '0') {
					i_s2 = i_s1;
				}
				i_s1++;
			}
			if (sum > 0) {
				for (int c_i = i_s; c_i < (int)(i_s2 + 1); ++c_i) {
					buf[i_d] = s.str[ c_i];
					i_d++;
				}
			}
			i_s = i_s1;
		}
		if (i_s < s.len && s.str[ i_s] != '.') {
			for (;;) {
				buf[i_d] = s.str[ i_s];
				i_s++;
				i_d++;
				if (i_s >= s.len) {
					break;
				}
			}
		}
		buf[i_d] = 0;
		return tos(buf, i_d);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string strconv__ftoa_64(f64 f) {
	return strconv__f64_to_str(f, 17);
}
inline string strconv__ftoa_32(f32 f) {
	return strconv__f32_to_str(f, 8);
}
string strconv__format_int(i64 n, int radix) {
	{ // Unsafe block
		if (radix < 2 || radix > 36) {
			panic_n(_S("invalid radix, it should be => 2 and <= 36, actual:"), radix);
			VUNREACHABLE();
		}
		if (n == 0) {
			return _S("0");
		}
		i64 n_copy = n;
		bool have_minus = false;
		if (n < 0) {
			have_minus = true;
			n_copy = -n_copy;
		}
		string res = _S("");
		for (;;) {
			if (!(n_copy != 0)) break;
			string tmp_0 = res;
			int bdx = ((int)((i64)(n_copy % radix)));
			string tmp_1 = u8_ascii_str(_const_strconv__base_digits.str[ bdx]);
			res = string__plus(tmp_1, res);
			string_free(&tmp_0);
			string_free(&tmp_1);
			n_copy /= radix;
		}
		if (have_minus) {
			string final_res = string__plus(_S("-"), res);
			string_free(&res);
			return final_res;
		}
		return res;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string strconv__format_uint(u64 n, int radix) {
	{ // Unsafe block
		if (radix < 2 || radix > 36) {
			panic_n(_S("invalid radix, it should be => 2 and <= 36, actual:"), radix);
			VUNREACHABLE();
		}
		if (n == 0U) {
			return _S("0");
		}
		u64 n_copy = n;
		string res = _S("");
		u64 uradix = ((u64)(radix));
		for (;;) {
			if (!(n_copy != 0U)) break;
			string tmp_0 = res;
			string tmp_1 = u8_ascii_str(_const_strconv__base_digits.str[ (u64)(n_copy % uradix)]);
			res = string__plus(tmp_1, res);
			string_free(&tmp_0);
			string_free(&tmp_1);
			n_copy /= uradix;
		}
		return res;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string strconv__f32_to_str_l(f32 f) {
	string s = strconv__f32_to_str(f, 6);
	string res = strconv__fxx_to_str_l_parse(s);
	string_free(&s);
	return res;
}
string strconv__f32_to_str_l_with_dot(f32 f) {
	string s = strconv__f32_to_str(f, 6);
	string res = strconv__fxx_to_str_l_parse_with_dot(s);
	string_free(&s);
	return res;
}
string strconv__f64_to_str_l(f64 f) {
	string s = strconv__f64_to_str(f, 18);
	string res = strconv__fxx_to_str_l_parse(s);
	string_free(&s);
	return res;
}
string strconv__f64_to_str_l_with_dot(f64 f) {
	string s = strconv__f64_to_str(f, 18);
	string res = strconv__fxx_to_str_l_parse_with_dot(s);
	string_free(&s);
	return res;
}
string strconv__fxx_to_str_l_parse(string s) {
	if (s.len > 2 && (s.str[ 0] == 'n' || s.str[ 1] == 'i')) {
		return string_clone(s);
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	Array_fixed_u8_26 b = {0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 c = s.str[_t2];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1] = c;
			i1++;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = (int)(i - 1);
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return _S("Float conversion error!!");
		}
	}
	b[i1] = 0;
	if (s.str[ i] == '-') {
		exp_sgn = -1;
		i++;
	} else if (s.str[ i] == '+') {
		exp_sgn = 1;
		i++;
	}
	int c = i;
	for (;;) {
		if (!(c < s.len)) break;
		exp = (int)((int)(exp * 10) + ((int)((rune)(s.str[ c] - '0'))));
		c++;
	}
	Array_u8 res = __new_array_with_default_noscan((int)(exp + 32), 0, sizeof(u8), &(u8[]){0});
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			((u8*)res.data)[r_i] = '+';
			r_i++;
		}
	} else {
		((u8*)res.data)[r_i] = '-';
		r_i++;
	}
	i = 0;
	if (exp_sgn >= 0) {
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					((u8*)res.data)[r_i] = '.';
					r_i++;
				}
				exp--;
			}
		}
		for (;;) {
			if (!(exp >= 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
		}
	} else {
		bool dot_p = true;
		for (;;) {
			if (!(exp > 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
			if (dot_p) {
				((u8*)res.data)[r_i] = '.';
				r_i++;
				dot_p = false;
			}
		}
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
		}
	}
	if (r_i > 1 && ((u8*)res.data)[(int)(r_i - 1)] == '.') {
		((u8*)res.data)[r_i] = '0';
		r_i++;
	} else if (!(Array_u8_contains(res, '.'))) {
		((u8*)res.data)[r_i] = '.';
		r_i++;
		((u8*)res.data)[r_i] = '0';
		r_i++;
	}
	((u8*)res.data)[r_i] = 0;
	return tos(res.data, r_i);
}
string strconv__fxx_to_str_l_parse_with_dot(string s) {
	if (s.len > 2 && (s.str[ 0] == 'n' || s.str[ 1] == 'i')) {
		return string_clone(s);
	}
	bool m_sgn_flag = false;
	int sgn = 1;
	Array_fixed_u8_26 b = {0};
	int d_pos = 1;
	int i = 0;
	int i1 = 0;
	int exp = 0;
	int exp_sgn = 1;
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 c = s.str[_t2];
		if (c == '-') {
			sgn = -1;
			i++;
		} else if (c == '+') {
			sgn = 1;
			i++;
		} else if (c >= '0' && c <= '9') {
			b[i1] = c;
			i1++;
			i++;
		} else if (c == '.') {
			if (sgn > 0) {
				d_pos = i;
			} else {
				d_pos = (int)(i - 1);
			}
			i++;
		} else if (c == 'e') {
			i++;
			break;
		} else {
			return _S("Float conversion error!!");
		}
	}
	b[i1] = 0;
	if (s.str[ i] == '-') {
		exp_sgn = -1;
		i++;
	} else if (s.str[ i] == '+') {
		exp_sgn = 1;
		i++;
	}
	int c = i;
	for (;;) {
		if (!(c < s.len)) break;
		exp = (int)((int)(exp * 10) + ((int)((rune)(s.str[ c] - '0'))));
		c++;
	}
	Array_u8 res = __new_array_with_default_noscan((int)(exp + 32), 0, sizeof(u8), &(u8[]){0});
	int r_i = 0;
	if (sgn == 1) {
		if (m_sgn_flag) {
			((u8*)res.data)[r_i] = '+';
			r_i++;
		}
	} else {
		((u8*)res.data)[r_i] = '-';
		r_i++;
	}
	i = 0;
	if (exp_sgn >= 0) {
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
			if (i >= d_pos && exp >= 0) {
				if (exp == 0) {
					((u8*)res.data)[r_i] = '.';
					r_i++;
				}
				exp--;
			}
		}
		for (;;) {
			if (!(exp >= 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
		}
	} else {
		bool dot_p = true;
		for (;;) {
			if (!(exp > 0)) break;
			((u8*)res.data)[r_i] = '0';
			r_i++;
			exp--;
			if (dot_p) {
				((u8*)res.data)[r_i] = '.';
				r_i++;
				dot_p = false;
			}
		}
		for (;;) {
			if (!(b[i] != 0)) break;
			((u8*)res.data)[r_i] = b[i];
			r_i++;
			i++;
		}
	}
	if (r_i > 1 && ((u8*)res.data)[(int)(r_i - 1)] == '.') {
		((u8*)res.data)[r_i] = '0';
		r_i++;
	} else if (!(Array_u8_contains(res, '.'))) {
		((u8*)res.data)[r_i] = '.';
		r_i++;
		((u8*)res.data)[r_i] = '0';
		r_i++;
	}
	((u8*)res.data)[r_i] = 0;
	return tos(res.data, r_i);
}
inline VV_LOC u32 strconv__bool_to_u32(bool b) {
	if (b) {
		return ((u32)(1U));
	}
	return ((u32)(0U));
}
inline VV_LOC u64 strconv__bool_to_u64(bool b) {
	if (b) {
		return ((u64)(1U));
	}
	return ((u64)(0U));
}
VV_LOC string strconv__get_string_special(bool neg, bool expZero, bool mantZero) {
	if (!mantZero) {
		return _S("nan");
	}
	if (!expZero) {
		if (neg) {
			return _S("-inf");
		} else {
			return _S("+inf");
		}
	}
	if (neg) {
		return _S("-0e+00");
	}
	return _S("0e+00");
}
VV_LOC u32 strconv__mul_shift_32(u32 m, u64 mul, int ishift) {
	multi_return_u64_u64 mr_750 = math__bits__mul_64(((u64)(m)), mul);
	u64 hi = mr_750.arg0;
	u64 lo = mr_750.arg1;
	u64 shifted_sum = (u64)(((lo >> ((u64)(ishift)))) + ((hi << ((u64)((int)(64 - ishift))))));
	;
	return ((u32)(shifted_sum));
}
inline VV_LOC u32 strconv__mul_pow5_invdiv_pow2(u32 m, u32 q, int j) {
	;
	return strconv__mul_shift_32(m, _const_strconv__pow5_inv_split_32[q], j);
}
inline VV_LOC u32 strconv__mul_pow5_div_pow2(u32 m, u32 i, int j) {
	;
	return strconv__mul_shift_32(m, _const_strconv__pow5_split_32[i], j);
}
VV_LOC u32 strconv__pow5_factor_32(u32 i_v) {
	u32 v = i_v;
	for (u32 n = ((u32)(0U)); true; n++) {
		u32 q = (u32)(v / 5U);
		u32 r = (u32)(v % 5U);
		if (r != 0U) {
			return n;
		}
		v = q;
	}
	return v;
}
VV_LOC bool strconv__multiple_of_power_of_five_32(u32 v, u32 p) {
	return strconv__pow5_factor_32(v) >= p;
}
VV_LOC bool strconv__multiple_of_power_of_two_32(u32 v, u32 p) {
	return ((u32)(math__bits__trailing_zeros_32(v))) >= p;
}
VV_LOC u32 strconv__log10_pow2(int e) {
	;
	;
	return (((u32)(((u32)(e)) * 78913U)) >> 18U);
}
VV_LOC u32 strconv__log10_pow5(int e) {
	;
	;
	return (((u32)(((u32)(e)) * 732923U)) >> 20U);
}
VV_LOC int strconv__pow5_bits(int e) {
	;
	;
	return ((int)((u32)(((((u32)(((u32)(e)) * 1217359U)) >> 19U)) + 1U)));
}
VV_LOC u64 strconv__shift_right_128(strconv__Uint128 v, int shift) {
	;
	return (((v.hi << ((u64)((int)(64 - shift))))) | ((v.lo >> ((u32)(shift)))));
}
VV_LOC u64 strconv__mul_shift_64(u64 m, strconv__Uint128 mul, int shift) {
	multi_return_u64_u64 mr_3253 = math__bits__mul_64(m, mul.hi);
	u64 hihi = mr_3253.arg0;
	u64 hilo = mr_3253.arg1;
	multi_return_u64_u64 mr_3288 = math__bits__mul_64(m, mul.lo);
	u64 lohi = mr_3288.arg0;
	strconv__Uint128 sum = ((strconv__Uint128){.lo = (u64)(lohi + hilo),.hi = hihi,});
	if (sum.lo < lohi) {
		sum.hi++;
	}
	return strconv__shift_right_128(sum, (int)(shift - 64));
}
VV_LOC u32 strconv__pow5_factor_64(u64 v_i) {
	u64 v = v_i;
	for (u32 n = ((u32)(0U)); true; n++) {
		u64 q = (u64)(v / 5U);
		u64 r = (u64)(v % 5U);
		if (r != 0U) {
			return n;
		}
		v = q;
	}
	return ((u32)(0U));
}
VV_LOC bool strconv__multiple_of_power_of_five_64(u64 v, u32 p) {
	return strconv__pow5_factor_64(v) >= p;
}
VV_LOC bool strconv__multiple_of_power_of_two_64(u64 v, u32 p) {
	return ((u32)(math__bits__trailing_zeros_64(v))) >= p;
}
int strconv__dec_digits(u64 n) {
	if (n <= 9999999999U) {
		if (n <= 99999U) {
			if (n <= 99U) {
				if (n <= 9U) {
					return 1;
				} else {
					return 2;
				}
			} else {
				if (n <= 999U) {
					return 3;
				} else {
					if (n <= 9999U) {
						return 4;
					} else {
						return 5;
					}
				}
			}
		} else {
			if (n <= 9999999U) {
				if (n <= 999999U) {
					return 6;
				} else {
					return 7;
				}
			} else {
				if (n <= 99999999U) {
					return 8;
				} else {
					if (n <= 999999999U) {
						return 9;
					}
					return 10;
				}
			}
		}
	} else {
		if (n <= 999999999999999U) {
			if (n <= 999999999999U) {
				if (n <= 99999999999U) {
					return 11;
				} else {
					return 12;
				}
			} else {
				if (n <= 9999999999999U) {
					return 13;
				} else {
					if (n <= 99999999999999U) {
						return 14;
					} else {
						return 15;
					}
				}
			}
		} else {
			if (n <= 99999999999999999U) {
				if (n <= 9999999999999999U) {
					return 16;
				} else {
					return 17;
				}
			} else {
				if (n <= 999999999999999999U) {
					return 18;
				} else {
					if (n <= 9999999999999999999U) {
						return 19;
					}
					return 20;
				}
			}
		}
	}
	return 0;
}
void strconv__v_printf(string str, Array_voidptr pt) {
	print(strconv__v_sprintf(str, pt));
}
string strconv__v_sprintf(string str, Array_voidptr pt) {
	bool strconv__v_sprintf_defer_0 = false;
	strings__Builder res;
	res = strings__new_builder((int)(pt.len * 16));
	strconv__v_sprintf_defer_0 = true;
	int i = 0;
	int p_index = 0;
	bool sign = false;
	strconv__Align_text align = strconv__Align_text__right;
	int len0 = -1;
	int len1 = -1;
	int def_len1 = 6;
	u8 pad_ch = ((u8)(' '));
	rune ch1 = '0';
	rune ch2 = '0';
	strconv__Char_parse_state status = strconv__Char_parse_state__norm_char;
	for (;;) {
		if (!(i < str.len)) break;
		if (status == strconv__Char_parse_state__reset_params) {
			sign = false;
			align = strconv__Align_text__right;
			len0 = -1;
			len1 = -1;
			pad_ch = ' ';
			status = strconv__Char_parse_state__norm_char;
			ch1 = '0';
			ch2 = '0';
			continue;
		}
		u8 ch = str.str[ i];
		if (ch != '%' && status == strconv__Char_parse_state__norm_char) {
			strings__Builder_write_u8(&res, ch);
			i++;
			continue;
		}
		if (ch == '%' && status == strconv__Char_parse_state__field_char) {
			status = strconv__Char_parse_state__norm_char;
			strings__Builder_write_u8(&res, ch);
			i++;
			continue;
		}
		if (ch == '%' && status == strconv__Char_parse_state__norm_char) {
			status = strconv__Char_parse_state__field_char;
			i++;
			continue;
		}
		if (ch == 'c' && status == strconv__Char_parse_state__field_char) {
			strconv__v_sprintf_panic(p_index, pt.len);
			u8 d1 = *(((u8*)(((voidptr*)pt.data)[p_index])));
			strings__Builder_write_u8(&res, d1);
			status = strconv__Char_parse_state__reset_params;
			p_index++;
			i++;
			continue;
		}
		if (ch == 'p' && status == strconv__Char_parse_state__field_char) {
			strconv__v_sprintf_panic(p_index, pt.len);
			strings__Builder_write_string(&res, _S("0x"));
			strings__Builder_write_string(&res, ptr_str(((voidptr*)pt.data)[p_index]));
			status = strconv__Char_parse_state__reset_params;
			p_index++;
			i++;
			continue;
		}
		if (status == strconv__Char_parse_state__field_char) {
			rune fc_ch1 = '0';
			rune fc_ch2 = '0';
			if (((int)(i + 1)) < str.len) {
				fc_ch1 = str.str[ (int)(i + 1)];
				if (((int)(i + 2)) < str.len) {
					fc_ch2 = str.str[ (int)(i + 2)];
				}
			}
			if (ch == '+') {
				sign = true;
				i++;
				continue;
			} else if (ch == '-') {
				align = strconv__Align_text__left;
				i++;
				continue;
			} else if (ch == '0' || ch == ' ') {
				if (align == strconv__Align_text__right) {
					pad_ch = ch;
				}
				i++;
				continue;
			} else if (ch == '\'') {
				i++;
				continue;
			} else if (ch == '.' && fc_ch1 >= '1' && fc_ch1 <= '9') {
				status = strconv__Char_parse_state__check_float;
				i++;
				continue;
			} else if (ch == '.' && fc_ch1 == '*' && fc_ch2 == 's') {
				strconv__v_sprintf_panic(p_index, pt.len);
				int len = *(((int*)(((voidptr*)pt.data)[p_index])));
				p_index++;
				strconv__v_sprintf_panic(p_index, pt.len);
				string s = *(((string*)(((voidptr*)pt.data)[p_index])));
				s = string_substr(s, 0, len);
				p_index++;
				strings__Builder_write_string(&res, s);
				status = strconv__Char_parse_state__reset_params;
				i += 3;
				continue;
			}
			status = strconv__Char_parse_state__len_set_start;
			continue;
		}
		if (status == strconv__Char_parse_state__len_set_start) {
			if (ch >= '1' && ch <= '9') {
				len0 = ((int)((rune)(ch - '0')));
				status = strconv__Char_parse_state__len_set_in;
				i++;
				continue;
			}
			if (ch == '.') {
				status = strconv__Char_parse_state__check_float;
				i++;
				continue;
			}
			status = strconv__Char_parse_state__check_type;
			continue;
		}
		if (status == strconv__Char_parse_state__len_set_in) {
			if (ch >= '0' && ch <= '9') {
				len0 *= 10;
				len0 += ((int)((rune)(ch - '0')));
				i++;
				continue;
			}
			if (ch == '.') {
				status = strconv__Char_parse_state__check_float;
				i++;
				continue;
			}
			status = strconv__Char_parse_state__check_type;
			continue;
		}
		if (status == strconv__Char_parse_state__check_float) {
			if (ch >= '0' && ch <= '9') {
				len1 = ((int)((rune)(ch - '0')));
				status = strconv__Char_parse_state__check_float_in;
				i++;
				continue;
			}
			status = strconv__Char_parse_state__check_type;
			continue;
		}
		if (status == strconv__Char_parse_state__check_float_in) {
			if (ch >= '0' && ch <= '9') {
				len1 *= 10;
				len1 += ((int)((rune)(ch - '0')));
				i++;
				continue;
			}
			status = strconv__Char_parse_state__check_type;
			continue;
		}
		if (status == strconv__Char_parse_state__check_type) {
			if (ch == 'l') {
				if (ch1 == '0') {
					ch1 = 'l';
					i++;
					continue;
				} else {
					ch2 = 'l';
					i++;
					continue;
				}
			} else if (ch == 'h') {
				if (ch1 == '0') {
					ch1 = 'h';
					i++;
					continue;
				} else {
					ch2 = 'h';
					i++;
					continue;
				}
			} else if (ch == 'd' || ch == 'i') {
				u64 d1 = ((u64)(0U));
				bool positive = true;

				if (ch1 == ('h')) {
					if (ch2 == 'h') {
						strconv__v_sprintf_panic(p_index, pt.len);
						i8 x = *(((i8*)(((voidptr*)pt.data)[p_index])));
						positive = (x >= 0 ? (true) : (false));
						d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
					} else {
						i16 x = *(((i16*)(((voidptr*)pt.data)[p_index])));
						positive = (x >= 0 ? (true) : (false));
						d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
					}
				}
				else if (ch1 == ('l')) {
					strconv__v_sprintf_panic(p_index, pt.len);
					i64 x = *(((i64*)(((voidptr*)pt.data)[p_index])));
					positive = (x >= 0 ? (true) : (false));
					d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
				}
				else {
					strconv__v_sprintf_panic(p_index, pt.len);
					int x = *(((int*)(((voidptr*)pt.data)[p_index])));
					positive = (x >= 0 ? (true) : (false));
					d1 = (positive ? (((u64)(x))) : (((u64)(-x))));
				}
				string tmp = strconv__format_dec_old(d1, ((strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = positive,
					.sign_flag = sign,
					.align = align,
					.rm_tail_zero = 0,
				}));
				strings__Builder_write_string(&res, tmp);
				string_free(&tmp);
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				ch1 = '0';
				ch2 = '0';
				continue;
			} else if (ch == 'u') {
				u64 d1 = ((u64)(0U));
				bool positive = true;
				strconv__v_sprintf_panic(p_index, pt.len);

				if (ch1 == ('h')) {
					if (ch2 == 'h') {
						d1 = ((u64)(*(((u8*)(((voidptr*)pt.data)[p_index])))));
					} else {
						d1 = ((u64)(*(((u16*)(((voidptr*)pt.data)[p_index])))));
					}
				}
				else if (ch1 == ('l')) {
					d1 = ((u64)(*(((u64*)(((voidptr*)pt.data)[p_index])))));
				}
				else {
					d1 = ((u64)(*(((u32*)(((voidptr*)pt.data)[p_index])))));
				}
				string tmp = strconv__format_dec_old(d1, ((strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = positive,
					.sign_flag = sign,
					.align = align,
					.rm_tail_zero = 0,
				}));
				strings__Builder_write_string(&res, tmp);
				string_free(&tmp);
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 'x' || ch == 'X') {
				strconv__v_sprintf_panic(p_index, pt.len);
				string s = _S("");

				if (ch1 == ('h')) {
					if (ch2 == 'h') {
						i8 x = *(((i8*)(((voidptr*)pt.data)[p_index])));
						s = i8_hex(x);
					} else {
						i16 x = *(((i16*)(((voidptr*)pt.data)[p_index])));
						s = i16_hex(x);
					}
				}
				else if (ch1 == ('l')) {
					i64 x = *(((i64*)(((voidptr*)pt.data)[p_index])));
					s = i64_hex(x);
				}
				else {
					int x = *(((int*)(((voidptr*)pt.data)[p_index])));
					s = int_hex(x);
				}
				if (ch == 'X') {
					string tmp = s;
					s = string_to_upper(s);
					string_free(&tmp);
				}
				string tmp = strconv__format_str(s, ((strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = true,
					.sign_flag = false,
					.align = align,
					.rm_tail_zero = 0,
				}));
				strings__Builder_write_string(&res, tmp);
				string_free(&tmp);
				string_free(&s);
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			}
			if (ch == 'f' || ch == 'F') {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					strconv__v_sprintf_panic(p_index, pt.len);
					f64 x = *(((f64*)(((voidptr*)pt.data)[p_index])));
					bool positive = x >= ((f64)(0.0));
					len1 = (len1 >= 0 ? (len1) : (def_len1));
					string s = strconv__format_fl_old(((f64)(x)), ((strconv__BF_param){
						.pad_ch = pad_ch,
						.len0 = len0,
						.len1 = len1,
						.positive = positive,
						.sign_flag = sign,
						.align = align,
						.rm_tail_zero = 0,
					}));
					if (ch == 'F') {
						string tmp = string_to_upper(s);
						strings__Builder_write_string(&res, tmp);
						string_free(&tmp);
					} else {
						strings__Builder_write_string(&res, s);
					}
					string_free(&s);
				}
				#endif
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 'e' || ch == 'E') {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					strconv__v_sprintf_panic(p_index, pt.len);
					f64 x = *(((f64*)(((voidptr*)pt.data)[p_index])));
					bool positive = x >= ((f64)(0.0));
					len1 = (len1 >= 0 ? (len1) : (def_len1));
					string s = strconv__format_es_old(((f64)(x)), ((strconv__BF_param){
						.pad_ch = pad_ch,
						.len0 = len0,
						.len1 = len1,
						.positive = positive,
						.sign_flag = sign,
						.align = align,
						.rm_tail_zero = 0,
					}));
					if (ch == 'E') {
						string tmp = string_to_upper(s);
						strings__Builder_write_string(&res, tmp);
						string_free(&tmp);
					} else {
						strings__Builder_write_string(&res, s);
					}
					string_free(&s);
				}
				#endif
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 'g' || ch == 'G') {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					strconv__v_sprintf_panic(p_index, pt.len);
					f64 x = *(((f64*)(((voidptr*)pt.data)[p_index])));
					bool positive = x >= ((f64)(0.0));
					string s = _S("");
					f64 tx = strconv__fabs(x);
					if (tx < ((f64)(999999.0)) && tx >= ((f64)(0.00001))) {
						len1 = (len1 >= 0 ? ((int)(len1 + 1)) : (def_len1));
						string tmp = s;
						s = strconv__format_fl_old(x, ((strconv__BF_param){
							.pad_ch = pad_ch,
							.len0 = len0,
							.len1 = len1,
							.positive = positive,
							.sign_flag = sign,
							.align = align,
							.rm_tail_zero = true,
						}));
						string_free(&tmp);
					} else {
						len1 = (len1 >= 0 ? ((int)(len1 + 1)) : (def_len1));
						string tmp = s;
						s = strconv__format_es_old(x, ((strconv__BF_param){
							.pad_ch = pad_ch,
							.len0 = len0,
							.len1 = len1,
							.positive = positive,
							.sign_flag = sign,
							.align = align,
							.rm_tail_zero = true,
						}));
						string_free(&tmp);
					}
					if (ch == 'G') {
						string tmp = string_to_upper(s);
						strings__Builder_write_string(&res, tmp);
						string_free(&tmp);
					} else {
						strings__Builder_write_string(&res, s);
					}
					string_free(&s);
				}
				#endif
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			} else if (ch == 's') {
				strconv__v_sprintf_panic(p_index, pt.len);
				string s1 = *(((string*)(((voidptr*)pt.data)[p_index])));
				pad_ch = ' ';
				string tmp = strconv__format_str(s1, ((strconv__BF_param){
					.pad_ch = pad_ch,
					.len0 = len0,
					.len1 = 0,
					.positive = true,
					.sign_flag = false,
					.align = align,
					.rm_tail_zero = 0,
				}));
				strings__Builder_write_string(&res, tmp);
				string_free(&tmp);
				status = strconv__Char_parse_state__reset_params;
				p_index++;
				i++;
				continue;
			}
		}
		status = strconv__Char_parse_state__reset_params;
		p_index++;
		i++;
	}
	if (p_index != pt.len) {
		panic_n2(_S("% conversion specifiers number mismatch (expected %, given args)"), p_index, pt.len);
		VUNREACHABLE();
	}
	string _t4 = strings__Builder_str(&res);
	// Defer begin
	if (strconv__v_sprintf_defer_0) {
		strings__Builder_free(&res);
	}
	// Defer end
	return _t4;
}
inline VV_LOC void strconv__v_sprintf_panic(int idx, int len) {
	if (idx >= len) {
		panic_n2(_S("% conversion specifiers number mismatch (expected %, given args)"), (int)(idx + 1), len);
		VUNREACHABLE();
	}
}
VV_LOC f64 strconv__fabs(f64 x) {
	if (x < ((f64)(0.0))) {
		return -x;
	}
	return x;
}
string strconv__format_fl_old(f64 f, strconv__BF_param p) {
	bool strconv__format_fl_old_defer_0 = false;
	strings__Builder res;
	{ // Unsafe block
		string s = _S("");
		string fs = strconv__f64_to_str_lnd1((f >= ((f64)(0.0)) ? (f) : (-f)), p.len1);
		if (fs.str[ 0] == '[') {
			string_free(&s);
			return fs;
		}
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros_old(fs);
			string_free(&tmp);
		}
		res = strings__new_builder((p.len0 > fs.len ? (p.len0) : (fs.len)));
		strconv__format_fl_old_defer_0 = true;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					strings__Builder_write_u8(&res, '+');
					sign_len_diff = -1;
				}
			} else {
				strings__Builder_write_u8(&res, '-');
				sign_len_diff = -1;
			}
			string tmp = s;
			s = string_clone(fs);
			string_free(&tmp);
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					string tmp = s;
					s = string__plus(_S("+"), fs);
					string_free(&tmp);
				} else {
					string tmp = s;
					s = string_clone(fs);
					string_free(&tmp);
				}
			} else {
				string tmp = s;
				s = string__plus(_S("-"), fs);
				string_free(&tmp);
			}
		}
		int dif = (int)((int)(p.len0 - s.len) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				strings__Builder_write_u8(&res, p.pad_ch);
			}
		}
		strings__Builder_write_string(&res, s);
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				strings__Builder_write_u8(&res, p.pad_ch);
			}
		}
		string_free(&s);
		string_free(&fs);
		string _t2 = strings__Builder_str(&res);
		// Defer begin
		if (strconv__format_fl_old_defer_0) {
			strings__Builder_free(&res);
		}
		// Defer end
		return _t2;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
VV_LOC string strconv__format_es_old(f64 f, strconv__BF_param p) {
	bool strconv__format_es_old_defer_0 = false;
	strings__Builder res;
	string fs;
	string s;
	{ // Unsafe block
		s = _S("");
		fs = strconv__f64_to_str_pad((f > 0 ? (f) : (-f)), p.len1);
		if (p.rm_tail_zero) {
			string tmp = fs;
			fs = strconv__remove_tail_zeros_old(fs);
			string_free(&tmp);
		}
		res = strings__new_builder((p.len0 > fs.len ? (p.len0) : (fs.len)));
		strconv__format_es_old_defer_0 = true;
		int sign_len_diff = 0;
		if (p.pad_ch == '0') {
			if (p.positive) {
				if (p.sign_flag) {
					strings__Builder_write_u8(&res, '+');
					sign_len_diff = -1;
				}
			} else {
				strings__Builder_write_u8(&res, '-');
				sign_len_diff = -1;
			}
			string tmp = s;
			s = string_clone(fs);
			string_free(&tmp);
		} else {
			if (p.positive) {
				if (p.sign_flag) {
					string tmp = s;
					s = string__plus(_S("+"), fs);
					string_free(&tmp);
				} else {
					string tmp = s;
					s = string_clone(fs);
					string_free(&tmp);
				}
			} else {
				string tmp = s;
				s = string__plus(_S("-"), fs);
				string_free(&tmp);
			}
		}
		int dif = (int)((int)(p.len0 - s.len) + sign_len_diff);
		if (p.align == strconv__Align_text__right) {
			for (int i1 = 0; i1 < dif; i1++) {
				strings__Builder_write_u8(&res, p.pad_ch);
			}
		}
		strings__Builder_write_string(&res, s);
		if (p.align == strconv__Align_text__left) {
			for (int i1 = 0; i1 < dif; i1++) {
				strings__Builder_write_u8(&res, p.pad_ch);
			}
		}
		string _t1 = strings__Builder_str(&res);
		// Defer begin
		if (strconv__format_es_old_defer_0) {
			strings__Builder_free(&res);
			string_free(&fs);
			string_free(&s);
		}
		// Defer end
		return _t1;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
VV_LOC string strconv__remove_tail_zeros_old(string s) {
	int i = 0;
	int last_zero_start = -1;
	int dot_pos = -1;
	bool in_decimal = false;
	u8 prev_ch = ((u8)(0));
	for (;;) {
		if (!(i < s.len)) break;
		u8 ch = s.str[i];
		if (ch == '.') {
			in_decimal = true;
			dot_pos = i;
		} else if (in_decimal) {
			if (ch == '0' && prev_ch != '0') {
				last_zero_start = i;
			} else if (ch >= '1' && ch <= '9') {
				last_zero_start = -1;
			} else if (ch == 'e') {
				break;
			}
		}
		prev_ch = ch;
		i++;
	}
	string tmp = _S("");
	if (last_zero_start > 0) {
		if (last_zero_start == (int)(dot_pos + 1)) {
			tmp = string__plus(string_substr(s, 0, dot_pos), string_substr(s, i, 2147483647));
		} else {
			tmp = string__plus(string_substr(s, 0, last_zero_start), string_substr(s, i, 2147483647));
		}
	} else {
		tmp = string_clone(s);
	}
	if (tmp.str[(int)(tmp.len - 1)] == '.') {
		return string_substr(tmp, 0, (int)(tmp.len - 1));
	}
	return tmp;
}
string strconv__format_dec_old(u64 d, strconv__BF_param p) {
	bool strconv__format_dec_old_defer_0 = false;
	strings__Builder res;
	string s;
	s = _S("");
	res = strings__new_builder(20);
	strconv__format_dec_old_defer_0 = true;
	int sign_len_diff = 0;
	if (p.pad_ch == '0') {
		if (p.positive) {
			if (p.sign_flag) {
				strings__Builder_write_u8(&res, '+');
				sign_len_diff = -1;
			}
		} else {
			strings__Builder_write_u8(&res, '-');
			sign_len_diff = -1;
		}
		string tmp = s;
		s = u64_str(d);
		string_free(&tmp);
	} else {
		if (p.positive) {
			if (p.sign_flag) {
				string tmp = s;
				s = string__plus(_S("+"), u64_str(d));
				string_free(&tmp);
			} else {
				string tmp = s;
				s = u64_str(d);
				string_free(&tmp);
			}
		} else {
			string tmp = s;
			s = string__plus(_S("-"), u64_str(d));
			string_free(&tmp);
		}
	}
	int dif = (int)((int)(p.len0 - s.len) + sign_len_diff);
	if (p.align == strconv__Align_text__right) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(&res, p.pad_ch);
		}
	}
	strings__Builder_write_string(&res, s);
	if (p.align == strconv__Align_text__left) {
		for (int i1 = 0; i1 < dif; i1++) {
			strings__Builder_write_u8(&res, p.pad_ch);
		}
	}
	string _t1 = strings__Builder_str(&res);
	// Defer begin
	if (strconv__format_dec_old_defer_0) {
		strings__Builder_free(&res);
		string_free(&s);
	}
	// Defer end
	return _t1;
}
VV_LOC array __new_array(int mylen, int cap, int elm_size) {
	panic_on_negative_len(mylen);
	panic_on_negative_cap(cap);
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = (voidptr)vcalloc((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	return arr;
}
VV_LOC array __new_array_with_default(int mylen, int cap, int elm_size, voidptr val) {
	panic_on_negative_len(mylen);
	panic_on_negative_cap(cap);
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = 0,.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u64 total_size = (u64)(((u64)(cap_)) * ((u64)(elm_size)));
	if (cap_ > 0 && mylen == 0) {
		arr.data = _v_malloc(__at_least_one(total_size));
	} else {
		arr.data = vcalloc(total_size);
	}
	if (val != 0) {
		u8* eptr = ((u8*)(arr.data));
		{ // Unsafe block
			if (eptr != ((void*)0)) {
				if (arr.element_size == 1) {
					u8 byte_value = *(((u8*)(val)));
					for (int i = 0; i < arr.len; ++i) {
						eptr[i] = byte_value;
					}
				} else {
					for (int _t1 = 0; _t1 < arr.len; ++_t1) {
						vmemcpy(eptr, val, arr.element_size);
						eptr += arr.element_size;
					}
				}
			}
		}
	}
	return arr;
}
VV_LOC array __new_array_with_multi_default(int mylen, int cap, int elm_size, voidptr val) {
	panic_on_negative_len(mylen);
	panic_on_negative_cap(cap);
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = 0,.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u64 total_size = (u64)(((u64)(cap_)) * ((u64)(elm_size)));
	arr.data = vcalloc(__at_least_one(total_size));
	if (val != 0) {
		u8* eptr = ((u8*)(arr.data));
		{ // Unsafe block
			if (eptr != ((void*)0)) {
				for (int i = 0; i < arr.len; ++i) {
					vmemcpy(eptr, ((charptr)(val)) + (int)(i * arr.element_size), arr.element_size);
					eptr += arr.element_size;
				}
			}
		}
	}
	return arr;
}
VV_LOC array __new_array_with_array_default(int mylen, int cap, int elm_size, array val, int depth) {
	panic_on_negative_len(mylen);
	panic_on_negative_cap(cap);
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = (voidptr)_v_malloc(__at_least_one((u64)(((u64)(cap_)) * ((u64)(elm_size))))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	u8* eptr = ((u8*)(arr.data));
	{ // Unsafe block
		if (eptr != ((void*)0)) {
			for (int _t1 = 0; _t1 < arr.len; ++_t1) {
				array val_clone = array_clone_to_depth(&val, depth);
				vmemcpy(eptr, &val_clone, arr.element_size);
				eptr += arr.element_size;
			}
		}
	}
	return arr;
}
VV_LOC array new_array_from_c_array(int len, int cap, int elm_size, voidptr c_array) {
	panic_on_negative_len(len);
	panic_on_negative_cap(cap);
	int cap_ = (cap < len ? (len) : (cap));
	array arr = ((array){.data = (voidptr)vcalloc((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = len,.cap = cap_,.flags = 0,.element_size = elm_size,});
	vmemcpy(arr.data, c_array, (u64)(((u64)(len)) * ((u64)(elm_size))));
	return arr;
}
void array_ensure_cap(array* a, int required) {
	if (required <= a->cap) {
		return;
	}
	if (ArrayFlags_has(&a->flags, ArrayFlags__nogrow)) {
		panic_n(_S("array.ensure_cap: array with the flag `.nogrow` cannot grow in size, array required new size:"), required);
		VUNREACHABLE();
	}
	i64 cap = (a->cap > 0 ? (((i64)(a->cap))) : (((i64)(2))));
	for (;;) {
		if (!(required > cap)) break;
		cap *= 2;
	}
	if (cap > _const_max_int) {
		if (a->cap < _const_max_int) {
			cap = _const_max_int;
		} else {
			panic_n(_S("array.ensure_cap: array needs to grow to cap (which is > 2^31):"), cap);
			VUNREACHABLE();
		}
	}
	u64 new_size = (u64)(((u64)(cap)) * ((u64)(a->element_size)));
	u8* new_data = _v_malloc(__at_least_one(new_size));
	if (a->data != ((void*)0)) {
		vmemcpy(new_data, a->data, (u64)(((u64)(a->len)) * ((u64)(a->element_size))));
		if (ArrayFlags_has(&a->flags, ArrayFlags__noslices)) {
			_v_free(a->data);
		}
	}
	a->data = new_data;
	a->offset = 0;
	a->cap = ((int)(cap));
}
void array_insert(array* a, int i, voidptr val) {
	if (i < 0 || i > a->len) {
		panic_n2(_S("array.insert: index out of range (i,a.len):"), i, a->len);
		VUNREACHABLE();
	}
	if (a->len == _const_max_int) {
		_v_panic(_S("array.insert: a.len reached max_int"));
		VUNREACHABLE();
	}
	if (a->len >= a->cap) {
		array_ensure_cap(a, (int)(a->len + 1));
	}
	{ // Unsafe block
		vmemmove(array_get_unsafe(*a, (int)(i + 1)), array_get_unsafe(*a, i), (u64)(((u64)(((int)(a->len - i)))) * ((u64)(a->element_size))));
		array_set_unsafe(a, i, val);
	}
	a->len++;
}
VV_LOC void array_insert_many(array* a, int i, voidptr val, int size) {
	if (i < 0 || i > a->len) {
		panic_n2(_S("array.insert_many: index out of range (i,a.len):"), i, a->len);
		VUNREACHABLE();
	}
	i64 new_len = (i64)(((i64)(a->len)) + ((i64)(size)));
	if (new_len > _const_max_int) {
		panic_n(_S("array.insert_many: max_int will be exceeded by a.len:"), new_len);
		VUNREACHABLE();
	}
	array_ensure_cap(a, ((int)(new_len)));
	int elem_size = a->element_size;
	{ // Unsafe block
		voidptr iptr = array_get_unsafe(*a, i);
		vmemmove(array_get_unsafe(*a, (int)(i + size)), iptr, (u64)(((u64)((int)(a->len - i))) * ((u64)(elem_size))));
		vmemcpy(iptr, val, (u64)(((u64)(size)) * ((u64)(elem_size))));
	}
	a->len = ((int)(new_len));
}
void array_prepend(array* a, voidptr val) {
	array_insert(a, 0, val);
}
VV_LOC void array_prepend_many(array* a, voidptr val, int size) {
	array_insert_many(a, 0, val, size);
}
void array_clear(array* a) {
	a->len = 0;
}
void array_trim(array* a, int index) {
	if (index < a->len) {
		a->len = index;
	}
}
inline VV_LOC voidptr array_get_unsafe(array a, int i) {
	{ // Unsafe block
		return ((u8*)(a.data)) + (u64)(((u64)(i)) * ((u64)(a.element_size)));
	}
	return 0;
}
VV_LOC voidptr array_get(array a, int i) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a.len) {
			panic_n2(_S("array.get: index out of range (i,a.len):"), i, a.len);
			VUNREACHABLE();
		}
	}
	#endif
	{ // Unsafe block
		return ((u8*)(a.data)) + (u64)(((u64)(i)) * ((u64)(a.element_size)));
	}
	return 0;
}
VV_LOC voidptr array_get_with_check(array a, int i) {
	if (i < 0 || i >= a.len) {
		return 0;
	}
	{ // Unsafe block
		return ((u8*)(a.data)) + (u64)(((u64)(i)) * ((u64)(a.element_size)));
	}
	return 0;
}
voidptr array_first(array a) {
	if (a.len == 0) {
		_v_panic(_S("array.first: array is empty"));
		VUNREACHABLE();
	}
	return a.data;
}
VV_LOC array array_slice(array a, int start, int _end) {
	int end = (_end == _const_max_int ? (a.len) : (_end));
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end) {
			_v_panic(string__plus(string__plus(string__plus(_S("array.slice: invalid slice index (start>end):"), i64_str(((i64)(start)))), _S(", ")), i64_str(((i64)(end)))));
			VUNREACHABLE();
		}
		if (end > a.len) {
			_v_panic(string__plus(string__plus(string__plus(string__plus(_S("array.slice: slice bounds out of range ("), i64_str(((i64)(end)))), _S(" >= ")), i64_str(((i64)(a.len)))), _S(")")));
			VUNREACHABLE();
		}
		if (start < 0) {
			_v_panic(string__plus(_S("array.slice: slice bounds out of range (start<0):"), int_str(start)));
			VUNREACHABLE();
		}
	}
	#endif
	u64 offset = (u64)(((u64)(start)) * ((u64)(a.element_size)));
	u8* data = ((u8*)(a.data)) + offset;
	int l = (int)(end - start);
	array res = ((array){.data = (voidptr)data,.offset = (int)(a.offset + ((int)(offset))),.len = l,.cap = l,.flags = 0,.element_size = a.element_size,});
	return res;
}
VV_LOC array array_slice_ni(array a, int _start, int _end) {
	int end = (_end == _const_max_int ? (a.len) : (_end));
	int start = _start;
	if (start < 0) {
		start = (int)(a.len + start);
		if (start < 0) {
			start = 0;
		}
	}
	if (end < 0) {
		end = (int)(a.len + end);
		if (end < 0) {
			end = 0;
		}
	}
	if (end >= a.len) {
		end = a.len;
	}
	if (start >= a.len || start > end) {
		array res = ((array){.data = a.data,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = a.element_size,});
		return res;
	}
	u64 offset = (u64)(((u64)(start)) * ((u64)(a.element_size)));
	u8* data = ((u8*)(a.data)) + offset;
	int l = (int)(end - start);
	array res = ((array){.data = (voidptr)data,.offset = (int)(a.offset + ((int)(offset))),.len = l,.cap = l,.flags = 0,.element_size = a.element_size,});
	return res;
}
VV_LOC array array_clone_static_to_depth(array a, int depth) {
	return array_clone_to_depth(&a, depth);
}
array array_clone(array* a) {
	return array_clone_to_depth(a, 0);
}
array array_clone_to_depth(array* a, int depth) {
	u64 source_capacity_in_bytes = (u64)(((u64)(a->cap)) * ((u64)(a->element_size)));
	array arr = ((array){.data = (voidptr)vcalloc(source_capacity_in_bytes),.offset = 0,.len = a->len,.cap = a->cap,.flags = 0,.element_size = a->element_size,});
	if (depth > 0 && _us32_eq(sizeof(array),a->element_size) && a->len >= 0 && a->cap >= a->len) {
		array ar = ((array){.data = 0,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = 0,});
		int asize = ((int)(sizeof(array)));
		for (int i = 0; i < a->len; ++i) {
			vmemcpy(&ar, array_get_unsafe(*a, i), asize);
			array ar_clone = array_clone_to_depth(&ar, (int)(depth - 1));
			array_set_unsafe(&arr, i, &ar_clone);
		}
		return arr;
	} else {
		if (a->data != 0 && source_capacity_in_bytes > 0U) {
			vmemcpy(((u8*)(arr.data)), a->data, source_capacity_in_bytes);
		}
		return arr;
	}
	return (array){.data = 0,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = 0,};
}
inline VV_LOC void array_set_unsafe(array* a, int i, voidptr val) {
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(i))), val, a->element_size);
}
VV_LOC void array_set(array* a, int i, voidptr val) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= a->len) {
			panic_n2(_S("array.set: index out of range (i,a.len):"), i, a->len);
			VUNREACHABLE();
		}
	}
	#endif
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(i))), val, a->element_size);
}
VV_LOC void array_push(array* a, voidptr val) {
	if (a->len < 0) {
		_v_panic(_S("array.push: negative len"));
		VUNREACHABLE();
	}
	if (a->len >= _const_max_int) {
		_v_panic(_S("array.push: len bigger than max_int"));
		VUNREACHABLE();
	}
	if (a->len >= a->cap) {
		array_ensure_cap(a, (int)(a->len + 1));
	}
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(a->len))), val, a->element_size);
	a->len++;
}
void array_push_many(array* a, voidptr val, int size) {
	if (size <= 0 || val == ((void*)0)) {
		return;
	}
	i64 new_len = (i64)(((i64)(a->len)) + ((i64)(size)));
	if (new_len > _const_max_int) {
		_v_panic(_S("array.push_many: new len exceeds max_int"));
		VUNREACHABLE();
	}
	if (new_len >= a->cap) {
		array_ensure_cap(a, ((int)(new_len)));
	}
	if (a->data == val && a->data != 0) {
		array copy = array_clone(a);
		vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(a->len))), copy.data, (u64)(((u64)(a->element_size)) * ((u64)(size))));
	} else {
		if (a->data != 0 && val != 0) {
			vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(a->len))), val, (u64)(((u64)(a->element_size)) * ((u64)(size))));
		}
	}
	a->len = ((int)(new_len));
}
void array_free(array* a) {
	if (ArrayFlags_has(&a->flags, ArrayFlags__nofree)) {
		return;
	}
	u8* mblock_ptr = ((u8*)((u64)(((u64)(a->data)) - ((u64)(a->offset)))));
	if (mblock_ptr != ((void*)0)) {
		_v_free(mblock_ptr);
	}
	{ // Unsafe block
		a->data = ((void*)0);
		a->offset = 0;
	}
}
array array_filter(array a, bool (*predicate)(voidptr ));
array array_map(array a, voidptr (*callback)(voidptr ));
void Array_string_free(Array_string* a) {
	for (int _t1 = 0; _t1 < a->len; ++_t1) {
		string* s = ((string*)a->data) + _t1;
		string_free(s);
	}
	array_free((((array*)(a))));
}
string Array_string_str(Array_string a) {
	int sb_len = 4;
	if (a.len > 0) {
		sb_len += ((string*)a.data)[0].len;
		sb_len *= a.len;
	}
	sb_len += 2;
	strings__Builder sb = strings__new_builder(sb_len);
	strings__Builder_write_u8(&sb, '[');
	for (int i = 0; i < a.len; ++i) {
		string val = ((string*)a.data)[i];
		strings__Builder_write_u8(&sb, '\'');
		strings__Builder_write_string(&sb, val);
		strings__Builder_write_u8(&sb, '\'');
		if (i < (int)(a.len - 1)) {
			strings__Builder_write_string(&sb, _S(", "));
		}
	}
	strings__Builder_write_u8(&sb, ']');
	string res = strings__Builder_str(&sb);
	strings__Builder_free(&sb);
	return res;
}
int copy(Array_u8* dst, Array_u8 src) {
	int min = (dst->len < src.len ? (dst->len) : (src.len));
	if (min > 0) {
		vmemmove(((u8*)(dst->data)), src.data, min);
	}
	return min;
}
Array_u8 voidptr_vbytes(voidptr data, int len) {
	array res = ((array){.data = data,.offset = 0,.len = len,.cap = len,.flags = 0,.element_size = 1,});
	return res;
}
Array_u8 u8_vbytes(u8* data, int len) {
	return voidptr_vbytes(((voidptr)(data)), len);
}
void u8_free(u8* data) {
	_v_free(data);
}
inline VV_LOC void panic_on_negative_len(int len) {
	if (len < 0) {
		panic_n(_S("negative .len:"), len);
		VUNREACHABLE();
	}
}
inline VV_LOC void panic_on_negative_cap(int cap) {
	if (cap < 0) {
		panic_n(_S("negative .cap:"), cap);
		VUNREACHABLE();
	}
}
VV_LOC array __new_array_noscan(int mylen, int cap, int elm_size) {
	panic_on_negative_len(mylen);
	panic_on_negative_cap(cap);
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = (voidptr)vcalloc_noscan((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	return arr;
}
VV_LOC array __new_array_with_default_noscan(int mylen, int cap, int elm_size, voidptr val) {
	panic_on_negative_len(mylen);
	panic_on_negative_cap(cap);
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = (voidptr)vcalloc_noscan((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	if (val != 0 && arr.data != ((void*)0)) {
		if (elm_size == 1) {
			u8 byte_value = *(((u8*)(val)));
			u8* dptr = ((u8*)(arr.data));
			for (int i = 0; i < arr.len; ++i) {
				{ // Unsafe block
					dptr[i] = byte_value;
				}
			}
		} else {
			for (int i = 0; i < arr.len; ++i) {
				array_set_unsafe(&arr, i, val);
			}
		}
	}
	return arr;
}
VV_LOC array __new_array_with_multi_default_noscan(int mylen, int cap, int elm_size, voidptr val) {
	panic_on_negative_len(mylen);
	panic_on_negative_cap(cap);
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = (voidptr)vcalloc_noscan((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	if (val != 0 && arr.data != ((void*)0)) {
		for (int i = 0; i < arr.len; ++i) {
			array_set_unsafe(&arr, i, ((charptr)(val)) + (int)(i * elm_size));
		}
	}
	return arr;
}
VV_LOC array __new_array_with_array_default_noscan(int mylen, int cap, int elm_size, array val) {
	panic_on_negative_len(mylen);
	panic_on_negative_cap(cap);
	int cap_ = (cap < mylen ? (mylen) : (cap));
	array arr = ((array){.data = (voidptr)vcalloc_noscan((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = mylen,.cap = cap_,.flags = 0,.element_size = elm_size,});
	for (int i = 0; i < arr.len; ++i) {
		array val_clone = array_clone(&val);
		array_set_unsafe(&arr, i, &val_clone);
	}
	return arr;
}
VV_LOC array new_array_from_c_array_noscan(int len, int cap, int elm_size, voidptr c_array) {
	panic_on_negative_len(len);
	panic_on_negative_cap(cap);
	int cap_ = (cap < len ? (len) : (cap));
	array arr = ((array){.data = (voidptr)vcalloc_noscan((u64)(((u64)(cap_)) * ((u64)(elm_size)))),.offset = 0,.len = len,.cap = cap_,.flags = 0,.element_size = elm_size,});
	vmemcpy(arr.data, c_array, (u64)(((u64)(len)) * ((u64)(elm_size))));
	return arr;
}
VV_LOC void array_ensure_cap_noscan(array* a, int required) {
	if (required <= a->cap) {
		return;
	}
	if (ArrayFlags_has(&a->flags, ArrayFlags__nogrow)) {
		panic_n(_S("array.ensure_cap_noscan: array with the flag `.nogrow` cannot grow in size, array required new size:"), required);
		VUNREACHABLE();
	}
	i64 cap = (a->cap > 0 ? (((i64)(a->cap))) : (((i64)(2))));
	for (;;) {
		if (!(required > cap)) break;
		cap *= 2;
	}
	if (cap > _const_max_int) {
		if (a->cap < _const_max_int) {
			cap = _const_max_int;
		} else {
			panic_n(_S("array.ensure_cap_noscan: array needs to grow to cap (which is > 2^31):"), cap);
			VUNREACHABLE();
		}
	}
	u64 new_size = (u64)(((u64)(cap)) * ((u64)(a->element_size)));
	u8* new_data = vcalloc_noscan(new_size);
	if (a->data != ((void*)0)) {
		vmemcpy(new_data, a->data, (u64)(((u64)(a->len)) * ((u64)(a->element_size))));
	}
	a->data = new_data;
	a->offset = 0;
	a->cap = ((int)(cap));
}
VV_LOC array array_repeat_to_depth_noscan(array a, int count, int depth) {
	if (count < 0) {
		panic_n(_S("array.repeat: count is negative:"), count);
		VUNREACHABLE();
	}
	u64 size = (u64)((u64)(((u64)(count)) * ((u64)(a.len))) * ((u64)(a.element_size)));
	if (size == 0U) {
		size = ((u64)(a.element_size));
	}
	array arr = ((array){.data = (voidptr)(depth > 0 ? (vcalloc(size)) : (vcalloc_noscan(size))),.offset = 0,.len = (int)(count * a.len),.cap = (int)(count * a.len),.flags = 0,.element_size = a.element_size,});
	if (a.len > 0) {
		u64 a_total_size = (u64)(((u64)(a.len)) * ((u64)(a.element_size)));
		u64 arr_step_size = (u64)(((u64)(a.len)) * ((u64)(arr.element_size)));
		u8* eptr = ((u8*)(arr.data));
		{ // Unsafe block
			for (int _t1 = 0; _t1 < count; ++_t1) {
				if (depth > 0) {
					array ary_clone = array_clone_to_depth_noscan(&a, depth);
					vmemcpy(eptr, ((u8*)(ary_clone.data)), a_total_size);
				} else {
					vmemcpy(eptr, ((u8*)(a.data)), a_total_size);
				}
				eptr += arr_step_size;
			}
		}
	}
	return arr;
}
VV_LOC void array_insert_noscan(array* a, int i, voidptr val) {
	if (i < 0 || i > a->len) {
		panic_n2(_S("array.insert_noscan: index out of range (i,a.len):"), i, a->len);
		VUNREACHABLE();
	}
	if (a->len == _const_max_int) {
		_v_panic(_S("array.insert_noscan: a.len reached max_int"));
		VUNREACHABLE();
	}
	array_ensure_cap_noscan(a, (int)(a->len + 1));
	{ // Unsafe block
		vmemmove(array_get_unsafe(*a, (int)(i + 1)), array_get_unsafe(*a, i), (u64)(((u64)((int)(a->len - i))) * ((u64)(a->element_size))));
		array_set_unsafe(a, i, val);
	}
	a->len++;
}
VV_LOC void array_insert_many_noscan(array* a, int i, voidptr val, int size) {
	if (i < 0 || i > a->len) {
		panic_n2(_S("array.insert_many: index out of range (i, a.len):"), i, a->len);
		VUNREACHABLE();
	}
	i64 new_len = (i64)(((i64)(a->len)) + ((i64)(size)));
	if (new_len > _const_max_int) {
		panic_n(_S("array.insert_many_noscan: max_int will be exceeded by a.len:"), new_len);
		VUNREACHABLE();
	}
	array_ensure_cap_noscan(a, (int)(a->len + size));
	int elem_size = a->element_size;
	{ // Unsafe block
		voidptr iptr = array_get_unsafe(*a, i);
		vmemmove(array_get_unsafe(*a, (int)(i + size)), iptr, (u64)(((u64)((int)(a->len - i))) * ((u64)(elem_size))));
		vmemcpy(iptr, val, (u64)(((u64)(size)) * ((u64)(elem_size))));
	}
	a->len += size;
}
VV_LOC void array_prepend_noscan(array* a, voidptr val) {
	array_insert_noscan(a, 0, val);
}
VV_LOC void array_prepend_many_noscan(array* a, voidptr val, int size) {
	array_insert_many_noscan(a, 0, val, size);
}
VV_LOC voidptr array_pop_noscan(array* a) {
	if (a->len == 0) {
		_v_panic(_S("array.pop: array is empty"));
		VUNREACHABLE();
	}
	int new_len = (int)(a->len - 1);
	u8* last_elem = ((u8*)(a->data)) + (u64)(((u64)(new_len)) * ((u64)(a->element_size)));
	a->len = new_len;
	return memdup_noscan(last_elem, a->element_size);
}
VV_LOC array array_clone_static_to_depth_noscan(array a, int depth) {
	return array_clone_to_depth_noscan(&a, depth);
}
VV_LOC array array_clone_to_depth_noscan(array* a, int depth) {
	u64 size = (u64)(((u64)(a->cap)) * ((u64)(a->element_size)));
	if (size == 0U) {
		size++;
	}
	array arr = ((array){.data = (voidptr)(depth == 0 ? (vcalloc_noscan(size)) : (vcalloc(size))),.offset = 0,.len = a->len,.cap = a->cap,.flags = 0,.element_size = a->element_size,});
	if (depth > 0) {
		for (int i = 0; i < a->len; ++i) {
			array ar = ((array){.data = 0,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = 0,});
			vmemcpy(&ar, array_get_unsafe(*a, i), ((int)(sizeof(array))));
			array ar_clone = array_clone_to_depth_noscan(&ar, (int)(depth - 1));
			array_set_unsafe(&arr, i, &ar_clone);
		}
		return arr;
	} else {
		if (a->data != 0) {
			vmemcpy(((u8*)(arr.data)), a->data, (u64)(((u64)(a->cap)) * ((u64)(a->element_size))));
		}
		return arr;
	}
	return (array){.data = 0,.offset = 0,.len = 0,.cap = 0,.flags = 0,.element_size = 0,};
}
VV_LOC void array_push_noscan(array* a, voidptr val) {
	if (a->len < 0) {
		_v_panic(_S("array.push_noscan: negative len"));
		VUNREACHABLE();
	}
	if (a->len >= _const_max_int) {
		_v_panic(_S("array.push_noscan: len bigger than max_int"));
		VUNREACHABLE();
	}
	if (a->len >= a->cap) {
		array_ensure_cap_noscan(a, (int)(a->len + 1));
	}
	vmemcpy(((u8*)(a->data)) + (u64)(((u64)(a->element_size)) * ((u64)(a->len))), val, a->element_size);
	a->len++;
}
VV_LOC void array_push_many_noscan(array* a, voidptr val, int size) {
	if (size == 0 || val == ((void*)0)) {
		return;
	}
	i64 new_len = (i64)(((i64)(a->len)) + ((i64)(size)));
	if (new_len > _const_max_int) {
		_v_panic(_S("array.push_many_noscan: new len exceeds max_int"));
		VUNREACHABLE();
	}
	if (a->data == val && a->data != 0) {
		array copy = array_clone(a);
		array_ensure_cap_noscan(a, (int)(a->len + size));
		vmemcpy(array_get_unsafe(*a, a->len), copy.data, (u64)(((u64)(a->element_size)) * ((u64)(size))));
	} else {
		array_ensure_cap_noscan(a, (int)(a->len + size));
		if (a->data != 0 && val != 0) {
			vmemcpy(array_get_unsafe(*a, a->len), val, (u64)(((u64)(a->element_size)) * ((u64)(size))));
		}
	}
	a->len = ((int)(new_len));
}
VV_LOC array array_reverse_noscan(array a) {
	if (a.len < 2) {
		return a;
	}
	array arr = ((array){.data = (voidptr)vcalloc_noscan((u64)(((u64)(a.cap)) * ((u64)(a.element_size)))),.offset = 0,.len = a.len,.cap = a.cap,.flags = 0,.element_size = a.element_size,});
	for (int i = 0; i < a.len; ++i) {
		array_set_unsafe(&arr, i, array_get_unsafe(a, (int)((int)(a.len - 1) - i)));
	}
	return arr;
}
VV_LOC void array_grow_cap_noscan(array* a, int amount) {
	i64 new_cap = (i64)(((i64)(amount)) + ((i64)(a->cap)));
	if (new_cap > _const_max_int) {
		panic_n(_S("array.grow_cap: max_int will be exceeded by new cap:"), new_cap);
		VUNREACHABLE();
	}
	array_ensure_cap_noscan(a, ((int)(new_cap)));
}
VV_LOC void array_grow_len_noscan(array* a, int amount) {
	i64 new_len = (i64)(((i64)(amount)) + ((i64)(a->len)));
	if (new_len > _const_max_int) {
		panic_n(_S("array.grow_len: max_int will be exceeded by new len:"), new_len);
		VUNREACHABLE();
	}
	array_ensure_cap_noscan(a, ((int)(new_len)));
	a->len = ((int)(new_len));
}
void print_backtrace(void) {
	#if !defined(CUSTOM_DEFINE_no_backtrace)
	{
		#if defined(_VFREESTANDING)
		{
		}
		#elif defined(_VNATIVE)
		{
		}
		#elif defined(__TINYC__)
		{
			tcc_backtrace("Backtrace");
		}
		#elif defined(CUSTOM_DEFINE_use_libbacktrace)
		{
		}
		#else
		{
		}
		#endif
	}
	#endif
}
bool print_backtrace_skipping_top_frames(int skipframes) {
	#if defined(__TINYC__)
	{
		return print_backtrace_skipping_top_frames_tcc(skipframes);
	}
	#endif
	eprintln(_S("print_backtrace_skipping_top_frames is not implemented"));
	return false;
}
VV_LOC bool print_backtrace_skipping_top_frames_tcc(int skipframes) {
	#if defined(__TINYC__) && !defined(_VNATIVE)
	{
		#if defined(CUSTOM_DEFINE_no_backtrace)
		{
		}
		#else
		{
			tcc_backtrace("Backtrace");
			return true;
		}
		#endif
	}
	#else
	{
		eprintln(_S("print_backtrace_skipping_top_frames_tcc must be called only when the compiler is tcc"));
		return false;
	}
	#endif
	return false;
}
VV_LOC void v_segmentation_fault_handler(i32 signal_number) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		fprintf(stderr, "signal %d: segmentation fault\n", signal_number);
	}
	#endif
	#if defined(CUSTOM_DEFINE_use_libbacktrace)
	{
	}
	#else
	{
		print_backtrace();
	}
	#endif
	_v_exit((i32)(128 + signal_number));
	VUNREACHABLE();
}
VNORETURN void _v_exit(int code) {
	exit(code);
	VUNREACHABLE();
	while(1);
}
_result_void at_exit(void (*cb)(void)) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		int res = atexit((voidptr)cb);
		if (res != 0) {
			return (_result_void){ .is_error=true, .err=error_with_code(_S("at_exit failed"), res), .data={E_STRUCT} };
		}
	}
	#endif
	return (_result_void){0};
}
VNORETURN void panic_option_not_set(string s) {
	_v_panic(string__plus(string__plus(_S("option not set ("), s), _S(")")));
	VUNREACHABLE();
	while(1);
}
VNORETURN void panic_result_not_set(string s) {
	_v_panic(string__plus(string__plus(_S("result not set ("), s), _S(")")));
	VUNREACHABLE();
	while(1);
}
string vcurrent_hash(void) {
	return _S("edf6c22");
}
VNORETURN void _v_panic(string s) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		eprint(_S("V panic: "));
		eprintln(s);
		eprint(_S("v hash: "));
		eprintln(vcurrent_hash());
		flush_stdout();
		#if defined(_VNATIVE)
		{
			exit(1);
			VUNREACHABLE();
		}
		#elif defined(CUSTOM_DEFINE_exit_after_panic_message)
		{
		}
		#elif defined(CUSTOM_DEFINE_no_backtrace)
		{
		}
		#else
		{
			#if defined(__TINYC__)
			{
				#if defined(CUSTOM_DEFINE_panics_break_into_debugger)
				{
				}
				#else
				{
					tcc_backtrace("Backtrace");
				}
				#endif
				exit(1);
				VUNREACHABLE();
			}
			#endif
			#if defined(CUSTOM_DEFINE_use_libbacktrace)
			{
			}
			#else
			{
				print_backtrace_skipping_top_frames(1);
			}
			#endif
			exit(1);
			VUNREACHABLE();
		}
		#endif
	}
	#endif
	exit(1);
	VUNREACHABLE();
	while(1);
}
VNORETURN void panic_n(string s, i64 number1) {
	_v_panic(string__plus(s, i64_str(number1)));
	VUNREACHABLE();
	while(1);
}
VNORETURN void panic_n2(string s, i64 number1, i64 number2) {
	_v_panic(string__plus(string__plus(string__plus(s, i64_str(number1)), _S(", ")), i64_str(number2)));
	VUNREACHABLE();
	while(1);
}
void eprintln(string s) {
	if (s.str == 0) {
		eprintln(_S("eprintln(NIL)"));
		return;
	}
	#if defined(_VFREESTANDING)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#else
	{
		flush_stdout();
		flush_stderr();
		_writeln_to_fd(2, s);
		flush_stderr();
	}
	#endif
}
void eprint(string s) {
	if (s.str == 0) {
		eprint(_S("eprint(NIL)"));
		return;
	}
	#if defined(_VFREESTANDING)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#else
	{
		flush_stdout();
		flush_stderr();
		_write_buf_to_fd(2, s.str, s.len);
		flush_stderr();
	}
	#endif
}
void flush_stdout(void) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		fflush(stdout);
	}
	#endif
}
void flush_stderr(void) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		fflush(stderr);
	}
	#endif
}
void unbuffer_stdout(void) {
	#if defined(_VFREESTANDING)
	{
	}
	#else
	{
		setbuf(stdout, 0);
	}
	#endif
}
void print(string s) {
	#if defined(__ANDROID__) && !defined(__TERMUX__)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		_write_buf_to_fd(1, s.str, s.len);
	}
	#endif
}
void println(string s) {
	if (s.str == 0) {
		println(_S("println(NIL)"));
		return;
	}
	#if defined(__ANDROID__) && !defined(__TERMUX__)
	{
	}
	#elif defined(__TARGET_IOS__)
	{
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
		_writeln_to_fd(1, s);
	}
	#endif
}
VV_LOC void _writeln_to_fd(int fd, string s) {
	#if defined(CUSTOM_DEFINE_builtin_writeln_should_write_at_once)
	{
	}
	#else
	{
		u8 lf = ((u8)('\n'));
		_write_buf_to_fd(fd, s.str, s.len);
		_write_buf_to_fd(fd, &lf, 1);
	}
	#endif
}
VV_LOC void _write_buf_to_fd(int fd, u8* buf, int buf_len) {
	if (buf_len <= 0) {
		return;
	}
	u8* ptr = buf;
	isize remaining_bytes = ((isize)(buf_len));
	isize x = ((isize)(0));
	#if defined(_VFREESTANDING) || defined(__vinix__) || defined(CUSTOM_DEFINE_builtin_write_buf_to_fd_should_use_c_write)
	{
	}
	#else
	{
		voidptr stream = ((voidptr)(stdout));
		if (fd == 2) {
			stream = ((voidptr)(stderr));
		}
		{ // Unsafe block
			for (;;) {
				if (!(remaining_bytes > 0)) break;
				x = ((isize)(fwrite(ptr, 1, remaining_bytes, stream)));
				ptr += x;
				remaining_bytes -= x;
			}
		}
	}
	#endif
}
VNORETURN VV_LOC void _memory_panic(string fname, isize size) {
	v_memory_panic = true;
	eprint(fname);
	eprint(_S("("));
	#if defined(_VFREESTANDING) || defined(__vinix__)
	{
	}
	#else
	{
		fprintf(stderr, "%p", ((voidptr)(size)));
	}
	#endif
	if (size < 0) {
		eprint(_S(" < 0"));
	}
	eprintln(_S(")"));
	_v_panic(_S("memory allocation failure"));
	VUNREACHABLE();
	while(1);
}
u8* _v_malloc(isize n) {
	if (n < 0) {
		_memory_panic(_S("malloc"), n);
		VUNREACHABLE();
	} else if (n == 0) {
		return ((u8*)(((void*)0)));
	}
	u8* res = ((u8*)(((void*)0)));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
		{ // Unsafe block
			res = GC_MALLOC(n);
		}
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
	}
	#endif
	if (res == 0) {
		_memory_panic(_S("malloc"), n);
		VUNREACHABLE();
	}
	return res;
}
u8* malloc_noscan(isize n) {
	if (n < 0) {
		_memory_panic(_S("malloc_noscan"), n);
		VUNREACHABLE();
	}
	u8* res = ((u8*)(((void*)0)));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
		#if defined(CUSTOM_DEFINE_gcboehm_opt)
		{
			{ // Unsafe block
				res = GC_MALLOC_ATOMIC(n);
			}
		}
		#else
		{
		}
		#endif
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
	}
	#endif
	if (res == 0) {
		_memory_panic(_S("malloc_noscan"), n);
		VUNREACHABLE();
	}
	return res;
}
inline VV_LOC u64 __at_least_one(u64 how_many) {
	if (how_many == 0U) {
		return 1U;
	}
	return how_many;
}
u8* malloc_uncollectable(isize n) {
	if (n < 0) {
		_memory_panic(_S("malloc_uncollectable"), n);
		VUNREACHABLE();
	}
	u8* res = ((u8*)(((void*)0)));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
		{ // Unsafe block
			res = GC_MALLOC_UNCOLLECTABLE(n);
		}
	}
	#elif defined(_VFREESTANDING)
	{
	}
	#else
	{
	}
	#endif
	if (res == 0) {
		_memory_panic(_S("malloc_uncollectable"), n);
		VUNREACHABLE();
	}
	return res;
}
u8* v_realloc(u8* b, isize n) {
	u8* new_ptr = ((u8*)(((void*)0)));
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
		new_ptr = GC_REALLOC(b, n);
	}
	#else
	{
	}
	#endif
	if (new_ptr == 0) {
		_memory_panic(_S("v_realloc"), n);
		VUNREACHABLE();
	}
	return new_ptr;
}
u8* realloc_data(u8* old_data, int old_size, int new_size) {
	u8* nptr = ((u8*)(((void*)0)));
	#if defined(_VGCBOEHM)
	{
		nptr = GC_REALLOC(old_data, new_size);
	}
	#else
	{
	}
	#endif
	if (nptr == 0) {
		_memory_panic(_S("realloc_data"), ((isize)(new_size)));
		VUNREACHABLE();
	}
	return nptr;
}
u8* vcalloc(isize n) {
	if (n < 0) {
		_memory_panic(_S("vcalloc"), n);
		VUNREACHABLE();
	} else if (n == 0) {
		return ((u8*)(((void*)0)));
	}
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
		return ((u8*)(GC_MALLOC(n)));
	}
	#else
	{
	}
	#endif
	return ((u8*)(((void*)0)));
}
u8* vcalloc_noscan(isize n) {
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
		if (n < 0) {
			_memory_panic(_S("vcalloc_noscan"), n);
			VUNREACHABLE();
		}
		#if defined(CUSTOM_DEFINE_gcboehm_opt)
		{
			voidptr res = GC_MALLOC_ATOMIC(n);
			memset(res, 0, n);
			return ((u8*)(res));
		}
		#else
		{
		}
		#endif
	}
	#else
	{
	}
	#endif
	return ((u8*)(((void*)0)));
}
void _v_free(voidptr ptr) {
	if (ptr == 0) {
		return;
	}
	#if defined(_VPREALLOC)
	{
	}
	#elif defined(_VGCBOEHM)
	{
	}
	#else
	{
	}
	#endif
}
voidptr memdup(voidptr src, isize sz) {
	if (sz == 0) {
		return vcalloc(1);
	}
	{ // Unsafe block
		u8* mem = _v_malloc(sz);
		return memcpy(mem, src, sz);
	}
	return 0;
}
voidptr memdup_noscan(voidptr src, isize sz) {
	if (sz == 0) {
		return vcalloc_noscan(1);
	}
	{ // Unsafe block
		u8* mem = malloc_noscan(sz);
		return memcpy(mem, src, sz);
	}
	return 0;
}
voidptr memdup_uncollectable(voidptr src, isize sz) {
	if (sz == 0) {
		return vcalloc(1);
	}
	{ // Unsafe block
		u8* mem = malloc_uncollectable(sz);
		return memcpy(mem, src, sz);
	}
	return 0;
}
inline VV_LOC int v_fixed_index(int i, int len) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (i < 0 || i >= len) {
			_v_panic(string__plus(string__plus(string__plus(string__plus(_S("fixed array index out of range (index: "), i64_str(((i64)(i)))), _S(", len: ")), i64_str(((i64)(len)))), _S(")")));
			VUNREACHABLE();
		}
	}
	#endif
	return i;
}
Array_string arguments(void) {
	u8** argv = ((u8**)(g_main_argv));
	Array_string res = __new_array_with_default(0, g_main_argc, sizeof(string), 0);
	for (int i = 0; i < g_main_argc; ++i) {
		#if defined(_WIN32)
		{
			array_push((array*)&res, _MOV((string[]){ string_from_wide(((u16*)(argv[i]))) }));
		}
		#else
		{
		}
		#endif
	}
	return res;
}
inline bool isnil(voidptr v) {
	return v == 0;
}
void VAssertMetaInfo_free(VAssertMetaInfo* ami) {
	{ // Unsafe block
		string_free(&ami->fpath);
		string_free(&ami->fn_name);
		string_free(&ami->src);
		string_free(&ami->op);
		string_free(&ami->llabel);
		string_free(&ami->rlabel);
		string_free(&ami->lvalue);
		string_free(&ami->rvalue);
		string_free(&ami->message);
	}
}
#if !defined(CUSTOM_DEFINE_no_gc_threads)
#endif
#if defined(CUSTOM_DEFINE_dynamic_boehm)
#else
	#if defined(__APPLE__) || defined(__linux__)
	#elif defined(__FreeBSD__)
	#elif defined(__OpenBSD__)
	#elif defined(_WIN32)
		#if defined(__TINYC__)
			#if !defined(CUSTOM_DEFINE_use_bundled_libgc)
			#endif
		#elif defined(_MSC_VER)
		#else
		#endif
	#elif false
	#else
	#endif
#endif
void gc_set_warn_proc(void (*cb)(char* msg, usize arg)) {
	GC_set_warn_proc((voidptr)cb);
}
VV_LOC void internal_gc_warn_proc_none(char* msg, usize arg) {
}
VV_LOC void restore_codepage(void) {
	SetConsoleOutputCP(g_original_codepage);
}
VV_LOC int is_terminal(int fd) {
	u32 mode = ((u32)(0U));
	voidptr osfh = ((voidptr)(_get_osfhandle(fd)));
	GetConsoleMode(osfh, ((voidptr)(&mode)));
	return ((int)(mode));
}
VV_LOC void builtin_init(void) {
	#if defined(_VGCBOEHM)
	{
		#if !defined(CUSTOM_DEFINE_gc_warn_on_stderr)
		{
			gc_set_warn_proc((voidptr)internal_gc_warn_proc_none);
		}
		#endif
	}
	#endif
	g_original_codepage = GetConsoleOutputCP();
	SetConsoleOutputCP(_const_cp_utf8);
	_result_void _t3 = at_exit((voidptr)restore_codepage);
	(void)_t3;
 ;
	if (is_terminal(1) > 0) {
		SetConsoleMode(GetStdHandle(_const_std_output_handle), ((_const_enable_processed_output | _const_enable_wrap_at_eol_output) | _const_evable_virtual_terminal_processing));
		SetConsoleMode(GetStdHandle(_const_std_error_handle), ((_const_enable_processed_output | _const_enable_wrap_at_eol_output) | _const_evable_virtual_terminal_processing));
		{ // Unsafe block
			setbuf(stdout, 0);
			setbuf(stderr, 0);
		}
	}
	#if !defined(CUSTOM_DEFINE_no_backtrace)
	{
		add_unhandled_exception_handler();
	}
	#endif
	unbuffer_stdout();
}
VV_LOC void add_vectored_exception_handler(int (*handler)(ExceptionPointers* )) {
	AddVectoredExceptionHandler(1, ((voidptr)(handler)));
}
VV_LOC int __attribute__((stdcall)) unhandled_exception_handler(ExceptionPointers* e) {
	switch (e->exception_record->code) {
		case 0x4001000A: case 0x40010006: case 0xE06D7363: {
			return 0;
		}
		default: {
			{
				println(string__plus(_S("Unhandled Exception 0x"), ptr_str((voidptr)&e->exception_record->code)));
				print_backtrace_skipping_top_frames(5);
				break;
			}
		}
	}
	
	return 0;
}
VV_LOC void add_unhandled_exception_handler(void) {
	add_vectored_exception_handler((voidptr)((VectoredExceptionHandler)(((voidptr)(unhandled_exception_handler)))));
}
inline int vstrlen(u8* s) {
	return strlen(((char*)(s)));
}
inline int vstrlen_char(char* s) {
	return strlen(s);
}
inline voidptr vmemcpy(voidptr dest, const voidptr const_src, isize n) {
	if (n == 0) {
		return dest;
	}
	{ // Unsafe block
		return memcpy(dest, const_src, n);
	}
	return 0;
}
inline voidptr vmemmove(voidptr dest, const voidptr const_src, isize n) {
	if (n == 0) {
		return dest;
	}
	{ // Unsafe block
		return memmove(dest, const_src, n);
	}
	return 0;
}
inline int vmemcmp(const voidptr const_s1, const voidptr const_s2, isize n) {
	if (n == 0) {
		return 0;
	}
	{ // Unsafe block
		return memcmp(const_s1, const_s2, n);
	}
	return 0;
}
inline voidptr vmemset(voidptr s, int c, isize n) {
	if (n == 0) {
		return s;
	}
	{ // Unsafe block
		return memset(s, c, n);
	}
	return 0;
}
#if !defined(_VNATIVE)
#endif
inline string f64_str(f64 x) {
	{ // Unsafe block
		strconv__Float64u f = ((strconv__Float64u){.f = x,});
		if (f.u == _const_strconv__double_minus_zero) {
			return _S("-0.0");
		}
		if (f.u == _const_strconv__double_plus_zero) {
			return _S("0.0");
		}
	}
	f64 abs_x = f64_abs(x);
	if (abs_x >= ((f64)(0.0001)) && abs_x < ((f64)(1.0e6))) {
		return strconv__f64_to_str_l(x);
	} else {
		return strconv__ftoa_64(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string f64_strg(f64 x) {
	if (x == 0) {
		return _S("0.0");
	}
	f64 abs_x = f64_abs(x);
	if (abs_x >= ((f64)(0.0001)) && abs_x < ((f64)(1.0e6))) {
		return strconv__f64_to_str_l_with_dot(x);
	} else {
		return strconv__ftoa_64(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string float_literal_str(float_literal d) {
	return f64_str(((f64)(d)));
}
inline string f32_str(f32 x) {
	{ // Unsafe block
		strconv__Float32u f = ((strconv__Float32u){.f = x,});
		if (f.u == _const_strconv__single_minus_zero) {
			return _S("-0.0");
		}
		if (f.u == _const_strconv__single_plus_zero) {
			return _S("0.0");
		}
	}
	f32 abs_x = f32_abs(x);
	if (abs_x >= ((f32)(0.0001)) && abs_x < ((f32)(1.0e6))) {
		return strconv__f32_to_str_l(x);
	} else {
		return strconv__ftoa_32(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string f32_strg(f32 x) {
	if (x == 0) {
		return _S("0.0");
	}
	f32 abs_x = f32_abs(x);
	if (abs_x >= ((f32)(0.0001)) && abs_x < ((f32)(1.0e6))) {
		return strconv__f32_to_str_l_with_dot(x);
	} else {
		return strconv__ftoa_32(x);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline f32 f32_abs(f32 a) {
	return (a < 0 ? (-a) : (a));
}
inline f64 f64_abs(f64 a) {
	return (a < 0 ? (-a) : (a));
}
inline f64 f64_max(f64 a, f64 b) {
	return (a > b ? (a) : (b));
}
string ptr_str(voidptr ptr) {
	string buf1 = u64_hex(((u64)(ptr)));
	return buf1;
}
string isize_str(isize x) {
	return i64_str(((i64)(x)));
}
string usize_str(usize x) {
	return u64_str(((u64)(x)));
}
string char_str(char* cptr) {
	return u64_hex(((u64)(cptr)));
}
inline VV_LOC string int_str_l(int nn, int max) {
	{ // Unsafe block
		i64 n = ((i64)(nn));
		int d = 0;
		if (n == 0) {
			return _S("0");
		}
		bool is_neg = false;
		if (n < 0) {
			n = -n;
			is_neg = true;
		}
		int index = max;
		u8* buf = malloc_noscan((int)(max + 1));
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0)) break;
			int n1 = ((int)((i64)(n / 100)));
			d = ((int)((((u32)((int)(((int)(n)) - ((int)(n1 * 100))))) << 1U)));
			n = n1;
			buf[index] = _const_digit_pairs.str[d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[d];
			index--;
		}
		index++;
		if (d < 20) {
			index++;
		}
		if (is_neg) {
			index--;
			buf[index] = '-';
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string i8_str(i8 n) {
	return int_str_l(((int)(n)), 5);
}
string i16_str(i16 n) {
	return int_str_l(((int)(n)), 7);
}
string u16_str(u16 n) {
	return int_str_l(((int)(n)), 7);
}
string i32_str(i32 n) {
	return int_str_l(((int)(n)), 12);
}
string int_str(int n) {
	return int_str_l(n, 12);
}
inline string u32_str(u32 nn) {
	{ // Unsafe block
		u32 n = nn;
		u32 d = ((u32)(0U));
		if (n == 0U) {
			return _S("0");
		}
		int max = 12;
		u8* buf = malloc_noscan((int)(max + 1));
		int index = max;
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0U)) break;
			u32 n1 = (u32)(n / ((u32)(100U)));
			d = ((((u32)(n - ((u32)(n1 * ((u32)(100U)))))) << ((u32)(1U))));
			n = n1;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
		}
		index++;
		if (d < ((u32)(20U))) {
			index++;
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string int_literal_str(int_literal n) {
	return i64_str(((i64)(n)));
}
inline string i64_str(i64 nn) {
	{ // Unsafe block
		i64 n = nn;
		i64 d = ((i64)(0));
		if (n == 0) {
			return _S("0");
		} else if (n == _const_min_i64) {
			return _S("-9223372036854775808");
		}
		int max = 20;
		u8* buf = malloc_noscan((int)(max + 1));
		bool is_neg = false;
		if (n < 0) {
			n = -n;
			is_neg = true;
		}
		int index = max;
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0)) break;
			i64 n1 = (i64)(n / ((i64)(100)));
			d = ((((u32)((i64)(n - ((i64)(n1 * ((i64)(100))))))) << ((i64)(1))));
			n = n1;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
		}
		index++;
		if (d < ((i64)(20))) {
			index++;
		}
		if (is_neg) {
			index--;
			buf[index] = '-';
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string u64_str(u64 nn) {
	{ // Unsafe block
		u64 n = nn;
		u64 d = ((u64)(0U));
		if (n == 0U) {
			return _S("0");
		}
		int max = 20;
		u8* buf = malloc_noscan((int)(max + 1));
		int index = max;
		buf[index] = 0;
		index--;
		for (;;) {
			if (!(n > 0U)) break;
			u64 n1 = (u64)(n / 100U);
			d = ((((u64)(n - ((u64)(n1 * 100U)))) << 1U));
			n = n1;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
			d++;
			buf[index] = _const_digit_pairs.str[ d];
			index--;
		}
		index++;
		if (d < 20U) {
			index++;
		}
		int diff = (int)(max - index);
		vmemmove(buf, ((voidptr)(buf + index)), (int)(diff + 1));
		return tos(buf, diff);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string bool_str(bool b) {
	if (b) {
		return _S("true");
	}
	return _S("false");
}
inline VV_LOC string u64_to_hex(u64 nn, u8 len) {
	u64 n = nn;
	Array_fixed_u8_17 buf = {0};
	buf[len] = 0;
	int i = 0;
	for (i = (u8)(len - 1); i >= 0; i--) {
		u8 d = ((u8)((n & 0xFU)));
		buf[i] = (d < 10 ? ((rune)(d + '0')) : ((u8)(d + 87)));
		n = (n >> 4U);
	}
	return tos(memdup(&buf[0], (u8)(len + 1)), len);
}
inline VV_LOC string u64_to_hex_no_leading_zeros(u64 nn, u8 len) {
	u64 n = nn;
	Array_fixed_u8_17 buf = {0};
	buf[len] = 0;
	int i = 0;
	for (i = (u8)(len - 1); i >= 0; i--) {
		u8 d = ((u8)((n & 0xFU)));
		buf[i] = (d < 10 ? ((rune)(d + '0')) : ((u8)(d + 87)));
		n = (n >> 4U);
		if (n == 0U) {
			break;
		}
	}
	int res_len = (int)(len - i);
	return tos(memdup(&buf[i], (int)(res_len + 1)), res_len);
}
string i8_hex(i8 nn) {
	if (nn == 0) {
		return _S("00");
	}
	return u64_to_hex(((u64)(nn)), 2);
}
string u16_hex(u16 nn) {
	if (nn == 0U) {
		return _S("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 4);
}
string i16_hex(i16 nn) {
	return u16_hex(((u16)(nn)));
}
string u32_hex(u32 nn) {
	if (nn == 0U) {
		return _S("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 8);
}
string int_hex(int nn) {
	return u32_hex(((u32)(nn)));
}
string u64_hex(u64 nn) {
	if (nn == 0U) {
		return _S("0");
	}
	return u64_to_hex_no_leading_zeros(nn, 16);
}
string i64_hex(i64 nn) {
	return u64_hex(((u64)(nn)));
}
string voidptr_str(voidptr nn) {
	return string__plus(_S("0x"), u64_hex(((u64)(nn))));
}
string byteptr_str(byteptr nn) {
	return string__plus(_S("0x"), u64_hex(((u64)(nn))));
}
string charptr_str(charptr nn) {
	return string__plus(_S("0x"), u64_hex(((u64)(nn))));
}
string u8_str(u8 b) {
	return int_str_l(((int)(b)), 7);
}
string u8_ascii_str(u8 b) {
	string str = ((string){.str = malloc_noscan(2), .len = 1});
	{ // Unsafe block
		str.str[0] = b;
		str.str[1] = 0;
	}
	return str;
}
string Array_u8_bytestr(Array_u8 b) {
	{ // Unsafe block
		u8* buf = malloc_noscan((int)(b.len + 1));
		vmemcpy(buf, b.data, b.len);
		buf[b.len] = 0;
		return tos(buf, b.len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
VV_LOC string _Atomic__int_str(int x) {
	return int_str(x);
}
inline int int_min(int a, int b) {
	return (a < b ? (a) : (b));
}
inline VV_LOC bool fast_string_eq(string a, string b) {
	if (a.len != b.len) {
		return false;
	}
	{ // Unsafe block
		return memcmp(a.str, b.str, b.len) == 0;
	}
	return 0;
}
VV_LOC u64 map_hash_string(voidptr pkey) {
	string key = *((string*)(pkey));
	return wyhash(key.str, ((u64)(key.len)), 0U, ((u64*)(((voidptr)(_wyp)))));
}
VV_LOC u64 map_hash_int_1(voidptr pkey) {
	return wyhash64(*((u8*)(pkey)), 0U);
}
VV_LOC u64 map_hash_int_2(voidptr pkey) {
	return wyhash64(*((u16*)(pkey)), 0U);
}
VV_LOC u64 map_hash_int_4(voidptr pkey) {
	return wyhash64(*((u32*)(pkey)), 0U);
}
VV_LOC u64 map_hash_int_8(voidptr pkey) {
	return wyhash64(*((u64*)(pkey)), 0U);
}
VV_LOC void DenseArray_zeros_to_end(DenseArray* d) {
	u8* tmp_value = _v_malloc(d->value_bytes);
	u8* tmp_key = _v_malloc(d->key_bytes);
	int count = 0;
	for (int i = 0; i < d->len; ++i) {
		if (DenseArray_has_index(d, i)) {
			{ // Unsafe block
				if (count != i) {
					memcpy(tmp_key, DenseArray_key(d, count), d->key_bytes);
					memcpy(DenseArray_key(d, count), DenseArray_key(d, i), d->key_bytes);
					memcpy(DenseArray_key(d, i), tmp_key, d->key_bytes);
					memcpy(tmp_value, DenseArray_value(d, count), d->value_bytes);
					memcpy(DenseArray_value(d, count), DenseArray_value(d, i), d->value_bytes);
					memcpy(DenseArray_value(d, i), tmp_value, d->value_bytes);
				}
			}
			count++;
		}
	}
	{ // Unsafe block
		_v_free(tmp_value);
		_v_free(tmp_key);
		d->deletes = 0U;
		_v_free(d->all_deleted);
	}
	d->len = count;
	int old_cap = d->cap;
	d->cap = (count < 8 ? (8) : (count));
	{ // Unsafe block
		d->values = realloc_data(d->values, (int)(d->value_bytes * old_cap), (int)(d->value_bytes * d->cap));
		d->keys = realloc_data(d->keys, (int)(d->key_bytes * old_cap), (int)(d->key_bytes * d->cap));
	}
}
inline VV_LOC DenseArray new_dense_array(int key_bytes, int value_bytes) {
	int cap = 8;
	return ((DenseArray){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.cap = cap,
		.len = 0,
		.deletes = 0U,
		.all_deleted = ((void*)0),
		.keys = _v_malloc(__at_least_one((u64)(((u64)(cap)) * ((u64)(key_bytes))))),
		.values = _v_malloc(__at_least_one((u64)(((u64)(cap)) * ((u64)(value_bytes))))),
	});
}
inline VV_LOC voidptr DenseArray_key(DenseArray* d, int i) {
	return ((voidptr)(d->keys + (int)(i * d->key_bytes)));
}
inline VV_LOC voidptr DenseArray_value(DenseArray* d, int i) {
	return ((voidptr)(d->values + (int)(i * d->value_bytes)));
}
inline VV_LOC bool DenseArray_has_index(DenseArray* d, int i) {
	return d->deletes == 0U || d->all_deleted[i] == 0;
}
inline VV_LOC int DenseArray_expand(DenseArray* d) {
	int old_cap = d->cap;
	int old_key_size = (int)(d->key_bytes * old_cap);
	int old_value_size = (int)(d->value_bytes * old_cap);
	if (d->cap == d->len) {
		d->cap += (d->cap >> 3);
		{ // Unsafe block
			d->keys = realloc_data(d->keys, old_key_size, (int)(d->key_bytes * d->cap));
			d->values = realloc_data(d->values, old_value_size, (int)(d->value_bytes * d->cap));
			if (d->deletes != 0U) {
				d->all_deleted = realloc_data(d->all_deleted, old_cap, d->cap);
				vmemset(((voidptr)(d->all_deleted + d->len)), 0, (int)(d->cap - d->len));
			}
		}
	}
	int push_index = d->len;
	{ // Unsafe block
		if (d->deletes != 0U) {
			d->all_deleted[push_index] = 0;
		}
	}
	d->len++;
	return push_index;
}
inline VV_LOC bool map_eq_string(voidptr a, voidptr b) {
	return fast_string_eq(*((string*)(a)), *((string*)(b)));
}
inline VV_LOC bool map_eq_int_1(voidptr a, voidptr b) {
	return *((u8*)(a)) == *((u8*)(b));
}
inline VV_LOC bool map_eq_int_2(voidptr a, voidptr b) {
	return *((u16*)(a)) == *((u16*)(b));
}
inline VV_LOC bool map_eq_int_4(voidptr a, voidptr b) {
	return *((u32*)(a)) == *((u32*)(b));
}
inline VV_LOC bool map_eq_int_8(voidptr a, voidptr b) {
	return *((u64*)(a)) == *((u64*)(b));
}
inline VV_LOC void map_clone_string(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		string s = *((string*)(pkey));
		*((string*)(dest)) = string_clone(s);
	}
}
inline VV_LOC void map_clone_int_1(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		*((u8*)(dest)) = *((u8*)(pkey));
	}
}
inline VV_LOC void map_clone_int_2(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		*((u16*)(dest)) = *((u16*)(pkey));
	}
}
inline VV_LOC void map_clone_int_4(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		*((u32*)(dest)) = *((u32*)(pkey));
	}
}
inline VV_LOC void map_clone_int_8(voidptr dest, voidptr pkey) {
	{ // Unsafe block
		*((u64*)(dest)) = *((u64*)(pkey));
	}
}
inline VV_LOC void map_free_string(voidptr pkey) {
	string_free(ADDR(string, (*((string*)(pkey)))));
}
inline VV_LOC void map_free_nop(voidptr _d1) {
}
VV_LOC map new_map(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr )) {
	int metasize = ((int)((u32)(sizeof(u32) * ((int_literal)(_const_init_capicity + _const_extra_metas_inc)))));
	bool has_string_keys = _us32_lt(sizeof(voidptr),key_bytes);
	return ((map){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.even_index = _const_init_even_index,
		.cached_hashbits = _const_max_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array(key_bytes, value_bytes),
		.metas = ((u32*)(vcalloc_noscan(metasize))),
		.extra_metas = _const_extra_metas_inc,
		.has_string_keys = has_string_keys,
		.hash_fn = (voidptr)hash_fn,
		.key_eq_fn = (voidptr)key_eq_fn,
		.clone_fn = (voidptr)clone_fn,
		.free_fn = (voidptr)free_fn,
		.len = 0,
	});
}
VV_LOC map new_map_init(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = new_map(key_bytes, value_bytes, (voidptr)hash_fn, (voidptr)key_eq_fn, (voidptr)clone_fn, (voidptr)free_fn);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{ // Unsafe block
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}
VV_LOC map new_map_update_init(map* update, int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = map_clone(update);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{ // Unsafe block
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}
map map_move(map* m) {
	map r = *m;
	vmemset(m, 0, ((int)(sizeof(map))));
	return r;
}
void map_clear(map* m) {
	{ // Unsafe block
		if (m->key_values.all_deleted != 0) {
			_v_free(m->key_values.all_deleted);
			m->key_values.all_deleted = ((void*)0);
		}
		vmemset(m->key_values.keys, 0, (int)(m->key_values.key_bytes * m->key_values.cap));
		vmemset(m->metas, 0, (u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas))));
	}
	m->key_values.len = 0;
	m->key_values.deletes = 0U;
	m->even_index = _const_init_even_index;
	m->cached_hashbits = _const_max_cached_hashbits;
	m->shift = _const_init_log_capicity;
	m->len = 0;
}
inline VV_LOC multi_return_u32_u32 map_key_to_index(map* m, voidptr pkey) {
	u64 hash = m->hash_fn(pkey);
	u64 index = (hash & m->even_index);
	u64 meta = (((((hash >> m->shift)) & _const_hash_mask)) | _const_probe_inc);
	return (multi_return_u32_u32){.arg0=((u32)(index)), .arg1=((u32)(meta))};
}
inline VV_LOC multi_return_u32_u32 map_meta_less(map* m, u32 _index, u32 _metas) {
	u32 index = _index;
	u32 meta = _metas;
	for (;;) {
		if (!(meta < m->metas[index])) break;
		index += 2U;
		meta += _const_probe_inc;
	}
	return (multi_return_u32_u32){.arg0=index, .arg1=meta};
}
inline VV_LOC void map_meta_greater(map* m, u32 _index, u32 _metas, u32 kvi) {
	u32 meta = _metas;
	u32 index = _index;
	u32 kv_index = kvi;
	for (;;) {
		if (!(m->metas[index] != 0U)) break;
		if (meta > m->metas[index]) {
			{ // Unsafe block
				u32 tmp_meta = m->metas[index];
				m->metas[index] = meta;
				meta = tmp_meta;
				u32 tmp_index = m->metas[(u32)(index + 1U)];
				m->metas[(u32)(index + 1U)] = kv_index;
				kv_index = tmp_index;
			}
		}
		index += 2U;
		meta += _const_probe_inc;
	}
	{ // Unsafe block
		m->metas[index] = meta;
		m->metas[(u32)(index + 1U)] = kv_index;
	}
	u32 probe_count = (u32)(((meta >> _const_hashbits)) - 1U);
	map_ensure_extra_metas(m, probe_count);
}
inline VV_LOC void map_ensure_extra_metas(map* m, u32 probe_count) {
	if (((probe_count << 1U)) == m->extra_metas) {
		u32 size_of_u32 = sizeof(u32);
		u32 old_mem_size = ((u32)((u32)(m->even_index + 2U) + m->extra_metas));
		m->extra_metas += _const_extra_metas_inc;
		u32 mem_size = ((u32)((u32)(m->even_index + 2U) + m->extra_metas));
		{ // Unsafe block
			u8* x = realloc_data(((u8*)(m->metas)), ((int)((u32)(size_of_u32 * old_mem_size))), ((int)((u32)(size_of_u32 * mem_size))));
			m->metas = ((u32*)(x));
			vmemset(m->metas + mem_size - _const_extra_metas_inc, 0, ((int)((u32)(sizeof(u32) * _const_extra_metas_inc))));
		}
		if (probe_count == 252U) {
			_v_panic(_S("Probe overflow"));
			VUNREACHABLE();
		}
	}
}
VV_LOC void map_set(map* m, voidptr key, voidptr value) {
	f32 load_factor = (f32)(((f32)((((u32)(m->len)) << 1U))) / ((f32)(m->even_index)));
	if (load_factor > ((f32)(_const_max_load_factor))) {
		map_expand(m);
	}
	multi_return_u32_u32 mr_12308 = map_key_to_index(m, key);
	u32 index = mr_12308.arg0;
	u32 meta = mr_12308.arg1;
	multi_return_u32_u32 mr_12344 = map_meta_less(m, index, meta);
	index = mr_12344.arg0;
	meta = mr_12344.arg1;
	for (;;) {
		if (!(meta == m->metas[index])) break;
		int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
		voidptr pkey = DenseArray_key(&m->key_values, kv_index);
		if (m->key_eq_fn(key, pkey)) {
			{ // Unsafe block
				voidptr pval = DenseArray_value(&m->key_values, kv_index);
				vmemcpy(pval, value, m->value_bytes);
			}
			return;
		}
		index += 2U;
		meta += _const_probe_inc;
	}
	int kv_index = DenseArray_expand(&m->key_values);
	{ // Unsafe block
		voidptr pkey = DenseArray_key(&m->key_values, kv_index);
		voidptr pvalue = DenseArray_value(&m->key_values, kv_index);
		m->clone_fn(pkey, key);
		vmemcpy(((u8*)(pvalue)), value, m->value_bytes);
	}
	map_meta_greater(m, index, meta, ((u32)(kv_index)));
	m->len++;
}
VV_LOC void map_expand(map* m) {
	u32 old_cap = m->even_index;
	m->even_index = (u32)(((((u32)(m->even_index + 2U)) << 1U)) - 2U);
	if (m->cached_hashbits == 0) {
		m->shift += _const_max_cached_hashbits;
		m->cached_hashbits = _const_max_cached_hashbits;
		map_rehash(m);
	} else {
		map_cached_rehash(m, old_cap);
		m->cached_hashbits--;
	}
}
VV_LOC void map_rehash(map* m) {
	u32 meta_bytes = (u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas)));
	map_reserve(m, meta_bytes);
}
void map_reserve(map* m, u32 meta_bytes) {
	{ // Unsafe block
		u8* x = v_realloc(((u8*)(m->metas)), ((int)(meta_bytes)));
		m->metas = ((u32*)(x));
		vmemset(m->metas, 0, ((int)(meta_bytes)));
	}
	for (int i = 0; i < m->key_values.len; i++) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		voidptr pkey = DenseArray_key(&m->key_values, i);
		multi_return_u32_u32 mr_14105 = map_key_to_index(m, pkey);
		u32 index = mr_14105.arg0;
		u32 meta = mr_14105.arg1;
		multi_return_u32_u32 mr_14143 = map_meta_less(m, index, meta);
		index = mr_14143.arg0;
		meta = mr_14143.arg1;
		map_meta_greater(m, index, meta, ((u32)(i)));
	}
}
VV_LOC void map_cached_rehash(map* m, u32 old_cap) {
	u32* old_metas = m->metas;
	int metasize = ((int)((u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas)))));
	m->metas = ((u32*)(vcalloc(metasize)));
	u32 old_extra_metas = m->extra_metas;
	for (u32 i = ((u32)(0U)); i <= (u32)(old_cap + old_extra_metas); i += 2U) {
		if (old_metas[i] == 0U) {
			continue;
		}
		u32 old_meta = old_metas[i];
		u32 old_probe_count = (((u32)(((old_meta >> _const_hashbits)) - 1U)) << 1U);
		u32 old_index = (((u32)(i - old_probe_count)) & ((m->even_index >> 1U)));
		u32 index = (((old_index | ((old_meta << m->shift)))) & m->even_index);
		u32 meta = (((old_meta & _const_hash_mask)) | _const_probe_inc);
		multi_return_u32_u32 mr_14945 = map_meta_less(m, index, meta);
		index = mr_14945.arg0;
		meta = mr_14945.arg1;
		u32 kv_index = old_metas[(u32)(i + 1U)];
		map_meta_greater(m, index, meta, kv_index);
	}
	_v_free(old_metas);
}
VV_LOC voidptr map_get_and_set(map* m, voidptr key, voidptr zero) {
	for (;;) {
		multi_return_u32_u32 mr_15393 = map_key_to_index(m, key);
		u32 index = mr_15393.arg0;
		u32 meta = mr_15393.arg1;
		for (;;) {
			if (meta == m->metas[index]) {
				int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
				voidptr pkey = DenseArray_key(&m->key_values, kv_index);
				if (m->key_eq_fn(key, pkey)) {
					voidptr pval = DenseArray_value(&m->key_values, kv_index);
					return ((u8*)(pval));
				}
			}
			index += 2U;
			meta += _const_probe_inc;
			if (meta > m->metas[index]) {
				break;
			}
		}
		map_set(m, key, zero);
	}
	return ((void*)0);
}
VV_LOC voidptr map_get(map* m, voidptr key, voidptr zero) {
	multi_return_u32_u32 mr_16120 = map_key_to_index(m, key);
	u32 index = mr_16120.arg0;
	u32 meta = mr_16120.arg1;
	for (;;) {
		if (meta == m->metas[index]) {
			int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
			voidptr pkey = DenseArray_key(&m->key_values, kv_index);
			if (m->key_eq_fn(key, pkey)) {
				voidptr pval = DenseArray_value(&m->key_values, kv_index);
				return ((u8*)(pval));
			}
		}
		index += 2U;
		meta += _const_probe_inc;
		if (meta > m->metas[index]) {
			break;
		}
	}
	return zero;
}
VV_LOC voidptr map_get_check(map* m, voidptr key) {
	multi_return_u32_u32 mr_16785 = map_key_to_index(m, key);
	u32 index = mr_16785.arg0;
	u32 meta = mr_16785.arg1;
	for (;;) {
		if (meta == m->metas[index]) {
			int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
			voidptr pkey = DenseArray_key(&m->key_values, kv_index);
			if (m->key_eq_fn(key, pkey)) {
				voidptr pval = DenseArray_value(&m->key_values, kv_index);
				return ((u8*)(pval));
			}
		}
		index += 2U;
		meta += _const_probe_inc;
		if (meta > m->metas[index]) {
			break;
		}
	}
	return 0;
}
VV_LOC bool map_exists(map* m, voidptr key) {
	multi_return_u32_u32 mr_17295 = map_key_to_index(m, key);
	u32 index = mr_17295.arg0;
	u32 meta = mr_17295.arg1;
	for (;;) {
		if (meta == m->metas[index]) {
			int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
			voidptr pkey = DenseArray_key(&m->key_values, kv_index);
			if (m->key_eq_fn(key, pkey)) {
				return true;
			}
		}
		index += 2U;
		meta += _const_probe_inc;
		if (meta > m->metas[index]) {
			break;
		}
	}
	return false;
}
inline VV_LOC void DenseArray_delete(DenseArray* d, int i) {
	if (d->deletes == 0U) {
		d->all_deleted = vcalloc(d->cap);
	}
	d->deletes++;
	{ // Unsafe block
		d->all_deleted[i] = 1;
	}
}
void map_delete(map* m, voidptr key) {
	multi_return_u32_u32 mr_17933 = map_key_to_index(m, key);
	u32 index = mr_17933.arg0;
	u32 meta = mr_17933.arg1;
	multi_return_u32_u32 mr_17969 = map_meta_less(m, index, meta);
	index = mr_17969.arg0;
	meta = mr_17969.arg1;
	for (;;) {
		if (!(meta == m->metas[index])) break;
		int kv_index = ((int)(m->metas[(u32)(index + 1U)]));
		voidptr pkey = DenseArray_key(&m->key_values, kv_index);
		if (m->key_eq_fn(key, pkey)) {
			for (;;) {
				if (!(((m->metas[(u32)(index + 2U)] >> _const_hashbits)) > 1U)) break;
				{ // Unsafe block
					m->metas[index] = (u32)(m->metas[(u32)(index + 2U)] - _const_probe_inc);
					m->metas[(u32)(index + 1U)] = m->metas[(u32)(index + 3U)];
				}
				index += 2U;
			}
			m->len--;
			DenseArray_delete(&m->key_values, kv_index);
			{ // Unsafe block
				m->metas[index] = 0U;
				m->free_fn(pkey);
				vmemset(pkey, 0, m->key_bytes);
			}
			if (m->key_values.len <= 32) {
				return;
			}
			if (_us32_ge(m->key_values.deletes,((m->key_values.len >> 1)))) {
				DenseArray_zeros_to_end(&m->key_values);
				map_rehash(m);
			}
			return;
		}
		index += 2U;
		meta += _const_probe_inc;
	}
}
array map_keys(map* m) {
	array keys = __new_array(m->len, 0, m->key_bytes);
	u8* item = ((u8*)(keys.data));
	if (m->key_values.deletes == 0U) {
		for (int i = 0; i < m->key_values.len; i++) {
			{ // Unsafe block
				voidptr pkey = DenseArray_key(&m->key_values, i);
				m->clone_fn(item, pkey);
				item = item + m->key_bytes;
			}
		}
		return keys;
	}
	for (int i = 0; i < m->key_values.len; i++) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		{ // Unsafe block
			voidptr pkey = DenseArray_key(&m->key_values, i);
			m->clone_fn(item, pkey);
			item = item + m->key_bytes;
		}
	}
	return keys;
}
array map_values(map* m) {
	array values = __new_array(m->len, 0, m->value_bytes);
	u8* item = ((u8*)(values.data));
	if (m->key_values.deletes == 0U) {
		vmemcpy(item, m->key_values.values, (int)(m->value_bytes * m->key_values.len));
		return values;
	}
	for (int i = 0; i < m->key_values.len; i++) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		{ // Unsafe block
			voidptr pvalue = DenseArray_value(&m->key_values, i);
			vmemcpy(item, pvalue, m->value_bytes);
			item = item + m->value_bytes;
		}
	}
	return values;
}
VV_LOC DenseArray DenseArray_clone(DenseArray* d) {
	DenseArray res = ((DenseArray){
		.key_bytes = d->key_bytes,
		.value_bytes = d->value_bytes,
		.cap = d->cap,
		.len = d->len,
		.deletes = d->deletes,
		.all_deleted = ((void*)0),
		.keys = ((void*)0),
		.values = ((void*)0),
	});
	{ // Unsafe block
		if (d->deletes != 0U) {
			res.all_deleted = memdup(d->all_deleted, d->cap);
		}
		res.keys = memdup(d->keys, (int)(d->cap * d->key_bytes));
		res.values = memdup(d->values, (int)(d->cap * d->value_bytes));
	}
	return res;
}
map map_clone(map* m) {
	int metasize = ((int)((u32)(sizeof(u32) * ((u32)((u32)(m->even_index + 2U) + m->extra_metas)))));
	map res = ((map){
		.key_bytes = m->key_bytes,
		.value_bytes = m->value_bytes,
		.even_index = m->even_index,
		.cached_hashbits = m->cached_hashbits,
		.shift = m->shift,
		.key_values = DenseArray_clone(&m->key_values),
		.metas = ((u32*)(malloc_noscan(metasize))),
		.extra_metas = m->extra_metas,
		.has_string_keys = m->has_string_keys,
		.hash_fn = (voidptr)m->hash_fn,
		.key_eq_fn = (voidptr)m->key_eq_fn,
		.clone_fn = (voidptr)m->clone_fn,
		.free_fn = (voidptr)m->free_fn,
		.len = m->len,
	});
	vmemcpy(res.metas, m->metas, metasize);
	if (!m->has_string_keys) {
		return res;
	}
	for (int i = 0; i < m->key_values.len; ++i) {
		if (!DenseArray_has_index(&m->key_values, i)) {
			continue;
		}
		m->clone_fn(DenseArray_key(&res.key_values, i), DenseArray_key(&m->key_values, i));
	}
	return res;
}
void map_free(map* m) {
	_v_free(m->metas);
	{ // Unsafe block
		m->metas = ((void*)0);
	}
	if (m->key_values.deletes == 0U) {
		for (int i = 0; i < m->key_values.len; i++) {
			{ // Unsafe block
				voidptr pkey = DenseArray_key(&m->key_values, i);
				m->free_fn(pkey);
				vmemset(pkey, 0, m->key_bytes);
			}
		}
	} else {
		for (int i = 0; i < m->key_values.len; i++) {
			if (!DenseArray_has_index(&m->key_values, i)) {
				continue;
			}
			{ // Unsafe block
				voidptr pkey = DenseArray_key(&m->key_values, i);
				m->free_fn(pkey);
				vmemset(pkey, 0, m->key_bytes);
			}
		}
	}
	{ // Unsafe block
		if (m->key_values.all_deleted != ((void*)0)) {
			_v_free(m->key_values.all_deleted);
			m->key_values.all_deleted = ((void*)0);
		}
		if (m->key_values.keys != ((void*)0)) {
			_v_free(m->key_values.keys);
			m->key_values.keys = ((void*)0);
		}
		if (m->key_values.values != ((void*)0)) {
			_v_free(m->key_values.values);
			m->key_values.values = ((void*)0);
		}
		m->hash_fn = (voidptr)((void*)0);
		m->key_eq_fn = (voidptr)((void*)0);
		m->clone_fn = (voidptr)((void*)0);
		m->free_fn = (voidptr)((void*)0);
	}
}
inline VV_LOC u8* __malloc_at_least_one(u64 how_many_bytes, bool noscan) {
	if (noscan) {
		return malloc_noscan(__at_least_one(how_many_bytes));
	}
	return _v_malloc(__at_least_one(how_many_bytes));
}
inline VV_LOC DenseArray new_dense_array_noscan(int key_bytes, bool key_noscan, int value_bytes, bool value_noscan) {
	int cap = 8;
	return ((DenseArray){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.cap = cap,
		.len = 0,
		.deletes = 0U,
		.all_deleted = ((void*)0),
		.keys = __malloc_at_least_one((u64)(((u64)(cap)) * ((u64)(key_bytes))), key_noscan),
		.values = __malloc_at_least_one((u64)(((u64)(cap)) * ((u64)(value_bytes))), value_noscan),
	});
}
VV_LOC map new_map_noscan_key(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr )) {
	int metasize = ((int)((u32)(sizeof(u32) * ((int_literal)(_const_init_capicity + _const_extra_metas_inc)))));
	bool has_string_keys = _us32_lt(sizeof(voidptr),key_bytes);
	return ((map){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.even_index = _const_init_even_index,
		.cached_hashbits = _const_max_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array_noscan(key_bytes, true, value_bytes, false),
		.metas = ((u32*)(vcalloc_noscan(metasize))),
		.extra_metas = _const_extra_metas_inc,
		.has_string_keys = has_string_keys,
		.hash_fn = (voidptr)hash_fn,
		.key_eq_fn = (voidptr)key_eq_fn,
		.clone_fn = (voidptr)clone_fn,
		.free_fn = (voidptr)free_fn,
		.len = 0,
	});
}
VV_LOC map new_map_noscan_value(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr )) {
	int metasize = ((int)((u32)(sizeof(u32) * ((int_literal)(_const_init_capicity + _const_extra_metas_inc)))));
	bool has_string_keys = _us32_lt(sizeof(voidptr),key_bytes);
	return ((map){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.even_index = _const_init_even_index,
		.cached_hashbits = _const_max_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array_noscan(key_bytes, false, value_bytes, true),
		.metas = ((u32*)(vcalloc_noscan(metasize))),
		.extra_metas = _const_extra_metas_inc,
		.has_string_keys = has_string_keys,
		.hash_fn = (voidptr)hash_fn,
		.key_eq_fn = (voidptr)key_eq_fn,
		.clone_fn = (voidptr)clone_fn,
		.free_fn = (voidptr)free_fn,
		.len = 0,
	});
}
VV_LOC map new_map_noscan_key_value(int key_bytes, int value_bytes, u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr )) {
	int metasize = ((int)((u32)(sizeof(u32) * ((int_literal)(_const_init_capicity + _const_extra_metas_inc)))));
	bool has_string_keys = _us32_lt(sizeof(voidptr),key_bytes);
	return ((map){
		.key_bytes = key_bytes,
		.value_bytes = value_bytes,
		.even_index = _const_init_even_index,
		.cached_hashbits = _const_max_cached_hashbits,
		.shift = _const_init_log_capicity,
		.key_values = new_dense_array_noscan(key_bytes, true, value_bytes, true),
		.metas = ((u32*)(vcalloc_noscan(metasize))),
		.extra_metas = _const_extra_metas_inc,
		.has_string_keys = has_string_keys,
		.hash_fn = (voidptr)hash_fn,
		.key_eq_fn = (voidptr)key_eq_fn,
		.clone_fn = (voidptr)clone_fn,
		.free_fn = (voidptr)free_fn,
		.len = 0,
	});
}
VV_LOC map new_map_init_noscan_key(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = new_map_noscan_key(key_bytes, value_bytes, (voidptr)hash_fn, (voidptr)key_eq_fn, (voidptr)clone_fn, (voidptr)free_fn);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{ // Unsafe block
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}
VV_LOC map new_map_init_noscan_value(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = new_map_noscan_value(key_bytes, value_bytes, (voidptr)hash_fn, (voidptr)key_eq_fn, (voidptr)clone_fn, (voidptr)free_fn);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{ // Unsafe block
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}
VV_LOC map new_map_init_noscan_key_value(u64 (*hash_fn)(voidptr ), bool (*key_eq_fn)(voidptr , voidptr ), void (*clone_fn)(voidptr , voidptr ), void (*free_fn)(voidptr ), int n, int key_bytes, int value_bytes, voidptr keys, voidptr values) {
	map out = new_map_noscan_key_value(key_bytes, value_bytes, (voidptr)hash_fn, (voidptr)key_eq_fn, (voidptr)clone_fn, (voidptr)free_fn);
	u8* pkey = ((u8*)(keys));
	u8* pval = ((u8*)(values));
	for (int _t1 = 0; _t1 < n; ++_t1) {
		{ // Unsafe block
			map_set(&out, pkey, pval);
			pkey = pkey + key_bytes;
			pval = pval + value_bytes;
		}
	}
	return out;
}
void IError_free(IError* ie) {
	{ // Unsafe block
		IError* cie = ((IError*)(ie));
		_v_free(cie->_object);
	}
}
VV_LOC void _option_none(voidptr data, _option* option, int size) {
	{ // Unsafe block
		*option = ((_option){.state = 2,.err = _const_none__,});
		vmemcpy(((u8*)(&option->err)) + sizeof(IError), data, size);
	}
}
VV_LOC void _option_ok(voidptr data, _option* option, int size) {
	{ // Unsafe block
		*option = ((_option){.state = 0,.err = _const_none__,});
		vmemcpy(((u8*)(&option->err)) + sizeof(IError), data, size);
	}
}
VV_LOC void _option_clone(_option* current, _option* option, int size) {
	{ // Unsafe block
		*option = ((_option){.state = current->state,.err = current->err,});
		vmemcpy(((u8*)(&option->err)) + sizeof(IError), ((u8*)(&current->err)) + sizeof(IError), size);
	}
}
VV_LOC string None___str(None__ _d1) {
	return _S("none");
}
string none_str(none _d1) {
	return _S("none");
}
VV_LOC void _result_ok(voidptr data, _result* res, int size) {
	{ // Unsafe block
		*res = ((_result){.is_error = 0,.err = _const_none__,});
		vmemcpy(((u8*)(&res->err)) + sizeof(IError), data, size);
	}
}
string IError_str(IError err) {
	return ((err._typ == _IError_None___index)? (_S("none")) : (err._typ == _IError_Error_index)? (Error_msg(*(err._Error))) : (err._typ == _IError_MessageError_index)? (MessageError_str((*(err._MessageError)))) : (str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = charptr_vstring_literal(v_typeof_interface_IError( (err)._typ ))}}, {_S(": "), 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_SLIT0, 0, { .d_c = 0 }}}))));
}
string Error_msg(Error err) {
	return _S("");
}
int Error_code(Error err) {
	return 0;
}
string MessageError_str(MessageError err) {
	if (err.code > 0) {
		return str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = err.msg}}, {_S("; code: "), 0xfe07, {.d_i32 = err.code}}, {_SLIT0, 0, { .d_c = 0 }}}));
	}
	return err.msg;
}
string MessageError_msg(MessageError err) {
	return err.msg;
}
int MessageError_code(MessageError err) {
	return err.code;
}
void MessageError_free(MessageError* err) {
	string_free(&err->msg);
}
inline IError _v_error(string message) {
	;
	return I_MessageError_to_Interface_IError(((MessageError*)memdup(&(MessageError){.msg = message,.code = 0,}, sizeof(MessageError))));
}
inline IError error_with_code(string message, int code) {
	;
	return I_MessageError_to_Interface_IError(((MessageError*)memdup(&(MessageError){.msg = message,.code = code,}, sizeof(MessageError))));
}
string rune_str(rune c) {
	return utf32_to_str(((u32)(c)));
}
string Array_rune_string(Array_rune ra) {
	strings__Builder sb = strings__new_builder(ra.len);
	strings__Builder_write_runes(&sb, ra);
	string res = strings__Builder_str(&sb);
	strings__Builder_free(&sb);
	return res;
}
rune rune_to_upper(rune c) {
	if (c < 0x80) {
		if (c >= 'a' && c <= 'z') {
			return (rune)(c - 32);
		}
		return c;
	}
	return rune_map_to(c, MapMode__to_upper);
}
rune rune_to_lower(rune c) {
	if (c < 0x80) {
		if (c >= 'A' && c <= 'Z') {
			return (rune)(c + 32);
		}
		return c;
	}
	return rune_map_to(c, MapMode__to_lower);
}
VV_LOC rune rune_map_to(rune c, MapMode mode) {
	int start = 0;
	int end = (int)(1264 / _const_rune_maps_columns_in_row);
	for (;;) {
		if (!(start < end)) break;
		int middle = (int)(((int)(start + end)) / 2);
		i32* cur_map = &_const_rune_maps[(int)(middle * _const_rune_maps_columns_in_row)];
		if (c >= ((u32)(*cur_map)) && c <= ((u32)(*(cur_map + 1)))) {
			i32 offset = ((mode == MapMode__to_upper || mode == MapMode__to_title) ? (*(cur_map + 2)) : (*(cur_map + 3)));
			if (offset == _const_rune_maps_ul) {
				rune cnt = (rune)(((rune)(c - *cur_map)) % 2);
				if (mode == MapMode__to_lower) {
					return (rune)((rune)(c + 1) - cnt);
				}
				return (rune)(c - cnt);
			} else if (offset == _const_rune_maps_utl) {
				rune cnt = (rune)(((rune)(c - *cur_map)) % 3);
				if (mode == MapMode__to_upper) {
					return (rune)(c - cnt);
				} else if (mode == MapMode__to_lower) {
					return (rune)((rune)(c + 2) - cnt);
				}
				return (rune)((rune)(c + 1) - cnt);
			}
			return (rune)(c + offset);
		}
		if (c < ((u32)(*cur_map))) {
			end = middle;
		} else {
			start = (int)(middle + 1);
		}
	}
	return c;
}
VV_LOC void mapnode_free(mapnode* n) {
	println(_S("TODO"));
}
void SortedMap_free(SortedMap* m) {
	if (m->root == ((void*)0)) {
		return;
	}
	mapnode_free(m->root);
}
Array_rune string_runes(string s) {
	Array_rune runes = __new_array_with_default_noscan(0, s.len, sizeof(rune), 0);
	for (int i = 0; i < s.len; i++) {
		int char_len = utf8_char_len(s.str[i]);
		if (char_len > 1) {
			int end = ((int)(s.len - 1) >= (int)(i + char_len) ? ((int)(i + char_len)) : (s.len));
			string r = string_substr(s, i, end);
			array_push_noscan((array*)&runes, _MOV((rune[]){ string_utf32_code(r) }));
			i += (int)(char_len - 1);
		} else {
			array_push_noscan((array*)&runes, _MOV((rune[]){ s.str[i] }));
		}
	}
	return runes;
}
string cstring_to_vstring(const char* const_s) {
	return string_clone(tos2(((u8*)(const_s))));
}
string tos_clone(const u8* const_s) {
	return string_clone(tos2(((u8*)(const_s))));
}
string tos(u8* s, int len) {
	if (s == 0) {
		_v_panic(_S("tos(): nil string"));
		VUNREACHABLE();
	}
	return ((string){.str = s, .len = len});
}
string tos2(u8* s) {
	if (s == 0) {
		_v_panic(_S("tos2: nil string"));
		VUNREACHABLE();
	}
	return ((string){.str = s, .len = vstrlen(s)});
}
string tos3(char* s) {
	if (s == 0) {
		_v_panic(_S("tos3: nil string"));
		VUNREACHABLE();
	}
	return ((string){.str = ((u8*)(s)), .len = vstrlen_char(s)});
}
string tos4(u8* s) {
	if (s == 0) {
		return _S("");
	}
	return ((string){.str = s, .len = vstrlen(s)});
}
string tos5(char* s) {
	if (s == 0) {
		return _S("");
	}
	return ((string){.str = ((u8*)(s)), .len = vstrlen_char(s)});
}
string u8_vstring_with_len(u8* bp, int len) {
	return ((string){.str = bp, .len = len, .is_lit = 0});
}
string char_vstring_literal_with_len(char* cp, int len) {
	return ((string){.str = ((u8*)(cp)), .len = len, .is_lit = 1});
}
bool string_is_pure_ascii(string s) {
	for (int i = 0; i < s.len; ++i) {
		if (s.str[ i] >= 0x80) {
			return false;
		}
	}
	return true;
}
inline VV_LOC string string_clone_static(string a) {
	return string_clone(a);
}
string string_clone(string a) {
	if (a.len <= 0) {
		return _S("");
	}
	string b = ((string){.str = malloc_noscan((int)(a.len + 1)), .len = a.len});
	{ // Unsafe block
		vmemcpy(b.str, a.str, a.len);
		b.str[a.len] = 0;
	}
	return b;
}
string string_replace_once(string s, string rep, string with) {
	int idx = string_index_(s, rep);
	if (idx == -1) {
		return string_clone(s);
	}
	return string_plus_two(string_substr_unsafe(s, 0, idx), with, string_substr_unsafe(s, (int)(idx + rep.len), s.len));
}
string string_replace(string s, string rep, string with) {
	bool string_replace_defer_0 = false;
	int pidxs_cap;
	int* pidxs;
	if (s.len == 0 || rep.len == 0 || rep.len > s.len) {
		return string_clone(s);
	}
	if (!string_contains(s, rep)) {
		return string_clone(s);
	}
	int pidxs_len = 0;
	pidxs_cap = (int)(s.len / rep.len);
	Array_fixed_int_10 stack_idxs = {0};
	pidxs = &stack_idxs[0];
	if (pidxs_cap > _const_replace_stack_buffer_size) {
		pidxs = ((int*)(_v_malloc((int)(((int)(sizeof(int))) * pidxs_cap))));
	}
	string_replace_defer_0 = true;
	int idx = 0;
	for (;;) {
		idx = string_index_after_(s, rep, idx);
		if (idx == -1) {
			break;
		}
		{ // Unsafe block
			pidxs[pidxs_len] = idx;
			pidxs_len++;
		}
		idx += rep.len;
	}
	if (pidxs_len == 0) {
		string _t3 = string_clone(s);
		// Defer begin
		if (string_replace_defer_0) {
			if (pidxs_cap > _const_replace_stack_buffer_size) {
				_v_free(pidxs);
			}
		}
		// Defer end
		return _t3;
	}
	int new_len = (int)(s.len + (int)(pidxs_len * ((int)(with.len - rep.len))));
	u8* b = malloc_noscan((int)(new_len + 1));
	int b_i = 0;
	int s_idx = 0;
	for (int j = 0; j < pidxs_len; ++j) {
		int rep_pos = pidxs[j];
		int before_len = (int)(rep_pos - s_idx);
		vmemcpy(&b[b_i], &s.str[s_idx], before_len);
		b_i += before_len;
		s_idx = (int)(rep_pos + rep.len);
		vmemcpy(&b[b_i], &with.str[0], with.len);
		b_i += with.len;
	}
	if (s_idx < s.len) {
		vmemcpy(&b[b_i], &s.str[s_idx], (int)(s.len - s_idx));
	}
	{ // Unsafe block
		b[new_len] = 0;
		string _t4 = tos(b, new_len);
		// Defer begin
		if (string_replace_defer_0) {
			if (pidxs_cap > _const_replace_stack_buffer_size) {
				_v_free(pidxs);
			}
		}
		// Defer end
		return _t4;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline int string_int(string s) {
	_result_i64 _t2 = strconv__common_parse_int(s, 0, 32, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(i64*) _t2.data = 0;
	}
	
 	return ((int)((*(i64*)_t2.data)));
}
inline u8 string_u8(string s) {
	_result_u64 _t2 = strconv__common_parse_uint(s, 0, 8, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(u64*) _t2.data = 0U;
	}
	
 	return ((u8)((*(u64*)_t2.data)));
}
inline u64 string_u64(string s) {
	_result_u64 _t2 = strconv__common_parse_uint(s, 0, 64, false, false);
	if (_t2.is_error) {
		IError err = _t2.err;
		*(u64*) _t2.data = 0U;
	}
	
 	return (*(u64*)_t2.data);
}
VV_LOC bool string__eq(string s, string a) {
	if (s.str == 0) {
		_v_panic(_S("string.eq(): nil string"));
		VUNREACHABLE();
	}
	if (s.len != a.len) {
		return false;
	}
	{ // Unsafe block
		return vmemcmp(s.str, a.str, a.len) == 0;
	}
	return 0;
}
VV_LOC bool string__lt(string s, string a) {
	for (int i = 0; i < s.len; ++i) {
		if (i >= a.len || s.str[ i] > a.str[ i]) {
			return false;
		} else if (s.str[ i] < a.str[ i]) {
			return true;
		}
	}
	if (s.len < a.len) {
		return true;
	}
	return false;
}
VV_LOC string string__plus(string s, string a) {
	int new_len = (int)(a.len + s.len);
	string res = ((string){.str = malloc_noscan((int)(new_len + 1)), .len = new_len});
	{ // Unsafe block
		vmemcpy(res.str, s.str, s.len);
		vmemcpy(res.str + s.len, a.str, a.len);
	}
	{ // Unsafe block
		res.str[new_len] = 0;
	}
	return res;
}
VV_LOC string string_plus_two(string s, string a, string b) {
	int new_len = (int)((int)(a.len + b.len) + s.len);
	string res = ((string){.str = malloc_noscan((int)(new_len + 1)), .len = new_len});
	{ // Unsafe block
		vmemcpy(res.str, s.str, s.len);
		vmemcpy(res.str + s.len, a.str, a.len);
		vmemcpy(res.str + s.len + a.len, b.str, b.len);
	}
	{ // Unsafe block
		res.str[new_len] = 0;
	}
	return res;
}
inline Array_string string_split(string s, string delim) {
	return string_split_nth(s, delim, 0);
}
Array_string string_split_nth(string s, string delim, int nth) {
	bool string_split_nth_defer_0 = false;
	Array_string res;
	res = __new_array_with_default(0, 0, sizeof(string), 0);
	ArrayFlags_set(&res.flags, ArrayFlags__noslices);
	string_split_nth_defer_0 = true;
	switch (delim.len) {
		case 0: {
			for (int i = 0; i < s.len; ++i) {
				u8 ch = s.str[i];
				if (nth > 0 && res.len == (int)(nth - 1)) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, i, 2147483647) }));
					break;
				}
				array_push((array*)&res, _MOV((string[]){ u8_ascii_str(ch) }));
			}
			break;
		}
		case 1: {
			u8 delim_byte = delim.str[ 0];
			int start = 0;
			for (int i = 0; i < s.len; ++i) {
				u8 ch = s.str[i];
				if (ch == delim_byte) {
					if (nth > 0 && res.len == (int)(nth - 1)) {
						break;
					}
					array_push((array*)&res, _MOV((string[]){ string_substr(s, start, i) }));
					start = (int)(i + 1);
				}
			}
			if (nth < 1 || res.len < nth) {
				array_push((array*)&res, _MOV((string[]){ string_substr(s, start, 2147483647) }));
			}
			break;
		}
		default: {
			{
				int start = 0;
				for (int i = 0; (int)(i + delim.len) <= s.len; ) {
					if (string__eq(string_substr_unsafe(s, i, (int)(i + delim.len)), delim)) {
						if (nth > 0 && res.len == (int)(nth - 1)) {
							break;
						}
						array_push((array*)&res, _MOV((string[]){ string_substr(s, start, i) }));
						i += delim.len;
						start = i;
					} else {
						i++;
					}
				}
				if (nth < 1 || res.len < nth) {
					array_push((array*)&res, _MOV((string[]){ string_substr(s, start, 2147483647) }));
				}
				break;
			}
		}
	}
	
	Array_string _t7 = res;
	// Defer begin
	if (string_split_nth_defer_0) {
		ArrayFlags_clear(&res.flags, ArrayFlags__noslices);
	}
	// Defer end
	return _t7;
}
Array_string string_split_into_lines(string s) {
	bool string_split_into_lines_defer_0 = false;
	Array_string res;
	res = __new_array_with_default(0, 0, sizeof(string), 0);
	if (s.len == 0) {
		return res;
	}
	ArrayFlags_set(&res.flags, ArrayFlags__noslices);
	string_split_into_lines_defer_0 = true;
	rune cr = '\r';
	rune lf = '\n';
	int line_start = 0;
	for (int i = 0; i < s.len; i++) {
		if (line_start <= i) {
			if (s.str[ i] == lf) {
				array_push((array*)&res, _MOV((string[]){ (line_start == i ? (_S("")) : (string_substr(s, line_start, i))) }));
				line_start = (int)(i + 1);
			} else if (s.str[ i] == cr) {
				array_push((array*)&res, _MOV((string[]){ (line_start == i ? (_S("")) : (string_substr(s, line_start, i))) }));
				if (((int)(i + 1)) < s.len && s.str[ (int)(i + 1)] == lf) {
					line_start = (int)(i + 2);
				} else {
					line_start = (int)(i + 1);
				}
			}
		}
	}
	if (line_start < s.len) {
		array_push((array*)&res, _MOV((string[]){ string_substr(s, line_start, 2147483647) }));
	}
	Array_string _t5 = res;
	// Defer begin
	if (string_split_into_lines_defer_0) {
		ArrayFlags_clear(&res.flags, ArrayFlags__noslices);
	}
	// Defer end
	return _t5;
}
string string_substr(string s, int start, int _end) {
	int end = (_end == _const_max_int ? (s.len) : (_end));
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (start > end || start > s.len || end > s.len || start < 0 || end < 0) {
			_v_panic(string__plus(string__plus(string__plus(string__plus(string__plus(string__plus(string__plus(_S("substr("), int_str(start)), _S(", ")), int_str(end)), _S(") out of bounds (len=")), int_str(s.len)), _S(") s=")), s));
			VUNREACHABLE();
		}
	}
	#endif
	int len = (int)(end - start);
	if (len == s.len) {
		return string_clone(s);
	}
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	{ // Unsafe block
		vmemcpy(res.str, s.str + start, len);
		res.str[len] = 0;
	}
	return res;
}
string string_substr_unsafe(string s, int start, int _end) {
	int end = (_end == 2147483647 ? (s.len) : (_end));
	int len = (int)(end - start);
	if (len == s.len) {
		return s;
	}
	return ((string){.str = s.str + start, .len = len});
}
_result_string string_substr_with_check(string s, int start, int _end) {
	int end = (_end == _const_max_int ? (s.len) : (_end));
	if (start > end || start > s.len || end > s.len || start < 0 || end < 0) {
		return (_result_string){ .is_error=true, .err=_v_error(string__plus(string__plus(string__plus(string__plus(string__plus(string__plus(_S("substr("), int_str(start)), _S(", ")), int_str(end)), _S(") out of bounds (len=")), int_str(s.len)), _S(")"))), .data={E_STRUCT} };
	}
	int len = (int)(end - start);
	if (len == s.len) {
		_result_string _t2 = {0};
		_result_ok(&(string[]) { string_clone(s) }, (_result*)(&_t2), sizeof(string));
		return _t2;
	}
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	{ // Unsafe block
		vmemcpy(res.str, s.str + start, len);
		res.str[len] = 0;
	}
	_result_string _t3 = {0};
	_result_ok(&(string[]) { res }, (_result*)(&_t3), sizeof(string));
	return _t3;
}
string string_substr_ni(string s, int _start, int _end) {
	int start = _start;
	int end = (_end == _const_max_int ? (s.len) : (_end));
	if (start < 0) {
		start = (int)(s.len + start);
		if (start < 0) {
			start = 0;
		}
	}
	if (end < 0) {
		end = (int)(s.len + end);
		if (end < 0) {
			end = 0;
		}
	}
	if (end >= s.len) {
		end = s.len;
	}
	if (start > s.len || end < start) {
		return _S("");
	}
	int len = (int)(end - start);
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	{ // Unsafe block
		vmemcpy(res.str, s.str + start, len);
		res.str[len] = 0;
	}
	return res;
}
VV_LOC int string_index_(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		return -1;
	}
	if (p.len > 2) {
		return string_index_kmp(s, p);
	}
	int i = 0;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[(int)(i + j)] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}
_option_int string_index(string s, string p) {
	int idx = string_index_(s, p);
	if (idx == -1) {
		return (_option_int){ .state=2, .err=_const_none__, .data={E_STRUCT} };
	}
	_option_int _t2;
	_option_ok(&(int[]) { idx }, (_option*)(&_t2), sizeof(int));
	return _t2;
}
inline _option_int string_last_index(string s, string needle) {
	int idx = string_index_last_(s, needle);
	if (idx == -1) {
		return (_option_int){ .state=2, .err=_const_none__, .data={E_STRUCT} };
	}
	_option_int _t2;
	_option_ok(&(int[]) { idx }, (_option*)(&_t2), sizeof(int));
	return _t2;
}
VV_LOC int string_index_kmp(string s, string p) {
	bool string_index_kmp_defer_0 = false;
	int* p_prefixes;
	if (p.len > s.len) {
		return -1;
	}
	Array_fixed_int_20 stack_prefixes = {0};
	p_prefixes = &stack_prefixes[0];
	if (p.len > _const_kmp_stack_buffer_size) {
		p_prefixes = ((int*)(vcalloc((int)(p.len * ((int)(sizeof(int)))))));
	}
	string_index_kmp_defer_0 = true;
	int j = 0;
	for (int i = 1; i < p.len; i++) {
		for (;;) {
			if (!(p.str[j] != p.str[i] && j > 0)) break;
			j = p_prefixes[(int)(j - 1)];
		}
		if (p.str[j] == p.str[i]) {
			j++;
		}
		{ // Unsafe block
			p_prefixes[i] = j;
		}
	}
	j = 0;
	for (int i = 0; i < s.len; ++i) {
		for (;;) {
			if (!(p.str[j] != s.str[i] && j > 0)) break;
			j = p_prefixes[(int)(j - 1)];
		}
		if (p.str[j] == s.str[i]) {
			j++;
		}
		if (j == p.len) {
			int _t2 = (int)((int)(i - p.len) + 1);
			// Defer begin
			if (string_index_kmp_defer_0) {
				if (p.len > _const_kmp_stack_buffer_size) {
					_v_free(p_prefixes);
				}
			}
			// Defer end
			return _t2;
		}
	}
	int _t3 = -1;
	// Defer begin
	if (string_index_kmp_defer_0) {
		if (p.len > _const_kmp_stack_buffer_size) {
			_v_free(p_prefixes);
		}
	}
	// Defer end
	return _t3;
}
VV_LOC int string_index_last_(string s, string p) {
	if (p.len > s.len || p.len == 0) {
		return -1;
	}
	int i = (int)(s.len - p.len);
	for (;;) {
		if (!(i >= 0)) break;
		int j = 0;
		for (;;) {
			if (!(j < p.len && s.str[(int)(i + j)] == p.str[j])) break;
			j++;
		}
		if (j == p.len) {
			return i;
		}
		i--;
	}
	return -1;
}
int string_index_after_(string s, string p, int start) {
	if (p.len > s.len) {
		return -1;
	}
	int strt = start;
	if (start < 0) {
		strt = 0;
	}
	if (start >= s.len) {
		return -1;
	}
	int i = strt;
	for (;;) {
		if (!(i < s.len)) break;
		int j = 0;
		int ii = i;
		for (;;) {
			if (!(j < p.len && s.str[ii] == p.str[j])) break;
			j++;
			ii++;
		}
		if (j == p.len) {
			return i;
		}
		i++;
	}
	return -1;
}
int string_index_u8(string s, u8 c) {
	for (int i = 0; i < s.len; ++i) {
		u8 b = s.str[i];
		if (b == c) {
			return i;
		}
	}
	return -1;
}
int string_count(string s, string substr) {
	if (s.len == 0 || substr.len == 0) {
		return 0;
	}
	if (substr.len > s.len) {
		return 0;
	}
	int n = 0;
	if (substr.len == 1) {
		u8 target = substr.str[ 0];
		for (int _t3 = 0; _t3 < s.len; ++_t3) {
			u8 letter = s.str[_t3];
			if (letter == target) {
				n++;
			}
		}
		return n;
	}
	int i = 0;
	for (;;) {
		i = string_index_after_(s, substr, i);
		if (i == -1) {
			return n;
		}
		i += substr.len;
		n++;
	}
	return 0;
}
bool string_contains_u8(string s, u8 x) {
	for (int _t1 = 0; _t1 < s.len; ++_t1) {
		u8 c = s.str[_t1];
		if (x == c) {
			return true;
		}
	}
	return false;
}
bool string_contains(string s, string substr) {
	if (substr.len == 0) {
		return true;
	}
	if (substr.len == 1) {
		return string_contains_u8(s, substr.str[0]);
	}
	return string_index_(s, substr) != -1;
}
bool string_contains_only(string s, string chars) {
	if (chars.len == 0) {
		return false;
	}
	for (int _t2 = 0; _t2 < s.len; ++_t2) {
		u8 ch = s.str[_t2];
		int res = 0;
		for (int i = 0; i < chars.len && res == 0; i++) {
			res += (int[]){(ch == chars.str[i])?1:0}[0];
		}
		if (res == 0) {
			return false;
		}
	}
	return true;
}
bool string_starts_with(string s, string p) {
	if (p.len > s.len) {
		return false;
	} else if (vmemcmp(s.str, p.str, p.len) == 0) {
		return true;
	}
	return false;
}
bool string_ends_with(string s, string p) {
	if (p.len > s.len) {
		return false;
	} else if (vmemcmp(s.str + s.len - p.len, p.str, p.len) == 0) {
		return true;
	}
	return false;
}
string string_to_lower_ascii(string s) {
	{ // Unsafe block
		u8* b = malloc_noscan((int)(s.len + 1));
		for (int i = 0; i < s.len; ++i) {
			if (s.str[i] >= 'A' && s.str[i] <= 'Z') {
				b[i] = (u8)(s.str[i] + 32);
			} else {
				b[i] = s.str[i];
			}
		}
		b[s.len] = 0;
		return tos(b, s.len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string string_to_lower(string s) {
	if (string_is_pure_ascii(s)) {
		return string_to_lower_ascii(s);
	}
	Array_rune runes = string_runes(s);
	for (int i = 0; i < runes.len; ++i) {
		((rune*)runes.data)[i] = rune_to_lower(((rune*)runes.data)[i]);
	}
	return Array_rune_string(runes);
}
string string_to_upper_ascii(string s) {
	{ // Unsafe block
		u8* b = malloc_noscan((int)(s.len + 1));
		for (int i = 0; i < s.len; ++i) {
			if (s.str[i] >= 'a' && s.str[i] <= 'z') {
				b[i] = (u8)(s.str[i] - 32);
			} else {
				b[i] = s.str[i];
			}
		}
		b[s.len] = 0;
		return tos(b, s.len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string string_to_upper(string s) {
	if (string_is_pure_ascii(s)) {
		return string_to_upper_ascii(s);
	}
	Array_rune runes = string_runes(s);
	for (int i = 0; i < runes.len; ++i) {
		((rune*)runes.data)[i] = rune_to_upper(((rune*)runes.data)[i]);
	}
	return Array_rune_string(runes);
}
string string_capitalize(string s) {
	if (s.len == 0) {
		return _S("");
	}
	u8 s0 = s.str[ 0];
	string letter = u8_ascii_str(s0);
	string uletter = string_to_upper(letter);
	if (s.len == 1) {
		return uletter;
	}
	string srest = string_substr(s, 1, 2147483647);
	string res = string__plus(uletter, srest);
	return res;
}
inline string string_trim_space(string s) {
	return string_trim(s, _S(" \n\t\v\f\r"));
}
string string_trim(string s, string cutset) {
	if ((s).len == 0 || (cutset).len == 0) {
		return string_clone(s);
	}
	if (string_is_pure_ascii(cutset)) {
		return string_trim_chars(s, cutset, TrimMode__trim_both);
	} else {
		return string_trim_runes(s, cutset, TrimMode__trim_both);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
VV_LOC string string_trim_chars(string s, string cutset, TrimMode mode) {
	int pos_left = 0;
	int pos_right = (int)(s.len - 1);
	bool cs_match = true;
	for (;;) {
		if (!(pos_left <= s.len && pos_right >= -1 && cs_match)) break;
		cs_match = false;
		if (mode == TrimMode__trim_left || mode == TrimMode__trim_both) {
			for (int _t1 = 0; _t1 < cutset.len; ++_t1) {
				u8 cs = cutset.str[_t1];
				if (s.str[ pos_left] == cs) {
					pos_left++;
					cs_match = true;
					break;
				}
			}
		}
		if (mode == TrimMode__trim_right || mode == TrimMode__trim_both) {
			for (int _t2 = 0; _t2 < cutset.len; ++_t2) {
				u8 cs = cutset.str[_t2];
				if (s.str[ pos_right] == cs) {
					pos_right--;
					cs_match = true;
					break;
				}
			}
		}
		if (pos_left > pos_right) {
			return _S("");
		}
	}
	return string_substr(s, pos_left, (int)(pos_right + 1));
}
VV_LOC string string_trim_runes(string s, string cutset, TrimMode mode) {
	Array_rune s_runes = string_runes(s);
	int pos_left = 0;
	int pos_right = (int)(s_runes.len - 1);
	bool cs_match = true;
	for (;;) {
		if (!(pos_left <= s_runes.len && pos_right >= -1 && cs_match)) break;
		cs_match = false;
		if (mode == TrimMode__trim_left || mode == TrimMode__trim_both) {
			RunesIterator _t1 = string_runes_iterator(cutset);
			while (1) {
				_option_rune _t2 = RunesIterator_next(&_t1);
				if (_t2.state != 0) break;
				rune cs = *(rune*)_t2.data;
				if (((rune*)s_runes.data)[pos_left] == cs) {
					pos_left++;
					cs_match = true;
					break;
				}
			}
		}
		if (mode == TrimMode__trim_right || mode == TrimMode__trim_both) {
			RunesIterator _t3 = string_runes_iterator(cutset);
			while (1) {
				_option_rune _t4 = RunesIterator_next(&_t3);
				if (_t4.state != 0) break;
				rune cs = *(rune*)_t4.data;
				if (((rune*)s_runes.data)[pos_right] == cs) {
					pos_right--;
					cs_match = true;
					break;
				}
			}
		}
		if (pos_left > pos_right) {
			return _S("");
		}
	}
	return Array_rune_string(array_slice(s_runes, pos_left, (int)(pos_right + 1)));
}
string string_trim_left(string s, string cutset) {
	if ((s).len == 0 || (cutset).len == 0) {
		return string_clone(s);
	}
	if (string_is_pure_ascii(cutset)) {
		return string_trim_chars(s, cutset, TrimMode__trim_left);
	} else {
		return string_trim_runes(s, cutset, TrimMode__trim_left);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string string_trim_right(string s, string cutset) {
	if (s.len < 1 || cutset.len < 1) {
		return string_clone(s);
	}
	if (string_is_pure_ascii(cutset)) {
		return string_trim_chars(s, cutset, TrimMode__trim_right);
	} else {
		return string_trim_runes(s, cutset, TrimMode__trim_right);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
inline string string_str(string s) {
	return string_clone(s);
}
VV_LOC u8 string_at(string s, int idx) {
	#if !defined(CUSTOM_DEFINE_no_bounds_checking)
	{
		if (idx < 0 || idx >= s.len) {
			panic_n2(_S("string index out of range(idx,s.len):"), idx, s.len);
			VUNREACHABLE();
		}
	}
	#endif
	return s.str[idx];
}
VV_LOC _option_u8 string_at_with_check(string s, int idx) {
	if (idx < 0 || idx >= s.len) {
		return (_option_u8){ .state=2, .err=_const_none__, .data={E_STRUCT} };
	}
	{ // Unsafe block
		_option_u8 _t2;
		_option_ok(&(u8[]) { s.str[idx] }, (_option*)(&_t2), sizeof(u8));
		return _t2;
	}
	return (_option_u8){.state=2, .err=_const_none__, .data={E_STRUCT}};
}
inline bool u8_is_letter(u8 c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
inline bool u8_is_alnum(u8 c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}
void string_free(string* s) {
	if (s->is_lit == -98761234) {
		u8* double_free_msg = ((u8*)("double string.free() detected\n"));
		int double_free_msg_len = vstrlen(double_free_msg);
		#if defined(_VFREESTANDING)
		{
		}
		#else
		{
			_write_buf_to_fd(1, double_free_msg, double_free_msg_len);
		}
		#endif
		return;
	}
	if (s->is_lit == 1 || s->str == 0) {
		return;
	}
	{ // Unsafe block
		_v_free(s->str);
		s->str = ((void*)0);
	}
	s->is_lit = -98761234;
}
string string_all_before_last(string s, string sub) {
	int pos = string_index_last_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, 0, pos);
}
string string_all_after(string s, string sub) {
	int pos = string_index_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, (int)(pos + sub.len), 2147483647);
}
string string_all_after_last(string s, string sub) {
	int pos = string_index_last_(s, sub);
	if (pos == -1) {
		return string_clone(s);
	}
	return string_substr(s, (int)(pos + sub.len), 2147483647);
}
string Array_string_join(Array_string a, string sep) {
	if (a.len == 0) {
		return _S("");
	}
	int len = 0;
	for (int _t2 = 0; _t2 < a.len; ++_t2) {
		string val = ((string*)a.data)[_t2];
		len += (int)(val.len + sep.len);
	}
	len -= sep.len;
	string res = ((string){.str = malloc_noscan((int)(len + 1)), .len = len});
	int idx = 0;
	for (int i = 0; i < a.len; ++i) {
		string val = ((string*)a.data)[i];
		{ // Unsafe block
			vmemcpy(((voidptr)(res.str + idx)), val.str, val.len);
			idx += val.len;
		}
		if (i != (int)(a.len - 1)) {
			{ // Unsafe block
				vmemcpy(((voidptr)(res.str + idx)), sep.str, sep.len);
				idx += sep.len;
			}
		}
	}
	{ // Unsafe block
		res.str[res.len] = 0;
	}
	return res;
}
Array_u8 string_bytes(string s) {
	if (s.len == 0) {
		return __new_array_with_default_noscan(0, 0, sizeof(u8), 0);
	}
	Array_u8 buf = __new_array_with_default_noscan(s.len, 0, sizeof(u8), 0);
	vmemcpy(buf.data, s.str, s.len);
	return buf;
}
string string_repeat(string s, int count) {
	if (count <= 0) {
		return _S("");
	} else if (count == 1) {
		return string_clone(s);
	}
	u8* ret = malloc_noscan((int)((int)(s.len * count) + 1));
	for (int i = 0; i < count; ++i) {
		vmemcpy(ret + (int)(i * s.len), s.str, s.len);
	}
	int new_len = (int)(s.len * count);
	{ // Unsafe block
		ret[new_len] = 0;
	}
	return u8_vstring_with_len(ret, new_len);
}
RunesIterator string_runes_iterator(string s) {
	return ((RunesIterator){.s = s,.i = 0,});
}
_option_rune RunesIterator_next(RunesIterator* ri) {
	for (;;) {
		if (!(ri->i >= ri->s.len)) break;
		return (_option_rune){ .state=2, .err=_const_none__, .data={E_STRUCT} };
	}
	int char_len = utf8_char_len(ri->s.str[ri->i]);
	if (char_len == 1) {
		u8 res = ri->s.str[ri->i];
		ri->i++;
		_option_rune _t2;
		_option_ok(&(rune[]) { res }, (_option*)(&_t2), sizeof(rune));
		return _t2;
	}
	u8* start = ((u8*)(&ri->s.str[ri->i]));
	int len = ((int)(ri->s.len - 1) >= (int)(ri->i + char_len) ? (char_len) : ((int)(ri->s.len - ri->i)));
	ri->i += char_len;
	if (char_len > 4) {
		_option_rune _t3;
		_option_ok(&(rune[]) { 0 }, (_option*)(&_t3), sizeof(rune));
		return _t3;
	}
	_option_rune _t4;
	_option_ok(&(rune[]) { ((rune)(impl_utf8_to_utf32(start, len))) }, (_option*)(&_t4), sizeof(rune));
	return _t4;
}
string byteptr_vstring(byteptr bp) {
	return ((string){.str = bp, .len = vstrlen(bp)});
}
string byteptr_vstring_with_len(byteptr bp, int len) {
	return ((string){.str = bp, .len = len, .is_lit = 0});
}
string charptr_vstring(charptr cp) {
	return ((string){.str = ((byteptr)(cp)), .len = vstrlen_char(cp), .is_lit = 0});
}
string charptr_vstring_with_len(charptr cp, int len) {
	return ((string){.str = ((byteptr)(cp)), .len = len, .is_lit = 0});
}
string byteptr_vstring_literal(byteptr bp) {
	return ((string){.str = bp, .len = vstrlen(bp), .is_lit = 1});
}
string charptr_vstring_literal(charptr cp) {
	return ((string){.str = ((byteptr)(cp)), .len = vstrlen_char(cp), .is_lit = 1});
}
string StrIntpType_str(StrIntpType x) {
	string _t2 = (string){.str=(byteptr)"", .is_lit=1};
	switch (x) {
		case StrIntpType__si_no_str: {
			_t2 = _S("no_str");
			break;
		}
		case StrIntpType__si_c: {
			_t2 = _S("c");
			break;
		}
		case StrIntpType__si_u8: {
			_t2 = _S("u8");
			break;
		}
		case StrIntpType__si_i8: {
			_t2 = _S("i8");
			break;
		}
		case StrIntpType__si_u16: {
			_t2 = _S("u16");
			break;
		}
		case StrIntpType__si_i16: {
			_t2 = _S("i16");
			break;
		}
		case StrIntpType__si_u32: {
			_t2 = _S("u32");
			break;
		}
		case StrIntpType__si_i32: {
			_t2 = _S("i32");
			break;
		}
		case StrIntpType__si_u64: {
			_t2 = _S("u64");
			break;
		}
		case StrIntpType__si_i64: {
			_t2 = _S("i64");
			break;
		}
		case StrIntpType__si_f32: {
			_t2 = _S("f32");
			break;
		}
		case StrIntpType__si_f64: {
			_t2 = _S("f64");
			break;
		}
		case StrIntpType__si_g32: {
			_t2 = _S("f32");
			break;
		}
		case StrIntpType__si_g64: {
			_t2 = _S("f64");
			break;
		}
		case StrIntpType__si_e32: {
			_t2 = _S("f32");
			break;
		}
		case StrIntpType__si_e64: {
			_t2 = _S("f64");
			break;
		}
		case StrIntpType__si_s: {
			_t2 = _S("s");
			break;
		}
		case StrIntpType__si_p: {
			_t2 = _S("p");
			break;
		}
		case StrIntpType__si_r: {
			_t2 = _S("r");
			break;
		}
		case StrIntpType__si_vp: {
			_t2 = _S("vp");
			break;
		}
	}
	return _t2;
}
inline VV_LOC f32 fabs32(f32 x) {
	return (x < 0 ? (-x) : (x));
}
inline VV_LOC f64 fabs64(f64 x) {
	return (x < 0 ? (-x) : (x));
}
inline VV_LOC u64 abs64(i64 x) {
	return (x < 0 ? (((u64)(-x))) : (((u64)(x))));
}
VV_LOC void StrIntpData_process_str_intp_data(StrIntpData* data, strings__Builder* sb) {
	u32 x = data->fmt;
	StrIntpType typ = ((StrIntpType)((x & 0x1FU)));
	int align = ((int)((((x >> 5U)) & 0x01U)));
	bool upper_case = ((((x >> 7U)) & 0x01U)) > 0U;
	int sign = ((int)((((x >> 8U)) & 0x01U)));
	int precision = ((int)((((x >> 9U)) & 0x7FU)));
	bool tail_zeros = ((((x >> 16U)) & 0x01U)) > 0U;
	int width = ((int)(((i16)((((x >> 17U)) & 0x3FFU)))));
	int base = (((int)((x >> 27U))) & 0xF);
	u8 fmt_pad_ch = ((u8)((((x >> 31U)) & 0xFFU)));
	if (typ == StrIntpType__si_no_str) {
		return;
	}
	if (base > 0) {
		base += 2;
	}
	u8 pad_ch = ((u8)(' '));
	if (fmt_pad_ch > 0) {
		pad_ch = '0';
	}
	int len0_set = (width > 0 ? (width) : (-1));
	int len1_set = (precision == 0x7F ? (-1) : (precision));
	bool sign_set = sign == 1;
	strconv__BF_param bf = ((strconv__BF_param){
		.pad_ch = pad_ch,
		.len0 = len0_set,
		.len1 = len1_set,
		.positive = true,
		.sign_flag = sign_set,
		.align = strconv__Align_text__left,
		.rm_tail_zero = tail_zeros,
	});
	if (fmt_pad_ch == 0 || pad_ch == '0') {
		switch (align) {
			case 0: {
				bf.align = strconv__Align_text__left;
				break;
			}
			case 1: {
				bf.align = strconv__Align_text__right;
				break;
			}
			default: {
				{
					bf.align = strconv__Align_text__left;
					break;
				}
			}
		}
		
	} else {
		bf.align = strconv__Align_text__right;
	}
	{ // Unsafe block
		if (typ == StrIntpType__si_s) {
			if (upper_case) {
				string s = string_to_upper(data->d.d_s);
				if (width == 0) {
					strings__Builder_write_string(sb, s);
				} else {
					strconv__format_str_sb(s, bf, sb);
				}
				string_free(&s);
			} else {
				if (width == 0) {
					strings__Builder_write_string(sb, data->d.d_s);
				} else {
					strconv__format_str_sb(data->d.d_s, bf, sb);
				}
			}
			return;
		}
		if (typ == StrIntpType__si_r) {
			if (width > 0) {
				if (upper_case) {
					string s = string_to_upper(data->d.d_s);
					for (int _t1 = 1; _t1 < ((int)(1 + ((width > 0 ? (width) : (0))))); ++_t1) {
						strings__Builder_write_string(sb, s);
					}
					string_free(&s);
				} else {
					for (int _t2 = 1; _t2 < ((int)(1 + ((width > 0 ? (width) : (0))))); ++_t2) {
						strings__Builder_write_string(sb, data->d.d_s);
					}
				}
			}
			return;
		}
		if (typ == StrIntpType__si_i8 || typ == StrIntpType__si_i16 || typ == StrIntpType__si_i32 || typ == StrIntpType__si_i64) {
			i64 d = data->d.d_i64;
			if (typ == StrIntpType__si_i8) {
				d = ((i64)(data->d.d_i8));
			} else if (typ == StrIntpType__si_i16) {
				d = ((i64)(data->d.d_i16));
			} else if (typ == StrIntpType__si_i32) {
				d = ((i64)(data->d.d_i32));
			}
			if (base == 0) {
				if (width == 0) {
					string d_str = i64_str(d);
					strings__Builder_write_string(sb, d_str);
					string_free(&d_str);
					return;
				}
				if (d < 0) {
					bf.positive = false;
				}
				strconv__format_dec_sb(abs64(d), bf, sb);
			} else {
				if (base == 3) {
					base = 2;
				}
				i64 absd = d;
				bool write_minus = false;
				if (d < 0 && pad_ch != ' ') {
					absd = -d;
					write_minus = true;
				}
				string hx = strconv__format_int(absd, base);
				if (upper_case) {
					string tmp = hx;
					hx = string_to_upper(hx);
					string_free(&tmp);
				}
				if (write_minus) {
					strings__Builder_write_u8(sb, '-');
					bf.len0--;
				}
				if (width == 0) {
					strings__Builder_write_string(sb, hx);
				} else {
					strconv__format_str_sb(hx, bf, sb);
				}
				string_free(&hx);
			}
			return;
		}
		if (typ == StrIntpType__si_u8 || typ == StrIntpType__si_u16 || typ == StrIntpType__si_u32 || typ == StrIntpType__si_u64) {
			u64 d = data->d.d_u64;
			if (typ == StrIntpType__si_u8) {
				d = ((u64)(data->d.d_u8));
			} else if (typ == StrIntpType__si_u16) {
				d = ((u64)(data->d.d_u16));
			} else if (typ == StrIntpType__si_u32) {
				d = ((u64)(data->d.d_u32));
			}
			if (base == 0) {
				if (width == 0) {
					string d_str = u64_str(d);
					strings__Builder_write_string(sb, d_str);
					string_free(&d_str);
					return;
				}
				strconv__format_dec_sb(d, bf, sb);
			} else {
				if (base == 3) {
					base = 2;
				}
				string hx = strconv__format_uint(d, base);
				if (upper_case) {
					string tmp = hx;
					hx = string_to_upper(hx);
					string_free(&tmp);
				}
				if (width == 0) {
					strings__Builder_write_string(sb, hx);
				} else {
					strconv__format_str_sb(hx, bf, sb);
				}
				string_free(&hx);
			}
			return;
		}
		if (typ == StrIntpType__si_p) {
			u64 d = data->d.d_u64;
			base = 16;
			if (base == 0) {
				if (width == 0) {
					string d_str = u64_str(d);
					strings__Builder_write_string(sb, d_str);
					string_free(&d_str);
					return;
				}
				strconv__format_dec_sb(d, bf, sb);
			} else {
				string hx = strconv__format_uint(d, base);
				if (upper_case) {
					string tmp = hx;
					hx = string_to_upper(hx);
					string_free(&tmp);
				}
				if (width == 0) {
					strings__Builder_write_string(sb, hx);
				} else {
					strconv__format_str_sb(hx, bf, sb);
				}
				string_free(&hx);
			}
			return;
		}
		bool use_default_str = false;
		if (width == 0 && precision == 0x7F) {
			bf.len1 = 3;
			use_default_str = true;
		}
		if (bf.len1 < 0) {
			bf.len1 = 3;
		}
		switch (typ) {
			case StrIntpType__si_f32: {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					if (use_default_str) {
						string f = f32_str(data->d.d_f32);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					} else {
						if (data->d.d_f32 < 0) {
							bf.positive = false;
						}
						string f = strconv__format_fl(data->d.d_f32, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
				}
				#endif
				break;
			}
			case StrIntpType__si_f64: {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					if (use_default_str) {
						string f = f64_str(data->d.d_f64);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					} else {
						if (data->d.d_f64 < 0) {
							bf.positive = false;
						}
						strconv__Float64u f_union = ((strconv__Float64u){.f = data->d.d_f64,});
						if (f_union.u == _const_strconv__double_minus_zero) {
							bf.positive = false;
						}
						string f = strconv__format_fl(data->d.d_f64, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
				}
				#endif
				break;
			}
			case StrIntpType__si_g32: {
				if (use_default_str) {
					#if !defined(CUSTOM_DEFINE_nofloat)
					{
						string f = f32_strg(data->d.d_f32);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
					#endif
				} else {
					if (data->d.d_f32 == _const_strconv__single_plus_zero) {
						string tmp_str = _S("0");
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
						return;
					}
					if (data->d.d_f32 == _const_strconv__single_minus_zero) {
						string tmp_str = _S("-0");
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
						return;
					}
					if (data->d.d_f32 == _const_strconv__single_plus_infinity) {
						string tmp_str = _S("+inf");
						if (upper_case) {
							tmp_str = _S("+INF");
						}
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
					}
					if (data->d.d_f32 == _const_strconv__single_minus_infinity) {
						string tmp_str = _S("-inf");
						if (upper_case) {
							tmp_str = _S("-INF");
						}
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
					}
					if (data->d.d_f32 < 0) {
						bf.positive = false;
					}
					f32 d = fabs32(data->d.d_f32);
					if (d < ((f32)(999999.0)) && d >= ((f32)(0.00001))) {
						string f = strconv__format_fl(data->d.d_f32, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
						return;
					}
					bf.len1--;
					string f = strconv__format_es(data->d.d_f32, bf);
					if (upper_case) {
						string tmp = f;
						f = string_to_upper(f);
						string_free(&tmp);
					}
					strings__Builder_write_string(sb, f);
					string_free(&f);
				}
				break;
			}
			case StrIntpType__si_g64: {
				if (use_default_str) {
					#if !defined(CUSTOM_DEFINE_nofloat)
					{
						string f = f64_strg(data->d.d_f64);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
					#endif
				} else {
					if (data->d.d_f64 == _const_strconv__double_plus_zero) {
						string tmp_str = _S("0");
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
						return;
					}
					if (data->d.d_f64 == _const_strconv__double_minus_zero) {
						string tmp_str = _S("-0");
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
						return;
					}
					if (data->d.d_f64 == _const_strconv__double_plus_infinity) {
						string tmp_str = _S("+inf");
						if (upper_case) {
							tmp_str = _S("+INF");
						}
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
					}
					if (data->d.d_f64 == _const_strconv__double_minus_infinity) {
						string tmp_str = _S("-inf");
						if (upper_case) {
							tmp_str = _S("-INF");
						}
						strconv__format_str_sb(tmp_str, bf, sb);
						string_free(&tmp_str);
					}
					if (data->d.d_f64 < 0) {
						bf.positive = false;
					}
					f64 d = fabs64(data->d.d_f64);
					if (d < ((f64)(999999.0)) && d >= ((f64)(0.00001))) {
						string f = strconv__format_fl(data->d.d_f64, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
						return;
					}
					bf.len1--;
					string f = strconv__format_es(data->d.d_f64, bf);
					if (upper_case) {
						string tmp = f;
						f = string_to_upper(f);
						string_free(&tmp);
					}
					strings__Builder_write_string(sb, f);
					string_free(&f);
				}
				break;
			}
			case StrIntpType__si_e32: {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					if (use_default_str) {
						string f = f32_str(data->d.d_f32);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					} else {
						if (data->d.d_f32 < 0) {
							bf.positive = false;
						}
						string f = strconv__format_es(data->d.d_f32, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
				}
				#endif
				break;
			}
			case StrIntpType__si_e64: {
				#if !defined(CUSTOM_DEFINE_nofloat)
				{
					if (use_default_str) {
						string f = f64_str(data->d.d_f64);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					} else {
						if (data->d.d_f64 < 0) {
							bf.positive = false;
						}
						string f = strconv__format_es(data->d.d_f64, bf);
						if (upper_case) {
							string tmp = f;
							f = string_to_upper(f);
							string_free(&tmp);
						}
						strings__Builder_write_string(sb, f);
						string_free(&f);
					}
				}
				#endif
				break;
			}
			case StrIntpType__si_c: {
				string ss = utf32_to_str(data->d.d_c);
				strings__Builder_write_string(sb, ss);
				string_free(&ss);
				break;
			}
			case StrIntpType__si_vp: {
				string ss = u64_hex(((u64)(data->d.d_vp)));
				strings__Builder_write_string(sb, ss);
				string_free(&ss);
				break;
			}
			case StrIntpType__si_no_str:
			case StrIntpType__si_u8:
			case StrIntpType__si_i8:
			case StrIntpType__si_u16:
			case StrIntpType__si_i16:
			case StrIntpType__si_u32:
			case StrIntpType__si_i32:
			case StrIntpType__si_u64:
			case StrIntpType__si_i64:
			case StrIntpType__si_s:
			case StrIntpType__si_p:
			case StrIntpType__si_r:
			default: {
				{
					strings__Builder_write_string(sb, _S("***ERROR!***"));
					break;
				}
			}
		}
		
	}
}
string str_intp(int data_len, StrIntpData* input_base) {
	strings__Builder res = strings__new_builder(64);
	for (int i = 0; i < data_len; i++) {
		StrIntpData* data = &input_base[i];
		if (data->str.len != 0) {
			strings__Builder_write_string(&res, data->str);
		}
		if (data->fmt != 0U) {
			StrIntpData_process_str_intp_data(data, (voidptr)&res);
		}
	}
	string ret = strings__Builder_str(&res);
	strings__Builder_free(&res);
	return ret;
}
u16* string_to_wide(string _str) {
	#if defined(_WIN32)
	{
		{ // Unsafe block
			int num_chars = (MultiByteToWideChar(_const_cp_utf8, 0U, ((char*)(_str.str)), _str.len, 0, 0));
			u16* wstr = ((u16*)(malloc_noscan((int)(((int)(num_chars + 1)) * 2))));
			if (wstr != 0) {
				MultiByteToWideChar(_const_cp_utf8, 0U, ((char*)(_str.str)), _str.len, wstr, num_chars);
				memset(((u8*)(wstr)) + (int)(num_chars * 2), 0, 2);
			}
			return wstr;
		}
	}
	#else
	{
	}
	#endif
	return 0;
}
string string_from_wide(u16* _wstr) {
	#if defined(_WIN32)
	{
		{ // Unsafe block
			usize wstr_len = wcslen(_wstr);
			return string_from_wide2(_wstr, ((int)(wstr_len)));
		}
	}
	#else
	{
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}
string string_from_wide2(u16* _wstr, int len) {
	#if defined(_WIN32)
	{
		{ // Unsafe block
			int num_chars = WideCharToMultiByte(_const_cp_utf8, 0U, _wstr, len, 0, 0, 0, 0);
			u8* str_to = malloc_noscan((int)(num_chars + 1));
			if (str_to != 0) {
				WideCharToMultiByte(_const_cp_utf8, 0U, _wstr, len, ((char*)(str_to)), num_chars, 0, 0);
				memset(str_to + num_chars, 0, 1);
			}
			return tos2(str_to);
		}
	}
	#else
	{
	}
	#endif
	return (string){.str=(byteptr)"", .is_lit=1};
}
int utf8_char_len(u8 b) {
	return (int_literal)(((((0xe5000000 >> ((((b >> 3)) & 0x1e)))) & 3)) + 1);
}
string utf32_to_str(u32 code) {
	{ // Unsafe block
		u8* buffer = malloc_noscan(5);
		string res = utf32_to_str_no_malloc(code, buffer);
		if (res.len == 0) {
			_v_free(buffer);
		}
		return res;
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string utf32_to_str_no_malloc(u32 code, u8* buf) {
	{ // Unsafe block
		int len = utf32_decode_to_buffer(code, buf);
		if (len == 0) {
			return _S("");
		}
		buf[len] = 0;
		return tos(buf, len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
int utf32_decode_to_buffer(u32 code, u8* buf) {
	{ // Unsafe block
		int icode = ((int)(code));
		u8* buffer = ((u8*)(buf));
		if (icode <= 127) {
			buffer[0] = ((u8)(icode));
			return 1;
		} else if (icode <= 2047) {
			buffer[0] = (192 | ((u8)((icode >> 6))));
			buffer[1] = (128 | ((u8)((icode & 63))));
			return 2;
		} else if (icode <= 65535) {
			buffer[0] = (224 | ((u8)((icode >> 12))));
			buffer[1] = (128 | ((((u8)((icode >> 6))) & 63)));
			buffer[2] = (128 | ((u8)((icode & 63))));
			return 3;
		} else if (icode <= 1114111) {
			buffer[0] = (240 | ((u8)((icode >> 18))));
			buffer[1] = (128 | ((((u8)((icode >> 12))) & 63)));
			buffer[2] = (128 | ((((u8)((icode >> 6))) & 63)));
			buffer[3] = (128 | ((u8)((icode & 63))));
			return 4;
		}
	}
	return 0;
}
int string_utf32_code(string _rune) {
	if (_rune.len > 4) {
		return 0;
	}
	return ((int)(impl_utf8_to_utf32(((u8*)(_rune.str)), _rune.len)));
}
VV_LOC rune impl_utf8_to_utf32(u8* _bytes, int _bytes_len) {
	if (_bytes_len == 0) {
		return 0;
	}
	if (_bytes_len == 1) {
		return ((rune)(_bytes[0]));
	}
	u8 b = ((u8)(((int)(_bytes[0]))));
	b = (b << _bytes_len);
	rune res = ((rune)(b));
	int shift = (int)(6 - _bytes_len);
	for (int i = 1; i < _bytes_len; i++) {
		rune c = ((rune)(_bytes[i]));
		res = (((rune)(res)) << shift);
		res |= (c & 63);
		shift = 6;
	}
	return res;
}
int utf8_str_visible_length(string s) {
	int l = 0;
	int ul = 1;
	for (int i = 0; i < s.len; i += ul) {
		u8 c = s.str[i];
		ul = (int_literal)(((((0xe5000000 >> ((((s.str[i] >> 3)) & 0x1e)))) & 3)) + 1);
		if ((int)(i + ul) > s.len) {
			return l;
		}
		l++;
		if (ul == 1) {
			continue;
		}

		if (ul == (2)) {
			u64 r = ((u64)((((((u16)(c)) << 8U)) | s.str[(int)(i + 1)])));
			if (r >= 0xcc80U && r < 0xcdb0U) {
				l--;
			}
		}
		else if (ul == (3)) {
			u64 r = ((u64)((((((u32)(c)) << 16U)) | (((((u32)(s.str[(int)(i + 1)])) << 8U)) | s.str[(int)(i + 2)]))));
			if ((r >= 0xe1aab0U && r <= 0xe1ac7fU) || (r >= 0xe1b780U && r <= 0xe1b87fU) || (r >= 0xe28390U && r <= 0xe2847fU) || (r >= 0xefb8a0U && r <= 0xefb8afU)) {
				l--;
			} else if ((r >= 0xe18480U && r <= 0xe1859fU) || (r >= 0xe2ba80U && r <= 0xe2bf95U) || (r >= 0xe38080U && r <= 0xe4b77fU) || (r >= 0xe4b880U && r <= 0xea807fU) || (r >= 0xeaa5a0U && r <= 0xeaa79fU) || (r >= 0xeab080U && r <= 0xed9eafU) || (r >= 0xefa480U && r <= 0xefac7fU) || (r >= 0xefb8b8U && r <= 0xefb9afU)) {
				l++;
			}
		}
		else if (ul == (4)) {
			u64 r = ((u64)((((((u32)(c)) << 24U)) | ((((((u32)(s.str[(int)(i + 1)])) << 16U)) | ((((u32)(s.str[(int)(i + 2)])) << 8U))) | s.str[(int)(i + 3)]))));
			if ((r >= 0x0f9f8880U && r <= 0xf09f8a8fU) || (r >= 0xf09f8c80U && r <= 0xf09f9c90U) || (r >= 0xf09fa490U && r <= 0xf09fa7afU) || (r >= 0xf0a08080U && r <= 0xf180807fU)) {
				l++;
			}
		}
		else {
		}
	}
	return l;
}
inline bool ArrayFlags_has(ArrayFlags* e, ArrayFlags flag_) {
	return ((((int)(*e)) & (((int)(flag_))))) != 0;
}
inline void ArrayFlags_set(ArrayFlags* e, ArrayFlags flag_) {
	{ // Unsafe block
		*e = ((ArrayFlags)((((int)(*e)) | (((int)(flag_))))));
	}
}
inline void ArrayFlags_clear(ArrayFlags* e, ArrayFlags flag_) {
	{ // Unsafe block
		*e = ((ArrayFlags)((((int)(*e)) & ~(((int)(flag_))))));
	}
}
#if defined(_WIN32)
	#if defined(__TINYC__)
	#endif
#else
#endif
_result_voidptr json__decode(voidptr typ, string s) {
	_result_voidptr _t1 = {0};
	_result_ok(&(voidptr[]) { 0 }, (_result*)(&_t1), sizeof(voidptr));
	return _t1;
}
VV_LOC int json__decode_int(struct cJSON* root) {
	if (isnil(root)) {
		return 0;
	}
	return root->valueint;
}
VV_LOC i8 json__decode_i8(struct cJSON* root) {
	if (isnil(root)) {
		return ((i8)(0));
	}
	return ((i8)(root->valueint));
}
VV_LOC i16 json__decode_i16(struct cJSON* root) {
	if (isnil(root)) {
		return ((i16)(0));
	}
	return ((i16)(root->valueint));
}
VV_LOC i64 json__decode_i64(struct cJSON* root) {
	if (isnil(root)) {
		return ((i64)(0));
	}
	return ((i64)(root->valuedouble));
}
VV_LOC u8 json__decode_byte(struct cJSON* root) {
	return json__decode_u8(root);
}
VV_LOC u8 json__decode_u8(struct cJSON* root) {
	if (isnil(root)) {
		return ((u8)(0));
	}
	return ((u8)(root->valueint));
}
VV_LOC u16 json__decode_u16(struct cJSON* root) {
	if (isnil(root)) {
		return ((u16)(0U));
	}
	return ((u16)(root->valueint));
}
VV_LOC u32 json__decode_u32(struct cJSON* root) {
	if (isnil(root)) {
		return ((u32)(0U));
	}
	return ((u32)(root->valueint));
}
VV_LOC u64 json__decode_u64(struct cJSON* root) {
	if (isnil(root)) {
		return ((u64)(0U));
	}
	return ((u64)(root->valuedouble));
}
VV_LOC f32 json__decode_f32(struct cJSON* root) {
	if (isnil(root)) {
		return ((f32)(0));
	}
	return ((f32)(root->valuedouble));
}
VV_LOC f64 json__decode_f64(struct cJSON* root) {
	if (isnil(root)) {
		return ((f64)(0));
	}
	return root->valuedouble;
}
VV_LOC rune json__decode_rune(struct cJSON* root) {
	if (isnil(root)) {
		return ((rune)(0));
	}
	if (isnil(root->valuestring)) {
		return ((rune)(0));
	}
	return (*(rune*)array_first(string_runes(tos_clone(((u8*)(root->valuestring))))));
}
VV_LOC string json__decode_string(struct cJSON* root) {
	if (isnil(root)) {
		return _S("");
	}
	if (isnil(root->valuestring)) {
		return _S("");
	}
	return tos_clone(((u8*)(root->valuestring)));
}
VV_LOC bool json__decode_bool(struct cJSON* root) {
	if (isnil(root)) {
		return false;
	}
	return cJSON_IsTrue(root);
}
VV_LOC struct cJSON* json__encode_int(int val) {
	return cJSON_CreateNumber(val);
}
VV_LOC struct cJSON* json__encode_i8(i8 val) {
	return cJSON_CreateNumber(val);
}
VV_LOC struct cJSON* json__encode_i16(i16 val) {
	return cJSON_CreateNumber(val);
}
VV_LOC struct cJSON* json__encode_i64(i64 val) {
	return cJSON_CreateNumber(val);
}
VV_LOC struct cJSON* json__encode_byte(u8 root) {
	return json__encode_u8(root);
}
VV_LOC struct cJSON* json__encode_u8(u8 val) {
	return cJSON_CreateNumber(val);
}
VV_LOC struct cJSON* json__encode_u16(u16 val) {
	return cJSON_CreateNumber(val);
}
VV_LOC struct cJSON* json__encode_u32(u32 val) {
	return cJSON_CreateNumber(val);
}
VV_LOC struct cJSON* json__encode_u64(u64 val) {
	return cJSON_CreateNumber(val);
}
VV_LOC struct cJSON* json__encode_f32(f32 val) {
	return cJSON_CreateNumber(val);
}
VV_LOC struct cJSON* json__encode_f64(f64 val) {
	return cJSON_CreateNumber(val);
}
VV_LOC struct cJSON* json__encode_bool(bool val) {
	return cJSON_CreateBool(val);
}
VV_LOC struct cJSON* json__encode_rune(rune val) {
	return cJSON_CreateString(((char*)(rune_str(val).str)));
}
VV_LOC struct cJSON* json__encode_string(string val) {
	return cJSON_CreateString(((char*)(val.str)));
}
VV_LOC struct cJSON* json__json_parse(string s) {
	return cJSON_Parse(((char*)(s.str)));
}
VV_LOC string json__json_print(struct cJSON* data) {
	char* s = cJSON_PrintUnformatted(data);
	if (s == ((void*)0)) {
		return _S("");
	}
	string r = tos_clone(((u8*)(s)));
	cJSON_free(s);
	return r;
}
VV_LOC string json__json_print_pretty(struct cJSON* data) {
	char* s = cJSON_Print(data);
	if (s == ((void*)0)) {
		return _S("");
	}
	string r = tos_clone(((u8*)(s)));
	cJSON_free(s);
	return r;
}
VV_LOC Array_string vargs__parse_option(string v) {
	string delimitter = (string_starts_with(v, _S("--")) ? (_S("--")) : (_S("-")));
	string val = string_replace(v, delimitter, _S(""));
	return string_split(val, _S("="));
}
VV_LOC bool vargs__starts_with_hypen(string v) {
	return string_starts_with(v, _S("-")) || string_starts_with(v, _S("--"));
}
VV_LOC void vargs__Args_insert_option(vargs__Args* v, string name, string val) {
	string insert_name = (_IN_MAP(ADDR(string, name), ADDR(map, v->aliases)) ? ((*(string*)map_get(ADDR(map, v->aliases), &(string[]){name}, &(string[]){ (string){.str=(byteptr)"", .is_lit=1} }))) : (name));
	map_set(&v->options, &(string[]){insert_name}, &(string[]) { (_IN_MAP(ADDR(string, insert_name), ADDR(map, v->options)) ? (string__plus(string__plus((*(string*)map_get(ADDR(map, v->options), &(string[]){insert_name}, &(string[]){ (string){.str=(byteptr)"", .is_lit=1} })), _S(",")), val)) : (val)) });
}
vargs__Args vargs__new(Array_string a, int start_at) {
	return ((vargs__Args){.orig = a,.start = start_at,.command = (string){.str=(byteptr)"", .is_lit=1},.options = new_map(sizeof(string), sizeof(string), &map_hash_string, &map_eq_string, &map_clone_string, &map_free_string)
	,.aliases = new_map(sizeof(string), sizeof(string), &map_hash_string, &map_eq_string, &map_clone_string, &map_free_string)
	,.unknown = __new_array_with_default(0, 0, sizeof(string), 0),});
}
vargs__Args vargs__Args_parse(vargs__Args* v) {
	Array_string args = array_slice(v->orig, v->start, v->orig.len);
	for (int i = 0; i < args.len; ++i) {
		string curr = ((string*)args.data)[i];
		string next = ((int)(i + 1) > (int)(args.len - 1) ? (_S("")) : ((*(string*)array_get(args, (int)(i + 1)))));
		string prev = ((int)(i - 1) <= 0 ? (_S("")) : ((*(string*)array_get(args, (int)(i - 1)))));
		if (i == 0 && !vargs__starts_with_hypen(curr)) {
			v->command = curr;
		}
		if ((vargs__starts_with_hypen(prev) && vargs__parse_option(prev).len == 1) && !vargs__starts_with_hypen(curr)) {
			Array_string prev_opt = vargs__parse_option(prev);
			vargs__Args_insert_option(v, (*(string*)array_get(prev_opt, 0)), curr);
		}
		if (vargs__starts_with_hypen(curr)) {
			Array_string opt = vargs__parse_option(curr);

			if (opt.len == (1)) {
				if (next.len == 0) {
					map_set(&v->options, &(string[]){(*(string*)array_get(opt, 0))}, &(string[]) { _S("") });
				}
			}
			else if (opt.len == (2)) {
				vargs__Args_insert_option(v, (*(string*)array_get(opt, 0)), (*(string*)array_get(opt, 1)));
			}
			else {
			}
		}
		if (i != 0 && (!vargs__starts_with_hypen(prev) || vargs__parse_option(prev).len == 2) && !vargs__starts_with_hypen(curr)) {
			array_push((array*)&v->unknown, _MOV((string[]){ string_clone(curr) }));
		}
	}
	return *v;
}
string vargs__Args_str(vargs__Args v) {
	Array_string opts = string_split_into_lines(Map_string_string_str(v.options));
	for (int i = 0; i < opts.len; ++i) {
		string el = ((string*)opts.data)[i];
		array_set(&opts, i, &(string[]) { string_trim_space(el) });
	}
	string opts_str = Array_string_join(opts, _S(" "));
	return str_intp(4, _MOV((StrIntpData[]){{_S("{ command: \""), 0xfe10, {.d_s = v.command}}, {_S("\", options: "), 0xfe10, {.d_s = opts_str}}, {_S(", unknown: "), 0xfe10, {.d_s = Array_string_str(v.unknown)}}, {_S(" \}"), 0, { .d_c = 0 }}}));
}
i64 time__portable_timegm(struct tm* t) {
	int year = (int)(t->tm_year + 1900);
	int month = t->tm_mon;
	if (month > 11) {
		year += (int)(month / 12);
		month %= 12;
	} else if (month < 0) {
		int years_diff = (int)(((int)(11 - month)) / 12);
		year -= years_diff;
		month += (int)(12 * years_diff);
	}
	i64 days_since_1970 = ((i64)(time__days_from_unix_epoch(year, (int)(month + 1), t->tm_mday)));
	return (i64)((i64)(60 * ((i64)((i64)(60 * ((i64)((i64)(24 * days_since_1970) + t->tm_hour))) + t->tm_min))) + t->tm_sec);
}
int time__days_from_unix_epoch(int year, int month, int day) {
	int y = (month <= 2 ? ((int)(year - 1)) : (year));
	int era = (int)(y / 400);
	int year_of_the_era = (int)(y - (int)(era * 400));
	int day_of_year = (int)((int)((int)(((int)((int)(153 * ((int)(month + ((month > 2 ? (-3) : (9)))))) + 2)) / 5) + day) - 1);
	int day_of_the_era = (int)((int)((int)((int)(year_of_the_era * 365) + (int)(year_of_the_era / 4)) - (int)(year_of_the_era / 100)) + day_of_year);
	return (int)((int)((int)(era * 146097) + day_of_the_era) - 719468);
}
i64 time__Duration_nanoseconds(time__Duration d) {
	return ((i64)(d));
}
i64 time__Duration_microseconds(time__Duration d) {
	return ((i64)(d)) / _const_time__microsecond;
}
i64 time__Duration_milliseconds(time__Duration d) {
	return ((i64)(d)) / _const_time__millisecond;
}
f64 time__Duration_seconds(time__Duration d) {
	return (f64)(((f64)(d)) / ((f64)(_const_time__second)));
}
string time__Duration_str(time__Duration d) {
	if (d == _const_time__infinite) {
		return _S("inf");
	}
	string sign = _S("");
	i64 t = ((i64)(d));
	if (t < 0) {
		sign = _S("-");
		t = -t;
	}
	i64 hr = t / _const_time__hour;
	t -= hr * _const_time__hour;
	i64 min = t / _const_time__minute;
	t -= min * _const_time__minute;
	i64 sec = t / _const_time__second;
	t -= sec * _const_time__second;
	i64 ms = t / _const_time__millisecond;
	t -= ms * _const_time__millisecond;
	i64 us = t / _const_time__microsecond;
	t -= us * _const_time__microsecond;
	i64 ns = t;
	bool _t3 = true;
	return ((_t3 == (hr > 0))? (str_intp(5, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = hr}}, {_S(":"), 0x8004fe29, {.d_i64 = min}}, {_S(":"), 0x8004fe29, {.d_i64 = sec}}, {_SLIT0, 0, { .d_c = 0 }}}))) : (_t3 == (min > 0))? (str_intp(5, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = min}}, {_S(":"), 0x8004fe29, {.d_i64 = sec}}, {_S("."), 0x8006fe29, {.d_i64 = ms}}, {_SLIT0, 0, { .d_c = 0 }}}))) : (_t3 == (sec > 0))? (str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = sec}}, {_S("."), 0x8006fe29, {.d_i64 = ms}}, {_S("s"), 0, { .d_c = 0 }}}))) : (_t3 == (ms > 0))? (str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = ms}}, {_S("."), 0x8006fe29, {.d_i64 = us}}, {_S("ms"), 0, { .d_c = 0 }}}))) : (_t3 == (us > 0))? (str_intp(4, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = us}}, {_S("."), 0x8006fe29, {.d_i64 = ns}}, {_S("us"), 0, { .d_c = 0 }}}))) : (str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = sign}}, {_SLIT0, 0xfe09, {.d_i64 = ns}}, {_S("ns"), 0, { .d_c = 0 }}}))));
}
VV_LOC void time__int_to_byte_array_no_pad(int value, Array_u8* arr, int size) {
	int num = value;
	if (size <= 0 || num < 0) {
		return;
	}
	int i = (int)(size - 1);
	for (;;) {
		if (!(num > 0 && i >= 0)) break;
		((u8*)arr->data)[i] = (rune)(((int)(num % 10)) + '0');
		num /= 10;
		i--;
	}
}
string time__Time_format_ss(time__Time t) {
	bool time__Time_format_ss_defer_0 = false;
	Array_u8 buf;
	buf = new_array_from_c_array_noscan(19, 19, sizeof(u8), _MOV((u8[19]){
			((u8)('0')), '0', '0', '0', '-', '0', '0', '-', '0',
			'0', ' ', '0', '0', ':', '0', '0', ':',
			'0', '0'}));
	time__Time_format_ss_defer_0 = true;
	time__int_to_byte_array_no_pad(t.year, &buf, 4);
	time__int_to_byte_array_no_pad(t.month, &buf, 7);
	time__int_to_byte_array_no_pad(t.day, &buf, 10);
	time__int_to_byte_array_no_pad(t.hour, &buf, 13);
	time__int_to_byte_array_no_pad(t.minute, &buf, 16);
	time__int_to_byte_array_no_pad(t.second, &buf, 19);
	string _t1 = Array_u8_bytestr(buf);
	// Defer begin
	if (time__Time_format_ss_defer_0) {
		array_free(&buf);
	}
	// Defer end
	return _t1;
}
string time__Time_http_header_string(time__Time t) {
	bool time__Time_http_header_string_defer_0 = false;
	Array_u8 buf;
	string day_str = time__Time_weekday_str(t);
	string month_str = time__Time_smonth(t);
	buf = new_array_from_c_array_noscan(29, 29, sizeof(u8), _MOV((u8[29]){
			string_at(day_str, 0), string_at(day_str, 1), string_at(day_str, 2), ',', ' ', '0', '0', ' ', string_at(month_str, 0),
			string_at(month_str, 1), string_at(month_str, 2), ' ', '0', '0', '0', '0', ' ',
			'0', '0', ':', '0', '0', ':', '0', '0',
			' ', 'G', 'M', 'T'}));
	time__Time_http_header_string_defer_0 = true;
	time__int_to_byte_array_no_pad(t.day, &buf, 7);
	time__int_to_byte_array_no_pad(t.year, &buf, 16);
	time__int_to_byte_array_no_pad(t.hour, &buf, 19);
	time__int_to_byte_array_no_pad(t.minute, &buf, 22);
	time__int_to_byte_array_no_pad(t.second, &buf, 25);
	string http_header_string = Array_u8_bytestr(buf);
	string _t1 = http_header_string;
	// Defer begin
	if (time__Time_http_header_string_defer_0) {
		array_free(&buf);
	}
	// Defer end
	return _t1;
}
inline bool time__Time__eq(time__Time t1, time__Time t2) {
	return time__Time_unix(t1) == time__Time_unix(t2) && t1.nanosecond == t2.nanosecond;
}
inline bool time__Time__lt(time__Time t1, time__Time t2) {
	return time__Time_unix(t1) < time__Time_unix(t2) || (time__Time_unix(t1) == time__Time_unix(t2) && t1.nanosecond < t2.nanosecond);
}
inline time__Duration time__Time__minus(time__Time lhs, time__Time rhs) {
	i64 unixs = ((i64)((i64)(time__Time_unix(lhs) - time__Time_unix(rhs)))) * _const_time__second;
	int nanos = (int)(lhs.nanosecond - rhs.nanosecond);
	return (i64)(unixs + nanos);
}
string time__TimeParseError_msg(time__TimeParseError err) {
	return str_intp(3, _MOV((StrIntpData[]){{_S("Invalid time format code: "), 0xfe07, {.d_i32 = err.code}}, {_S(", error: "), 0xfe10, {.d_s = err.message}}, {_SLIT0, 0, { .d_c = 0 }}}));
}
time__StopWatch time__new_stopwatch(time__StopWatchOptions opts) {
	u64 initial = ((u64)(0U));
	if (opts.auto_start) {
		initial = time__sys_mono_now();
	}
	return ((time__StopWatch){.elapsed = 0U,.start = initial,.end = 0U,});
}
void time__StopWatch_start(time__StopWatch* t) {
	t->start = time__sys_mono_now();
	t->end = 0U;
}
time__Duration time__StopWatch_elapsed(time__StopWatch t) {
	if (t.start > 0U) {
		if (t.end == 0U) {
			return ((((i64)((u64)((u64)(time__sys_mono_now() - t.start) + t.elapsed)))));
		} else {
			return ((((i64)((u64)((u64)(t.end - t.start) + t.elapsed)))));
		}
	}
	return ((((i64)(t.elapsed))));
}
time__Time time__now(void) {
	return time__win_now();
	return time__linux_now();
}
VV_LOC time__Time time__time_with_unix(time__Time t) {
	if (t.__v_unix != 0) {
		return t;
	}
	struct tm tt = ((struct tm){
		.tm_year = (int)(t.year - 1900),
		.tm_mon = (int)(t.month - 1),
		.tm_mday = t.day,
		.tm_hour = t.hour,
		.tm_min = t.minute,
		.tm_sec = t.second,
	});
	i64 utime = time__make_unix_time(tt);
	return ((time__Time){.__v_unix = utime,.year = (t).year,.month = (t).month,.day = (t).day,.hour = (t).hour,.minute = (t).minute,.second = (t).second,.nanosecond = (t).nanosecond,.is_local = (t).is_local,});
}
string time__Time_str(time__Time t) {
	return time__Time_format_ss(t);
}
int time__Duration_sys_milliseconds(time__Duration d) {
	if (d > 2147483647 * _const_time__millisecond) {
		return -1;
	} else if (d <= 0) {
		return 0;
	} else {
		return ((int)(d / _const_time__millisecond));
	}
	return 0;
}
string time__Time_smonth(time__Time t) {
	if (t.month <= 0 || t.month > 12) {
		return _S("---");
	}
	int i = (int)(t.month - 1);
	return string_substr(_const_time__months_string, (int)(i * 3), (int)(((int)(i + 1)) * 3));
}
inline i64 time__Time_unix(time__Time t) {
	return time__time_with_unix(t).__v_unix;
}
time__Time time__Time_add(time__Time t, time__Duration duration_in_nanosecond) {
	i64 increased_time_nanosecond = (i64)(((i64)(t.nanosecond)) + time__Duration_nanoseconds(duration_in_nanosecond));
	i64 increased_time_second = (i64)(time__Time_unix(t) + (increased_time_nanosecond / _const_time__second));
	increased_time_nanosecond = increased_time_nanosecond % _const_time__second;
	if (increased_time_nanosecond < 0) {
		increased_time_second--;
		increased_time_nanosecond += _const_time__second;
	}
	time__Time res = time__unix_nanosecond(increased_time_second, ((int)(increased_time_nanosecond)));
	return (t.is_local ? (time__Time_as_local(res)) : (res));
}
int time__day_of_week(int y, int m, int d) {
	Array_int t = new_array_from_c_array_noscan(12, 12, sizeof(int), _MOV((int[12]){
			0, 3, 2, 5, 0, 3, 5, 1, 4,
			6, 2, 4}));
	int sy = y;
	if (m < 3) {
		sy = (int)(sy - 1);
	}
	return (int)((int)(((int)((int)((int)((int)((int)((int)(sy + (int)(sy / 4)) - (int)(sy / 100)) + (int)(sy / 400)) + (*(int*)array_get(t, (int)(m - 1)))) + d) - 1)) % 7) + 1);
}
int time__Time_day_of_week(time__Time t) {
	return time__day_of_week(t.year, t.month, t.day);
}
string time__Time_weekday_str(time__Time t) {
	int i = (int)(time__Time_day_of_week(t) - 1);
	return string_substr(_const_time__long_days[v_fixed_index(i, 7)], 0, 3);
}
time__Time time__Time_as_local(time__Time t) {
	return ((time__Time){.__v_unix = (t).__v_unix,.year = (t).year,.month = (t).month,.day = (t).day,.hour = (t).hour,.minute = (t).minute,.second = (t).second,.nanosecond = (t).nanosecond,.is_local = true,});
}
VV_LOC i64 time__make_unix_time(struct tm t) {
	return time__portable_timegm(&t);
}
VV_LOC u64 time__init_win_time_freq(void) {
	u64 f = ((u64)(0U));
	QueryPerformanceFrequency(((voidptr)(&f)));
	return f;
}
VV_LOC u64 time__init_win_time_start(void) {
	u64 s = ((u64)(0U));
	QueryPerformanceCounter(((voidptr)(&s)));
	return s;
}
u64 time__sys_mono_now(void) {
	u64 tm = ((u64)(0U));
	QueryPerformanceCounter(((voidptr)(&tm)));
	return (u64)((u64)(((u64)(tm - _const_time__start_time)) * 1000000000U) / _const_time__freq_time);
}
VV_LOC time__Time time__win_now(void) {
	struct _FILETIME ft_utc = ((struct _FILETIME){.dwLowDateTime = 0,.dwHighDateTime = 0,});
	GetSystemTimeAsFileTime(&ft_utc);
	time__SystemTime st_utc = ((time__SystemTime){.year = 0,.month = 0,.day_of_week = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.millisecond = 0,});
	FileTimeToSystemTime(&ft_utc, ((voidptr)(&st_utc)));
	time__SystemTime st_local = ((time__SystemTime){.year = 0,.month = 0,.day_of_week = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.millisecond = 0,});
	SystemTimeToTzSpecificLocalTime(((void*)0), ((voidptr)(&st_utc)), ((voidptr)(&st_local)));
	time__Time t = ((time__Time){
		.__v_unix = time__SystemTime_unix(st_local),
		.year = st_local.year,
		.month = st_local.month,
		.day = st_local.day,
		.hour = st_local.hour,
		.minute = st_local.minute,
		.second = st_local.second,
		.nanosecond = (int)(((int)(st_local.millisecond)) * 1000000),
		.is_local = true,
	});
	return t;
}
VV_LOC i64 time__SystemTime_unix(time__SystemTime st) {
	struct tm tt = ((struct tm){
		.tm_year = (u16)(st.year - 1900U),
		.tm_mon = (u16)(st.month - 1U),
		.tm_mday = st.day,
		.tm_hour = st.hour,
		.tm_min = st.minute,
		.tm_sec = st.second,
	});
	return time__make_unix_time(tt);
}
VV_LOC time__Time time__linux_now(void) {
	return ((time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,});
}
void time__sleep(time__Duration duration) {
	Sleep(((int)(duration / _const_time__millisecond)));
}
time__Time time__unix(i64 epoch) {
	return time__unix_nanosecond(epoch, 0);
}
time__Time time__unix_nanosecond(i64 abs_unix_timestamp, int nanosecond) {
	i64 day_offset = (i64)(abs_unix_timestamp / 86400);
	if ((i64)(abs_unix_timestamp % 86400) < 0) {
		day_offset--;
	}
	multi_return_int_int_int mr_1698 = time__calculate_date_from_day_offset(day_offset);
	int year = mr_1698.arg0;
	int month = mr_1698.arg1;
	int day = mr_1698.arg2;
	multi_return_int_int_int mr_1769 = time__calculate_time_from_second_offset((i64)(abs_unix_timestamp % 86400));
	int hour_ = mr_1769.arg0;
	int minute_ = mr_1769.arg1;
	int second_ = mr_1769.arg2;
	return ((time__Time){
		.__v_unix = abs_unix_timestamp,
		.year = year,
		.month = month,
		.day = day,
		.hour = hour_,
		.minute = minute_,
		.second = second_,
		.nanosecond = nanosecond,
		.is_local = 0,
	});
}
VV_LOC multi_return_int_int_int time__calculate_date_from_day_offset(i64 day_offset_) {
	i64 day_offset = day_offset_;
	day_offset += 719468;
	int era = 0;
	if (day_offset >= 0) {
		era = ((int)((i64)(day_offset / 146097)));
	} else {
		era = ((int)((i64)(((i64)((i64)(day_offset - 146097) - 1)) / 146097)));
	}
	i64 day_of_era = (i64)(day_offset - (int)(era * 146097));
	i64 year_of_era = (i64)(((i64)((i64)((i64)(day_of_era - (i64)(day_of_era / (1460))) + (i64)(day_of_era / 36524)) - (i64)(day_of_era / (146096)))) / 365);
	int year = ((int)((i64)(year_of_era + (int)(era * 400))));
	i64 day_of_year = (i64)(day_of_era - ((i64)((i64)((i64)(365 * year_of_era) + (i64)(year_of_era / 4)) - (i64)(year_of_era / 100))));
	i64 month_position = (i64)(((i64)((i64)(5 * day_of_year) + 2)) / 153);
	int day = ((int)((i64)((i64)(day_of_year - (i64)(((i64)((i64)(153 * month_position) + 2)) / 5)) + 1)));
	int month = ((int)(month_position));
	if (month_position < 10) {
		month += 3;
	} else {
		month -= 9;
	}
	if (month <= 2) {
		year += 1;
	}
	return (multi_return_int_int_int){.arg0=year, .arg1=month, .arg2=day};
}
VV_LOC multi_return_int_int_int time__calculate_time_from_second_offset(i64 second_offset_) {
	i64 second_offset = second_offset_;
	if (second_offset < 0) {
		second_offset += _const_time__seconds_per_day;
	}
	i64 hour_ = (i64)(second_offset / 3600);
	second_offset %= _const_time__seconds_per_hour;
	i64 minute_ = (i64)(second_offset / 60);
	second_offset %= _const_time__seconds_per_minute;
	return (multi_return_int_int_int){.arg0=((int)(hour_)), .arg1=((int)(minute_)), .arg2=((int)(second_offset))};
}
VV_LOC string net__urllib__error_msg(string message, string val) {
	string msg = str_intp(2, _MOV((StrIntpData[]){{_S("net.urllib."), 0xfe10, {.d_s = message}}, {_SLIT0, 0, { .d_c = 0 }}}));
	if ((val).len != 0) {
		msg = str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = msg}}, {_S(" ("), 0xfe10, {.d_s = val}}, {_S(")"), 0, { .d_c = 0 }}}));
	}
	return msg;
}
VV_LOC bool net__urllib__should_escape(u8 c, net__urllib__EncodingMode mode) {
	if (u8_is_alnum(c)) {
		return false;
	}
	if (mode == net__urllib__EncodingMode__encode_host || mode == net__urllib__EncodingMode__encode_zone) {
		if (c == '!' || c == '$' || c == '&' || c == '\\' || c == '(' || c == ')' || c == '*' || c == '+' || c == ',' || c == ';' || c == '=' || c == ':' || c == '[' || c == ']' || c == '<' || c == '>' || c == '"') {
			return false;
		}
	}
	switch (c) {
		case '-': case '_': case '.': case '~': {
			return false;
		}
		case '$': case '&': case '+': case ',': case '/': case ':': case ';': case '=': case '?': case '@': {
			switch (mode) {
				case net__urllib__EncodingMode__encode_path: {
					return c == '?';
				}
				case net__urllib__EncodingMode__encode_path_segment: {
					return c == '/' || c == ';' || c == ',' || c == '?';
				}
				case net__urllib__EncodingMode__encode_user_password: {
					return c == '@' || c == '/' || c == '?' || c == ':';
				}
				case net__urllib__EncodingMode__encode_query_component: {
					return true;
				}
				case net__urllib__EncodingMode__encode_fragment: {
					return false;
				}
				case net__urllib__EncodingMode__encode_host:
				case net__urllib__EncodingMode__encode_zone:
				default: {
					{
						break;
					}
				}
			}
			
			break;
		}
		default: {
			{
				break;
			}
		}
	}
	
	if (mode == net__urllib__EncodingMode__encode_fragment) {
		switch (c) {
			case '!': case '(': case ')': case '*': {
				return false;
			}
			default: {
				{
					break;
				}
			}
		}
		
	}
	return true;
}
VV_LOC _result_string net__urllib__unescape(string s_, net__urllib__EncodingMode mode) {
	string s = s_;
	int n = 0;
	bool has_plus = false;
	for (int i = 0; i < s.len; ) {
		u8 x = string_at(s, i);

		if (x == ('%')) {
			if ((s).len == 0) {
				break;
			}
			n++;
			if ((int)(i + 2) >= s.len || !net__urllib__ishex(string_at(s, (int)(i + 1))) || !net__urllib__ishex(string_at(s, (int)(i + 2)))) {
				if (mode == net__urllib__EncodingMode__encode_query_component && (int)(i + 1) < s.len) {
					s = string__plus(string__plus(string_substr(s, 0, i), _S("%25")), string_substr(s, ((int)(i + 1)), 2147483647));
					i += 4;
					continue;
				}
				s = string_substr(s, i, 2147483647);
				if (s.len > 3) {
					s = string_substr(s, 0, 3);
				}
				return (_result_string){ .is_error=true, .err=_v_error(net__urllib__error_msg(_const_net__urllib__err_msg_escape, s)), .data={E_STRUCT} };
			}
			if ((int)(i + 3) >= s.len && mode == net__urllib__EncodingMode__encode_host && net__urllib__unhex(string_at(s, (int)(i + 1))) < 8 && !string__eq(string_substr(s, i, (int)(i + 3)), _S("%25"))) {
				return (_result_string){ .is_error=true, .err=_v_error(net__urllib__error_msg(_const_net__urllib__err_msg_escape, string_substr(s, i, (int)(i + 3)))), .data={E_STRUCT} };
			}
			if (mode == net__urllib__EncodingMode__encode_zone) {
				if ((int)(i + 3) >= s.len) {
					return (_result_string){ .is_error=true, .err=_v_error(net__urllib__error_msg(_S("unescape: invalid escape sequence"), _S(""))), .data={E_STRUCT} };
				}
				u8 v = ((((net__urllib__unhex(string_at(s, (int)(i + 1))) << ((u8)(4)))) | net__urllib__unhex(string_at(s, (int)(i + 2)))));
				if (!string__eq(string_substr(s, i, (int)(i + 3)), _S("%25")) && v != ' ' && net__urllib__should_escape(v, net__urllib__EncodingMode__encode_host)) {
					_v_error(net__urllib__error_msg(_const_net__urllib__err_msg_escape, string_substr(s, i, (int)(i + 3))));
				}
			}
			i += 3;
		}
		else if (x == ('+')) {
			has_plus = mode == net__urllib__EncodingMode__encode_query_component;
			i++;
		}
		else {
			if ((mode == net__urllib__EncodingMode__encode_host || mode == net__urllib__EncodingMode__encode_zone) && string_at(s, i) < 0x80 && net__urllib__should_escape(string_at(s, i), mode)) {
				_v_error(net__urllib__error_msg(_S("unescape: invalid character in host name"), string_substr(s, i, (int)(i + 1))));
			}
			i++;
		}
	}
	if (n == 0 && !has_plus) {
		_result_string _t4 = {0};
		_result_ok(&(string[]) { str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}})) }, (_result*)(&_t4), sizeof(string));
		return _t4;
	}
	if (s.len < (int)(2 * n)) {
		return (_result_string){ .is_error=true, .err=_v_error(net__urllib__error_msg(_S("unescape: invalid escape sequence"), _S(""))), .data={E_STRUCT} };
	}
	strings__Builder t = strings__new_builder((int)(s.len - (int)(2 * n)));
	for (int i = 0; i < s.len; i++) {
		u8 x = string_at(s, i);

		if (x == ('%')) {
			if ((int)(i + 2) >= s.len) {
				return (_result_string){ .is_error=true, .err=_v_error(net__urllib__error_msg(_S("unescape: invalid escape sequence"), _S(""))), .data={E_STRUCT} };
			}
			strings__Builder_write_string(&t, u8_ascii_str(((((net__urllib__unhex(string_at(s, (int)(i + 1))) << ((u8)(4)))) | net__urllib__unhex(string_at(s, (int)(i + 2)))))));
			i += 2;
		}
		else if (x == ('+')) {
			if (mode == net__urllib__EncodingMode__encode_query_component) {
				strings__Builder_write_string(&t, _S(" "));
			} else {
				strings__Builder_write_string(&t, _S("+"));
			}
		}
		else {
			strings__Builder_write_string(&t, u8_ascii_str(string_at(s, i)));
		}
	}
	_result_string _t7 = {0};
	_result_ok(&(string[]) { strings__Builder_str(&t) }, (_result*)(&_t7), sizeof(string));
	return _t7;
}
VV_LOC string net__urllib__escape(string s, net__urllib__EncodingMode mode) {
	int space_count = 0;
	int hex_count = 0;
	u8 c = ((u8)(0));
	for (int i = 0; i < s.len; ++i) {
		c = string_at(s, i);
		if (net__urllib__should_escape(c, mode)) {
			if (c == ' ' && mode == net__urllib__EncodingMode__encode_query_component) {
				space_count++;
			} else {
				hex_count++;
			}
		}
	}
	if (space_count == 0 && hex_count == 0) {
		return s;
	}
	int required = (int)(s.len + (int)(2 * hex_count));
	Array_u8 t = __new_array_with_default_noscan(required, 0, sizeof(u8), 0);
	if (hex_count == 0) {
		copy(&t, string_bytes(s));
		for (int i = 0; i < s.len; ++i) {
			if (string_at(s, i) == ' ') {
				array_set(&t, i, &(u8[]) { '+' });
			}
		}
		return Array_u8_bytestr(t);
	}
	string upperhex = _S("0123456789ABCDEF");
	int j = 0;
	for (int i = 0; i < s.len; ++i) {
		u8 c1 = string_at(s, i);
		if (c1 == ' ' && mode == net__urllib__EncodingMode__encode_query_component) {
			array_set(&t, j, &(u8[]) { '+' });
			j++;
		} else if (net__urllib__should_escape(c1, mode)) {
			array_set(&t, j, &(u8[]) { '%' });
			array_set(&t, (int)(j + 1), &(u8[]) { string_at(upperhex, (c1 >> 4)) });
			array_set(&t, (int)(j + 2), &(u8[]) { string_at(upperhex, (c1 & 15)) });
			j += 3;
		} else {
			array_set(&t, j, &(u8[]) { string_at(s, i) });
			j++;
		}
	}
	return Array_u8_bytestr(t);
}
VV_LOC bool net__urllib__Userinfo_empty(net__urllib__Userinfo* u) {
	return isnil(u) || ((u->username).len == 0 && (u->password).len == 0);
}
VV_LOC string net__urllib__Userinfo_str(net__urllib__Userinfo* u) {
	if (net__urllib__Userinfo_empty(u)) {
		return _S("");
	}
	string s = net__urllib__escape(u->username, net__urllib__EncodingMode__encode_user_password);
	if (u->password_set) {
		s = string__plus(s, string__plus(_S(":"), net__urllib__escape(u->password, net__urllib__EncodingMode__encode_user_password)));
	}
	return s;
}
string net__urllib__URL_escaped_path(net__urllib__URL* u) {
	if ((u->raw_path).len != 0 && net__urllib__valid_encoded_path(u->raw_path)) {
		_result_string _t1 = net__urllib__unescape(u->raw_path, net__urllib__EncodingMode__encode_path);
		if (_t1.is_error) {
			IError err = _t1.err;
			return _S("");
		}
		
 ;
		return u->raw_path;
	}
	if (fast_string_eq(u->path, _S("*"))) {
		return _S("*");
	}
	return net__urllib__escape(u->path, net__urllib__EncodingMode__encode_path);
}
VV_LOC bool net__urllib__valid_encoded_path(string s) {
	for (int i = 0; i < s.len; ++i) {
		u8 x = string_at(s, i);

		if (x == ('!') || x == ('$') || x == ('&') || x == ('\\') || x == ('(') || x == (')') || x == ('*') || x == ('+') || x == (',') || x == (';') || x == ('=') || x == (':') || x == ('@')) {
		}
		else if (x == ('[') || x == (']')) {
		}
		else if (x == ('%')) {
		}
		else {
			if (net__urllib__should_escape(string_at(s, i), net__urllib__EncodingMode__encode_path)) {
				return false;
			}
		}
	}
	return true;
}
string net__urllib__URL_str(net__urllib__URL u) {
	strings__Builder buf = strings__new_builder(200);
	if ((u.scheme).len != 0) {
		strings__Builder_write_string(&buf, u.scheme);
		strings__Builder_write_string(&buf, _S(":"));
	}
	if ((u.opaque).len != 0) {
		strings__Builder_write_string(&buf, u.opaque);
	} else {
		if ((u.scheme).len != 0 || (u.host).len != 0 || !net__urllib__Userinfo_empty(u.user)) {
			if ((u.host).len != 0 || (u.path).len != 0 || !net__urllib__Userinfo_empty(u.user)) {
				strings__Builder_write_string(&buf, _S("//"));
			}
			if (!net__urllib__Userinfo_empty(u.user)) {
				strings__Builder_write_string(&buf, net__urllib__Userinfo_str(u.user));
				strings__Builder_write_string(&buf, _S("@"));
			}
			if ((u.host).len != 0) {
				strings__Builder_write_string(&buf, net__urllib__escape(u.host, net__urllib__EncodingMode__encode_host));
			}
		}
		string path = net__urllib__URL_escaped_path(&u);
		if ((path).len != 0 && string_at(path, 0) != '/' && (u.host).len != 0) {
			strings__Builder_write_string(&buf, _S("/"));
		}
		if (buf.len == 0) {
			int i = string_index_u8(path, ':');
			if (i > -1) {
				if (i > -1 && string_index_u8(string_substr(path, 0, i), '/') == -1) {
					strings__Builder_write_string(&buf, _S("./"));
				}
			}
		}
		strings__Builder_write_string(&buf, path);
	}
	if (u.force_query || (u.raw_query).len != 0) {
		strings__Builder_write_string(&buf, _S("?"));
		strings__Builder_write_string(&buf, u.raw_query);
	}
	if ((u.fragment).len != 0) {
		strings__Builder_write_string(&buf, _S("#"));
		strings__Builder_write_string(&buf, net__urllib__escape(u.fragment, net__urllib__EncodingMode__encode_fragment));
	}
	return strings__Builder_str(&buf);
}
bool net__urllib__ishex(u8 c) {
	if ('0' <= c && c <= '9') {
		return true;
	} else if ('a' <= c && c <= 'f') {
		return true;
	} else if ('A' <= c && c <= 'F') {
		return true;
	}
	return false;
}
VV_LOC u8 net__urllib__unhex(u8 c) {
	if ('0' <= c && c <= '9') {
		return (rune)(c - '0');
	} else if ('a' <= c && c <= 'f') {
		return (rune)((rune)(c - 'a') + 10);
	} else if ('A' <= c && c <= 'F') {
		return (rune)((rune)(c - 'A') + 10);
	}
	return 0;
}
_result_int io__BufferedReader_read(io__BufferedReader* r, Array_u8* buf) {
	if (r->end_of_stream) {
		return (_result_int){ .is_error=true, .err=I_io__Eof_to_Interface_IError(((io__Eof*)memdup(&(io__Eof){.Error = ((Error){E_STRUCT}),}, sizeof(io__Eof)))), .data={E_STRUCT} };
	}
	if (io__BufferedReader_needs_fill(*r)) {
		if (!io__BufferedReader_fill_buffer(r)) {
			return (_result_int){ .is_error=true, .err=I_io__Eof_to_Interface_IError(((io__Eof*)memdup(&(io__Eof){.Error = ((Error){E_STRUCT}),}, sizeof(io__Eof)))), .data={E_STRUCT} };
		}
	}
	int read = copy(buf, array_slice(r->buf, r->offset, r->len));
	if (read == 0) {
		return (_result_int){ .is_error=true, .err=I_io__NotExpected_to_Interface_IError(((io__NotExpected*)memdup(&(io__NotExpected){.cause = _S("invalid copy of buffer"),.code = -1,}, sizeof(io__NotExpected)))), .data={E_STRUCT} };
	}
	r->offset += read;
	r->total_read += read;
	_result_int _t4 = {0};
	_result_ok(&(int[]) { read }, (_result*)(&_t4), sizeof(int));
	return _t4;
}
void io__BufferedReader_free(io__BufferedReader* r) {
	array_free(&r->buf);
}
VV_LOC bool io__BufferedReader_fill_buffer(io__BufferedReader* r) {
	if (r->end_of_stream) {
		return true;
	}
	r->offset = 0;
	r->len = 0;
	_result_int _t2 = io__Reader_name_table[r->reader._typ]._method_read(r->reader._object, &r->buf);
	if (_t2.is_error) {
		IError err = _t2.err;
		r->end_of_stream = true;
		return false;
	}
	
 	r->len = (*(int*)_t2.data);
	if (r->len == 0) {
		r->fails++;
	} else {
		r->fails = 0;
	}
	if (r->fails >= r->mfails) {
		r->end_of_stream = true;
		return false;
	}
	return true;
}
VV_LOC bool io__BufferedReader_needs_fill(io__BufferedReader r) {
	return r.offset >= r.len;
}
bool io__BufferedReader_end_of_stream(io__BufferedReader r) {
	return r.end_of_stream;
}
int io__BufferedWriter_buffered(io__BufferedWriter b) {
	return b.n;
}
_result_void io__BufferedWriter_flush(io__BufferedWriter* b) {
	if (io__BufferedWriter_buffered(*b) == 0) {
		return (_result_void){0};
	}
	_result_int _t1 = io__Writer_name_table[b->wr._typ]._method_write(b->wr._object, array_slice(b->buf, 0, b->n));
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 	int n = (*(int*)_t1.data);
	if (n < b->n) {
		return (_result_void){ .is_error=true, .err=_v_error(_S("Writer accepted less bytes than expected without returning any explicit error.")), .data={E_STRUCT} };
	}
	b->n = 0;
	return (_result_void){0};
}
int io__BufferedWriter_available(io__BufferedWriter b) {
	return (int)(b.buf.len - b.n);
}
_result_int io__BufferedWriter_write(io__BufferedWriter* b, Array_u8 src) {
	Array_u8 p = array_clone_to_depth(&src, 0);
	int nn = 0;
	for (;;) {
		if (!(p.len > io__BufferedWriter_available(*b))) break;
		int n = 0;
		if (io__BufferedWriter_buffered(*b) == 0) {
			_result_int _t1 = io__Writer_name_table[b->wr._typ]._method_write(b->wr._object, p);
			if (_t1.is_error) {
				_result_int _t2 = {0};
				_t2.is_error = true;
				_t2.err = _t1.err;
				return _t2;
			}
			
 			n = (*(int*)_t1.data);
		} else {
			n = copy(&(array[]){array_slice(b->buf, b->n, 2147483647)}[0], p);
			b->n += n;
			_result_void _t3 = io__BufferedWriter_flush(b);
			if (_t3.is_error) {
				_result_int _t4 = {0};
				_t4.is_error = true;
				_t4.err = _t3.err;
				return _t4;
			}
			
 ;
		}
		nn += n;
		p = array_clone_static_to_depth(array_slice(p, n, 2147483647), 0);
	}
	int n = copy(&(array[]){array_slice(b->buf, b->n, 2147483647)}[0], p);
	b->n += n;
	nn += n;
	_result_int _t5 = {0};
	_result_ok(&(int[]) { nn }, (_result*)(&_t5), sizeof(int));
	return _t5;
}
_result_int io__MultiWriter_write(io__MultiWriter* m, Array_u8 buf) {
	for (int _t1 = 0; _t1 < m->writers.len; ++_t1) {
		io__Writer* w = ((io__Writer*)m->writers.data) + _t1;
		_result_int _t2 = io__Writer_name_table[w->_typ]._method_write(w->_object, buf);
		if (_t2.is_error) {
			_result_int _t3 = {0};
			_t3.is_error = true;
			_t3.err = _t2.err;
			return _t3;
		}
		
 		int n = (*(int*)_t2.data);
		if (n != buf.len) {
			return (_result_int){ .is_error=true, .err=_v_error(_S("io: incomplete write to writer of MultiWriter")), .data={E_STRUCT} };
		}
	}
	_result_int _t5 = {0};
	_result_ok(&(int[]) { buf.len }, (_result*)(&_t5), sizeof(int));
	return _t5;
}
VV_LOC string io__NotExpected_msg(io__NotExpected err) {
	return err.cause;
}
VV_LOC int io__NotExpected_code(io__NotExpected err) {
	return err.code;
}
_result_int io__ReaderWriterImpl_read(io__ReaderWriterImpl* r, Array_u8* buf) {
	return io__Reader_name_table[r->r._typ]._method_read(r->r._object, buf);
}
_result_int io__ReaderWriterImpl_write(io__ReaderWriterImpl* r, Array_u8 buf) {
	return io__Writer_name_table[r->w._typ]._method_write(r->w._object, buf);
}
strings__textscanner__TextScanner strings__textscanner__new(string input) {
	return ((strings__textscanner__TextScanner){.input = input,.ilen = input.len,.pos = 0,});
}
void strings__textscanner__TextScanner_free(strings__textscanner__TextScanner* ss) {
	string_free(&ss->input);
}
inline int strings__textscanner__TextScanner_next(strings__textscanner__TextScanner* ss) {
	if (ss->pos < ss->ilen) {
		int opos = ss->pos;
		ss->pos++;
		return ss->input.str[ opos];
	}
	return -1;
}
inline void strings__textscanner__TextScanner_skip_n(strings__textscanner__TextScanner* ss, int n) {
	ss->pos += n;
	if (ss->pos > ss->ilen) {
		ss->pos = ss->ilen;
	}
}
inline int strings__textscanner__TextScanner_peek(strings__textscanner__TextScanner* ss) {
	if (ss->pos < ss->ilen) {
		return ss->input.str[ ss->pos];
	}
	return -1;
}
inline int strings__textscanner__TextScanner_peek_back(strings__textscanner__TextScanner* ss) {
	return strings__textscanner__TextScanner_peek_back_n(ss, 1);
}
inline int strings__textscanner__TextScanner_peek_back_n(strings__textscanner__TextScanner* ss, int n) {
	int offset = (int)(n + 1);
	if (ss->pos >= offset) {
		return ss->input.str[ (int)(ss->pos - offset)];
	}
	return -1;
}
inline int strings__textscanner__TextScanner_current(strings__textscanner__TextScanner* ss) {
	if (ss->pos > 0) {
		return ss->input.str[ (int)(ss->pos - 1)];
	}
	return -1;
}
u16 net__conv__hton16(u16 host) {
	#if defined(TARGET_ORDER_IS_LITTLE)
	{
		return net__conv__reverse_bytes_u16(host);
	}
	#else
	{
		return host;
	}
	#endif
	return 0;
}
u16 net__conv__ntoh16(u16 net) {
	return net__conv__hton16(net);
}
inline u16 net__conv__reverse_bytes_u16(u16 a) {
	return (((((a >> 8U)) & 0x00FFU)) | ((((a << 8U)) & 0xFF00U)));
}
#if defined(_WIN32)
#else
#endif
inline u64 hash__wymum(u64 a, u64 b) {
	u32 mask32 = ((u32)(4294967295U));
	u64 x0 = (a & mask32);
	u64 x1 = (a >> 32U);
	u64 y0 = (b & mask32);
	u64 y1 = (b >> 32U);
	u64 w0 = (u64)(x0 * y0);
	u64 t = (u64)((u64)(x1 * y0) + ((w0 >> 32U)));
	u64 w1 = (t & mask32);
	u64 w2 = (t >> 32U);
	w1 += (u64)(x0 * y1);
	u64 hi = (u64)((u64)((u64)(x1 * y1) + w2) + ((w1 >> 32U)));
	u64 lo = (u64)(a * b);
	return (hi ^ lo);
}
string os__getenv(string key) {
	_option_string _t2 = os__getenv_opt(key);
	if (_t2.state != 0) {
		IError err = _t2.err;
		*(string*) _t2.data = _S("");
	}
	
 	return (*(string*)_t2.data);
}
_option_string os__getenv_opt(string key) {
	bool os__getenv_opt_defer_0 = false;
	u16* kw;
	{ // Unsafe block
		#if defined(_WIN32)
		{
			kw = string_to_wide(key);
			os__getenv_opt_defer_0 = true;
			voidptr s = _wgetenv(kw);
			if (s == 0) {
				_option_string _t2 = (_option_string){ .state=2, .err=_const_none__, .data={E_STRUCT} };
				// Defer begin
				if (os__getenv_opt_defer_0) {
				#if defined(_WIN32)
					_v_free(((voidptr)(kw)));
				
				#endif
				}
				// Defer end
				return _t2;
			}
			_option_string _t3;
			_option_ok(&(string[]) { string_from_wide(s) }, (_option*)(&_t3), sizeof(string));
			// Defer begin
			if (os__getenv_opt_defer_0) {
			#if defined(_WIN32)
				_v_free(((voidptr)(kw)));
			
			#endif
			}
			// Defer end
			return _t3;
		}
		#else
		{
		}
		#endif
	}
	return (_option_string){.state=2, .err=_const_none__, .data={E_STRUCT}};
}
int os__setenv(string name, string value, bool overwrite) {
	bool os__setenv_defer_0 = false;
	u16* format;
	#if defined(_WIN32)
	{
		format = string_to_wide(str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = name}}, {_S("="), 0xfe10, {.d_s = value}}, {_SLIT0, 0, { .d_c = 0 }}})));
		os__setenv_defer_0 = true;
		if (overwrite) {
			{ // Unsafe block
				int _t2 = _wputenv(format);
				// Defer begin
				if (os__setenv_defer_0) {
				#if defined(_WIN32)
					_v_free(((voidptr)(format)));
				
				#endif
				}
				// Defer end
				return _t2;
			}
		} else {
			if (os__getenv(name).len == 0) {
				{ // Unsafe block
					int _t3 = _wputenv(format);
					// Defer begin
					if (os__setenv_defer_0) {
					#if defined(_WIN32)
						_v_free(((voidptr)(format)));
					
					#endif
					}
					// Defer end
					return _t3;
				}
			}
		}
		int _t4 = -1;
		// Defer begin
		if (os__setenv_defer_0) {
		#if defined(_WIN32)
			_v_free(((voidptr)(format)));
		
		#endif
		}
		// Defer end
		return _t4;
	}
	#else
	{
	}
	#endif
	return 0;
}
VV_LOC string os__NotExpected_msg(os__NotExpected err) {
	return err.cause;
}
VV_LOC int os__NotExpected_code(os__NotExpected err) {
	return err.code;
}
_result_os__File os__create(string path) {
	_result_FILE_ptr _t1 = os__vfopen(path, _S("wb"));
	if (_t1.is_error) {
		_result_os__File _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 	FILE* cfile = (*(FILE**)_t1.data);
	int fd = os__fileno(cfile);
	_result_os__File _t3 = {0};
	_result_ok(&(os__File[]) { ((os__File){.cfile = (voidptr)cfile,.fd = fd,.is_opened = true,}) }, (_result*)(&_t3), sizeof(os__File));
	return _t3;
}
_result_int os__File_read(os__File* f, Array_u8* buf) {
	if (buf->len == 0) {
		return (_result_int){ .is_error=true, .err=I_os__Eof_to_Interface_IError(((os__Eof*)memdup(&(os__Eof){.Error = ((Error){E_STRUCT}),}, sizeof(os__Eof)))), .data={E_STRUCT} };
	}
	int nbytes = ((int)(fread(buf->data, 1, buf->len, ((FILE*)(f->cfile)))));
	if (nbytes <= 0) {
		if (feof(((FILE*)(f->cfile))) != 0) {
			return (_result_int){ .is_error=true, .err=I_os__Eof_to_Interface_IError(((os__Eof*)memdup(&(os__Eof){.Error = ((Error){E_STRUCT}),}, sizeof(os__Eof)))), .data={E_STRUCT} };
		}
		if (ferror(((FILE*)(f->cfile))) != 0) {
			return (_result_int){ .is_error=true, .err=I_os__NotExpected_to_Interface_IError(((os__NotExpected*)memdup(&(os__NotExpected){.cause = _S("unexpected error from fread"),.code = -1,}, sizeof(os__NotExpected)))), .data={E_STRUCT} };
		}
	}
	_result_int _t4 = {0};
	_result_ok(&(int[]) { nbytes }, (_result*)(&_t4), sizeof(int));
	return _t4;
}
_result_int os__File_write(os__File* f, Array_u8 buf) {
	if (!f->is_opened) {
		return (_result_int){ .is_error=true, .err=os__error_file_not_opened(), .data={E_STRUCT} };
	}
	int written = ((int)(fwrite(buf.data, 1, buf.len, f->cfile)));
	if (written == 0 && buf.len != 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_S("0 bytes written")), .data={E_STRUCT} };
	}
	_result_int _t3 = {0};
	_result_ok(&(int[]) { written }, (_result*)(&_t3), sizeof(int));
	return _t3;
}
VV_LOC _result_int os__fread(voidptr ptr, int item_size, int items, FILE* stream) {
	int nbytes = ((int)(fread(ptr, item_size, items, stream)));
	if (nbytes <= 0) {
		if (feof(stream) != 0) {
			return (_result_int){ .is_error=true, .err=I_os__Eof_to_Interface_IError(((os__Eof*)memdup(&(os__Eof){.Error = ((Error){E_STRUCT}),}, sizeof(os__Eof)))), .data={E_STRUCT} };
		}
		if (ferror(stream) != 0) {
			return (_result_int){ .is_error=true, .err=_v_error(_S("file read error")), .data={E_STRUCT} };
		}
	}
	_result_int _t3 = {0};
	_result_ok(&(int[]) { nbytes }, (_result*)(&_t3), sizeof(int));
	return _t3;
}
_result_int os__File_read_from(os__File* f, u64 pos, Array_u8* buf) {
	if (buf->len == 0) {
		_result_int _t1 = {0};
		_result_ok(&(int[]) { 0 }, (_result*)(&_t1), sizeof(int));
		return _t1;
	}
	#if defined(TARGET_IS_64BIT)
	{
		#if defined(_WIN32)
		{
			_fseeki64(f->cfile, pos, SEEK_SET);
		}
		#else
		{
		}
		#endif
		_result_int _t4 = os__fread(buf->data, 1, buf->len, f->cfile);
		if (_t4.is_error) {
			_result_int _t5 = {0};
			_t5.is_error = true;
			_t5.err = _t4.err;
			return _t5;
		}
		
 		int nbytes = (*(int*)_t4.data);
		_result_int _t6 = {0};
		_result_ok(&(int[]) { nbytes }, (_result*)(&_t6), sizeof(int));
		return _t6;
	}
	#endif
	return (_result_int){ .is_error=true, .err=_v_error(_S("Could not read file")), .data={E_STRUCT} };
}
string os__FileNotOpenedError_msg(os__FileNotOpenedError err) {
	return _S("os: file not opened");
}
string os__SizeOfTypeIs0Error_msg(os__SizeOfTypeIs0Error err) {
	return _S("os: size of type is 0");
}
VV_LOC IError os__error_file_not_opened(void) {
	return I_os__FileNotOpenedError_to_Interface_IError(((os__FileNotOpenedError*)memdup(&(os__FileNotOpenedError){.Error = ((Error){E_STRUCT}),}, sizeof(os__FileNotOpenedError))));
}
bool os__is_abs_path(string path) {
	if ((path).len == 0) {
		return false;
	}
	return os__is_unc_path(path) || os__is_drive_rooted(path) || os__is_normal_path(path);
	return string_at(path, 0) == _const_os__fslash;
}
string os__abs_path(string path) {
	string wd = os__getwd();
	if ((path).len == 0) {
		return wd;
	}
	string npath = os__norm_path(path);
	if (_SLIT_EQ(npath.str, npath.len, ".")) {
		return wd;
	}
	if (!os__is_abs_path(npath)) {
		strings__Builder sb = strings__new_builder(npath.len);
		strings__Builder_write_string(&sb, wd);
		strings__Builder_write_string(&sb, _const_os__path_separator);
		strings__Builder_write_string(&sb, npath);
		return os__norm_path(strings__Builder_str(&sb));
	}
	return npath;
}
string os__norm_path(string path) {
	if ((path).len == 0) {
		return _const_os__dot_str;
	}
	bool rooted = os__is_abs_path(path);
	int volume_len = os__win_volume_len(path);
	string volume = string_substr(path, 0, volume_len);
	if (volume_len != 0 && string_contains(volume, _const_os__fslash_str)) {
		volume = string_replace(volume, _const_os__fslash_str, _const_os__path_separator);
	}
	string cpath = os__clean_path(string_substr(path, volume_len, 2147483647));
	if ((cpath).len == 0 && volume_len == 0) {
		return _const_os__dot_str;
	}
	Array_string spath = string_split(cpath, _const_os__path_separator);
	if (!(Array_string_contains(spath, _S("..")))) {
		return (volume_len != 0 ? (string__plus(volume, cpath)) : (cpath));
	}
	int spath_len = spath.len;
	strings__Builder sb = strings__new_builder(cpath.len);
	if (rooted) {
		strings__Builder_write_string(&sb, _const_os__path_separator);
	}
	Array_string new_path = __new_array_with_default(0, spath_len, sizeof(string), 0);
	int backlink_count = 0;
	for (int i = (int)(spath_len - 1); i >= 0; i--) {
		string part = ((string*)spath.data)[i];
		if ((part).len == 0) {
			continue;
		}
		if (_SLIT_EQ(part.str, part.len, "..")) {
			backlink_count++;
			continue;
		}
		if (backlink_count != 0) {
			backlink_count--;
			continue;
		}
		array_prepend(&new_path, &(string[]){part});
	}
	if (backlink_count != 0 && !rooted) {
		for (int i = 0; i < backlink_count; ++i) {
			strings__Builder_write_string(&sb, _const_os__dot_dot);
			if (new_path.len == 0 && i == (int)(backlink_count - 1)) {
				break;
			}
			strings__Builder_write_string(&sb, _const_os__path_separator);
		}
	}
	strings__Builder_write_string(&sb, Array_string_join(new_path, _const_os__path_separator));
	string res = strings__Builder_str(&sb);
	if (res.len == 0) {
		if (volume_len != 0) {
			return volume;
		}
		if (!rooted) {
			return _const_os__dot_str;
		}
		return _const_os__path_separator;
	}
	if (volume_len != 0) {
		return string__plus(volume, res);
	}
	return res;
}
VV_LOC string os__clean_path(string path) {
	if ((path).len == 0) {
		return _const_os__empty_str;
	}
	strings__Builder sb = strings__new_builder(path.len);
	strings__textscanner__TextScanner sc = strings__textscanner__new(path);
	for (;;) {
		if (!(strings__textscanner__TextScanner_next(&sc) != -1)) break;
		u8 curr = ((u8)(strings__textscanner__TextScanner_current(&sc)));
		int back = strings__textscanner__TextScanner_peek_back(&sc);
		int peek = strings__textscanner__TextScanner_peek(&sc);
		if (back != -1 && os__is_slash(((u8)(back))) && os__is_slash(curr)) {
			continue;
		}
		if (os__is_curr_dir_ref(back, curr, peek)) {
			if (peek != -1 && os__is_slash(((u8)(peek)))) {
				strings__textscanner__TextScanner_skip_n(&sc, 1);
			}
			continue;
		}
		if (curr == _const_os__fslash) {
			strings__Builder_write_u8(&sb, _const_os__bslash);
			continue;
		}
		strings__Builder_write_u8(&sb, ((u8)(strings__textscanner__TextScanner_current(&sc))));
	}
	string res = strings__Builder_str(&sb);
	if (res.len > 1 && os__is_slash(string_at(res, (int)(res.len - 1)))) {
		return string_substr(res, 0, (int)(res.len - 1));
	}
	return res;
}
VV_LOC int os__win_volume_len(string path) {
	int plen = path.len;
	if (plen < 2) {
		return 0;
	}
	if (os__has_drive_letter(path)) {
		return 2;
	}
	if (plen >= 5 && os__starts_w_slash_slash(path) && !os__is_slash(string_at(path, 2))) {
		for (int i = 3; i < plen; i++) {
			if (os__is_slash(string_at(path, i))) {
				if ((int)(i + 1) >= plen || os__is_slash(string_at(path, (int)(i + 1)))) {
					break;
				}
				i++;
				for (; i < plen; i++) {
					if (os__is_slash(string_at(path, i))) {
						return i;
					}
				}
				return i;
			}
		}
	}
	return 0;
}
VV_LOC bool os__is_slash(u8 b) {
	return b == _const_os__bslash || b == _const_os__fslash;
	return b == _const_os__fslash;
}
VV_LOC bool os__is_unc_path(string path) {
	return os__win_volume_len(path) >= 5 && os__starts_w_slash_slash(path);
}
VV_LOC bool os__has_drive_letter(string path) {
	return path.len >= 2 && u8_is_letter(string_at(path, 0)) && string_at(path, 1) == ':';
}
VV_LOC bool os__starts_w_slash_slash(string path) {
	return path.len >= 2 && os__is_slash(string_at(path, 0)) && os__is_slash(string_at(path, 1));
}
VV_LOC bool os__is_drive_rooted(string path) {
	return path.len >= 3 && os__has_drive_letter(path) && os__is_slash(string_at(path, 2));
}
VV_LOC bool os__is_normal_path(string path) {
	int plen = path.len;
	if (plen == 0) {
		return false;
	}
	return (plen == 1 && os__is_slash(string_at(path, 0))) || (plen >= 2 && os__is_slash(string_at(path, 0)) && !os__is_slash(string_at(path, 1)));
}
VV_LOC bool os__is_curr_dir_ref(int byte_one, int byte_two, int byte_three) {
	if (((u8)(byte_two)) != _const_os__dot) {
		return false;
	}
	return (byte_one < 0 || os__is_slash(((u8)(byte_one)))) && (byte_three < 0 || os__is_slash(((u8)(byte_three))));
}
_result_Array_u8 os__read_bytes(string path) {
	bool os__read_bytes_defer_0 = false;
	FILE* fp;
	_result_FILE_ptr _t1 = os__vfopen(path, _S("rb"));
	if (_t1.is_error) {
		_result_Array_u8 _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 	fp = (*(FILE**)_t1.data);
	os__read_bytes_defer_0 = true;
	_result_int _t3 = os__find_cfile_size(fp);
	if (_t3.is_error) {
	// Defer begin
	if (os__read_bytes_defer_0) {
		fclose(fp);
	}
	// Defer end
		_result_Array_u8 _t4 = {0};
		_t4.is_error = true;
		_t4.err = _t3.err;
		return _t4;
	}
	
 	int fsize = (*(int*)_t3.data);
	if (fsize == 0) {
		_result_strings__Builder _t5 = os__slurp_file_in_builder(fp);
		if (_t5.is_error) {
		// Defer begin
		if (os__read_bytes_defer_0) {
			fclose(fp);
		}
		// Defer end
			_result_Array_u8 _t6 = {0};
			_t6.is_error = true;
			_t6.err = _t5.err;
			return _t6;
		}
		
 		strings__Builder sb = (*(strings__Builder*)_t5.data);
		_result_Array_u8 _t7 = {0};
		_result_ok(&(Array_u8[]) { strings__Builder_reuse_as_plain_u8_array(&sb) }, (_result*)(&_t7), sizeof(Array_u8));
		// Defer begin
		if (os__read_bytes_defer_0) {
			fclose(fp);
		}
		// Defer end
		return _t7;
	}
	Array_u8 res = __new_array_with_default_noscan(fsize, 0, sizeof(u8), 0);
	int nr_read_elements = ((int)(fread(res.data, 1, fsize, fp)));
	if (nr_read_elements == 0 && fsize > 0) {
		_result_Array_u8 _t8 = (_result_Array_u8){ .is_error=true, .err=_v_error(_S("fread failed")), .data={E_STRUCT} };
		// Defer begin
		if (os__read_bytes_defer_0) {
			fclose(fp);
		}
		// Defer end
		return _t8;
	}
	array_trim(&res, nr_read_elements);
	_result_Array_u8 _t9 = {0};
	_result_ok(&(Array_u8[]) { res }, (_result*)(&_t9), sizeof(Array_u8));
	// Defer begin
	if (os__read_bytes_defer_0) {
		fclose(fp);
	}
	// Defer end
	return _t9;
}
VV_LOC _result_int os__find_cfile_size(FILE* fp) {
	int cseek = fseek(fp, 0, SEEK_END);
	isize raw_fsize = ftell(fp);
	if (raw_fsize != 0 && cseek != 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_S("fseek failed")), .data={E_STRUCT} };
	}
	if (cseek != 0 && raw_fsize < 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_S("ftell failed")), .data={E_STRUCT} };
	}
	int len = ((int)(raw_fsize));
	if (((i64)(len)) < raw_fsize) {
		return (_result_int){ .is_error=true, .err=_v_error(str_intp(3, _MOV((StrIntpData[]){{_S("int("), 0xfe09, {.d_i64 = raw_fsize}}, {_S(") cast results in "), 0xfe07, {.d_i32 = len}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
	}
	rewind(fp);
	_result_int _t4 = {0};
	_result_ok(&(int[]) { len }, (_result*)(&_t4), sizeof(int));
	return _t4;
}
VV_LOC _result_strings__Builder os__slurp_file_in_builder(FILE* fp) {
	Array_fixed_u8_4096 buf = {0};
	strings__Builder sb = strings__new_builder(_const_os__buf_size);
	for (;;) {
		_result_int _t1 = os__fread(&buf[0], 1, _const_os__buf_size, fp);
		if (_t1.is_error) {
			IError err = _t1.err;
			if ((err)._typ == _IError_os__Eof_index) {
				break;
			}
			strings__Builder_free(&sb);
			return (_result_strings__Builder){ .is_error=true, .err=err, .data={E_STRUCT} };
		}
		
 		int read_bytes = (*(int*)_t1.data);
		strings__Builder_write_ptr(&sb, &buf[0], read_bytes);
	}
	_result_strings__Builder _t3 = {0};
	_result_ok(&(strings__Builder[]) { sb }, (_result*)(&_t3), sizeof(strings__Builder));
	return _t3;
}
_result_void os__cp(string src, string dst) {
	#if defined(_WIN32)
	{
		string w_src = string_replace(src, _S("/"), _S("\\"));
		string w_dst = string_replace(dst, _S("/"), _S("\\"));
		if (CopyFile(string_to_wide(w_src), string_to_wide(w_dst), false) == 0) {
			int code = ((int)(GetLastError()));
			return (_result_void){ .is_error=true, .err=os__error_win32(((os__SystemError){.msg = str_intp(3, _MOV((StrIntpData[]){{_S("failed to copy "), 0xfe10, {.d_s = src}}, {_S(" to "), 0xfe10, {.d_s = dst}}, {_SLIT0, 0, { .d_c = 0 }}})),.code = code,})), .data={E_STRUCT} };
		}
	}
	#else
	{
	}
	#endif
	return (_result_void){0};
}
_result_FILE_ptr os__vfopen(string path, string mode) {
	if ((path).len == 0) {
		return (_result_FILE_ptr){ .is_error=true, .err=_v_error(_S("vfopen called with \"\"")), .data={E_STRUCT} };
	}
	voidptr fp = ((void*)0);
	#if defined(_WIN32)
	{
		fp = _wfopen(string_to_wide(path), string_to_wide(mode));
	}
	#else
	{
	}
	#endif
	if (isnil(((voidptr)(fp)))) {
		return (_result_FILE_ptr){ .is_error=true, .err=os__error_posix(((os__SystemError){.msg = str_intp(2, _MOV((StrIntpData[]){{_S("failed to open file \""), 0xfe10, {.d_s = path}}, {_S("\""), 0, { .d_c = 0 }}})),.code = _const_os__error_code_not_set,})), .data={E_STRUCT} };
	} else {
		_result_FILE_ptr _t4 = {0};
		_result_ok(&(FILE*[]) { fp }, (_result*)(&_t4), sizeof(FILE*));
		return _t4;
	}
	return (_result_FILE_ptr){0};
}
int os__fileno(voidptr cfile) {
	#if defined(_WIN32)
	{
		return _fileno(cfile);
	}
	#else
	{
	}
	#endif
	return 0;
}
string os__posix_get_error_msg(int code) {
	char* ptr_text = strerror(code);
	if (ptr_text == 0) {
		return _S("");
	}
	return tos3(ptr_text);
}
bool os__exists(string path) {
	#if defined(_WIN32)
	{
		string p = string_replace(path, _S("/"), _S("\\"));
		return _waccess(string_to_wide(p), _const_os__f_ok) != -1;
	}
	#else
	{
	}
	#endif
	return 0;
}
bool os__is_executable(string path) {
	string p = os__real_path(path);
	return os__exists(p) && (string_ends_with(p, _S(".exe")) || string_ends_with(p, _S(".bat")) || string_ends_with(p, _S(".cmd")));
	return access(((char*)(path.str)), _const_os__x_ok) != -1;
}
string os__executable(void) {
	bool os__executable_defer_0 = false;
	voidptr file;
	bool os__executable_defer_1 = false;
	string sret;
	Array_fixed_u8_8192 result = {0};
	u16* pu16_result = ((u16*)(&result[0]));
	u32 len = GetModuleFileName(0, pu16_result, 512U);
	u32 attrs = GetFileAttributesW(pu16_result);
	u32 is_set = (attrs & 0x400U);
	if (is_set != 0U) {
		file = CreateFile(pu16_result, 0x80000000U, 1U, 0, 3U, 0x80U, 0);
		if (file != ((voidptr)(-1))) {
			os__executable_defer_0 = true;
			Array_fixed_u8_8192 final_path = {0};
			u32 final_len = GetFinalPathNameByHandleW(file, ((u16*)(&final_path[0])), _const_os__max_path_buffer_size, 0U);
			if (final_len < ((u32)(_const_os__max_path_buffer_size))) {
				sret = string_from_wide2(((u16*)(&final_path[0])), ((int)(final_len)));
				os__executable_defer_1 = true;
				string sret_slice = string_substr(sret, 4, 2147483647);
				string res = string_clone(sret_slice);
				string _t1 = res;
				// Defer begin
				if (os__executable_defer_1) {
					string_free(&sret);
				}
				// Defer end
				// Defer begin
				if (os__executable_defer_0) {
					CloseHandle(file);
				}
				// Defer end
				return _t1;
			} else {
				eprintln(_S("os.executable() saw that the executable file path was too long"));
			}
		}
	}
	string res = string_from_wide2(pu16_result, ((int)(len)));
	string _t2 = res;
	// Defer begin
	if (os__executable_defer_1) {
		string_free(&sret);
	}
	// Defer end
	// Defer begin
	if (os__executable_defer_0) {
		CloseHandle(file);
	}
	// Defer end
	return _t2;
	string _t3 = os__executable_fallback();
	// Defer begin
	if (os__executable_defer_1) {
		string_free(&sret);
	}
	// Defer end
	// Defer begin
	if (os__executable_defer_0) {
		CloseHandle(file);
	}
	// Defer end
	return _t3;
}
string os__getwd(void) {
	{ // Unsafe block
		Array_fixed_u8_8192 buf = {0};
		#if defined(_WIN32)
		{
			if (_wgetcwd(((u16*)(&buf[0])), _const_os__max_path_len) == 0) {
				return _S("");
			}
			string res = string_from_wide(((u16*)(&buf[0])));
			return res;
		}
		#else
		{
		}
		#endif
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
string os__real_path(string fpath) {
	bool os__real_path_defer_0 = false;
	u16* fpath_wide;
	bool os__real_path_defer_1 = false;
	voidptr file;
	Array_fixed_u8_8192 fullpath = {0};
	string res = _S("");
	#if defined(_WIN32)
	{
		u16* pu16_fullpath = ((u16*)(&fullpath[0]));
		fpath_wide = string_to_wide(fpath);
		os__real_path_defer_0 = true;
		file = CreateFile(fpath_wide, 0x80000000U, 1U, 0, 3U, 0x80U, 0);
		if (file != ((voidptr)(-1))) {
			os__real_path_defer_1 = true;
			u32 final_len = GetFinalPathNameByHandleW(file, pu16_fullpath, _const_os__max_path_buffer_size, 0U);
			if (final_len < ((u32)(_const_os__max_path_buffer_size))) {
				string rt = string_from_wide2(pu16_fullpath, ((int)(final_len)));
				string srt = string_substr(rt, 4, 2147483647);
				string_free(&res);
				res = string_clone(srt);
			} else {
				eprintln(_S("os.real_path() saw that the file path was too long"));
				string_free(&res);
				string _t2 = string_clone(fpath);
				// Defer begin
				if (os__real_path_defer_1) {
				#if defined(_WIN32)
					CloseHandle(file);
				
				#endif
				}
				// Defer end
				// Defer begin
				if (os__real_path_defer_0) {
				#if defined(_WIN32)
					_v_free(((voidptr)(fpath_wide)));
				
				#endif
				}
				// Defer end
				return _t2;
			}
		} else {
			u32 ret = GetFullPathName(fpath_wide, _const_os__max_path_len, pu16_fullpath, 0);
			if (ret == 0U) {
				string_free(&res);
				string _t3 = string_clone(fpath);
				// Defer begin
				if (os__real_path_defer_1) {
				#if defined(_WIN32)
					CloseHandle(file);
				
				#endif
				}
				// Defer end
				// Defer begin
				if (os__real_path_defer_0) {
				#if defined(_WIN32)
					_v_free(((voidptr)(fpath_wide)));
				
				#endif
				}
				// Defer end
				return _t3;
			}
			string_free(&res);
			res = string_from_wide(pu16_fullpath);
		}
	}
	#else
	{
	}
	#endif
	os__normalize_drive_letter(res);
	string _t4 = res;
	// Defer begin
	if (os__real_path_defer_1) {
	#if defined(_WIN32)
		CloseHandle(file);
	
	#endif
	}
	// Defer end
	// Defer begin
	if (os__real_path_defer_0) {
	#if defined(_WIN32)
		_v_free(((voidptr)(fpath_wide)));
	
	#endif
	}
	// Defer end
	return _t4;
}
VV_LOC void os__normalize_drive_letter(string path) {
	if (path.len > 2 && path.str[ 0] >= 'a' && path.str[ 0] <= 'z' && path.str[ 1] == ':' && path.str[ 2] == _const_os__path_separator.str[ 0]) {
		{ // Unsafe block
			u8* x = &path.str[0];
			*x = (u8)(*x - 32);
		}
	}
}
inline IError os__error_posix(os__SystemError e) {
	int code = (e.code == _const_os__error_code_not_set ? (errno) : (e.code));
	string message = ((e.msg).len == 0 ? (os__posix_get_error_msg(code)) : (e.msg));
	return error_with_code(message, code);
}
inline IError os__error_win32(os__SystemError e) {
	#if defined(_WIN32)
	{
		if (e.code == _const_os__error_code_not_set) {
			_v_panic(_S("before calling `error_win32`, you must set `e.code` first."));
			VUNREACHABLE();
		}
		string message = ((e.msg).len == 0 ? (os__get_error_msg(e.code)) : (e.msg));
		return error_with_code(message, e.code);
	}
	#else
	{
	}
	#endif
	return (IError){0};
}
void os__Result_free(os__Result* result) {
	string_free(&result->output);
}
VV_LOC string os__executable_fallback(void) {
	if (_const_os__args.len == 0) {
		return _S("");
	}
	string exepath = (*(string*)array_get(_const_os__args, 0));
	if (!string_contains(exepath, _S(".exe"))) {
		exepath = string__plus(exepath, _S(".exe"));
	}
	if (!os__is_abs_path(exepath)) {
		string other_separator = (string__eq(_S("\\"), _S("/")) ? (_S("\\")) : (_S("/")));
		string rexepath = string_replace(exepath, other_separator, _const_os__path_separator);
		if (string_contains(rexepath, _const_os__path_separator)) {
			exepath = os__join_path_single(_const_os__wd_at_startup, exepath);
		} else {
			_result_string _t2 = os__find_abs_path_of_executable(exepath);
			if (_t2.is_error) {
				IError err = _t2.err;
				*(string*) _t2.data = _S("");
			}
			
 			string foundpath = (*(string*)_t2.data);
			if ((foundpath).len != 0) {
				exepath = foundpath;
			}
		}
	}
	exepath = os__real_path(exepath);
	return exepath;
}
string os__dir(string path) {
	if ((path).len == 0) {
		return _S(".");
	}
	string detected_path_separator = (string_contains(path, _S("/")) ? (_S("/")) : (_S("\\")));
	_option_int _t2 = string_last_index(path, detected_path_separator);
	if (_t2.state != 0) {
		IError err = _t2.err;
		return _S(".");
	}
	
 	int pos = (*(int*)_t2.data);
	if (pos == 0) {
		return detected_path_separator;
	}
	return string_substr(path, 0, pos);
}
string os__user_os(void) {
	return _S("windows");
	if ((os__getenv(_S("TERMUX_VERSION"))).len != 0) {
		return _S("termux");
	}
	return _S("unknown");
}
string os__ExecutableNotFoundError_msg(os__ExecutableNotFoundError err) {
	return _S("os: failed to find executable");
}
VV_LOC IError os__error_failed_to_find_executable(void) {
	return I_os__ExecutableNotFoundError_to_Interface_IError(((os__ExecutableNotFoundError*)memdup(&(os__ExecutableNotFoundError){.Error = ((Error){E_STRUCT}),}, sizeof(os__ExecutableNotFoundError))));
}
_result_string os__find_abs_path_of_executable(string exe_name) {
	if ((exe_name).len == 0) {
		return (_result_string){ .is_error=true, .err=_v_error(_S("expected non empty `exe_name`")), .data={E_STRUCT} };
	}
	for (int _t2 = 0; _t2 < _const_os__executable_suffixes.len; ++_t2) {
		string suffix = ((string*)_const_os__executable_suffixes.data)[_t2];
		string fexepath = string__plus(exe_name, suffix);
		if (os__is_abs_path(fexepath)) {
			_result_string _t3 = {0};
			_result_ok(&(string[]) { fexepath }, (_result*)(&_t3), sizeof(string));
			return _t3;
		}
		string res = _S("");
		string path = os__getenv(_S("PATH"));
		Array_string paths = string_split(path, _const_os__path_delimiter);
		for (int _t4 = 0; _t4 < paths.len; ++_t4) {
			string p = ((string*)paths.data)[_t4];
			string found_abs_path = os__join_path_single(p, fexepath);
			if (os__is_file(found_abs_path) && os__is_executable(found_abs_path)) {
				res = found_abs_path;
				break;
			}
		}
		if (res.len > 0) {
			_result_string _t5 = {0};
			_result_ok(&(string[]) { os__abs_path(res) }, (_result*)(&_t5), sizeof(string));
			return _t5;
		}
	}
	return (_result_string){ .is_error=true, .err=os__error_failed_to_find_executable(), .data={E_STRUCT} };
}
bool os__is_file(string path) {
	return os__exists(path) && !os__is_dir(path);
}
string os__join_path(string base, Array_string dirs) {
	bool os__join_path_defer_0 = false;
	strings__Builder sb;
	bool os__join_path_defer_1 = false;
	string sbase;
	sb = strings__new_builder((int)(base.len + (int)(dirs.len * 50)));
	os__join_path_defer_0 = true;
	sbase = string_trim_right(base, _S("\\/"));
	os__join_path_defer_1 = true;
	strings__Builder_write_string(&sb, sbase);
	for (int _t1 = 0; _t1 < dirs.len; ++_t1) {
		string d = ((string*)dirs.data)[_t1];
		if ((d).len != 0) {
			strings__Builder_write_string(&sb, _const_os__path_separator);
			strings__Builder_write_string(&sb, d);
		}
	}
	os__normalize_path_in_builder((voidptr)&sb);
	string res = strings__Builder_str(&sb);
	if ((base).len == 0) {
		res = string_trim_left(res, _const_os__path_separator);
	}
	string _t2 = res;
	// Defer begin
	if (os__join_path_defer_1) {
		string_free(&sbase);
	}
	// Defer end
	// Defer begin
	if (os__join_path_defer_0) {
		strings__Builder_free(&sb);
	}
	// Defer end
	return _t2;
}
string os__join_path_single(string base, string elem) {
	bool os__join_path_single_defer_0 = false;
	strings__Builder sb;
	bool os__join_path_single_defer_1 = false;
	string sbase;
	sb = strings__new_builder((int)((int)(base.len + elem.len) + 1));
	os__join_path_single_defer_0 = true;
	sbase = string_trim_right(base, _S("\\/"));
	os__join_path_single_defer_1 = true;
	strings__Builder_write_string(&sb, sbase);
	if ((elem).len != 0) {
		strings__Builder_write_string(&sb, _const_os__path_separator);
		strings__Builder_write_string(&sb, elem);
	}
	os__normalize_path_in_builder((voidptr)&sb);
	string res = strings__Builder_str(&sb);
	if ((base).len == 0) {
		res = string_trim_left(res, _const_os__path_separator);
	}
	string _t1 = res;
	// Defer begin
	if (os__join_path_single_defer_1) {
		string_free(&sbase);
	}
	// Defer end
	// Defer begin
	if (os__join_path_single_defer_0) {
		strings__Builder_free(&sb);
	}
	// Defer end
	return _t1;
}
VV_LOC void os__normalize_path_in_builder(strings__Builder* sb) {
	rune fs = '\\';
	rune rs = '/';
	fs = '/';
	rs = '\\';
	for (int idx = 0; idx < sb->len; ++idx) {
		{ // Unsafe block
			if (((u8*)sb->data)[idx] == fs) {
				((u8*)sb->data)[idx] = rs;
			}
		}
	}
	for (int idx = 0; idx < (int)(sb->len - 3); ++idx) {
		if (((u8*)sb->data)[idx] == rs && ((u8*)sb->data)[(int_literal)(idx + 1)] == '.' && ((u8*)sb->data)[(int_literal)(idx + 2)] == rs) {
			{ // Unsafe block
				for (int j = (int_literal)(idx + 1); j < (int)(sb->len - 2); j++) {
					((u8*)sb->data)[j] = ((u8*)sb->data)[(int)(j + 2)];
				}
				sb->len -= 2;
			}
		}
		if (((u8*)sb->data)[idx] == rs && ((u8*)sb->data)[(int_literal)(idx + 1)] == rs) {
			{ // Unsafe block
				for (int j = (int_literal)(idx + 1); j < (int)(sb->len - 1); j++) {
					((u8*)sb->data)[j] = ((u8*)sb->data)[(int)(j + 1)];
				}
				sb->len -= 1;
			}
		}
	}
}
_result_void os__mkdir_all(string opath, os__MkdirParams params) {
	if (os__exists(opath)) {
		if (os__is_dir(opath)) {
			return (_result_void){0};
		}
		return (_result_void){ .is_error=true, .err=_v_error(str_intp(2, _MOV((StrIntpData[]){{_S("path `"), 0xfe10, {.d_s = opath}}, {_S("` already exists, and is not a folder"), 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
	}
	string other_separator = (string__eq(_S("\\"), _S("/")) ? (_S("\\")) : (_S("/")));
	string path = string_replace(opath, other_separator, _const_os__path_separator);
	string p = (string_starts_with(path, _const_os__path_separator) ? (_const_os__path_separator) : (_S("")));
	Array_string path_parts = string_split(string_trim_left(path, _const_os__path_separator), _const_os__path_separator);
	for (int _t2 = 0; _t2 < path_parts.len; ++_t2) {
		string subdir = ((string*)path_parts.data)[_t2];
		p = string__plus(p, string__plus(subdir, _S("\\")));
		if (os__exists(p) && os__is_dir(p)) {
			continue;
		}
		_result_void _t3 = os__mkdir(p, params);
		if (_t3.is_error) {
			IError err = _t3.err;
			return (_result_void){ .is_error=true, .err=_v_error(str_intp(3, _MOV((StrIntpData[]){{_S("folder: "), 0xfe10, {.d_s = p}}, {_S(", error: "), 0xfe10, {.d_s = IError_str(err)}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
		}
		
 ;
	}
	return (_result_void){0};
}
string os__resource_abs_path(string path) {
	string exe = os__executable();
	string dexe = os__dir(exe);
	string base_path = os__real_path(dexe);
	string vresource = os__getenv(_S("V_RESOURCE_PATH"));
	if (vresource.len != 0) {
		string_free(&base_path);
		base_path = vresource;
	}
	string fp = os__join_path_single(base_path, path);
	string res = os__real_path(fp);
	{ // Unsafe block
		string_free(&fp);
		string_free(&vresource);
		string_free(&base_path);
		string_free(&dexe);
		string_free(&exe);
	}
	return res;
}
bool os__is_dir(string path) {
	string w_path = string_replace(path, _S("/"), _S("\\"));
	u32 attr = GetFileAttributesW(string_to_wide(w_path));
	if (attr == ((u32)(INVALID_FILE_ATTRIBUTES))) {
		return false;
	}
	if ((((int)(attr)) & FILE_ATTRIBUTE_DIRECTORY) != 0) {
		return true;
	}
	return false;
}
_result_void os__mkdir(string path, os__MkdirParams params) {
	if (_SLIT_EQ(path.str, path.len, ".")) {
		return (_result_void){0};
	}
	string apath = os__real_path(path);
	if (!CreateDirectory(string_to_wide(apath), 0)) {
		return (_result_void){ .is_error=true, .err=_v_error(string__plus(str_intp(2, _MOV((StrIntpData[]){{_S("mkdir failed for \""), 0xfe10, {.d_s = apath}}, {_S("\", because CreateDirectory returned: "), 0, { .d_c = 0 }}})), os__get_error_msg(((int)(GetLastError()))))), .data={E_STRUCT} };
	}
	return (_result_void){0};
}
VV_LOC voidptr os__ptr_win_get_error_msg(u32 code) {
	voidptr buf = ((void*)0);
	if (code > ((u32)(_const_os__max_error_code))) {
		return buf;
	}
	FormatMessageW(((0x00000100 | 0x00001000) | 0x00000200), 0, code, 0U, ((voidptr)(&buf)), 0U, 0);
	return buf;
}
string os__get_error_msg(int code) {
	if (code < 0) {
		return _S("");
	}
	voidptr ptr_text = os__ptr_win_get_error_msg(((u32)(code)));
	if (ptr_text == 0) {
		return _S("");
	}
	string msg = string_from_wide(ptr_text);
	LocalFree(ptr_text);
	return msg;
}
void os__File_close(os__File* f) {
	if (!f->is_opened) {
		return;
	}
	f->is_opened = false;
	fflush(f->cfile);
	fclose(f->cfile);
}
void os__Process_close(os__Process* p) {
	if (p->status == os__ProcessState__not_started || p->status == os__ProcessState__closed) {
		return;
	}
	p->status = os__ProcessState__closed;
}
void os__Process_free(os__Process* p) {
	os__Process_close(p);
	{ // Unsafe block
		string_free(&p->filename);
		string_free(&p->err);
		Array_string_free(&p->args);
		Array_string_free(&p->env);
	}
}
inline VV_LOC u32 rand__seed__nr_next(u32 prev) {
	return (u32)((u32)(prev * 1664525U) + 1013904223U);
}
Array_u32 rand__seed__time_seed_array(int count) {
	u64 ctime = time__sys_mono_now();
	u32 seed = ((u32)(((ctime >> 32U) ^ ((ctime & 0x00000000FFFFFFFFU)))));
	Array_u32 seed_data = __new_array_with_default_noscan(0, count, sizeof(u32), 0);
	for (int _t1 = 0; _t1 < count; ++_t1) {
		seed = rand__seed__nr_next(seed);
		array_push_noscan((array*)&seed_data, _MOV((u32[]){ rand__seed__nr_next(seed) }));
	}
	return seed_data;
}
u64 rand__seed__time_seed_64(void) {
	Array_u32 seed_data = rand__seed__time_seed_array(2);
	u64 lower = ((u64)((*(u32*)array_get(seed_data, 0))));
	u64 upper = ((u64)((*(u32*)array_get(seed_data, 1))));
	array_free(&seed_data);
	u64 res = (lower | ((upper << 32U)));
	return res;
}
int runtime__nr_jobs(void) {
	int cpus = (int)(runtime__nr_cpus() - 1);
	int vjobs = string_int(os__getenv(_S("VJOBS")));
	if (vjobs > 0) {
		cpus = vjobs;
	}
	if (cpus == 0) {
		return 1;
	}
	return cpus;
}
int runtime__nr_cpus(void) {
	SYSTEM_INFO sinfo = ((SYSTEM_INFO){.dwNumberOfProcessors = 0,.dwPageSize = 0,});
	GetSystemInfo(&sinfo);
	int nr = ((int)(sinfo.dwNumberOfProcessors));
	if (nr == 0) {
		nr = string_int(os__getenv(_S("NUMBER_OF_PROCESSORS")));
	}
	return nr;
}
string v__embed_file__EmbedFileData_str(v__embed_file__EmbedFileData ed) {
	return str_intp(5, _MOV((StrIntpData[]){{_S("embed_file.EmbedFileData{ len: "), 0xfe07, {.d_i32 = ed.len}}, {_S(", path: \""), 0xfe10, {.d_s = ed.path}}, {_S("\", apath: \""), 0xfe10, {.d_s = ed.apath}}, {_S("\", uncompressed: "), 0xfe10, {.d_s = ptr_str(ed.uncompressed)}}, {_S(" }"), 0, { .d_c = 0 }}}));
}
void v__embed_file__EmbedFileData_free(v__embed_file__EmbedFileData* ed) {
	{ // Unsafe block
		string_free(&ed->path);
		string_free(&ed->apath);
		string_free(&ed->compression_type);
		if (ed->free_compressed) {
			_v_free(ed->compressed);
			ed->compressed = ((u8*)(((void*)0)));
		}
		if (ed->free_uncompressed) {
			_v_free(ed->uncompressed);
			ed->uncompressed = ((u8*)(((void*)0)));
		}
	}
}
string v__embed_file__EmbedFileData_to_string(v__embed_file__EmbedFileData* original) {
	{ // Unsafe block
		v__embed_file__EmbedFileData* ed = ((v__embed_file__EmbedFileData*)(original));
		u8* the_copy = ((u8*)(memdup(v__embed_file__EmbedFileData_data(ed), ed->len)));
		return u8_vstring_with_len(the_copy, ed->len);
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
u8* v__embed_file__EmbedFileData_data(v__embed_file__EmbedFileData* ed) {
	if (ed->uncompressed != ((void*)0)) {
		return ed->uncompressed;
	}
	if (ed->uncompressed == ((void*)0) && ed->compressed != ((void*)0)) {
		v__embed_file__Decoder* _t3 = (v__embed_file__Decoder*)(map_get_check(ADDR(map, g_embed_file_decoders->decoders), &(string[]){ed->compression_type}));
		_option_v__embed_file__Decoder _t2 = {0};
		if (_t3) {
			*((v__embed_file__Decoder*)&_t2.data) = *((v__embed_file__Decoder*)_t3);
		} else {
			_t2.state = 2; _t2.err = _v_error(_S("map key does not exist"));
		}
		;
		if (_t2.state != 0) {
			IError err = _t2.err;
			_v_panic(str_intp(3, _MOV((StrIntpData[]){{_S("EmbedFileData error: unknown compression of \""), 0xfe10, {.d_s = ed->path}}, {_S("\": \""), 0xfe10, {.d_s = ed->compression_type}}, {_S("\""), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		;
		}
		
		v__embed_file__Decoder decoder = (*(v__embed_file__Decoder*)_t2.data);
		Array_u8 compressed = u8_vbytes(ed->compressed, ed->len);
		_result_Array_u8 _t4 = v__embed_file__Decoder_name_table[decoder._typ]._method_decompress(decoder._object, compressed);
		if (_t4.is_error) {
			IError err = _t4.err;
			_v_panic(str_intp(3, _MOV((StrIntpData[]){{_S("EmbedFileData error: decompression of \""), 0xfe10, {.d_s = ed->path}}, {_S("\" failed: "), 0xfe10, {.d_s = IError_str(err)}}, {_SLIT0, 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		;
		}
		
 		Array_u8 decompressed = (*(Array_u8*)_t4.data);
		{ // Unsafe block
			ed->uncompressed = ((u8*)(memdup(decompressed.data, ed->len)));
		}
	} else {
		#if !defined(_VFREESTANDING)
		{
			v__embed_file__reload_from_file_at_runtime(ed);
		}
		#endif
	}
	return ed->uncompressed;
}
v__embed_file__EmbedFileIndexEntry* v__embed_file__find_index_entry_by_path(voidptr start, string path, string algo) {
	{ // Unsafe block
		v__embed_file__EmbedFileIndexEntry* x = ((v__embed_file__EmbedFileIndexEntry*)(start));
		for (;;) {
			if (!(x->id >= 0 && x->data != 0 && (!string__eq(x->algo, algo) || !string__eq(x->path, path)))) break;
			x++;
		}
		return x;
	}
	return 0;
}
VV_LOC void v__embed_file__reload_from_file_at_runtime(v__embed_file__EmbedFileData* ed) {
	string path = os__resource_abs_path(ed->path);
	if (!os__is_file(path)) {
		path = ed->apath;
		if (!os__is_file(path)) {
			_v_panic(str_intp(3, _MOV((StrIntpData[]){{_S("EmbedFileData error: files \""), 0xfe10, {.d_s = ed->path}}, {_S("\" and \""), 0xfe10, {.d_s = ed->apath}}, {_S("\" do not exist"), 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
	_result_Array_u8 _t1 = os__read_bytes(path);
	if (_t1.is_error) {
		IError err = _t1.err;
		_v_panic(str_intp(3, _MOV((StrIntpData[]){{_S("EmbedFileData error: \""), 0xfe10, {.d_s = path}}, {_S("\" could not be read: "), 0xfe10, {.d_s = IError_str(err)}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
	;
	}
	
 	Array_u8 bytes = (*(Array_u8*)_t1.data);
	ed->uncompressed = bytes.data;
	ed->free_uncompressed = true;
}
void rand__wyrand__WyRandRNG_seed(rand__wyrand__WyRandRNG* rng, Array_u32 seed_data) {
	if (seed_data.len != 2) {
		eprintln(_S("WyRandRNG needs 2 32-bit unsigned integers as the seed."));
		_v_exit(1);
		VUNREACHABLE();
	}
	rng->state = ((*(u32*)array_get(seed_data, 0)) | ((((u64)((*(u32*)array_get(seed_data, 1)))) << 32U)));
	rng->bytes_left = 0;
	rng->buffer = 0U;
}
inline u8 rand__wyrand__WyRandRNG_u8(rand__wyrand__WyRandRNG* rng) {
	if (rng->bytes_left >= 1) {
		rng->bytes_left -= 1;
		u8 value = ((u8)(rng->buffer));
		rng->buffer >>= 8U;
		return value;
	}
	rng->buffer = rand__wyrand__WyRandRNG_u64(rng);
	rng->bytes_left = 7;
	u8 value = ((u8)(rng->buffer));
	rng->buffer >>= 8U;
	return value;
}
inline u16 rand__wyrand__WyRandRNG_u16(rand__wyrand__WyRandRNG* rng) {
	if (rng->bytes_left >= 2) {
		rng->bytes_left -= 2;
		u16 value = ((u16)(rng->buffer));
		rng->buffer >>= 16U;
		return value;
	}
	u64 ans = rand__wyrand__WyRandRNG_u64(rng);
	rng->buffer = (ans >> 16U);
	rng->bytes_left = 6;
	return ((u16)(ans));
}
inline u32 rand__wyrand__WyRandRNG_u32(rand__wyrand__WyRandRNG* rng) {
	if (rng->bytes_left >= 4) {
		rng->bytes_left -= 4;
		u32 value = ((u32)(rng->buffer));
		rng->buffer >>= 32U;
		return value;
	}
	u64 ans = rand__wyrand__WyRandRNG_u64(rng);
	rng->buffer = (ans >> 32U);
	rng->bytes_left = 4;
	return ((u32)(ans));
}
inline u64 rand__wyrand__WyRandRNG_u64(rand__wyrand__WyRandRNG* rng) {
	{ // Unsafe block
		u64 seed1 = rng->state;
		seed1 += _const_rand__wyrand__wyp0;
		rng->state = seed1;
		return hash__wymum((seed1 ^ _const_rand__wyrand__wyp1), seed1);
	}
	return 0U;
}
inline int rand__wyrand__WyRandRNG_block_size(rand__wyrand__WyRandRNG* rng) {
	return 64;
}
void rand__wyrand__WyRandRNG_free(rand__wyrand__WyRandRNG* rng) {
	_v_free(rng);
}
VV_LOC void rand__deinit(void) {
	{ // Unsafe block
		rand__PRNG_name_table[default_rng->_typ]._method__v_free(default_rng->_object);
		_v_free(default_rng);
	}
}
VV_LOC void rand__init(void) {
	default_rng = rand__new_default(((rand__config__PRNGConfigStruct){.seed_ = rand__seed__time_seed_array(2),}));
	_result_void _t1 = at_exit((voidptr)rand__deinit);
	(void)_t1;
 ;
}
inline _result_u32 rand__PRNG_u32n(rand__PRNG* rng, u32 max) {
	if (max == 0U) {
		return (_result_u32){ .is_error=true, .err=_v_error(_S("max must be positive integer")), .data={E_STRUCT} };
	}
	int bit_len = math__bits__len_32(max);
	if (_unlikely_(bit_len == 32)) {
		for (;;) {
			u32 value = rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object);
			if (value < max) {
				_result_u32 _t2 = {0};
				_result_ok(&(u32[]) { value }, (_result*)(&_t2), sizeof(u32));
				return _t2;
			}
		}
	} else {
		u32 mask = (_unlikely_(bit_len == 31) ? (((u32)(0x7FFFFFFFU))) : ((u32)(((((u32)(1U)) << ((int)(bit_len + 1)))) - 1U)));
		for (;;) {
			u32 value = (rand__PRNG_name_table[rng->_typ]._method_u32(rng->_object) & mask);
			if (value < max) {
				_result_u32 _t3 = {0};
				_result_ok(&(u32[]) { value }, (_result*)(&_t3), sizeof(u32));
				return _t3;
			}
		}
	}
	_result_u32 _t4 = {0};
	_result_ok(&(u32[]) { ((u32)(0U)) }, (_result*)(&_t4), sizeof(u32));
	return _t4;
}
inline _result_int rand__PRNG_intn(rand__PRNG* rng, int max) {
	if (max <= 0) {
		return (_result_int){ .is_error=true, .err=_v_error(_S("max has to be positive.")), .data={E_STRUCT} };
	}
	_result_u32 _t3 = rand__PRNG_u32n(rng, ((u32)(max)));
	if (_t3.is_error) {
		_result_int _t4 = {0};
		_t4.is_error = true;
		_t4.err = _t3.err;
		return _t4;
	}
	
 	_result_int _t2 = {0};
	_result_ok(&(int[]) { ((int)((*(u32*)_t3.data))) }, (_result*)(&_t2), sizeof(int));
	return _t2;
}
rand__PRNG* rand__new_default(rand__config__PRNGConfigStruct config_) {
	rand__wyrand__WyRandRNG* rng = ((rand__wyrand__WyRandRNG*)memdup(&(rand__wyrand__WyRandRNG){.PRNGBuffer = ((rand__buffer__PRNGBuffer){.bytes_left = 0,.buffer = 0,}),.state = rand__seed__time_seed_64(),.bytes_left = 0,.buffer = 0,}, sizeof(rand__wyrand__WyRandRNG)));
	rand__wyrand__WyRandRNG_seed(rng, config_.seed_);
	array_free(&config_.seed_);
	return HEAP(rand__PRNG, I_rand__wyrand__WyRandRNG_to_Interface_rand__PRNG(rng));
}
_result_int rand__intn(int max) {
	return rand__PRNG_intn(default_rng, max);
}
VV_LOC sync__Channel* sync__new_channel_st(u32 n, u32 st) {
	u32 wsem = (n > 0U ? (n) : (1));
	u32 rsem = (n > 0U ? (((u32)(0U))) : (1));
	u8* rbuf = (n > 0U ? (_v_malloc(((int)((u32)(n * st))))) : (((u8*)(((void*)0)))));
	u8* sbuf = (n > 0U ? (vcalloc_noscan(((int)((u32)(n * 2U))))) : (((u8*)(((void*)0)))));
	sync__Channel *ch = HEAP(sync__Channel, (((sync__Channel){
		.ringbuf = rbuf,
		.statusbuf = sbuf,
		.objsize = st,
		.writesem = ((sync__Semaphore){.count = 0,}),
		.readsem = ((sync__Semaphore){.count = 0,}),
		.writesem_im = ((sync__Semaphore){.count = 0,}),
		.readsem_im = ((sync__Semaphore){.count = 0,}),
		.write_free = n,
		.read_avail = 0U,
		.buf_elem_write_idx = 0,
		.buf_elem_read_idx = 0,
		.write_subscriber = ((void*)0),
		.read_subscriber = ((void*)0),
		.write_sub_mtx = sync__new_spin_lock(),
		.read_sub_mtx = sync__new_spin_lock(),
		.closed = 0,
		.cap = n,
	})));
	sync__Semaphore_init(&(*(ch)).writesem, wsem);
	sync__Semaphore_init(&(*(ch)).readsem, rsem);
	sync__Semaphore_init(&(*(ch)).writesem_im, 0U);
	sync__Semaphore_init(&(*(ch)).readsem_im, 0U);
	return &(*(ch));
}
VV_LOC sync__Channel* sync__new_channel_st_noscan(u32 n, u32 st) {
	#if defined(CUSTOM_DEFINE_gcboehm_opt)
	{
		u32 wsem = (n > 0U ? (n) : (1));
		u32 rsem = (n > 0U ? (((u32)(0U))) : (1));
		u8* rbuf = (n > 0U ? (malloc_noscan(((int)((u32)(n * st))))) : (((u8*)(((void*)0)))));
		u8* sbuf = (n > 0U ? (vcalloc_noscan(((int)((u32)(n * 2U))))) : (((u8*)(((void*)0)))));
		sync__Channel *ch = HEAP(sync__Channel, (((sync__Channel){
			.ringbuf = rbuf,
			.statusbuf = sbuf,
			.objsize = st,
			.writesem = ((sync__Semaphore){.count = 0,}),
			.readsem = ((sync__Semaphore){.count = 0,}),
			.writesem_im = ((sync__Semaphore){.count = 0,}),
			.readsem_im = ((sync__Semaphore){.count = 0,}),
			.write_free = n,
			.read_avail = 0U,
			.buf_elem_write_idx = 0,
			.buf_elem_read_idx = 0,
			.write_subscriber = ((void*)0),
			.read_subscriber = ((void*)0),
			.write_sub_mtx = sync__new_spin_lock(),
			.read_sub_mtx = sync__new_spin_lock(),
			.closed = 0,
			.cap = n,
		})));
		sync__Semaphore_init(&(*(ch)).writesem, wsem);
		sync__Semaphore_init(&(*(ch)).readsem, rsem);
		sync__Semaphore_init(&(*(ch)).writesem_im, 0U);
		sync__Semaphore_init(&(*(ch)).readsem_im, 0U);
		return &(*(ch));
	}
	#else
	{
	}
	#endif
	return 0;
}
string sync__Channel_auto_str(sync__Channel* ch, string __v_typename) {
	return str_intp(4, _MOV((StrIntpData[]){{_S("chan "), 0xfe10, {.d_s = __v_typename}}, {_S("{cap: "), 0xfe06, {.d_u32 = ch->cap}}, {_S(", closed: "), 0xfe04, {.d_u16 = ch->closed}}, {_S("}"), 0, { .d_c = 0 }}}));
}
void sync__Channel_close(sync__Channel* ch) {
	u16 open_val = ((u16)(0U));
	if (!atomic_compare_exchange_strong_u16(&ch->closed, &open_val, 1U)) {
		return;
	}
	voidptr nulladr = ((void*)0);
	for (;;) {
		if (!(!atomic_compare_exchange_weak_ptr(((voidptr)(&ch->adr_written)), ((voidptr)(&nulladr)), ((isize)(-1))))) break;
		nulladr = ((void*)0);
	}
	sync__Semaphore_post(&ch->readsem_im);
	sync__Semaphore_post(&ch->readsem);
	sync__SpinLock_lock(ch->read_sub_mtx);
	if (ch->read_subscriber != ((void*)0)) {
		sync__Semaphore_post(ch->read_subscriber->sem);
	}
	sync__SpinLock_unlock(ch->read_sub_mtx);
	sync__SpinLock_lock(ch->write_sub_mtx);
	if (ch->write_subscriber != ((void*)0)) {
		sync__Semaphore_post(ch->write_subscriber->sem);
	}
	sync__SpinLock_unlock(ch->write_sub_mtx);
	sync__Semaphore_post(&ch->writesem);
	if (ch->cap == 0U) {
		atomic_store_ptr(((voidptr*)(&ch->read_adr)), ((void*)0));
	}
	sync__Semaphore_post(&ch->writesem_im);
}
inline int sync__Channel_len(sync__Channel* ch) {
	return ((int)(atomic_load_u32(&ch->read_avail)));
}
inline bool sync__Channel_closed(sync__Channel* ch) {
	return atomic_load_u16(&ch->closed) != 0U;
}
inline void sync__Channel_push(sync__Channel* ch, voidptr src) {
	if (sync__Channel_try_push_priv(ch, src, false) == ChanState__closed) {
		_v_panic(_S("push on closed channel"));
		VUNREACHABLE();
	}
}
inline ChanState sync__Channel_try_push(sync__Channel* ch, voidptr src) {
	return sync__Channel_try_push_priv(ch, src, true);
}
VV_LOC ChanState sync__Channel_try_push_priv(sync__Channel* ch, voidptr src, bool no_block) {
	if (atomic_load_u16(&ch->closed) != 0U) {
		return ChanState__closed;
	}
	multi_return_int_int mr_4858 = (no_block ? ((multi_return_int_int){.arg0=1,.arg1=1}) : ((multi_return_int_int){.arg0=_const_sync__spinloops,.arg1=_const_sync__spinloops_sem}));
	int spinloops_sem_ = mr_4858.arg0;
	int spinloops_ = mr_4858.arg1;
	bool have_swapped = false;
	for (;;) {
		bool got_sem = false;
		voidptr wradr = atomic_load_ptr(((voidptr*)(&ch->write_adr)));
		for (;;) {
			if (!(wradr != NULL)) break;
			if (atomic_compare_exchange_strong_ptr(((voidptr)(&ch->write_adr)), ((voidptr)(&wradr)), ((isize)(0)))) {
				memcpy(wradr, src, ch->objsize);
				voidptr nulladr = ((void*)0);
				for (;;) {
					if (!(!atomic_compare_exchange_weak_ptr(((voidptr)(&ch->adr_written)), ((voidptr)(&nulladr)), ((isize)(wradr))))) break;
					nulladr = ((void*)0);
				}
				sync__Semaphore_post(&ch->readsem_im);
				return ChanState__success;
			}
		}
		if (no_block && ch->cap == 0U) {
			return ChanState__not_ready;
		}
		for (int _t4 = 0; _t4 < spinloops_sem_; ++_t4) {
			if (got_sem) {
				break;
			}
			got_sem = sync__Semaphore_try_wait(&ch->writesem);
		}
		if (!got_sem) {
			if (no_block) {
				return ChanState__not_ready;
			}
			sync__Semaphore_wait(&ch->writesem);
		}
		if (atomic_load_u16(&ch->closed) != 0U) {
			sync__Semaphore_post(&ch->writesem);
			return ChanState__closed;
		}
		if (ch->cap == 0U) {
			bool read_in_progress = false;
			atomic_store_ptr(((voidptr*)(&ch->read_adr)), src);
			wradr = atomic_load_ptr(((voidptr*)(&ch->write_adr)));
			if (wradr != NULL) {
				voidptr src2 = src;
				if (atomic_compare_exchange_strong_ptr(((voidptr)(&ch->read_adr)), ((voidptr)(&src2)), ((isize)(0)))) {
					sync__Semaphore_post(&ch->writesem);
					continue;
				} else {
					read_in_progress = true;
				}
			}
			if (!read_in_progress) {
				sync__SpinLock_lock(ch->read_sub_mtx);
				if (ch->read_subscriber != ((void*)0)) {
					sync__Semaphore_post(ch->read_subscriber->sem);
				}
				sync__SpinLock_unlock(ch->read_sub_mtx);
			}
			voidptr src2 = src;
			for (u32 sp = ((u32)(0U)); _us32_lt(sp,spinloops_) || read_in_progress; sp++) {
				if (atomic_compare_exchange_strong_ptr(((voidptr)(&ch->adr_read)), ((voidptr)(&src2)), ((isize)(0)))) {
					have_swapped = true;
					read_in_progress = true;
					break;
				}
				src2 = src;
			}
			bool got_im_sem = false;
			for (u32 sp = ((u32)(0U)); _us32_lt(sp,spinloops_sem_) || read_in_progress; sp++) {
				got_im_sem = sync__Semaphore_try_wait(&ch->writesem_im);
				if (got_im_sem) {
					break;
				}
			}
			for (;;) {
				if (got_im_sem) {
					got_im_sem = false;
				} else {
					sync__Semaphore_wait(&ch->writesem_im);
				}
				if (atomic_load_u16(&ch->closed) != 0U) {
					if (have_swapped || atomic_compare_exchange_strong_ptr(((voidptr)(&ch->adr_read)), ((voidptr)(&src2)), ((isize)(0)))) {
						sync__Semaphore_post(&ch->writesem);
						return ChanState__success;
					} else {
						return ChanState__closed;
					}
				}
				if (have_swapped || atomic_compare_exchange_strong_ptr(((voidptr)(&ch->adr_read)), ((voidptr)(&src2)), ((isize)(0)))) {
					sync__Semaphore_post(&ch->writesem);
					break;
				} else {
					sync__Semaphore_post(&ch->writesem_im);
					if (src2 == ((voidptr)(-1))) {
						sync__Semaphore_post(&ch->readsem);
						return ChanState__closed;
					}
					src2 = src;
				}
			}
			return ChanState__success;
		} else {
			bool space_in_queue = false;
			u32 wr_free = atomic_load_u32(&ch->write_free);
			for (;;) {
				if (!(wr_free > 0U)) break;
				space_in_queue = atomic_compare_exchange_weak_u32(&ch->write_free, &wr_free, (u32)(wr_free - 1U));
				if (space_in_queue) {
					break;
				}
			}
			if (space_in_queue) {
				u32 wr_idx = atomic_load_u32(&ch->buf_elem_write_idx);
				for (;;) {
					u32 new_wr_idx = (u32)(wr_idx + 1U);
					for (;;) {
						if (!(new_wr_idx >= ch->cap)) break;
						new_wr_idx -= ch->cap;
					}
					if (atomic_compare_exchange_strong_u32(&ch->buf_elem_write_idx, &wr_idx, new_wr_idx)) {
						break;
					}
				}
				u8* wr_ptr = ch->ringbuf;
				u8* status_adr = ch->statusbuf;
				{ // Unsafe block
					wr_ptr += ((u32)(wr_idx * ch->objsize));
					status_adr += (u32)(wr_idx * sizeof(u16));
				}
				u16 expected_status = ((u16)(sync__BufferElemStat__unused));
				for (;;) {
					if (!(!atomic_compare_exchange_weak_u16(status_adr, &expected_status, ((u16)(sync__BufferElemStat__writing))))) break;
					expected_status = ((u16)(sync__BufferElemStat__unused));
				}
				memcpy(wr_ptr, src, ch->objsize);
				atomic_store_u16(((u16*)(status_adr)), ((u16)(sync__BufferElemStat__written)));
				atomic_fetch_add_u32(((voidptr)(&ch->read_avail)), 1U);
				sync__Semaphore_post(&ch->readsem);
				sync__SpinLock_lock(ch->read_sub_mtx);
				if (ch->read_subscriber != ((void*)0)) {
					sync__Semaphore_post(ch->read_subscriber->sem);
				}
				sync__SpinLock_unlock(ch->read_sub_mtx);
				return ChanState__success;
			} else {
				if (no_block) {
					return ChanState__not_ready;
				}
				sync__Semaphore_post(&ch->writesem);
			}
		}
	}
	_v_panic(_S("unknown `try_push_priv` state"));
	VUNREACHABLE();
	return 0;
}
inline bool sync__Channel_pop(sync__Channel* ch, voidptr dest) {
	return sync__Channel_try_pop_priv(ch, dest, false) == ChanState__success;
}
inline ChanState sync__Channel_try_pop(sync__Channel* ch, voidptr dest) {
	return sync__Channel_try_pop_priv(ch, dest, true);
}
VV_LOC ChanState sync__Channel_try_pop_priv(sync__Channel* ch, voidptr dest, bool no_block) {
	multi_return_int_int mr_9573 = (no_block ? ((multi_return_int_int){.arg0=1,.arg1=1}) : ((multi_return_int_int){.arg0=_const_sync__spinloops,.arg1=_const_sync__spinloops_sem}));
	int spinloops_sem_ = mr_9573.arg0;
	int spinloops_ = mr_9573.arg1;
	bool have_swapped = false;
	bool write_in_progress = false;
	for (;;) {
		bool got_sem = false;
		if (ch->cap == 0U) {
			voidptr rdadr = atomic_load_ptr(((voidptr*)(&ch->read_adr)));
			for (;;) {
				if (!(rdadr != NULL)) break;
				if (atomic_compare_exchange_strong_ptr(((voidptr)(&ch->read_adr)), ((voidptr)(&rdadr)), ((isize)(0)))) {
					memcpy(dest, rdadr, ch->objsize);
					voidptr nulladr = ((void*)0);
					for (;;) {
						if (!(!atomic_compare_exchange_weak_ptr(((voidptr)(&ch->adr_read)), ((voidptr)(&nulladr)), ((isize)(rdadr))))) break;
						nulladr = ((void*)0);
					}
					sync__Semaphore_post(&ch->writesem_im);
					return ChanState__success;
				}
			}
			if (no_block) {
				if (atomic_load_u16(&ch->closed) == 0U) {
					return ChanState__not_ready;
				} else {
					return ChanState__closed;
				}
			}
		}
		for (int _t4 = 0; _t4 < spinloops_sem_; ++_t4) {
			if (got_sem) {
				break;
			}
			got_sem = sync__Semaphore_try_wait(&ch->readsem);
		}
		if (!got_sem) {
			if (no_block) {
				if (atomic_load_u16(&ch->closed) == 0U) {
					return ChanState__not_ready;
				} else {
					return ChanState__closed;
				}
			}
			sync__Semaphore_wait(&ch->readsem);
		}
		if (ch->cap > 0U) {
			bool obj_in_queue = false;
			u32 rd_avail = atomic_load_u32(&ch->read_avail);
			for (;;) {
				if (!(rd_avail > 0U)) break;
				obj_in_queue = atomic_compare_exchange_weak_u32(&ch->read_avail, &rd_avail, (u32)(rd_avail - 1U));
				if (obj_in_queue) {
					break;
				}
			}
			if (obj_in_queue) {
				u32 rd_idx = atomic_load_u32(&ch->buf_elem_read_idx);
				for (;;) {
					u32 new_rd_idx = (u32)(rd_idx + 1U);
					for (;;) {
						if (!(new_rd_idx >= ch->cap)) break;
						new_rd_idx -= ch->cap;
					}
					if (atomic_compare_exchange_weak_u32(&ch->buf_elem_read_idx, &rd_idx, new_rd_idx)) {
						break;
					}
				}
				u8* rd_ptr = ch->ringbuf;
				u8* status_adr = ch->statusbuf;
				{ // Unsafe block
					rd_ptr += (u32)(rd_idx * ch->objsize);
					status_adr += (u32)(rd_idx * sizeof(u16));
				}
				u16 expected_status = ((u16)(sync__BufferElemStat__written));
				for (;;) {
					if (!(!atomic_compare_exchange_weak_u16(status_adr, &expected_status, ((u16)(sync__BufferElemStat__reading))))) break;
					expected_status = ((u16)(sync__BufferElemStat__written));
				}
				memcpy(dest, rd_ptr, ch->objsize);
				atomic_store_u16(((u16*)(status_adr)), ((u16)(sync__BufferElemStat__unused)));
				atomic_fetch_add_u32(((voidptr)(&ch->write_free)), 1U);
				sync__Semaphore_post(&ch->writesem);
				sync__SpinLock_lock(ch->write_sub_mtx);
				if (ch->write_subscriber != ((void*)0)) {
					sync__Semaphore_post(ch->write_subscriber->sem);
				}
				sync__SpinLock_unlock(ch->write_sub_mtx);
				return ChanState__success;
			}
		}
		atomic_store_ptr(((voidptr*)(&ch->write_adr)), dest);
		if (ch->cap == 0U) {
			voidptr rdadr = atomic_load_ptr(((voidptr*)(&ch->read_adr)));
			if (rdadr != NULL) {
				voidptr dest2 = dest;
				if (atomic_compare_exchange_strong_ptr(((voidptr)(&ch->write_adr)), ((voidptr)(&dest2)), ((isize)(0)))) {
					sync__Semaphore_post(&ch->readsem);
					continue;
				} else {
					write_in_progress = true;
				}
			}
		}
		if (ch->cap == 0U && !write_in_progress) {
			sync__SpinLock_lock(ch->write_sub_mtx);
			if (ch->write_subscriber != ((void*)0)) {
				sync__Semaphore_post(ch->write_subscriber->sem);
			}
			sync__SpinLock_unlock(ch->write_sub_mtx);
		}
		voidptr dest2 = dest;
		for (u32 sp = ((u32)(0U)); _us32_lt(sp,spinloops_) || write_in_progress; sp++) {
			if (atomic_compare_exchange_strong_ptr(((voidptr)(&ch->adr_written)), ((voidptr)(&dest2)), ((isize)(0)))) {
				have_swapped = true;
				break;
			} else if (dest2 == ((voidptr)(-1))) {
				sync__Semaphore_post(&ch->readsem);
				return ChanState__closed;
			}
			dest2 = dest;
		}
		bool got_im_sem = false;
		for (u32 sp = ((u32)(0U)); _us32_lt(sp,spinloops_sem_) || write_in_progress; sp++) {
			got_im_sem = sync__Semaphore_try_wait(&ch->readsem_im);
			if (got_im_sem) {
				break;
			}
		}
		for (;;) {
			if (got_im_sem) {
				got_im_sem = false;
			} else {
				sync__Semaphore_wait(&ch->readsem_im);
			}
			if (have_swapped || atomic_compare_exchange_strong_ptr(((voidptr)(&ch->adr_written)), ((voidptr)(&dest2)), ((isize)(0)))) {
				sync__Semaphore_post(&ch->readsem);
				break;
			} else {
				sync__Semaphore_post(&ch->readsem_im);
				if (dest2 == ((voidptr)(-1))) {
					sync__Semaphore_post(&ch->readsem);
					return ChanState__closed;
				}
				dest2 = dest;
			}
		}
		break;
	}
	return ChanState__success;
}
int sync__channel_select(Array_sync__Channel_ptr* channels, Array_sync__Direction dir, Array_voidptr* objrefs, time__Duration timeout) {
	Array_sync__Subscription subscr = __new_array_with_default(channels->len, 0, sizeof(sync__Subscription), (voidptr)&(sync__Subscription[]){(sync__Subscription){.sem = ((void*)0),.prev = ((void*)0),.nxt = ((void*)0),}}[0]);
	sync__Semaphore *sem = HEAP(sync__Semaphore, (((sync__Semaphore){.count = 0,})));
	sync__Semaphore_init(&(*(sem)), 0U);
	for (int i = 0; i < channels->len; ++i) {
		sync__Channel* ch = ((sync__Channel**)channels->data)[i];
		(*(sync__Subscription*)array_get(subscr, i)).sem = &(*(sem));
		multi_return_ref_sync__SpinLock_ref_sync__Subscription mr_14629 = ((*(sync__Direction*)array_get(dir, i)) == sync__Direction__push ? ((multi_return_ref_sync__SpinLock_ref_sync__Subscription){.arg0=ch->write_sub_mtx,.arg1=&ch->write_subscriber}) : ((multi_return_ref_sync__SpinLock_ref_sync__Subscription){.arg0=ch->read_sub_mtx,.arg1=&ch->read_subscriber}));
		sync__SpinLock* sub_mtx = mr_14629.arg0;
		sync__Subscription** subscriber = mr_14629.arg1;
		sync__SpinLock_lock(sub_mtx);
		(*(sync__Subscription*)array_get(subscr, i)).prev = subscriber;
		{ // Unsafe block
			(*(sync__Subscription*)array_get(subscr, i)).nxt = ((sync__Subscription*)(atomic_exchange_ptr(((voidptr*)(subscriber)), &(*(sync__Subscription*)array_get(subscr, i)))));
		}
		if (((voidptr)((*(sync__Subscription*)array_get(subscr, i)).nxt)) != ((void*)0)) {
			(*(sync__Subscription*)array_get(subscr, i)).nxt->prev = &(*(sync__Subscription*)array_get(subscr, i)).nxt;
		}
		sync__SpinLock_unlock(sub_mtx);
	}
	time__StopWatch stopwatch = (timeout == _const_time__infinite || timeout <= 0 ? (((time__StopWatch){.elapsed = 0,.start = 0,.end = 0,})) : (time__new_stopwatch(((time__StopWatchOptions){.auto_start = true,}))));
	int event_idx = -1;
	outer:
	for (;;) {
		_result_int _t1 = rand__intn(channels->len);
		if (_t1.is_error) {
			IError err = _t1.err;
			*(int*) _t1.data = 0;
		}
		
 		int rnd = (*(int*)_t1.data);
		int num_closed = 0;
		for (int j = 0; j < channels->len; ++j) {
			int i = (int)(j + rnd);
			if (i >= channels->len) {
				i -= channels->len;
			}
			ChanState stat = ((*(sync__Direction*)array_get(dir, i)) == sync__Direction__push ? (sync__Channel_try_push_priv((*(sync__Channel**)array_get(*channels, i)), (*(voidptr*)array_get(*objrefs, i)), true)) : (sync__Channel_try_pop_priv((*(sync__Channel**)array_get(*channels, i)), (*(voidptr*)array_get(*objrefs, i)), true)));
			if (stat == ChanState__success) {
				event_idx = i;
				goto outer__break;
			} else if (stat == ChanState__closed) {
				num_closed++;
			}
		}
		if (num_closed == channels->len) {
			event_idx = -2;
			goto outer__break;
		}
		if (timeout <= 0) {
			goto outer__break;
		}
		if (timeout != _const_time__infinite) {
			time__Duration remaining = timeout - time__StopWatch_elapsed(stopwatch);
			if (!sync__Semaphore_timed_wait(&(*(sem)), remaining)) {
				goto outer__break;
			}
		} else {
			sync__Semaphore_wait(&(*(sem)));
		}
		outer__continue: {}
	}
	outer__break: {}
	for (int i = 0; i < channels->len; ++i) {
		sync__Channel* ch = ((sync__Channel**)channels->data)[i];
		sync__SpinLock* sub_mtx = ((*(sync__Direction*)array_get(dir, i)) == sync__Direction__push ? (ch->write_sub_mtx) : (ch->read_sub_mtx));
		sync__SpinLock_lock(sub_mtx);
		{ // Unsafe block
			*(*(sync__Subscription*)array_get(subscr, i)).prev = (*(sync__Subscription*)array_get(subscr, i)).nxt;
		}
		if ((*(sync__Subscription*)array_get(subscr, i)).nxt != 0) {
			(*(sync__Subscription*)array_get(subscr, i)).nxt->prev = (*(sync__Subscription*)array_get(subscr, i)).prev;
			sync__Semaphore_post((*(sync__Subscription*)array_get(subscr, i)).nxt->sem);
		}
		sync__SpinLock_unlock(sub_mtx);
	}
	sync__Semaphore_destroy((*(sem)));
	return event_idx;
}
string sync__Mutex_str(sync__Mutex* m) {
	return str_intp(2, _MOV((StrIntpData[]){{_S("Mutex("), 0xfe11, {.d_p = (void*)(((voidptr)(m)))}}, {_S(")"), 0, { .d_c = 0 }}}));
}
string sync__RwMutex_str(sync__RwMutex* m) {
	return str_intp(2, _MOV((StrIntpData[]){{_S("RwMutex("), 0xfe11, {.d_p = (void*)(((voidptr)(m)))}}, {_S(")"), 0, { .d_c = 0 }}}));
}
sync__SpinLock* sync__new_spin_lock(void) {
	sync__SpinLock* the_lock = ((sync__SpinLock*)memdup(&(sync__SpinLock){.locked = 0,.padding = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},}, sizeof(sync__SpinLock)));
	atomic_thread_fence(memory_order_release);
	return the_lock;
}
inline void sync__SpinLock_lock(sync__SpinLock* s) {
	u8 expected = ((u8)(0));
	int spin_count = 0;
	int max_spins = 100;
	int base_delay = 100;
	int max_delay = 10000;
	for (;;) {
		if (atomic_compare_exchange_weak_byte(&s->locked, &expected, 1)) {
			atomic_thread_fence(memory_order_acquire);
			return;
		}
		spin_count++;
		if (spin_count > max_spins) {
			int exponent = int_min((int)(spin_count / max_spins), 10);
			int delay = int_min((int)(base_delay * ((1 << exponent))), max_delay);
			time__sleep(delay * _const_time__nanosecond);
		} else {
			cpu_relax();
		}
		expected = 0;
	}
}
inline void sync__SpinLock_unlock(sync__SpinLock* s) {
	atomic_thread_fence(memory_order_release);
	atomic_store_byte(&s->locked, 0);
}
void sync__Mutex_init(sync__Mutex* m) {
	InitializeSRWLock(&m->mx);
}
void sync__RwMutex_init(sync__RwMutex* m) {
	InitializeSRWLock(&m->mx);
}
void sync__Mutex_lock(sync__Mutex* m) {
	AcquireSRWLockExclusive(&m->mx);
}
void sync__Mutex_unlock(sync__Mutex* m) {
	ReleaseSRWLockExclusive(&m->mx);
}
void sync__RwMutex_rlock(sync__RwMutex* m) {
	AcquireSRWLockShared(&m->mx);
}
void sync__RwMutex_lock(sync__RwMutex* m) {
	AcquireSRWLockExclusive(&m->mx);
}
void sync__RwMutex_runlock(sync__RwMutex* m) {
	ReleaseSRWLockShared(&m->mx);
}
void sync__RwMutex_unlock(sync__RwMutex* m) {
	ReleaseSRWLockExclusive(&m->mx);
}
void sync__Semaphore_init(sync__Semaphore* sem, u32 n) {
	atomic_store_u32(&sem->count, n);
	InitializeSRWLock(&sem->mtx);
	InitializeConditionVariable(&sem->cond);
}
void sync__Semaphore_post(sync__Semaphore* sem) {
	u32 c = atomic_load_u32(&sem->count);
	for (;;) {
		if (!(c > 1U)) break;
		if (atomic_compare_exchange_weak_u32(&sem->count, &c, (u32)(c + 1U))) {
			return;
		}
	}
	AcquireSRWLockExclusive(&sem->mtx);
	c = atomic_fetch_add_u32(((voidptr)(&sem->count)), 1U);
	if (c == 0U) {
		WakeConditionVariable(&sem->cond);
	}
	ReleaseSRWLockExclusive(&sem->mtx);
}
void sync__Semaphore_wait(sync__Semaphore* sem) {
	u32 c = atomic_load_u32(&sem->count);
	for (;;) {
		if (!(c > 0U)) break;
		if (atomic_compare_exchange_weak_u32(&sem->count, &c, (u32)(c - 1U))) {
			return;
		}
	}
	AcquireSRWLockExclusive(&sem->mtx);
	c = atomic_load_u32(&sem->count);
	outer:
	for (;;) {
		if (c == 0U) {
			SleepConditionVariableSRW(&sem->cond, &sem->mtx, INFINITE, 0U);
			c = atomic_load_u32(&sem->count);
		}
		for (;;) {
			if (!(c > 0U)) break;
			if (atomic_compare_exchange_weak_u32(&sem->count, &c, (u32)(c - 1U))) {
				if (c > 1U) {
					WakeConditionVariable(&sem->cond);
				}
				goto outer__break;
			}
		}
		outer__continue: {}
	}
	outer__break: {}
	ReleaseSRWLockExclusive(&sem->mtx);
}
bool sync__Semaphore_try_wait(sync__Semaphore* sem) {
	u32 c = atomic_load_u32(&sem->count);
	for (;;) {
		if (!(c > 0U)) break;
		if (atomic_compare_exchange_weak_u32(&sem->count, &c, (u32)(c - 1U))) {
			return true;
		}
	}
	return false;
}
bool sync__Semaphore_timed_wait(sync__Semaphore* sem, time__Duration timeout) {
	u32 c = atomic_load_u32(&sem->count);
	for (;;) {
		if (!(c > 0U)) break;
		if (atomic_compare_exchange_weak_u32(&sem->count, &c, (u32)(c - 1U))) {
			return true;
		}
	}
	struct _FILETIME ft_start = ((struct _FILETIME){.dwLowDateTime = 0,.dwHighDateTime = 0,});
	GetSystemTimeAsFileTime(&ft_start);
	u64 time_end = (u64)(((((((u64)(ft_start.dwHighDateTime)) << 32U)) | ft_start.dwLowDateTime)) + ((u64)(timeout / (100 * _const_time__nanosecond))));
	u32 t_ms = ((u32)(time__Duration_sys_milliseconds(timeout)));
	AcquireSRWLockExclusive(&sem->mtx);
	int res = 0;
	c = atomic_load_u32(&sem->count);
	outer:
	for (;;) {
		if (c == 0U) {
			res = SleepConditionVariableSRW(&sem->cond, &sem->mtx, t_ms, 0U);
			if (res == 0) {
				goto outer__break;
			}
			c = atomic_load_u32(&sem->count);
		}
		for (;;) {
			if (!(c > 0U)) break;
			if (atomic_compare_exchange_weak_u32(&sem->count, &c, (u32)(c - 1U))) {
				if (c > 1U) {
					WakeConditionVariable(&sem->cond);
				}
				goto outer__break;
			}
		}
		GetSystemTimeAsFileTime(&ft_start);
		u64 time_now = ((((((u64)(ft_start.dwHighDateTime)) << 32U)) | ft_start.dwLowDateTime));
		if (time_now > time_end) {
			goto outer__break;
		}
		t_ms = ((u32)((u64)(((u64)(time_end - time_now)) / 10000U)));
		outer__continue: {}
	}
	outer__break: {}
	ReleaseSRWLockExclusive(&sem->mtx);
	return res != 0;
}
void sync__Semaphore_destroy(sync__Semaphore _v_toheap_s) {
sync__Semaphore* s = HEAP(sync__Semaphore, _v_toheap_s);
}
void sync__WaitGroup_init(sync__WaitGroup* wg) {
	sync__Semaphore_init(&wg->sem, 0U);
}
#if defined(_WIN32)
	#if defined(_MSC_VER)
	#else
	#endif
#else
#endif
net__Addr net__new_ip6(u16 port, Array_fixed_u8_16 addr) {
	u16 n_port = net__conv__hton16(port);
	net__Addr a = ((net__Addr){.f = ((u8)(net__AddrFamily__ip6)),.addr = ((net__AddrData){.Ip6 = ((net__Ip6){.port = n_port,.flow_info = 0,.addr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.scope_id = 0,}),}),});
	vmemcpy(&a.addr.Ip6.addr[0], &addr[0], 16);
	return a;
}
net__Addr net__new_ip(u16 port, Array_fixed_u8_4 addr) {
	u16 n_port = net__conv__hton16(port);
	net__Addr a = ((net__Addr){.f = ((u8)(net__AddrFamily__ip)),.addr = ((net__AddrData){.Ip = ((net__Ip){.port = n_port,.addr = {0, 0, 0, 0},.sin_pad = {0, 0, 0, 0, 0, 0, 0, 0},}),}),});
	vmemcpy(&a.addr.Ip.addr[0], &addr[0], 4);
	return a;
}
net__AddrFamily net__Addr_family(net__Addr a) {
	return ((net__AddrFamily)(a.f));
}
string net__Ip_str(net__Ip a) {
	Array_fixed_char_24 buf = {0};
	char* res = ((char*)(inet_ntop(net__AddrFamily__ip, &a.addr, &buf[0], 24)));
	if (res == 0) {
		return _S("<Unknown>");
	}
	string saddr = cstring_to_vstring(&buf[0]);
	u16 port = net__conv__ntoh16(a.port);
	return str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = saddr}}, {_S(":"), 0xfe04, {.d_u16 = port}}, {_SLIT0, 0, { .d_c = 0 }}}));
}
string net__Ip6_str(net__Ip6 a) {
	Array_fixed_char_46 buf = {0};
	char* res = ((char*)(inet_ntop(net__AddrFamily__ip6, &a.addr, &buf[0], 46)));
	if (res == 0) {
		return _S("<Unknown>");
	}
	string saddr = cstring_to_vstring(&buf[0]);
	u16 port = net__conv__ntoh16(a.port);
	return str_intp(3, _MOV((StrIntpData[]){{_S("["), 0xfe10, {.d_s = saddr}}, {_S("]:"), 0xfe04, {.d_u16 = port}}, {_SLIT0, 0, { .d_c = 0 }}}));
}
u32 net__Addr_len(net__Addr a) {
	net__AddrFamily _t1 = net__Addr_family(a);
	
	if (_t1 == (net__AddrFamily__ip)) {
		return (u32)(sizeof(net__Ip) + _const_net__aoffset);
	}
	else if (_t1 == (net__AddrFamily__ip6)) {
		return (u32)(sizeof(net__Ip6) + _const_net__aoffset);
	}
	else if (_t1 == (net__AddrFamily__unix)) {
		return (u32)(sizeof(net__Unix) + _const_net__aoffset);
	}
	else {
		_v_panic(_S("Unknown address family"));
		VUNREACHABLE();
	}
	return 0;
}
_result_Array_net__Addr net__resolve_addrs(string addr, net__AddrFamily family, net__SocketType typ) {

	if (family == (net__AddrFamily__ip) || family == (net__AddrFamily__ip6) || family == (net__AddrFamily__unspec)) {
		return net__resolve_ipaddrs(addr, family, typ);
	}
	else if (family == (net__AddrFamily__unix)) {
		net__Unix resolved = ((net__Unix){.path = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},});
		if (addr.len > 108) {
			return (_result_Array_net__Addr){ .is_error=true, .err=_v_error(_S("net: resolve_addrs Unix socket address is too long")), .data={E_STRUCT} };
		}
		memcpy(&resolved.path, addr.str, addr.len);
		_result_Array_net__Addr _t3 = {0};
		_result_ok(&(Array_net__Addr[]) { new_array_from_c_array_noscan(1, 1, sizeof(net__Addr), _MOV((net__Addr[1]){((net__Addr){.f = ((u8)(net__AddrFamily__unix)),.addr = ((net__AddrData){.Unix = resolved,}),})})) }, (_result*)(&_t3), sizeof(Array_net__Addr));
		return _t3;
	}
	return (_result_Array_net__Addr){0};
}
_result_Array_net__Addr net__resolve_addrs_fuzzy(string addr, net__SocketType typ) {
	if (addr.len == 0) {
		return (_result_Array_net__Addr){ .is_error=true, .err=_v_error(_S("none")), .data={E_STRUCT} };
	}
	if (string_contains(addr, _S(":"))) {
		return net__resolve_addrs(addr, net__AddrFamily__unspec, typ);
	}
	return net__resolve_addrs(addr, net__AddrFamily__unix, typ);
}
_result_Array_net__Addr net__resolve_ipaddrs(string addr, net__AddrFamily family, net__SocketType typ) {
	bool net__resolve_ipaddrs_defer_0 = false;
	struct addrinfo* results;
	_result_multi_return_string_u16 _t1 = net__split_address(addr);
	if (_t1.is_error) {
		_result_Array_net__Addr _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 	multi_return_string_u16 mr_3968 = (*(multi_return_string_u16*)_t1.data);
	string address = mr_3968.arg0;
	u16 port = mr_3968.arg1;
	if (string_at(addr, 0) == ':') {

		if (family == (net__AddrFamily__ip6)) {
			_result_Array_net__Addr _t3 = {0};
			_result_ok(&(Array_net__Addr[]) { new_array_from_c_array_noscan(1, 1, sizeof(net__Addr), _MOV((net__Addr[1]){net__new_ip6(port, _const_net__addr_ip6_any)})) }, (_result*)(&_t3), sizeof(Array_net__Addr));
			return _t3;
		}
		else if (family == (net__AddrFamily__ip) || family == (net__AddrFamily__unspec)) {
			_result_Array_net__Addr _t4 = {0};
			_result_ok(&(Array_net__Addr[]) { new_array_from_c_array_noscan(1, 1, sizeof(net__Addr), _MOV((net__Addr[1]){net__new_ip(port, _const_net__addr_ip_any)})) }, (_result*)(&_t4), sizeof(Array_net__Addr));
			return _t4;
		}
		else {
		}
	}
	struct addrinfo hints;
	vmemset(&hints, 0, ((int)(sizeof(struct addrinfo))));
	hints.ai_family = ((int)(family));
	hints.ai_socktype = ((int)(typ));
	hints.ai_flags = AI_PASSIVE;
	results = ((struct addrinfo*)(((void*)0)));
	string sport = str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe04, {.d_u16 = port}}, {_SLIT0, 0, { .d_c = 0 }}}));
	#if defined(_WIN32)
	{
		_result_int _t6 = net__socket_error((int)(0 - getaddrinfo(((char*)(address.str)), ((char*)(sport.str)), &hints, &results)));
		if (_t6.is_error) {
			_result_Array_net__Addr _t7 = {0};
			_t7.is_error = true;
			_t7.err = _t6.err;
			return _t7;
		}
		
 ;
	}
	#else
	{
	}
	#endif
	net__resolve_ipaddrs_defer_0 = true;
	Array_net__Addr addresses = __new_array_with_default_noscan(0, 0, sizeof(net__Addr), 0);
	for (struct addrinfo* result = results; !isnil(result); result = result->ai_next) {
		net__AddrFamily _t8 = ((net__AddrFamily)(result->ai_family));
		
		if (_t8 == (net__AddrFamily__ip)) {
			net__Addr new_addr = ((net__Addr){.f = 0,.addr = ((net__AddrData){.Ip = ((net__Ip){.port = 0,.addr = {0, 0, 0, 0},.sin_pad = {0, 0, 0, 0, 0, 0, 0, 0},}),}),});
			memcpy(&new_addr, result->ai_addr, result->ai_addrlen);
			array_push_noscan((array*)&addresses, _MOV((net__Addr[]){ new_addr }));
		}
		else if (_t8 == (net__AddrFamily__ip6)) {
			net__Addr new_addr = ((net__Addr){.f = 0,.addr = ((net__AddrData){.Ip6 = ((net__Ip6){.port = 0,.flow_info = 0,.addr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.scope_id = 0,}),}),});
			memcpy(&new_addr, result->ai_addr, result->ai_addrlen);
			array_push_noscan((array*)&addresses, _MOV((net__Addr[]){ new_addr }));
		}
		else {
			_v_panic(string__plus(_S("Unexpected address family "), int_str(result->ai_family)));
			VUNREACHABLE();
		}
	}
	_result_Array_net__Addr _t11 = {0};
	_result_ok(&(Array_net__Addr[]) { addresses }, (_result*)(&_t11), sizeof(Array_net__Addr));
	// Defer begin
	if (net__resolve_ipaddrs_defer_0) {
		freeaddrinfo(results);
	}
	// Defer end
	return _t11;
}
string net__Addr_str(net__Addr a) {
	net__AddrFamily _t1 = ((net__AddrFamily)(a.f));
	
	if (_t1 == (net__AddrFamily__ip)) {
		{ // Unsafe block
			return net__Ip_str(a.addr.Ip);
		}
	}
	else if (_t1 == (net__AddrFamily__ip6)) {
		{ // Unsafe block
			return net__Ip6_str(a.addr.Ip6);
		}
	}
	else if (_t1 == (net__AddrFamily__unix)) {
		{ // Unsafe block
			return tos_clone(array_slice(new_array_from_c_array_noscan(108, 108, sizeof(u8), a.addr.Unix.path), 0, _const_net__max_unix_path).data);
		}
	}
	else if (_t1 == (net__AddrFamily__unspec)) {
		return _S("<.unspec>");
	}
	return (string){.str=(byteptr)"", .is_lit=1};
}
net__Addr net__addr_from_socket_handle(int handle) {
	net__Addr addr = ((net__Addr){.f = 0,.addr = ((net__AddrData){.Ip6 = ((net__Ip6){.port = 0,.flow_info = 0,.addr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.scope_id = 0,}),}),});
	u32 size = sizeof(net__Addr);
	getsockname(handle, ((voidptr)(&addr)), &size);
	return addr;
}
_result_net__Addr net__peer_addr_from_socket_handle(int handle) {
	net__Addr addr = ((net__Addr){.f = 0,.addr = ((net__AddrData){.Ip6 = ((net__Ip6){.port = 0,.flow_info = 0,.addr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.scope_id = 0,}),}),});
	u32 size = sizeof(net__Addr);
	_result_int _t1 = net__socket_error_message(getpeername(handle, ((voidptr)(&addr)), &size), _S("peer_addr_from_socket_handle failed"));
	if (_t1.is_error) {
		_result_net__Addr _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 ;
	_result_net__Addr _t3 = {0};
	_result_ok(&(net__Addr[]) { addr }, (_result*)(&_t3), sizeof(net__Addr));
	return _t3;
}
int net__shutdown(int handle, net__ShutdownConfig config) {
	int res = shutdown(handle, ((int)(config.how)));
	#if !defined(CUSTOM_DEFINE_net_nonblocking_sockets)
	{
		return res;
	}
	#else
	{
	}
	#endif
	return 0;
}
_result_void net__close(int handle) {
	int _t1;
	#if defined(_WIN32)
		_t1 = closesocket(handle);
		;
	#else
	#endif
		int res = _t1;
	#if !defined(CUSTOM_DEFINE_net_nonblocking_sockets)
	{
		_result_int _t3 = net__socket_error(res);
		if (_t3.is_error) {
			_result_void _t4 = {0};
			_t4.is_error = true;
			_t4.err = _t3.err;
			return _t4;
		}
		
 ;
		return (_result_void){0};
	}
	#else
	{
	}
	#endif
	return (_result_void){0};
}
VV_LOC _result_bool net__select(int handle, net__Select test, time__Duration timeout) {
	fd_set set = ((fd_set){E_STRUCT});
	FD_ZERO(&set);
	FD_SET(handle, &set);
	time__Duration seconds = timeout / _const_time__second;
	i64 microseconds = time__Duration_microseconds(((time__Duration)(timeout - (seconds * _const_time__second))));
	struct timeval *tt = HEAP(struct timeval, (((struct timeval){.tv_sec = ((u64)(seconds)),.tv_usec = ((u64)(microseconds)),})));
	struct timeval* timeval_timeout = &(*(tt));
	if (timeout == _const_net__infinite_timeout) {
		timeval_timeout = ((struct timeval*)(((void*)0)));
	}

	if (test == (net__Select__read)) {
		_result_int _t1 = net__socket_error(select((int)(handle + 1), &set, NULL, NULL, timeval_timeout));
		if (_t1.is_error) {
			_result_bool _t2 = {0};
			_t2.is_error = true;
			_t2.err = _t1.err;
			return _t2;
		}
		
 ;
	}
	else if (test == (net__Select__write)) {
		_result_int _t3 = net__socket_error(select((int)(handle + 1), NULL, &set, NULL, timeval_timeout));
		if (_t3.is_error) {
			_result_bool _t4 = {0};
			_t4.is_error = true;
			_t4.err = _t3.err;
			return _t4;
		}
		
 ;
	}
	else if (test == (net__Select__except)) {
		_result_int _t5 = net__socket_error(select((int)(handle + 1), NULL, NULL, &set, timeval_timeout));
		if (_t5.is_error) {
			_result_bool _t6 = {0};
			_t6.is_error = true;
			_t6.err = _t5.err;
			return _t6;
		}
		
 ;
	}
	_result_bool _t7 = {0};
	_result_ok(&(bool[]) { FD_ISSET(handle, &set) != 0 }, (_result*)(&_t7), sizeof(bool));
	return _t7;
}
inline VV_LOC _result_bool net__select_deadline(int handle, net__Select test, time__Time deadline) {
	bool infinite = time__Time_unix(deadline) == 0;
	for (;;) {
		if (!(infinite || !time__Time__lt(deadline, time__now()))) break;
		time__Duration timeout = (infinite ? (_const_net__infinite_timeout) : (time__Time__minus(deadline, time__now())));
		_result_bool _t1 = net__select(handle, test, timeout);
		if (_t1.is_error) {
			IError err = _t1.err;
			if (IError_name_table[err._typ]._method_code(err._object) == EINTR) {
				continue;
			}
			return (_result_bool){ .is_error=true, .err=err, .data={E_STRUCT} };
		}
		
 		bool ready = (*(bool*)_t1.data);
		_result_bool _t3 = {0};
		_result_ok(&(bool[]) { ready }, (_result*)(&_t3), sizeof(bool));
		return _t3;
	}
	return (_result_bool){ .is_error=true, .err=_const_net__err_timed_out, .data={E_STRUCT} };
}
VV_LOC _result_void net__wait_for_common(int handle, time__Time deadline, time__Duration timeout, net__Select test) {
	time__Time _t1; /* if prepend */
	if (timeout == _const_net__infinite_timeout) {
		_t1 = time__unix(0);
	} else if (timeout == 0) {
		_t1 = deadline;
	} else if (timeout < 0) {
		_v_panic(_S("invalid negative timeout"));
		VUNREACHABLE();
	} else {
		_t1 = time__Time_add(time__now(), timeout);
	}
	time__Time real_deadline = _t1;
	_result_bool _t2 = net__select_deadline(handle, test, real_deadline);
	if (_t2.is_error) {
		_result_void _t3 = {0};
		_t3.is_error = true;
		_t3.err = _t2.err;
		return _t3;
	}
	
 	bool ready = (*(bool*)_t2.data);
	if (ready) {
		return (_result_void){0};
	}
	return (_result_void){ .is_error=true, .err=_const_net__err_timed_out, .data={E_STRUCT} };
}
VV_LOC _result_void net__wait_for_write(int handle, time__Time deadline, time__Duration timeout) {
	return net__wait_for_common(handle, deadline, timeout, net__Select__write);
}
VV_LOC _result_void net__wait_for_read(int handle, time__Time deadline, time__Duration timeout) {
	return net__wait_for_common(handle, deadline, timeout, net__Select__read);
}
_result_int net__socket_error_message(int potential_code, string s) {
	_result_int _t2 = net__socket_error(potential_code);
	if (_t2.is_error) {
		IError err = _t2.err;
		return (_result_int){ .is_error=true, .err=_v_error(str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_S("; "), 0xfe10, {.d_s = s}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
	}
	
 	_result_int _t1 = {0};
	_result_ok(&(int[]) { (*(int*)_t2.data) }, (_result*)(&_t1), sizeof(int));
	return _t1;
}
_result_int net__socket_error(int potential_code) {
	#if defined(_WIN32)
	{
		if (potential_code < 0) {
			int last_error_int = WSAGetLastError();
			net__WsaError last_error = net__wsa_error(last_error_int);
			return (_result_int){ .is_error=true, .err=error_with_code(str_intp(3, _MOV((StrIntpData[]){{_S("net: socket error: ("), 0xfe07, {.d_i32 = last_error_int}}, {_S(") "), 0xfe10, {.d_s = net__WsaError_str(last_error)}}, {_SLIT0, 0, { .d_c = 0 }}})), ((int)(last_error))), .data={E_STRUCT} };
		}
	}
	#else
	{
	}
	#endif
	_result_int _t3 = {0};
	_result_ok(&(int[]) { potential_code }, (_result*)(&_t3), sizeof(int));
	return _t3;
}
_result_void net__wrap_error(int error_code) {
	if (error_code == 0) {
		return (_result_void){0};
	}
	#if defined(_WIN32)
	{
		net__WsaError enum_error = net__wsa_error(error_code);
		return (_result_void){ .is_error=true, .err=error_with_code(str_intp(2, _MOV((StrIntpData[]){{_S("net: socket error: "), 0xfe10, {.d_s = net__WsaError_str(enum_error)}}, {_SLIT0, 0, { .d_c = 0 }}})), error_code), .data={E_STRUCT} };
	}
	#else
	{
	}
	#endif
	return (_result_void){0};
}
net__WsaError net__wsa_error(int code) {
	return ((net__WsaError)(code));
}
int net__error_code(void) {
	return WSAGetLastError();
}
VV_LOC void net__init(void) {
	struct WSAData wsadata = ((struct WSAData){.wVersion = 0,.wHighVersion = 0,.szDescription = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.szSystemStatus = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},.iMaxSockets = 0,.iMaxUdpDg = 0,.lpVendorInfo = 0,});
	int res = WSAStartup(_const_net__wsa_v22, &wsadata);
	if (res != 0) {
		_v_panic(_S("socket: WSAStartup failed"));
		VUNREACHABLE();
	}
}
_result_net__Addr net__Socket_address(net__Socket* s) {
	_result_net__Addr _t1 = {0};
	_result_ok(&(net__Addr[]) { net__addr_from_socket_handle(s->handle) }, (_result*)(&_t1), sizeof(net__Addr));
	return _t1;
}
_result_net__Connection net__TCPDialer_dial(net__TCPDialer t, string address) {
	_result_net__TcpConn_ptr _t2 = net__dial_tcp(address);
	if (_t2.is_error) {
		_result_net__Connection _t3 = {0};
		_t3.is_error = true;
		_t3.err = _t2.err;
		return _t3;
	}
	
 	_result_net__Connection _t1 = {0};
	_result_ok(&(net__Connection[]) { I_net__TcpConn_to_Interface_net__Connection((*(net__TcpConn**)_t2.data)) }, (_result*)(&_t1), sizeof(net__Connection));
	return _t1;
}
_result_net__TcpConn_ptr net__dial_tcp(string oaddress) {
	string address = oaddress;
	if (string_starts_with(address, _S(":::"))) {
		address = string_replace_once(address, _S(":::"), _S("localhost:"));
	}
	if (string_starts_with(address, _S("0.0.0.0:"))) {
		address = string_replace_once(address, _S("0.0.0.0:"), _S("localhost:"));
	}
	_result_Array_net__Addr _t1 = net__resolve_addrs_fuzzy(address, net__SocketType__tcp);
	if (_t1.is_error) {
		IError err = _t1.err;
		return (_result_net__TcpConn_ptr){ .is_error=true, .err=_v_error(str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_S("; could not resolve address "), 0xfe10, {.d_s = address}}, {_S(" in dial_tcp"), 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
	}
	
 	Array_net__Addr addrs = (*(Array_net__Addr*)_t1.data);
	Array_IError errs = __new_array_with_default(0, 0, sizeof(IError), 0);
	for (int _t3 = 0; _t3 < addrs.len; ++_t3) {
		net__Addr addr = ((net__Addr*)addrs.data)[_t3];
		_result_net__TcpSocket _t4 = net__new_tcp_socket(net__Addr_family(addr));
		if (_t4.is_error) {
			IError err = _t4.err;
			return (_result_net__TcpConn_ptr){ .is_error=true, .err=_v_error(str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = IError_name_table[err._typ]._method_msg(err._object)}}, {_S("; could not create new tcp socket in dial_tcp"), 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
		}
		
 		net__TcpSocket s = (*(net__TcpSocket*)_t4.data);
		_result_void _t6 = net__TcpSocket_connect(&s, addr);
		if (_t6.is_error) {
			IError err = _t6.err;
			array_push((array*)&errs, _MOV((IError[]){ err }));
			_result_void _t8 = net__TcpSocket_close(&s);
			if (_t8.is_error) {
				IError err = _t8.err;
				continue;
			}
			
 ;
			continue;
		}
		
 ;
		net__TcpConn* conn = ((net__TcpConn*)memdup(&(net__TcpConn){.sock = s,.handle = 0,.write_deadline = ((time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,}),.read_deadline = ((time__Time){.__v_unix = 0,.year = 0,.month = 0,.day = 0,.hour = 0,.minute = 0,.second = 0,.nanosecond = 0,.is_local = 0,}),.read_timeout = _const_net__tcp_default_read_timeout,.write_timeout = _const_net__tcp_default_write_timeout,.is_blocking = true,}, sizeof(net__TcpConn)));
		_result_net__TcpConn_ptr _t9 = {0};
		_result_ok(&(net__TcpConn*[]) { conn }, (_result*)(&_t9), sizeof(net__TcpConn*));
		return _t9;
	}
	strings__Builder err_builder = strings__new_builder(1024);
	{
		strings__Builder_write_string(&err_builder, _S("dial_tcp failed for address "));
		strings__Builder_write_string(&err_builder, address);
		strings__Builder_write_string(&err_builder, _S("\n"));
	}
	strings__Builder_write_string(&err_builder, _S("tried addrs:\n"));
	for (int i = 0; i < errs.len; i++) {
		net__Addr addr = (*(net__Addr*)array_get(addrs, i));
		IError why = (*(IError*)array_get(errs, i));
		strings__Builder_write_string(&err_builder, str_intp(3, _MOV((StrIntpData[]){{_S("\t"), 0xfe10, {.d_s = net__Addr_str(addr)}}, {_S(": "), 0xfe10, {.d_s = IError_str(why)}}, {_S("\n"), 0, { .d_c = 0 }}})));
	}
	return (_result_net__TcpConn_ptr){ .is_error=true, .err=_v_error(strings__Builder_str(&err_builder)), .data={E_STRUCT} };
}
_result_void net__TcpConn_close(net__TcpConn* c) {
	_result_void _t1 = net__TcpSocket_close(&c->sock);
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 ;
	return (_result_void){0};
}
_result_int net__TcpConn_read_ptr(net__TcpConn _v_toheap_c, u8* buf_ptr, int len) {
net__TcpConn* c = HEAP(net__TcpConn, _v_toheap_c);
	bool should_ewouldblock = false;
	int _t1;
	#if defined(CUSTOM_DEFINE_is_coroutine)
	#else
		{
			bool has_data = true;
			if ((*(c)).is_blocking) {
				_result_bool _t2;
				if (_t2 = net__select((*(c)).sock.Socket.handle, net__Select__read, 1), !_t2.is_error) {
					bool ok = *(bool*)_t2.data;
					has_data = ok;
				} else {
					IError err = _t2.err;
					false;
				}
			}
		int _t3; /* if prepend */
		if (has_data) {
			_t3 = recv((*(c)).sock.Socket.handle, ((voidptr)(buf_ptr)), len, _const_net__msg_dontwait);
		} else {
			should_ewouldblock = true;
			_t3 = -1;
		}
			_t1 = _t3;
		}
	#endif
		int res = _t1;
	if (res > 0) {
		_result_int _t4 = {0};
		_result_ok(&(int[]) { res }, (_result*)(&_t4), sizeof(int));
		return _t4;
	}
	int code = (should_ewouldblock ? (((int)(_const_net__error_ewouldblock))) : (net__error_code()));
	if (code == ((int)(_const_net__error_ewouldblock)) || code == ((int)(_const_net__error_eagain)) || code == EINTR) {
		_result_void _t5 = net__TcpConn_wait_for_read((*(c)));
		if (_t5.is_error) {
			_result_int _t6 = {0};
			_t6.is_error = true;
			_t6.err = _t5.err;
			return _t6;
		}
		
 ;
		int _t7;
		#if defined(CUSTOM_DEFINE_is_coroutine)
		#else
			_t7 = recv((*(c)).sock.Socket.handle, ((voidptr)(buf_ptr)), len, _const_net__msg_dontwait);
			;
		#endif
				res = _t7;
		return net__socket_error(res);
	} else {
		_result_void _t9 = net__wrap_error(code);
		if (_t9.is_error) {
			_result_int _t10 = {0};
			_t10.is_error = true;
			_t10.err = _t9.err;
			return _t10;
		}
		
 ;
	}
	return (_result_int){ .is_error=true, .err=_v_error(_S("none")), .data={E_STRUCT} };
}
_result_int net__TcpConn_read(net__TcpConn _v_toheap_c, Array_u8* buf) {
net__TcpConn* c = HEAP(net__TcpConn, _v_toheap_c);
	_result_int _t2 = net__TcpConn_read_ptr((*(c)), buf->data, buf->len);
	if (_t2.is_error) {
		_result_int _t3 = {0};
		_t3.is_error = true;
		_t3.err = _t2.err;
		return _t3;
	}
	
 	_result_int _t1 = {0};
	_result_ok(&(int[]) { (*(int*)_t2.data) }, (_result*)(&_t1), sizeof(int));
	return _t1;
}
_result_time__Time net__TcpConn_read_deadline(net__TcpConn* c) {
	if (time__Time_unix(c->read_deadline) == 0) {
		_result_time__Time _t1 = {0};
		_result_ok(&(time__Time[]) { c->read_deadline }, (_result*)(&_t1), sizeof(time__Time));
		return _t1;
	}
	return (_result_time__Time){ .is_error=true, .err=_v_error(_S("none")), .data={E_STRUCT} };
}
_result_int net__TcpConn_write_ptr(net__TcpConn* c, u8* b, int len) {
	{ // Unsafe block
		u8* ptr_base = ((u8*)(b));
		int total_sent = 0;
		for (;;) {
			if (!(total_sent < len)) break;
			u8* ptr = ptr_base + total_sent;
			int remaining = (int)(len - total_sent);
			int _t1;
			#if defined(CUSTOM_DEFINE_is_coroutine)
			#else
				_t1 = send(c->sock.Socket.handle, ptr, remaining, _const_net__msg_nosignal);
				;
			#endif
						int sent = _t1;
			if (sent < 0) {
				int code = net__error_code();
				if (code == ((int)(_const_net__error_ewouldblock)) || code == ((int)(_const_net__error_eagain)) || code == EINTR) {
					_result_void _t2 = net__TcpConn_wait_for_write(c);
					if (_t2.is_error) {
						_result_int _t3 = {0};
						_t3.is_error = true;
						_t3.err = _t2.err;
						return _t3;
					}
					
 ;
					continue;
				} else {
					_result_void _t4 = net__wrap_error(code);
					if (_t4.is_error) {
						_result_int _t5 = {0};
						_t5.is_error = true;
						_t5.err = _t4.err;
						return _t5;
					}
					
 ;
				}
			}
			total_sent += sent;
		}
		_result_int _t6 = {0};
		_result_ok(&(int[]) { total_sent }, (_result*)(&_t6), sizeof(int));
		return _t6;
	}
	return (_result_int){0};
}
_result_int net__TcpConn_write(net__TcpConn* c, Array_u8 bytes) {
	return net__TcpConn_write_ptr(c, bytes.data, bytes.len);
}
_result_time__Time net__TcpConn_write_deadline(net__TcpConn* c) {
	if (time__Time_unix(c->write_deadline) == 0) {
		_result_time__Time _t1 = {0};
		_result_ok(&(time__Time[]) { c->write_deadline }, (_result*)(&_t1), sizeof(time__Time));
		return _t1;
	}
	return (_result_time__Time){ .is_error=true, .err=_v_error(_S("none")), .data={E_STRUCT} };
}
time__Duration net__TcpConn_read_timeout(net__TcpConn* c) {
	return c->read_timeout;
}
time__Duration net__TcpConn_write_timeout(net__TcpConn* c) {
	return c->write_timeout;
}
inline _result_void net__TcpConn_wait_for_read(net__TcpConn _v_toheap_c) {
net__TcpConn* c = HEAP(net__TcpConn, _v_toheap_c);
	return net__wait_for_read((*(c)).sock.Socket.handle, (*(c)).read_deadline, (*(c)).read_timeout);
}
inline _result_void net__TcpConn_wait_for_write(net__TcpConn* c) {
	return net__wait_for_write(c->sock.Socket.handle, c->write_deadline, c->write_timeout);
}
_result_net__Addr net__TcpConn_peer_addr(net__TcpConn* c) {
	return net__peer_addr_from_socket_handle(c->sock.Socket.handle);
}
_result_net__Addr net__TcpConn_addr(net__TcpConn* c) {
	return net__Socket_address(&c->sock.Socket);
}
string net__TcpConn_str(net__TcpConn _v_toheap_c) {
net__TcpConn* c = HEAP(net__TcpConn, _v_toheap_c);
	string s = string_replace(string_replace(net__TcpSocket_str((*(c)).sock), _S("\n"), _S(" ")), _S("  "), _S(" "));
	return str_intp(6, _MOV((StrIntpData[]){{_S("TcpConn{ write_deadline: "), 0xfe10, {.d_s = time__Time_str((*(c)).write_deadline)}}, {_S(", read_deadline: "), 0xfe10, {.d_s = time__Time_str((*(c)).read_deadline)}}, {_S(", read_timeout: "), 0xfe10, {.d_s = time__Duration_str((*(c)).read_timeout)}}, {_S(", write_timeout: "), 0xfe10, {.d_s = time__Duration_str((*(c)).write_timeout)}}, {_S(", sock: "), 0xfe10, {.d_s = s}}, {_S(" }"), 0, { .d_c = 0 }}}));
}
__NOINLINE _result_net__TcpSocket net__new_tcp_socket(net__AddrFamily family) {
	int _t1;
	#if defined(CUSTOM_DEFINE_is_coroutine)
	#else
_result_int _t2 = net__socket_error(socket(family, net__SocketType__tcp, 0));
		if (_t2.is_error) {
			_result_net__TcpSocket _t3 = {0};
			_t3.is_error = true;
			_t3.err = _t2.err;
			return _t3;
		}
		
 		_t1 = (*(int*)_t2.data);
		;
	#endif
		int handle = _t1;
	net__TcpSocket s = ((net__TcpSocket){.Socket = ((net__Socket){.handle = handle,}),});
	_result_void _t4 = net__TcpSocket_set_default_options(&s);
	if (_t4.is_error) {
		_result_net__TcpSocket _t5 = {0};
		_t5.is_error = true;
		_t5.err = _t4.err;
		return _t5;
	}
	
 ;
	_result_net__TcpSocket _t6 = {0};
	_result_ok(&(net__TcpSocket[]) { s }, (_result*)(&_t6), sizeof(net__TcpSocket));
	return _t6;
}
VV_LOC _result_void net__TcpSocket_set_option(net__TcpSocket* s, int level, int opt, int value) {
	_result_int _t1 = net__socket_error(setsockopt(s->Socket.handle, level, opt, &value, sizeof(int)));
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 ;
	return (_result_void){0};
}
_result_void net__TcpSocket_set_option_int(net__TcpSocket* s, net__SocketOption opt, int value) {
	_result_void _t1 = net__TcpSocket_set_option(s, SOL_SOCKET, ((int)(opt)), value);
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 ;
	return (_result_void){0};
}
VV_LOC _result_void net__TcpSocket_set_default_options(net__TcpSocket* s) {
	_result_void _t1 = net__TcpSocket_set_option_int(s, net__SocketOption__reuse_addr, 1);
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 ;
	_result_void _t3 = net__TcpSocket_set_option(s, IPPROTO_TCP, TCP_NODELAY, 1);
	if (_t3.is_error) {
		_result_void _t4 = {0};
		_t4.is_error = true;
		_t4.err = _t3.err;
		return _t4;
	}
	
 ;
	return (_result_void){0};
}
VV_LOC _result_void net__TcpSocket_close(net__TcpSocket* s) {
	net__shutdown(s->Socket.handle, ((net__ShutdownConfig){.how = net__ShutdownDirection__read_and_write,}));
	return net__close(s->Socket.handle);
}
VV_LOC _result_void net__TcpSocket_connect(net__TcpSocket* s, net__Addr a) {
	#if defined(CUSTOM_DEFINE_net_nonblocking_sockets)
	{
	}
	#else
	{
		int _t2;
		#if defined(CUSTOM_DEFINE_is_coroutine)
		#else
			_t2 = connect(s->Socket.handle, ((voidptr)(&a)), net__Addr_len(a));
			;
		#endif
				int x = _t2;
		_result_int _t3 = net__socket_error(x);
		if (_t3.is_error) {
			_result_void _t4 = {0};
			_t4.is_error = true;
			_t4.err = _t3.err;
			return _t4;
		}
		
 ;
	}
	#endif
	return (_result_void){0};
}
_result_int net__UdpConn_write_ptr(net__UdpConn* c, u8* b, int len) {
	_option_net__Addr _t1 = net__UdpSocket_remote(&c->sock);
	if (_t1.state != 0) {
		IError err = _t1.err;
		return (_result_int){ .is_error=true, .err=_const_net__err_no_udp_remote, .data={E_STRUCT} };
	}
	
 	net__Addr remote = (*(net__Addr*)_t1.data);
	return net__UdpConn_write_to_ptr(c, remote, b, len);
}
_result_int net__UdpConn_write(net__UdpConn* c, Array_u8 buf) {
	return net__UdpConn_write_ptr(c, buf.data, buf.len);
}
_result_int net__UdpConn_write_to_ptr(net__UdpConn* c, net__Addr addr, u8* b, int len) {
	int res = sendto(c->sock.Socket.handle, b, len, 0, ((voidptr)(&addr)), net__Addr_len(addr));
	if (res >= 0) {
		_result_int _t1 = {0};
		_result_ok(&(int[]) { res }, (_result*)(&_t1), sizeof(int));
		return _t1;
	}
	int code = net__error_code();
	if (code == ((int)(_const_net__error_ewouldblock))) {
		_result_void _t2 = net__UdpConn_wait_for_write(c);
		if (_t2.is_error) {
			_result_int _t3 = {0};
			_t3.is_error = true;
			_t3.err = _t2.err;
			return _t3;
		}
		
 ;
		_result_int _t4 = net__socket_error(sendto(c->sock.Socket.handle, b, len, 0, ((voidptr)(&addr)), net__Addr_len(addr)));
		if (_t4.is_error) {
			_result_int _t5 = {0};
			_t5.is_error = true;
			_t5.err = _t4.err;
			return _t5;
		}
		
 ;
	} else {
		_result_void _t6 = net__wrap_error(code);
		if (_t6.is_error) {
			_result_int _t7 = {0};
			_t7.is_error = true;
			_t7.err = _t6.err;
			return _t7;
		}
		
 ;
	}
	return (_result_int){ .is_error=true, .err=_v_error(_S("none")), .data={E_STRUCT} };
}
_result_time__Time net__UdpConn_write_deadline(net__UdpConn* c) {
	if (time__Time_unix(c->write_deadline) == 0) {
		_result_time__Time _t1 = {0};
		_result_ok(&(time__Time[]) { c->write_deadline }, (_result*)(&_t1), sizeof(time__Time));
		return _t1;
	}
	return (_result_time__Time){ .is_error=true, .err=_v_error(_S("none")), .data={E_STRUCT} };
}
time__Duration net__UdpConn_write_timeout(net__UdpConn* c) {
	return c->write_timeout;
}
inline _result_void net__UdpConn_wait_for_write(net__UdpConn* c) {
	return net__wait_for_write(c->sock.Socket.handle, c->write_deadline, c->write_timeout);
}
string net__UdpConn_str(net__UdpConn* c) {
	return _S("UdpConn");
}
_option_net__Addr net__UdpSocket_remote(net__UdpSocket* s) {
	if (s->has_r) {
		_option_net__Addr _t1;
		_option_ok(&(net__Addr[]) { s->r }, (_option*)(&_t1), sizeof(net__Addr));
		return _t1;
	}
	return (_option_net__Addr){ .state=2, .err=_const_none__, .data={E_STRUCT} };
}
_result_u16 net__validate_port(int port) {
	if (port >= 0 && port <= 0xFFFF) {
		_result_u16 _t1 = {0};
		_result_ok(&(u16[]) { ((u16)(port)) }, (_result*)(&_t1), sizeof(u16));
		return _t1;
	} else {
		return (_result_u16){ .is_error=true, .err=_const_net__err_port_out_of_range, .data={E_STRUCT} };
	}
	return (_result_u16){0};
}
_result_multi_return_string_u16 net__split_address(string addr) {
	_option_int _t1;
	_option_int _t2;
	_option_int _t3;
	if (_t1 = string_index(addr, _S("]")), _t1.state == 0) {
		string address = string_all_before_last(string_all_after(addr, _S("[")), _S("]"));
		int port = string_int(string_all_after_last(addr, _S("]:")));
		_result_u16 _t4 = net__validate_port(port);
		if (_t4.is_error) {
			_result_multi_return_string_u16 _t5 = {0};
			_t5.is_error = true;
			_t5.err = _t4.err;
			return _t5;
		}
		
 		u16 p = (*(u16*)_t4.data);
		_result_multi_return_string_u16 _t6;
		_result_ok(&(multi_return_string_u16[]) { (multi_return_string_u16){.arg0=address, .arg1=p} }, (_result*)(&_t6), sizeof(multi_return_string_u16));
		return _t6;
	} else if (_t2 = string_index(addr, _S("::")), _t2.state == 0) {
		if (string_count(addr, _S(":")) == 2 && (string_all_before_last(addr, _S("::"))).len == 0) {
			_result_multi_return_string_u16 _t7;
			_result_ok(&(multi_return_string_u16[]) { (multi_return_string_u16){.arg0=addr, .arg1=0} }, (_result*)(&_t7), sizeof(multi_return_string_u16));
			return _t7;
		} else {
			string address = string_all_before_last(addr, _S(":"));
			int port = string_int(string_all_after_last(addr, _S(":")));
			_result_u16 _t8 = net__validate_port(port);
			if (_t8.is_error) {
				_result_multi_return_string_u16 _t9 = {0};
				_t9.is_error = true;
				_t9.err = _t8.err;
				return _t9;
			}
			
 			u16 p = (*(u16*)_t8.data);
			_result_multi_return_string_u16 _t10;
			_result_ok(&(multi_return_string_u16[]) { (multi_return_string_u16){.arg0=address, .arg1=p} }, (_result*)(&_t10), sizeof(multi_return_string_u16));
			return _t10;
		}
	} else if (_t3 = string_index(addr, _S(":")), _t3.state == 0) {
		string address = string_all_before_last(addr, _S(":"));
		_result_u16 _t11 = net__validate_port(string_int(string_all_after_last(addr, _S(":"))));
		if (_t11.is_error) {
			_result_multi_return_string_u16 _t12 = {0};
			_t12.is_error = true;
			_t12.err = _t11.err;
			return _t12;
		}
		
 		u16 p = (*(u16*)_t11.data);
		_result_multi_return_string_u16 _t13;
		_result_ok(&(multi_return_string_u16[]) { (multi_return_string_u16){.arg0=address, .arg1=p} }, (_result*)(&_t13), sizeof(multi_return_string_u16));
		return _t13;
	} else {
		IError err = _t3.err;
		_result_multi_return_string_u16 _t14;
		_result_ok(&(multi_return_string_u16[]) { (multi_return_string_u16){.arg0=addr, .arg1=0} }, (_result*)(&_t14), sizeof(multi_return_string_u16));
		return _t14;
	}
	return (_result_multi_return_string_u16){0};
}
VV_LOC void net__mbedtls__init(void) {
	{ // Unsafe block
		mbedtls_ctr_drbg_init(&_const_net__mbedtls__ctr_drbg);
		mbedtls_entropy_init(&_const_net__mbedtls__entropy);
		int ret = mbedtls_ctr_drbg_seed(&_const_net__mbedtls__ctr_drbg, (voidptr)mbedtls_entropy_func, &_const_net__mbedtls__entropy, 0, 0);
		if (ret != 0) {
			mbedtls_ctr_drbg_free(&_const_net__mbedtls__ctr_drbg);
			_v_panic(str_intp(2, _MOV((StrIntpData[]){{_S("Failed to seed ssl context: "), 0xfe07, {.d_i32 = ret}}, {_SLIT0, 0, { .d_c = 0 }}})));
			VUNREACHABLE();
		}
	}
}
net__mbedtls__SSLCerts* net__mbedtls__new_sslcerts(void) {
	net__mbedtls__SSLCerts *certs = HEAP(net__mbedtls__SSLCerts, (((net__mbedtls__SSLCerts){E_STRUCT})));
	mbedtls_x509_crt_init(&(*(certs)).cacert);
	mbedtls_x509_crt_init(&(*(certs)).client_cert);
	mbedtls_pk_init(&(*(certs)).client_key);
	return &(*(certs));
}
_result_net__mbedtls__SSLCerts_ptr net__mbedtls__new_sslcerts_in_memory(string verify, string cert, string cert_key) {
	net__mbedtls__SSLCerts* certs = net__mbedtls__new_sslcerts();
	if ((verify).len != 0) {
		int ret = mbedtls_x509_crt_parse(&certs->cacert, verify.str, (int)(verify.len + 1));
		if (ret != 0) {
			return (_result_net__mbedtls__SSLCerts_ptr){ .is_error=true, .err=error_with_code(_S("mbedtls_x509_crt_parse error"), ret), .data={E_STRUCT} };
		}
	}
	if ((cert).len != 0) {
		int ret = mbedtls_x509_crt_parse(&certs->client_cert, cert.str, (int)(cert.len + 1));
		if (ret != 0) {
			return (_result_net__mbedtls__SSLCerts_ptr){ .is_error=true, .err=error_with_code(_S("mbedtls_x509_crt_parse error"), ret), .data={E_STRUCT} };
		}
	}
	if ((cert_key).len != 0) {
		{ // Unsafe block
			int ret = mbedtls_pk_parse_key(&certs->client_key, cert_key.str, (int)(cert_key.len + 1), 0, 0, (voidptr)mbedtls_ctr_drbg_random, &_const_net__mbedtls__ctr_drbg);
			if (ret != 0) {
				return (_result_net__mbedtls__SSLCerts_ptr){ .is_error=true, .err=error_with_code(_S("v error"), ret), .data={E_STRUCT} };
			}
		}
	}
	_result_net__mbedtls__SSLCerts_ptr _t4 = {0};
	_result_ok(&(net__mbedtls__SSLCerts*[]) { certs }, (_result*)(&_t4), sizeof(net__mbedtls__SSLCerts*));
	return _t4;
}
_result_net__mbedtls__SSLCerts_ptr net__mbedtls__new_sslcerts_from_file(string verify, string cert, string cert_key) {
	net__mbedtls__SSLCerts* certs = net__mbedtls__new_sslcerts();
	if ((verify).len != 0) {
		int ret = mbedtls_x509_crt_parse_file(&certs->cacert, ((char*)(verify.str)));
		if (ret != 0) {
			return (_result_net__mbedtls__SSLCerts_ptr){ .is_error=true, .err=error_with_code(_S("mbedtls_x509_crt_parse error"), ret), .data={E_STRUCT} };
		}
	}
	if ((cert).len != 0) {
		int ret = mbedtls_x509_crt_parse_file(&certs->client_cert, ((char*)(cert.str)));
		if (ret != 0) {
			return (_result_net__mbedtls__SSLCerts_ptr){ .is_error=true, .err=error_with_code(_S("mbedtls_x509_crt_parse error"), ret), .data={E_STRUCT} };
		}
	}
	if ((cert_key).len != 0) {
		{ // Unsafe block
			int ret = mbedtls_pk_parse_keyfile(&certs->client_key, ((char*)(cert_key.str)), 0, (voidptr)mbedtls_ctr_drbg_random, &_const_net__mbedtls__ctr_drbg);
			if (ret != 0) {
				return (_result_net__mbedtls__SSLCerts_ptr){ .is_error=true, .err=error_with_code(_S("v error"), ret), .data={E_STRUCT} };
			}
		}
	}
	_result_net__mbedtls__SSLCerts_ptr _t4 = {0};
	_result_ok(&(net__mbedtls__SSLCerts*[]) { certs }, (_result*)(&_t4), sizeof(net__mbedtls__SSLCerts*));
	return _t4;
}
void net__mbedtls__SSLCerts_cleanup(net__mbedtls__SSLCerts* c) {
	mbedtls_x509_crt_free(&c->cacert);
	mbedtls_x509_crt_free(&c->client_cert);
	mbedtls_pk_free(&c->client_key);
}
VV_LOC _result_void net__mbedtls__SSLListener_init(net__mbedtls__SSLListener* l) {
	_result_multi_return_string_u16 _t1 = net__split_address(l->saddr);
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 	multi_return_string_u16 mr_4417 = (*(multi_return_string_u16*)_t1.data);
	string lhost = mr_4417.arg0;
	u16 lport = mr_4417.arg1;
	if ((l->config.cert).len == 0 || (l->config.cert_key).len == 0) {
		return (_result_void){ .is_error=true, .err=_v_error(_S("No certificate or key provided")), .data={E_STRUCT} };
	}
	if (l->config.validate && (l->config.verify).len == 0) {
		return (_result_void){ .is_error=true, .err=_v_error(_S("No root CA provided")), .data={E_STRUCT} };
	}
	mbedtls_net_init(&l->server_fd);
	mbedtls_ssl_init(&l->ssl);
	mbedtls_ssl_config_init(&l->conf);
	mbedtls_ssl_conf_read_timeout(&l->conf, _const_net__mbedtls__mbedtls_server_read_timeout_ms);
	l->certs = ((net__mbedtls__SSLCerts*)memdup(&(net__mbedtls__SSLCerts){E_STRUCT}, sizeof(net__mbedtls__SSLCerts)));
	mbedtls_x509_crt_init(&l->certs->client_cert);
	mbedtls_pk_init(&l->certs->client_key);
	mbedtls_ssl_conf_rng(&l->conf, (voidptr)mbedtls_ctr_drbg_random, &_const_net__mbedtls__ctr_drbg);
	int ret = 0;
	if (l->config.in_memory_verification) {
		_result_net__mbedtls__SSLCerts_ptr _t5 = net__mbedtls__new_sslcerts_in_memory(l->config.verify, l->config.cert, l->config.cert_key);
		if (_t5.is_error) {
			IError err = _t5.err;
			return (_result_void){ .is_error=true, .err=_v_error(_S("Cert failure")), .data={E_STRUCT} };
		}
		
 		l->certs = (*(net__mbedtls__SSLCerts**)_t5.data);
	} else {
		_result_net__mbedtls__SSLCerts_ptr _t7 = net__mbedtls__new_sslcerts_from_file(l->config.verify, l->config.cert, l->config.cert_key);
		if (_t7.is_error) {
			IError err = _t7.err;
			return (_result_void){ .is_error=true, .err=_v_error(_S("Cert failure")), .data={E_STRUCT} };
		}
		
 		l->certs = (*(net__mbedtls__SSLCerts**)_t7.data);
	}
	if (l->config.validate) {
		mbedtls_ssl_conf_authmode(&l->conf, MBEDTLS_SSL_VERIFY_REQUIRED);
	}
	voidptr bind_ip = ((void*)0);
	if ((lhost).len != 0) {
		bind_ip = ((voidptr)(lhost.str));
	}
	string bind_port = u16_str(lport);
	ret = mbedtls_net_bind(&l->server_fd, bind_ip, ((voidptr)(bind_port.str)), MBEDTLS_NET_PROTO_TCP);
	if (ret != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(str_intp(2, _MOV((StrIntpData[]){{_S("can't bind to "), 0xfe10, {.d_s = l->saddr}}, {_SLIT0, 0, { .d_c = 0 }}})), ret), .data={E_STRUCT} };
	}
	ret = mbedtls_ssl_config_defaults(&l->conf, MBEDTLS_SSL_IS_SERVER, MBEDTLS_SSL_TRANSPORT_STREAM, MBEDTLS_SSL_PRESET_DEFAULT);
	if (ret != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(_S("can't to set config defaults"), ret), .data={E_STRUCT} };
	}
	mbedtls_ssl_conf_ca_chain(&l->conf, &l->certs->cacert, ((void*)0));
	ret = mbedtls_ssl_conf_own_cert(&l->conf, &l->certs->client_cert, &l->certs->client_key);
	if (ret != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(_S("can't load certificate"), ret), .data={E_STRUCT} };
	}
	ret = mbedtls_ssl_setup(&l->ssl, &l->conf);
	if (ret != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(_S("can't setup ssl"), ret), .data={E_STRUCT} };
	}
	_option_anon_fn_mut_net__mbedtls__ssllistener_string__result_net__mbedtls__SSLCerts _t13;
	if (_t13 = l->config.get_certificate, _t13.state == 0) {
		anon_fn_mut_net__mbedtls__ssllistener_string__result_net__mbedtls__SSLCerts get_cert_callback = *(anon_fn_mut_net__mbedtls__ssllistener_string__result_net__mbedtls__SSLCerts*)_t13.data;
		net__mbedtls__SSLListener_init_sni(l, (voidptr)get_cert_callback);
	}
	return (_result_void){0};
}
VV_LOC void net__mbedtls__SSLListener_init_sni(net__mbedtls__SSLListener* l, _result_net__mbedtls__SSLCerts_ptr (*get_cert_callback)(net__mbedtls__SSLListener* , string )) {
	mbedtls_ssl_conf_sni(&l->conf, (voidptr)	__closure_create(anon_fn_51e955ba27ff4810_voidptr_c__mbedtls_ssl_context_char_int__int_6734, (struct _V_anon_fn_51e955ba27ff4810_voidptr_c__mbedtls_ssl_context_char_int__int_6734_Ctx*) memdup_uncollectable(&(struct _V_anon_fn_51e955ba27ff4810_voidptr_c__mbedtls_ssl_context_char_int__int_6734_Ctx){.get_cert_callback = get_cert_callback,
		.l = l,
	}, sizeof(struct _V_anon_fn_51e955ba27ff4810_voidptr_c__mbedtls_ssl_context_char_int__int_6734_Ctx))), &l->conf);
}
_result_net__mbedtls__SSLConn_ptr net__mbedtls__new_ssl_conn(net__mbedtls__SSLConnectConfig config) {
	net__mbedtls__SSLConn* conn = ((net__mbedtls__SSLConn*)memdup(&(net__mbedtls__SSLConn){.config = config,.server_fd = {0},.certs = ((void*)0),.handle = 0,.duration = 0,.opened = 0,.ip = (string){.str=(byteptr)"", .is_lit=1},.owns_socket = 0,}, sizeof(net__mbedtls__SSLConn)));
	_result_void _t1 = net__mbedtls__SSLConn_init(conn);
	if (_t1.is_error) {
		IError err = _t1.err;
		return (_result_net__mbedtls__SSLConn_ptr){ .is_error=true, .err=err, .data={E_STRUCT} };
	}
	
 ;
	_result_net__mbedtls__SSLConn_ptr _t3 = {0};
	_result_ok(&(net__mbedtls__SSLConn*[]) { conn }, (_result*)(&_t3), sizeof(net__mbedtls__SSLConn*));
	return _t3;
}
_result_void net__mbedtls__SSLConn_close(net__mbedtls__SSLConn* s) {
	_result_void _t1 = net__mbedtls__SSLConn_shutdown(s);
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 ;
	return (_result_void){0};
}
_result_void net__mbedtls__SSLConn_shutdown(net__mbedtls__SSLConn* s) {
	if (!s->opened) {
		return (_result_void){ .is_error=true, .err=_v_error(_S("ssl connection not open")), .data={E_STRUCT} };
	}
	if (s->certs != ((void*)0)) {
		mbedtls_x509_crt_free(&s->certs->cacert);
		mbedtls_x509_crt_free(&s->certs->client_cert);
		mbedtls_pk_free(&s->certs->client_key);
	}
	mbedtls_ssl_free(&s->ssl);
	mbedtls_ssl_config_free(&s->conf);
	if (s->owns_socket) {
		net__shutdown(s->handle, ((net__ShutdownConfig){.how = net__ShutdownDirection__read_and_write,}));
		_result_void _t2 = net__close(s->handle);
		if (_t2.is_error) {
			_result_void _t3 = {0};
			_t3.is_error = true;
			_t3.err = _t2.err;
			return _t3;
		}
		
 ;
	}
	return (_result_void){0};
}
VV_LOC _result_void net__mbedtls__SSLConn_init(net__mbedtls__SSLConn* s) {
	mbedtls_net_init(&s->server_fd);
	mbedtls_ssl_init(&s->ssl);
	mbedtls_ssl_config_init(&s->conf);
	int ret = 0;
	ret = mbedtls_ssl_config_defaults(&s->conf, MBEDTLS_SSL_IS_CLIENT, MBEDTLS_SSL_TRANSPORT_STREAM, MBEDTLS_SSL_PRESET_DEFAULT);
	if (ret != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(_S("Failed to set SSL configuration"), ret), .data={E_STRUCT} };
	}
	mbedtls_ssl_conf_read_timeout(&s->conf, _const_net__mbedtls__mbedtls_client_read_timeout_ms);
	mbedtls_ssl_conf_rng(&s->conf, (voidptr)mbedtls_ctr_drbg_random, &_const_net__mbedtls__ctr_drbg);
	if ((s->config.verify).len != 0 || (s->config.cert).len != 0 || (s->config.cert_key).len != 0) {
		s->certs = ((net__mbedtls__SSLCerts*)memdup(&(net__mbedtls__SSLCerts){E_STRUCT}, sizeof(net__mbedtls__SSLCerts)));
		mbedtls_x509_crt_init(&s->certs->cacert);
		mbedtls_x509_crt_init(&s->certs->client_cert);
		mbedtls_pk_init(&s->certs->client_key);
	}
	if (s->config.in_memory_verification) {
		if ((s->config.verify).len != 0) {
			ret = mbedtls_x509_crt_parse(&s->certs->cacert, s->config.verify.str, (int)(s->config.verify.len + 1));
		}
		if ((s->config.cert).len != 0) {
			ret = mbedtls_x509_crt_parse(&s->certs->client_cert, s->config.cert.str, (int)(s->config.cert.len + 1));
		}
		if ((s->config.cert_key).len != 0) {
			{ // Unsafe block
				ret = mbedtls_pk_parse_key(&s->certs->client_key, s->config.cert_key.str, (int)(s->config.cert_key.len + 1), 0, 0, (voidptr)mbedtls_ctr_drbg_random, &_const_net__mbedtls__ctr_drbg);
			}
		}
	} else {
		if ((s->config.verify).len != 0) {
			ret = mbedtls_x509_crt_parse_file(&s->certs->cacert, ((char*)(s->config.verify.str)));
		}
		if ((s->config.cert).len != 0) {
			ret = mbedtls_x509_crt_parse_file(&s->certs->client_cert, ((char*)(s->config.cert.str)));
		}
		if ((s->config.cert_key).len != 0) {
			{ // Unsafe block
				ret = mbedtls_pk_parse_keyfile(&s->certs->client_key, ((char*)(s->config.cert_key.str)), 0, (voidptr)mbedtls_ctr_drbg_random, &_const_net__mbedtls__ctr_drbg);
			}
		}
	}
	if (ret < 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(_S("Failed to set certificates"), ret), .data={E_STRUCT} };
	}
	if (s->certs != ((void*)0)) {
		mbedtls_ssl_conf_ca_chain(&s->conf, &s->certs->cacert, 0);
		mbedtls_ssl_conf_own_cert(&s->conf, &s->certs->client_cert, &s->certs->client_key);
	}
	if (s->config.validate) {
		mbedtls_ssl_conf_authmode(&s->conf, MBEDTLS_SSL_VERIFY_REQUIRED);
	} else {
		mbedtls_ssl_conf_authmode(&s->conf, MBEDTLS_SSL_VERIFY_OPTIONAL);
	}
	ret = mbedtls_ssl_setup(&s->ssl, &s->conf);
	if (ret != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(_S("Failed to setup SSL connection"), ret), .data={E_STRUCT} };
	}
	return (_result_void){0};
}
_result_void net__mbedtls__SSLConn_connect(net__mbedtls__SSLConn* s, net__TcpConn* tcp_conn, string hostname) {
	if (s->opened) {
		return (_result_void){ .is_error=true, .err=_v_error(_S("ssl connection already open")), .data={E_STRUCT} };
	}
	s->handle = tcp_conn->sock.Socket.handle;
	s->duration = 30 * _const_time__second;
	int ret = mbedtls_ssl_set_hostname(&s->ssl, ((char*)(hostname.str)));
	if (ret != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(_S("Failed to set hostname"), ret), .data={E_STRUCT} };
	}
	s->server_fd.fd = s->handle;
	mbedtls_ssl_set_bio(&s->ssl, &s->server_fd, mbedtls_net_send, mbedtls_net_recv, mbedtls_net_recv_timeout);
	ret = mbedtls_ssl_handshake(&s->ssl);
	if (ret != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(_S("SSL handshake failed"), ret), .data={E_STRUCT} };
	}
	s->opened = true;
	return (_result_void){0};
}
_result_void net__mbedtls__SSLConn_dial(net__mbedtls__SSLConn* s, string hostname, int port) {
	s->owns_socket = true;
	if (s->opened) {
		return (_result_void){ .is_error=true, .err=_v_error(_S("ssl connection already open")), .data={E_STRUCT} };
	}
	s->duration = 30 * _const_time__second;
	int ret = mbedtls_ssl_set_hostname(&s->ssl, ((char*)(hostname.str)));
	if (ret != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(_S("Failed to set hostname"), ret), .data={E_STRUCT} };
	}
	string port_str = int_str(port);
	ret = mbedtls_net_connect(&s->server_fd, ((char*)(hostname.str)), ((char*)(port_str.str)), MBEDTLS_NET_PROTO_TCP);
	if (ret != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(_S("Failed to connect to host"), ret), .data={E_STRUCT} };
	}
	mbedtls_ssl_set_bio(&s->ssl, &s->server_fd, mbedtls_net_send, mbedtls_net_recv, mbedtls_net_recv_timeout);
	s->handle = s->server_fd.fd;
	ret = mbedtls_ssl_handshake(&s->ssl);
	if (ret != 0) {
		return (_result_void){ .is_error=true, .err=error_with_code(_S("SSL handshake failed"), ret), .data={E_STRUCT} };
	}
	s->opened = true;
	return (_result_void){0};
}
_result_net__Addr net__mbedtls__SSLConn_addr(net__mbedtls__SSLConn* s) {
	_result_net__Addr _t1 = {0};
	_result_ok(&(net__Addr[]) { net__addr_from_socket_handle(s->handle) }, (_result*)(&_t1), sizeof(net__Addr));
	return _t1;
}
_result_net__Addr net__mbedtls__SSLConn_peer_addr(net__mbedtls__SSLConn* s) {
	return net__peer_addr_from_socket_handle(s->handle);
}
_result_int net__mbedtls__SSLConn_socket_read_into_ptr(net__mbedtls__SSLConn* s, u8* buf_ptr, int len) {
	int res = 0;
	time__Time deadline = time__Time_add(time__now(), s->duration);
	for (;;) {
		res = mbedtls_ssl_read(&s->ssl, buf_ptr, len);
		if (res > 0) {
			_result_int _t1 = {0};
			_result_ok(&(int[]) { res }, (_result*)(&_t1), sizeof(int));
			return _t1;
		} else if (res == 0) {
			return (_result_int){ .is_error=true, .err=I_io__Eof_to_Interface_IError(((io__Eof*)memdup(&(io__Eof){.Error = ((Error){E_STRUCT}),}, sizeof(io__Eof)))), .data={E_STRUCT} };
		} else {

			if (res == (MBEDTLS_ERR_SSL_WANT_READ)) {
				_result_void _t3 = net__mbedtls__SSLConn_wait_for_read(s, time__Time__minus(deadline, time__now()));
				if (_t3.is_error) {
					IError err = _t3.err;
					return (_result_int){ .is_error=true, .err=err, .data={E_STRUCT} };
				}
				
 ;
			}
			else if (res == (MBEDTLS_ERR_SSL_WANT_WRITE)) {
				_result_void _t5 = net__mbedtls__SSLConn_wait_for_write(s, time__Time__minus(deadline, time__now()));
				if (_t5.is_error) {
					IError err = _t5.err;
					return (_result_int){ .is_error=true, .err=err, .data={E_STRUCT} };
				}
				
 ;
			}
			else if (res == (MBEDTLS_ERR_SSL_PEER_CLOSE_NOTIFY)) {
				_result_int _t7 = {0};
				_result_ok(&(int[]) { 0 }, (_result*)(&_t7), sizeof(int));
				return _t7;
			}
			else {
				return (_result_int){ .is_error=true, .err=error_with_code(_S("Could not read using SSL"), res), .data={E_STRUCT} };
			}
		}
	}
	return (_result_int){ .is_error=true, .err=_v_error(_S("Unknown error")), .data={E_STRUCT} };
}
_result_int net__mbedtls__SSLConn_read(net__mbedtls__SSLConn* s, Array_u8* buffer) {
	return net__mbedtls__SSLConn_socket_read_into_ptr(s, ((u8*)(buffer->data)), buffer->len);
}
_result_int net__mbedtls__SSLConn_write_ptr(net__mbedtls__SSLConn* s, u8* bytes, int len) {
	int total_sent = 0;
	time__Time deadline = time__Time_add(time__now(), s->duration);
	{ // Unsafe block
		u8* ptr_base = bytes;
		for (;;) {
			if (!(total_sent < len)) break;
			u8* ptr = ptr_base + total_sent;
			int remaining = (int)(len - total_sent);
			int sent = mbedtls_ssl_write(&s->ssl, ptr, remaining);
			if (sent <= 0) {

				if (sent == (MBEDTLS_ERR_SSL_WANT_READ)) {
					_result_void _t1 = net__mbedtls__SSLConn_wait_for_read(s, time__Time__minus(deadline, time__now()));
					if (_t1.is_error) {
						_result_int _t2 = {0};
						_t2.is_error = true;
						_t2.err = _t1.err;
						return _t2;
					}
					
 ;
					continue;
				}
				else if (sent == (MBEDTLS_ERR_SSL_WANT_WRITE)) {
					_result_void _t3 = net__mbedtls__SSLConn_wait_for_write(s, time__Time__minus(deadline, time__now()));
					if (_t3.is_error) {
						_result_int _t4 = {0};
						_t4.is_error = true;
						_t4.err = _t3.err;
						return _t4;
					}
					
 ;
					continue;
				}
				else {
					return (_result_int){ .is_error=true, .err=error_with_code(_S("Could not write using SSL"), sent), .data={E_STRUCT} };
				}
			}
			total_sent += sent;
		}
	}
	_result_int _t6 = {0};
	_result_ok(&(int[]) { total_sent }, (_result*)(&_t6), sizeof(int));
	return _t6;
}
_result_int net__mbedtls__SSLConn_write(net__mbedtls__SSLConn* s, Array_u8 bytes) {
	return net__mbedtls__SSLConn_write_ptr(s, ((u8*)(bytes.data)), bytes.len);
}
_result_int net__mbedtls__SSLConn_write_string(net__mbedtls__SSLConn* s, string str) {
	return net__mbedtls__SSLConn_write_ptr(s, str.str, str.len);
}
VV_LOC _result_bool net__mbedtls__select(int handle, net__mbedtls__Select test, time__Duration timeout) {
	fd_set set = ((fd_set){E_STRUCT});
	FD_ZERO(&set);
	FD_SET(handle, &set);
	time__Time deadline = time__Time_add(time__now(), timeout);
	i64 remaining_time = time__Duration_milliseconds(timeout);
	for (;;) {
		if (!(remaining_time > 0)) break;
		i64 seconds = (i64)(remaining_time / 1000);
		i64 microseconds = (i64)(((i64)(remaining_time % 1000)) * 1000);
		struct timeval *tt = HEAP(struct timeval, (((struct timeval){.tv_sec = ((u64)(seconds)),.tv_usec = ((u64)(microseconds)),})));
		struct timeval* timeval_timeout = (timeout < 0 ? (((struct timeval*)(((void*)0)))) : (&(*(tt))));
		int res = -1;

		if (test == (net__mbedtls__Select__read)) {
			_result_int _t1 = net__socket_error(select((int)(handle + 1), &set, NULL, NULL, timeval_timeout));
			if (_t1.is_error) {
				_result_bool _t2 = {0};
				_t2.is_error = true;
				_t2.err = _t1.err;
				return _t2;
			}
			
 			res = (*(int*)_t1.data);
		}
		else if (test == (net__mbedtls__Select__write)) {
			_result_int _t3 = net__socket_error(select((int)(handle + 1), NULL, &set, NULL, timeval_timeout));
			if (_t3.is_error) {
				_result_bool _t4 = {0};
				_t4.is_error = true;
				_t4.err = _t3.err;
				return _t4;
			}
			
 			res = (*(int*)_t3.data);
		}
		else if (test == (net__mbedtls__Select__except)) {
			_result_int _t5 = net__socket_error(select((int)(handle + 1), NULL, NULL, &set, timeval_timeout));
			if (_t5.is_error) {
				_result_bool _t6 = {0};
				_t6.is_error = true;
				_t6.err = _t5.err;
				return _t6;
			}
			
 			res = (*(int*)_t5.data);
		}
		if (res < 0) {
			if (errno == EINTR) {
				remaining_time = time__Duration_milliseconds((time__Time__minus(deadline, time__now())));
				continue;
			}
			return (_result_bool){ .is_error=true, .err=error_with_code(str_intp(2, _MOV((StrIntpData[]){{_S("Select failed: "), 0xfe07, {.d_i32 = res}}, {_SLIT0, 0, { .d_c = 0 }}})), errno), .data={E_STRUCT} };
		} else if (res == 0) {
			return (_result_bool){ .is_error=true, .err=_const_net__err_timed_out, .data={E_STRUCT} };
		}
		res = FD_ISSET(handle, &set);
		_result_bool _t9 = {0};
		_result_ok(&(bool[]) { res != 0 }, (_result*)(&_t9), sizeof(bool));
		return _t9;
	}
	return (_result_bool){ .is_error=true, .err=_const_net__err_timed_out, .data={E_STRUCT} };
}
VV_LOC _result_void net__mbedtls__wait_for(int handle, net__mbedtls__Select what, time__Duration timeout) {
	_result_bool _t1 = net__mbedtls__select(handle, what, timeout);
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 	bool ready = (*(bool*)_t1.data);
	if (ready) {
		return (_result_void){0};
	}
	return (_result_void){ .is_error=true, .err=_const_net__err_timed_out, .data={E_STRUCT} };
}
VV_LOC _result_void net__mbedtls__SSLConn_wait_for_write(net__mbedtls__SSLConn* s, time__Duration timeout) {
	return net__mbedtls__wait_for(s->handle, net__mbedtls__Select__write, timeout);
}
VV_LOC _result_void net__mbedtls__SSLConn_wait_for_read(net__mbedtls__SSLConn* s, time__Duration timeout) {
	return net__mbedtls__wait_for(s->handle, net__mbedtls__Select__read, timeout);
}
_result_net__Connection net__ssl__SSLDialer_dial(net__ssl__SSLDialer d, string address) {
	_result_net__ssl__SSLConn_ptr _t2 = net__ssl__new_ssl_conn(d.config);
	if (_t2.is_error) {
		_result_net__Connection _t3 = {0};
		_t3.is_error = true;
		_t3.err = _t2.err;
		return _t3;
	}
	
 	_result_net__Connection _t1 = {0};
	_result_ok(&(net__Connection[]) { I_net__ssl__SSLConn_to_Interface_net__Connection((*(net__ssl__SSLConn**)_t2.data)) }, (_result*)(&_t1), sizeof(net__Connection));
	return _t1;
}
_result_net__ssl__SSLConn_ptr net__ssl__new_ssl_conn(net__ssl__SSLConnectConfig config) {
	_result_net__mbedtls__SSLConn_ptr _t1 = net__mbedtls__new_ssl_conn(config.SSLConnectConfig);
	if (_t1.is_error) {
		IError err = _t1.err;
		return (_result_net__ssl__SSLConn_ptr){ .is_error=true, .err=err, .data={E_STRUCT} };
	}
	
 	net__mbedtls__SSLConn* c = (*(net__mbedtls__SSLConn**)_t1.data);
	_result_net__ssl__SSLConn_ptr _t3 = {0};
	_result_ok(&(net__ssl__SSLConn*[]) { ((net__ssl__SSLConn*)memdup(&(net__ssl__SSLConn){.SSLConn = *c,}, sizeof(net__ssl__SSLConn))) }, (_result*)(&_t3), sizeof(net__ssl__SSLConn*));
	return _t3;
}
_result_net__Connection net__socks__SOCKS5Dialer_dial(net__socks__SOCKS5Dialer sd, string address) {
	_result_net__Connection _t1 = net__Dialer_name_table[sd.dialer._typ]._method_dial(sd.dialer._object, sd.proxy_address);
	if (_t1.is_error) {
		_result_net__Connection _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 	net__Connection conn = (*(net__Connection*)_t1.data);
	_result_net__Connection _t4 = net__socks__handshake(&conn, address, sd.username, sd.password);
	if (_t4.is_error) {
		_result_net__Connection _t5 = {0};
		_t5.is_error = true;
		_t5.err = _t4.err;
		return _t5;
	}
	
 	_result_net__Connection _t3 = {0};
	_result_ok(&(net__Connection[]) { (*(net__Connection*)_t4.data) }, (_result*)(&_t3), sizeof(net__Connection));
	return _t3;
}
VV_LOC _result_net__Connection net__socks__handshake(net__Connection* con, string host, string username, string password) {
	Array_u8 v = new_array_from_c_array_noscan(2, 2, sizeof(u8), _MOV((u8[2]){_const_net__socks__socks_version5, 1}));
	if (username.len > 0) {
		array_push_noscan((array*)&v, _MOV((u8[]){ _const_net__socks__auth_user_password }));
	} else {
		array_push_noscan((array*)&v, _MOV((u8[]){ _const_net__socks__no_auth }));
	}
	_result_int _t3 = net__Connection_name_table[con->_typ]._method_write(con->_object, v);
	if (_t3.is_error) {
		_result_net__Connection _t4 = {0};
		_t4.is_error = true;
		_t4.err = _t3.err;
		return _t4;
	}
	
 ;
	Array_u8 bf = __new_array_with_default_noscan(2, 0, sizeof(u8), 0);
	_result_int _t5 = net__Connection_name_table[con->_typ]._method_read(con->_object, &bf);
	if (_t5.is_error) {
		_result_net__Connection _t6 = {0};
		_t6.is_error = true;
		_t6.err = _t5.err;
		return _t6;
	}
	
 ;
	if ((*(u8*)array_get(bf, 0)) != _const_net__socks__socks_version5) {
		_result_void _t7 = net__Connection_name_table[con->_typ]._method_close(con->_object);
		if (_t7.is_error) {
			_result_net__Connection _t8 = {0};
			_t8.is_error = true;
			_t8.err = _t7.err;
			return _t8;
		}
		
 ;
		return (_result_net__Connection){ .is_error=true, .err=_v_error(str_intp(2, _MOV((StrIntpData[]){{_S("unexpected protocol version "), 0xfe02, {.d_u8 = (*(u8*)array_get(bf, 0))}}, {_SLIT0, 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
	}
	if (username.len == 0) {
		if ((*(u8*)array_get(bf, 1)) != 0) {
			_result_void _t10 = net__Connection_name_table[con->_typ]._method_close(con->_object);
			if (_t10.is_error) {
				_result_net__Connection _t11 = {0};
				_t11.is_error = true;
				_t11.err = _t10.err;
				return _t11;
			}
			
 ;
			return (_result_net__Connection){ .is_error=true, .err=_v_error(net__socks__reply((*(u8*)array_get(bf, 1)))), .data={E_STRUCT} };
		}
	}
	if (username.len > 0) {
		array_clear(&v);
		array_push_noscan((array*)&v, _MOV((u8[]){ ((u8)(1)) }));
		array_push_noscan((array*)&v, _MOV((u8[]){ ((u8)(username.len)) }));
		_PUSH_MANY_noscan(&v, (string_bytes(username)), _t15, Array_u8);
		array_push_noscan((array*)&v, _MOV((u8[]){ ((u8)(password.len)) }));
		_PUSH_MANY_noscan(&v, (string_bytes(password)), _t17, Array_u8);
		_result_int _t18 = net__Connection_name_table[con->_typ]._method_write(con->_object, v);
		if (_t18.is_error) {
			_result_net__Connection _t19 = {0};
			_t19.is_error = true;
			_t19.err = _t18.err;
			return _t19;
		}
		
 ;
		Array_u8 resp = __new_array_with_default_noscan(2, 0, sizeof(u8), 0);
		_result_int _t20 = net__Connection_name_table[con->_typ]._method_read(con->_object, &resp);
		if (_t20.is_error) {
			_result_net__Connection _t21 = {0};
			_t21.is_error = true;
			_t21.err = _t20.err;
			return _t21;
		}
		
 ;
		if ((*(u8*)array_get(resp, 0)) != 1) {
			_result_void _t22 = net__Connection_name_table[con->_typ]._method_close(con->_object);
			if (_t22.is_error) {
				_result_net__Connection _t23 = {0};
				_t23.is_error = true;
				_t23.err = _t22.err;
				return _t23;
			}
			
 ;
			return (_result_net__Connection){ .is_error=true, .err=_v_error(_S("server does not support user/password version 1")), .data={E_STRUCT} };
		} else if ((*(u8*)array_get(resp, 1)) != 0) {
			_result_void _t25 = net__Connection_name_table[con->_typ]._method_close(con->_object);
			if (_t25.is_error) {
				_result_net__Connection _t26 = {0};
				_t26.is_error = true;
				_t26.err = _t25.err;
				return _t26;
			}
			
 ;
			return (_result_net__Connection){ .is_error=true, .err=_v_error(_S("user/password login failed")), .data={E_STRUCT} };
		}
	}
	array_clear(&v);
	v = new_array_from_c_array_noscan(3, 3, sizeof(u8), _MOV((u8[3]){_const_net__socks__socks_version5, 1, 0}));
	u64 port = string_u64(string_all_after_last(host, _S(":")));
	if (port == 0U) {
		port = ((u64)(80U));
	}
	string address = string_all_before_last(host, _S(":"));
	if (string_contains_only(address, _S(".1234567890"))) {
		array_push_noscan((array*)&v, _MOV((u8[]){ _const_net__socks__addr_type_ipv4 }));
		_result_Array_u8 _t30 = net__socks__parse_ipv4(address);
		if (_t30.is_error) {
			_result_net__Connection _t31 = {0};
			_t31.is_error = true;
			_t31.err = _t30.err;
			return _t31;
		}
		
 		_PUSH_MANY_noscan(&v, ((*(Array_u8*)_t30.data)), _t29, Array_u8);
	} else if (string_contains_only(address, _S(":1234567890abcdf"))) {
	} else {
		if (address.len > 255) {
			return (_result_net__Connection){ .is_error=true, .err=_v_error(str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = address}}, {_S(" is too long"), 0, { .d_c = 0 }}}))), .data={E_STRUCT} };
		} else {
			array_push_noscan((array*)&v, _MOV((u8[]){ _const_net__socks__addr_type_fqdn }));
			array_push_noscan((array*)&v, _MOV((u8[]){ ((u8)(address.len)) }));
			_PUSH_MANY_noscan(&v, (string_bytes(address)), _t35, Array_u8);
		}
	}
	array_push_noscan((array*)&v, _MOV((u8[]){ ((u8)((port >> 8U))) }));
	array_push_noscan((array*)&v, _MOV((u8[]){ ((u8)(port)) }));
	_result_int _t38 = net__Connection_name_table[con->_typ]._method_write(con->_object, v);
	if (_t38.is_error) {
		_result_net__Connection _t39 = {0};
		_t39.is_error = true;
		_t39.err = _t38.err;
		return _t39;
	}
	
 ;
	Array_u8 bff = __new_array_with_default_noscan(v.len, 0, sizeof(u8), 0);
	_result_int _t40 = net__Connection_name_table[con->_typ]._method_read(con->_object, &bff);
	if (_t40.is_error) {
		_result_net__Connection _t41 = {0};
		_t41.is_error = true;
		_t41.err = _t40.err;
		return _t41;
	}
	
 ;
	if ((*(u8*)array_get(bff, 1)) != 0) {
		_result_void _t42 = net__Connection_name_table[con->_typ]._method_close(con->_object);
		if (_t42.is_error) {
			_result_net__Connection _t43 = {0};
			_t43.is_error = true;
			_t43.err = _t42.err;
			return _t43;
		}
		
 ;
		return (_result_net__Connection){ .is_error=true, .err=_v_error(net__socks__reply((*(u8*)array_get(bff, 1)))), .data={E_STRUCT} };
	}
	_result_net__Connection _t45 = {0};
	_result_ok(&(net__Connection[]) { *con }, (_result*)(&_t45), sizeof(net__Connection));
	return _t45;
}
VV_LOC string net__socks__reply(u8 code) {
	switch (code) {
		case 0: {
			return _S("succeeded");
		}
		case 1: {
			return _S("general SOCKS server failure");
		}
		case 2: {
			return _S("connection not allowed by ruleset");
		}
		case 3: {
			return _S("network unreachable");
		}
		case 4: {
			return _S("host unreachable");
		}
		case 5: {
			return _S("connection refused");
		}
		case 6: {
			return _S("TTL expired");
		}
		case 7: {
			return _S("command not supported");
		}
		case 8: {
			return _S("address type not supported");
		}
		default: {
			{
				return str_intp(2, _MOV((StrIntpData[]){{_S("unknown code: "), 0xfe02, {.d_u8 = code}}, {_SLIT0, 0, { .d_c = 0 }}}));
			}
		}
	}
	
	return (string){.str=(byteptr)"", .is_lit=1};
}
VV_LOC _result_Array_u8 net__socks__parse_ipv4(string addr) {
	Array_u8 ip = __new_array_with_default_noscan(0, 0, sizeof(u8), 0);
	Array_string _t1 = string_split(addr, _S("."));
	for (int _t2 = 0; _t2 < _t1.len; ++_t2) {
		string part = ((string*)_t1.data)[_t2];
		array_push_noscan((array*)&ip, _MOV((u8[]){ string_u8(part) }));
	}
	_result_Array_u8 _t4 = {0};
	_result_ok(&(Array_u8[]) { ip }, (_result*)(&_t4), sizeof(Array_u8));
	return _t4;
}
#if defined(_VGCBOEHM)
#endif
string net__http__Cookie_str(net__http__Cookie* c) {
	if (!net__http__is_cookie_name_valid(c->name)) {
		return _S("");
	}
	int extra_cookie_length = 110;
	strings__Builder b = strings__new_builder((int)((int)((int)((int)(c->name.len + c->value.len) + c->domain.len) + c->path.len) + extra_cookie_length));
	strings__Builder_write_string(&b, c->name);
	strings__Builder_write_string(&b, _S("="));
	strings__Builder_write_string(&b, net__http__sanitize_cookie_value(c->value));
	if (c->path.len > 0) {
		strings__Builder_write_string(&b, _S("; path="));
		strings__Builder_write_string(&b, net__http__sanitize_cookie_path(c->path));
	}
	if (c->domain.len > 0) {
		if (net__http__valid_cookie_domain(c->domain)) {
			string d = c->domain;
			if (string_at(d, 0) == '.') {
				d = string_substr(d, 1, d.len);
			}
			strings__Builder_write_string(&b, _S("; domain="));
			strings__Builder_write_string(&b, d);
		} else {
		}
	}
	if (c->expires.year > 1600) {
		string time_str = time__Time_http_header_string(c->expires);
		strings__Builder_write_string(&b, _S("; expires="));
		strings__Builder_write_string(&b, time_str);
	}
	if (c->max_age > 0) {
		strings__Builder_write_string(&b, _S("; Max-Age="));
		strings__Builder_write_string(&b, int_str(c->max_age));
	} else if (c->max_age < 0) {
		strings__Builder_write_string(&b, _S("; Max-Age=0"));
	}
	if (c->http_only) {
		strings__Builder_write_string(&b, _S("; HttpOnly"));
	}
	if (c->secure) {
		strings__Builder_write_string(&b, _S("; Secure"));
	}

	if (c->same_site == (net__http__SameSite__same_site_not_set)) {
	}
	else if (c->same_site == (net__http__SameSite__same_site_default_mode)) {
		strings__Builder_write_string(&b, _S("; SameSite"));
	}
	else if (c->same_site == (net__http__SameSite__same_site_none_mode)) {
		strings__Builder_write_string(&b, _S("; SameSite=None"));
	}
	else if (c->same_site == (net__http__SameSite__same_site_lax_mode)) {
		strings__Builder_write_string(&b, _S("; SameSite=Lax"));
	}
	else if (c->same_site == (net__http__SameSite__same_site_strict_mode)) {
		strings__Builder_write_string(&b, _S("; SameSite=Strict"));
	}
	return strings__Builder_str(&b);
}
VV_LOC string net__http__sanitize(bool (*valid)(u8 ), string v) {
	bool ok = true;
	for (int i = 0; i < v.len; ++i) {
		if (valid(string_at(v, i))) {
			continue;
		}
		ok = false;
		break;
	}
	if (ok) {
		return string_clone(v);
	}
	Array_u8 _t3 = {0};
	Array_u8 _t3_orig = string_bytes(v);
	int _t3_len = _t3_orig.len;
	_t3 = __new_array_noscan(0, _t3_len, sizeof(u8));

	for (int _t4 = 0; _t4 < _t3_len; ++_t4) {
		u8 it = ((u8*) _t3_orig.data)[_t4];
		if (valid(it)) {
			array_push_noscan((array*)&_t3, &it);
		}
	}
	return Array_u8_bytestr( _t3);
}
string net__http__sanitize_cookie_value(string v) {
	string val = net__http__sanitize((voidptr)net__http__valid_cookie_value_byte, v);
	if (v.len == 0) {
		return v;
	}
	if (string_starts_with(val, _S(" ")) || string_ends_with(val, _S(" ")) || string_starts_with(val, _S(",")) || string_ends_with(val, _S(","))) {
		return str_intp(2, _MOV((StrIntpData[]){{_S("\""), 0xfe10, {.d_s = v}}, {_S("\""), 0, { .d_c = 0 }}}));
	}
	return v;
}
VV_LOC string net__http__sanitize_cookie_path(string v) {
	return net__http__sanitize((voidptr)net__http__valid_cookie_path_byte, v);
}
VV_LOC bool net__http__valid_cookie_value_byte(u8 b) {
	return 0x20 <= b && b < 0x7f && b != '"' && b != ';' && b != '\\';
}
VV_LOC bool net__http__valid_cookie_path_byte(u8 b) {
	return 0x20 <= b && b < 0x7f && b != '!';
}
VV_LOC bool net__http__valid_cookie_domain(string v) {
	if (net__http__is_cookie_domain_name(v)) {
		return true;
	}
	return false;
}
bool net__http__is_cookie_domain_name(string _s) {
	string s = _s;
	if (s.len == 0) {
		return false;
	}
	if (s.len > 255) {
		return false;
	}
	if (string_at(s, 0) == '.') {
		s = string_substr(s, 1, s.len);
	}
	rune last = '.';
	bool ok = false;
	int part_len = 0;
	for (int i = 0; i < s.len; ++i) {
		u8 c = string_at(s, i);
		if (u8_is_letter(c)) {
			ok = true;
			part_len++;
		} else if ('0' <= c && c <= '9') {
			part_len++;
		} else if (c == '-') {
			if (last == '.') {
				return false;
			}
			part_len++;
		} else if (c == '.') {
			if (last == '.' || last == '-') {
				return false;
			}
			if (part_len > 63 || part_len == 0) {
				return false;
			}
			part_len = 0;
		} else {
			return false;
		}
		last = c;
	}
	if (last == '-' || part_len > 63) {
		return false;
	}
	return ok;
}
VV_LOC bool net__http__is_cookie_name_valid(string name) {
	if ((name).len == 0) {
		return false;
	}
	for (int _t2 = 0; _t2 < name.len; ++_t2) {
		u8 b = name.str[_t2];
		if (b < 33 || b > 126) {
			return false;
		}
	}
	return true;
}
_result_void net__http__SilentStreamingDownloader_on_start(net__http__SilentStreamingDownloader* d, net__http__Request* request, string path) {
	d->path = path;
	_result_os__File _t1 = os__create(path);
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 	d->f = (*(os__File*)_t1.data);
	return (_result_void){0};
}
_result_void net__http__SilentStreamingDownloader_on_chunk(net__http__SilentStreamingDownloader* d, net__http__Request* request, Array_u8 chunk, u64 already_received, u64 expected) {
	_result_int _t1 = os__File_write(&d->f, chunk);
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 ;
	return (_result_void){0};
}
_result_void net__http__SilentStreamingDownloader_on_finish(net__http__SilentStreamingDownloader* d, net__http__Request* request, net__http__Response* response) {
	os__File_close(&d->f);
	return (_result_void){0};
}
_result_void net__http__TerminalStreamingDownloader_on_start(net__http__TerminalStreamingDownloader* d, net__http__Request* request, string path) {
	_result_void _t1 = net__http__SilentStreamingDownloader_on_start(&d->SilentStreamingDownloader, request, path);
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 ;
	d->start_time = time__now();
	d->past_time = time__now();
	return (_result_void){0};
}
_result_void net__http__TerminalStreamingDownloader_on_chunk(net__http__TerminalStreamingDownloader* d, net__http__Request* request, Array_u8 chunk, u64 already_received, u64 expected) {
	time__Time now = time__now();
	time__Duration elapsed = time__Time__minus(now, d->start_time);
	d->past_time = now;
	d->past_received = already_received;
	f64 ratio = (f64)(((f64)(already_received)) / ((f64)(expected)));
	f64 res = (f64)(((f64)(elapsed)) / ratio);
	time__Duration estimated = ((_const_max_i64));
	if (((f64)(_const_min_i64)) < res && res < ((f64)(_const_max_i64))) {
		estimated = ((i64)(res));
	}
	f64 speed = (f64)((f64)(((f64)(_const_time__millisecond)) * ((f64)(already_received))) / ((f64)(elapsed)));
	f64 elapsed_s = time__Duration_seconds(elapsed);
	f64 estimated_s = time__Duration_seconds(estimated);
	f64 eta_s = f64_max((f64)(estimated_s - elapsed_s), 0.0);
	_result_void _t1 = net__http__SilentStreamingDownloader_on_chunk(&d->SilentStreamingDownloader, request, chunk, already_received, expected);
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 ;
	print(str_intp(8, _MOV((StrIntpData[]){{_S("\rDownloading to `"), 0xfe10, {.d_s = d->SilentStreamingDownloader.path}}, {_S("` "), 0xc042d, {.d_f64 = (f64)(((f64)(100.0)) * ratio)}}, {_S("%, "), 0xe062d, {.d_f64 = (f64)(((f64)(already_received)) / ((int_literal)(1024 * 1024)))}}, {_S("/"), 0xe060d, {.d_f64 = (f64)(((f64)(expected)) / ((int_literal)(1024 * 1024)))}}, {_S("MB, "), 0xc002d, {.d_f64 = speed}}, {_S("KB/s, elapsed: "), 0xc002d, {.d_f64 = elapsed_s}}, {_S("s, eta: "), 0xc002d, {.d_f64 = eta_s}}, {_S("s"), 0, { .d_c = 0 }}})));
	flush_stdout();
	return (_result_void){0};
}
_result_void net__http__TerminalStreamingDownloader_on_finish(net__http__TerminalStreamingDownloader* d, net__http__Request* request, net__http__Response* response) {
	_result_void _t1 = net__http__SilentStreamingDownloader_on_finish(&d->SilentStreamingDownloader, request, response);
	if (_t1.is_error) {
		_result_void _t2 = {0};
		_t2.is_error = true;
		_t2.err = _t1.err;
		return _t2;
	}
	
 ;
	println(_S(""));
	flush_stdout();
	return (_result_void){0};
}
string net__http__CommonHeader_str(net__http__CommonHeader h) {
	string _t2 = (string){.str=(byteptr)"", .is_lit=1};
	switch (h) {
		case net__http__CommonHeader__accept: {
			_t2 = _S("Accept");
			break;
		}
		case net__http__CommonHeader__accept_ch: {
			_t2 = _S("Accept-CH");
			break;
		}
		case net__http__CommonHeader__accept_charset: {
			_t2 = _S("Accept-Charset");
			break;
		}
		case net__http__CommonHeader__accept_ch_lifetime: {
			_t2 = _S("Accept-CH-Lifetime");
			break;
		}
		case net__http__CommonHeader__accept_encoding: {
			_t2 = _S("Accept-Encoding");
			break;
		}
		case net__http__CommonHeader__accept_language: {
			_t2 = _S("Accept-Language");
			break;
		}
		case net__http__CommonHeader__accept_patch: {
			_t2 = _S("Accept-Patch");
			break;
		}
		case net__http__CommonHeader__accept_post: {
			_t2 = _S("Accept-Post");
			break;
		}
		case net__http__CommonHeader__accept_ranges: {
			_t2 = _S("Accept-Ranges");
			break;
		}
		case net__http__CommonHeader__access_control_allow_credentials: {
			_t2 = _S("Access-Control-Allow-Credentials");
			break;
		}
		case net__http__CommonHeader__access_control_allow_headers: {
			_t2 = _S("Access-Control-Allow-Headers");
			break;
		}
		case net__http__CommonHeader__access_control_allow_methods: {
			_t2 = _S("Access-Control-Allow-Methods");
			break;
		}
		case net__http__CommonHeader__access_control_allow_origin: {
			_t2 = _S("Access-Control-Allow-Origin");
			break;
		}
		case net__http__CommonHeader__access_control_expose_headers: {
			_t2 = _S("Access-Control-Expose-Headers");
			break;
		}
		case net__http__CommonHeader__access_control_max_age: {
			_t2 = _S("Access-Control-Max-Age");
			break;
		}
		case net__http__CommonHeader__access_control_request_headers: {
			_t2 = _S("Access-Control-Request-Headers");
			break;
		}
		case net__http__CommonHeader__access_control_request_method: {
			_t2 = _S("Access-Control-Request-Method");
			break;
		}
		case net__http__CommonHeader__age: {
			_t2 = _S("Age");
			break;
		}
		case net__http__CommonHeader__allow: {
			_t2 = _S("Allow");
			break;
		}
		case net__http__CommonHeader__alt_svc: {
			_t2 = _S("Alt-Svc");
			break;
		}
		case net__http__CommonHeader__authorization: {
			_t2 = _S("Authorization");
			break;
		}
		case net__http__CommonHeader__authority: {
			_t2 = _S("Authority");
			break;
		}
		case net__http__CommonHeader__cache_control: {
			_t2 = _S("Cache-Control");
			break;
		}
		case net__http__CommonHeader__clear_site_data: {
			_t2 = _S("Clear-Site-Data");
			break;
		}
		case net__http__CommonHeader__connection: {
			_t2 = _S("Connection");
			break;
		}
		case net__http__CommonHeader__content_disposition: {
			_t2 = _S("Content-Disposition");
			break;
		}
		case net__http__CommonHeader__content_encoding: {
			_t2 = _S("Content-Encoding");
			break;
		}
		case net__http__CommonHeader__content_language: {
			_t2 = _S("Content-Language");
			break;
		}
		case net__http__CommonHeader__content_length: {
			_t2 = _S("Content-Length");
			break;
		}
		case net__http__CommonHeader__content_location: {
			_t2 = _S("Content-Location");
			break;
		}
		case net__http__CommonHeader__content_range: {
			_t2 = _S("Content-Range");
			break;
		}
		case net__http__CommonHeader__content_security_policy: {
			_t2 = _S("Content-Security-Policy");
			break;
		}
		case net__http__CommonHeader__content_security_policy_report_only: {
			_t2 = _S("Content-Security-Policy-Report-Only");
			break;
		}
		case net__http__CommonHeader__content_type: {
			_t2 = _S("Content-Type");
			break;
		}
		case net__http__CommonHeader__cookie: {
			_t2 = _S("Cookie");
			break;
		}
		case net__http__CommonHeader__cross_origin_embedder_policy: {
			_t2 = _S("Cross-Origin-Embedder-Policy");
			break;
		}
		case net__http__CommonHeader__cross_origin_opener_policy: {
			_t2 = _S("Cross-Origin-Opener-Policy");
			break;
		}
		case net__http__CommonHeader__cross_origin_resource_policy: {
			_t2 = _S("Cross-Origin-Resource-Policy");
			break;
		}
		case net__http__CommonHeader__date: {
			_t2 = _S("Date");
			break;
		}
		case net__http__CommonHeader__device_memory: {
			_t2 = _S("Device-Memory");
			break;
		}
		case net__http__CommonHeader__digest: {
			_t2 = _S("Digest");
			break;
		}
		case net__http__CommonHeader__dnt: {
			_t2 = _S("DNT");
			break;
		}
		case net__http__CommonHeader__early_data: {
			_t2 = _S("Early-Data");
			break;
		}
		case net__http__CommonHeader__etag: {
			_t2 = _S("ETag");
			break;
		}
		case net__http__CommonHeader__expect: {
			_t2 = _S("Expect");
			break;
		}
		case net__http__CommonHeader__expect_ct: {
			_t2 = _S("Expect-CT");
			break;
		}
		case net__http__CommonHeader__expires: {
			_t2 = _S("Expires");
			break;
		}
		case net__http__CommonHeader__feature_policy: {
			_t2 = _S("Feature-Policy");
			break;
		}
		case net__http__CommonHeader__forwarded: {
			_t2 = _S("Forwarded");
			break;
		}
		case net__http__CommonHeader__from: {
			_t2 = _S("From");
			break;
		}
		case net__http__CommonHeader__host: {
			_t2 = _S("Host");
			break;
		}
		case net__http__CommonHeader__if_match: {
			_t2 = _S("If-Match");
			break;
		}
		case net__http__CommonHeader__if_modified_since: {
			_t2 = _S("If-Modified-Since");
			break;
		}
		case net__http__CommonHeader__if_none_match: {
			_t2 = _S("If-None-Match");
			break;
		}
		case net__http__CommonHeader__if_range: {
			_t2 = _S("If-Range");
			break;
		}
		case net__http__CommonHeader__if_unmodified_since: {
			_t2 = _S("If-Unmodified-Since");
			break;
		}
		case net__http__CommonHeader__index: {
			_t2 = _S("Index");
			break;
		}
		case net__http__CommonHeader__keep_alive: {
			_t2 = _S("Keep-Alive");
			break;
		}
		case net__http__CommonHeader__large_allocation: {
			_t2 = _S("Large-Allocation");
			break;
		}
		case net__http__CommonHeader__last_modified: {
			_t2 = _S("Last-Modified");
			break;
		}
		case net__http__CommonHeader__link: {
			_t2 = _S("Link");
			break;
		}
		case net__http__CommonHeader__location: {
			_t2 = _S("Location");
			break;
		}
		case net__http__CommonHeader__nel: {
			_t2 = _S("NEL");
			break;
		}
		case net__http__CommonHeader__origin: {
			_t2 = _S("Origin");
			break;
		}
		case net__http__CommonHeader__pragma: {
			_t2 = _S("Pragma");
			break;
		}
		case net__http__CommonHeader__proxy_authenticate: {
			_t2 = _S("Proxy-Authenticate");
			break;
		}
		case net__http__CommonHeader__proxy_authorization: {
			_t2 = _S("Proxy-Authorization");
			break;
		}
		case net__http__CommonHeader__range: {
			_t2 = _S("Range");
			break;
		}
		case net__http__CommonHeader__referer: {
			_t2 = _S("Referer");
			break;
		}
		case net__http__CommonHeader__referrer_policy: {
			_t2 = _S("Referrer-Policy");
			break;
		}
		case net__http__CommonHeader__retry_after: {
			_t2 = _S("Retry-After");
			break;
		}
		case net__http__CommonHeader__save_data: {
			_t2 = _S("Save-Data");
			break;
		}
		case net__http__CommonHeader__sec_fetch_dest: {
			_t2 = _S("Sec-Fetch-Dest");
			break;
		}
		case net__http__CommonHeader__sec_fetch_mode: {
			_t2 = _S("Sec-Fetch-Mode");
			break;
		}
		case net__http__CommonHeader__sec_fetch_site: {
			_t2 = _S("Sec-Fetch-Site");
			break;
		}
		case net__http__CommonHeader__sec_fetch_user: {
			_t2 = _S("Sec-Fetch-User");
			break;
		}
		case net__http__CommonHeader__sec_websocket_accept: {
			_t2 = _S("Sec-WebSocket-Accept");
			break;
		}
		case net__http__CommonHeader__sec_websocket_key: {
			_t2 = _S("Sec-WebSocket-Key");
			break;
		}
		case net__http__CommonHeader__server: {
			_t2 = _S("Server");
			break;
		}
		case net__http__CommonHeader__server_timing: {
			_t2 = _S("Server-Timing");
			break;
		}
		case net__http__CommonHeader__set_cookie: {
			_t2 = _S("Set-Cookie");
			break;
		}
		case net__http__CommonHeader__sourcemap: {
			_t2 = _S("SourceMap");
			break;
		}
		case net__http__CommonHeader__strict_transport_security: {
			_t2 = _S("Strict-Transport-Security");
			break;
		}
		case net__http__CommonHeader__te: {
			_t2 = _S("TE");
			break;
		}
		case net__http__CommonHeader__timing_allow_origin: {
			_t2 = _S("Timing-Allow-Origin");
			break;
		}
		case net__http__CommonHeader__tk: {
			_t2 = _S("Tk");
			break;
		}
		case net__http__CommonHeader__trailer: {
			_t2 = _S("Trailer");
			break;
		}
		case net__http__CommonHeader__transfer_encoding: {
			_t2 = _S("Transfer-Encoding");
			break;
		}
		case net__http__CommonHeader__upgrade: {
			_t2 = _S("Upgrade");
			break;
		}
		case net__http__CommonHeader__upgrade_insecure_requests: {
			_t2 = _S("Upgrade-Insecure-Requests");
			break;
		}
		case net__http__CommonHeader__user_agent: {
			_t2 = _S("User-Agent");
			break;
		}
		case net__http__CommonHeader__vary: {
			_t2 = _S("Vary");
			break;
		}
		case net__http__CommonHeader__via: {
			_t2 = _S("Via");
			break;
		}
		case net__http__CommonHeader__want_digest: {
			_t2 = _S("Want-Digest");
			break;
		}
		case net__http__CommonHeader__warning: {
			_t2 = _S("Warning");
			break;
		}
		case net__http__CommonHeader__www_authenticate: {
			_t2 = _S("WWW-Authenticate");
			break;
		}
		case net__http__CommonHeader__x_content_type_options: {
			_t2 = _S("X-Content-Type-Options");
			break;
		}
		case net__http__CommonHeader__x_dns_prefetch_control: {
			_t2 = _S("X-DNS-Prefetch-Control");
			break;
		}
		case net__http__CommonHeader__x_forwarded_for: {
			_t2 = _S("X-Forwarded-For");
			break;
		}
		case net__http__CommonHeader__x_forwarded_host: {
			_t2 = _S("X-Forwarded-Host");
			break;
		}
		case net__http__CommonHeader__x_forwarded_proto: {
			_t2 = _S("X-Forwarded-Proto");
			break;
		}
		case net__http__CommonHeader__x_frame_options: {
			_t2 = _S("X-Frame-Options");
			break;
		}
		case net__http__CommonHeader__x_xss_protection: {
			_t2 = _S("X-XSS-Protection");
			break;
		}
	}
	return _t2;
}
void net__http__Header_free(net__http__Header* h) {
	{ // Unsafe block
	}
}
string net__http__Header_render(net__http__Header h, net__http__HeaderRenderConfig flags) {
	strings__Builder sb = strings__new_builder((int)(50 * 48));
	net__http__Header_render_into_sb(h, (voidptr)&sb, flags);
	string res = strings__Builder_str(&sb);
	strings__Builder_free(&sb);
	return res;
}
void net__http__Header_render_into_sb(net__http__Header h, strings__Builder* sb, net__http__HeaderRenderConfig flags) {
	for (int i = 0; i < h.cur_pos; i++) {
		net__http__HeaderKV kv = h.data[v_fixed_index(i, 50)];
		string key = (flags.version == net__http__Version__v2_0 ? (string_to_lower(kv.key)) : flags.canonicalize ? (net__http__canonicalize(string_to_lower(kv.key))) : (kv.key));
		strings__Builder_write_string(sb, key);
		strings__Builder_write_string(sb, _S(": "));
		strings__Builder_write_string(sb, kv.value);
		strings__Builder_write_string(sb, _S("\r\n"));
	}
}
VV_LOC string net__http__canonicalize(string name) {
	if (_IN_MAP(ADDR(string, name), ADDR(map, _const_net__http__common_header_map))) {
		return net__http__CommonHeader_str((*(net__http__CommonHeader*)map_get(ADDR(map, _const_net__http__common_header_map), &(string[]){name}, &(net__http__CommonHeader[]){ 0 })));
	}
	Array_string _t3 = {0};
	Array_string _t3_orig = string_split(name, _S("-"));
	int _t3_len = _t3_orig.len;
	_t3 = __new_array(0, _t3_len, sizeof(string));

	for (int _t5 = 0; _t5 < _t3_len; ++_t5) {
		string it = ((string*) _t3_orig.data)[_t5];
		string _t4 = string_capitalize(it);
		array_push((array*)&_t3, &_t4);
	}
	return Array_string_join( _t3, _S("-"));
}
string net__http__HeaderKeyError_msg(net__http__HeaderKeyError err) {
	return str_intp(2, _MOV((StrIntpData[]){{_S("Invalid header key: '"), 0xfe10, {.d_s = err.header}}, {_S("'"), 0, { .d_c = 0 }}}));
}
int net__http__HeaderKeyError_code(net__http__HeaderKeyError err) {
	return err.code;
}
string net__http__Header_str(net__http__Header h) {
	return net__http__Header_render(h, ((net__http__HeaderRenderConfig){.version = net__http__Version__v1_1,.coerce = 0,.canonicalize = 0,}));
}
string net__http__Method_str(net__http__Method m) {
	string _t2 = (string){.str=(byteptr)"", .is_lit=1};
	switch (m) {
		case net__http__Method__get: {
			_t2 = _S("GET");
			break;
		}
		case net__http__Method__head: {
			_t2 = _S("HEAD");
			break;
		}
		case net__http__Method__post: {
			_t2 = _S("POST");
			break;
		}
		case net__http__Method__put: {
			_t2 = _S("PUT");
			break;
		}
		case net__http__Method__acl: {
			_t2 = _S("ACL");
			break;
		}
		case net__http__Method__baseline_control: {
			_t2 = _S("BASELINE-CONTROL");
			break;
		}
		case net__http__Method__bind: {
			_t2 = _S("BIND");
			break;
		}
		case net__http__Method__checkin: {
			_t2 = _S("CHECKIN");
			break;
		}
		case net__http__Method__checkout: {
			_t2 = _S("CHECKOUT");
			break;
		}
		case net__http__Method__connect: {
			_t2 = _S("CONNECT");
			break;
		}
		case net__http__Method__copy: {
			_t2 = _S("COPY");
			break;
		}
		case net__http__Method__delete: {
			_t2 = _S("DELETE");
			break;
		}
		case net__http__Method__label: {
			_t2 = _S("LABEL");
			break;
		}
		case net__http__Method__link: {
			_t2 = _S("LINK");
			break;
		}
		case net__http__Method__lock: {
			_t2 = _S("LOCK");
			break;
		}
		case net__http__Method__merge: {
			_t2 = _S("MERGE");
			break;
		}
		case net__http__Method__mkactivity: {
			_t2 = _S("MKACTIVITY");
			break;
		}
		case net__http__Method__mkcalendar: {
			_t2 = _S("MKCALENDAR");
			break;
		}
		case net__http__Method__mkcol: {
			_t2 = _S("MKCOL");
			break;
		}
		case net__http__Method__mkredirectref: {
			_t2 = _S("MKREDIRECTREF");
			break;
		}
		case net__http__Method__mkworkspace: {
			_t2 = _S("MKWORKSPACE");
			break;
		}
		case net__http__Method__move: {
			_t2 = _S("MOVE");
			break;
		}
		case net__http__Method__options: {
			_t2 = _S("OPTIONS");
			break;
		}
		case net__http__Method__orderpatch: {
			_t2 = _S("ORDERPATCH");
			break;
		}
		case net__http__Method__patch: {
			_t2 = _S("PATCH");
			break;
		}
		case net__http__Method__pri: {
			_t2 = _S("PRI");
			break;
		}
		case net__http__Method__propfind: {
			_t2 = _S("PROPFIND");
			break;
		}
		case net__http__Method__proppatch: {
			_t2 = _S("PROPPATCH");
			break;
		}
		case net__http__Method__rebind: {
			_t2 = _S("REBIND");
			break;
		}
		case net__http__Method__report: {
			_t2 = _S("REPORT");
			break;
		}
		case net__http__Method__search: {
			_t2 = _S("SEARCH");
			break;
		}
		case net__http__Method__trace: {
			_t2 = _S("TRACE");
			break;
		}
		case net__http__Method__unbind: {
			_t2 = _S("UNBIND");
			break;
		}
		case net__http__Method__uncheckout: {
			_t2 = _S("UNCHECKOUT");
			break;
		}
		case net__http__Method__unlink: {
			_t2 = _S("UNLINK");
			break;
		}
		case net__http__Method__unlock: {
			_t2 = _S("UNLOCK");
			break;
		}
		case net__http__Method__update: {
			_t2 = _S("UPDATE");
			break;
		}
		case net__http__Method__updateredirectref: {
			_t2 = _S("UPDATEREDIRECTREF");
			break;
		}
		case net__http__Method__version_control: {
			_t2 = _S("VERSION-CONTROL");
			break;
		}
	}
	return _t2;
}
VV_LOC void net__http__Request_free(net__http__Request* req) {
	net__http__Header_free(&req->header);
}
string net__http__UnexpectedExtraAttributeError_msg(net__http__UnexpectedExtraAttributeError err) {
	return str_intp(2, _MOV((StrIntpData[]){{_S("Encountered unexpected extra attributes: "), 0xfe10, {.d_s = Array_string_str(err.attributes)}}, {_SLIT0, 0, { .d_c = 0 }}}));
}
string net__http__MultiplePathAttributesError_msg(net__http__MultiplePathAttributesError err) {
	return _S("Expected at most one path attribute");
}
VV_LOC void net__http__Response_free(net__http__Response* resp) {
	net__http__Header_free(&resp->header);
}
void net__http__Response_set_status(net__http__Response* r, net__http__Status s) {
	r->status_code = net__http__Status_int(s);
	r->status_msg = net__http__Status_str(s);
}
void net__http__Response_set_version(net__http__Response* r, net__http__Version v) {
	if (v == net__http__Version__unknown) {
		r->http_version = _S("");
		return;
	}
	multi_return_int_int mr_3302 = net__http__Version_protos(v);
	int maj = mr_3302.arg0;
	int min = mr_3302.arg1;
	r->http_version = str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe07, {.d_i32 = maj}}, {_S("."), 0xfe07, {.d_i32 = min}}, {_SLIT0, 0, { .d_c = 0 }}}));
}
VV_LOC net__http__Response net__http__DebugHandler_handle(net__http__DebugHandler d, net__http__Request req) {
	#if defined(_VDEBUG)
	{
	}
	#else
	{
		eprintln(str_intp(4, _MOV((StrIntpData[]){{_S("["), 0xfe10, {.d_s = time__Time_str(time__now())}}, {_S("] "), 0xfe10, {.d_s = net__http__Method_str(req.method)}}, {_S(" "), 0xfe10, {.d_s = req.url}}, {_S(" - 200"), 0, { .d_c = 0 }}})));
	}
	#endif
	net__http__Response r = ((net__http__Response){.body = req.data,.header = req.header,.status_code = 0,.status_msg = (string){.str=(byteptr)"", .is_lit=1},.http_version = (string){.str=(byteptr)"", .is_lit=1},});
	net__http__Response_set_status(&r, net__http__Status__ok);
	net__http__Response_set_version(&r, req.version);
	return r;
}
string net__http__Status_str(net__http__Status code) {
	string _t2 = (string){.str=(byteptr)"", .is_lit=1};
	switch (code) {
		case net__http__Status__cont: {
			_t2 = _S("Continue");
			break;
		}
		case net__http__Status__switching_protocols: {
			_t2 = _S("Switching Protocols");
			break;
		}
		case net__http__Status__processing: {
			_t2 = _S("Processing");
			break;
		}
		case net__http__Status__checkpoint_draft: {
			_t2 = _S("Checkpoint Draft");
			break;
		}
		case net__http__Status__ok: {
			_t2 = _S("OK");
			break;
		}
		case net__http__Status__created: {
			_t2 = _S("Created");
			break;
		}
		case net__http__Status__accepted: {
			_t2 = _S("Accepted");
			break;
		}
		case net__http__Status__non_authoritative_information: {
			_t2 = _S("Non Authoritative Information");
			break;
		}
		case net__http__Status__no_content: {
			_t2 = _S("No Content");
			break;
		}
		case net__http__Status__reset_content: {
			_t2 = _S("Reset Content");
			break;
		}
		case net__http__Status__partial_content: {
			_t2 = _S("Partial Content");
			break;
		}
		case net__http__Status__multi_status: {
			_t2 = _S("Multi Status");
			break;
		}
		case net__http__Status__already_reported: {
			_t2 = _S("Already Reported");
			break;
		}
		case net__http__Status__im_used: {
			_t2 = _S("IM Used");
			break;
		}
		case net__http__Status__multiple_choices: {
			_t2 = _S("Multiple Choices");
			break;
		}
		case net__http__Status__moved_permanently: {
			_t2 = _S("Moved Permanently");
			break;
		}
		case net__http__Status__found: {
			_t2 = _S("Found");
			break;
		}
		case net__http__Status__see_other: {
			_t2 = _S("See Other");
			break;
		}
		case net__http__Status__not_modified: {
			_t2 = _S("Not Modified");
			break;
		}
		case net__http__Status__use_proxy: {
			_t2 = _S("Use Proxy");
			break;
		}
		case net__http__Status__switch_proxy: {
			_t2 = _S("Switch Proxy");
			break;
		}
		case net__http__Status__temporary_redirect: {
			_t2 = _S("Temporary Redirect");
			break;
		}
		case net__http__Status__permanent_redirect: {
			_t2 = _S("Permanent Redirect");
			break;
		}
		case net__http__Status__bad_request: {
			_t2 = _S("Bad Request");
			break;
		}
		case net__http__Status__unauthorized: {
			_t2 = _S("Unauthorized");
			break;
		}
		case net__http__Status__payment_required: {
			_t2 = _S("Payment Required");
			break;
		}
		case net__http__Status__forbidden: {
			_t2 = _S("Forbidden");
			break;
		}
		case net__http__Status__not_found: {
			_t2 = _S("Not Found");
			break;
		}
		case net__http__Status__method_not_allowed: {
			_t2 = _S("Method Not Allowed");
			break;
		}
		case net__http__Status__not_acceptable: {
			_t2 = _S("Not Acceptable");
			break;
		}
		case net__http__Status__proxy_authentication_required: {
			_t2 = _S("Proxy Authentication Required");
			break;
		}
		case net__http__Status__request_timeout: {
			_t2 = _S("Request Timeout");
			break;
		}
		case net__http__Status__conflict: {
			_t2 = _S("Conflict");
			break;
		}
		case net__http__Status__gone: {
			_t2 = _S("Gone");
			break;
		}
		case net__http__Status__length_required: {
			_t2 = _S("Length Required");
			break;
		}
		case net__http__Status__precondition_failed: {
			_t2 = _S("Precondition Failed");
			break;
		}
		case net__http__Status__request_entity_too_large: {
			_t2 = _S("Request Entity Too Large");
			break;
		}
		case net__http__Status__request_uri_too_long: {
			_t2 = _S("Request URI Too Long");
			break;
		}
		case net__http__Status__unsupported_media_type: {
			_t2 = _S("Unsupported Media Type");
			break;
		}
		case net__http__Status__requested_range_not_satisfiable: {
			_t2 = _S("Requested Range Not Satisfiable");
			break;
		}
		case net__http__Status__expectation_failed: {
			_t2 = _S("Expectation Failed");
			break;
		}
		case net__http__Status__im_a_teapot: {
			_t2 = _S("Im a teapot");
			break;
		}
		case net__http__Status__misdirected_request: {
			_t2 = _S("Misdirected Request");
			break;
		}
		case net__http__Status__unprocessable_entity: {
			_t2 = _S("Unprocessable Entity");
			break;
		}
		case net__http__Status__locked: {
			_t2 = _S("Locked");
			break;
		}
		case net__http__Status__failed_dependency: {
			_t2 = _S("Failed Dependency");
			break;
		}
		case net__http__Status__unordered_collection: {
			_t2 = _S("Unordered Collection");
			break;
		}
		case net__http__Status__upgrade_required: {
			_t2 = _S("Upgrade Required");
			break;
		}
		case net__http__Status__precondition_required: {
			_t2 = _S("Precondition Required");
			break;
		}
		case net__http__Status__too_many_requests: {
			_t2 = _S("Too Many Requests");
			break;
		}
		case net__http__Status__request_header_fields_too_large: {
			_t2 = _S("Request Header Fields Too Large");
			break;
		}
		case net__http__Status__unavailable_for_legal_reasons: {
			_t2 = _S("Unavailable For Legal Reasons");
			break;
		}
		case net__http__Status__internal_server_error: {
			_t2 = _S("Internal Server Error");
			break;
		}
		case net__http__Status__not_implemented: {
			_t2 = _S("Not Implemented");
			break;
		}
		case net__http__Status__bad_gateway: {
			_t2 = _S("Bad Gateway");
			break;
		}
		case net__http__Status__service_unavailable: {
			_t2 = _S("Service Unavailable");
			break;
		}
		case net__http__Status__gateway_timeout: {
			_t2 = _S("Gateway Timeout");
			break;
		}
		case net__http__Status__http_version_not_supported: {
			_t2 = _S("HTTP Version Not Supported");
			break;
		}
		case net__http__Status__variant_also_negotiates: {
			_t2 = _S("Variant Also Negotiates");
			break;
		}
		case net__http__Status__insufficient_storage: {
			_t2 = _S("Insufficient Storage");
			break;
		}
		case net__http__Status__loop_detected: {
			_t2 = _S("Loop Detected");
			break;
		}
		case net__http__Status__bandwidth_limit_exceeded: {
			_t2 = _S("Bandwidth Limit Exceeded");
			break;
		}
		case net__http__Status__not_extended: {
			_t2 = _S("Not Extended");
			break;
		}
		case net__http__Status__network_authentication_required: {
			_t2 = _S("Network Authentication Required");
			break;
		}
		case net__http__Status__unassigned: {
			_t2 = _S("Unassigned");
			break;
		}
		case net__http__Status__unknown:
		case net__http__Status__client_closed_request:
		default: {
			{
				_t2 = _S("Unknown");
				break;
			}
		}
	}
	return _t2;
}
int net__http__Status_int(net__http__Status code) {
	if (code == net__http__Status__unknown || code == net__http__Status__unassigned) {
		return 0;
	}
	return ((int)(code));
}
string net__http__Version_str(net__http__Version v) {
	return ((v == (net__http__Version__v1_1))? (_S("HTTP/1.1")) : (v == (net__http__Version__v2_0))? (_S("HTTP/2.0")) : (v == (net__http__Version__v1_0))? (_S("HTTP/1.0")) : (_S("unknown")));
}
multi_return_int_int net__http__Version_protos(net__http__Version v) {

	if (v == (net__http__Version__v1_1)) {
		return (multi_return_int_int){.arg0=1, .arg1=1};
	}
	else if (v == (net__http__Version__v2_0)) {
		return (multi_return_int_int){.arg0=2, .arg1=0};
	}
	else if (v == (net__http__Version__v1_0)) {
		return (multi_return_int_int){.arg0=1, .arg1=0};
	}
	else if (v == (net__http__Version__unknown)) {
		return (multi_return_int_int){.arg0=0, .arg1=0};
	}
	return (multi_return_int_int){0};
}
VV_LOC void main__main(void) {
	vargs__Args args = vargs__new(_const_os__args, 1);
	;
	Map_string_main__help commands = new_map_init(&map_hash_string, &map_eq_string, &map_clone_string, &map_free_string, 3, sizeof(string), sizeof(voidptr),
		_MOV((string[3]){
			_S("help"),
			_S("install-self"),
			_S("install-tools"),
		}),
		_MOV((voidptr[3]){
			main__help, 
			main__installself, 
			main__installtools, 
		})
	)
	;
	;
	vargs__Args_parse(&args);
	;
	string command = args.command;
	;
	if ((command).len == 0) {
		main__welcome();
		;
		0;
	} else {
		if (!_IN_MAP(ADDR(string, command), ADDR(map, commands))) {
			println(str_intp(2, _MOV((StrIntpData[]){{_S("Command not found. ["), 0xfe10, {.d_s = command}}, {_S("]"), 0, { .d_c = 0 }}})));
			;
			_v_exit(127);
			VUNREACHABLE();
			;
		}
		((void (*) ())(*(voidptr*)map_get(ADDR(map, commands), &(string[]){command}, &(voidptr[]){ 0 })))();
		;
		0;
	}
}
VV_LOC void main__help(void) {
	// json.decode
	cJSON* _t2 = json__json_parse(v__embed_file__EmbedFileData_to_string(ADDR(v__embed_file__EmbedFileData, _v_embed_file_metadata( 7696111033667594819U ))));
	_result_main__Info_general _t3 = json__decode_main__Info_general(_t2);
	cJSON_Delete(_t2); // del
	_result_main__Info_general _t1 = (_t3);
	if (_t1.is_error) {
		IError err = _t1.err;
		_v_panic(_S("Info.json returns corrupted data."));
		VUNREACHABLE();
		;
		_v_exit(1);
		VUNREACHABLE();
		;
	}
	
 	main__Info_general info = (*(main__Info_general*)_t1.data);
	;
	string message_help = v__embed_file__EmbedFileData_to_string(ADDR(v__embed_file__EmbedFileData, _v_embed_file_metadata( 5696725965703975409U )));
	;
	string message_commands = _S("");
	;
	string message_options = _S("");
	;
	Map_string_main__Info_command _t4 = info.commands;
	int _t6 = _t4.key_values.len;
	for (int _t5 = 0; _t5 < _t6; ++_t5 ) {
		int _t7 = _t4.key_values.len - _t6;
		_t6 = _t4.key_values.len;
		if (_t7 < 0) {
			_t5 = -1;
			continue;
		}
		if (!DenseArray_has_index(&_t4.key_values, _t5)) {continue;}
		string k = *(string*)DenseArray_key(&_t4.key_values, _t5);
		k = string_clone(k);
		main__Info_command v = (*(main__Info_command*)DenseArray_value(&_t4.key_values, _t5));
		string calls = str_intp(2, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = k}}, {_SLIT0, 0, { .d_c = 0 }}}));
		;
		for (int _t8 = 0; _t8 < v.aliases.len; ++_t8) {
			string w = ((string*)v.aliases.data)[_t8];
			calls = str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = calls}}, {_S(", "), 0xfe10, {.d_s = w}}, {_SLIT0, 0, { .d_c = 0 }}}));
			;
		}
		string spaces = string_repeat(_S(" "), (int)(16 - calls.len));
		;
		message_commands = str_intp(5, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = message_commands}}, {_S("  "), 0xfe10, {.d_s = calls}}, {_SLIT0, 0xfe10, {.d_s = spaces}}, {_S("  "), 0xfe10, {.d_s = v.description}}, {_S("\n"), 0, { .d_c = 0 }}}));
		;
	}
	{ // Unsafe block
		strconv__v_printf(message_help, new_array_from_c_array(3, 3, sizeof(voidptr), _MOV((voidptr[3]){(voidptr)&info.usage, (voidptr)&message_commands, (voidptr)&message_options})));
		;
	}
}
VV_LOC void main__installself(void) {
	string osys = os__user_os();
	;
	string userprofile = os__getenv(_S("USERPROFILE"));
	;
	string fetch_dir = os__join_path(userprofile, new_array_from_c_array(1, 1, sizeof(string), _MOV((string[1]){_S(".fetch")})));
	;
	string program_extension = _S("");
	;
	_result_void _t1 = os__mkdir_all(fetch_dir, ((os__MkdirParams){.mode = 0777,}));
	if (_t1.is_error) {
		IError err = _t1.err;
		_v_panic(str_intp(2, _MOV((StrIntpData[]){{_S("Can't create .fetchboy in user directory. Error: "), 0xfe10, {.d_s = IError_str(err)}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
		;
		_v_exit(1);
		VUNREACHABLE();
		;
	}
	
 ;
	;
	if (_SLIT_EQ(osys.str, osys.len, "windows")) {
		program_extension = _S(".exe");
		;
	}
	_result_void _t2 = os__cp(os__executable(), os__join_path(fetch_dir, new_array_from_c_array(1, 1, sizeof(string), _MOV((string[1]){str_intp(2, _MOV((StrIntpData[]){{_S("fetchboy"), 0xfe10, {.d_s = program_extension}}, {_SLIT0, 0, { .d_c = 0 }}}))}))));
	if (_t2.is_error) {
		IError err = _t2.err;
		_v_panic(str_intp(2, _MOV((StrIntpData[]){{_S("Wasn't able to clone Fetchboy into directory. Error: "), 0xfe10, {.d_s = IError_str(err)}}, {_SLIT0, 0, { .d_c = 0 }}})));
		VUNREACHABLE();
		;
		_v_exit(1);
		VUNREACHABLE();
		;
	}
	
 ;
	;
	string currentpath = os__getenv(_S("Path"));
	;
	println(currentpath);
	;
	os__setenv(_S("Path"), str_intp(3, _MOV((StrIntpData[]){{_SLIT0, 0xfe10, {.d_s = currentpath}}, {_S(":"), 0xfe10, {.d_s = fetch_dir}}, {_SLIT0, 0, { .d_c = 0 }}})), true);
	;
}
VV_LOC void main__installtools(void) {
	string win_choco_link = _S("https://github.com/chocolatey/choco/releases/download/2.5.0/chocolatey-2.5.0.0.msi");
	;
	string win_git_portable_link = _S("https://github.com/git-for-windows/git/releases/download/v2.50.1.windows.1/PortableGit-2.50.1-64-bit.7z.exe");
	;
}
VV_LOC void main__welcome(void) {
	println(v__embed_file__EmbedFileData_to_string(ADDR(v__embed_file__EmbedFileData, _v_embed_file_metadata( -1819502271567776879U ))));
	;
}
void _vinit(int ___argc, voidptr ___argv) {
#if __STDC_HOSTED__ == 1
	signal(11, v_segmentation_fault_handler);
#endif
	builtin_init();
	_closure_mtx_init();
	// Initializations of consts for module strconv
	_const_strconv__digit_pairs = _S("00102030405060708090011121314151617181910212223242526272829203132333435363738393041424344454647484940515253545556575859506162636465666768696071727374757677787970818283848586878889809192939495969798999");
	_const_strconv__base_digits = _S("0123456789abcdefghijklmnopqrstuvwxyz");
	// Initializations of consts for module builtin
	_const_digit_pairs = _S("00102030405060708090011121314151617181910212223242526272829203132333435363738393041424344454647484940515253545556575859506162636465666768696071727374757677787970818283848586878889809192939495969798999");
	g_live_reload_info = *(voidptr*)&((voidptr[]){0}[0]); // global 5
	_const_min_i64 = ((i64)((int_literal)(-9223372036854775807 - 1)));
	_const_max_i64 = ((i64)(9223372036854775807));
	_const_none__ = I_None___to_Interface_IError(((None__*)memdup(&(None__){.Error = ((Error){E_STRUCT}),}, sizeof(None__))));
	// Initializations of consts for module time
	_const_time__months_string = _S("JanFebMarAprMayJunJulAugSepOctNovDec");
	_const_time__nanosecond = ((time__Duration)(1));
	_const_time__infinite = ((((i64)(9223372036854775807))));
	_const_time__start_time = time__init_win_time_start();
	_const_time__freq_time = time__init_win_time_freq();
	_const_time__microsecond = ((1000 * _const_time__nanosecond));
	_const_time__millisecond = ((1000 * _const_time__microsecond));
	_const_time__second = ((1000 * _const_time__millisecond));
	_const_time__minute = ((60 * _const_time__second));
	_const_time__hour = ((60 * _const_time__minute));
	// Initializations of consts for module net.urllib
	_const_net__urllib__err_msg_escape = _S("unescape: invalid URL escape");
	// Initializations of consts for module os
	_const_os__fslash_str = _S("/");
	_const_os__dot_dot = _S("..");
	_const_os__empty_str = _S("");
	_const_os__dot_str = _S(".");
	_const_os__path_separator = _S("\\");
	_const_os__path_delimiter = _S(";");
	_const_os__wd_at_startup = os__getwd();
	_const_os__executable_suffixes = new_array_from_c_array(4, 4, sizeof(string), _MOV((string[4]){_S(".exe"), _S(".bat"), _S(".cmd"), _S("")}));
	_const_os__args = arguments();
	// Initializations of consts for module v.embed_file
	g_embed_file_decoders = ((v__embed_file__EmbedFileDecoders*)memdup(&(v__embed_file__EmbedFileDecoders){.decoders = new_map(sizeof(string), sizeof(v__embed_file__Decoder), &map_hash_string, &map_eq_string, &map_clone_string, &map_free_string),}, sizeof(v__embed_file__EmbedFileDecoders))); // global 3
	// Initializations of consts for module rand
	default_rng = *(rand__PRNG**)&((rand__PRNG*[]){0}[0]); // global 5
	// Calling fn init() for module rand
	rand__init();
	// Initializations of consts for module net
{
{
	_const_net__aoffset = /*OffsetOf*/ (u32)(__offsetof(net__Addr, addr));
}
}
	_const_net__err_port_out_of_range = error_with_code(_S("net: port out of range"), (int_literal)(0 + 5));
	_const_net__err_no_udp_remote = error_with_code(_S("net: no udp remote"), (int_literal)(0 + 6));
	_const_net__err_timed_out = error_with_code(_S("net: op timed out"), (int_literal)(0 + 9));
{
{
	_const_net__infinite_timeout = _const_time__infinite;
}
}
	_const_net__tcp_default_read_timeout = 30 * _const_time__second;
	_const_net__tcp_default_write_timeout = 30 * _const_time__second;
	// Calling fn init() for module net
	net__init();
	// Initializations of consts for module net.mbedtls
{
{
	_const_net__mbedtls__ctr_drbg = ((mbedtls_ctr_drbg_context){E_STRUCT});
}
}
{
{
	_const_net__mbedtls__entropy = ((mbedtls_entropy_context){E_STRUCT});
}
}
{
{
	_const_net__mbedtls__mbedtls_client_read_timeout_ms = 550;
}
}
{
{
	_const_net__mbedtls__mbedtls_server_read_timeout_ms = 41000;
}
}
	// Calling fn init() for module net.mbedtls
	net__mbedtls__init();
	// Initializations of consts for module net.http
{
{
	_const_net__http__common_header_map = new_map_init_noscan_value(&map_hash_string, &map_eq_string, &map_clone_string, &map_free_string, 102, sizeof(string), sizeof(net__http__CommonHeader),
	_MOV((string[102]){
		_S("accept"),
		_S("accept-ch"),
		_S("accept-charset"),
		_S("accept-ch-lifetime"),
		_S("accept-encoding"),
		_S("accept-language"),
		_S("accept-patch"),
		_S("accept-post"),
		_S("accept-ranges"),
		_S("access-control-allow-credentials"),
		_S("access-control-allow-headers"),
		_S("access-control-allow-methods"),
		_S("access-control-allow-origin"),
		_S("access-control-expose-headers"),
		_S("access-control-max-age"),
		_S("access-control-request-headers"),
		_S("access-control-request-method"),
		_S("age"),
		_S("allow"),
		_S("alt-svc"),
		_S("authorization"),
		_S("cache-control"),
		_S("clear-site-data"),
		_S("connection"),
		_S("content-disposition"),
		_S("content-encoding"),
		_S("content-language"),
		_S("content-length"),
		_S("content-location"),
		_S("content-range"),
		_S("content-security-policy"),
		_S("content-security-policy-report-only"),
		_S("content-type"),
		_S("cookie"),
		_S("cross-origin-embedder-policy"),
		_S("cross-origin-opener-policy"),
		_S("cross-origin-resource-policy"),
		_S("date"),
		_S("device-memory"),
		_S("digest"),
		_S("dnt"),
		_S("early-data"),
		_S("etag"),
		_S("expect"),
		_S("expect-ct"),
		_S("expires"),
		_S("feature-policy"),
		_S("forwarded"),
		_S("from"),
		_S("host"),
		_S("if-match"),
		_S("if-modified-since"),
		_S("if-none-match"),
		_S("if-range"),
		_S("if-unmodified-since"),
		_S("index"),
		_S("keep-alive"),
		_S("large-allocation"),
		_S("last-modified"),
		_S("link"),
		_S("location"),
		_S("nel"),
		_S("origin"),
		_S("pragma"),
		_S("proxy-authenticate"),
		_S("proxy-authorization"),
		_S("range"),
		_S("referer"),
		_S("referrer-policy"),
		_S("retry-after"),
		_S("save-data"),
		_S("sec-fetch-dest"),
		_S("sec-fetch-mode"),
		_S("sec-fetch-site"),
		_S("sec-fetch-user"),
		_S("sec-websocket-accept"),
		_S("sec_websocket_key"),
		_S("server"),
		_S("server-timing"),
		_S("set-cookie"),
		_S("sourcemap"),
		_S("strict-transport-security"),
		_S("te"),
		_S("timing-allow-origin"),
		_S("tk"),
		_S("trailer"),
		_S("transfer-encoding"),
		_S("upgrade"),
		_S("upgrade-insecure-requests"),
		_S("user-agent"),
		_S("vary"),
		_S("via"),
		_S("want-digest"),
		_S("warning"),
		_S("www-authenticate"),
		_S("x-content-type-options"),
		_S("x-dns-prefetch-control"),
		_S("x-forwarded-for"),
		_S("x-forwarded-host"),
		_S("x-forwarded-proto"),
		_S("x-frame-options"),
		_S("x-xss-protection"),
	}),
	_MOV((net__http__CommonHeader[102]){
		net__http__CommonHeader__accept, 
		net__http__CommonHeader__accept_ch, 
		net__http__CommonHeader__accept_charset, 
		net__http__CommonHeader__accept_ch_lifetime, 
		net__http__CommonHeader__accept_encoding, 
		net__http__CommonHeader__accept_language, 
		net__http__CommonHeader__accept_patch, 
		net__http__CommonHeader__accept_post, 
		net__http__CommonHeader__accept_ranges, 
		net__http__CommonHeader__access_control_allow_credentials, 
		net__http__CommonHeader__access_control_allow_headers, 
		net__http__CommonHeader__access_control_allow_methods, 
		net__http__CommonHeader__access_control_allow_origin, 
		net__http__CommonHeader__access_control_expose_headers, 
		net__http__CommonHeader__access_control_max_age, 
		net__http__CommonHeader__access_control_request_headers, 
		net__http__CommonHeader__access_control_request_method, 
		net__http__CommonHeader__age, 
		net__http__CommonHeader__allow, 
		net__http__CommonHeader__alt_svc, 
		net__http__CommonHeader__authorization, 
		net__http__CommonHeader__cache_control, 
		net__http__CommonHeader__clear_site_data, 
		net__http__CommonHeader__connection, 
		net__http__CommonHeader__content_disposition, 
		net__http__CommonHeader__content_encoding, 
		net__http__CommonHeader__content_language, 
		net__http__CommonHeader__content_length, 
		net__http__CommonHeader__content_location, 
		net__http__CommonHeader__content_range, 
		net__http__CommonHeader__content_security_policy, 
		net__http__CommonHeader__content_security_policy_report_only, 
		net__http__CommonHeader__content_type, 
		net__http__CommonHeader__cookie, 
		net__http__CommonHeader__cross_origin_embedder_policy, 
		net__http__CommonHeader__cross_origin_opener_policy, 
		net__http__CommonHeader__cross_origin_resource_policy, 
		net__http__CommonHeader__date, 
		net__http__CommonHeader__device_memory, 
		net__http__CommonHeader__digest, 
		net__http__CommonHeader__dnt, 
		net__http__CommonHeader__early_data, 
		net__http__CommonHeader__etag, 
		net__http__CommonHeader__expect, 
		net__http__CommonHeader__expect_ct, 
		net__http__CommonHeader__expires, 
		net__http__CommonHeader__feature_policy, 
		net__http__CommonHeader__forwarded, 
		net__http__CommonHeader__from, 
		net__http__CommonHeader__host, 
		net__http__CommonHeader__if_match, 
		net__http__CommonHeader__if_modified_since, 
		net__http__CommonHeader__if_none_match, 
		net__http__CommonHeader__if_range, 
		net__http__CommonHeader__if_unmodified_since, 
		net__http__CommonHeader__index, 
		net__http__CommonHeader__keep_alive, 
		net__http__CommonHeader__large_allocation, 
		net__http__CommonHeader__last_modified, 
		net__http__CommonHeader__link, 
		net__http__CommonHeader__location, 
		net__http__CommonHeader__nel, 
		net__http__CommonHeader__origin, 
		net__http__CommonHeader__pragma, 
		net__http__CommonHeader__proxy_authenticate, 
		net__http__CommonHeader__proxy_authorization, 
		net__http__CommonHeader__range, 
		net__http__CommonHeader__referer, 
		net__http__CommonHeader__referrer_policy, 
		net__http__CommonHeader__retry_after, 
		net__http__CommonHeader__save_data, 
		net__http__CommonHeader__sec_fetch_dest, 
		net__http__CommonHeader__sec_fetch_mode, 
		net__http__CommonHeader__sec_fetch_site, 
		net__http__CommonHeader__sec_fetch_user, 
		net__http__CommonHeader__sec_websocket_accept, 
		net__http__CommonHeader__sec_websocket_key, 
		net__http__CommonHeader__server, 
		net__http__CommonHeader__server_timing, 
		net__http__CommonHeader__set_cookie, 
		net__http__CommonHeader__sourcemap, 
		net__http__CommonHeader__strict_transport_security, 
		net__http__CommonHeader__te, 
		net__http__CommonHeader__timing_allow_origin, 
		net__http__CommonHeader__tk, 
		net__http__CommonHeader__trailer, 
		net__http__CommonHeader__transfer_encoding, 
		net__http__CommonHeader__upgrade, 
		net__http__CommonHeader__upgrade_insecure_requests, 
		net__http__CommonHeader__user_agent, 
		net__http__CommonHeader__vary, 
		net__http__CommonHeader__via, 
		net__http__CommonHeader__want_digest, 
		net__http__CommonHeader__warning, 
		net__http__CommonHeader__www_authenticate, 
		net__http__CommonHeader__x_content_type_options, 
		net__http__CommonHeader__x_dns_prefetch_control, 
		net__http__CommonHeader__x_forwarded_for, 
		net__http__CommonHeader__x_forwarded_host, 
		net__http__CommonHeader__x_forwarded_proto, 
		net__http__CommonHeader__x_frame_options, 
		net__http__CommonHeader__x_xss_protection, 
	})
)
;
}
}
}
void _vcleanup(void) {
}

int wmain(int ___argc, wchar_t* ___argv[], wchar_t* ___envp[]){
	g_main_argc = ___argc;
	g_main_argv = ___argv;
	__closure_init(); // main()
#if defined(_VGCBOEHM)
	GC_set_pages_executable(0);
	GC_INIT();
#endif
	_vinit(___argc, (voidptr)___argv);
	main__main();
	_vcleanup();
	return 0;
}
// THE END.
