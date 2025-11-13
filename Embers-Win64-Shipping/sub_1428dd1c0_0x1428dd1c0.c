// 函数: sub_1428dd1c0
// 地址: 0x1428dd1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t var_28 = 0
FILETIME systemTimeAsFileTime
systemTimeAsFileTime.dwLowDateTime = 0
systemTimeAsFileTime.dwHighDateTime = 0
var_28.d = GetCurrentProcessId()
var_28:4.d = GetCurrentThreadId()
GetSystemTimeAsFileTime(&systemTimeAsFileTime)
int64_t result = sub_142898390(arg1, &var_28, 0x10, 0)
__security_check_cookie(rax_1 ^ &var_48)
return result
