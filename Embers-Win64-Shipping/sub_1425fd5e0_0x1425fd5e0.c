// 函数: sub_1425fd5e0
// 地址: 0x1425fd5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x4c) = *arg2
*(arg1 + 0x50) = arg2[1]
*(arg1 + 0x54) = arg2[2]
*(arg1 + 0x64) = *arg3
*(arg1 + 0x68) = arg3[1]
*(arg1 + 0x6c) = arg3[2]
*(arg1 + 0xa4) = *arg4
*(arg1 + 0xa8) = arg4[1]
*(arg1 + 0xac) = arg4[2]
*(arg1 + 0xbc) = arg5 * arg5
*(arg1 + 0xc0) = 0
X3DAudioCalculate(arg1, arg1 + 0x4c, arg1 + 0x84, 0x11, arg1 + 0x14)
*arg6 = **(arg1 + 0x14) * *arg6
arg6[1] = *(*(arg1 + 0x14) + 4) * arg6[1]
arg6[2] = *(*(arg1 + 0x14) + 8) * arg6[2]
arg6[3] = *(*(arg1 + 0x14) + 0xc) * arg6[3]
arg6[4] = *(*(arg1 + 0x14) + 0x10) * arg6[4]
void* result = *(arg1 + 0x14)
arg6[5] = *(result + 0x14) * arg6[5]
arg6[6] = *(arg1 + 0x34) * arg6[6]
return result
