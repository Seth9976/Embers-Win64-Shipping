// 函数: sub_141ee6200
// 地址: 0x141ee6200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rax_2 = sub_140d3c6e0(arg1 + 0x140)

if (rax_2 == 0)
    int64_t* rax_5 = sub_140d3c6e0(arg1 + 0x128)
    
    if (sub_141ea5e60(rax_5) == 0)
        *arg2 = *(arg1 + 0x3c)
        arg2[2] = *(arg1 + 0x44)
    else
        float var_78
        float var_68[0x4]
        sub_141ea3bd0(rax_5, *(arg1 + 0x130), &var_78, &var_68)
        float var_74
        float zmm1_1 = var_74 f+ *(arg1 + 0x4c)
        float zmm0_1 = var_78 f+ *(arg1 + 0x48)
        float var_70
        arg2[2] = var_70 f+ *(arg1 + 0x50)
        arg2[1] = zmm1_1
        *arg2 = zmm0_1
else
    void var_58
    int128_t* rax_4 = (*(*rax_2 + 0x408))(rax_2, &var_58, *(arg1 + 0x148), 0)
    float zmm5_1[0x4] = *rax_4
    float temp0_4[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x150), (*(arg1 + 0x158))[0].q), 
            _mm_unpacklo_ps(*(arg1 + 0x154), 0)[0].q), 
        rax_4[2])
    float temp0_5[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_6)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_5), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
    float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_5)
    float temp0_18[0x4] = _mm_mul_ps(temp0_15, temp0_6)
    float temp0_19[0x4] = _mm_add_ps(temp0_14, temp0_4)
    float temp0_22[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_17, temp0_18), temp0_19), rax_4[1])
    *arg2 = temp0_22[0]
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
    arg2[2] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
    arg2[1] = temp0_23[0]

__security_check_cookie(rax_1 ^ &var_98)
return arg2
