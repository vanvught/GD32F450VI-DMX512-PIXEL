# 0 "src/remoteconfig.cpp"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "src/remoteconfig.cpp"
# 27 "src/remoteconfig.cpp"
#pragma GCC push_options
#pragma GCC optimize ("Os")


# 1 "../include/algorithm" 1
# 42 "../include/algorithm"
namespace std {

template<class T>
const T& max(const T& a, const T& b)
{
    return (a > b) ? a : b;
}

template<class T>
const T& min(const T& a, const T& b)
{
    return (a < b) ? a : b;
}

}
# 32 "src/remoteconfig.cpp" 2
# 1 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/cstdint" 1 3
# 32 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/cstdint" 3
       
# 33 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/cstdint" 3





# 1 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/arm-none-eabi/thumb/v7e-m+fp/hard/bits/c++config.h" 1 3
# 296 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/arm-none-eabi/thumb/v7e-m+fp/hard/bits/c++config.h" 3

# 296 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/arm-none-eabi/thumb/v7e-m+fp/hard/bits/c++config.h" 3
namespace std
{
  typedef unsigned int size_t;
  typedef int ptrdiff_t;


  typedef decltype(nullptr) nullptr_t;


#pragma GCC visibility push(default)


  extern "C++" __attribute__ ((__noreturn__, __always_inline__))
  inline void __terminate() noexcept
  {
    void terminate() noexcept __attribute__ ((__noreturn__));
    terminate();
  }
#pragma GCC visibility pop
}
# 329 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/arm-none-eabi/thumb/v7e-m+fp/hard/bits/c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
# 508 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/arm-none-eabi/thumb/v7e-m+fp/hard/bits/c++config.h" 3
namespace std
{
#pragma GCC visibility push(default)




  constexpr inline bool
  __is_constant_evaluated() noexcept
  {





    return __builtin_is_constant_evaluated();



  }
#pragma GCC visibility pop
}
# 655 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/arm-none-eabi/thumb/v7e-m+fp/hard/bits/c++config.h" 3
# 1 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/arm-none-eabi/thumb/v7e-m+fp/hard/bits/os_defines.h" 1 3
# 656 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/arm-none-eabi/thumb/v7e-m+fp/hard/bits/c++config.h" 2 3


# 1 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/arm-none-eabi/thumb/v7e-m+fp/hard/bits/cpu_defines.h" 1 3
# 659 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/arm-none-eabi/thumb/v7e-m+fp/hard/bits/c++config.h" 2 3
# 841 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/arm-none-eabi/thumb/v7e-m+fp/hard/bits/c++config.h" 3
# 1 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/pstl/pstl_config.h" 1 3
# 842 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/arm-none-eabi/thumb/v7e-m+fp/hard/bits/c++config.h" 2 3
# 39 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/cstdint" 2 3


# 1 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stdint.h" 1 3 4
# 11 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stdint.h" 3 4
# 1 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stdint-gcc.h" 1 3 4
# 34 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stdint-gcc.h" 3 4
typedef signed char int8_t;


typedef short int int16_t;


typedef long int int32_t;


typedef long long int int64_t;


typedef unsigned char uint8_t;


typedef short unsigned int uint16_t;


typedef long unsigned int uint32_t;


typedef long long unsigned int uint64_t;




typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int int_least32_t;
typedef long long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef short unsigned int uint_least16_t;
typedef long unsigned int uint_least32_t;
typedef long long unsigned int uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef long long unsigned int uint_fast64_t;




typedef int intptr_t;


typedef unsigned int uintptr_t;




typedef long long int intmax_t;
typedef long long unsigned int uintmax_t;
# 12 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stdint.h" 2 3 4
# 42 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/cstdint" 2 3


namespace std
{

  using ::int8_t;
  using ::int16_t;
  using ::int32_t;
  using ::int64_t;

  using ::int_fast8_t;
  using ::int_fast16_t;
  using ::int_fast32_t;
  using ::int_fast64_t;

  using ::int_least8_t;
  using ::int_least16_t;
  using ::int_least32_t;
  using ::int_least64_t;

  using ::intmax_t;
  using ::intptr_t;

  using ::uint8_t;
  using ::uint16_t;
  using ::uint32_t;
  using ::uint64_t;

  using ::uint_fast8_t;
  using ::uint_fast16_t;
  using ::uint_fast32_t;
  using ::uint_fast64_t;

  using ::uint_least8_t;
  using ::uint_least16_t;
  using ::uint_least32_t;
  using ::uint_least64_t;

  using ::uintmax_t;
  using ::uintptr_t;





}
# 33 "src/remoteconfig.cpp" 2
# 1 "../include/cstdio" 1
# 30 "../include/cstdio"
# 1 "../include/stdio.h" 1
# 29 "../include/stdio.h"
# 1 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stddef.h" 1 3 4
# 145 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 214 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 424 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 435 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stddef.h" 3 4
} max_align_t;






  typedef decltype(nullptr) nullptr_t;
# 30 "../include/stdio.h" 2
# 1 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stdarg.h" 1 3 4
# 40 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 31 "../include/stdio.h" 2





# 35 "../include/stdio.h"
typedef struct __sFILE {
 void *udata;
# 45 "../include/stdio.h"
 uint8_t flags;
} FILE;
# 68 "../include/stdio.h"
extern "C" {


int puts(const char *s);
int putchar(int c);

int fileno(FILE *stream);

FILE *fopen(const char *path, const char *mode);
int fclose(FILE *stream);

int fgetc(FILE *stream);
int fputc(int c, FILE *stream);

char *fgets(char *s, int size, FILE *stream);
int fputs(const char *s, FILE *stream);

size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);

int fseek(FILE *stream, long offset, int whence);

long ftell(FILE *stream);

void clearerr(FILE *stream);
int ferror(FILE *stream);
int feof(FILE *stream);

int printf(const char *format, ...);

int sprintf(char *str, const char *format, ...);
int snprintf(char *str, size_t size, const char *format, ...);

int vprintf(const char *format, va_list ap);
int vsnprintf(char *str, size_t size, const char *format, va_list);

void perror(const char *s);


}
# 31 "../include/cstdio" 2
# 34 "src/remoteconfig.cpp" 2
# 1 "../include/cstring" 1
# 29 "../include/cstring"
# 1 "../include/string.h" 1
# 29 "../include/string.h"
# 1 "../include/ctype.h" 1
# 30 "../include/ctype.h"
extern "C" {


inline int isdigit(int c) {
 return (c >= (int) '0' && c <= (int) '9') ? 1 : 0;
}

inline int isxdigit(int c) {
 return ((isdigit(c) != 0) || (((unsigned) c | 32) - (int) 'a' < 6)) ? 1 : 0;
}

inline int isprint(int c) {
 return ((c >= (int) ' ' && c <= (int) '~')) ? 1 : 0;
}

inline int isupper(int c) {
 return (c >= (int) 'A' && c <= (int) 'Z') ? 1 : 0;
}

inline int islower(int c) {
 return (c >= (int) 'a' && c <= (int) 'z') ? 1 : 0;
}

inline int isalpha(int c) {
 return ((isupper(c) != 0) || (islower(c) != 0)) ? 1 : 0;
}

inline int tolower(int c) {
 return ((isupper(c) != 0) ? (c + 32) : c);
}

inline int toupper(int c) {
 return ((islower(c) != 0) ? (c - 32) : c);
}

inline int isspace(int c) {
 return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ' ? 1 : 0);
}


}
# 30 "../include/string.h" 2
# 1 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stddef.h" 1 3 4
# 31 "../include/string.h" 2


extern "C" {


extern char *strerror(int errnum);
extern char *strtok(char *str, const char *delim);
extern char *strstr(const char *string, const char *substring);

inline int memcmp(const void *s1, const void *s2, size_t n) {
 unsigned char u1, u2;
 unsigned char *t1, *t2;

 t1 = (unsigned char *) s1;
 t2 = (unsigned char *) s2;

 for (; n-- != (size_t) 0; t1++, t2++) {
  u1 = *t1;
  u2 = *t2;
  if (u1 != u2) {
   return (u1 - u2);
  }
 }

 return 0;
}

inline void *memcpy(void *__restrict__ dest, const void *__restrict__ src, size_t n) {
 char *dp = (char *) dest;
 const char *sp = (const char *) src;

 while (n-- != (size_t) 0) {
  *dp++ = *sp++;
 }

 return dest;
}

inline void *mempcpy(void *__restrict__ dest, const void *__restrict__ src, size_t n) {
 return (char *)memcpy (dest, src, n) + n;
}

inline void *memmove(void *dst, const void *src, size_t n) {
 char *dp = (char *) dst;
 const char *sp = (const char *) src;

 if (dp < sp) {
  while (n-- != (size_t) 0) {
   *dp++ = *sp++;
  }
 } else {
  sp += n;
  dp += n;
  while (n-- != (size_t) 0) {
   *--dp = *--sp;
  }
 }

 return dst;
}

inline void *memset(void *dest, int c, size_t n) {
 char *dp = (char *) dest;

 while (n-- != (size_t) 0) {
  *dp++ = (char) c;
 }

 return dest;
}

inline size_t strlen(const char *s) {
 const char *p = s;

 while (*s != (char) 0) {
  ++s;
 }

 return (size_t) (s - p);
}

inline char *strcpy(char * __restrict__ s1, const char * __restrict__ s2) {
 char *s = s1;

 while ((*s++ = *s2++) != '\0')
  ;
 return s1;
}

inline char *strncpy(char * __restrict__ s1, const char * __restrict__ s2, size_t n) {
 char *s = s1;

 while (n > 0 && *s2 != '\0') {
  *s++ = *s2++;
  --n;
 }

 while (n > 0) {
  *s++ = '\0';
  --n;
 }

 return s1;
}

inline int strcmp(const char *s1, const char *s2) {
 unsigned char *p1 = (unsigned char *) s1;
 unsigned char *p2 = (unsigned char *) s2;

 for (; *p1 == *p2; p1++, p2++) {
  if (*p1 == (unsigned char) '\0') {
   return 0;
  }
 }

 return (*p1 - *p2);
}

inline int strncmp(const char *s1, const char *s2, size_t n) {
 unsigned char *p1 = (unsigned char *) s1;
 unsigned char *p2 = (unsigned char *) s2;

 for (; n > 0; p1++, p2++, --n) {
  if (*p1 != *p2) {
   return (*p1 - *p2);
  } else if (*p1 == (unsigned char) '\0') {
   return 0;
  }
 }

 return 0;
}

inline int strcasecmp(const char *s1, const char *s2) {
 unsigned char *p1 = (unsigned char *) s1;
 unsigned char *p2 = (unsigned char *) s2;

 for (; tolower((int) *p1) == tolower((int) *p2); p1++, p2++) {
  if (*p1 == (unsigned char) '\0') {
   return 0;
  }
 }

 return (tolower((int) *p1) - tolower((int) *p2));
}

inline int strncasecmp(const char *s1, const char *s2, size_t n) {
 unsigned char *p1 = (unsigned char *) s1;
 unsigned char *p2 = (unsigned char *) s2;

 for (; n > 0; p1++, p2++, --n) {
  if (tolower((int) *p1) != tolower((int) *p2)) {
   return (tolower((int) *p1) - tolower((int) *p2));
  } else if (*p1 == (unsigned char) '\0') {
   return 0;
  }
 }

 return 0;
}

inline char *strcat(char *s1, const char *s2) {
 strcpy(s1 + strlen(s1), s2);
 return s1;
}

inline char *strchr(const char *p, int ch) {
 char c = (char) ch;

 for (;; ++p) {
  if (*p == c) {
   return (char *)p;
  }
  if (*p == '\0') {
   return 
# 205 "../include/string.h" 3 4
         __null
# 205 "../include/string.h"
             ;
  }
 }

}


}
# 30 "../include/cstring" 2
# 46 "../include/cstring"
namespace std {
using ::memcmp;
using ::memcpy;
using ::memmove;
using ::memset;
using ::strcmp;
using ::strcpy;
using ::strerror;
using ::strlen;
using ::strncmp;
using ::strncpy;
using ::strtok;
using ::strchr;
using ::strstr;
}
# 35 "src/remoteconfig.cpp" 2
# 1 "../include/cassert" 1
# 30 "../include/cassert"
# 1 "../include/assert.h" 1
# 36 "../include/assert.h"
extern "C" {


extern void __assert_func(const char *file, int line, const char *func, const char *failedexpr);
# 50 "../include/assert.h"
}
# 31 "../include/cassert" 2
# 36 "src/remoteconfig.cpp" 2

# 1 "./include/remoteconfig.h" 1
# 60 "./include/remoteconfig.h"
# 1 "../lib-configstore/include/configstore.h" 1
# 33 "../lib-configstore/include/configstore.h"
# 1 "../lib-configstore/include/configstoredevice.h" 1
# 10 "../lib-configstore/include/configstoredevice.h"
namespace storedevice {
enum class result {
 OK, ERROR
};
}
# 23 "../lib-configstore/include/configstoredevice.h"
class StoreDevice {

public:
 StoreDevice();
 ~StoreDevice();

 bool IsDetected() const {
  return m_IsDetected;
 }
 uint32_t GetSectorSize() const;
 uint32_t GetSize() const;

 bool Read(uint32_t nOffset, uint32_t nLength, uint8_t *pBuffer, storedevice::result& nResult);
 bool Erase(uint32_t nOffset, uint32_t nLength, storedevice::result& nResult);
 bool Write(uint32_t nOffset, uint32_t nLength, const uint8_t *pBuffer, storedevice::result& nResult);

private:
 bool m_IsDetected { false };
};
# 34 "../lib-configstore/include/configstore.h" 2

# 1 "../lib-hal/include/utc.h" 1
# 29 "../lib-hal/include/utc.h"
# 1 "../lib-hal/include/debug.h" 1
# 30 "../lib-hal/include/utc.h" 2



namespace hal {
enum class UtcOffset {
 UTC_OFFSET_MIN = -12,
 UTC_OFFSET_MAX = 14
};

inline int32_t utc_validate(const float fOffset) {
 static constexpr float s_ValidOffets[] = { -9.5, -3.5, 3.5, 4.5, 5.5, 5.75, 6.5, 8.75, 9.5, 10.5, 12.75 };
 auto nInt = static_cast<int32_t>(fOffset);

 if ((nInt >= -12) && (nInt <= 14)) {
  if (fOffset == static_cast<float>(nInt)) {
   return (nInt * 3600);
  } else {
   for (uint32_t i = 0; i < sizeof(s_ValidOffets) / sizeof(s_ValidOffets[0]); i++) {
    if (fOffset == s_ValidOffets[i]) {
     return static_cast<int32_t>(fOffset * 3600.0f);
    }
   }
  }
 }

 return 0;
}

inline bool utc_validate(const int8_t nHours, const uint8_t nMinutes, int32_t& nUtcOffset) {
    struct Offset {
        int8_t nHours;
        uint8_t nMinutes;
    };

    static constexpr Offset s_ValidOffsets[] = { {-9, 30}, {-3, 30},
      {3, 30}, {4, 30}, {5, 30}, {5, 45}, {6, 30}, {8, 45}, {9, 30}, {10, 30}, {12, 45} };
    constexpr int8_t UTC_OFFSET_MIN = -12;
    constexpr int8_t UTC_OFFSET_MAX = 14;


    if (nHours >= UTC_OFFSET_MIN && nHours <= UTC_OFFSET_MAX) {

        if (nMinutes == 0) {
         nUtcOffset = nHours * 3600;
         return true;
        } else {
            for (const auto& offset : s_ValidOffsets) {
                if (nHours == offset.nHours && nMinutes == offset.nMinutes) {
                 nUtcOffset = (nHours * 3600);
                 if (nHours > 0) {
                  nUtcOffset = nUtcOffset + (nMinutes * 60);
                 } else {
                  nUtcOffset = nUtcOffset - (nMinutes * 60);
                 }
                 return true;
                }
            }
        }
    }


    return false;
}
}
# 36 "../lib-configstore/include/configstore.h" 2

# 1 "../lib-hal/include/debug.h" 1
# 38 "../lib-configstore/include/configstore.h" 2

namespace configstore {
enum class Store {
 NETWORK,
 DMXSEND,
 WS28XXDMX,
 LTC,
 MIDI,
 LTCETC,
 OSC,
 TLC5711DMX,
 WIDGET,
 RDMDEVICE,
 RCONFIG,
 TCNET,
 OSC_CLIENT,
 DISPLAYUDF,
 LTCDISPLAY,
 MONITOR,
 SPARKFUN,
 SLUSH,
 MOTORS,
 SHOW,
 SERIAL,
 RDMSENSORS,
 RDMSUBDEVICES,
 GPS,
 RGBPANEL,
 NODE,
 PCA9685,
 LAST
};

enum class State {
 IDLE, CHANGED, CHANGED_WAITING, ERASING, ERASED, ERASED_WAITING, WRITING
};
}

class ConfigStore: StoreDevice {
public:
 ConfigStore();
 ~ConfigStore() {
  while (Flash())
   ;
 }

 void Update(configstore::Store store, uint32_t nOffset, const void *pData, uint32_t nDataLength, uint32_t nSetList = 0, uint32_t nOffsetSetList = 0);
 void Update(configstore::Store store, const void *pData, uint32_t nDataLength) {
  Update(store, 0, pData, nDataLength);
 }

 void Copy(const configstore::Store store, void *pData, uint32_t nDataLength, uint32_t nOffset = 0, const bool doUpdate = true);

 void ResetSetList(configstore::Store store);
 void ResetSetListAll() {
  for (uint32_t i = 0; i < static_cast<uint32_t>(configstore::Store::LAST); i++) {
   ResetSetList(static_cast<configstore::Store>(i));
  }
 }

 bool Flash();

 void Dump();

 void Delay();





 bool SetEnvUtcOffset(const int8_t nHours, const uint8_t nMinutes) {
  int32_t nUtcOffset;

  ((void)0);

  if (hal::utc_validate(nHours, nMinutes, nUtcOffset)) {
   auto *p = reinterpret_cast<struct Env *>(&s_SpiFlashData[FlashStore::SIGNATURE_SIZE]);

   if (p->nUtcOffset != nUtcOffset) {
    p->nUtcOffset = nUtcOffset;
    s_State = configstore::State::CHANGED;
   }

   ((void)0);
   return true;
  }

  ((void)0);
  return false;
 }

 void GetEnvUtcOffset(int8_t& nHours, uint8_t& nMinutes) {
  const auto *p = reinterpret_cast<struct Env *>(&s_SpiFlashData[FlashStore::SIGNATURE_SIZE]);

  ((void)0);

  (static_cast<void>(0));
  (static_cast<void>(0));

  nHours = static_cast<int8_t>(p->nUtcOffset / 3600);

  if (nHours > 0) {
   nMinutes = static_cast<uint8_t>(static_cast<uint32_t>(p->nUtcOffset - (nHours * 3600)) / 60U);
  } else {
   nMinutes = static_cast<uint8_t>(static_cast<uint32_t>((nHours * 3600) - p->nUtcOffset) / 60U);
  }
 }

 int32_t GetEnvUtcOffset() const {
  const auto *p = reinterpret_cast<struct Env *>(&s_SpiFlashData[FlashStore::SIGNATURE_SIZE]);
  return p->nUtcOffset;
 }

 static ConfigStore *Get() {
  return s_pThis;
 }

private:
 uint32_t GetStoreOffset(configstore::Store tStore);

private:
 struct Env {
  int32_t nUtcOffset;
  uint8_t filler[12];
 };

 struct FlashStore {
  static constexpr uint32_t SIGNATURE_SIZE = 16;
  static constexpr uint32_t ENV_SIZE = 16;
  static constexpr uint32_t OFFSET_STORES = SIGNATURE_SIZE + ENV_SIZE;
  static constexpr uint32_t SIZE = 4096;
 };

 static_assert(sizeof(struct Env) == FlashStore::ENV_SIZE, "");

 static bool s_bHaveFlashChip;

 static configstore::State s_State;
 static uint32_t s_nStartAddress;

 static uint32_t s_nSpiFlashStoreSize;
 static uint8_t s_SpiFlashData[FlashStore::SIZE];

 static uint32_t s_nWaitMillis;

 static ConfigStore *s_pThis;
};
# 61 "./include/remoteconfig.h" 2
# 1 "../lib-network/include/network.h" 1
# 31 "../lib-network/include/network.h"
# 1 "../lib-network/include/ip4_address.h" 1
# 16 "../lib-network/include/ip4_address.h"
namespace network {
static constexpr uint32_t STORE = 96;
static constexpr uint32_t MAC_SIZE = 6;
static constexpr uint32_t HOSTNAME_SIZE = 64;
static constexpr uint32_t DOMAINNAME_SIZE = 64;
static constexpr uint32_t NAMESERVERS_COUNT = 3;
static constexpr uint32_t IP4_ANY = 0x00000000;
static constexpr uint32_t IP4_BROADCAST = 0xffffffff;

static constexpr uint32_t convert_to_uint(const uint8_t a, const uint8_t b, const uint8_t c, const uint8_t d) {
 return static_cast<uint32_t>(a) |
     static_cast<uint32_t>(b) << 8 |
     static_cast<uint32_t>(c) << 16 |
     static_cast<uint32_t>(d) << 24;
}

inline bool is_netmask_valid(uint32_t nNetMask) {
 if (nNetMask == 0) {
  return false;
 }
 nNetMask = __builtin_bswap32(nNetMask);
 return !(nNetMask & (~nNetMask >> 1));

}



inline bool is_private_ip(const uint32_t nIp) {
 const uint8_t n = (nIp >> 8) & 0xFF;

 switch (nIp & 0xFF) {
 case 10:
  return true;
  break;
 case 172:
  return (n >= 16) && (n < 32);
 case 192:
  return n == 168;
 default:
  break;
 }

 return false;
}

inline bool is_linklocal_ip(const uint32_t nIp) {
 return (nIp & 0xFFFF) == 0xA9FE;
}

inline bool is_multicast_ip(const uint32_t nIp) {
  return (nIp & 0xF0) == 0xE0;
}

inline uint32_t cidr_to_netmask(const uint8_t nCIDR) {
 if (nCIDR != 0) {
  const auto nNetmask = __builtin_bswap32(static_cast<uint32_t>(~0x0) << (32 - nCIDR));
  return nNetmask;
 }

 return 0;
}
}
# 32 "../lib-network/include/network.h" 2

namespace network {
namespace dhcp {
enum class Mode: uint8_t {
 INACTIVE = 0x00,
 ACTIVE = 0x01,
 UNKNOWN = 0x02
};
}
}
# 55 "../lib-network/include/network.h"
# 1 "../lib-network/include/emac/network.h" 1
# 37 "../lib-network/include/emac/network.h"
namespace net {
void dhcp_run();



}




# 1 "../include/net/if.h" 1
# 48 "../lib-network/include/emac/network.h" 2

# 1 "../lib-network/include/networkparams.h" 1
# 31 "../lib-network/include/networkparams.h"
# 1 "../lib-network/include/network.h" 1
# 32 "../lib-network/include/networkparams.h" 2


namespace networkparams {
namespace defaults {
static constexpr auto IS_DHCP_USED = true;
static constexpr auto DHCP_RETRY_TIME = 0;
}

struct Params {
 uint32_t nSetList;
 uint32_t nLocalIp;
 uint32_t nNetmask;
 uint32_t nGatewayIp;
 uint32_t nNameServerIp;
 bool bIsDhcpUsed;
 char aHostName[network::HOSTNAME_SIZE];
 uint32_t nNtpServerIp;
 float fNtpUtcOffset;
 uint8_t nDhcpRetryTime;




}__attribute__((packed));


 static_assert(sizeof(struct Params) <= network::STORE, "struct Params is too large");


struct Mask {
 static constexpr auto DHCP = (1U << 0);
 static constexpr auto IP_ADDRESS = (1U << 1);
 static constexpr auto NET_MASK = (1U << 2);
 static constexpr auto DEFAULT_GATEWAY = (1U << 3);
 static constexpr auto NAME_SERVER = (1U << 4);
 static constexpr auto HOSTNAME = (1U << 5);
 static constexpr auto NTP_SERVER = (1U << 6);
 static constexpr auto NTP_UTC_OFFSET = (1U << 7);
 static constexpr auto DHCP_RETRY_TIME = (1U << 8);
 static constexpr auto PTP_ENABLE = (1U << 9);
 static constexpr auto PTP_DOMAIN = (1U << 10);




};

}

class NetworkParamsStore {
public:
 static void Update(const struct networkparams::Params *pParams) {
  ConfigStore::Get()->Update(configstore::Store::NETWORK, pParams, sizeof(struct networkparams::Params));
 }

 static void Copy(struct networkparams::Params *pParams) {
  ConfigStore::Get()->Copy(configstore::Store::NETWORK, pParams, sizeof(struct networkparams::Params));
 }
};

class NetworkParams {
public:
 NetworkParams();

 void Load();
 void Load(const char *pBuffer, uint32_t nLength);

 void Builder(const networkparams::Params *pParams, char *pBuffer, uint32_t nLength, uint32_t& nSize);
 void Save(char *pBuffer, uint32_t nLength, uint32_t& nSize) {
  Builder(nullptr, pBuffer, nLength, nSize);
 }

 bool isDhcpUsed() const {
  return m_Params.bIsDhcpUsed;
 }

 uint8_t GetDhcpRetryTime() const {
  return m_Params.nDhcpRetryTime;
 }

 uint32_t GetIpAddress() const {
  return m_Params.nLocalIp;
 }

 uint32_t GetNetMask() const {
  return m_Params.nNetmask;
 }

 uint32_t GetDefaultGateway() const {
  return m_Params.nGatewayIp;
 }

 const char *GetHostName() const {
  return m_Params.aHostName;
 }

 uint32_t GetNtpServer() const {
  if (!isMaskSet(networkparams::Mask::NTP_SERVER)) {
   return 0;
  }
  return m_Params.nNtpServerIp;
 }

 float GetNtpUtcOffset() const {
  if (!isMaskSet(networkparams::Mask::NTP_UTC_OFFSET)) {
   return 0;
  }
  return m_Params.fNtpUtcOffset;
 }
# 156 "../lib-network/include/networkparams.h"
public:
    static void staticCallbackFunction(void *p, const char *s);

private:
 void Dump();
    void callbackFunction(const char *s);
    bool isMaskSet(uint32_t nMask) const {
     return (m_Params.nSetList & nMask) == nMask;
    }

private:
 networkparams::Params m_Params;
};
# 50 "../lib-network/include/emac/network.h" 2

# 1 "../lib-network/include/net.h" 1
# 31 "../lib-network/include/net.h"
# 1 "../lib-network/include/netif.h" 1
# 31 "../lib-network/include/netif.h"
# 1 "../lib-network/include/netif.h" 1
# 32 "../lib-network/include/netif.h" 2
# 40 "../lib-network/include/netif.h"
namespace net {
struct ip_addr {
 uint32_t addr;
};

typedef struct ip_addr ip4_addr_t;

struct netif {
 static constexpr uint8_t NETIF_FLAG_LINK_UP = (1U << 0);
 static constexpr uint8_t NETIF_FLAG_DHCP_OK = (1U << 1);
 static constexpr uint8_t NETIF_FLAG_AUTOIP_OK = (1U << 2);
 static constexpr uint8_t NETIF_FLAG_STATICIP_OK = (1U << 3);

 struct ip_addr ip;
 struct ip_addr netmask;
 struct ip_addr gw;
 struct ip_addr broadcast_ip;
 struct ip_addr secondary_ip;

 uint8_t hwaddr[6U];
 uint8_t flags;

 const char *hostname;

 void *dhcp;
 void *acd;
 void *autoip;
};

struct NetifReason {
 static constexpr uint16_t NSC_NONE = 0x0000;
 static constexpr uint16_t NSC_LINK_CHANGED = 0x0004;
 static constexpr uint16_t NSC_IPV4_ADDRESS_CHANGED = 0x0010;
 static constexpr uint16_t NSC_IPV4_GATEWAY_CHANGED = 0x0020;
 static constexpr uint16_t NSC_IPV4_NETMASK_CHANGED = 0x0040;
 static constexpr uint16_t NSC_IPV4_SETTINGS_CHANGED = 0x0080;
 static constexpr uint16_t NSC_IPV4_ADDR_VALID = 0x0400;
};

struct ipv4_changed {
 ip4_addr_t old_address;
 ip4_addr_t old_netmask;
 ip4_addr_t old_gw;
};

struct link_changed {

 uint8_t state;
} ;

union netif_ext_callback_args_t {
 struct link_changed link_changed;
 struct ipv4_changed ipv4_changed;
};

namespace globals {
extern struct netif netif_default;
}

typedef void (* netif_ext_callback_fn)(const uint16_t reason, const netif_ext_callback_args_t *args);

inline void netif_set_flags(uint8_t flags) {
 globals::netif_default.flags |= flags;
}

inline void netif_clear_flags(uint8_t flags) {
 globals::netif_default.flags &= static_cast<uint8_t>(~flags);
}

inline bool netif_dhcp() {
 return (globals::netif_default.flags & netif::NETIF_FLAG_DHCP_OK) == netif::NETIF_FLAG_DHCP_OK;
}

inline bool netif_autoip() {
 return (globals::netif_default.flags & netif::NETIF_FLAG_AUTOIP_OK) == netif::NETIF_FLAG_AUTOIP_OK;
}

inline uint32_t netif_ipaddr() {
 return globals::netif_default.ip.addr;
}

inline uint32_t netif_netmask() {
 return globals::netif_default.netmask.addr;
}

inline uint32_t netif_gw() {
 return globals::netif_default.gw.addr;
}

inline void netif_set_hostname(const char *hostname) {
 globals::netif_default.hostname = hostname;
}

inline const char *netif_hostname() {
 return globals::netif_default.hostname;
}

inline uint32_t netif_secondary_ipaddr() {
 return globals::netif_default.secondary_ip.addr;
}

inline uint32_t netif_broadcast_ipaddr() {
 return globals::netif_default.broadcast_ip.addr;
}

inline const uint8_t *netif_hwaddr() {
 return globals::netif_default.hwaddr;
}
void netif_init();
void netif_set_ipaddr(const ip4_addr_t ipaddr);
void netif_set_netmask(const ip4_addr_t netmask);
void netif_set_gw(const ip4_addr_t gw);
void netif_set_addr(const ip4_addr_t ipaddr, const ip4_addr_t netmask, const ip4_addr_t gw);

void netif_add_ext_callback(netif_ext_callback_fn fn);





void netif_set_link_up();
void netif_set_link_down();

inline bool netif_is_link_up() {
 return (globals::netif_default.flags & netif::NETIF_FLAG_LINK_UP) == netif::NETIF_FLAG_LINK_UP;
}
}
# 32 "../lib-network/include/net.h" 2
# 1 "../lib-network/include/emac/phy.h" 1
# 38 "../lib-network/include/emac/phy.h"
namespace net {
enum class Link {
 STATE_DOWN, STATE_UP
};

enum class Duplex {
 DUPLEX_HALF, DUPLEX_FULL
};

enum class Speed {
 SPEED10, SPEED100, SPEED1000
};

struct PhyStatus {
 Link link;
 Duplex duplex;
 Speed speed;
 bool bAutonegotiation;
};

struct PhyIdentifier {
 uint32_t nOui;
 uint16_t nVendorModel;
 uint16_t nModelRevision;
};





bool phy_get_id(const uint32_t nAddress, PhyIdentifier& phyIdentifier);
Link phy_get_link(const uint32_t nAddress);






bool phy_powerdown(const uint32_t nAddress);
# 85 "../lib-network/include/emac/phy.h"
bool phy_start(const uint32_t nAddress, PhyStatus& phyStatus);


const char *phy_string_get_link(const Link link);
const char *phy_string_get_duplex(const Duplex duplex);
const char *phy_string_get_speed(const Speed speed);
const char *phy_string_get_autonegotiation(const bool autonegotiation);
# 106 "../lib-network/include/emac/phy.h"
bool phy_read(const uint32_t nAddress, const uint32_t nRegister, uint16_t& nValue);
# 115 "../lib-network/include/emac/phy.h"
bool phy_write(const uint32_t nAddress, const uint32_t nRegister, uint16_t nValue);







bool phy_config(const uint32_t nAddress);





void phy_customized_led();
void phy_customized_timing();
void phy_customized_status(PhyStatus& phyStatus);

}
# 33 "../lib-network/include/net.h" 2
# 1 "../lib-network/include/net/dhcp.h" 1
# 34 "../lib-network/include/net/dhcp.h"
# 1 "../lib-network/include/netif.h" 1
# 35 "../lib-network/include/net/dhcp.h" 2
# 1 "../lib-network/include/net/acd.h" 1
# 35 "../lib-network/include/net/acd.h"
# 1 "../lib-network/include/net/arp.h" 1
# 30 "../lib-network/include/net/arp.h"
# 1 "../lib-network/include/net/protocol/ip4.h" 1
# 30 "../lib-network/include/net/protocol/ip4.h"
# 1 "../lib-network/include/net/protocol/ethernet.h" 1
# 35 "../lib-network/include/net/protocol/ethernet.h"
enum MTU {
 MTU_SIZE = 1500
};

enum ETH_ADDR {
 ETH_ADDR_LEN = 6
};

struct ether_header {
 uint8_t dst[ETH_ADDR_LEN];
 uint8_t src[ETH_ADDR_LEN];
 uint16_t type;
} __attribute__((packed));

namespace net {
static constexpr uint32_t ETH_HWADDR_LEN = 6;


}
# 31 "../lib-network/include/net/protocol/ip4.h" 2





enum IPv4_ADDR {
 IPv4_ADDR_LEN = 4
};

enum IPv4_PROTO {
 IPv4_PROTO_ICMP = 1,
 IPv4_PROTO_IGMP = 2,
 IPv4_PROTO_TCP = 6,
 IPv4_PROTO_UDP = 17
};

enum IPv4_FLAG {
 IPv4_FLAG_LF = 0x0000,
 IPv4_FLAG_MF = 0x2000,
 IPv4_FLAG_DF = 0x4000
};

struct ip4_header {
 uint8_t ver_ihl;
 uint8_t tos;
 uint16_t len;
 uint16_t id;
 uint16_t flags_froff;
 uint8_t ttl;
 uint8_t proto;
 uint16_t chksum;
 uint8_t src[IPv4_ADDR_LEN];
 uint8_t dst[IPv4_ADDR_LEN];
} __attribute__((packed));

struct t_ip4 {
 struct ether_header ether;
 struct ip4_header ip4;
} __attribute__((packed));
# 31 "../lib-network/include/net/arp.h" 2
# 1 "../lib-network/include/net/protocol/arp.h" 1
# 29 "../lib-network/include/net/protocol/arp.h"
# 1 "../lib-network/include/ip4_address.h" 1
# 30 "../lib-network/include/net/protocol/arp.h" 2

# 1 "../lib-network/include/net/protocol/ieee.h" 1
# 31 "../lib-network/include/net/protocol/ieee.h"
enum ETHER_TYPE {
 ETHER_TYPE_IPv4 = 0x0800,
 ETHER_TYPE_ARP = 0x0806,
 ETHER_TYPE_PTP = 0x88F7
};
# 32 "../lib-network/include/net/protocol/arp.h" 2





enum ARP_HARDWARE_TYPE {
 ARP_HWTYPE_ETHERNET = 1
};

enum ARP_PROTOCOL_TYPE {
 ARP_PRTYPE_IPv4 = ETHER_TYPE_IPv4
};

