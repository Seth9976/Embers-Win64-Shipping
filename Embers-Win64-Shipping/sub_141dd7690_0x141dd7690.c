// 函数: sub_141dd7690
// 地址: 0x141dd7690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg2 + 0xa0)
*(arg1 + 0x28) = *(arg2 + 0x740)
*(arg1 + 0x30) = *(arg2 + 0x218)
*(arg1 + 0x3c) = *(arg2 + 0x18)

if (r8 == 0)
    *(arg1 + 0x38) = 0
    int64_t arg_8 = 0
    *(arg1 + 0x44) = 0
    return 0

*(arg1 + 0x38) = *(r8 + 0xc)
int64_t result = *(r8 + 0x18)
*(arg1 + 0x44) = result
return result
