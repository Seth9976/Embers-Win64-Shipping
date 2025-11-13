// 函数: __security_init_cookie
// 地址: 0x142c98a0c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t __security_cookie_1 = __security_cookie

if (__security_cookie_1 == 0x2b992ddfa232)
    FILETIME systemTimeAsFileTime
    __builtin_memset(&systemTimeAsFileTime, 0, 8)
    GetSystemTimeAsFileTime(&systemTimeAsFileTime)
    int64_t rax
    rax.d = systemTimeAsFileTime.dwLowDateTime
    rax:4.d = systemTimeAsFileTime.dwHighDateTime
    int64_t arg_8 = rax
    uint64_t rax_2 = zx.q(GetCurrentThreadId())
    arg_8 ^= rax_2
    uint64_t rax_4 = zx.q(GetCurrentProcessId())
    arg_8 ^= rax_4
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    __security_cookie_1 =
        (zx.q(performanceCount.d) << 0x20 ^ performanceCount ^ arg_8 ^ &arg_8) & 0xffffffffffff
    
    if (__security_cookie_1 == 0x2b992ddfa232)
        __security_cookie_1 = 0x2b992ddfa233
    
    __security_cookie = __security_cookie_1

uint64_t result = not.q(__security_cookie_1)
data_143ccb960 = result
return result