enum ARP_HARDWARE {
 ARP_HARDWARE_SIZE = ETH_ADDR_LEN
};

enum ARP_PROTOCOL {
 ARP_PROTOCOL_SIZE = IPv4_ADDR_LEN
};

enum ARP_OPCODE {
 ARP_OPCODE_RQST = 1,
 ARP_OPCODE_REPLY = 2
};

struct arp_packet {
 uint16_t hardware_type;
 uint16_t protocol_type;
 uint8_t hardware_size;
 uint8_t protocol_size;
 uint16_t opcode;
 uint8_t sender_mac[ETH_ADDR_LEN];
 uint8_t sender_ip[IPv4_ADDR_LEN];
 uint8_t target_mac[ETH_ADDR_LEN];
 uint8_t target_ip[IPv4_ADDR_LEN];
 uint8_t padding[18];
} __attribute__((packed));

struct t_arp {
 struct ether_header ether;
 struct arp_packet arp;
} __attribute__((packed));
# 32 "../lib-network/include/net/arp.h" 2
# 1 "../lib-network/include/net/protocol/udp.h" 1
# 38 "../lib-network/include/net/protocol/udp.h"
struct t_udp_packet {
 uint16_t source_port;
 uint16_t destination_port;
 uint16_t len;
 uint16_t checksum;


 uint8_t data[(MTU_SIZE - 8 - sizeof(struct ip4_header))];
}__attribute__((packed));

struct t_udp {
 struct ether_header ether;
 struct ip4_header ip4;
 struct t_udp_packet udp;
} __attribute__((packed));
# 33 "../lib-network/include/net/arp.h" 2

namespace net {
namespace arp {
enum class Flags {
 FLAG_INSERT, FLAG_UPDATE
};
}

void arp_init();
void arp_handle(struct t_arp *);
void arp_send(struct t_udp *, const uint32_t, const uint32_t);



void arp_acd_probe(const ip4_addr_t ipaddr);
void arp_acd_send_announcement(const ip4_addr_t ipaddr);
}
# 36 "../lib-network/include/net/acd.h" 2
# 1 "../lib-network/include/net/protocol/acd.h" 1
# 31 "../lib-network/include/net/protocol/acd.h"
namespace net::acd {
# 46 "../lib-network/include/net/protocol/acd.h"
enum class State: uint8_t {
  ACD_STATE_OFF,
  ACD_STATE_PROBE_WAIT,
  ACD_STATE_PROBING,
  ACD_STATE_ANNOUNCE_WAIT,
  ACD_STATE_ANNOUNCING,
  ACD_STATE_ONGOING,
  ACD_STATE_PASSIVE_ONGOING,
  ACD_STATE_RATE_LIMIT
};

enum class Callback {
  ACD_IP_OK,
  ACD_RESTART_CLIENT,
  ACD_DECLINE
};
}
# 37 "../lib-network/include/net/acd.h" 2







namespace net {
typedef void (*acd_conflict_callback_t)(acd::Callback callback);

namespace acd {
struct Acd {
 ip4_addr_t ipaddr;
 State state;
 uint8_t sent_num;
 uint8_t lastconflict;
 uint8_t num_conflicts;
 acd_conflict_callback_t acd_conflict_callback;
 uint16_t ttw;
};
}

void acd_add(struct acd::Acd *, acd_conflict_callback_t);
void acd_remove(struct acd::Acd *);

void acd_start(struct acd::Acd *, const ip4_addr_t ipaddr);
void acd_stop(struct acd::Acd *);

void acd_arp_reply(struct t_arp *);

void acd_network_changed_link_down();
void acd_netif_ip_addr_changed(const ip4_addr_t nOldIpAddress, const ip4_addr_t nNewIpAddress);
}
# 36 "../lib-network/include/net/dhcp.h" 2

# 1 "../lib-network/include/net/protocol/dhcp.h" 1
# 31 "../lib-network/include/net/protocol/dhcp.h"
# 1 "../lib-network/include/net/protocol/ip4.h" 1
# 32 "../lib-network/include/net/protocol/dhcp.h" 2

namespace net::dhcp {
static constexpr uint32_t OPT_SIZE = 312;
static constexpr uint32_t MAGIC_COOKIE = 0x63825363;

struct OpCode {
 static constexpr uint8_t BOOTREQUEST = 1;
 static constexpr uint8_t BOOTREPLY = 2;
};

struct HardwareType {
 static constexpr uint8_t HTYPE_10MB = 1;
 static constexpr uint8_t HTYPE_100MB = 2;
};

struct Type {
 static constexpr uint8_t DISCOVER = 1;
 static constexpr uint8_t OFFER = 2;
 static constexpr uint8_t REQUEST = 3;
 static constexpr uint8_t DECLINE = 4;
 static constexpr uint8_t ACK = 5;
 static constexpr uint8_t NAK = 6;
 static constexpr uint8_t RELEASE = 7;
 static constexpr uint8_t INFORM = 8;
};

struct Options {

 static constexpr uint8_t OPTION_PAD_OPTION = 0;
 static constexpr uint8_t OPTION_SUBNET_MASK = 1;
 static constexpr uint8_t OPTION_ROUTER = 3;
 static constexpr uint8_t OPTION_DNS_SERVER = 6;
 static constexpr uint8_t OPTION_HOSTNAME = 12;
 static constexpr uint8_t OPTION_DOMAIN_NAME = 15;
 static constexpr uint8_t OPTION_IP_TTL = 23;
 static constexpr uint8_t OPTION_MTU = 26;
 static constexpr uint8_t OPTION_BROADCAST = 28;
 static constexpr uint8_t OPTION_TCP_TTL = 37;
 static constexpr uint8_t OPTION_NTP = 42;
 static constexpr uint8_t OPTION_END = 255;

 static constexpr uint8_t OPTION_REQUESTED_IP = 50;
 static constexpr uint8_t OPTION_LEASE_TIME = 51;
 static constexpr uint8_t OPTION_OVERLOAD = 52;
 static constexpr uint8_t OPTION_MESSAGE_TYPE = 53;
 static constexpr uint8_t OPTION_SERVER_IDENTIFIER = 54;
 static constexpr uint8_t OPTION_PARAM_REQUEST = 55;
 static constexpr uint8_t OPTION_MAX_MSG_SIZE = 57;
 static constexpr uint8_t OPTION_DHCP_T1_VALUE = 58;
 static constexpr uint8_t OPTION_DHCP_T2_VALUE = 59;
 static constexpr uint8_t OPTION_CLIENT_IDENTIFIER = 61;
};

enum class State: uint8_t {
 STATE_OFF = 0,
 STATE_REQUESTING = 1,
 STATE_INIT = 2,
 STATE_REBOOTING = 3,
 STATE_REBINDING = 4,
 STATE_RENEWING = 5,
 STATE_SELECTING = 6,
 STATE_INFORMING = 7,
 STATE_CHECKING = 8,
 STATE_PERMANENT = 9,
 STATE_BOUND = 10,
 STATE_RELEASING = 11,
 STATE_BACKING_OFF = 12
};

struct Message {
 uint8_t op;
 uint8_t htype;
 uint8_t hlen;
 uint8_t hops;
 uint32_t xid;
 uint16_t secs;
 uint16_t flags;
 uint8_t ciaddr[IPv4_ADDR_LEN];
 uint8_t yiaddr[IPv4_ADDR_LEN];
 uint8_t siaddr[IPv4_ADDR_LEN];
 uint8_t giaddr[IPv4_ADDR_LEN];
 uint8_t chaddr[16];
 uint8_t sname[64];
 uint8_t file[128];
 uint8_t options[dhcp::OPT_SIZE];
} __attribute__((packed));
}
# 38 "../lib-network/include/net/dhcp.h" 2
# 1 "../lib-network/include/net/protocol/iana.h" 1
# 31 "../lib-network/include/net/protocol/iana.h"
namespace net::iana {
static constexpr uint16_t IANA_PORT_DHCP_SERVER = 67;
static constexpr uint16_t IANA_PORT_DHCP_CLIENT = 68;
static constexpr uint16_t IANA_PORT_TFTP = 69;
static constexpr uint16_t IANA_PORT_HTTP = 80;
static constexpr uint16_t IANA_PORT_NTP_SERVER = 123;
static constexpr uint16_t IANA_PORT_MDNS = 5353;
}
# 39 "../lib-network/include/net/dhcp.h" 2



namespace net {
namespace dhcp {
static constexpr uint32_t DHCP_COARSE_TIMER_SECS = 60;

static constexpr uint32_t DHCP_COARSE_TIMER_MSECS = (DHCP_COARSE_TIMER_SECS * 1000UL);

static constexpr uint32_t DHCP_FINE_TIMER_MSECS = 500;




enum class AutoipCoopState {
  DHCP_AUTOIP_COOP_STATE_OFF = 0,
  DHCP_AUTOIP_COOP_STATE_ON = 1
};

typedef uint16_t dhcp_timeout_t;

struct Dhcp {
 int32_t nHandle;
 uint32_t xid;
 State state;
 uint8_t tries;
 uint8_t flags;

 dhcp_timeout_t request_timeout;
 dhcp_timeout_t t1_timeout;
 dhcp_timeout_t t2_timeout;
 dhcp_timeout_t t1_renew_time;
 dhcp_timeout_t t2_rebind_time;
 dhcp_timeout_t lease_used;
 dhcp_timeout_t t0_timeout;

 ip4_addr_t server_ip_addr;

 struct Offered {
  ip4_addr_t offered_ip_addr;
  ip4_addr_t offered_sn_mask;
  ip4_addr_t offered_gw_addr;

  uint32_t offered_t0_lease;
  uint32_t offered_t1_renew;
  uint32_t offered_t2_rebind;
 };

 Offered offered;

 acd::Acd acd;
};
}

bool dhcp_start();
bool dhcp_renew();
bool dhcp_release();
void dhcp_stop();
void dhcp_release_and_stop();
void dhcp_inform();
void dhcp_network_changed_link_up();

uint32_t udp_recv2(int, const uint8_t **, uint32_t *, uint16_t *);
void dhcp_process(const dhcp::Message *const, const uint32_t nSize);

inline void dhcp_run() {
 auto *dhcp = reinterpret_cast<struct dhcp::Dhcp *>(globals::netif_default.dhcp);
 if (dhcp == nullptr) {
  return;
 }

 uint8_t *pResponse;
 uint32_t nFromIp;
 uint16_t nFromPort;

 const auto nSize = udp_recv2(dhcp->nHandle, const_cast<const uint8_t **>(&pResponse), &nFromIp, &nFromPort);

 if (__builtin_expect((nSize > 0), 0)) {
  if (nFromPort == net::iana::IANA_PORT_DHCP_SERVER) {
   const auto *const p = reinterpret_cast<dhcp::Message *>(pResponse);

   if (p->xid != dhcp->xid) {
    ((void)0);
    return;
   }

   dhcp_process(p, nSize);
  }
 }
}

inline bool dhcp_supplied_address() {
 const auto *dhcp = reinterpret_cast<struct dhcp::Dhcp *>(globals::netif_default.dhcp);
 if ((dhcp != nullptr)) {
  return (dhcp->state == dhcp::State::STATE_BOUND) || (dhcp->state == dhcp::State::STATE_RENEWING) || (dhcp->state == dhcp::State::STATE_REBINDING);
 }
 return false;
}
}
# 34 "../lib-network/include/net.h" 2
# 1 "../lib-network/include/net/protocol/dhcp.h" 1
# 35 "../lib-network/include/net.h" 2



namespace network {
void mdns_shutdown();
}

namespace net {
void tcp_shutdown();
void igmp_shutdown();
}

namespace net {
void net_init(net::Link link, ip4_addr_t ipaddr, ip4_addr_t netmask, ip4_addr_t gw, bool &bUseDhcp);
void net_set_primary_ip(const ip4_addr_t ipaddr);
void net_set_secondary_ip();
void net_handle();

inline void net_link_down() {
 network::mdns_shutdown();



 igmp_shutdown();
 dhcp_release_and_stop();
}

int udp_begin(uint16_t);
int udp_end(uint16_t);
uint32_t udp_recv1(int, uint8_t *, uint32_t, uint32_t *, uint16_t *);
uint32_t udp_recv2(int, const uint8_t **, uint32_t *, uint16_t *);
void udp_send(int, const uint8_t *, uint32_t, uint32_t, uint16_t);
void udp_send_timestamp(int, const uint8_t *, uint32_t, uint32_t, uint16_t);

void igmp_join(uint32_t);
void igmp_leave(uint32_t);

int tcp_begin(const uint16_t);
uint16_t tcp_read(const int32_t, const uint8_t **, uint32_t &);
void tcp_write(const int32_t, const uint8_t *, uint32_t, const uint32_t);




void display_emac_config();
void display_emac_start();
void display_emac_status(const bool);
void display_emac_shutdown();
void display_ip();
void display_netmask();
void display_gateway();
void display_hostname();
void display_dhcp_status(net::dhcp::State);
}
# 52 "../lib-network/include/emac/network.h" 2


# 1 "../lib-network/include/net/dhcp.h" 1
# 55 "../lib-network/include/emac/network.h" 2

# 1 "../lib-network/include/emac/net_link_check.h" 1
# 29 "../lib-network/include/emac/net_link_check.h"
# 1 "../lib-network/include/emac/phy.h" 1
# 30 "../lib-network/include/emac/net_link_check.h" 2

namespace net {
net::Link link_status_read();
# 56 "../lib-network/include/emac/net_link_check.h"
void link_handle_change(const net::Link state);
}
# 57 "../lib-network/include/emac/network.h" 2



class Network {
public:
 Network();
 ~Network() = default;

 void Print();

 void MacAddressCopyTo(uint8_t *pMacAddress) {
  memcpy(pMacAddress, net::netif_hwaddr(), 6U);
 }

 uint32_t GetSecondaryIp() {
  return net::netif_secondary_ipaddr();
 }

 void SetIp(uint32_t nIp);
 uint32_t GetIp() {
  return net::netif_ipaddr();
 }

 void SetNetmask(uint32_t nNetmask);
 uint32_t GetNetmask() {
  return net::netif_netmask();
 }

 void SetGatewayIp(uint32_t nGatewayIp);
 uint32_t GetGatewayIp() {
  return net::netif_gw();
 }

 uint32_t GetBroadcastIp() {
  return net::netif_broadcast_ipaddr();
 }





 bool IsDhcpCapable() const {
  return m_IsDhcpCapable;
 }

 void EnableDhcp();

 bool IsDhcpUsed() {
  const auto b = net::netif_dhcp();
  return b;
 }

 bool IsDhcpKnown() const {
  return true;
 }

 network::dhcp::Mode GetDhcpMode() {
  if (IsDhcpUsed()) {
   return network::dhcp::Mode::ACTIVE;
  }

  return network::dhcp::Mode::INACTIVE;
 }





 void SetZeroconf();
 bool IsZeroconfUsed() const {
  return net::netif_autoip();
 }

 bool IsZeroconfCapable() const {
  return m_IsZeroconfCapable;
 }





 void SetHostName(const char *pHostName);
 const char *GetHostName() const {
  return m_aHostName;
 }





 void SetDomainName(const char *pDomainName) {
  strncpy(m_aDomainName, pDomainName, network::DOMAINNAME_SIZE - 1);
  m_aDomainName[network::DOMAINNAME_SIZE - 1] = '\0';
 }
 const char *GetDomainName() const {
  return m_aDomainName;
 }





 uint32_t GetNameServer(const uint32_t nIndex) const {
  if (nIndex < network::NAMESERVERS_COUNT) {
   return m_nNameservers[nIndex];
  }

  return 0;
 }

 uint32_t GetNameServers() const {
  return network::NAMESERVERS_COUNT;
 }

 const char *GetIfName() const {
  return m_aIfName;
 }

 uint32_t GetIfIndex() const {
  return 1;
 }





 int32_t Begin(uint16_t nPort) {
  const auto nIndex = net::udp_begin(nPort);
  (static_cast<void>(0));
  return nIndex;
 }

 int32_t End(uint16_t nPort) {
  const auto nIndex = net::udp_end(nPort);
  (static_cast<void>(0));
  return nIndex;
 }

 uint32_t RecvFrom(int32_t nHandle, void *pBuffer, uint32_t nLength, uint32_t *from_ip, uint16_t *from_port) {
  return net::udp_recv1(nHandle, reinterpret_cast<uint8_t *>(pBuffer), nLength, from_ip, from_port);
 }

 uint32_t RecvFrom(int32_t nHandle, const void **ppBuffer, uint32_t *pFromIp, uint16_t *pFromPort) {
  return net::udp_recv2(nHandle, reinterpret_cast<const uint8_t **>(ppBuffer), pFromIp, pFromPort);
 }

 void SendTo(int32_t nHandle, const void *pBuffer, uint32_t nLength, uint32_t to_ip, uint16_t remote_port) {
  if (__builtin_expect((GetIp() != 0), 1)) {
   net::udp_send(nHandle, reinterpret_cast<const uint8_t *>(pBuffer), nLength, to_ip, remote_port);
  }
 }

 void SendToTimestamp(int32_t nHandle, const void *pBuffer, uint32_t nLength, uint32_t to_ip, uint16_t remote_port) {
  net::udp_send_timestamp(nHandle, reinterpret_cast<const uint8_t *>(pBuffer), nLength, to_ip, remote_port);
 }





 int32_t TcpBegin(const uint16_t nLocalPort) {
  return net::tcp_begin(nLocalPort);
 }

 int32_t TcpEnd(const int32_t nHandle);

 uint16_t TcpRead(const int32_t nHandleListen, const uint8_t **ppBuffer, uint32_t &HandleConnection) {
  return net::tcp_read(nHandleListen, ppBuffer, HandleConnection);
 }

 void TcpWrite(const int32_t nHandleListen, const uint8_t *pBuffer, uint32_t nLength, const uint32_t HandleConnection) {
  net::tcp_write(nHandleListen, pBuffer, nLength, HandleConnection);
 }





 void JoinGroup([[maybe_unused]] int32_t nHandle, uint32_t nIp) {
  net::igmp_join(nIp);
 }

 void LeaveGroup([[maybe_unused]] int32_t nHandle, uint32_t nIp) {
  net::igmp_leave(nIp);
 }

 void SetQueuedStaticIp(const uint32_t nStaticIp, const uint32_t nNetmask);
 void SetQueuedDefaultRoute(const uint32_t nGatewayIp);
 void SetQueuedDhcp(const network::dhcp::Mode mode) {
  m_QueuedConfig.mode = mode;
  m_QueuedConfig.nMask |= QueuedConfig::DHCP;
 }
 void SetQueuedZeroconf() {
  m_QueuedConfig.nMask |= QueuedConfig::ZEROCONF;
 }

 bool ApplyQueuedConfig();

 uint32_t GetNetmaskCIDR() {
  return static_cast<uint32_t>(__builtin_popcount(GetNetmask()));
 }

 char GetAddressingMode() {
  if (IsZeroconfUsed()) {
   return 'Z';
  } else if (IsDhcpKnown()) {
   if (IsDhcpUsed()) {
    return 'D';
   } else {
    return 'S';
   }
  }

  return 'U';
 }

 bool IsValidIp(const uint32_t nIp) {
  return (GetIp() & GetNetmask()) == (nIp & GetNetmask());
 }

 void Run() {
  net::net_handle();
# 292 "../lib-network/include/emac/network.h"
  net::dhcp_run();
 }

 static Network *Get() {
  return s_pThis;
 }

private:
 net::Link s_lastState { net::Link::STATE_DOWN };
 bool m_IsDhcpCapable { true };
 bool m_IsZeroconfCapable { true };

 char m_aIfName[16];
 char m_aHostName[network::HOSTNAME_SIZE];
 char m_aDomainName[network::DOMAINNAME_SIZE];
 uint32_t m_nNameservers[network::NAMESERVERS_COUNT];

 struct QueuedConfig {
  static constexpr uint32_t NONE = 0;
  static constexpr uint32_t STATIC_IP = (1U << 0);
  static constexpr uint32_t NETMASK = (1U << 1);
  static constexpr uint32_t GW = (1U << 2);
  static constexpr uint32_t DHCP = (1U << 3);
  static constexpr uint32_t ZEROCONF = (1U << 4);
  uint32_t nMask = QueuedConfig::NONE;
  uint32_t nStaticIp;
  uint32_t nNetmask;
  uint32_t nGateway;
  network::dhcp::Mode mode;
 };

 QueuedConfig m_QueuedConfig;

    bool isQueuedMaskSet(const uint32_t nMask) {
     return (m_QueuedConfig.nMask & nMask) == nMask;
    }

 static Network *s_pThis;
};
# 56 "../lib-network/include/network.h" 2
# 62 "./include/remoteconfig.h" 2

namespace remoteconfig {
namespace udp {
static constexpr auto BUFFER_SIZE = 1420;
}

enum class Node {
 ARTNET,
 E131,
 OSC,
 LTC,
 OSC_CLIENT,
 RDMNET_LLRP_ONLY,
 SHOWFILE,
 MIDI,
 DDP,
 PP,
 NODE,
 BOOTLOADER_TFTP,
 RDMRESPONDER,
 LAST
};

enum class Output {
 DMX,
 RDM,
 MONITOR,
 PIXEL,
 TIMECODE,
 OSC,
 CONFIG,
 STEPPER,
 PLAYER,
 ARTNET,
 SERIAL,
 RGBPANEL,
 PWM,
 LAST
};

enum class TxtFile {
 RCONFIG,
 NETWORK,
 ARTNET,
 E131,
 OSC_SERVER,
 PARAMS,
 DEVICES,
 LTC,
 TCNET,
 OSC_CLIENT,
 DISPLAY,
 LTCDISPLAY,
 MONITOR,
 SPARKFUN,
 MOTOR0,
 MOTOR1,
 MOTOR2,
 MOTOR3,
 MOTOR4,
 MOTOR5,
 MOTOR6,
 MOTOR7,
 SHOW,
 SERIAL,
 GPS,
 RGBPANEL,
 LTCETC,
 NODE,
 ENV,
 LAST
};

enum {
 DISPLAY_NAME_LENGTH = 24,
 ID_LENGTH = (32 + remoteconfig::DISPLAY_NAME_LENGTH + 2)
};
}

class RemoteConfig {
public:
 RemoteConfig(const remoteconfig::Node node, const remoteconfig::Output output, const uint32_t nActiveOutputs = 0);
 ~RemoteConfig();

 const char *GetStringNode() const;

 const char *GetStringOutput() const;

 uint8_t GetOutputs() const {
  return s_RemoteConfigListBin.nActiveOutputs;
 }

 void SetDisplayName(const char *pDisplayName);

 const char *GetDisplayName() const {
  return s_RemoteConfigListBin.aDisplayName;
 }

 void SetDisable(bool bDisable = true);
 bool GetDisable() const {
  return m_bDisable;
 }

 void SetDisableWrite(bool bDisableWrite = true) {
  m_bDisableWrite = bDisableWrite;
 }
 bool GetDisableWrite() const {
  return m_bDisableWrite;
 }

 void SetEnableReboot(bool bEnableReboot = true) {
  m_bEnableReboot = bEnableReboot;
 }
 bool IsEnableReboot() const {
  return m_bEnableReboot;
 }

 void SetEnableUptime(bool bEnableUptime = true) {
  m_bEnableUptime = bEnableUptime;
 }
 bool IsEnableUptime() const {
  return m_bEnableUptime;
 }

 void SetEnableFactory(bool bEnableFactory) {
  m_bEnableFactory = bEnableFactory;
 }
 bool GetEnableFactory() const {
  return m_bEnableFactory;
 }

 bool IsReboot() const {
  return m_bIsReboot;
 }

 void Reboot() {
  HandleReboot();
 }

 void TftpExit();

 int32_t GetIndex(const void *p, uint32_t& nLength);

 uint32_t HandleGet(void *pBuffer, uint32_t nBufferLength);
 void HandleSet(void *pBuffer, uint32_t nBufferLength);

 void Run() {
  if (__builtin_expect((m_bDisable), 1)) {
   return;
  }
# 223 "./include/remoteconfig.h"
  uint16_t nForeignPort;
  m_nBytesReceived = Network::Get()->RecvFrom(m_nHandle, const_cast<const void **>(reinterpret_cast<void **>(&s_pUdpBuffer)), &m_nIPAddressFrom, &nForeignPort);

  if (__builtin_expect((m_nBytesReceived < 4), 1)) {
   return;
  }

  HandleRequest();
 }

 static RemoteConfig *Get() {
  return s_pThis;
 }

private:
 void HandleRequest();
 void HandleReboot();
 void HandleFactory();
 void HandleList();

 void HandleUptime();

 void HandleVersion();

 void HandleGetNoParams() {
  HandleGet(nullptr, 0);
 }

 void HandleGetRconfigTxt(uint32_t& nSize);
 void HandleGetEnvTxt(uint32_t& nSize);
 void HandleGetNetworkTxt(uint32_t& nSize);
# 284 "./include/remoteconfig.h"
 void HandleGetShowTxt(uint32_t& nSize);
# 361 "./include/remoteconfig.h"
 void HandleSetRconfigTxt();
 void HandleSetEnvTxt();
 void HandleSetNetworkTxt();
# 394 "./include/remoteconfig.h"
 void HandleSetShowTxt();
# 471 "./include/remoteconfig.h"
 void HandleDisplaySet();
 void HandleDisplayGet();
 void HandleTftpSet();
 void HandleTftpGet();
 void HandleRdmSet();
 void HandleRdmGet();

 void PlatformHandleTftpSet();
 void PlatformHandleTftpGet();

private:
 remoteconfig::Node m_tNode;
 remoteconfig::Output m_tOutput;
 uint32_t m_nActiveOutputs;

 struct Commands {
  void (RemoteConfig::*pHandler)();
  const char *pCmd;
  const uint16_t nLength;
  const bool bGreaterThan;
 };

 static const Commands s_GET[];
 static const Commands s_SET[];

 struct Txt {
  void (RemoteConfig::*GetHandler)(uint32_t& nSize);
  void (RemoteConfig::*SetHandler)();
  const char *pFileName;
  const uint8_t nFileNameLength;
 };

 static const Txt s_TXT[];

 struct ListBin {
  uint8_t aMacAddress[network::MAC_SIZE];
  uint8_t nNode;
  uint8_t nOutput;
  uint8_t nActiveOutputs;
  char aDisplayName[remoteconfig::DISPLAY_NAME_LENGTH];
 };

 static ListBin s_RemoteConfigListBin;

 bool m_bDisable { false };
 bool m_bDisableWrite { false };
 bool m_bEnableReboot { false };
 bool m_bEnableUptime { false };
 bool m_bEnableFactory { false };

 bool m_bIsReboot { false };

 int32_t m_nHandle { -1 };
 uint32_t m_nIPAddressFrom { 0 };
 uint32_t m_nBytesReceived { 0 };




 bool m_bEnableTFTP { false };





 static char *s_pUdpBuffer;

 static RemoteConfig *s_pThis;
};
# 38 "src/remoteconfig.cpp" 2

# 1 "../lib-hal/include/firmwareversion.h" 1
# 36 "../lib-hal/include/firmwareversion.h"
namespace firmwareversion {
namespace length {
static constexpr auto SOFTWARE_VERSION = 3;
static constexpr auto GCC_DATE = 11;
static constexpr auto GCC_TIME = 8;
}
struct Info {
 char SoftwareVersion[length::SOFTWARE_VERSION];
 char BuildDate[length::GCC_DATE];
 char BuildTime[length::GCC_TIME];
};
}

class FirmwareVersion {
public:
 FirmwareVersion(const char *pVersion, const char *pDate, const char *pTime);

 void Print(const char *pTitle = nullptr) {
  puts(s_Print);

  if (pTitle != nullptr) {
   printf("\x1b[32m%s\x1b[0m\n", pTitle);
  }
 }

 const struct firmwareversion::Info *GetVersion() {
  return &s_FirmwareVersion;
 }

 const char *GetPrint() {
  return s_Print;
 }

 const char *GetSoftwareVersion() {
  return s_FirmwareVersion.SoftwareVersion;
 }

 static FirmwareVersion *Get() {
  return s_pThis;
 }

private:
 static firmwareversion::Info s_FirmwareVersion;
 static char s_Print[64];
 static FirmwareVersion *s_pThis;
};
# 40 "src/remoteconfig.cpp" 2

# 1 "../lib-hal/include/hardware.h" 1
# 31 "../lib-hal/include/hardware.h"
# 1 "../include/uuid/uuid.h" 1
# 29 "../include/uuid/uuid.h"
typedef unsigned char uuid_t[16];





extern "C" {


extern void uuid_generate_random(uuid_t);
extern int uuid_parse(const char *, uuid_t);
extern void uuid_unparse(const uuid_t, char *);
extern void uuid_unparse_lower(const uuid_t, char *);
extern void uuid_unparse_upper(const uuid_t, char *);


}
# 32 "../lib-hal/include/hardware.h" 2

namespace hardware {
enum class BootDevice {
 UNKOWN,
 FEL,
 MMC0,
 SPI,
 HDD,
 FLASH,
 RAM
};
namespace ledblink {
enum class Mode {
 OFF_OFF, OFF_ON, NORMAL, DATA, FAST, REBOOT, UNKNOWN
};
}
}

namespace hal {




static constexpr uint32_t SOFTWARE_TIMERS_MAX = 8;

typedef void (*TimerCallback)();
}
# 70 "../lib-hal/include/hardware.h"
# 1 "../lib-hal/include/gd32/hardware.h" 1
# 31 "../lib-hal/include/gd32/hardware.h"
# 1 "../include/time.h" 1
# 31 "../include/time.h"
typedef long int time_t;




struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
};

struct timespec {
 time_t tv_sec;
 long tv_nsec;
};

typedef enum {
 CLOCK_REALTIME,
 CLOCK_MONOTONIC
} clockid_t;


extern "C" {


extern time_t time(time_t *t);
extern time_t mktime(struct tm *tm);
extern struct tm *gmtime(const time_t *timep);
extern struct tm *localtime(const time_t *timep);
extern char *asctime(const struct tm *tm);

extern int clock_getres(clockid_t clockid, struct timespec *res);
extern int clock_gettime(clockid_t clockid, struct timespec *tp);
extern int clock_settime(clockid_t clockid, const struct timespec *tp);


}
# 32 "../lib-hal/include/gd32/hardware.h" 2


# 1 "../lib-hal/include/hwclock.h" 1
# 32 "../lib-hal/include/hwclock.h"
# 1 "../include/sys/time.h" 1
# 36 "../include/sys/time.h"
typedef long suseconds_t;


struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};


extern "C" {


extern int gettimeofday(struct timeval *tv, struct timezone *tz);
extern int settimeofday(const struct timeval *tv, const struct timezone *tz);


}
# 33 "../lib-hal/include/hwclock.h" 2

namespace rtc {
enum class Type : uint8_t {
 MCP7941X, DS3231, PCF8563, SOC_INTERNAL, UNKNOWN
};
}

class HwClock {
public:
 HwClock();
 void RtcProbe();

 void HcToSys();
 void SysToHc();

 bool Set(const struct tm *pTime);
 bool Get(struct tm *pTime) {
  return RtcGet(pTime);
 }

 bool AlarmSet(const struct tm *pTime) {
  return RtcSetAlarm(pTime);
 }
 bool AlarmGet(struct tm *pTime) {
  return RtcGetAlarm(pTime);
 }
 void AlarmEnable(const bool bEnable) {
  m_bRtcAlarmEnabled = bEnable;
 }
 bool AlarmIsEnabled() const {
  return m_bRtcAlarmEnabled;
 }

 bool IsConnected() const {
  return m_bIsConnected;
 }

 void Run(const bool bDoRun) {
  if (!bDoRun || !m_bIsConnected) {
   return;
  }
  Process();
 }

 void Print();

 static HwClock *Get() {
  return s_pThis;
 }

private:
 void Process();
 bool RtcSet(const struct tm *pime);
 bool RtcGet(struct tm *pTime);
 bool RtcSetAlarm(const struct tm *pTime);
 bool RtcGetAlarm(struct tm *pTime);
 int MCP794xxAlarmWeekday(struct tm *pTime);
 void PCF8563GetAlarmMode();
 void PCF8563SetAlarmMode();

private:
 uint32_t m_nSetDelayMicros { 0 };
 uint32_t m_nLastHcToSysMillis { 0 };
 uint8_t m_nAddress { 0 };
 rtc::Type m_Type { rtc::Type::UNKNOWN };
 bool m_bIsConnected { false };
 bool m_bRtcAlarmEnabled { false };
 bool m_bRtcAlarmPending { false };

 static HwClock *s_pThis;
};
# 35 "../lib-hal/include/gd32/hardware.h" 2

# 1 "../lib-gd32/include/gd32.h" 1
# 34 "../lib-gd32/include/gd32.h"
 void udelay(uint32_t us, uint32_t offset = 0);



struct HwTimersSeconds {

 volatile uint32_t nTimeval;

  volatile uint32_t nUptime;
};




#pragma GCC diagnostic push


#pragma GCC diagnostic ignored "-Wold-style-cast"
#pragma GCC diagnostic ignored "-Wuseless-cast"


#pragma GCC diagnostic ignored "-Wvolatile"

