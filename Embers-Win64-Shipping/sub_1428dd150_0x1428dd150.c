// 函数: sub_1428dd150
// 地址: 0x1428dd150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t var_28 = 0
int64_t performanceCount = 0
var_28.d = GetCurrentThreadId()
QueryPerformanceCounter(&performanceCount)
int64_t result = sub_142898390(arg1, &var_28, 0x10, 0)
__security_check_cookie(rax_1 ^ &var_48)
return result
