// 函数: sub_142b13500
// 地址: 0x142b13500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x148) = 9
*(arg1 + 0x149) = *(arg2 + 1)
char r9 = *(arg2 + 2)
*(arg1 + 0x14a) = ((((*arg3 u>> 6) + *arg3) ^ r9) & 0x3f) ^ r9
uint8_t rcx = arg3[3]
uint8_t result = arg3[1]
char rdx_1 = rcx * 2 + result
result u>>= 5
*(arg1 + 0x14b) = (rdx_1 << 3) + result + (rcx u>> 4) + arg3[2]
return result