extern "C" {
# 67 "../lib-gd32/include/gd32.h"
# 1 "../lib-gd32/gd32f4xx/CMSIS/GD/GD32F4xx/Include/gd32f4xx.h" 1
# 39 "../lib-gd32/gd32f4xx/CMSIS/GD/GD32F4xx/Include/gd32f4xx.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wduplicated-cond"



 extern "C" {
# 115 "../lib-gd32/gd32f4xx/CMSIS/GD/GD32F4xx/Include/gd32f4xx.h"
typedef enum IRQn
{

    NonMaskableInt_IRQn = -14,
    MemoryManagement_IRQn = -12,
    BusFault_IRQn = -11,
    UsageFault_IRQn = -10,
    SVCall_IRQn = -5,
    DebugMonitor_IRQn = -4,
    PendSV_IRQn = -2,
    SysTick_IRQn = -1,

    WWDGT_IRQn = 0,
    LVD_IRQn = 1,
    TAMPER_STAMP_IRQn = 2,
    RTC_WKUP_IRQn = 3,
    FMC_IRQn = 4,
    RCU_CTC_IRQn = 5,
    EXTI0_IRQn = 6,
    EXTI1_IRQn = 7,
    EXTI2_IRQn = 8,
    EXTI3_IRQn = 9,
    EXTI4_IRQn = 10,
    DMA0_Channel0_IRQn = 11,
    DMA0_Channel1_IRQn = 12,
    DMA0_Channel2_IRQn = 13,
    DMA0_Channel3_IRQn = 14,
    DMA0_Channel4_IRQn = 15,
    DMA0_Channel5_IRQn = 16,
    DMA0_Channel6_IRQn = 17,
    ADC_IRQn = 18,
    CAN0_TX_IRQn = 19,
    CAN0_RX0_IRQn = 20,
    CAN0_RX1_IRQn = 21,
    CAN0_EWMC_IRQn = 22,
    EXTI5_9_IRQn = 23,
    TIMER0_BRK_TIMER8_IRQn = 24,
    TIMER0_UP_TIMER9_IRQn = 25,
    TIMER0_TRG_CMT_TIMER10_IRQn = 26,
    TIMER0_Channel_IRQn = 27,
    TIMER1_IRQn = 28,
    TIMER2_IRQn = 29,
    TIMER3_IRQn = 30,
    I2C0_EV_IRQn = 31,
    I2C0_ER_IRQn = 32,
    I2C1_EV_IRQn = 33,
    I2C1_ER_IRQn = 34,
    SPI0_IRQn = 35,
    SPI1_IRQn = 36,
    USART0_IRQn = 37,
    USART1_IRQn = 38,
    USART2_IRQn = 39,
    EXTI10_15_IRQn = 40,
    RTC_Alarm_IRQn = 41,
    USBFS_WKUP_IRQn = 42,
    TIMER7_BRK_TIMER11_IRQn = 43,
    TIMER7_UP_TIMER12_IRQn = 44,
    TIMER7_TRG_CMT_TIMER13_IRQn = 45,
    TIMER7_Channel_IRQn = 46,
    DMA0_Channel7_IRQn = 47,


    EXMC_IRQn = 48,
    SDIO_IRQn = 49,
    TIMER4_IRQn = 50,
    SPI2_IRQn = 51,
    UART3_IRQn = 52,
    UART4_IRQn = 53,
    TIMER5_DAC_IRQn = 54,
    TIMER6_IRQn = 55,
    DMA1_Channel0_IRQn = 56,
    DMA1_Channel1_IRQn = 57,
    DMA1_Channel2_IRQn = 58,
    DMA1_Channel3_IRQn = 59,
    DMA1_Channel4_IRQn = 60,
    ENET_IRQn = 61,
    ENET_WKUP_IRQn = 62,
    CAN1_TX_IRQn = 63,
    CAN1_RX0_IRQn = 64,
    CAN1_RX1_IRQn = 65,
    CAN1_EWMC_IRQn = 66,
    USBFS_IRQn = 67,
    DMA1_Channel5_IRQn = 68,
    DMA1_Channel6_IRQn = 69,
    DMA1_Channel7_IRQn = 70,
    USART5_IRQn = 71,
    I2C2_EV_IRQn = 72,
    I2C2_ER_IRQn = 73,
    USBHS_EP1_Out_IRQn = 74,
    USBHS_EP1_In_IRQn = 75,
    USBHS_WKUP_IRQn = 76,
    USBHS_IRQn = 77,
    DCI_IRQn = 78,
    TRNG_IRQn = 80,
    FPU_IRQn = 81,
    UART6_IRQn = 82,
    UART7_IRQn = 83,
    SPI3_IRQn = 84,
    SPI4_IRQn = 85,
    SPI5_IRQn = 86,
    TLI_IRQn = 88,
    TLI_ER_IRQn = 89,
    IPA_IRQn = 90,
# 289 "../lib-gd32/gd32f4xx/CMSIS/GD/GD32F4xx/Include/gd32f4xx.h"
} IRQn_Type;


# 1 "../CMSIS/Core/Include/core_cm4.h" 1
# 37 "../CMSIS/Core/Include/core_cm4.h"
 extern "C" {
# 63 "../CMSIS/Core/Include/core_cm4.h"
# 1 "../CMSIS/Core/Include/cmsis_version.h" 1
# 64 "../CMSIS/Core/Include/core_cm4.h" 2
# 162 "../CMSIS/Core/Include/core_cm4.h"
# 1 "../CMSIS/Core/Include/cmsis_compiler.h" 1
# 54 "../CMSIS/Core/Include/cmsis_compiler.h"
# 1 "../CMSIS/Core/Include/cmsis_gcc.h" 1
# 29 "../CMSIS/Core/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 71 "../CMSIS/Core/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_WRITE { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_READ { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_WRITE { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_READ { uint32_t v; };
#pragma GCC diagnostic pop
# 131 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline __attribute__((__noreturn__)) void __cmsis_start(void)
{
  extern void _start(void) __attribute__((__noreturn__));

  typedef struct {
    uint32_t const* src;
    uint32_t* dest;
    uint32_t wlen;
  } __copy_table_t;

  typedef struct {
    uint32_t* dest;
    uint32_t wlen;
  } __zero_table_t;

  extern const __copy_table_t __copy_table_start__;
  extern const __copy_table_t __copy_table_end__;
  extern const __zero_table_t __zero_table_start__;
  extern const __zero_table_t __zero_table_end__;

  for (__copy_table_t const* pTable = &__copy_table_start__; pTable < &__copy_table_end__; ++pTable) {
    for(uint32_t i=0u; i<pTable->wlen; ++i) {
      pTable->dest[i] = pTable->src[i];
    }
  }

  for (__zero_table_t const* pTable = &__zero_table_start__; pTable < &__zero_table_end__; ++pTable) {
    for(uint32_t i=0u; i<pTable->wlen; ++i) {
      pTable->dest[i] = 0u;
    }
  }

  _start();
}
# 258 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 292 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 311 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return result;
}
# 326 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int16_t __REVSH(int16_t value)
{

  return (int16_t)__builtin_bswap16(value);






}
# 346 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 373 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;




   __asm ("rbit %0, %1" : "=r" (result) : "r" (value) );
# 393 "../CMSIS/Core/Include/cmsis_gcc.h"
  return result;
}
# 403 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __CLZ(uint32_t value)
{
# 414 "../CMSIS/Core/Include/cmsis_gcc.h"
  if (value == 0U)
  {
    return 32U;
  }
  return __builtin_clz(value);
}
# 432 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 454 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 476 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 493 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 510 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 527 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}






__attribute__((always_inline)) static inline void __CLREX(void)
{
  __asm volatile ("clrex" ::: "memory");
}
# 593 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rrx %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 608 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDRBT(volatile uint8_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrbt %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint8_t) result);
}
# 630 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDRHT(volatile uint16_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrht %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint16_t) result);
}
# 652 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDRT(volatile uint32_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*ptr) );
   return(result);
}
# 667 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRBT(uint8_t value, volatile uint8_t *ptr)
{
   __asm volatile ("strbt %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 679 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRHT(uint16_t value, volatile uint16_t *ptr)
{
   __asm volatile ("strht %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 691 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRT(uint32_t value, volatile uint32_t *ptr)
{
   __asm volatile ("strt %1, %0" : "=Q" (*ptr) : "r" (value) );
}
# 949 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 1001 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
  __ISB();
}
# 1027 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 1099 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 1123 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 1153 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 1204 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) );
  return(result);
}
# 1234 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 1261 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_fault_irq(void)
{
  __asm volatile ("cpsie f" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_fault_irq(void)
{
  __asm volatile ("cpsid f" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, basepri" : "=r" (result) );
  return(result);
}
# 1313 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI(uint32_t basePri)
{
  __asm volatile ("MSR basepri, %0" : : "r" (basePri) : "memory");
}
# 1338 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI_MAX(uint32_t basePri)
{
  __asm volatile ("MSR basepri_max, %0" : : "r" (basePri) : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}
# 1379 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_FAULTMASK(uint32_t faultMask)
{
  __asm volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}
# 1588 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_FPSCR(void)
{






  return __builtin_arm_get_fpscr();
# 1606 "../CMSIS/Core/Include/cmsis_gcc.h"
}







__attribute__((always_inline)) static inline void __set_FPSCR(uint32_t fpscr)
{






  __builtin_arm_set_fpscr(fpscr);






}
# 1643 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __SADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("qadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("shadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uqadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uhadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("qsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("shsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uqsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uhsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("qadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("shadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uqadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uhadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("qsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("shsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uqsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uhsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("qasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("shasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uqasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uhasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("qsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("shsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uqsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uhsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("usad8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USADA8(uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm ("usada8 %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}
# 1965 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __UXTB16(uint32_t op1)
{
  uint32_t result;

  __asm ("uxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("uxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTB16(uint32_t op1)
{
  uint32_t result;

  __asm ("sxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTB16_RORn(uint32_t op1, uint32_t rotate)
{
  uint32_t result;
  if (__builtin_constant_p(rotate) && ((rotate == 8U) || (rotate == 16U) || (rotate == 24U))) {
    __asm volatile ("sxtb16 %0, %1, ROR %2" : "=r" (result) : "r" (op1), "i" (rotate) );
  } else {
    result = __SXTB16(__ROR(op1, rotate)) ;
  }
  return result;
}

__attribute__((always_inline)) static inline uint32_t __SXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm ("sxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTAB16_RORn(uint32_t op1, uint32_t op2, uint32_t rotate)
{
  uint32_t result;
  if (__builtin_constant_p(rotate) && ((rotate == 8U) || (rotate == 16U) || (rotate == 24U))) {
    __asm volatile ("sxtab16 %0, %1, %2, ROR %3" : "=r" (result) : "r" (op1) , "r" (op2) , "i" (rotate));
  } else {
    result = __SXTAB16(op1, __ROR(op2, rotate));
  }
  return result;
}


__attribute__((always_inline)) static inline uint32_t __SMUAD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuad %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUADX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuadx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLAD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlad %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLADX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smladx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLALD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlald %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLALDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlaldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SMUSD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUSDX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusdx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsd %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSDX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsdx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsld %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SEL (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sel %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QADD( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qadd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QSUB( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qsub %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}
# 2197 "../CMSIS/Core/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __asm ("smmla %0, %1, %2, %3" : "=r" (result): "r" (op1), "r" (op2), "r" (op3) );
 return(result);
}





#pragma GCC diagnostic pop
# 55 "../CMSIS/Core/Include/cmsis_compiler.h" 2
# 163 "../CMSIS/Core/Include/core_cm4.h" 2



}
# 177 "../CMSIS/Core/Include/core_cm4.h"
 extern "C" {
# 264 "../CMSIS/Core/Include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 303 "../CMSIS/Core/Include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 321 "../CMSIS/Core/Include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:1;
    uint32_t ICI_IT_1:6;
    uint32_t GE:4;
    uint32_t _reserved1:4;
    uint32_t T:1;
    uint32_t ICI_IT_2:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 376 "../CMSIS/Core/Include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t _reserved0:29;
  } b;
  uint32_t w;
} CONTROL_Type;
# 411 "../CMSIS/Core/Include/core_cm4.h"
typedef struct
{
  volatile uint32_t ISER[8U];
        uint32_t RESERVED0[24U];
  volatile uint32_t ICER[8U];
        uint32_t RESERVED1[24U];
  volatile uint32_t ISPR[8U];
        uint32_t RESERVED2[24U];
  volatile uint32_t ICPR[8U];
        uint32_t RESERVED3[24U];
  volatile uint32_t IABR[8U];
        uint32_t RESERVED4[56U];
  volatile uint8_t IP[240U];
        uint32_t RESERVED5[644U];
  volatile uint32_t STIR;
} NVIC_Type;
# 445 "../CMSIS/Core/Include/core_cm4.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2U];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4U];
  volatile const uint32_t ISAR[5U];
        uint32_t RESERVED0[5U];
  volatile uint32_t CPACR;
} SCB_Type;
# 724 "../CMSIS/Core/Include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
} SCnSCB_Type;
# 764 "../CMSIS/Core/Include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 816 "../CMSIS/Core/Include/core_cm4.h"
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[32U];
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[6U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 904 "../CMSIS/Core/Include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
  volatile uint32_t MASK0;
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED0[1U];
  volatile uint32_t COMP1;
  volatile uint32_t MASK1;
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED1[1U];
  volatile uint32_t COMP2;
  volatile uint32_t MASK2;
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP3;
  volatile uint32_t MASK3;
  volatile uint32_t FUNCTION3;
} DWT_Type;
# 1051 "../CMSIS/Core/Include/core_cm4.h"
typedef struct
{
  volatile const uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile const uint32_t FSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t FIFO0;
  volatile const uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t FIFO1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1213 "../CMSIS/Core/Include/core_cm4.h"
typedef struct
{
  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RASR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RASR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RASR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RASR_A3;
} MPU_Type;
# 1309 "../CMSIS/Core/Include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
  volatile const uint32_t MVFR2;
} FPU_Type;
# 1421 "../CMSIS/Core/Include/core_cm4.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 1653 "../CMSIS/Core/Include/core_cm4.h"
static inline void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t __NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}
# 1684 "../CMSIS/Core/Include/core_cm4.h"
static inline void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    __asm volatile("":::"memory");
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __asm volatile("":::"memory");
  }
}
# 1703 "../CMSIS/Core/Include/core_cm4.h"
static inline uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1722 "../CMSIS/Core/Include/core_cm4.h"
static inline void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}
# 1741 "../CMSIS/Core/Include/core_cm4.h"
static inline uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1760 "../CMSIS/Core/Include/core_cm4.h"
static inline void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1775 "../CMSIS/Core/Include/core_cm4.h"
static inline void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1792 "../CMSIS/Core/Include/core_cm4.h"
static inline uint32_t __NVIC_GetActive(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1814 "../CMSIS/Core/Include/core_cm4.h"
static inline void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] = (uint8_t)((priority << (8U - 4)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 4)) & (uint32_t)0xFFUL);
  }
}
# 1836 "../CMSIS/Core/Include/core_cm4.h"
static inline uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] >> (8U - 4)));
  }
  else
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - 4)));
  }
}
# 1861 "../CMSIS/Core/Include/core_cm4.h"
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4)) ? (uint32_t)(4) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 1888 "../CMSIS/Core/Include/core_cm4.h"
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4)) ? (uint32_t)(4) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}
# 1911 "../CMSIS/Core/Include/core_cm4.h"
static inline void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
  uint32_t *vectors = (uint32_t *)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  vectors[(int32_t)IRQn + 16] = vector;

}
# 1927 "../CMSIS/Core/Include/core_cm4.h"
static inline uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{
  uint32_t *vectors = (uint32_t *)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  return vectors[(int32_t)IRQn + 16];
}






__attribute__((__noreturn__)) static inline void __NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for(;;)
  {
    __asm volatile ("nop");
  }
}
# 1960 "../CMSIS/Core/Include/core_cm4.h"
# 1 "../CMSIS/Core/Include/mpu_armv7.h" 1
# 183 "../CMSIS/Core/Include/mpu_armv7.h"
typedef struct {
  uint32_t RBAR;
  uint32_t RASR;
} ARM_MPU_Region_t;




static inline void ARM_MPU_Enable(uint32_t MPU_Control)
{
  __DMB();
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL = MPU_Control | (1UL );

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR |= (1UL << 16U);

  __DSB();
  __ISB();
}



static inline void ARM_MPU_Disable(void)
{
  __DMB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR &= ~(1UL << 16U);

  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL &= ~(1UL );
  __DSB();
  __ISB();
}




static inline void ARM_MPU_ClrRegion(uint32_t rnr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RNR = rnr;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = 0U;
}





static inline void ARM_MPU_SetRegion(uint32_t rbar, uint32_t rasr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR = rbar;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = rasr;
}






static inline void ARM_MPU_SetRegionEx(uint32_t rnr, uint32_t rbar, uint32_t rasr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RNR = rnr;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR = rbar;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = rasr;
}






static inline void ARM_MPU_OrderedMemcpy(volatile uint32_t* dst, const uint32_t* __restrict src, uint32_t len)
{
  uint32_t i;
  for (i = 0U; i < len; ++i)
  {
    dst[i] = src[i];
  }
}





static inline void ARM_MPU_Load(ARM_MPU_Region_t const* table, uint32_t cnt)
{
  const uint32_t rowWordSize = sizeof(ARM_MPU_Region_t)/4U;
  while (cnt > 4U) {
    ARM_MPU_OrderedMemcpy(&(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR), &(table->RBAR), 4U*rowWordSize);
    table += 4U;
    cnt -= 4U;
  }
  ARM_MPU_OrderedMemcpy(&(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR), &(table->RBAR), cnt*rowWordSize);
}
# 1961 "../CMSIS/Core/Include/core_cm4.h" 2
# 1981 "../CMSIS/Core/Include/core_cm4.h"
static inline uint32_t SCB_GetFPUType(void)
{
  uint32_t mvfr0;

  mvfr0 = ((FPU_Type *) ((0xE000E000UL) + 0x0F30UL) )->MVFR0;
  if ((mvfr0 & ((0xFUL << 4U) | (0xFUL << 8U))) == 0x020U)
  {
    return 1U;
  }
  else
  {
    return 0U;
  }
}
# 2022 "../CMSIS/Core/Include/core_cm4.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  __NVIC_SetPriority (SysTick_IRQn, (1UL << 4) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 2052 "../CMSIS/Core/Include/core_cm4.h"
extern volatile int32_t ITM_RxBuffer;
# 2064 "../CMSIS/Core/Include/core_cm4.h"
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __asm volatile ("nop");
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 2085 "../CMSIS/Core/Include/core_cm4.h"
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != ((int32_t)0x5AA55AA5U))
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ((int32_t)0x5AA55AA5U);
  }

  return (ch);
}
# 2105 "../CMSIS/Core/Include/core_cm4.h"
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == ((int32_t)0x5AA55AA5U))
  {
    return (0);
  }
  else
  {
    return (1);
  }
}







}
# 293 "../lib-gd32/gd32f4xx/CMSIS/GD/GD32F4xx/Include/gd32f4xx.h" 2
# 1 "../lib-gd32/gd32f4xx/CMSIS/GD/GD32F4xx/Include/system_gd32f4xx.h" 1
# 40 "../lib-gd32/gd32f4xx/CMSIS/GD/GD32F4xx/Include/system_gd32f4xx.h"
extern "C" {





extern uint32_t SystemCoreClock;



extern void SystemInit (void);

extern void SystemCoreClockUpdate (void);


}
# 294 "../lib-gd32/gd32f4xx/CMSIS/GD/GD32F4xx/Include/gd32f4xx.h" 2



typedef enum {DISABLE = 0, ENABLE = !DISABLE} EventStatus, ControlStatus;
typedef enum {RESET = 0, SET = !RESET} FlagStatus;
typedef enum {ERROR = 0, SUCCESS = !ERROR} ErrStatus;
# 369 "../lib-gd32/gd32f4xx/CMSIS/GD/GD32F4xx/Include/gd32f4xx.h"
# 1 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 1
# 41 "../firmware-template-gd32/template/gd32f4xx_libopt.h"
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_rcu.h" 1
# 38 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_rcu.h"
# 1 "../lib-gd32/gd32f4xx/CMSIS/GD/GD32F4xx/Include/gd32f4xx.h" 1
# 39 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_rcu.h" 2
# 489 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_rcu.h"
typedef enum
{

    RCU_GPIOA = (((uint32_t)(0x30U) << 6) | (uint32_t)(0U)),
    RCU_GPIOB = (((uint32_t)(0x30U) << 6) | (uint32_t)(1U)),
    RCU_GPIOC = (((uint32_t)(0x30U) << 6) | (uint32_t)(2U)),
    RCU_GPIOD = (((uint32_t)(0x30U) << 6) | (uint32_t)(3U)),
    RCU_GPIOE = (((uint32_t)(0x30U) << 6) | (uint32_t)(4U)),
    RCU_GPIOF = (((uint32_t)(0x30U) << 6) | (uint32_t)(5U)),
    RCU_GPIOG = (((uint32_t)(0x30U) << 6) | (uint32_t)(6U)),
    RCU_GPIOH = (((uint32_t)(0x30U) << 6) | (uint32_t)(7U)),
    RCU_GPIOI = (((uint32_t)(0x30U) << 6) | (uint32_t)(8U)),
    RCU_CRC = (((uint32_t)(0x30U) << 6) | (uint32_t)(12U)),
    RCU_BKPSRAM = (((uint32_t)(0x30U) << 6) | (uint32_t)(18U)),
    RCU_TCMSRAM = (((uint32_t)(0x30U) << 6) | (uint32_t)(20U)),
    RCU_DMA0 = (((uint32_t)(0x30U) << 6) | (uint32_t)(21U)),
    RCU_DMA1 = (((uint32_t)(0x30U) << 6) | (uint32_t)(22U)),
    RCU_IPA = (((uint32_t)(0x30U) << 6) | (uint32_t)(23U)),
    RCU_ENET = (((uint32_t)(0x30U) << 6) | (uint32_t)(25U)),
    RCU_ENETTX = (((uint32_t)(0x30U) << 6) | (uint32_t)(26U)),
    RCU_ENETRX = (((uint32_t)(0x30U) << 6) | (uint32_t)(27U)),
    RCU_ENETPTP = (((uint32_t)(0x30U) << 6) | (uint32_t)(28U)),
    RCU_USBHS = (((uint32_t)(0x30U) << 6) | (uint32_t)(29U)),
    RCU_USBHSULPI = (((uint32_t)(0x30U) << 6) | (uint32_t)(30U)),

    RCU_DCI = (((uint32_t)(0x34U) << 6) | (uint32_t)(0U)),
    RCU_TRNG = (((uint32_t)(0x34U) << 6) | (uint32_t)(6U)),
    RCU_USBFS = (((uint32_t)(0x34U) << 6) | (uint32_t)(7U)),

    RCU_EXMC = (((uint32_t)(0x38U) << 6) | (uint32_t)(0U)),

    RCU_TIMER1 = (((uint32_t)(0x40U) << 6) | (uint32_t)(0U)),
    RCU_TIMER2 = (((uint32_t)(0x40U) << 6) | (uint32_t)(1U)),
    RCU_TIMER3 = (((uint32_t)(0x40U) << 6) | (uint32_t)(2U)),
    RCU_TIMER4 = (((uint32_t)(0x40U) << 6) | (uint32_t)(3U)),
    RCU_TIMER5 = (((uint32_t)(0x40U) << 6) | (uint32_t)(4U)),
    RCU_TIMER6 = (((uint32_t)(0x40U) << 6) | (uint32_t)(5U)),
    RCU_TIMER11 = (((uint32_t)(0x40U) << 6) | (uint32_t)(6U)),
    RCU_TIMER12 = (((uint32_t)(0x40U) << 6) | (uint32_t)(7U)),
    RCU_TIMER13 = (((uint32_t)(0x40U) << 6) | (uint32_t)(8U)),
    RCU_WWDGT = (((uint32_t)(0x40U) << 6) | (uint32_t)(11U)),
    RCU_SPI1 = (((uint32_t)(0x40U) << 6) | (uint32_t)(14U)),
    RCU_SPI2 = (((uint32_t)(0x40U) << 6) | (uint32_t)(15U)),
    RCU_USART1 = (((uint32_t)(0x40U) << 6) | (uint32_t)(17U)),
    RCU_USART2 = (((uint32_t)(0x40U) << 6) | (uint32_t)(18U)),
    RCU_UART3 = (((uint32_t)(0x40U) << 6) | (uint32_t)(19U)),
    RCU_UART4 = (((uint32_t)(0x40U) << 6) | (uint32_t)(20U)),
    RCU_I2C0 = (((uint32_t)(0x40U) << 6) | (uint32_t)(21U)),
    RCU_I2C1 = (((uint32_t)(0x40U) << 6) | (uint32_t)(22U)),
    RCU_I2C2 = (((uint32_t)(0x40U) << 6) | (uint32_t)(23U)),
    RCU_CAN0 = (((uint32_t)(0x40U) << 6) | (uint32_t)(25U)),
    RCU_CAN1 = (((uint32_t)(0x40U) << 6) | (uint32_t)(26U)),
    RCU_PMU = (((uint32_t)(0x40U) << 6) | (uint32_t)(28U)),
    RCU_DAC = (((uint32_t)(0x40U) << 6) | (uint32_t)(29U)),
    RCU_UART6 = (((uint32_t)(0x40U) << 6) | (uint32_t)(30U)),
    RCU_UART7 = (((uint32_t)(0x40U) << 6) | (uint32_t)(31U)),
    RCU_RTC = (((uint32_t)(0x70U) << 6) | (uint32_t)(15U)),

    RCU_TIMER0 = (((uint32_t)(0x44U) << 6) | (uint32_t)(0U)),
    RCU_TIMER7 = (((uint32_t)(0x44U) << 6) | (uint32_t)(1U)),
    RCU_USART0 = (((uint32_t)(0x44U) << 6) | (uint32_t)(4U)),
    RCU_USART5 = (((uint32_t)(0x44U) << 6) | (uint32_t)(5U)),
    RCU_ADC0 = (((uint32_t)(0x44U) << 6) | (uint32_t)(8U)),
    RCU_ADC1 = (((uint32_t)(0x44U) << 6) | (uint32_t)(9U)),
    RCU_ADC2 = (((uint32_t)(0x44U) << 6) | (uint32_t)(10U)),
    RCU_SDIO = (((uint32_t)(0x44U) << 6) | (uint32_t)(11U)),
    RCU_SPI0 = (((uint32_t)(0x44U) << 6) | (uint32_t)(12U)),
    RCU_SPI3 = (((uint32_t)(0x44U) << 6) | (uint32_t)(13U)),
    RCU_SYSCFG = (((uint32_t)(0x44U) << 6) | (uint32_t)(14U)),
    RCU_TIMER8 = (((uint32_t)(0x44U) << 6) | (uint32_t)(16U)),
    RCU_TIMER9 = (((uint32_t)(0x44U) << 6) | (uint32_t)(17U)),
    RCU_TIMER10 = (((uint32_t)(0x44U) << 6) | (uint32_t)(18U)),
    RCU_SPI4 = (((uint32_t)(0x44U) << 6) | (uint32_t)(20U)),
    RCU_SPI5 = (((uint32_t)(0x44U) << 6) | (uint32_t)(21U)),
    RCU_TLI = (((uint32_t)(0x44U) << 6) | (uint32_t)(26U)),

    RCU_CTC = (((uint32_t)(0xE4U) << 6) | (uint32_t)(27U)),
    RCU_IREF = (((uint32_t)(0xE4U) << 6) | (uint32_t)(31U)),
}rcu_periph_enum;


typedef enum
{

    RCU_GPIOA_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(0U)),
    RCU_GPIOB_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(1U)),
    RCU_GPIOC_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(2U)),
    RCU_GPIOD_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(3U)),
    RCU_GPIOE_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(4U)),
    RCU_GPIOF_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(5U)),
    RCU_GPIOG_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(6U)),
    RCU_GPIOH_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(7U)),
    RCU_GPIOI_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(8U)),
    RCU_CRC_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(12U)),
    RCU_FMC_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(15U)),
    RCU_SRAM0_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(16U)),
    RCU_SRAM1_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(17U)),
    RCU_BKPSRAM_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(18U)),
    RCU_SRAM2_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(19U)),
    RCU_DMA0_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(21U)),
    RCU_DMA1_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(22U)),
    RCU_IPA_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(23U)),
    RCU_ENET_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(25U)),
    RCU_ENETTX_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(26U)),
    RCU_ENETRX_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(27U)),
    RCU_ENETPTP_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(28U)),
    RCU_USBHS_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(29U)),
    RCU_USBHSULPI_SLP = (((uint32_t)(0x50U) << 6) | (uint32_t)(30U)),

    RCU_DCI_SLP = (((uint32_t)(0x54U) << 6) | (uint32_t)(0U)),
    RCU_TRNG_SLP = (((uint32_t)(0x54U) << 6) | (uint32_t)(6U)),
    RCU_USBFS_SLP = (((uint32_t)(0x54U) << 6) | (uint32_t)(7U)),

    RCU_EXMC_SLP = (((uint32_t)(0x58U) << 6) | (uint32_t)(0U)),

    RCU_TIMER1_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(0U)),
    RCU_TIMER2_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(1U)),
    RCU_TIMER3_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(2U)),
    RCU_TIMER4_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(3U)),
    RCU_TIMER5_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(4U)),
    RCU_TIMER6_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(5U)),
    RCU_TIMER11_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(6U)),
    RCU_TIMER12_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(7U)),
    RCU_TIMER13_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(8U)),
    RCU_WWDGT_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(11U)),
    RCU_SPI1_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(14U)),
    RCU_SPI2_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(15U)),
    RCU_USART1_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(17U)),
    RCU_USART2_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(18U)),
    RCU_UART3_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(19U)),
    RCU_UART4_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(20U)),
    RCU_I2C0_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(21U)),
    RCU_I2C1_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(22U)),
    RCU_I2C2_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(23U)),
    RCU_CAN0_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(25U)),
    RCU_CAN1_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(26U)),
    RCU_PMU_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(28U)),
    RCU_DAC_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(29U)),
    RCU_UART6_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(30U)),
    RCU_UART7_SLP = (((uint32_t)(0x60U) << 6) | (uint32_t)(31U)),

    RCU_TIMER0_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(0U)),
    RCU_TIMER7_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(1U)),
    RCU_USART0_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(4U)),
    RCU_USART5_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(5U)),
    RCU_ADC0_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(8U)),
    RCU_ADC1_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(9U)),
    RCU_ADC2_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(10U)),
    RCU_SDIO_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(11U)),
    RCU_SPI0_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(12U)),
    RCU_SPI3_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(13U)),
    RCU_SYSCFG_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(14U)),
    RCU_TIMER8_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(16U)),
    RCU_TIMER9_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(17U)),
    RCU_TIMER10_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(18U)),
    RCU_SPI4_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(20U)),
    RCU_SPI5_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(21U)),
    RCU_TLI_SLP = (((uint32_t)(0x64U) << 6) | (uint32_t)(26U)),

    RCU_CTC_SLP = (((uint32_t)(0xE8U) << 6) | (uint32_t)(27U)),
    RCU_IREF_SLP = (((uint32_t)(0xE8U) << 6) | (uint32_t)(31U)),
}rcu_periph_sleep_enum;


typedef enum
{

    RCU_GPIOARST = (((uint32_t)(0x10U) << 6) | (uint32_t)(0U)),
    RCU_GPIOBRST = (((uint32_t)(0x10U) << 6) | (uint32_t)(1U)),
    RCU_GPIOCRST = (((uint32_t)(0x10U) << 6) | (uint32_t)(2U)),
    RCU_GPIODRST = (((uint32_t)(0x10U) << 6) | (uint32_t)(3U)),
    RCU_GPIOERST = (((uint32_t)(0x10U) << 6) | (uint32_t)(4U)),
    RCU_GPIOFRST = (((uint32_t)(0x10U) << 6) | (uint32_t)(5U)),
    RCU_GPIOGRST = (((uint32_t)(0x10U) << 6) | (uint32_t)(6U)),
    RCU_GPIOHRST = (((uint32_t)(0x10U) << 6) | (uint32_t)(7U)),
    RCU_GPIOIRST = (((uint32_t)(0x10U) << 6) | (uint32_t)(8U)),
    RCU_CRCRST = (((uint32_t)(0x10U) << 6) | (uint32_t)(12U)),
    RCU_DMA0RST = (((uint32_t)(0x10U) << 6) | (uint32_t)(21U)),
    RCU_DMA1RST = (((uint32_t)(0x10U) << 6) | (uint32_t)(22U)),
    RCU_IPARST = (((uint32_t)(0x10U) << 6) | (uint32_t)(23U)),
    RCU_ENETRST = (((uint32_t)(0x10U) << 6) | (uint32_t)(25U)),
    RCU_USBHSRST = (((uint32_t)(0x10U) << 6) | (uint32_t)(29U)),

    RCU_DCIRST = (((uint32_t)(0x14U) << 6) | (uint32_t)(0U)),
    RCU_TRNGRST = (((uint32_t)(0x14U) << 6) | (uint32_t)(6U)),
    RCU_USBFSRST = (((uint32_t)(0x14U) << 6) | (uint32_t)(7U)),

    RCU_EXMCRST = (((uint32_t)(0x18U) << 6) | (uint32_t)(0U)),

    RCU_TIMER1RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(0U)),
    RCU_TIMER2RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(1U)),
    RCU_TIMER3RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(2U)),
    RCU_TIMER4RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(3U)),
    RCU_TIMER5RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(4U)),
    RCU_TIMER6RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(5U)),
    RCU_TIMER11RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(6U)),
    RCU_TIMER12RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(7U)),
    RCU_TIMER13RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(8U)),
    RCU_WWDGTRST = (((uint32_t)(0x20U) << 6) | (uint32_t)(11U)),
    RCU_SPI1RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(14U)),
    RCU_SPI2RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(15U)),
    RCU_USART1RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(17U)),
    RCU_USART2RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(18U)),
    RCU_UART3RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(19U)),
    RCU_UART4RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(20U)),
    RCU_I2C0RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(21U)),
    RCU_I2C1RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(22U)),
    RCU_I2C2RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(23U)),
    RCU_CAN0RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(25U)),
    RCU_CAN1RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(26U)),
    RCU_PMURST = (((uint32_t)(0x20U) << 6) | (uint32_t)(28U)),
    RCU_DACRST = (((uint32_t)(0x20U) << 6) | (uint32_t)(29U)),
    RCU_UART6RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(30U)),
    RCU_UART7RST = (((uint32_t)(0x20U) << 6) | (uint32_t)(31U)),

    RCU_TIMER0RST = (((uint32_t)(0x24U) << 6) | (uint32_t)(0U)),
    RCU_TIMER7RST = (((uint32_t)(0x24U) << 6) | (uint32_t)(1U)),
    RCU_USART0RST = (((uint32_t)(0x24U) << 6) | (uint32_t)(4U)),
    RCU_USART5RST = (((uint32_t)(0x24U) << 6) | (uint32_t)(5U)),
    RCU_ADCRST = (((uint32_t)(0x24U) << 6) | (uint32_t)(8U)),
    RCU_SDIORST = (((uint32_t)(0x24U) << 6) | (uint32_t)(11U)),
    RCU_SPI0RST = (((uint32_t)(0x24U) << 6) | (uint32_t)(12U)),
    RCU_SPI3RST = (((uint32_t)(0x24U) << 6) | (uint32_t)(13U)),
    RCU_SYSCFGRST = (((uint32_t)(0x24U) << 6) | (uint32_t)(14U)),
    RCU_TIMER8RST = (((uint32_t)(0x24U) << 6) | (uint32_t)(16U)),
    RCU_TIMER9RST = (((uint32_t)(0x24U) << 6) | (uint32_t)(17U)),
    RCU_TIMER10RST = (((uint32_t)(0x24U) << 6) | (uint32_t)(18U)),
    RCU_SPI4RST = (((uint32_t)(0x24U) << 6) | (uint32_t)(20U)),
    RCU_SPI5RST = (((uint32_t)(0x24U) << 6) | (uint32_t)(21U)),
    RCU_TLIRST = (((uint32_t)(0x24U) << 6) | (uint32_t)(26U)),

    RCU_CTCRST = (((uint32_t)(0xE0U) << 6) | (uint32_t)(27U)),
    RCU_IREFRST = (((uint32_t)(0xE0U) << 6) | (uint32_t)(31U))
}rcu_periph_reset_enum;


typedef enum
{

    RCU_FLAG_IRC16MSTB = (((uint32_t)(0x00U) << 6) | (uint32_t)(1U)),
    RCU_FLAG_HXTALSTB = (((uint32_t)(0x00U) << 6) | (uint32_t)(17U)),
    RCU_FLAG_PLLSTB = (((uint32_t)(0x00U) << 6) | (uint32_t)(25U)),
    RCU_FLAG_PLLI2SSTB = (((uint32_t)(0x00U) << 6) | (uint32_t)(27U)),
    RCU_FLAG_PLLSAISTB = (((uint32_t)(0x00U) << 6) | (uint32_t)(29U)),
    RCU_FLAG_LXTALSTB = (((uint32_t)(0x70U) << 6) | (uint32_t)(1U)),
    RCU_FLAG_IRC32KSTB = (((uint32_t)(0x74U) << 6) | (uint32_t)(1U)),
    RCU_FLAG_IRC48MSTB = (((uint32_t)(0xC0U) << 6) | (uint32_t)(17U)),

    RCU_FLAG_BORRST = (((uint32_t)(0x74U) << 6) | (uint32_t)(25U)),
    RCU_FLAG_EPRST = (((uint32_t)(0x74U) << 6) | (uint32_t)(26U)),
    RCU_FLAG_PORRST = (((uint32_t)(0x74U) << 6) | (uint32_t)(27U)),
    RCU_FLAG_SWRST = (((uint32_t)(0x74U) << 6) | (uint32_t)(28U)),
    RCU_FLAG_FWDGTRST = (((uint32_t)(0x74U) << 6) | (uint32_t)(29U)),
    RCU_FLAG_WWDGTRST = (((uint32_t)(0x74U) << 6) | (uint32_t)(30U)),
    RCU_FLAG_LPRST = (((uint32_t)(0x74U) << 6) | (uint32_t)(31U)),
}rcu_flag_enum;


