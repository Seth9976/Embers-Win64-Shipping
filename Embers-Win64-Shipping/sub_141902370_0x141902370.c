// 函数: sub_141902370
// 地址: 0x141902370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x150)
int128_t var_18 = zx.o(0)
sub_1418f8350(arg1, &var_18)
*(arg1 + 0x1a0) = arg2
void*** result = sub_1418f7610(arg1, &var_18)

if (arg1 == -0x150)
    return result

return LeaveCriticalSection(arg1 + 0x150)
