// 函数: sub_1422997e0
// 地址: 0x1422997e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_a0
int32_t* rbx = &var_a0
int64_t i_1 = 2
uint128_t zmm2 = zx.o(*arg6)
float var_e0 = (*(arg3 + 8))[0]
float var_d4 = (*(arg4 + 4))[0]
float var_e4 = (*(arg3 + 4))[0]
float var_d8 = (*arg4)[0]
int128_t zmm10 = arg10
int128_t zmm11 = arg9
float var_c8 = (*arg5)[0]
float var_c0 = (*(arg5 + 8))[0]
float var_b4 = (*arg2)[1][0]
float var_d0 = (*(arg4 + 8))[0]
float zmm3[0x4] = *arg6 ^ 0x80000000
int128_t zmm4 = *(arg6 + 4) ^ 0x80000000
float var_c4 = (*(arg5 + 4))[0]
float var_b8 = (*arg2)[0]
float var_b0 = (*arg2)[2][0]
float zmm1[0x4] = arg6[1].d ^ 0x80000000
int32_t var_dc = 0
float zmm9[0x4] = (*arg3)[0].o
int64_t var_a8 = (_mm_unpacklo_ps(zmm3, zmm4.q)).q
var_a0 = zmm1[0]
float var_130 = arg6[1].d[0]
float zmm0[0x4] = zmm2
int32_t var_cc = 0
float zmm8[0x4] = var_d8.o
int32_t var_bc = 0
float zmm7[0x4] = var_c8.o
int32_t var_ac = 0x3f800000
float zmm6[0x4] = var_b8.o
float var_f4 = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
float var_140 = zmm1[0]
float var_128 = zmm3[0]
int32_t var_118 = zmm2.d
int32_t var_104 = zmm4.d
int32_t var_13c = 0x3f800000
int32_t var_12c = 0x3f800000
int32_t var_11c = 0x3f800000
int32_t var_10c = 0x3f800000
int32_t var_fc = 0x3f800000
uint64_t var_9c = zmm2.q
int32_t var_ec = 0x3f800000
int64_t result
int64_t i

