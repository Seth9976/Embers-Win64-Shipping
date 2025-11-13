// 函数: sub_1426148f0
// 地址: 0x1426148f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_18 = arg3
void* rsi = *(arg2 + 8)
float zmm4[0x4] = *arg3
char rax = 1
float zmm2[0x4] = *(rsi + 0x60)

if (zmm4[0] > zmm2[0] || not((*(rsi + 0x54))[0] f<= *arg4))
    rax = 0

int128_t zmm10 = *(arg3 + 4)
float zmm1[0x4] = *(rsi + 0x64)

if (zmm10.d f> zmm1[0] || not((*(rsi + 0x58))[0] f<= arg4[1]))
    rax = 0

int128_t zmm11 = *(arg3 + 8)
float zmm3[0x4] = *(rsi + 0x68)
float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm12[0x4]
float var_a8[0x4] = zmm12

if (not(zmm11.d f> zmm3[0]))
    zmm12 = arg4[2]
    zmm6 = *(rsi + 0x5c)
    
    if (not(zmm12[0] < zmm6[0]) && rax != 0)
        void* rbx_1 = *(arg2 + 0x40)
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        int128_t zmm9
        int128_t var_78_1 = zmm9
        uint64_t result
        int32_t result_1
        float zmm5
        
        if (rbx_1 == 0)
            result_1 = 0
            int64_t rax_26 = sub_14260f690(*arg1, arg2)
            int64_t rdx_5 = rax_26
            int32_t i = 0
            
            if (*(rsi + 0x18) s> 0)
                void* rcx_8 = nullptr
                float zmm13[0x4]
                float var_b8_1[0x4] = zmm13
                int64_t r12_2 = 0
                float zmm14[0x4]
                float var_c8_1[0x4] = zmm14
                float zmm15[0x4]
                float var_d8_1[0x4] = zmm15
                void* var_100_1 = nullptr
                
                do
                    int64_t rax_27 = *(arg2 + 0x10)
                    void* rbx_2 = rcx_8 + rax_27
                    char rcx_9 = *(rcx_8 + rax_27 + 0x1f)
                    
                    if (rcx_9 u< 0x40)
                        int64_t r14_5 = sx.q(i) | rdx_5
                        float var_108
                        
                        if (arg5[0x43].b != 0)
                            if ((*(*arg5 + 8))(arg5, r14_5, arg2, rbx_2, var_108, var_100_1, rax_26)
                                    == 0)
                                rdx_5 = rax_26
                            else
                            label_142614e16:
                                void* r8_3 = *(arg2 + 8)
                                int32_t rdx_7 = *(r8_3 + 0x3c)
                                int32_t rax_34 = i - rdx_7
                                int64_t* rcx_12 = arg1[1]
                                
                                if (rcx_12 == 0 || i s< rdx_7 || rax_34 s>= *(r8_3 + 0x34))
                                label_142614e5d:
                                    int64_t rdx_10 = *(arg2 + 0x18)
                                    void* r10_1 = 1
                                    uint64_t r8_4 = zx.q(*(rbx_2 + 0x1e))
                                    uint64_t rcx_13 = zx.q(*(rbx_2 + 4)) * 3
                                    zmm13 = *(rdx_10 + (rcx_13 << 2) + 4)
                                    zmm14 = *(rdx_10 + (rcx_13 << 2) + 8)
                                    zmm5 = zmm13[0]
                                    zmm12 = *(rdx_10 + (rcx_13 << 2))
                                    zmm6 = zmm14
                                    int32_t arg_10 = zmm5
                                    zmm15 = zmm12
                                    var_108 = zmm6[0]
                                    uint64_t rax_39
                                    
                                    if (r8_4 u> 1)
                                        if (r8_4 u>= 5)
                                            void* r11_1 = rbx_2 + 8
                                            int64_t j_3 = ((r8_4 - 5) u>> 2) + 1
                                            r10_1 = (j_3 << 2) + 1
                                            int64_t j
                                            
                                            do
                                                uint64_t rax_40 = zx.q(*(r11_1 - 2))
                                                r11_1 += 8
                                                uint64_t rcx_14 = rax_40 * 3
                                                uint64_t rax_41 = zx.q(*(r11_1 - 8))
                                                zmm5 = *(rdx_10 + (rcx_14 << 2))
                                                zmm8 = *(rdx_10 + (rcx_14 << 2) + 4)
                                                float temp0_7[0x4] = _mm_min_ss(zmm12[0], zmm5)
                                                zmm11 = *(rdx_10 + (rcx_14 << 2) + 8)
                                                float temp0_8[0x4] = _mm_max_ss(zmm15[0], zmm5)
                                                uint64_t rcx_15 = rax_41 * 3
                                                zmm7 = *(rdx_10 + (rcx_15 << 2) + 4)
                                                float temp0_9 = _mm_max_ss(arg_10, zmm8[0])
                                                zmm4 = *(rdx_10 + (rcx_15 << 2))
                                                float temp0_10[0x4] = _mm_min_ss(zmm13[0], zmm8[0])
                                                zmm10 = *(rdx_10 + (rcx_15 << 2) + 8)
                                                float temp0_11[0x4] = _mm_min_ss(zmm14[0], zmm11.d)
                                                uint64_t rax_42 = zx.q(*(r11_1 - 6))
                                                float temp0_12[0x4] =
                                                    _mm_min_ss(temp0_7[0], zmm4[0])
                                                float temp0_13[0x4] =
                                                    _mm_max_ss(temp0_8[0], zmm4[0])
                                                float temp0_14 = _mm_max_ss(temp0_9, zmm7[0])
                                                float temp0_15[0x4] =
                                                    _mm_min_ss(temp0_10[0], zmm7[0])
                                                uint64_t rcx_16 = rax_42 * 3
                                                rax_39 = zx.q(*(r11_1 - 4))
                                                zmm6 = *(rdx_10 + (rcx_16 << 2) + 4)
                                                float temp0_16[0x4] =
                                                    _mm_min_ss(temp0_11[0], zmm10.d)
                                                zmm9 = *(rdx_10 + (rcx_16 << 2) + 8)
                                                zmm3 = *(rdx_10 + (rcx_16 << 2))
                                                float temp0_17 = _mm_max_ss(temp0_14, zmm6[0])
                                                float temp0_18[0x4] =
                                                    _mm_min_ss(temp0_15[0], zmm6[0])
                                                uint64_t rcx_17 = rax_39 * 3
                                                float temp0_19[0x4] =
                                                    _mm_max_ss(var_108[0], zmm11.d)
                                                float temp0_20[0x4] =
                                                    _mm_min_ss(temp0_12[0], zmm3[0])
                                                float temp0_21[0x4] =
                                                    _mm_min_ss(temp0_16[0], zmm9.d)
                                                float temp0_22[0x4] =
                                                    _mm_max_ss(temp0_13[0], zmm3[0])
                                                zmm5 = __maxss_xmmss_memss(temp0_17, 
                                                    *(rdx_10 + (rcx_17 << 2) + 4))
                                                float temp0_24[0x4] =
                                                    _mm_max_ss(temp0_19[0], zmm10.d)
                                                zmm12 = __minss_xmmss_memss(temp0_20[0], 
                                                    *(rdx_10 + (rcx_17 << 2)))
                                                zmm13 = __minss_xmmss_memss(temp0_18[0], 
                                                    *(rdx_10 + (rcx_17 << 2) + 4))
                                                zmm14 = __minss_xmmss_memss(temp0_21[0], 
                                                    *(rdx_10 + (rcx_17 << 2) + 8))
                                                arg_10 = zmm5
                                                float temp0_28[0x4] =
                                                    _mm_max_ss(temp0_24[0], zmm9.d)
                                                zmm15 = __maxss_xmmss_memss(temp0_22[0], 
                                                    *(rdx_10 + (rcx_17 << 2)))
                                                zmm6 = __maxss_xmmss_memss(temp0_28[0], 
                                                    *(rdx_10 + (rcx_17 << 2) + 8))
                                                var_108 = zmm6[0]
                                                j = j_3
                                                j_3 -= 1
                                            while (j != 1)
                                        
                                        if (r10_1 s< r8_4)
                                            void* j_2 = r8_4 - r10_1
                                            void* r9_8 = rbx_2 + ((r10_1 + 2) << 1)
                                            void* j_1
                                            
                                            do
                                                rax_39 = zx.q(*r9_8)
                                                r9_8 += 2
                                                uint64_t rcx_18 = rax_39 * 3
                                                zmm4 = *(rdx_10 + (rcx_18 << 2))
                                                zmm3 = *(rdx_10 + (rcx_18 << 2) + 4)
                                                zmm2 = *(rdx_10 + (rcx_18 << 2) + 8)
                                                float temp0_31[0x4] = _mm_min_ss(zmm4[0], zmm12[0])
                                                float temp0_32[0x4] = _mm_max_ss(zmm4[0], zmm15[0])
                                                float temp0_33[0x4] = _mm_min_ss(zmm3[0], zmm13[0])
                                                float temp0_34[0x4] = _mm_max_ss(zmm3[0], zmm5)
                                                zmm12 = temp0_31
                                                float temp0_35[0x4] = _mm_min_ss(zmm2[0], zmm14[0])
                                                zmm15 = temp0_32
                                                float temp0_36[0x4] = _mm_max_ss(zmm2[0], zmm6[0])
                                                zmm13 = temp0_33
                                                zmm5 = temp0_34[0]
                                                zmm14 = temp0_35
                                                zmm6 = temp0_36
                                                j_1 = j_2
                                                j_2 -= 1
                                            while (j_1 != 1)
                                    
                                    rax_39.b = 1
                                    
                                    if (zmm15[0] f< *arg_18 || not(zmm12[0] f<= *arg4))
                                        rax_39.b = 0
                                    
                                    if (zmm5 f< arg_18[1] || not(zmm13[0] f<= arg4[1]))
                                        rax_39.b = 0
                                    
                                    if (zmm6[0] f< arg_18[2] || zmm14[0] f> arg4[2]
                                            || rax_39.b == 0)
                                        rdx_5 = rax_26
                                    else
                                        rdx_5 = rax_26
                                        
                                        if (r12_2 s< sx.q(arg7))
                                            result_1 += 1
                                            *(arg6 + (r12_2 << 3)) = r14_5
                                            r12_2 += 1
                                else
                                    if (*(*(arg2 + 0x48) + sx.q(rax_34) * 0x28 + 0x20) == 0)
                                        goto label_142614e5d
                                    
                                    if ((*(*rcx_12 + 8))() != 0)
                                        goto label_142614e5d
                                    
                                    rdx_5 = rax_26
                        else
                            int16_t rax_28 = *(rbx_2 + 0x1c)
                            
                            if ((arg5[0x42].w & rax_28) != 0 && (*(arg5 + 0x212) & rax_28) == 0)
                                uint64_t rax_30 = zx.q(rcx_9) & 0x3f
                                
                                if (not(3.40282347e+38f f<= *(arg5 + (rax_30 << 2) + 8)) &&
                                        not(3.40282347e+38f f<= *(arg5 + (rax_30 << 2) + 0x108)))
                                    goto label_142614e16
                    
                    i += 1
                    rcx_8 = var_100_1 + 0x20
                    var_100_1 = rcx_8
                while (i s< *(*(arg2 + 8) + 0x18))
            
            result = zx.q(result_1)
        else
            zmm8 = *(rsi + 0x54)
            zmm9 = *(rsi + 0x6c)
            void* rbp_3 = (sx.q(*(rsi + 0x30)) << 4) + rbx_1
            void* var_f0_1 = rbp_3
            
            if (zmm4[0] >= zmm8[0])
                zmm5 = _mm_min_ss(zmm2[0], zmm4[0])
            else
                zmm5 = zmm8[0]
            
            zmm7 = *(rsi + 0x58)
            zmm5 = zmm5 - zmm8[0]
            
            if (zmm10.d f>= zmm7[0])
                zmm4 = _mm_min_ss(zmm1[0], zmm10.d)
            else
                zmm4 = zmm7
            
            bool cond:2_1 = zmm11.d f>= zmm6[0]
            zmm4[0] = zmm4[0] - zmm7[0]
            float zmm0[0x4]
            
            if (cond:2_1)
                zmm0 = _mm_min_ss(zmm3[0], zmm11.d)
            else
                zmm0 = zmm6
            
            zmm10 = *arg4
            zmm0[0] = zmm0[0] - zmm6[0]
            
            if (zmm10.d f>= zmm8[0])
                zmm2 = _mm_min_ss(zmm2[0], zmm10.d)
            else
                zmm2 = zmm8
            
            zmm2[0] = zmm2[0] - zmm8[0]
            zmm8 = arg4[1]
            
            if (zmm8[0] >= zmm7[0])
                zmm1 = _mm_min_ss(zmm1[0], zmm8[0])
            else
                zmm1 = zmm7
            
            bool cond:3_1 = zmm12[0] >= zmm6[0]
            zmm1[0] = zmm1[0] - zmm7[0]
            
            if (cond:3_1)
                zmm3 = _mm_min_ss(zmm3[0], zmm12[0])
            else
                zmm3 = zmm6
            
            void* rcx = *arg1
            zmm3[0] = zmm3[0] - zmm6[0]
            zmm0[0] = zmm0[0] f* zmm9.d
            zmm4[0] = zmm4[0] f* zmm9.d
            zmm2[0] = zmm2[0] f* zmm9.d
            int32_t rax_1 = int.d(zmm4[0])
            zmm1[0] = zmm1[0] f* zmm9.d
            rax_1.w &= 0xfffe
            zmm3[0] = zmm3[0] f* zmm9.d
            int32_t rax_2
            rax_2.w = int.d(zmm0[0]).w & 0xfffe
            int64_t var_100
            var_100.d = rax_2
            zmm2[0] = zmm2[0] + 1f
            zmm1[0] = zmm1[0] + 1f
            int32_t rax_3 = int.d(zmm2[0])
            int32_t r15_1
            r15_1.w = int.d(zmm5 f* zmm9.d).w & 0xfffe
            arg_18.d = r15_1
            zmm3[0] = zmm3[0] + 1f
            rax_3.w |= 1
            int16_t rax_4 = (int.d(zmm1[0])).w | 1
            int32_t r14_1
            r14_1.w = int.d(zmm3[0]).w | 1
            int64_t var_f8
            var_f8.d = r14_1
            int64_t rax_5 = sub_14260f690(rcx, arg2)
            result_1 = 0
            int64_t rcx_1 = rax_5
            
            if (rbx_1 u>= rbp_3)
                result = zx.q(result_1)
            else
                int64_t r12_1 = 0
                
                do
                    rbp_3.b = 1
                    
                    if (r15_1.w u> *(rbx_1 + 6) || rax_3.w u< *rbx_1)
                        rbp_3.b = 0
                    
                    if (rax_1.w u> *(rbx_1 + 8) || rax_4 u< *(rbx_1 + 2))
                        rbp_3.b = 0
                    
                    if (var_100.w u> *(rbx_1 + 0xa) || r14_1.w u< *(rbx_1 + 4))
                        rbp_3.b = 0
                    
                    int64_t rax_10 = sx.q(*(rbx_1 + 0xc))
                    uint8_t r14_3 = (rax_10.d u>> 0x1f).b ^ 1
                    int64_t rcx_6
                    
                    if (r14_3 == 0)
                    label_142614c9c:
                        
                        if (rbp_3.b != 0 || r14_3 != 0)
                            rcx_6 = 0x10
                        else
                            rcx_6 = sx.q(neg.d(*(rbx_1 + 0xc))) << 4
                    else
                        if (rbp_3.b != 0)
                            int64_t r15_3 = rax_10 | rcx_1
                            void* r9_2 = (rax_10 << 5) + *(arg2 + 0x10)
                            
                            if (arg5[0x43].b != 0)
                                if ((*(*arg5 + 8))(arg5, r15_3, arg2, r9_2, rax_1, var_100, var_f8, 
                                    var_f0_1, rax_5) != 0)
                                label_142614c2d:
                                    void* r9_3 = *(arg2 + 8)
                                    int32_t rdx_2 = *(rbx_1 + 0xc)
                                    int32_t r8_1 = *(r9_3 + 0x3c)
                                    int32_t rax_17 = rdx_2 - r8_1
                                    int64_t* rcx_4 = arg1[1]
                                    
                                    if (rcx_4 == 0 || rdx_2 s< r8_1 || rax_17 s>= *(r9_3 + 0x34))
                                    label_142614c7d:
                                        
                                        if (r12_1 s< sx.q(arg7))
                                            result_1 += 1
                                            *(arg6 + (r12_1 << 3)) = r15_3
                                            r12_1 += 1
                                    else
                                        if (*(*(arg2 + 0x48) + sx.q(rax_17) * 0x28 + 0x20) == 0)
                                            goto label_142614c7d
                                        
                                        if ((*(*rcx_4 + 8))() != 0)
                                            goto label_142614c7d
                            else
                                int16_t rax_11 = *(r9_2 + 0x1c)
                                
                                if ((arg5[0x42].w & rax_11) != 0 && (*(arg5 + 0x212) & rax_11) == 0)
                                    uint64_t rax_13 = zx.q(*(r9_2 + 0x1f)) & 0x3f
                                    
                                    if (not(3.40282347e+38f f<= *(arg5 + (rax_13 << 2) + 8)) && not(
                                            3.40282347e+38f f<= *(arg5 + (rax_13 << 2) + 0x108)))
                                        goto label_142614c2d
                            
                            r15_1 = arg_18.d
                            goto label_142614c9c
                        
                        if (r14_3 != 0)
                            rcx_6 = 0x10
                        else
                            rcx_6 = sx.q(neg.d(*(rbx_1 + 0xc))) << 4
                    
                    r14_1 = var_f8.d
                    rbx_1 += rcx_6
                    rcx_1 = rax_5
                while (rbx_1 u< var_f0_1)
                
                result = zx.q(result_1)
        return result

return 0
