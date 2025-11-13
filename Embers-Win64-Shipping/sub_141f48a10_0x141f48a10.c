// 函数: sub_141f48a10
// 地址: 0x141f48a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(*(arg1 + 0x11c))
bool cond:0 = zmm0.d f!= *arg2
int32_t rax = *(arg1 + 0x124)
uint64_t var_58 = zmm0.q

if (cond:0 || var_58:4.d.d f!= arg2[1] || rax.d f!= arg2[2])
    rax.b = 1
else
    rax.b = 0

float zmm3[0x4] = *arg3
int128_t* r8
float zmm7[0x4]
float zmm8[0x4]
float var_48[0x4]

if (rax.b == 0)
    uint128_t zmm5 = zx.o(arg1[0x25])
    int32_t rax_2 = arg1[0x26].d
    float temp0_1[0x4] = _mm_unpacklo_ps(*(arg3 + 4), 0)
    uint128_t zmm6 = data_143f3b410
    float var_28_1[0x4] = zmm7
    float var_38_1[0x4] = zmm8
    float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*(arg3 + 8)).q), temp0_1[0].q)
    float zmm2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    uint128_t zmm4 =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, rax_2[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q)
    zmm2 = data_143f3b420
    float temp0_8[0x4] = _mm_sub_ps(temp0_3, zmm4)
    var_58 = zmm5.q
    zmm5 = __andps_xmmxud_memxud(zmm6, data_143f3b3e0)
    float temp0_10[0x4] = _mm_div_ps(temp0_8, zmm6)
    uint128_t temp0_12 = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_10))
    float temp0_17[0x4] = _mm_sub_ps(temp0_8, 
        _mm_mul_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_10, data_143f3b3e0), 2), 
                temp0_12 ^ temp0_10) ^ temp0_12, 
            zmm6))
    float temp0_20[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5), _mm_min_ps(temp0_17, zmm5))
    float temp0_21[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_20, 2)
    float temp0_22[0x4] = _mm_add_ps(temp0_20, zmm6)
    zmm7 = _mm_and_ps(temp0_21, temp0_22 ^ temp0_20) ^ temp0_22
    zmm0 = _mm_cmpeq_ps(data_143f3b400, zmm7, 1)
    float zmm1[0x4] = _mm_and_ps(_mm_sub_ps(zmm7, zmm6) ^ zmm7, zmm0) ^ zmm7
    uint32_t result = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0), 
        __andps_xmmxud_memxud(zmm1, data_143f3b3e0), 1))
    
    if (result == 0)
        return result
    
    int32_t rax_3 = arg2[2]
    var_58 = *arg2
    int32_t var_50_3 = rax_3
    float (* rax_4)[0x4]
    rax_4, zmm7, zmm8 = sub_140ade170(arg3, &var_48)
    r8 = rax_4
else
    bool cond:1_1 = zmm3[0] f!= arg1[0x36].d
    int32_t var_50_1 = arg2[2]
    var_58 = *arg2
    
    if (cond:1_1 || (*(arg3 + 4)).d f!= *(arg1 + 0x1b4) || (*(arg3 + 8)).d f!= arg1[0x37].d)
        zmm7, zmm8 = sub_140ade170(arg3, &var_48)
        r8 = &var_48
    else
        r8 = &var_48
        var_48 = *(arg1 + 0x1a0)
float zmm9[0x4]
float zmm10[0x4]
return sub_141f48240(arg1, &var_58, r8, arg4, zmm7, zmm8, zmm9, zmm10, arg5, arg6)
