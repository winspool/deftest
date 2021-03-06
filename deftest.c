/* ####
 * ####
 *
 */


#ifdef __cplusplus
extern "C" {
#endif


#define BUFFERSIZE 4096

#define NO_GUI


/* ################################## */
/* STDC headers */

#ifdef USE_POSIX
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

#include <stdio.h>
#include <stdarg.h>
#include <string.h>


/* ANSI C (c89) header */
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

/* c95 (c90 NA1) header */
#ifdef USE_C95
//#include <iso646.h>
#include <wchar.h>
#include <wctype.h>
#endif

#ifdef USE_ISO646_H
#include <iso646.h>
#endif
#ifdef USE_WCHAR_H
#include <wchar.h>
#endif
#ifdef USE_WCTYPE_H
#include <wctype.h>
#endif

/* c99 header */
#ifdef USE_C99
#include <complex.h>
#include <fenv.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <tgmath.h>
#endif

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


#ifdef __FUNCDNAME__
     sprintf(buffer+strlen(buffer), "__FUNCDNAME__\t\t => '%s'\n", __FUNCDNAME__ );
#endif
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



/* ##################### */
/* compiler */


/* cygwin */
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



/* Digital Mars, Symantec C, (Zortech C: missing), (Datalight C: missing) */
#ifdef __DMC_VERSION__
    sprintf(buffer + strlen(buffer), "__DMC_VERSION__\t => '%s'\n", __DMC_VERSION__ );
#endif

#ifdef __DMC__
    sprintf(buffer + strlen(buffer), "__DMC__ \t\t => 0x%x (DMC %d.%d)\n", __DMC__,
        __DMC__ / 256, (__DMC__ & 0xf0 ) / 16 * 10 + (__DMC__ & 0x0f));
#endif


/* GNU C */
#ifdef __VERSION__
    sprintf(buffer + strlen(buffer), "__VERSION__\t\t => '%s'\n", __VERSION__ );
#endif


#ifdef __GNUC__
#ifdef __GNUC_PATCHLEVEL__
    sprintf(buffer + strlen(buffer), "__GNUC__ \t\t => %d (GCC %d.%d.%d)\n",
                __GNUC__ , __GNUC__ ,  __GNUC_MINOR__ + 0,  __GNUC_PATCHLEVEL__ + 0 );
#else
        sprintf(buffer + strlen(buffer), "__GNUC__ \t\t => %d (GCC %d.%d)\n",
                __GNUC__ , __GNUC__ ,  __GNUC_MINOR__ + 0 );
#endif
#endif

#ifdef __GNUC_MINOR__
    if ( (__GNUC_MINOR__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUC_MINOR__ \t\t => %d\n", __GNUC_MINOR__ + 0);
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

#ifdef __GNUG__
    if ( (__GNUG__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNUG__ \t => %d\n", __GNUG__ + 0);
    } else {
        strcat(buffer, "__GNUG__\n");
    }
#endif



/* IBM C / IBM CPP, xlC */
#ifdef __IBMC__
    sprintf(buffer + strlen(buffer), "__IBMC__ \t\t => %d\n", __IBMC__, __IBMC__);
#endif
#ifdef __IBMCPP__
    sprintf(buffer + strlen(buffer), "__IBMCPP__ \t\t => %d\n", __IBMCPP__, __IBMCPP__);
#endif

#ifdef __xlc__
    sprintf(buffer + strlen(buffer), "__xlc__ \t\t => '%s'\n", #__xlc__ );
#endif
#ifdef __xlC__
    sprintf(buffer + strlen(buffer), "__xlC__ \t\t => 0x%x (%d.%d.%d)\n", __xlC__,
            __xlC__ / 1000, __xlC__ / 100 - (__xlC__ / 1000) * 10,
            __xlC__ / 10 - (__xlC__ / 100) * 10 );
#endif

/* Intel CC */
#ifdef __INTEL_COMPILER
    sprintf(buffer + strlen(buffer), "__INTEL_COMPILER\t\t => 0x%x/%d\n", __INTEL_COMPILER, __INTEL_COMPILER);
#endif
#ifdef __INTEL_COMPILER_BUILD_DATE
    sprintf(buffer + strlen(buffer), "__INTEL_COMPILER_BUILD_DATE\t => 0x%lx (ICC %x.%x.%x)\n",
    __INTEL_COMPILER_BUILD_DATE, __INTEL_COMPILER_BUILD_DATE >>16,
    (__INTEL_COMPILER_BUILD_DATE >> 8) & 255, __INTEL_COMPILER_BUILD_DATE & 255);
#endif


/* lcc */
#ifdef __LCC__
    sprintf(buffer + strlen(buffer), "__LCC__ \t\t => %d\n", __LCC__);
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

#ifdef __MINGW32__
    if ( (__MINGW32__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MINGW32__  \t\t => %d\n", __MINGW32__   + 0);
    } else {
        strcat(buffer, "__MINGW32__\n");
    }
#endif

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





/* MS visual C */
#ifdef _MSC_BUILD
    sprintf(buffer + strlen(buffer), "_MSC_BUILD\t\t => 0x%lx/%ld )\n", _MSC_BUILD, _MSC_BUILD);
#endif


#ifdef _MSC_EXTENSIONS
    if ( (_MSC_EXTENSIONS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MSC_EXTENSIONS\t\t => %d\n", _MSC_EXTENSIONS + 0);
    } else {
        strcat(buffer, "_MSC_EXTENSIONS\n");
    }
#endif
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




/* Portable C Compiler  */
#ifdef __PCC__
    sprintf(buffer + strlen(buffer), "__PCC__ \t\t => %d (PCC %d.%d.%d)\n", 
            __PCC__, __PCC__, __PCC_MINOR__, __PCC_MINORMINOR__);
#endif

#ifdef __PCC_MINOR__
    sprintf(buffer + strlen(buffer), "__PCC_MINOR__ \t\t => %d\n", 
            __PCC_MINOR__,__PCC_MINOR__);
#endif
#ifdef __PCC_MINORMINOR__
    sprintf(buffer + strlen(buffer), "__PCC_MINORMINOR__ \t => %d\n", 
            __PCC_MINORMINOR__,__PCC_MINORMINOR__);
#endif


/* Pelles C Compiler */
#ifdef __POCC__
    sprintf(buffer + strlen(buffer), "__POCC__ \t\t => 0x%x/%04d (PellesC %d.%d)\n", 
            __POCC__, __POCC__, __POCC__ / 100, __POCC__ % 100);
#endif


/* Digital Mars, Symantec C, (Zortech C: missing), (Datalight C: missing) */
#ifdef __SC__
    sprintf(buffer + strlen(buffer), "__SC__\t\t\t => 0x%x (%s %d.%d)\n", __SC__,
#ifdef __DMC__
    "DMC",
#else
    "SC",
#endif
    __SC__ / 256, (__SC__ & 0xf0 ) / 16 * 10 + (__SC__ & 0x0f));

#endif



/* TinyC Compiler */
#ifdef __TINYC__
    if ( (__TINYC__ + 1) > 1) {
        if ( __TINYC__  > 1) {
            sprintf(buffer + strlen(buffer), "__TINYC__ \t\t => %d (TCC %d.%d.%d)\n",
                __TINYC__, __TINYC__ / 1000, (__TINYC__ % 1000) / 100, __TINYC__ % 100);
        } else {
            sprintf(buffer + strlen(buffer), "__TINYC__ \t\t => %d\n", __TINYC__ + 0);
        }
    } else {
        strcat(buffer, "__TINYC__\n");
    }
#endif


/* Borland C, TurboC */
#ifdef __TURBOC__
    sprintf(buffer + strlen(buffer), "__TURBOC__\t\t => 0x%x/%04d\n", __TURBOC__, __TURBOC__);
#endif


#ifdef __WATCOMC__
    sprintf(buffer + strlen(buffer), "__WATCOMC__\t\t => %d (%sWatcom %d.%-1d)\n",
        __WATCOMC__, (__WATCOMC__ > 1100) ? "Open " : "",
        (__WATCOMC__ > 1100) ? (__WATCOMC__ - 1100) / 100 : (__WATCOMC__ / 100),
        (__WATCOMC__ > 1100) ? (__WATCOMC__ - 1100) % 100 : (__WATCOMC__ % 100));
#endif

/* ################### */
/* language version */

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

/* BSD */
#ifdef BSD_SOURCE
    if ( (BSD_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "BSD_SOURCE  \t\t => %d\n", BSD_SOURCE   + 0);
    } else {
        strcat(buffer, "BSD_SOURCE\n");
    }
#endif
#ifdef _BSD_SOURCE
    if ( (_BSD_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BSD_SOURCE  \t\t => %d\n", _BSD_SOURCE   + 0);
    } else {
        strcat(buffer, "_BSD_SOURCE  \n");
    }
#endif
#ifdef _BSD_SOURCE_
    if ( (_BSD_SOURCE_   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_BSD_SOURCE_  \t\t => %d\n", _BSD_SOURCE_   + 0);
    } else {
        strcat(buffer, "_BSD_SOURCE_  \n");
    }
#endif
#ifdef __BSD_SOURCE
    if ( (__BSD_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BSD_SOURCE  \t\t => %d\n", __BSD_SOURCE   + 0);
    } else {
        strcat(buffer, "__BSD_SOURCE  \n");
    }
#endif
#ifdef __BSD_SOURCE__
    if ( (__BSD_SOURCE__   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__BSD_SOURCE__  \t\t => %d\n", __BSD_SOURCE__   + 0);
    } else {
        strcat(buffer, "__BSD_SOURCE__  \n");
    }
#endif


/* C99 */
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
        sprintf(buffer + strlen(buffer), "__C99_MACRO_WITH_VA_ARGS \t\t => %d\n", __C99_MACRO_WITH_VA_ARGS + 0);
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



#ifdef _GNU_SOURCE
    if ( (_GNU_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_GNU_SOURCE \t => %d\n", _GNU_SOURCE + 0);
    } else {
        strcat(buffer, "_GNU_SOURCE\n");
    }
#endif
#ifdef __GNU_SOURCE
    if ( (__GNU_SOURCE + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__GNU_SOURCE \t => %d\n", __GNU_SOURCE + 0);
    } else {
        strcat(buffer, "__GNU_SOURCE\n");
    }
#endif



#ifdef __INTEL_STRICT_ANSI__
    if ( (__INTEL_STRICT_ANSI__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__INTEL_STRICT_ANSI__\t => %d\n", __INTEL_STRICT_ANSI__ + 0);
    } else {
        strcat(buffer, "__INTEL_STRICT_ANSI__\n");
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

#ifdef _POSIX_SOURCE
    if ( (_POSIX_SOURCE   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POSIX_SOURCE  \t\t => %d\n", _POSIX_SOURCE   + 0);
    } else {
        strcat(buffer, "_POSIX_SOURCE\n");
    }
#endif



#ifdef _POSIX_VERSION
    if ( (_POSIX_VERSION + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_POSIX_VERSION \t => %ld\n", _POSIX_VERSION + 0);
    } else {
        strcat(buffer, "_POSIX_VERSION\n");
    }
#endif


/* STDC */
#ifdef STDC
    if ( (STDC + 1) > 1) {
        sprintf(buffer + strlen(buffer), "STDC \t\t => %d\n", STDC + 0);
    } else {
        strcat(buffer, "STDC\n");
    }
#endif


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


#ifdef __STDC_HOSTED__
    sprintf(buffer + strlen(buffer), "__STDC_HOSTED__ \t => %d\n", __STDC_HOSTED__ + 0);
# if 0
    if ( (__STDC_HOSTED__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC_HOSTED__ \t => %d\n", __STDC_HOSTED__ + 0);
    } else {
        strcat(buffer, "__STDC_HOSTED__\n");
    }
#endif
#endif

#ifdef __STDC_VERSION__
    if ( (__STDC_VERSION__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STDC_VERSION__ \t => %ld %s\n", __STDC_VERSION__ + 0,
        (__STDC_VERSION__ + 0 >= 199901) ? "(c99)" :
        (__STDC_VERSION__ + 0 >= 199409) ? "(c95)" : "");

    } else {
        strcat(buffer, "__STDC_VERSION__ \t\t(c89)\n");
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


#ifdef __STRICT_ANSI__
    if ( (__STRICT_ANSI__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__STRICT_ANSI__ \t => %d\n", __STRICT_ANSI__ + 0);
    } else {
        strcat(buffer, "__STRICT_ANSI__\n");
    }
#endif



#ifdef _XOPEN_UNIX
    if ( (_XOPEN_UNIX + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_XOPEN_UNIX \t\t => %d\n", _XOPEN_UNIX + 0);
    } else {
        strcat(buffer, "_XOPEN_UNIX\n");
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



/* ################### */

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
    strcat(buffer, "__REDIRECT\n");
#endif

#ifdef __REDIRECT__
    if ( (__REDIRECT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__REDIRECT__ \t => %d\n", __REDIRECT__ + 0);
    } else {
        strcat(buffer, "__REDIRECT__\n");
    }
#endif




/* ################### */
/* cpu */
/* x86 */


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


#ifdef __386__
    if ( (__386__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__386__ \t\t => %d\n", __386__ + 0);
    } else {
        strcat(buffer, "__386__\n");
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


#ifdef __amd64
    if ( (__amd64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__amd64\t\t\t => %d\n", __amd64 + 0);
    } else {
        strcat(buffer, "__amd64\n");
    }
#endif
#ifdef __amd64__
    if ( (__amd64__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__amd64__\t\t => %d\n", __amd64__ + 0);
    } else {
        strcat(buffer, "__amd64__\n");
    }
#endif


#ifdef __APCS_32__
    if ( (__APCS_32__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__APCS_32__ \t\t => %d\n", __APCS_32__ + 0);
    } else {
        strcat(buffer, "__APCS_32__\n");
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



/* ARM */
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


#ifdef __ARM_ARCH_4__
    if ( (__ARM_ARCH_4__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARM_ARCH_4__ \t\t => %d\n", __ARM_ARCH_4__ + 0);
    } else {
        strcat(buffer, "__ARM_ARCH_4__\n");
    }
#endif

#ifdef __ARMEB__
    if ( (__ARMEB__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ARMEB__ \t\t => %d\n", __ARMEB__ + 0);
    } else {
        strcat(buffer, "__ARMEB__\n");
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
#ifdef __i386__
    if ( (__i386__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__i386__\t\t => %d\n", __i386__ + 0);
    } else {
        strcat(buffer, "__i386__\n");
    }
#endif

#ifdef __I86__
    if ( (__I86__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__I86__ \t\t => %d\n", __I86__ + 0);
    } else {
        strcat(buffer, "__I86__\n");
    }
#endif

/* Intel 64 */
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


/* ALPHA */
#ifdef _M_ALPHA
    if ( (_M_ALPHA + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_ALPHA \t\t => %d\n", _M_ALPHA + 0);
    } else {
        strcat(buffer, "_M_ALPHA\n");
    }
#endif


#ifdef M_I386
    if ( (M_I386 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M_I386  \t\t => %d\n", M_I386 + 0);
    } else {
        strcat(buffer, "M_I386\n");
    }
#endif
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



/* mips */
#ifdef mips
    if ( (mips + 1) > 1) {
        sprintf(buffer + strlen(buffer), "mips \t\t => %d\n", mips + 0);
    } else {
        strcat(buffer, "mips\n");
    }
#endif
#ifdef _mips
    if ( (_mips + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_mips \t\t => %d\n", _mips + 0);
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
#ifdef __mips
    if ( (__mips + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mips \t\t => %d\n", __mips + 0);
    } else {
        strcat(buffer, "__mips\n");
    }
#endif
#ifdef __mips__
    if ( (__mips__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__mips__ \t\t => %d\n", __mips__ + 0);
    } else {
        strcat(buffer, "__mips__\n");
    }
#endif

#ifdef _MIPS
    if ( (_MIPS + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MIPS \t\t => %d\n", _MIPS + 0);
    } else {
        strcat(buffer, "_MIPS\n");
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


/* Intel x86 */
#ifdef M_IX86
    if ( (M_IX86 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "M_IX86 \t\t => %d\n", M_IX86 + 0);
    } else {
        strcat(buffer, "M_IX86\n");
    }
#endif
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


#ifdef _M_IX86_FP
    if ( (_M_IX86_FP + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_M_IX86_FP \t\t => %d\n", _M_IX86_FP + 0);
    } else {
        strcat(buffer, "_M_IX86_FP\n");
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
        sprintf(buffer + strlen(buffer), "__X86__\t\t\t => %d\n", __X86__ + 0);
    } else {
        strcat(buffer, "__X86__\n");
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


/* ToDo: DragonFly */


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

#ifdef __LINUX__
    if ( (__LINUX__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LINUX__\t\t => %d\n", __LINUX__ + 0);
    } else {
        strcat(buffer, "__LINUX__\n");
    }
#endif




/* MACOS */
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


/* ## OS2 ## */
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




#ifdef WIN32
    if ( (WIN32   + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WIN32\t\t\t => %d\n", WIN32   + 0);
    } else {
        strcat(buffer, "WIN32\n");
    }
#endif

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


/* WIN64, WIN32, Win CE */
#ifdef WIN64
    if ( (WIN64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "WIN64 \t\t => %d\n", WIN64 + 0);
    } else {
        strcat(buffer, "WIN64\n");
    }
#endif
#ifdef _WIN64
    if ( (_WIN64 + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WIN64 \t\t => %d\n", _WIN64 + 0);
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
        sprintf(buffer + strlen(buffer), "_WINNT_\t\t\t => %d\n", _WINNT_   + 0);
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






/* ################### */
/* runtime type */

#ifdef _ATL_VER
    if ( (_ATL_VER + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_ATL_VER \t\t => %d\n", _ATL_VER + 0);
    } else {
        strcat(buffer, "_ATL_VER\n");
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
        sprintf(buffer + strlen(buffer), "__cplusplus \t\t => %d\n", __cplusplus + 0);
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
#ifdef _CPPUNWIND
    if ( (_CPPUNWIND + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CPPUNWIND \t\t => %d\n", _CPPUNWIND + 0);
    } else {
        strcat(buffer, "_CPPUNWIND\n");
    }
#endif


/* ToDo: GLIBC */


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


/* ############# */
/* debug options */

#ifdef DEBUG
    if ( (DEBUG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "DEBUG \t\t => %d\n", DEBUG + 0);
    } else {
        strcat(buffer, "DEBUG\n");
    }
#endif
#ifdef _DEBUG
    if ( (_DEBUG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_DEBUG \t\t => %d\n", _DEBUG + 0);
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




/* ################### */
/* optimize */
/* inline */

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


/* ################### */
/* target format */
#ifdef _MT
    if ( (_MT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_MT \t\t => %d\n", _MT + 0);
    } else {
        strcat(buffer, "_MT\n");
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

#ifdef __ASSEMBLER__
    if ( (__ASSEMBLER__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__ASSEMBLER__\t => %d\n", __ASSEMBLER__ + 0);
    } else {
        strcat(buffer, "__ASSEMBLER__\n");
    }
#endif



#ifdef DLL
    if ( (DLL + 1) > 1) {
        sprintf(buffer + strlen(buffer), "DLL \t\t => %d\n", DLL + 0);
    } else {
        strcat(buffer, "DLL\n");
    }
#endif
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
        sprintf(buffer + strlen(buffer), "__LP64__\t\t\t => %d\n", __LP64__ + 0);
    } else {
        strcat(buffer, "__LP64__\n");
    }
#endif

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
        sprintf(buffer + strlen(buffer), "_LITTLE_ENDIAN_\t\t => %d\n", _LITTLE_ENDIAN_ + 0);
    } else {
        strcat(buffer, "_LITTLE_ENDIAN_\n");
    }
#endif
#ifdef __LITTLE_ENDIAN
    if ( (__LITTLE_ENDIAN + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LITTLE_ENDIAN\t\t => %d\n", __LITTLE_ENDIAN + 0);
    } else {
        strcat(buffer, "__LITTLE_ENDIAN\n");
    }
#endif
#ifdef __LITTLE_ENDIAN__
    if ( (__LITTLE_ENDIAN__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LITTLE_ENDIAN__\t\t => %d\n", __LITTLE_ENDIAN__ + 0);
    } else {
        strcat(buffer, "__LITTLE_ENDIAN__\n");
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
        sprintf(buffer + strlen(buffer), "__BYTE_ORDER__ \t\t => %d\n", __BYTE_ORDER__ + 0);
    } else {
        strcat(buffer, "__BYTE_ORDER__\n");
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
        sprintf(buffer + strlen(buffer), "__CHAR_UNSIGNED__\t\t => %d\n", __CHAR_UNSIGNED__ + 0);
    } else {
        strcat(buffer, "__CHAR_UNSIGNED__\n");
    }
#endif



#ifdef __WCHAR_UNSIGNED__
    if ( (__WCHAR_UNSIGNED__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__WCHAR_UNSIGNED__\t\t => %d\n", __WCHAR_UNSIGNED__ + 0);
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




/* MAX values */
#ifdef SCHAR_MAX
    sprintf(buffer+strlen(buffer), "SCHAR_MAX\t\t => 0x%x\n", SCHAR_MAX);
#endif
#ifdef __SCHAR_MAX__
    sprintf(buffer+strlen(buffer), "__SCHAR_MAX__\t\t => 0x%x\n", __SCHAR_MAX__);
#endif
#ifdef CHAR_MAX
    sprintf(buffer+strlen(buffer), "CHAR_MAX\t\t => 0x%x\n", CHAR_MAX);
#endif
#ifdef __CHAR_MAX__
    sprintf(buffer+strlen(buffer), "__CHAR_MAX__\t\t => 0x%x\n", __CHAR_MAX__);
#endif
#ifdef UCHAR_MAX
    sprintf(buffer+strlen(buffer), "UCHAR_MAX\t\t => 0x%x\n", UCHAR_MAX);
#endif
#ifdef __UCHAR_MAX__
    sprintf(buffer+strlen(buffer), "__UCHAR_MAX__\t\t => 0x%x\n", __UCHAR_MAX__);
#endif



#ifdef SSHRT_MAX
    sprintf(buffer+strlen(buffer), "SSHRT_MAX\t\t => 0x%x\n", SSHRT_MAX);
#endif
#ifdef __SSHRT_MAX__
    sprintf(buffer+strlen(buffer), "__SSHRT_MAX__\t\t => 0x%x\n", __SSHRT_MAX__);
#endif
#ifdef SHRT_MAX
    sprintf(buffer+strlen(buffer), "SHRT_MAX\t\t => 0x%x\n", SHRT_MAX);
#endif
#ifdef __SHRT_MAX__
    sprintf(buffer+strlen(buffer), "__SHRT_MAX__\t\t => 0x%x\n", __SHRT_MAX__);
#endif
#ifdef USHRT_MAX
    sprintf(buffer+strlen(buffer), "USHRT_MAX\t\t => 0x%x\n", USHRT_MAX);
#endif
#ifdef __USHRT_MAX__
    sprintf(buffer+strlen(buffer), "__USHRT_MAX__\t\t => 0x%x\n", __USHRT_MAX__);
#endif


#ifdef WCHAR_MAX
    sprintf(buffer+strlen(buffer), "WCHAR_MAX\t\t => 0x%x\n", WCHAR_MAX);
#endif
#ifdef __WCHAR_MAX__
    sprintf(buffer+strlen(buffer), "__WCHAR_MAX__\t\t => 0x%x\n", __WCHAR_MAX__);
#endif


#ifdef SINT_MAX
    sprintf(buffer+strlen(buffer), "SINT_MAX\t\t => 0x%x\n", SINT_MAX);
#endif
#ifdef __SINT_MAX__
    sprintf(buffer+strlen(buffer), "__SINT_MAX__\t\t => 0x%x\n", __SINT_MAX__);
#endif
#ifdef INT_MAX
    sprintf(buffer+strlen(buffer), "INT_MAX\t\t\t => 0x%x\n", INT_MAX);
#endif
#ifdef __INT_MAX__
    sprintf(buffer+strlen(buffer), "__INT_MAX__\t\t => 0x%x\n", __INT_MAX__);
#endif
#ifdef UINT_MAX
    sprintf(buffer+strlen(buffer), "UINT_MAX\t\t => 0x%x\n", UINT_MAX);
#endif
#ifdef __UINT_MAX__
    sprintf(buffer+strlen(buffer), "__UINT_MAX__\t\t => 0x%x\n", __UINT_MAX__);
#endif



#ifdef SLONG_MAX
    sprintf(buffer+strlen(buffer), "SLONG_MAX\t\t => 0x%lx\n", SLONG_MAX);
#endif
#ifdef __SLONG_MAX__
    sprintf(buffer+strlen(buffer), "__SLONG_MAX__\t\t => 0x%lx\n", __SLONG_MAX__);
#endif
#ifdef LONG_MAX
    sprintf(buffer+strlen(buffer), "LONG_MAX\t\t => 0x%lx\n", LONG_MAX);
#endif
#ifdef __LONG_MAX__
    sprintf(buffer+strlen(buffer), "__LONG_MAX__\t\t => 0x%lx\n", __LONG_MAX__);
#endif
#ifdef ULONG_MAX
    sprintf(buffer+strlen(buffer), "ULONG_MAX\t\t => 0x%lx\n", ULONG_MAX);
#endif
#ifdef __ULONG_MAX__
    sprintf(buffer+strlen(buffer), "__ULONG_MAX__\t\t => 0x%lx\n", __ULONG_MAX__);
#endif


#ifdef _LONG_LONG
    if ( (_LONG_LONG + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_LONG_LONG\t\t\t => %d\n", _LONG_LONG + 0);
    } else {
        strcat(buffer, "_LONG_LONG\n");
    }
#endif


#ifdef __ULONG_LONG_MAX__
    sprintf(buffer+strlen(buffer), "__ULONG_LONG_MAX__\t => 0x%llx\n", __ULONG_LONG_MAX__);
#endif
#ifdef SLONG_LONG_MAX
    sprintf(buffer+strlen(buffer), "SLONG_LONG_MAX\t => 0x%llx\n", SLONG_LONG_MAX);
#endif
#ifdef __SLONG_LONG_MAX__
    sprintf(buffer+strlen(buffer), "__SLONG_LONG_MAX__\t => 0x%llx\n", __SLONG_LONG_MAX__);
#endif

#ifdef LLONG_MAX
    sprintf(buffer+strlen(buffer), "LLONG_MAX\t\t => 0x%llx\n", LLONG_MAX);
#endif
#ifdef LONG_LONG_MAX
    sprintf(buffer+strlen(buffer), "LONG_LONG_MAX\t => 0x%llx\n", LONG_LONG_MAX);
#endif
#ifdef __LONG_LONG_MAX__
    sprintf(buffer+strlen(buffer), "__LONG_LONG_MAX__\t => 0x%lx%08lx\n", 
            (long) (__LONG_LONG_MAX__ >>32), (unsigned long)(__LONG_LONG_MAX__ & 0xffffffff));
#endif
#ifdef ULLONG_MAX
    sprintf(buffer+strlen(buffer), "ULLONG_MAX\t\t => 0x%llx\n", ULLONG_MAX);
#endif
#ifdef ULONG_LONG_MAX
    sprintf(buffer+strlen(buffer), "ULONG_LONG_MAX\t => 0x%llx\n", ULONG_LONG_MAX);
#endif


#ifdef INTMAX_MAX
    sprintf(buffer+strlen(buffer), "INTMAX_MAX\t\t => 0x%llx\n", INTMAX_MAX);
#endif
#ifdef __INTMAX_MAX__
    sprintf(buffer+strlen(buffer), "__INTMAX_MAX__\t\t => 0x%llx\n", __INTMAX_MAX__);
#endif
#ifdef UINTMAX_MAX
    sprintf(buffer+strlen(buffer), "UINTMAX_MAX\t\t => 0x%llx\n", UINTMAX_MAX);
#endif
#ifdef __UINTMAX_MAX__
    sprintf(buffer+strlen(buffer), "__UINTMAX_MAX__\t\t => 0x%llx\n", __UINTMAX_MAX__);
#endif


/* MIN values */
#ifdef SCHAR_MIN
    sprintf(buffer+strlen(buffer), "SCHAR_MIN\t\t => 0x%x\n", SCHAR_MIN);
#endif
#ifdef __SCHAR_MIN__
    sprintf(buffer+strlen(buffer), "__SCHAR_MIN__\t\t => 0x%x\n", __SCHAR_MIN__);
#endif
#ifdef CHAR_MIN
    sprintf(buffer+strlen(buffer), "CHAR_MIN\t\t => 0x%x\n", CHAR_MIN);
#endif
#ifdef __CHAR_MIN__
    sprintf(buffer+strlen(buffer), "__CHAR_MIN__\t\t => 0x%x\n", __CHAR_MIN__);
#endif
#ifdef UCHAR_MIN
    sprintf(buffer+strlen(buffer), "UCHAR_MIN\t\t => 0x%x\n", UCHAR_MIN);
#endif
#ifdef __UCHAR_MIN__
    sprintf(buffer+strlen(buffer), "__UCHAR_MIN__\t\t => 0x%x\n", __UCHAR_MIN__);
#endif


#ifdef SSHRT_MIN
    sprintf(buffer+strlen(buffer), "SSHRT_MIN\t\t => 0x%x\n", SSHRT_MIN);
#endif
#ifdef __SSHRT_MIN__
    sprintf(buffer+strlen(buffer), "__SSHRT_MIN__\t\t => 0x%x\n", __SSHRT_MIN__);
#endif
#ifdef SHRT_MIN
    sprintf(buffer+strlen(buffer), "SHRT_MIN\t\t => 0x%x\n", SHRT_MIN);
#endif
#ifdef __SHRT_MIN__
    sprintf(buffer+strlen(buffer), "__SHRT_MIN__\t\t => 0x%x\n", __SHRT_MIN__);
#endif
#ifdef USHRT_MIN
    sprintf(buffer+strlen(buffer), "USHRT_MIN\t\t => 0x%x\n", USHRT_MIN);
#endif
#ifdef __USHRT_MIN__
    sprintf(buffer+strlen(buffer), "__USHRT_MIN__\t\t => 0x%x\n", __USHRT_MIN__);
#endif



#ifdef WCHAR_MIN
    sprintf(buffer+strlen(buffer), "WCHAR_MIN\t\t => 0x%x\n", WCHAR_MIN);
#endif
#ifdef __WCHAR_MIN__
    sprintf(buffer+strlen(buffer), "__WCHAR_MIN__\t\t => 0x%x\n", __WCHAR_MIN__);
#endif


#ifdef SINT_MIN
    sprintf(buffer+strlen(buffer), "SINT_MIN\t\t => 0x%x\n", SINT_MIN);
#endif
#ifdef __SINT_MIN__
    sprintf(buffer+strlen(buffer), "__SINT_MIN__\t\t => 0x%x\n", __SINT_MIN__);
#endif
#ifdef INT_MIN
    sprintf(buffer+strlen(buffer), "INT_MIN\t\t\t => 0x%x\n", INT_MIN);
#endif
#ifdef __INT_MIN__
    sprintf(buffer+strlen(buffer), "__INT_MIN__\t\t => 0x%x\n", __INT_MIN__);
#endif
#ifdef UINT_MIN
    sprintf(buffer+strlen(buffer), "UINT_MIN\t\t => 0x%x\n", UINT_MIN);
#endif
#ifdef __UINT_MIN__
    sprintf(buffer+strlen(buffer), "__UINT_MIN__\t\t => 0x%x\n", __UINT_MIN__);
#endif



#ifdef SLONG_MIN
    sprintf(buffer+strlen(buffer), "SLONG_MIN\t\t => 0x%lx\n", SLONG_MIN);
#endif
#ifdef __SLONG_MIN__
    sprintf(buffer+strlen(buffer), "__SLONG_MIN__\t\t => 0x%lx\n", __SLONG_MIN__);
#endif
#ifdef LONG_MIN
    sprintf(buffer+strlen(buffer), "LONG_MIN\t\t => 0x%lx\n", LONG_MIN);
#endif
#ifdef __LONG_MIN__
    sprintf(buffer+strlen(buffer), "__LONG_MIN__\t\t => 0x%lx\n", __LONG_MIN__);
#endif
#ifdef ULONG_MIN
    sprintf(buffer+strlen(buffer), "ULONG_MIN\t\t => 0x%lx\n", ULONG_MIN);
#endif
#ifdef __ULONG_MIN__
    sprintf(buffer+strlen(buffer), "__ULONG_MIN__\t\t => 0x%lx\n", __ULONG_MIN__);
#endif


#ifdef ULLONG_MIN
    sprintf(buffer+strlen(buffer), "ULLONG_MIN\t\t => 0x%lx\n", ULLONG_MIN);
#endif
#ifdef ULONG_LONG_MIN
    sprintf(buffer+strlen(buffer), "ULONG_LONG_MIN\t => 0x%llx\n", ULONG_LONG_MIN);
#endif
#ifdef __ULONG_LONG_MIN__
    sprintf(buffer+strlen(buffer), "__ULONG_LONG_MIN__\t => 0x%llx\n", __ULONG_LONG_MIN__);
#endif
#ifdef SLONG_LONG_MIN
    sprintf(buffer+strlen(buffer), "SLONG_LONG_MIN\t => 0x%llx\n", SLONG_LONG_MIN);
#endif
#ifdef __SLONG_LONG_MIN__
    sprintf(buffer+strlen(buffer), "__SLONG_LONG_MIN__\t => 0x%llx\n", __SLONG_LONG_MIN__);
#endif
#ifdef LLONG_MIN
    sprintf(buffer+strlen(buffer), "LLONG_MIN\t\t => 0x%llx\n", LLONG_MIN);
#endif
#ifdef LONG_LONG_MIN
    sprintf(buffer+strlen(buffer), "LONG_LONG_MIN\t => 0x%llx\n", LONG_LONG_MIN);
#endif
#ifdef __LONG_LONG_MIN__
    sprintf(buffer+strlen(buffer), "__LONG_LONG_MIN__\t => 0x%llx\n", __LONG_LONG_MIN__);
#endif



#ifdef INTMAX_MIN
    sprintf(buffer+strlen(buffer), "INTMAX_MIN\t\t => 0x%llx\n", INTMAX_MIN);
#endif
#ifdef __INTMAX_MIN__
    sprintf(buffer+strlen(buffer), "__INTMAX_MIN__\t\t => 0x%llx\n", __INTMAX_MIN__);
#endif
#ifdef UINTMAX_MIN
    sprintf(buffer+strlen(buffer), "UINTMAX_MIN\t\t => 0x%llx\n", UINTMAX_MIN);
#endif
#ifdef __UINTMAX_MIN__
    sprintf(buffer+strlen(buffer), "__UINTMAX_MIN__\t\t => 0x%llx\n", __UINTMAX_MIN__);
#endif


/* SIZEOF */
#ifdef __SIZEOF_SHORT__
    sprintf(buffer+strlen(buffer), "__SIZEOF_SHORT__\t => %d\n", __SIZEOF_SHORT__);
#endif
#ifdef __SIZEOF_WCHAR_T__
    sprintf(buffer+strlen(buffer), "__SIZEOF_WCHAR_T__\t => %d\n", __SIZEOF_WCHAR_T__);
#endif
#ifdef __SIZEOF_WINT_T__
    sprintf(buffer+strlen(buffer), "__SIZEOF_WINT_T__\t => %d\n", __SIZEOF_WINT_T__);
#endif
#ifdef __SIZEOF_INT__
    sprintf(buffer+strlen(buffer), "__SIZEOF_INT__  \t => %d\n", __SIZEOF_INT__);
#endif

#ifdef __SIZEOF_LONG__
    sprintf(buffer+strlen(buffer), "__SIZEOF_LONG__  \t => %d\n", __SIZEOF_LONG__);
#endif
#ifdef __SIZEOF_LONG_LONG__
    sprintf(buffer+strlen(buffer), "__SIZEOF_LONG_LONG__\t => %d\n", __SIZEOF_LONG_LONG__);
#endif

#ifdef __SIZEOF_POINTER__
    sprintf(buffer+strlen(buffer), "__SIZEOF_POINTER__\t => %d\n", __SIZEOF_POINTER__);
#endif

#ifdef __SIZEOF_FLOAT__
    sprintf(buffer+strlen(buffer), "__SIZEOF_FLOAT__\t => %d\n", __SIZEOF_FLOAT__);
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


/* number of bits */
#ifdef _INTEGRAL_MAX_BITS
    sprintf(buffer+strlen(buffer), "_INTEGRAL_MAX_BITS\t => %d\n", _INTEGRAL_MAX_BITS);
#endif

#ifdef HOST_BITS_PER_WIDEST_INT
    sprintf(buffer+strlen(buffer), "HOST_BITS_PER_WIDEST_INT\t => %d\n", HOST_BITS_PER_WIDEST_INT);
#endif

#ifdef __WORDSIZE
    sprintf(buffer+strlen(buffer), "__WORDSIZE\t\t => %d\n", __WORDSIZE);
#endif


#ifdef CHAR_BIT
    sprintf(buffer+strlen(buffer), "CHAR_BIT\t\t => %d\n", CHAR_BIT);
#endif
#ifdef __CHAR_BIT__
    sprintf(buffer+strlen(buffer), "__CHAR_BIT__\t\t => %d\n", __CHAR_BIT__);
#endif


/* ################### */
/* float */
/* see also: _FP_INLINE */

#ifdef _SOFT_FLOAT
    if ( (_SOFT_FLOAT + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_SOFT_FLOAT\t\t\t => %d\n", _SOFT_FLOAT + 0);
    } else {
        strcat(buffer, "_SOFT_FLOAT\n");
    }
#endif


#ifdef __MATH__
    if ( (__MATH__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MATH__\t\t\t => %d\n", __MATH__ + 0);
    } else {
        strcat(buffer, "__MATH__\n");
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



/* ################### */
/* types */


#define DUMP_TYPE(EXP) \
        do { if (sizeof( EXP ) > 0) \
             sprintf(buffer+strlen(buffer), "" #EXP "\n" ); \
             } while (0)


#ifdef __PTRDIFF_TYPE__
    sprintf(buffer+strlen(buffer), "__PTRDIFF_TYPE__ \t => size is %d: %s\n",
            sizeof( __PTRDIFF_TYPE__ ), __my_stringify( __PTRDIFF_TYPE__ ));
#endif


#ifdef __SIZE_TYPE__
     sprintf(buffer+strlen(buffer), "__SIZE_TYPE__\t\t => size is %d: %s\n",
            sizeof( __SIZE_TYPE__ ), __my_stringify( __SIZE_TYPE__ ) );
#endif

#ifdef __WCHAR_TYPE__
     sprintf(buffer+strlen(buffer), "__WCHAR_TYPE__\t\t => size is %d: %s\n",
            sizeof( __WCHAR_TYPE__ ), __my_stringify( __WCHAR_TYPE__ ) );
#endif
#ifdef _WCHAR_T_DEFINED
    if ( (_WCHAR_T_DEFINED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_WCHAR_T_DEFINED \t\t => %d\n", _WCHAR_T_DEFINED + 0);
    } else {
        strcat(buffer, "_WCHAR_T_DEFINED\n");
    }
#endif
#ifdef _NATIVE_WCHAR_T_DEFINED
    if ( (_NATIVE_WCHAR_T_DEFINED + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_NATIVE_WCHAR_T_DEFINED \t\t => %d\n", _NATIVE_WCHAR_T_DEFINED + 0);
    } else {
        strcat(buffer, "_NATIVE_WCHAR_T_DEFINED\n");
    }
#endif

#ifdef __WINT_TYPE__
    sprintf(buffer+strlen(buffer), "__WINT_TYPE__\t\t => size is %d: %s\n",
            sizeof( __WINT_TYPE__ ), __my_stringify( __WINT_TYPE__ ) );
#endif

#ifdef __INTMAX_TYPE__
    sprintf(buffer+strlen(buffer), "__INTMAX_TYPE__\t\t => size is %d: %s\n",
            sizeof( __INTMAX_TYPE__ ), __my_stringify( __INTMAX_TYPE__ ) );
#endif

#ifdef __UINTMAX_TYPE__
    sprintf(buffer+strlen(buffer), "__UINTMAX_TYPE__ \t => size is %d: %s\n",
            sizeof( __UINTMAX_TYPE__ ), __my_stringify( __UINTMAX_TYPE__ ) );
#endif

#ifdef __INTPTR_TYPE__
    sprintf(buffer+strlen(buffer), "__INTPTR_TYPE__\t\t => size is %d: %s\n",
            sizeof( __INTPTR_TYPE__ ), __my_stringify( __INTPTR_TYPE__ ) );
#endif



#ifdef HOST_WIDEST_INT
    sprintf(buffer+strlen(buffer), "HOST_WIDEST_INT  \t => size is %d: %s\n",
            sizeof( HOST_WIDEST_INT ), __my_stringify( HOST_WIDEST_INT ) );
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



/* ################### */
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

#ifdef __MEDIUM__
    if ( (__MEDIUM__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__MEDIUM__\t\t => %d\n", __MEDIUM__ + 0);
    } else {
        strcat(buffer, "__MEDIUM__\n");
    }
#endif

#ifdef __COMPACT__
    if ( (__COMPACT__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__COMPACT__\t\t => %d\n", __COMPACT__ + 0);
    } else {
        strcat(buffer, "__COMPACT__\n");
    }
#endif


#ifdef __LARGE__
    if ( (__LARGE__ + 1) > 1) {
        sprintf(buffer + strlen(buffer), "__LARGE__\t\t => %d\n", __LARGE__ + 0);
    } else {
        strcat(buffer, "__LARGE__\n");
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

/* ################### */
/* calling convention */

#ifdef _CALL_SYSV
    if ( (_CALL_SYSV + 1) > 1) {
        sprintf(buffer + strlen(buffer), "_CALL_SYSV \t => %d\n", _CALL_SYSV + 0);
    } else {
        strcat(buffer, "_CALL_SYSV\n");
    }
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


#ifdef cdecl
    strcat(buffer, "cdecl\n");
#endif
#ifdef _cdecl
    strcat(buffer, "_cdecl\n");
#endif
#ifdef __cdecl
    strcat(buffer, "__cdecl\n");
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

    sprintf(buffer+strlen(buffer), "(need %d byte)", strlen(buffer) + 16);

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
