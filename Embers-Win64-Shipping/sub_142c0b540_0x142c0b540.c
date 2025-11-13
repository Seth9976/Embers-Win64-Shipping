// 函数: sub_142c0b540
// 地址: 0x142c0b540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int32_t r8 = 1
    uint64_t r9_1 = 0
    
    if (arg3 u> 1)
        do
            if ((zx.d(*(arg1 + (r9_1 << 2))) << 8) + zx.d(*(arg1 + (r9_1 << 2) + 1)) u<= arg2)
                uint32_t rdx_7 = ((zx.d(*(arg1 + (r9_1 << 2) + 2)) + zx.d(*(arg1 + (r9_1 << 2))))
                    << 8) + zx.d(*(arg1 + (r9_1 << 2) + 3)) + zx.d(*(arg1 + (r9_1 << 2) + 1))
                
                if (arg2 u<= rdx_7)
                    return zx.q(arg2 + r8 - (zx.d(*(arg1 + (r9_1 << 2))) << 8)
                        - zx.d(*(arg1 + (r9_1 << 2) + 1)))
            
            uint32_t rdx_8 = zx.d(*(arg1 + (r9_1 << 2) + 2))
            uint32_t rcx_4 = zx.d(*(arg1 + (r9_1 << 2) + 3))
            r9_1 = zx.q(r9_1.d + 1)
            r8 = (rdx_8 << 8) + 1 + rcx_4 + r8
        while (r8 u< arg3)

return 0
