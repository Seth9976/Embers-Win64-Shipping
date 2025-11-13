// 函数: sub_141c3d870
// 地址: 0x141c3d870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = zx.o(0)
int128_t* r10 = arg1
float zmm6[0x4] = arg4[1].d
float zmm7[0x4] = *arg4
float temp0[0x4] = _mm_unpacklo_ps(*(arg4 + 0x14), *(arg4 + 4))
int64_t zmm1 = *(arg5 + 4)
float zmm9[0x4] = arg5[1].d
float temp0_1[0x4] = _mm_sub_ps(*arg5, zmm7)
float zmm8[0x4] = *(arg4 + 8)
float zmm11[0x4] = *(arg5 + 8)
zmm0[0] = float.s(arg3)
float temp0_2[0x4] = _mm_sub_ps(zmm11, zmm8)
zmm0[0] = zmm0[0] * 0.5f
float zmm3[0x4] = zmm0
zmm0 = *arg4
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_4[0x4] = _mm_unpacklo_ps(zmm6, zmm0[0].q)
zmm0 = *arg5
zmm6 = _mm_unpacklo_ps(temp0_4, temp0[0].q)
float temp0_9[0x4] = _mm_sub_ps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm9, zmm0[0].q), _mm_unpacklo_ps(*(arg5 + 0x14), zmm1)[0].q), 
    zmm6)
float temp0_10[0x4] = _mm_div_ps(temp0_1, temp0_3)
float temp0_11[0x4] = _mm_div_ps(temp0_9, temp0_3)
float temp0_12[0x4] = _mm_div_ps(temp0_2, temp0_3)

if (arg3 s> 0)
    float (* rdx)[0x4] = arg1
    float (* rcx)[0x4] = arg2 + 0x20
    uint64_t i_1 = zx.q(((arg3 - 1) u>> 1) + 1)
    uint64_t i
    
    do
        float zmm4[0x4] = *r10
        zmm0 = *rdx
        float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm7)
        zmm7 = _mm_add_ps(zmm7, temp0_10)
        rcx[-2] = temp0_14
        zmm0 = *(r10 + 4)
        r10 += 8
        float temp0_16[0x4] = _mm_unpacklo_ps(zmm4, zmm0[0].q)
        float temp0_17[0x4] = _mm_unpacklo_ps(zmm4, zmm0[0].q)
        zmm0 = (*rdx)[1]
        rdx = &(*rdx)[2]
        float temp0_19[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_16, temp0_17[0].q), zmm6)
        zmm6 = _mm_add_ps(zmm6, temp0_11)
        float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm8)
        zmm8 = _mm_add_ps(zmm8, temp0_12)
        rcx[-1] = temp0_19
        *rcx = temp0_22
        rcx = &rcx[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg5
