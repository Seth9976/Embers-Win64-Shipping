// 函数: sub_142c12170
// 地址: 0x142c12170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x1c) == 0)
    uint64_t rdx = zx.q(*(arg2 + 0x18))
    int32_t r8_1 = *(arg2 + 0x10)
    
    if ((rdx + 4).d u<= r8_1)
        int128_t* const rcx
        
        if (rdx.d u< r8_1)
            rcx = rdx + *(arg2 + 8)
        else
            *(arg2 + 0x1c) = 1
            rcx = &data_14369a5d0
        
        sub_142c120d0(arg1, 
            (((((zx.d(*rcx) << 8) + zx.d(*(rcx + 1))) << 8) + zx.d(*(rcx + 2))) << 8)
                + zx.d(*(rcx + 3)))
        int32_t rax_5
        
        if (*(arg2 + 0x1c) != 0)
            rax_5 = *(arg2 + 0x10)
            *(arg2 + 0x1c) = 1
        else
            int32_t rax_4 = *(arg2 + 0x18)
            int32_t rcx_3 = *(arg2 + 0x10)
            
            if (rax_4 u> rcx_3)
                rax_5 = *(arg2 + 0x10)
                *(arg2 + 0x1c) = 1
            else
                rax_5 = rax_4 + 4
                
                if (rax_5 u> rcx_3)
                    rax_5 = *(arg2 + 0x10)
                    *(arg2 + 0x1c) = 1
        
        *(arg2 + 0x18) = rax_5
        rax_5.b = 1
        return rax_5

int32_t rax
rax.b = 0
return rax