typedef enum
{
    RCU_INT_FLAG_IRC32KSTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(0U)),
    RCU_INT_FLAG_LXTALSTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(1U)),
    RCU_INT_FLAG_IRC16MSTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(2U)),
    RCU_INT_FLAG_HXTALSTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(3U)),
    RCU_INT_FLAG_PLLSTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(4U)),
    RCU_INT_FLAG_PLLI2SSTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(5U)),
    RCU_INT_FLAG_PLLSAISTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(6U)),
    RCU_INT_FLAG_CKM = (((uint32_t)(0x0CU) << 6) | (uint32_t)(7U)),
    RCU_INT_FLAG_IRC48MSTB = (((uint32_t)(0xCCU) << 6) | (uint32_t)(6U)),
}rcu_int_flag_enum;


typedef enum
{
    RCU_INT_FLAG_IRC32KSTB_CLR = (((uint32_t)(0x0CU) << 6) | (uint32_t)(16U)),
    RCU_INT_FLAG_LXTALSTB_CLR = (((uint32_t)(0x0CU) << 6) | (uint32_t)(17U)),
    RCU_INT_FLAG_IRC16MSTB_CLR = (((uint32_t)(0x0CU) << 6) | (uint32_t)(18U)),
    RCU_INT_FLAG_HXTALSTB_CLR = (((uint32_t)(0x0CU) << 6) | (uint32_t)(19U)),
    RCU_INT_FLAG_PLLSTB_CLR = (((uint32_t)(0x0CU) << 6) | (uint32_t)(20U)),
    RCU_INT_FLAG_PLLI2SSTB_CLR = (((uint32_t)(0x0CU) << 6) | (uint32_t)(21U)),
    RCU_INT_FLAG_PLLSAISTB_CLR = (((uint32_t)(0x0CU) << 6) | (uint32_t)(22U)),
    RCU_INT_FLAG_CKM_CLR = (((uint32_t)(0x0CU) << 6) | (uint32_t)(23U)),
    RCU_INT_FLAG_IRC48MSTB_CLR = (((uint32_t)(0xCCU) << 6) | (uint32_t)(22U)),
}rcu_int_flag_clear_enum;


typedef enum
{
    RCU_INT_IRC32KSTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(8U)),
    RCU_INT_LXTALSTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(9U)),
    RCU_INT_IRC16MSTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(10U)),
    RCU_INT_HXTALSTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(11U)),
    RCU_INT_PLLSTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(12U)),
    RCU_INT_PLLI2SSTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(13U)),
    RCU_INT_PLLSAISTB = (((uint32_t)(0x0CU) << 6) | (uint32_t)(14U)),
    RCU_INT_IRC48MSTB = (((uint32_t)(0xCCU) << 6) | (uint32_t)(14U)),
}rcu_int_enum;


typedef enum
{
    RCU_HXTAL = (((uint32_t)(0x00U) << 6) | (uint32_t)(16U)),
    RCU_LXTAL = (((uint32_t)(0x70U) << 6) | (uint32_t)(0U)),
    RCU_IRC16M = (((uint32_t)(0x00U) << 6) | (uint32_t)(0U)),
    RCU_IRC48M = (((uint32_t)(0xC0U) << 6) | (uint32_t)(16U)),
    RCU_IRC32K = (((uint32_t)(0x74U) << 6) | (uint32_t)(0U)),
    RCU_PLL_CK = (((uint32_t)(0x00U) << 6) | (uint32_t)(24U)),
    RCU_PLLI2S_CK = (((uint32_t)(0x00U) << 6) | (uint32_t)(26U)),
    RCU_PLLSAI_CK = (((uint32_t)(0x00U) << 6) | (uint32_t)(28U)),
}rcu_osci_type_enum;


typedef enum
{
    CK_SYS = 0,
    CK_AHB,
    CK_APB1,
    CK_APB2,
}rcu_clock_freq_enum;
# 1076 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_rcu.h"
void rcu_deinit(void);

void rcu_periph_clock_enable(rcu_periph_enum periph);

void rcu_periph_clock_disable(rcu_periph_enum periph);

void rcu_periph_clock_sleep_enable(rcu_periph_sleep_enum periph);

void rcu_periph_clock_sleep_disable(rcu_periph_sleep_enum periph);

void rcu_periph_reset_enable(rcu_periph_reset_enum periph_reset);

void rcu_periph_reset_disable(rcu_periph_reset_enum periph_reset);

void rcu_bkp_reset_enable(void);

void rcu_bkp_reset_disable(void);



void rcu_system_clock_source_config(uint32_t ck_sys);

uint32_t rcu_system_clock_source_get(void);

void rcu_ahb_clock_config(uint32_t ck_ahb);

void rcu_apb1_clock_config(uint32_t ck_apb1);

void rcu_apb2_clock_config(uint32_t ck_apb2);

void rcu_ckout0_config(uint32_t ckout0_src, uint32_t ckout0_div);

void rcu_ckout1_config(uint32_t ckout1_src, uint32_t ckout1_div);

ErrStatus rcu_pll_config(uint32_t pll_src, uint32_t pll_psc, uint32_t pll_n, uint32_t pll_p, uint32_t pll_q);

ErrStatus rcu_plli2s_config(uint32_t plli2s_n, uint32_t plli2s_r);

ErrStatus rcu_pllsai_config(uint32_t pllsai_n, uint32_t pllsai_p, uint32_t pllsai_r);

void rcu_rtc_clock_config(uint32_t rtc_clock_source);

void rcu_rtc_div_config(uint32_t rtc_div);

void rcu_i2s_clock_config(uint32_t i2s_clock_source);

void rcu_ck48m_clock_config(uint32_t ck48m_clock_source);

void rcu_pll48m_clock_config(uint32_t pll48m_clock_source);

void rcu_timer_clock_prescaler_config(uint32_t timer_clock_prescaler);

void rcu_tli_clock_div_config(uint32_t pllsai_r_div);



void rcu_lxtal_drive_capability_config(uint32_t lxtal_dricap);

ErrStatus rcu_osci_stab_wait(rcu_osci_type_enum osci);

void rcu_osci_on(rcu_osci_type_enum osci);

void rcu_osci_off(rcu_osci_type_enum osci);

void rcu_osci_bypass_mode_enable(rcu_osci_type_enum osci);

void rcu_osci_bypass_mode_disable(rcu_osci_type_enum osci);

void rcu_irc16m_adjust_value_set(uint32_t irc16m_adjval);

void rcu_spread_spectrum_config(uint32_t spread_spectrum_type, uint32_t modstep, uint32_t modcnt);

void rcu_spread_spectrum_enable(void);

void rcu_spread_spectrum_disable(void);



void rcu_hxtal_clock_monitor_enable(void);

void rcu_hxtal_clock_monitor_disable(void);



void rcu_voltage_key_unlock(void);

void rcu_deepsleep_voltage_set(uint32_t dsvol);

uint32_t rcu_clock_freq_get(rcu_clock_freq_enum clock);



FlagStatus rcu_flag_get(rcu_flag_enum flag);

void rcu_all_reset_flag_clear(void);

FlagStatus rcu_interrupt_flag_get(rcu_int_flag_enum int_flag);

void rcu_interrupt_flag_clear(rcu_int_flag_clear_enum int_flag);

void rcu_interrupt_enable(rcu_int_enum interrupt);

void rcu_interrupt_disable(rcu_int_enum interrupt);
# 42 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_adc.h" 1
# 409 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_adc.h"
void adc_deinit(void);

void adc_clock_config(uint32_t prescaler);

void adc_special_function_config(uint32_t adc_periph , uint32_t function , ControlStatus newvalue);

void adc_data_alignment_config(uint32_t adc_periph , uint32_t data_alignment);

void adc_enable(uint32_t adc_periph);

void adc_disable(uint32_t adc_periph);

void adc_calibration_enable(uint32_t adc_periph);

void adc_channel_16_to_18(uint32_t function, ControlStatus newvalue);

void adc_resolution_config(uint32_t adc_periph, uint32_t resolution);

void adc_oversample_mode_config(uint32_t adc_periph, uint32_t mode, uint16_t shift, uint8_t ratio);

void adc_oversample_mode_enable(uint32_t adc_periph);

void adc_oversample_mode_disable(uint32_t adc_periph);



void adc_dma_mode_enable(uint32_t adc_periph);

void adc_dma_mode_disable(uint32_t adc_periph);

void adc_dma_request_after_last_enable(uint32_t adc_periph);

void adc_dma_request_after_last_disable(uint32_t adc_periph);



void adc_discontinuous_mode_config(uint32_t adc_periph , uint8_t adc_sequence , uint8_t length);

void adc_channel_length_config(uint32_t adc_periph , uint8_t adc_sequence , uint32_t length);

void adc_routine_channel_config(uint32_t adc_periph , uint8_t rank , uint8_t adc_channel , uint32_t sample_time);

void adc_inserted_channel_config(uint32_t adc_periph , uint8_t rank , uint8_t adc_channel , uint32_t sample_time);

void adc_inserted_channel_offset_config(uint32_t adc_periph , uint8_t inserted_channel , uint16_t offset);

void adc_external_trigger_source_config(uint32_t adc_periph , uint8_t adc_sequence , uint32_t external_trigger_source);

void adc_external_trigger_config(uint32_t adc_periph , uint8_t adc_sequence , uint32_t trigger_mode);

void adc_software_trigger_enable(uint32_t adc_periph , uint8_t adc_sequence);

void adc_end_of_conversion_config(uint32_t adc_periph , uint8_t end_selection);



uint16_t adc_routine_data_read(uint32_t adc_periph);

uint16_t adc_inserted_data_read(uint32_t adc_periph , uint8_t inserted_channel);



void adc_watchdog_single_channel_disable(uint32_t adc_periph );

void adc_watchdog_single_channel_enable(uint32_t adc_periph , uint8_t adc_channel);

void adc_watchdog_sequence_channel_enable(uint32_t adc_periph , uint8_t adc_sequence);

void adc_watchdog_disable(uint32_t adc_periph , uint8_t adc_sequence);

void adc_watchdog_threshold_config(uint32_t adc_periph , uint16_t low_threshold , uint16_t high_threshold);



FlagStatus adc_flag_get(uint32_t adc_periph , uint32_t adc_flag);

void adc_flag_clear(uint32_t adc_periph , uint32_t adc_flag);

FlagStatus adc_routine_software_startconv_flag_get(uint32_t adc_periph);

FlagStatus adc_inserted_software_startconv_flag_get(uint32_t adc_periph);

FlagStatus adc_interrupt_flag_get(uint32_t adc_periph , uint32_t adc_interrupt);

void adc_interrupt_flag_clear(uint32_t adc_periph , uint32_t adc_interrupt);

void adc_interrupt_enable(uint32_t adc_periph , uint32_t adc_interrupt);

void adc_interrupt_disable(uint32_t adc_periph , uint32_t adc_interrupt);



void adc_sync_mode_config(uint32_t sync_mode);

void adc_sync_delay_config(uint32_t sample_delay);

void adc_sync_dma_config(uint32_t dma_mode );

void adc_sync_dma_request_after_last_enable(void);

void adc_sync_dma_request_after_last_disable(void);

uint32_t adc_sync_routine_data_read(void);
# 43 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_can.h" 1
# 329 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_can.h"
typedef enum {

    CAN_FLAG_RXL = (((uint32_t)(((uint8_t)0x04U)) << 6) | (uint32_t)(11U)),
    CAN_FLAG_LASTRX = (((uint32_t)(((uint8_t)0x04U)) << 6) | (uint32_t)(10U)),
    CAN_FLAG_RS = (((uint32_t)(((uint8_t)0x04U)) << 6) | (uint32_t)(9U)),
    CAN_FLAG_TS = (((uint32_t)(((uint8_t)0x04U)) << 6) | (uint32_t)(8U)),
    CAN_FLAG_SLPIF = (((uint32_t)(((uint8_t)0x04U)) << 6) | (uint32_t)(4U)),
    CAN_FLAG_WUIF = (((uint32_t)(((uint8_t)0x04U)) << 6) | (uint32_t)(3U)),
    CAN_FLAG_ERRIF = (((uint32_t)(((uint8_t)0x04U)) << 6) | (uint32_t)(2U)),
    CAN_FLAG_SLPWS = (((uint32_t)(((uint8_t)0x04U)) << 6) | (uint32_t)(1U)),
    CAN_FLAG_IWS = (((uint32_t)(((uint8_t)0x04U)) << 6) | (uint32_t)(0U)),

    CAN_FLAG_TMLS2 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(31U)),
    CAN_FLAG_TMLS1 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(30U)),
    CAN_FLAG_TMLS0 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(29U)),
    CAN_FLAG_TME2 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(28U)),
    CAN_FLAG_TME1 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(27U)),
    CAN_FLAG_TME0 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(26U)),
    CAN_FLAG_MTE2 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(19U)),
    CAN_FLAG_MTE1 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(11U)),
    CAN_FLAG_MTE0 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(3U)),
    CAN_FLAG_MAL2 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(18U)),
    CAN_FLAG_MAL1 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(10U)),
    CAN_FLAG_MAL0 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(2U)),
    CAN_FLAG_MTFNERR2 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(17U)),
    CAN_FLAG_MTFNERR1 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(9U)),
    CAN_FLAG_MTFNERR0 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(1U)),
    CAN_FLAG_MTF2 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(16U)),
    CAN_FLAG_MTF1 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(8U)),
    CAN_FLAG_MTF0 = (((uint32_t)(((uint8_t)0x08U)) << 6) | (uint32_t)(0U)),

    CAN_FLAG_RFO0 = (((uint32_t)(((uint8_t)0x0CU)) << 6) | (uint32_t)(4U)),
    CAN_FLAG_RFF0 = (((uint32_t)(((uint8_t)0x0CU)) << 6) | (uint32_t)(3U)),

    CAN_FLAG_RFO1 = (((uint32_t)(((uint8_t)0x10U)) << 6) | (uint32_t)(4U)),
    CAN_FLAG_RFF1 = (((uint32_t)(((uint8_t)0x10U)) << 6) | (uint32_t)(3U)),

    CAN_FLAG_BOERR = (((uint32_t)(((uint8_t)0x18U)) << 6) | (uint32_t)(2U)),
    CAN_FLAG_PERR = (((uint32_t)(((uint8_t)0x18U)) << 6) | (uint32_t)(1U)),
    CAN_FLAG_WERR = (((uint32_t)(((uint8_t)0x18U)) << 6) | (uint32_t)(0U)),
} can_flag_enum;


typedef enum {

    CAN_INT_FLAG_SLPIF = (((uint32_t)(((uint8_t)0x04U)) << 12) | ((uint32_t)(4U) << 6) | (uint32_t)(17U)),
    CAN_INT_FLAG_WUIF = (((uint32_t)(((uint8_t)0x04U)) << 12) | ((uint32_t)(3U) << 6) | (uint32_t)(16)),
    CAN_INT_FLAG_ERRIF = (((uint32_t)(((uint8_t)0x04U)) << 12) | ((uint32_t)(2U) << 6) | (uint32_t)(15)),

    CAN_INT_FLAG_MTF2 = (((uint32_t)(((uint8_t)0x08U)) << 12) | ((uint32_t)(16U) << 6) | (uint32_t)(0U)),
    CAN_INT_FLAG_MTF1 = (((uint32_t)(((uint8_t)0x08U)) << 12) | ((uint32_t)(8U) << 6) | (uint32_t)(0U)),
    CAN_INT_FLAG_MTF0 = (((uint32_t)(((uint8_t)0x08U)) << 12) | ((uint32_t)(0U) << 6) | (uint32_t)(0U)),

    CAN_INT_FLAG_RFO0 = (((uint32_t)(((uint8_t)0x0CU)) << 12) | ((uint32_t)(4U) << 6) | (uint32_t)(3U)),
    CAN_INT_FLAG_RFF0 = (((uint32_t)(((uint8_t)0x0CU)) << 12) | ((uint32_t)(3U) << 6) | (uint32_t)(2U)),
    CAN_INT_FLAG_RFL0 = (((uint32_t)(((uint8_t)0x0CU)) << 12) | ((uint32_t)(2U) << 6) | (uint32_t)(1U)),

    CAN_INT_FLAG_RFO1 = (((uint32_t)(((uint8_t)0x10U)) << 12) | ((uint32_t)(4U) << 6) | (uint32_t)(6U)),
    CAN_INT_FLAG_RFF1 = (((uint32_t)(((uint8_t)0x10U)) << 12) | ((uint32_t)(3U) << 6) | (uint32_t)(5U)),
    CAN_INT_FLAG_RFL1 = (((uint32_t)(((uint8_t)0x10U)) << 12) | ((uint32_t)(2U) << 6) | (uint32_t)(4U)),

    CAN_INT_FLAG_ERRN = (((uint32_t)(((uint8_t)0x18U)) << 12) | ((uint32_t)(3U) << 6) | (uint32_t)(11U)),
    CAN_INT_FLAG_BOERR = (((uint32_t)(((uint8_t)0x18U)) << 12) | ((uint32_t)(2U) << 6) | (uint32_t)(10U)),
    CAN_INT_FLAG_PERR = (((uint32_t)(((uint8_t)0x18U)) << 12) | ((uint32_t)(1U) << 6) | (uint32_t)(9U)),
    CAN_INT_FLAG_WERR = (((uint32_t)(((uint8_t)0x18U)) << 12) | ((uint32_t)(0U) << 6) | (uint32_t)(8U)),
} can_interrupt_flag_enum;


typedef struct {
    uint8_t working_mode;
    uint8_t resync_jump_width;
    uint8_t time_segment_1;
    uint8_t time_segment_2;
    ControlStatus time_triggered;
    ControlStatus auto_bus_off_recovery;
    ControlStatus auto_wake_up;
    ControlStatus auto_retrans;
    ControlStatus rec_fifo_overwrite;
    ControlStatus trans_fifo_order;
    uint16_t prescaler;
} can_parameter_struct;


typedef struct {
    uint32_t tx_sfid;
    uint32_t tx_efid;
    uint8_t tx_ff;
    uint8_t tx_ft;
    uint8_t tx_dlen;
    uint8_t tx_data[8];
} can_trasnmit_message_struct;


typedef struct {
    uint32_t rx_sfid;
    uint32_t rx_efid;
    uint8_t rx_ff;
    uint8_t rx_ft;
    uint8_t rx_dlen;
    uint8_t rx_data[8];
    uint8_t rx_fi;
} can_receive_message_struct;


typedef struct {
    uint16_t filter_list_high;
    uint16_t filter_list_low;
    uint16_t filter_mask_high;
    uint16_t filter_mask_low;
    uint16_t filter_fifo_number;
    uint16_t filter_number;
    uint16_t filter_mode;
    uint16_t filter_bits;
    ControlStatus filter_enable;
} can_filter_parameter_struct;


typedef enum {
    CAN_ERROR_NONE = 0,
    CAN_ERROR_FILL,
    CAN_ERROR_FORMATE,
    CAN_ERROR_ACK,
    CAN_ERROR_BITRECESSIVE,
    CAN_ERROR_BITDOMINANTER,
    CAN_ERROR_CRC,
    CAN_ERROR_SOFTWARECFG,
} can_error_enum;


typedef enum {
    CAN_TRANSMIT_FAILED = 0U,
    CAN_TRANSMIT_OK = 1U,
    CAN_TRANSMIT_PENDING = 2U,
    CAN_TRANSMIT_NOMAILBOX = 4U,
} can_transmit_state_enum;

typedef enum {
    CAN_INIT_STRUCT = 0,
    CAN_FILTER_STRUCT,
    CAN_TX_MESSAGE_STRUCT,
    CAN_RX_MESSAGE_STRUCT,
} can_struct_type_enum;
# 686 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_can.h"
void can_deinit(uint32_t can_periph);

void can_struct_para_init(can_struct_type_enum type, void *p_struct);

ErrStatus can_init(uint32_t can_periph, can_parameter_struct *can_parameter_init);

void can_filter_init(can_filter_parameter_struct *can_filter_parameter_init);



void can1_filter_start_bank(uint8_t start_bank);


void can_debug_freeze_enable(uint32_t can_periph);

void can_debug_freeze_disable(uint32_t can_periph);

void can_time_trigger_mode_enable(uint32_t can_periph);

void can_time_trigger_mode_disable(uint32_t can_periph);



uint8_t can_message_transmit(uint32_t can_periph, can_trasnmit_message_struct *transmit_message);

can_transmit_state_enum can_transmit_states(uint32_t can_periph, uint8_t mailbox_number);

void can_transmission_stop(uint32_t can_periph, uint8_t mailbox_number);

void can_message_receive(uint32_t can_periph, uint8_t fifo_number, can_receive_message_struct *receive_message);

void can_fifo_release(uint32_t can_periph, uint8_t fifo_number);

uint8_t can_receive_message_length_get(uint32_t can_periph, uint8_t fifo_number);

ErrStatus can_working_mode_set(uint32_t can_periph, uint8_t working_mode);

ErrStatus can_wakeup(uint32_t can_periph);


can_error_enum can_error_get(uint32_t can_periph);

uint8_t can_receive_error_number_get(uint32_t can_periph);

uint8_t can_transmit_error_number_get(uint32_t can_periph);



FlagStatus can_flag_get(uint32_t can_periph, can_flag_enum flag);

void can_flag_clear(uint32_t can_periph, can_flag_enum flag);

void can_interrupt_enable(uint32_t can_periph, uint32_t interrupt);

void can_interrupt_disable(uint32_t can_periph, uint32_t interrupt);

FlagStatus can_interrupt_flag_get(uint32_t can_periph, can_interrupt_flag_enum flag);

void can_interrupt_flag_clear(uint32_t can_periph, can_interrupt_flag_enum flag);
# 44 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_crc.h" 1
# 61 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_crc.h"
void crc_deinit(void);


void crc_data_register_reset(void);

uint32_t crc_data_register_read(void);


uint8_t crc_free_data_register_read(void);

void crc_free_data_register_write(uint8_t free_data);


uint32_t crc_single_data_calculate(uint32_t sdata);

uint32_t crc_block_data_calculate(uint32_t array[], uint32_t size);
# 45 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_ctc.h" 1
# 135 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_ctc.h"
void ctc_deinit(void);

void ctc_counter_enable(void);

void ctc_counter_disable(void);


void ctc_irc48m_trim_value_config(uint8_t trim_value);

void ctc_software_refsource_pulse_generate(void);

void ctc_hardware_trim_mode_config(uint32_t hardmode);


void ctc_refsource_polarity_config(uint32_t polarity);

void ctc_refsource_signal_select(uint32_t refs);

void ctc_refsource_prescaler_config(uint32_t prescaler);

void ctc_clock_limit_value_config(uint8_t limit_value);

void ctc_counter_reload_value_config(uint16_t reload_value);


uint16_t ctc_counter_capture_value_read(void);

FlagStatus ctc_counter_direction_read(void);

uint16_t ctc_counter_reload_value_read(void);

uint8_t ctc_irc48m_trim_value_read(void);



void ctc_interrupt_enable(uint32_t interrupt);

void ctc_interrupt_disable(uint32_t interrupt);

FlagStatus ctc_interrupt_flag_get(uint32_t int_flag);

void ctc_interrupt_flag_clear(uint32_t int_flag);

FlagStatus ctc_flag_get(uint32_t flag);

void ctc_flag_clear(uint32_t flag);
# 46 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_dac.h" 1
# 194 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_dac.h"
void dac_deinit(void);

void dac_enable(uint32_t dac_periph);

void dac_disable(uint32_t dac_periph);

void dac_dma_enable(uint32_t dac_periph);

void dac_dma_disable(uint32_t dac_periph);

void dac_output_buffer_enable(uint32_t dac_periph);

void dac_output_buffer_disable(uint32_t dac_periph);

uint16_t dac_output_value_get(uint32_t dac_periph);

void dac_data_set(uint32_t dac_periph, uint32_t dac_align, uint16_t data);



void dac_trigger_enable(uint32_t dac_periph);

void dac_trigger_disable(uint32_t dac_periph);

void dac_trigger_source_config(uint32_t dac_periph, uint32_t triggersource);

void dac_software_trigger_enable(uint32_t dac_periph);

void dac_software_trigger_disable(uint32_t dac_periph);



void dac_wave_mode_config(uint32_t dac_periph, uint32_t wave_mode);

void dac_wave_bit_width_config(uint32_t dac_periph, uint32_t bit_width);

void dac_lfsr_noise_config(uint32_t dac_periph, uint32_t unmask_bits);

void dac_triangle_noise_config(uint32_t dac_periph, uint32_t amplitude);



void dac_concurrent_enable(void);

void dac_concurrent_disable(void);

void dac_concurrent_software_trigger_enable(void);

void dac_concurrent_software_trigger_disable(void);

void dac_concurrent_output_buffer_enable(void);

void dac_concurrent_output_buffer_disable(void);

void dac_concurrent_data_set(uint32_t dac_align, uint16_t data0, uint16_t data1);

void dac_concurrent_interrupt_enable(void);

void dac_concurrent_interrupt_disable(void);



FlagStatus dac_flag_get(uint32_t dac_periph);

void dac_flag_clear(uint32_t dac_periph);

void dac_interrupt_enable(uint32_t dac_periph);

void dac_interrupt_disable(uint32_t dac_periph);

FlagStatus dac_interrupt_flag_get(uint32_t dac_periph);

void dac_interrupt_flag_clear(uint32_t dac_periph);
# 47 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_dbg.h" 1
# 96 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_dbg.h"
enum dbg_reg_idx
{
    DBG_IDX_CTL0 = 0x04U,
    DBG_IDX_CTL1 = 0x08U,
    DBG_IDX_CTL2 = 0x0CU
};

typedef enum
{
    DBG_TIMER1_HOLD = (((DBG_IDX_CTL1) << 6) | (0U)),
    DBG_TIMER2_HOLD = (((DBG_IDX_CTL1) << 6) | (1U)),
    DBG_TIMER3_HOLD = (((DBG_IDX_CTL1) << 6) | (2U)),
    DBG_TIMER4_HOLD = (((DBG_IDX_CTL1) << 6) | (3U)),
    DBG_TIMER5_HOLD = (((DBG_IDX_CTL1) << 6) | (4U)),
    DBG_TIMER6_HOLD = (((DBG_IDX_CTL1) << 6) | (5U)),
    DBG_TIMER11_HOLD = (((DBG_IDX_CTL1) << 6) | (6U)),
    DBG_TIMER12_HOLD = (((DBG_IDX_CTL1) << 6) | (7U)),
    DBG_TIMER13_HOLD = (((DBG_IDX_CTL1) << 6) | (8U)),
    DBG_RTC_HOLD = (((DBG_IDX_CTL1) << 6) | (10U)),
    DBG_WWDGT_HOLD = (((DBG_IDX_CTL1) << 6) | (11U)),
    DBG_FWDGT_HOLD = (((DBG_IDX_CTL1) << 6) | (12U)),
    DBG_I2C0_HOLD = (((DBG_IDX_CTL1) << 6) | (21U)),
    DBG_I2C1_HOLD = (((DBG_IDX_CTL1) << 6) | (22U)),
    DBG_I2C2_HOLD = (((DBG_IDX_CTL1) << 6) | (23U)),
    DBG_CAN0_HOLD = (((DBG_IDX_CTL1) << 6) | (25U)),
    DBG_CAN1_HOLD = (((DBG_IDX_CTL1) << 6) | (26U)),
    DBG_TIMER0_HOLD = (((DBG_IDX_CTL2) << 6) | (0U)),
    DBG_TIMER7_HOLD = (((DBG_IDX_CTL2) << 6) | (1U)),
    DBG_TIMER8_HOLD = (((DBG_IDX_CTL2) << 6) | (16U)),
    DBG_TIMER9_HOLD = (((DBG_IDX_CTL2) << 6) | (17U)),
    DBG_TIMER10_HOLD = (((DBG_IDX_CTL2) << 6) | (18U))
}dbg_periph_enum;



void dbg_deinit(void);

uint32_t dbg_id_get(void);


void dbg_low_power_enable(uint32_t dbg_low_power);

void dbg_low_power_disable(uint32_t dbg_low_power);


void dbg_periph_enable(dbg_periph_enum dbg_periph);

void dbg_periph_disable(dbg_periph_enum dbg_periph);


void dbg_trace_pin_enable(void);

void dbg_trace_pin_disable(void);
# 48 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_dci.h" 1
# 125 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_dci.h"
typedef struct
{
    uint32_t capture_mode;
    uint32_t clock_polarity;
    uint32_t hsync_polarity;
    uint32_t vsync_polarity;
    uint32_t frame_rate;
    uint32_t interface_format;
}dci_parameter_struct;
# 185 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_dci.h"
void dci_deinit(void);

void dci_init(dci_parameter_struct* dci_struct);


void dci_enable(void);

void dci_disable(void);

void dci_capture_enable(void);

void dci_capture_disable(void);

void dci_jpeg_enable(void);

void dci_jpeg_disable(void);



void dci_crop_window_enable(void);

void dci_crop_window_disable(void);

void dci_crop_window_config(uint16_t start_x, uint16_t start_y, uint16_t size_width, uint16_t size_height);


void dci_embedded_sync_enable(void);

void dci_embedded_sync_disable(void);

void dci_sync_codes_config(uint8_t frame_start, uint8_t line_start, uint8_t line_end, uint8_t frame_end);

void dci_sync_codes_unmask_config(uint8_t frame_start, uint8_t line_start, uint8_t line_end, uint8_t frame_end);


uint32_t dci_data_read(void);



FlagStatus dci_flag_get(uint32_t flag);

void dci_interrupt_enable(uint32_t interrupt);

void dci_interrupt_disable(uint32_t interrupt);



FlagStatus dci_interrupt_flag_get(uint32_t int_flag);

void dci_interrupt_flag_clear(uint32_t int_flag);
# 49 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_dma.h" 1
# 38 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_dma.h"
extern "C" {
# 165 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_dma.h"
typedef enum
{
    DMA_CH0 = 0,
    DMA_CH1,
    DMA_CH2,
    DMA_CH3,
    DMA_CH4,
    DMA_CH5,
    DMA_CH6,
    DMA_CH7
} dma_channel_enum;


typedef enum
{
    DMA_SUBPERI0 = 0,
    DMA_SUBPERI1,
    DMA_SUBPERI2,
    DMA_SUBPERI3,
    DMA_SUBPERI4,
    DMA_SUBPERI5,
    DMA_SUBPERI6,
    DMA_SUBPERI7
} dma_subperipheral_enum;


typedef struct
{
    uint32_t periph_addr;
    uint32_t periph_width;
    uint32_t periph_inc;

    uint32_t memory0_addr;
    uint32_t memory_width;
    uint32_t memory_inc;

    uint32_t memory_burst_width;
    uint32_t periph_burst_width;
    uint32_t critical_value;

    uint32_t circular_mode;
    uint32_t direction;
    uint32_t number;
    uint32_t priority;
}dma_multi_data_parameter_struct;


typedef struct
{
    uint32_t periph_addr;
    uint32_t periph_inc;

    uint32_t memory0_addr;
    uint32_t memory_inc;

    uint32_t periph_memory_width;

    uint32_t circular_mode;
    uint32_t direction;
    uint32_t number;
    uint32_t priority;
} dma_single_data_parameter_struct;
# 351 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_dma.h"
void dma_deinit(uint32_t dma_periph, dma_channel_enum channelx);

void dma_single_data_para_struct_init(dma_single_data_parameter_struct* init_struct);

void dma_multi_data_para_struct_init(dma_multi_data_parameter_struct* init_struct);

void dma_single_data_mode_init(uint32_t dma_periph, dma_channel_enum channelx, dma_single_data_parameter_struct* init_struct);

void dma_multi_data_mode_init(uint32_t dma_periph, dma_channel_enum channelx, dma_multi_data_parameter_struct* init_struct);



void dma_periph_address_config(uint32_t dma_periph, dma_channel_enum channelx, uint32_t address);

void dma_memory_address_config(uint32_t dma_periph, dma_channel_enum channelx, uint8_t memory_flag, uint32_t address);


void dma_transfer_number_config(uint32_t dma_periph,dma_channel_enum channelx, uint32_t number);

uint32_t dma_transfer_number_get(uint32_t dma_periph, dma_channel_enum channelx);


void dma_priority_config(uint32_t dma_periph, dma_channel_enum channelx, uint32_t priority);


void dma_memory_burst_beats_config (uint32_t dma_periph, dma_channel_enum channelx, uint32_t mbeat);

void dma_periph_burst_beats_config (uint32_t dma_periph, dma_channel_enum channelx, uint32_t pbeat);

void dma_memory_width_config (uint32_t dma_periph, dma_channel_enum channelx, uint32_t msize);

void dma_periph_width_config (uint32_t dma_periph, dma_channel_enum channelx, uint32_t psize);


void dma_memory_address_generation_config(uint32_t dma_periph, dma_channel_enum channelx, uint8_t generation_algorithm);

void dma_peripheral_address_generation_config(uint32_t dma_periph, dma_channel_enum channelx, uint8_t generation_algorithm);


void dma_circulation_enable(uint32_t dma_periph, dma_channel_enum channelx);

void dma_circulation_disable(uint32_t dma_periph, dma_channel_enum channelx);

void dma_channel_enable(uint32_t dma_periph, dma_channel_enum channelx);

void dma_channel_disable(uint32_t dma_periph, dma_channel_enum channelx);


void dma_transfer_direction_config(uint32_t dma_periph, dma_channel_enum channelx, uint8_t direction);


void dma_switch_buffer_mode_config(uint32_t dma_periph, dma_channel_enum channelx, uint32_t memory1_addr, uint32_t memory_select);

uint32_t dma_using_memory_get(uint32_t dma_periph, dma_channel_enum channelx);


void dma_channel_subperipheral_select(uint32_t dma_periph, dma_channel_enum channelx, dma_subperipheral_enum sub_periph);

void dma_flow_controller_config(uint32_t dma_periph, dma_channel_enum channelx, uint32_t controller);

void dma_switch_buffer_mode_enable(uint32_t dma_periph, dma_channel_enum channelx, ControlStatus newvalue);

uint32_t dma_fifo_status_get(uint32_t dma_periph, dma_channel_enum channelx);



FlagStatus dma_flag_get(uint32_t dma_periph, dma_channel_enum channelx, uint32_t flag);

void dma_flag_clear(uint32_t dma_periph, dma_channel_enum channelx, uint32_t flag);

void dma_interrupt_enable(uint32_t dma_periph, dma_channel_enum channelx, uint32_t source);

void dma_interrupt_disable(uint32_t dma_periph, dma_channel_enum channelx, uint32_t source);

FlagStatus dma_interrupt_flag_get(uint32_t dma_periph, dma_channel_enum channelx, uint32_t interrupt);

void dma_interrupt_flag_clear(uint32_t dma_periph, dma_channel_enum channelx, uint32_t interrupt);


}
# 50 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_exti.h" 1
# 203 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_exti.h"
typedef enum {
    EXTI_0 = ((uint32_t)((uint32_t)0x01U<<(0))),
    EXTI_1 = ((uint32_t)((uint32_t)0x01U<<(1))),
    EXTI_2 = ((uint32_t)((uint32_t)0x01U<<(2))),
    EXTI_3 = ((uint32_t)((uint32_t)0x01U<<(3))),
    EXTI_4 = ((uint32_t)((uint32_t)0x01U<<(4))),
    EXTI_5 = ((uint32_t)((uint32_t)0x01U<<(5))),
    EXTI_6 = ((uint32_t)((uint32_t)0x01U<<(6))),
    EXTI_7 = ((uint32_t)((uint32_t)0x01U<<(7))),
    EXTI_8 = ((uint32_t)((uint32_t)0x01U<<(8))),
    EXTI_9 = ((uint32_t)((uint32_t)0x01U<<(9))),
    EXTI_10 = ((uint32_t)((uint32_t)0x01U<<(10))),
    EXTI_11 = ((uint32_t)((uint32_t)0x01U<<(11))),
    EXTI_12 = ((uint32_t)((uint32_t)0x01U<<(12))),
    EXTI_13 = ((uint32_t)((uint32_t)0x01U<<(13))),
    EXTI_14 = ((uint32_t)((uint32_t)0x01U<<(14))),
    EXTI_15 = ((uint32_t)((uint32_t)0x01U<<(15))),
    EXTI_16 = ((uint32_t)((uint32_t)0x01U<<(16))),
    EXTI_17 = ((uint32_t)((uint32_t)0x01U<<(17))),
    EXTI_18 = ((uint32_t)((uint32_t)0x01U<<(18))),
    EXTI_19 = ((uint32_t)((uint32_t)0x01U<<(19))),
    EXTI_20 = ((uint32_t)((uint32_t)0x01U<<(20))),
    EXTI_21 = ((uint32_t)((uint32_t)0x01U<<(21))),
    EXTI_22 = ((uint32_t)((uint32_t)0x01U<<(22)))
} exti_line_enum;


