// 函数: sub_141dd6a40
// 地址: 0x141dd6a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x130)

if (rdi != 0)
    int32_t rax_1 = arg2[1].d
    uint64_t var_e8 = *arg2
    uint128_t zmm0 = zx.o(rdi[0x25])
    bool cond:0_1 = zmm0.d f!= rdi[0x36].d
    int32_t var_e0_1 = rax_1
    int32_t rax_2 = rdi[0x26].d
    uint64_t var_f8 = zmm0.q
    float zmm7[0x4]
    float zmm8[0x4]
    
    if (cond:0_1 || var_f8:4.d.d f!= *(rdi + 0x1b4) || not(rax_2.d f== rdi[0x37].d))
        uint128_t zmm4 = zx.o(rdi[0x25])
        uint32_t zmm5[0x4] = data_143f38d00
        uint128_t zmm2 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
        uint128_t zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_2.q), zmm2.q)
        zmm2 = data_143f38d30
        float var_28_1[0x4] = zmm7
        zmm7 = data_143f38d20
        uint128_t zmm3 = _mm_div_ps(zmm6, zmm7)
        float var_38_1[0x4] = zmm8
        uint32_t temp0_6[0x4] = _mm_and_ps(zmm5, zmm7)
        zmm0 = _mm_cvttps_epi32(zmm3)
        var_f8 = zmm4.q
        zmm4 = _mm_cvtepi32_ps(zmm0)
        zmm6 = _mm_sub_ps(zmm6, 
            _mm_mul_ps(
                _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm3, data_143f38d00), 2), 
                    zmm4 ^ zmm3) ^ zmm4, 
                zmm7))
        zmm2 = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_6), _mm_min_ps(zmm6, temp0_6))
        float temp0_17[0x4] = _mm_cmpeq_ps(zx.o(0), zmm2, 2)
        uint128_t zmm1 = _mm_add_ps(zmm2, zmm7)
        zmm8 = _mm_and_ps(temp0_17, zmm1 ^ zmm2) ^ zmm1
        zmm0 = _mm_cmpeq_ps(data_143f38d10, zmm8, 1)
        zmm2 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, zmm0) ^ zmm8
        int32_t var_f0_3 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
        rdi[0x36] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
        rdi[0x37].d = var_f0_3
        zmm8 = var_38_1
        zmm7 = var_28_1
        float var_d8[0x4]
        *(rdi + 0x1a0) = *sub_140ade170(rdi + 0x1b0, &var_d8)
    
    var_f8.o = *(rdi + 0x1a0)
    float zmm9[0x4]
    float zmm10[0x4]
    sub_141f48240(rdi, &var_e8, &var_f8, arg3, zmm7, zmm8, zmm9, zmm10, arg4, arg5)
else if (arg4 != 0)
    int128_t var_c8
    memset(&var_c8, 0, 0x88)
    int32_t var_c0_1 = 0x3f800000
    *arg4 = var_c8
    uint128_t var_b8
    arg4[1] = var_b8
    int128_t var_a8
    arg4[2] = var_a8
    uint128_t var_98
    arg4[3] = var_98
    int128_t var_88
    arg4[4] = var_88
    uint128_t var_78
    arg4[5] = var_78
    int128_t var_68
    arg4[6] = var_68
    int128_t var_58
    arg4[7] = var_58
    int64_t var_48
    arg4[8].q = var_48
