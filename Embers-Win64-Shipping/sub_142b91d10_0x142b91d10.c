// 函数: sub_142b91d10
// 地址: 0x142b91d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return (arg1 + 0x23).d

if (arg4 == 0)
    return (arg4 + 6).d

if (arg2 u>= *(arg1 + 0x10))
    return 0x10

int64_t r10_1 = *(*(*(arg1 + 0x90) + 0x18) + 0x90)

if (r10_1 != 0 && ((arg3.b & 3) != 0 || (arg3 & 0xf0000) == 0x10000))
    int32_t result = r10_1(arg1, arg2, 1, zx.q(arg3), arg4)
    
    if (result == 0)
        return sub_142b98330(arg1, arg4, result + 1, arg3.b)
    
    if (result.b != 7)
        return result

return sub_142b91de0(arg1, arg2, 1, arg3, arg5, arg4)