typedef enum {
    EXTI_INTERRUPT = 0,
    EXTI_EVENT
} exti_mode_enum;


typedef enum {
    EXTI_TRIG_RISING = 0,
    EXTI_TRIG_FALLING,
    EXTI_TRIG_BOTH,
    EXTI_TRIG_NONE
} exti_trig_type_enum;



void exti_deinit(void);

void exti_init(exti_line_enum linex, exti_mode_enum mode, exti_trig_type_enum trig_type);

void exti_interrupt_enable(exti_line_enum linex);

void exti_interrupt_disable(exti_line_enum linex);

void exti_event_enable(exti_line_enum linex);

void exti_event_disable(exti_line_enum linex);

void exti_software_interrupt_enable(exti_line_enum linex);

void exti_software_interrupt_disable(exti_line_enum linex);



FlagStatus exti_flag_get(exti_line_enum linex);

void exti_flag_clear(exti_line_enum linex);

FlagStatus exti_interrupt_flag_get(exti_line_enum linex);

void exti_interrupt_flag_clear(exti_line_enum linex);
# 51 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_fmc.h" 1
# 125 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_fmc.h"
typedef enum {
    FMC_READY = 0,
    FMC_BUSY,
    FMC_RDDERR,
    FMC_PGSERR,
    FMC_PGMERR,
    FMC_WPERR,
    FMC_OPERR,
    FMC_TOERR
} fmc_state_enum;
# 329 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_fmc.h"
void fmc_wscnt_set(uint32_t wscnt);

void fmc_unlock(void);

void fmc_lock(void);





fmc_state_enum fmc_sector_erase(uint32_t fmc_sector);

fmc_state_enum fmc_mass_erase(void);

fmc_state_enum fmc_bank0_erase(void);

fmc_state_enum fmc_bank1_erase(void);

fmc_state_enum fmc_word_program(uint32_t address, uint32_t data);

fmc_state_enum fmc_halfword_program(uint32_t address, uint16_t data);

fmc_state_enum fmc_byte_program(uint32_t address, uint8_t data);



void ob_unlock(void);

void ob_lock(void);

void ob_start(void);

void ob_erase(void);

ErrStatus ob_write_protection_enable(uint32_t ob_wp);

ErrStatus ob_write_protection_disable(uint32_t ob_wp);

void ob_drp_enable(uint32_t ob_drp);

void ob_drp_disable(void);

void ob_security_protection_config(uint8_t ob_spc);

void ob_user_write(uint32_t ob_fwdgt, uint32_t ob_deepsleep, uint32_t ob_stdby);

void ob_user_bor_threshold(uint32_t ob_bor_th);

void ob_boot_mode_config(uint32_t boot_mode);


void ob_double_bank_select(uint32_t double_bank);


uint8_t ob_user_get(void);

uint16_t ob_write_protection0_get(void);

uint16_t ob_write_protection1_get(void);

uint16_t ob_drp0_get(void);

uint16_t ob_drp1_get(void);

FlagStatus ob_spc_get(void);

uint8_t ob_user_bor_threshold_get(void);



FlagStatus fmc_flag_get(uint32_t fmc_flag);

void fmc_flag_clear(uint32_t fmc_flag);

void fmc_interrupt_enable(uint32_t fmc_int);

void fmc_interrupt_disable(uint32_t fmc_int);

FlagStatus fmc_interrupt_flag_get(uint32_t fmc_int_flag);

void fmc_interrupt_flag_clear(uint32_t fmc_int_flag);

fmc_state_enum fmc_state_get(void);

fmc_state_enum fmc_ready_wait(uint32_t timeout);
# 52 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_fwdgt.h" 1
# 93 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_fwdgt.h"
void fwdgt_write_enable(void);

void fwdgt_write_disable(void);

void fwdgt_enable(void);


ErrStatus fwdgt_prescaler_value_config(uint16_t prescaler_value);

ErrStatus fwdgt_reload_value_config(uint16_t reload_value);

void fwdgt_counter_reload(void);

ErrStatus fwdgt_config(uint16_t reload_value, uint8_t prescaler_div);


FlagStatus fwdgt_flag_get(uint16_t flag);
# 53 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_gpio.h" 1
# 284 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_gpio.h"
typedef FlagStatus bit_status;
# 372 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_gpio.h"
void gpio_deinit(uint32_t gpio_periph);

void gpio_mode_set(uint32_t gpio_periph, uint32_t mode, uint32_t pull_up_down, uint32_t pin);

void gpio_output_options_set(uint32_t gpio_periph, uint8_t otype, uint32_t speed, uint32_t pin);


void gpio_bit_set(uint32_t gpio_periph, uint32_t pin);

void gpio_bit_reset(uint32_t gpio_periph, uint32_t pin);

void gpio_bit_write(uint32_t gpio_periph, uint32_t pin, bit_status bit_value);

void gpio_port_write(uint32_t gpio_periph, uint16_t data);


FlagStatus gpio_input_bit_get(uint32_t gpio_periph, uint32_t pin);

uint16_t gpio_input_port_get(uint32_t gpio_periph);

FlagStatus gpio_output_bit_get(uint32_t gpio_periph, uint32_t pin);

uint16_t gpio_output_port_get(uint32_t gpio_periph);


void gpio_af_set(uint32_t gpio_periph, uint32_t alt_func_num, uint32_t pin);

void gpio_pin_lock(uint32_t gpio_periph, uint32_t pin);


void gpio_bit_toggle(uint32_t gpio_periph, uint32_t pin);

void gpio_port_toggle(uint32_t gpio_periph);
# 54 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_syscfg.h" 1
# 159 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_syscfg.h"
void syscfg_deinit(void);



void syscfg_bootmode_config(uint8_t syscfg_bootmode);

void syscfg_fmc_swap_config(uint32_t syscfg_fmc_swap);

void syscfg_exmc_swap_config(uint32_t syscfg_exmc_swap);

void syscfg_exti_line_config(uint8_t exti_port, uint8_t exti_pin);

void syscfg_enet_phy_interface_config(uint32_t syscfg_enet_phy_interface);

void syscfg_compensation_config(uint32_t syscfg_compensation);



FlagStatus syscfg_flag_get(void);
# 55 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_i2c.h" 1
# 165 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_i2c.h"
typedef enum {

    I2C_FLAG_SBSEND = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(0U)),
    I2C_FLAG_ADDSEND = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(1U)),
    I2C_FLAG_BTC = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(2U)),
    I2C_FLAG_ADD10SEND = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(3U)),
    I2C_FLAG_STPDET = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(4U)),
    I2C_FLAG_RBNE = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(6U)),
    I2C_FLAG_TBE = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(7U)),
    I2C_FLAG_BERR = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(8U)),
    I2C_FLAG_LOSTARB = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(9U)),
    I2C_FLAG_AERR = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(10U)),
    I2C_FLAG_OUERR = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(11U)),
    I2C_FLAG_PECERR = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(12U)),
    I2C_FLAG_SMBTO = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(14U)),
    I2C_FLAG_SMBALT = (((uint32_t)(((uint32_t)0x00000014U)) << 6) | (uint32_t)(15U)),

    I2C_FLAG_MASTER = (((uint32_t)(((uint32_t)0x00000018U)) << 6) | (uint32_t)(0U)),
    I2C_FLAG_I2CBSY = (((uint32_t)(((uint32_t)0x00000018U)) << 6) | (uint32_t)(1U)),
    I2C_FLAG_TR = (((uint32_t)(((uint32_t)0x00000018U)) << 6) | (uint32_t)(2U)),
    I2C_FLAG_RXGC = (((uint32_t)(((uint32_t)0x00000018U)) << 6) | (uint32_t)(4U)),
    I2C_FLAG_DEFSMB = (((uint32_t)(((uint32_t)0x00000018U)) << 6) | (uint32_t)(5U)),
    I2C_FLAG_HSTSMB = (((uint32_t)(((uint32_t)0x00000018U)) << 6) | (uint32_t)(6U)),
    I2C_FLAG_DUMOD = (((uint32_t)(((uint32_t)0x00000018U)) << 6) | (uint32_t)(7U)),

    I2C_FLAG_TFF = (((uint32_t)(((uint32_t)0x00000080U)) << 6) | (uint32_t)(12U)),
    I2C_FLAG_TFR = (((uint32_t)(((uint32_t)0x00000080U)) << 6) | (uint32_t)(13U)),
    I2C_FLAG_RFF = (((uint32_t)(((uint32_t)0x00000080U)) << 6) | (uint32_t)(14U)),
    I2C_FLAG_RFR = (((uint32_t)(((uint32_t)0x00000080U)) << 6) | (uint32_t)(15U))
} i2c_flag_enum;


typedef enum {

    I2C_INT_FLAG_SBSEND = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((0U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(9U))),
    I2C_INT_FLAG_ADDSEND = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((1U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(9U))),
    I2C_INT_FLAG_BTC = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((2U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(9U))),
    I2C_INT_FLAG_ADD10SEND = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((3U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(9U))),
    I2C_INT_FLAG_STPDET = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((4U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(9U))),
    I2C_INT_FLAG_RBNE = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((6U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(9U))),
    I2C_INT_FLAG_TBE = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((7U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(9U))),
    I2C_INT_FLAG_BERR = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((8U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(8U))),
    I2C_INT_FLAG_LOSTARB = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((9U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(8U))),
    I2C_INT_FLAG_AERR = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((10U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(8U))),
    I2C_INT_FLAG_OUERR = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((11U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(8U))),
    I2C_INT_FLAG_PECERR = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((12U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(8U))),
    I2C_INT_FLAG_SMBTO = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((14U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(8U))),
    I2C_INT_FLAG_SMBALT = (((uint32_t)(((uint32_t)0x00000014U)) << 22) | (uint32_t)((15U) << 16) | (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(8U))),

    I2C_INT_FLAG_TFF = (((uint32_t)(((uint32_t)0x00000080U)) << 22) | (uint32_t)((12U) << 16) | (((uint32_t)(((uint32_t)0x00000080U)) << 6) | (uint32_t)(4U))),
    I2C_INT_FLAG_TFR = (((uint32_t)(((uint32_t)0x00000080U)) << 22) | (uint32_t)((13U) << 16) | (((uint32_t)(((uint32_t)0x00000080U)) << 6) | (uint32_t)(5U))),
    I2C_INT_FLAG_RFF = (((uint32_t)(((uint32_t)0x00000080U)) << 22) | (uint32_t)((14U) << 16) | (((uint32_t)(((uint32_t)0x00000080U)) << 6) | (uint32_t)(6U))),
    I2C_INT_FLAG_RFR = (((uint32_t)(((uint32_t)0x00000080U)) << 22) | (uint32_t)((15U) << 16) | (((uint32_t)(((uint32_t)0x00000080U)) << 6) | (uint32_t)(7U)))
} i2c_interrupt_flag_enum;


typedef enum {

    I2C_INT_ERR = (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(8U)),
    I2C_INT_EV = (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(9U)),
    I2C_INT_BUF = (((uint32_t)(((uint32_t)0x00000004U)) << 6) | (uint32_t)(10U)),

    I2C_INT_TFF = (((uint32_t)(((uint32_t)0x00000080U)) << 6) | (uint32_t)(4U)),
    I2C_INT_TFR = (((uint32_t)(((uint32_t)0x00000080U)) << 6) | (uint32_t)(5U)),
    I2C_INT_RFF = (((uint32_t)(((uint32_t)0x00000080U)) << 6) | (uint32_t)(6U)),
    I2C_INT_RFR = (((uint32_t)(((uint32_t)0x00000080U)) << 6) | (uint32_t)(7U))
} i2c_interrupt_enum;


typedef enum {
    I2C_DF_DISABLE = 0,
    I2C_DF_1PCLK,
    I2C_DF_2PCLKS,
    I2C_DF_3PCLKS,
    I2C_DF_4PCLKS,
    I2C_DF_5PCLKS,
    I2C_DF_6PCLKS,
    I2C_DF_7PCLKS,
    I2C_DF_8PCLKS,
    I2C_DF_9PCLKS,
    I2C_DF_10PCLKS,
    I2C_DF_11PCLKS,
    I2C_DF_12PCLKS,
    I2C_DF_13PCLKS,
    I2C_DF_14PCLKS,
    I2C_DF_15PCLKS
} i2c_digital_filter_enum;
# 329 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_i2c.h"
void i2c_deinit(uint32_t i2c_periph);

void i2c_clock_config(uint32_t i2c_periph, uint32_t clkspeed, uint32_t dutycyc);

void i2c_mode_addr_config(uint32_t i2c_periph, uint32_t mode, uint32_t addformat, uint32_t addr);



void i2c_smbus_type_config(uint32_t i2c_periph, uint32_t type);

void i2c_ack_config(uint32_t i2c_periph, uint32_t ack);

void i2c_ackpos_config(uint32_t i2c_periph, uint32_t pos);

void i2c_master_addressing(uint32_t i2c_periph, uint32_t addr, uint32_t trandirection);

void i2c_dualaddr_enable(uint32_t i2c_periph, uint32_t addr);

void i2c_dualaddr_disable(uint32_t i2c_periph);

void i2c_enable(uint32_t i2c_periph);

void i2c_disable(uint32_t i2c_periph);

void i2c_start_on_bus(uint32_t i2c_periph);

void i2c_stop_on_bus(uint32_t i2c_periph);

void i2c_data_transmit(uint32_t i2c_periph, uint8_t data);

uint8_t i2c_data_receive(uint32_t i2c_periph);

void i2c_dma_config(uint32_t i2c_periph, uint32_t dmastate);

void i2c_dma_last_transfer_config(uint32_t i2c_periph, uint32_t dmalast);

void i2c_stretch_scl_low_config(uint32_t i2c_periph, uint32_t stretchpara);

void i2c_slave_response_to_gcall_config(uint32_t i2c_periph, uint32_t gcallpara);

void i2c_software_reset_config(uint32_t i2c_periph, uint32_t sreset);

void i2c_pec_config(uint32_t i2c_periph, uint32_t pecstate);

void i2c_pec_transfer_config(uint32_t i2c_periph, uint32_t pecpara);

uint8_t i2c_pec_value_get(uint32_t i2c_periph);

void i2c_smbus_alert_config(uint32_t i2c_periph, uint32_t smbuspara);

void i2c_smbus_arp_config(uint32_t i2c_periph, uint32_t arpstate);

void i2c_analog_noise_filter_disable(uint32_t i2c_periph);

void i2c_analog_noise_filter_enable(uint32_t i2c_periph);

void i2c_digital_noise_filter_config(uint32_t i2c_periph, i2c_digital_filter_enum dfilterpara);

void i2c_sam_enable(uint32_t i2c_periph);

void i2c_sam_disable(uint32_t i2c_periph);

void i2c_sam_timeout_enable(uint32_t i2c_periph);

void i2c_sam_timeout_disable(uint32_t i2c_periph);



FlagStatus i2c_flag_get(uint32_t i2c_periph, i2c_flag_enum flag);

void i2c_flag_clear(uint32_t i2c_periph, i2c_flag_enum flag);

void i2c_interrupt_enable(uint32_t i2c_periph, i2c_interrupt_enum interrupt);

void i2c_interrupt_disable(uint32_t i2c_periph, i2c_interrupt_enum interrupt);

FlagStatus i2c_interrupt_flag_get(uint32_t i2c_periph, i2c_interrupt_flag_enum int_flag);

void i2c_interrupt_flag_clear(uint32_t i2c_periph, i2c_interrupt_flag_enum int_flag);
# 56 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_iref.h" 1
# 169 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_iref.h"
void iref_deinit(void);

void iref_enable(void);

void iref_disable(void);


void iref_mode_set(uint32_t step);

void iref_sink_set(uint32_t sinkmode);

void iref_precision_trim_value_set(uint32_t precisiontrim);

void iref_step_data_config(uint32_t stepdata);
# 57 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_pmu.h" 1
# 149 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_pmu.h"
void pmu_deinit(void);



void pmu_lvd_select(uint32_t lvdt_n);

void pmu_lvd_disable(void);



void pmu_ldo_output_select(uint32_t ldo_output);



void pmu_highdriver_mode_enable(void);

void pmu_highdriver_mode_disable(void);

void pmu_highdriver_switch_select(uint32_t highdr_switch);

void pmu_lowdriver_mode_enable(void);

void pmu_lowdriver_mode_disable(void);

void pmu_lowpower_driver_config(uint32_t mode);

void pmu_normalpower_driver_config(uint32_t mode);



void pmu_to_sleepmode(uint8_t sleepmodecmd);

void pmu_to_deepsleepmode(uint32_t ldo, uint32_t lowdrive, uint8_t deepsleepmodecmd);

void pmu_to_standbymode(void);

void pmu_wakeup_pin_enable(void);

void pmu_wakeup_pin_disable(void);



void pmu_backup_ldo_config(uint32_t bkp_ldo);

void pmu_backup_write_enable(void);

void pmu_backup_write_disable(void);



FlagStatus pmu_flag_get(uint32_t flag);

void pmu_flag_clear(uint32_t flag);
# 58 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_rtc.h" 1
# 232 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_rtc.h"
typedef struct
{
    uint8_t year;
    uint8_t month;
    uint8_t date;
    uint8_t day_of_week;
    uint8_t hour;
    uint8_t minute;
    uint8_t second;
    uint16_t factor_asyn;
    uint16_t factor_syn;
    uint32_t am_pm;
    uint32_t display_format;
}rtc_parameter_struct;


typedef struct
{
    uint32_t alarm_mask;
    uint32_t weekday_or_date;
    uint8_t alarm_day;
    uint8_t alarm_hour;
    uint8_t alarm_minute;
    uint8_t alarm_second;
    uint32_t am_pm;
}rtc_alarm_struct;


typedef struct
{
    uint8_t timestamp_month;
    uint8_t timestamp_date;
    uint8_t timestamp_day;
    uint8_t timestamp_hour;
    uint8_t timestamp_minute;
    uint8_t timestamp_second;
    uint32_t am_pm;
}rtc_timestamp_struct;


typedef struct
{
    uint32_t tamper_source;
    uint32_t tamper_trigger;
    uint32_t tamper_filter;
    uint32_t tamper_sample_frequency;
    ControlStatus tamper_precharge_enable;
    uint32_t tamper_precharge_time;
    ControlStatus tamper_with_timestamp;
}rtc_tamper_struct;
# 543 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_rtc.h"
ErrStatus rtc_deinit(void);

ErrStatus rtc_init(rtc_parameter_struct* rtc_initpara_struct);

ErrStatus rtc_init_mode_enter(void);

void rtc_init_mode_exit(void);

ErrStatus rtc_register_sync_wait(void);


void rtc_current_time_get(rtc_parameter_struct* rtc_initpara_struct);

uint32_t rtc_subsecond_get(void);


void rtc_alarm_config(uint8_t rtc_alarm, rtc_alarm_struct* rtc_alarm_time);

void rtc_alarm_subsecond_config(uint8_t rtc_alarm, uint32_t mask_subsecond, uint32_t subsecond);

void rtc_alarm_get(uint8_t rtc_alarm,rtc_alarm_struct* rtc_alarm_time);

uint32_t rtc_alarm_subsecond_get(uint8_t rtc_alarm);

void rtc_alarm_enable(uint8_t rtc_alarm);

ErrStatus rtc_alarm_disable(uint8_t rtc_alarm);


void rtc_timestamp_enable(uint32_t edge);

void rtc_timestamp_disable(void);

void rtc_timestamp_get(rtc_timestamp_struct* rtc_timestamp);

uint32_t rtc_timestamp_subsecond_get(void);

void rtc_timestamp_pin_map(uint32_t rtc_af);


void rtc_tamper_enable(rtc_tamper_struct* rtc_tamper);

void rtc_tamper_disable(uint32_t source);

void rtc_tamper0_pin_map(uint32_t rtc_af);


void rtc_interrupt_enable(uint32_t interrupt);

void rtc_interrupt_disable(uint32_t interrupt);

FlagStatus rtc_flag_get(uint32_t flag);

void rtc_flag_clear(uint32_t flag);


void rtc_alarm_output_config(uint32_t source, uint32_t mode);

void rtc_calibration_output_config(uint32_t source);


void rtc_hour_adjust(uint32_t operation);

ErrStatus rtc_second_adjust(uint32_t add, uint32_t minus);


void rtc_bypass_shadow_enable(void);

void rtc_bypass_shadow_disable(void);


ErrStatus rtc_refclock_detection_enable(void);

ErrStatus rtc_refclock_detection_disable(void);


void rtc_wakeup_enable(void);

ErrStatus rtc_wakeup_disable(void);

ErrStatus rtc_wakeup_clock_set(uint8_t wakeup_clock);

ErrStatus rtc_wakeup_timer_set(uint16_t wakeup_timer);

uint16_t rtc_wakeup_timer_get(void);


ErrStatus rtc_smooth_calibration_config(uint32_t window, uint32_t plus, uint32_t minus);

ErrStatus rtc_coarse_calibration_enable(void);

ErrStatus rtc_coarse_calibration_disable(void);

ErrStatus rtc_coarse_calibration_config(uint8_t direction, uint8_t step);
# 59 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_sdio.h" 1
# 329 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_sdio.h"
void sdio_deinit(void);

void sdio_clock_config(uint32_t clock_edge, uint32_t clock_bypass, uint32_t clock_powersave, uint16_t clock_division);

void sdio_hardware_clock_enable(void);

void sdio_hardware_clock_disable(void);

void sdio_bus_mode_set(uint32_t bus_mode);

void sdio_power_state_set(uint32_t power_state);

uint32_t sdio_power_state_get(void);

void sdio_clock_enable(void);

void sdio_clock_disable(void);



void sdio_command_response_config(uint32_t cmd_index, uint32_t cmd_argument, uint32_t response_type);

void sdio_wait_type_set(uint32_t wait_type);

void sdio_csm_enable(void);

void sdio_csm_disable(void);

uint8_t sdio_command_index_get(void);

uint32_t sdio_response_get(uint32_t sdio_responsex);



void sdio_data_config(uint32_t data_timeout, uint32_t data_length, uint32_t data_blocksize);

void sdio_data_transfer_config(uint32_t transfer_mode, uint32_t transfer_direction);

void sdio_dsm_enable(void);

void sdio_dsm_disable(void);

void sdio_data_write(uint32_t data);

uint32_t sdio_data_read(void);

uint32_t sdio_data_counter_get(void);

uint32_t sdio_fifo_counter_get(void);

void sdio_dma_enable(void);

void sdio_dma_disable(void);



FlagStatus sdio_flag_get(uint32_t flag);

void sdio_flag_clear(uint32_t flag);

void sdio_interrupt_enable(uint32_t int_flag);

void sdio_interrupt_disable(uint32_t int_flag);

FlagStatus sdio_interrupt_flag_get(uint32_t int_flag);

void sdio_interrupt_flag_clear(uint32_t int_flag);



void sdio_readwait_enable(void);

void sdio_readwait_disable(void);

void sdio_stop_readwait_enable(void);

void sdio_stop_readwait_disable(void);

void sdio_readwait_type_set(uint32_t readwait_type);

void sdio_operation_enable(void);

void sdio_operation_disable(void);

void sdio_suspend_enable(void);

void sdio_suspend_disable(void);



void sdio_ceata_command_enable(void);

void sdio_ceata_command_disable(void);

void sdio_ceata_interrupt_enable(void);

void sdio_ceata_interrupt_disable(void);

void sdio_ceata_command_completion_enable(void);

void sdio_ceata_command_completion_disable(void);
# 60 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_spi.h" 1
# 147 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_spi.h"
typedef struct {
    uint32_t device_mode;
    uint32_t trans_mode;
    uint32_t frame_size;
    uint32_t nss;
    uint32_t endian;
    uint32_t clock_polarity_phase;
    uint32_t prescale;
} spi_parameter_struct;
# 282 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_spi.h"
void spi_i2s_deinit(uint32_t spi_periph);

void spi_struct_para_init(spi_parameter_struct *spi_struct);

void spi_init(uint32_t spi_periph, spi_parameter_struct *spi_struct);

void spi_enable(uint32_t spi_periph);

void spi_disable(uint32_t spi_periph);


void i2s_init(uint32_t spi_periph, uint32_t i2s_mode, uint32_t i2s_standard, uint32_t i2s_ckpl);

void i2s_psc_config(uint32_t spi_periph, uint32_t i2s_audiosample, uint32_t i2s_frameformat, uint32_t i2s_mckout);

void i2s_enable(uint32_t spi_periph);

void i2s_disable(uint32_t spi_periph);



void spi_nss_output_enable(uint32_t spi_periph);

void spi_nss_output_disable(uint32_t spi_periph);

void spi_nss_internal_high(uint32_t spi_periph);

void spi_nss_internal_low(uint32_t spi_periph);



void spi_dma_enable(uint32_t spi_periph, uint8_t spi_dma);

void spi_dma_disable(uint32_t spi_periph, uint8_t spi_dma);



void spi_i2s_data_frame_format_config(uint32_t spi_periph, uint16_t frame_format);

void spi_i2s_data_transmit(uint32_t spi_periph, uint16_t data);

uint16_t spi_i2s_data_receive(uint32_t spi_periph);

void spi_bidirectional_transfer_config(uint32_t spi_periph, uint32_t transfer_direction);

void i2s_full_duplex_mode_config(uint32_t i2s_add_periph, uint32_t i2s_mode, uint32_t i2s_standard, uint32_t i2s_ckpl, uint32_t i2s_frameformat);

void spi_i2s_format_error_clear(uint32_t spi_periph, uint32_t flag);



void spi_crc_polynomial_set(uint32_t spi_periph, uint16_t crc_poly);

uint16_t spi_crc_polynomial_get(uint32_t spi_periph);

void spi_crc_on(uint32_t spi_periph);

void spi_crc_off(uint32_t spi_periph);

void spi_crc_next(uint32_t spi_periph);

uint16_t spi_crc_get(uint32_t spi_periph, uint8_t spi_crc);

void spi_crc_error_clear(uint32_t spi_periph);



void spi_ti_mode_enable(uint32_t spi_periph);

void spi_ti_mode_disable(uint32_t spi_periph);



void spi_quad_enable(uint32_t spi_periph);

void spi_quad_disable(uint32_t spi_periph);

void spi_quad_write_enable(uint32_t spi_periph);

void spi_quad_read_enable(uint32_t spi_periph);

void spi_quad_io23_output_enable(uint32_t spi_periph);

void spi_quad_io23_output_disable(uint32_t spi_periph);



FlagStatus spi_i2s_flag_get(uint32_t spi_periph, uint32_t flag);

void spi_i2s_interrupt_enable(uint32_t spi_periph, uint8_t interrupt);

void spi_i2s_interrupt_disable(uint32_t spi_periph, uint8_t interrupt);

FlagStatus spi_i2s_interrupt_flag_get(uint32_t spi_periph, uint8_t interrupt);
# 61 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_timer.h" 1
# 265 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_timer.h"
typedef struct
{
    uint16_t prescaler;
    uint16_t alignedmode;
    uint16_t counterdirection;
    uint16_t clockdivision;
    uint32_t period;
    uint8_t repetitioncounter;
}timer_parameter_struct;


typedef struct
{
    uint16_t runoffstate;
    uint16_t ideloffstate;
    uint16_t deadtime;
    uint16_t breakpolarity;
    uint16_t outputautostate;
    uint16_t protectmode;
    uint16_t breakstate;
}timer_break_parameter_struct;


typedef struct
{
    uint16_t outputstate;
    uint16_t outputnstate;
    uint16_t ocpolarity;
    uint16_t ocnpolarity;
    uint16_t ocidlestate;
    uint16_t ocnidlestate;
}timer_oc_parameter_struct;


typedef struct
{
    uint16_t icpolarity;
    uint16_t icselection;
    uint16_t icprescaler;
    uint16_t icfilter;
}timer_ic_parameter_struct;
# 618 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_timer.h"
void timer_deinit(uint32_t timer_periph);

void timer_struct_para_init(timer_parameter_struct* initpara);

void timer_init(uint32_t timer_periph, timer_parameter_struct* initpara);

void timer_enable(uint32_t timer_periph);

void timer_disable(uint32_t timer_periph);

void timer_auto_reload_shadow_enable(uint32_t timer_periph);

void timer_auto_reload_shadow_disable(uint32_t timer_periph);

void timer_update_event_enable(uint32_t timer_periph);

void timer_update_event_disable(uint32_t timer_periph);

void timer_counter_alignment(uint32_t timer_periph, uint16_t aligned);

void timer_counter_up_direction(uint32_t timer_periph);

void timer_counter_down_direction(uint32_t timer_periph);

void timer_prescaler_config(uint32_t timer_periph, uint16_t prescaler, uint8_t pscreload);

void timer_repetition_value_config(uint32_t timer_periph, uint16_t repetition);

void timer_autoreload_value_config(uint32_t timer_periph,uint32_t autoreload);

void timer_counter_value_config(uint32_t timer_periph , uint32_t counter);

uint32_t timer_counter_read(uint32_t timer_periph);

uint16_t timer_prescaler_read(uint32_t timer_periph);

void timer_single_pulse_mode_config(uint32_t timer_periph, uint32_t spmode);

void timer_update_source_config(uint32_t timer_periph, uint32_t update);



void timer_dma_enable(uint32_t timer_periph, uint16_t dma);

void timer_dma_disable(uint32_t timer_periph, uint16_t dma);

void timer_channel_dma_request_source_select(uint32_t timer_periph, uint8_t dma_request);

void timer_dma_transfer_config(uint32_t timer_periph,uint32_t dma_baseaddr, uint32_t dma_lenth);

void timer_event_software_generate(uint32_t timer_periph, uint16_t event);



void timer_break_struct_para_init(timer_break_parameter_struct* breakpara);

void timer_break_config(uint32_t timer_periph, timer_break_parameter_struct* breakpara);

void timer_break_enable(uint32_t timer_periph);

void timer_break_disable(uint32_t timer_periph);

void timer_automatic_output_enable(uint32_t timer_periph);

void timer_automatic_output_disable(uint32_t timer_periph);

void timer_primary_output_config(uint32_t timer_periph, ControlStatus newvalue);

void timer_channel_control_shadow_config(uint32_t timer_periph, ControlStatus newvalue);

void timer_channel_control_shadow_update_config(uint32_t timer_periph, uint8_t ccuctl);



void timer_channel_output_struct_para_init(timer_oc_parameter_struct* ocpara);

void timer_channel_output_config(uint32_t timer_periph,uint16_t channel, timer_oc_parameter_struct* ocpara);

void timer_channel_output_mode_config(uint32_t timer_periph, uint16_t channel,uint16_t ocmode);

void timer_channel_output_pulse_value_config(uint32_t timer_periph, uint16_t channel, uint32_t pulse);

void timer_channel_output_shadow_config(uint32_t timer_periph, uint16_t channel, uint16_t ocshadow);

void timer_channel_output_fast_config(uint32_t timer_periph, uint16_t channel, uint16_t ocfast);

void timer_channel_output_clear_config(uint32_t timer_periph,uint16_t channel,uint16_t occlear);

void timer_channel_output_polarity_config(uint32_t timer_periph, uint16_t channel, uint16_t ocpolarity);

void timer_channel_complementary_output_polarity_config(uint32_t timer_periph, uint16_t channel, uint16_t ocnpolarity);

void timer_channel_output_state_config(uint32_t timer_periph, uint16_t channel, uint32_t state);

void timer_channel_complementary_output_state_config(uint32_t timer_periph, uint16_t channel, uint16_t ocnstate);



void timer_channel_input_struct_para_init(timer_ic_parameter_struct* icpara);

void timer_input_capture_config(uint32_t timer_periph, uint16_t channel, timer_ic_parameter_struct* icpara);

void timer_channel_input_capture_prescaler_config(uint32_t timer_periph, uint16_t channel, uint16_t prescaler);

uint32_t timer_channel_capture_value_register_read(uint32_t timer_periph, uint16_t channel);

void timer_input_pwm_capture_config(uint32_t timer_periph, uint16_t channel, timer_ic_parameter_struct* icpwm);

void timer_hall_mode_config(uint32_t timer_periph, uint32_t hallmode);



void timer_input_trigger_source_select(uint32_t timer_periph, uint32_t intrigger);

void timer_master_output_trigger_source_select(uint32_t timer_periph, uint32_t outrigger);

void timer_slave_mode_select(uint32_t timer_periph,uint32_t slavemode);

void timer_master_slave_mode_config(uint32_t timer_periph, uint32_t masterslave);

void timer_external_trigger_config(uint32_t timer_periph, uint32_t extprescaler, uint32_t extpolarity, uint32_t extfilter);

void timer_quadrature_decoder_mode_config(uint32_t timer_periph, uint32_t decomode, uint16_t ic0polarity, uint16_t ic1polarity);

void timer_internal_clock_config(uint32_t timer_periph);

void timer_internal_trigger_as_external_clock_config(uint32_t timer_periph, uint32_t intrigger);

void timer_external_trigger_as_external_clock_config(uint32_t timer_periph, uint32_t extrigger, uint16_t extpolarity,uint32_t extfilter);

void timer_external_clock_mode0_config(uint32_t timer_periph, uint32_t extprescaler, uint32_t extpolarity, uint32_t extfilter);

void timer_external_clock_mode1_config(uint32_t timer_periph, uint32_t extprescaler, uint32_t extpolarity, uint32_t extfilter);

void timer_external_clock_mode1_disable(uint32_t timer_periph);

void timer_channel_remap_config(uint32_t timer_periph,uint32_t remap);



void timer_write_chxval_register_config(uint32_t timer_periph, uint16_t ccsel);

void timer_output_value_selection_config(uint32_t timer_periph, uint16_t outsel);



