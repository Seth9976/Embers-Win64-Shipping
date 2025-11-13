// 函数: sub_1416feda0
// 地址: 0x1416feda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
float result_1[0x4] = 0x7f7fffff
float result = *(arg6 + 0xd0)
int32_t var_158 = 0x3f800000
int64_t var_154 = 0
int64_t var_14c
int64_t var_148
void var_108

if (result == 1 || result == 2)
    float var_160_1 = arg5[0]
    int64_t* rax_2 = sub_141553620(&var_108, arg1, arg2, arg3, arg4)
    result = rax_2[3].d
    result_1 = result
    var_158.o = *rax_2
    var_148 = rax_2[2]
else if (result == 3)
    float (* rax_3)[0x4]
    float zmm6_1[0x4]
    uint128_t zmm7_1
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float result_2[0x4]
    float zmm15_1[0x4]
    rax_3, zmm6_1, zmm7_1, result_1, zmm10_1, zmm11_1, result_2, zmm15_1 =
        sub_140ad7d70(arg2, &var_108, arg4)
    int64_t i_1 = sx.q(*(arg6 + 0x130))
    float zmm8_1[0x4] = *rax_3
    float zmm12_1[0x4] = rax_3[1]
    float zmm13_1[0x4] = rax_3[2]
    int32_t rax_4 = *(arg6 + 0xf4)
    int64_t var_f8_1 = *(arg6 + 0xec)
    result = *(arg6 + 0xe8)
    int64_t var_ec_1 = *(arg6 + 0xe0)
    
    if (i_1 s> 0)
        uint128_t var_48_1 = zmm7_1
        void* r8_2 = arg6 + 0xf8
        void* rax_5 = *(r8_2 + 0x30)
        float var_78_1[0x4] = zmm10_1
        float var_88_1[0x4] = zmm11_1
        float result_3[0x4] = result_2
        result_2 = result
        
        if (rax_5 != 0)
            r8_2 = rax_5
        
        float var_c8_1[0x4] = zmm15_1
        void* rcx_2 = nullptr
        zmm15_1 = var_ec_1:4.d
        float temp0_1[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xd2)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc9)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xff)
        float var_38_1[0x4] = zmm6_1
        int64_t i
        
        do
            result = *(rcx_2 + r8_2 + 8)
            zmm7_1 = zx.o(*(rcx_2 + r8_2))
            float temp0_4[0x4] = _mm_unpacklo_ps(*(rcx_2 + r8_2 + 4), zx.o(0)[0].q)
            zmm7_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7_1, result[0].q), temp0_4[0].q)
            float temp0_7[0x4] = _mm_mul_ps(zmm13_1, zmm7_1)
            float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_1)
            float temp0_12[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_2), temp0_9)
            float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
            float temp0_14[0x4] = _mm_mul_ps(temp0_3, temp0_13)
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
            float result_4[0x4] = var_ec_1.d
            float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_7)
            float temp0_22[0x4] = _mm_add_ps(
                _mm_add_ps(
                    _mm_sub_ps(_mm_mul_ps(temp0_15, temp0_2), _mm_mul_ps(temp0_16, temp0_1)), 
                    temp0_17), 
                zmm12_1)
            temp0_22[0] = temp0_22[0] f- var_f8_1.d
            float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
            temp0_23[0] = temp0_23[0] f- var_f8_1:4.d
            float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
            temp0_24[0] = temp0_24[0] f- rax_4
            result_4[0] = result_4[0] * temp0_22[0]
            zmm15_1[0] = zmm15_1[0] * temp0_23[0]
            result_2[0] = result_2[0] * temp0_24[0]
            result_4[0] = result_4[0] + zmm15_1[0]
            result_4[0] = result_4[0] + result_2[0]
            
            if (not(result_1[0] <= result_4[0]))
                float zmm5_1[0x4] = *arg4
                result_1 = result_4
                float temp0_27[0x4] = _mm_unpacklo_ps(
                    _mm_unpacklo_ps(*(arg6 + 0xe0), (*(arg6 + 0xe8))[0].q), 
                    _mm_unpacklo_ps(*(arg6 + 0xe4), 0)[0].q)
                float temp0_28[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xc9), temp0_28)
                float temp0_31[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xd2), temp0_31)
                float temp0_34[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                float temp0_35[0x4] = _mm_sub_ps(temp0_33, temp0_30)
                float temp0_36[0x4] = _mm_add_ps(temp0_35, temp0_35)
                float temp0_37[0x4] = _mm_mul_ps(temp0_34, temp0_36)
                float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0xc9), temp0_28)
                float temp0_40[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xd2)
                float temp0_41[0x4] = _mm_add_ps(temp0_37, temp0_27)
                zmm6_1 = arg2[2]
                float temp0_42[0x4] = _mm_mul_ps(temp0_40, temp0_31)
                float temp0_43[0x4] = _mm_mul_ps(zmm6_1, zmm7_1)
                float temp0_44[0x4] = _mm_sub_ps(temp0_42, temp0_39)
                float temp0_45[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xd2)
                float temp0_46[0x4] = _mm_add_ps(temp0_44, temp0_41)
                zmm5_1 = *arg2
                float temp0_47[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                float temp0_48[0x4] = _mm_mul_ps(temp0_45, temp0_47)
                float var_120_1 = _mm_shuffle_ps(temp0_46, temp0_46, 0xaa)[0]
                var_158.q =
                    (_mm_unpacklo_ps(temp0_46, _mm_shuffle_ps(temp0_46, temp0_46, 0x55)[0].q)).q
                float temp0_52[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xc9)
                float temp0_53[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                float temp0_54[0x4] = _mm_mul_ps(temp0_52, temp0_53)
                var_154:4.d = var_120_1
                float temp0_55[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                float temp0_56[0x4] = _mm_sub_ps(temp0_48, temp0_54)
                float temp0_57[0x4] = _mm_add_ps(temp0_56, temp0_56)
                float temp0_58[0x4] = _mm_mul_ps(temp0_55, temp0_57)
                float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xc9), temp0_53)
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xd2)
                float temp0_62[0x4] = _mm_add_ps(temp0_58, temp0_43)
                float temp0_66[0x4] = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_61, temp0_47), temp0_60), temp0_62), 
                    arg2[1])
                result = _mm_shuffle_ps(temp0_66, temp0_66, 0xaa)[0]
                var_14c =
                    (_mm_unpacklo_ps(temp0_66, _mm_shuffle_ps(temp0_66, temp0_66, 0x55)[0].q)).q
                var_148:4.d = result
            
            rcx_2 += 0xc
            i = i_1
            i_1 -= 1
        while (i != 1)

if (not(result_1[0] f>= *(arg6 + 0x9c)))
    *(arg6 + 0x84) = var_158.q
    *(arg6 + 0x8c) = var_154:4.d
    result = var_148:4.d
    *(arg6 + 0x90) = var_14c
    *(arg6 + 0x98) = result
    *(arg6 + 0x9c) = result_1[0]

__security_check_cookie(rax_1 ^ &var_188)
return result
