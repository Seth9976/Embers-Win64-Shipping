// 函数: sub_142c27c40
// 地址: 0x142c27c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 2).b != 0)
    uint32_t rcx_3 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
    
    if (rcx_3 == 1 || rcx_3 == 2)
        return sub_142bf7510(arg2, arg1, 4) __tailcall
    
    if (rcx_3 != 3)
        result.b = 1
        return result
    
    if (sub_142bf7510(arg2, arg1, rcx_3 + 3).b != 0 && sub_142c26040(&arg1[4], arg2, arg1).b != 0)
        result.b = 1
        return result

result.b = 0
return result
