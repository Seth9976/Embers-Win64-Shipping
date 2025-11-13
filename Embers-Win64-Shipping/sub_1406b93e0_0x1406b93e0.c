// 函数: sub_1406b93e0
// 地址: 0x1406b93e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
int64_t* r12 = arg3
int64_t* r13 = arg2
int32_t rax = *(arg1 + 0x1c0)

if (rax != 2 && rax != 5)
    while (true)
        while (*(arg1 + 0x478) == *(arg1 + 0x484))
            int64_t r8_1 = av_gettime_relative() - *(arg1 + 0x788)
            int64_t rax_5
            int64_t rdx_1
            rdx_1:rax_5 =
                sx.o(divu.dp.q(0:(zx.q(*(arg1 + 0x758)) * 0xf4240), zx.q(*(arg1 + 0x754))))
            
            if (r8_1 s> (rax_5 - rdx_1) s>> 1)
                return 0xffffffff
            
            av_usleep(0x3e8)
        
        EnterCriticalSection(arg1 + 0x488)
        
        if (*(arg1 + 0x478) - *(arg1 + 0x484) s<= 0)
            while (*(*(arg1 + 0x4b8) + 0x20) == 0)
                LeaveCriticalSection(arg1 + 0x488)
                int64_t* rcx_4 = *(arg1 + 0x4b0)
                (*(*rcx_4 + 0x20))(rcx_4, 0xffffffff, 0)
                EnterCriticalSection(arg1 + 0x488)
                
                if (*(arg1 + 0x478) - *(arg1 + 0x484) s> 0)
                    break
        
        LeaveCriticalSection(arg1 + 0x488)
        
        if (*(*(arg1 + 0x4b8) + 0x20) != 0)
            break
        
        int64_t* rsi_1 = *(arg1 + 0x3f0
            + (sx.q(mods.dp.d(sx.q(*(arg1 + 0x470) + *(arg1 + 0x484)), *(arg1 + 0x47c))) << 3))
        
        if (rsi_1 == 0)
            break
        
        sub_1406be560(arg1 + 0x3f0)
        
        if (rsi_1[5].d == *(arg1 + 0x4e4))
            void* rax_21 = *rsi_1
            int32_t var_98_1 = 1
            int32_t rbp_1 = av_samples_get_buffer_size(0, zx.q(*(rax_21 + 0x1bc)), 
                zx.q(*(rax_21 + 0x70)), zx.q(*(rax_21 + 0x74)), 1)
            void* rcx_8 = *rsi_1
            int64_t rax_23 = *(rcx_8 + 0x118)
            int32_t rax_24
            
            if (rax_23 != 0)
                rax_24 = av_get_channel_layout_nb_channels(rax_23)
                rcx_8 = *rsi_1
            
            int64_t r15_1
            
            if (rax_23 == 0 || *(rcx_8 + 0x1bc) != rax_24)
                r15_1 = av_get_default_channel_layout(zx.q(*(rcx_8 + 0x1bc)))
                rcx_8 = *rsi_1
            else
                r15_1 = *(rcx_8 + 0x118)
            
            int32_t r14_1 = *(rcx_8 + 0x70)
            int32_t rdi_2 = r14_1
            char rcx_11 = *(arg1 + 0x708)
            uint128_t zmm0_1
            uint32_t zmm1[0x4]
            uint128_t zmm2
            int64_t rax_26
            
            if (rcx_11 != 1)
                if (rcx_11 != 0)
                label_1406b9607:
                    rax_26 = 0x628
                label_1406b9610:
                    uint128_t zmm0_2 = sub_1406bc060(arg1 + rax_26)
                    uint32_t zmm3[0x4] = sub_1406bc060(arg1 + 0x5c8)
                    zmm3[0].q = zmm3[0].q f- zmm0_2.q
                    
                    if (is_unordered.q(zmm3[0].q, zmm3[0].q) != 1)
                        zmm2 = 0x7fffffffffffffff
                        zmm1 = _mm_and_ps(zmm3, zmm2)
                    
                    if (is_unordered.q(zmm3[0].q, zmm3[0].q) == 1 || zmm1[0].q f>= 10.0)
                        *(arg1 + 0x7a0) = 0
                        *(arg1 + 0x7a8) = 0
                    else
                        uint32_t zmm4_1[0x4] = zx.o(*(arg1 + 0x790))
                        zmm4_1[0].q = zmm4_1[0].q f* *(arg1 + 0x7a8)
                        zmm4_1[0].q = zmm4_1[0].q f+ zmm3[0].q
                        *(arg1 + 0x7a8) = zmm4_1.q
                        int32_t rax_28 = *(arg1 + 0x7a0)
                        
                        if (rax_28 s>= 0x14)
                            zmm0_1.q = 0x3ff0000000000000 f- zmm4_1[0].q
                            zmm0_1.q = zmm0_1.q f* zmm4_1[0].q
                            
                            if (not(_mm_and_ps(zmm0_1, zmm2).q f< *(arg1 + 0x798)))
                                zmm0_1.q = float.d(zx.q(*(arg1 + 0x718)))
                                zmm0_1.q = zmm0_1.q f* zmm3[0].q
                                rdi_2 = int.d(zmm0_1.q) + r14_1
                                int32_t r8_5 = r14_1 * 0x5a s/ 0x64
                                int32_t rdx_8 = r14_1 * 0x6e s/ 0x64
                                
                                if (rdi_2 s< r8_5)
                                    rdi_2 = r8_5
                                else if (rdi_2 s> rdx_8)
                                    rdi_2 = rdx_8
                        else
                            *(arg1 + 0x7a0) = rax_28 + 1
                else if (*(arg1 + 0x220) == 0)
                    if (*(arg1 + 0x228) == 0)
                        goto label_1406b9607
                    
                    goto label_1406b9600
            else if (*(arg1 + 0x228) != 0)
            label_1406b9600:
                rax_26 = 0x5f8
                goto label_1406b9610
            char rax_33 = *(arg1 + 0x708)
            zmm6 = 0x416312d000000000
            zmm7 = 0x3fe0000000000000
            
            if (rax_33 != 1)
                if (rax_33 == 0 && *(arg1 + 0x220) != 0)
                    goto label_1406b9758
            else if (*(arg1 + 0x228) == 0)
            label_1406b9758:
                zmm0_1.q = rsi_1[6] f* zmm6.q
                zmm0_1.q = zmm0_1.q f+ zmm7.q
                int64_t rcx_18 = int.q(zmm0_1.q)
                
                if (rcx_18 != -0x8000000000000000)
                    zmm1 = zx.o(0)
                    zmm1[0].q = float.d(rcx_18)
                    
                    if (not(zmm1[0].q f== zmm0_1.q))
                        zmm0_1.q = float.d(rcx_18
                            - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
                
                *(arg1 + 0x1c8) = int.q(zmm0_1.q)
            
            int64_t* rdx_9 = *rsi_1
            int32_t var_90
            int32_t var_88
            int32_t var_80
            int64_t var_78
            
            if (*(rdx_9 + 0x74) != *(arg1 + 0x728) || r15_1 != *(arg1 + 0x720)
                || rdx_9[0x22].d != *(arg1 + 0x718))
            label_1406b97e1:
                swr_free(arg1 + 0x658, rdx_9)
                void* rax_39 = *rsi_1
                var_78 = 0
                var_80 = 0
                var_88 = *(rax_39 + 0x110)
                var_90 = *(rax_39 + 0x74)
                var_98_1.q = r15_1
                int64_t rax_40 = swr_alloc_set_opts(0, *(arg1 + 0x748), zx.q(*(arg1 + 0x750)), 
                    zx.q(*(arg1 + 0x740)), var_98_1, var_90, var_88, 0, 0)
                *(arg1 + 0x658) = rax_40
                int32_t rax_41
                
                if (rax_40 != 0)
                    rax_41 = swr_init(rax_40)
                
                if (rax_40 != 0 && rax_41 s>= 0)
                    *(arg1 + 0x720) = r15_1
                    *(arg1 + 0x714) = *(*rsi_1 + 0x1bc)
                    *(arg1 + 0x718) = *(*rsi_1 + 0x110)
                    *(arg1 + 0x728) = *(*rsi_1 + 0x74)
                    rdx_9 = *rsi_1
                label_1406b987c:
                    
                    if (*(arg1 + 0x658) != 0)
                        goto label_1406b988a
                    
                    *(arg1 + 0x760) = *rdx_9
                label_1406b99d5:
                    zmm2 = zx.o(rsi_1[6])
                    int64_t rax_61
                    rax_61.b = is_unordered.q(zmm2.q, zmm2.q)
                    
                    if (rax_61.b == 1)
                        zmm1 = -0x8000000000000
                    else
                        void* rax_62 = *rsi_1
                        zmm1 = _mm_cvtepi32_pd(zx.o(*(rax_62 + 0x70))[0].q)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q(*(rax_62 + 0x110)))
                        zmm1[0].q = zmm1[0].q f/ zmm0_1.q
                        zmm1[0].q = zmm1[0].q f+ zmm2.q
                    
                    *(arg1 + 0x780) = zmm1.q
                    *(arg1 + 0x778) = rsi_1[5].d
                    zmm0_1.q = zmm1.q f* zmm6.q
                    zmm0_1.q = zmm0_1.q f+ zmm7.q
                    int64_t rcx_35 = int.q(zmm0_1.q)
                    
                    if (rcx_35 != -0x8000000000000000)
                        zmm1 = zx.o(0)
                        zmm1[0].q = float.d(rcx_35)
                        
                        if (not(zmm1[0].q f== zmm0_1.q))
                            zmm0_1.q = float.d(rcx_35
                                - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
                    
                    *r13 = int.q(zmm0_1.q)
                    zmm0_1.q = rsi_1[7] f* zmm6.q
                    zmm0_1.q = zmm0_1.q f+ zmm7.q
                    int64_t rdx_17 = int.q(zmm0_1.q)
                    
                    if (rdx_17 != -0x8000000000000000)
                        zmm1 = zx.o(0)
                        zmm1[0].q = float.d(rdx_17)
                        
                        if (not(zmm1[0].q f== zmm0_1.q))
                            zmm0_1.q = float.d(rdx_17
                                - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
                    
                    *r12 = int.q(zmm0_1.q)
                    return zx.q(rbp_1)
                
                swr_free(arg1 + 0x658)
            else
                if (rdi_2 == rdx_9[0xe].d)
                    goto label_1406b987c
                
                if (*(arg1 + 0x658) == 0)
                    goto label_1406b97e1
                
            label_1406b988a:
                int64_t r13_1 = rdx_9[0xc]
                int32_t rbp_2 =
                    (divs.dp.q(sx.o(zx.q(*(arg1 + 0x740)) * sx.q(rdi_2)), sx.q(rdx_9[0x22].d))).d
                    + 0x100
                int32_t rax_49 = av_samples_get_buffer_size(0, zx.q(*(arg1 + 0x73c)), zx.q(rbp_2), 
                    zx.q(*(arg1 + 0x750)), 0, var_90, var_88, var_80, var_78)
                
                if (rax_49 s>= 0)
                    void* rcx_28 = *rsi_1
                    int32_t r11_1 = *(rcx_28 + 0x70)
                    int32_t rax_55
                    
                    if (rdi_2 != r11_1)
                        int32_t r9_4 = *(arg1 + 0x740)
                        int32_t r10_2 = *(rcx_28 + 0x110)
                        rax_55 = swr_set_compensation(*(arg1 + 0x658), 
                            zx.q(divu.dp.d(0:((rdi_2 - r11_1) * r9_4), r10_2)), 
                            zx.q(divu.dp.d(0:(r9_4 * rdi_2), r10_2)))
                    
                    if (rdi_2 == r11_1 || rax_55 s>= 0)
                        av_fast_malloc(arg1 + 0x768, arg1 + 0x774, sx.q(rax_49))
                        
                        if (*(arg1 + 0x768) == 0)
                            return 0xfffffff4
                        
                        int32_t rax_58 = swr_convert(*(arg1 + 0x658), arg1 + 0x768, zx.q(rbp_2), 
                            r13_1, *(*rsi_1 + 0x70))
                        
                        if (rax_58 s>= 0)
                            if (rax_58 == rbp_2 && swr_init(*(arg1 + 0x658)) s< 0)
                                swr_free(arg1 + 0x658)
                            
                            *(arg1 + 0x760) = *(arg1 + 0x768)
                            rbp_1 = av_get_bytes_per_sample(zx.q(*(arg1 + 0x750))).d *
                                *(arg1 + 0x73c) * rax_58
                            r12 = arg3
                            r13 = arg2
                            goto label_1406b99d5
            break

return 0xffffffff
