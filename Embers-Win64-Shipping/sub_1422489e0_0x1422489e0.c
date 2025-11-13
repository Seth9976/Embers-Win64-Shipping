// 函数: sub_1422489e0
// 地址: 0x1422489e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = *arg4
zmm3[0] = zmm3[0] f- *arg3
uint32_t zmm5[0x4] = *(arg4 + 4)
zmm5[0] = zmm5[0] f- arg3[1]
uint32_t result_10[0x4] = *(arg4 + 8)
result_10[0] = result_10[0] f- arg3[2]
zmm3[0] = zmm3[0] f* zmm3[0]
float zmm2[0x4] = zmm5
zmm2[0] = zmm2[0] f* zmm5[0]
float result_4[0x4] = result_10
result_4[0] = result_4[0] f* result_10[0]
zmm2[0] = zmm2[0] f+ zmm3[0]
uint32_t result[0x4] = 0x38d1b717
zmm2[0] = zmm2[0] + result_4[0]
bool cond:0 = _mm_and_ps(zmm3, 0x7fffffff)[0] f> 9.99999975e-05f
float temp0_1[0x4] = _mm_sqrt_ss(zmm2[0], zmm2[0])

if (cond:0)
label_142248a75:
    float result_11[0x4] = arg6
    uint32_t zmm15[0x4] = arg5
    zmm15[0] = zmm15[0] f- result_11[0]
    result = _mm_and_ps(zmm15, 0x7fffffff)
    
    if (not(temp0_1[0] f<= result[0]))
        result = 0x3f800000
        float zmm9[0x4] = *arg2
        float temp0_5[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
        result_11[0] = result_11[0] f- zmm15[0]
        float result_7[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
        zmm3 = temp0_5
        float temp0_6[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
        result_11[0] = result_11[0] / temp0_1[0]
        zmm9[0] = zmm9[0] * result_11[0]
        result_11[0] = result_11[0] * result_11[0]
        result_11[0] = result_11[0] + result_11[0]
        temp0_5[0] = temp0_5[0] * result_11[0]
        result[0] = 1f - result_11[0]
        float var_10c_1 = zmm9[0]
        float var_110_1 = temp0_5[0]
        result_11[0] = result_11[0] * temp0_5[0]
        float temp0_7[0x4] = _mm_sqrt_ss(0, result[0])
        result_7[0] = result_7[0] * temp0_7[0]
        zmm3[0] = zmm3[0] f* temp0_7[0]
        result_7[0] = result_7[0] - zmm9[0]
        result_11[0] = result_11[0] * temp0_6[0]
        zmm3 ^= data_142d3f780
        zmm3[0] = zmm3[0] f+ zmm3[0]
        float var_114_1 = temp0_7[0]
        result_11[0] = result_11[0] + temp0_7[0]
        result_7[0] = result_7[0] + result_7[0]
        zmm3[0] = zmm3[0] f* temp0_5[0]
        result = result_7
        result[0] = result[0] f* result_7[0]
        zmm3[0] = zmm3[0] f- result[0]
        zmm3[0] = zmm3[0] f* zmm9[0]
        zmm3[0] = zmm3[0] f* temp0_6[0]
        zmm3[0] = zmm3[0] f+ result_11[0]
        result_7[0] = result_7[0] * temp0_6[0]
        result_7[0] = result_7[0] * zmm9[0]
        zmm3[0] = zmm3[0] f+ result_11[0]
        uint32_t result_1 = zmm3[0]
        result_10 = result_11
        result_10[0] = result_10[0] f* result_7[0]
        result_11[0] = result_11[0] * temp0_5[0]
        result_10[0] = result_10[0] f- zmm3[0]
        result_7[0] = result_7[0] - result_11[0]
        result_10[0] = result_10[0] f+ result_7[0]
        result_4 = 0x41b40000
        float result_9 = 22.5f
        result_7[0] = result_7[0] f+ zmm3[0]
        uint32_t result_2 = result_10[0]
        uint32_t var_108
        uint32_t var_fc
        void var_d8
        
        do
            result_4[0] = result_4[0] * 0.0174532924f
            float result_3[0x4]
            float zmm6_1[0x4]
            float zmm7_1[0x4]
            float zmm8_1[0x4]
            int32_t zmm9_1
            int32_t zmm10_1
            float zmm11[0x4]
            int32_t zmm12_1
            int32_t zmm13_1
            int32_t zmm14_1
            float zmm15_1
            result_3, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11, zmm12_1, zmm13_1, zmm14_1, 
                zmm15_1 = __libm_sse2_sincosf_(result_4)
            float result_8[0x4] = _mm_shuffle_ps(result_3, result_3, 1)
            result_8[0] = result_8[0] * zmm6_1[0]
            result_3[0] = result_3[0] * zmm6_1[0]
            result_8[0] = result_8[0] f* zmm10_1
            result_8[0] = result_8[0] f* zmm12_1
            result_8[0] = result_8[0] - zmm7_1[0]
            result_3[0] = result_3[0] f* zmm9_1
            result_3[0] = result_3[0] f* zmm10_1
            result_3[0] = result_3[0] - result_8[0]
            result_8[0] = result_8[0] + result_8[0]
            zmm8_1[0] = zmm8_1[0] - result_3[0]
            result_3[0] = result_3[0] + result_3[0]
            zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
            result_8[0] = result_8[0] f* zmm10_1
            result_3[0] = result_3[0] f* zmm12_1
            zmm8_1[0] = zmm8_1[0] f* zmm14_1
            result_3[0] = result_3[0] - result_8[0]
            zmm8_1[0] = zmm8_1[0] f* zmm10_1
            zmm8_1[0] = zmm8_1[0] f* zmm12_1
            zmm8_1[0] = zmm8_1[0] + result_8[0]
            result_3[0] = result_3[0] f* zmm9_1
            result_3[0] = result_3[0] f* zmm14_1
            zmm8_1[0] = zmm8_1[0] - result_3[0]
            result_3[0] = result_3[0] + zmm8_1[0]
            result_8[0] = result_8[0] f* zmm14_1
            result_3[0] = result_3[0] f+ zmm13_1
            result_8[0] = result_8[0] f* zmm9_1
            result_8[0] = result_8[0] + result_3[0]
            result_8[0] = result_8[0] - zmm8_1[0]
            zmm8_1[0] = zmm8_1[0] + result_8[0]
            result_8[0] = result_8[0] + result_3[0]
            void var_c8
            sub_140acc920(&var_c8, arg7)
            int64_t rax_1 = *arg1
            float zmm0 = result_3[0] * zmm15_1
            zmm8_1[0] = zmm8_1[0] * zmm15_1
            zmm0 = zmm0 f+ *arg3
            zmm8_1[0] = zmm8_1[0] f+ arg3[1]
            float var_f0 = zmm0
            float var_ec_1 = zmm8_1[0]
            result_4 = result_1
            zmm0 = result_8[0] * zmm15_1 f+ arg3[2]
            result_4[0] = result_4[0] * zmm15_1
            result_4[0] = result_4[0] f+ *arg3
            float var_e8_1 = zmm0
            float var_e4 = result_4[0]
            zmm11[0] = zmm11[0] * zmm15_1
            zmm0 = result_2 * zmm15_1 f+ arg3[1]
            zmm11[0] = zmm11[0] f+ arg3[2]
            float var_e0_1 = zmm0
            float var_dc_1 = zmm11[0]
            (*(rax_1 + 0x30))(arg1, &var_e4, &var_f0, &var_c8, 0, 0, 0, 0, result_9, var_110_1)
            sub_140acc920(&var_d8, arg7)
            int64_t rax_2 = *arg1
            result = result_3
            result[0] = result[0] f* arg6
            zmm11[0] = zmm11[0] f* arg6
            result[0] = result[0] f+ *arg4
            zmm8_1[0] = zmm8_1[0] f* arg6
            zmm11[0] = zmm11[0] f+ *(arg4 + 8)
            zmm8_1[0] = zmm8_1[0] f+ *(arg4 + 4)
            var_108 = result[0]
            result = result_8
            result[0] = result[0] f* arg6
            float var_f4_1 = zmm11[0]
            float var_104_1 = zmm8_1[0]
            result[0] = result[0] f+ *(arg4 + 8)
            uint32_t var_100_1 = result[0]
            result = result_1
            result[0] = result[0] f* arg6
            result[0] = result[0] f+ *arg4
            var_fc = result[0]
            result = result_2
            result[0] = result[0] f* arg6
            result[0] = result[0] f+ *(arg4 + 4)
            uint32_t var_f8_1 = result[0]
            (*(rax_2 + 0x30))(arg1, &var_fc, &var_108, &var_d8, 0, 0, 0, 0)
            result_4 = result_9
            result_4[0] = result_4[0] + 22.5f
            result_1 = result_3[0]
            result_2 = zmm8_1[0]
            result_9 = result_4[0]
        while (result_4[0] <= 360f)
        
        result = 0x42b40000
        result_1 = 0x42b40000
        
        do
            result_4 = result
            result_4[0] = result_4[0] * 0.0174532924f
            float zmm0_1[0x4]
            float result_5[0x4]
            float zmm10_2[0x4]
            int32_t zmm11_1
            float result_6[0x4]
            int32_t zmm13_2
            float zmm14_2[0x4]
            int32_t zmm15_2
            zmm0_1, result_5, zmm10_2, zmm11_1, result_6, zmm13_2, zmm14_2, zmm15_2 =
                __libm_sse2_sincosf_(result_4)
            zmm0_1[0] = zmm0_1[0] * var_114_1
            float temp0_8[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
            float zmm3_2 = zmm10_2[0]
            temp0_8[0] = temp0_8[0] * var_114_1
            zmm10_2[0] = zmm10_2[0] * zmm0_1[0]
            float zmm4_1 = result_5[0] * zmm0_1[0]
            float zmm5_3 = var_110_1 - zmm10_2[0]
            result_6[0] = result_6[0] * temp0_8[0]
            zmm4_1 = zmm4_1 - result_6[0]
            zmm5_3 = zmm5_3 + zmm5_3
            zmm3_2 = zmm3_2 * temp0_8[0] - var_10c_1
            zmm4_1 = zmm4_1 + zmm4_1
            zmm14_2[0] = zmm14_2[0] * zmm5_3
            zmm3_2 = zmm3_2 + zmm3_2
            zmm10_2[0] = zmm10_2[0] * zmm5_3
            zmm14_2[0] = zmm14_2[0] + temp0_8[0]
            result_6[0] = result_6[0] * zmm4_1
            zmm10_2[0] = zmm10_2[0] * zmm3_2
            result_6[0] = result_6[0] - zmm10_2[0]
            result_5[0] = result_5[0] * zmm4_1
            result_6[0] = result_6[0] + zmm14_2[0]
            zmm14_2[0] = zmm14_2[0] * zmm3_2
            zmm10_2[0] = zmm10_2[0] - result_5[0]
            result_6[0] = result_6[0] * zmm5_3
            zmm14_2[0] = zmm14_2[0] + zmm0_1[0]
            result_5[0] = result_5[0] * zmm3_2
            zmm10_2[0] = zmm10_2[0] + zmm14_2[0]
            zmm14_2[0] = zmm14_2[0] * zmm4_1
            result_5[0] = result_5[0] - result_6[0]
            zmm14_2[0] = zmm14_2[0] f+ zmm13_2
            result_5[0] = result_5[0] + zmm14_2[0]
            sub_140acc920(&var_d8, arg7)
            int64_t rax_3 = *arg1
            result = result_6
            result[0] = result[0] f* zmm11_1
            zmm10_2[0] = zmm10_2[0] f* zmm11_1
            result[0] = result[0] f+ *arg4
            result_6[0] = result_6[0] f* zmm15_2
            zmm10_2[0] = zmm10_2[0] f+ *(arg4 + 4)
            zmm10_2[0] = zmm10_2[0] f* zmm15_2
            result_6[0] = result_6[0] f+ *arg3
            var_fc = result[0]
            result = result_5
            zmm10_2[0] = zmm10_2[0] f+ arg3[1]
            result[0] = result[0] f* zmm11_1
            result_5[0] = result_5[0] f* zmm15_2
            result[0] = result[0] f+ *(arg4 + 8)
            float var_f8_2 = zmm10_2[0]
            result_5[0] = result_5[0] f+ arg3[2]
            var_108 = result_6[0]
            float var_104_2 = zmm10_2[0]
            uint32_t var_f4_2 = result[0]
            float var_100_2 = result_5[0]
            (*(rax_3 + 0x30))(arg1, &var_108, &var_fc, &var_d8, 0, 0, 0, 0, result_9)
            result = result_1
            result[0] = result[0] f+ 90f
            result_1 = result[0]
        while (result[0] f<= 360f)
else
    if (_mm_and_ps(zmm5, 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_142248a75
    
    if (not(_mm_and_ps(result_10, 0x7fffffff)[0] f<= 9.99999975e-05f))
        goto label_142248a75

return result
