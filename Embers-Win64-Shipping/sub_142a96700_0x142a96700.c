// 函数: sub_142a96700
// 地址: 0x142a96700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int64_t* rcx = *(arg1 + 0x1d8)

if (rcx == 0)
    return 0

void* result = *rcx
*arg2 = *(result + 8)
return result
