// 函数: sub_142ba7660
// 地址: 0x142ba7660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_142bb5000(arg1, arg2, arg3, 1, arg4, arg5)

if (result != 0)
    return result

if (arg2 == 0)
    *(arg1 + 8) &= 0xffff7fff
    return 0

*(arg1 + 8) |= 0x8000
return result
