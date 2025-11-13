// 函数: sub_142c383b0
// 地址: 0x142c383b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != 0)
    int32_t rax_1 = arg1[1].d
    
    if (rax_1 != 0)
        qsort(arg1[2], zx.q(rax_1), 0xc, sub_142c38380)
    
    int32_t i = 1
    uint64_t r8_1 = 0
    
    if (arg1[1].d u> 1)
        int64_t zmm0 = 0
        int128_t* r10_1
        
        if (1 u>= arg1[1].d)
            data_144017550.q = zmm0
            r10_1 = &data_144017550
            data_144017550:8.d = 0
            goto label_142c3843f
        
        do
            r10_1 = arg1[2] + zx.q(i) * 0xc
        label_142c3843f:
            int128_t* rax_4
            
            if (r8_1.d u< arg1[1].d)
                rax_4 = arg1[2] + zx.q(r8_1.d) * 0xc
            else
                data_144017550.q = zmm0
                rax_4 = &data_144017550
                data_144017550:8.d = 0
            
            if (*r10_1 != *rax_4)
                r8_1 = zx.q(r8_1.d + 1)
                int128_t* r10_2
                
                if (i u< arg1[1].d)
                    r10_2 = arg1[2] + zx.q(i) * 0xc
                else
                    data_144017550.q = zmm0
                    r10_2 = &data_144017550
                    data_144017550:8.d = 0
                
                int128_t* rcx_4
                
                if (r8_1.d u< arg1[1].d)
                    rcx_4 = arg1[2] + r8_1 * 0xc
                else
                    data_144017550.q = zmm0
                    rcx_4 = &data_144017550
                    data_144017550:8.d = 0
                
                *rcx_4 = *r10_2
                *(rcx_4 + 8) = *(r10_2 + 8)
                zmm0 = 0
            
            i += 1
        while (i u< arg1[1].d)
    
    int32_t r8_2 = r8_1.d + 1
    
    if (r8_1.d + 1 s< 0)
        r8_2 = 0
    
    if (r8_2 u< arg1[1].d)
        arg1[1].d = r8_2

return sub_142c32290(arg1, arg2) __tailcall
