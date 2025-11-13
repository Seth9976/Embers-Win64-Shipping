// 函数: sub_142609f90
// 地址: 0x142609f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
uint64_t result

if (arg6 != 0)
    int32_t var_144
    uint32_t zmm0[0x4]
    uint32_t zmm8[0x4]
    uint32_t zmm13[0x4]
    uint32_t zmm14[0x4]
    
    if ((arg7 & 0xfffffffb) == 0)
        zmm0 = *(arg2 + 8)
        zmm13 = *(arg3 + 8)
        
        if (zmm0[0] f>= zmm13[0])
        label_14260a091:
            zmm8 = *(arg3 + 4)
            zmm14 = zmm13
            zmm13 = zmm0
            zmm0 = *(arg2 + 4)
        else
            zmm8 = *(arg2 + 4)
            zmm14 = zmm0
            zmm0 = *(arg3 + 4)
    else if (((arg7 - 2) & 0xfffffffb) != 0)
        zmm14 = var_144
        zmm0 = var_144
        zmm13 = var_144
        zmm8 = var_144
    else
        zmm0 = *arg2
        zmm13 = *arg3
        
        if (zmm0[0] f>= zmm13[0])
            goto label_14260a091
        
        zmm8 = *(arg2 + 4)
        zmm14 = zmm0
        zmm0 = *(arg3 + 4)
    
    uint32_t var_140_1 = zmm8[0]
    int32_t zmm3 = (zx.o(0)).d
    uint32_t var_13c_1 = zmm0[0]
    uint32_t zmm4[0x4]
    
    if ((arg7 & 0xfffffffb) == 0)
        zmm4 = *arg2
    else if (((arg7 - 2) & 0xfffffffb) == 0)
        zmm4 = *(arg2 + 8)
    else
        zmm4 = zx.o(0)
    
    int64_t rsi_1 = 0
    float zmm1 = *(arg2 + 4)
    char r8 = (*(arg1 + 0xa0)).b
    void* r13_1 = *(arg6 + 8)
    int16_t r9 = arg7.w | 0x8000
    uint32_t var_e8 = (*arg2)[0]
    int32_t result_1 = 0
    int64_t rax_4
    int64_t rdx
    rdx:rax_4 = muls.dp.q(0x2e8ba2e8ba2e8ba3, arg6 - *(arg1 + 0x90))
    uint32_t var_138_1 = zmm4[0]
    float var_e4_1 = zmm1
    uint32_t var_e0 = (*(arg2 + 8))[0]
    int16_t var_148_1 = r9
    int64_t rdx_1 = rdx s>> 5
    int32_t i = 0
    int32_t result_2 = 0
    int64_t rdi_6 =
        zx.q((rdx_1 u>> 0x3f).d + rdx_1.d) << r8 | zx.q(*arg6) << ((*(arg1 + 0x9c)).b + r8)
    
    if (*(r13_1 + 0x18) s> 0)
        uint32_t zmm2[0x4] = 0x7fffffff
        int64_t rcx_6 = 0
        uint32_t zmm6[0x4]
        uint32_t var_38_1[0x4] = zmm6
        uint32_t zmm7[0x4] = var_144
        uint32_t zmm9[0x4] = var_144
        uint32_t zmm10[0x4]
        uint32_t var_78_1[0x4] = zmm10
        uint32_t zmm11[0x4] = var_144
        uint32_t zmm12[0x4] = var_144
        int64_t var_120_1 = 0
        
        do
            void* rcx_7 = rcx_6 + *(arg6 + 0x10)
            void* var_130_1 = rcx_7
            uint32_t r10_1 = zx.d(*(rcx_7 + 0x1e))
            uint64_t r12_1 = zx.q(r10_1)
            
            if (r10_1 != 0)
                int32_t rbp_1 = 1
                void* rdi_7 = rcx_7 + 4
                
                while (true)
                    if (*(rdi_7 + 0xc) == r9)
                        int64_t r8_1 = *(arg6 + 0x18)
                        uint64_t r9_1 = zx.q(*rdi_7) * 3
                        uint64_t rdx_6 =
                            zx.q(*(rcx_7 + (sx.q(mods.dp.d(sx.q(rbp_1), r10_1)) << 1) + 4)) * 3
                        
                        if ((arg7 & 0xfffffffb) == 0)
                            zmm1 = *(r8_1 + (r9_1 << 2))
                        else if (((arg7 - 2) & 0xfffffffb) == 0)
                            zmm1 = *(r8_1 + (r9_1 << 2) + 8)
                        else
                            zmm1 = zmm3
                        
                        zmm4[0] = zmm4[0] f- zmm1
                        
                        if (not(_mm_and_ps(zmm4, zmm2)[0] f> 0.00999999978f))
                            if ((arg7 & 0xfffffffb) == 0)
                                zmm0 = *(r8_1 + (r9_1 << 2) + 8)
                                zmm7 = *(r8_1 + (rdx_6 << 2) + 8)
                            label_14260a2b3:
                                
                                if (zmm0[0] f>= zmm7[0])
                                    zmm12 = *(r8_1 + (r9_1 << 2) + 4)
                                    zmm9 = zmm7
                                    zmm11 = *(r8_1 + (rdx_6 << 2) + 4)
                                    zmm7 = zmm0
                                else
                                    zmm12 = *(r8_1 + (rdx_6 << 2) + 4)
                                    zmm9 = zmm0
                                    zmm11 = *(r8_1 + (r9_1 << 2) + 4)
                            else if (((arg7 - 2) & 0xfffffffb) == 0)
                                zmm0 = *(r8_1 + (r9_1 << 2))
                                zmm7 = *(r8_1 + (rdx_6 << 2))
                                goto label_14260a2b3
                            
                            zmm10 = *(r13_1 + 0x50)
                            zmm6 = _mm_min_ss(zmm7[0], zmm13[0])
                            int32_t temp0_3 = _mm_max_ss(zmm9[0], zmm14[0])
                            zmm6[0] = zmm6[0] f- temp0_3
                            
                            if (not(zmm6[0] f< 0.00999999978f))
                                zmm4 = var_13c_1
                                zmm3 = zmm8[0]
                                zmm4[0] = zmm4[0] f- zmm8[0]
                                zmm13[0] = zmm13[0] f- zmm14[0]
                                zmm12[0] = zmm12[0] f- zmm11[0]
                                zmm1 = zmm14[0]
                                zmm4[0] = zmm4[0] f/ zmm13[0]
                                zmm1 = zmm1 f* zmm4[0]
                                zmm7[0] = zmm7[0] f- zmm9[0]
                                zmm3 = zmm3 f- zmm1
                                zmm1 = zmm9[0]
                                zmm12[0] = zmm12[0] f/ zmm7[0]
                                zmm4[0] = zmm4[0] f* zmm6[0]
                                zmm1 = zmm1 f* zmm12[0]
                                zmm4[0] = zmm4[0] f* temp0_3
                                zmm4[0] = zmm4[0] f+ zmm3
                                zmm11[0] = zmm11[0] f- zmm1
                                zmm1 = zmm12[0]
                                zmm12[0] = zmm12[0] f* zmm6[0]
                                zmm4[0] = zmm4[0] f+ zmm3
                                zmm12[0] = zmm12[0] f+ zmm11[0]
                                zmm3 = (zx.o(0)).d
                                zmm1 = zmm1 f* temp0_3 f+ zmm11[0]
                                zmm12[0] = zmm12[0] f- zmm4[0]
                                zmm1 = zmm1 f- zmm4[0]
                                zmm12[0] = zmm12[0] f* zmm1
                                
                                if (zmm12[0] f< 0f)
                                label_14260a4d7:
                                    uint32_t var_118_1
                                    
                                    if (zmm14[0] f<= zmm9[0])
                                        var_118_1 = zmm9[0]
                                    else
                                        var_118_1 = zmm14[0]
                                    
                                    if (zmm13[0] f>= zmm7[0])
                                        uint32_t var_114_2 = zmm7[0]
                                    else
                                        uint32_t var_114_1 = zmm13[0]
                                    
                                    int64_t var_110_1 = sx.q(i) | rdi_6
                                    sub_142616170(arg8, arg8[1].d + 1)
                                    result_1 = result_2 + 1
                                    result_2 = result_1
                                    *(*arg8 + sx.q(arg8[1].d) * 0x10 - 0x10) = var_118_1.o
                                    break
                                
                                char rax_11 = 2
                                zmm12[0] = zmm12[0] f* zmm12[0]
                                zmm10[0] = zmm10[0] f+ zmm10[0]
                                zmm10[0] = zmm10[0] f* zmm10[0]
                                
                                if (zmm10[0] f< zmm1 * zmm1)
                                    rax_11 = 0
                                
                                char rdx_7 = rax_11 | 4
                                
                                if (zmm10[0] f< zmm12[0])
                                    rdx_7 = rax_11
                                
                                if (rdx_7 == 0)
                                    zmm2 = 0x7fffffff
                                else
                                    if (((rdx_7 - 2) & 0xfd) != 0)
                                        goto label_14260a4d7
                                    
                                    zmm1 = *(r8_1 + (r9_1 << 2) + 4)
                                    uint32_t var_f8 = (*(r8_1 + (r9_1 << 2)))[0]
                                    uint32_t var_f0 = (*(r8_1 + (r9_1 << 2) + 8))[0]
                                    float var_f4_1 = zmm1
                                    int32_t* rax_14
                                    uint32_t* rcx_10
                                    
                                    if ((arg7 & 0xfffffffb) == 0)
                                        rax_14 = &var_e0
                                        rcx_10 = &var_f0
                                    else
                                        rax_14 = &var_e8
                                        rcx_10 = &var_f8
                                    
                                    if (rdx_7 != 2)
                                        zmm0 = _mm_min_ss(zmm7[0], zmm13[0])
                                    else
                                        zmm0 = _mm_max_ss(zmm9[0], zmm14[0])
                                    
                                    *rcx_10 = zmm0[0]
                                    *rax_14 = zmm0[0]
                                    int128_t zmm0_1
                                    int512_t zmm6_1
                                    zmm0_1, zmm6_1 = sub_14260f7a0(arg6, i, &var_f8)
                                    zmm6_1.o = zmm0_1
                                    zmm0, zmm6, zmm7, zmm9, zmm10, zmm11, zmm12 =
                                        sub_14260f7a0(arg4, arg5, &var_e8)
                                    zmm2 = 0x7fffffff
                                    zmm0[0] = zmm0[0] f- zmm6[0]
                                    
                                    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f<= zmm10[0])
                                        goto label_14260a4d7
                                    
                                    zmm3 = (zx.o(0)).d
                                    r10_1 = r12_1.d
                        
                        r9 = var_148_1
                        rcx_7 = var_130_1
                    
                    rbp_1 += 1
                    rsi_1 += 1
                    rdi_7 += 2
                    
                    if (rsi_1 s>= r12_1)
                        result_1 = result_2
                        break
                    
                    zmm4 = var_138_1
                    zmm8 = var_140_1
            
            i += 1
            r13_1 = *(arg6 + 8)
            rcx_6 = var_120_1 + 0x20
            zmm2 = 0x7fffffff
            zmm3 = (zx.o(0)).d
            zmm4 = var_138_1
            rsi_1 = 0
            zmm8 = var_140_1
            r9 = var_148_1
            var_120_1 = rcx_6
        while (i s< *(r13_1 + 0x18))
    
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_168)
return result
