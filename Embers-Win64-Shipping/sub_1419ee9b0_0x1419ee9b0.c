// 函数: sub_1419ee9b0
// 地址: 0x1419ee9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
sub_141ee9830(arg1)
int32_t result = sub_14221b2f0(&arg1[0x55])

if (result.b == 0)
    result = (*(*arg1 + 0x860))(arg1)
    
    if (arg1[0x9f] != 0)
        float zmm1[0x4] = *(arg1 + 0x1c0)
        float temp0_1[0x4] = _mm_add_ps(zmm1, zmm1)
        float zmm6[0x4] = *(arg1 + 0x1e0)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_4[0x4] = _mm_mul_ps(zmm1, temp0_1)
        float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
        float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), temp0_3)
        float temp0_11[0x4] = _mm_add_ps(temp0_7, _mm_shuffle_ps(temp0_4, temp0_4, 1))
        float temp0_12[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float zmm12[0x4] = *(arg1 + 0x1d0)
        float temp0_13[0x4] = _mm_add_ps(temp0_9, temp0_6)
        float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_9)
        float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm6)
        float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
        float zmm2[0x4] = data_143f225d0
        float temp0_17[0x4] = _mm_sub_ps(zmm2, temp0_11)
        zmm2[0].q = zmm12 u>> 0x40
        float var_128_1[0x4] = _mm_shuffle_ps(zmm12, zmm2, 0xc4)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_17, zmm6), data_143f225e0)
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, zmm1, 0x32)
        float temp0_23[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm1, 0), temp0_21, 0x82)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm1, 0x31)
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_16, zmm1, 0x10)
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_24, 0x88)
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, zmm1, 0xe8)
        float var_148_1[0x4] = temp0_27
        float var_158[0x4] = temp0_23
        float var_138_1[0x4] = temp0_28
        float zmm0_1[0x4]
        float zmm7_1[0x4]
        float zmm8_1[0x4]
        float zmm9_1[0x4]
        float zmm10_1[0x4]
        float zmm11_1[0x4]
        float zmm12_1[0x4]
        zmm0_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1 = sub_14062b8d0(&var_158)
        
        if (not(zmm0_1[0] >= 0f))
            float zmm2_1[0x4] = data_142d4cc00
            float zmm3_1[0x4] = data_142d4cc20
            float zmm5_2[0x4] = data_142d4cc30
            int32_t zmm6_1 = float.s(arg1[0x84].d)
            int64_t var_e4_1 = 0
            int32_t var_dc_1 = 0x3f800000
            float temp0_29[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            float temp0_30[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            float temp0_31[0x4] = _mm_mul_ps(temp0_29, zmm10_1)
            float temp0_32[0x4] = _mm_mul_ps(temp0_30, zmm9_1)
            float var_48_1[0x4] = zmm7_1
            float temp0_33[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            float var_58_1[0x4] = zmm8_1
            float temp0_34[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            float temp0_35[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0x55)
            float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm12_1)
            float temp0_38[0x4] = _mm_mul_ps(temp0_34, zmm11_1)
            float temp0_39[0x4] = _mm_mul_ps(temp0_33, zmm11_1)
            float temp0_40[0x4] = _mm_mul_ps(temp0_35, zmm11_1)
            float temp0_41[0x4] = _mm_add_ps(temp0_38, temp0_31)
            float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), zmm10_1)
            float temp0_44[0x4] = _mm_add_ps(temp0_41, temp0_32)
            float temp0_45[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            float temp0_46[0x4] = _mm_add_ps(temp0_39, temp0_43)
            float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm9_1)
            float temp0_49[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm12_1)
            float temp0_50[0x4] = _mm_add_ps(temp0_44, temp0_37)
            float temp0_51[0x4] = _mm_add_ps(temp0_46, temp0_47)
            float var_e8[0x4]
            var_e8[0] = zmm6_1
            float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0), zmm10_1)
            float temp0_54[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xaa)
            float temp0_55[0x4] = _mm_add_ps(temp0_51, temp0_49)
            float temp0_56[0x4] = _mm_mul_ps(temp0_54, zmm9_1)
            float var_e8_1[0x4] = var_e8
            float temp0_57[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0x55)
            float temp0_58[0x4] = _mm_add_ps(temp0_40, temp0_53)
            float temp0_59[0x4] = _mm_mul_ps(temp0_57, zmm11_1)
            float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_e8, var_e8, 0), zmm10_1)
            float temp0_62[0x4] = _mm_add_ps(temp0_58, temp0_56)
            float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xff), zmm12_1)
            float temp0_65[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xaa)
            float temp0_66[0x4] = _mm_add_ps(temp0_59, temp0_61)
            float temp0_67[0x4] = _mm_mul_ps(temp0_65, zmm9_1)
            float temp0_68[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xff)
            float temp0_69[0x4] = _mm_add_ps(temp0_62, temp0_64)
            float temp0_70[0x4] = _mm_mul_ps(temp0_68, zmm12_1)
            float temp0_71[0x4] = _mm_add_ps(temp0_66, temp0_67)
            var_158 = temp0_50
            float var_148_2[0x4] = temp0_55
            float var_138_2[0x4] = temp0_69
            float var_128_2[0x4] = _mm_add_ps(temp0_71, temp0_70)
        
        int32_t var_1b0
        sub_1419ed880(&var_158, &var_1b0, 0x322bcc77)
        float var_118[0x4]
        sub_1407c8dd0(&var_118, &var_158)
        float zmm2_2[0x4] = var_118
        void* rax_3 = arg1[0x9f]
        float var_17c_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)[0]
        float var_108[0x4]
        float var_16c_1 = _mm_shuffle_ps(var_108, var_108, 0x55)[0]
        float var_c8[0x4] = data_142d3f660
        int32_t var_d8 = 5
        float zmm0_2[0x4] = *(arg1 + 0x424)
        float var_178_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)[0]
        float zmm1_2[0x4] = zmm0_2
        int32_t var_1ac
        zmm0_2[0] = zmm0_2[0] f* var_1ac
        int32_t var_b8_1 = 0
        zmm1_2[0] = zmm1_2[0] f* var_1b0
        float var_180 = zmm2_2[0]
        float var_170_1 = var_108[0]
        float temp0_76[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
        float temp0_77[0x4] = _mm_shuffle_ps(var_108, var_108, 0xaa)
        float var_174_1 = temp0_76[0]
        float var_168_1 = temp0_77[0]
        int64_t rcx_5 = *(rax_3 + 0x30)
        float var_d0_1 = zmm0_2[0]
        int32_t var_1a8
        float var_cc_1 = var_1a8[0]
        zmm0_2 = _mm_cvtps_pd(zmm1_2[0].q)
        float var_d4_1 = zmm1_2[0]
        result = _fpclass(zmm0_2[0].q)
        
        if ((result & 0x207) == 0)
            result = _fpclass(_mm_cvtps_pd(var_d0_1[0].q)[0].q)
            
            if ((result & 0x207) == 0)
                result = _fpclass(_mm_cvtps_pd(var_cc_1[0].q)[0].q)
                
                if ((result & 0x207) == 0)
                    result = sub_1419f11b0(&var_c8)
                    
                    if (result.b != 0)
                        float zmm0_3[0x4] = var_c8[0]
                        zmm1_2 = var_c8[2]
                        zmm2_2 = var_c8[1]
                        zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
                        zmm0_3[0] = zmm0_3[0] * zmm0_3[0]
                        zmm2_2[0] = zmm2_2[0] * zmm2_2[0]
                        zmm2_2[0] = zmm2_2[0] + zmm0_3[0]
                        zmm0_3 = var_c8[3]
                        zmm0_3[0] = zmm0_3[0] * zmm0_3[0]
                        zmm2_2[0] = zmm2_2[0] + zmm1_2[0]
                        zmm2_2[0] = zmm2_2[0] + zmm0_3[0]
                        float temp0_81[0x4] = _mm_sqrt_ss(0, zmm2_2[0])
                        temp0_81[0] = temp0_81[0] - 1f
                        
                        if (not(_mm_and_ps(temp0_81, 0x7fffffff)[0] >= 9.99999975e-05f))
                            zmm1_2 = _mm_and_ps(var_cc_1, 0x7fffffff)
                            zmm2_2 = _mm_and_ps(var_d4_1, 0x7fffffff)
                            float zmm3_2[0x4] = _mm_and_ps(var_d0_1, 0x7fffffff)
                            
                            if (not(_mm_max_ss(_mm_max_ss(zmm1_2[0], zmm3_2[0])[0], zmm2_2[0])[0]
                                    > 1000000f) && not(
                                    _mm_min_ss(_mm_min_ss(zmm1_2[0], zmm3_2[0])[0], zmm2_2[0])[0]
                                    < 9.99999997e-07f) && rcx_5 != 0)
                                int64_t* rcx_7 = data_143ef8520
                                int64_t* rax_5 = (*(*rcx_7 + 0xa8))(rcx_7, &var_180)
                                void* rcx_8 = arg1[0x9f]
                                int64_t* r10_1 = data_143ef8520
                                char var_1b8 = 0xb
                                int64_t* rax_6 = (*(*r10_1 + 0xd8))(r10_1, &var_d8, 
                                    *(rcx_8 + 0x20), zx.q(*(rcx_8 + 0x28)), 1, &var_1b8, var_1b8)
                                void* rcx_10 = arg1[0x14]
                                int64_t rdx_5 = *arg1
                                int32_t rsi_1 = *(arg1 + 0xc)
                                int64_t var_1a0
                                __builtin_memset(&var_1a0, 0, 0x20)
                                int32_t rdi_1 = *(rcx_10 + 0xc)
                                void* rax_7 = (*(rdx_5 + 0x4b0))(arg1, rdx_5)
                                int64_t rdx_6 = *arg1
                                sub_141eb5f10(&var_1b0, (*(rdx_6 + 0x4d8))(arg1, rdx_6), 0, rax_7)
                                int32_t rcx_14 = var_1b0
                                int64_t var_198
                                var_198.d = var_1ac
                                int32_t rax_11 = var_1a8 | 0x13
                                var_1a0:4.d = rcx_14
                                int64_t var_190
                                var_190:4.d = rcx_14
                                var_198:4.d = rax_11
                                int64_t var_188
                                var_188:4.d = rax_11
                                var_1a0.d = rdi_1
                                var_190.d = 0
                                var_188.d = rsi_1
                                (*(*rax_6 + 0xa8))(rax_6, sub_140acc970(&var_1b0, &var_1a0))
                                (*(*rax_6 + 0x98))(rax_6, sub_140acc970(&var_1b0, &var_190))
                                int64_t r8_2
                                r8_2.b = 1
                                (*(*rax_6 + 0xf8))(rax_6, 2, r8_2)
                                int64_t r8_3
                                r8_3.b = 1
                                (*(*rax_6 + 0xf8))(rax_6, 1, r8_3)
                                int64_t r8_4
                                r8_4.b = 1
                                (*(*rax_6 + 0xf8))(rax_6, 8, r8_4)
                                (*(*rax_5 + 0xb8))(rax_5, rax_6)
                                (**rax_6)(rax_6)
                                void* rax_19 = arg1[0x15]
                                
                                if (rax_19 == 0)
                                    rax_19 = sub_141ee69e0(arg1)
                                
                                void* rdi_2 = *(rax_19 + 0x1f8)
                                var_1b0 = 1
                                var_1a8.q = &arg1[0x55]
                                *(arg1 + 0x3b8) = var_1b0.o
                                sub_140d3a3a0(&arg1[0x74], arg1)
                                arg1[0x73] = rax_5
                                rax_5[2] = &arg1[0x77]
                                int64_t* rax_20 = sub_14226e750(rdi_2)
                                
                                if (rax_20 != 0)
                                    int64_t r9_3 = *rax_20
                                    (*(r9_3 + 0x358))(rax_20, 
                                        "D:"
                                    "/Build/++UE4/Sync/Engine/Source/Runtime/Landscape/Private/LandscapeCollision."
                                    "cpp", 
                                        0x584, r9_3)
                                
                                int64_t r8_5 = *rax_20
                                (*(r8_5 + 0x50))(rax_20, rax_5, r8_5)
                                result = (*(*rax_20 + 0x360))(rax_20)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
