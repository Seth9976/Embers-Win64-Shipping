// 函数: sub_141f636d0
// 地址: 0x141f636d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x410)
void* rcx

if (rax s<= 0)
    rcx = &data_143a2d880
else if (*(arg1 + 0x4e1) == 0 || arg3 s< rax)
    int32_t rax_1 = rax - 1
    
    if (arg3 s>= 0)
        if (arg3 s< rax_1)
            rax_1 = arg3
        
        rcx = sx.q(rax_1) * 0x2c + *(arg1 + 0x408)
    else
        rcx = *(arg1 + 0x408)
else
    rcx = *(arg1 + 0x408)

int64_t var_28
float var_20

if (arg4 != 1)
    var_28 = *(rcx + 4)
    var_20 = *(rcx + 0xc)
else
    float zmm5[0x4] = *(arg1 + 0x1c0)
    float zmm2[0x4] = *(rcx + 8)
    float temp0_1[0x4] = _mm_unpacklo_ps(*(rcx + 4), (*(rcx + 0xc))[0].q)
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm2, 0)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_5[0x4] =
        __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_1, temp0_2[0].q), *(arg1 + 0x1e0))
    float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_3), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_3)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
    float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_5)
    float temp0_22[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_16, _mm_mul_ps(temp0_17, temp0_6)), temp0_18), *(arg1 + 0x1d0))
    var_28.d = temp0_22[0]
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
    var_20 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
    var_28:4.d = temp0_23[0]

*arg2 = var_28
arg2[1].d = var_20
return arg2
