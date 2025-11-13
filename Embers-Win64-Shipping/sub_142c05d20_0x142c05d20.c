// 函数: sub_142c05d20
// 地址: 0x142c05d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 8).b != 0)
    uint32_t rcx_3 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
    
    if (rcx_3 == 1)
        return sub_142c051c0(arg1, arg2, arg3) __tailcall
    
    if (rcx_3 != 3)
        result.b = 1
        return result
    
    if (sub_142bf7510(arg2, arg1, rcx_3 + 5).b != 0 && arg3 + 1 u< 0x7fffffff
            && sub_142bf7510(arg2, &arg1[8], (arg3 + 1) * 2).b != 0)
        result.b = 1
        return result

result.b = 0
return result
