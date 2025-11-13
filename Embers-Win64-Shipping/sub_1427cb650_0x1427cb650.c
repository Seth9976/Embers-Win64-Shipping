// 函数: sub_1427cb650
// 地址: 0x1427cb650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *(arg3 + 4) & *arg2
arg1[1] = *(arg2 + 2) & *(arg3 + 6)
arg1[2] = *(arg2 + 4) & *arg3
int16_t result = *(arg2 + 6) & *(arg3 + 2)
arg1[3] = result
return result
