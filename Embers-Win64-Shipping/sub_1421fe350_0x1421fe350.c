// 函数: sub_1421fe350
// 地址: 0x1421fe350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = (*(arg2 + 0x18)).d
int128_t zmm2 = *(arg5 + 0xc)
int64_t var_30 = 0
int32_t var_28
int32_t* rdx = &var_28
float rax_3
float zmm1[0x4]

if ((*(*(*(arg2 + 0x28) + 0x30) + 0x59) & 1) == 0)
    sub_141fe56b0(arg1 + 0x30, rdx, zmm2, arg4, r9, nullptr)
    void* rax_4 = *(arg2 + 0x18)
    float zmm5_1[0x4] = *(rax_4 + 0x1c0)
    int32_t var_24
    int32_t var_20
    float temp0_4[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_28, var_20[0].q), _mm_unpacklo_ps(var_24, 0)[0].q), 
        *(rax_4 + 0x1e0))
    float temp0_5[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_6), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_5)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
    float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_4)
    float temp0_22[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_17, temp0_6), temp0_16), temp0_18), *(rax_4 + 0x1d0))
    rax_3 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
    zmm1 = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
    *(arg5 + 0x10) = (_mm_unpacklo_ps(temp0_22, zmm1[0].q)).q
else
    int64_t* rax_2
    rax_2, zmm1 = sub_141fe56b0(arg1 + 0x30, rdx, zmm2, arg4, r9, nullptr)
    *(arg5 + 0x10) = *rax_2
    rax_3 = rax_2[1].d

*(arg5 + 0x18) = rax_3
void* rbx_1 = zx.q(arg3) + arg5
int64_t var_30_1 = 0
int64_t* rax_5 =
    sub_141fe56b0(arg1 + 0x78, &var_28, *(arg2 + 0x12c), zmm1, (*(arg2 + 0x18)).d, nullptr)
*rbx_1 = *rax_5
*(rbx_1 + 8) = rax_5[1].d
float zmm2_2[0x2] = *rbx_1
zmm2_2[0] = zmm2_2[0] f+ *(arg5 + 0x10)
*(arg5 + 0x10) = zmm2_2[0]
double zmm0_2
zmm0_2.d = (*(rbx_1 + 4)).d f+ *(arg5 + 0x14)
*(arg5 + 0x14) = zmm0_2.d
float zmm1_1 = *(rbx_1 + 8) f+ *(arg5 + 0x18)
double _X = _mm_cvtps_pd(zmm2_2)
*(arg5 + 0x18) = zmm1_1
int32_t result = _finite(_X)

if (result != 0)
    result = _finite(_mm_cvtps_pd(*(arg5 + 0x14)))
    
    if (result != 0)
        return _finite(_mm_cvtps_pd(*(arg5 + 0x18))) __tailcall

return result
