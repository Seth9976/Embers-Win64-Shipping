// 函数: sub_142c31a10
// 地址: 0x142c31a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3.d = arg3.d f* 96f
uint32_t rax = zx.d(arg1[1])
uint32_t r9_1 = zx.d(*arg1) << 8
int32_t i = 0
arg3.d = arg3.d f/ 72f

if (r9_1 != neg.d(rax))
    do
        uint64_t i_1 = zx.q(i)
        int128_t* const rdx = &data_14369a5d0
        void* rax_1 = &arg1[8 + (i_1 << 3)]
        
        if (rax_1 u>= &arg1[8])
            rdx = rax_1
        
        uint128_t zmm0
        zmm0.d = _mm_cvtepi32_ps(zx.o((((((zx.d(*rdx) << 8) + zx.d(*(rdx + 1))) << 8)
            + zx.d(*(rdx + 2))) << 8) + zx.d(*(rdx + 3)))).d f* 1.52587891e-05f
        zmm0.d f- 0f
        
        if (not(is_unordered.d(zmm0.d, 0f)) && zmm0.d f== 0f)
            void* rdi_1 = &arg1[8 + (i_1 << 3)]
            
            if (rdi_1 u< &arg1[8])
                rdi_1 = &data_14369a5d0
            label_142c31ae6:
                uint32_t rax_6 = zx.d(arg1[3])
                uint32_t rdx_2 = zx.d(arg1[2]) << 8
                uint32_t rdx_3 = rdx_2 + rax_6
                
                if (rdx_2 != neg.d(rax_6))
                    if (rdx_3 == 1)
                        uint64_t r8 = zx.q(*(rdi_1 + 7))
                        int64_t rax_9 = (zx.q(*(rdi_1 + 6)) << 8) + arg2
                        return zx.q(sx.d(zx.w(*(r8 + rax_9 + 1)) + zx.w(*(r8 + rax_9)) * 0x100))
                    
                    int32_t j = 0
                    int64_t r11_2 = zx.q(arg1[7])
                        + ((zx.q(arg1[6]) + (((zx.q(arg1[4]) << 8) + zx.q(arg1[5])) << 8)) << 8)
                        + arg2
                    
                    if (rdx_3 - 1 u>= 4)
                        int32_t r9_3 = 2
                        
                        do
                            int128_t* const r10_2
                            
                            if (j u< rdx_3)
                                r10_2 = r11_2 + (zx.q(j) << 2)
                            else
                                r10_2 = &data_14369a5d0
                            
                            zmm0.d = _mm_cvtepi32_ps(zx.o((((((zx.d(*r10_2) << 8)
                                + zx.d(*(r10_2 + 1))) << 8) + zx.d(*(r10_2 + 2))) << 8)
                                + zx.d(*(r10_2 + 3)))).d f* 1.52587891e-05f
                            
                            if (zmm0.d f>= arg3.d)
                                goto label_142c31cf2
                            
                            uint64_t rax_20 = zx.q(r9_3 - 1)
                            int128_t* const r10_3 = &data_14369a5d0
                            
                            if (rax_20.d u< rdx_3)
                                r10_3 = r11_2 + (rax_20 << 2)
                            
                            zmm0.d = _mm_cvtepi32_ps(zx.o((((((zx.d(*r10_3) << 8)
                                + zx.d(*(r10_3 + 1))) << 8) + zx.d(*(r10_3 + 2))) << 8)
                                + zx.d(*(r10_3 + 3)))).d f* 1.52587891e-05f
                            
                            if (zmm0.d f>= arg3.d)
                                j += 1
                                goto label_142c31cf2
                            
                            int128_t* const r10_4
                            
                            if (r9_3 u< rdx_3)
                                r10_4 = r11_2 + (zx.q(r9_3) << 2)
                            else
                                r10_4 = &data_14369a5d0
                            
                            zmm0.d = _mm_cvtepi32_ps(zx.o((((((zx.d(*r10_4) << 8)
                                + zx.d(*(r10_4 + 1))) << 8) + zx.d(*(r10_4 + 2))) << 8)
                                + zx.d(*(r10_4 + 3)))).d f* 1.52587891e-05f
                            
                            if (zmm0.d f>= arg3.d)
                                j += 2
                                goto label_142c31cf2
                            
                            uint64_t rax_28 = zx.q(r9_3 + 1)
                            int128_t* const r10_5 = &data_14369a5d0
                            
                            if (rax_28.d u< rdx_3)
                                r10_5 = r11_2 + (rax_28 << 2)
                            
                            zmm0.d = _mm_cvtepi32_ps(zx.o((((((zx.d(*r10_5) << 8)
                                + zx.d(*(r10_5 + 1))) << 8) + zx.d(*(r10_5 + 2))) << 8)
                                + zx.d(*(r10_5 + 3)))).d f* 1.52587891e-05f
                            
                            if (zmm0.d f>= arg3.d)
                                j += 3
                                goto label_142c31cf2
                            
                            j += 4
                            r9_3 += 4
                        while (j u< rdx_3 - 4)
                    
                    for (; j u< rdx_3 - 1; j += 1)
                        int128_t* const r9_4
                        
                        if (j u< rdx_3)
                            r9_4 = r11_2 + (zx.q(j) << 2)
                        else
                            r9_4 = &data_14369a5d0
                        
                        zmm0.d = _mm_cvtepi32_ps(zx.o((((((zx.d(*r9_4) << 8) + zx.d(*(r9_4 + 1)))
                            << 8) + zx.d(*(r9_4 + 2))) << 8) + zx.d(*(r9_4 + 3)))).d f* 1.52587891e-05f
                        
                        if (zmm0.d f>= arg3.d)
                            break
                    
                label_142c31cf2:
                    int32_t rdx_6 = j - 1
                    
                    if (j == 0)
                        rdx_6 = 0
                    
                    double _X = fconvert.d(sub_142c32670(arg1, rdx_6, arg3, rdi_1, arg2).d)
                    round(_X)
                    return zx.q(int.d(_X))
            else if (rdi_1 != 0)
                goto label_142c31ae6
            
            break
        
        i += 1
    while (i u< r9_1 + rax)

return 0
