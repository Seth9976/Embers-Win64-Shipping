// 函数: sub_142870390
// 地址: 0x142870390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_48
int64_t rax_1 = __security_cookie ^ &var_48
SYSTEMTIME systemTime
GetSystemTime(&systemTime)
FILETIME fileTime
SystemTimeToFileTime(&systemTime, &fileTime)
int64_t r8
r8.d = fileTime.dwLowDateTime
r8:4.d = fileTime.dwHighDateTime
uint32_t rdx_2 = ((r8 + -0x19db1ded53e8000) u/ 0x989680).d
*arg1 = rdx_2
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x66666667, (r8 + -0x19db1ded53e8000).d - rdx_2 * 0x989680)
arg1[1] = ((r8 + -0x19db1ded53e8000).d - rdx_2 * 0x989680) s/ 0xa
__security_check_cookie(rax_1 ^ &var_48)
return temp0 s>> 2 u>> 0x1f
