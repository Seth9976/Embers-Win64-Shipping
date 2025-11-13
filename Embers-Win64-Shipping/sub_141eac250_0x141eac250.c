// 函数: sub_141eac250
// 地址: 0x141eac250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = j_sub_140ce8e10(arg1, arg2)

if (*(arg2 + 0x40) s>= 0x112 || (*(arg2 + 0x28) & 1) == 0)
    return result

void* rdx = *(arg1 + 0x228)
*(rdx + 0x204) ^= (*(arg1 + 0x240) ^ *(rdx + 0x204)) & 1
*(*(arg1 + 0x228) + 0x205) = 0
*(*(arg1 + 0x228) + 0x200) = *(arg1 + 0x244)
*(*(arg1 + 0x228) + 0x1f0) = *(arg1 + 0x248)
*(*(arg1 + 0x228) + 0x240) = *(arg1 + 0x24c)
return sub_1405af800(*(arg1 + 0x228) + 0x270, arg1 + 0x250)
