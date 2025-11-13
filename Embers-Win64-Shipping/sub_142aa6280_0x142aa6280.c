// 函数: sub_142aa6280
// 地址: 0x142aa6280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0)
    int32_t rax_1 = *(arg1 + 0x64)
    uint32_t rax_3
    
    if (arg2 s< rax_1)
        rax_3 = zx.d(*(*(arg1 + 0x68) + (sx.q(arg2) << 1)))
    label_142aa62bb:
        
        if (rax_3 != 0)
            return zx.q((zx.d(*(*(arg1 + 0x70) + (zx.q(rax_3 + 1) << 1))) << 0x10) - 1)
    else if (arg2 s>= 0x1000 && arg2 - 0x1000 s< 8)
        rax_3 = zx.d(*(*(arg1 + 0x68) + (sx.q(rax_1 + arg2 - 0x1000) << 1)))
        goto label_142aa62bb

return 0
