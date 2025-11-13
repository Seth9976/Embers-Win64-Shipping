// 函数: sub_1426142f0
// 地址: 0x1426142f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg2 + 0x40)
int64_t r12 = sx.q(arg6)
float zmm6[0x4]
float var_38[0x4] = zmm6
int128_t zmm7
int128_t var_48 = zmm7
int128_t zmm8
int128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
int128_t zmm10
int128_t var_78 = zmm10
int32_t r11
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (r10 == 0)
    char r8_3 = (*(arg1 + 0xa0)).b
    r11 = 0
    int32_t i = 0
    int64_t rax_12
    int64_t rdx_4
    rdx_4:rax_12 = muls.dp.q(0x2e8ba2e8ba2e8ba3, arg2 - *(arg1 + 0x90))
    int64_t rdx_5 = rdx_4 s>> 5
    int64_t r10_6 =
        zx.q((rdx_5 u>> 0x3f).d + rdx_5.d) << r8_3 | zx.q(*arg2) << ((*(arg1 + 0x9c)).b + r8_3)
    int64_t var_d0_1 = r10_6
    
    if (*(*(arg2 + 8) + 0x18) s> 0)
        float zmm11[0x4]
        float var_88_1[0x4] = zmm11
        int64_t rsi_4 = 0
        float zmm12[0x4]
        float var_98_1[0x4] = zmm12
        int64_t r13_2 = 0
        float zmm13[0x4]
        float var_a8_1[0x4] = zmm13
        float zmm14[0x4]
        float var_b8_1[0x4] = zmm14
        float zmm15[0x4]
        float var_c8_1[0x4] = zmm15
        
        do
            void* r9_3 = *(arg2 + 0x10) + r13_2
            
            if (*(r9_3 + 0x1f) u< 0x40 && (*(r9_3 + 0x1c) != 0 || arg7 == 0))
                int64_t rdx_8 = *(arg2 + 0x18)
                void* rbx_2 = 1
                uint64_t r8_4 = zx.q(*(r9_3 + 0x1e))
                uint64_t rcx_15 = zx.q(*(r9_3 + 4)) * 3
                zmm5 = *(rdx_8 + (rcx_15 << 2) + 8)
                zmm4 = *(rdx_8 + (rcx_15 << 2) + 4)
                zmm3 = zmm5
                zmm13 = *(rdx_8 + (rcx_15 << 2))
                zmm15 = zmm4
                int32_t arg_10 = zmm4[0]
                zmm14 = zmm13
                float var_d8_1 = zmm5[0]
                float var_d4_2 = zmm5[0]
                uint64_t rax_14
                
                if (r8_4 u> 1)
                    if (r8_4 u>= 5)
                        void* r12_2 = r9_3 + 8
                        int64_t j_3 = ((r8_4 - 5) u>> 2) + 1
                        rbx_2 = (j_3 << 2) + 1
                        float temp0_30[0x4]
                        int64_t j
                        
                        do
                            uint64_t rax_15 = zx.q(*(r12_2 - 2))
                            r12_2 += 8
                            uint64_t rcx_16 = rax_15 * 3
                            uint64_t rax_16 = zx.q(*(r12_2 - 8))
                            zmm11 = *(rdx_8 + (rcx_16 << 2) + 4)
                            zmm9 = *(rdx_8 + (rcx_16 << 2))
                            zmm12 = *(rdx_8 + (rcx_16 << 2) + 8)
                            float temp0_7[0x4] = _mm_min_ss(zmm13[0], zmm9.d)
                            uint64_t rcx_17 = rax_16 * 3
                            uint64_t rax_17 = zx.q(*(r12_2 - 6))
                            zmm8 = *(rdx_8 + (rcx_17 << 2) + 4)
                            float temp0_8[0x4] = _mm_max_ss(var_d4_2[0], zmm12[0])
                            zmm6 = *(rdx_8 + (rcx_17 << 2))
                            float temp0_9[0x4] = _mm_max_ss(zmm14[0], zmm9.d)
                            zmm10 = *(rdx_8 + (rcx_17 << 2) + 8)
                            float temp0_10[0x4] = _mm_max_ss(zmm15[0], zmm11[0])
                            uint64_t rcx_18 = rax_17 * 3
                            rax_14 = zx.q(*(r12_2 - 4))
                            zmm5 = *(rdx_8 + (rcx_18 << 2) + 4)
                            float temp0_11[0x4] = _mm_min_ss(temp0_7[0], zmm6[0])
                            zmm4 = *(rdx_8 + (rcx_18 << 2))
                            float temp0_12[0x4] = _mm_max_ss(temp0_8[0], zmm10.d)
                            zmm7 = *(rdx_8 + (rcx_18 << 2) + 8)
                            float temp0_13[0x4] = _mm_max_ss(temp0_9[0], zmm6[0])
                            uint64_t rcx_19 = rax_14 * 3
                            float temp0_14[0x4] = _mm_max_ss(temp0_10[0], zmm8.d)
                            float temp0_15[0x4] = _mm_min_ss(temp0_11[0], zmm4[0])
                            float temp0_16[0x4] = _mm_max_ss(temp0_12[0], zmm7.d)
                            float temp0_17[0x4] = _mm_max_ss(temp0_13[0], zmm4[0])
                            float temp0_18[0x4] = __minss_xmmss_memss(zmm11[0], arg_10)
                            float temp0_19[0x4] = _mm_max_ss(temp0_14[0], zmm5[0])
                            zmm13 = __minss_xmmss_memss(temp0_15[0], *(rdx_8 + (rcx_19 << 2)))
                            zmm3 = __maxss_xmmss_memss(temp0_16[0], *(rdx_8 + (rcx_19 << 2) + 8))
                            zmm14 = __maxss_xmmss_memss(temp0_17[0], *(rdx_8 + (rcx_19 << 2)))
                            float temp0_23[0x4] = _mm_min_ss(temp0_18[0], zmm8.d)
                            zmm15 = __maxss_xmmss_memss(temp0_19[0], *(rdx_8 + (rcx_19 << 2) + 4))
                            var_d4_2 = zmm3[0]
                            arg_10 = __minss_xmmss_memss(_mm_min_ss(temp0_23[0], zmm5[0])[0], 
                                *(rdx_8 + (rcx_19 << 2) + 4))[0]
                            temp0_30 = __minss_xmmss_memss(
                                _mm_min_ss(
                                    _mm_min_ss(__minss_xmmss_memss(zmm12[0], var_d8_1)[0], zmm10.d)[
                                        0], 
                                    zmm7.d)[0], 
                                *(rdx_8 + (rcx_19 << 2) + 8))
                            var_d8_1 = temp0_30[0]
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                        zmm4 = arg_10
                        zmm5 = temp0_30
                        r10_6 = var_d0_1
                        r12 = sx.q(arg6)
                    
                    if (rbx_2 s< r8_4)
                        void* r9_5 = r9_3 + (rbx_2 << 1) + 4
                        void* j_2 = r8_4 - rbx_2
                        void* j_1
                        
                        do
                            rax_14 = zx.q(*r9_5)
                            r9_5 += 2
                            uint64_t rcx_20 = rax_14 * 3
                            zmm13 = __minss_xmmss_memss(zmm13[0], *(rdx_8 + (rcx_20 << 2)))
                            zmm4 = __minss_xmmss_memss(zmm4[0], *(rdx_8 + (rcx_20 << 2) + 4))
                            zmm5 = __minss_xmmss_memss(zmm5[0], *(rdx_8 + (rcx_20 << 2) + 8))
                            zmm14 = __maxss_xmmss_memss(zmm14[0], *(rdx_8 + (rcx_20 << 2)))
                            zmm15 = __maxss_xmmss_memss(zmm15[0], *(rdx_8 + (rcx_20 << 2) + 4))
                            zmm3 = __maxss_xmmss_memss(zmm3[0], *(rdx_8 + (rcx_20 << 2) + 8))
                            j_1 = j_2
                            j_2 -= 1
                        while (j_1 != 1)
                
                rax_14.b = 1
                
                if (zmm14[0] f< *arg3 || not(zmm13[0] f<= *arg4))
                    rax_14.b = 0
                
                if (zmm15[0] f< *(arg3 + 4) || not(zmm4[0] f<= arg4[1]))
                    rax_14.b = 0
                
                if (not(zmm3[0] f< *(arg3 + 8)) && not(zmm5[0] f> arg4[2]) && rax_14.b != 0
                        && rsi_4 s< r12)
                    r11 += 1
                    *(arg5 + (rsi_4 << 3)) = sx.q(i) | r10_6
                    rsi_4 += 1
            
            i += 1
            r13_2 += 0x20
        while (i s< *(*(arg2 + 8) + 0x18))
