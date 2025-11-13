// 函数: sub_1427acbc0
// 地址: 0x1427acbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_128
int32_t var_d8
float result = sub_1427af460(arg3, &var_128, &var_d8)
float zmm11[0x4] = *(arg1 + 0xa0)
float zmm0[0x4] = zx.o(0)
int32_t var_124
float zmm5[0x4] = var_124
float zmm8[0x4] = var_128
int32_t var_120
float zmm4[0x4] = var_120
float r12 = arg6
float zmm15[0x4] = arg5
float zmm6[0x4] = *(arg1 + 0xc0)
float zmm12[0x4] = 0x40c90fdb
float zmm7[0x4] = *(arg1 + 0xb0)
zmm0[0] = float.s(r12)
float temp0[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
zmm12[0] = 6.28318548f / zmm0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xd2)
zmm5[0] = zmm5[0] f* arg4.d
zmm8[0] = zmm8[0] f* arg4.d
zmm5[0] = zmm5[0] f+ arg2[1]
zmm4[0] = zmm4[0] f* arg4.d
zmm8[0] = zmm8[0] f+ *arg2
float temp0_2[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
zmm4[0] = zmm4[0] f+ arg2[2]
arg6 = zmm12[0]
float temp0_3[0x4] = _mm_unpacklo_ps(zmm5, 0)
float temp0_6[0x4] =
    _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm4[0].q), temp0_3[0].q), zmm6)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xc9), temp0_1)
float temp0_11[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xd2), temp0), temp0_8)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_15[0x4] = _mm_mul_ps(temp0_13, temp0_1)
float temp0_17[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_14, temp0), temp0_15)
float temp0_18[0x4] = _mm_mul_ps(temp0_2, temp0_12)
zmm15[0] = zmm15[0] f* *(arg3 + 4)
float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_6)
zmm15[0] = zmm15[0] f* *arg3
zmm15[0] = zmm15[0] + zmm5[0]
float temp0_20[0x4] = _mm_add_ps(temp0_17, temp0_19)
zmm15[0] = zmm15[0] + zmm8[0]
float temp0_21[0x4] = _mm_add_ps(temp0_20, zmm7)
float var_f8 = temp0_21[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
float var_f4 = temp0_22[0]
float var_f0 = temp0_23[0]
zmm15[0] = zmm15[0] f* *(arg3 + 8)
int32_t r13 = 0
float temp0_24[0x4] = _mm_unpacklo_ps(zmm15, 0)
zmm15[0] = zmm15[0] + zmm4[0]
float temp0_27[0x4] =
    _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm15, zmm15[0].q), temp0_24[0].q), zmm6)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xc9), temp0_1)
float temp0_32[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xd2), temp0), temp0_29)
float temp0_33[0x4] = _mm_add_ps(temp0_32, temp0_32)
float temp0_34[0x4] = _mm_mul_ps(temp0_2, temp0_33)
float temp0_35[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xd2), temp0)
float temp0_38[0x4] = _mm_mul_ps(temp0_35, temp0_1)
float temp0_39[0x4] = _mm_add_ps(temp0_34, temp0_27)
float temp0_42[0x4] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_37, temp0_38), temp0_39), zmm7)
float var_e8 = temp0_42[0]
float temp0_43[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)
float var_e0 = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)[0]
float var_e4 = temp0_43[0]

