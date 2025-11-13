// 函数: sub_142bb8290
// 地址: 0x142bb8290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
int32_t result = sub_142bbbd60(arg1, arg2, arg3, rax)

if (result != 0)
    return result

if (arg2 == 0)
    *(arg1 + 8) &= 0xffff7fff
    return 0

*(arg1 + 8) |= 0x8000
return result