FlagStatus timer_flag_get(uint32_t timer_periph, uint32_t flag);

void timer_flag_clear(uint32_t timer_periph, uint32_t flag);

void timer_interrupt_enable(uint32_t timer_periph, uint32_t interrupt);

void timer_interrupt_disable(uint32_t timer_periph, uint32_t interrupt);

FlagStatus timer_interrupt_flag_get(uint32_t timer_periph, uint32_t interrupt);

void timer_interrupt_flag_clear(uint32_t timer_periph, uint32_t interrupt);
# 62 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_trng.h" 1
# 65 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_trng.h"
typedef enum {
    TRNG_FLAG_DRDY = ((uint32_t)((uint32_t)0x01U<<(0))),
    TRNG_FLAG_CECS = ((uint32_t)((uint32_t)0x01U<<(1))),
    TRNG_FLAG_SECS = ((uint32_t)((uint32_t)0x01U<<(2)))
} trng_flag_enum;


typedef enum {
    TRNG_INT_FLAG_CEIF = ((uint32_t)((uint32_t)0x01U<<(5))),
    TRNG_INT_FLAG_SEIF = ((uint32_t)((uint32_t)0x01U<<(6)))
} trng_int_flag_enum;




void trng_deinit(void);

void trng_enable(void);

void trng_disable(void);

uint32_t trng_get_true_random_data(void);



void trng_interrupt_enable(void);

void trng_interrupt_disable(void);

FlagStatus trng_flag_get(trng_flag_enum flag);

FlagStatus trng_interrupt_flag_get(trng_int_flag_enum int_flag);

void trng_interrupt_flag_clear(trng_int_flag_enum int_flag);
# 63 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_usart.h" 1
# 174 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_usart.h"
typedef enum {

    USART_FLAG_CTS = (((uint32_t)(0x00U) << 6) | (uint32_t)(9U)),
    USART_FLAG_LBD = (((uint32_t)(0x00U) << 6) | (uint32_t)(8U)),
    USART_FLAG_TBE = (((uint32_t)(0x00U) << 6) | (uint32_t)(7U)),
    USART_FLAG_TC = (((uint32_t)(0x00U) << 6) | (uint32_t)(6U)),
    USART_FLAG_RBNE = (((uint32_t)(0x00U) << 6) | (uint32_t)(5U)),
    USART_FLAG_IDLE = (((uint32_t)(0x00U) << 6) | (uint32_t)(4U)),
    USART_FLAG_ORERR = (((uint32_t)(0x00U) << 6) | (uint32_t)(3U)),
    USART_FLAG_NERR = (((uint32_t)(0x00U) << 6) | (uint32_t)(2U)),
    USART_FLAG_FERR = (((uint32_t)(0x00U) << 6) | (uint32_t)(1U)),
    USART_FLAG_PERR = (((uint32_t)(0x00U) << 6) | (uint32_t)(0U)),

    USART_FLAG_BSY = (((uint32_t)(0x88U) << 6) | (uint32_t)(16U)),
    USART_FLAG_EB = (((uint32_t)(0x88U) << 6) | (uint32_t)(12U)),
    USART_FLAG_RT = (((uint32_t)(0x88U) << 6) | (uint32_t)(11U)),

    USART_FLAG_EPERR = (((uint32_t)(0xC0U) << 6) | (uint32_t)(8U)),
} usart_flag_enum;


typedef enum {

    USART_INT_FLAG_PERR = (((uint32_t)(0x00U) << 22) | (uint32_t)((0U) << 16) | (((uint32_t)(0x0CU) << 6) | (uint32_t)(8U))),
    USART_INT_FLAG_TBE = (((uint32_t)(0x00U) << 22) | (uint32_t)((7U) << 16) | (((uint32_t)(0x0CU) << 6) | (uint32_t)(7U))),
    USART_INT_FLAG_TC = (((uint32_t)(0x00U) << 22) | (uint32_t)((6U) << 16) | (((uint32_t)(0x0CU) << 6) | (uint32_t)(6U))),
    USART_INT_FLAG_RBNE = (((uint32_t)(0x00U) << 22) | (uint32_t)((5U) << 16) | (((uint32_t)(0x0CU) << 6) | (uint32_t)(5U))),
    USART_INT_FLAG_RBNE_ORERR = (((uint32_t)(0x00U) << 22) | (uint32_t)((3U) << 16) | (((uint32_t)(0x0CU) << 6) | (uint32_t)(5U))),
    USART_INT_FLAG_IDLE = (((uint32_t)(0x00U) << 22) | (uint32_t)((4U) << 16) | (((uint32_t)(0x0CU) << 6) | (uint32_t)(4U))),

    USART_INT_FLAG_LBD = (((uint32_t)(0x00U) << 22) | (uint32_t)((8U) << 16) | (((uint32_t)(0x10U) << 6) | (uint32_t)(6U))),

    USART_INT_FLAG_CTS = (((uint32_t)(0x00U) << 22) | (uint32_t)((9U) << 16) | (((uint32_t)(0x14U) << 6) | (uint32_t)(10U))),
    USART_INT_FLAG_ERR_ORERR = (((uint32_t)(0x00U) << 22) | (uint32_t)((3U) << 16) | (((uint32_t)(0x14U) << 6) | (uint32_t)(0U))),
    USART_INT_FLAG_ERR_NERR = (((uint32_t)(0x00U) << 22) | (uint32_t)((2U) << 16) | (((uint32_t)(0x14U) << 6) | (uint32_t)(0U))),
    USART_INT_FLAG_ERR_FERR = (((uint32_t)(0x00U) << 22) | (uint32_t)((1U) << 16) | (((uint32_t)(0x14U) << 6) | (uint32_t)(0U))),

    USART_INT_FLAG_EB = (((uint32_t)(0x88U) << 22) | (uint32_t)((12U) << 16) | (((uint32_t)(0x80U) << 6) | (uint32_t)(5U))),
    USART_INT_FLAG_RT = (((uint32_t)(0x88U) << 22) | (uint32_t)((11U) << 16) | (((uint32_t)(0x80U) << 6) | (uint32_t)(4U))),
} usart_interrupt_flag_enum;


typedef enum {

    USART_INT_PERR = (((uint32_t)(0x0CU) << 6) | (uint32_t)(8U)),
    USART_INT_TBE = (((uint32_t)(0x0CU) << 6) | (uint32_t)(7U)),
    USART_INT_TC = (((uint32_t)(0x0CU) << 6) | (uint32_t)(6U)),
    USART_INT_RBNE = (((uint32_t)(0x0CU) << 6) | (uint32_t)(5U)),
    USART_INT_IDLE = (((uint32_t)(0x0CU) << 6) | (uint32_t)(4U)),

    USART_INT_LBD = (((uint32_t)(0x10U) << 6) | (uint32_t)(6U)),

    USART_INT_CTS = (((uint32_t)(0x14U) << 6) | (uint32_t)(10U)),
    USART_INT_ERR = (((uint32_t)(0x14U) << 6) | (uint32_t)(0U)),

    USART_INT_EB = (((uint32_t)(0x80U) << 6) | (uint32_t)(5U)),
    USART_INT_RT = (((uint32_t)(0x80U) << 6) | (uint32_t)(4U)),
} usart_interrupt_enum;


typedef enum {

    USART_DINV_ENABLE,
    USART_DINV_DISABLE,

    USART_TXPIN_ENABLE,
    USART_TXPIN_DISABLE,

    USART_RXPIN_ENABLE,
    USART_RXPIN_DISABLE,
} usart_invert_enum;
# 357 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_usart.h"
void usart_deinit(uint32_t usart_periph);

void usart_baudrate_set(uint32_t usart_periph, uint32_t baudval);

void usart_parity_config(uint32_t usart_periph, uint32_t paritycfg);

void usart_word_length_set(uint32_t usart_periph, uint32_t wlen);

void usart_stop_bit_set(uint32_t usart_periph, uint32_t stblen);

void usart_enable(uint32_t usart_periph);

void usart_disable(uint32_t usart_periph);

void usart_transmit_config(uint32_t usart_periph, uint32_t txconfig);

void usart_receive_config(uint32_t usart_periph, uint32_t rxconfig);



void usart_data_first_config(uint32_t usart_periph, uint32_t msbf);

void usart_invert_config(uint32_t usart_periph, usart_invert_enum invertpara);

void usart_oversample_config(uint32_t usart_periph, uint32_t oversamp);

void usart_sample_bit_config(uint32_t usart_periph, uint32_t obsm);

void usart_receiver_timeout_enable(uint32_t usart_periph);

void usart_receiver_timeout_disable(uint32_t usart_periph);

void usart_receiver_timeout_threshold_config(uint32_t usart_periph, uint32_t rtimeout);

void usart_data_transmit(uint32_t usart_periph, uint16_t data);

uint16_t usart_data_receive(uint32_t usart_periph);



void usart_address_config(uint32_t usart_periph, uint8_t addr);

void usart_mute_mode_enable(uint32_t usart_periph);

void usart_mute_mode_disable(uint32_t usart_periph);

void usart_mute_mode_wakeup_config(uint32_t usart_periph, uint32_t wmehtod);



void usart_lin_mode_enable(uint32_t usart_periph);

void usart_lin_mode_disable(uint32_t usart_periph);

void usart_lin_break_detection_length_config(uint32_t usart_periph, uint32_t lblen);

void usart_send_break(uint32_t usart_periph);



void usart_halfduplex_enable(uint32_t usart_periph);

void usart_halfduplex_disable(uint32_t usart_periph);



void usart_synchronous_clock_enable(uint32_t usart_periph);

void usart_synchronous_clock_disable(uint32_t usart_periph);

void usart_synchronous_clock_config(uint32_t usart_periph, uint32_t clen, uint32_t cph, uint32_t cpl);



void usart_guard_time_config(uint32_t usart_periph, uint8_t guat);

void usart_smartcard_mode_enable(uint32_t usart_periph);

void usart_smartcard_mode_disable(uint32_t usart_periph);

void usart_smartcard_mode_nack_enable(uint32_t usart_periph);

void usart_smartcard_mode_nack_disable(uint32_t usart_periph);

void usart_smartcard_autoretry_config(uint32_t usart_periph, uint8_t scrtnum);

void usart_block_length_config(uint32_t usart_periph, uint8_t bl);



void usart_irda_mode_enable(uint32_t usart_periph);

void usart_irda_mode_disable(uint32_t usart_periph);

void usart_prescaler_config(uint32_t usart_periph, uint8_t psc);

void usart_irda_lowpower_config(uint32_t usart_periph, uint32_t irlp);



void usart_hardware_flow_rts_config(uint32_t usart_periph, uint32_t rtsconfig);

void usart_hardware_flow_cts_config(uint32_t usart_periph, uint32_t ctsconfig);



void usart_break_frame_coherence_config(uint32_t usart_periph, uint32_t bcm);

void usart_parity_check_coherence_config(uint32_t usart_periph, uint32_t pcm);

void usart_hardware_flow_coherence_config(uint32_t usart_periph, uint32_t hcm);



void usart_dma_receive_config(uint32_t usart_periph, uint32_t dmacmd);

void usart_dma_transmit_config(uint32_t usart_periph, uint32_t dmacmd);



FlagStatus usart_flag_get(uint32_t usart_periph, usart_flag_enum flag);

void usart_flag_clear(uint32_t usart_periph, usart_flag_enum flag);

void usart_interrupt_enable(uint32_t usart_periph, usart_interrupt_enum interrupt);

void usart_interrupt_disable(uint32_t usart_periph, usart_interrupt_enum interrupt);

FlagStatus usart_interrupt_flag_get(uint32_t usart_periph, usart_interrupt_flag_enum int_flag);

void usart_interrupt_flag_clear(uint32_t usart_periph, usart_interrupt_flag_enum int_flag);
# 64 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_wwdgt.h" 1
# 75 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_wwdgt.h"
void wwdgt_deinit(void);

void wwdgt_enable(void);


void wwdgt_counter_update(uint16_t counter_value);

void wwdgt_config(uint16_t counter, uint16_t window, uint32_t prescaler);


FlagStatus wwdgt_flag_get(void);

void wwdgt_flag_clear(void);

void wwdgt_interrupt_enable(void);
# 65 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_misc.h" 1
# 72 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_misc.h"
void nvic_priority_group_set(uint32_t nvic_prigroup);


void nvic_irq_enable(uint8_t nvic_irq, uint8_t nvic_irq_pre_priority, uint8_t nvic_irq_sub_priority);

void nvic_irq_disable(uint8_t nvic_irq);


void nvic_vector_table_set(uint32_t nvic_vict_tab, uint32_t offset);


void system_lowpower_set(uint8_t lowpower_mode);

void system_lowpower_reset(uint8_t lowpower_mode);


void systick_clksource_set(uint32_t systick_clksource);
# 66 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2



# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_enet.h" 1
# 39 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_enet.h"
# 1 "../include/stdlib.h" 1
# 29 "../include/stdlib.h"
# 1 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/lib/gcc/arm-none-eabi/12.2.1/include/stddef.h" 1 3 4
# 30 "../include/stdlib.h" 2




extern "C" {


extern int atoi(const char *nptr);

extern void *malloc(size_t size);
extern void free(void *ptr);
extern void *calloc(size_t nmemb, size_t size);
extern void *realloc(void *ptr, size_t size);

inline int abs(int i) {
 return i < 0 ? -i : i;
}

extern long int random(void);
extern void srandom(unsigned int seed);


}
# 40 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_enet.h" 2
# 666 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_enet.h"
typedef enum
{

    ENET_MAC_FLAG_MPKR = (((uint32_t)(((uint16_t)0x002CU)) << 6) | (uint32_t)(5U)),
    ENET_MAC_FLAG_WUFR = (((uint32_t)(((uint16_t)0x002CU)) << 6) | (uint32_t)(6U)),

    ENET_MAC_FLAG_FLOWCONTROL = (((uint32_t)(((uint16_t)0x0018U)) << 6) | (uint32_t)(0U)),

    ENET_MAC_FLAG_WUM = (((uint32_t)(((uint16_t)0x0038U)) << 6) | (uint32_t)(3U)),
    ENET_MAC_FLAG_MSC = (((uint32_t)(((uint16_t)0x0038U)) << 6) | (uint32_t)(4U)),
    ENET_MAC_FLAG_MSCR = (((uint32_t)(((uint16_t)0x0038U)) << 6) | (uint32_t)(5U)),
    ENET_MAC_FLAG_MSCT = (((uint32_t)(((uint16_t)0x0038U)) << 6) | (uint32_t)(6U)),
    ENET_MAC_FLAG_TMST = (((uint32_t)(((uint16_t)0x0038U)) << 6) | (uint32_t)(9U)),

    ENET_PTP_FLAG_TSSCO = (((uint32_t)(((uint16_t)0x0728U)) << 6) | (uint32_t)(0U)),
    ENET_PTP_FLAG_TTM = (((uint32_t)(((uint16_t)0x0728U)) << 6) | (uint32_t)(1U)),

    ENET_MSC_FLAG_RFCE = (((uint32_t)(((uint16_t)0x0104U)) << 6) | (uint32_t)(5U)),
    ENET_MSC_FLAG_RFAE = (((uint32_t)(((uint16_t)0x0104U)) << 6) | (uint32_t)(6U)),
    ENET_MSC_FLAG_RGUF = (((uint32_t)(((uint16_t)0x0104U)) << 6) | (uint32_t)(17U)),

    ENET_MSC_FLAG_TGFSC = (((uint32_t)(((uint16_t)0x0108U)) << 6) | (uint32_t)(14U)),
    ENET_MSC_FLAG_TGFMSC = (((uint32_t)(((uint16_t)0x0108U)) << 6) | (uint32_t)(15U)),
    ENET_MSC_FLAG_TGF = (((uint32_t)(((uint16_t)0x0108U)) << 6) | (uint32_t)(21U)),

    ENET_DMA_FLAG_TS = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(0U)),
    ENET_DMA_FLAG_TPS = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(1U)),
    ENET_DMA_FLAG_TBU = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(2U)),
    ENET_DMA_FLAG_TJT = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(3U)),
    ENET_DMA_FLAG_RO = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(4U)),
    ENET_DMA_FLAG_TU = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(5U)),
    ENET_DMA_FLAG_RS = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(6U)),
    ENET_DMA_FLAG_RBU = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(7U)),
    ENET_DMA_FLAG_RPS = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(8U)),
    ENET_DMA_FLAG_RWT = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(9U)),
    ENET_DMA_FLAG_ET = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(10U)),
    ENET_DMA_FLAG_FBE = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(13U)),
    ENET_DMA_FLAG_ER = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(14U)),
    ENET_DMA_FLAG_AI = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(15U)),
    ENET_DMA_FLAG_NI = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(16U)),
    ENET_DMA_FLAG_EB_DMA_ERROR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(23U)),
    ENET_DMA_FLAG_EB_TRANSFER_ERROR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(24U)),
    ENET_DMA_FLAG_EB_ACCESS_ERROR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(25U)),
    ENET_DMA_FLAG_MSC = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(27U)),
    ENET_DMA_FLAG_WUM = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(28U)),
    ENET_DMA_FLAG_TST = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(29U)),
}enet_flag_enum;


typedef enum
{

    ENET_DMA_FLAG_TS_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(0U)),
    ENET_DMA_FLAG_TPS_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(1U)),
    ENET_DMA_FLAG_TBU_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(2U)),
    ENET_DMA_FLAG_TJT_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(3U)),
    ENET_DMA_FLAG_RO_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(4U)),
    ENET_DMA_FLAG_TU_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(5U)),
    ENET_DMA_FLAG_RS_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(6U)),
    ENET_DMA_FLAG_RBU_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(7U)),
    ENET_DMA_FLAG_RPS_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(8U)),
    ENET_DMA_FLAG_RWT_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(9U)),
    ENET_DMA_FLAG_ET_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(10U)),
    ENET_DMA_FLAG_FBE_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(13U)),
    ENET_DMA_FLAG_ER_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(14U)),
    ENET_DMA_FLAG_AI_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(15U)),
    ENET_DMA_FLAG_NI_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(16U)),
}enet_flag_clear_enum;


typedef enum
{

    ENET_MAC_INT_WUMIM = (((uint32_t)(((uint16_t)0x003CU)) << 6) | (uint32_t)(3U)),
    ENET_MAC_INT_TMSTIM = (((uint32_t)(((uint16_t)0x003CU)) << 6) | (uint32_t)(9U)),

    ENET_MSC_INT_RFCEIM = (((uint32_t)(((uint16_t)0x010CU)) << 6) | (uint32_t)(5U)),
    ENET_MSC_INT_RFAEIM = (((uint32_t)(((uint16_t)0x010CU)) << 6) | (uint32_t)(6U)),
    ENET_MSC_INT_RGUFIM = (((uint32_t)(((uint16_t)0x010CU)) << 6) | (uint32_t)(17U)),

    ENET_MSC_INT_TGFSCIM = (((uint32_t)(((uint16_t)0x0110U)) << 6) | (uint32_t)(14U)),
    ENET_MSC_INT_TGFMSCIM = (((uint32_t)(((uint16_t)0x0110U)) << 6) | (uint32_t)(15U)),
    ENET_MSC_INT_TGFIM = (((uint32_t)(((uint16_t)0x0110U)) << 6) | (uint32_t)(21U)),

    ENET_DMA_INT_TIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(0U)),
    ENET_DMA_INT_TPSIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(1U)),
    ENET_DMA_INT_TBUIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(2U)),
    ENET_DMA_INT_TJTIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(3U)),
    ENET_DMA_INT_ROIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(4U)),
    ENET_DMA_INT_TUIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(5U)),
    ENET_DMA_INT_RIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(6U)),
    ENET_DMA_INT_RBUIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(7U)),
    ENET_DMA_INT_RPSIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(8U)),
    ENET_DMA_INT_RWTIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(9U)),
    ENET_DMA_INT_ETIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(10U)),
    ENET_DMA_INT_FBEIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(13U)),
    ENET_DMA_INT_ERIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(14U)),
    ENET_DMA_INT_AIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(15U)),
    ENET_DMA_INT_NIE = (((uint32_t)(((uint16_t)0x101CU)) << 6) | (uint32_t)(16U)),
}enet_int_enum;


typedef enum
{

    ENET_MAC_INT_FLAG_WUM = (((uint32_t)(((uint16_t)0x0038U)) << 6) | (uint32_t)(3U)),
    ENET_MAC_INT_FLAG_MSC = (((uint32_t)(((uint16_t)0x0038U)) << 6) | (uint32_t)(4U)),
    ENET_MAC_INT_FLAG_MSCR = (((uint32_t)(((uint16_t)0x0038U)) << 6) | (uint32_t)(5U)),
    ENET_MAC_INT_FLAG_MSCT = (((uint32_t)(((uint16_t)0x0038U)) << 6) | (uint32_t)(6U)),
    ENET_MAC_INT_FLAG_TMST = (((uint32_t)(((uint16_t)0x0038U)) << 6) | (uint32_t)(9U)),

    ENET_MSC_INT_FLAG_RFCE = (((uint32_t)(((uint16_t)0x0104U)) << 6) | (uint32_t)(5U)),
    ENET_MSC_INT_FLAG_RFAE = (((uint32_t)(((uint16_t)0x0104U)) << 6) | (uint32_t)(6U)),
    ENET_MSC_INT_FLAG_RGUF = (((uint32_t)(((uint16_t)0x0104U)) << 6) | (uint32_t)(17U)),

    ENET_MSC_INT_FLAG_TGFSC = (((uint32_t)(((uint16_t)0x0108U)) << 6) | (uint32_t)(14U)),
    ENET_MSC_INT_FLAG_TGFMSC = (((uint32_t)(((uint16_t)0x0108U)) << 6) | (uint32_t)(15U)),
    ENET_MSC_INT_FLAG_TGF = (((uint32_t)(((uint16_t)0x0108U)) << 6) | (uint32_t)(21U)),

    ENET_DMA_INT_FLAG_TS = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(0U)),
    ENET_DMA_INT_FLAG_TPS = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(1U)),
    ENET_DMA_INT_FLAG_TBU = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(2U)),
    ENET_DMA_INT_FLAG_TJT = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(3U)),
    ENET_DMA_INT_FLAG_RO = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(4U)),
    ENET_DMA_INT_FLAG_TU = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(5U)),
    ENET_DMA_INT_FLAG_RS = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(6U)),
    ENET_DMA_INT_FLAG_RBU = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(7U)),
    ENET_DMA_INT_FLAG_RPS = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(8U)),
    ENET_DMA_INT_FLAG_RWT = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(9U)),
    ENET_DMA_INT_FLAG_ET = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(10U)),
    ENET_DMA_INT_FLAG_FBE = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(13U)),
    ENET_DMA_INT_FLAG_ER = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(14U)),
    ENET_DMA_INT_FLAG_AI = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(15U)),
    ENET_DMA_INT_FLAG_NI = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(16U)),
    ENET_DMA_INT_FLAG_MSC = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(27U)),
    ENET_DMA_INT_FLAG_WUM = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(28U)),
    ENET_DMA_INT_FLAG_TST = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(29U)),
}enet_int_flag_enum;


typedef enum
{

    ENET_DMA_INT_FLAG_TS_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(0U)),
    ENET_DMA_INT_FLAG_TPS_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(1U)),
    ENET_DMA_INT_FLAG_TBU_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(2U)),
    ENET_DMA_INT_FLAG_TJT_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(3U)),
    ENET_DMA_INT_FLAG_RO_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(4U)),
    ENET_DMA_INT_FLAG_TU_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(5U)),
    ENET_DMA_INT_FLAG_RS_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(6U)),
    ENET_DMA_INT_FLAG_RBU_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(7U)),
    ENET_DMA_INT_FLAG_RPS_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(8U)),
    ENET_DMA_INT_FLAG_RWT_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(9U)),
    ENET_DMA_INT_FLAG_ET_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(10U)),
    ENET_DMA_INT_FLAG_FBE_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(13U)),
    ENET_DMA_INT_FLAG_ER_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(14U)),
    ENET_DMA_INT_FLAG_AI_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(15U)),
    ENET_DMA_INT_FLAG_NI_CLR = (((uint32_t)(((uint16_t)0x1014U)) << 6) | (uint32_t)(16U)),
}enet_int_flag_clear_enum;


typedef enum
{
    ENET_RX_DESC_TABLE = ((uint16_t)0x100CU),
    ENET_RX_CURRENT_DESC = ((uint16_t)0x104CU),
    ENET_RX_CURRENT_BUFFER = ((uint16_t)0x1054U),
    ENET_TX_DESC_TABLE = ((uint16_t)0x1010U),
    ENET_TX_CURRENT_DESC = ((uint16_t)0x1048U),
    ENET_TX_CURRENT_BUFFER = ((uint16_t)0x1050U)
}enet_desc_reg_enum;


typedef enum
{
    ENET_MSC_TX_SCCNT = ((uint16_t)0x014CU),
    ENET_MSC_TX_MSCCNT = ((uint16_t)0x0150U),
    ENET_MSC_TX_TGFCNT = ((uint16_t)0x0168U),
    ENET_MSC_RX_RFCECNT = ((uint16_t)0x0194U),
    ENET_MSC_RX_RFAECNT = ((uint16_t)0x0198U),
    ENET_MSC_RX_RGUFCNT = ((uint16_t)0x01C4U)
}enet_msc_counter_enum;


typedef enum
{
    FORWARD_OPTION = ((uint32_t)((uint32_t)0x01U<<(0))),
    DMABUS_OPTION = ((uint32_t)((uint32_t)0x01U<<(1))),
    DMA_MAXBURST_OPTION = ((uint32_t)((uint32_t)0x01U<<(2))),
    DMA_ARBITRATION_OPTION = ((uint32_t)((uint32_t)0x01U<<(3))),
    STORE_OPTION = ((uint32_t)((uint32_t)0x01U<<(4))),
    DMA_OPTION = ((uint32_t)((uint32_t)0x01U<<(5))),
    VLAN_OPTION = ((uint32_t)((uint32_t)0x01U<<(6))),
    FLOWCTL_OPTION = ((uint32_t)((uint32_t)0x01U<<(7))),
    HASHH_OPTION = ((uint32_t)((uint32_t)0x01U<<(8))),
    HASHL_OPTION = ((uint32_t)((uint32_t)0x01U<<(9))),
    FILTER_OPTION = ((uint32_t)((uint32_t)0x01U<<(10))),
    HALFDUPLEX_OPTION = ((uint32_t)((uint32_t)0x01U<<(11))),
    TIMER_OPTION = ((uint32_t)((uint32_t)0x01U<<(12))),
    INTERFRAMEGAP_OPTION = ((uint32_t)((uint32_t)0x01U<<(13))),
}enet_option_enum;


typedef enum
{
    ENET_AUTO_NEGOTIATION = 0x01U,
    ENET_100M_FULLDUPLEX = (((uint32_t)((uint32_t)0x01U<<(14))) | ((uint32_t)((uint32_t)0x01U<<(11)))),
    ENET_100M_HALFDUPLEX = ((uint32_t)((uint32_t)0x01U<<(14))) ,
    ENET_10M_FULLDUPLEX = ((uint32_t)((uint32_t)0x01U<<(11))),
    ENET_10M_HALFDUPLEX = (uint32_t)0x00000000U,
    ENET_LOOPBACKMODE = (((uint32_t)((uint32_t)0x01U<<(12))) | ((uint32_t)((uint32_t)0x01U<<(11))))
}enet_mediamode_enum;


typedef enum
{
    ENET_NO_AUTOCHECKSUM = (uint32_t)0x00000000U,
    ENET_AUTOCHECKSUM_DROP_FAILFRAMES = ((uint32_t)((uint32_t)0x01U<<(10))),
    ENET_AUTOCHECKSUM_ACCEPT_FAILFRAMES = (((uint32_t)((uint32_t)0x01U<<(10)))|((uint32_t)((uint32_t)0x01U<<(26))))

}enet_chksumconf_enum;


typedef enum
{
    ENET_PROMISCUOUS_MODE = ((uint32_t)((uint32_t)0x01U<<(0))),
    ENET_RECEIVEALL = (int32_t)((uint32_t)((uint32_t)0x01U<<(31))),
 ENET_CUSTOM = ((uint32_t)((uint32_t)0x01U<<(4))),
    ENET_BROADCAST_FRAMES_PASS = (uint32_t)0x00000000U,
    ENET_BROADCAST_FRAMES_DROP = ((uint32_t)((uint32_t)0x01U<<(5)))
}enet_frmrecept_enum;


typedef enum
{
    ALL_MAC_REG = 0U,
    ALL_MSC_REG = 22U,
    ALL_PTP_REG = 33U,
    ALL_DMA_REG = 44U,
}enet_registers_type_enum;


typedef enum
{
    ENET_DMA_TX = ((0xFFFFFFFFUL << (20)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(22)))),
    ENET_DMA_RX = ((0xFFFFFFFFUL << (17)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(19))))
}enet_dmadirection_enum;


typedef enum
{
    ENET_PHY_READ = (uint32_t)0x00000000,
    ENET_PHY_WRITE = ((uint32_t)((uint32_t)0x01U<<(1)))
}enet_phydirection_enum;


typedef enum
{
    ENET_REG_READ,
    ENET_REG_WRITE
}enet_regdirection_enum;


typedef enum
{
    ENET_MAC_ADDRESS0 = ((uint32_t)0x00000000),
    ENET_MAC_ADDRESS1 = ((uint32_t)0x00000008),
    ENET_MAC_ADDRESS2 = ((uint32_t)0x00000010),
    ENET_MAC_ADDRESS3 = ((uint32_t)0x00000018)
}enet_macaddress_enum;


typedef enum
{
    TXDESC_COLLISION_COUNT,
    TXDESC_BUFFER_1_ADDR,
    RXDESC_FRAME_LENGTH,
    RXDESC_BUFFER_1_SIZE,
    RXDESC_BUFFER_2_SIZE,
    RXDESC_BUFFER_1_ADDR
}enet_descstate_enum;


typedef enum
{
    ENET_MSC_PRESET_NONE = 0U,
    ENET_MSC_PRESET_HALF = ((uint32_t)((uint32_t)0x01U<<(4))),
    ENET_MSC_PRESET_FULL = ((uint32_t)((uint32_t)0x01U<<(4))) | ((uint32_t)((uint32_t)0x01U<<(5)))
}enet_msc_preset_enum;

typedef enum{
    ENET_CKNT_ORDINARY = (((0xFFFFFFFFUL << (16)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(17)))) & ((uint32_t)(0) << 16)),
    ENET_CKNT_BOUNDARY = (((0xFFFFFFFFUL << (16)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(17)))) & ((uint32_t)(1) << 16)),
    ENET_CKNT_END_TO_END = (((0xFFFFFFFFUL << (16)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(17)))) & ((uint32_t)(2) << 16)),
    ENET_CKNT_PEER_TO_PEER = (((0xFFFFFFFFUL << (16)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(17)))) & ((uint32_t)(3) << 16)),
    ENET_PTP_SYSTIME_INIT = ((uint32_t)((uint32_t)0x01U<<(2))),
    ENET_PTP_SYSTIME_UPDATE = ((uint32_t)((uint32_t)0x01U<<(3))),
    ENET_PTP_ADDEND_UPDATE = ((uint32_t)((uint32_t)0x01U<<(5))),
    ENET_PTP_FINEMODE = (int32_t)(((uint32_t)((uint32_t)0x01U<<(1)))| ((uint32_t)((uint32_t)0x01U<<(31)))),
    ENET_PTP_COARSEMODE = ((uint32_t)((uint32_t)0x01U<<(1))),
    ENET_SUBSECOND_DIGITAL_ROLLOVER = (int32_t)(((uint32_t)((uint32_t)0x01U<<(9))) | ((uint32_t)((uint32_t)0x01U<<(31)))),
    ENET_SUBSECOND_BINARY_ROLLOVER = ((uint32_t)((uint32_t)0x01U<<(9))),
    ENET_SNOOPING_PTP_VERSION_2 = (int32_t)(((uint32_t)((uint32_t)0x01U<<(10)))| ((uint32_t)((uint32_t)0x01U<<(31)))),
    ENET_SNOOPING_PTP_VERSION_1 = ((uint32_t)((uint32_t)0x01U<<(10))),
    ENET_EVENT_TYPE_MESSAGES_SNAPSHOT = (int32_t)(((uint32_t)((uint32_t)0x01U<<(14)))| ((uint32_t)((uint32_t)0x01U<<(31)))),
    ENET_ALL_TYPE_MESSAGES_SNAPSHOT = ((uint32_t)((uint32_t)0x01U<<(14))),
    ENET_MASTER_NODE_MESSAGE_SNAPSHOT = (int32_t)(((uint32_t)((uint32_t)0x01U<<(15)))| ((uint32_t)((uint32_t)0x01U<<(31)))),
    ENET_SLAVE_NODE_MESSAGE_SNAPSHOT = ((uint32_t)((uint32_t)0x01U<<(15))),
}enet_ptp_function_enum;


typedef struct
{
    uint32_t option_enable;
    uint32_t forward_frame;
    uint32_t dmabus_mode;
    uint32_t dma_maxburst;
    uint32_t dma_arbitration;
    uint32_t store_forward_mode;
    uint32_t dma_function;
    uint32_t vlan_config;
    uint32_t flow_control;
    uint32_t hashtable_high;
    uint32_t hashtable_low;
    uint32_t framesfilter_mode;
    uint32_t halfduplex_param;
    uint32_t timer_config;
    uint32_t interframegap;
}enet_initpara_struct;


typedef struct
{
    uint32_t status;
    uint32_t control_buffer_size;
    uint32_t buffer1_addr;
    uint32_t buffer2_next_desc_addr;
# 1010 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_enet.h"
} enet_descriptors_struct;


typedef struct
{
    uint32_t second;
    uint32_t subsecond;
    uint32_t sign;
}enet_ptp_systime_struct;
# 1469 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_enet.h"
void enet_deinit(void);

void enet_initpara_config(enet_option_enum option, uint32_t para);

ErrStatus enet_init(enet_mediamode_enum mediamode, enet_chksumconf_enum checksum, enet_frmrecept_enum recept);

ErrStatus enet_software_reset(void);

uint32_t enet_rxframe_size_get(void);

void enet_descriptors_chain_init(enet_dmadirection_enum direction);

void enet_descriptors_ring_init(enet_dmadirection_enum direction);

ErrStatus enet_frame_receive(uint8_t *buffer, uint32_t bufsize);



ErrStatus enet_frame_transmit(uint8_t *buffer, uint32_t length);



void enet_transmit_checksum_config(enet_descriptors_struct *desc, uint32_t checksum);

void enet_enable(void);

void enet_disable(void);

void enet_mac_address_set(enet_macaddress_enum mac_addr, uint8_t paddr[]);

void enet_mac_address_get(enet_macaddress_enum mac_addr, uint8_t paddr[]);


FlagStatus enet_flag_get(enet_flag_enum enet_flag);

void enet_flag_clear(enet_flag_clear_enum enet_flag);

void enet_interrupt_enable(enet_int_enum enet_int);

void enet_interrupt_disable(enet_int_enum enet_int);

FlagStatus enet_interrupt_flag_get(enet_int_flag_enum int_flag);

void enet_interrupt_flag_clear(enet_int_flag_clear_enum int_flag_clear);



void enet_tx_enable(void);

void enet_tx_disable(void);

void enet_rx_enable(void);

void enet_rx_disable(void);

void enet_registers_get(enet_registers_type_enum type, uint32_t *preg, uint32_t num);