else
    void* rax = *(arg2 + 8)
    float zmm0[0x4] = *arg3
    float zmm1[0x4] = *(rax + 0x54)
    zmm7 = *(rax + 0x6c)
    zmm8 = *(rax + 0x60)
    void* rsi_3 = (sx.q(*(rax + 0x30)) << 4) + r10
    
    if (zmm0[0] >= zmm1[0])
        zmm0 = _mm_min_ss(zmm0[0], zmm8.d)
    else
        zmm0 = zmm1
    
    zmm3 = *(rax + 0x58)
    zmm0[0] = zmm0[0] - zmm1[0]
    zmm5 = *(arg3 + 4)
    zmm9 = *(rax + 0x64)
    
    if (zmm5[0] >= zmm3[0])
        zmm5 = _mm_min_ss(zmm5[0], zmm9.d)
    else
        zmm5 = zmm3
    
    zmm6 = *(rax + 0x5c)
    zmm5[0] = zmm5[0] - zmm3[0]
    zmm4 = *(arg3 + 8)
    zmm10 = *(rax + 0x68)
    
    if (zmm4[0] >= zmm6[0])
        zmm4 = _mm_min_ss(zmm4[0], zmm10.d)
    else
        zmm4 = zmm6
    
    float zmm2 = *arg4
    zmm4[0] = zmm4[0] - zmm6[0]
    
    if (zmm2 >= zmm1[0])
        zmm2 = _mm_min_ss(zmm2, zmm8.d)
    else
        zmm2 = zmm1[0]
    
    zmm2 = zmm2 - zmm1[0]
    zmm1 = arg4[1]
    
    if (zmm1[0] >= zmm3[0])
        zmm1 = _mm_min_ss(zmm1[0], zmm9.d)
    else
        zmm1 = zmm3
    
    zmm1[0] = zmm1[0] - zmm3[0]
    zmm3 = arg4[2]
    
    if (zmm3[0] >= zmm6[0])
        zmm3 = _mm_min_ss(zmm3[0], zmm10.d)
    else
        zmm3 = zmm6
    
    char r8 = (*(arg1 + 0xa0)).b
    zmm3[0] = zmm3[0] - zmm6[0]
    zmm0[0] = zmm0[0] f* zmm7.d
    r11 = 0
    zmm5[0] = zmm5[0] f* zmm7.d
    void* rcx_1 = arg2 - *(arg1 + 0x90)
    int16_t r15_1 = (int.d(zmm0[0])).w & 0xfffe
    zmm4[0] = zmm4[0] f* zmm7.d
    int16_t r13_1 = (int.d(zmm4[0])).w
    int16_t r12_1 = (int.d(zmm5[0])).w & 0xfffe
    zmm1[0] = zmm1[0] f* zmm7.d
    zmm3[0] = zmm3[0] f* zmm7.d
    zmm1[0] = zmm1[0] + 1f
    zmm3[0] = zmm3[0] + 1f
    int32_t rax_1
    rax_1.w = int.d(zmm2 f* zmm7.d + 1f).w | 1
    int16_t rax_2 = (int.d(zmm1[0])).w | 1
    int16_t r14_1 = (int.d(zmm3[0])).w | 1
    int64_t rbp_5 = zx.q((rcx_1 s/ 0xb0).d) << r8 | zx.q(*arg2) << ((*(arg1 + 0x9c)).b + r8)
    
    if (r10 u< rsi_3)
        int64_t rbx_1 = 0
        
        do
            uint64_t rdx_3
            rdx_3.b = 1
            
            if (r15_1 u> *(r10 + 6) || rax_1.w u< *r10)
                rdx_3.b = 0
            
            if (r12_1 u> *(r10 + 8) || rax_2 u< *(r10 + 2))
                rdx_3.b = 0
            
            if ((r13_1 & 0xfffe) u> *(r10 + 0xa) || r14_1 u< *(r10 + 4))
                rdx_3.b = 0
            
            int64_t r9_1 = sx.q(*(r10 + 0xc))
            uint8_t r8_2 = (r9_1.d u>> 0x1f).b ^ 1
            int64_t rcx_9
            
            if (r8_2 == 0)
            label_142614569:
                
                if (rdx_3.b != 0 || r8_2 != 0)
                    rcx_9 = 0x10
                else
                    rcx_9 = sx.q(neg.d(*(r10 + 0xc))) << 4
            else
                if (rdx_3.b != 0)
                    if (rbx_1 s< sx.q(arg6)
                            && (arg7 == 0 || *((r9_1 << 5) + *(arg2 + 0x10) + 0x1c) != 0))
                        r11 += 1
                        *(arg5 + (rbx_1 << 3)) = r9_1 | rbp_5
                        rbx_1 += 1
                    
                    goto label_142614569
                
                if (r8_2 != 0)
                    rcx_9 = 0x10
                else
                    rcx_9 = sx.q(neg.d(*(r10 + 0xc))) << 4
            
            r10 += rcx_9
        while (r10 u< rsi_3)
return zx.q(r11)
