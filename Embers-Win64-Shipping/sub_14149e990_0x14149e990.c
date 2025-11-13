// 函数: sub_14149e990
// 地址: 0x14149e990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 1
uint64_t result = zx.q(*(arg1 + 0x570))
int128_t* result_1 = arg3

if ((result.b & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (result.b & 0x10) == 0)
    int32_t rdx = arg3[9].d
    arg3[9].d = rdx + 8
    
    if (rdx + 8 s> *(arg3 + 0x94))
        sub_14149c420(result_1, rdx)
    
    float zmm7[0x4] = *(arg2 + 0x600)
    int32_t i = 0
    float zmm8[0x4] = *(arg2 + 0x604)
    float zmm9[0x4] = *(arg2 + 0x608)
    zmm7[0] = zmm7[0] f- *(arg1 + 0x54)
    zmm8[0] = zmm8[0] f- *(arg1 + 0x58)
    zmm9[0] = zmm9[0] f- *(arg1 + 0x5c)
    int32_t var_12c_1 = 0
    int32_t var_ec_1 = 0x3f800000
    float var_138[0x4]
    float var_f8[0x4]
    float zmm1[0x4]
    float zmm3[0x4]
    float zmm4[0x4]
    
    do
        for (int32_t j = 0; j u< 2; j += 1)
            for (int32_t k = 0; k u< 2; )
                if (i == 0)
                    zmm4 = 0x3f800000
                else
                    zmm4 = zx.o(0)
                
                zmm3 = j == 0 ? 0x3f800000 : 0xbf800000
                
                zmm1 = k == 0 ? 0x3f800000 : 0xbf800000
                
                int128_t* result_5 = result_1[8].q
                var_f8[0] = zmm1[0]
                float temp0_1[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xe1)
                temp0_1[0] = zmm3[0]
                int16_t r8 = k.w * 2 + j.w
                float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
                zmm3 = 0x3f800000
                temp0_2[0] = zmm4[0]
                float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
                float temp0_5[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(arg1 + 0x150))
                float temp0_7[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(arg1 + 0x140))
                int128_t* result_2 = result_1
                float temp0_9[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(arg1 + 0x120))
                float temp0_10[0x4] = _mm_add_ps(temp0_5, temp0_7)
                float temp0_12[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(arg1 + 0x130))
                
                if (result_5 != 0)
                    result_2 = result_5
                
                float temp0_14[0x4] = _mm_add_ps(temp0_10, _mm_add_ps(temp0_9, temp0_12))
                zmm3[0] = 1f / _mm_shuffle_ps(temp0_14, temp0_14, 0xff)[0]
                float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
                zmm3[0] = zmm3[0] * temp0_14[0]
                zmm3[0] = zmm3[0] * temp0_16[0]
                zmm3[0] = zmm3[0] + zmm7[0]
                float temp0_17[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
                zmm3[0] = zmm3[0] * temp0_17[0]
                zmm3[0] = zmm3[0] + zmm8[0]
                var_138[0] = zmm3[0]
                float temp0_18[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
                zmm3[0] = zmm3[0] + zmm9[0]
                temp0_18[0] = zmm3[0]
                float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
                temp0_19[0] = zmm3[0]
                float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
                result_2[zx.q(r8 * 2 + i.w)] = temp0_20
                
                if (i == 0)
                    zmm4 = 0x3f800000
                else
                    zmm4 = zx.o(0)
                
                zmm3 = j == 0 ? 0x3f800000 : 0xbf800000
                
                zmm1 = k == 0xffffffff ? 0x3f800000 : 0xbf800000
                
                int128_t* result_4 = result_1[8].q
                temp0_3[0] = zmm1[0]
                float temp0_21[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
                temp0_21[0] = zmm3[0]
                float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc6)
                zmm3 = 0x3f800000
                temp0_22[0] = zmm4[0]
                float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc9)
                var_f8 = temp0_23
                float temp0_25[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_23, temp0_23, 0xff), *(arg1 + 0x150))
                int128_t* result_3 = result_1
                float temp0_27[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_23, temp0_23, 0xaa), *(arg1 + 0x140))
                
                if (result_4 != 0)
                    result_3 = result_4
                
                k += 2
                float temp0_29[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_23, temp0_23, 0), *(arg1 + 0x120))
                float temp0_30[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
                float temp0_34[0x4] = _mm_add_ps(_mm_add_ps(temp0_25, temp0_27), 
                    _mm_add_ps(temp0_29, __mulps_xmmps_memps(temp0_30, *(arg1 + 0x130))))
                zmm3[0] = 1f / _mm_shuffle_ps(temp0_34, temp0_34, 0xff)[0]
                float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x55)
                zmm3[0] = zmm3[0] * temp0_34[0]
                zmm3[0] = zmm3[0] * temp0_36[0]
                zmm3[0] = zmm3[0] + zmm7[0]
                float temp0_37[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)
                zmm3[0] = zmm3[0] * temp0_37[0]
                zmm3[0] = zmm3[0] + zmm8[0]
                temp0_20[0] = zmm3[0]
                float temp0_38[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xe1)
                zmm3[0] = zmm3[0] + zmm9[0]
                temp0_38[0] = zmm3[0]
                float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc6)
                temp0_39[0] = zmm3[0]
                float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xc9)
                var_138 = temp0_40
                result_3[zx.q((r8 + 2) * 2 + i.w)] = temp0_40
        
        i += 1
    while (i u< 2)
    
    float zmm2[0x4] = zx.o(*(arg2 + 0x600))
    float zmm0[0x4] = zx.o(*(arg2 + 0x60c))
    var_f8[0].q = zmm2.q
    zmm1 = var_f8[1]
    var_138[2] = *(arg2 + 0x614)
    var_f8[2] = *(arg2 + 0x608)
    result = result_1[8].q
    var_138[0].q = zmm0.q
    zmm0 = var_f8[2]
    
    if (result != 0)
        result_1 = result
    
    zmm3 = *(result_1 + 0x58)
    float zmm15[0x4] = *(result_1 + 0x54)
    zmm3[0] = zmm3[0] - zmm0[0]
    float zmm12[0x4] = *(result_1 + 0x14)
    zmm15[0] = zmm15[0] - zmm1[0]
    float zmm5[0x4] = result_1[1].d
    zmm12[0] = zmm12[0] - zmm1[0]
    float zmm13[0x4] = result_1[5].d
    zmm5[0] = zmm5[0] - zmm2[0]
    zmm4 = result_1[7].d
    zmm13[0] = zmm13[0] - zmm2[0]
    float zmm10[0x4] = result_1[4].d
    zmm4[0] = zmm4[0] - zmm2[0]
    zmm9 = result_1[2].d
    zmm10[0] = zmm10[0] - zmm2[0]
    float zmm14[0x4] = *(result_1 + 0x18)
    zmm9[0] = zmm9[0] - zmm2[0]
    float zmm11[0x4] = *(result_1 + 0x64)
    zmm14[0] = zmm14[0] - zmm0[0]
    zmm7 = *(result_1 + 0x48)
    zmm11[0] = zmm11[0] - zmm1[0]
    zmm8 = *(result_1 + 0x28)
    zmm7[0] = zmm7[0] - zmm0[0]
    float arg_8 = zmm3[0]
    zmm8[0] = zmm8[0] - zmm0[0]
    zmm3 = *(result_1 + 0x74)
    zmm3[0] = zmm3[0] - zmm1[0]
    float var_128_1 = zmm12[0]
    float var_e8_1 = zmm13[0]
    zmm13[0] = zmm13[0] - zmm5[0]
    float var_d8_1 = zmm4[0]
    zmm4[0] = zmm4[0] - zmm5[0]
    float var_148_1 = zmm5[0]
    float arg_20 = zmm14[0]
    float var_e0_1 = zmm3[0]
    zmm3 = *(result_1 + 0x78)
    zmm3[0] = zmm3[0] - zmm0[0]
    float var_10c_1 = zmm15[0]
    float var_118_1 = zmm3[0]
    zmm3 = *result_1
    zmm3[0] = zmm3[0] - zmm2[0]
    float var_120_1 = zmm3[0]
    zmm3 = *(result_1 + 4)
    zmm3[0] = zmm3[0] - zmm1[0]
    float var_110_1 = zmm3[0]
    zmm3 = *(result_1 + 8)
    zmm3[0] = zmm3[0] - zmm0[0]
    float var_11c_1 = zmm3[0]
    zmm3 = *(result_1 + 0x44)
    zmm3[0] = zmm3[0] - zmm1[0]
    float var_124_1 = zmm3[0]
    zmm3 = result_1[6].d
    zmm3[0] = zmm3[0] - zmm2[0]
    zmm2 = *(result_1 + 0x24)
    zmm2[0] = zmm2[0] - zmm1[0]
    zmm1 = var_118_1
    zmm1[0] = zmm1[0] - zmm14[0]
    float var_e4_1 = zmm3[0]
    zmm3 = *(result_1 + 0x68)
    zmm3[0] = zmm3[0] - zmm0[0]
    float var_108_1 = zmm2[0]
    zmm2 = zmm15
    zmm2[0] = zmm2[0] - zmm12[0]
    float var_dc_1 = zmm3[0]
    zmm3 = var_e0_1
    zmm3[0] = zmm3[0] - zmm12[0]
    zmm12 = arg_8
    zmm12[0] = zmm12[0] - zmm14[0]
    zmm15 = data_143dbb200
    zmm14 = zmm2
    zmm5 = 0x322bcc77
    zmm12[0] = zmm12[0] * zmm3[0]
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm14[0] = zmm14[0] * zmm1[0]
    zmm12[0] = zmm12[0] * zmm4[0]
    zmm4 = data_143dbb1f8
    zmm14[0] = zmm14[0] - zmm12[0]
    zmm13[0] = zmm13[0] * zmm3[0]
    zmm3 = data_143dbb1fc
    zmm13[0] = zmm13[0] * zmm1[0]
    zmm13[0] = zmm13[0] - zmm2[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm12[0] = zmm12[0] - zmm13[0]
    zmm13[0] = zmm13[0] * zmm13[0]
    zmm12[0] = zmm12[0] * zmm12[0]
    zmm14[0] = zmm14[0] + zmm12[0]
    zmm14[0] = zmm14[0] + zmm13[0]
    
    if (not(zmm14[0] == 1f))
        if (zmm14[0] >= 9.99999994e-09f)
            zmm4 = 0x3f000000
            float temp0_41[0x4] = _mm_rsqrt_ss(zmm14[0], zmm14[0])
            zmm2 = 0x3f000000
            zmm14[0] = zmm14[0] * 0.5f
            temp0_41[0] = temp0_41[0] * temp0_41[0]
            zmm14[0] = zmm14[0] * temp0_41[0]
            zmm2[0] = 0.5f - zmm14[0]
            temp0_41[0] = temp0_41[0] * zmm2[0]
            temp0_41[0] = temp0_41[0] + temp0_41[0]
            temp0_41[0] = temp0_41[0] * temp0_41[0]
            zmm14[0] = zmm14[0] * temp0_41[0]
            zmm4[0] = 0.5f - zmm14[0]
            zmm3 = data_143dbb1fc
            temp0_41[0] = temp0_41[0] * zmm4[0]
            zmm4 = data_143dbb1f8
            temp0_41[0] = temp0_41[0] + temp0_41[0]
            float var_114_1 = temp0_41[0]
            zmm14[0] = zmm14[0] * temp0_41[0]
            zmm12[0] = zmm12[0] * temp0_41[0]
            zmm13[0] = zmm13[0] * temp0_41[0]
            zmm5 = 0x322bcc77
        else
            zmm14 = zmm4
            zmm12 = zmm3
            zmm13 = zmm15
    
    zmm2 = var_128_1
    zmm0 = zmm12
    zmm0[0] = zmm0[0] * var_138[1]
    zmm1 = zmm14
    zmm1[0] = zmm1[0] * var_138[0]
    zmm2[0] = zmm2[0] * zmm12[0]
    zmm12 = var_148_1
    zmm1[0] = zmm1[0] + zmm0[0]
    zmm0 = var_138[2]
    zmm0[0] = zmm0[0] * zmm13[0]
    zmm1[0] = zmm1[0] + zmm0[0]
    zmm12[0] = zmm12[0] * zmm14[0]
    zmm12[0] = zmm12[0] - zmm9[0]
    zmm14 = var_128_1
    zmm14[0] = zmm14[0] - var_108_1
    zmm2[0] = zmm2[0] + zmm12[0]
    float var_114_2 = zmm1[0]
    zmm1 = arg_20
    zmm0 = var_114_2
    zmm1[0] = zmm1[0] * zmm13[0]
    zmm13 = arg_20
    float var_148_2 = zmm12[0]
    zmm13[0] = zmm13[0] - zmm8[0]
    zmm12 = var_120_1
    zmm2[0] = zmm2[0] + zmm1[0]
    zmm1 = var_11c_1
    zmm12[0] = zmm12[0] - zmm9[0]
    zmm1[0] = zmm1[0] - zmm8[0]
    float var_128_2 = zmm14[0]
    arg_20 = zmm13[0]
    zmm0[0] = zmm0[0] - zmm2[0]
    zmm2 = var_110_1
    zmm2[0] = zmm2[0] - var_108_1
    float var_114_3 = zmm0[0]
    zmm0 = zmm14
    zmm14 = var_148_2
    zmm0[0] = zmm0[0] * zmm1[0]
    zmm13[0] = zmm13[0] * zmm2[0]
    zmm14[0] = zmm14[0] * zmm1[0]
    zmm13[0] = zmm13[0] - zmm0[0]
    zmm12[0] = zmm12[0] * arg_20
    zmm12[0] = zmm12[0] * var_128_2
    zmm14[0] = zmm14[0] - zmm12[0]
    zmm0 = var_148_2
    zmm0[0] = zmm0[0] * zmm2[0]
    zmm12[0] = zmm12[0] - zmm0[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm13[0] = zmm13[0] * zmm13[0]
    zmm12[0] = zmm12[0] * zmm12[0]
    zmm14[0] = zmm14[0] + zmm13[0]
    zmm14[0] = zmm14[0] + zmm12[0]
    
    if (not(zmm14[0] == 1f))
        if (zmm14[0] >= zmm5[0])
            zmm4 = 0x3f000000
            float temp0_42[0x4] = _mm_rsqrt_ss(zmm14[0], zmm14[0])
            zmm2 = 0x3f000000
            zmm14[0] = zmm14[0] * 0.5f
            temp0_42[0] = temp0_42[0] * temp0_42[0]
            zmm14[0] = zmm14[0] * temp0_42[0]
            zmm2[0] = 0.5f - zmm14[0]
            temp0_42[0] = temp0_42[0] * zmm2[0]
            temp0_42[0] = temp0_42[0] + temp0_42[0]
            temp0_42[0] = temp0_42[0] * temp0_42[0]
            zmm14[0] = zmm14[0] * temp0_42[0]
            zmm4[0] = 0.5f - zmm14[0]
            temp0_42[0] = temp0_42[0] * zmm4[0]
            temp0_42[0] = temp0_42[0] + temp0_42[0]
            arg_20 = temp0_42[0]
            temp0_42[0] = temp0_42[0] * zmm13[0]
            temp0_42[0] = temp0_42[0] * zmm14[0]
            temp0_42[0] = temp0_42[0] * zmm12[0]
            zmm13 = temp0_42
            zmm14 = temp0_42
            zmm12 = temp0_42
        else
            zmm13 = zmm4
            zmm14 = zmm3
            zmm12 = zmm15
    
    zmm5 = var_108_1
    zmm3 = var_138[0]
    zmm0 = var_138[1]
    zmm9[0] = zmm9[0] - zmm10[0]
    zmm1 = var_138[2]
    zmm3[0] = zmm3[0] * zmm13[0]
    zmm0[0] = zmm0[0] * zmm14[0]
    zmm1[0] = zmm1[0] * zmm12[0]
    zmm3[0] = zmm3[0] + zmm0[0]
    zmm9[0] = zmm9[0] * zmm13[0]
    zmm13 = var_120_1
    zmm5[0] = zmm5[0] * zmm14[0]
    zmm13[0] = zmm13[0] - zmm10[0]
    zmm3[0] = zmm3[0] + zmm1[0]
    zmm8[0] = zmm8[0] * zmm12[0]
    zmm12 = var_11c_1
    zmm9[0] = zmm9[0] + zmm5[0]
    zmm12[0] = zmm12[0] - zmm7[0]
    zmm9[0] = zmm9[0] + zmm8[0]
    zmm8[0] = zmm8[0] - zmm7[0]
    zmm12[0] = zmm12[0] * zmm9[0]
    zmm3[0] = zmm3[0] - zmm9[0]
    zmm2 = var_110_1
    zmm2[0] = zmm2[0] - var_124_1
    arg_20 = zmm3[0]
    zmm3 = zmm5
    zmm3[0] = zmm3[0] - var_124_1
    zmm5 = 0x322bcc77
    zmm14 = zmm2
    zmm14[0] = zmm14[0] * zmm8[0]
    zmm2[0] = zmm2[0] * zmm9[0]
    zmm12[0] = zmm12[0] * zmm3[0]
    zmm14[0] = zmm14[0] - zmm12[0]
    zmm13[0] = zmm13[0] * zmm3[0]
    zmm13[0] = zmm13[0] * zmm8[0]
    zmm13[0] = zmm13[0] - zmm2[0]
    zmm12[0] = zmm12[0] - zmm13[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm13[0] = zmm13[0] * zmm13[0]
    zmm12[0] = zmm12[0] * zmm12[0]
    zmm12[0] = zmm12[0] + zmm14[0]
    zmm12[0] = zmm12[0] + zmm13[0]
    
    if (not(zmm12[0] == 1f))
        if (zmm12[0] >= 9.99999994e-09f)
            zmm4 = 0x3f000000
            float temp0_43[0x4] = _mm_rsqrt_ss(zmm12[0], zmm12[0])
            zmm2 = 0x3f000000
            zmm12[0] = zmm12[0] * 0.5f
            temp0_43[0] = temp0_43[0] * temp0_43[0]
            zmm12[0] = zmm12[0] * temp0_43[0]
            zmm2[0] = 0.5f - zmm12[0]
            temp0_43[0] = temp0_43[0] * zmm2[0]
            temp0_43[0] = temp0_43[0] + temp0_43[0]
            temp0_43[0] = temp0_43[0] * temp0_43[0]
            zmm12[0] = zmm12[0] * temp0_43[0]
            zmm4[0] = 0.5f - zmm12[0]
            temp0_43[0] = temp0_43[0] * zmm4[0]
            temp0_43[0] = temp0_43[0] + temp0_43[0]
            float var_148_3 = temp0_43[0]
            temp0_43[0] = temp0_43[0] * zmm14[0]
            temp0_43[0] = temp0_43[0] * zmm13[0]
            temp0_43[0] = temp0_43[0] * zmm12[0]
            zmm14 = temp0_43
            zmm13 = temp0_43
            zmm5 = 0x322bcc77
            zmm12 = temp0_43
        else
            zmm14 = data_143dbb1f8
            zmm13 = zmm15
            zmm12 = data_143dbb1fc
    
    zmm2 = var_124_1
    zmm12[0] = zmm12[0] * var_138[1]
    zmm13[0] = zmm13[0] * var_138[2]
    zmm14[0] = zmm14[0] * var_138[0]
    zmm4 = var_e4_1
    zmm4[0] = zmm4[0] - var_e8_1
    zmm14[0] = zmm14[0] + zmm12[0]
    zmm2[0] = zmm2[0] * zmm12[0]
    zmm12 = zmm7
    zmm12[0] = zmm12[0] - arg_8
    zmm10[0] = zmm10[0] * zmm14[0]
    zmm14[0] = zmm14[0] + zmm13[0]
    zmm7[0] = zmm7[0] * zmm13[0]
    zmm13 = zmm10
    zmm13[0] = zmm13[0] - var_e8_1
    zmm2[0] = zmm2[0] + zmm10[0]
    zmm12[0] = zmm12[0] * zmm4[0]
    zmm2[0] = zmm2[0] + zmm7[0]
    zmm1 = var_dc_1
    zmm1[0] = zmm1[0] - arg_8
    zmm14[0] = zmm14[0] - zmm2[0]
    zmm2 = var_124_1
    zmm2[0] = zmm2[0] - var_10c_1
    float var_148_4 = zmm14[0]
    zmm11[0] = zmm11[0] - var_10c_1
    zmm14 = zmm2
    zmm2[0] = zmm2[0] * zmm4[0]
    zmm14[0] = zmm14[0] * zmm1[0]
    zmm12[0] = zmm12[0] * zmm11[0]
    zmm14[0] = zmm14[0] - zmm12[0]
    zmm13[0] = zmm13[0] * zmm11[0]
    zmm13[0] = zmm13[0] * zmm1[0]
    zmm13[0] = zmm13[0] - zmm2[0]
    zmm12[0] = zmm12[0] - zmm13[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm13[0] = zmm13[0] * zmm13[0]
    zmm12[0] = zmm12[0] * zmm12[0]
    zmm12[0] = zmm12[0] + zmm14[0]
    zmm12[0] = zmm12[0] + zmm13[0]
    
    if (zmm12[0] == 1f)
        zmm4 = data_143dbb1f8
        zmm3 = data_143dbb1fc
    else if (zmm12[0] >= zmm5[0])
        zmm4 = 0x3f000000
        float temp0_44[0x4] = _mm_rsqrt_ss(zmm12[0], zmm12[0])
        zmm2 = 0x3f000000
        zmm12[0] = zmm12[0] * 0.5f
        temp0_44[0] = temp0_44[0] * temp0_44[0]
        zmm12[0] = zmm12[0] * temp0_44[0]
        zmm2[0] = 0.5f - zmm12[0]
        temp0_44[0] = temp0_44[0] * zmm2[0]
        temp0_44[0] = temp0_44[0] + temp0_44[0]
        temp0_44[0] = temp0_44[0] * temp0_44[0]
        zmm12[0] = zmm12[0] * temp0_44[0]
        zmm4[0] = 0.5f - zmm12[0]
        temp0_44[0] = temp0_44[0] * zmm4[0]
        temp0_44[0] = temp0_44[0] + temp0_44[0]
        temp0_44[0] = temp0_44[0] * zmm14[0]
        temp0_44[0] = temp0_44[0] * zmm12[0]
        temp0_44[0] = temp0_44[0] * zmm13[0]
        zmm14 = temp0_44
        zmm12 = temp0_44
        zmm13 = temp0_44
        zmm4 = data_143dbb1f8
        zmm3 = data_143dbb1fc
    else
        zmm4 = data_143dbb1f8
        zmm13 = zmm15
        zmm3 = data_143dbb1fc
        zmm14 = zmm4
        zmm12 = zmm3
    
    zmm7[0] = zmm7[0] - var_11c_1
    zmm10[0] = zmm10[0] - var_120_1
    zmm5 = var_e8_1
    zmm0 = zmm12
    zmm0[0] = zmm0[0] * var_138[1]
    zmm13[0] = zmm13[0] * var_138[2]
    zmm15 = zmm14
    zmm15[0] = zmm15[0] * var_138[0]
    zmm2 = var_10c_1
    zmm2[0] = zmm2[0] * zmm12[0]
    zmm12 = arg_8
    zmm15[0] = zmm15[0] + zmm0[0]
    zmm5[0] = zmm5[0] - var_120_1
    zmm5[0] = zmm5[0] * zmm14[0]
    zmm14 = var_110_1
    zmm15[0] = zmm15[0] + zmm13[0]
    zmm12[0] = zmm12[0] - var_11c_1
    zmm2[0] = zmm2[0] + zmm5[0]
    zmm12[0] = zmm12[0] * zmm13[0]
    zmm13 = var_10c_1
    zmm7[0] = zmm7[0] * zmm5[0]
    zmm13[0] = zmm13[0] - zmm14[0]
    zmm2[0] = zmm2[0] + zmm12[0]
    arg_8 = zmm12[0]
    zmm1 = var_124_1
    zmm1[0] = zmm1[0] - zmm14[0]
    zmm7[0] = zmm7[0] * zmm13[0]
    zmm15[0] = zmm15[0] - zmm2[0]
    zmm12 = zmm1
    zmm1[0] = zmm1[0] * zmm5[0]
    zmm12[0] = zmm12[0] * arg_8
    zmm5 = 0x322bcc77
    zmm12[0] = zmm12[0] - zmm7[0]
    zmm10[0] = zmm10[0] * arg_8
    zmm10[0] = zmm10[0] * zmm13[0]
    zmm7[0] = zmm7[0] - zmm10[0]
    zmm12[0] = zmm12[0] * zmm12[0]
    zmm10[0] = zmm10[0] - zmm1[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm7[0] = zmm7[0] + zmm12[0]
    zmm7[0] = zmm7[0] + zmm10[0]
    
    if (zmm7[0] == 1f)
        zmm3 = data_143dbb200
    else if (zmm7[0] >= 9.99999994e-09f)
        zmm4 = 0x3f000000
        float temp0_45[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        zmm2 = 0x3f000000
        zmm7[0] = zmm7[0] * 0.5f
        temp0_45[0] = temp0_45[0] * temp0_45[0]
        zmm7[0] = zmm7[0] * temp0_45[0]
        zmm2[0] = 0.5f - zmm7[0]
        temp0_45[0] = temp0_45[0] * zmm2[0]
        temp0_45[0] = temp0_45[0] + temp0_45[0]
        temp0_45[0] = temp0_45[0] * temp0_45[0]
        zmm7[0] = zmm7[0] * temp0_45[0]
        zmm4[0] = 0.5f - zmm7[0]
        temp0_45[0] = temp0_45[0] * zmm4[0]
        temp0_45[0] = temp0_45[0] + temp0_45[0]
        temp0_45[0] = temp0_45[0] * zmm10[0]
        temp0_45[0] = temp0_45[0] * zmm12[0]
        temp0_45[0] = temp0_45[0] * zmm7[0]
        zmm10 = temp0_45
        zmm5 = 0x322bcc77
        zmm12 = temp0_45
        zmm7 = temp0_45
        zmm3 = data_143dbb200
    else
        zmm7 = zmm3
        zmm12 = zmm4
        zmm3 = data_143dbb200
        zmm10 = zmm3
    
    zmm4 = var_138[0]
    zmm7[0] = zmm7[0] * var_138[1]
    zmm10[0] = zmm10[0] * var_138[2]
    zmm13 = zmm12
    zmm2 = var_d8_1
    zmm14[0] = zmm14[0] * zmm7[0]
    zmm13[0] = zmm13[0] * zmm4[0]
    zmm13[0] = zmm13[0] + zmm7[0]
    zmm0 = var_120_1
    zmm0[0] = zmm0[0] * zmm12[0]
    zmm12 = var_dc_1
    zmm8[0] = zmm8[0] - zmm12[0]
    zmm14[0] = zmm14[0] + zmm0[0]
    zmm0 = var_11c_1
    zmm0[0] = zmm0[0] * zmm10[0]
    zmm13[0] = zmm13[0] + zmm10[0]
    zmm1 = var_108_1
    zmm10 = var_e4_1
    zmm1[0] = zmm1[0] - zmm11[0]
    zmm14[0] = zmm14[0] + zmm0[0]
    zmm0 = var_118_1
    zmm0[0] = zmm0[0] - zmm12[0]
    zmm2[0] = zmm2[0] - zmm10[0]
    zmm9[0] = zmm9[0] - zmm10[0]
    zmm7 = zmm1
    zmm13[0] = zmm13[0] - zmm14[0]
    zmm14 = var_e0_1
    zmm7[0] = zmm7[0] * zmm0[0]
    zmm14[0] = zmm14[0] - zmm11[0]
    zmm1[0] = zmm1[0] * zmm2[0]
    float var_118_2 = zmm0[0]
    zmm8[0] = zmm8[0] * zmm14[0]
    zmm8[0] = zmm8[0] * zmm2[0]
    zmm7[0] = zmm7[0] - zmm8[0]
    zmm9[0] = zmm9[0] * var_118_2
    zmm9[0] = zmm9[0] * zmm14[0]
    zmm8[0] = zmm8[0] - zmm9[0]
    zmm9[0] = zmm9[0] - zmm1[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm8[0] = zmm8[0] + zmm7[0]
    zmm8[0] = zmm8[0] + zmm9[0]
    
    if (not(zmm8[0] == 1f))
        if (zmm8[0] >= zmm5[0])
            zmm4 = 0x3f000000
            float temp0_46[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
            zmm2 = 0x3f000000
            zmm8[0] = zmm8[0] * 0.5f
            temp0_46[0] = temp0_46[0] * temp0_46[0]
            zmm8[0] = zmm8[0] * temp0_46[0]
            zmm2[0] = 0.5f - zmm8[0]
            temp0_46[0] = temp0_46[0] * zmm2[0]
            temp0_46[0] = temp0_46[0] + temp0_46[0]
            temp0_46[0] = temp0_46[0] * temp0_46[0]
            zmm8[0] = zmm8[0] * temp0_46[0]
            zmm4[0] = 0.5f - zmm8[0]
            temp0_46[0] = temp0_46[0] * zmm4[0]
            zmm4 = var_138[0]
            temp0_46[0] = temp0_46[0] + temp0_46[0]
            zmm7[0] = zmm7[0] * temp0_46[0]
            zmm8[0] = zmm8[0] * temp0_46[0]
            zmm9[0] = zmm9[0] * temp0_46[0]
        else
            zmm7 = data_143dbb1f8
            zmm9 = zmm3
            zmm8 = data_143dbb1fc
    
    zmm0 = *(arg2 + 0xd30)
    zmm0[0] = zmm0[0] * -3f
    zmm11[0] = zmm11[0] * zmm8[0]
    bool cond:3_1 = var_114_3[0] <= zmm0[0]
    zmm10[0] = zmm10[0] * zmm7[0]
    zmm12[0] = zmm12[0] * zmm9[0]
    zmm11[0] = zmm11[0] + zmm10[0]
    zmm11[0] = zmm11[0] + zmm12[0]
    
    if (cond:3_1 || arg_20[0] <= zmm0[0] || var_148_4[0] <= zmm0[0] || zmm15[0] <= zmm0[0]
            || zmm13[0] <= zmm0[0])
        result.b = 0
    else
        zmm8[0] = zmm8[0] * var_138[1]
        zmm9[0] = zmm9[0] * var_138[2]
        zmm7[0] = zmm7[0] * zmm4[0]
        zmm7[0] = zmm7[0] + zmm8[0]
        zmm7[0] = zmm7[0] + zmm9[0]
        zmm7[0] = zmm7[0] - zmm11[0]
        
        if (zmm7[0] <= zmm0[0])
            result.b = 0
        else
            result.b = 1
    
    *arg4 = result.b

return result
