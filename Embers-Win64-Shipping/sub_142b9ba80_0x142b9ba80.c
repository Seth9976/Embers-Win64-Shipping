// 函数: sub_142b9ba80
// 地址: 0x142b9ba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x20) << 6
*arg2 = r8
arg2[2] = (*(arg1 + 0x2c) << 6) + r8
int32_t r8_2 = *(arg1 + 0x24) << 6
arg2[3] = r8_2
int32_t result = *(arg1 + 0x28) << 6
arg2[1] = r8_2 - result
return result
