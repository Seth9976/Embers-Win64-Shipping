// 函数: sub_1427cb520
// 地址: 0x1427cb520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2 ^ *arg3
arg1[1] = arg2[1] ^ *(arg3 + 2)
arg1[2] = arg2[2] ^ *(arg3 + 4)
int16_t result = arg2[3] ^ *(arg3 + 6)
arg1[3] = result
return result
