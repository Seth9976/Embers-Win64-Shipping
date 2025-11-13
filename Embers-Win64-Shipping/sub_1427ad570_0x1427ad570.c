// 函数: sub_1427ad570
// 地址: 0x1427ad570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8
float rax_3
float zmm0_1
float zmm2_1
float temp0_54

if (*(arg1 + 0x441) != 0)
    int64_t var_c8
    int32_t var_c0_1
    
    if (*(arg1 + 0x440) == 0)
        int32_t rax = *(arg1 + 0x430)
        var_c8 = *(arg1 + 0x428)
        var_c0_1 = rax
    else
        var_c8.d = (*(arg1 + 0x428) ^ 0x80000000).d
        var_c0_1 = (*(arg1 + 0x430) ^ 0x80000000).d
        var_c8:4.d = (*(arg1 + 0x42c) ^ 0x80000000).d
    
    bool cond:2_1 = *(arg1 + 0x425) == 0
    uint128_t zmm2 = *(arg1 + 0x434)
    uint128_t zmm1 = *(arg1 + 0x420)
    float zmm7[0x4] = *(arg1 + 0x1e0)
    float zmm6[0x4] = *(arg1 + 0x1c0)
    var_d8 = var_c8
    uint128_t zmm0 = zmm2
    zmm2.d = zmm2.d f+ *(arg1 + 0x438)
    zmm0.d = zmm0.d f* zmm1.d
    zmm2.d = zmm2.d f* zmm1.d
    float zmm8[0x4] = _mm_cvtps_pd(zmm0.q)
    double zmm12[0x2] = _mm_cvtps_pd(zmm2.q)
    uint64_t var_b8
    int64_t* rax_2
    float zmm3[0x4]
    float zmm4[0x4]
    float zmm5[0x4]
    
    if (cond:2_1)
        rax_2 = &var_c8
        zmm5 = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(var_d8.d, var_c0_1.q), 
                _mm_unpacklo_ps(var_d8:4.d, 0).q), 
            zmm7)
        zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm1)
        zmm3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), zmm4), zmm0)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm1)
        zmm2 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm4), zmm0), 
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm3), zmm5))
        var_c8.d = zmm2.d
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        int32_t var_c0_2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
        var_c8:4.d = zmm0.d
    else
        int32_t var_b0_1 = var_c0_1
        rax_2 = &var_b8
        var_b8 = var_c8
    
    uint128_t zmm11 = zx.o(*rax_2)
    rax_3 = rax_2[1].d
    zmm4 = _mm_mul_ps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(data_143dbb1f8, data_143dbb200.q), 
            _mm_unpacklo_ps(data_143dbb1fc, 0).q), 
        zmm7)
    zmm5 = rax_3
    int32_t rax_4 = arg4[1].d
    zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
    zmm3 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), zmm1)
    int32_t var_b0_2 = rax_4
    int32_t rax_5 = arg3[1].d
    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), zmm3)
    int32_t var_a0_1 = rax_5
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    var_d8 = zmm11.q
    zmm2 = _mm_sub_ps(zmm2, zmm0)
    zmm2 = _mm_add_ps(zmm2, zmm2)
    zmm6 = _mm_mul_ps(zmm6, zmm2)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm1)
    float zmm10[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
    zmm6 = _mm_add_ps(zmm6, zmm4)
    zmm10 = _mm_sub_ps(_mm_mul_ps(zmm10, zmm3), zmm0)
    zmm0 = _mm_cvtpd_ps(zmm8)
    zmm10 = _mm_add_ps(zmm10, zmm6)
    zmm6 = var_d8:4.d
    zmm1.d = zmm11.d f* zmm0.d
    zmm2.d = zmm6.d f* zmm0.d
    zmm10 = __addps_xmmps_memps(zmm10, *(arg1 + 0x1d0))
    zmm5[0] = zmm5[0] f* zmm0.d
    zmm4 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
    zmm10[0] = zmm10[0] f+ zmm1.d
    zmm1 = _mm_cvtpd_ps(zmm12)
    zmm0.d = zmm4.d f+ zmm5[0]
    zmm7 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
    zmm11.d = zmm11.d f* zmm1.d
    zmm6[0] = zmm6[0] f* zmm1.d
    zmm7[0] = zmm7[0] f+ zmm2.d
    float var_c0_3 = zmm0.d
    zmm10[0] = zmm10[0] f+ zmm11.d
    var_b8 = *arg4
    zmm7[0] = zmm7[0] + zmm6[0]
    uint64_t var_a8 = *arg3
    zmm5[0] = zmm5[0] f* zmm1.d
    uint64_t var_98 = (_mm_unpacklo_ps(zmm10, zmm7[0].q)).q
    zmm4[0] = zmm4[0] + zmm5[0]
    uint64_t var_88 = (_mm_unpacklo_ps(zmm10, zmm7[0].q)).q
    float var_90_1 = zmm4[0]
    float var_80_2 = var_c0_3
    sub_140adfbe0(&var_88, &var_98, &var_a8, &var_b8, &var_c8, &var_d8)
    float zmm1_1 = var_d8.d f- var_c8.d
    zmm0_1 = rax_3 - var_c0_3
    zmm2_1 = var_d8:4.d f- var_c8:4.d
    zmm2_1 = zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 + zmm0_1 * zmm0_1
    zmm0_1 = *(arg1 + 0x41c) f* *(arg1 + 0x420)
    temp0_54 = _mm_sqrt_ss(0, zmm2_1)

uint32_t result

if (*(arg1 + 0x441) == 0 || temp0_54 > zmm0_1)
    result.b = 0
else
    sub_140d3a3a0(arg2 + 0x70, arg1)
    float zmm4_1[0x4] = var_d8.d
    int64_t zmm3_1 = var_d8:4.d
    zmm4_1[0] = zmm4_1[0] f- *arg3
    zmm2_1 = zmm3_1.d f- *(arg3 + 4)
    float zmm0_2 = rax_3 f- arg3[1].d
    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
    zmm2_1 = zmm2_1 * zmm2_1 + zmm4_1[0]
    *(arg2 + 0x1c) = (_mm_unpacklo_ps(zmm4_1, zmm3_1)).q
    *(arg2 + 0x24) = rax_3
    result.b = 1
    *(arg2 + 0xc) = _mm_sqrt_ss(0, zmm2_1 + zmm0_2 * zmm0_2)

return result
