// 函数: sub_142bfdaf0
// 地址: 0x142bfdaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = 0

if (arg3 != 0)
    do
        int128_t* r10_1 = arg1 + (rax << 3)
        int128_t* const r8 = &data_14369a5d0
        
        if (r10_1 u>= arg1)
            r8 = r10_1
        
        int128_t* const rcx_1 = &data_14369a5d0
        
        if (r10_1 u>= arg1)
            rcx_1 = r10_1
        
        if ((zx.d(*r8) << 8) + zx.d(*(r8 + 1)) u<= arg2
                && arg2 u<= (zx.d(*(rcx_1 + 2)) << 8) + zx.d(*(rcx_1 + 3)))
            int128_t* result = arg1 + (rax << 3)
            
            if (result u>= arg1)
                return result
            
            return &data_14369a5d0
        
        rax = zx.q(rax.d + 1)
    while (rax.d u< arg3)

return 0
