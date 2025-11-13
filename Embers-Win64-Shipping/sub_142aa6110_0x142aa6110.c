// 函数: sub_142aa6110
// 地址: 0x142aa6110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0)
    int32_t rax_1 = *(arg1 + 0x64)
    uint64_t rcx
    
    if (arg2 s< rax_1)
        rcx = zx.q(*(*(arg1 + 0x68) + (sx.q(arg2) << 1)))
    label_142aa614b:
        
        if (rcx.d != 0)
            return zx.q(zx.d(*(*(arg1 + 0x70) + (rcx << 1))) << 0x10)
    else if (arg2 s>= 0x1000 && arg2 - 0x1000 s< 8)
        rcx = zx.q(*(*(arg1 + 0x68) + (sx.q(rax_1 + arg2 - 0x1000) << 1)))
        goto label_142aa614b

return 0
