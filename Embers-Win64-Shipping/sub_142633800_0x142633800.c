// 函数: sub_142633800
// 地址: 0x142633800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg3
arg1[1] = arg3[1]
arg1[2] = arg3[2]
arg1[3] = *arg3
arg1[4] = arg3[1]
arg1[5] = arg3[2]
int64_t* result = *(arg1 + 0x48)
*result = arg2
arg1[0x14] = 1
return result