do
    zmm0 = rbx[-2]
    float* rsi_1 = &var_a0
    zmm1 = rbx[-1]
    int64_t j_1 = 2
    zmm2 = *rbx
    float var_148_1 = zmm0[0]
    float var_138_1 = zmm0[0]
    float var_124_1 = zmm1[0]
    float var_114_1 = zmm1[0]
    int32_t var_100_1 = zmm2.d
    int32_t var_f0_1 = zmm2.d
    int64_t j
    
    do
        zmm2 = var_148_1.o
        zmm4 = rsi_1[-1]
        int64_t rax_3 = *arg1
        _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        zmm2.d = zmm4.d
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        var_148_1.o = zmm2
        float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_7[0x4] = _mm_mul_ps(temp0_4, zmm6)
        int64_t var_168_1 = 0
        float temp0_8[0x4] = _mm_mul_ps(temp0_5, zmm7)
        int32_t var_160_1 = 0
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm9)
        int64_t var_168_2 = 0
        float temp0_11[0x4] = _mm_add_ps(temp0_7, temp0_8)
        int32_t var_160_2 = 0
        float temp0_13[0x4] = _mm_add_ps(_mm_mul_ps(temp0_6, zmm8), zmm2)
        zmm2 = var_138_1.o
        _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        zmm2.d = zmm4.d
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
        var_138_1.o = zmm2
        float temp0_16[0x4] = _mm_add_ps(temp0_11, temp0_13)
        float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm8)
        float var_178 = temp0_16[0]
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x55)
        float var_170_1 = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)[0]
        float temp0_21[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float var_174_1 = temp0_19[0]
        float temp0_22[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_23[0x4] = _mm_mul_ps(temp0_21, zmm6)
        float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm7)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm9)
        float temp0_29[0x4] = _mm_add_ps(_mm_add_ps(temp0_23, temp0_24), _mm_add_ps(temp0_18, zmm2))
        float var_158 = temp0_29[0]
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)
        float var_150_1 = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)[0]
        float var_154_1 = temp0_30[0]
        (*(rax_3 + 0x30))(arg1, &var_178, &var_158, arg7, arg8, zmm11.d, zmm10.d, arg11, var_178, 
            var_170_1, var_168_2, var_160_2, var_158, var_150_1, var_148_1, var_140, var_138_1, 
            var_130, var_128)
        zmm2 = var_128.o
        float zmm4_1 = *rsi_1
        _mm_shuffle_ps(zmm2, zmm2, 0xd2)
        zmm2.d = zmm4_1
        int64_t var_168_3 = 0
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        int32_t var_160_3 = 0
        float temp0_34[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        var_128.o = zmm2
        float temp0_38[0x4] = _mm_add_ps(_mm_mul_ps(temp0_34, zmm6), _mm_mul_ps(temp0_35, zmm7))
        int64_t rax_4 = *arg1
        float temp0_39[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm9)
        int64_t var_168_4 = 0
        int32_t var_160_4 = 0
        float temp0_43[0x4] = _mm_add_ps(_mm_mul_ps(temp0_39, zmm8), zmm2)
        zmm2 = var_118.o
        _mm_shuffle_ps(zmm2, zmm2, 0xd2)
        zmm2.d = zmm4_1
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        float temp0_46[0x4] = _mm_add_ps(temp0_38, temp0_43)
        var_118.o = zmm2
        float temp0_48[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm8)
        var_178 = temp0_46[0]
        float temp0_49[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0x55)
        float var_170_2 = _mm_shuffle_ps(temp0_46, temp0_46, 0xaa)[0]
        float temp0_51[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float var_174_2 = temp0_49[0]
        float temp0_52[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_53[0x4] = _mm_mul_ps(temp0_51, zmm6)
        float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm7)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm9)
        float temp0_59[0x4] = _mm_add_ps(_mm_add_ps(temp0_53, temp0_54), _mm_add_ps(temp0_48, zmm2))
        var_158 = temp0_59[0]
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
        float var_150_2 = _mm_shuffle_ps(temp0_59, temp0_59, 0xaa)[0]
        float var_154_2 = temp0_60[0]
        (*(rax_4 + 0x30))(arg1, &var_178, &var_158, arg7, arg8, zmm11.d, zmm10.d, arg11, var_178, 
            var_170_2, var_168_4, var_160_4, var_158, var_150_2)
        int32_t zmm4_2 = rsi_1[-2]
        zmm2.d = zmm4_2
        int64_t var_168_5 = 0
        uint128_t var_108 = zmm2
        float temp0_62[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_63[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_64[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_65[0x4] = _mm_mul_ps(temp0_62, zmm6)
        int32_t var_160_5 = 0
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm9)
        int64_t var_168_6 = 0
        float temp0_68[0x4] = _mm_mul_ps(temp0_63, zmm7)
        int32_t var_160_6 = 0
        float temp0_69[0x4] = _mm_mul_ps(temp0_64, zmm8)
        float temp0_70[0x4] = _mm_add_ps(temp0_65, temp0_68)
        float temp0_71[0x4] = _mm_add_ps(temp0_69, zmm2)
        zmm2.d = zmm4_2
        uint128_t var_f8 = zmm2
        float temp0_72[0x4] = _mm_add_ps(temp0_70, temp0_71)
        var_178 = temp0_72[0]
        float temp0_73[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
        float var_170_3 = _mm_shuffle_ps(temp0_72, temp0_72, 0xaa)[0]
        float var_174_3 = temp0_73[0]
        int64_t rax_5 = *arg1
        float temp0_75[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_76[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_77[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_78[0x4] = _mm_mul_ps(temp0_75, zmm6)
        float temp0_79[0x4] = _mm_mul_ps(temp0_76, zmm7)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm9)
        float temp0_85[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_78, temp0_79), _mm_add_ps(_mm_mul_ps(temp0_77, zmm8), zmm2))
        var_158 = temp0_85[0]
        float temp0_86[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0x55)
        float var_150_3 = _mm_shuffle_ps(temp0_85, temp0_85, 0xaa)[0]
        float var_154_3 = temp0_86[0]
        result = (*(rax_5 + 0x30))(arg1, &var_178, &var_158, arg7, arg8, zmm11.d, zmm10.d, arg11, 
            var_178, var_170_3, var_168_6, var_160_6, var_158, var_150_3)
        rsi_1 = &rsi_1[3]
        j = j_1
        j_1 -= 1
    while (j != 1)
    rbx = &rbx[3]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
