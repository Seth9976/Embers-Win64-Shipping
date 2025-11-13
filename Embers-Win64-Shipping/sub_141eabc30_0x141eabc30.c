// 函数: sub_141eabc30
// 地址: 0x141eabc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg2 + 0x38)
int64_t rbx = *(arg2 + 0x40)
int64_t result
int64_t var_198
int64_t var_188
int64_t var_178
int128_t* rdx_3

if (*(arg2 + 0x48) == 0)
    sub_14200cc70(&var_188, arg2 + 0x1c, arg1)
    rdx_3 = &var_198
    int32_t rax_3 = *(arg2 + 0x30)
    var_178 = *(arg2 + 0x28)
    int32_t var_170_2 = rax_3
    var_198 = var_188
    int32_t var_180
    int32_t var_190_1 = var_180
label_141eac0cd:
    sub_141dd6920(arg1, rdx_3, &var_178, 0, nullptr, 0)
    void* rax_5 = arg1[0x51]
    int64_t r9_2
    r9_2.b = 1
    *(rax_5 + 0x387) |= 0x20
    (*(*arg1 + 0x758))(arg1, r14, rbx, r9_2)
    result.b = 1
else
    if (r14 != 0 && *(r14 + 0x14f) == 2)
        int32_t var_118
        sub_141ea3bd0(r14, rbx, &var_198, &var_118)
        int64_t zmm0_1
        zmm0_1.d = var_198.d.d f+ *(arg2 + 0x1c)
        int128_t zmm1_1
        zmm1_1.d = var_198:4.d.d f+ *(arg2 + 0x20)
        int32_t var_168_1 = zmm0_1.d
        int32_t var_190
        zmm0_1.d = var_190.d f+ *(arg2 + 0x24)
        int32_t var_164_1 = zmm1_1.d
        int32_t var_160_1 = zmm0_1.d
        int32_t rcx_3
        
        if (*(arg2 + 0x49) == 0)
            zmm0_1 = *(arg2 + 0x28)
            rcx_3 = *(arg2 + 0x30)
        else
            int128_t zmm6 = var_118
            int32_t var_110
            float zmm7[0x4] = var_110
            int128_t zmm4_1 = zmm6
            float zmm2_1 = zmm7[0] * 2f
            int32_t var_14c_1 = 0
            zmm1_1.d = zmm6.d f* 2f
            int32_t var_13c_1 = 0
            int32_t var_114
            float zmm10[0x4] = var_114
            float zmm3 = zmm10[0] * 2f
            float zmm5_1 = zmm10[0]
            int32_t var_12c_1 = 0
            int128_t zmm9
            zmm9.d = zmm6.d f* zmm1_1.d
            int32_t var_11c_1 = 0x3f800000
            int32_t var_10c
            int128_t zmm13 = var_10c
            zmm7[0] = zmm7[0] * zmm2_1
            int128_t zmm11
            zmm11.d = zmm13.d f* zmm1_1.d
            zmm0_1 = zmm7[0].q
            zmm6.d = zmm6.d f* zmm2_1
            zmm7[0] = zmm7[0] f+ zmm9.d
            zmm5_1 = zmm5_1 * zmm3
            zmm0_1.d = zmm0_1.d f+ zmm5_1
            zmm1_1.d = zmm13.d f* zmm3
            zmm4_1.d = zmm4_1.d f* zmm3
            data_143dbb200
            zmm10[0] = zmm10[0] * zmm2_1
            int128_t zmm14
            zmm14.d = zmm1_1.d f+ zmm6.d
            zmm13.d = zmm13.d f* zmm2_1
            int128_t zmm8
            zmm8.d = zmm4_1.d f- zmm13.d
            int128_t zmm12
            zmm12.d = 1f f- zmm0_1.d
            zmm0_1 = zmm6.d
            zmm6.d = 1f - zmm7[0]
            zmm0_1.d = zmm0_1.d f- zmm1_1.d
            zmm10[0] = zmm10[0] f- zmm11.d
            zmm13.d = zmm13.d f+ zmm4_1.d
            zmm11.d = zmm11.d f+ zmm10[0]
            int128_t zmm15
            zmm15.d = 1f - (zmm5_1 f+ zmm9.d)
            float var_f8[0xc]
            float* rax
            float zmm6_1[0x4]
            float zmm7_1[0x4]
            int32_t zmm8_1
            int32_t zmm9_1
            rax, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_14077e760(&var_f8, arg2 + 0x28)
            float zmm2_2[0x4] = *rax
            float zmm1_2[0x4] = *(rax + 0x30)
            zmm10 = *(rax + 0x10)
            var_178.o = *(rax + 0x20)
            float var_148[0x4]
            var_148[0] = zmm8_1
            float temp0_1[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
            temp0_1[0] = zmm6_1[0]
            float temp0_2[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            temp0_3[0] = zmm11.d
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
            var_188.o = temp0_4
            float var_158[0x4]
            zmm6_1 = var_158
            zmm6_1[0] = zmm12.d
            float var_138[0x4]
            var_138[0] = zmm14.d
            float temp0_5[0x4] = _mm_mul_ps(temp0_2, temp0_4)
            float var_148_1[0x4] = temp0_4
            float temp0_6[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xe1)
            float temp0_8[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
            temp0_7[0] = zmm13.d
            temp0_8[0] = zmm7_1[0]
            float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
            zmm7_1 = var_188.o
            temp0_9[0] = zmm0_1.d[0]
            float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
            float temp0_11[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
            float temp0_13[0x4] = _mm_mul_ps(temp0_6, temp0_10)
            float temp0_14[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
            temp0_14[0] = zmm15.d
            var_158 = temp0_10
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xc9)
            float temp0_16[0x4] = _mm_add_ps(temp0_5, temp0_13)
            float temp0_17[0x4] = _mm_mul_ps(temp0_11, temp0_15)
            float var_128[0x4]
            var_128[0] = data_143dbb1f8[0]
            float var_138_1[0x4] = temp0_15
            float zmm0_2[0x4] = data_143dbb1fc
            float temp0_18[0x4] = _mm_add_ps(temp0_16, temp0_17)
            float temp0_19[0x4] = _mm_shuffle_ps(var_128, var_128, 0xe1)
            temp0_19[0] = zmm0_2[0]
            float temp0_20[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
            float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0x55), zmm7_1)
            float temp0_23[0x4] = _mm_mul_ps(temp0_20, temp0_15)
            float temp0_24[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc6)
            temp0_24[0] = zmm9_1
            float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc9)
            float var_128_1[0x4] = temp0_25
            float temp0_27[0x4] = _mm_add_ps(temp0_18, _mm_mul_ps(temp0_12, temp0_25))
            float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_10)
            float temp0_30[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
            var_158 = temp0_27
            float temp0_31[0x4] = _mm_mul_ps(temp0_30, temp0_25)
            float var_148_2[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_29, temp0_22), temp0_23), temp0_31)
            zmm2_2 = var_178.o
            float temp0_35[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
            float temp0_36[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
            float temp0_37[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
            float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), temp0_25)
            float temp0_40[0x4] = _mm_mul_ps(temp0_35, temp0_10)
            float temp0_41[0x4] = _mm_mul_ps(temp0_36, zmm7_1)
            float temp0_42[0x4] = _mm_mul_ps(temp0_37, temp0_15)
            float var_138_2[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_40, temp0_41), temp0_42), temp0_39)
            float temp0_46[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
            float temp0_47[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0)
            float temp0_50[0x4] =
                _mm_add_ps(_mm_mul_ps(temp0_46, zmm7_1), _mm_mul_ps(temp0_47, temp0_10))
            float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa), temp0_15)
            float temp0_54[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0xff), temp0_25)
            float var_128_2[0x4] = _mm_add_ps(_mm_add_ps(temp0_50, temp0_52), temp0_54)
            float* rax_1 = sub_140adf440(&var_158, &var_188)
            zmm0_1 = *rax_1
            rcx_3 = rax_1[2]
        
        rdx_3 = &var_188
        var_178 = zmm0_1
        var_188 = var_168_1.q
        int32_t var_170_1 = rcx_3
        int32_t var_180_1 = var_160_1
        goto label_141eac0cd
    
    result.b = 0
return result
