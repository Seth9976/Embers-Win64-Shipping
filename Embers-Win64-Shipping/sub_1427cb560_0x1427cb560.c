// 函数: sub_1427cb560
// 地址: 0x1427cb560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = not.w(*arg2 & *arg3)
arg1[1] = not.w(arg2[1] & *(arg3 + 2))
arg1[2] = not.w(arg2[2] & *(arg3 + 4))
int16_t result = not.w(arg2[3] & *(arg3 + 6))
arg1[3] = result
return result
