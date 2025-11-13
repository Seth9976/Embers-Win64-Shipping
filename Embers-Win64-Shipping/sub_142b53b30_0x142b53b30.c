// 函数: sub_142b53b30
// 地址: 0x142b53b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0xffff8000)
    if (arg1 != 0x80000101)
        return 1
    
    if (arg3 s<= 1 && arg4 s<= 1)
        return 0
else if (arg2 s<= 0x7fff)
    int32_t rdx_3 = (arg2 << 8 | arg3) << 8 | arg4
    
    if (arg1 s>= rdx_3)
        int64_t result
        result.b = arg1 != rdx_3
        return result

return 0xffffffff
