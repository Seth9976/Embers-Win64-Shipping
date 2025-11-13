// 函数: sub_140b734e0
// 地址: 0x140b734e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
SYSTEMTIME systemTime
GetLocalTime(&systemTime)
*arg1 = zx.d(systemTime.wYear)
*arg2 = zx.d(systemTime.wMonth)
*arg3 = zx.d(systemTime.wDayOfWeek)
*arg4 = zx.d(systemTime.wDay)
*arg5 = zx.d(systemTime.wHour)
*arg6 = zx.d(systemTime.wMinute)
*arg7 = zx.d(systemTime.wSecond)
uint32_t wMilliseconds = zx.d(systemTime.wMilliseconds)
*arg8 = wMilliseconds
__security_check_cookie(rax_1 ^ &var_88)
return wMilliseconds
