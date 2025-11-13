// 函数: sub_1420cf250
// 地址: 0x1420cf250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg1

if (arg5 == 0)
    float zmm1 = (arg3[1] f- arg2[1]) f* arg4.d + arg2[1]
    *arg1 = (*arg3 - *arg2) f* arg4.d + *arg2
    float zmm0 = arg3[2] f- arg2[2]
    arg1[1] = zmm1
    arg1[2] = zmm0 f* arg4.d + arg2[2]
else
    float var_28[0x4]
    float var_48[0x4] = *sub_140ade170(arg2, &var_28)
    float (* rax_2)[0x4]
    uint32_t zmm6_1[0x4]
    rax_2, zmm6_1 = sub_140ade170(arg3, &var_28)
    float var_58[0x4] = *rax_2
    float (* rax_3)[0x4] = sub_140ae0e60(&var_28, &var_48, &var_58, zmm6_1)
    float zmm5_1[0x4] = data_143f47ed0
    arg5.d = 0x322bcc77
    float zmm6_2[0x4] = *rax_3
    float temp0_1[0x4] = _mm_mul_ps(zmm6_2, zmm6_2)
    float temp0_3[0x4] = _mm_add_ps(temp0_1, _mm_shuffle_ps(temp0_1, temp0_1, 0x4e))
    float temp0_5[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x39), temp0_3)
    float temp0_6[0x4] = _mm_rsqrt_ps(temp0_5)
    uint32_t zmm3[0x4] = _mm_mul_ps(zmm5_1, temp0_5)
    float temp0_12[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_6, temp0_6), zmm3)), temp0_6), 
        temp0_6)
    float temp0_15[0x4] = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_12, temp0_12), zmm3))
    float temp0_17[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_5, 2)
    float var_38[0x4] = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_15, temp0_12), temp0_12), zmm6_2) ^ data_143f47ec0, 
        temp0_17) ^ data_143f47ec0
    sub_140adf5d0(&var_38, result)

return result
