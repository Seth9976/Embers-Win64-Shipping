// 函数: sub_141a83920
// 地址: 0x141a83920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t r10 = *arg1
int64_t rsi = sx.q(arg1[1].d)
float zmm8[0x4] = *(arg3 + 4)
float zmm10[0x4] = *arg3
float zmm11[0x4] = *(arg3 + 8)
int64_t rdi = sx.q(arg2)
float (* rbx_2)[0x4] = (rdi << 7) + r10
float zmm1[0x4] = rbx_2[1]
float zmm9[0x4] = *((rsi << 7) + r10 - 0x70)
zmm10[0] = zmm10[0] - zmm1[0]
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm9[0] = zmm9[0] - zmm1[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
temp0_1[0] = temp0_1[0] - temp0[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
temp0_2[0] = temp0_2[0] - temp0_3[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
zmm8[0] = zmm8[0] - temp0_4[0]
zmm11[0] = zmm11[0] - temp0_5[0]
zmm9[0] = zmm9[0] * zmm9[0]
temp0_1[0] = temp0_1[0] * temp0_1[0]
temp0_2[0] = temp0_2[0] * temp0_2[0]
temp0_1[0] = temp0_1[0] + zmm9[0]
temp0_1[0] = temp0_1[0] + temp0_2[0]
float zmm2[0x4]
float zmm3[0x4]

if (not(temp0_1[0] <= 9.99999994e-09f))
    zmm3 = zx.o(0)
    zmm3[0] = temp0_1[0]
    zmm2 = 0x3f000000
    float temp0_6[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_6[0] = temp0_6[0] * temp0_6[0]
    zmm3[0] = zmm3[0] * temp0_6[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_6[0] = temp0_6[0] * zmm2[0]
    temp0_6[0] = temp0_6[0] + temp0_6[0]
    temp0_6[0] = temp0_6[0] * temp0_6[0]
    zmm3[0] = zmm3[0] * temp0_6[0]
    temp0_6[0] = temp0_6[0] * (0.5f - zmm3[0])
    temp0_6[0] = temp0_6[0] + temp0_6[0]
    float var_148_1 = temp0_6[0]
    zmm9[0] = zmm9[0] * temp0_6[0]
    temp0_1[0] = temp0_1[0] * temp0_6[0]
    temp0_2[0] = temp0_2[0] * temp0_6[0]

zmm8[0] = zmm8[0] * zmm8[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm11[0] = zmm11[0] * zmm11[0]
zmm8[0] = zmm8[0] + zmm10[0]
zmm8[0] = zmm8[0] + zmm11[0]

if (not(zmm8[0] <= 9.99999994e-09f))
    float temp0_7[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
    zmm2 = 0x3f000000
    zmm8[0] = zmm8[0] * 0.5f
    temp0_7[0] = temp0_7[0] * temp0_7[0]
    zmm8[0] = zmm8[0] * temp0_7[0]
    zmm2[0] = 0.5f - zmm8[0]
    temp0_7[0] = temp0_7[0] * zmm2[0]
    temp0_7[0] = temp0_7[0] + temp0_7[0]
    temp0_7[0] = temp0_7[0] * temp0_7[0]
    zmm8[0] = zmm8[0] * temp0_7[0]
    temp0_7[0] = temp0_7[0] * (0.5f - zmm8[0])
    temp0_7[0] = temp0_7[0] + temp0_7[0]
    float var_148_2 = temp0_7[0]
    zmm10[0] = zmm10[0] * temp0_7[0]
    zmm8[0] = zmm8[0] * temp0_7[0]
    zmm11[0] = zmm11[0] * temp0_7[0]

int64_t rax_4 = *arg5
zmm8[0] = zmm8[0] * temp0_1[0]
zmm10[0] = zmm10[0] * zmm9[0]
float zmm7[0x4] = *(rax_4 + (rdi << 2))
zmm7[0] = zmm7[0] * 0.0174532924f
zmm10[0] = zmm10[0] + zmm8[0]
zmm11[0] = zmm11[0] * temp0_2[0]
zmm10[0] = zmm10[0] + zmm11[0]

if (zmm10[0] >= -1f)
    zmm2 = __minss_xmmss_memss(zmm10[0], 0x3f800000)
else
    zmm2 = 0xbf800000

float zmm14[0x4]
float var_b8[0x4] = zmm14
int32_t result
float zmm0_2[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm9_1[0x4]
float zmm10_1[0x4]
float zmm11_1[0x4]
result, zmm0_2, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1 =
    sub_140acf590(acosf(zmm2[0]), zmm7 ^ data_142d3f780, zmm7)
float zmm6_1[0x4] = zmm0_2

if (__andps_xmmxud_memxud(zmm0_2, data_142d3f770)[0] <= 9.99999975e-05f)
    result.b = 0
else
    if (arg4 == 0)
        goto label_141a83c0b
    
    float zmm1_1[0x4] = (*rbx_2)[0x1e]
    
    if (zmm7_1[0] <= zmm1_1[0])
        result.b = 0
    else
        zmm1_1[0] = zmm1_1[0] + zmm6_1[0]
        
        if (not(zmm7_1[0] >= zmm1_1[0]))
            zmm6_1 = zmm7_1
            zmm6_1[0] = zmm6_1[0] - zmm1_1[0]
        
        if (not(zmm7_1[0] >= zmm1_1[0]) && zmm6_1[0] <= 9.99999975e-05f)
            result.b = 0
        else
            zmm1_1[0] = zmm1_1[0] + zmm6_1[0]
            (*rbx_2)[0x1e] = zmm1_1[0]
        label_141a83c0b:
            zmm7_1 = zmm11_1
            zmm8_1[0] = zmm8_1[0] * zmm9_1[0]
            zmm14 = zmm10_1
            zmm14[0] = zmm14[0] * zmm9_1[0]
            zmm7_1[0] = zmm7_1[0] * temp0_1[0]
            zmm8_1[0] = zmm8_1[0] * zmm9[0]
            zmm7_1[0] = zmm7_1[0] - zmm8_1[0]
            zmm11_1[0] = zmm11_1[0] * zmm9[0]
            zmm10_1[0] = zmm10_1[0] * temp0_1[0]
            zmm14[0] = zmm14[0] - zmm11_1[0]
            zmm8_1[0] = zmm8_1[0] - zmm10_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
            zmm14[0] = zmm14[0] + zmm7_1[0]
            zmm14[0] = zmm14[0] + zmm8_1[0]
            
            if (zmm14[0] <= 0f)
                result.b = 0
            else
                float zmm2_1[0x4]
                float zmm4_1[0x4]
                uint32_t zmm5_1[0x4]
                
                if (not(zmm14[0] <= 9.99999994e-09f))
                    zmm4_1 = 0x3f000000
                    zmm5_1 = _mm_rsqrt_ss(zmm14[0], zmm14[0])
                    zmm2_1 = 0x3f000000
                    zmm14[0] = zmm14[0] * 0.5f
                    zmm0_2 = zmm5_1
                    zmm0_2[0] = zmm0_2[0] f* zmm5_1[0]
                    zmm14[0] = zmm14[0] * zmm0_2[0]
                    zmm0_2 = zmm5_1
                    zmm2_1[0] = 0.5f - zmm14[0]
                    zmm0_2[0] = zmm0_2[0] * zmm2_1[0]
                    zmm5_1[0] = zmm5_1[0] f+ zmm0_2[0]
                    zmm1_1 = zmm5_1
                    zmm0_2 = zmm5_1
                    zmm1_1[0] = zmm1_1[0] f* zmm5_1[0]
                    zmm14[0] = zmm14[0] * zmm1_1[0]
                    zmm4_1[0] = 0.5f - zmm14[0]
                    zmm0_2[0] = zmm0_2[0] * zmm4_1[0]
                    zmm5_1[0] = zmm5_1[0] f+ zmm0_2[0]
                    zmm0_2 = zmm5_1
                    uint32_t var_148_3 = zmm5_1[0]
                    zmm1_1 = zmm5_1
                    zmm0_2[0] = zmm0_2[0] * zmm7_1[0]
                    zmm1_1[0] = zmm1_1[0] * zmm14[0]
                    zmm5_1[0] = zmm5_1[0] f* zmm8_1[0]
                    zmm7_1 = zmm0_2
                    zmm14 = zmm1_1
                    zmm8_1 = zmm5_1
                
                zmm6_1[0] = zmm6_1[0] * 0.5f
                bool cond:0_1 = zmm6_1[0] < 0f
                zmm6_1[0] = zmm6_1[0] * 0.159154937f
                
                if (cond:0_1)
                    zmm6_1[0] = zmm6_1[0] - 0.5f
                else
                    zmm6_1[0] = zmm6_1[0] + 0.5f
                
                float temp0_11[0x4] = _mm_cvtepi32_ps(zx.o(int.d(zmm6_1[0])))
                temp0_11[0] = temp0_11[0] * 6.28318548f
                zmm6_1[0] = zmm6_1[0] - temp0_11[0]
                
                if (not(zmm6_1[0] <= 1.57079637f))
                    zmm0_2 = 0x40490fdb
                    zmm4_1 = 0xbf800000
                    zmm0_2[0] = 3.14159274f - zmm6_1[0]
                    zmm6_1 = zmm0_2
                else if (zmm6_1[0] >= -1.57079637f)
                    zmm4_1 = 0x3f800000
                else
                    zmm0_2 = 0xc0490fdb
                    zmm4_1 = 0xbf800000
                    zmm0_2[0] = -3.14159274f - zmm6_1[0]
                    zmm6_1 = zmm0_2
                
                zmm3 = 0x3638b88e
                zmm1_1 = 0x37cfb4c2
                zmm9_1 = data_143f2b4d0
                zmm10_1 = data_143f2b4c0
                zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
                int32_t var_148_4 = 0x322bcc77
                zmm6_1[0] = zmm6_1[0] * 2.3889859e-08f
                zmm3[0] = 2.75255616e-06f - zmm6_1[0]
                zmm6_1[0] = zmm6_1[0] * 2.60516146e-07f
                zmm1_1[0] = 2.47604949e-05f - zmm6_1[0]
                zmm3[0] = zmm3[0] * zmm6_1[0]
                zmm3[0] = zmm3[0] - 0.000198408743f
                zmm1_1[0] = zmm1_1[0] * zmm6_1[0]
                zmm1_1[0] = zmm1_1[0] - 0.00138883782f
                zmm3[0] = zmm3[0] * zmm6_1[0]
                zmm3[0] = zmm3[0] + 0.00833333097f
                zmm1_1[0] = zmm1_1[0] * zmm6_1[0]
                zmm1_1[0] = zmm1_1[0] + 0.0416666381f
                zmm3[0] = zmm3[0] * zmm6_1[0]
                zmm3[0] = zmm3[0] - 0.166666672f
                zmm1_1[0] = zmm1_1[0] * zmm6_1[0]
                zmm1_1[0] = zmm1_1[0] - 0.5f
                zmm3[0] = zmm3[0] * zmm6_1[0]
                zmm3[0] = zmm3[0] + 1f
                zmm1_1[0] = zmm1_1[0] * zmm6_1[0]
                zmm2_1 = *rbx_2
                zmm3[0] = zmm3[0] * zmm6_1[0]
                zmm1_1[0] = zmm1_1[0] + 1f
                zmm5_1 = data_143f2b570
                float temp0_12[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b)
                zmm7_1[0] = zmm7_1[0] * zmm3[0]
                zmm1_1[0] = zmm1_1[0] * zmm4_1[0]
                float temp0_13[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xe1)
                zmm14[0] = zmm14[0] * zmm3[0]
                zmm3[0] = zmm3[0] * zmm8_1[0]
                zmm8_1 = data_143f2b4e0
                temp0_13[0] = zmm14[0]
                float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
                temp0_14[0] = zmm3[0]
                float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
                temp0_15[0] = zmm1_1[0]
                float temp0_16[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
                float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
                uint32_t var_138[0x4] = temp0_17
                float temp0_19[0x4] = _mm_mul_ps(temp0_12, _mm_shuffle_ps(temp0_17, temp0_17, 0))
                float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xff), zmm2_1)
                float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm8_1)
                float temp0_23[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
                float temp0_24[0x4] = _mm_add_ps(temp0_22, temp0_21)
                float temp0_26[0x4] = _mm_mul_ps(temp0_16, _mm_shuffle_ps(temp0_17, temp0_17, 0x55))
                float temp0_28[0x4] = _mm_mul_ps(temp0_23, _mm_shuffle_ps(temp0_17, temp0_17, 0xaa))
                float temp0_29[0x4] = _mm_mul_ps(temp0_26, zmm9_1)
                float temp0_30[0x4] = _mm_mul_ps(temp0_28, zmm10_1)
                float temp0_32[0x4] = _mm_add_ps(_mm_add_ps(temp0_24, temp0_29), temp0_30)
                float temp0_33[0x4] = _mm_mul_ps(temp0_32, temp0_32)
                float temp0_35[0x4] = _mm_add_ps(temp0_33, _mm_shuffle_ps(temp0_33, temp0_33, 0x4e))
                float temp0_37[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x39), temp0_35)
                float temp0_38[0x4] = _mm_rsqrt_ps(temp0_37)
                float temp0_39[0x4] = _mm_mul_ps(temp0_37, zmm5_1)
                float temp0_44[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_38, temp0_38), temp0_39)), 
                        temp0_38), 
                    temp0_38)
                zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_44, temp0_44), temp0_39))
                zmm0_2 = var_148_4
                float temp0_49[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_2, zmm0_2, 0), temp0_37, 2)
                *rbx_2 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_44), temp0_44), temp0_32)
                        ^ data_143f2b560, 
                    temp0_49) ^ data_143f2b560
                float var_118[0x4]
                
                if (rdi.d s> 0)
                    float (* rax_8)[0x4] = sub_140ad7d70(rbx_2, &var_118, *arg1 - 0x80 + (rdi << 7))
                    zmm8_1 = data_143f2b4e0
                    zmm9_1 = data_143f2b4d0
                    zmm10_1 = data_143f2b4c0
                    zmm6_1 = *rax_8
                    rbx_2[3] = zmm6_1
                    rbx_2[4] = rax_8[1]
                    zmm1_1 = rax_8[2]
                    float temp0_54[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
                    rbx_2[5] = zmm1_1
                    zmm5_1 = data_143f2b570
                    float temp0_56[0x4] =
                        _mm_add_ps(temp0_54, _mm_shuffle_ps(temp0_54, temp0_54, 0x4e))
                    float temp0_58[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0x39), temp0_56)
                    float temp0_59[0x4] = _mm_rsqrt_ps(temp0_58)
                    float temp0_60[0x4] = _mm_mul_ps(temp0_58, zmm5_1)
                    float temp0_65[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm5_1, 
                                _mm_mul_ps(_mm_mul_ps(temp0_59, temp0_59), temp0_60)), 
                            temp0_59), 
                        temp0_59)
                    zmm5_1 =
                        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_65, temp0_65), temp0_60))
                    float temp0_69[0x4] = _mm_cmpeq_ps(data_143f2b580, temp0_58, 2)
                    rbx_2[3] = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_65), temp0_65), zmm6_1)
                            ^ data_143f2b560, 
                        temp0_69) ^ data_143f2b560
                
                zmm5_1 = *rbx_2
                float zmm15[0x4] = rbx_2[1]
                zmm7_1 = rbx_2[2]
                int64_t rcx_1 = sx.q((rdi + 1).d)
                
                if (rcx_1 s<= rsi - 1)
                    uint32_t (* rbx_4)[0x4] = rcx_1 << 7
                    int64_t i_1 = rsi - 1 - rcx_1 + 1
                    int64_t i
                    
                    do
                        int64_t rdi_1 = *arg1
                        zmm1_1 = data_143f2b5a0
                        float var_128_1[0x4] = zmm1_1
                        zmm14 = *(rbx_4 + rdi_1 + 0x50)
                        float zmm12[0x4] = *(rbx_4 + rdi_1 + 0x30)
                        float zmm13[0x4] = *(rbx_4 + rdi_1 + 0x40)
                        zmm0_2 = zmm5_1
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm7_1), zmm1_1, 1))
                                == 0)
                            float temp0_206[0x4] = _mm_shuffle_ps(zmm0_2, zmm5_1, 0)
                            float temp0_208[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), temp0_206)
                            float temp0_209[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x4e)
                            float temp0_210[0x4] = _mm_mul_ps(zmm13, zmm7_1)
                            float temp0_211[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                            float temp0_212[0x4] = _mm_mul_ps(zmm12, temp0_211)
                            float temp0_213[0x4] = _mm_mul_ps(temp0_208, zmm8_1)
                            float temp0_214[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                            float temp0_215[0x4] = _mm_shuffle_ps(temp0_210, temp0_210, 0xd2)
                            float temp0_216[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xb1)
                            float temp0_217[0x4] = _mm_add_ps(temp0_213, temp0_212)
                            zmm7_1 = _mm_mul_ps(zmm7_1, zmm14)
                            float temp0_220[0x4] =
                                _mm_mul_ps(temp0_209, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
                            float temp0_222[0x4] =
                                _mm_mul_ps(temp0_216, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
                            float temp0_223[0x4] = _mm_mul_ps(temp0_220, zmm9_1)
                            float temp0_225[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_210, temp0_210, 0xc9), temp0_214)
                            float temp0_226[0x4] = _mm_add_ps(temp0_217, temp0_223)
                            zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                            float temp0_228[0x4] = _mm_mul_ps(temp0_215, zmm5_1)
                            float temp0_229[0x4] = _mm_mul_ps(temp0_222, zmm10_1)
                            float temp0_230[0x4] = _mm_sub_ps(temp0_228, temp0_225)
                            zmm6_1 = _mm_add_ps(temp0_226, temp0_229)
                            float temp0_232[0x4] = _mm_add_ps(temp0_230, temp0_230)
                            float temp0_233[0x4] = _mm_mul_ps(temp0_211, temp0_232)
                            float temp0_235[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xd2), zmm5_1)
                            float temp0_236[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0xc9)
                            float temp0_237[0x4] = _mm_add_ps(temp0_233, temp0_210)
                            zmm15 = _mm_add_ps(zmm15, 
                                _mm_add_ps(_mm_sub_ps(temp0_235, _mm_mul_ps(temp0_236, temp0_214)), 
                                    temp0_237))
                        else
                            zmm9_1 = data_143f2b550
                            float temp0_77[0x4] = _mm_shuffle_ps(zmm0_2, zmm5_1, 4)
                            float temp0_78[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
                            float temp0_79[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
                            _mm_mul_ps(zmm14, zmm7_1)
                            float temp0_82[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0x29), temp0_77)
                            float temp0_83[0x4] = _mm_mul_ps(temp0_78, zmm5_1)
                            float temp0_86[0x4] = _mm_mul_ps(
                                _mm_shuffle_ps(temp0_78, temp0_78, 0x12), 
                                _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff))
                            float temp0_89[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_83, temp0_83, 0x1a), 
                                _mm_shuffle_ps(temp0_83, temp0_83, 1))
                            float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_82)
                            float temp0_91[0x4] = _mm_sub_ps(temp0_82, temp0_86)
                            float temp0_92[0x4] = _mm_add_ps(zmm12, zmm12)
                            float temp0_93[0x4] = _mm_mul_ps(temp0_90, zmm7_1)
                            float temp0_94[0x4] = _mm_mul_ps(temp0_79, temp0_91)
                            float temp0_95[0x4] = _mm_mul_ps(temp0_92, zmm12)
                            zmm1_1 = __andps_xmmxud_memxud(
                                _mm_mul_ps(_mm_sub_ps(zmm9_1, temp0_89), zmm7_1), data_143f2b540)
                            float temp0_99[0x4] = _mm_shuffle_ps(temp0_94, zmm1_1, 0x32)
                            float temp0_101[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(temp0_93, zmm1_1, 0), temp0_99, 0x82)
                            float temp0_102[0x4] = _mm_shuffle_ps(temp0_93, zmm1_1, 0x31)
                            float temp0_104[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_94, zmm1_1, 0x10), temp0_102, 0x88)
                            float temp0_106[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_93, temp0_94, 0x12), zmm1_1, 0xe8)
                            float temp0_107[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0x29)
                            zmm9_1[0].q = zmm15 u>> 0x40
                            float temp0_108[0x4] = _mm_shuffle_ps(zmm15, zmm9_1, 0xc4)
                            float temp0_110[0x4] =
                                _mm_mul_ps(temp0_107, _mm_shuffle_ps(zmm12, zmm12, 4))
                            float temp0_113[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_95, temp0_95, 0x1a), 
                                _mm_shuffle_ps(temp0_95, temp0_95, 1))
                            float temp0_114[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                            float temp0_116[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0x12), temp0_114)
                            float temp0_117[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                            float temp0_118[0x4] = _mm_add_ps(temp0_116, temp0_110)
                            float temp0_119[0x4] = _mm_sub_ps(temp0_110, temp0_116)
                            float temp0_120[0x4] = _mm_mul_ps(temp0_118, zmm14)
                            float temp0_121[0x4] = _mm_mul_ps(temp0_117, temp0_119)
                            zmm1_1 = __andps_xmmxud_memxud(
                                _mm_mul_ps(_mm_sub_ps(zmm9_1, temp0_113), zmm14), data_143f2b540)
                            float temp0_125[0x4] = _mm_shuffle_ps(temp0_121, zmm1_1, 0x32)
                            float temp0_127[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_120, zmm1_1, 0), temp0_125, 0x82)
                            float temp0_128[0x4] = _mm_shuffle_ps(temp0_120, zmm1_1, 0x31)
                            zmm5_1 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_121, zmm1_1, 0x10), 
                                temp0_128, 0x88)
                            float temp0_131[0x4] = _mm_shuffle_ps(temp0_120, temp0_121, 0x12)
                            float temp0_132[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0x55)
                            float temp0_133[0x4] = _mm_shuffle_ps(temp0_131, zmm1_1, 0xe8)
                            float temp0_134[0x4] = _mm_mul_ps(temp0_132, temp0_104)
                            float temp0_136[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_127, temp0_127, 0xaa), temp0_106)
                            zmm9_1[0].q = zmm13 u>> 0x40
                            float temp0_137[0x4] = _mm_shuffle_ps(zmm13, zmm9_1, 0xc4)
                            float temp0_138[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0)
                            float temp0_140[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_127, temp0_127, 0xff), temp0_108)
                            float temp0_142[0x4] =
                                _mm_add_ps(temp0_134, _mm_mul_ps(temp0_138, temp0_101))
                            float temp0_144[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_101)
                            float temp0_145[0x4] = _mm_add_ps(temp0_142, temp0_136)
                            float temp0_147[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), temp0_106)
                            float temp0_148[0x4] = _mm_add_ps(temp0_145, temp0_140)
                            float temp0_150[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), temp0_104)
                            zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                            var_118 = temp0_148
                            float temp0_152[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0x55)
                            float temp0_153[0x4] = _mm_add_ps(temp0_150, temp0_144)
                            float temp0_154[0x4] = _mm_mul_ps(temp0_152, temp0_104)
                            zmm5_1 = _mm_mul_ps(zmm5_1, temp0_108)
                            float temp0_156[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0)
                            float temp0_157[0x4] = _mm_add_ps(temp0_153, temp0_147)
                            float temp0_158[0x4] = _mm_mul_ps(temp0_156, temp0_101)
                            float temp0_160[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_133, temp0_133, 0xaa), temp0_106)
                            float temp0_161[0x4] = _mm_add_ps(temp0_157, zmm5_1)
                            float temp0_162[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0xff)
                            float temp0_163[0x4] = _mm_add_ps(temp0_154, temp0_158)
                            float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_108)
                            float temp0_165[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0)
                            int96_t var_108_1 = temp0_161[0].12
                            float temp0_166[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0x55)
                            float temp0_167[0x4] = _mm_add_ps(temp0_163, temp0_160)
                            float temp0_168[0x4] = _mm_mul_ps(temp0_166, temp0_104)
                            float temp0_170[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xaa), temp0_106)
                            float temp0_171[0x4] = _mm_mul_ps(temp0_165, temp0_101)
                            float temp0_172[0x4] = _mm_add_ps(temp0_167, temp0_164)
                            float temp0_174[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xff), temp0_108)
                            float temp0_175[0x4] = _mm_add_ps(temp0_168, temp0_171)
                            int96_t var_f8_1 = temp0_172[0].12
                            int96_t var_e8_1 =
                                _mm_add_ps(_mm_add_ps(temp0_175, temp0_170), temp0_174)[0].12
                            zmm9_1, zmm11_1 = sub_1407740e0(&var_118, 0x322bcc77)
                            float zmm2_2[0x4] = var_118[0]
                            float zmm1_2 = var_118[1]
                            float zmm4_2[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_128_1, zmm11_1, 2), 
                                data_143f2b590 ^ zmm9_1)
                            uint32_t zmm0_3[0x4] = var_118[2]
                            zmm4_2 ^= data_143f2b590
                            zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                            zmm1_2 = zmm1_2 * zmm4_2[0]
                            var_118[0] = zmm2_2[0]
                            zmm0_3[0] = zmm0_3[0] f* zmm4_2[0]
                            var_118[1] = zmm1_2
                            float temp0_180[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                            zmm1_2 = var_108_1:4.d * temp0_180[0]
                            var_118[2] = zmm0_3[0]
                            zmm0_3 = var_108_1:8.d
                            zmm0_3[0] = zmm0_3[0] f* temp0_180[0]
                            float zmm3_1 = var_108_1.d * temp0_180[0]
                            zmm2_2 = var_f8_1.d
                            float temp0_181[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                            var_108_1:4.d = zmm1_2
                            var_108_1:8.d = zmm0_3[0]
                            zmm0_3 = var_f8_1:8.d
                            zmm1_2 = var_f8_1:4.d * temp0_181[0]
                            zmm0_3[0] = zmm0_3[0] f* temp0_181[0]
                            zmm2_2[0] = zmm2_2[0] * temp0_181[0]
                            var_f8_1:4.d = zmm1_2
                            var_f8_1:8.d = zmm0_3[0]
                            var_108_1.d = zmm3_1
                            var_f8_1.d = zmm2_2[0]
                            sub_14077e4a0(&var_138, &var_118)
                            zmm5_1 = var_138
                            zmm7_1 = zmm11_1
                            zmm6_1 = data_143f2b570
                            zmm8_1 = data_143f2b4e0
                            zmm9_1 = data_143f2b4d0
                            zmm10_1 = data_143f2b4c0
                            float temp0_182[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                            float temp0_184[0x4] =
                                _mm_add_ps(temp0_182, _mm_shuffle_ps(temp0_182, temp0_182, 0x4e))
                            float temp0_186[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(temp0_184, temp0_184, 0x39), temp0_184)
                            float temp0_187[0x4] = _mm_rsqrt_ps(temp0_186)
                            float temp0_188[0x4] = _mm_mul_ps(temp0_186, zmm6_1)
                            float temp0_193[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_1, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_187, temp0_187), temp0_188)), 
                                    temp0_187), 
                                temp0_187)
                            float temp0_196[0x4] = _mm_sub_ps(zmm6_1, 
                                _mm_mul_ps(_mm_mul_ps(temp0_193, temp0_193), temp0_188))
                            float temp0_198[0x4] = _mm_cmpeq_ps(
                                _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_186, 2)
                            float temp0_200[0x4] =
                                _mm_add_ps(_mm_mul_ps(temp0_196, temp0_193), temp0_193)
                            float temp0_201[0x4] = _mm_unpacklo_ps(var_e8_1:4.d, 0)
                            zmm6_1 = _mm_and_ps(_mm_mul_ps(temp0_200, zmm5_1) ^ data_143f2b560, 
                                temp0_198) ^ data_143f2b560
                            zmm15 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_e8_1.d, var_e8_1:8.d[0].q), 
                                temp0_201[0].q)
                            var_138 = zmm6_1
                        
                        *(rbx_4 + rdi_1) = zmm6_1
                        float temp0_242[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
                        *(rbx_4 + rdi_1 + 0x10) = zmm15
                        *(rbx_4 + rdi_1 + 0x20) = zmm7_1
                        zmm5_1 = data_143f2b570
                        float temp0_244[0x4] =
                            _mm_add_ps(temp0_242, _mm_shuffle_ps(temp0_242, temp0_242, 0x4e))
                        float temp0_246[0x4] =
                            _mm_add_ps(_mm_shuffle_ps(temp0_244, temp0_244, 0x39), temp0_244)
                        float temp0_247[0x4] = _mm_rsqrt_ps(temp0_246)
                        float temp0_248[0x4] = _mm_mul_ps(temp0_246, zmm5_1)
                        float temp0_253[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm5_1, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_247, temp0_247), temp0_248)), 
                                temp0_247), 
                            temp0_247)
                        zmm5_1 = _mm_sub_ps(zmm5_1, 
                            _mm_mul_ps(_mm_mul_ps(temp0_253, temp0_253), temp0_248))
                        float temp0_257[0x4] = _mm_cmpeq_ps(data_143f2b580, temp0_246, 2)
                        zmm5_1 = _mm_and_ps(
                            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_253), temp0_253), zmm6_1)
                                ^ data_143f2b560, 
                            temp0_257) ^ data_143f2b560
                        *(rbx_4 + rdi_1) = zmm5_1
                        rbx_4 -= -0x80
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                result.b = 1

__security_check_cookie(rax_1 ^ &var_168)
return result
