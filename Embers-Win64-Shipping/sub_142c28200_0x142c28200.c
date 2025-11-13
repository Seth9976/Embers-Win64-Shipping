// 函数: sub_142c28200
// 地址: 0x142c28200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 2).b != 0)
    uint32_t rcx_3 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
    
    if (rcx_3 == 1)
        return sub_142c282b0(arg1, arg2) __tailcall
    
    if (rcx_3 != 2)
        result.b = 1
        return result
    
    if (sub_142bf7510(arg2, &arg1[2], rcx_3).b != 0
            && sub_142bf7510(arg2, &arg1[4], ((zx.d(arg1[2]) << 8) + zx.d(arg1[3])) * 6).b != 0)
        result.b = 1
        return result

result.b = 0
return result