uint32_t enet_debug_status_get(uint32_t mac_debug);

void enet_address_filter_enable(enet_macaddress_enum mac_addr);

void enet_address_filter_disable(enet_macaddress_enum mac_addr);

void enet_address_filter_config(enet_macaddress_enum mac_addr, uint32_t addr_mask, uint32_t filter_type);

ErrStatus enet_phy_config(void);

ErrStatus enet_phy_write_read(enet_phydirection_enum direction, uint16_t phy_address, uint16_t phy_reg, uint16_t *pvalue);

ErrStatus enet_phyloopback_enable(void);

ErrStatus enet_phyloopback_disable(void);

void enet_forward_feature_enable(uint32_t feature);

void enet_forward_feature_disable(uint32_t feature);

void enet_fliter_feature_enable(uint32_t feature);

void enet_fliter_feature_disable(uint32_t feature);



ErrStatus enet_pauseframe_generate(void);

void enet_pauseframe_detect_config(uint32_t detect);

void enet_pauseframe_config(uint32_t pausetime, uint32_t pause_threshold);

void enet_flowcontrol_threshold_config(uint32_t deactive, uint32_t active);

void enet_flowcontrol_feature_enable(uint32_t feature);

void enet_flowcontrol_feature_disable(uint32_t feature);



uint32_t enet_dmaprocess_state_get(enet_dmadirection_enum direction);

void enet_dmaprocess_resume(enet_dmadirection_enum direction);

void enet_rxprocess_check_recovery(void);

ErrStatus enet_txfifo_flush(void);

uint32_t enet_current_desc_address_get(enet_desc_reg_enum addr_get);

uint32_t enet_desc_information_get(enet_descriptors_struct *desc, enet_descstate_enum info_get);

void enet_missed_frame_counter_get(uint32_t *rxfifo_drop, uint32_t *rxdma_drop);



FlagStatus enet_desc_flag_get(enet_descriptors_struct *desc, uint32_t desc_flag);

void enet_desc_flag_set(enet_descriptors_struct *desc, uint32_t desc_flag);

void enet_desc_flag_clear(enet_descriptors_struct *desc, uint32_t desc_flag);

void enet_rx_desc_immediate_receive_complete_interrupt(enet_descriptors_struct *desc);

void enet_rx_desc_delay_receive_complete_interrupt(enet_descriptors_struct *desc, uint32_t delay_time);

void enet_rxframe_drop(void);

void enet_dma_feature_enable(uint32_t feature);

void enet_dma_feature_disable(uint32_t feature);
# 1621 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_enet.h"
void enet_desc_select_normal_mode(void);

void enet_ptp_normal_descriptors_chain_init(enet_dmadirection_enum direction, enet_descriptors_struct *desc_ptptab);

void enet_ptp_normal_descriptors_ring_init(enet_dmadirection_enum direction, enet_descriptors_struct *desc_ptptab);

ErrStatus enet_ptpframe_receive_normal_mode(uint8_t *buffer, uint32_t bufsize, uint32_t timestamp[]);



ErrStatus enet_ptpframe_transmit_normal_mode(uint8_t *buffer, uint32_t length, uint32_t timestamp[]);







void enet_wum_filter_register_pointer_reset(void);

void enet_wum_filter_config(uint32_t pdata[]);

void enet_wum_feature_enable(uint32_t feature);

void enet_wum_feature_disable(uint32_t feature);



void enet_msc_counters_reset(void);

void enet_msc_feature_enable(uint32_t feature);

void enet_msc_feature_disable(uint32_t feature);

void enet_msc_counters_preset_config(enet_msc_preset_enum mode);

uint32_t enet_msc_counters_get(enet_msc_counter_enum counter);



void enet_ptp_feature_enable(uint32_t feature);

void enet_ptp_feature_disable(uint32_t feature);

ErrStatus enet_ptp_timestamp_function_config(enet_ptp_function_enum func);

void enet_ptp_subsecond_increment_config(uint32_t subsecond);

void enet_ptp_timestamp_addend_config(uint32_t add);

void enet_ptp_timestamp_update_config(uint32_t sign, uint32_t second, uint32_t subsecond);

void enet_ptp_expected_time_config(uint32_t second, uint32_t nanosecond);

void enet_ptp_system_time_get(enet_ptp_systime_struct *systime_struct);

void enet_ptp_pps_output_frequency_config(uint32_t freq);




void enet_initpara_reset(void);
# 70 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_exmc.h" 1
# 247 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_exmc.h"
typedef struct
{
    uint32_t asyn_access_mode;
    uint32_t syn_data_latency;
    uint32_t syn_clk_division;
    uint32_t bus_latency;
    uint32_t asyn_data_setuptime;
    uint32_t asyn_address_holdtime;
    uint32_t asyn_address_setuptime;
}exmc_norsram_timing_parameter_struct;


typedef struct
{
    uint32_t norsram_region;
    uint32_t write_mode;
    uint32_t extended_mode;
    uint32_t asyn_wait;
    uint32_t nwait_signal;
    uint32_t memory_write;
    uint32_t nwait_config;
    uint32_t wrap_burst_mode;
    uint32_t nwait_polarity;
    uint32_t burst_mode;
    uint32_t databus_width;
    uint32_t memory_type;
    uint32_t address_data_mux;
    exmc_norsram_timing_parameter_struct* read_write_timing;

    exmc_norsram_timing_parameter_struct* write_timing;
}exmc_norsram_parameter_struct;


typedef struct
{
    uint32_t databus_hiztime;
    uint32_t holdtime;
    uint32_t waittime;
    uint32_t setuptime;
}exmc_nand_pccard_timing_parameter_struct;


typedef struct
{
    uint32_t nand_bank;
    uint32_t ecc_size;
    uint32_t atr_latency;
    uint32_t ctr_latency;
    uint32_t ecc_logic;
    uint32_t databus_width;
    uint32_t wait_feature;
    exmc_nand_pccard_timing_parameter_struct* common_space_timing;
    exmc_nand_pccard_timing_parameter_struct* attribute_space_timing;
}exmc_nand_parameter_struct;


typedef struct
{
    uint32_t atr_latency;
    uint32_t ctr_latency;
    uint32_t wait_feature;
    exmc_nand_pccard_timing_parameter_struct* common_space_timing;
    exmc_nand_pccard_timing_parameter_struct* attribute_space_timing;
    exmc_nand_pccard_timing_parameter_struct* io_space_timing;
}exmc_pccard_parameter_struct;


typedef struct
{
    uint32_t row_to_column_delay;
    uint32_t row_precharge_delay;
    uint32_t write_recovery_delay;
    uint32_t auto_refresh_delay;
    uint32_t row_address_select_delay;
    uint32_t exit_selfrefresh_delay;
    uint32_t load_mode_register_delay;
}exmc_sdram_timing_parameter_struct;


typedef struct
{
    uint32_t sdram_device;
    uint32_t pipeline_read_delay;
    uint32_t burst_read_switch;
    uint32_t sdclock_config;
    uint32_t write_protection;
    uint32_t cas_latency;
    uint32_t internal_bank_number;
    uint32_t data_width;
    uint32_t row_address_width;
    uint32_t column_address_width;
    exmc_sdram_timing_parameter_struct* timing;
}exmc_sdram_parameter_struct;


typedef struct
{
    uint32_t mode_register_content;
    uint32_t auto_refresh_number;
    uint32_t bank_select;
    uint32_t command;
}exmc_sdram_command_parameter_struct;


typedef struct{
    uint32_t sample_polarity;
    uint32_t id_length;
    uint32_t address_bits;
    uint32_t command_bits;
}exmc_sqpipsram_parameter_struct;
# 706 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_exmc.h"
void exmc_norsram_deinit(uint32_t exmc_norsram_region);

void exmc_norsram_struct_para_init(exmc_norsram_parameter_struct* exmc_norsram_init_struct);

void exmc_norsram_init(exmc_norsram_parameter_struct* exmc_norsram_init_struct);

void exmc_norsram_enable(uint32_t exmc_norsram_region);

void exmc_norsram_disable(uint32_t exmc_norsram_region);


void exmc_nand_deinit(uint32_t exmc_nand_bank);

void exmc_nand_struct_para_init(exmc_nand_parameter_struct* exmc_nand_init_struct);

void exmc_nand_init(exmc_nand_parameter_struct* exmc_nand_init_struct);

void exmc_nand_enable(uint32_t exmc_nand_bank);

void exmc_nand_disable(uint32_t exmc_nand_bank);


void exmc_pccard_deinit(void);

void exmc_pccard_struct_para_init(exmc_pccard_parameter_struct* exmc_pccard_init_struct);

void exmc_pccard_init(exmc_pccard_parameter_struct* exmc_pccard_init_struct);

void exmc_pccard_enable(void);

void exmc_pccard_disable(void);


void exmc_sdram_deinit(uint32_t exmc_sdram_device);

void exmc_sdram_struct_para_init(exmc_sdram_parameter_struct* exmc_sdram_init_struct);

void exmc_sdram_init(exmc_sdram_parameter_struct* exmc_sdram_init_struct);

void exmc_sdram_struct_command_para_init(exmc_sdram_command_parameter_struct *exmc_sdram_command_init_struct);


void exmc_sqpipsram_deinit(void);

void exmc_sqpipsram_struct_para_init(exmc_sqpipsram_parameter_struct* exmc_sqpipsram_init_struct);

void exmc_sqpipsram_init(exmc_sqpipsram_parameter_struct* exmc_sqpipsram_init_struct);




void exmc_norsram_consecutive_clock_config(uint32_t clock_mode);

void exmc_norsram_page_size_config(uint32_t exmc_norsram_region, uint32_t page_size);


void exmc_nand_ecc_config(uint32_t exmc_nand_bank, ControlStatus newvalue);

uint32_t exmc_ecc_get(uint32_t exmc_nand_bank);


void exmc_sdram_readsample_enable(ControlStatus newvalue);

void exmc_sdram_readsample_config(uint32_t delay_cell, uint32_t extra_hclk);

void exmc_sdram_command_config(exmc_sdram_command_parameter_struct* exmc_sdram_command_init_struct);

void exmc_sdram_refresh_count_set(uint32_t exmc_count);

void exmc_sdram_autorefresh_number_set(uint32_t exmc_number);

void exmc_sdram_write_protection_config(uint32_t exmc_sdram_device, ControlStatus newvalue);

uint32_t exmc_sdram_bankstatus_get(uint32_t exmc_sdram_device);


void exmc_sqpipsram_read_command_set(uint32_t read_command_mode,uint32_t read_wait_cycle,uint32_t read_command_code);

void exmc_sqpipsram_write_command_set(uint32_t write_command_mode,uint32_t write_wait_cycle,uint32_t write_command_code);

void exmc_sqpipsram_read_id_command_send(void);

void exmc_sqpipsram_write_cmd_send(void);

uint32_t exmc_sqpipsram_low_id_get(void);

uint32_t exmc_sqpipsram_high_id_get(void);

FlagStatus exmc_sqpipsram_send_command_state_get(uint32_t send_command_flag);



void exmc_interrupt_enable(uint32_t exmc_bank,uint32_t interrupt);

void exmc_interrupt_disable(uint32_t exmc_bank,uint32_t interrupt);

FlagStatus exmc_flag_get(uint32_t exmc_bank,uint32_t flag);

void exmc_flag_clear(uint32_t exmc_bank,uint32_t flag);

FlagStatus exmc_interrupt_flag_get(uint32_t exmc_bank,uint32_t interrupt);

void exmc_interrupt_flag_clear(uint32_t exmc_bank,uint32_t interrupt);
# 71 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_ipa.h" 1
# 190 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_ipa.h"
typedef struct {
    uint32_t foreground_memaddr;
    uint32_t foreground_lineoff;
    uint32_t foreground_prealpha;
    uint32_t foreground_alpha_algorithm;
    uint32_t foreground_pf;
    uint32_t foreground_prered;
    uint32_t foreground_pregreen;
    uint32_t foreground_preblue;
} ipa_foreground_parameter_struct;


typedef struct {
    uint32_t background_memaddr;
    uint32_t background_lineoff;
    uint32_t background_prealpha;
    uint32_t background_alpha_algorithm;
    uint32_t background_pf;
    uint32_t background_prered;
    uint32_t background_pregreen;
    uint32_t background_preblue;
} ipa_background_parameter_struct;


typedef struct {
    uint32_t destination_memaddr;
    uint32_t destination_lineoff;
    uint32_t destination_prealpha;
    uint32_t destination_pf;
    uint32_t destination_prered;
    uint32_t destination_pregreen;
    uint32_t destination_preblue;
    uint32_t image_width;
    uint32_t image_height;
} ipa_destination_parameter_struct;


typedef enum {
    IPA_DPF_ARGB8888,
    IPA_DPF_RGB888,
    IPA_DPF_RGB565,
    IPA_DPF_ARGB1555,
    IPA_DPF_ARGB4444
} ipa_dpf_enum;
# 317 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_ipa.h"
void ipa_deinit(void);

void ipa_transfer_enable(void);

void ipa_transfer_hangup_enable(void);

void ipa_transfer_hangup_disable(void);

void ipa_transfer_stop_enable(void);

void ipa_transfer_stop_disable(void);

void ipa_foreground_lut_loading_enable(void);

void ipa_background_lut_loading_enable(void);

void ipa_pixel_format_convert_mode_set(uint32_t pfcm);




void ipa_foreground_struct_para_init(ipa_foreground_parameter_struct *foreground_struct);

void ipa_foreground_init(ipa_foreground_parameter_struct *foreground_struct);


void ipa_background_struct_para_init(ipa_background_parameter_struct *background_struct);

void ipa_background_init(ipa_background_parameter_struct *background_struct);


void ipa_destination_struct_para_init(ipa_destination_parameter_struct *destination_struct);

void ipa_destination_init(ipa_destination_parameter_struct *destination_struct);

void ipa_foreground_lut_init(uint8_t fg_lut_num, uint8_t fg_lut_pf, uint32_t fg_lut_addr);

void ipa_background_lut_init(uint8_t bg_lut_num, uint8_t bg_lut_pf, uint32_t bg_lut_addr);



void ipa_line_mark_config(uint16_t line_num);

void ipa_inter_timer_config(uint8_t timer_cfg);

void ipa_interval_clock_num_config(uint8_t clk_num);



FlagStatus ipa_flag_get(uint32_t flag);

void ipa_flag_clear(uint32_t flag);

void ipa_interrupt_enable(uint32_t int_flag);

void ipa_interrupt_disable(uint32_t int_flag);

FlagStatus ipa_interrupt_flag_get(uint32_t int_flag);

void ipa_interrupt_flag_clear(uint32_t int_flag);
# 72 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 1 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_tli.h" 1
# 193 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_tli.h"
typedef struct {
    uint16_t synpsz_vpsz;
    uint16_t synpsz_hpsz;
    uint16_t backpsz_vbpsz;
    uint16_t backpsz_hbpsz;
    uint32_t activesz_vasz;
    uint32_t activesz_hasz;
    uint32_t totalsz_vtsz;
    uint32_t totalsz_htsz;
    uint32_t backcolor_red;
    uint32_t backcolor_green;
    uint32_t backcolor_blue;
    uint32_t signalpolarity_hs;
    uint32_t signalpolarity_vs;
    uint32_t signalpolarity_de;
    uint32_t signalpolarity_pixelck;
} tli_parameter_struct;


typedef struct {
    uint16_t layer_window_rightpos;
    uint16_t layer_window_leftpos;
    uint16_t layer_window_bottompos;
    uint16_t layer_window_toppos;
    uint32_t layer_ppf;
    uint8_t layer_sa;
    uint8_t layer_default_alpha;
    uint8_t layer_default_red;
    uint8_t layer_default_green;
    uint8_t layer_default_blue;
    uint32_t layer_acf1;
    uint32_t layer_acf2;
    uint32_t layer_frame_bufaddr;
    uint16_t layer_frame_buf_stride_offset;
    uint16_t layer_frame_line_length;
    uint16_t layer_frame_total_line_number;
} tli_layer_parameter_struct;


typedef struct {
    uint32_t layer_table_addr;
    uint8_t layer_lut_channel_red;
    uint8_t layer_lut_channel_green;
    uint8_t layer_lut_channel_blue;
} tli_layer_lut_parameter_struct;


typedef enum {
    LAYER_PPF_ARGB8888 = 0U,
    LAYER_PPF_RGB888,
    LAYER_PPF_RGB565,
    LAYER_PPF_ARGB1555,
    LAYER_PPF_ARGB4444,
    LAYER_PPF_L8,
    LAYER_PPF_AL44,
    LAYER_PPF_AL88
} tli_layer_ppf_enum;
# 313 "../lib-gd32/gd32f4xx/GD32F4xx_standard_peripheral/Include/gd32f4xx_tli.h"
void tli_deinit(void);


void tli_struct_para_init(tli_parameter_struct *tli_struct);

void tli_init(tli_parameter_struct *tli_struct);

void tli_dither_config(uint8_t dither_stat);

void tli_enable(void);

void tli_disable(void);

void tli_reload_config(uint8_t reload_mod);




void tli_layer_struct_para_init(tli_layer_parameter_struct *layer_struct);

void tli_layer_init(uint32_t layerx, tli_layer_parameter_struct *layer_struct);

void tli_layer_window_offset_modify(uint32_t layerx, uint16_t offset_x, uint16_t offset_y);


void tli_lut_struct_para_init(tli_layer_lut_parameter_struct *lut_struct);

void tli_lut_init(uint32_t layerx, tli_layer_lut_parameter_struct *lut_struct);

void tli_color_key_init(uint32_t layerx, uint8_t redkey, uint8_t greenkey, uint8_t bluekey);

void tli_layer_enable(uint32_t layerx);

void tli_layer_disable(uint32_t layerx);

void tli_color_key_enable(uint32_t layerx);

void tli_color_key_disable(uint32_t layerx);

void tli_lut_enable(uint32_t layerx);

void tli_lut_disable(uint32_t layerx);


void tli_line_mark_set(uint16_t line_num);

uint32_t tli_current_pos_get(void);



void tli_interrupt_enable(uint32_t int_flag);

void tli_interrupt_disable(uint32_t int_flag);

FlagStatus tli_interrupt_flag_get(uint32_t int_flag);

void tli_interrupt_flag_clear(uint32_t int_flag);

FlagStatus tli_flag_get(uint32_t flag);
# 73 "../firmware-template-gd32/template/gd32f4xx_libopt.h" 2
# 370 "../lib-gd32/gd32f4xx/CMSIS/GD/GD32F4xx/Include/gd32f4xx.h" 2



}
# 68 "../lib-gd32/include/gd32.h" 2







}
# 84 "../lib-gd32/include/gd32.h"
typedef enum
{
    BKP_DATA_0,
    BKP_DATA_1
}bkp_data_register_enum;
void bkp_data_write(bkp_data_register_enum register_number, uint16_t data);
uint16_t bkp_data_read(bkp_data_register_enum register_number);
# 107 "../lib-gd32/include/gd32.h"
typedef enum T_GD32_Port {
 GD32_GPIO_PORTA = 0,
 GD32_GPIO_PORTB,
 GD32_GPIO_PORTC,
 GD32_GPIO_PORTD,
 GD32_GPIO_PORTE,
 GD32_GPIO_PORTF,
 GD32_GPIO_PORTG,
 GD32_GPIO_PORTH,
 GD32_GPIO_PORTI,
 GD32_GPIO_PORTJ,
 GD32_GPIO_PORTK
} GD32_Port_TypeDef;

# 1 "../lib-gd32/include/gd32_board.h" 1
# 46 "../lib-gd32/include/gd32_board.h"
# 1 "../lib-gd32/include/board/gd32f450vi.h" 1
# 122 "../lib-gd32/include/board/gd32f450vi.h"
namespace hal {
namespace panelled {
static constexpr uint32_t ACTIVITY = 0;
static constexpr uint32_t ARTNET = 0;
static constexpr uint32_t DDP = 0;
static constexpr uint32_t SACN = 0;
static constexpr uint32_t LTC_IN = 0;
static constexpr uint32_t LTC_OUT = 0;
static constexpr uint32_t MIDI_IN = 0;
static constexpr uint32_t MIDI_OUT = 0;
static constexpr uint32_t OSC_IN = 0;
static constexpr uint32_t OSC_OUT = 0;
static constexpr uint32_t TCNET = 0;

static constexpr uint32_t PORT_A_RX = 0;
static constexpr uint32_t PORT_A_TX = 0;
}
}
# 174 "../lib-gd32/include/board/gd32f450vi.h"
# 1 "../lib-gd32/include/mcu/gd32f450_mcu.h" 1
# 52 "../lib-gd32/include/mcu/gd32f450_mcu.h"
# 1 "../lib-gd32/include/mcu/gd32f4xx_mcu.h" 1
# 53 "../lib-gd32/include/mcu/gd32f450_mcu.h" 2
# 175 "../lib-gd32/include/board/gd32f450vi.h" 2
# 1 "../lib-gd32/include/gd32_gpio.h" 1
# 32 "../lib-gd32/include/gd32_gpio.h"
# 1 "../lib-gd32/include/gd32.h" 1
# 33 "../lib-gd32/include/gd32_gpio.h" 2
# 51 "../lib-gd32/include/gd32_gpio.h"
inline void gpio_fsel(const uint32_t gpio_periph, const uint32_t pin, const uint32_t fsel) {
 switch (gpio_periph) {
  case ((((uint32_t)0x40020000U) + 0x00000000U) + 0x00000000U):
   rcu_periph_clock_enable(RCU_GPIOA);
   break;
  case ((((uint32_t)0x40020000U) + 0x00000000U) + 0x00000400U):
   rcu_periph_clock_enable(RCU_GPIOB);
   break;
  case ((((uint32_t)0x40020000U) + 0x00000000U) + 0x00000800U):
   rcu_periph_clock_enable(RCU_GPIOC);
   break;
  case ((((uint32_t)0x40020000U) + 0x00000000U) + 0x00000C00U):
   rcu_periph_clock_enable(RCU_GPIOD);
   break;
  case ((((uint32_t)0x40020000U) + 0x00000000U) + 0x00001000U):
   rcu_periph_clock_enable(RCU_GPIOE);
   break;
  case ((((uint32_t)0x40020000U) + 0x00000000U) + 0x00001400U):
   rcu_periph_clock_enable(RCU_GPIOF);
   break;
  case ((((uint32_t)0x40020000U) + 0x00000000U) + 0x00001800U):
   rcu_periph_clock_enable(RCU_GPIOG);
   break;

  case ((((uint32_t)0x40020000U) + 0x00000000U) + 0x00001C00U):
   rcu_periph_clock_enable(RCU_GPIOH);
   break;

  case ((((uint32_t)0x40020000U) + 0x00000000U) + 0x00002000U):
   rcu_periph_clock_enable(RCU_GPIOI);
   break;
# 92 "../lib-gd32/include/gd32_gpio.h"
  default:
   break;
 }
# 106 "../lib-gd32/include/gd32_gpio.h"
 if (fsel == (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(1) << 0))) {
   gpio_mode_set(gpio_periph, (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(1) << 0)), (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(0) << 0)), pin);
   gpio_output_options_set(gpio_periph, ((uint8_t)(0x00U)), (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(2) << 0)), pin);
 } else {
   gpio_mode_set(gpio_periph, (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(0) << 0)), (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(1) << 0)), pin);
 }



}


inline void gd32_gpio_int_cfg(const uint32_t gpio, const uint32_t trig_type) {
 const uint32_t linex = ((uint32_t)((uint32_t)0x01U<<((uint8_t)(gpio - (16 * (uint8_t)(gpio / 16))))));

    switch(trig_type){
    case EXTI_TRIG_RISING:
        (*(volatile uint32_t *)(uint32_t)((((uint32_t)0x40010000U) + 0x00003C00U) + 0x08U)) |= (uint32_t)linex;
        (*(volatile uint32_t *)(uint32_t)((((uint32_t)0x40010000U) + 0x00003C00U) + 0x0CU)) &= ~(uint32_t)linex;
        break;
    case EXTI_TRIG_FALLING:
        (*(volatile uint32_t *)(uint32_t)((((uint32_t)0x40010000U) + 0x00003C00U) + 0x08U)) &= ~(uint32_t)linex;
        (*(volatile uint32_t *)(uint32_t)((((uint32_t)0x40010000U) + 0x00003C00U) + 0x0CU)) |= (uint32_t)linex;
        break;
    case EXTI_TRIG_BOTH:
        (*(volatile uint32_t *)(uint32_t)((((uint32_t)0x40010000U) + 0x00003C00U) + 0x08U)) |= (uint32_t)linex;
        (*(volatile uint32_t *)(uint32_t)((((uint32_t)0x40010000U) + 0x00003C00U) + 0x0CU)) |= (uint32_t)linex;
        break;
    default:
        break;
    }

 const uint8_t output_port = (uint8_t)(gpio / 16);
 const uint8_t output_pin = (uint8_t)(gpio - (16 * (uint8_t)(gpio / 16)));




    syscfg_exti_line_config(output_port, output_pin);

}


inline uint32_t gd32_gpio_to_periph(const uint32_t gpio) {
 switch ((GD32_Port_TypeDef) (uint8_t)(gpio / 16)) {
  case GD32_GPIO_PORTA:
  case GD32_GPIO_PORTB:
  case GD32_GPIO_PORTC:
  case GD32_GPIO_PORTD:
  case GD32_GPIO_PORTE:
  case GD32_GPIO_PORTF:
  case GD32_GPIO_PORTG:
   return ((((uint32_t)0x40020000U) + 0x00000000U) + 0x00000000U) + ((uint8_t)(gpio / 16) * 0x400);
   break;

  case GD32_GPIO_PORTH:
   return ((((uint32_t)0x40020000U) + 0x00000000U) + 0x00001C00U);
   break;

  case GD32_GPIO_PORTI:
   return ((((uint32_t)0x40020000U) + 0x00000000U) + 0x00002000U);
   break;
# 178 "../lib-gd32/include/gd32_gpio.h"
  default:
   (static_cast<void>(0));
   return 0;
   break;
 }
}

inline void gd32_gpio_fsel(const uint32_t gpio, const uint32_t fsel) {
 const uint32_t gpio_periph = gd32_gpio_to_periph(gpio);
 const uint32_t pin = ((uint32_t)((uint32_t)0x01U<<((uint8_t)(gpio - (16 * (uint8_t)(gpio / 16))))));

 gpio_fsel(gpio_periph, pin, fsel);
}

inline void gd32_gpio_clr(const uint32_t gpio) {
 const uint32_t gpio_periph = gd32_gpio_to_periph(gpio);
 const uint32_t pin = ((uint32_t)((uint32_t)0x01U<<((uint8_t)(gpio - (16 * (uint8_t)(gpio / 16))))));

 (*(volatile uint32_t *)(uint32_t)((gpio_periph) + 0x28U)) = pin;
}

inline void gd32_gpio_set(const uint32_t gpio) {
 const uint32_t gpio_periph = gd32_gpio_to_periph(gpio);
 const uint32_t pin = ((uint32_t)((uint32_t)0x01U<<((uint8_t)(gpio - (16 * (uint8_t)(gpio / 16))))));

 (*(volatile uint32_t *)(uint32_t)((gpio_periph) + 0x18U)) = pin;
}

inline void gd32_gpio_write(const uint32_t gpio, const uint32_t level) {
 if (level == 0) {
  gd32_gpio_clr(gpio);
 } else {
  gd32_gpio_set(gpio);
 }
}

inline uint32_t gd32_gpio_lev(const uint32_t gpio) {
 const uint32_t gpio_periph = gd32_gpio_to_periph(gpio);
 const uint32_t pin = ((uint32_t)((uint32_t)0x01U<<((uint8_t)(gpio - (16 * (uint8_t)(gpio / 16))))));

 return (uint32_t)(0 != ((*(volatile uint32_t *)(uint32_t)((gpio_periph) + 0x10U)) & pin));
}

inline void gd32_gpio_set_pud(const uint32_t gpio, const uint32_t pud) {
 const uint32_t gpio_periph = gd32_gpio_to_periph(gpio);
 const uint32_t pin = ((uint32_t)((uint32_t)0x01U<<((uint8_t)(gpio - (16 * (uint8_t)(gpio / 16))))));




 if (pud == (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(1) << 0))) {
  gpio_mode_set(gpio_periph, (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(0) << 0)), (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(1) << 0)), pin);
 } else if (pud == (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(2) << 0))) {
  gpio_mode_set(gpio_periph, (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(0) << 0)), (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(2) << 0)), pin);
 } else {
  gpio_mode_set(gpio_periph, (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(0) << 0)), (((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(1)))) & ((uint32_t)(0) << 0)), pin);
 }

}


template<uint32_t gpio_periph, uint32_t mode, uint32_t pull_up_down, uint32_t pin>
inline void gd32_gpio_mode_set() {
 static_assert(pin != 0, "pin cannot be zero");
 static_assert(pin == (1U << __builtin_ctz(pin)), "Only single pin values are allowed");

 uint32_t ctl = (*(volatile uint32_t *)(uint32_t)((gpio_periph) + 0x00U));
 uint32_t pupd = (*(volatile uint32_t *)(uint32_t)((gpio_periph) + 0x0CU));

 constexpr auto i = 31U - __builtin_clz(pin);


 ctl &= ~(0x3U << (2U * (i)));

 ctl |= ((uint32_t)((uint32_t)(mode) << (2U * (i))));


 pupd &= ~(0x3U << (2U * (i)));

 pupd |= ((uint32_t)((uint32_t)(pull_up_down) << (2U * (i))));

 (*(volatile uint32_t *)(uint32_t)((gpio_periph) + 0x00U)) = ctl;
 (*(volatile uint32_t *)(uint32_t)((gpio_periph) + 0x0CU)) = pupd;
}

template<uint32_t gpio_periph, uint32_t alt_func_num, uint32_t pin>
inline void gd32_gpio_af_set() {
 static_assert(pin != 0, "pin cannot be zero");
 static_assert(pin == (1U << __builtin_ctz(pin)), "Only single pin values are allowed");

 constexpr uint32_t i = 31U - __builtin_clz(pin);

 auto afrl = (*(volatile uint32_t *)(uint32_t)((gpio_periph) + 0x20U));
 auto afrh = (*(volatile uint32_t *)(uint32_t)((gpio_periph) + 0x24U));

 if constexpr(i < 8U) {

  afrl &= ~(0xFU << (4U * (i)));
  afrl |= ((uint32_t)((uint32_t)(alt_func_num) << (4U * (i))));
 } else if constexpr(i < 16U) {

  afrh &= ~(0xFU << (4U * (i - 8U)));
  afrh |= ((uint32_t)((uint32_t)(alt_func_num) << (4U * (i - 8U))));
 }

 (*(volatile uint32_t *)(uint32_t)((gpio_periph) + 0x20U)) = afrl;
 (*(volatile uint32_t *)(uint32_t)((gpio_periph) + 0x24U)) = afrh;
}
# 176 "../lib-gd32/include/board/gd32f450vi.h" 2
# 205 "../lib-gd32/include/board/gd32f450vi.h"
# 1 "../lib-gd32/include/board/gpio_header.h" 1
# 37 "../lib-gd32/include/board/gpio_header.h"
typedef enum GD32_BOARD_GPIO_HEADER {

 GPIO_EXT_3 = ((GD32_GPIO_PORTB * 16) + 7),
 GPIO_EXT_5 = ((GD32_GPIO_PORTB * 16) + 6),
 GPIO_EXT_7 = ((GD32_GPIO_PORTA * 16) + 6),
 GPIO_EXT_11 = ((GD32_GPIO_PORTC * 16) + 7),
 GPIO_EXT_13 = ((GD32_GPIO_PORTC * 16) + 6),
 GPIO_EXT_15 = ((GD32_GPIO_PORTB * 16) + 14),

 GPIO_EXT_19 = ((GD32_GPIO_PORTB * 16) + 5),
 GPIO_EXT_21 = ((GD32_GPIO_PORTB * 16) + 4),
 GPIO_EXT_23 = ((GD32_GPIO_PORTB * 16) + 3),


 GPIO_EXT_8 = ((GD32_GPIO_PORTC * 16) + 10),
 GPIO_EXT_10 = ((GD32_GPIO_PORTC * 16) + 11),
 GPIO_EXT_12 = ((GD32_GPIO_PORTB * 16) + 10),

 GPIO_EXT_16 = ((GD32_GPIO_PORTB * 16) + 15),
 GPIO_EXT_18 = ((GD32_GPIO_PORTA * 16) + 13),
 GPIO_EXT_22 = ((GD32_GPIO_PORTA * 16) + 11),
 GPIO_EXT_24 = ((GD32_GPIO_PORTA * 16) + 15),
 GPIO_EXT_26 = ((GD32_GPIO_PORTA * 16) + 14)
} _gpio_pin;
# 206 "../lib-gd32/include/board/gd32f450vi.h" 2
# 47 "../lib-gd32/include/gd32_board.h" 2
# 67 "../lib-gd32/include/gd32_board.h"
# 1 "../lib-gd32/include/board/logic_analyzer.h" 1
# 68 "../lib-gd32/include/gd32_board.h" 2
# 122 "../lib-gd32/include/gd32.h" 2
# 37 "../lib-hal/include/gd32/hardware.h" 2
# 1 "../lib-gd32/include/gd32_adc.h" 1
# 29 "../lib-gd32/include/gd32_adc.h"
float gd32_adc_gettemp();
float gd32_adc_getvref();

float gd32_adc_getvbat();



extern "C" {



}
# 38 "../lib-hal/include/gd32/hardware.h" 2
# 62 "../lib-hal/include/gd32/hardware.h"
 extern "C" void console_error(const char *);


# 1 "../lib-hal/include/gd32/panel_led.h" 1
# 43 "../lib-hal/include/gd32/panel_led.h"
namespace hal {
namespace panelled {
extern uint32_t g_nData;
}

inline void panel_led_spi(const __attribute__((unused)) uint32_t nData) {
# 99 "../lib-hal/include/gd32/panel_led.h"
}

inline void panel_led_init() {



}

inline void panel_led_on(uint32_t __attribute__((unused)) on) {
# 117 "../lib-hal/include/gd32/panel_led.h"
}

inline void panel_led_off(uint32_t __attribute__((unused)) off) {
# 129 "../lib-hal/include/gd32/panel_led.h"
}

inline void panel_led_run() {



}

}
# 66 "../lib-hal/include/gd32/hardware.h" 2



class Hardware {
public:
 Hardware();

 uint32_t GetReleaseId() const {
  return 0;
 }

 void GetUuid(uuid_t out) {
  memcpy(out, m_uuid, sizeof(uuid_t));
 }

 uint32_t Millis() {

  extern volatile uint32_t gv_nSysTickMillis;
  return gv_nSysTickMillis;




 }

 uint32_t Micros() {
  static uint32_t nMicrosPrevious;
  static uint32_t nResult;
  const auto nMicros = ((DWT_Type *) (0xE0001000UL) )->CYCCNT / ((uint32_t)(200000000) / 1000000U);

  if (nMicros > nMicrosPrevious) {
   nResult += (nMicros - nMicrosPrevious);
  } else {
   nResult += ((0xffffffffUL / ((uint32_t)(200000000) / 1000000U)) - nMicrosPrevious + nMicros);
  }

  nMicrosPrevious = nMicros;

  return nResult;
 }

 uint32_t GetUpTime() const {
  extern struct HwTimersSeconds g_Seconds;
  return g_Seconds.nUptime;
 }

 bool SetTime(__attribute__((unused)) const struct tm *pTime) {

  m_HwClock.Set(pTime);
  return true;



 }


