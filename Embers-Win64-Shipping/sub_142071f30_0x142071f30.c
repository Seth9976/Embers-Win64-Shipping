// 函数: sub_142071f30
// 地址: 0x142071f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
uint64_t var_98 = __security_cookie ^ &var_1f8
int64_t rdi = sx.q(arg2)
uint64_t result

if (arg2 s< 0 || rdi.d s>= arg1[0x94].d)
    result.b = 0
else
    char rcx = arg1[0xbc].b | 2
    arg1[0xbc].b = (((rcx << 2 | rcx) ^ rcx) & 4) ^ rcx
    int32_t r14_1
    
    if (rdi.d s>= arg1[0x9b].d)
        r14_1 = rdi.d
    else
        r14_1 = *(arg1[0x9a] + (rdi << 2))
    
    int128_t* rax_3 = arg1[0x93]
    float var_148[0x4] = rax_3[rdi * 4]
    float var_138_1[0x4] = rax_3[rdi * 4 + 1]
    float var_128_1[0x4] = rax_3[rdi * 4 + 2]
    int96_t var_118_1 = rax_3[rdi * 4 + 3][0].12
    float var_108[0x4]
    float (* rax_4)[0x4]
    float zmm1[0x4]
    float zmm9[0x4]
    
    if (arg4 == 0)
        rax_4 = &var_108
        zmm1 = arg3[1]
        var_108 = *arg3
        float var_e8_1[0x4] = arg3[2]
        float var_f8_1[0x4] = zmm1
    else
        rax_4, zmm9 = sub_140ad7d70(arg3, &var_108, &arg1[0x38])
    
    float var_c8[0x4] = *rax_4
    zmm1 = rax_4[1]
    float var_a8_1[0x4] = rax_4[2]
    int96_t var_188_1 = zmm1[0].12
    int64_t r15
    
    if (r14_1 == 0xffffffff || r14_1 s>= *(arg1 + 0x564))
        r15.b = 0
    else
        float zmm0[0x4] = var_188_1.d
        zmm0[0] = zmm0[0] f- var_118_1.d
        
        if (_mm_and_ps(zmm0, 0x7fffffff)[0] > 9.99999975e-05f)
            r15.b = 0
        else
            zmm0 = var_188_1:4.d
            zmm0[0] = zmm0[0] f- var_118_1:4.d
            
            if (_mm_and_ps(zmm0, 0x7fffffff)[0] > 9.99999975e-05f)
                r15.b = 0
            else
                zmm0 = var_188_1:8.d
                zmm0[0] = zmm0[0] f- var_118_1:8.d
                
                if (_mm_and_ps(zmm0, 0x7fffffff)[0] > 9.99999975e-05f)
                    r15.b = 0
                else
                    void* rax_5 = arg1[0x9d]
                    
                    if (rax_5 == 0 || *(rax_5 + 0x38) == 0)
                        r15.b = 0
                    else
                        r15.b = 1
    
    char r13_1 = arg5
    char result_1
    float zmm6_1[0x4]
    int64_t zmm7_1
    float zmm8_1[0x4]
    int128_t zmm10_1
    result_1, zmm6_1, zmm7_1, zmm8_1, zmm10_1 =
        sub_1420aad50(arg1, rdi.d, arg3, arg4, zmm9, r13_1, arg6)
    
    if (result_1 != 0)
        void* rcx_5 = arg1[0x88]
        
        if (rcx_5 != 0)
            float var_58_1 = zmm6_1[0]
            int32_t var_68_1 = zmm7_1.d
            float var_78_1[0x4] = zmm8_1
            int64_t var_16c
            int128_t* rax_7 = sub_1423633d0(rcx_5, &var_16c)
            zmm6_1 = *rax_7
            float zmm2_1[0x4] = *(rax_7 + 8)
            int64_t zmm5_1 = *(rax_7 + 4)
            zmm2_1[0] = zmm2_1[0] f+ *(rax_7 + 0x14)
            zmm6_1[0] = zmm6_1[0] f- *(rax_7 + 0xc)
            zmm6_1[0] = zmm6_1[0] f+ *(rax_7 + 0xc)
            zmm2_1[0] = zmm2_1[0] f- *(rax_7 + 0x14)
            zmm7_1 = zmm5_1
            zmm5_1.d = zmm5_1.d f- rax_7[1].d
            zmm7_1.d = zmm7_1.d f+ rax_7[1].d
            var_188_1:8.d = zmm2_1[0]
            float var_170_1 = zmm2_1[0]
            int64_t var_1a8 = (_mm_unpacklo_ps(zmm6_1, zmm5_1)).q
            int32_t rax_9 = var_188_1:8.d
            int64_t var_19c_1 = (_mm_unpacklo_ps(zmm6_1, zmm7_1)).q
            char var_190_1 = 1
            float var_1c8[0x4]
            float zmm1_1[0x4] = sub_140ae2c60(&var_1a8, &var_1c8, &var_c8)
            
            if (r14_1 != 0xffffffff)
                zmm1_1 = var_c8
                float temp0_6[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
                float temp0_7[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                float temp0_8[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                float temp0_9[0x4] = _mm_mul_ps(zmm1_1, temp0_6)
                float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x29), temp0_7)
                float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x12), temp0_8)
                float temp0_14[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x1a)
                float temp0_15[0x4] = _mm_shuffle_ps(var_a8_1, var_a8_1, 0xc9)
                float temp0_17[0x4] = _mm_add_ps(temp0_14, _mm_shuffle_ps(temp0_9, temp0_9, 1))
                float zmm4_1[0x4] = data_143f43310
                float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_11)
                float temp0_19[0x4] = _mm_sub_ps(temp0_11, temp0_13)
                float temp0_20[0x4] = _mm_sub_ps(zmm4_1, temp0_17)
                float temp0_21[0x4] = _mm_mul_ps(temp0_18, var_a8_1)
                float temp0_22[0x4] = _mm_mul_ps(temp0_15, temp0_19)
                float zmm3_1[0x4] =
                    __andps_xmmxud_memxud(_mm_mul_ps(temp0_20, var_a8_1), data_143f43320)
                float temp0_25[0x4] = _mm_shuffle_ps(temp0_22, zmm3_1, 0x32)
                float temp0_27[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm3_1, 0), temp0_25, 0x82)
                float temp0_28[0x4] = _mm_shuffle_ps(temp0_21, zmm3_1, 0x31)
                float temp0_30[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm3_1, 0x10), temp0_28, 0x88)
                zmm4_1[0].q = zmm1 u>> 0x40
                float temp0_31[0x4] = _mm_shuffle_ps(temp0_21, temp0_22, 0x12)
                float temp0_32[0x4] = _mm_shuffle_ps(zmm1, zmm4_1, 0xc4)
                float temp0_33[0x4] = _mm_shuffle_ps(temp0_31, zmm3_1, 0xe8)
                float var_d8_1[0x4] = temp0_32
                var_108 = temp0_27
                float var_f8_2[0x4] = temp0_30
                float var_e8_2[0x4] = temp0_33
                zmm1_1 = sub_1420aab90(&arg1[0x9f], r14_1, &var_108)
                r13_1 = 1
            
            int32_t var_1b8
            int32_t var_1b4
            int32_t var_1b0
            float zmm2_2[0x4]
            
            if (r15.b == 0)
                zmm2_2 = var_1c8
                
                if (*(arg1 + 0x59c) == 0)
                    if (var_1b0.b != 0)
                        *(arg1 + 0x584) = zmm2_2
                        *(arg1 + 0x594) = var_1b8.q
                        *(arg1 + 0x59c) = var_1b0
                else if (var_1b0.b != 0)
                    float temp0_42[0x4] = __minss_xmmss_memss(zmm2_2[0], *(arg1 + 0x584))
                    float temp0_44[0x4] =
                        __minss_xmmss_memss(_mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)[0], arg1[0xb1].d)
                    *(arg1 + 0x584) = temp0_42[0]
                    float temp0_46[0x4] = __minss_xmmss_memss(
                        _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)[0], *(arg1 + 0x58c))
                    arg1[0xb1].d = temp0_44[0]
                    zmm1_1 = arg1[0xb2].d
                    *(arg1 + 0x58c) = temp0_46[0]
                    float temp0_47[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
                    float temp0_48[0x4] = _mm_max_ss(zmm1_1[0], temp0_47[0])
                    float temp0_49[0x4] = __maxss_xmmss_memss((*(arg1 + 0x594))[0], var_1b8)
                    arg1[0xb2].d = temp0_48[0]
                    zmm1_1 = __maxss_xmmss_memss(var_1b4[0], arg1[0xb3].d)
                    *(arg1 + 0x594) = temp0_49[0]
                    arg1[0xb3].d = zmm1_1[0]
                
                int64_t rsi_1 = sx.q(arg1[0xb5].d)
                int32_t rax_15 = (rsi_1 + 1).d
                arg1[0xb5].d = rax_15
                
                if (rax_15 s> *(arg1 + 0x5ac))
                    sub_1405c50f0(&arg1[0xb4])
                    zmm2_2 = var_1c8
                
                int64_t rcx_12 = arg1[0xb4]
                float (* rdx_8)[0x4] = rsi_1 * 0x1c
                *(rdx_8 + rcx_12) = zmm2_2
                *(rdx_8 + rcx_12 + 0x10) = var_1b8.q
                *(rdx_8 + rcx_12 + 0x18) = var_1b0
                rdx_8.b = 1
                sub_1420516f0(arg1, rdx_8.b, 0, zmm1_1)
            else
                int128_t var_88_1 = zmm10_1
                int128_t* rax_10 = sub_1423633d0(arg1[0x88], &var_108)
                float zmm6_2[0x4] = *rax_10
                zmm2_2 = *(rax_10 + 8)
                float zmm5_2[0x4] = *(rax_10 + 4)
                zmm2_2[0] = zmm2_2[0] f+ *(rax_10 + 0x14)
                zmm6_2[0] = zmm6_2[0] f- *(rax_10 + 0xc)
                zmm6_2[0] = zmm6_2[0] f+ *(rax_10 + 0xc)
                zmm2_2[0] = zmm2_2[0] f- *(rax_10 + 0x14)
                int64_t zmm7_2 = zmm5_2[0].q
                zmm5_2[0] = zmm5_2[0] f- rax_10[1].d
                zmm7_2.d = zmm7_2.d f+ rax_10[1].d
                float var_170_2 = zmm2_2[0]
                var_188_1:8.d = zmm2_2[0]
                var_16c = (_mm_unpacklo_ps(zmm6_2, zmm5_2[0].q)).q
                int32_t var_164_1 = var_188_1:8.d
                int64_t var_160_1 = (_mm_unpacklo_ps(zmm6_2, zmm7_2)).q
                float var_158_1 = var_170_2
                char var_154_1 = 1
                sub_140ae2b00(&var_16c, &var_1a8, &var_148)
                zmm10_1 = var_1c8[0]
                float zmm6_3 = var_1c8[3]
                float zmm3_2 = var_1c8[2]
                zmm5_2 = var_1c8[1]
                int64_t zmm1_2
                
                if (zmm10_1.d f<= var_1a8.d)
                label_142072396:
                    
                    if (arg1[0xb0].b == 0)
                        if (var_1b0.b != 0)
                            *(arg1 + 0x568) = var_1c8
                            arg1[0xaf] = var_1b8.q
                            arg1[0xb0].d = var_1b0
                    else if (var_1b0.b != 0)
                        zmm1_2 = *(arg1 + 0x56c)
                        float temp0_36[0x4] = _mm_min_ss(arg1[0xad].d[0], zmm10_1.d)
                        float temp0_37 = __minss_xmmss_memss(zmm3_2, arg1[0xae].d)
                        int32_t temp0_38 = __maxss_xmmss_memss(var_1b8, arg1[0xaf].d)
                        int64_t temp0_39 = _mm_min_ss(zmm1_2.d, zmm5_2[0])
                        arg1[0xad].d = temp0_36[0]
                        float temp0_40[0x4] = _mm_max_ss((*(arg1 + 0x574))[0], zmm6_3)
                        arg1[0xae].d = temp0_37
                        *(arg1 + 0x56c) = temp0_39.d
                        arg1[0xaf].d = temp0_38
                        *(arg1 + 0x574) = temp0_40[0]
                        *(arg1 + 0x57c) = _mm_max_ss((*(arg1 + 0x57c))[0], var_1b4)[0]
                else
                    float zmm0_4[0x4] = var_19c_1.d
                    
                    if (zmm10_1.d f>= zmm0_4[0])
                        goto label_142072396
                    
                    zmm1_2 = var_1a8:4.d
                    
                    if (zmm5_2[0] f<= zmm1_2.d)
                        goto label_142072396
                    
                    int32_t zmm7_3 = var_19c_1:4.d
                    
                    if (zmm5_2[0] f>= zmm7_3)
                        goto label_142072396
                    
                    zmm8_1 = var_170_1
                    
                    if (zmm3_2 <= zmm8_1[0] || zmm3_2 f>= rax_9 || zmm6_3 f<= var_1a8.d
                            || zmm6_3 >= zmm0_4[0] || var_1b8 f<= zmm1_2.d || var_1b8 f>= zmm7_3
                            || var_1b4 f<= zmm8_1[0] || not(var_1b4 f< rax_9))
                        goto label_142072396
                
                if (r13_1 != 0)
                    sub_141ee8490(arg1)
    
    result = zx.q(result_1)

__security_check_cookie(var_98 ^ &var_1f8)
return result
