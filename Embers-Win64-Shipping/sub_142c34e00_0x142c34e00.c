// 函数: sub_142c34e00
// 地址: 0x142c34e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t result

if (sub_142bf7510(arg2, arg1, 0xc).b == 0 || zx.w(*arg1) * 0x100 + zx.w(arg1[1]) != 1)
    result.b = 0
else if (sub_142c294c0(&arg1[6], arg2, arg1).b == 0)
    result.b = 0
else
    uint16_t rdx_4 = zx.w(arg1[6])
    uint64_t r8_2 = zx.q(arg1[7])
    
    if (0 == rdx_4 * 0x100 + r8_2.w)
        goto label_142c34ec6
    
    if (sub_142c34c90(&arg1[(zx.q(rdx_4.b) << 8) + r8_2], arg2, arg1) != 0)
        goto label_142c34ec6
    
    if (sub_142bf99e0(arg2, &arg1[6], 2).b == 0)
        result.b = 0
    else
        *(arg1 + 6) = 0
    label_142c34ec6:
        
        if (sub_142c2e450(&arg1[8], arg2, arg1, arg1).b == 0)
            result.b = 0
        else
            result.b = 1

return result
