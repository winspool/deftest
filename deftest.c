/*
 * Copyright (c) 2007-22 Detlef Riekenberg
 *
 * newest version:
 * https://www.github.com/winspool/deftest
 *
 * A program to check for predefined macros/defines
 * for various C and C++ compiler
 *
 * ############################## */


#ifdef __cplusplus
extern "C" {
#endif


#define BUFFERSIZE 16384

#define NO_GUI


/* ################################## */
/* STDC headers */
/* default is C11 */

#ifdef USE_POSIX
#ifndef USE_C11
#define USE_C11
#endif
#endif

#ifdef USE_C23
#ifndef USE_C17
#define USE_C17
#endif
#endif

#ifdef USE_C18
#ifndef USE_C17
#define USE_C17
#endif
#endif

#ifdef USE_C17
#ifndef USE_C11
#define USE_C11
#endif
#endif

#ifdef USE_C11
#ifndef USE_C99
#define USE_C99
#endif
#endif

#ifdef USE_C99
#ifndef USE_C95
#define USE_C95
#endif
#endif


#ifdef USE_C95
#ifndef USE_C90
#define USE_C90
#endif
#endif

#ifdef USE_C90
#ifndef USE_C89
#define USE_C89
#endif
#endif

#ifdef USE_C89
#ifndef USE_ANSI_C
#define USE_ANSI_C
#endif
#endif


#ifdef __cplusplus
#include <cstdio>
#include <cstdarg>
#include <cstring>

#else
#include <stdio.h>
#include <stdarg.h>
#include <string.h>


/* use all ANSI C (c89) header */
#ifdef USE_ANSI_C
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#endif

/* ANSI C (c89) header */
#ifdef USE_ASSERT_H
#include <assert.h>
#endif
#ifdef USE_CTYPE_H
#include <ctype.h>
#endif
#ifdef USE_ERRNO_H
#include <errno.h>
#endif
#ifdef USE_FLOAT_H
#include <float.h>
#endif
#ifdef USE_LIMITS_H
#include <limits.h>
#endif
#ifdef USE_LOCALE_H
#include <locale.h>
#endif
#ifdef USE_MATH_H
#include <math.h>
#endif
#ifdef USE_SETJMP_H
#include <setjmp.h>
#endif
#ifdef USE_SIGNAL_H
#include <signal.h>
#endif
#ifdef USE_STDARG_H
#include <stdarg.h>
#endif
#ifdef USE_STDDEF_H
#include <stddef.h>
#endif
#ifdef USE_STDIO_H
#include <stdio.h>
#endif
#ifdef USE_STDLIB_H
#include <stdlib.h>
#endif
#ifdef USE_STRING_H
#include <string.h>
#endif
#ifdef USE_TIME_H
#include <time.h>
#endif


/* use all c95 (c90 NA1) header */
#ifdef USE_C95
#ifndef __TINYC__
#include <iso646.h>
#endif
#include <wchar.h>
#include <wctype.h>
#endif

/* c95 header */
#ifdef USE_ISO646_H
#include <iso646.h>
#endif
#ifdef USE_WCHAR_H
#include <wchar.h>
#endif
#ifdef USE_WCTYPE_H
#include <wctype.h>
#endif


/* use all c99 header */
#ifdef USE_C99
#ifndef __TINYC__
/* does not compile with tiny c compiler */
#include <complex.h>
#endif
#include <fenv.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <tgmath.h>
#endif

/* c99 headers */
#ifdef USE_COMPLEX_H
#include <complex.h>
#endif
#ifdef USE_FENV_H
#include <fenv.h>
#endif
#ifdef USE_INTTYPES_H
#include <inttypes.h>
#endif
#ifdef USE_STDBOOL_H
#include <stdbool.h>
#endif
#ifdef USE_STDINT_H
#include <stdint.h>
#endif
#ifdef USE_TGMATH_H
#include <tgmath.h>
#endif


/* use all c11 header */
#ifdef USE_C11
#include <stdalign.h>
#include <stdatomic.h>
#include <stdnoreturn.h>
// #include <threads.h>
#include <uchar.h>
#endif

/* c11 headers */
#ifdef USE_STDALIGN_H
#include <stdalign.h>
#endif
#ifdef USE_STDATOMIC_H
#include <stdatomic.h>
#endif
#ifdef USE_STDNORETURN_H
#include <stdnoreturn.h>
#endif
#ifdef USE_THREADS_H
#include <threads.h>
#endif
#ifdef USE_UCHAR_H
#include <uchar.h>
#endif


/* POSIX header */
#ifdef USE_POSIX
#include <aio.h>
#include <arpa/inet.h>
#include <cpio.h>
#include <dirent.h>
#include <dlfcn.h>
#include <fcntl.h>
#include <fmtmsg.h>
#include <fnmatch.h>
#include <ftw.h>
#include <glob.h>
#include <grp.h>
#include <iconv.h>
#include <langinfo.h>
#include <libgen.h>
#include <monetary.h>
#include <mqueue.h>
//#include <ndbm.h>
#include <net/if.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <nl_types.h>
#include <poll.h>
#include <pthread.h>
#include <pwd.h>
#include <regex.h>
#include <sched.h>
#include <search.h>
#include <semaphore.h>
#include <spawn.h>
#include <strings.h>
#include <stropts.h>
#include <sys/ipc.h>
#include <sys/mman.h>
#include <sys/msg.h>
#include <sys/resource.h>
#include <sys/select.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/statvfs.h>
#include <sys/time.h>
#include <sys/times.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <sys/un.h>
#include <sys/utsname.h>
#include <sys/wait.h>
#include <syslog.h>
#include <tar.h>
#include <termios.h>
//#include <trace.h>
#include <ulimit.h>
#include <unistd.h>
#include <utime.h>
#include <utmpx.h>
#include <wordexp.h>
#endif

#ifdef USE_AIO_H
#include <aio.h>
#endif
#ifdef USE_ARPA_INET_H
#include <arpa/inet.h>
#endif
#ifdef USE_CPIO_H
#include <cpio.h>
#endif
#ifdef USE_DIRENT_H
#include <dirent.h>
#endif
#ifdef USE_DLFCN_H
#include <dlfcn.h>
#endif
#ifdef USE_FCNTL_H
#include <fcntl.h>
#endif
#ifdef USE_FMTMSG_H
#include <fmtmsg.h>
#endif
#ifdef USE_FNMATCH_H
#include <fnmatch.h>
#endif
#ifdef USE_FTW_H
#include <ftw.h>
#endif
#ifdef USE_GLOB_H
#include <glob.h>
#endif
#ifdef USE_GRP_H
#include <grp.h>
#endif
#ifdef USE_ICONV_H
#include <iconv.h>
#endif
#ifdef USE_LANGINFO_H
#include <langinfo.h>
#endif
#ifdef USE_LIBGEN_H
#include <libgen.h>
#endif
#ifdef USE_MONETARY_H
#include <monetary.h>
#endif
#ifdef USE_MQUEUE_H
#include <mqueue.h>
#endif
#ifdef USE_NDBM_H
#include <ndbm.h>
#endif
#ifdef USE_NET_IF_H
#include <net/if.h>
#endif
#ifdef USE_NETDB_H
#include <netdb.h>
#endif
#ifdef USE_NETINET_IN_H
#include <netinet/in.h>
#endif
#ifdef USE_NETINET_TCP_H
#include <netinet/tcp.h>
#endif
#ifdef USE_NL_TYPES_H
#include <nl_types.h>
#endif
#ifdef USE_POLL_H
#include <poll.h>
#endif
#ifdef USE_PTHREAD_H
#include <pthread.h>
#endif
#ifdef USE_PWD_H
#include <pwd.h>
#endif
#ifdef USE_REGEX_H
#include <regex.h>
#endif
#ifdef USE_SCHED_H
#include <sched.h>
#endif
#ifdef USE_SEARCH_H
#include <search.h>
#endif
#ifdef USE_SEMAPHORE_H
#include <semaphore.h>
#endif
#ifdef USE_SPAWN_H
#include <spawn.h>
#endif
#ifdef USE_STRINGS_H
#include <strings.h>
#endif
#ifdef USE_STROPTS_H
#include <stropts.h>
#endif
#ifdef USE_SYS_IPC_H
#include <sys/ipc.h>
#endif
#ifdef USE_SYS_MMAN_H
#include <sys/mman.h>
#endif
#ifdef USE_SYS_MSG_H
#include <sys/msg.h>
#endif
#ifdef USE_SYS_RESOURCE_H
#include <sys/resource.h>
#endif
#ifdef USE_SYS_SELECT_H
#include <sys/select.h>
#endif
#ifdef USE_SYS_SEM_H
#include <sys/sem.h>
#endif
#ifdef USE_SYS_SHM_H
#include <sys/shm.h>
#endif
#ifdef USE_SYS_SOCKET_H
#include <sys/socket.h>
#endif
#ifdef USE_SYS_STAT_H
#include <sys/stat.h>
#endif
#ifdef USE_SYS_STATVFS_H
#include <sys/statvfs.h>
#endif
#ifdef USE_SYS_TIME_H
#include <sys/time.h>
#endif
#ifdef USE_SYS_TIMES_H
#include <sys/times.h>
#endif
#ifdef USE_SYS_TYPES_H
#include <sys/types.h>
#endif
#ifdef USE_SYS_UIO_H
#include <sys/uio.h>
#endif
#ifdef USE_SYS_UN_H
#include <sys/un.h>
#endif
#ifdef USE_SYS_UTSNAME_H
#include <sys/utsname.h>
#endif
#ifdef USE_SYS_WAIT_H
#include <sys/wait.h>
#endif
#ifdef USE_SYSLOG_H
#include <syslog.h>
#endif
#ifdef USE_TAR_H
#include <tar.h>
#endif
#ifdef USE_TERMIOS_H
#include <termios.h>
#endif
#ifdef USE_TRACE_H
#include <trace.h>
#endif
#ifdef USE_ULIMIT_H
#include <ulimit.h>
#endif
#ifdef USE_UNISTD_H
#include <unistd.h>
#endif
#ifdef USE_UTIME_H
#include <utime.h>
#endif
#ifdef USE_UTMPX_H
#include <utmpx.h>
#endif
#ifdef USE_WORDEXP_H
#include <wordexp.h>
#endif

/* for #ifdef __cplusplus */
#endif

/* ################################## */
/* windows headers */

#ifndef NO_WINDOWS
#ifndef USE_WINDOWS
# ifdef __NT__
#  define USE_WINDOWS __NT__
# endif
#endif


#ifndef USE_WINDOWS
# ifdef _WIN32
#  define USE_WINDOWS _WIN32
# endif
#endif

#ifndef USE_WINDOWS
# ifdef __WIN32__
#  define USE_WINDOWS __WIN32__
# endif
#endif

#ifndef USE_WINDOWS
# ifdef __WIN32
#  define USE_WINDOWS __WIN32
# endif
#endif

#ifndef USE_WINDOWS
# ifdef _WIN32_
#  define USE_WINDOWS _WIN32_
# endif
#endif

#ifndef USE_WINDOWS
# ifdef WIN32
#  define USE_WINDOWS WIN32
# endif
#endif

#ifndef USE_WINDOWS
# ifdef __WINNT_WIN32
#  define USE_WINDOWS __WINNT_WIN32
# endif
#endif

#ifndef USE_WINDOWS
# ifdef _WIN32_WINNT
#  define USE_WINDOWS _WIN32_WINNT
# endif
#endif

#ifndef USE_WINDOWS
# ifdef WINVER
#  define USE_WINDOWS WINVER
# endif
#endif

#ifndef USE_WINDOWS
# ifdef __WINDOWS__
#  define USE_WINDOWS __WINDOWS__
# endif
#endif

#ifndef USE_WINDOWS
# ifdef _WIN32_WCE
#  define USE_WINDOWS _WIN32_WCE
# endif
#endif


#endif

/* ################################## */

#ifndef NO_WINMAIN
#ifdef NO_WINDOWS
#define NO_WINMAIN NO_WINDOWS
#endif
#endif


#ifndef NO_WINDOWS
#ifdef USE_WINDOWS
#include <windows.h>
#endif
#ifdef _WINNT_WIN32
#include <winuser.h>
#endif
#ifdef _WIN32
#include <winuser.h>
#endif
#ifdef __WIN32__
#include <winuser.h>
#endif
#ifdef __NT__
#include <winuser.h>
#endif


#ifdef USE_WINSOCK
#include <winsock.h>
#endif

#ifdef USE_WINSOCK2
#include <winsock2.h>
#endif

#endif


/* ########################################## */

#define __my_stringify_1(x) #x
#define __my_stringify(x)   __my_stringify_1(x)


char *get_txt(char * buffer)
{
    buffer[0] = 0;

#ifndef NO_STDIO
/* ################### */
/* DATE FILE LINE func */

#ifdef __LINE__
     sprintf(buffer+strlen(buffer), "__LINE__\t\t => %d\n", __LINE__ );
#endif

#ifdef __BASE_FILE__
     sprintf(buffer+strlen(buffer), "__BASE_FILE__\t\t => '%s'\n", __BASE_FILE__ );
#endif

#ifdef __FILE__
     sprintf(buffer+strlen(buffer), "__FILE__\t\t => '%s'\n", __FILE__ );
#endif

/* used by MSVC: function name */
#ifdef __FUNCNAME__
     sprintf(buffer+strlen(buffer), "__FUNCNAME__\t\t => '%s'\n", __FUNCNAME__ );
#endif

/* used by MSVC: decorated function name */
#ifdef __FUNCDNAME__
     sprintf(buffer+strlen(buffer), "__FUNCDNAME__\t\t => '%s'\n", __FUNCDNAME__ );
#endif

/* used by MSVC: function signature */
#ifdef __FUNCSIG__
     sprintf(buffer+strlen(buffer), "__FUNCSIG__\t\t => '%s'\n", __FUNCSIG__ );
#endif

#ifdef __FUNCTION__
     sprintf(buffer+strlen(buffer), "__FUNCTION__\t\t => '%s'\n", __FUNCTION__ );
#endif
#ifdef __func__
     sprintf(buffer+strlen(buffer), "__func__\t\t => '%s'\n", __func__ );
#endif
#ifdef __PRETTY_FUNCTION__
     sprintf(buffer+strlen(buffer), "__PRETTY_FUNCTION__\t => '%s'\n", __PRETTY_FUNCTION__ );
#endif


#ifdef __DATE__
     sprintf(buffer+strlen(buffer), "__DATE__\t\t => '%s'\n", __DATE__ );
#endif

#ifdef __TIME__
     sprintf(buffer+strlen(buffer), "__TIME__\t\t => '%s'\n", __TIME__ );
#endif

#ifdef __TIMESTAMP__
     sprintf(buffer+strlen(buffer), "__TIMESTAMP__\t\t => '%s'\n", __TIMESTAMP__ );
#endif


/* ################## */
/* compiler-detection */

/* Borland C, TurboC */

#ifdef __BORLANDC__
    sprintf(buffer + strlen(buffer), "__BORLANDC__\t\t => 0x%x (%d.%x)\n",
        __BORLANDC__, __BORLANDC__ >>8, __BORLANDC__ & 0xff);
#endif

/* what is ARC?  includes mwdth.h after __CCAC__ check */
#ifdef __CCAC__
    if ( (__CCAC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CCAC__\t\t => %d\n", __CCAC__ + 0);
    } else {
        strcat(buffer, "__CCAC__\n");
    }
#endif

/* armcc */
#ifdef __CC_ARM
    if ( (__CC_ARM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CC_ARM\t\t => 0x%x\n", __CC_ARM + 0);
    } else {
        strcat(buffer, "__CC_ARM\n");
    }
#endif


/*  NORCROFT C */
#ifdef __CC_NORCROFT
    if ( (__CC_NORCROFT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CC_NORCROFT\t\t => 0x%x\n", __CC_NORCROFT + 0);
    } else {
        strcat(buffer, "__CC_NORCROFT\n");
    }
#endif


/* chibicc is a small c11 compiler to assist a book for compiler development */
#ifdef __chibicc__
    if ( (__chibicc__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__chibicc__\t\t => %d\n", __chibicc__ + 0);
    } else {
        strcat(buffer, "__chibicc__\n");
    }
#endif


#ifdef __CODEGEARC__
    sprintf(buffer + strlen(buffer), "__CODEGEARC__\t\t => 0x%x (%d.%x)\n",
        __CODEGEARC__, __CODEGEARC__ >>8, __CODEGEARC__ & 0xff);
#endif


/* clang */
#ifdef __clang__
    if ( (__clang__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__clang__ \t\t => %d\n", __clang__ + 0);
    } else {
        strcat(buffer, "__clang__\n");
    }
#endif
#ifdef __clang_major__
    if ( (__clang_major__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__clang_major__ \t => %d\n", __clang_major__ + 0);
    } else {
        strcat(buffer, "__clang_major__\n");
    }
#endif

#ifdef __clang_minor__
    if ( (__clang_minor__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__clang_minor__ \t => %d\n", __clang_minor__ + 0);
    } else {
        strcat(buffer, "__clang_minor__\n");
    }
#endif

#ifdef __clang_patchlevel__
    if ( (__clang_patchlevel__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__clang_patchlevel__ \t => %d\n", __clang_patchlevel__ + 0);
    } else {
        strcat(buffer, "__clang_patchlevel__\n");
    }
#endif

#ifdef __clang_version__
    sprintf(buffer + strlen(buffer), "__clang_version__\t => '%s'\n", __clang_version__ );
#endif



/* comeau C++ */
#ifdef __COMO__
    if ( (__COMO__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__COMO__ \t\t => %d\n", __COMO__ + 0);
    } else {
        strcat(buffer, "__COMO__\n");
    }
#endif
#ifdef __COMO_VERSION__
    sprintf(buffer + strlen(buffer), "__COMO_VERSION__\t\t => 0x%d (%d.%d)\n",
        __COMO_VERSION__, __COMO_VERSION__ /100, __COMO_VERSION__ % 100 );

#endif


/* cray C/C++ */
#ifdef _CRAYC
    if ( (_CRAYC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CRAYC\t\t => %x (%d)\n", _CRAYC , __CRAYC/1000);
    } else {
        strcat(buffer, "_CRAYC\n");
    }
#endif


/* cygwin: gcc for DOS */
#ifdef __CYGWIN__
    if ( (__CYGWIN__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CYGWIN__\t\t => %d\n", __CYGWIN__ + 0);
    } else {
        strcat(buffer, "__CYGWIN__\n");
    }
#endif
#ifdef __CYGWIN32
    if ( (__CYGWIN32 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CYGWIN32\t\t => %d\n", __CYGWIN32 + 0);
    } else {
        strcat(buffer, "__CYGWIN32\n");
    }
#endif
#ifdef __CYGWIN32__
    if ( (__CYGWIN32__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CYGWIN32__\t\t => %d\n", __CYGWIN32__ + 0);
    } else {
        strcat(buffer, "__CYGWIN32__\n");
    }
#endif


/* Compa1 C++, decstation, vax, .... */
#ifdef __DECC
    if ( (__DECC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DECC\t\t => %d\n", __DECC + 0);
    } else {
        strcat(buffer, "__DECC\n");
    }
#endif
#ifdef __DECCXX
    if ( (__DECCXX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DECCXX\t\t => %d\n", __DECCXX + 0);
    } else {
        strcat(buffer, "__DECCXX\n");
    }
#endif


/* Digital Mars, Symantec C, Zortech C, (Datalight C: missing) */
#ifdef __DMC__
    sprintf(buffer + strlen(buffer), "__DMC__ \t\t => 0x%x (DMC %d.%d)\n", __DMC__,
        __DMC__ / 256, (__DMC__ & 0xf0 ) / 16 * 10 + (__DMC__ & 0x0f));
#endif


/*  edg based compiler */
#ifdef __EDG__
    if ( (__EDG__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__EDG__\t\t\t => %d\n", __EDG__ + 0);
    } else {
        strcat(buffer, "__EDG__\n");
    }
#endif

/* edg versions are direct after EDG */
#ifdef __EDG_VERSION__
    if ( (__EDG_VERSION__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__EDG_VERSION__\t\t => %d\n", __EDG_VERSION__ + 0);
    } else {
        strcat(buffer, "__EDG_VERSION__\n");
    }
#endif


/* GNU C */
#ifdef __GNUC__
#ifdef __GNUC_MINOR__
#ifdef __GNUC_PATCHLEVEL__
    sprintf(buffer + strlen(buffer), "__GNUC__ \t\t => %d (GCC %d.%d.%d)\n",
                __GNUC__ , __GNUC__ ,  __GNUC_MINOR__ + 0,  __GNUC_PATCHLEVEL__ + 0 );
#else
        sprintf(buffer + strlen(buffer), "__GNUC__ \t\t => %d (GCC %d.%d)\n",
                __GNUC__ , __GNUC__ ,  __GNUC_MINOR__ + 0 );
#endif
#else
    if ( (__GNUC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUC__\t\t => %d\n", __GNUC__ + 0);
    } else {
        strcat(buffer, "__GNUC__\n");
    }
#endif
#endif

/* GCC versions are direct after GCC */
#ifdef __GNUC_MAJOR__
    if ( (__GNUC_MAJOR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUC_MAJOR__\t\t => %d\n", __GNUC_MAJOR__ + 0);
    } else {
        strcat(buffer, "__GNUC_MAJOR__\n");
    }
#endif
#ifdef __GNUC_MINOR__
    if ( (__GNUC_MINOR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUC_MINOR__\t\t => %d\n", __GNUC_MINOR__ + 0);
    } else {
        strcat(buffer, "__GNUC_MINOR__\n");
    }
#endif
#ifdef __GNUC_PATCHLEVEL__
    if ( (__GNUC_PATCHLEVEL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUC_PATCHLEVEL__ \t => %d\n", __GNUC_PATCHLEVEL__ + 0);
    } else {
        strcat(buffer, "__GNUC_PATCHLEVEL__\n");
    }
#endif



/* GNU c++ */
#ifdef __GNUG__
    if ( (__GNUG__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUG__\t\t => %d\n", __GNUG__ + 0);
    } else {
        strcat(buffer, "__GNUG__\n");
    }
#endif
/* GNUG versions are direct after GNUG */
/* GNU C++ Compiler */
#ifdef __GNUG_MAJOR__
    if ( (__GNUG_MAJOR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUG_MAJOR__\t\t => %d\n", __GNUG_MAJOR__ + 0);
    } else {
        strcat(buffer, "__GNUG_MAJOR__\n");
    }
#endif
#ifdef __GNUG_MINOR__
    if ( (__GNUG_MINOR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUG_MINOR__\t\t => %d\n", __GNUG_MINOR__ + 0);
    } else {
        strcat(buffer, "__GNUG_MINOR__\n");
    }
#endif
#ifdef __GNUG_PATCHLEVEL__
    if ( (__GNUG_PATCHLEVEL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUG_PATCHLEVEL__ \t => %d\n", __GNUG_PATCHLEVEL__ + 0);
    } else {
        strcat(buffer, "__GNUG_PATCHLEVEL__\n");
    }
#endif


/*  HP C++: latest for PA-RISC is 38000, for HP-UX/ia64 is 61300 */
#ifdef __HP_aCC
    if ( (__HP_aCC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__HP_aCC\t\t => %ld  (A.%2d.%2d)\n", __HP_aCC ,
                __HP_aCC  / 10000, (__HP_aCC % 10000) / 100);
    } else {
        strcat(buffer, "__HP_aCC\n");
    }
#endif
#ifdef __HP_cc
    if ( (__HP_cc + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__HP_cc\t\t => %d\n", __HP_cc + 0);
    } else {
        strcat(buffer, "__HP_cc\n");
    }
#endif
#ifdef __hpux
    if ( (__hpux + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__hpux\t\t => %d\n", __hpux + 0);
    } else {
        strcat(buffer, "__hpux\n");
    }
#endif


/* IBM C / IBM CPP, xlC */
#ifdef __IBMC__
    sprintf(buffer + strlen(buffer), "__IBMC__ \t\t => %d\n", __IBMC__, __IBMC__);
#endif
#ifdef __IBMCPP__
    sprintf(buffer + strlen(buffer), "__IBMCPP__ \t\t => %d\n", __IBMCPP__, __IBMCPP__);
#endif


/* Intel CC */
#ifdef __ICC__
    if ( (__ICC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ICC__\t\t => %d\n", __ICC__ + 0);
    } else {
        strcat(buffer, "__ICC__\n");
    }
#endif


/* Is this an ARM compiler from Intel ?*/
/* used in microcontroller related source */
#ifdef __ICCARM__
    if ( (__ICCARM__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ICCARM__\t\t => %d\n", __ICCARM__ + 0);
    } else {
        strcat(buffer, "__ICCARM__\n");
    }
#endif


/* Intel CC */
#ifdef __INTEL_COMPILER
    if (__INTEL_COMPILER < 2020)
    {
        sprintf(buffer + strlen(buffer), "__INTEL_COMPILER\t => %d (ICC %d.%d.%d)\n",
                __INTEL_COMPILER,
                __INTEL_COMPILER/100, (__INTEL_COMPILER %100) /10, __INTEL_COMPILER % 10);
    }
    else
    {
        sprintf(buffer + strlen(buffer), "__INTEL_COMPILER\t => %d (ICC %d)\n",
                __INTEL_COMPILER, __INTEL_COMPILER);
    }
#endif


/* KAI C++ */
#ifdef __KCC
    if ( (__KCC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__KCC\t\t => %d\n", __KCC + 0);
    } else {
        strcat(buffer, "__KCC\n");
    }
#endif


/* lcc */
#ifdef __LCC__
    if ( (__LCC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LCC__\t\t\t => %d\n", __LCC__ + 0);
    } else {
        strcat(buffer, "__LCC__\n");
    }
#endif

/* used by lcc (Windows, 64 bit mode) */
#ifdef __LCC64__
    if ( (__LCC64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LCC64__\t\t => %d\n", __LCC64__ + 0);
    } else {
        strcat(buffer, "__LCC64__\n");
    }
#endif


/* Used for the Metrowerks Codewarrior (BeOS/PPC) */
#ifdef METROWERKS
    if ( (METROWERKS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "METROWERKS\t\t => 0x%x (%s)\n", METROWERKS ,
        METROWERKS >= 0x3208 ? ">9.6" :
        METROWERKS >= 0x3200 ? "9.x" :
        METROWERKS >= 0x3000 ? "8.x" : "7.x or older");
    } else {
        strcat(buffer, "METROWERKS\n");
    }
#endif

/* mingw */
#ifdef mingw
    if ( (mingw + 1) > 1) {
        sprintf(buffer + strlen(buffer), "mingw\t\t => %d\n", mingw + 0);
    } else {
        strcat(buffer, "mingw\n");
    }
#endif
#ifdef _mingw
    if ( (_mingw + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mingw\t\t => %d\n", _mingw + 0);
    } else {
        strcat(buffer, "_mingw\n");
    }
#endif
#ifdef _mingw_
    if ( (_mingw_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mingw_\t\t => %d\n", _mingw_ + 0);
    } else {
        strcat(buffer, "_mingw_\n");
    }
#endif
#ifdef __mingw
    if ( (__mingw + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mingw\t\t => %d\n", __mingw + 0);
    } else {
        strcat(buffer, "__mingw\n");
    }
#endif
#ifdef __mingw__
    if ( (__mingw__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mingw__\t\t => %d\n", __mingw__ + 0);
    } else {
        strcat(buffer, "__mingw__\n");
    }
#endif

#ifdef MINGW
    if ( (MINGW + 1) > 1) {
        sprintf(buffer + strlen(buffer), "MINGW\t\t => %d\n", MINGW + 0);
    } else {
        strcat(buffer, "MINGW\n");
    }
#endif
#ifdef _MINGW
    if ( (_MINGW + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MINGW\t\t => %d\n", _MINGW + 0);
    } else {
        strcat(buffer, "_MINGW\n");
    }
#endif
#ifdef _MINGW_
    if ( (_MINGW_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MINGW_\t\t => %d\n", _MINGW_ + 0);
    } else {
        strcat(buffer, "_MINGW_\n");
    }
#endif
#ifdef __MINGW
    if ( (__MINGW + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW\t\t => %d\n", __MINGW + 0);
    } else {
        strcat(buffer, "__MINGW\n");
    }
#endif
#ifdef __MINGW__
    if ( (__MINGW__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW__\t\t => %d\n", __MINGW__ + 0);
    } else {
        strcat(buffer, "__MINGW__\n");
    }
#endif

#ifdef MINGW32
    if ( (MINGW32   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "MINGW32  \t\t => %d\n", MINGW32   + 0);
    } else {
        strcat(buffer, "MINGW32\n");
    }
#endif

#ifdef _MINGW32
    if ( (_MINGW32   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MINGW32  \t\t => %d\n", _MINGW32   + 0);
    } else {
        strcat(buffer, "_MINGW32\n");
    }
#endif

#ifdef _MINGW32_
    if ( (_MINGW32_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MINGW32_  \t\t => %d\n", _MINGW32_   + 0);
    } else {
        strcat(buffer, "_MINGW32_\n");
    }
#endif

#ifdef __MINGW32
    if ( (__MINGW32   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW32  \t\t => %d\n", __MINGW32   + 0);
    } else {
        strcat(buffer, "__MINGW32\n");
    }
#endif

/* set by mingw32-w64, checked in tinyfiledialogs */
#ifdef __MINGW32__
    if ( (__MINGW32__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW32__  \t\t => %d\n", __MINGW32__   + 0);
    } else {
        strcat(buffer, "__MINGW32__\n");
    }
#endif


/* set by mingw64 for 64bit code */
#ifdef __MINGW64__
    if ( (__MINGW64__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW64__  \t\t => %d\n", __MINGW64__   + 0);
    } else {
        strcat(buffer, "__MINGW64__\n");
    }
#endif


/* MPW_C became Visual C */
#ifdef MPW_C
    sprintf(buffer + strlen(buffer), "MPW_C\t\t => %d (Visual C %d.%d)\n", MPW_C,
            MPW_C / 100 - (MPW_C < 900) ? 7 : 6, (MPW_C %100));
#endif
/* MPW_CPLUS became Visual C++ */
#ifdef MPW_CPLUS
    sprintf(buffer + strlen(buffer), "MPW_CPLUS\t\t => %d (Visual C++ %d.%d)\n", MPW_CPLUS,
            MPW_CPLUS / 100 - (MPW_CPLUS < 900) ? 7 : 6, (MPW_CPLUS %100));
#endif


/*  Apple MPW  C  */
#ifdef __MRC__
    sprintf(buffer + strlen(buffer), "__MRC__\t\t => 0x%x (%d.%d)\n", __MRC__,
            __MRC__ >> 8, (__MRC__ & 0xff));
#endif


/* MS Visual C */
#ifdef __MSVC__
    if ( (__MSVC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MSVC__ \t\t => %d\n", __MSVC__ + 0);
    } else {
        strcat(buffer, "__MSVC__\n");
    }
#endif


/*  Metrowerks Codewarrior */
#ifdef __MWERKS__
    if ( (__MWERKS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MWERKS__\t\t => 0x%x (%s)\n", __MWERKS__ ,
        __MWERKS__ >= 0x3208 ? ">9.6" :
        __MWERKS__ >= 0x3200 ? "9.x" :
        __MWERKS__ >= 0x3000 ? "8.x" : "7.x or older");
    } else {
        strcat(buffer, "__MWERKS__\n");
    }
#endif


/* Compa1 C++, decstation, vax, .... */
#ifdef __osf__
    if ( (__osf__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__osf__\t\t => %d\n", __osf__ + 0);
    } else {
        strcat(buffer, "__osf__\n");
    }
#endif


/* __PACC__: PAascal C Compiler */
#ifdef __PACC__
    if ( (__PACC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__PACC__ \t\t => %d\n", __PACC__ + 0);
    } else {
        strcat(buffer, "__PACC__\n");
    }
#endif


/* PathScale EKOPath C++ compiler is based on clang */
#ifdef __PATHCC__
    if ( (__PATHCC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__PATHCC__\t\t => 0x%x\n", __PATHCC__ + 0);
    } else {
        strcat(buffer, "__PATHCC__\n");
    }
#endif
#ifdef __PATHSCALE__
    if ( (__PATHSCALE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__PATHSCALE__\t\t => 0x%x\n", __PATHSCALE__ + 0);
    } else {
        strcat(buffer, "__PATHSCALE__\n");
    }
#endif


/* Portable C Compiler  */
#ifdef __PCC__
    sprintf(buffer + strlen(buffer), "__PCC__ \t\t => %d (PCC %d.%d.%d)\n", 
            __PCC__, __PCC__, __PCC_MINOR__, __PCC_MINORMINOR__);
#endif


/* Pelles C Compiler (started from LCC) */
#ifdef __POCC__
    sprintf(buffer + strlen(buffer), "__POCC__ \t\t => 0x%x/%04d (PellesC %d.%d)\n", 
            __POCC__, __POCC__, __POCC__ / 100, __POCC__ % 100);
#endif

/* Digital Mars, Symantec C, Zortech C, (Datalight C: missing) */
#ifdef __SC__
    sprintf(buffer + strlen(buffer), "__SC__\t\t\t => 0x%x (%s %d.%d)\n", __SC__,
# ifdef __DMC__
    "DMC",
# else
    "SC",
# endif
    __SC__ / 256, (__SC__ & 0xf0 ) / 16 * 10 + (__SC__ & 0x0f));

#endif


/* simple-cc.org */
#ifdef __SCC__
    if ( (__SCC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SCC__\t\t => 0x%x\n", __SCC__ + 0);
    } else {
        strcat(buffer, "__SCC__\n");
    }
#endif


/*  SCO OpenServer */
#ifdef _SCO_DS
    if ( (_SCO_DS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SCO_DS\t\t => 0x%x\n", _SCO_DS + 0);
    } else {
        strcat(buffer, "_SCO_DS\n");
    }
#endif


/* MIPSpro / sgi. */
#if defined (sgi) && defined (_COMPILER_VERSION)
    if ( (sgi + 1) > 1) {
        sprintf(buffer + strlen(buffer), "sgi\t\t\t => %x\n", sgi + 0);
    } else {
        strcat(buffer, "sgi\n");
    }
#endif
/* MIPSpro / sgi. Probably with _COMPILER_VERSION */
#ifdef __sgi
    if ( (__sgi + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__sgi\t\t\t => %x\n", __sgi + 0);
    } else {
        strcat(buffer, "__sgi\n");
    }
#endif


/* Sun Forte C/C++ (Workshop Pro) */
#ifdef __SUNPRO_C
    if ( (__SUNPRO_C + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SUNPRO_C\t\t => 0x%x\n", __SUNPRO_C + 0);
    } else {
        strcat(buffer, "__SUNPRO_C\n");
    }
#endif
#ifdef __SUNPRO_CC
    if ( (__SUNPRO_CC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SUNPRO_CC\t\t => 0x%x\n", __SUNPRO_CC + 0);
    } else {
        strcat(buffer, "__SUNPRO_CC\n");
    }
#endif

/* TenDRA */
#ifdef __TenDRA__
    if ( (__TenDRA__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TenDRA__\t\t => 0x%x\n", __TenDRA__ + 0);
    } else {
        strcat(buffer, "__TenDRA__\n");
    }
#endif


/* TinyC Compiler */
#ifdef __TINYC__
    if ( (__TINYC__ + 1) > 1) {
        if ( __TINYC__  > 1) {
            sprintf(buffer + strlen(buffer), "__TINYC__ \t\t => %d (TCC %d.%d.%d)\n",
                __TINYC__, __TINYC__ / 10000, (__TINYC__ % 10000) / 100, __TINYC__ % 100);
        } else {
            sprintf(buffer + strlen(buffer), "__TINYC__ \t\t => %d\n", __TINYC__ + 0);
        }
    } else {
        strcat(buffer, "__TINYC__\n");
    }
#endif


/* Borland C, TurboC */
#ifdef __TURBOC__
    sprintf(buffer + strlen(buffer), "__TURBOC__\t\t => 0x%x (%d,%x)\n",
        __TURBOC__, __TURBOC__ >>8, __TURBOC__ & 0xff);
#endif


/* USL C */
#ifdef __USLC__
    if ( (__USLC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__USLC__\t\t => 0x%x\n", __USLC__ + 0);
    } else {
        strcat(buffer, "__USLC__\n");
    }
#endif


/* Compa1 C++, decstation, vax, .... */
#ifdef VAXC
    if ( (VAXC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "VAXC\t\t => %d\n", VAXC + 0);
    } else {
        strcat(buffer, "VAXC\n");
    }
#endif
#ifdef __VAXC
    if ( (__VAXC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__VAXC\t\t => %d\n", __VAXC + 0);
    } else {
        strcat(buffer, "__VAXC\n");
    }
#endif


/* Watcom C/C++, Since version 11: OpenWatcom C/C++ */
#ifdef __WATCOMC__
    sprintf(buffer + strlen(buffer), "__WATCOMC__\t\t => %d (%sWatcom %d.%-1d)\n",
        __WATCOMC__, (__WATCOMC__ > 1100) ? "Open " : "",
        (__WATCOMC__ > 1100) ? (__WATCOMC__ - 1100) / 100 : (__WATCOMC__ / 100),
        (__WATCOMC__ > 1100) ? (__WATCOMC__ - 1100) % 100 : (__WATCOMC__ % 100));
#endif



/* IBM C / IBM CPP, xlC */
#ifdef __xlc__
    sprintf(buffer + strlen(buffer), "__xlc__ \t\t => '%s'\n", #__xlc__ );
#endif
#ifdef __xlC__
    sprintf(buffer + strlen(buffer), "__xlC__ \t\t => 0x%x (%d.%d.%d)\n", __xlC__,
            __xlC__ / 1000, __xlC__ / 100 - (__xlC__ / 1000) * 10,
            __xlC__ / 10 - (__xlC__ / 100) * 10 );
#endif


/* zig from ziglang.org */
#ifdef _ZIG
    if ( (_ZIG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ZIG\t\t\t => %x\n", _ZIG + 0);
    } else {
        strcat(buffer, "_ZIG\n");
    }
#endif
#ifdef __ZIG
    if ( (__ZIG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ZIG\t\t\t => %x\n", __ZIG + 0);
    } else {
        strcat(buffer, "__ZIG__\n");
    }
#endif
#ifdef __ZIG__
    if ( (__ZIG__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ZIG__\t\t\t => %x\n", __ZIG__ + 0);
    } else {
        strcat(buffer, "__ZIG__\n");
    }
#endif


/* Digital Mars, Symantec C, Zortech C, (Datalight C: missing) */
#ifdef __ZTC__
    sprintf(buffer + strlen(buffer), "__ZTC__\t\t\t => 0x%x (%s %d.%d)\n", __ZTC__,
# ifdef __DMC__
    "DMC",
# else
#  ifdef __SC__
    "SC",
#  else
    "ZTC",
#  endif
# endif
    __ZTC__ / 256, (__ZTC__ & 0xf0 ) / 16 * 10 + (__ZTC__ & 0x0f));

#endif


/* ################# */
/* compiler versions */

/* armcc */
#ifdef __ARMCC_VERSION
    sprintf(buffer + strlen(buffer), "__ARMCC_VERSION\t\t => 0x%d (%d.%d)\n", __ARMCC_VERSION,
        __ARMCC_VERSION /1000000, (__ARMCC_VERSION / 1000) % 100, __ARMCC_VERSION % 1000 );
#endif

/* an ARM compiler */
#ifdef __ARMCOMPILER_VERSION
    if ( (_ARMCOMPILER_VERSION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARMCOMPILER_VERSION\t => %s\n", _my_stringify( __ARMCOMPILER_VERSION ));
    } else {
        strcat(buffer, "__ARMCOMPILER_VERSION\n");
    }
#endif


/* clang versions are direct after __clang__ */


#ifdef __CODEGEARC_VERSION__
    sprintf(buffer + strlen(buffer), "__CODEGEARC_VERSION__\t\t => 0x%x (%d.%d.%d)\n",
        __CODEGEARC_VERSION__, __CODEGEARC_VERSION__ >>24,
        (__CODEGEARC_VERSION__ >>16) & 0xff, __CODEGEARC_VERSION__ & 0xffff);
#endif


/* comeau C++ */
#ifdef __COMO_VERSION__
    sprintf(buffer + strlen(buffer), "__COMO_VERSION__\t\t => 0x%d (%d.%d)\n",
        __COMO_VERSION__, __COMO_VERSION__ /100, __COMO_VERSION__ % 100 );

#endif

/* for IBM z/OS XL X/C++ */
#ifdef __COMPILER_VER__
    if ( (__COMPILER_VER__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__COMPILER_VER__\t\t => %x\n", __COMPILER_VER__ + 0);
    } else {
        strcat(buffer, "__COMPILER_VER__\n");
    }
#endif


/* for __sgi */
#ifdef _COMPILER_VERSION
    if ( (_COMPILER_VERSION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_COMPILER_VERSION\t\t => %x\n", _COMPILER_VERSION + 0);
    } else {
        strcat(buffer, "_COMPILER_VERSION\n");
    }
#endif


/* DEC C Compiler */
#ifdef __DECC_VER
    if ( (__DECC_VER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DECC_VER\t\t => %d\n", __DECC_VER + 0);
    } else {
        strcat(buffer, "__DECC_VER\n");
    }
#endif


/* Digital Mars, Symantec C, Zortech C, (Datalight C: missing) */
#ifdef __DMC_VERSION__
    sprintf(buffer + strlen(buffer), "__DMC_VERSION__\t => '%s'\n", __DMC_VERSION__ );
#endif
/* __DMC_VERSION_STRING__ is referenced in boost */
#ifdef __DMC_VERSION_STRING__
    sprintf(buffer + strlen(buffer), "__DMC_VERSION_STRING__\t => '%s'\n", __DMC_VERSION_STRING__ );
#endif


/* edg versions are direct after EDG */


/* gcc linker */
#ifdef _GCC_LINKER_CMD__
    sprintf(buffer + strlen(buffer), "_GCC_LINKER_CMD__\t\t => %s\n", _GCC_LINKER_CMD__ );
#endif



/* GCC versions are direct after GCC */


/* GNUG versions are direct after GNUG */


/* Intel C Compiler */
#ifdef __ICC_VERSION
    sprintf(buffer + strlen(buffer), "__ICC_VERSION\t\t => 0x%x\n", __ICC_VERSION);

#endif

/* KAI C++ */
#ifdef __KCC_VERSION
    sprintf(buffer + strlen(buffer), "__KCC_VERSION\t\t => 0x%x\n", __KCC_VERSION);

#endif


/* for __osf__ */
#ifdef __LANGUAGE_C__
    if ( (__LANGUAGE_C__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LANGUAGE_C__\t\t => %d\n", __LANGUAGE_C__ + 0);
    } else {
        strcat(buffer, "__LANGUAGE_C__\n");
    }
#endif


/* gcc has linker items */
#ifdef _LINKER
    if ( (_LINKER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LINKER\t\t => %x\n", _LINKER + 0);
    } else {
        strcat(buffer, "_LINKER\n");
    }
#endif


/* mingw32 and mingw64 */
#ifdef __MINGW32_MAJOR
    if ( (__MINGW32_MAJOR   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW32_MAJOR\t => %d\n", __MINGW32_MAJOR  + 0);
    } else {
        strcat(buffer, "__MINGW32_MAJOR\n");
    }
#endif
#ifdef __MINGW32_MINOR
    if ( (__MINGW32_MINOR  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW32_MINOR\t => %d\n", __MINGW32_MINOR + 0);
    } else {
        strcat(buffer, "__MINGW32_MINOR\n");
    }
#endif

/* this is strange, but not a typo/bug here:
  __MINGW32_MAJOR_VERSION and __MINGW32_MINOR_VERSION are used
  __MINGW64_VERSION_MAJOR and __MINGW64_VERSION_MINOR are used by mingw64 */
#ifdef __MINGW32_MAJOR_VERSION
    if ( (__MINGW32_MAJOR_VERSION   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW32_MAJOR_VERSION\t => %d\n", __MINGW32_MAJOR_VERSION  + 0);
    } else {
        strcat(buffer, "__MINGW32_MAJOR_VERSION\n");
    }
#endif
#ifdef __MINGW32_MINOR_VERSION
    if ( (__MINGW32_MINOR_VERSION  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW32_MINOR_VERSION\t => %d\n", __MINGW32_MINOR_VERSION + 0);
    } else {
        strcat(buffer, "__MINGW32_MINOR_VERSION\n");
    }
#endif

/* __MINGW64_VERSION_MAJOR checked by tinyfiledialogs */
/* this is strange, but not a typo/bug here:
  __MINGW32_MAJOR_VERSION and __MINGW32_MINOR_VERSION are used
  __MINGW64_VERSION_MAJOR and __MINGW64_VERSION_MINOR are used by mingw64 */
#ifdef __MINGW64_VERSION_MAJOR
    if ( (__MINGW64_VERSION_MAJOR   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW64_VERSION_MAJOR\t => %d\n", __MINGW64_VERSION_MAJOR  + 0);
    } else {
    }
#endif
/* set by mingw64 */
#ifdef __MINGW64_VERSION_MINOR
    if ( (__MINGW64_VERSION_MINOR   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW64_VERSION_MINOR\t => %d\n", __MINGW64_VERSION_MINOR  + 0);
    } else {
        strcat(buffer, "__MINGW64_VERSION_MINOR\n");
    }
#endif


/* MS visual C */
#ifdef _MSVCR_VER
    if ((_MSVCR_VER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSVCR_VER \t\t => %ld\n", _MSVCR_VER + 0);

    } else {
        strcat(buffer, "_MSVCR_VER\n");
    }
#endif

/* the old ms c compiler */
#ifdef _MSC_FULL_VER
    sprintf(buffer + strlen(buffer), "_MSC_FULL_VER\t\t => 0x%x/%d (%x.%x.%x)\n", _MSC_FULL_VER,_MSC_FULL_VER,
         _MSC_FULL_VER / 1000000 , 
        (_MSC_FULL_VER /   10000 ) % 100, 
         _MSC_FULL_VER % 10000);


#endif
#ifdef _MSC_VER
    sprintf(buffer + strlen(buffer), "_MSC_VER\t\t => %d (Visual C++ %d.%d)\n", _MSC_VER,
            _MSC_VER / 100 - (_MSC_VER < 900) ? 7 : 6, (_MSC_VER %100));
#endif


/* portable c compiler */
#ifdef __PCC_MINOR__
    sprintf(buffer + strlen(buffer), "__PCC_MINOR__ \t\t => %d\n", 
            __PCC_MINOR__,__PCC_MINOR__);
#endif
#ifdef __PCC_MINORMINOR__
    sprintf(buffer + strlen(buffer), "__PCC_MINORMINOR__ \t => %d\n", 
            __PCC_MINORMINOR__,__PCC_MINORMINOR__);
#endif


/* cray C/C++ */
#ifdef _REVISION
    if ( (_REVISION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_REVISION\t\t => %d\n", _REVISION + 0);
    } else {
        strcat(buffer, "_REVISION\n");
    }
#endif

#ifdef _RELEASE_MAJOR
    if ( (_RELEASE_MAJOR + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_RELEASE_MAJOR\t => %d\n", _RELEASE_MAJOR + 0);
    } else {
        strcat(buffer, "_RELEASE_MAJOR\n");
    }
#endif
#ifdef _RELEASE_MAINOR
    if ( (_RELEASE_MAINOR + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_RELEASE_MAINOR\t => %d\n", _RELEASE_MAINOR + 0);
    } else {
        strcat(buffer, "_RELEASE_MAINOR\n");
    }
#endif
#ifdef _RELEASE_PATCHLEVEL
    if ( (_RELEASE_PATCHLEVEL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_RELEASE_PATCHLEVEL\t => %d\n", _RELEASE_PATCHLEVEL + 0);
    } else {
        strcat(buffer, "_RELEASE_PATCHLEVEL\n");
    }
#endif


/*  SCO OpenServer */
#ifdef __SCO_VERSION__
    if ( (__SCO_VERSION__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SCO_VERSION__\t\t => 0x%x\n", __SCO_VERSION__ + 0);
    } else {
        strcat(buffer, "__SCO_VERSION__\n");
    }
#endif


/* for gcc */
#ifdef __VERSION__
    sprintf(buffer + strlen(buffer), "__VERSION__\t\t => '%s'\n", __VERSION__ );
#endif

/* for __DCC__ */
#ifdef __VERSION_NUMBER__
    if ( (__VERSION_NUMBER__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__VERSION_NUMBER__\t\t => %x\n", __VERSION_NUMBER__ + 0);
    } else {
        strcat(buffer, "__VERSION_NUMBER__\n");
    }
#endif


/* ######################### */
/* compiler named extensions */
/* after compiler name and version */

/* HP UX Compiler */
/* are options for higher versions available? */
#ifdef __hpxstd98
    if ( (__hpxstd98 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__hpxstd98\t\t => %d\n", __hpxstd98 + 0);
    } else {
        strcat(buffer, "__hpxstd98\n");
    }
#endif


/* Intel CC */
#ifdef __INTEL_COMPILER_BUILD_DATE
    sprintf(buffer + strlen(buffer), "__INTEL_COMPILER_BUILD_DATE => %ld (%d.%02d.%02d)\n",
    __INTEL_COMPILER_BUILD_DATE, __INTEL_COMPILER_BUILD_DATE /10000,
    (__INTEL_COMPILER_BUILD_DATE  %10000)/100 , __INTEL_COMPILER_BUILD_DATE %100);
#endif


/* Nonstandard defines used in LCC */
#ifdef __LCCDEBUGLEVEL
    if ( (__LCCDEBUGLEVEL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LCCDEBUGLEVEL\t\t => %d\n", __LCCDEBUGLEVEL + 0);
    } else {
        strcat(buffer, "__LCCDEBUGLEVEL\n");
    }
#endif
#ifdef __LCCOPTIMLEVEL
    if ( (__LCCOPTIMLEVEL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LCCOPTIMLEVEL\t\t => %d\n", __LCCOPTIMLEVEL + 0);
    } else {
        strcat(buffer, "__LCCOPTIMLEVEL\n");
    }
#endif


/* MS visual C */
#ifdef _MSC_BUILD
    sprintf(buffer + strlen(buffer), "_MSC_BUILD\t\t => 0x%lx/%ld )\n", _MSC_BUILD, _MSC_BUILD);
#endif


#ifdef _MSC_EXTENSIONS
    if ( (_MSC_EXTENSIONS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSC_EXTENSIONS\t => %d\n", _MSC_EXTENSIONS + 0);
    } else {
        strcat(buffer, "_MSC_EXTENSIONS\n");
    }
#endif

/* Tiny C Compiler Preprocessor is in use */
#ifdef __TCC_PP__
    if ( (__TCC_PP__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TCC_PP__ \t\t => %d\n", __TCC_PP__ + 0);
    } else {
        strcat(buffer, "__TCC_PP__\n");
    }
#endif

/* Tiny C Compiler in -run mode */
#ifdef __TCC_RUN__
    if ( (__TCC_RUN__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TCC_RUN__ \t\t => %d\n", __TCC_RUN__ + 0);
    } else {
        strcat(buffer, "__TCC_RUN__\n");
    }
#endif


/* ############################ */
/* c compiler used as assembler */

#ifdef _ASMLANGUAGE
    if ( (_ASMLANGUAGE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ASMLANGUAGE\t => %d\n", _ASMLANGUAGE + 0);
    } else {
        strcat(buffer, "_ASMLANGUAGE\n");
    }
#endif

#ifdef __ASSEMBLER
    if ( (_ASMLANGUAGE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ASMLANGUAGE\t => %d\n", _ASMLANGUAGE + 0);
    } else {
        strcat(buffer, "_ASMLANGUAGE\n");
    }
#endif


#ifdef __ASSEMBLER__
    if ( (__ASSEMBLER__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ASSEMBLER__\t => %d\n", __ASSEMBLER__ + 0);
    } else {
        strcat(buffer, "__ASSEMBLER__\n");
    }
#endif


#ifdef __ASSEMBLY__
    if ( (__ASSEMBLY__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ASSEMBLY__\t => %d\n", __ASSEMBLY__ + 0);
    } else {
        strcat(buffer, "__ASSEMBLY__\n");
    }
#endif


/* ############################################### */
/* multithreading for the compiled program active? */

#ifdef _MT
    if ( (_MT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MT \t\t => %d\n", _MT + 0);
    } else {
        strcat(buffer, "_MT\n");
    }
#endif
/* used by BCC */
#ifdef __MT__
    if ( (__MT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MT__ \t\t => %d\n", __MT__ + 0);
    } else {
        strcat(buffer, "__MT__\n");
    }
#endif


#ifdef _OPENMP
    if ( (_OPENMP + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OPENMP \t\t => %d\n", _OPENMP + 0);
    } else {
        strcat(buffer, "_OPENMP\n");
    }
#endif

#ifdef _PTHREADS
    if ( (_PTHREADS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_PTHREADS \t\t => %d\n", _PTHREADS + 0);
    } else {
        strcat(buffer, "_PTHREADS\n");
    }
#endif


/* obsolete. replaced by _POSIX_C_SOURCE with a value of 199506L or higher */
#ifdef _REENTRANT
    strcat(buffer, "_REENTRANT\t\t => is supported\n");
#endif
#ifdef __REENTRANT
    strcat(buffer, "__REENTRANT\t\t => is supported\n");
#endif

#ifdef SINGLE_THREADED
    if ( (SINGLE_THREADED   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "SINGLE_THREADED  \t\t => %d\n", SINGLE_THREADED + 0);
    } else {
        strcat(buffer, "SINGLE_THREADED\n");
    }
#endif


/* obsolete. replaced by _POSIX_C_SOURCE with a value of 199506L or higher */
#ifdef _THREAD_SAFE
    if ( (_THREAD_SAFE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_THREAD_SAFE  \t\t => %d\n", _THREAD_SAFE   + 0);
    } else {
        strcat(buffer, "_THREAD_SAFE  \n");
    }
#endif


/* ################### */
/* used c dialect / c standard versions */

/* ANSI */
#ifdef ANSI
    if ( (ANSI + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ANSI\t\t\t => %d\n", ANSI + 0);
    } else {
        strcat(buffer, "ANSI\n");
    }
#endif

#ifdef _ANSI
    if ( (_ANSI + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ANSI\t\t\t => %d\n", _ANSI + 0);
    } else {
        strcat(buffer, "_ANSI\n");
    }
#endif

#ifdef _ANSI_
    if ( (_ANSI_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ANSI_\t\t\t => %d\n", _ANSI_ + 0);
    } else {
        strcat(buffer, "_ANSI_\n");
    }
#endif

#ifdef __ANSI
    if ( (__ANSI + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ANSI\t\t\t => %d\n", __ANSI + 0);
    } else {
        strcat(buffer, "__ANSI\n");
    }
#endif

#ifdef __ANSI__
    if ( (__ANSI__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ANSI__ \t\t => %d\n", __ANSI__ + 0);
    } else {
        strcat(buffer, "__ANSI__\n");
    }
#endif


#ifdef ANSI_C_SOURCE
    if ( (ANSI_C_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ANSI_C_SOURCE\t\t => %d\n", ANSI_C_SOURCE + 0);
    } else {
        strcat(buffer, "ANSI_C_SOURCE\n");
    }
#endif

#ifdef _ANSI_C_SOURCE
    if ( (_ANSI_C_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ANSI_C_SOURCE\t\t => %d\n", _ANSI_C_SOURCE + 0);
    } else {
        strcat(buffer, "_ANSI_C_SOURCE\n");
    }
#endif

#ifdef _ANSI_C_SOURCE_
    if ( (_ANSI_C_SOURCE_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ANSI_C_SOURCE_\t\t => %d\n", _ANSI_C_SOURCE_ + 0);
    } else {
        strcat(buffer, "_ANSI_C_SOURCE_\n");
    }
#endif

#ifdef __ANSI_C_SOURCE
    if ( (__ANSI_C_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ANSI_C_SOURCE\t\t => %d\n", __ANSI_C_SOURCE + 0);
    } else {
        strcat(buffer, "__ANSI_C_SOURCE\n");
    }
#endif

#ifdef __ANSI_C_SOURCE__
    if ( (__ANSI_C_SOURCE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ANSI_C_SOURCE__\t\t => %d\n", __ANSI_C_SOURCE__ + 0);
    } else {
        strcat(buffer, "__ANSI_C_SOURCE__\n");
    }
#endif


/* feature test macro */
#ifdef _ATFILE_SOURCE
    if ( (_ATFILE_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ATFILE_SOURCE\t\t => %d\n", _ATFILE_SOURCE   + 0);
    } else {
        strcat(buffer, "_ATFILE_SOURCE  \n");
    }
#endif


/* feature test macro */
#ifdef _BSD_SOURCE
    if ( (_BSD_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BSD_SOURCE\t\t => %d\n", _BSD_SOURCE   + 0);
    } else {
        strcat(buffer, "_BSD_SOURCE  \n");
    }
#endif

/* feature test macro */
#ifdef _DEFAULT_SOURCE
    if ( (_DEFAULT_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DEFAULT_SOURCE\t\t => %d\n", _DEFAULT_SOURCE   + 0);
    } else {
        strcat(buffer, "_DEFAULT_SOURCE  \n");
    }
#endif

/* feature test macro. define to 64 to enable 64bit aware types/functions */
#ifdef _FILE_OFFSET_BITS
    if ( (_FILE_OFFSET_BITS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FILE_OFFSET_BITS\t => %d\n", _FILE_OFFSET_BITS + 0);
    } else {
        strcat(buffer, "_FILE_OFFSET_BITS\n");
    }
#endif

/* feature test macro */
#ifdef _FORTIFY_SOURCE
    if ( (_FORTIFY_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FORTIFY_SOURCE \t => %d\n", _FORTIFY_SOURCE + 0);
    } else {
        strcat(buffer, "_FORTIFY_SOURCE\n");
    }
#endif


/* feature test macro */
#ifdef _GNU_SOURCE
    if ( (_GNU_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_GNU_SOURCE \t\t => %d\n", _GNU_SOURCE + 0);
    } else {
        strcat(buffer, "_GNU_SOURCE\n");
    }
#endif

#ifdef __GNU_SOURCE__
    if ( (__GNU_SOURCE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNU_SOURCE__ \t\t => %d\n", __GNU_SOURCE__ + 0);
    } else {
        strcat(buffer, "__GNU_SOURCE__\n");
    }
#endif


/* feature test macro */
#ifdef _ISOC95_SOURCE
    if ( (_ISOC95_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ISOC95_SOURCE \t\t => %d\n", _ISOC95_SOURCE + 0);
    } else {
        strcat(buffer, "_ISOC95_SOURCE\n");
    }
#endif

/* feature test macro */
#ifdef _ISOC99_SOURCE
    if ( (_ISOC99_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ISOC99_SOURCE \t\t => %d\n", _ISOC99_SOURCE + 0);
    } else {
        strcat(buffer, "_ISOC99_SOURCE\n");
    }
#endif



/* feature test macro, when C99 was still work in progress */
#ifdef _ISOC9X_SOURCE
    if ( (_ISOC9X_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ISOC9X_SOURCE \t\t => %d\n", _ISOC9X_SOURCE + 0);
    } else {
        strcat(buffer, "_ISOC9X_SOURCE\n");
    }
#endif

/* feature test macro */
#ifdef _ISOC11_SOURCE
    if ( (_ISOC11_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ISOC11_SOURCE \t\t => %d\n", _ISOC11_SOURCE + 0);
    } else {
        strcat(buffer, "_ISOC11_SOURCE\n");
    }
#endif

/* feature test macro */
#ifdef _ISOC17_SOURCE
    if ( (_ISOC17_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ISOC17_SOURCE \t\t => %d\n", _ISOC17_SOURCE + 0);
    } else {
        strcat(buffer, "_ISOC17_SOURCE\n");
    }
#endif

/* feature test macro */
#ifdef _ISOC2X_SOURCE
    if ( (_ISOC2X_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ISOC2X_SOURCE \t\t => %d\n", _ISOC2X_SOURCE + 0);
    } else {
        strcat(buffer, "_ISOC2X_SOURCE\n");
    }
#endif

/* feature test macro */
#ifdef _ISOC23_SOURCE
    if ( (_ISOC23_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ISOC23_SOURCE \t\t => %d\n", _ISOC23_SOURCE + 0);
    } else {
        strcat(buffer, "_ISOC23_SOURCE\n");
    }
#endif



#ifdef __INTEL_STRICT_ANSI__
    if ( (__INTEL_STRICT_ANSI__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__INTEL_STRICT_ANSI__\t => %d\n", __INTEL_STRICT_ANSI__ + 0);
    } else {
        strcat(buffer, "__INTEL_STRICT_ANSI__\n");
    }
#endif


#ifdef _LARGEFILE_SOURCE
    if ( (_LARGEFILE_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LARGEFILE_SOURCE\t => %d\n", _LARGEFILE_SOURCE + 0);
    } else {
        strcat(buffer, "_LARGEFILE_SOURCE\n");
    }
#endif

#ifdef _LARGEFILE64_SOURCE
    if ( (_LARGEFILE64_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LARGEFILE64_SOURCE\t => %d\n", _LARGEFILE64_SOURCE + 0);
    } else {
        strcat(buffer, "_LARGEFILE64_SOURCE\n");
    }
#endif

#ifdef _LFS64__LARGEFILE
    if ( (_LFS64__LARGEFILE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LFS64__LARGEFILE\t => %d\n", _LFS64__LARGEFILE + 0);
    } else {
        strcat(buffer, "_LFS64__LARGEFILE\n");
    }
#endif

#ifdef _LFS64__STDIO
    if ( (_LFS64__STDIO + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LFS64__STDIO\t => %d\n", _LFS64__STDIO + 0);
    } else {
        strcat(buffer, "_LFS64__STDIO\n");
    }
#endif


/* posix */
#ifdef POSIX
    if ( (POSIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "POSIX\t\t => %d\n", POSIX + 0);
    } else {
        strcat(buffer, "POSIX\n");
    }
#endif
#ifdef _POSIX
    if ( (_POSIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POSIX\t\t => %d\n", _POSIX + 0);
    } else {
        strcat(buffer, "_POSIX\n");
    }
#endif
#ifdef _POSIX_
    if ( (_POSIX_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POSIX_\t\t => %d\n", _POSIX_ + 0);
    } else {
        strcat(buffer, "_POSIX_\n");
    }
#endif
#ifdef __POSIX
    if ( (__POSIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POSIX\t\t => %d\n", __POSIX + 0);
    } else {
        strcat(buffer, "__POSIX\n");
    }
#endif
#ifdef __POSIX__
    if ( (__POSIX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POSIX__\t\t => %d\n", __POSIX__ + 0);
    } else {
        strcat(buffer, "__POSIX__\n");
    }
#endif

/* obsolete feature test macro, replaced by _POSIX_C_SOURCE */
#ifdef _POSIX_SOURCE
    if ( (_POSIX_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POSIX_SOURCE  \t\t => %d\n", _POSIX_SOURCE   + 0);
    } else {
        strcat(buffer, "_POSIX_SOURCE\n");
    }
#endif



#ifdef __POSIX_SOURCE__
    if ( (__POSIX_SOURCE__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POSIX_SOURCE__  \t\t => %d\n", __POSIX_SOURCE__  + 0);
    } else {
        strcat(buffer, "__POSIX_SOURCE\n");
    }
#endif


/* glibc feature test macro, referenced in man2 / nanosleep()  */
#ifdef _POSIX_C_SOURCE
    if ( (_POSIX_C_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POSIX_C_SOURCE\t\t => %ld (POSIX.%s)\n", _POSIX_C_SOURCE  + 0,
        _POSIX_C_SOURCE >= 200809L ? "1-2008" :
        _POSIX_C_SOURCE >= 200112L ? "1-2001" :
        _POSIX_C_SOURCE >= 199506L ? "1c" :
        _POSIX_C_SOURCE >= 199309L ? "1b" :
        _POSIX_C_SOURCE >= 2 ? "1-1992" : "1-1990" );
    } else {
        strcat(buffer, "_POSIX_C_SOURCE\n");
    }
#endif


#ifdef _POSIX_VERSION
    if ( (_POSIX_VERSION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POSIX_VERSION \t => %ld\n", _POSIX_VERSION + 0);
    } else {
        strcat(buffer, "_POSIX_VERSION\n");
    }
#endif

#ifdef __POSIX2_VERSION
    if ( (__POSIX2_VERSION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POSIX2_VERSION \t => %ld\n", __POSIX2_VERSION + 0);
    } else {
        strcat(buffer, "__POSIX2_VERSION\n");
    }
#endif

#ifdef __POSIX2_THIS_VERSION
    if ( (__POSIX2_THIS_VERSION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POSIX2_THIS_VERSION \t => %ld\n", __POSIX2_THIS_VERSION + 0);
    } else {
        strcat(buffer, "__POSIX2_THIS_VERSION\n");
    }
#endif


/* feature test macro */
#ifdef _SGI_SOURCE
    if ( (_SGI_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SGI_SOURCE\t => %d\n", _SGI_SOURCE + 0);
    } else {
        strcat(buffer, "_SGI_SOURCE\n");
    }
#endif


/* STDC */
#ifdef _STDC
    if ( (_STDC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STDC \t\t => %d\n", _STDC + 0);
    } else {
        strcat(buffer, "_STDC\n");
    }
#endif

#ifdef _STDC_
    if ( (_STDC_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STDC_ \t\t => %d\n", _STDC_ + 0);
    } else {
        strcat(buffer, "_STDC_\n");
    }
#endif

#ifdef __STDC
    if ( (__STDC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC \t\t => %d\n", __STDC + 0);
    } else {
        strcat(buffer, "__STDC\n");
    }
#endif


#ifdef __STDC__
    if ( (__STDC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC__ \t\t => %d %s\n", __STDC__ + 0,
#ifdef __STDC_VERSION__
        "");
#else
        "(c89)");
#endif
    } else {
        strcat(buffer, "__STDC__\n");
    }
#endif


/* C11 Feature */
#ifdef __STDC_ANALYZABLE__
    if ( (__STDC_ANALYZABLE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC_ANALYZABLE__\t => %d\n", __STDC_ANALYZABLE__ + 0);
    } else {
        strcat(buffer, "__STDC_ANALYZABLE__\n");
    }
#endif

#ifdef __STDC_CONSTANT_MACROS
    if ( (__STDC_CONSTANT_MACROS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC_CONSTANT_MACROS\t => %d\n", __STDC_CONSTANT_MACROS + 0);
    } else {
        strcat(buffer, "__STDC_CONSTANT_MACROS\n");
    }
#endif


#ifdef __STDC_HOSTED__
    if ( (__STDC_HOSTED__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC_HOSTED__ \t => %d\n", __STDC_HOSTED__ + 0);
    } else {
        strcat(buffer, "__STDC_HOSTED__\n");
    }

#endif


/* IEC 60559 float in use */
#ifdef __STDC_IEC_559__
    if ( (__STDC_IEC_559__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC_IEC_559__ \t => %d\n", __STDC_IEC_559__ + 0);
    } else {
        strcat(buffer, "__STDC_IEC_559__\n");
    }

#endif


/* IEC 60559 complex float in use */
#ifdef __STDC_IEC_559_COMPLEX__
    sprintf(buffer + strlen(buffer), "__STDC_IEC_559_COMPLEX__ => %d\n", __STDC_IEC_559_COMPLEX__ + 0);
#endif

/* ToDo: unicode versions */
#ifdef __STDC_ISO_10646__
    if ( (__STDC_ISO_10646__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC_ISO_10646__ \t => %ld\n", __STDC_ISO_10646__ + 0);
    } else {
        strcat(buffer, "__STDC_ISO_10646__\n");
    }
#endif

#ifdef __STDCPP_THREADS__
    sprintf(buffer + strlen(buffer), "__STDCPP_THREADS__ \t => %d\n", __STDCPP_THREADS__ + 0);
#endif


#ifdef __STDC_UTF_16__
    if ( (__STDC_UTF_16__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC_UTF_16__ \t => %d\n", __STDC_UTF_16__ + 0);
    } else {
        strcat(buffer, "__STDC_UTF_16__\n");
    }
#endif
#ifdef __STDC_UTF_32__
    if ( (__STDC_UTF_32__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC_UTF_32__ \t => %d\n", __STDC_UTF_32__ + 0);
    } else {
        strcat(buffer, "__STDC_UTF_32__\n");
    }
#endif


#ifdef __STDC_VERSION__
    if ( (__STDC_VERSION__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC_VERSION__ \t => %ld (%s)\n", __STDC_VERSION__ + 0,
        (__STDC_VERSION__ + 0 >= 202000) ? "C2x / C23" :
        (__STDC_VERSION__ + 0 >= 201710) ? "C17 / C18" :
        (__STDC_VERSION__ + 0 >= 201112) ? "C11" :
        (__STDC_VERSION__ + 0 >= 199901) ? "C99" :
        (__STDC_VERSION__ + 0 >= 199409) ? "C95" : "ANSI: C89/ISO: C90");

    } else {
        strcat(buffer, "__STDC_VERSION__ \t\t(ANSI:C89) / (ISO:C90)\n");
    }
#endif

/* feature test macro */
#ifdef _SVID_SOURCE
    if ( (_SVID_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SVID_SOURCE  \t\t => %d\n", _SVID_SOURCE   + 0);
    } else {
        strcat(buffer, "_SVID_SOURCE  \n");
    }
#endif

/* feature test macro */
#ifdef _SVR4_SOURCE
    if ( (_SVR4_SOURCE  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SVR4_SOURCE \t\t => %d\n", _SVR4_SOURCE  + 0);
    } else {
        strcat(buffer, "_SVR4_SOURCE\n");
    }
#endif



/* ## STRICT ## */
#ifdef STRICT
    if ( (STRICT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "STRICT\t\t\t => %d\n", STRICT + 0);
    } else {
        strcat(buffer, "STRICT\n");
    }
#endif


#ifdef _STRICT
    if ( (_STRICT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STRICT\t\t\t => %d\n", _STRICT + 0);
    } else {
        strcat(buffer, "_STRICT\n");
    }
#endif

#ifdef _STRICT_
    if ( (_STRICT_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STRICT_ \t\t => %d\n", _STRICT_ + 0);
    } else {
        strcat(buffer, "_STRICT_\n");
    }
#endif

#ifdef __STRICT
    if ( (__STRICT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STRICT \t\t => %d\n", __STRICT + 0);
    } else {
        strcat(buffer, "__STRICT\n");
    }
#endif

#ifdef __STRICT__
    if ( (__STRICT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STRICT__ \t\t => %d\n", __STRICT__ + 0);
    } else {
        strcat(buffer, "__STRICT__\n");
    }
#endif


#ifdef __STRICT_ANSI
    if ( (__STRICT_ANSI + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STRICT_ANSI \t => %d\n", __STRICT_ANSI + 0);
    } else {
        strcat(buffer, "__STRICT_ANSI\n");
    }
#endif


/* used in glibc as feature test macro */
#ifdef __STRICT_ANSI__
    if ( (__STRICT_ANSI__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STRICT_ANSI__ \t => %d\n", __STRICT_ANSI__ + 0);
    } else {
        strcat(buffer, "__STRICT_ANSI__\n");
    }
#endif


/* obsolete feature test macro */
#ifdef THREAD_SAFE
    if ( (THREAD_SAFE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "THREAD_SAFE  \t\t => %d\n", THREAD_SAFE   + 0);
    } else {
        strcat(buffer, "THREAD_SAFE  \n");
    }
#endif


/* Defined to 64 to enable 64-bit time_t for glibc */
#ifdef _TIME_BITS
    if ( (_TIME_BITS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TIME_BITS\t\t => %d\n", _TIME_BITS + 0);
    } else {
        strcat(buffer, "_TIME_BITS\n");
    }
#endif

#ifdef __TIMESIZE
    if ( (__TIMESIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TIMESIZE\t\t => %d\n", __TIMESIZE + 0);
    } else {
        strcat(buffer, "__TIMESIZE\n");
    }
#endif

/* defined, when 64bit time_t is enabled */
#ifdef __USE_TIME_BITS64
    if ( (__USE_TIME_BITS64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__USE_TIME_BITS64\t => %d\n", __USE_TIME_BITS64 + 0);
    } else {
        strcat(buffer, "__USE_TIME_BITS64\n");
    }
#endif


#ifdef _XOPEN_UNIX
    if ( (_XOPEN_UNIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_XOPEN_UNIX \t\t => %d\n", _XOPEN_UNIX + 0);
    } else {
        strcat(buffer, "_XOPEN_UNIX\n");
    }
#endif

/* used in glibc as feature test macro */
#ifdef _XOPEN_SOURCE
    if ( (_XOPEN_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_XOPEN_SOURCE \t\t => %d\n", _XOPEN_SOURCE + 0);
    } else {
        strcat(buffer, "_XOPEN_SOURCE\n");
    }
#endif
/* should be avoided in new sources */
#ifdef _XOPEN_SOURCE_EXTENDED
    if ( (_XOPEN_SOURCE_EXTENDED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_XOPEN_SOURCE_EXTENDED \t => %d\n", _XOPEN_SOURCE_EXTENDED + 0);
    } else {
        strcat(buffer, "_XOPEN_SOURCE_EXTENDED\n");
    }
#endif


#ifdef _XOPEN_VERSION
    if ( (_XOPEN_VERSION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_XOPEN_VERSION \t => %d \t%s\n", _XOPEN_VERSION + 0,
        (_XOPEN_VERSION + 0 >= 600) ? "(SUSv3 / UNIX03)" :
        (_XOPEN_VERSION + 0 >= 500) ? "(SUSv2 / UNIX98)" :
#ifdef _XOPEN_UNIX
        (_XOPEN_VERSION + 0 >= 4) ? "(SUS / UNIX95)" :
#endif
        (_XOPEN_VERSION + 0 >= 4) ? "(XPG4 / 1992)" :
        (_XOPEN_VERSION + 0 >= 3) ? "(XPG3 / 1989)" : "" );
    } else {
        strcat(buffer, "_XOPEN_VERSION\n");
    }
#endif


/* ################# */
/* language features */

#ifdef _MD
    if ( (_MD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MD \t\t => %d\n", _MD + 0);
    } else {
        strcat(buffer, "_MD\n");
    }
#endif


#ifdef _STDCALL_SUPPORTED
    if ( (_STDCALL_SUPPORTED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STDCALL_SUPPORTED\t => %d\n", _STDCALL_SUPPORTED + 0);
    } else {
        strcat(buffer, "_STDCALL_SUPPORTED\n");
    }
#endif


#ifdef _PUSHPOP_SUPPORTED
    if ( (_PUSHPOP_SUPPORTED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_PUSHPOP_SUPPORTED\t => %d\n", _PUSHPOP_SUPPORTED + 0);
    } else {
        strcat(buffer, "_PUSHPOP_SUPPORTED\n");
    }
#endif


#ifdef _CHAR_EQ_UCHAR
    if ( (_CHAR_EQ_UCHAR + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CHAR_EQ_UCHAR \t\t => %d\n", _CHAR_EQ_UCHAR + 0);
    } else {
        strcat(buffer, "_CHAR_EQ_UCHAR\n");
    }
#endif


/* used by DMC: DOS: 2, DOSX (Extender): 4 / _WIN32: 8  */
#ifdef __DEFALIGN
    if ( (__DEFALIGN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DEFALIGN\t\t => %d\n", __DEFALIGN + 0);
    } else {
        strcat(buffer, "__DEFALIGN\n");
    }
#endif


#ifdef __CHAR_ALIGN__
    sprintf(buffer + strlen(buffer), "__CHAR_ALIGN__\t\t => %d\n", __CHAR_ALIGN__ + 0);
#endif
#ifdef __SHORT_ALIGN__
    sprintf(buffer + strlen(buffer), "__SHORT_ALIGN__\t\t => %d\n", __SHORT_ALIGN__ + 0);

#endif
#ifdef __INT_ALIGN__
    sprintf(buffer + strlen(buffer), "__INT_ALIGN__\t\t => %d\n", __INT_ALIGN__ + 0);
#endif
#ifdef __LONG_ALIGN__
    sprintf(buffer + strlen(buffer), "__LONG_ALIGN__\t => %d\n", __LONG_ALIGN__ + 0);
#endif
#ifdef __LONG_LONG_ALIGN__
    sprintf(buffer + strlen(buffer), "__LONG_LONG_ALIGN__ => %d\n", __LONG_LONG_ALIGN__ + 0);
#endif
#ifdef __FLOAT_ALIGN__
    sprintf(buffer + strlen(buffer), "__FLOAT_ALIGN__\t\t => %d\n", __FLOAT_ALIGN__ + 0);
#endif
#ifdef __DOUBLE_ALIGN__
    sprintf(buffer + strlen(buffer), "__DOUBLE_ALIGN__\t\t => %d\n", __DOUBLE_ALIGN__ + 0);
#endif
#ifdef __LONG_DOUBLE_ALIGN__
    sprintf(buffer + strlen(buffer), "__LONG_DOUBLE_ALIGN__\t\t => %d\n", __LONG_DOUBLE_ALIGN__ + 0);
#endif



/* some limits from stdio.h */
#ifdef BUFSIZ
    if ( (BUFSIZ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "BUFSIZ\t\t\t => %d\n", BUFSIZ + 0);
    } else {
        strcat(buffer, "BUFSIZ\n");
    }
#endif

#ifdef FILENAME_MAX
    if ( (FILENAME_MAX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "FILENAME_MAX\t\t => %d\n", FILENAME_MAX + 0);
    } else {
        strcat(buffer, "FILENAME_MAX\n");
    }
#endif
#ifdef FOPEN_MAX
    if ( (FOPEN_MAX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "FOPEN_MAX\t\t => %d\n", FOPEN_MAX + 0);
    } else {
        strcat(buffer, "FOPEN_MAX\n");
    }
#endif

#ifdef __STDIO_BUFSIZ
    if ( (__STDIO_BUFSIZ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDIO_BUFSIZ\t\t\t => %d\n", __STDIO_BUFSIZ + 0);
    } else {
        strcat(buffer, "__STDIO_BUFSIZ\n");
    }
#endif


/* stdio uses buffers */
#ifdef __STDIO_BUFFERS
    if ( (__STDIO_BUFFERS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDIO_BUFFERS\t\t\t => %d\n", __STDIO_BUFFERS + 0);
    } else {
        strcat(buffer, "__STDIO_BUFFERS\n");
    }
#endif

/* fully buffered */
#ifdef __STDIO__IOFBF
    if ( (__STDIO__IOFBF + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDIO__IOFBF\t\t\t => %d\n", __STDIO__IOFBF + 0);
    } else {
        strcat(buffer, "__STDIO__IOFBF\n");
    }
#endif
/* line buffered */
#ifdef __STDIO__IOLBF
    if ( (__STDIO__IOLBF + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDIO__IOLBF\t\t\t => %d\n", __STDIO__IOLBF + 0);
    } else {
        strcat(buffer, "__STDIO__IOLBF\n");
    }
#endif
/* no buffereing */
#ifdef __STDIO__IONBF
    if ( (__STDIO__IONBF + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDIO__IONBF\t\t\t => %d\n", __STDIO__IONBF + 0);
    } else {
        strcat(buffer, "__STDIO__IONBF\n");
    }
#endif


#ifdef __STDIO_MBSTATE
    if ( (__STDIO_MBSTATE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDIO_MBSTATE\t\t\t => %d\n", __STDIO_MBSTATE + 0);
    } else {
        strcat(buffer, "__STDIO_MBSTATE\n");
    }
#endif


#ifdef TMP_MAX
    if ( (TMP_MAX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "TMP_MAX\t\t\t => %d\n", TMP_MAX + 0);
    } else {
        strcat(buffer, "TMP_MAX\n");
    }
#endif

#ifdef L_tmpnam
    if ( (L_tmpnam + 1) > 1) {
        sprintf(buffer + strlen(buffer), "L_tmpnam\t\t => %d\n", L_tmpnam + 0);
    } else {
        strcat(buffer, "L_tmpnam\n");
    }
#endif

#ifdef _TMPNAME
    sprintf(buffer + strlen(buffer), "_TMPNAME\t\t => %s\n", _TMPNAME);
#endif


#ifdef MAX_PATH
    if ( (MAX_PATH + 1) > 1) {
        sprintf(buffer + strlen(buffer), "MAX_PATH \t\t => %d\n", MAX_PATH + 0);
    } else {
        strcat(buffer, "MAX_PATH\n");
    }
#endif
#ifdef PATH_MAX
    if ( (PATH_MAX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "PATH_MAX \t\t => %d\n", PATH_MAX + 0);
    } else {
        strcat(buffer, "PATH_MAX\n");
    }
#endif



/* <stdint.h> printf format selector */
#ifdef PRId32
     sprintf(buffer+strlen(buffer), "PRId32\t\t\t => %s\n", __my_stringify( PRId32 ) );
#endif
#ifdef PRIi32
     sprintf(buffer+strlen(buffer), "PRIi32\t\t\t => %s\n", __my_stringify( PRIi32 ) );
#endif
#ifdef PRIu32
     sprintf(buffer+strlen(buffer), "PRIu32\t\t\t => %s\n", __my_stringify( PRIu32 ) );
#endif
#ifdef PRIx32
     sprintf(buffer+strlen(buffer), "PRIx32\t\t\t => %s\n", __my_stringify( PRIx32 ) );
#endif
#ifdef PRIX32
     sprintf(buffer+strlen(buffer), "PRIX32\t\t\t => %s\n", __my_stringify( PRIX32 ) );
#endif


#ifdef PRId64
     sprintf(buffer+strlen(buffer), "PRId64\t\t\t => %s\n", __my_stringify( PRId64 ) );
#endif
#ifdef PRIi64
     sprintf(buffer+strlen(buffer), "PRIi64\t\t\t => %s\n", __my_stringify( PRIi64 ) );
#endif
#ifdef PRIu64
     sprintf(buffer+strlen(buffer), "PRIu64\t\t\t => %s\n", __my_stringify( PRIu64 ) );
#endif
#ifdef PRIx64
     sprintf(buffer+strlen(buffer), "PRIx64\t\t\t => %s\n", __my_stringify( PRIx64 ) );
#endif
#ifdef PRIX64
     sprintf(buffer+strlen(buffer), "PRIX64\t\t\t => %s\n", __my_stringify( PRIX64 ) );
#endif

#ifdef PRIdPTR
     sprintf(buffer+strlen(buffer), "PRIdPTR\t\t\t => %s\n", __my_stringify( PRIdPTR ) );
#endif
#ifdef PRIiPTR
     sprintf(buffer+strlen(buffer), "PRIiPTR\t\t\t => %s\n", __my_stringify( PRIiPTR ) );
#endif
#ifdef PRIuPTR
     sprintf(buffer+strlen(buffer), "PRIuPTR\t\t\t => %s\n", __my_stringify( PRIuPTR ) );
#endif


#ifdef PRIxPTR
     sprintf(buffer+strlen(buffer), "PRIxPTR\t\t\t => %s\n", __my_stringify( PRIxPTR ) );
#endif
#ifdef PRIXPTR
     sprintf(buffer+strlen(buffer), "PRIXPTR\t\t\t => %s\n", __my_stringify( PRIXPTR ) );
#endif



/* various int types */
#ifdef int32_t
     sprintf(buffer+strlen(buffer), "int32_t\t\t => %s\n", __my_stringify( int32_t ) );
#endif

#ifdef uint32_t
     sprintf(buffer+strlen(buffer), "uint32_t\t\t => %s\n", __my_stringify( uint32_t ) );
#endif

#ifdef int64_t
     sprintf(buffer+strlen(buffer), "int64_t\t\t => %s\n", __my_stringify( int64_t ) );
#endif

#ifdef uint64_t
     sprintf(buffer+strlen(buffer), "uint64_t\t\t => %s\n", __my_stringify( uint64_t ) );
#endif



/* language features: C99 */
#ifdef __C99
    if ( (__C99 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99\t\t\t => %d\n", __C99 + 0);
    } else {
        strcat(buffer, "__C99\n");
    }
#endif
#ifdef __C99_BOOL
    if ( (__C99_BOOL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_BOOL \t\t => %d\n", __C99_BOOL + 0);
    } else {
        strcat(buffer, "__C99_BOOL\n");
    }
#endif

#ifdef __C99_COMPLEX
    if ( (__C99_COMPLEX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_COMPLEX \t\t => %d\n", __C99_COMPLEX + 0);
    } else {
        strcat(buffer, "__C99_COMPLEX\n");
    }
#endif

#ifdef __C99_COMPLEX_HEADERS__
    if ( (__C99_COMPLEX_HEADERS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_COMPLEX_HEADERS__ \t\t => %d\n", __C99_COMPLEX_HEADERS__ + 0);
    } else {
        strcat(buffer, "__C99_COMPLEX_HEADERS__\n");
    }
#endif

#ifdef __C99_CPLUSCMT
    if ( (__C99_CPLUSCMT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_CPLUSCMT \t\t => %d\n", __C99_CPLUSCMT + 0);
    } else {
        strcat(buffer, "__C99_CPLUSCMT\n");
    }
#endif

#ifdef __C99_COMPOUND_LITERAL
    if ( (__C99_COMPOUND_LITERAL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_COMPOUND_LITERAL \t\t => %d\n", __C99_COMPOUND_LITERAL + 0);
    } else {
        strcat(buffer, "__C99_COMPOUND_LITERAL\n");
    }
#endif


#ifdef __C99_DESIGNATED_INITIALIZER
    if ( (__C99_DESIGNATED_INITIALIZER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_DESIGNATED_INITIALIZER \t\t => %d\n", __C99_DESIGNATED_INITIALIZER + 0);
    } else {
        strcat(buffer, "__C99_DESIGNATED_INITIALIZER\n");
    }
#endif

#ifdef __C99_DUP_TYPE_QUALIFIER
    if ( (__C99_DUP_TYPE_QUALIFIER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_DUP_TYPE_QUALIFIER \t\t => %d\n", __C99_DUP_TYPE_QUALIFIER + 0);
    } else {
        strcat(buffer, "__C99_DUP_TYPE_QUALIFIER\n");
    }
#endif

#ifdef __C99_EMPTY_MACRO_ARGUMENTS
    if ( (__C99_EMPTY_MACRO_ARGUMENTS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_EMPTY_MACRO_ARGUMENTS \t\t => %d\n", __C99_EMPTY_MACRO_ARGUMENTS + 0);
    } else {
        strcat(buffer, "__C99_EMPTY_MACRO_ARGUMENTS\n");
    }
#endif

#ifdef __C99_FLEXIBLE_ARRAY_MEMBER
    if ( (__C99_FLEXIBLE_ARRAY_MEMBER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_FLEXIBLE_ARRAY_MEMBER \t\t => %d\n", __C99_FLEXIBLE_ARRAY_MEMBER + 0);
    } else {
        strcat(buffer, "__C99_FLEXIBLE_ARRAY_MEMBER\n");
    }
#endif

#ifdef __C99_FUNC
    if ( (__C99_FUNC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_FUNC \t\t => %d\n", __C99_FUNC + 0);
    } else {
        strcat(buffer, "__C99_FUNC\n");
    }
#endif

/* z/OS XL C/C++ compiler */
#ifdef __C99_FUNC__
    if ( (__C99_FUNC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_FUNC__\t\t => %d\n", __C99_FUNC__ + 0);
    } else {
        strcat(buffer, "__C99_FUNC__\n");
    }
#endif

#ifdef __C99_HEX_FLOAT_CONST
    if ( (__C99_HEX_FLOAT_CONST + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_HEX_FLOAT_CONST \t\t => %d\n", __C99_HEX_FLOAT_CONST + 0);
    } else {
        strcat(buffer, "__C99_HEX_FLOAT_CONST\n");
    }
#endif

#ifdef __C99_INLINE
    if ( (__C99_INLINE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_INLINE \t\t => %d\n", __C99_INLINE + 0);
    } else {
        strcat(buffer, "__C99_INLINE\n");
    }
#endif

#ifdef __C99_LLONG
    if ( (__C99_LLONG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_LLONG \t\t => %d\n", __C99_LLONG + 0);
    } else {
        strcat(buffer, "__C99_LLONG\n");
    }
#endif

#ifdef __C99_MACRO_WITH_VA_ARGS
    if ( (__C99_MACRO_WITH_VA_ARGS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_MACRO_WITH_VA_ARGS => %d\n", __C99_MACRO_WITH_VA_ARGS + 0);
    } else {
        strcat(buffer, "__C99_MACRO_WITH_VA_ARGS\n");
    }
#endif

#ifdef __C99_MAX_LINE_NUMBER
    if ( (__C99_MAX_LINE_NUMBER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_MAX_LINE_NUMBER \t\t => %d\n", __C99_MAX_LINE_NUMBER + 0);
    } else {
        strcat(buffer, "__C99_MAX_LINE_NUMBER\n");
    }
#endif

#ifdef __C99_MIXED_DECL_AND_CODE
    if ( (__C99_MIXED_DECL_AND_CODE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_MIXED_DECL_AND_CODE \t\t => %d\n", __C99_MIXED_DECL_AND_CODE + 0);
    } else {
        strcat(buffer, "__C99_MIXED_DECL_AND_CODE\n");
    }
#endif

#ifdef __C99_MIXED_STRING_CONCAT
    if ( (__C99_MIXED_STRING_CONCAT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_MIXED_STRING_CONCAT \t\t => %d\n", __C99_MIXED_STRING_CONCAT + 0);
    } else {
        strcat(buffer, "__C99_MIXED_STRING_CONCAT\n");
    }
#endif

#ifdef __C99_NON_LVALUE_ARRAY_SUB
    if ( (__C99_NON_LVALUE_ARRAY_SUB + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_NON_LVALUE_ARRAY_SUB \t\t => %d\n", __C99_NON_LVALUE_ARRAY_SUB + 0);
    } else {
        strcat(buffer, "__C99_NON_LVALUE_ARRAY_SUB\n");
    }
#endif

#ifdef __C99_NON_CONST_AGGR_INITIALIZER
    if ( (__C99_NON_CONST_AGGR_INITIALIZER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_NON_CONST_AGGR_INITIALIZER \t\t => %d\n", __C99_NON_CONST_AGGR_INITIALIZER + 0);
    } else {
        strcat(buffer, "__C99_NON_CONST_AGGR_INITIALIZER\n");
    }
#endif

#ifdef __C99_PRAGMA_OPERATOR
    if ( (__C99_PRAGMA_OPERATOR + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_PRAGMA_OPERATOR \t\t => %d\n", __C99_PRAGMA_OPERATOR + 0);
    } else {
        strcat(buffer, "__C99_PRAGMA_OPERATOR\n");
    }
#endif

#ifdef __C99_REQUIRE_FUNC_DECL
    if ( (__C99_REQUIRE_FUNC_DECL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_REQUIRE_FUNC_DECL \t\t => %d\n", __C99_REQUIRE_FUNC_DECL + 0);
    } else {
        strcat(buffer, "__C99_REQUIRE_FUNC_DECL\n");
    }
#endif

#ifdef __C99_RESTRICT
    if ( (__C99_RESTRICT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_RESTRICT \t\t => %d\n", __C99_RESTRICT + 0);
    } else {
        strcat(buffer, "__C99_RESTRICT\n");
    }
#endif

#ifdef __C99_STATIC_ARRAY_SIZE
    if ( (__C99_STATIC_ARRAY_SIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_STATIC_ARRAY_SIZE \t\t => %d\n", __C99_STATIC_ARRAY_SIZE + 0);
    } else {
        strcat(buffer, "__C99_STATIC_ARRAY_SIZE\n");
    }
#endif

#ifdef __C99_STD_PRAGMAS
    if ( (__C99_STD_PRAGMAS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_STD_PRAGMAS \t\t => %d\n", __C99_STD_PRAGMAS + 0);
    } else {
        strcat(buffer, "__C99_STD_PRAGMAS\n");
    }
#endif

#ifdef __C99_TGMATH
    if ( (__C99_TGMATH + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_TGMATH \t\t => %d\n", __C99_TGMATH + 0);
    } else {
        strcat(buffer, "__C99_TGMATH\n");
    }
#endif

#ifdef __C99_UCN
    if ( (__C99_UCN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_UCN \t\t => %d\n", __C99_UCN + 0);
    } else {
        strcat(buffer, "__C99_UCN\n");
    }
#endif

#ifdef __C99_VAR_LEN_ARRAY
    if ( (__C99_VAR_LEN_ARRAY + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_VAR_LEN_ARRAY \t\t => %d\n", __C99_VAR_LEN_ARRAY + 0);
    } else {
        strcat(buffer, "__C99_VAR_LEN_ARRAY\n");
    }
#endif

#ifdef __C99_VARIABLE_LENGTH_ARRAY
    if ( (__C99_VARIABLE_LENGTH_ARRAY + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__C99_VARIABLE_LENGTH_ARRAY \t\t => %d\n", __C99_VARIABLE_LENGTH_ARRAY + 0);
    } else {
        strcat(buffer, "__C99_VARIABLE_LENGTH_ARRAY\n");
    }
#endif


/* language features detection: c / c++ */

#ifdef __has_attribute
    strcat(buffer, "__has_attribute\t\t => is supported\n");
#endif
#ifdef __has_builtin
    strcat(buffer, "__has_builtin\t\t => is supported\n");
#endif
#ifdef __has_c_attribute
    strcat(buffer, "__has_c_attribute\t => is supported\n");
#endif
#ifdef __has_cpp_attribute
    strcat(buffer, "__has_cpp_attribute\t => is supported\n");
#endif
#ifdef __has_include
    strcat(buffer, "__has_include\t\t => is supported\n");
#endif


/*  ## is this used in c or c++? ## */

#ifdef REDIRECT
    if ( (REDIRECT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "REDIRECT \t => %d\n", REDIRECT + 0);
    } else {
        strcat(buffer, "REDIRECT\n");
    }
#endif

#ifdef _REDIRECT
    if ( (_REDIRECT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_REDIRECT \t => %d\n", _REDIRECT + 0);
    } else {
        strcat(buffer, "_REDIRECT\n");
    }
#endif
#ifdef _REDIRECT_
    if ( (_REDIRECT_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_REDIRECT_ \t => %d\n", _REDIRECT_ + 0);
    } else {
        strcat(buffer, "_REDIRECT_\n");
    }
#endif
#ifdef __REDIRECT
    strcat(buffer, "__REDIRECT\t\t => is supported\n");
#endif

#ifdef __REDIRECT__
    if ( (__REDIRECT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__REDIRECT__ \t => %d\n", __REDIRECT__ + 0);
    } else {
        strcat(buffer, "__REDIRECT__\n");
    }
#endif


/* ################# */
/* ### CPU + FPU ### */

#ifdef CPU
    if ( (CPU + 1) > 1) {
        sprintf(buffer + strlen(buffer), "CPU \t\t => %d\n", CPU + 0);
    } else {
        strcat(buffer, "CPU\n");
    }
#endif
#ifdef _CPU
    if ( (_CPU + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CPU \t\t => %d\n", _CPU + 0);
    } else {
        strcat(buffer, "_CPU\n");
    }
#endif
#ifdef _CPU_
    if ( (_CPU_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CPU_ \t\t => %d\n", _CPU_ + 0);
    } else {
        strcat(buffer, "_CPU_\n");
    }
#endif
#ifdef __CPU
    if ( (__CPU + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CPU \t\t => %d\n", __CPU + 0);
    } else {
        strcat(buffer, "__CPU\n");
    }
#endif
#ifdef __CPU__
    if ( (__CPU__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CPU__ \t\t => %d\n", __CPU__ + 0);
    } else {
        strcat(buffer, "__CPU__\n");
    }
#endif


#ifdef FPU
    if ( (FPU + 1) > 1) {
        sprintf(buffer + strlen(buffer), "FPU \t\t => %d\n", FPU + 0);
    } else {
        strcat(buffer, "FPU\n");
    }
#endif
#ifdef _FPU
    if ( (_FPU + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FPU \t\t => %d\n", _FPU + 0);
    } else {
        strcat(buffer, "_FPU\n");
    }
#endif
#ifdef _FPU_
    if ( (_FPU_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FPU_ \t\t => %d\n", _FPU_ + 0);
    } else {
        strcat(buffer, "_FPU_\n");
    }
#endif
#ifdef __FPU
    if ( (__FPU + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FPU \t\t => %d\n", __FPU + 0);
    } else {
        strcat(buffer, "__FPU\n");
    }
#endif
#ifdef __FPU__
    if ( (__FPU__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FPU__ \t\t => %d\n", __FPU__ + 0);
    } else {
        strcat(buffer, "__FPU__\n");
    }
#endif





#ifdef _32BIT
    if ( (_32BIT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_32BIT \t\t => %d\n", _32BIT + 0);
    } else {
        strcat(buffer, "_32BIT\n");
    }
#endif
#ifdef _32BIT_
    if ( (_32BIT_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_32BIT_ \t\t => %d\n", _32BIT_ + 0);
    } else {
        strcat(buffer, "_32BIT_\n");
    }
#endif
#ifdef __32BIT
    if ( (__32BIT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__32BIT \t\t => %d\n", __32BIT + 0);
    } else {
        strcat(buffer, "__32BIT\n");
    }
#endif
#ifdef __32BIT__
    if ( (__32BIT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__32BIT__ \t\t => %d\n", __32BIT__ + 0);
    } else {
        strcat(buffer, "__32BIT__\n");
    }
#endif



#ifdef _64BIT
    if ( (_64BIT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_64BIT \t\t => %d\n", _64BIT + 0);
    } else {
        strcat(buffer, "_64BIT\n");
    }
#endif
#ifdef _64BIT_
    if ( (_64BIT_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_64BIT_ \t\t => %d\n", _64BIT_ + 0);
    } else {
        strcat(buffer, "_64BIT_\n");
    }
#endif
#ifdef __64BIT
    if ( (__64BIT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__64BIT \t\t => %d\n", __64BIT + 0);
    } else {
        strcat(buffer, "__64BIT\n");
    }
#endif
#ifdef __64BIT__
    if ( (__64BIT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__64BIT__ \t\t => %d\n", __64BIT__ + 0);
    } else {
        strcat(buffer, "__64BIT__\n");
    }
#endif

/* ##################### */
/*  CPU  */

/* ## aarch64 / ARM64 ## */

/* __aarch64__ used by gcc */
#ifdef __aarch64__
    if ( (__aarch64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__aarch64__ \t\t => %d\n", __aarch64__ + 0);
    } else {
        strcat(buffer, "__aarch64__\n");
    }
#endif

#ifdef __AARCH64__
    if ( (__AARCH64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AARCH64__ \t\t => %d\n", __AARCH64__ + 0);
    } else {
        strcat(buffer, "__AARCH64__\n");
    }
#endif

/* ARM64 in little endian mode */
#ifdef __AARCH64EL__
    if ( (__AARCH64EL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AARCH64EL__ \t\t => %d\n", __AARCH64EL__ + 0);
    } else {
        strcat(buffer, "__AARCH64EL__\n");
    }
#endif

/* ARM64 in big endian mode */
#ifdef __AARCH64EB__
    if ( (__AARCH64EB__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AARCH64EB__ \t\t => %d\n", __AARCH64EB__ + 0);
    } else {
        strcat(buffer, "__AARCH64EB__\n");
    }
#endif


/* ALPHA */
#ifdef _alpha
    if ( (_alpha + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_alpha\t\t => %d\n", _alpha + 0);
    } else {
        strcat(buffer, "_alpha\n");
    }
#endif
#ifdef _alpha_
    if ( (_alpha_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_alpha_\t\t => %d\n", _alpha_ + 0);
    } else {
        strcat(buffer, "_alpha_\n");
    }
#endif
#ifdef __alpha
    if ( (__alpha + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__alpha\t\t => %d\n", __alpha + 0);
    } else {
        strcat(buffer, "__alpha\n");
    }
#endif

/* used in diet.c */
#ifdef __alpha__
    if ( (__alpha__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__alpha__\t\t => %d\n", __alpha__ + 0);
    } else {
        strcat(buffer, "__alpha__\n");
    }
#endif

#ifdef _ALPHA_
    if ( (_ALPHA_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ALPHA_\t\t => %d\n", _ALPHA_ + 0);
    } else {
        strcat(buffer, "_ALPHA_\n");
    }
#endif
#ifdef __ALPHA
    if ( (__ALPHA + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ALPHA\t\t => %d\n", __ALPHA + 0);
    } else {
        strcat(buffer, "__ALPHA\n");
    }
#endif


#ifdef __alpha_ev4__
    if ( (__alpha_ev4__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__alpha_ev4__\t\t => %d\n", __alpha_ev4__ + 0);
    } else {
        strcat(buffer, "__alpha_ev4__\n");
    }
#endif
#ifdef __alpha_ev5__
    if ( (__alpha_ev5__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__alpha_ev5__\t\t => %d\n", __alpha_ev5__ + 0);
    } else {
        strcat(buffer, "__alpha_ev5__\n");
    }
#endif
#ifdef __alpha_ev6__
    if ( (__alpha_ev6__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__alpha_ev6__\t\t => %d\n", __alpha_ev6__ + 0);
    } else {
        strcat(buffer, "__alpha_ev6__\n");
    }
#endif

/* AMD was first, but intel invented a different name. see __x86_64 */
#ifdef amd64
    if ( (amd64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "amd64\t\t\t => %d\n", amd64 + 0);
    } else {
        strcat(buffer, "amd64\n");
    }
#endif

#ifdef _amd64
    if ( (_amd64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_amd64\t\t\t => %d\n", _amd64 + 0);
    } else {
        strcat(buffer, "_amd64\n");
    }
#endif

#ifdef _amd64_
    if ( (_amd64_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_amd64_\t\t\t => %d\n", _amd64_ + 0);
    } else {
        strcat(buffer, "_amd64_\n");
    }
#endif

#ifdef __amd64
    if ( (__amd64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__amd64\t\t\t => %d\n", __amd64 + 0);
    } else {
        strcat(buffer, "__amd64\n");
    }
#endif

/* __amd64__ used by gcc */
#ifdef __amd64__
    if ( (__amd64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__amd64__\t\t => %d\n", __amd64__ + 0);
    } else {
        strcat(buffer, "__amd64__\n");
    }
#endif

/* used by lcc (Windows, 64 bit mode) */
#ifdef _AMD64_
    if ( (_AMD64_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AMD64_\t\t\t => %d\n", _AMD64_ + 0);
    } else {
        strcat(buffer, "_AMD64_\n");
    }
#endif


#ifdef __APCS_32__
    if ( (__APCS_32__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__APCS_32__ \t\t => %d\n", __APCS_32__ + 0);
    } else {
        strcat(buffer, "__APCS_32__\n");
    }
#endif


#ifdef __arch32__
    if ( (__arch32__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__arch32__\t\t => %d\n", __arch32__ + 0);
    } else {
        strcat(buffer, "__arch32__\n");
    }
#endif
/* used in diet.c for __sparc__ */
#ifdef __arch64__
    if ( (__arch64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__arch64__\t\t => %d\n", __arch64__ + 0);
    } else {
        strcat(buffer, "__arch64__\n");
    }
#endif



#ifdef _ARCH_PENTIUM
    if ( (_ARCH_PENTIUM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARCH_PENTIUM\t\t => %d\n", _ARCH_PENTIUM + 0);
    } else {
        strcat(buffer, "_ARCH_PENTIUM\n");
    }
#endif
#ifdef _ARCH_PENTIUM2
    if ( (_ARCH_PENTIUM2 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARCH_PENTIUM2\t\t => %d\n", _ARCH_PENTIUM2 + 0);
    } else {
        strcat(buffer, "_ARCH_PENTIUM2\n");
    }
#endif
#ifdef _ARCH_PENTIUM3
    if ( (_ARCH_PENTIUM3 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARCH_PENTIUM3\t\t => %d\n", _ARCH_PENTIUM3 + 0);
    } else {
        strcat(buffer, "_ARCH_PENTIUM3\n");
    }
#endif
#ifdef _ARCH_PENTIUM4
    if ( (_ARCH_PENTIUM4 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARCH_PENTIUM4\t\t => %d\n", _ARCH_PENTIUM4 + 0);
    } else {
        strcat(buffer, "_ARCH_PENTIUM4\n");
    }
#endif

#ifdef _ARCH_PPC
    if ( (_ARCH_PPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARCH_PPC\t\t => %d\n", _ARCH_PPC + 0);
    } else {
        strcat(buffer, "_ARCH_PPC\n");
    }
#endif

#ifdef _ARCH_PPC64
    if ( (_ARCH_PPC64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARCH_PPC64\t\t => %d\n", _ARCH_PPC64 + 0);
    } else {
        strcat(buffer, "_ARCH_PPC64\n");
    }
#endif


#ifdef ARCH_PWR
    if ( (ARCH_PWR + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ARCH_PWR\t\t => %d\n", ARCH_PWR + 0);
    } else {
        strcat(buffer, "ARCH_PWR\n");
    }
#endif
#ifdef _ARCH_PWR
    if ( (_ARCH_PWR + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARCH_PWR\t\t => %d\n", _ARCH_PWR + 0);
    } else {
        strcat(buffer, "_ARCH_PWR\n");
    }
#endif

#ifdef _ARCH_PWR_
    if ( (_ARCH_PWR_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARCH_PWR_\t\t => %d\n", _ARCH_PWR_ + 0);
    } else {
        strcat(buffer, "_ARCH_PWR_\n");
    }
#endif
#ifdef __ARCH_PWR
    if ( (__ARCH_PWR + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARCH_PWR\t\t => %d\n", __ARCH_PWR + 0);
    } else {
        strcat(buffer, "__ARCH_PWR\n");
    }
#endif
#ifdef __ARCH_PWR__
    if ( (__ARCH_PWR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARCH_PWR__\t\t => %d\n", __ARCH_PWR__ + 0);
    } else {
        strcat(buffer, "__ARCH_PWR__\n");
    }
#endif



/* ### arm / ARM ### */
#ifdef arm
    if ( (arm + 1) > 1) {
        sprintf(buffer + strlen(buffer), "arm \t\t => %d\n", arm + 0);
    } else {
        strcat(buffer, "arm\n");
    }
#endif
#ifdef _arm
    if ( (_arm + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_arm \t\t => %d\n", _arm + 0);
    } else {
        strcat(buffer, "_arm\n");
    }
#endif
#ifdef _arm_
    if ( (_arm_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_arm_ \t\t => %d\n", _arm_ + 0);
    } else {
        strcat(buffer, "_arm_\n");
    }
#endif
#ifdef __arm
    if ( (__arm + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__arm\t\t\t => %d\n", __arm + 0);
    } else {
        strcat(buffer, "__arm\n");
    }
#endif
/* __arm__ used by gcc */
#ifdef __arm__
    if ( (__arm__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__arm__ \t\t => %d\n", __arm__ + 0);
    } else {
        strcat(buffer, "__arm__\n");
    }
#endif



#ifdef ARM
    if ( (ARM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ARM \t\t => %d\n", ARM + 0);
    } else {
        strcat(buffer, "ARM\n");
    }
#endif

#ifdef _ARM
    if ( (_ARM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARM \t\t => %d\n", _ARM + 0);
    } else {
        strcat(buffer, "_ARM\n");
    }
#endif
#ifdef _ARM_
    if ( (_ARM_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARM_ \t\t => %d\n", _ARM_ + 0);
    } else {
        strcat(buffer, "_ARM_\n");
    }
#endif
#ifdef __ARM
    if ( (__ARM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM \t\t => %d\n", __ARM + 0);
    } else {
        strcat(buffer, "__ARM\n");
    }
#endif
#ifdef __ARM__
    if ( (__ARM__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM__ \t\t => %d\n", __ARM__ + 0);
    } else {
        strcat(buffer, "__ARM__\n");
    }
#endif


/* 64bit ARM: aarch64 */
#ifdef __ARM64__
    if ( (__ARM64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM64__ \t\t => %d\n", __ARM64__ + 0);
    } else {
        strcat(buffer, "__ARM64__\n");
    }
#endif


#ifdef __ARM_ARCH
    if ( (__ARM_ARCH + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH \t\t => %d\n", __ARM_ARCH + 0);
    } else {
        strcat(buffer, "__ARM_ARCH\n");
    }
#endif


#ifdef __ARM_ARCH__
    if ( (__ARM_ARCH__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH__ \t\t => %d\n", __ARM_ARCH__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH__\n");
    }
#endif


#ifdef __ARM_ARCH_2__
    if ( (__ARM_ARCH_2__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_2__ \t\t => %d\n", __ARM_ARCH_2__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_2__\n");
    }
#endif

#ifdef __ARM_ARCH_3__
    if ( (__ARM_ARCH_3__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_3__ \t\t => %d\n", __ARM_ARCH_3__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_3__\n");
    }
#endif

#ifdef __ARM_ARCH_3M__
    if ( (__ARM_ARCH_3M__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_3M__ \t\t => %d\n", __ARM_ARCH_3M__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_3M__\n");
    }
#endif

#ifdef __ARM_ARCH_4__
    if ( (__ARM_ARCH_4__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_4__ \t\t => %d\n", __ARM_ARCH_4__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_4__\n");
    }
#endif

#ifdef __ARM_ARCH_4T__
    if ( (__ARM_ARCH_4T__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_4T__\t\t => %d\n", __ARM_ARCH_4T__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_4T__\n");
    }
#endif


#ifdef __ARM_ARCH_5__
    if ( (__ARM_ARCH_5__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_5__ \t\t => %d\n", __ARM_ARCH_5__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_5__\n");
    }
#endif

#ifdef __ARM_ARCH_5T__
    if ( (__ARM_ARCH_5T__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_5T__ \t\t => %d\n", __ARM_ARCH_5T__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_5T__\n");
    }
#endif
#ifdef __ARM_ARCH_5E__
    if ( (__ARM_ARCH_5E__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_5E__ \t\t => %d\n", __ARM_ARCH_5E__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_5E__\n");
    }
#endif

#ifdef __ARM_ARCH_5TE__
    if ( (__ARM_ARCH_5TE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_5TE__ \t\t => %d\n", __ARM_ARCH_5TE__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_5TE__\n");
    }
#endif

#ifdef __ARM_ARCH_5TEJ__
    if ( (__ARM_ARCH_5TEJ__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_5TEJ__ \t\t => %d\n", __ARM_ARCH_5TEJ__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_5TEJ__\n");
    }
#endif



#ifdef __ARM_ARCH_6__
    if ( (__ARM_ARCH_6__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_6__ \t\t => %d\n", __ARM_ARCH_6__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_6__\n");
    }
#endif
#ifdef __ARM_ARCH_6J__
    if ( (__ARM_ARCH_6J__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_6J__ \t\t => %d\n", __ARM_ARCH_6J__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_6J__\n");
    }
#endif
#ifdef __ARM_ARCH_6K__
    if ( (__ARM_ARCH_6K__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_6K__ \t\t => %d\n", __ARM_ARCH_6K__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_6K__\n");
    }
#endif
#ifdef __ARM_ARCH_6Z__
    if ( (__ARM_ARCH_6Z__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_6Z__ \t\t => %d\n", __ARM_ARCH_6Z__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_6Z__\n");
    }
#endif
#ifdef __ARM_ARCH_6ZK__
    if ( (__ARM_ARCH_6ZK__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_6ZK__ \t\t => %d\n", __ARM_ARCH_6ZK__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_6ZK__\n");
    }
#endif
#ifdef __ARM_ARCH_6T2__
    if ( (__ARM_ARCH_6T2__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_6T2__ \t\t => %d\n", __ARM_ARCH_6T2__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_6T2__\n");
    }
#endif
#ifdef __ARM_ARCH_6M__
    if ( (__ARM_ARCH_6M__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_6M__ \t\t => %d\n", __ARM_ARCH_6M__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_6M__\n");
    }
#endif

#ifdef __ARM_ARCH_7__
    if ( (__ARM_ARCH_7__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_7__ \t\t => %d\n", __ARM_ARCH_7__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_7__\n");
    }
#endif

#ifdef __ARM_ARCH_7A__
    if ( (__ARM_ARCH_7A__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_7A__ \t\t => %d\n", __ARM_ARCH_7A__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_7A__\n");
    }
#endif
#ifdef __ARM_ARCH_7R__
    if ( (__ARM_ARCH_7R__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_7R__ \t\t => %d\n", __ARM_ARCH_7R__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_7R__\n");
    }
#endif
#ifdef __ARM_ARCH_7M__
    if ( (__ARM_ARCH_7M__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_7M__ \t\t => %d\n", __ARM_ARCH_7M__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_7M__\n");
    }
#endif

#ifdef __ARM_ARCH_8__
    if ( (__ARM_ARCH_8__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_8__ \t\t => %d\n", __ARM_ARCH_8__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_8__\n");
    }
#endif

#ifdef __ARM_ARCH_8A
    if ( (__ARM_ARCH_8A + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_8A \t\t => %d\n", __ARM_ARCH_8A + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_8A\n");
    }
#endif
#ifdef __ARM_ARCH_8A__
    if ( (__ARM_ARCH_8A__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_8A__ \t\t => %d\n", __ARM_ARCH_8A__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_8A__\n");
    }
#endif


#ifdef __ARM_ARCH_9__
    if ( (__ARM_ARCH_9__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_9__ \t\t => %d\n", __ARM_ARCH_9__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_9__\n");
    }
#endif


#ifdef __ARM_ARCH_ISA_A64
    if ( (__ARM_ARCH_ISA_A64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_ISA_A64 \t => %d\n", __ARM_ARCH_ISA_A64 + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_ISA_A64\n");
    }
#endif

#ifdef __ARM_ARCH_PROFILE
    if ( (__ARM_ARCH_PROFILE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_PROFILE \t => %d\n", __ARM_ARCH_PROFILE + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_PROFILE\n");
    }
#endif

#ifdef __ARM_FP
    if ( (__ARM_FP + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_FP \t\t => %d\n", __ARM_FP + 0);
    } else {
        strcat(buffer, "__ARM_FP\n");
    }
#endif

#ifdef __ARM_FP16_ARGS
    if ( (__ARM_FP16_ARGS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_FP16_ARGS \t => %d\n", __ARM_FP16_ARGS + 0);
    } else {
        strcat(buffer, "__ARM_FP16_ARGS\n");
    }
#endif

/* vectorization code checks for __ARM_NEON__ and __ARM_NEON  */
#ifdef __ARM_NEON
    if ( (__ARM_NEON + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_NEON \t\t => %d\n", __ARM_NEON + 0);
    } else {
        strcat(buffer, "__ARM_NEON\n");
    }
#endif

/* vectorization code checks for __ARM_NEON__ and __ARM_NEON  */
#ifdef __ARM_NEON__
    if ( (__ARM_NEON__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_NEON__ \t\t => %d\n", __ARM_NEON__ + 0);
    } else {
        strcat(buffer, "__ARM_NEON__\n");
    }
#endif


/* ARM in big endian mode */
#ifdef __ARMEB__
    if ( (__ARMEB__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARMEB__ \t\t => %d\n", __ARMEB__ + 0);
    } else {
        strcat(buffer, "__ARMEB__\n");
    }
#endif

/* ARM in little endian mode */
#ifdef __ARMEL__
    if ( (__ARMEL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARMEL__ \t\t => %d\n", __ARMEL__ + 0);
    } else {
        strcat(buffer, "__ARMEL__\n");
    }
#endif


#ifdef __ARM_EABI__
    if ( (__ARM_EABI__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_EABI__ \t\t => %d\n", __ARM_EABI__ + 0);
    } else {
        strcat(buffer, "__ARM_EABI__\n");
    }
#endif




#ifdef arm_elf
    if ( (arm_elf + 1) > 1) {
        sprintf(buffer + strlen(buffer), "arm_elf \t\t => %d\n", arm_elf + 0);
    } else {
        strcat(buffer, "arm_elf\n");
    }
#endif
#ifdef _arm_elf
    if ( (_arm_elf + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_arm_elf \t\t => %d\n", _arm_elf + 0);
    } else {
        strcat(buffer, "_arm_elf\n");
    }
#endif
#ifdef _arm_elf_
    if ( (_arm_elf_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_arm_elf_ \t\t => %d\n", _arm_elf_ + 0);
    } else {
        strcat(buffer, "_arm_elf_\n");
    }
#endif
#ifdef __arm_elf
    if ( (__arm_elf + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__arm_elf \t\t => %d\n", __arm_elf + 0);
    } else {
        strcat(buffer, "__arm_elf\n");
    }
#endif
#ifdef __arm_elf__
    if ( (__arm_elf__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__arm_elf__ \t\t => %d\n", __arm_elf__ + 0);
    } else {
        strcat(buffer, "__arm_elf__\n");
    }
#endif


/* used by MSVC for /favor:ATOM (trimmed down x86 / x86_64 processors) */
#ifdef __ATOM__
    if ( (__ATOM__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ATOM__  \t\t => %d\n", __ATOM__ + 0);
    } else {
        strcat(buffer, "__ATOM__\n");
    }
#endif

/* SIMD instruction sets 7 to 8 */
#ifdef __AVX__
    if ( (__AVX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AVX__  \t\t => %d\n", __AVX__ + 0);
    } else {
        strcat(buffer, "__AVX__\n");
    }
#endif
#ifdef __AVX2__
    if ( (__AVX2__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AVX2__  \t\t => %d\n", __AVX2__ + 0);
    } else {
        strcat(buffer, "__AVX2__\n");
    }
#endif

/* SIMD instruction set 9 */
#ifdef __AVX512__
    if ( (__AVX512__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AVX512__  \t\t => %d\n", __AVX512__ + 0);
    } else {
        strcat(buffer, "__AVX512__\n");
    }
#endif
#ifdef __AVX512F__
    if ( (__AVX512F__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AVX512F__  \t\t => %d\n", __AVX512F__ + 0);
    } else {
        strcat(buffer, "__AVX512F__\n");
    }
#endif



/* #################### */

/* used by OpenWatcom for APLHA-target */
#ifdef __AXP__
    if ( (__AXP__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AXP__\t\t => %d\n", __AXP__ + 0);
    } else {
        strcat(buffer, "__AXP__\n");
    }
#endif


/* #################### */
/* ### i386 - i686 ### */

#ifdef __386__
    if ( (__386__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__386__ \t\t => %d\n", __386__ + 0);
    } else {
        strcat(buffer, "__386__\n");
    }
#endif


#ifdef i386
    if ( (i386 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "i386\t\t\t => %d\n", i386 + 0);
    } else {
        strcat(buffer, "i386\n");
    }
#endif
#ifdef _i386
    if ( (_i386 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i386\t\t\t => %d\n", _i386 + 0);
    } else {
        strcat(buffer, "_i386\n");
    }
#endif
#ifdef _i386_
    if ( (_i386_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i386_\t\t\t => %d\n", _i386_ + 0);
    } else {
        strcat(buffer, "_i386_\n");
    }
#endif
#ifdef __i386
    if ( (__i386 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i386\t\t\t => %d\n", __i386 + 0);
    } else {
        strcat(buffer, "__i386\n");
    }
#endif

/* __i386__ used by gcc */
#ifdef __i386__
    if ( (__i386__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i386__\t\t => %d\n", __i386__ + 0);
    } else {
        strcat(buffer, "__i386__\n");
    }
#endif


#ifdef i486
    if ( (i486 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "i486\t\t\t => %d\n", i486 + 0);
    } else {
        strcat(buffer, "i486\n");
    }
#endif
#ifdef _i486
    if ( (_i486 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i486\t\t\t => %d\n", _i486 + 0);
    } else {
        strcat(buffer, "_i486\n");
    }
#endif
#ifdef _i486_
    if ( (_i486_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i486_\t\t\t => %d\n", _i486_ + 0);
    } else {
        strcat(buffer, "_i486_\n");
    }
#endif
#ifdef __i486
    if ( (__i486 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i486\t\t\t => %d\n", __i486 + 0);
    } else {
        strcat(buffer, "__i486\n");
    }
#endif
#ifdef __i486__
    if ( (__i486__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i486__\t\t => %d\n", __i486__ + 0);
    } else {
        strcat(buffer, "__i486__\n");
    }
#endif


#ifdef i586
    if ( (i586 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "i586\t\t\t => %d\n", i586 + 0);
    } else {
        strcat(buffer, "i586\n");
    }
#endif
#ifdef _i586
    if ( (_i586 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i586\t\t\t => %d\n", _i586 + 0);
    } else {
        strcat(buffer, "_i586\n");
    }
#endif
#ifdef _i586_
    if ( (_i586_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i586_\t\t\t => %d\n", _i586_ + 0);
    } else {
        strcat(buffer, "_i586_\n");
    }
#endif
#ifdef __i586
    if ( (__i586 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i586\t\t\t => %d\n", __i586 + 0);
    } else {
        strcat(buffer, "__i586\n");
    }
#endif
#ifdef __i586__
    if ( (__i586__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i586__\t\t => %d\n", __i586__ + 0);
    } else {
        strcat(buffer, "__i586__\n");
    }
#endif

#ifdef i686
    if ( (i686 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "i686\t\t\t => %d\n", i686 + 0);
    } else {
        strcat(buffer, "i686\n");
    }
#endif
#ifdef _i686
    if ( (_i686 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i686\t\t\t => %d\n", _i686 + 0);
    } else {
        strcat(buffer, "_i686\n");
    }
#endif
#ifdef _i686_
    if ( (_i686_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i686_\t\t\t => %d\n", _i686_ + 0);
    } else {
        strcat(buffer, "_i686_\n");
    }
#endif
#ifdef __i686
    if ( (__i686 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i686\t\t\t => %d\n", __i686 + 0);
    } else {
        strcat(buffer, "__i686\n");
    }
#endif
#ifdef __i686__
    if ( (__i686__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i686__\t\t => %d\n", __i686__ + 0);
    } else {
        strcat(buffer, "__i686__\n");
    }
#endif

/* more variants */
#ifdef _I86
    if ( (_I86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_I86 \t\t => %d\n", _I86 + 0);
    } else {
        strcat(buffer, "_I86\n");
    }
#endif

#ifdef _I86_
    if ( (_I86_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_I86_ \t\t => %d\n", _I86_ + 0);
    } else {
        strcat(buffer, "_I86_\n");
    }
#endif


#ifdef __I86
    if ( (__I86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__I86 \t\t => %d\n", __I86 + 0);
    } else {
        strcat(buffer, "__I86\n");
    }
#endif

#ifdef _I86_
    if ( (_I86_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_I86_ \t\t => %d\n", _I86_ + 0);
    } else {
        strcat(buffer, "_I86_\n");
    }
#endif

#ifdef __I86
    if ( (__I86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__I86\t\t\t => %d\n", __I86 + 0);
    } else {
        strcat(buffer, "__I86\n");
    }
#endif

/* 0:8086, 2:286, 3:386 to 6:P6 */
#ifdef __I86__
    if ( (__I86__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__I86__ \t\t => %d\n", __I86__ + 0);
    } else {
        strcat(buffer, "__I86__\n");
    }
#endif

/* used by lcc (Windows, 64 bit mode) */
#ifdef _M_AMD64
    if ( (_M_AMD64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_AMD64\t\t => %d\n", _M_AMD64 + 0);
    } else {
        strcat(buffer, "_M_AMD64\n");
    }
#endif


/* used by MSVC */
#ifdef _M_ARM
    if ( (_M_ARM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_ARM\t\t => %d\n", _M_ARM + 0);
    } else {
        strcat(buffer, "_M_ARM\n");
    }
#endif

/* used by MSVC */
#ifdef _M_ARM64
    if ( (_M_ARM64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_ARM64\t\t => %d\n", _M_ARM64 + 0);
    } else {
        strcat(buffer, "_M_ARM64\n");
    }
#endif


/* Intel tried 64 bit with itanium and lost against AMD64 */
#ifdef _M_IA64
    if ( (_M_IA64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_IA64\t\t\t => %d\n", _M_IA64 + 0);
    } else {
        strcat(buffer, "_M_IA64\n");
    }
#endif


#ifdef __ia64
    if ( (__ia64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ia64\t\t => %d\n", __ia64 + 0);
    } else {
        strcat(buffer, "__ia64\n");
    }
#endif

#ifdef __ia64__
    if ( (__ia64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ia64__\t\t => %d\n", __ia64__ + 0);
    } else {
        strcat(buffer, "__ia64__\n");
    }
#endif
#ifdef __IA64
    if ( (__IA64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__IA64\t\t => %d\n", __IA64 + 0);
    } else {
        strcat(buffer, "__IA64\n");
    }
#endif
#ifdef __IA64__
    if ( (__IA64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__IA64__\t\t => %d\n", __IA64__ + 0);
    } else {
        strcat(buffer, "__IA64__\n");
    }
#endif



/* Intel tried 64 bit with itanium and lost against AMD64 */
#ifdef __itanium__
    if ( (__itanium__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__itanium__\t\t => %d\n", __itanium__ + 0);
    } else {
        strcat(buffer, "__itanium__\n");
    }
#endif


/* ALPHA */
#ifdef _M_ALPHA
    if ( (_M_ALPHA + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_ALPHA \t\t => %d\n", _M_ALPHA + 0);
    } else {
        strcat(buffer, "_M_ALPHA\n");
    }
#endif


/* CPU for dos / microsoft compiler */

#ifdef M_I86
    if ( (M_I86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M_I86 \t\t\t => %d\n", M_I86 + 0);
    } else {
        strcat(buffer, "M_I86\n");
    }
#endif

/* used by OpenWatcom */
#ifdef _M_I86
    if ( (_M_I86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_I86  \t\t => %d\n", _M_I86 + 0);
    } else {
        strcat(buffer, "_M_I86\n");
    }
#endif


/* DOS tiny memory model */
#ifdef M_I86TM
    if ( (M_I86TM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M_I86TM  \t\t => %d\n", M_I86TM + 0);
    } else {
        strcat(buffer, "M_I86TM\n");
    }
#endif
#ifdef _M_I86TM
    if ( (_M_I86TM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_I86TM  \t\t => %d\n", _M_I86TM + 0);
    } else {
        strcat(buffer, "_M_I86TM\n");
    }
#endif

/* DOS small memory model */
#ifdef M_I86SM
    if ( (M_I86SM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M_I86SM  \t\t => %d\n", M_I86SM + 0);
    } else {
        strcat(buffer, "M_I86SM\n");
    }
#endif
#ifdef _M_I86SM
    if ( (_M_I86SM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_I86SM  \t\t => %d\n", _M_I86SM + 0);
    } else {
        strcat(buffer, "_M_I86SM\n");
    }
#endif

/* DOS medium memory model */
#ifdef M_I86MM
    if ( (M_I86MM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M_I86MM  \t\t => %d\n", M_I86MM + 0);
    } else {
        strcat(buffer, "M_I86MM\n");
    }
#endif
#ifdef _M_I86MM
    if ( (_M_I86MM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_I86MM  \t\t => %d\n", _M_I86MM + 0);
    } else {
        strcat(buffer, "_M_I86MM\n");
    }
#endif

/* DOS compact memory model */
#ifdef M_I86CM
    if ( (M_I86CM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M_I86CM  \t\t => %d\n", M_I86CM + 0);
    } else {
        strcat(buffer, "M_I86CM\n");
    }
#endif
#ifdef _M_I86CM
    if ( (_M_I86CM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_I86CM  \t\t => %d\n", _M_I86CM + 0);
    } else {
        strcat(buffer, "_M_I86CM\n");
    }
#endif

/* DOS lange memory model */
#ifdef M_I86LM
    if ( (M_I86LM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M_I86LM  \t\t => %d\n", M_I86LM + 0);
    } else {
        strcat(buffer, "M_I86LM\n");
    }
#endif
#ifdef _M_I86LM
    if ( (_M_I86LM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_I86LM  \t\t => %d\n", _M_I86LM + 0);
    } else {
        strcat(buffer, "_M_I86LM\n");
    }
#endif

/* DOS VCM memory model */
#ifdef M_I86VM
    if ( (M_I86VM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M_I86VM  \t\t => %d\n", M_I86VM + 0);
    } else {
        strcat(buffer, "M_I86VM\n");
    }
#endif
#ifdef _M_I86VM
    if ( (_M_I86VM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_I86VM  \t\t => %d\n", _M_I86VM + 0);
    } else {
        strcat(buffer, "_M_I86VM\n");
    }
#endif

/* 286 or better */
#ifdef M_I286
    if ( (M_I286 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M_I286  \t\t => %d\n", M_I286 + 0);
    } else {
        strcat(buffer, "M_I286\n");
    }
#endif

#ifdef _M_I286
    if ( (_M_I286 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_I286  \t\t => %d\n", _M_I286 + 0);
    } else {
        strcat(buffer, "_M_I286\n");
    }
#endif



/* ## i386 for microsoft-compiler ## */
#ifdef M_I386
    if ( (M_I386 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M_I386  \t\t => %d\n", M_I386 + 0);
    } else {
        strcat(buffer, "M_I386\n");
    }
#endif

/* used by OpenWatcom with __SW_3 /__SW_4 / __SW_5 / __SW_6 for 386 / 486 / pentium / pentiumpro */
#ifdef _M_I386
    if ( (_M_I386 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_I386 \t\t => %d\n", _M_I386 + 0);
    } else {
        strcat(buffer, "_M_I386\n");
    }
#endif

#ifdef _M_I386_
    if ( (_M_I386_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_I386_ \t\t => %d\n", _M_I386_ + 0);
    } else {
        strcat(buffer, "_M_I386_\n");
    }
#endif
#ifdef __M_I386
    if ( (__M_I386 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M_I386 \t\t => %d\n", __M_I386 + 0);
    } else {
        strcat(buffer, "__M_I386\n");
    }
#endif
#ifdef __M_I386__
    if ( (__M_I386__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M_I386__ \t\t => %d\n", __M_I386__ + 0);
    } else {
        strcat(buffer, "__M_I386__\n");
    }
#endif

/* mc68k */
#ifdef M68000
    if ( (M68000 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M68000 \t\t => %d\n", M68000 + 0);
    } else {
        strcat(buffer, "M68000\n");
    }
#endif
#ifdef _M68000
    if ( (_M68000 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M68000 \t\t => %d\n", _M68000 + 0);
    } else {
        strcat(buffer, "_M68000\n");
    }
#endif
#ifdef _M68000_
    if ( (_M68000_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M68000_ \t\t => %d\n", _M68000_ + 0);
    } else {
        strcat(buffer, "_M68000_\n");
    }
#endif
#ifdef __M68000
    if ( (__M68000 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68000 \t\t => %d\n", __M68000 + 0);
    } else {
        strcat(buffer, "__M68000\n");
    }
#endif


#ifdef __M68000__
    if ( (__M68000__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68000__ \t\t => %d\n", __M68000__ + 0);
    } else {
        strcat(buffer, "__M68000__\n");
    }
#endif


#ifdef __M68010__
    if ( (__M68010__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68010__ \t\t => %d\n", __M68010__ + 0);
    } else {
        strcat(buffer, "__M68010__\n");
    }
#endif

#ifdef M68020
    if ( (M68020 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M68020 \t\t => %d\n", M68020 + 0);
    } else {
        strcat(buffer, "M68020\n");
    }
#endif
#ifdef _M68020
    if ( (_M68020 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M68020 \t\t => %d\n", _M68020 + 0);
    } else {
        strcat(buffer, "_M68020\n");
    }
#endif
#ifdef _M68020_
    if ( (_M68020_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M68020_ \t\t => %d\n", _M68020_ + 0);
    } else {
        strcat(buffer, "_M68020_\n");
    }
#endif
#ifdef __M68020
    if ( (__M68020 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68020 \t\t => %d\n", __M68020 + 0);
    } else {
        strcat(buffer, "__M68020\n");
    }
#endif

#ifdef __M68020__
    if ( (__M68020__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68020__ \t\t => %d\n", __M68020__ + 0);
    } else {
        strcat(buffer, "__M68020__\n");
    }
#endif


#ifdef __M68030__
    if ( (__M68030__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68030__ \t\t => %d\n", __M68030__ + 0);
    } else {
        strcat(buffer, "__M68030__\n");
    }
#endif
#ifdef __M68040__
    if ( (__M68040__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68040__ \t\t => %d\n", __M68040__ + 0);
    } else {
        strcat(buffer, "__M68040__\n");
    }
#endif
#ifdef __M68060__
    if ( (__M68060__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68060__ \t\t => %d\n", __M68060__ + 0);
    } else {
        strcat(buffer, "__M68060__\n");
    }
#endif


#ifdef __M680x0
    if ( (__M680x0 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M680x0 \t\t => %d\n", __M680x0 + 0);
    } else {
        strcat(buffer, "__M680x0\n");
    }
#endif


#ifdef __M68881
    if ( (__M68881 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68881 \t\t => %d\n", __M68881 + 0);
    } else {
        strcat(buffer, "__M68881\n");
    }
#endif
#ifdef __M68882
    if ( (__M68882 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68882 \t\t => %d\n", __M68882 + 0);
    } else {
        strcat(buffer, "__M68882\n");
    }
#endif
#ifdef __COLDFIRE
    if ( (__COLDFIRE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__COLDFIRE \t\t => %d\n", __COLDFIRE + 0);
    } else {
        strcat(buffer, "__COLDFIRE\n");
    }
#endif

#ifdef M68K
    if ( (M68K + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M68K \t\t => %d\n", M68K + 0);
    } else {
        strcat(buffer, "M68K\n");
    }
#endif
#ifdef _M68K
    if ( (_M68K + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M68K \t\t => %d\n", _M68K + 0);
    } else {
        strcat(buffer, "_M68K\n");
    }
#endif
#ifdef _M68K_
    if ( (_M68K_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M68K_ \t\t => %d\n", _M68K_ + 0);
    } else {
        strcat(buffer, "_M68K_\n");
    }
#endif
#ifdef __M68K
    if ( (__M68K + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68K \t\t => %d\n", __M68K + 0);
    } else {
        strcat(buffer, "__M68K\n");
    }
#endif
#ifdef __M68K__
    if ( (__M68K__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M68K__ \t\t => %d\n", __M68K__ + 0);
    } else {
        strcat(buffer, "__M68K__\n");
    }
#endif


#ifdef m68k
    if ( (m68k + 1) > 1) {
        sprintf(buffer + strlen(buffer), "m68k \t\t => %d\n", m68k + 0);
    } else {
        strcat(buffer, "m68k\n");
    }
#endif
#ifdef _m68k
    if ( (_m68k + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_m68k \t\t => %d\n", _m68k + 0);
    } else {
        strcat(buffer, "_m68k\n");
    }
#endif
#ifdef _m68k_
    if ( (_m68k_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_m68k_ \t\t => %d\n", _m68k_ + 0);
    } else {
        strcat(buffer, "_m68k_\n");
    }
#endif
#ifdef __m68k
    if ( (__m68k + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__m68k \t\t => %d\n", __m68k + 0);
    } else {
        strcat(buffer, "__m68k\n");
    }
#endif
#ifdef __m68k__
    if ( (__m68k__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__m68k__ \t\t => %d\n", __m68k__ + 0);
    } else {
        strcat(buffer, "__m68k__\n");
    }
#endif

#ifdef mc68000
    if ( (mc68000 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "mc68000 \t\t => %d\n", mc68000 + 0);
    } else {
        strcat(buffer, "mc68000\n");
    }
#endif
#ifdef _mc68000
    if ( (_mc68000 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mc68000 \t\t => %d\n", _mc68000 + 0);
    } else {
        strcat(buffer, "_mc68000\n");
    }
#endif
#ifdef _mc68000_
    if ( (_mc68000_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mc68000_ \t\t => %d\n", _mc68000_ + 0);
    } else {
        strcat(buffer, "_mc68000_\n");
    }
#endif
#ifdef __mc68000
    if ( (__mc68000 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mc68000 \t\t => %d\n", __mc68000 + 0);
    } else {
        strcat(buffer, "__mc68000\n");
    }
#endif
#ifdef __mc68000__
    if ( (__mc68000__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mc68000__ \t\t => %d\n", __mc68000__ + 0);
    } else {
        strcat(buffer, "__mc68000__\n");
    }
#endif

#ifdef __mc68010__
    if ( (__mc68010__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mc68010__ \t\t => %d\n", __mc68010__ + 0);
    } else {
        strcat(buffer, "__mc68010__\n");
    }
#endif
#ifdef __mc68020__
    if ( (__mc68020__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mc68020__ \t\t => %d\n", __mc68020__ + 0);
    } else {
        strcat(buffer, "__mc68020__\n");
    }
#endif
#ifdef __mc68030__
    if ( (__mc68030__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mc68030__ \t\t => %d\n", __mc68030__ + 0);
    } else {
        strcat(buffer, "__mc68030__\n");
    }
#endif
#ifdef __mc68040__
    if ( (__mc68040__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mc68040__ \t\t => %d\n", __mc68040__ + 0);
    } else {
        strcat(buffer, "__mc68040__\n");
    }
#endif
#ifdef __mc68060__
    if ( (__mc68060__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mc68060__ \t\t => %d\n", __mc68060__ + 0);
    } else {
        strcat(buffer, "__mc68060__\n");
    }
#endif

#ifdef __mcffpu__
    if ( (__mcffpu__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mcffpu__ \t\t => %d\n", __mcffpu__ + 0);
    } else {
        strcat(buffer, "__mcffpu__\n");
    }
#endif
#ifdef __HAVE_68881__
    if ( (__HAVE_68881__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__HAVE_68881__ \t\t => %d\n", __HAVE_68881__ + 0);
    } else {
        strcat(buffer, "__HAVE_68881__\n");
    }
#endif



/* microblaze */
#ifdef __MICROBLAZE__
    if ( (__MICROBLAZE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MICROBLAZE__\t\t => %d\n", __MICROBLAZE__ + 0);
    } else {
        strcat(buffer, "__MICROBLAZE__\n");
    }
#endif

/* checked by musl */
#ifdef __MICROBLAZEEL__
    if ( (__MICROBLAZEEL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MICROBLAZEEL__\t\t => %d\n", __MICROBLAZEEL__ + 0);
    } else {
        strcat(buffer, "__MICROBLAZEEL__\n");
    }
#endif


/* ### mips ### */
#ifdef mips
    if ( (mips + 1) > 1) {
        sprintf(buffer + strlen(buffer), "mips\t\t\t => %d\n", mips + 0);
    } else {
        strcat(buffer, "mips\n");
    }
#endif

#ifdef _mips
    if ( (_mips + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mips\t\t\t => %d\n", _mips + 0);
    } else {
        strcat(buffer, "_mips\n");
    }
#endif
#ifdef _mips_
    if ( (_mips_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mips_ \t\t => %d\n", _mips_ + 0);
    } else {
        strcat(buffer, "_mips_\n");
    }
#endif

/* zig/clang sets this to 32 */
#ifdef __mips
    if ( (__mips + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mips\t\t\t => %d\n", __mips + 0);
    } else {
        strcat(buffer, "__mips\n");
    }
#endif
/* __mips__ with _ABIO32 used by gcc */
#ifdef __mips__
    if ( (__mips__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mips__ \t\t => %d\n", __mips__ + 0);
    } else {
        strcat(buffer, "__mips__\n");
    }
#endif

#ifdef _ABIO32
    if ( (_ABIO32 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ABIO32 \t\t => %d\n", _ABIO32 + 0);
    } else {
        strcat(buffer, "_ABIO32\n");
    }
#endif
#ifdef _ABIO64
    if ( (_ABIO64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ABIO64 \t\t => %d\n", _ABIO64 + 0);
    } else {
        strcat(buffer, "_ABIO64\n");
    }
#endif

#ifdef __mips_isa_rev
    if ( (__mips_isa_rev + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mips_isa_rev \t\t => %d\n", __mips_isa_rev + 0);
    } else {
        strcat(buffer, "__mips_isa_rev\n");
    }
#endif
#ifdef __mips_soft_float
    if ( (__mips_soft_float + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mips_soft_float \t\t => %d\n", __mips_soft_float + 0);
    } else {
        strcat(buffer, "__mips_soft_float\n");
    }
#endif


#ifdef _MIPS
    if ( (_MIPS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MIPS \t\t => %d\n", _MIPS + 0);
    } else {
        strcat(buffer, "_MIPS\n");
    }
#endif
#ifdef _MIPS_
    if ( (_MIPS_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MIPS_ \t\t => %d\n", _MIPS_ + 0);
    } else {
        strcat(buffer, "_MIPS_\n");
    }
#endif
#ifdef __MIPS
    if ( (__MIPS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MIPS \t\t => %d\n", __MIPS + 0);
    } else {
        strcat(buffer, "__MIPS\n");
    }
#endif
#ifdef __MIPS__
    if ( (__MIPS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MIPS__ \t\t => %d\n", __MIPS__ + 0);
    } else {
        strcat(buffer, "__MIPS__\n");
    }
#endif


/* more MIPS  */
/* MIPS - big endian mode */
#ifdef _MIPSEB
    if ( (_MIPSEB + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MIPSEB \t\t => %d\n", _MIPSEB + 0);
    } else {
        strcat(buffer, "_MIPSEB\n");
    }
#endif

#ifdef __MIPSEB
    if ( (__MIPSEB + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MIPSEB \t\t => %d\n", __MIPSEB + 0);
    } else {
        strcat(buffer, "__MIPSEB\n");
    }
#endif

#ifdef __MIPSEB__
    if ( (__MIPSEB__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MIPSEB__ \t\t => %d\n", __MIPSEB__ + 0);
    } else {
        strcat(buffer, "__MIPSEB__\n");
    }
#endif


/* MIPS - little endian mode */
#ifdef _MIPSEL
    if ( (_MIPSEL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MIPSEL \t\t => %d\n", _MIPSEL + 0);
    } else {
        strcat(buffer, "_MIPSEL\n");
    }
#endif
#ifdef __MIPSEL
    if ( (__MIPSEL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MIPSEL \t\t => %d\n", __MIPSEL + 0);
    } else {
        strcat(buffer, "__MIPSEL\n");
    }
#endif
#ifdef __MIPSEL__
    if ( (__MIPSEL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MIPSEL__ \t\t => %d\n", __MIPSEL__ + 0);
    } else {
        strcat(buffer, "__MIPSEL__\n");
    }
#endif




/* Intel x86 */
#ifdef M_IX86
    if ( (M_IX86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M_IX86 \t\t => %d\n", M_IX86 + 0);
    } else {
        strcat(buffer, "M_IX86\n");
    }
#endif

/* 32 bit mode. 300 for i386 to 600 for p6 or better */
#ifdef _M_IX86
    if ( (_M_IX86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_IX86 \t\t => %d\n", _M_IX86 + 0);
    } else {
        strcat(buffer, "_M_IX86\n");
    }
#endif
#ifdef _M_IX86_
    if ( (_M_IX86_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_IX86_ \t\t => %d\n", _M_IX86_ + 0);
    } else {
        strcat(buffer, "_M_IX86_\n");
    }
#endif
#ifdef __M_IX86
    if ( (__M_IX86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M_IX86 \t\t => %d\n", __M_IX86 + 0);
    } else {
        strcat(buffer, "__M_IX86\n");
    }
#endif
#ifdef __M_IX86__
    if ( (__M_IX86__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__M_IX86__ \t\t => %d\n", __M_IX86__ + 0);
    } else {
        strcat(buffer, "__M_IX86__\n");
    }
#endif


/* SIMD instruction set, used by Microsoft compiler. 1: SSE or 2: SSE2 */
#ifdef _M_IX86_FP
    if ( (_M_IX86_FP + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_IX86_FP \t\t => %d %s\n", _M_IX86_FP + 0,
        (_M_IX86_FP  > 2) ? "(unknown SSE version)" : 
        (_M_IX86_FP == 2) ? "(SSE2)" : "(SSE)");
    } else {
        strcat(buffer, "_M_IX86_FP\n");
    }
#endif



/* Multi Media Extension instruction set */
#ifdef __MMX__
    if ( (__MMX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MMX__  \t\t => %d\n", __MMX__ + 0);
    } else {
        strcat(buffer, "__MMX__\n");
    }
#endif


/* used by OpenWatcom */
#ifdef _M_X64
    if ( (_M_X64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_X64  \t\t => %d\n", _M_X64 + 0);
    } else {
        strcat(buffer, "_M_X64\n");
    }
#endif


/* ### pentium and up ### */

#ifdef _pentium
    if ( (_pentium + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_pentium\t\t => %d\n", _pentium + 0);
    } else {
        strcat(buffer, "_pentium\n");
    }
#endif
#ifdef _pentium_
    if ( (_pentium_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_pentium_\t\t => %d\n", _pentium_ + 0);
    } else {
        strcat(buffer, "_pentium_\n");
    }
#endif
#ifdef __pentium
    if ( (__pentium + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__pentium\t\t => %d\n", __pentium + 0);
    } else {
        strcat(buffer, "__pentium\n");
    }
#endif
#ifdef __pentium__
    if ( (__pentium__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__pentium__\t => %d\n", __pentium__ + 0);
    } else {
        strcat(buffer, "__pentium__\n");
    }
#endif


#ifdef _pentiumpro
    if ( (_pentiumpro + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_pentiumpro\t\t\t => %d\n", _pentiumpro + 0);
    } else {
        strcat(buffer, "_pentiumpro\n");
    }
#endif
#ifdef _pentiumpro_
    if ( (_pentiumpro_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_pentiumpro_\t\t\t => %d\n", _pentiumpro_ + 0);
    } else {
        strcat(buffer, "_pentiumpro_\n");
    }
#endif
#ifdef __pentiumpro
    if ( (__pentiumpro + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__pentiumpro\t\t => %d\n", __pentiumpro + 0);
    } else {
        strcat(buffer, "__pentiumpro\n");
    }
#endif
#ifdef __pentiumpro__
    if ( (__pentiumpro__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__pentiumpro__\t\t => %d\n", __pentiumpro__ + 0);
    } else {
        strcat(buffer, "__pentiumpro__\n");
    }
#endif




/* PowerPC */
#ifdef _M_MPPC
    if ( (_M_MPPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_MPPC \t\t => %d\n", _M_MPPC + 0);
    } else {
        strcat(buffer, "_M_MPPC\n");
    }
#endif

#ifdef _M_PPC
    if ( (_M_PPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_PPC \t\t => %d\n", _M_PPC + 0);
    } else {
        strcat(buffer, "_M_PPC\n");
    }
#endif


#ifdef POWER
    if ( (POWER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "POWER\t\t => %d\n", POWER + 0);
    } else {
        strcat(buffer, "POWER\n");
    }
#endif
#ifdef _POWER
    if ( (_POWER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POWER\t\t => %d\n", _POWER + 0);
    } else {
        strcat(buffer, "_POWER\n");
    }
#endif
#ifdef _POWER_
    if ( (_POWER_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POWER_\t\t => %d\n", _POWER_ + 0);
    } else {
        strcat(buffer, "_POWER_\n");
    }
#endif
#ifdef __POWER
    if ( (__POWER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POWER\t\t => %d\n", __POWER + 0);
    } else {
        strcat(buffer, "__POWER\n");
    }
#endif
#ifdef __POWER__
    if ( (__POWER__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POWER__\t\t => %d\n", __POWER__ + 0);
    } else {
        strcat(buffer, "__POWER__\n");
    }
#endif

#ifdef powerpc
    if ( (powerpc + 1) > 1) {
        sprintf(buffer + strlen(buffer), "powerpc \t\t => %d\n", powerpc + 0);
    } else {
        strcat(buffer, "powerpc\n");
    }
#endif

#ifdef _powerpc
    if ( (_powerpc + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_powerpc \t\t => %d\n", _powerpc + 0);
    } else {
        strcat(buffer, "_powerpc\n");
    }
#endif
#ifdef _powerpc_
    if ( (_powerpc_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_powerpc_ \t\t => %d\n", _powerpc_ + 0);
    } else {
        strcat(buffer, "_powerpc_\n");
    }
#endif
#ifdef __powerpc
    if ( (__powerpc + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__powerpc \t\t => %d\n", __powerpc + 0);
    } else {
        strcat(buffer, "__powerpc\n");
    }
#endif
#ifdef __powerpc__
    if ( (__powerpc__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__powerpc__ \t\t => %d\n", __powerpc__ + 0);
    } else {
        strcat(buffer, "__powerpc__\n");
    }
#endif


#ifdef POWERPC
    if ( (POWERPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "POWERPC\t\t => %d\n", POWERPC + 0);
    } else {
        strcat(buffer, "POWERPC\n");
    }
#endif
#ifdef _POWERPC
    if ( (_POWERPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POWERPC\t\t => %d\n", _POWERPC + 0);
    } else {
        strcat(buffer, "_POWERPC\n");
    }
#endif
#ifdef _POWERPC_
    if ( (_POWERPC_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POWERPC_\t\t => %d\n", _POWERPC_ + 0);
    } else {
        strcat(buffer, "_POWERPC_\n");
    }
#endif
#ifdef __POWERPC
    if ( (__POWERPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POWERPC\t\t => %d\n", __POWERPC + 0);
    } else {
        strcat(buffer, "__POWERPC\n");
    }
#endif
#ifdef __POWERPC__
    if ( (__POWERPC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__POWERPC__\t\t => %d\n", __POWERPC__ + 0);
    } else {
        strcat(buffer, "__POWERPC__\n");
    }
#endif


#ifdef __powerpc64__
    if ( (__powerpc64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__powerpc64__ \t\t => %d\n", __powerpc64__ + 0);
    } else {
        strcat(buffer, "__powerpc64__\n");
    }
#endif


#ifdef ppc
    if ( (ppc + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ppc \t\t => %d\n", ppc + 0);
    } else {
        strcat(buffer, "ppc\n");
    }
#endif
#ifdef _ppc
    if ( (_ppc + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ppc \t\t => %d\n", _ppc + 0);
    } else {
        strcat(buffer, "_ppc\n");
    }
#endif
#ifdef _ppc_
    if ( (_ppc_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ppc_ \t\t => %d\n", _ppc_ + 0);
    } else {
        strcat(buffer, "_ppc_\n");
    }
#endif
#ifdef __ppc
    if ( (__ppc + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ppc \t\t => %d\n", __ppc + 0);
    } else {
        strcat(buffer, "__ppc\n");
    }
#endif
#ifdef __ppc__
    if ( (__ppc__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ppc__ \t\t => %d\n", __ppc__ + 0);
    } else {
        strcat(buffer, "__ppc__\n");
    }
#endif


#ifdef PPC
    if ( (PPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "PPC \t\t => %d\n", PPC + 0);
    } else {
        strcat(buffer, "PPC\n");
    }
#endif
#ifdef _PPC
    if ( (_PPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_PPC \t\t => %d\n", _PPC + 0);
    } else {
        strcat(buffer, "_PPC\n");
    }
#endif
#ifdef _PPC_
    if ( (_PPC_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_PPC_ \t\t => %d\n", _PPC_ + 0);
    } else {
        strcat(buffer, "_PPC_\n");
    }
#endif
#ifdef __PPC
    if ( (__PPC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__PPC \t\t => %d\n", __PPC + 0);
    } else {
        strcat(buffer, "__PPC\n");
    }
#endif
#ifdef __PPC__
    if ( (__PPC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__PPC__ \t\t => %d\n", __PPC__ + 0);
    } else {
        strcat(buffer, "__PPC__\n");
    }
#endif




#ifdef __ppc64
    if ( (__ppc64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ppc64 \t\t => %d\n", __ppc64 + 0);
    } else {
        strcat(buffer, "__ppc64\n");
    }
#endif
#ifdef __ppc64__
    if ( (__ppc64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ppc64__ \t\t => %d\n", __ppc64__ + 0);
    } else {
        strcat(buffer, "__ppc64__\n");
    }
#endif

#ifdef __PPC64
    if ( (__PPC64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__PPC64 \t\t => %d\n", __PPC64 + 0);
    } else {
        strcat(buffer, "__PPC64\n");
    }
#endif
#ifdef __PPC64__
    if ( (__PPC64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__PPC64__ \t\t => %d\n", __PPC64__ + 0);
    } else {
        strcat(buffer, "__PPC64__\n");
    }
#endif



#ifdef _R3000
    if ( (_R3000 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_R3000 \t\t => %d\n", _R3000 + 0);
    } else {
        strcat(buffer, "_R3000\n");
    }
#endif
#ifdef _R4000
    if ( (_R4000 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_R4000 \t\t => %d\n", _R4000 + 0);
    } else {
        strcat(buffer, "_R4000\n");
    }
#endif


#ifdef _riscv
    if ( (_riscv + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_riscv \t\t => %d\n", _riscv + 0);
    } else {
        strcat(buffer, "_riscv\n");
    }
#endif

#ifdef __riscv
    if ( (__riscv + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__riscv \t\t => %d\n", __riscv + 0);
    } else {
        strcat(buffer, "__riscv\n");
    }
#endif


#ifdef __riscv__
    if ( (__riscv__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__riscv__ \t\t => %d\n", __riscv__ + 0);
    } else {
        strcat(buffer, "__riscv__\n");
    }
#endif

#ifdef __RISCV64__
    if ( (__RISCV64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__RISCV64__ \t\t => %d\n", __RISCV64__ + 0);
    } else {
        strcat(buffer, "__RISCV64__\n");
    }
#endif

/* checked by musl */
#ifdef __riscv_float_abi_single
    if ( (__riscv_float_abi_single + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__riscv_float_abi_single \t\t => %d\n", __riscv_float_abi_single + 0);
    } else {
        strcat(buffer, "__riscv_float_abi_single\n");
    }
#endif

/* checked by musl */
#ifdef __riscv_float_abi_soft
    if ( (__riscv_float_abi_soft + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__riscv_float_abi_soft \t\t => %d\n", __riscv_float_abi_soft + 0);
    } else {
        strcat(buffer, "__riscv_float_abi_soft\n");
    }
#endif


#ifdef __riscv_xlen
    if ( (__riscv_xlen + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__riscv_xlen \t\t => %d\n", __riscv_xlen + 0);
    } else {
        strcat(buffer, "__riscv_xlen\n");
    }
#endif


#ifdef __sh__
    if ( (__sh__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__sh__\t\t => %d\n", __sh__ + 0);
    } else {
        strcat(buffer, "__sh__\n");
    }
#endif

/* checked by musl */
#ifdef __SH4__
    if ( (__SH4__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SH4__\t\t => %d\n", __SH4__ + 0);
    } else {
        strcat(buffer, "__SH4__\n");
    }
#endif

#ifdef __SH5__
    if ( (__SH5__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SH5__\t\t => %d\n", __SH5__ + 0);
    } else {
        strcat(buffer, "__SH5__\n");
    }
#endif

/* checked by musl */
#ifdef __SH_FDPIC
    if ( (__SH_FDPIC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SH_FDPIC\t\t => %d\n", __SH_FDPIC + 0);
    } else {
        strcat(buffer, "__SH_FDPIC\n");
    }
#endif
/* checked by musl */
#ifdef __SH_FPU_ANY
    if ( (__SH_FPU_ANY + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SH_FPU_ANY\t\t => %d\n", __SH_FPU_ANY + 0);
    } else {
        strcat(buffer, "__SH_FPU_ANY\n");
    }
#endif


#ifdef __sparc__
    if ( (__sparc__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__sparc__\t\t => %d\n", __sparc__ + 0);
    } else {
        strcat(buffer, "__sparc__\n");
    }
#endif

#ifdef __sparc_v8__
    if ( (__sparc_v8__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__sparc_v8__\t\t => %d\n", __sparc_v8__ + 0);
    } else {
        strcat(buffer, "__sparc_v8__\n");
    }
#endif

#ifdef __sparcv9
    if ( (__sparcv9 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__sparcv9\t\t => %d\n", __sparcv9 + 0);
    } else {
        strcat(buffer, "__sparcv9\n");
    }
#endif

#ifdef __sparclite__
    if ( (__sparclite__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__sparclite__\t\t => %d\n", __sparclite__ + 0);
    } else {
        strcat(buffer, "__sparclite__\n");
    }
#endif


/* SIMD instruction sets 1 to 6 */
#ifdef __SSE__
    if ( (__SSE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSE__  \t\t => %d\n", __SSE__ + 0);
    } else {
        strcat(buffer, "__SSE__\n");
    }
#endif
#ifdef __SSE2__
    if ( (__SSE2__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSE2__  \t\t => %d\n", __SSE2__ + 0);
    } else {
        strcat(buffer, "__SSE2__\n");
    }
#endif
#ifdef __SSE3__
    if ( (__SSE3__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSE3__  \t\t => %d\n", __SSE3__ + 0);
    } else {
        strcat(buffer, "__SSE3__\n");
    }
#endif
#ifdef __SSSE3__
    if ( (__SSSE3__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSSE3__  \t\t => %d\n", __SSSE3__ + 0);
    } else {
        strcat(buffer, "__SSSE3__\n");
    }
#endif

#ifdef __SSE4_1__
    if ( (__SSE4_1__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSE4_1__  \t\t => %d\n", __SSE4_1__ + 0);
    } else {
        strcat(buffer, "__SSE4_1__\n");
    }
#endif

#ifdef __SSE4_2__
    if ( (__SSE4_2__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSE4_2__  \t\t => %d\n", __SSE4_2__ + 0);
    } else {
        strcat(buffer, "__SSE4_2__\n");
    }
#endif

/* AMD extension to __SSE4_1__ */
#ifdef __SSE4A__
    if ( (__SSE4A__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSE4A__  \t\t => %d\n", __SSE4A__ + 0);
    } else {
        strcat(buffer, "__SSE4A__\n");
    }
#endif

#ifdef __SSE5__
    if ( (__SSE5__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSE5__  \t\t => %d\n", __SSE5__ + 0);
    } else {
        strcat(buffer, "__SSE5__\n");
    }
#endif



#ifdef __SSE_MATH__
    if ( (__SSE_MATH__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSE_MATH__  \t\t => %d\n", __SSE_MATH__ + 0);
    } else {
        strcat(buffer, "__SSE_MATH__\n");
    }
#endif
#ifdef __SSE2_MATH__
    if ( (__SSE2_MATH__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSE2_MATH__  \t\t => %d\n", __SSE2_MATH__ + 0);
    } else {
        strcat(buffer, "__SSE2_MATH__\n");
    }
#endif


/* used by OpenWatcom with _M_I86: 8086 */
#ifdef __SW_0
    if ( (__SW_0 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SW_0  \t\t => %d\n", __SW_0 + 0);
    } else {
        strcat(buffer, "__SW_0\n");
    }
#endif

/* used by OpenWatcom with _M_I86: 80186 */
#ifdef __SW_1
    if ( (__SW_1 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SW_1  \t\t => %d\n", __SW_1 + 0);
    } else {
        strcat(buffer, "__SW_1\n");
    }
#endif

/* used by OpenWatcom with _M_I86: 80286 */
#ifdef __SW_2
    if ( (__SW_2 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SW_2  \t\t => %d\n", __SW_2 + 0);
    } else {
        strcat(buffer, "__SW_2\n");
    }
#endif

/* used by OpenWatcom with _M_I386: 80386 */
#ifdef __SW_3
    if ( (__SW_3 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SW_3  \t\t => %d\n", __SW_3 + 0);
    } else {
        strcat(buffer, "__SW_3\n");
    }
#endif
/* used by OpenWatcom with _M_I386: 80486 */
#ifdef __SW_4
    if ( (__SW_4 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SW_4  \t\t => %d\n", __SW_4 + 0);
    } else {
        strcat(buffer, "__SW_4\n");
    }
#endif

/* used by OpenWatcom with _M_I386: 80586 / pentium */
#ifdef __SW_5
    if ( (__SW_5 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SW_5  \t\t => %d\n", __SW_5 + 0);
    } else {
        strcat(buffer, "__SW_5\n");
    }
#endif

/* used by OpenWatcom with _M_I386: 80686 / pentiumpro */
#ifdef __SW_6
    if ( (__SW_6 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SW_6  \t\t => %d\n", __SW_6 + 0);
    } else {
        strcat(buffer, "__SW_6\n");
    }
#endif


/* TMS320C3x, 0C4x, 0C67 */
#ifdef _TMS32C03x
    if ( (_TMS32C03x + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TMS32C03x \t\t => %d\n", _TMS32C03x + 0);
    } else {
        strcat(buffer, "_TMS32C03x\n");
    }
#endif

#ifdef _TMS32C04x
    if ( (_TMS32C04x + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TMS32C04x \t\t => %d\n", _TMS32C04x + 0);
    } else {
        strcat(buffer, "_TMS32C04x\n");
    }
#endif

#ifdef _TMS32C06x
    if ( (_TMS32C06x + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TMS32C06x \t\t => %d\n", _TMS32C06x + 0);
    } else {
        strcat(buffer, "_TMS32C06x\n");
    }
#endif

#ifdef _TMS32C067
    if ( (_TMS32C067 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TMS32C067 \t\t => %d\n", _TMS32C067 + 0);
    } else {
        strcat(buffer, "_TMS32C067\n");
    }
#endif


#ifdef __vax__
    if ( (__vax__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__vax__\t\t => %d\n", __vax__ + 0);
    } else {
        strcat(buffer, "__vax__\n");
    }
#endif

/* Altivec instruction set extension */
#ifdef __VEC__
    if ( (__VEC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__VEC__  \t\t => %d\n", __VEC__ + 0);
    } else {
        strcat(buffer, "__VEC__\n");
    }
#endif



#ifdef X86
    if ( (X86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "X86\t\t\t => %d\n", X86 + 0);
    } else {
        strcat(buffer, "X86\n");
    }
#endif
#ifdef _X86
    if ( (_X86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_X86\t\t\t => %d\n", _X86 + 0);
    } else {
        strcat(buffer, "_X86\n");
    }
#endif

/* used by lcc (Windows, 32 bit mode) */
#ifdef _X86_
    if ( (_X86_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_X86_\t\t\t => %d\n", _X86_ + 0);
    } else {
        strcat(buffer, "_X86_\n");
    }
#endif
#ifdef __X86
    if ( (__X86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__X86\t\t\t => %d\n", __X86 + 0);
    } else {
        strcat(buffer, "__X86\n");
    }
#endif
#ifdef __X86__
    if ( (__X86__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__X86__ \t\t => %d\n", __X86__ + 0);
    } else {
        strcat(buffer, "__X86__\n");
    }
#endif


/* used by lcc (Windows, 64 bit mode) */
#ifdef _X86AMD64_
    if ( (_X86AMD64_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_X86AMD64_\t\t => %d\n", _X86AMD64_ + 0);
    } else {
        strcat(buffer, "_X86AMD64_\n");
    }
#endif

/* different name from intel. see __amd64 */
#ifdef x86_64
    if ( (x86_64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "x86_64\t\t => %d\n", x86_64 + 0);
    } else {
        strcat(buffer, "x86_64\n");
    }
#endif

#ifdef _x86_64
    if ( (_x86_64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_x86_64\t\t => %d\n", _x86_64 + 0);
    } else {
        strcat(buffer, "_x86_64\n");
    }
#endif

#ifdef _x86_64_
    if ( (_x86_64_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_x86_64_\t\t => %d\n", _x86_64_ + 0);
    } else {
        strcat(buffer, "_x86_64_\n");
    }
#endif

#ifdef __x86_64
    if ( (__x86_64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__x86_64\t\t => %d\n", __x86_64 + 0);
    } else {
        strcat(buffer, "__x86_64\n");
    }
#endif
#ifdef __x86_64__
    if ( (__x86_64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__x86_64__\t\t => %d\n", __x86_64__ + 0);
    } else {
        strcat(buffer, "__x86_64__\n");
    }
#endif



#ifdef __xtensia__
    if ( (__xtensia__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__xtensia__\t\t => %d\n", __xtensia__ + 0);
    } else {
        strcat(buffer, "__xtensia__\n");
    }
#endif

#ifdef __z8000__
    if ( (__z8000__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__z8000__\t\t => %d\n", __z8000__ + 0);
    } else {
        strcat(buffer, "__z8000__\n");
    }
#endif

/* ################################################### */
/* OS */
/* ####################### */
/* AIX */
#ifdef AIX
    if ( (AIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "AIX\t\t => %d\n", AIX + 0);
    } else {
        strcat(buffer, "AIX\n");
    }
#endif
#ifdef _AIX
    if ( (_AIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AIX\t\t => %d\n", _AIX + 0);
    } else {
        strcat(buffer, "_AIX\n");
    }
#endif
#ifdef _AIX_
    if ( (_AIX_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AIX_\t\t => %d\n", _AIX_ + 0);
    } else {
        strcat(buffer, "_AIX_\n");
    }
#endif
#ifdef __AIX
    if ( (__AIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AIX\t\t => %d\n", __AIX + 0);
    } else {
        strcat(buffer, "__AIX\n");
    }
#endif
#ifdef __AIX__
    if ( (__AIX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AIX__\t\t => %d\n", __AIX__ + 0);
    } else {
        strcat(buffer, "__AIX__\n");
    }
#endif

/* specific AIX version */
#ifdef _AIX3
    if ( (_AIX3 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AIX3\t\t => %d\n", _AIX3 + 0);
    } else {
        strcat(buffer, "_AIX3\n");
    }
#endif
#ifdef _AIX32
    if ( (_AIX32 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AIX32\t\t => %d\n", _AIX32 + 0);
    } else {
        strcat(buffer, "_AIX32\n");
    }
#endif
#ifdef _AIX41
    if ( (_AIX41 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AIX41\t\t => %d\n", _AIX41 + 0);
    } else {
        strcat(buffer, "_AIX41\n");
    }
#endif
#ifdef _AIX43
    if ( (_AIX43 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AIX43\t\t => %d\n", _AIX43 + 0);
    } else {
        strcat(buffer, "_AIX43\n");
    }
#endif

/* The great Amiga */
#ifdef AMIGA
    if ( (AMIGA + 1) > 1) {
        sprintf(buffer + strlen(buffer), "AMIGA\t\t => %d\n", AMIGA + 0);
    } else {
        strcat(buffer, "AMIGA\n");
    }
#endif
#ifdef _AMIGA
    if ( (_AMIGA + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AMIGA\t\t => %d\n", _AMIGA + 0);
    } else {
        strcat(buffer, "_AMIGA\n");
    }
#endif
#ifdef _AMIGA_
    if ( (_AMIGA_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AMIGA_\t\t => %d\n", _AMIGA_ + 0);
    } else {
        strcat(buffer, "_AMIGA_\n");
    }
#endif
#ifdef __AMIGA
    if ( (__AMIGA + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AMIGA\t\t => %d\n", __AMIGA + 0);
    } else {
        strcat(buffer, "__AMIGA\n");
    }
#endif
#ifdef __AMIGA__
    if ( (__AMIGA__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AMIGA__\t\t => %d\n", __AMIGA__ + 0);
    } else {
        strcat(buffer, "__AMIGA__\n");
    }
#endif

#ifdef __amigaos__
    if ( (__amigaos__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__amigaos__\t\t => %d\n", __amigaos__ + 0);
    } else {
        strcat(buffer, "__amigaos__\n");
    }
#endif

/* Amiga OS (PPC) */
#ifdef __AMIGAOS4__
    if ( (__AMIGAOS4__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AMIGAOS4__\t => %d\n", __AMIGAOS4__ + 0);
    } else {
        strcat(buffer, "__AMIGAOS4__\n");
    }
#endif
#ifdef __amigaos4__
    if ( (__amigaos4__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__amigaos4__\t\t => %d\n", __amigaos4__ + 0);
    } else {
        strcat(buffer, "__amigaos4__\n");
    }
#endif


/* ### Android ### */

/* checked in stb/whereami */
#ifdef ANDROID
    if ( (ANDROID   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ANDROID  \t => %d\n", ANDROID   + 0);
    } else {
        strcat(buffer, "ANDROID\n");
    }
#endif
#ifdef _ANDROID
    if ( (_ANDROID   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ANDROID  \t => %d\n", _ANDROID   + 0);
    } else {
        strcat(buffer, "ANDROID\n");
    }
#endif
#ifdef _ANDROID_
    if ( (_ANDROID_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ANDROID_  \t => %d\n", _ANDROID_   + 0);
    } else {
        strcat(buffer, "_ANDROID_\n");
    }
#endif
#ifdef __ANDROID
    if ( (__ANDROID   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ANDROID  \t => %d\n", __ANDROID   + 0);
    } else {
        strcat(buffer, "__ANDROID\n");
    }
#endif

/* checked in stb/whereami */
#ifdef __ANDROID__
    if ( (__ANDROID__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ANDROID__ \t\t => %d\n", __ANDROID__   + 0);
    } else {
        strcat(buffer, "__ANDROID__\n");
    }
#endif



/* APPLE */
#ifdef APPLE
    if ( (APPLE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "APPLE  \t\t => %d\n", APPLE   + 0);
    } else {
        strcat(buffer, "APPLE\n");
    }
#endif
#ifdef _APPLE
    if ( (_APPLE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_APPLE  \t\t => %d\n", _APPLE   + 0);
    } else {
        strcat(buffer, "_APPLE\n");
    }
#endif
#ifdef _APPLE_
    if ( (_APPLE_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_APPLE_  \t\t => %d\n", _APPLE_   + 0);
    } else {
        strcat(buffer, "_APPLE_\n");
    }
#endif
#ifdef __APPLE
    if ( (__APPLE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__APPLE  \t\t => %d\n", __APPLE   + 0);
    } else {
        strcat(buffer, "__APPLE\n");
    }
#endif
#ifdef __APPLE__
    if ( (__APPLE__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__APPLE__  \t\t => %d\n", __APPLE__   + 0);
    } else {
        strcat(buffer, "__APPLE__\n");
    }
#endif


/* Amiga OS (Rewrite) */
#ifdef __AROS__
    if ( (__AROS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__AROS__\t => %d\n", __AROS__ + 0);
    } else {
        strcat(buffer, "__AROS__\n");
    }
#endif

/* __BEOS__ (replaced by __HAIKU__)  */
#ifdef BEOS
    if ( (BEOS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "BEOS\t\t => %d\n", BEOS + 0);
    } else {
        strcat(buffer, "BEOS\n");
    }
#endif
#ifdef __BEOS__
    if ( (__BEOS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BEOS__\t\t => %d\n", __BEOS__ + 0);
    } else {
        strcat(buffer, "__BEOS__\n");
    }
#endif

#ifdef bsdi
    if ( (bsdi + 1) > 1) {
        sprintf(buffer + strlen(buffer), "bsdi\t\t => %d\n", bsdi + 0);
    } else {
        strcat(buffer, "bsdi\n");
    }
#endif
#ifdef __bsdi__
    if ( (__bsdi__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__bsdi__\t\t => %d\n", __bsdi__ + 0);
    } else {
        strcat(buffer, "__bsdi__\n");
    }
#endif



#ifdef _CRAY
    if ( (_CRAY + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CRAY\t\t => %d\n", _CRAY + 0);
    } else {
        strcat(buffer, "_CRAY\n");
    }
#endif



/* Apple Darwin */
#ifdef DARWIN
    if ( (DARWIN   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "DARWIN  \t\t => %d\n", DARWIN   + 0);
    } else {
        strcat(buffer, "DARWIN\n");
    }
#endif
#ifdef _DARWIN
    if ( (_DARWIN   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DARWIN  \t\t => %d\n", _DARWIN   + 0);
    } else {
        strcat(buffer, "_DARWIN\n");
    }
#endif
#ifdef _DARWIN_
    if ( (_DARWIN_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DARWIN_  \t\t => %d\n", _DARWIN_   + 0);
    } else {
        strcat(buffer, "_DARWIN_\n");
    }
#endif
#ifdef __DARWIN
    if ( (__DARWIN   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DARWIN  \t\t => %d\n", __DARWIN   + 0);
    } else {
        strcat(buffer, "__DARWIN\n");
    }
#endif
#ifdef __DARWIN__
    if ( (__DARWIN__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DARWIN__  \t\t => %d\n", __DARWIN__   + 0);
    } else {
        strcat(buffer, "__DARWIN__\n");
    }
#endif



/* ## DOS ## */
#ifdef DOS
    if ( (DOS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "DOS\t\t\t => %d\n", DOS + 0);
    } else {
        strcat(buffer, "DOS\n");
    }
#endif

#ifdef _DOS
    if ( (_DOS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DOS\t\t\t => %d\n", _DOS + 0);
    } else {
        strcat(buffer, "_DOS\n");
    }
#endif

#ifdef _DOS_
    if ( (_DOS_  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DOS_ \t\t => %d\n", _DOS_  + 0);
    } else {
        strcat(buffer, "_DOS_\n");
    }
#endif

#ifdef __DOS
    if ( (__DOS  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DOS\t\t => %d\n", __DOS + 0);
    } else {
        strcat(buffer, "__DOS\n");
    }
#endif
#ifdef __DOS__
    if ( (__DOS__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DOS__ \t\t => %d\n", __DOS__  + 0);
    } else {
        strcat(buffer, "__DOS__\n");
    }
#endif


/* DOS16RM:  16bit DOS extender */
#ifdef DOS16RM
    if ( (DOS16RM  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "DOS16RM \t\t => %d\n", DOS16RM  + 0);
    } else {
        strcat(buffer, "DOS16RM\n");
    }
#endif

/*  The DOS386 DOS extender */
#ifdef DOS386
    if ( (DOS386  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "DOS386 \t\t => %d\n", DOS386  + 0);
    } else {
        strcat(buffer, "DOS386\n");
    }
#endif


#ifdef DGUX
    if ( (DGUX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "DGUX\t => %d\n", DGUX + 0);
    } else {
        strcat(buffer, "DGUX\n");
    }
#endif

#ifdef __DGUX__
    if ( (__DGUX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DGUX__\t => %d\n", __DGUX__ + 0);
    } else {
        strcat(buffer, "__DGUX__\n");
    }
#endif

#ifdef __dgux__
    if ( (__dgux__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__dgux__\t => %d\n", __dgux__ + 0);
    } else {
        strcat(buffer, "__dgux__\n");
    }
#endif


/* DragonFly (BSD) */
#ifdef __DragonFly__
    if ( (__DragonFly__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DragonFly__\t => %d\n", __DragonFly__ + 0);
    } else {
        strcat(buffer, "__DragonFly__\n");
    }
#endif


/* EMSCRIPTEN (c / c++ code compiled to webassembly) */
/* (run that with: html in the browser / with node.js or wasm) */
#ifdef __EMSCRIPTEN__
    if ( (__EMSCRIPTEN__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__EMSCRIPTEN__\t\t => %d\n", __EMSCRIPTEN__ + 0);
    } else {
        strcat(buffer, "__EMSCRIPTEN__\n");
    }
#endif


#ifdef FreeBSD
    if ( (FreeBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "FreeBSD \t\t => %d\n", FreeBSD + 0);
    } else {
        strcat(buffer, "FreeBSD\n");
    }
#endif

#ifdef _FreeBSD
    if ( (_FreeBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FreeBSD \t\t => %d\n", _FreeBSD + 0);
    } else {
        strcat(buffer, "_FreeBSD\n");
    }
#endif

#ifdef _FreeBSD_
    if ( (_FreeBSD_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FreeBSD_ \t\t => %d\n", _FreeBSD_ + 0);
    } else {
        strcat(buffer, "_FreeBSD_\n");
    }
#endif

#ifdef __FreeBSD
    if ( (__FreeBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FreeBSD \t\t => %d\n", __FreeBSD + 0);
    } else {
        strcat(buffer, "__FreeBSD\n");
    }
#endif

#ifdef __FreeBSD__
    if ( (__FreeBSD__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FreeBSD__ \t\t => %d\n", __FreeBSD__ + 0);
    } else {
        strcat(buffer, "__FreeBSD__\n");
    }
#endif

#ifdef __FreeBSD_kernel__
    if ( (__FreeBSD_kernel__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FreeBSD_kernel__ \t\t => %d\n", __FreeBSD_kernel__ + 0);
    } else {
        strcat(buffer, "__FreeBSD_kernel__\n");
    }
#endif


/* Haiku uses __HAIKU__ */
#ifdef __HAIKU__
    if ( (__HAIKU__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__HAIKU__\t\t => %d\n", __HAIKU__ + 0);
    } else {
        strcat(buffer, "__HAIKU__\n");
    }
#endif


/* __HOS_*__ is used by ibmcpp */
#ifdef __HOS_AIX__
    if ( (__HOS_AIX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__HOS_AIX__\t\t => %d\n", __HOS_AIX__ + 0);
    } else {
        strcat(buffer, "__HOS_AIX__\n");
    }
#endif


#ifdef __HOS_LINUX__
    if ( (__HOS_LINUX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__HOS_LINUX__\t\t => %d\n", __HOS_LINUX__ + 0);
    } else {
        strcat(buffer, "__HOS_LINUX__\n");
    }
#endif

#ifdef __HOS_OS2__
    if ( (__HOS_OS2__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__HOS_OS2__\t\t => %d\n", __HOS_OS2__ + 0);
    } else {
        strcat(buffer, "__HOS_OS2__\n");
    }
#endif


#ifdef __HOS_WIN__
    if ( (__HOS_WIN__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__HOS_WIN__\t\t => %d\n", __HOS_WIN__ + 0);
    } else {
        strcat(buffer, "__HOS_WIN__\n");
    }
#endif


/* used by Haiku */
#ifdef HOST_ARCH
    sprintf(buffer + strlen(buffer), "HOST_ARCH\t\t => %s\n", HOST_ARCH );
#endif
#ifdef HOST_CC
    sprintf(buffer + strlen(buffer), "HOST_CC\t\t => %s\n", HOST_CC );
#endif
#ifdef HOST_OS
    sprintf(buffer + strlen(buffer), "HOST_OS\t\t => %s\n", HOST_OS);
#endif


#ifdef hpux
    if ( (hpux + 1) > 1) {
        sprintf(buffer + strlen(buffer), "hpux\t => %d\n", hpux + 0);
    } else {
        strcat(buffer, "hpux\n");
    }
#endif

#ifdef __hpux
    if ( (__hpux + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__hpux\t => %d\n", __hpux + 0);
    } else {
        strcat(buffer, "__hpux\n");
    }
#endif

#ifdef _HPUX_SOURCE
    if ( (_HPUX_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_HPUX_SOURCE\t => %d\n", _HPUX_SOURCE + 0);
    } else {
        strcat(buffer, "_HPUX_SOURCE\n");
    }
#endif

/* GNU: HURD */
#ifdef __GNU__
    if ( (__GNU__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNU__\t => %d\n", __GNU__ + 0);
    } else {
        strcat(buffer, "__GNU__\n");
    }
#endif


#ifdef i386BSD
    if ( (i386BSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "i386BSD \t\t => %d\n", i386BSD + 0);
    } else {
        strcat(buffer, "i386BSD\n");
    }
#endif

#ifdef _i386BSD
    if ( (_i386BSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i386BSD \t\t => %d\n", _i386BSD + 0);
    } else {
        strcat(buffer, "_i386BSD\n");
    }
#endif

#ifdef _i386BSD_
    if ( (_i386BSD_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_i386BSD_ \t\t => %d\n", _i386BSD_ + 0);
    } else {
        strcat(buffer, "_i386BSD_\n");
    }
#endif

#ifdef __i386BSD
    if ( (__i386BSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i386BSD \t\t => %d\n", __i386BSD + 0);
    } else {
        strcat(buffer, "__i386BSD\n");
    }
#endif

#ifdef __i386BSD__
    if ( (__i386BSD__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i386BSD__ \t\t => %d\n", __i386BSD__ + 0);
    } else {
        strcat(buffer, "__i386BSD__\n");
    }
#endif

/* BeOS compilers set __INTEL__ or __POWERPC__ */
#ifdef __INTEL__
    if ( (__INTEL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__INTEL__\t => %d\n", __INTEL__ + 0);
    } else {
        strcat(buffer, "__INTEL__\n");
    }
#endif


/* ## linux ## */
#ifdef linux
    if ( (linux + 1) > 1) {
        sprintf(buffer + strlen(buffer), "linux    \t\t => %d\n", linux + 0);
    } else {
        strcat(buffer, "linux\n");
    }
#endif
#ifdef _linux
    if ( (_linux + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_linux\t\t => %d\n", _linux + 0);
    } else {
        strcat(buffer, "_linux\n");
   }
#endif
#ifdef _linux_
    if ( (_linux_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_linux_\t\t => %d\n", _linux_ + 0);
    } else {
        strcat(buffer, "_linux_\n");
    }
#endif
#ifdef __linux
    if ( (__linux + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__linux  \t\t => %d\n", __linux + 0);
    } else {
        strcat(buffer, "__linux\n");
    }
#endif
#ifdef __linux__
    if ( (__linux__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__linux__\t\t => %d\n", __linux__ + 0);
    } else {
        strcat(buffer, "__linux__\n");
    }
#endif


#ifdef LINUX
    if ( (LINUX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "LINUX\t\t\t => %d\n", LINUX + 0);
    } else {
        strcat(buffer, "LINUX\n");
    }
#endif
#ifdef _LINUX
    if ( (_LINUX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LINUX\t\t\t => %d\n", _LINUX + 0);
    } else {
        strcat(buffer, "_LINUX\n");
    }
#endif
#ifdef _LINUX_
    if ( (_LINUX_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LINUX_\t\t => %d\n", _LINUX_ + 0);
    } else {
        strcat(buffer, "_LINUX_\n");
    }
#endif
#ifdef __LINUX
    if ( (__LINUX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LINUX \t\t => %d\n", __LINUX + 0);
    } else {
        strcat(buffer, "__LINUX\n");
    }
#endif

/* used by OpenWatcom */
#ifdef __LINUX__
    if ( (__LINUX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LINUX__\t\t => %d\n", __LINUX__ + 0);
    } else {
        strcat(buffer, "__LINUX__\n");
    }
#endif

/* used by OpenWatcom */
#ifdef __LINUX_X64__
    if ( (__LINUX_X64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LINUX_X64__\t\t => %d\n", __LINUX_X64__ + 0);
    } else {
        strcat(buffer, "__LINUX_X64__\n");
    }
#endif


#ifdef __gnu_linux__
    if ( (__gnu_linux__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__gnu_linux__\t\t => %d\n", __gnu_linux__ + 0);
    } else {
        strcat(buffer, "__gnu_linux__\n");
    }
#endif



/* Apple Macintosh / MACOS */
#ifdef macintosh
    if ( (macintosh   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "macintosh  \t\t => %d\n", macintosh   + 0);
    } else {
        strcat(buffer, "macintosh\n");
    }
#endif
#ifdef Macintosh
    if ( (Macintosh   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "Macintosh  \t\t => %d\n", Macintosh   + 0);
    } else {
        strcat(buffer, "Macintosh\n");
    }
#endif

#ifdef MACOS
    if ( (MACOS   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "MACOS  \t\t => %d\n", MACOS   + 0);
    } else {
        strcat(buffer, "MACOS\n");
    }
#endif
#ifdef _MACOS
    if ( (_MACOS   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MACOS  \t\t => %d\n", _MACOS   + 0);
    } else {
        strcat(buffer, "_MACOS\n");
    }
#endif
#ifdef _MACOS_
    if ( (_MACOS_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MACOS_  \t\t => %d\n", _MACOS_   + 0);
    } else {
        strcat(buffer, "_MACOS_\n");
    }
#endif
#ifdef __MACOS
    if ( (__MACOS   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MACOS  \t\t => %d\n", __MACOS   + 0);
    } else {
        strcat(buffer, "__MACOS\n");
    }
#endif
#ifdef __MACOS__
    if ( (__MACOS__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MACOS__  \t\t => %d\n", __MACOS__   + 0);
    } else {
        strcat(buffer, "__MACOS__\n");
    }
#endif
#ifdef __MACOSX__
    if ( (__MACOSX__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MACOSX__  \t\t => %d\n", __MACOSX__   + 0);
    } else {
        strcat(buffer, "__MACOSX__\n");
    }
#endif


/* Amiga OS compatible (PPC) */
#ifdef __MORPHOS__
    if ( (__MORPHOS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MORPHOS__\t => %d\n", __MORPHOS__ + 0);
    } else {
        strcat(buffer, "__MORPHOS__\n");
    }
#endif

/* what is mpeix? */
#ifdef mpeix
    if ( (mpeix   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "mpeix  \t\t => %d\n", mpeix   + 0);
    } else {
        strcat(buffer, "mpeix\n");
    }
#endif
#ifdef __mpexl
    if ( (__mpexl   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mpexl  \t\t => %d\n", __mpexl   + 0);
    } else {
        strcat(buffer, "__mpexl\n");
    }
#endif



/* More MSDOS / __MSDOS__ / _MSDOS / __DOS__ */

#ifdef MSDOS
    if ( (MSDOS    + 1) > 1) {
        sprintf(buffer + strlen(buffer), "MSDOS   \t\t => %d\n", MSDOS    + 0);
    } else {
        strcat(buffer, "MSDOS\n");
    }
#endif

#ifdef _MSDOS
    if ( (_MSDOS    + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSDOS   \t\t => %d\n", _MSDOS    + 0);
    } else {
        strcat(buffer, "_MSDOS\n");
    }
#endif

#ifdef _MSDOS_
    if ( (_MSDOS_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSDOS_\t\t => %d\n", _MSDOS_ + 0);
    } else {
        strcat(buffer, "_MSDOS_\n");
    }
#endif


#ifdef __MSDOS
    if ( (__MSDOS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MSDOS\t\t => %d\n", __MSDOS + 0);
    } else {
        strcat(buffer, "__MSDOS\n");
    }
#endif

#ifdef __MSDOS__
    if ( (__MSDOS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MSDOS__ \t => %d\n", __MSDOS__ + 0);
    } else {
        strcat(buffer, "__MSDOS__\n");
    }
#endif


#ifdef _M_UNIX
    if ( (_M_UNIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_UNIX \t\t => %d\n", _M_UNIX + 0);
    } else {
        strcat(buffer, "_M_UNIX\n");
    }
#endif



/* __NetBSD__ */
#ifdef NetBSD
    if ( (NetBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "NetBSD \t\t => %d\n", NetBSD + 0);
    } else {
        strcat(buffer, "NetBSD\n");
    }
#endif

#ifdef _NetBSD
    if ( (_NetBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NetBSD \t\t => %d\n", _NetBSD + 0);
    } else {
        strcat(buffer, "_NetBSD\n");
    }
#endif

#ifdef _NetBSD_
    if ( (_NetBSD_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NetBSD_ \t\t => %d\n", _NetBSD_ + 0);
    } else {
        strcat(buffer, "_NetBSD_\n");
    }
#endif

#ifdef __NetBSD
    if ( (__NetBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NetBSD \t\t => %d\n", __NetBSD + 0);
    } else {
        strcat(buffer, "__NetBSD\n");
    }
#endif

#ifdef __NetBSD__
    if ( (__NetBSD__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NetBSD__ \t\t => %d\n", __NetBSD__ + 0);
    } else {
        strcat(buffer, "__NetBSD__\n");
    }
#endif


/* Target is WIndows NT or WIn32s. obsolete. replaced by _WIN32 */
#ifdef __NT__
    if ( (__NT__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NT__\t\t\t => %d\n", __NT__   + 0);
    } else {
        strcat(buffer, "__NT__\n");
    }
#endif


#ifdef OpenBSD
    if ( (OpenBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "OpenBSD \t\t => %d\n", OpenBSD + 0);
    } else {
        strcat(buffer, "OpenBSD\n");
    }
#endif

#ifdef _OpenBSD
    if ( (_OpenBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OpenBSD \t\t => %d\n", _OpenBSD + 0);
    } else {
        strcat(buffer, "_OpenBSD\n");
    }
#endif

#ifdef _OpenBSD_
    if ( (_OpenBSD_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OpenBSD_ \t\t => %d\n", _OpenBSD_ + 0);
    } else {
        strcat(buffer, "_OpenBSD_\n");
    }
#endif

#ifdef __OpenBSD
    if ( (__OpenBSD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OpenBSD \t\t => %d\n", __OpenBSD + 0);
    } else {
        strcat(buffer, "__OpenBSD\n");
    }
#endif

#ifdef __OpenBSD__
    if ( (__OpenBSD__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OpenBSD__ \t\t => %d\n", __OpenBSD__ + 0);
    } else {
        strcat(buffer, "__OpenBSD__\n");
    }
#endif


/* ## OS2 / _OS2 / __OS2__ / __TOS_OS2__ ## */
#ifdef OS2
    if ( (OS2  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "OS2 \t\t\t => %d\n", OS2  + 0);
    } else {
        strcat(buffer, "OS2\n");
    }
#endif
#ifdef _OS2
    if ( (_OS2  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OS2 \t\t => %d\n", _OS2  + 0);
    } else {
        strcat(buffer, "_OS2\n");
    }
#endif
#ifdef _OS2_
    if ( (_OS2_  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OS2_ \t\t => %d\n", _OS2_  + 0);
    } else {
        strcat(buffer, "_OS2_\n");
    }
#endif
#ifdef __OS2
    if ( (__OS2  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OS2 \t\t => %d\n", __OS2  + 0);
    } else {
        strcat(buffer, "__OS2\n");
    }
#endif

#ifdef __OS2__
    if ( (__OS2__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OS2__ \t\t => %d\n", __OS2__  + 0);
    } else {
        strcat(buffer, "__OS2__\n");
    }
#endif
#ifdef __OS2V2__
    if ( (__OS2V2__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OS2V2__\t\t => %d\n", __OS2V2__ + 0);

    } else {
        strcat(buffer, "__OS2V2__\n");
    }
#endif


#ifdef __osf
    if ( (__osf  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__osf \t\t => %d\n", __osf  + 0);
    } else {
        strcat(buffer, "__osf\n");
    }
#endif
#ifdef __osf__
    if ( (__osf__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__osf__ \t\t => %d\n", __osf__  + 0);
    } else {
        strcat(buffer, "__osf__\n");
    }
#endif


/* used by OpenWatcom */
#ifdef __OSX__
    if ( (__OSX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OSX__\t\t => %d\n", __OSX__ + 0);
    } else {
        strcat(buffer, "__OSX__\n");
    }
#endif


/*  __QNX__  / __QNXNTO__ */
#ifdef __QNX__
    if ( (__QNX__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__QNX__ \t\t => %d\n", __QNX__  + 0);
    } else {
        strcat(buffer, "__QNX__\n");
    }
#endif
#ifdef __QNXNTO__
    if ( (__QNXNTO__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__QNXNTO__ \t\t => %d\n", __QNXNTO__  + 0);
    } else {
        strcat(buffer, "__QNXNTO__\n");
    }
#endif


/* SUNOS / SOLARIS */
#ifdef sun
    if ( (sun  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "sun \t\t => %d\n", sun  + 0);
    } else {
        strcat(buffer, "sun\n");
    }
#endif

/* checked in stb/whereami */
#ifdef __sun__
    if ( (__sun__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__sun__ \t\t => %d\n", __sun__  + 0);
    } else {
        strcat(buffer, "__sun__\n");
    }
#endif


/* SGI: IRIX  */
#ifdef sgi
    if ( (sgi + 1) > 1) {
        sprintf(buffer + strlen(buffer), "sgi\t => %d\n", sgi + 0);
    } else {
        strcat(buffer, "sgi\n");
    }
#endif

#ifdef __sgi
    if ( (__sgi + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__sgi\t => %d\n", __sgi + 0);
    } else {
        strcat(buffer, "__sgi\n");
    }
#endif


/* SUN / SUNOS */
#ifdef __SVR4
    if ( (__SVR4  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SVR4 \t\t => %d\n", __SVR4  + 0);
    } else {
        strcat(buffer, "__SVR4\n");
    }
#endif
#ifdef __svr4__
    if ( (__svr4__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__svr4__ \t\t => %d\n", __svr4__  + 0);
    } else {
        strcat(buffer, "__svr4__\n");
    }
#endif

/* __SYMBIAMN32__  */
#ifdef __SYMBIAN32__
    if ( (__SYMBIAN32__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SYMBIAN32__ \t\t => %d\n", __SYMBIAN32__  + 0);
    } else {
        strcat(buffer, "__SYMBIAN32__\n");
    }
#endif


#ifdef __SYSTYPE_BSD
    if ( (__SYSTYPE_BSD  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SYSTYPE_BSD \t\t => %d\n", __SYSTYPE_BSD  + 0);
    } else {
        strcat(buffer, "__SYSTYPE_BSD\n");
    }
#endif
#ifdef _SYSTYPE_SVR4
    if ( (_SYSTYPE_SVR4  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYSTYPE_SVR4 \t\t => %d\n", _SYSTYPE_SVR4  + 0);
    } else {
        strcat(buffer, "_SYSTYPE_SVR4\n");
    }
#endif


/* used by Watcom / OpenWatcom */
#ifdef __TARGET__
    sprintf(buffer + strlen(buffer), "__TARGET_\t\t => %s\n", __TARGET__ + 0);
#endif

#ifdef __TARGET_386__
    if ( (__TARGET_386__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TARGET_386__\t => %d\n", __TARGET_386__ + 0);
    } else {
        strcat(buffer, "__TARGET_386__\n");
    }
#endif
#ifdef __TARGET_AXP__
    if ( (__TARGET_AXP__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TARGET_AXP__\t => %d\n", __TARGET_AXP__ + 0);
    } else {
        strcat(buffer, "__TARGET_AXP__\n");
    }
#endif
#ifdef __TARGET_PPC__
    if ( (__TARGET_PPC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TARGET_PPC__\t => %d\n", __TARGET_PPC__ + 0);
    } else {
        strcat(buffer, "__TARGET_PPC__\n");
    }
#endif


/* used by Haiku */
#ifdef TARGET_ARCH
    sprintf(buffer + strlen(buffer), "TARGET_ARCH\t => %s\n", TARGET_ARCH );
#endif
#ifdef TARGET_CC
    sprintf(buffer + strlen(buffer), "TARGET_CC\t => %s\n", TARGET_CC );
#endif
#ifdef TARGET_OS
    sprintf(buffer + strlen(buffer), "TARGET_OS\t => %s\n", TARGET_OS);
#endif


/* probably used by ibmcpp */
#ifdef __TOS_AIX__
    if ( (__TOS_AIX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TOS_AIX__\t\t => %d\n", __TOS_AIX__ + 0);
    } else {
        strcat(buffer, "__TOS_AIX__\n");
    }
#endif

#ifdef __TOS_LINUX__
    if ( (__TOS_LINUX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TOS_LINUX__\t\t => %d\n", __TOS_LINUX__ + 0);
    } else {
        strcat(buffer, "__TOS_LINUX__\n");
    }
#endif

#ifdef __TOS_OS2__
    if ( (__TOS_OS2__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TOS_OS2__\t\t => %d\n", __TOS_OS2__ + 0);
    } else {
        strcat(buffer, "__TOS_OS2__\n");
    }
#endif

#ifdef __TOS_WIN__
    if ( (__TOS_WIN__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TOS_WIN__\t\t => %d\n", __TOS_WIN__ + 0);
    } else {
        strcat(buffer, "__TOS_WIN__\n");
    }
#endif



/* ARM in thumb mode */
#ifdef __THUMB__
    if ( (__THUMB__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__THUMB__ \t\t => %d\n", __THUMB__ + 0);
    } else {
        strcat(buffer, "__THUMB__\n");
    }
#endif

#ifdef __thumb__
    if ( (__thumb__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__thumb__ \t\t => %d\n", __thumb__ + 0);
    } else {
        strcat(buffer, "__thumb__\n");
    }
#endif
#ifdef __thumb2__
    if ( (__thumb2__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__thumb2__ \t\t => %d\n", __thumb2__ + 0);
    } else {
        strcat(buffer, "__thumb2__\n");
    }
#endif


/* ARM in thumb - little endian mode */
#ifdef __THUMBEL__
    if ( (__THUMBEL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__THUMBEL__ \t\t => %d\n", __THUMBEL__ + 0);
    } else {
        strcat(buffer, "__THUMBEL__\n");
    }
#endif


/* ARM in thumb - big endian mode */
#ifdef __THUMBEB__
    if ( (__THUMBEB__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__THUMBEB__ \t\t => %d\n", __THUMBEB__ + 0);
    } else {
        strcat(buffer, "__THUMBEB__\n");
    }
#endif


/* ultrix / __ultrix / __ultrix__ */
#ifdef ultrix
    if ( (ultrix  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ultrix \t\t => %d\n", ultrix  + 0);
    } else {
        strcat(buffer, "ultrix\n");
    }
#endif
#ifdef __ultrix
    if ( (__ultrix  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ultrix \t\t => %d\n", __ultrix  + 0);
    } else {
        strcat(buffer, "__ultrix\n");
    }
#endif
#ifdef __ultrix__
    if ( (__ultrix__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ultrix__ \t\t => %d\n", __ultrix__  + 0);
    } else {
        strcat(buffer, "__ultrix__\n");
    }
#endif

/* also CRAY */
#ifdef _UNICOS
    if ( (_UNICOS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_UNICOS\t\t => %d\n", _UNICOS + 0);
    } else {
        strcat(buffer, "_UNICOS\n");
    }
#endif


/* ## unix ## */
#ifdef unix
    if ( (unix + 1) > 1) {
        sprintf(buffer + strlen(buffer), "unix\t\t\t => %d\n", unix + 0);
    } else {
        strcat(buffer, "unix\n");
    }
#endif

#ifdef _unix
    if ( (_unix + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_unix\t\t\t => %d\n", _unix + 0);
    } else {
        strcat(buffer, "_unix\n");
    }
#endif
#ifdef _unix_
    if ( (_unix_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_unix_\t\t => %d\n", _unix_ + 0);
    } else {
        strcat(buffer, "_unix_\n");
    }
#endif
#ifdef __unix
    if ( (__unix + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__unix\t\t\t => %d\n", __unix + 0);
    } else {
        strcat(buffer, "__unix\n");
    }
#endif
#ifdef __unix__
    if ( (__unix__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__unix__\t\t => %d\n", __unix__ + 0);
    } else {
        strcat(buffer, "__unix__\n");
    }
#endif

#ifdef UNIX
    if ( (UNIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "UNIX\t\t => %d\n", UNIX + 0);
    } else {
        strcat(buffer, "UNIX\n");
    }
#endif
#ifdef _UNIX
    if ( (_UNIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_UNIX\t\t => %d\n", _UNIX + 0);
    } else {
        strcat(buffer, "_UNIX\n");
    }
#endif
#ifdef _UNIX_
    if ( (_UNIX_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_UNIX_\t\t => %d\n", _UNIX_ + 0);
    } else {
        strcat(buffer, "_UNIX_\n");
    }
#endif
#ifdef __UNIX
    if ( (__UNIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__UNIX\t\t => %d\n", __UNIX + 0);
    } else {
        strcat(buffer, "__UNIX\n");
    }
#endif
#ifdef __UNIX__
    if ( (__UNIX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__UNIX__\t\t => %d\n", __UNIX__ + 0);
    } else {
        strcat(buffer, "__UNIX__\n");
    }
#endif


/* VMS */
#ifdef VMS
    if ( (VMS  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "VMS \t\t => %d\n", VMS  + 0);
    } else {
        strcat(buffer, "VMS\n");
    }
#endif
#ifdef __VMS
    if ( (__VMS  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__VMS \t\t => %d\n", __VMS  + 0);
    } else {
        strcat(buffer, "__VMS\n");
    }
#endif


/* Windows target */
/* _WIN32 target (NT win9x or win32s */
#ifdef WIN32
    if ( (WIN32   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WIN32\t\t\t => %d\n", WIN32   + 0);
    } else {
        strcat(buffer, "WIN32\n");
    }
#endif

/*  _WIN32 target (NT win9x or win32s) */
/* used by clang */
#ifdef _WIN32
    if ( (_WIN32   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN32\t\t\t => %d\n", _WIN32   + 0);
    } else {
        strcat(buffer, "_WIN32\n");
    }
#endif

#ifdef _WIN32_
    if ( (_WIN32_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN32_ \t\t => %d\n", _WIN32_   + 0);
    } else {
        strcat(buffer, "_WIN32_\n");
    }
#endif

#ifdef __WIN32
    if ( (__WIN32  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WIN32\t\t\t => %d\n", __WIN32  + 0);
    } else {
        strcat(buffer, "__WIN32\n");
    }
#endif

#ifdef __WIN32__
    if ( (__WIN32__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WIN32__ \t\t => %d\n", __WIN32__  + 0);
    } else {
        strcat(buffer, "__WIN32__\n");
    }
#endif


/*  Internet Explorer */
#ifdef _WIN32_IE
    if ( (_WIN32_IE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN32_IE\t\t => 0x%04x\n", _WIN32_IE   + 0);
    } else {
        strcat(buffer, "_WIN32_IE\n");
    }
#endif


/* win CE */
#ifdef WIN32_WCE
    if ( (WIN32_WCE  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WIN32_WCE\t\t\t => %d\n", WIN32_WCE  + 0);
    } else {
        strcat(buffer, "WIN32_WCE\n");
    }
#endif

#ifdef _WIN32_WCE
    if ( (_WIN32_WCE  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN32_WCE\t\t\t => %d\n", _WIN32_WCE  + 0);
    } else {
        strcat(buffer, "_WIN32_WCE\n");
    }
#endif

#ifdef _WIN32_WCE_
    if ( (_WIN32_WCE_  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN32_WCE_\t\t\t => %d\n", _WIN32_WCE_  + 0);
    } else {
        strcat(buffer, "_WIN32_WCE_\n");
    }
#endif

#ifdef __WIN32_WCE
    if ( (__WIN32_WCE  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WIN32_WCE\t\t\t => %d\n", __WIN32_WCE  + 0);
    } else {
        strcat(buffer, "__WIN32_WCE\n");
    }
#endif

#ifdef __WIN32_WCE__
    if ( (__WIN32_WCE__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WIN32_WCE__\t\t\t => %d\n", __WIN32_WCE__  + 0);
    } else {
        strcat(buffer, "__WIN32_WCE__\n");
    }
#endif


#ifdef _WIN32_WINNT
    if ( (_WIN32_WINNT  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN32_WINNT\t\t => 0x%x (%d.%02d)\n",
        _WIN32_WINNT + 0, (_WIN32_WINNT + 0) / 256, ((_WIN32_WINNT + 0) & 255));
    } else {
        strcat(buffer, "_WIN32_WINNT\n");
    }
#endif


/* ## win32s ## */
#ifdef WIN386
    if ( (WIN386  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WIN386\t\t\t => %d\n", WIN386  + 0);
    } else {
        strcat(buffer, "WIN386\n");
    }
#endif

#ifdef _WIN386
    if ( (_WIN386  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN386\t\t\t => %d\n", _WIN386  + 0);
    } else {
        strcat(buffer, "_WIN386\n");
    }
#endif

#ifdef _WIN386_
    if ( (_WIN386_  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN386_\t\t\t => %d\n", _WIN386_  + 0);
    } else {
        strcat(buffer, "_WIN386_\n");
    }
#endif
#ifdef __WIN386
    if ( (__WIN386  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WIN386\t\t\t => %d\n", __WIN386  + 0);
    } else {
        strcat(buffer, "__WIN386\n");
    }
#endif
#ifdef __WIN386__
    if ( (__WIN386__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WIN386__\t\t\t => %d\n", __WIN386__  + 0);
    } else {
        strcat(buffer, "__WIN386__\n");
    }
#endif

/* WIN64 */
#ifdef WIN64
    if ( (WIN64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WIN64\t\t\t => %d\n", WIN64 + 0);
    } else {
        strcat(buffer, "WIN64\n");
    }
#endif

/* used by BCC */
#ifdef _WIN64
    if ( (_WIN64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN64\t\t\t => %d\n", _WIN64 + 0);
    } else {
        strcat(buffer, "_WIN64\n");
    }
#endif
#ifdef _WIN64_
    if ( (_WIN64_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN64_ \t\t => %d\n", _WIN64_ + 0);
    } else {
        strcat(buffer, "_WIN64_\n");
    }
#endif
#ifdef __WIN64
    if ( (__WIN64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WIN64 \t\t => %d\n", __WIN64 + 0);
    } else {
        strcat(buffer, "__WIN64\n");
    }
#endif
#ifdef __WIN64__
    if ( (__WIN64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WIN64__ \t\t => %d\n", __WIN64__ + 0);
    } else {
        strcat(buffer, "__WIN64__\n");
    }
#endif


/* creating a windows dll */
#ifdef _WINDLL
    if ( (_WINDLL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINDLL \t\t => %d\n", _WINDLL + 0);
    } else {
        strcat(buffer, "_WINDLL\n");
    }
#endif


/* creating a WINDOWS executable */
#ifdef WINDOWS
    if ( (WINDOWS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WINDOWS\t\t => %d\n", WINDOWS + 0);
    } else {
        strcat(buffer, "WINDOWS\n");
    }
#endif
#ifdef _WINDOWS
    if ( (_WINDOWS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINDOWS\t\t => %d\n", _WINDOWS + 0);
    } else {
        strcat(buffer, "_WINDOWS\n");
    }
#endif

#ifdef _WINDOWS_
    if ( (_WINDOWS_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINDOWS_\t\t => %d\n", _WINDOWS_ + 0);
    } else {
        strcat(buffer, "_WINDOWS_\n");
    }
#endif

#ifdef __WINDOWS
    if ( (__WINDOWS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WINDOWS\t\t => %d\n", __WINDOWS + 0);
    } else {
        strcat(buffer, "__WINDOWS\n");
    }
#endif


#ifdef __WINDOWS__
    if ( (__WINDOWS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WINDOWS__\t\t => %d\n", __WINDOWS__ + 0);
    } else {
        strcat(buffer, "__WINDOWS__\n");
    }
#endif

/* ## win32s ## */
#ifdef __WINDOWS_386__
    if ( (__WINDOWS_386__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WINDOWS_386__\t\t => %d\n", __WINDOWS_386__ + 0);
    } else {
        strcat(buffer, "__WINDOWS_386__\n");
    }
#endif


/* WinNT */
#ifdef WINNT
    if ( (WINNT   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WINNT\t\t\t => %d\n", WINNT   + 0);
    } else {
        strcat(buffer, "WINNT\n");
    }
#endif

#ifdef _WINNT
    if ( (_WINNT   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINNT\t\t\t => %d\n", _WINNT   + 0);
    } else {
        strcat(buffer, "_WINNT\n");
    }
#endif

#ifdef _WINNT_
    if ( (_WINNT_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINNT_\t\t => %d\n", _WINNT_   + 0);
    } else {
        strcat(buffer, "_WINNT_\n");
    }
#endif

#ifdef __WINNT
    if ( (__WINNT   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WINNT\t\t\t => %d\n", __WINNT   + 0);
    } else {
        strcat(buffer, "__WINNT\n");
    }
#endif

#ifdef __WINNT__
    if ( (__WINNT__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WINNT__\t\t => %d\n", __WINNT__   + 0);
    } else {
        strcat(buffer, "__WINNT__\n");
    }
#endif


/* WIN32_WINNT */
#ifdef _WINNT_WIN32
    if ( (_WINNT_WIN32  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINNT_WIN32\t\t => 0x%x (%d.%02d)\n",
        _WINNT_WIN32 + 0, (_WINNT_WIN32 + 0) / 256, ((_WINNT_WIN32 + 0) & 255));
    } else {
        strcat(buffer, "_WINNT_WIN32\n");
    }
#endif


#ifdef WINVER
    sprintf(buffer + strlen(buffer), "WINVER  \t\t => 0x%x (%d.%d)\n", WINVER, 
        WINVER / 256, (WINVER & 255));
#endif


/* ############# */
/* runtime types / versions */

#ifdef _ATL_VER
    if ( (_ATL_VER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ATL_VER \t\t => %d\n", _ATL_VER + 0);
    } else {
        strcat(buffer, "_ATL_VER\n");
    }
#endif

#ifdef __BIONIC__
    if ( (__BIONIC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BIONIC__ \t\t => %d\n", __BIONIC__ + 0);
    } else {
        strcat(buffer, "__BIONIC__\n");
    }
#endif


#ifdef __CLR_VER
    if ( (__CLR_VER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CLR_VER \t\t => 0x%x\n", __CLR_VER + 0);
    } else {
        strcat(buffer, "__CLR_VER\n");
    }
#endif

#ifdef __cplusplus
    if ( (__cplusplus + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__cplusplus\t\t => %ld (%s)\n", __cplusplus + 0,
        (__cplusplus + 0 >= 202100) ? "C++23 / C++2b" :
        (__cplusplus + 0 >= 202002) ? "C++20" :
        (__cplusplus + 0 >= 201703) ? "C++17" :
        (__cplusplus + 0 >= 201402) ? "C++14 / C++1y" :
        (__cplusplus + 0 >= 201103) ? "C++11 / C++0x" :
        (__cplusplus + 0 >= 200300) ? "C++03" :
        (__cplusplus + 0 >= 199711) ? "C++98" : "C++");

    } else {
        strcat(buffer, "__cplusplus\n");
    }
#endif


#ifdef __cplusplus_cli
    if ( (__cplusplus_cli + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__cplusplus_cli \t\t => %d\n", __cplusplus_cli + 0);
    } else {
        strcat(buffer, "__cplusplus_cli\n");
    }
#endif

#ifdef __cpp_exceptions
    if ( (__cpp_exceptions + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__cpp_exceptions \t => %ld\n", __cpp_exceptions + 0);
    } else {
        strcat(buffer, "__cpp_exceptions\n");
    }
#endif

/* drinkumware c++ lib */
#ifdef _CPPLIB_VER
    if ( (_CPPLIB_VER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CPPLIB_VER \t\t => %d\n", _CPPLIB_VER + 0);
    } else {
        strcat(buffer, "_CPPLIB_VER\n");
    }
#endif

#ifdef _CPPRTTI
    if ( (_CPPRTTI + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CPPRTTI \t\t => %d\n", _CPPRTTI + 0);
    } else {
        strcat(buffer, "_CPPRTTI\n");
    }
#endif


#ifdef __cpp_rtti
    if ( (__cpp_rtti + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__cpp_rtti \t\t => %ld\n", __cpp_rtti + 0);
    } else {
        strcat(buffer, "__cpp_rtti\n");
    }
#endif


#ifdef _CPPUNWIND
    if ( (_CPPUNWIND + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CPPUNWIND \t\t => %d\n", _CPPUNWIND + 0);
    } else {
        strcat(buffer, "_CPPUNWIND\n");
    }
#endif

/* vms libc */
#ifdef __CRTL_VER
    if ( (__CRTL_VER  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CRTL_VER \t\t => %d\n", __CRTL_VER  + 0);
    } else {
        strcat(buffer, "__CRTL_VER\n");
    }
#endif


/* diet libc */
#ifdef __dietlibc__
    if ( (__dietlibc__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__dietlibc__\t\t => %d\n", __dietlibc__ + 0);
    } else {
        strcat(buffer, "__dietlibc__\n");
    }
#endif


/* Intel CC */
#ifdef __ICC__
    if ( (__ICC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ICC__\t\t => %d\n", __ICC__ + 0);
    } else {
        strcat(buffer, "__ICC__\n");
    }
#endif
#ifdef __ICC_VERSION
    sprintf(buffer + strlen(buffer), "__ICC_VERSION\t\t => 0x%x\n", __ICC_VERSION);

#endif


#ifdef __GXX_RTTI
    if ( (__GXX_RTTI + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GXX_RTTI \t\t => %d\n", __GXX_RTTI + 0);
    } else {
        strcat(buffer, "__GXX_RTTI\n");
    }
#endif

#ifdef __GXX_WEAK__
    if ( (__GXX_WEAK__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GXX_WEAK__\t\t => %d\n", __GXX_WEAK__ + 0);
    } else {
        strcat(buffer, "__GXX_WEAK__\n");
    }
#endif

#ifdef __GXX_ABI_VERSION__
    if ( (__GXX_ABI_VERSION__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GXX_ABI_VERSION__\t\t => %d\n", __GXX_ABI_VERSION__ + 0);
    } else {
        strcat(buffer, "__GXX_ABI_VERSION__\n");
    }
#endif


#ifdef __DEPRECATED
    if ( (__DEPRECATED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DEPRECATED\t\t => %d\n", __DEPRECATED + 0);
    } else {
        strcat(buffer, "__DEPRECATED\n");
    }
#endif



/* exceptions */
#ifdef __EXCEPTIONS
    if ( (__EXCEPTIONS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__EXCEPTIONS\t\t => %d\n", __EXCEPTIONS + 0);
    } else {
        strcat(buffer, "__EXCEPTIONS\n");
    }
#endif
#ifdef __USING_SJLJ_EXCEPTIONS__
    if ( (__USING_SJLJ_EXCEPTIONS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__USING_SJLJ_EXCEPTIONS__=> %d\n", __USING_SJLJ_EXCEPTIONS__ + 0);
    } else {
        strcat(buffer, "__USING_SJLJ_EXCEPTIONS__\n");
    }
#endif


/* stack protector */
#ifdef __SSP__
    if ( (__SSP__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSP__\t\t\t => %d\n", __SSP__ + 0);
    } else {
        strcat(buffer, "__SSP__\n");
    }
#endif
#ifdef __SSP_ALL__
    if ( (__SSP_ALL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSP_ALL__\t\t => %d\n", __SSP_ALL__ + 0);
    } else {
        strcat(buffer, "__SSP_ALL__\n");
    }
#endif


#ifdef __SSP_STRONG__
    if ( (__SSP_STRONG__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSP_STRONG__\t\t => %d\n", __SSP_STRONG__ + 0);
    } else {
        strcat(buffer, "__SSP_STRONG__\n");
    }
#endif


#ifdef __SSP_EXPLICIT__
    if ( (__SSP_EXPLICIT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SSP_EXPLICIT__\t => %d\n", __SSP_EXPLICIT__ + 0);
    } else {
        strcat(buffer, "__SSP_EXPLICIT__\n");
    }
#endif


/* software checking */
#ifdef __SANTANIZE_ADDRESS__
    if ( (__SANTANIZE_ADDRESS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SANTANIZE_ADDRESS__\t => %d\n", __SANTANIZE_ADDRESS__ + 0);
    } else {
        strcat(buffer, "__SANTANIZE_ADDRESS__\n");
    }
#endif


#ifdef __SANTANIZE_THREAD__
    if ( (__SANTANIZE_THREAD__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SANTANIZE_THREAD__\t => %d\n", __SANTANIZE_THREAD__ + 0);
    } else {
        strcat(buffer, "__SANTANIZE_THREAD__\n");
    }
#endif


/* float */
#ifdef __GCC_IEC_559
    if ( (__GCC_IEC_559 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GCC_IEC_559\t\t => %d\n", __GCC_IEC_559 + 0);
    } else {
        strcat(buffer, "__GCC_IEC_559\n");
    }
#endif



/* glibc v5 */
#ifdef __GNU_LIBRARY__
    if ( (__GNU_LIBRARY__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNU_LIBRARY__\t\t => %d\n", __GNU_LIBRARY__ + 0);
    } else {
        strcat(buffer, "__GNU_LIBRARY__\n");
    }
#endif
/* glibc v5 */
#ifdef __GNU_LIBRARY_MINOR__
    if ( (__GNU_LIBRARY__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNU_LIBRARY_MINOR__ \t => %d\n", __GNU_LIBRARY_MINOR__ + 0);
    } else {
        strcat(buffer, "__GNU_LIBRARY_MINOR__\n");
    }
#endif

/* glibc v6 */
#ifdef __GLIBC__
    if ( (__GLIBC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GLIBC__ \t\t => %d\n", __GLIBC__ + 0);
    } else {
        strcat(buffer, "__GLIBC__\n");
    }
#endif
/* glibc v6 */
#ifdef __GLIBC_MAJOR__
    if ( (__GLIBC_MAJOR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GLIBC_MAJOR__\t\t => %d\n", __GLIBC_MAJOR__ + 0);
    } else {
        strcat(buffer, "__GLIBC_MAJOR__\n");
    }
#endif

#ifdef __GLIBC_MINOR__
    if ( (__GLIBC_MINOR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GLIBC_MINOR__\t\t => %d\n", __GLIBC_MINOR__ + 0);
    } else {
        strcat(buffer, "__GLIBC_MINOR__\n");
    }
#endif


/* GNU libstd++ */
#ifdef __GLIBCPP__
    if ( (__GLIBCPP__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GLIBCPP__ \t\t => %d\n", __GLIBCPP__ + 0);
    } else {
        strcat(buffer, "__GLIBCPP__\n");
    }
#endif


/* Intel C++ runtime */
#ifdef __INTEL_CXXLIB_ICC
    if ( (__INTEL_CXXLIB_ICC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__INTEL_CXXLIB_ICC \t\t => %d\n", __INTEL_CXXLIB_ICC + 0);
    } else {
        strcat(buffer, "__INTEL_CXXLIB_ICC\n");
    }
#endif


/* checked in newlib */
#ifdef _LIBC
    if ( (_LIBC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LIBC \t\t => %d\n", _LIBC + 0);
    } else {
        strcat(buffer, "_LIBC\n");
    }
#endif

/* intel c++ runtime  */
#ifdef __LIBCPP_VERSION
    if ( (__LIBCPP_VERSION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LIBCPP_VERSION \t\t => %d\n", __LIBCPP_VERSION + 0);
    } else {
        strcat(buffer, "__LIBCPP_VERSION\n");
    }
#endif

/* checked in uClibc */
#ifdef __LIBC__
    if ( (__LIBC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LIBC__ \t\t => %d\n", __LIBC__ + 0);
    } else {
        strcat(buffer, "__LIBC__\n");
    }
#endif


/* intel c++ runtime */
#ifdef __LIBCPP_ABI_VERSION
    if ( (__LIBCPP_ABI_VERSION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LIBCPP_ABI_VERSION \t\t => %d\n", __LIBCPP_ABI_VERSION + 0);
    } else {
        strcat(buffer, "__LIBCPP_ABI_VERSION\n");
    }
#endif
/* intel c++ runtime  */
#ifdef __LIBCPP_VERSION
    if ( (__LIBCPP_VERSION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LIBCPP_VERSION \t\t => %d\n", __LIBCPP_VERSION + 0);
    } else {
        strcat(buffer, "__LIBCPP_VERSION\n");
    }
#endif



/* zOS libc */
#ifdef __LIBREL__
    if ( (__LIBREL__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LIBREL__ \t\t => %d\n", __LIBREL__  + 0);
    } else {
        strcat(buffer, "__LIBREL__\n");
    }
#endif
/* zOS libc */
#ifdef __TARGET_LIB__
    if ( (__TARGET_LIB__  + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TARGET_LIB__ \t => %d\n", __TARGET_LIB__  + 0);
    } else {
        strcat(buffer, "__TARGET_LIB__\n");
    }
#endif


/* there is no define for __MUSL__  */


#ifdef _MANAGED
    if ( (_MANAGED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MANAGED \t\t => %d\n", _MANAGED + 0);
    } else {
        strcat(buffer, "_MANAGED\n");
    }
#endif


#ifdef _MFC_VER
    if ( (_MFC_VER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MFC_VER \t\t => %d\n", _MFC_VER + 0);
    } else {
        strcat(buffer, "_MFC_VER\n");
    }
#endif


/* used by msvc */
#ifdef _MSVC_LANG
    if ( (_MSVC_LANG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSVC_LANG \t\t => %ld (%s)\n", _MSVC_LANG + 0,
        (_MSVC_LANG + 0 >= 202100) ? "C++23 / C++2b" :
        (_MSVC_LANG + 0 >= 202002) ? "C++20" :
        (_MSVC_LANG + 0 >= 201703) ? "C++17" :
        (_MSVC_LANG + 0 >= 201402) ? "C++14 / C++1y" :
        (_MSVC_LANG + 0 >= 201103) ? "C++11 / C++0x" :
        (_MSVC_LANG + 0 >= 200300) ? "C++03" :
        (_MSVC_LANG + 0 >= 199711) ? "C++98" : "C++");

    } else {
        strcat(buffer, "_MSVC_LANG\n");
    }
#endif


#ifdef _MSVC_RUNTIME_CHECKS
    if ( (_MSVC_RUNTIME_CHECKS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSVC_RUNTIME_CHECKS\t => %d\n", _MSVC_RUNTIME_CHECKS + 0);
    } else {
        strcat(buffer, "_MSVC_RUNTIME_CHECKS\n");
    }
#endif


#ifdef MSVCRT
    if ( (MSVCRT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "MSVCRT\t\t => %d\n", MSVCRT + 0);
    } else {
        strcat(buffer, "MSVCRT\n");
    }
#endif

#ifdef _MSVCRT
    if ( (_MSVCRT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSVCRT\t\t => %d\n", _MSVCRT + 0);
    } else {
        strcat(buffer, "_MSVCRT\n");
    }
#endif

#ifdef _MSVCRT_
    if ( (_MSVCRT_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSVCRT_\t\t => %d\n", _MSVCRT_ + 0);
    } else {
        strcat(buffer, "_MSVCRT_\n");
    }
#endif

#ifdef __MSVCRT
    if ( (__MSVCRT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MSVCRT\t\t => %d\n", __MSVCRT + 0);
    } else {
        strcat(buffer, "__MSVCRT\n");
    }
#endif

#ifdef __MSVCRT__
    if ( (__MSVCRT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MSVCRT__\t\t => %d\n", __MSVCRT__ + 0);
    } else {
        strcat(buffer, "__MSVCRT__\n");
    }
#endif


#ifdef _MSVCRT_VERSION
    if ( (_MSVCRT_VERSION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSVCRT_VERSION \t => 0x%x (%d.%d)\n", 
            _MSVCRT_VERSION + 0, (_MSVCRT_VERSION + 0) / 256, (_MSVCRT_VERSION + 0) & 255);
    } else {
        strcat(buffer, "_MSVCRT_VERSION\n");
    }
#endif

#ifdef _MSVCRT_VERSION_
    if ( (_MSVCRT_VERSION_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSVCRT_VERSION_ \t => 0x%x (%d.%d)\n", 
            _MSVCRT_VERSION_ + 0, (_MSVCRT_VERSION_ + 0) / 256, (_MSVCRT_VERSION_ + 0) & 255);
    } else {
        strcat(buffer, "_MSVCRT_VERSION_\n");
    }
#endif

#ifdef __MSVCRT_VERSION
    if ( (__MSVCRT_VERSION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MSVCRT_VERSION \t => 0x%x (%d.%d)\n", 
            __MSVCRT_VERSION + 0, (__MSVCRT_VERSION + 0) / 256, (__MSVCRT_VERSION + 0) & 255);
    } else {
        strcat(buffer, "__MSVCRT_VERSION\n");
    }
#endif

#ifdef __MSVCRT_VERSION__
    if ( (__MSVCRT_VERSION__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MSVCRT_VERSION__ \t => 0x%x (%d.%d)\n", 
            __MSVCRT_VERSION__ + 0, (__MSVCRT_VERSION__ + 0) / 256, (__MSVCRT_VERSION__ + 0) & 255);
    } else {
        strcat(buffer, "__MSVCRT_VERSION__\n");
    }
#endif


/* uclibc */
#ifdef __UCLIBC__
    if ( (__UCLIBC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__UCLIBC__ \t\t => %d\n", __UCLIBC__ + 0);
    } else {
        strcat(buffer, "__UCLIBC__\n");
    }
#endif
#ifdef __UCLIBC_MAJOR__
    if ( (__UCLIBC_MAJOR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__UCLIBC_MAJOR__ \t\t => %d\n", __UCLIBC_MAJOR__ + 0);
    } else {
        strcat(buffer, "__UCLIBC_MAJOR__\n");
    }
#endif

#ifdef __UCLIBC_MINOR__
    if ( (__UCLIBC_MINOR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__UCLIBC_MINOR__ \t\t => %d\n", __UCLIBC_MINOR__ + 0);
    } else {
        strcat(buffer, "__UCLIBC_MINOR__\n");
    }
#endif

#ifdef __UCLIBC_MINOR__
    if ( (__UCLIBC_MINOR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__UCLIBC_MINOR__ \t\t => %d\n", __UCLIBC_MINOR__ + 0);
    } else {
        strcat(buffer, "__UCLIBC_MINOR__\n");
    }
#endif

#ifdef __UCLIBC_SUBLEVEL__
    if ( (__UCLIBC_SUBLEVEL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__UCLIBC_SUBLEVEL__ \t\t => %d\n", __UCLIBC_SUBLEVEL__ + 0);
    } else {
        strcat(buffer, "__UCLIBC_SUBLEVEL__\n");
    }
#endif


/* ucrt: universal c runtime on Windows */
#ifdef _UCRT
    if ( (_UCRT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_UCRT \t\t\t => %d\n", _UCRT + 0);
    } else {
        strcat(buffer, "_UCRT\n");
    }
#endif


/* ############# */
/* debug options */

#ifdef DEBUG
    if ( (DEBUG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "DEBUG \t\t\t => %d\n", DEBUG + 0);
    } else {
        strcat(buffer, "DEBUG\n");
    }
#endif

/* defined by MSVC, when compiling as DEBUG version */
#ifdef _DEBUG
    if ( (_DEBUG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DEBUG\t\t\t => %d\n", _DEBUG + 0);
    } else {
        strcat(buffer, "_DEBUG\n");
    }
#endif
#ifdef _DEBUG_
    if ( (_DEBUG_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DEBUG_ \t\t => %d\n", _DEBUG_ + 0);
    } else {
        strcat(buffer, "_DEBUG_\n");
    }
#endif
#ifdef __DEBUG
    if ( (__DEBUG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DEBUG \t\t => %d\n", __DEBUG + 0);
    } else {
        strcat(buffer, "__DEBUG\n");
    }
#endif
#ifdef __DEBUG__
    if ( (__DEBUG__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DEBUG__ \t\t => %d\n", __DEBUG__ + 0);
    } else {
        strcat(buffer, "__DEBUG__\n");
    }
#endif


#ifdef __DEBUG_ALLOC__
    if ( (__DEBUG_ALLOC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DEBUG_ALLOC__ \t\t => %d\n", __DEBUG_ALLOC__ + 0);
    } else {
        strcat(buffer, "__DEBUG_ALLOC__\n");
    }
#endif


#ifdef _DEBUG_TRACE
    if ( (_DEBUG_TRACE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DEBUG_TRACE \t\t => %d\n", _DEBUG_TRACE + 0);
    } else {
        strcat(buffer, "_DEBUG_TRACE\n");
    }
#endif


#ifdef NDEBUG
    if ( (NDEBUG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "NDEBUG\t\t\t => %d\n", NDEBUG + 0);
    } else {
        strcat(buffer, "NDEBUG\n");
    }
#endif
#ifdef _NDEBUG
    if ( (_NDEBUG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NDEBUG\t\t\t => %d\n", _NDEBUG + 0);
    } else {
        strcat(buffer, "_NDEBUG\n");
    }
#endif
#ifdef _NDEBUG_
    if ( (_NDEBUG_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NDEBUG_ \t\t => %d\n", _NDEBUG_ + 0);
    } else {
        strcat(buffer, "_NDEBUG_\n");
    }
#endif
#ifdef __NDEBUG
    if ( (__NDEBUG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NDEBUG \t\t => %d\n", __NDEBUG + 0);
    } else {
        strcat(buffer, "__NDEBUG\n");
    }
#endif
#ifdef __NDEBUG__
    if ( (__NDEBUG__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NDEBUG__ \t\t => %d\n", __NDEBUG__ + 0);
    } else {
        strcat(buffer, "__NDEBUG__\n");
    }
#endif

#ifdef NODEBUG
    if ( (NODEBUG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "NODEBUG \t\t => %d\n", NODEBUG + 0);
    } else {
        strcat(buffer, "NODEBUG\n");
    }
#endif
#ifdef _NODEBUG
    if ( (_NODEBUG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NODEBUG \t\t => %d\n", _NODEBUG + 0);
    } else {
        strcat(buffer, "_NODEBUG\n");
    }
#endif
#ifdef _NODEBUG_
    if ( (_NODEBUG_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NODEBUG_ \t\t => %d\n", _NODEBUG_ + 0);
    } else {
        strcat(buffer, "_NODEBUG_\n");
    }
#endif
#ifdef __NODEBUG
    if ( (__NODEBUG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NODEBUG \t\t => %d\n", __NODEBUG + 0);
    } else {
        strcat(buffer, "__NODEBUG\n");
    }
#endif
#ifdef __NODEBUG__
    if ( (__NODEBUG__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NODEBUG__ \t\t => %d\n", __NODEBUG__ + 0);
    } else {
        strcat(buffer, "__NODEBUG__\n");
    }
#endif




/* ########## */
/* # inline # */

#ifdef _FP_INLINE_
    if ( (_FP_INLINE_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FP_INLINE_\t\t => %d\n", _FP_INLINE_ + 0);
    } else {
        strcat(buffer, "_FP_INLINE_\n");
    }
#endif

#ifdef __GNUC_GNU_INLINE__
    if ( (__GNUC_GNU_INLINE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUC_GNU_INLINE__ \t => %d\n", __GNUC_GNU_INLINE__ + 0);
    } else {
        strcat(buffer, "__GNUC_GNU_INLINE__\n");
    }
#endif

#ifdef __GNUC_STDC_INLINE__
    if ( (__GNUC_STDC_INLINE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUC_STDC_INLINE__\t => %d\n", __GNUC_STDC_INLINE__ + 0);
    } else {
        strcat(buffer, "__GNUC_STDC_INLINE__\n");
    }
#endif

#ifdef __NO_INLINE__
    if ( (__NO_INLINE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NO_INLINE__\t\t => %d\n", __NO_INLINE__ + 0);
    } else {
        strcat(buffer, "__NO_INLINE__\n");
    }
#endif

#ifdef __NO_STRING_INLINES
    if ( (__NO_STRING_INLINES + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NO_STRING_INLINES\t => %d\n", __NO_STRING_INLINES + 0);
    } else {
        strcat(buffer, "__NO_STRING_INLINES\n");
    }
#endif


/* ############ */
/* # optimize # */


#ifdef OPTIMIZE
    if ( (OPTIMIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "OPTIMIZE \t => %d\n", OPTIMIZE + 0);
    } else {
        strcat(buffer, "OPTIMIZE\n");
    }
#endif
#ifdef _OPTIMIZE
    if ( (_OPTIMIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OPTIMIZE\t\t => %d\n", _OPTIMIZE + 0);
    } else {
        strcat(buffer, "_OPTIMIZE\n");
    }
#endif
#ifdef _OPTIMIZE_
    if ( (_OPTIMIZE_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OPTIMIZE_\t\t => %d\n", _OPTIMIZE_ + 0);
    } else {
        strcat(buffer, "_OPTIMIZE_\n");
    }
#endif
#ifdef __OPTIMIZE
    if ( (__OPTIMIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OPTIMIZE\t\t => %d\n", __OPTIMIZE + 0);
    } else {
        strcat(buffer, "__OPTIMIZE\n");
    }
#endif
#ifdef __OPTIMIZE__
    if ( (__OPTIMIZE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OPTIMIZE__\t\t => %d\n", __OPTIMIZE__ + 0);
    } else {
        strcat(buffer, "__OPTIMIZE__\n");
    }
#endif

/* armcc from keil */
#ifdef __OPTIMIZE_LEVEL
    if ( (__OPTIMIZE_LEVEL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OPTIMIZE_LEVEL => %d\n", __OPTIMIZE_LEVEL + 0);
    } else {
        strcat(buffer, "__OPTIMIZE_LEVEL\n");
    }
#endif

#ifdef __OPTIMIZE_LEVEL__
    if ( (__OPTIMIZE_LEVEL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OPTIMIZE_LEVEL__ => %d\n", __OPTIMIZE_LEVEL__ + 0);
    } else {
        strcat(buffer, "__OPTIMIZE_LEVEL__\n");
    }
#endif

#ifdef OPTIMIZE_SIZE
    if ( (OPTIMIZE_SIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "OPTIMIZE_SIZE \t => %d\n", OPTIMIZE_SIZE + 0);
    } else {
        strcat(buffer, "OPTIMIZE_SIZE\n");
    }
#endif
#ifdef _OPTIMIZE_SIZE
    if ( (_OPTIMIZE_SIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OPTIMIZE_SIZE \t => %d\n", _OPTIMIZE_SIZE + 0);
    } else {
        strcat(buffer, "_OPTIMIZE_SIZE\n");
    }
#endif
#ifdef _OPTIMIZE_SIZE_
    if ( (_OPTIMIZE_SIZE_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_OPTIMIZE_SIZE_ \t => %d\n", _OPTIMIZE_SIZE_ + 0);
    } else {
        strcat(buffer, "_OPTIMIZE_SIZE_\n");
    }
#endif
#ifdef __OPTIMIZE_SIZE
    if ( (__OPTIMIZE_SIZE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OPTIMIZE_SIZE \t => %d\n", __OPTIMIZE_SIZE + 0);
    } else {
        strcat(buffer, "__OPTIMIZE_SIZE\n");
    }
#endif
#ifdef __OPTIMIZE_SIZE__
    if ( (__OPTIMIZE_SIZE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OPTIMIZE_SIZE__ \t => %d\n", __OPTIMIZE_SIZE__ + 0);
    } else {
        strcat(buffer, "__OPTIMIZE_SIZE__\n");
    }
#endif

/* armcc from keil */
#ifdef __OPTIMIZE_SPACE
    if ( (__OPTIMIZE_SPACE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OPTIMIZE_SPACE => %d\n", __OPTIMIZE_SPACE + 0);
    } else {
        strcat(buffer, "__OPTIMIZE_SPACE\n");
    }
#endif
/* armcc from keil */
#ifdef __OPTIMIZE_TIME
    if ( (__OPTIMIZE_TIME + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__OPTIMIZE_TIME => %d\n", __OPTIMIZE_TIME + 0);
    } else {
        strcat(buffer, "__OPTIMIZE_TIME\n");
    }
#endif


/* ################### */
/* target format */
#ifdef _MD
    if ( (_MD + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MD \t\t => %d\n", _MD + 0);
    } else {
        strcat(buffer, "_MD\n");
    }
#endif

/* checked in musl for powerpc64 */
#ifdef _CALL_ELF
    if ( (_CALL_ELF + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CALL_ELF\t\t\t => %d\n", _CALL_ELF + 0);
    } else {
        strcat(buffer, "_CALL_ELF\n");
    }
#endif
#ifdef _CALL_ELF
    if ( (_CALL_ELF + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CALL_ELF\t\t\t => %d\n", _CALL_ELF + 0);
    } else {
        strcat(buffer, "_CALL_ELF\n");
    }
#endif


#ifdef DLL
    if ( (DLL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "DLL \t\t => %d\n", DLL + 0);
    } else {
        strcat(buffer, "DLL\n");
    }
#endif

/* RTL used is a DLL (otherwise a static runtime is in use) */
#ifdef _DLL
    if ( (_DLL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DLL \t\t => %d\n", _DLL + 0);
    } else {
        strcat(buffer, "_DLL\n");
    }
#endif
#ifdef _DLL_
    if ( (_DLL_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DLL_ \t\t => %d\n", _DLL_ + 0);
    } else {
        strcat(buffer, "_DLL_\n");
    }
#endif
#ifdef __DLL
    if ( (__DLL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DLL \t\t => %d\n", __DLL + 0);
    } else {
        strcat(buffer, "__DLL\n");
    }
#endif
#ifdef __DLL__
    if ( (__DLL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DLL__ \t\t => %d\n", __DLL__ + 0);
    } else {
        strcat(buffer, "__DLL__\n");
    }
#endif

/* used in diet.c */
#ifdef __DYN_LIB
    if ( (__DYN_LIB + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DYN_LIB \t\t => %d\n", __DYN_LIB + 0);
    } else {
        strcat(buffer, "__DYN_LIB\n");
    }
#endif

#ifdef _DYNAMIC
    if ( (_DYNAMIC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DYNAMIC \t\t => %d\n", _DYNAMIC + 0);
    } else {
        strcat(buffer, "_DYNAMIC\n");
    }
#endif


/* ## ELF ## */
#ifdef ELF
    if ( (ELF + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ELF\t\t\t => %d\n", ELF + 0);
    } else {
        strcat(buffer, "ELF\n");
    }
#endif

#ifdef _ELF
    if ( (_ELF + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ELF\t\t\t => %d\n", _ELF + 0);
    } else {
        strcat(buffer, "_ELF\n");
    }
#endif


#ifdef _ELF_
    if ( (_ELF_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ELF_\t\t\t => %d\n", _ELF_ + 0);
    } else {
        strcat(buffer, "_ELF_\n");
    }
#endif


#ifdef __ELF
    if ( (__ELF + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ELF\t\t\t => %d\n", __ELF + 0);
    } else {
        strcat(buffer, "__ELF\n");
    }
#endif


#ifdef __ELF__
    if ( (__ELF__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ELF__\t\t\t => %d\n", __ELF__ + 0);
    } else {
        strcat(buffer, "__ELF__\n");
    }
#endif


/* ### pic / PIE ### */
#ifdef __pic__
    if ( (__pic__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__pic__\t\t\t => %d\n", __pic__ + 0);
    } else {
        strcat(buffer, "__pic__\n");
    }
#endif
#ifdef __PIC__
    if ( (__PIC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__PIC__\t\t\t => %d\n", __PIC__ + 0);
    } else {
        strcat(buffer, "__PIC__\n");
    }
#endif


#ifdef __pie__
    if ( (__pie__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__pie__\t\t\t => %d\n", __pie__ + 0);
    } else {
        strcat(buffer, "__pie__\n");
    }
#endif
#ifdef __PIE__
    if ( (__PIE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__PIE__\t\t\t => %d\n", __PIE__ + 0);
    } else {
        strcat(buffer, "__PIE__\n");
    }
#endif


/* compiling as shared / static library/program */
#ifdef SHARED
    if ( (SHARED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "SHARED \t\t => %d\n", SHARED + 0);
    } else {
        strcat(buffer, "SHARED\n");
    }
#endif
#ifdef _SHARED
    if ( (_SHARED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SHARED \t\t => %d\n", _SHARED + 0);
    } else {
        strcat(buffer, "_SHARED\n");
    }
#endif
#ifdef _SHARED_
    if ( (_SHARED_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SHARED_ \t\t => %d\n", _SHARED_ + 0);
    } else {
        strcat(buffer, "_SHARED_\n");
    }
#endif
#ifdef __SHARED
    if ( (__SHARED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SHARED \t\t => %d\n", __SHARED + 0);
    } else {
        strcat(buffer, "__SHARED\n");
    }
#endif
#ifdef __SHARED__
    if ( (__SHARED__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SHARED__ \t\t => %d\n", __SHARED__ + 0);
    } else {
        strcat(buffer, "__SHARED__\n");
    }
#endif

/* used in newlib to make some functions faster */
#ifdef __SINGLE_THREAD__
    if ( (__SINGLE_THREAD__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SINGLE_THREAD__  \t => %d\n", __SINGLE_THREAD__   + 0);
    } else {
        strcat(buffer, "__SINGLE_THREAD__  \n");
    }
#endif


#ifdef STATIC
    if ( (STATIC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "STATIC \t\t => %d\n", STATIC + 0);
    } else {
        strcat(buffer, "STATIC\n");
    }
#endif
#ifdef _STATIC
    if ( (_STATIC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STATIC \t\t => %d\n", _STATIC + 0);
    } else {
        strcat(buffer, "_STATIC\n");
    }
#endif
#ifdef _STATIC_
    if ( (_STATIC_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STATIC_ \t\t => %d\n", _STATIC_ + 0);
    } else {
        strcat(buffer, "_STATIC_\n");
    }
#endif
#ifdef __STATIC
    if ( (__STATIC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STATIC \t\t => %d\n", __STATIC + 0);
    } else {
        strcat(buffer, "__STATIC\n");
    }
#endif
#ifdef __STATIC__
    if ( (__STATIC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STATIC__ \t\t => %d\n", __STATIC__ + 0);
    } else {
        strcat(buffer, "__STATIC__\n");
    }
#endif


/* ### INT LONG POINTER modes ### */
#ifdef ILP32
    if ( (ILP32 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "ILP32\t\t\t => %d\n", ILP32 + 0);
    } else {
        strcat(buffer, "ILP32\n");
    }
#endif
#ifdef _ILP32
    if ( (_ILP32 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ILP32\t\t\t => %d\n", _ILP32 + 0);
    } else {
        strcat(buffer, "_ILP32\n");
    }
#endif
#ifdef _ILP32_
    if ( (_ILP32_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ILP32_\t\t\t => %d\n", _ILP32_ + 0);
    } else {
        strcat(buffer, "_ILP32_\n");
    }
#endif
#ifdef __ILP32
    if ( (__ILP32 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ILP32\t\t\t => %d\n", __ILP32 + 0);
    } else {
        strcat(buffer, "__ILP32\n");
    }
#endif
#ifdef __ILP32__
    if ( (__ILP32__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ILP32__\t\t => %d\n", __ILP32__ + 0);
    } else {
        strcat(buffer, "__ILP32__\n");
    }
#endif


#ifdef LL64
    if ( (LL64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "LL64\t\t\t => %d\n", LL64 + 0);
    } else {
        strcat(buffer, "LL64\n");
    }
#endif
#ifdef _LL64
    if ( (_LL64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LL64\t\t\t => %d\n", _LL64 + 0);
    } else {
        strcat(buffer, "_LL64\n");
    }
#endif
#ifdef _LL64_
    if ( (_LL64_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LL64_\t\t\t => %d\n", _LL64_ + 0);
    } else {
        strcat(buffer, "_LL64_\n");
    }
#endif
#ifdef __LL64
    if ( (__LL64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LL64\t\t\t => %d\n", __LL64 + 0);
    } else {
        strcat(buffer, "__LL64\n");
    }
#endif
#ifdef __LL64__
    if ( (__LL64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LL64__\t\t\t => %d\n", __LL64__ + 0);
    } else {
        strcat(buffer, "__LL64__\n");
    }
#endif


/* LP32 and LP64 for x86_32 and x86_64 */
#ifdef LP32
    if ( (LP32 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "LP32\t\t\t => %d\n", LP32 + 0);
    } else {
        strcat(buffer, "LP32\n");
    }
#endif
#ifdef _LP32
    if ( (_LP32 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LP32\t\t\t => %d\n", _LP32 + 0);
    } else {
        strcat(buffer, "_LP32\n");
    }
#endif
#ifdef _LP32_
    if ( (_LP32_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LP32_\t\t\t => %d\n", _LP32_ + 0);
    } else {
        strcat(buffer, "_LP32_\n");
    }
#endif
#ifdef __LP32
    if ( (__LP32 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LP32\t\t\t => %d\n", __LP32 + 0);
    } else {
        strcat(buffer, "__LP32\n");
    }
#endif
#ifdef __LP32__
    if ( (__LP32__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LP32__\t\t => %d\n", __LP32__ + 0);
    } else {
        strcat(buffer, "__LP32__\n");
    }
#endif

/* LP32 and LP64 for x86_32 and x86_64 */
#ifdef LP64
    if ( (LP64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "LP64\t\t\t => %d\n", LP64 + 0);
    } else {
        strcat(buffer, "LP64\n");
    }
#endif
#ifdef _LP64
    if ( (_LP64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LP64\t\t\t => %d\n", _LP64 + 0);
    } else {
        strcat(buffer, "_LP64\n");
    }
#endif
#ifdef _LP64_
    if ( (_LP64_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LP64_\t\t\t => %d\n", _LP64_ + 0);
    } else {
        strcat(buffer, "_LP64_\n");
    }
#endif
#ifdef __LP64
    if ( (__LP64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LP64\t\t\t => %d\n", __LP64 + 0);
    } else {
        strcat(buffer, "__LP64\n");
    }
#endif
#ifdef __LP64__
    if ( (__LP64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LP64__\t\t => %d\n", __LP64__ + 0);
    } else {
        strcat(buffer, "__LP64__\n");
    }
#endif

/* ############ */
/* cpu features */
#ifdef __ALTIVEC__
    if ( (__ALTIVEC__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ALTIVEC__ \t\t => %d\n", __ALTIVEC__ + 0);
    } else {
        strcat(buffer, "__ALTIVEC__\n");
    }
#endif


/* endian */
#ifdef BIG_ENDIAN
    if ( (BIG_ENDIAN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "BIG_ENDIAN \t\t => %d\n", BIG_ENDIAN + 0);
    } else {
        strcat(buffer, "BIG_ENDIAN\n");
    }
#endif
#ifdef _BIG_ENDIAN
    if ( (_BIG_ENDIAN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BIG_ENDIAN \t\t => %d\n", _BIG_ENDIAN + 0);
    } else {
        strcat(buffer, "_BIG_ENDIAN\n");
    }
#endif
#ifdef _BIG_ENDIAN_
    if ( (_BIG_ENDIAN_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BIG_ENDIAN_ \t\t => %d\n", _BIG_ENDIAN_ + 0);
    } else {
        strcat(buffer, "_BIG_ENDIAN_\n");
    }
#endif
#ifdef __BIG_ENDIAN
    if ( (__BIG_ENDIAN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BIG_ENDIAN \t\t => %d\n", __BIG_ENDIAN + 0);
    } else {
        strcat(buffer, "__BIG_ENDIAN\n");
    }
#endif
#ifdef __BIG_ENDIAN__
    if ( (__BIG_ENDIAN__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BIG_ENDIAN__ \t\t => %d\n", __BIG_ENDIAN__ + 0);
    } else {
        strcat(buffer, "__BIG_ENDIAN__\n");
    }
#endif



#ifdef LITTLE_ENDIAN
    if ( (LITTLE_ENDIAN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "LITTLE_ENDIAN\t\t => %d\n", LITTLE_ENDIAN + 0);
    } else {
        strcat(buffer, "LITTLE_ENDIAN\n");
    }
#endif
#ifdef _LITTLE_ENDIAN
    if ( (_LITTLE_ENDIAN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LITTLE_ENDIAN\t\t => %d\n", _LITTLE_ENDIAN + 0);
    } else {
        strcat(buffer, "_LITTLE_ENDIAN\n");
    }
#endif
#ifdef _LITTLE_ENDIAN_
    if ( (_LITTLE_ENDIAN_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LITTLE_ENDIAN_ \t => %d\n", _LITTLE_ENDIAN_ + 0);
    } else {
        strcat(buffer, "_LITTLE_ENDIAN_\n");
    }
#endif
#ifdef __LITTLE_ENDIAN
    if ( (__LITTLE_ENDIAN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LITTLE_ENDIAN \t => %d\n", __LITTLE_ENDIAN + 0);
    } else {
        strcat(buffer, "__LITTLE_ENDIAN\n");
    }
#endif
#ifdef __LITTLE_ENDIAN__
    if ( (__LITTLE_ENDIAN__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LITTLE_ENDIAN__\t => %d\n", __LITTLE_ENDIAN__ + 0);
    } else {
        strcat(buffer, "__LITTLE_ENDIAN__\n");
    }
#endif


#ifdef __ORDER_BIG_ENDIAN__
    if ( (__ORDER_BIG_ENDIAN__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ORDER_BIG_ENDIAN__\t => %d\n", __ORDER_BIG_ENDIAN__ + 0);
    } else {
        strcat(buffer, "__ORDER_BIG_ENDIAN__\n");
    }
#endif

#ifdef __ORDER_LITTLE_ENDIAN__
    if ( (__ORDER_LITTLE_ENDIAN__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ORDER_LITTLE_ENDIAN__\t => %d\n", __ORDER_LITTLE_ENDIAN__ + 0);
    } else {
        strcat(buffer, "__ORDER_LITTLE_ENDIAN__\n");
    }
#endif


#ifdef BYTE_ORDER
    if ( (BYTE_ORDER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "BYTE_ORDER \t\t => %d\n", BYTE_ORDER + 0);
    } else {
        strcat(buffer, "BYTE_ORDER\n");
    }
#endif

#ifdef _BYTE_ORDER
    if ( (_BYTE_ORDER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BYTE_ORDER \t\t => %d\n", _BYTE_ORDER + 0);
    } else {
        strcat(buffer, "_BYTE_ORDER\n");
    }
#endif

#ifdef _BYTE_ORDER_
    if ( (_BYTE_ORDER_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BYTE_ORDER_ \t\t => %d\n", _BYTE_ORDER_ + 0);
    } else {
        strcat(buffer, "_BYTE_ORDER_\n");
    }
#endif

#ifdef __BYTE_ORDER
    if ( (__BYTE_ORDER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BYTE_ORDER \t\t => %d\n", __BYTE_ORDER + 0);
    } else {
        strcat(buffer, "__BYTE_ORDER\n");
    }
#endif

#ifdef __BYTE_ORDER__
    if ( (__BYTE_ORDER__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BYTE_ORDER__  \t => %d (%s)\n", __BYTE_ORDER__ + 0,
        (__BYTE_ORDER__==1234) ? "__ORDER_LITTLE_ENDIAN__" :
        (__BYTE_ORDER__==4321) ? "__ORDER_BIG_ENDIAN__" : "unknown" );
    } else {
        strcat(buffer, "__BYTE_ORDER__\n");
    }
#endif

#ifdef __FLOAT_WORD_ORDER__
    if ( (__FLOAT_WORD_ORDER__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FLOAT_WORD_ORDER__\t => %d (%s)\n",
        __FLOAT_WORD_ORDER__ + 0, (__FLOAT_WORD_ORDER__==1234) ? "__ORDER_LITTLE_ENDIAN__" :
        (__FLOAT_WORD_ORDER__==4321) ? "__ORDER_BIG_ENDIAN__" : "unknown" );
    } else {
        strcat(buffer, "__FLOAT_WORD_ORDER__\n");
    }
#endif


/* ################### */
/* builtin data types */
/* MB and DBCS */
#ifdef __DBCS__
    if ( (__DBCS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DBCS__\t\t => %d\n", __DBCS__ + 0);
    } else {
        strcat(buffer, "__DBCS__\n");
    }
#endif

/* [un]signed */

#ifdef CHAR_SIGNED
    if ( (CHAR_SIGNED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "CHAR_SIGNED\t\t => %d\n", CHAR_SIGNED + 0);
    } else {
        strcat(buffer, "CHAR_SIGNED\n");
    }
#endif
#ifdef _CHAR_SIGNED
    if ( (_CHAR_SIGNED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CHAR_SIGNED\t\t => %d\n", _CHAR_SIGNED + 0);
    } else {
        strcat(buffer, "_CHAR_SIGNED\n");
    }
#endif
#ifdef _CHAR_SIGNED_
    if ( (_CHAR_SIGNED_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CHAR_SIGNED_\t\t => %d\n", _CHAR_SIGNED_ + 0);
    } else {
        strcat(buffer, "_CHAR_SIGNED_\n");
    }
#endif
#ifdef __CHAR_SIGNED
    if ( (__CHAR_SIGNED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CHAR_SIGNED\t\t => %d\n", __CHAR_SIGNED + 0);
    } else {
        strcat(buffer, "__CHAR_SIGNED\n");
    }
#endif
#ifdef __CHAR_SIGNED__
    if ( (__CHAR_SIGNED__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CHAR_SIGNED__\t\t => %d\n", __CHAR_SIGNED__ + 0);
    } else {
        strcat(buffer, "__CHAR_SIGNED__\n");
    }
#endif


#ifdef CHAR_UNSIGNED
    if ( (CHAR_UNSIGNED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "CHAR_UNSIGNED\t\t => %d\n", CHAR_UNSIGNED + 0);
    } else {
        strcat(buffer, "CHAR_UNSIGNED\n");
    }
#endif
#ifdef _CHAR_UNSIGNED
    if ( (_CHAR_UNSIGNED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CHAR_UNSIGNED\t\t => %d\n", _CHAR_UNSIGNED + 0);
    } else {
        strcat(buffer, "_CHAR_UNSIGNED\n");
    }
#endif
#ifdef _CHAR_UNSIGNED_
    if ( (_CHAR_UNSIGNED_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CHAR_UNSIGNED_\t\t => %d\n", _CHAR_UNSIGNED_ + 0);
    } else {
        strcat(buffer, "_CHAR_UNSIGNED_\n");
    }
#endif

#ifdef __CHAR_UNSIGNED
    if ( (__CHAR_UNSIGNED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CHAR_UNSIGNED\t\t => %d\n", __CHAR_UNSIGNED + 0);
    } else {
        strcat(buffer, "__CHAR_UNSIGNED\n");
    }
#endif

#ifdef __CHAR_UNSIGNED__
    if ( (__CHAR_UNSIGNED__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__CHAR_UNSIGNED__\t => %d\n", __CHAR_UNSIGNED__ + 0);
    } else {
        strcat(buffer, "__CHAR_UNSIGNED__\n");
    }
#endif



#ifdef __WCHAR_UNSIGNED__
    if ( (__WCHAR_UNSIGNED__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WCHAR_UNSIGNED__\t => %d\n", __WCHAR_UNSIGNED__ + 0);
    } else {
        strcat(buffer, "__WCHAR_UNSIGNED__\n");
    }
#endif
#ifdef __WCHAR_SIGNED__
    if ( (__WCHAR_SIGNED__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WCHAR_SIGNED__\t\t => %d\n", __WCHAR_SIGNED__ + 0);
    } else {
        strcat(buffer, "__WCHAR_SIGNED__\n");
    }
#endif



/* MIN / MAX values */
/* builtin or in limit.h */

#ifdef BOOL_MAX
    sprintf(buffer+strlen(buffer), "BOOL_MAX\t\t => 0x%x\n", BOOL_MAX);
#endif
#ifdef __BOOL_MAX__
    sprintf(buffer+strlen(buffer), "__BOOL_MAX__\t\t => 0x%x\n", __BOOL_MAX__);
#endif

/* char */
#ifdef CHAR_MIN
    sprintf(buffer+strlen(buffer), "CHAR_MIN\t\t => 0x%x\n", CHAR_MIN);
#endif
#ifdef __CHAR_MIN__
    sprintf(buffer+strlen(buffer), "__CHAR_MIN__\t\t => 0x%x\n", __CHAR_MIN__);
#endif
#ifdef CHAR_MAX
    sprintf(buffer+strlen(buffer), "CHAR_MAX\t\t => 0x%x\n", CHAR_MAX);
#endif
#ifdef __CHAR_MAX__
    sprintf(buffer+strlen(buffer), "__CHAR_MAX__\t\t => 0x%x\n", __CHAR_MAX__);
#endif

#ifdef SCHAR_MIN
    sprintf(buffer+strlen(buffer), "SCHAR_MIN\t\t => 0x%x\n", SCHAR_MIN);
#endif
#ifdef __SCHAR_MIN__
    sprintf(buffer+strlen(buffer), "__SCHAR_MIN__\t\t => 0x%x\n", __SCHAR_MIN__);
#endif
#ifdef SCHAR_MAX
    sprintf(buffer+strlen(buffer), "SCHAR_MAX\t\t => 0x%x\n", SCHAR_MAX);
#endif
#ifdef __SCHAR_MAX__
    sprintf(buffer+strlen(buffer), "__SCHAR_MAX__\t\t => 0x%x\n", __SCHAR_MAX__);
#endif

#ifdef UCHAR_MAX
    sprintf(buffer+strlen(buffer), "UCHAR_MAX\t\t => 0x%x\n", UCHAR_MAX);
#endif
#ifdef __UCHAR_MAX__
    sprintf(buffer+strlen(buffer), "__UCHAR_MAX__\t\t => 0x%x\n", __UCHAR_MAX__);
#endif


/* short */
#ifdef SHRT_MIN
    sprintf(buffer+strlen(buffer), "SHRT_MIN\t\t => 0x%x\n", SHRT_MIN);
#endif
#ifdef SHRT_MAX
    sprintf(buffer+strlen(buffer), "SHRT_MAX\t\t => 0x%x\n", SHRT_MAX);
#endif
#ifdef __SHRT_MIN__
    sprintf(buffer+strlen(buffer), "__SHRT_MIN__\t\t => 0x%x\n", __SHRT_MIN__);
#endif
#ifdef __SHRT_MAX__
    sprintf(buffer+strlen(buffer), "__SHRT_MAX__\t\t => 0x%x\n", __SHRT_MAX__);
#endif


#ifdef SSHRT_MAX
    sprintf(buffer+strlen(buffer), "SSHRT_MAX\t\t => 0x%x\n", SSHRT_MAX);
#endif
#ifdef __SSHRT_MAX__
    sprintf(buffer+strlen(buffer), "__SSHRT_MAX__\t\t => 0x%x\n", __SSHRT_MAX__);
#endif

#ifdef USHRT_MAX
    sprintf(buffer+strlen(buffer), "USHRT_MAX\t\t => 0x%x\n", USHRT_MAX);
#endif
#ifdef __USHRT_MAX__
    sprintf(buffer+strlen(buffer), "__USHRT_MAX__\t\t => 0x%x\n", __USHRT_MAX__);
#endif


/* wchar */
#ifdef WCHAR_MIN
    sprintf(buffer+strlen(buffer), "WCHAR_MIN\t\t => 0x%x\n", WCHAR_MIN);
#endif
#ifdef WCHAR_MAX
    sprintf(buffer+strlen(buffer), "WCHAR_MAX\t\t => 0x%x\n", WCHAR_MAX);
#endif


#ifdef __WCHAR_MIN__
    sprintf(buffer+strlen(buffer), "__WCHAR_MIN__\t\t => 0x%lx\n", (unsigned long)(__WCHAR_MIN__ & 0xffffffff) );
#endif
#ifdef __WCHAR_MAX__
    sprintf(buffer+strlen(buffer), "__WCHAR_MAX__\t\t => 0x%lx\n", (unsigned long)(__WCHAR_MAX__ & 0xffffffff) );
#endif

/* int */
#ifdef INT_MIN
    sprintf(buffer+strlen(buffer), "INT_MIN \t\t => 0x%x\n", INT_MIN);
#endif
#ifdef __INT_MIN__
    sprintf(buffer+strlen(buffer), "__INT_MIN__ \t\t => 0x%x\n", __INT_MIN__);
#endif
#ifdef INT_MAX
    sprintf(buffer+strlen(buffer), "INT_MAX \t\t => 0x%x\n", INT_MAX);
#endif

#ifdef __INT_MAX__
    sprintf(buffer+strlen(buffer), "__INT_MAX__\t\t => 0x%x\n", __INT_MAX__);
#endif

/* signet int */
#ifdef SINT_MAX
    sprintf(buffer+strlen(buffer), "SINT_MAX\t\t => 0x%x\n", SINT_MAX);
#endif
#ifdef __SINT_MAX__
    sprintf(buffer+strlen(buffer), "__SINT_MAX__\t\t => 0x%x\n", __SINT_MAX__);
#endif

/* unsigent int */
#ifdef UINT_MAX
    sprintf(buffer+strlen(buffer), "UINT_MAX\t\t => 0x%x\n", UINT_MAX);
#endif
#ifdef __UINT_MAX__
    sprintf(buffer+strlen(buffer), "__UINT_MAX__\t\t => 0x%x\n", __UINT_MAX__);
#endif


/* more INT min/max limits with a specific width */
#ifdef INT8_MIN
    sprintf(buffer+strlen(buffer), "INT8_MIN \t\t => 0x%x\n", INT8_MIN);
#endif
#ifdef __INT8_MIN__
    sprintf(buffer+strlen(buffer), "__INT8_MIN__ \t\t => 0x%x\n", __INT8_MIN__);
#endif
#ifdef INT8_MAX
    sprintf(buffer+strlen(buffer), "INT8_MAX \t\t => 0x%x\n", INT8_MAX);
#endif
#ifdef __INT8_MAX__
    sprintf(buffer+strlen(buffer), "__INT8_MAX__ \t\t => 0x%x\n", __INT8_MAX__);
#endif
#ifdef UINT8_MAX
    sprintf(buffer+strlen(buffer), "UINT8_MAX \t\t => 0x%x\n", UINT8_MAX);
#endif
#ifdef __UINT8_MAX__
    sprintf(buffer+strlen(buffer), "__UINT8_MAX__ \t\t => 0x%x\n", __UINT8_MAX__);
#endif


#ifdef INT16_MIN
    sprintf(buffer+strlen(buffer), "INT16_MIN \t\t => 0x%x\n", INT16_MIN);
#endif
#ifdef __INT16_MIN__
    sprintf(buffer+strlen(buffer), "__INT16_MIN__ \t\t => 0x%x\n", __INT16_MIN__);
#endif
#ifdef INT16_MAX
    sprintf(buffer+strlen(buffer), "INT16_MAX \t\t => 0x%x\n", INT16_MAX);
#endif
#ifdef __INT16_MAX__
    sprintf(buffer+strlen(buffer), "__INT16_MAX__ \t\t => 0x%x\n", __INT16_MAX__);
#endif
#ifdef UINT16_MAX
    sprintf(buffer+strlen(buffer), "UINT16_MAX \t\t => 0x%x\n", UINT16_MAX);
#endif
#ifdef __UINT16_MAX__
    sprintf(buffer+strlen(buffer), "__UINT16_MAX__ \t\t => 0x%x\n", __UINT16_MAX__);
#endif

#ifdef INT32_MIN
    sprintf(buffer+strlen(buffer), "INT32_MIN \t\t => 0x%x\n", INT32_MIN);
#endif
#ifdef __INT32_MIN__
    sprintf(buffer+strlen(buffer), "__INT32_MIN__ \t\t => 0x%x\n", __INT32_MIN__);
#endif
#ifdef INT32_MAX
    sprintf(buffer+strlen(buffer), "INT32_MAX \t\t => 0x%x\n", INT32_MAX);
#endif
#ifdef __INT32_MAX__
    sprintf(buffer+strlen(buffer), "__INT32_MAX__ \t\t => 0x%x\n", __INT32_MAX__);
#endif
#ifdef UINT32_MAX
    sprintf(buffer+strlen(buffer), "UINT32_MAX \t\t => 0x%x\n", UINT32_MAX);
#endif
#ifdef __UINT32_MAX__
    sprintf(buffer+strlen(buffer), "__UINT32_MAX__ \t\t => 0x%x\n", __UINT32_MAX__);
#endif

#ifdef INT64_MIN
    sprintf(buffer+strlen(buffer), "INT64_MIN\t\t => 0x%lx%08lx\n",
            (long) (INT64_MIN >>32), (unsigned long)(INT64_MIN & 0xffffffff));
#endif
#ifdef __INT64_MIN__
    sprintf(buffer+strlen(buffer), "__INT64_MIN__\t\t => 0x%lx%08lx\n",
            (long) (__INT64_MIN__ >>32), (unsigned long)(__INT64_MIN__ & 0xffffffff));
#endif
#ifdef INT64_MAX
    sprintf(buffer+strlen(buffer), "INT64_MAX\t\t => 0x%lx%08lx\n",
            (long) (INT64_MAX >>32), (unsigned long)(INT64_MAX & 0xffffffff));
#endif
#ifdef __INT64_MAX__
    sprintf(buffer+strlen(buffer), "__INT64_MAX__\t\t => 0x%lx%08lx\n",
            (long) (__INT64_MAX__ >>32), (unsigned long)(__INT64_MAX__ & 0xffffffff));
#endif
#ifdef UINT64_MAX
    sprintf(buffer+strlen(buffer), "UINT64_MAX\t\t => 0x%lx%08lx\n",
            (long) (UINT64_MAX >>32), (unsigned long)(UINT64_MAX & 0xffffffff));
#endif
#ifdef __UINT64_MAX__
    sprintf(buffer+strlen(buffer), "__UINT64_MAX__\t\t => 0x%lx%08lx\n",
            (long) (__UINT64_MAX__ >>32), (unsigned long)(__UINT64_MAX__ & 0xffffffff));
#endif



/* long */
#ifdef LONG_MIN
    sprintf(buffer+strlen(buffer), "LONG_MIN\t\t => 0x%lx\n", LONG_MIN);
#endif
#ifdef __LONG_MIN__
    sprintf(buffer+strlen(buffer), "__LONG_MIN__\t\t => 0x%lx\n", __LONG_MIN__);
#endif
#ifdef LONG_MAX
    sprintf(buffer+strlen(buffer), "LONG_MAX\t\t => 0x%lx\n", LONG_MAX);
#endif
#ifdef _LONG_MAX
    sprintf(buffer+strlen(buffer), "_LONG_MAX\t\t => 0x%lx\n", _LONG_MAX);
#endif
#ifdef _LONG_MAX_
    sprintf(buffer+strlen(buffer), "_LONG_MAX_\t\t => 0x%lx\n", _LONG_MAX_);
#endif
#ifdef __LONG_MAX
    sprintf(buffer+strlen(buffer), "__LONG_MAX\t\t => 0x%lx\n", __LONG_MAX);
#endif
#ifdef __LONG_MAX__
    sprintf(buffer+strlen(buffer), "__LONG_MAX__\t\t => 0x%lx\n", __LONG_MAX__);
#endif

/*  signed long */
#ifdef SLONG_MAX
    sprintf(buffer+strlen(buffer), "SLONG_MAX\t\t => 0x%lx\n", SLONG_MAX);
#endif
#ifdef __SLONG_MAX__
    sprintf(buffer+strlen(buffer), "__SLONG_MAX__\t\t => 0x%lx\n", __SLONG_MAX__);
#endif
#ifdef ULONG_MAX
    sprintf(buffer+strlen(buffer), "ULONG_MAX\t\t => 0x%lx\n", ULONG_MAX);
#endif
#ifdef __ULONG_MAX__
    sprintf(buffer+strlen(buffer), "__ULONG_MAX__\t\t => 0x%lx\n", __ULONG_MAX__);
#endif


/*  long long */
#ifdef LLONG_MIN
    sprintf(buffer+strlen(buffer), "LLONG_MIN\t\t => 0x%llx\n", LLONG_MIN);
#endif
#ifdef __LLONG_MIN__
    sprintf(buffer+strlen(buffer), "__LLONG_MIN__\t\t => 0x%llx\n", __LLONG_MIN__);
#endif

#ifdef LLONG_MAX
    sprintf(buffer+strlen(buffer), "LLONG_MAX\t\t => 0x%llx\n", LLONG_MAX);
#endif
#ifdef __LLONG_MAX__
    sprintf(buffer+strlen(buffer), "__LLONG_MAX__\t\t => 0x%llx\n", __LLONG_MAX__);
#endif
#ifdef LONG_LONG_MIN
    sprintf(buffer+strlen(buffer), "LONG_LONG_MIN\t\t => 0x%llx\n", LONG_LONG_MIN);
#endif
#ifdef LONG_LONG_MAX
    sprintf(buffer+strlen(buffer), "LONG_LONG_MAX\t\t => 0x%llx\n", LONG_LONG_MAX);
#endif
#ifdef __LONG_LONG_MIN__
    sprintf(buffer+strlen(buffer), "__LONG_LONG_MIN__\t => 0x%lx%08lx\n",
            (long) (__LONG_LONG_MIN__ >>32), (unsigned long)(__LONG_LONG_MIN__ & 0xffffffff));
#endif
#ifdef __LONG_LONG_MAX__
    sprintf(buffer+strlen(buffer), "__LONG_LONG_MAX__\t => 0x%lx%08lx\n",
            (long) (__LONG_LONG_MAX__ >>32), (unsigned long)(__LONG_LONG_MAX__ & 0xffffffff));
#endif

/*  unsigned long long */
#ifdef ULLONG_MAX
    sprintf(buffer+strlen(buffer), "ULLONG_MAX\t\t => 0x%llx\n", ULLONG_MAX);
#endif
#ifdef __ULLONG_MAX__
    sprintf(buffer+strlen(buffer), "__ULLONG_MAX__\t\t => 0x%llx\n", __ULLONG_MAX__);
#endif

#ifdef ULONG_LONG_MAX
    sprintf(buffer+strlen(buffer), "ULONG_LONG_MAX\t\t => 0x%llx\n", ULONG_LONG_MAX);
#endif
#ifdef __ULONG_LONG_MAX__
    sprintf(buffer+strlen(buffer), "__ULONG_LONG_MAX__\t => 0x%llx\n", __ULONG_LONG_MAX__);
#endif



/* more max */
#ifdef INTPTR_MAX
    sprintf(buffer+strlen(buffer), "INTPTR_MAX\t\t => 0x%lx%8lx\n",
            (long) (INTPTR_MAX >>32), (unsigned long)(INTPTR_MAX & 0xffffffff));
#endif
#ifdef __INTPTR_MAX__
    sprintf(buffer+strlen(buffer), "__INTPTR_MAX__\t\t => 0x%lx%8lx\n",
            (long) (__INTPTR_MAX__ >>32), (unsigned long)(__INTPTR_MAX__ & 0xffffffff));
#endif
#ifdef UINTPTR_MAX
    sprintf(buffer+strlen(buffer), "UINTPTR_MAX\t\t => 0x%lx%8lx\n",
            (long) (UINTPTR_MAX >>32), (unsigned long)(UINTPTR_MAX & 0xffffffff));
#endif
#ifdef __UINTPTR_MAX__
    sprintf(buffer+strlen(buffer), "__UINTPTR_MAX__\t\t => 0x%lx%8lx\n",
            (long) (__UINTPTR_MAX__ >>32), (unsigned long)(__UINTPTR_MAX__ & 0xffffffff));
#endif


#ifdef LONGPTR_MAX
    sprintf(buffer+strlen(buffer), "LONGPTR_MAX\t\t => 0x%lx%08.lx\n",
            (long) (LONGPTR_MAX >>32), (unsigned long)(LONGPTR_MAX & 0xffffffff));
#endif
#ifdef __LONGPTR_MAX__
    sprintf(buffer+strlen(buffer), "__LONGPTR_MAX__\t\t => 0x%lx%08.lx\n",
            (long) (__LONGPTR_MAX__ >>32), (unsigned long)(__LONGPTR_MAX__ & 0xffffffff));
#endif

#ifdef ULONGPTR_MAX
    sprintf(buffer+strlen(buffer), "ULONGPTR_MAX\t\t => 0x%lx%08.lx\n",
            (long) (ULONGPTR_MAX >>32), (unsigned long)(ULONGPTR_MAX & 0xffffffff));
#endif
#ifdef __ULONGPTR_MAX__
    sprintf(buffer+strlen(buffer), "__ULONGPTR_MAX__\t\t => 0x%lx%08.lx\n",
            (long) (__ULONGPTR_MAX__ >>32), (unsigned long)(__ULONGPTR_MAX__ & 0xffffffff));
#endif



/* intmax */
#ifdef INTMAX_MAX
    sprintf(buffer+strlen(buffer), "INTMAX_MAX\t\t => 0x%lx%08lx\n",
            (long) (INTMAX_MAX >>32), (unsigned long)(INTMAX_MAX & 0xffffffff));
#endif
#ifdef __INTMAX_MAX__
    sprintf(buffer+strlen(buffer), "__INTMAX_MAX__  \t => 0x%lx%08lx\n",
            (long) (__INTMAX_MAX__ >>32), (unsigned long)(__INTMAX_MAX__ & 0xffffffff));
#endif

#ifdef UINTMAX_MAX
    sprintf(buffer+strlen(buffer), "UINTMAX_MAX\t\t => 0x%lx%08lx\n",
            (long) (UINTMAX_MAX >>32), (unsigned long)(UINTMAX_MAX & 0xffffffff));
#endif
#ifdef __UINTMAX_MAX__
    sprintf(buffer+strlen(buffer), "__UINTMAX_MAX__ \t => 0x%lx%08lx\n",
            (long) (__UINTMAX_MAX__ >>32), (unsigned long)(__UINTMAX_MAX__ & 0xffffffff));
#endif


/* ############## */
/* SIZEOF */
#ifdef __SIZEOF_CHAR__
    sprintf(buffer+strlen(buffer), "__SIZEOF_CHAR__\t => %d\n", __SIZEOF_CHAR__);
#endif
#ifdef __SIZEOF_SHORT__
    sprintf(buffer+strlen(buffer), "__SIZEOF_SHORT__\t => %d\n", __SIZEOF_SHORT__);
#endif
#ifdef __SIZEOF_WCHAR_T__
    sprintf(buffer+strlen(buffer), "__SIZEOF_WCHAR_T__\t => %d\n", __SIZEOF_WCHAR_T__);
#endif
#ifdef __SIZEOF_WINT_T__
    sprintf(buffer+strlen(buffer), "__SIZEOF_WINT_T__\t => %d\n", __SIZEOF_WINT_T__);
#endif
/* used in armcc */
#ifdef __sizeof_int
    sprintf(buffer+strlen(buffer), "__sizeof_int  \t => %d\n", __sizeof_int);
#endif
#ifdef __SIZEOF_INT__
    sprintf(buffer+strlen(buffer), "__SIZEOF_INT__  \t => %d\n", __SIZEOF_INT__);
#endif
#ifdef __SIZEOF_INT16__
    sprintf(buffer+strlen(buffer), "__SIZEOF_INT16__  \t => %d\n", __SIZEOF_INT16__);
#endif
#ifdef __SIZEOF_INT32__
    sprintf(buffer+strlen(buffer), "__SIZEOF_INT32__  \t => %d\n", __SIZEOF_INT32__);
#endif
#ifdef __SIZEOF_INT64__
    sprintf(buffer+strlen(buffer), "__SIZEOF_INT64__  \t => %d\n", __SIZEOF_INT64__);
#endif

#ifdef __SIZEOF_INT128__
    sprintf(buffer+strlen(buffer), "__SIZEOF_INT128__  \t => %d\n", __SIZEOF_INT128__);
#endif

/* used in armcc */
#ifdef __sizeof_long
    sprintf(buffer+strlen(buffer), "__sizeof_long  \t => %d\n", __sizeof_long);
#endif
#ifdef __SIZEOF_LONG__
    sprintf(buffer+strlen(buffer), "__SIZEOF_LONG__  \t => %d\n", __SIZEOF_LONG__);
#endif

#ifdef __SIZEOF_LONG32__
    sprintf(buffer+strlen(buffer), "__SIZEOF_LONG32__  \t => %d\n", __SIZEOF_LONG32__);
#endif
#ifdef __SIZEOF_LONG64__
    sprintf(buffer+strlen(buffer), "__SIZEOF_LONG64__  \t => %d\n", __SIZEOF_LONG64__);
#endif
#ifdef __SIZEOF_LONG128__
    sprintf(buffer+strlen(buffer), "__SIZEOF_LONG128__  \t => %d\n", __SIZEOF_LONG128__);
#endif

#ifdef __SIZEOF_LONG_LONG__
    sprintf(buffer+strlen(buffer), "__SIZEOF_LONG_LONG__\t => %d\n", __SIZEOF_LONG_LONG__);
#endif

/* used in armcc */
#ifdef __sizeof_ptr
    sprintf(buffer+strlen(buffer), "__sizeof_ptr  \t => %d\n", __sizeof_ptr);
#endif
#ifdef __SIZEOF_POINTER__
    sprintf(buffer+strlen(buffer), "__SIZEOF_POINTER__\t => %d\n", __SIZEOF_POINTER__);
#endif

#ifdef __SIZEOF_FLOAT__
    sprintf(buffer+strlen(buffer), "__SIZEOF_FLOAT__ \t => %d\n", __SIZEOF_FLOAT__);
#endif
#ifdef __SIZEOF_DOUBLE__
    sprintf(buffer+strlen(buffer), "__SIZEOF_DOUBLE__\t => %d\n", __SIZEOF_DOUBLE__);
#endif
#ifdef __SIZEOF_LONG_DOUBLE__
    sprintf(buffer+strlen(buffer), "__SIZEOF_LONG_DOUBLE__\t => %d\n", __SIZEOF_LONG_DOUBLE__);
#endif
#ifdef __SIZEOF_SIZE_T__
    sprintf(buffer+strlen(buffer), "__SIZEOF_SIZE_T__\t => %d\n", __SIZEOF_SIZE_T__);
#endif
#ifdef __SIZEOF_PTRDIFF_T__
    sprintf(buffer+strlen(buffer), "__SIZEOF_PTRDIFF_T__\t => %d\n", __SIZEOF_PTRDIFF_T__);
#endif

/* ####################### */
/* maximun number of bits  */
#ifdef _INTEGRAL_MAX_BITS
    sprintf(buffer+strlen(buffer), "_INTEGRAL_MAX_BITS\t => %d\n", _INTEGRAL_MAX_BITS);
#endif

#ifdef HOST_BITS_PER_WIDEST_INT
    sprintf(buffer+strlen(buffer), "HOST_BITS_PER_WIDEST_INT\t => %d\n", HOST_BITS_PER_WIDEST_INT);
#endif


/* used by DMC */
#ifdef __INTSIZE
    sprintf(buffer+strlen(buffer), "__INTSIZE\t\t => %d\n", __INTSIZE);
#endif
#ifdef _WORDSIZE
    sprintf(buffer+strlen(buffer), "_WORDSIZE\t\t => %d\n", _WORDSIZE);
#endif
/* used by glibc */
#ifdef __WORDSIZE
    sprintf(buffer+strlen(buffer), "__WORDSIZE\t\t => %d\n", __WORDSIZE);
#endif


#ifdef CHAR_BIT
    sprintf(buffer+strlen(buffer), "CHAR_BIT\t\t => %d\n", CHAR_BIT);
#endif
#ifdef __CHAR_BIT__
    sprintf(buffer+strlen(buffer), "__CHAR_BIT__\t\t => %d\n", __CHAR_BIT__);
#endif

#ifdef CHAR16_BIT
    sprintf(buffer+strlen(buffer), "CHAR16_BIT\t\t => %d\n", CHAR16_BIT);
#endif
#ifdef __CHAR16_BIT__
    sprintf(buffer+strlen(buffer), "__CHAR16_BIT__\t\t => %d\n", __CHAR16_BIT__);
#endif
#ifdef CHAR32_BIT
    sprintf(buffer+strlen(buffer), "CHAR32_BIT\t\t => %d\n", CHAR32_BIT);
#endif
#ifdef __CHAR32_BIT__
    sprintf(buffer+strlen(buffer), "__CHAR32_BIT__\t\t => %d\n", __CHAR32_BIT__);
#endif


#ifdef __BITS_PER_LONG
    sprintf(buffer+strlen(buffer), "__BITS_PER_LONG\t\t => %d\n", __BITS_PER_LONG);
#endif

#ifdef WORD_BIT
    sprintf(buffer+strlen(buffer), "WORD_BIT\t\t => %d\n", WORD_BIT);
#endif
#ifdef __WORD_BIT__
    sprintf(buffer+strlen(buffer), "__WORD_BIT__\t\t => %d\n", __WORD_BIT__);
#endif


#ifdef INT_BIT
    sprintf(buffer+strlen(buffer), "INT_BIT\t\t => %d\n", INT_BIT);
#endif

#ifdef LONG_BIT
    sprintf(buffer+strlen(buffer), "LONG_BIT\t\t => %d\n", LONG_BIT);
#endif

/* width */
#ifdef BOOL_WIDTH
    sprintf(buffer+strlen(buffer), "BOOL_WIDTH\t\t => %d\n", BOOL_WIDTH);
#endif
#ifdef CHAR_WIDTH
    sprintf(buffer+strlen(buffer), "CHAR_WIDTH\t\t => %d\n", CHAR_WIDTH);
#endif
#ifdef __CHAR_WIDTH__
    sprintf(buffer+strlen(buffer), "__CHAR_WIDTH__\t\t => %d\n", __CHAR_WIDTH__);
#endif
#ifdef CHAR16_WIDTH
    sprintf(buffer+strlen(buffer), "CHAR16_WIDTH\t\t => %d\n", CHAR16_WIDTH);
#endif
#ifdef __CHAR16_WIDTH__
    sprintf(buffer+strlen(buffer), "__CHAR16_WIDTH__\t\t => %d\n", __CHAR16_WIDTH__);
#endif
#ifdef CHAR32_WIDTH
    sprintf(buffer+strlen(buffer), "CHAR32_WIDTH\t\t => %d\n", CHAR32_WIDTH);
#endif
#ifdef __CHAR32_WIDTH__
    sprintf(buffer+strlen(buffer), "__CHAR32_WIDTH__\t\t => %d\n", __CHAR32_WIDTH__);
#endif

#ifdef SCHAR_WIDTH
    sprintf(buffer+strlen(buffer), "SCHAR_WIDTH\t\t => %d\n", SCHAR_WIDTH);
#endif
#ifdef __SCHAR_WIDTH__
    sprintf(buffer+strlen(buffer), "__SCHAR_WIDTH__\t\t => %d\n", __SCHAR_WIDTH__);
#endif
#ifdef UCHAR_WIDTH
    sprintf(buffer+strlen(buffer), "UCHAR_WIDTH\t\t => %d\n", UCHAR_WIDTH);
#endif
#ifdef __UCHAR_WIDTH__
    sprintf(buffer+strlen(buffer), "__UCHAR_WIDTH__\t\t => %d\n", __UCHAR_WIDTH__);
#endif
#ifdef SHRT_WIDTH
    sprintf(buffer+strlen(buffer), "SHRT_WIDTH\t\t => %d\n", SHRT_WIDTH);
#endif
#ifdef __SHRT_WIDTH__
    sprintf(buffer+strlen(buffer), "__SHRT_WIDTH__\t\t => %d\n", __SHRT_WIDTH__);
#endif
#ifdef WCHAR_WIDTH
    sprintf(buffer+strlen(buffer), "WCHAR_WIDTH\t\t => %d\n", WCHAR_WIDTH);
#endif
#ifdef __WCHAR_WIDTH__
    sprintf(buffer+strlen(buffer), "__WCHAR_WIDTH__\t\t => %d\n", __WCHAR_WIDTH__);
#endif

#ifdef INT_WIDTH
    sprintf(buffer+strlen(buffer), "INT_WIDTH\t\t => %d\n", INT_WIDTH);
#endif
#ifdef __INT_WIDTH__
    sprintf(buffer+strlen(buffer), "__INT_WIDTH__\t\t => %d\n", __INT_WIDTH__);
#endif

#ifdef UINT_WIDTH
    sprintf(buffer+strlen(buffer), "UINT_WIDTH\t\t => %d\n", UINT_WIDTH);
#endif
#ifdef __UINT_WIDTH__
    sprintf(buffer+strlen(buffer), "__UINT_WIDTH__\t\t => %d\n", __UINT_WIDTH__);
#endif
#ifdef WINT_WIDTH
    sprintf(buffer+strlen(buffer), "WINT_WIDTH\t\t => %d\n", WINT_WIDTH);
#endif
#ifdef __WINT_WIDTH__
    sprintf(buffer+strlen(buffer), "__WINT_WIDTH__\t\t => %d\n", __WINT_WIDTH__);
#endif

#ifdef LONG_WIDTH
    sprintf(buffer+strlen(buffer), "LONG_WIDTH\t\t => %d\n", LONG_WIDTH);
#endif

#ifdef __LONG_WIDTH__
    sprintf(buffer+strlen(buffer), "__LONG_WIDTH__\t\t => %d\n", __LONG_WIDTH__);
#endif

#ifdef ULONG_WIDTH
    sprintf(buffer+strlen(buffer), "ULONG_WIDTH\t\t => %d\n", ULONG_WIDTH);
#endif
#ifdef __ULONG_WIDTH__
    sprintf(buffer+strlen(buffer), "__ULONG_WIDTH__\t\t => %d\n", __ULONG_WIDTH__);
#endif

#ifdef LLONG_WIDTH
    sprintf(buffer+strlen(buffer), "LLONG_WIDTH\t\t => %d\n", LLONG_WIDTH);
#endif
#ifdef __LONG_LONG_WIDTH__
    sprintf(buffer+strlen(buffer), "__LONG_LONG_WIDTH__\t => %d\n", __LONG_LONG_WIDTH__);
#endif

#ifdef ULLONG_WIDTH
    sprintf(buffer+strlen(buffer), "ULLONG_WIDTH\t\t => %d\n", ULLONG_WIDTH);
#endif


#ifdef SIZE_WIDTH
    sprintf(buffer+strlen(buffer), "SIZE_WIDTH\t\t => %d\n", SIZE_WIDTH);
#endif
#ifdef __SIZE_WIDTH__
    sprintf(buffer+strlen(buffer), "__SIZE_WIDTH__\t\t => %d\n", __SIZE_WIDTH__);
#endif
#ifdef __INTMAX_WIDTH__
    sprintf(buffer+strlen(buffer), "__INTMAX_WIDTH__\t => %d\n", __INTMAX_WIDTH__);
#endif

#ifdef __INTPTR_WIDTH__
    sprintf(buffer+strlen(buffer), "__INTPTR_WIDTH__\t => %d\n", __INTPTR_WIDTH__);
#endif

#ifdef __PTRDIFF_WIDTH__
    sprintf(buffer+strlen(buffer), "__PTRDIFF_WIDTH__\t => %d\n", __PTRDIFF_WIDTH__);
#endif


/* ############### */
/* supported types */

/* c11 */
#ifdef __alignas_is_defined
    if ( (__alignas_is_defined + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__alignas_is_defined\t => %d\n", __alignas_is_defined + 0);
    } else {
        strcat(buffer, "__alignas_is_defined\n");
    }
#endif

/* c11 */
#ifdef __alignof_is_defined
    if ( (__alignof_is_defined + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__alignof_is_defined\t => %d\n", __alignof_is_defined + 0);
    } else {
        strcat(buffer, "__alignof_is_defined\n");
    }
#endif


#ifdef _BOOL_DEFINED
    if ( (_BOOL_DEFINED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BOOL_DEFINED \t\t => %d\n", _BOOL_DEFINED + 0);
    } else {
        strcat(buffer, "_SOFT_FLOAT\n");
        strcat(buffer, "_BOOL_DEFINED\n");
    }
#endif

/* c99 */
#ifdef __bool_true_false_are_defined
    if ( (__bool_true_false_are_defined + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__bool_true_false_are_defined => %d\n", __bool_true_false_are_defined + 0);
    } else {
        strcat(buffer, "__bool_true_false_are_defined\n");
    }
#endif


#ifdef _WCHAR_T_DEFINED
    if ( (_WCHAR_T_DEFINED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WCHAR_T_DEFINED \t => %d\n", _WCHAR_T_DEFINED + 0);
    } else {
        strcat(buffer, "_WCHAR_T_DEFINED\n");
    }
#endif

#ifdef _NATIVE_WCHAR_T_DEFINED
    if ( (_NATIVE_WCHAR_T_DEFINED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NATIVE_WCHAR_T_DEFINED \t => %d\n", _NATIVE_WCHAR_T_DEFINED + 0);
    } else {
        strcat(buffer, "_NATIVE_WCHAR_T_DEFINED\n");
    }
#endif

#ifdef _LONG_LONG
    if ( (_LONG_LONG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LONG_LONG \t\t => %d\n", _LONG_LONG + 0);
    } else {
        strcat(buffer, "__LONGDOUBLE64\n");
        strcat(buffer, "_LONG_LONG\n");
    }
#endif

#ifdef __LONG_LONG
    if ( (__LONG_LONG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LONG_LONG \t\t => %d\n", __LONG_LONG + 0);
    } else {
        strcat(buffer, "__LONG_LONG\n");
    }
#endif

/*  alias for _LONG_LONG */
#ifdef __LL
    if ( (__LL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LL \t\t\t => %d\n", __LL + 0);
    } else {
        strcat(buffer, "__LL\n");
    }
#endif

#ifdef __IBMCPP_C99_LONG_LONG
    if ( (__IBMCPP_C99_LONG_LONG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__IBMCPP_C99_LONG_LONG \t\t => %d\n", __IBMCPP_C99_LONG_LONG + 0);
    } else {
        strcat(buffer, "__IBMCPP_C99_LONG_LONG\n");
    }
#endif
#ifdef __NO_LONG_LONG
    if ( (__NO_LONG_LONG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NO_LONG_LONG \t\t => %d\n", __NO_LONG_LONG + 0);
    } else {
        strcat(buffer, "__NO_LONG_LONG\n");
    }
#endif
#ifdef __DARWIN_NO_LONG_LONG
    if ( (__DARWIN_NO_LONG_LONG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__DARWIN_NO_LONG_LONG \t\t => %d\n", __DARWIN_NO_LONG_LONG + 0);
    } else {
        strcat(buffer, "__DARWIN_NO_LONG_LONG\n");
    }
#endif

/* ################# */
/* c99 and c11 types */

#ifdef _Bool
    sprintf(buffer+strlen(buffer), "_Bool \t\t\t => size is %zd: %s\n",
            sizeof( _Bool ), __my_stringify( _Bool ));
#endif

#ifdef bool
    sprintf(buffer+strlen(buffer), "bool \t\t\t => size is %zd: %s\n",
            sizeof( bool ), __my_stringify( bool ));
#endif

#ifdef true
    sprintf(buffer+strlen(buffer), "true \t\t\t => size is %zd: %s\n",
            sizeof( true ), __my_stringify( true ));
#endif
#ifdef false
    sprintf(buffer+strlen(buffer), "false \t\t\t => size is %zd: %s\n",
            sizeof( false ), __my_stringify( false ));
#endif


#ifdef INFINITY
    sprintf(buffer+strlen(buffer), "INFINITY \t\t => size is %zd: %s\n",
            sizeof( INFINITY ), __my_stringify( INFINITY ));
#endif

#ifdef NAN
    sprintf(buffer+strlen(buffer), "NAN \t\t\t => size is %zd: %s\n",
            sizeof( NAN ), __my_stringify( NAN ));
#endif

#ifdef math_errhandling
    sprintf(buffer+strlen(buffer), "math_errhandling \t => size is %zd: %s\n",
            sizeof( math_errhandling ), __my_stringify( math_errhandling ));
#endif
#ifdef MATH_ERRNO
    sprintf(buffer+strlen(buffer), "MATH_ERRNO \t\t => size is %zd: %s\n",
            sizeof( MATH_ERRNO ), __my_stringify( MATH_ERRNO ));
#endif
#ifdef MATH_ERREXCEPT
    sprintf(buffer+strlen(buffer), "MATH_ERREXCEPT \t\t => size is %zd: %s\n",
            sizeof( MATH_ERREXCEPT ), __my_stringify( MATH_ERREXCEPT ));
#endif


/* ################# */
/* portability types */

#ifdef __PTRDIFF_TYPE__
    sprintf(buffer+strlen(buffer), "__PTRDIFF_TYPE__ \t => size is %zd: %s\n",
            sizeof( __PTRDIFF_TYPE__ ), __my_stringify( __PTRDIFF_TYPE__ ));
#endif

#ifdef ptrdiff_t
    sprintf(buffer+strlen(buffer), "ptrdiff_t \t => size is %zd: %s\n",
            sizeof( ptrdiff_t ), __my_stringify( ptrdiff_t ));
#endif


#ifdef intptr_t
    sprintf(buffer+strlen(buffer), "intptr_t \t => size is %zd: %s\n",
            sizeof( intptr_t ), __my_stringify( intptr_t ));
#endif
#ifdef uintptr_t
    sprintf(buffer+strlen(buffer), "uintptr_t \t => size is %zd: %s\n",
            sizeof( uintptr_t ), __my_stringify( uintptr_t ));
#endif


#ifdef intmax_t
    sprintf(buffer+strlen(buffer), "intmax_t \t => size is %zd: %s\n",
            sizeof( intmax_t ), __my_stringify( intmax_t ));
#endif
#ifdef uintmax_t
    sprintf(buffer+strlen(buffer), "uintmax_t \t => size is %zd: %s\n",
            sizeof( uintmax_t ), __my_stringify( uintmax_t ));
#endif


#ifdef __intmax_t
    sprintf(buffer+strlen(buffer), "__intmax_t \t => size is %zd: %s\n",
            sizeof( __intmax_t ), __my_stringify( __intmax_t ));
#endif
#ifdef __uintmax_t
    sprintf(buffer+strlen(buffer), "__uintmax_t \t => size is %zd: %s\n",
            sizeof( __uintmax_t ), __my_stringify( __uintmax_t ));
#endif


/* C11 */
#ifdef max_align_t
    sprintf(buffer+strlen(buffer), "max_align_t \t => size is %zd: %s\n",
            sizeof( max_align_t ), __my_stringify( max_align_t ));
#endif


#ifdef __SIZE_TYPE__
     sprintf(buffer+strlen(buffer), "__SIZE_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __SIZE_TYPE__ ), __my_stringify( __SIZE_TYPE__ ) );
#endif

#ifdef __INTMAX_TYPE__
    sprintf(buffer+strlen(buffer), "__INTMAX_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __INTMAX_TYPE__ ), __my_stringify( __INTMAX_TYPE__ ) );
#endif

#ifdef __UINTMAX_TYPE__
    sprintf(buffer+strlen(buffer), "__UINTMAX_TYPE__ \t => size is %zd: %s\n",
            sizeof( __UINTMAX_TYPE__ ), __my_stringify( __UINTMAX_TYPE__ ) );
#endif

#ifdef __INTPTR_TYPE__
    sprintf(buffer+strlen(buffer), "__INTPTR_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __INTPTR_TYPE__ ), __my_stringify( __INTPTR_TYPE__ ) );
#endif
#ifdef __UINTPTR_TYPE__
    sprintf(buffer+strlen(buffer), "__UINTPTR_TYPE__ \t => size is %zd: %s\n",
            sizeof( __UINTPTR_TYPE__ ), __my_stringify( __UINTPTR_TYPE__ ) );
#endif


#ifdef __CHAR_TYPE__
     sprintf(buffer+strlen(buffer), "__CHAR_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __CHAR_TYPE__ ), __my_stringify( __CHAR_TYPE__ ) );
#endif
#ifdef __CHAR8_TYPE__
     sprintf(buffer+strlen(buffer), "__CHAR8_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __CHAR8_TYPE__ ), __my_stringify( __CHAR8_TYPE__ ) );
#endif

#ifdef __CHAR16_TYPE__
    sprintf(buffer+strlen(buffer), "__CHAR16_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __CHAR16_TYPE__ ), __my_stringify( __CHAR16_TYPE__ ) );
#endif
#ifdef char16_t
    sprintf(buffer+strlen(buffer), "char16_t\t\t => size is %zd: %s\n",
            sizeof( char16_t ), __my_stringify( char16_t ) );
#endif

#ifdef __CHAR32_TYPE__
    sprintf(buffer+strlen(buffer), "__CHAR32_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __CHAR32_TYPE__ ), __my_stringify( __CHAR32_TYPE__ ) );
#endif
#ifdef char32_t
    sprintf(buffer+strlen(buffer), "char32_t\t\t => size is %zd: %s\n",
            sizeof( char32_t ), __my_stringify( char32_t ) );
#endif


#ifdef __INT8_TYPE__
    sprintf(buffer+strlen(buffer), "__INT8_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __INT8_TYPE__ ), __my_stringify( __INT8_TYPE__ ) );
#endif
#ifdef __INT16_TYPE__
    sprintf(buffer+strlen(buffer), "__INT16_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __INT16_TYPE__ ), __my_stringify( __INT16_TYPE__ ) );
#endif
#ifdef __INT32_TYPE__
    sprintf(buffer+strlen(buffer), "__INT32_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __INT32_TYPE__ ), __my_stringify( __INT32_TYPE__ ) );
#endif
#ifdef __INT64_TYPE__
    sprintf(buffer+strlen(buffer), "__INT64_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __INT64_TYPE__ ), __my_stringify( __INT64_TYPE__ ) );
#endif


#ifdef __int16
    sprintf(buffer+strlen(buffer), "__int16\t\t\t => size is %zd: %s\n",
            sizeof( __int16 ), __my_stringify( __int16 ) );
#endif
#ifdef __int32
    sprintf(buffer+strlen(buffer), "__int32\t\t\t => size is %zd: %s\n",
            sizeof( __int32 ), __my_stringify( __int32 ) );
#endif
#ifdef __int64
    sprintf(buffer+strlen(buffer), "__int64\t\t\t => size is %zd: %s\n",
            sizeof( __int64 ), __my_stringify( __int64 ) );
#endif


#ifdef __UINT8_TYPE__
    sprintf(buffer+strlen(buffer), "__UINT8_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __UINT8_TYPE__ ), __my_stringify( __UINT8_TYPE__ ) );
#endif
#ifdef __UINT16_TYPE__
    sprintf(buffer+strlen(buffer), "__UINT16_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __UINT16_TYPE__ ), __my_stringify( __UINT16_TYPE__ ) );
#endif
#ifdef __UINT32_TYPE__
    sprintf(buffer+strlen(buffer), "__UINT32_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __UINT32_TYPE__ ), __my_stringify( __UINT32_TYPE__ ) );
#endif
#ifdef __UINT64_TYPE__
    sprintf(buffer+strlen(buffer), "__UINT64_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __UINT64_TYPE__ ), __my_stringify( __UINT64_TYPE__ ) );
#endif
#ifdef __INT_LEAST8_TYPE__
    sprintf(buffer+strlen(buffer), "__INT_LEAST8_TYPE__\t => size is %zd: %s\n",
            sizeof( __INT_LEAST8_TYPE__ ), __my_stringify( __INT_LEAST8_TYPE__ ) );
#endif
#ifdef __INT_LEAST16_TYPE__
    sprintf(buffer+strlen(buffer), "__INT_LEAST16_TYPE__\t => size is %zd: %s\n",
            sizeof( __INT_LEAST16_TYPE__ ), __my_stringify( __INT_LEAST16_TYPE__ ) );
#endif
#ifdef __INT_LEAST32_TYPE__
    sprintf(buffer+strlen(buffer), "__INT_LEAST32_TYPE__\t => size is %zd: %s\n",
            sizeof( __INT_LEAST32_TYPE__ ), __my_stringify( __INT_LEAST32_TYPE__ ) );
#endif
#ifdef __INT_LEAST64_TYPE__
    sprintf(buffer+strlen(buffer), "__INT_LEAST64_TYPE__\t => size is %zd: %s\n",
            sizeof( __INT_LEAST64_TYPE__ ), __my_stringify( __INT_LEAST64_TYPE__ ) );
#endif

#ifdef __UINT_LEAST8_TYPE__
    sprintf(buffer+strlen(buffer), "__UINT_LEAST8_TYPE__\t => size is %zd: %s\n",
            sizeof( __UINT_LEAST8_TYPE__ ), __my_stringify( __UINT_LEAST8_TYPE__ ) );
#endif

#ifdef __UINT_LEAST16_TYPE__
    sprintf(buffer+strlen(buffer), "__UINT_LEAST16_TYPE__\t => size is %zd: %s\n",
            sizeof( __UINT_LEAST16_TYPE__ ), __my_stringify( __UINT_LEAST16_TYPE__ ) );
#endif

#ifdef __UINT_LEAST32_TYPE__
    sprintf(buffer+strlen(buffer), "__UINT_LEAST32_TYPE__\t => size is %zd: %s\n",
            sizeof( __UINT_LEAST32_TYPE__ ), __my_stringify( __UINT_LEAST32_TYPE__ ) );
#endif

#ifdef __UINT_LEAST64_TYPE__
    sprintf(buffer+strlen(buffer), "__UINT_LEAST64_TYPE__\t => size is %zd: %s\n",
            sizeof( __UINT_LEAST64_TYPE__ ), __my_stringify( __UINT_LEAST64_TYPE__ ) );
#endif

#ifdef __INT_FAST8_TYPE__
    sprintf(buffer+strlen(buffer), "__INT_FAST8_TYPE__\t => size is %zd: %s\n",
            sizeof( __INT_FAST8_TYPE__ ), __my_stringify( __INT_FAST8_TYPE__ ) );
#endif

#ifdef __INT_FAST16_TYPE__
    sprintf(buffer+strlen(buffer), "__INT_FAST16_TYPE__\t => size is %zd: %s\n",
            sizeof( __INT_FAST16_TYPE__ ), __my_stringify( __INT_FAST16_TYPE__ ) );
#endif

#ifdef __INT_FAST32_TYPE__
    sprintf(buffer+strlen(buffer), "__INT_FAST32_TYPE__\t => size is %zd: %s\n",
            sizeof( __INT_FAST32_TYPE__ ), __my_stringify( __INT_FAST32_TYPE__ ) );
#endif

#ifdef __INT_FAST64_TYPE__
    sprintf(buffer+strlen(buffer), "__INT_FAST64_TYPE__\t => size is %zd: %s\n",
            sizeof( __INT_FAST64_TYPE__ ), __my_stringify( __INT_FAST64_TYPE__ ) );
#endif

#ifdef __UINT_FAST8_TYPE__
    sprintf(buffer+strlen(buffer), "__UINT_FAST8_TYPE__\t => size is %zd: %s\n",
            sizeof( __UINT_FAST8_TYPE__ ), __my_stringify( __UINT_FAST8_TYPE__ ) );
#endif

#ifdef __UINT_FAST16_TYPE__
    sprintf(buffer+strlen(buffer), "__UINT_FAST16_TYPE__\t => size is %zd: %s\n",
            sizeof( __UINT_FAST16_TYPE__ ), __my_stringify( __UINT_FAST16_TYPE__ ) );
#endif

#ifdef __UINT_FAST32_TYPE__
    sprintf(buffer+strlen(buffer), "__UINT_FAST32_TYPE__\t => size is %zd: %s\n",
            sizeof( __UINT_FAST32_TYPE__ ), __my_stringify( __UINT_FAST32_TYPE__ ) );
#endif

#ifdef __UINT_FAST64_TYPE__
    sprintf(buffer+strlen(buffer), "__UINT_FAST64_TYPE__\t => size is %zd: %s\n",
            sizeof( __UINT_FAST64_TYPE__ ), __my_stringify( __UINT_FAST64_TYPE__ ) );
#endif


#ifdef HOST_WIDEST_INT
    sprintf(buffer+strlen(buffer), "HOST_WIDEST_INT  \t => size is %zd: %s\n",
            sizeof( HOST_WIDEST_INT ), __my_stringify( HOST_WIDEST_INT ) );
#endif
#ifdef HOST_WIDEST_LONG
    sprintf(buffer+strlen(buffer), "HOST_WIDEST_LONG  \t => size is %zd: %s\n",
            sizeof( HOST_WIDEST_LONG ), __my_stringify( HOST_WIDEST_LONG ) );
#endif


#ifdef __SIG_ATOMIC_TYPE__
    sprintf(buffer+strlen(buffer), "__SIG_ATOMIC_TYPE__\t => size is %zd: %s\n",
            sizeof( __SIG_ATOMIC_TYPE__ ), __my_stringify( __SIG_ATOMIC_TYPE__ ) );
#endif

#ifdef __WCHAR_TYPE__
     sprintf(buffer+strlen(buffer), "__WCHAR_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __WCHAR_TYPE__ ), __my_stringify( __WCHAR_TYPE__ ) );
#endif


#ifdef __WINT_TYPE__
    sprintf(buffer+strlen(buffer), "__WINT_TYPE__\t\t => size is %zd: %s\n",
            sizeof( __WINT_TYPE__ ), __my_stringify( __WINT_TYPE__ ) );
#endif


/* time_t width is nor always 32bit */
#ifdef __TIME_T_TYPE
    sprintf(buffer+strlen(buffer), "__TIME_T_TYPE\t\t => size is %zd: %s\n",
            sizeof( __TIME_T_TYPE ), __my_stringify( __TIME_T_TYPE ) );
#endif

/* time_t might be 64bit width */
#ifdef __TIME64_T_TYPE
    sprintf(buffer+strlen(buffer), "__TIME64_T_TYPE\t\t => size is %zd: %s\n",
            sizeof( __TIME64_T_TYPE ), __my_stringify( __TIME64_T_TYPE ) );
#endif



/* other */
#ifdef __REGISTER_PREFIX__
    sprintf(buffer+strlen(buffer), "__REGISTER_PREFIX__\t => '%s'\n",
            __my_stringify( __REGISTER_PREFIX__ ) );

#endif

#ifdef __USER_LABEL_PREFIX__
    sprintf(buffer+strlen(buffer), "__USER_LABEL_PREFIX__\t => '%s'\n",
            __my_stringify( __USER_LABEL_PREFIX__ ) );
#endif

/* #################### */
/* supported math types */


#ifdef __FAST_MATH__
    if ( (__FAST_MATH__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FAST_MATH__\t\t => %d\n", __FAST_MATH__ + 0);
    } else {
        strcat(buffer, "__FAST_MATH__\n");
    }
#endif

/* used by DMC */
#ifdef __FPCE__
    if ( (__FPCE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FPCE__\t\t => %d\n", __FPCE__ + 0);
    } else {
        strcat(buffer, "__FPCE__\n");
    }
#endif

/* used by DMC */
#ifdef __FPCE_IEEE__
    if ( (__FPCE_IEEE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FPCE_IEEE__\t\t => %d\n", __FPCE_IEEE__ + 0);
    } else {
        strcat(buffer, "__FPCE_IEEE__\n");
    }
#endif

/* documented by DMC. might be a typo. 2 underscore in the name are unusual */
#ifdef __FPCE__IEEE__
    if ( (__FPCE__IEEE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FPCE__IEEE__\t\t => %d\n", __FPCE__IEEE__ + 0);
    } else {
        strcat(buffer, "__FPCE__IEEE__\n");
    }
#endif


/* ARM CC with EDG frontend */
#ifdef __FP_FAST
    if ( (__FP_FAST + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FP_FAST\t\t => %d\n", __FP_FAST + 0);
    } else {
        strcat(buffer, "__FP_FAST\n");
    }
#endif

/* ARM CC with EDG frontend */
#ifdef __FP_IEEE
    if ( (__FP_IEEE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FP_IEEE\t\t => %d\n", __FP_IEEE + 0);
    } else {
        strcat(buffer, "__FP_IEEE\n");
    }
#endif


#ifdef _HARD_FLOAT
    if ( (_HARD_FLOAT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_HARD_FLOAT\t\t\t => %d\n", _HARD_FLOAT + 0);
    } else {
        strcat(buffer, "_HARD_FLOAT\n");
    }
#endif


#ifdef __INLINE_8087
    if ( (__INLINE_8087 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__INLINE_8087\t\t => %d\n", __INLINE_8087 + 0);
    } else {
        strcat(buffer, "__INLINE_8087\n");
    }
#endif


#ifdef __LONGDOUBLE64
    if ( (__LONGDOUBLE64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LONGDOUBLE64\t\t\t => %d\n", __LONGDOUBLE64 + 0);
    } else {
        strcat(buffer, "__LONGDOUBLE64\n");
    }
#endif
#ifdef __LONGDOUBLE80
    if ( (__LONGDOUBLE80 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LONGDOUBLE80\t\t\t => %d\n", __LONGDOUBLE80 + 0);
    } else {
        strcat(buffer, "__LONGDOUBLE80\n");
    }
#endif
#ifdef __LONGDOUBLE128
    if ( (__LONGDOUBLE128 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LONGDOUBLE128\t\t\t => %d\n", __LONGDOUBLE128 + 0);
    } else {
        strcat(buffer, "__LONGDOUBLE128\n");
    }
#endif


#ifdef __MATH__
    if ( (__MATH__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MATH__\t\t\t => %d\n", __MATH__ + 0);
    } else {
        strcat(buffer, "__MATH__\n");
    }
#endif


#ifdef __NO_FPRS__
    if ( (__NO_FPRS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NO_FPRS__\t\t\t => %d\n", __NO_FPRS__ + 0);
    } else {
        strcat(buffer, "__NO_FPRS__\n");
    }
#endif


#ifdef _SOFT_FLOAT
    if ( (_SOFT_FLOAT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SOFT_FLOAT\t\t\t => %d\n", _SOFT_FLOAT + 0);
    } else {
        strcat(buffer, "_SOFT_FLOAT\n");
    }
#endif

/* used by ARM CC with EDG frontend */
#ifdef __SOFTFP__
    if ( (__SOFTFP__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SOFTFP__\t\t\t => %d\n", __SOFTFP__ + 0);
    } else {
        strcat(buffer, "__SOFTFP__\n");
    }
#endif


/* more math limits. builtins or from float.h */
#ifdef DECIMAL_BITS
    sprintf(buffer+strlen(buffer), "DECIMAL_BITS\t\t => %d\n", DECIMAL_BITS);
#endif
#ifdef DECIMAL_DIG
    sprintf(buffer+strlen(buffer), "DECIMAL_DIG\t\t => %d\n", DECIMAL_DIG);
#endif
#ifdef __DECIMAL_DIG__
    sprintf(buffer+strlen(buffer), "__DECIMAL_DIG__\t\t => %d\n", __DECIMAL_DIG__);
#endif


#ifdef __FLT_DECIMAL_DIG__
    sprintf(buffer+strlen(buffer), "__FLT_DECIMAL_DIG__\t => %d\n", __FLT_DECIMAL_DIG__);
#endif
#ifdef FLT_DIG
    sprintf(buffer+strlen(buffer), "FLT_DIG \t\t => %d\n", FLT_DIG);
#endif
#ifdef __FLT_DIG__
    sprintf(buffer+strlen(buffer), "__FLT_DIG__\t\t => %d\n", __FLT_DIG__);
#endif
#ifdef FLT_MANT_BITS
    sprintf(buffer+strlen(buffer), "FLT_MANT_BITS \t => %d\n", FLT_MANT_BITS);
#endif
#ifdef FLT_MANT_DIG
    sprintf(buffer+strlen(buffer), "FLT_MANT_DIG \t\t => %d\n", FLT_MANT_DIG);
#endif
#ifdef __FLT_MANT_DIG__
    sprintf(buffer+strlen(buffer), "__FLT_MANT_DIG__ \t => %d\n", __FLT_MANT_DIG__);
#endif




#ifdef __DBL_DECIMAL_DIG__
    sprintf(buffer+strlen(buffer), "__DBL_DECIMAL_DIG__\t => %d\n", __DBL_DECIMAL_DIG__);
#endif
#ifdef DBL_DIG
    sprintf(buffer+strlen(buffer), "DBL_DIG \t\t => %d\n", DBL_DIG);
#endif
#ifdef __DBL_DIG__
    sprintf(buffer+strlen(buffer), "__DBL_DIG__\t\t => %d\n", __DBL_DIG__);
#endif

#ifdef DBL_MANT_BITS
    sprintf(buffer+strlen(buffer), "DBL_MANT_BITS \t => %d\n", DBL_MANT_BITS);
#endif
#ifdef DBL_MANT_DIG
    sprintf(buffer+strlen(buffer), "DBL_MANT_DIG \t\t => %d\n", DBL_MANT_DIG);
#endif
#ifdef __DBL_MANT_DIG__
    sprintf(buffer+strlen(buffer), "__DBL_MANT_DIG__ \t => %d\n", __DBL_MANT_DIG__);
#endif

#ifdef __LDBL_DECIMAL_DIG__
    sprintf(buffer+strlen(buffer), "__LDBL_DECIMAL_DIG__\t => %d\n", __LDBL_DECIMAL_DIG__);
#endif
#ifdef LDBL_DIG
    sprintf(buffer+strlen(buffer), "LDBL_DIG\t\t => %d\n", LDBL_DIG);
#endif
#ifdef __LDBL_DIG__
    sprintf(buffer+strlen(buffer), "__LDBL_DIG__\t\t => %d\n", __LDBL_DIG__);
#endif
#ifdef LDBL_MANT_BITS
    sprintf(buffer+strlen(buffer), "LDBL_MANT_BITS \t => %d\n", LDBL_MANT_BITS);
#endif
#ifdef LDBL_MANT_DIG
    sprintf(buffer+strlen(buffer), "LDBL_MANT_DIG \t\t => %d\n", LDBL_MANT_DIG);
#endif
#ifdef __LDBL_MANT_DIG__
    sprintf(buffer+strlen(buffer), "__LDBL_MANT_DIG__ \t => %d\n", __LDBL_MANT_DIG__);
#endif




/* additional float sizes */
#ifdef __FLT16_DECIMAL_DIG__
    sprintf(buffer+strlen(buffer), "__FLT16_DECIMAL_DIG__\t => %d\n", __FLT16_DECIMAL_DIG__);
#endif
#ifdef __FLT16_DIG__
    sprintf(buffer+strlen(buffer), "__FLT16_DIG__\t\t => %d\n", __FLT16_DIG__);
#endif
#ifdef __FLT16_MANT_DIG__
    sprintf(buffer+strlen(buffer), "__FLT16_MANT_DIG__\t => %d\n", __FLT16_MANT_DIG__);
#endif

#ifdef __FLT32_DECIMAL_DIG__
    sprintf(buffer+strlen(buffer), "__FLT32_DECIMAL_DIG__\t => %d\n", __FLT32_DECIMAL_DIG__);
#endif
#ifdef __FLT32_DIG__
    sprintf(buffer+strlen(buffer), "__FLT32_DIG__\t\t => %d\n", __FLT32_DIG__);
#endif
#ifdef __FLT32_MANT_DIG__
    sprintf(buffer+strlen(buffer), "__FLT32_MANT_DIG__\t => %d\n", __FLT32_MANT_DIG__);
#endif


#ifdef __FLT32X_DECIMAL_DIG__
    sprintf(buffer+strlen(buffer), "__FLT32X_DECIMAL_DIG__\t => %d\n", __FLT32X_DECIMAL_DIG__);
#endif
#ifdef __FLT32X_DIG__
    sprintf(buffer+strlen(buffer), "__FLT32X_DIG__\t\t => %d\n", __FLT32X_DIG__);
#endif
#ifdef __FLT32X_MANT_DIG__
    sprintf(buffer+strlen(buffer), "__FLT32X_MANT_DIG__\t => %d\n", __FLT32X_MANT_DIG__);
#endif


#ifdef __FLT64_DECIMAL_DIG__
    sprintf(buffer+strlen(buffer), "__FLT64_DECIMAL_DIG__\t => %d\n", __FLT64_DECIMAL_DIG__);
#endif
#ifdef __FLT64_DIG__
    sprintf(buffer+strlen(buffer), "__FLT64_DIG__ \t\t => %d\n", __FLT64_DIG__);
#endif
#ifdef __FLT64_MANT_DIG__
    sprintf(buffer+strlen(buffer), "__FLT64_MANT_DIG__\t => %d\n", __FLT64_MANT_DIG__);
#endif

#ifdef __FLT64X_DECIMAL_DIG__
    sprintf(buffer+strlen(buffer), "__FLT64X_DECIMAL_DIG__\t => %d\n", __FLT64X_DECIMAL_DIG__);
#endif
#ifdef __FLT64X_DIG__
    sprintf(buffer+strlen(buffer), "__FLT64X_DIG__\t\t => %d\n", __FLT64X_DIG__);
#endif
#ifdef __FLT64X_MANT_DIG__
    sprintf(buffer+strlen(buffer), "__FLT64X_MANT_DIG__\t => %d\n", __FLT64X_MANT_DIG__);
#endif


#ifdef __FLT128_DECIMAL_DIG__
    sprintf(buffer+strlen(buffer), "__FLT128_DECIMAL_DIG__\t => %d\n", __FLT128_DECIMAL_DIG__);
#endif
#ifdef __FLT128_DIG__
    sprintf(buffer+strlen(buffer), "__FLT128_DIG__\t\t => %d\n", __FLT128_DIG__);
#endif
#ifdef __FLT128_MANT_DIG__
    sprintf(buffer+strlen(buffer), "__FLT128_MANT_DIG__\t => %d\n", __FLT128_MANT_DIG__);
#endif



/* ############# */
/* memory modell */
#ifdef TINY
    if ( (TINY + 1) > 1) {
        sprintf(buffer + strlen(buffer), "TINY\t\t\t => %d\n", TINY + 0);
    } else {
        strcat(buffer, "TINY\n");
    }
#endif

#ifdef _TINY
    if ( (_TINY + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TINY\t\t\t => %d\n", _TINY + 0);
    } else {
        strcat(buffer, "_TINY\n");
    }
#endif

#ifdef __TINY__
    if ( (__TINY__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TINY__\t\t => %d\n", __TINY__ + 0);
    } else {
        strcat(buffer, "__TINY__\n");
    }
#endif

/* small memory model */
#ifdef SMALL
    if ( (SMALL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "SMALL\t\t\t => %d\n", SMALL + 0);
    } else {
        strcat(buffer, "SMALL\n");
    }
#endif

#ifdef _SMALL
    if ( (_SMALL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SMALL\t\t\t => %d\n", _SMALL + 0);
    } else {
        strcat(buffer, "_SMALL\n");
    }
#endif

#ifdef __SMALL__
    if ( (__SMALL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__SMALL__\t\t => %d\n", __SMALL__ + 0);
    } else {
        strcat(buffer, "__SMALL__\n");
    }
#endif

/* medium memory model */
#ifdef _MEDIUM
    if ( (_MEDIUM + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MEDIUM\t\t => %d\n", _MEDIUM + 0);
    } else {
        strcat(buffer, "_MEDIUM\n");
    }
#endif
#ifdef __MEDIUM__
    if ( (__MEDIUM__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MEDIUM__\t\t => %d\n", __MEDIUM__ + 0);
    } else {
        strcat(buffer, "__MEDIUM__\n");
    }
#endif


/* compact memory model */
#ifdef __COMPACT__
    if ( (__COMPACT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__COMPACT__\t\t => %d\n", __COMPACT__ + 0);
    } else {
        strcat(buffer, "__COMPACT__\n");
    }
#endif

/* large memory model */
#ifdef __LARGE__
    if ( (__LARGE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LARGE__\t\t => %d\n", __LARGE__ + 0);
    } else {
        strcat(buffer, "__LARGE__\n");
    }
#endif

/* huge memory model */
#ifdef __huge
    if ( (__huge + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__huge\t\t => %d\n", __huge + 0);
    } else {
        strcat(buffer, "__huge\n");
    }
#endif
#ifdef __HUGE__
    if ( (__HUGE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__HUGE__\t\t => %d\n", __HUGE__ + 0);
    } else {
        strcat(buffer, "__HUGE__\n");
    }
#endif


#ifdef __FLAT__
    if ( (__FLAT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__FLAT__\t\t => %d\n", __FLAT__ + 0);
    } else {
        strcat(buffer, "__FLAT__\n");
    }
#endif

/* VCM memory model */
#ifdef __VCM__
    if ( (__VCM__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__VCM__\t\t => %d\n", __VCM__ + 0);
    } else {
        strcat(buffer, "__VCM__\n");
    }
#endif


/* ################### */
/* calling convention */

#ifdef _CALL_SYSV
    if ( (_CALL_SYSV + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CALL_SYSV \t => %d\n", _CALL_SYSV + 0);
    } else {
        strcat(buffer, "_CALL_SYSV\n");
    }
#endif

#ifdef cdecl
    strcat(buffer, "cdecl\n");
#endif
#ifdef _cdecl
    strcat(buffer, "_cdecl\n");
#endif
#ifdef __cdecl
    strcat(buffer, "__cdecl\n");
#endif


#ifdef fastcall
    strcat(buffer, "fastcall\n");
#endif
#ifdef _fastcall
    strcat(buffer, "_fastcall\n");
#endif
#ifdef __fastcall
    strcat(buffer, "__fastcall\n");
#endif

#ifdef fastcall2
    strcat(buffer, "fastcall2\n");
#endif
#ifdef _fastcall2
    strcat(buffer, "_fastcall2\n");
#endif
#ifdef __fastcall2
    strcat(buffer, "__fastcall2\n");
#endif


#ifdef pascal
    strcat(buffer, "pascal\n");
#endif
#ifdef _pascal
    strcat(buffer, "_pascal\n");
#endif
#ifdef __pascal
    strcat(buffer, "__pascal\n");
#endif


#ifdef stdcall
    strcat(buffer, "stdcall\n");
#endif
#ifdef _stdcall
    strcat(buffer, "_stdcall\n");
#endif
#ifdef __stdcall
    strcat(buffer, "__stdcall\n");
#endif

#ifdef _STDCALL_SUPPORTED
    if ( (_STDCALL_SUPPORTED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STDCALL_SUPPORTED\t => %d\n", _STDCALL_SUPPORTED + 0);
    } else {
        strcat(buffer, "_STDCALL_SUPPORTED\n");
    }
#endif


/* ################### */
/* libs */

#ifdef __NO_DEFAULT_LIBS__
    if ( (__NO_DEFAULT_LIBS__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__NO_DEFAULT_LIBS__\t\t => %d\n", __NO_DEFAULT_LIBS__ + 0);
    } else {
        strcat(buffer, "__NO_DEFAULT_LIBS__\n");
    }
#endif


/* ################### */
/* includes */

#ifdef __INCLUDE_LEVEL__
    if ( (__INCLUDE_LEVEL__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__INCLUDE_LEVEL__\t\t => %d\n", __INCLUDE_LEVEL__ + 0);
    } else {
        strcat(buffer, "__INCLUDE_LEVEL__\n");
    }
#endif

#ifdef _BSD_TYPES_DEFINED
    if ( (_BSD_TYPES_DEFINED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BSD_TYPES_DEFINED\t => %d\n", _BSD_TYPES_DEFINED + 0);
    } else {
        strcat(buffer, "_BSD_TYPES_DEFINED\n");
    }
#endif

#ifdef _BSDTYPES_DEFINED
    if ( (_BSDTYPES_DEFINED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BSDTYPES_DEFINED\t => %d\n", _BSDTYPES_DEFINED + 0);
    } else {
        strcat(buffer, "_BSDTYPES_DEFINED\n");
    }
#endif


/* ANSI C includes */
#ifdef _ASSERT_H
    if ( (_ASSERT_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ASSERT_H\t\t => %d\n", _ASSERT_H + 0);
    } else {
        strcat(buffer, "_ASSERT_H\n");
    }
#endif
#ifdef _CTYPE_H
    if ( (_CTYPE_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CTYPE_H\t\t => %d\n", _CTYPE_H + 0);
    } else {
        strcat(buffer, "_CTYPE_H\n");
    }
#endif
#ifdef _ERRNO_H
    if ( (_ERRNO_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ERRNO_H\t\t => %d\n", _ERRNO_H + 0);
    } else {
        strcat(buffer, "_ERRNO_H\n");
    }
#endif
#ifdef _FLOAT_H
    if ( (_FLOAT_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FLOAT_H\t\t => %d\n", _FLOAT_H + 0);
    } else {
        strcat(buffer, "_FLOAT_H\n");
    }
#endif
#ifdef _LIMITS_H
    if ( (_LIMITS_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LIMITS_H\t\t => %d\n", _LIMITS_H + 0);
    } else {
        strcat(buffer, "_LIMITS_H\n");
    }
#endif
#ifdef _LOCALE_H
    if ( (_LOCALE_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LOCALE_H\t\t => %d\n", _LOCALE_H + 0);
    } else {
        strcat(buffer, "_LOCALE_H\n");
    }
#endif
#ifdef _MATH_H
    if ( (_MATH_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MATH_H  \t\t => %d\n", _MATH_H + 0);
    } else {
        strcat(buffer, "_MATH_H\n");
    }
#endif
#ifdef _SETJMP_H
    if ( (_SETJMP_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SETJMP_H\t\t => %d\n", _SETJMP_H + 0);
    } else {
        strcat(buffer, "_SETJMP_H\n");
    }
#endif
#ifdef _SIGNAL_H
    if ( (_SIGNAL_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SIGNAL_H\t\t => %d\n", _SIGNAL_H + 0);
    } else {
        strcat(buffer, "_SIGNAL_H\n");
    }
#endif
#ifdef _STDARG_H
    if ( (_STDARG_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STDARG_H\t\t => %d\n", _STDARG_H + 0);
    } else {
        strcat(buffer, "_STDARG_H\n");
    }
#endif
#ifdef _STDDEF_H
    if ( (_STDDEF_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STDDEF_H\t\t => %d\n", _STDDEF_H + 0);
    } else {
        strcat(buffer, "_STDDEF_H\n");
    }
#endif
#ifdef _STDIO_H
    if ( (_STDIO_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STDIO_H\t\t => %d\n", _STDIO_H + 0);
    } else {
        strcat(buffer, "_STDIO_H\n");
    }
#endif
#ifdef _STDLIB_H
    if ( (_STDLIB_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STDLIB_H\t\t => %d\n", _STDLIB_H + 0);
    } else {
        strcat(buffer, "_STDLIB_H\n");
    }
#endif
#ifdef _STRING_H
    if ( (_STRING_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STRING_H\t\t => %d\n", _STRING_H + 0);
    } else {
        strcat(buffer, "_STRING_H\n");
    }
#endif
#ifdef _TIME_H
    if ( (_TIME_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TIME_H  \t\t => %d\n", _TIME_H + 0);
    } else {
        strcat(buffer, "_TIME_H\n");
    }
#endif


/* c95 (c89 na1) header */
#ifdef _ISO646_H
    if ( (_ISO646_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ISO646_H\t\t => %d\n", _ISO646_H + 0);
    } else {
        strcat(buffer, "_ISO646_H\n");
    }
#endif
#ifdef _WCHAR_H
    if ( (_WCHAR_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WCHAR_H\t\t => %d\n", _WCHAR_H + 0);
    } else {
        strcat(buffer, "_WCHAR_H\n");
    }
#endif
#ifdef _WCTYPE_H
    if ( (_WCTYPE_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WCTYPE_H\t\t => %d\n", _WCTYPE_H + 0);
    } else {
        strcat(buffer, "_WCTYPE_H\n");
    }
#endif


/* c99 HEADER */
#ifdef _COMPLEX_H
    if ( (_COMPLEX_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_COMPLEX_H\t\t => %d\n", _COMPLEX_H + 0);
    } else {
        strcat(buffer, "_COMPLEX_H\n");
    }
#endif
#ifdef _FENV_H
    if ( (_FENV_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FENV_H \t\t => %d\n", _FENV_H + 0);
    } else {
        strcat(buffer, "_FENV_H\n");
    }
#endif
#ifdef _INTTYPES_H
    if ( (_INTTYPES_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_INTTYPES_H\t\t => %d\n", _INTTYPES_H + 0);
    } else {
        strcat(buffer, "_INTTYPES_H\n");
    }
#endif
#ifdef _STDBOOL_H
    if ( (_STDBOOL_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STDBOOL_H\t\t => %d\n", _STDBOOL_H + 0);
    } else {
        strcat(buffer, "_STDBOOL_H\n");
    }
#endif
#ifdef _STDINT_H
    if ( (_STDINT_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STDINT_H\t\t => %d\n", _STDINT_H + 0);
    } else {
        strcat(buffer, "_STDINT_H\n");
    }
#endif
#ifdef _TGMATH_H
    if ( (_TGMATH_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TGMATH_H\t\t => %d\n", _TGMATH_H + 0);
    } else {
        strcat(buffer, "_TGMATH_H\n");
    }
#endif

/* POSIX header */
#ifdef _AIO_H
    if ( (_AIO_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_AIO_H\t\t => %d\n", _AIO_H + 0);
    } else {
        strcat(buffer, "_AIO_H\n");
    }
#endif
#ifdef _ARPA_INET_H
    if ( (_ARPA_INET_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ARPA_INET_H\t\t => %d\n", _ARPA_INET_H + 0);
    } else {
        strcat(buffer, "_ARPA_INET_H\n");
    }
#endif
#ifdef _CPIO_H
    if ( (_CPIO_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CPIO_H\t\t => %d\n", _CPIO_H + 0);
    } else {
        strcat(buffer, "_CPIO_H\n");
    }
#endif
#ifdef _DIRENT_H
    if ( (_DIRENT_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DIRENT_H\t\t => %d\n", _DIRENT_H + 0);
    } else {
        strcat(buffer, "_DIRENT_H\n");
    }
#endif
#ifdef _DLFCN_H
    if ( (_DLFCN_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DLFCN_H\t\t => %d\n", _DLFCN_H + 0);
    } else {
        strcat(buffer, "_DLFCN_H\n");
    }
#endif
#ifdef _FCNTL_H
    if ( (_FCNTL_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FCNTL_H\t\t => %d\n", _FCNTL_H + 0);
    } else {
        strcat(buffer, "_FCNTL_H\n");
    }
#endif
#ifdef _FMTMSG_H
    if ( (_FMTMSG_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FMTMSG_H\t\t => %d\n", _FMTMSG_H + 0);
    } else {
        strcat(buffer, "_FMTMSG_H\n");
    }
#endif
#ifdef _FNMATCH_H
    if ( (_FNMATCH_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FNMATCH_H\t\t => %d\n", _FNMATCH_H + 0);
    } else {
        strcat(buffer, "_FNMATCH_H\n");
    }
#endif
#ifdef _FTW_H
    if ( (_FTW_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FTW_H\t\t => %d\n", _FTW_H + 0);
    } else {
        strcat(buffer, "_FTW_H\n");
    }
#endif
#ifdef _GLOB_H
    if ( (_GLOB_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_GLOB_H\t\t => %d\n", _GLOB_H + 0);
    } else {
        strcat(buffer, "_GLOB_H\n");
    }
#endif
#ifdef _GRP_H
    if ( (_GRP_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_GRP_H\t\t => %d\n", _GRP_H + 0);
    } else {
        strcat(buffer, "_GRP_H\n");
    }
#endif
#ifdef _ICONV_H
    if ( (_ICONV_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ICONV_H\t\t => %d\n", _ICONV_H + 0);
    } else {
        strcat(buffer, "_ICONV_H\n");
    }
#endif
#ifdef _LANGINFO_H
    if ( (_LANGINFO_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LANGINFO_H\t\t => %d\n", _LANGINFO_H + 0);
    } else {
        strcat(buffer, "_LANGINFO_H\n");
    }
#endif
#ifdef _LIBGEN_H
    if ( (_LIBGEN_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LIBGEN_H\t\t => %d\n", _LIBGEN_H + 0);
    } else {
        strcat(buffer, "_LIBGEN_H\n");
    }
#endif
#ifdef _MONETARY_H
    if ( (_MONETARY_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MONETARY_H\t\t => %d\n", _MONETARY_H + 0);
    } else {
        strcat(buffer, "_MONETARY_H\n");
    }
#endif
#ifdef _MQUEUE_H
    if ( (_MQUEUE_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MQUEUE_H\t\t => %d\n", _MQUEUE_H + 0);
    } else {
        strcat(buffer, "_MQUEUE_H\n");
    }
#endif
#ifdef _NDBM_H
    if ( (_NDBM_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NDBM_H\t\t => %d\n", _NDBM_H + 0);
    } else {
        strcat(buffer, "_NDBM_H\n");
    }
#endif
#ifdef _NET_IF_H
    if ( (_NET_IF_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NET_IF_H\t\t => %d\n", _NET_IF_H + 0);
    } else {
        strcat(buffer, "_NET_IF_H\n");
    }
#endif
#ifdef _NETDB_H
    if ( (_NETDB_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NETDB_H\t\t => %d\n", _NETDB_H + 0);
    } else {
        strcat(buffer, "_NETDB_H\n");
    }
#endif
#ifdef _NETINET_IF_H
    if ( (_NETINET_IF_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NETINET_IF_H\t\t => %d\n", _NETINET_IF_H + 0);
    } else {
        strcat(buffer, "_NETINET_IF_H\n");
    }
#endif
#ifdef _NETINET_TCP_H
    if ( (_NETINET_TCP_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NETINET_TCP_H\t\t => %d\n", _NETINET_TCP_H + 0);
    } else {
        strcat(buffer, "_NETINET_TCP_H\n");
    }
#endif
#ifdef _NL_TYPES_H
    if ( (_NL_TYPES_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NL_TYPES_H\t\t => %d\n", _NL_TYPES_H + 0);
    } else {
        strcat(buffer, "_NL_TYPES_H\n");
    }
#endif
#ifdef _POLL_H
    if ( (_POLL_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POLL_H\t\t => %d\n", _POLL_H + 0);
    } else {
        strcat(buffer, "_POLL_H\n");
    }
#endif
#ifdef _PTHREAD_H
    if ( (_PTHREAD_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_PTHREAD_H\t\t => %d\n", _PTHREAD_H + 0);
    } else {
        strcat(buffer, "_PTHREAD_H\n");
    }
#endif
#ifdef _PWD_H
    if ( (_PWD_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_PWD_H\t\t => %d\n", _PWD_H + 0);
    } else {
        strcat(buffer, "_PWD_H\n");
    }
#endif
#ifdef _REGEX_H
    if ( (_REGEX_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_REGEX_H\t\t => %d\n", _REGEX_H + 0);
    } else {
        strcat(buffer, "_REGEX_H\n");
    }
#endif
#ifdef _SCHED_H
    if ( (_SCHED_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SCHED_H\t\t => %d\n", _SCHED_H + 0);
    } else {
        strcat(buffer, "_SCHED_H\n");
    }
#endif
#ifdef _SEARCH_H
    if ( (_SEARCH_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SEARCH_H\t\t => %d\n", _SEARCH_H + 0);
    } else {
        strcat(buffer, "_SEARCH_H\n");
    }
#endif
#ifdef _SEMAPHORE_H
    if ( (_SEMAPHORE_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SEMAPHORE_H\t\t => %d\n", _SEMAPHORE_H + 0);
    } else {
        strcat(buffer, "_SEMAPHORE_H\n");
    }
#endif
#ifdef _SPAWN_H
    if ( (_SPAWN_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SPAWN_H\t\t => %d\n", _SPAWN_H + 0);
    } else {
        strcat(buffer, "_SPAWN_H\n");
    }
#endif
#ifdef _STRINGS_H
    if ( (_STRINGS_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STRINGS_H\t\t => %d\n", _STRINGS_H + 0);
    } else {
        strcat(buffer, "_STRINGS_H\n");
    }
#endif
#ifdef _STROPTS_H
    if ( (_STROPTS_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_STROPTS_H\t\t => %d\n", _STROPTS_H + 0);
    } else {
        strcat(buffer, "_STROPTS_H\n");
    }
#endif
#ifdef _SYS_IPC_H
    if ( (_SYS_IPC_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_IPC_H\t\t => %d\n", _SYS_IPC_H + 0);
    } else {
        strcat(buffer, "_SYS_IPC_H\n");
    }
#endif
#ifdef _SYS_MMAN_H
    if ( (_SYS_MMAN_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_MMAN_H\t\t => %d\n", _SYS_MMAN_H + 0);
    } else {
        strcat(buffer, "_SYS_MMAN_H\n");
    }
#endif
#ifdef _SYS_MSG_H
    if ( (_SYS_MSG_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_MSG_H\t\t => %d\n", _SYS_MSG_H + 0);
    } else {
        strcat(buffer, "_SYS_MSG_H\n");
    }
#endif
#ifdef _SYS_RESOURCE_H
    if ( (_SYS_RESOURCE_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_RESOURCE_H\t\t => %d\n", _SYS_RESOURCE_H + 0);
    } else {
        strcat(buffer, "_SYS_RESOURCE_H\n");
    }
#endif
#ifdef _SYS_SELECT_H
    if ( (_SYS_SELECT_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_SELECT_H\t\t => %d\n", _SYS_SELECT_H + 0);
    } else {
        strcat(buffer, "_SYS_SELECT_H\n");
    }
#endif
#ifdef _SYS_SEM_H
    if ( (_SYS_SEM_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_SEM_H\t\t => %d\n", _SYS_SEM_H + 0);
    } else {
        strcat(buffer, "_SYS_SEM_H\n");
    }
#endif
#ifdef _SYS_SHM_H
    if ( (_SYS_SHM_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_SHM_H\t\t => %d\n", _SYS_SHM_H + 0);
    } else {
        strcat(buffer, "_SYS_SHM_H\n");
    }
#endif
#ifdef _SYS_SOCKET_H
    if ( (_SYS_SOCKET_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_SOCKET_H\t\t => %d\n", _SYS_SOCKET_H + 0);
    } else {
        strcat(buffer, "_SYS_SOCKET_H\n");
    }
#endif
#ifdef _SYS_STAT_H
    if ( (_SYS_STAT_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_STAT_H\t\t => %d\n", _SYS_STAT_H + 0);
    } else {
        strcat(buffer, "_SYS_STAT_H\n");
    }
#endif
#ifdef _SYS_STATVFS_H
    if ( (_SYS_STATVFS_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_STATVFS_H\t\t => %d\n", _SYS_STATVFS_H + 0);
    } else {
        strcat(buffer, "_SYS_STATVFS_H\n");
    }
#endif
#ifdef _SYS_TIME_H
    if ( (_SYS_TIME_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_TIME_H\t\t => %d\n", _SYS_TIME_H + 0);
    } else {
        strcat(buffer, "_SYS_TIME_H\n");
    }
#endif
#ifdef _SYS_TIMES_H
    if ( (_SYS_TIMES_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_TIMES_H\t\t => %d\n", _SYS_TIMES_H + 0);
    } else {
        strcat(buffer, "_SYS_TIMES_H\n");
    }
#endif
#ifdef _SYS_TYPES_H
    if ( (_SYS_TYPES_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_TYPES_H\t\t => %d\n", _SYS_TYPES_H + 0);
    } else {
        strcat(buffer, "_SYS_TYPES_H\n");
    }
#endif
#ifdef _SYS_UIO_H
    if ( (_SYS_UIO_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_UIO_H\t\t => %d\n", _SYS_UIO_H + 0);
    } else {
        strcat(buffer, "_SYS_UIO_H\n");
    }
#endif
#ifdef _SYS_UN_H
    if ( (_SYS_UN_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_UN_H\t\t => %d\n", _SYS_UN_H + 0);
    } else {
        strcat(buffer, "_SYS_UN_H\n");
    }
#endif
#ifdef _SYS_UTSNAME_H
    if ( (_SYS_UTSNAME_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_UTSNAME_H\t\t => %d\n", _SYS_UTSNAME_H + 0);
    } else {
        strcat(buffer, "_SYS_UTSNAME_H\n");
    }
#endif
#ifdef _SYS_WAIT_H
    if ( (_SYS_WAIT_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYS_WAIT_H\t\t => %d\n", _SYS_WAIT_H + 0);
    } else {
        strcat(buffer, "_SYS_WAIT_H\n");
    }
#endif
#ifdef _SYSLOG_H
    if ( (_SYSLOG_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SYSLOG_H\t\t => %d\n", _SYSLOG_H + 0);
    } else {
        strcat(buffer, "_SYSLOG_H\n");
    }
#endif
#ifdef _TAR_H
    if ( (_TAR_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TAR_H\t\t => %d\n", _TAR_H + 0);
    } else {
        strcat(buffer, "_TAR_H\n");
    }
#endif
#ifdef _TERMIOS_H
    if ( (_TERMIOS_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TERMIOS_H\t\t => %d\n", _TERMIOS_H + 0);
    } else {
        strcat(buffer, "_TERMIOS_H\n");
    }
#endif
#ifdef _TRACE_H
    if ( (_TRACE_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_TRACE_H\t\t => %d\n", _TRACE_H + 0);
    } else {
        strcat(buffer, "_TRACE_H\n");
    }
#endif
#ifdef _ULIMIT_H
    if ( (_ULIMIT_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ULIMIT_H\t\t => %d\n", _ULIMIT_H + 0);
    } else {
        strcat(buffer, "_ULIMIT_H\n");
    }
#endif
#ifdef _UNISTD_H
    if ( (_UNISTD_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_UNISTD_H\t\t => %d\n", _UNISTD_H + 0);
    } else {
        strcat(buffer, "_UNISTD_H\n");
    }
#endif
#ifdef _UTIME_H
    if ( (_UTIME_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_UTIME_H\t\t => %d\n", _UTIME_H + 0);
    } else {
        strcat(buffer, "_UTIME_H\n");
    }
#endif
#ifdef _UTMPX_H
    if ( (_UTMPX_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_UTMPX_H\t\t => %d\n", _UTMPX_H + 0);
    } else {
        strcat(buffer, "_UTMPX_H\n");
    }
#endif
#ifdef _WORDEXP_H
    if ( (_WORDEXP_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WORDEXP_H\t\t => %d\n", _WORDEXP_H + 0);
    } else {
        strcat(buffer, "_WORDEXP_H\n");
    }
#endif


/* other */


#ifdef __TYPES_H_INCLUDED
    if ( (__TYPES_H_INCLUDED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__TYPES_H_INCLUDED\t\t => %d\n", __TYPES_H_INCLUDED + 0);
    } else {
        strcat(buffer, "__TYPES_H_INCLUDED\n");
    }
#endif


/* gcc includes */
#ifdef _LIMITS_H___
    if ( (_LIMITS_H___ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LIMITS_H___\t\t => %d\n", _LIMITS_H___ + 0);
    } else {
        strcat(buffer, "_LIMITS_H___\n");
    }
#endif

#ifdef __GCC_SYSTEM_H__
    if ( (__GCC_SYSTEM_H__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GCC_SYSTEM_H__\t => %d\n", __GCC_SYSTEM_H__ + 0);
    } else {
        strcat(buffer, "__GCC_SYSTEM_H__\n");
    }
#endif


/* libc includes */
#ifdef _FEATURES_H
    if ( (_FEATURES_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_FEATURES_H\t\t => %d\n", _FEATURES_H + 0);
    } else {
        strcat(buffer, "_FEATURES_H\n");
    }
#endif



/* ################################################################## */
/* windows includes */
#ifdef _WINSOCKAPI_
    if ( (_WINSOCKAPI_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINSOCKAPI_\t\t => %d\n", _WINSOCKAPI_ + 0);
    } else {
        strcat(buffer, "_WINSOCKAPI_\n");
    }
#endif


#ifdef _WINSOCK_H
    if ( (_WINSOCK_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINSOCK_H\t\t => %d\n", _WINSOCK_H + 0);
    } else {
        strcat(buffer, "_WINSOCK_H\n");
    }
#endif

#ifdef _WINSOCKAPI2_
    if ( (_WINSOCKAPI2_ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINSOCKAPI2_\t\t => %d\n", _WINSOCKAPI2_ + 0);
    } else {
        strcat(buffer, "_WINSOCKAPI2_\n");
    }
#endif

#ifdef _WINSOCK2_H
    if ( (_WINSOCK2_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINSOCK2_H\t\t => %d\n", _WINSOCK2_H + 0);
    } else {
        strcat(buffer, "_WINSOCK2_H\n");
    }
#endif


#ifdef _WINDOWS_H
    if ( (_WINDOWS_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WINDOWS_H\t\t => %d\n", _WINDOWS_H + 0);
    } else {
        strcat(buffer, "_WINDOWS_H\n");
    }
#endif

#ifdef _INC_WINDOWS
    if ( (_INC_WINDOWS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_INC_WINDOWS\t\t => %d\n", _INC_WINDOWS + 0);
    } else {
        strcat(buffer, "_INC_WINDOWS\n");
    }
#endif

#ifdef _INC_WINDOWS_H
    if ( (_INC_WINDOWS_H + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_INC_WINDOWS_H\t\t => %d\n", _INC_WINDOWS_H + 0);
    } else {
        strcat(buffer, "_INC_WINDOWS_H\n");
    }
#endif


/* ################### */

#ifdef USE_WINDOWS
    if ( (USE_WINDOWS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "USE_WINDOWS\t\t => %d\n", USE_WINDOWS + 0);
    } else {
        strcat(buffer, "USE_WINDOWS\n");
    }
#endif
#if 0
#ifdef NO_GUI
    if ( (NO_GUI + 1) > 1) {
        sprintf(buffer + strlen(buffer), "NO_GUI\t\t => %d\n", NO_GUI + 0);
    } else {
        strcat(buffer, "NO_GUI\n");
    }
#endif
#ifdef NO_WINMAIN
    if ( (NO_WINMAIN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "NO_WINMAIN\t\t => %d\n", NO_WINMAIN + 0);
    } else {
        strcat(buffer, "NO_WINMAIN\n");
    }
#endif

#ifdef NO_MAIN
    if ( (NO_MAIN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "NO_MAIN\t\t => %d\n", NO_MAIN + 0);
    } else {
        strcat(buffer, "NO_MAIN\n");
    }
#endif

#ifdef NO_STDIO
    if ( (NO_STDIO + 1) > 1) {
        sprintf(buffer + strlen(buffer), "NO_STDIO\t\t => %d\n", NO_STDIO + 0);
    } else {
        strcat(buffer, "NO_STDIO\n");
    }
#endif
#endif

    sprintf(buffer+strlen(buffer), "(need %zd byte)", strlen(buffer) + 16);

#endif

    return buffer;
}

/* ####### */

#ifndef NO_WINMAIN
#ifdef USE_WINDOWS
// int PASCAL WinMain (struct HINSTANCE__ * hInstance, struct HINSTANCE__ * hPrevInstance, LPSTR lpCmdLine, int nCmdChow)
// int PASCAL WinMain (HANDLE hInstance, HANDLE hPrevInstance, LPSTR lpCmdLine, int nCmdChow)
int PASCAL WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdChow)
{
    char	buffer[BUFFERSIZE];

    get_txt(buffer);

#ifndef NO_GUI
    MessageBox(NULL, buffer, "Hello World", MB_OK);
#endif
#ifndef NO_STDIO
    printf("%s\n", buffer);
#endif
    return 0;
}
#endif
#endif

/* ####### */

#ifndef NO_MAIN
int main(int argc, char ** argv)
{
    char buffer[BUFFERSIZE];

    get_txt(buffer);
#ifndef NO_STDIO
    printf("%s\n", buffer);
#endif


    return 0;    
}
#endif

/* ####### */


#ifdef __cplusplus
}
#endif
