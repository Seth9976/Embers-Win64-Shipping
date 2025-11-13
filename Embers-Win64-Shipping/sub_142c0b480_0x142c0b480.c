// 函数: sub_142c0b480
// 地址: 0x142c0b480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int32_t r9_1 = 1
    uint64_t r10_1 = 0
    
    if (arg3 u> 1)
        do
            int64_t rax_1 = arg1 + (r10_1 << 1)
            
            if ((zx.d(*(r10_1 + rax_1)) << 8) + zx.d(*(r10_1 + rax_1 + 1)) u<= arg2 && arg2
                    u<= zx.d(*(r10_1 + rax_1 + 2)) + (zx.d(*(r10_1 + rax_1)) << 8)
                    + zx.d(*(r10_1 + rax_1 + 1)))
                char* rdx_5 = zx.q(r10_1.d) + arg1 + (r10_1 << 1)
                return zx.q(arg2 + r9_1 - (zx.d(*rdx_5) << 8) - zx.d(rdx_5[1]))
            
            r9_1 = r9_1 + 1 + zx.d(*(r10_1 + rax_1 + 2))
            r10_1 = zx.q(r10_1.d + 1)
        while (r9_1 u< arg3)

return 0
