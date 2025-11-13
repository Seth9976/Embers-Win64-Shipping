// 函数: sub_142b56140
// 地址: 0x142b56140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x60)

if (result == 0)
    *(arg1 + 0x60) = 0
    return result

while (*(result + 8) != 0)
    sub_142a7dcd0(sub_142ae7500(*(arg1 + 0x60), 0))
    result = *(arg1 + 0x60)

int64_t* rcx_2 = *(arg1 + 0x60)

if (rcx_2 != 0)
    result = (**rcx_2)(rcx_2, 1)

*(arg1 + 0x60) = 0
return result