 bool SetAlarm(const struct tm *pTime) {
  const auto b = m_HwClock.AlarmSet(pTime);
  return b;
 }

 void GetAlarm(struct tm *pTime) {
  m_HwClock.AlarmGet(pTime);
 }


 const char *GetBoardName(uint8_t& nLength) {
  nLength = sizeof("GD32F450VI") - 1U;
  return "GD32F450VI";
 }

 const char* GetSysName(uint8_t& nLength) {
  nLength = 8;
  return "Embedded";
 }

 const char* GetSocName(uint8_t& nLength) {
  nLength = 4;
  return "GD32";
 }

 const char *GetCpuName(uint8_t& nLength) {
  nLength = sizeof("GD32F450VI") - 1U;
  return "GD32F450VI";
 }

 uint32_t GetBoardId() {
  return 0;
 }

 const char *GetWebsiteUrl() {
  return "https://gd32-dmx.org";
 }

 void WatchdogInit() {
  m_bIsWatchdog = (SUCCESS == fwdgt_config(0xFFFF, ((uint8_t)(((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(2)))) & ((uint32_t)(2) << 0)))));

  if (m_bIsWatchdog) {
   fwdgt_enable();
  }
 }

 void WatchdogFeed() {
  fwdgt_counter_reload();
 }

 void WatchdogStop() {
  m_bIsWatchdog = false;
  fwdgt_config(0xFFFF, ((uint8_t)(((0xFFFFFFFFUL << (0)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(2)))) & ((uint32_t)(4) << 0))));
 }

 bool IsWatchdog() const {
  return m_bIsWatchdog;
 }

 bool Reboot();

 float GetCoreTemperature() {
  return gd32_adc_gettemp();
 }

 float GetCoreTemperatureMin() const {
  return -40.0f;
 }

 float GetCoreTemperatureMax() const {
  return 85.0f;
 }

 void SetModeWithLock(hardware::ledblink::Mode mode, bool doLock);
 void SetMode(hardware::ledblink::Mode mode);
 hardware::ledblink::Mode GetMode() const {
  return m_Mode;
 }

 struct Timer {
     uint32_t nExpireTime;
     uint32_t nIntervalMillis;
     int32_t nId;
     hal::TimerCallback callback;
 };

 int32_t SoftwareTimerAdd(const uint32_t nIntervalMillis, const hal::TimerCallback callback) {
     if (m_nTimersCount >= hal::SOFTWARE_TIMERS_MAX) {

            console_error("SoftwareTimerAdd\n");

         return -1;
     }

     const auto nCurrentTime = Hardware::Millis();

  Timer newTimer = {
    .nExpireTime = nCurrentTime + nIntervalMillis,
    .nIntervalMillis = nIntervalMillis,
    .nId = m_nNextId++,
    .callback = callback,
  };

     m_Timers[m_nTimersCount++] = newTimer;

     return newTimer.nId;
 }

 bool SoftwareTimerDelete(int32_t& nId) {
  if (nId >= 0) {
   for (uint32_t i = 0; i < m_nTimersCount; ++i) {
    if (m_Timers[i].nId == nId) {
     for (uint32_t j = i; j < m_nTimersCount - 1; ++j) {
      m_Timers[j] = m_Timers[j + 1];
     }
     --m_nTimersCount;
     nId = -1;
     return true;
    }
   }
  }

  return false;
 }

 bool SoftwareTimerChange(const int32_t nId, const uint32_t nIntervalMillis) {
  if (nId >= 0) {
   for (uint32_t i = 0; i < m_nTimersCount; ++i) {
    if (m_Timers[i].nId == nId) {
     m_Timers[i].nExpireTime = Hardware::Millis() + nIntervalMillis;
     m_Timers[i].nIntervalMillis = nIntervalMillis;

     return true;
    }
   }
  }

  return false;
 }

 void Run() {







     const auto nCurrentTime = Hardware::Get()->Millis();

     for (uint32_t i = 0; i < m_nTimersCount; i++) {
         if (m_Timers[i].nExpireTime <= nCurrentTime) {
          m_Timers[i].callback();
             m_Timers[i].nExpireTime = nCurrentTime + m_Timers[i].nIntervalMillis;
         }
     }

  hal::panel_led_run();
# 288 "../lib-hal/include/gd32/hardware.h"
 }

 static Hardware *Get() {
  return s_pThis;
 }

private:
 void RebootHandler();

 static void ledblink() {

  (*(volatile uint32_t *)(uint32_t)((((((uint32_t)0x40020000U) + 0x00000000U) + 0x00000800U)) + 0x2CU)) = ((uint32_t)((uint32_t)0x01U<<(0)));
# 317 "../lib-hal/include/gd32/hardware.h"
 }

 void SetFrequency(const uint32_t nFreqHz) {
  ((void)0);
  ((void)0);

  if (m_nTimerId < 0) {
   m_nTimerId = SoftwareTimerAdd((1000U / nFreqHz), ledblink);
   ((void)0);
   return;
  }

  switch (nFreqHz) {
  case 0:
   SoftwareTimerDelete(m_nTimerId);



   (*(volatile uint32_t *)(uint32_t)((((((uint32_t)0x40020000U) + 0x00000000U) + 0x00000800U)) + 0x28U)) = ((uint32_t)((uint32_t)0x01U<<(0)));

   break;

  case 1:
   SoftwareTimerChange(m_nTimerId, (1000U / 1));
   break;
  case 3:
   SoftwareTimerChange(m_nTimerId, (1000U / 3));
   break;
  case 5:
   SoftwareTimerChange(m_nTimerId, (1000U / 5));
   break;
  case 8:
   SoftwareTimerChange(m_nTimerId, (1000U / 8));
   break;

  case 255:
   SoftwareTimerDelete(m_nTimerId);



   (*(volatile uint32_t *)(uint32_t)((((((uint32_t)0x40020000U) + 0x00000000U) + 0x00000800U)) + 0x18U)) = ((uint32_t)((uint32_t)0x01U<<(0)));

   break;
  default:
   SoftwareTimerChange(m_nTimerId, (1000U / nFreqHz));
   break;
  }

  ((void)0);
 }

private:

 HwClock m_HwClock;

 uuid_t m_uuid;
 bool m_bIsWatchdog { false };
 hardware::ledblink::Mode m_Mode { hardware::ledblink::Mode::UNKNOWN };
 bool m_doLock { false };
 int32_t m_nTimerId { -1 };

 Timer m_Timers[hal::SOFTWARE_TIMERS_MAX];
 uint32_t m_nTimersCount { 0 };
 int32_t m_nNextId { 0 };




 static Hardware *s_pThis;
};
# 71 "../lib-hal/include/hardware.h" 2
# 42 "src/remoteconfig.cpp" 2


# 1 "../lib-network/include/net/apps/mdns.h" 1
# 32 "../lib-network/include/net/apps/mdns.h"
# 1 "../lib-network/include/net/protocol/dns.h" 1
# 33 "../lib-network/include/net/protocol/dns.h"
namespace net { namespace dns {
static constexpr uint32_t SIZEOF_DNS_HDR = 12;

enum class Flag1 : uint8_t {
 FLAG1_RESPONSE = 0x80,
 FLAG1_OPCODE_STATUS = 0x10,
 FLAG1_OPCODE_IQUERY = 0x08,
 FLAG1_OPCODE_STANDARD = 0x00,
 FLAG1_AUTHORATIVE = 0x04,
 FLAG1_TRUNC = 0x02,
 FLAG1_RD = 0x01
};

static constexpr uint8_t operator| (Flag1 a, Flag1 b) {
 return static_cast<uint8_t>((static_cast<uint8_t>(a) | static_cast<uint8_t>(b)));
}


enum class RRType : uint16_t {
 RRTYPE_A = 1,
 RRTYPE_PTR = 12,
 RRTYPE_TXT = 16,
 RRTYPE_SRV = 33,
 RRTYPE_ALL = 255
};


enum class RRClass : uint16_t {
 RRCLASS_INTERNET = 1,
 RRCLASS_ANY = 255,
 RRCLASS_FLUSH = 0x8000
};

static constexpr uint16_t operator| (RRClass a, RRClass b) {
 return static_cast<uint16_t>((static_cast<uint16_t>(a) | static_cast<uint16_t>(b)));
}

struct Header {
 uint16_t xid;
 uint8_t nFlag1;
 uint8_t nFlag2;
 uint16_t nQueryCount;
 uint16_t nAnswerCount;
 uint16_t nAuthorityCount;
 uint16_t nAdditionalCount;
} __attribute__((__packed__));

inline uint8_t dns_header_get_opcode(const Header *const header) {
 return ((header->nFlag1) >> 3) & 0xF;
}





static constexpr uint32_t MULTICAST_MESSAGE_SIZE = 512;
static constexpr uint32_t MULTICAST_ADDRESS = network::convert_to_uint(224, 0, 0, 251);

} }
# 33 "../lib-network/include/net/apps/mdns.h" 2

# 1 "../lib-network/include/../config/apps_config.h" 1
# 35 "../lib-network/include/net/apps/mdns.h" 2

namespace mdns {
enum class Services {
 CONFIG, TFTP, HTTP, RDMNET_LLRP, NTP, MIDI, OSC, DDP, PP, LAST_NOT_USED
};

struct ServiceRecord {
 char *pName;
 char *pTextContent;
 uint16_t nTextContentLength;
 uint16_t nPort;
 mdns::Services services;
};
}

class MDNS {
public:
 MDNS();
 ~MDNS();

 bool ServiceRecordAdd(const char *pName, const mdns::Services service, const char *pTextContent = nullptr, const uint16_t nPort = 0);
 bool ServiceRecordDelete(const mdns::Services service);

 void Print();

 void SendAnnouncement(const uint32_t nTTL);

 void Run() {
  s_nBytesReceived = Network::Get()->RecvFrom(s_nHandle, const_cast<const void **>(reinterpret_cast<void **>(&s_pReceiveBuffer)), &s_nRemoteIp, &s_nRemotePort);

  if (__builtin_expect((s_nBytesReceived < sizeof(struct net::dns::Header)), 1)) {
   return;
  }

  const auto *const pHeader = reinterpret_cast<net::dns::Header *>(s_pReceiveBuffer);
  const auto nFlag1 = pHeader->nFlag1;

  if ((nFlag1 >> 3) & 0xF) {
   return;
  }

  HandleQuestions(static_cast<uint32_t>(__builtin_bswap16(pHeader->nQueryCount)));
 }

 static MDNS *Get() {
  return s_pThis;
 }

private:
 void Parse();
 void HandleQuestions(const uint32_t nQuestions);
 void SendAnswerLocalIpAddress(const uint16_t nTransActionID, const uint32_t nTTL);
 void SendMessage(mdns::ServiceRecord const& serviceRecord, const uint16_t nTransActionID, const uint32_t nTTL);
 void SendTo(const uint32_t nLength);

private:
 static int32_t s_nHandle;
 static uint32_t s_nRemoteIp;
 static uint32_t s_nBytesReceived;
 static uint8_t *s_pReceiveBuffer;
 static uint16_t s_nRemotePort;

 static MDNS *s_pThis;
};
# 45 "src/remoteconfig.cpp" 2

# 1 "../lib-display/include/display.h" 1
# 31 "../lib-display/include/display.h"
# 1 "../lib-hal/include/console.h" 1
# 38 "../lib-hal/include/console.h"
typedef enum {
 CONSOLE_BLACK = 0,
 CONSOLE_RED = 1,
 CONSOLE_GREEN = 2,
 CONSOLE_YELLOW = 3,
 CONSOLE_BLUE = 4,
 CONSOLE_MAGENTA = 5
, CONSOLE_CYAN = 6,
 CONSOLE_WHITE = 7,
 CONSOLE_DEFAULT = 9
} _console_colors;
# 66 "../lib-hal/include/console.h"
extern "C" {


extern void console_set_fg_color(uint16_t);
extern void console_set_bg_color(uint16_t);


}




extern void console_init();

extern "C" {

extern void console_putc(int);
extern void console_puts(const char*);
extern void console_write(const char*, unsigned int);
extern void console_status(uint32_t, const char *);
extern void console_error(const char*);

}
# 32 "../lib-display/include/display.h" 2

namespace display {
struct Defaults {
 static constexpr uint32_t SEEP_TIMEOUT = 5;
};
}





# 1 "../lib-display/include/i2c/display.h" 1
# 33 "../lib-display/include/i2c/display.h"
# 1 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/cstdarg" 1 3
# 39 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/cstdarg" 3
       
# 40 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/cstdarg" 3
# 53 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/cstdarg" 3

# 53 "/Users/arjanvanvught/Library/xPacks/@xpack-dev-tools/arm-none-eabi-gcc/12.2.1-1.2.1/.content/arm-none-eabi/include/c++/12.2.1/cstdarg" 3
namespace std
{
  using ::va_list;
}
# 34 "../lib-display/include/i2c/display.h" 2




# 1 "../lib-display/include/displayset.h" 1
# 31 "../lib-display/include/displayset.h"

# 31 "../lib-display/include/displayset.h"
namespace display {
namespace cursor {
static constexpr uint32_t OFF = 0;
static constexpr uint32_t ON = (1U << 0);
static constexpr uint32_t BLINK_OFF = 0;
static constexpr uint32_t BLINK_ON = (1U << 1);
}
}

class DisplaySet {
public:
 virtual ~DisplaySet() = default;

 uint32_t GetColumns() const {
  return m_nCols;
 }

 uint32_t GetRows() const {
  return m_nRows;
 }

 void ClearEndOfLine() {
  m_bClearEndOfLine = true;
 }

 virtual bool Start()= 0;

 virtual void Cls()= 0;
 virtual void ClearLine(uint32_t nLine)= 0;

 virtual void PutChar(int)= 0;
 virtual void PutString(const char*)= 0;

 virtual void TextLine(uint32_t nLine, const char *pData, uint32_t nLength)= 0;

 virtual void SetCursorPos(uint32_t nCol, uint32_t nRow)= 0;
 virtual void SetCursor(uint32_t)= 0;

 virtual void SetSleep([[maybe_unused]] bool bSleep) {}
 virtual void SetContrast([[maybe_unused]] uint8_t nContrast) {}
 virtual void SetFlipVertically([[maybe_unused]] bool doFlipVertically) {}

 virtual void PrintInfo() {}

protected:
 uint32_t m_nCols;
 uint32_t m_nRows;
 bool m_bClearEndOfLine { false };
};
# 39 "../lib-display/include/i2c/display.h" 2



# 1 "../lib-hal/include/hal_i2c.h" 1
# 29 "../lib-hal/include/hal_i2c.h"
# 1 "../lib-hal/include/hal_api.h" 1
# 34 "../lib-hal/include/hal_api.h"
# 1 "../lib-hal/include/gd32/hal_api.h" 1
# 35 "../lib-hal/include/hal_api.h" 2
# 30 "../lib-hal/include/hal_i2c.h" 2
# 39 "../lib-hal/include/hal_i2c.h"
# 1 "../lib-hal/include/gd32/hal_i2c.h" 1
# 30 "../lib-hal/include/gd32/hal_i2c.h"
# 1 "../lib-gd32/include/gd32_i2c.h" 1
# 31 "../lib-gd32/include/gd32_i2c.h"
typedef enum GD32_I2C_BAUDRATE {
 GD32_I2C_NORMAL_SPEED = 100000,
 GD32_I2C_FULL_SPEED = 400000
} gd32_i2c_baudrate_t;

typedef enum GD32_I2C_RC {
 GD32_I2C_OK = 0,
 GD32_I2C_NOK,
 GD32_I2C_NACK,
 GD32_I2C_NOK_LA,
 GD32_I2C_NOK_TOUT
} gd32_i2c_rc_t;


extern "C" {


void gd32_i2c_begin(void);
void gd32_i2c_end(void);
extern uint8_t gd32_i2c_write(const char *pBuffer, uint32_t nLength);
uint8_t gd32_i2c_read(char *pBuffer, uint32_t nLength);
void gd32_i2c_set_baudrate(uint32_t nBaudrate);
void gd32_i2c_set_address(uint8_t nAddress);


}
# 31 "../lib-hal/include/gd32/hal_i2c.h" 2
# 40 "../lib-hal/include/hal_i2c.h" 2
# 48 "../lib-hal/include/hal_i2c.h"
namespace hal {
namespace i2c {
static constexpr uint32_t NORMAL_SPEED = 100000;
static constexpr uint32_t FULL_SPEED = 400000;
}
}

class HAL_I2C {
public:
 HAL_I2C(uint8_t nAddress, uint32_t nBaudrate = hal::i2c::FULL_SPEED) : m_nAddress(nAddress), m_nBaudrate(nBaudrate) {
 }

 uint8_t GetAddress() {
  return m_nAddress;
 }

 uint32_t GetBaudrate() {
  return m_nBaudrate;
 }

 bool IsConnected() {
  return IsConnected_(m_nAddress, m_nBaudrate);
 }

 static bool IsConnected(const uint8_t nAddress, uint32_t nBaudrate = hal::i2c::NORMAL_SPEED) {
  return IsConnected_(nAddress, nBaudrate);
 }

 void Write(uint8_t pData) {
  Setup();
  const char buffer[] = { static_cast<char>(pData) };
  gd32_i2c_write(buffer, 1);
 }

 void Write(const char *pData, uint32_t nLength) {
  Setup();
  gd32_i2c_write(pData, nLength);
 }

 void WriteRegister(uint8_t nRegister, uint8_t nValue) {
  const char buffer[] = {
   static_cast<char>(nRegister),
   static_cast<char>(nValue)
  };

  Setup();
  gd32_i2c_write(buffer, 2);
 }

 void WriteRegister(uint8_t nRegister, uint16_t nValue) {
  const char buffer[] = {
   static_cast<char>(nRegister),
   static_cast<char>(nValue >> 8),
   static_cast<char>(nValue & 0xFF)
  };

  Setup();
  gd32_i2c_write(buffer, 3);
 }

 uint8_t Read() {
  char buf[1] = {0};

  Setup();
  gd32_i2c_read(buf, 1);

  return static_cast<uint8_t>(buf[0]);
 }

 uint8_t Read(char *pBuffer, uint32_t nLength) {
  Setup();
  return gd32_i2c_read(pBuffer, nLength);
 }

 uint16_t Read16() {
  char buf[2] = {0};

  Setup();
  gd32_i2c_read(buf, 2);

  return static_cast<uint16_t>(static_cast<uint16_t>(buf[0]) << 8 | static_cast<uint16_t>(buf[1]));
 }

 uint8_t ReadRegister(uint8_t nRegister) {
  const char buf[] = { static_cast<char>(nRegister) };

  Setup();
  gd32_i2c_write(&buf[0], 1);

  return Read();
 }

 uint16_t ReadRegister16(uint8_t nRegister) {
  const char buf[] = { static_cast<char>(nRegister) };

  Setup();
  gd32_i2c_write(&buf[0], 1);

  return Read16();
 }

 uint16_t ReadRegister16DelayUs(uint8_t nRegister, uint32_t nDelayUs) {
  char buf[2] = {0};

  buf[0] = static_cast<char>(nRegister);

  Setup();
  gd32_i2c_write(&buf[0], 1);

  udelay(nDelayUs);

  gd32_i2c_read(buf, 2);

  return static_cast<uint16_t>(static_cast<uint16_t>(buf[0]) << 8 | static_cast<uint16_t>(buf[1]));
 }

 bool AckRead() {
  char buf;
  return gd32_i2c_read(&buf, 1) == 0;
 }

private:
 void Setup() {
  gd32_i2c_set_address(m_nAddress);
  gd32_i2c_set_baudrate(m_nBaudrate);
 }

 static bool IsConnected_(const uint8_t nAddress, uint32_t nBaudrate) {
  char buf;

  gd32_i2c_set_address(nAddress);
  gd32_i2c_set_baudrate(nBaudrate);

  if ((nAddress >= 0x30 && nAddress <= 0x37) || (nAddress >= 0x50 && nAddress <= 0x5F)) {
   return gd32_i2c_read(&buf, 1) == 0;
  }


  return gd32_i2c_write(nullptr, 0) == 0;
 }

 uint8_t m_nAddress;
 uint32_t m_nBaudrate;
};
# 43 "../lib-display/include/i2c/display.h" 2

# 1 "../lib-hal/include/hal_gpio.h" 1
# 36 "../lib-hal/include/hal_gpio.h"
# 1 "../lib-hal/include/gd32/hal_gpio.h" 1
# 30 "../lib-hal/include/gd32/hal_gpio.h"
# 1 "../lib-gd32/include/gd32_board.h" 1
# 31 "../lib-hal/include/gd32/hal_gpio.h" 2
# 37 "../lib-hal/include/hal_gpio.h" 2
# 45 "../lib-display/include/i2c/display.h" 2


namespace display {
enum class Type {
 PCF8574T_1602, PCF8574T_2004, SSD1306, SSD1311, UNKNOWN
};
namespace segment7 {
static constexpr uint8_t MCP23017_I2C_ADDRESS = 0x20;
static constexpr uint8_t MCP23017_IODIRA = 0x00;
static constexpr uint8_t MCP23017_GPIOA = 0x12;
static constexpr uint8_t I2C_ADDRESS = (MCP23017_I2C_ADDRESS + 1);
}
}

class Display {
public:
 Display();
 Display(uint32_t nRows);
 Display(display::Type type);

 ~Display() {
  s_pThis = nullptr;
  delete m_LcdDisplay;
 }

 bool isDetected() const {
  return m_LcdDisplay == nullptr ? false : true;
 }

 display::Type GetDetectedType() const {
  return m_tType;
 }

 void PrintInfo() {
  if (m_LcdDisplay == nullptr) {
   puts("No display found");
   return;
  }

  m_LcdDisplay->PrintInfo();
 }

 void Cls() {
  if (m_LcdDisplay == nullptr) {
   return;
  }

  m_LcdDisplay->Cls();
 }

 void ClearLine(uint32_t nLine) {
  if (m_LcdDisplay == nullptr) {
   return;
  }

  m_LcdDisplay->ClearLine(nLine);
 }

 void PutChar(int c) {
  if (m_LcdDisplay == nullptr) {
   return;
  }

  m_LcdDisplay->PutChar(c);
 }

 void PutString(const char *pText) {
  if (m_LcdDisplay == nullptr) {
   return;
  }

  m_LcdDisplay->PutString(pText);
 }

 int Write(uint32_t nLine, const char *pText) {
  if (m_LcdDisplay == nullptr) {
   return 0;
  }

  const auto *p = pText;
  uint32_t nCount = 0;

  const auto nColumns = m_LcdDisplay->GetColumns();

  while ((*p != 0) && (nCount++ < nColumns)) {
   ++p;
  }

  m_LcdDisplay->TextLine(nLine, pText, nCount);

  return static_cast<int>(nCount);
 }

 int Printf(uint32_t nLine, const char *format, ...) {
  if (m_LcdDisplay == nullptr) {
   return 0;
  }

  char buffer[32];

  va_list arp;

  
# 147 "../lib-display/include/i2c/display.h" 3 4
 __builtin_va_start(
# 147 "../lib-display/include/i2c/display.h"
 arp
# 147 "../lib-display/include/i2c/display.h" 3 4
 ,
# 147 "../lib-display/include/i2c/display.h"
 format
# 147 "../lib-display/include/i2c/display.h" 3 4
 )
# 147 "../lib-display/include/i2c/display.h"
                      ;

  auto i = vsnprintf(buffer, sizeof(buffer) / sizeof(buffer[0]), format, arp);

  
# 151 "../lib-display/include/i2c/display.h" 3 4
 __builtin_va_end(
# 151 "../lib-display/include/i2c/display.h"
 arp
# 151 "../lib-display/include/i2c/display.h" 3 4
 )
# 151 "../lib-display/include/i2c/display.h"
            ;

  m_LcdDisplay->TextLine(nLine, buffer, static_cast<uint32_t>(i));

  return i;
 }

 void TextLine(uint32_t nLine, const char *pText, uint32_t nLength) {
  if (m_LcdDisplay == nullptr) {
   return;
  }

  m_LcdDisplay->TextLine(nLine, pText, nLength);
 }

 void TextStatus(const char *pText) {
  if (m_LcdDisplay == nullptr) {
   return;
  }

  const auto nColumns = m_LcdDisplay->GetColumns();
  const auto nRows = m_LcdDisplay->GetRows();

  (static_cast<void>(0));
  (static_cast<void>(0));

  SetCursorPos(0, nRows - 1U);

  for (uint32_t i = 0; i < nColumns - 1U; i++) {
   PutChar(' ');
  }

  SetCursorPos(0, nRows - 1U);

  Write(nRows, pText);
 }

 void TextStatus(const char *pText, uint32_t nConsoleColor) {
  TextStatus(pText);

  if (nConsoleColor == 0xffffffffUL) {
   return;
  }

  console_status(nConsoleColor, pText);
 }

 void SetCursor(uint32_t nMode) {
  if (m_LcdDisplay == nullptr) {
   return;
  }

  m_LcdDisplay->SetCursor(nMode);
 }

 void SetCursorPos(uint32_t nCol, uint32_t nRow) {
  if (m_LcdDisplay == nullptr) {
   return;
  }

  m_LcdDisplay->SetCursorPos(nCol, nRow);
 }

 void SetSleepTimeout(uint32_t nSleepTimeout = display::Defaults::SEEP_TIMEOUT) {
  m_nSleepTimeout = 1000U * 60U * nSleepTimeout;
 }

 uint32_t GetSleepTimeout() const {
  return m_nSleepTimeout / 1000U / 60U;
 }

 void SetContrast(uint8_t nContrast) {
  m_nContrast = nContrast;

  if (m_LcdDisplay == nullptr) {
   return;
  }

  m_LcdDisplay->SetContrast(nContrast);
 }

 uint8_t GetContrast() const {
  return m_nContrast;
 }

 void SetFlipVertically(bool doFlipVertically) {
  m_bIsFlippedVertically = doFlipVertically;

  if (m_LcdDisplay == nullptr) {
   return;
  }

  m_LcdDisplay->SetFlipVertically(doFlipVertically);
 }

 void ClearEndOfLine() {
  if (m_LcdDisplay == nullptr) {
   return;
  }

  m_LcdDisplay->ClearEndOfLine();
 }

 bool GetFlipVertically() const {
  return m_bIsFlippedVertically;
 }

 uint32_t GetColumns() const {
  if (m_LcdDisplay == nullptr) {
   return 0;
  }

  return m_LcdDisplay->GetColumns();
 }

 uint32_t GetRows() const {
  if (m_LcdDisplay == nullptr) {
   return 0;
  }

  return m_LcdDisplay->GetRows();
 }

 void Progress() {
  static constexpr char SYMBOLS[] = { '/' , '-', '\\' , '|' };
  static uint32_t nSymbolsIndex;

  Display::Get()->SetCursorPos(Display::Get()->GetColumns() - 1U, Display::Get()->GetRows() - 1U);
  Display::Get()->PutChar(SYMBOLS[nSymbolsIndex++]);

  if (nSymbolsIndex >= sizeof(SYMBOLS)) {
   nSymbolsIndex = 0;
  }
 }

 void SetSleep(bool bSleep) {
  if (m_LcdDisplay == nullptr) {
   return;
  }

  m_bIsSleep = bSleep;

  m_LcdDisplay->SetSleep(bSleep);

  if (!bSleep) {
   m_nMillis = Hardware::Get()->Millis();
  }
 }

 bool isSleep() const {
  return m_bIsSleep;
 }

 void Run() {
  if (m_nSleepTimeout == 0) {
   return;
  }

  if (!m_bIsSleep) {
   if (__builtin_expect(((Hardware::Get()->Millis() - m_nMillis) > m_nSleepTimeout), 0)) {
    SetSleep(true);
   }
  } else {

   if (__builtin_expect(((gd32_gpio_lev(((GD32_GPIO_PORTC * 16) + 13)) == 0)), 0)) {
    SetSleep(false);
   }

  }
 }

 static Display* Get() {
  return s_pThis;
 }

private:
 void Detect(display::Type tDisplayType);
 void Detect(uint32_t nRows);

private:
 display::Type m_tType { display::Type::UNKNOWN };
 uint32_t m_nMillis { 0 };
 HAL_I2C m_I2C;
 uint32_t m_nSleepTimeout { 1000 * 60 * display::Defaults::SEEP_TIMEOUT };
 uint8_t m_nContrast { 0x7F };

 bool m_bIsSleep { false };
 bool m_bIsFlippedVertically { false };




 DisplaySet *m_LcdDisplay { nullptr };
 static Display *s_pThis;
};
# 44 "../lib-display/include/display.h" 2
# 47 "src/remoteconfig.cpp" 2

# 1 "../lib-properties/include/properties.h" 1
# 31 "../lib-properties/include/properties.h"
namespace properties {
int convert_json_file(char *pBuffer, uint32_t nLength, const bool bSkipFileName);
}
# 49 "src/remoteconfig.cpp" 2
# 1 "../lib-properties/include/propertiesconfig.h" 1
# 35 "../lib-properties/include/propertiesconfig.h"
struct PropertiesConfig {
public:
 static void EnableJSON(bool enableJSON) {
  if (enableJSON) {
   s_Config |= Mask::ENABLE_JSON;
  } else {
   s_Config &= static_cast<uint8_t>(~Mask::ENABLE_JSON);
  }
 }

 static bool IsJSON() {





  return isMaskSet(Mask::ENABLE_JSON);

 }

private:
 struct Mask {
  static constexpr uint8_t ENABLE_JSON = (1U << 0);
 };
    static bool isMaskSet(uint8_t nMask) {
     return (s_Config & nMask) == nMask;
    }

    static uint8_t s_Config;
};
# 50 "src/remoteconfig.cpp" 2

# 1 "./include/remoteconfigjson.h" 1
# 31 "./include/remoteconfigjson.h"
namespace remoteconfig {
uint32_t json_get_list(char *pOutBuffer, const uint32_t nOutBufferSize);
uint32_t json_get_version(char *pOutBuffer, const uint32_t nOutBufferSize);
uint32_t json_get_uptime(char *pOutBuffer, const uint32_t nOutBufferSize);
uint32_t json_get_display(char *pOutBuffer, const uint32_t nOutBufferSize);
uint32_t json_get_directory(char *pOutBuffer, const uint32_t nOutBufferSize);
namespace net {
uint32_t json_get_phystatus(char *pOutBuffer, const uint32_t nOutBufferSize);
}
namespace dmx {
uint32_t json_get_ports(char *pOutBuffer, const uint32_t nOutBufferSize);
uint32_t json_get_portstatus(const char cPort, char *pOutBuffer, const uint32_t nOutBufferSize);
}
namespace rdm {
uint32_t json_get_rdm(char *pOutBuffer, const uint32_t nOutBufferSize);
uint32_t json_get_queue(char *pOutBuffer, const uint32_t nOutBufferSize);
uint32_t json_get_portstatus(char *pOutBuffer, const uint32_t nOutBufferSize);
uint32_t json_get_tod(const char cPort, char *pOutBuffer, const uint32_t nOutBufferSize);
}
namespace storage {
uint32_t json_get_directory(char *pOutBuffer, const uint32_t nOutBufferSize);
}
namespace dsa {
uint32_t json_get_portstatus(char *pOutBuffer, const uint32_t nOutBufferSize);
uint32_t json_get_vlantable(char *pOutBuffer, const uint32_t nOutBufferSize);
}
namespace showfile {
uint32_t json_get_status(char *pOutBuffer, const uint32_t nOutBufferSize);
uint32_t json_get_directory(char *pOutBuffer, const uint32_t nOutBufferSize);
void json_set_status(const char *pBuffer, const uint32_t nBufferSize);
void json_delete(const char *pBuffer, const uint32_t nBufferSize);
}
namespace timedate {
uint32_t json_get_timeofday(char *pOutBuffer, const uint32_t nOutBufferSize);
void json_set_timeofday(const char *pBuffer, const uint32_t nBufferSize);
}
namespace rtc {
uint32_t json_get_rtc(char *pOutBuffer, const uint32_t nOutBufferSize);
void json_set_rtc(const char *pBuffer, const uint32_t nBufferSize);
}
namespace artnet {
namespace controller {
uint32_t json_get_polltable(char *pOutBuffer, const uint32_t nOutBufferSize);
}
}
namespace pixel {
uint32_t json_get_types(char *pOutBuffer, const uint32_t nOutBufferSize);
uint32_t json_get_status(char *pOutBuffer, const uint32_t nOutBufferSize);
}
}
# 52 "src/remoteconfig.cpp" 2




# 1 "./include/remoteconfigparams.h" 1
# 31 "./include/remoteconfigparams.h"
# 1 "./include/remoteconfig.h" 1
# 32 "./include/remoteconfigparams.h" 2


namespace remoteconfigparams {
struct Params {
    uint32_t nSetList;
 uint8_t NotUsed0;
 uint8_t NotUsed1;
 uint8_t NotUsed2;
 uint8_t NotUsed3;
 char aDisplayName[remoteconfig::DISPLAY_NAME_LENGTH];
} __attribute__((packed));

static_assert(sizeof(struct Params) <= 48, "struct Params is too large");

struct Mask {
 static constexpr uint32_t DISABLE = (1U << 0);
 static constexpr uint32_t DISABLE_WRITE = (1U << 1);
 static constexpr uint32_t ENABLE_REBOOT = (1U << 2);
 static constexpr uint32_t ENABLE_UPTIME = (1U << 3);
 static constexpr uint32_t DISPLAY_NAME = (1U << 4);
 static constexpr uint32_t ENABLE_FACTORY = (1U << 5);
};
}

class RemoteConfigParamsStore {
public:
 static void Update(const struct remoteconfigparams::Params *pParams) {
  ConfigStore::Get()->Update(configstore::Store::RCONFIG, pParams, sizeof(struct remoteconfigparams::Params));
 }

 static void Copy(struct remoteconfigparams::Params *pParams) {
  ConfigStore::Get()->Copy(configstore::Store::RCONFIG, pParams, sizeof(struct remoteconfigparams::Params));
 }
};

class RemoteConfigParams {
public:
 RemoteConfigParams();

 void Load();
 void Load(const char *pBuffer, uint32_t nLength);

 void Builder(const struct remoteconfigparams::Params *pRemoteConfigParams, char *pBuffer, uint32_t nLength, uint32_t& nSize);
 void Save(char *pBuffer, uint32_t nLength, uint32_t& nSize) {
  Builder(nullptr, pBuffer, nLength, nSize);
 }

 void Set(RemoteConfig *);

 const char *GetDisplayName() const {
  return m_Params.aDisplayName;
 }

    static void staticCallbackFunction(void *p, const char *s);

private:
 void Dump();
 void callbackFunction(const char *pLine);
 void SetBool(const uint8_t nValue, const uint32_t nMask);
 bool isMaskSet(uint32_t nMask) const {
  return (m_Params.nSetList & nMask) == nMask;
 }

private:
 remoteconfigparams::Params m_Params;
};
# 57 "src/remoteconfig.cpp" 2

# 1 "../lib-configstore/include/envparams.h" 1
# 31 "../lib-configstore/include/envparams.h"
class EnvParams {
public:
 EnvParams();

 void LoadAndSet();
 void LoadAndSet(const char *pBuffer, uint32_t nLength);

 void Builder(char *pBuffer, uint32_t nLength, uint32_t& nSize);

public:
    static void staticCallbackFunction(void *p, const char *s);

private:
 void Dump();
    void callbackFunction(const char *s);
};
# 59 "src/remoteconfig.cpp" 2
