// 函数: sub_1422f1f20
// 地址: 0x1422f1f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[2].d
arg1[6].b = 1

if (r8 != 0)
    int32_t r9_1 = 0
    
    if (r8 s> 0)
        int16_t* rcx = nullptr
        
        do
            int64_t r8_1 = *arg1
            int16_t rdx_1 = *(rcx + r8_1)
            int16_t rax_1
            
            if (rdx_1 s>= 0x8005)
                rax_1 = 0x7ffb
                
                if (rdx_1 s< 0x7ffb)
                    rax_1 = rdx_1
            else
                rax_1 = -0x7ffb
            
            *(rcx + r8_1) = rax_1
            r9_1 += 1
            r8 = arg1[2].d
            rcx = &rcx[1]
        while (r9_1 s< r8)
    
    sub_141e6b7b0(&arg1[0xb], *arg1, r8 * 2, arg1[3].d, *(arg1 + 0x1c))
    
    if (arg1[0xc].d != 0)
        arg1[6].b = 2
        int64_t* rax_3 = __crt_deferred_errno_cache::get(&data_143db7b00)
        int16_t* const rdx_3
        
        if (arg1[8].d == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = arg1[7]
        
        int64_t* rax_5 = (*(*rax_3 + 0xd0))(rax_3, rdx_3, 0, 0)
        
        if (rax_5 != 0)
            uint128_t zmm1 = zx.o(arg1[0xc].d)
            uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x6c)))
            int32_t rsi = 0
            zmm1.d = _mm_cvtepi32_ps(zmm1).d f/ zmm0.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm0.d = -0.5f f- zmm1.d
            int32_t r15_2 = neg.d(int.d(zmm0.d) s>> 1)
            
            if (r15_2 s<= 0)
            label_1422f2080:
                (**rax_5)(rax_5, 1)
                arg1[6].b = 3
            else
                while (true)
                    int32_t rax_6 = *(arg1 + 0x6c)
                    int32_t rcx_4 = rax_6 * rsi
                    int32_t rdi_2 = arg1[0xc].d - rcx_4
                    
                    if (rax_6 s<= rdi_2)
                        rdi_2 = rax_6
                    
                    if ((*(*rax_5 + 0x28))(rax_5, sx.q(rcx_4) + arg1[0xb], sx.q(rdi_2)) == 0)
                        int32_t rax_11 = *(arg1 + 0x64)
                        arg1[0xc].d = 0
                        
                        if (rax_11 s< 0 && rax_11 != 0)
                            sub_1405c5510(&arg1[0xb], 0)
                        
                        (**rax_5)(rax_5, 1)
                        arg1[6].b = 4
                        break
                    
                    arg1[0xd].d
                    arg1[0xd].d += rdi_2
                    rsi += 1
                    
                    if (rsi s>= r15_2)
                        goto label_1422f2080
            
            return 
        
        int32_t rax = *(arg1 + 0x64)
        arg1[0xc].d = 0
        
        if (rax s< 0 && rax != 0)
            sub_1405c5510(&arg1[0xb], 0)

arg1[6].b = 4
