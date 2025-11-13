// 函数: sub_141c3cc20
// 地址: 0x141c3cc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result[0x4] = zx.o(0)
float zmm3[0x4] = data_143205550
float zmm8[0x4] = arg4[1].d
float zmm9[0x4] = *(arg4 + 0x28)
float temp0[0x4] = _mm_unpacklo_ps(*(arg4 + 0x14), (*(arg4 + 4))[0].q)
float zmm1[0x4] = *(arg5 + 4)
float zmm10[0x4] = *arg4
float zmm12[0x4] = arg5[1].d
float zmm13[0x4] = *(arg5 + 0x28)
float temp0_1[0x4] = _mm_sub_ps(*arg5, zmm10)
float zmm7[0x4] = *(arg4 + 8)
float zmm11[0x4] = *(arg4 + 0x18)
float temp0_2[0x4] = _mm_sub_ps(*(arg5 + 8), zmm7)
float zmm5[0x4] = *(arg5 + 0x18)
result[0] = float.s(arg3)
float temp0_3[0x4] = _mm_sub_ps(zmm5, zmm11)
result[0] = result[0] * 0.5f
float temp0_4[0x4] = _mm_unpacklo_ps(zmm8, (*arg4)[0].q)
float temp0_5[0x4] = _mm_unpacklo_ps(zmm12, (*arg5)[0].q)
float temp0_6[0x4] = _mm_unpacklo_ps(temp0_4, temp0[0].q)
float temp0_7[0x4] = _mm_unpacklo_ps(*(arg5 + 0x14), zmm1[0].q)
zmm1 = *(arg4 + 0x1c)
float temp0_8[0x4] = _mm_unpacklo_ps(temp0_5, temp0_7[0].q)
float zmm2[0x4] = *(arg4 + 0x2c)
float temp0_9[0x4] = _mm_sub_ps(temp0_8, temp0_6)
float temp0_10[0x4] = _mm_shuffle_ps(result, result, 0)
float temp0_11[0x4] = _mm_unpacklo_ps(zmm2, zmm1[0].q)
zmm1 = *(arg5 + 0x1c)
float temp0_12[0x4] = _mm_div_ps(temp0_2, temp0_10)
float temp0_13[0x4] = _mm_div_ps(temp0_9, temp0_10)
zmm5 = _mm_div_ps(temp0_3, temp0_10)
float temp0_15[0x4] = _mm_mul_ps(zmm3, temp0_13)
float var_b8[0x4] = zmm5
float temp0_16[0x4] = _mm_div_ps(temp0_1, temp0_10)
zmm8 = _mm_add_ps(temp0_6, temp0_15)
zmm7 = _mm_add_ps(zmm7, _mm_mul_ps(data_142d3f640, temp0_12))
float temp0_20[0x4] = _mm_unpacklo_ps(zmm9, (*(arg4 + 0x18))[0].q)
result = *(arg5 + 0x18)
float temp0_21[0x4] = _mm_unpacklo_ps(temp0_20, temp0_11[0].q)
float temp0_26[0x4] = _mm_div_ps(
    _mm_sub_ps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, result[0].q), 
            _mm_unpacklo_ps(*(arg5 + 0x2c), zmm1[0].q)[0].q), 
        temp0_21), 
    temp0_10)
zmm9 = _mm_add_ps(temp0_21, _mm_mul_ps(zmm3, temp0_26))

if (arg3 s> 0)
    void* rcx = arg1 + 0xc
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    void* r8_1 = arg2 + 0x20
    void* rdx = rcx
    uint64_t i_1 = zx.q(((arg3 - 1) u>> 1) + 1)
    uint64_t i
    
    do
        float zmm4[0x4] = *(rcx - 0xc)
        zmm6 = *(rcx - 8)
        zmm1 = *(rdx - 8)
        result = *(rdx - 0xc)
        float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm11)
        zmm11 = _mm_add_ps(zmm11, zmm5)
        zmm5 = *rcx
        float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), zmm10)
        zmm10 = _mm_add_ps(zmm10, temp0_16)
        float temp0_35[0x4] = _mm_unpacklo_ps(zmm6, zmm5[0].q)
        float temp0_36[0x4] = _mm_add_ps(temp0_30, temp0_33)
        result = *(rcx - 4)
        float temp0_37[0x4] = _mm_unpacklo_ps(zmm4, result[0].q)
        rcx += 0x10
        float temp0_38[0x4] = _mm_unpacklo_ps(zmm4, result[0].q)
        result = *rdx
        float temp0_39[0x4] = _mm_unpacklo_ps(temp0_38, temp0_37[0].q)
        *(r8_1 - 0x20) = temp0_36
        zmm1 = *(rdx - 4)
        rdx += 0x10
        float temp0_40[0x4] = _mm_unpacklo_ps(zmm6, zmm5[0].q)
        zmm5 = var_b8
        float temp0_41[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_42[0x4] = _mm_mul_ps(temp0_39, zmm8)
        zmm8 = _mm_add_ps(zmm8, temp0_13)
        float temp0_44[0x4] = _mm_mul_ps(temp0_41, zmm7)
        float temp0_46[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_40, temp0_35[0].q), zmm9)
        zmm9 = _mm_add_ps(zmm9, temp0_26)
        result = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), zmm7)
        zmm7 = _mm_add_ps(zmm7, temp0_12)
        float temp0_51[0x4] = _mm_add_ps(temp0_42, temp0_46)
        float temp0_52[0x4] = _mm_add_ps(temp0_44, result)
        *(r8_1 - 0x10) = temp0_51
        *r8_1 = temp0_52
        r8_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