if (r12 s> 0)
    do
        r13 += 1
        float temp0_45[0x4] = _mm_cvtepi32_ps(zx.o(r13))
        temp0_45[0] = temp0_45[0] * zmm12[0]
        int32_t zmm13_1
        int32_t zmm14_1
        float zmm15_1[0x4]
        zmm0, zmm13_1, zmm14_1, zmm15_1 = __libm_sse2_sincosf_(temp0_45)
        zmm12 = *(arg1 + 0xa0)
        int32_t var_d0
        zmm0[0] = zmm0[0] f* var_d0
        zmm0[0] = zmm0[0] f* var_d8
        float zmm7_1[0x4] = *(arg1 + 0xc0)
        zmm15_1[0] = zmm15_1[0] f* *(arg3 + 4)
        float temp0_46[0x4] = _mm_shuffle_ps(zmm0, zmm0, 1)
        int32_t var_d4
        zmm0[0] = zmm0[0] f* var_d4
        temp0_46[0] = temp0_46[0] f* var_124
        temp0_46[0] = temp0_46[0] f* var_120
        int64_t zmm6_1 = zmm15_1[0].q
        temp0_46[0] = temp0_46[0] f* var_128
        temp0_46[0] = temp0_46[0] + zmm0[0]
        zmm6_1.d = zmm6_1.d f* *(arg3 + 8)
        temp0_46[0] = temp0_46[0] + zmm0[0]
        temp0_46[0] = temp0_46[0] + zmm0[0]
        float temp0_47[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
        temp0_46[0] = temp0_46[0] f* zmm14_1
        zmm15_1[0] = zmm15_1[0] f* *arg3
        temp0_46[0] = temp0_46[0] f+ arg2[1]
        temp0_46[0] = temp0_46[0] f* zmm14_1
        temp0_46[0] = temp0_46[0] f* zmm14_1
        temp0_46[0] = temp0_46[0] f+ arg2[2]
        float temp0_48[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
        temp0_46[0] = temp0_46[0] f+ *arg2
        float temp0_49[0x4] = _mm_unpacklo_ps(temp0_46, 0)
        zmm15_1[0] = zmm15_1[0] + temp0_46[0]
        float temp0_50[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
        zmm6_1.d = zmm6_1.d f+ temp0_46[0]
        zmm15_1[0] = zmm15_1[0] + temp0_46[0]
        float zmm4_1[0x4] = *(arg1 + 0xb0)
        float temp0_53[0x4] = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_46, temp0_46[0].q), temp0_49[0].q), zmm7_1)
        float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xc9), temp0_47)
        float temp0_58[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xd2), temp0_48), temp0_55)
        float temp0_59[0x4] = _mm_add_ps(temp0_58, temp0_58)
        float temp0_60[0x4] = _mm_mul_ps(temp0_50, temp0_59)
        float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xd2), temp0_48)
        float temp0_63[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xc9)
        float temp0_64[0x4] = _mm_add_ps(temp0_60, temp0_53)
        float temp0_68[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_62, _mm_mul_ps(temp0_63, temp0_47)), temp0_64), zmm4_1)
        float var_118 = temp0_68[0]
        float temp0_69[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x55)
        float var_110_1 = _mm_shuffle_ps(temp0_68, temp0_68, 0xaa)[0]
        float var_114_1 = temp0_69[0]
        int64_t rax = *arg1
        float temp0_71[0x4] = _mm_unpacklo_ps(zmm15_1, 0)
        float temp0_74[0x4] =
            _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm15_1, zmm6_1), temp0_71[0].q), zmm7_1)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xc9), temp0_47)
        float temp0_79[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xd2), temp0_48), temp0_76)
        float temp0_80[0x4] = _mm_add_ps(temp0_79, temp0_79)
        float temp0_81[0x4] = _mm_mul_ps(temp0_50, temp0_80)
        float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0xd2), temp0_48)
        float temp0_84[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0xc9)
        float temp0_85[0x4] = _mm_add_ps(temp0_81, temp0_74)
        float temp0_89[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_83, _mm_mul_ps(temp0_84, temp0_47)), temp0_85), zmm4_1)
        float var_108 = temp0_89[0]
        float temp0_90[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0x55)
        float result_1 = _mm_shuffle_ps(temp0_89, temp0_89, 0xaa)[0]
        float var_104_1 = temp0_90[0]
        (*(rax + 8))(arg1, &var_f8, &var_118, arg7, zmm13_1, arg9)
        (*(*arg1 + 8))(arg1, &var_118, &var_108, arg7, zmm13_1, arg9)
        (*(*arg1 + 8))(arg1, &var_e8, &var_108, arg7, zmm13_1, arg9)
        zmm12 = arg6
        var_f8.q = var_118.q
        float var_f0_1 = var_110_1
        result = result_1
        var_e8.q = var_108.q
        float result_2 = result
    while (r13 s< r12)

return result
