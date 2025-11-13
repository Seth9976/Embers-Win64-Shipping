// 函数: sub_142c0d190
// 地址: 0x142c0d190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x1c) == 0)
    uint64_t rcx = zx.q(*(arg2 + 0x18))
    int32_t r9_1 = *(arg2 + 0x10)
    
    if ((rcx + 4).d u<= r9_1)
        int128_t* const rcx_1
        
        if (rcx.d u< r9_1)
            rcx_1 = rcx + *(arg2 + 8)
        else
            *(arg2 + 0x1c) = 1
            rcx_1 = &data_14369a5d0
        
        uint64_t rcx_2 = zx.q(*(arg1 + 4))
        uint32_t r9_8 = (((((zx.d(*rcx_1) << 8) + zx.d(*(rcx_1 + 1))) << 8) + zx.d(*(rcx_1 + 2)))
            << 8) + zx.d(*(rcx_1 + 3))
        uint64_t* rax_6
        
        if (rcx_2.d u>= *(arg1 + 8))
            *arg1 = 1
            data_144017550.q = 0
            rax_6 = &data_144017550
        else
            *(arg1 + 4) = (rcx_2 + 1).d
            
            if (rcx_2.d u>= *(arg1 + 8))
                data_144017550.q = 0
                rax_6 = &data_144017550
            else
                rax_6 = *(arg1 + 0x10) + (rcx_2 << 3)
        
        *rax_6 = _mm_cvtepi32_pd(zx.q(r9_8)) f* 1.52587890625e-05
        int32_t rax_8
        
        if (*(arg2 + 0x1c) != 0)
            rax_8 = *(arg2 + 0x10)
            *(arg2 + 0x1c) = 1
        else
            int32_t rax_7 = *(arg2 + 0x18)
            int32_t rcx_3 = *(arg2 + 0x10)
            
            if (rax_7 u> rcx_3)
                rax_8 = *(arg2 + 0x10)
                *(arg2 + 0x1c) = 1
            else
                rax_8 = rax_7 + 4
                
                if (rax_8 u> rcx_3)
                    rax_8 = *(arg2 + 0x10)
                    *(arg2 + 0x1c) = 1
        
        *(arg2 + 0x18) = rax_8
        rax_8.b = 1
        return rax_8

int32_t rax
rax.b = 0
return rax
