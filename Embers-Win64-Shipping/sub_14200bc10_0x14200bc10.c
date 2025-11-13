// 函数: sub_14200bc10
// 地址: 0x14200bc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8 = arg2
arg1[8].b = 0
*(arg1 + 0x44) = 0
arg2 = *(arg1 + 0x2c)

if (not(arg2.d f<= 9.99999994e-09f) && not(arg3.d f<= 9.99999994e-09f)
        && not(zmm8.d f<= 9.99999994e-09f))
    uint128_t zmm6 = *(arg1 + 0x24)
    uint128_t zmm0
    zmm0.d = 1f f/ arg2.d
    uint128_t zmm7
    zmm7.d = zmm0.d f* zmm6.d
    zmm6.d = zmm6.d f+ zmm8.d
    zmm6.d = zmm6.d f* zmm0.d
    
    if (not(zmm6.d f<= 1f))
        zmm0.d = zmm6.d f- 1f
        zmm6.d = zmm6.d f- zmm0.d
        zmm7.d = zmm7.d f- zmm0.d
    
    void* rcx = arg1[0x17]
    
    if (rcx != 0)
        int128_t zmm0_1
        uint128_t zmm6_1
        int512_t zmm7_1
        zmm0_1, zmm6_1, zmm7_1 = sub_141f89240(rcx, zmm7)
        zmm7_1.o = zmm0_1
        int128_t zmm0_2
        int512_t zmm6_2
        zmm0_2, zmm6_2, zmm7 = sub_141f89240(arg1[0x17], zmm6_1)
        zmm6_2.o = zmm0_2
    
    float var_78
    float var_68
    float zmm9_1
    zmm8, zmm9_1 = sub_142006830(arg1, &var_78, sub_142006830(arg1, &var_68, zmm7))
    uint32_t zmm5_1[0x4] = data_143f3f2a0
    int32_t var_70
    uint32_t zmm2_1[0x4] = var_70
    int32_t var_60
    zmm2_1[0] = zmm2_1[0] f- var_60
    int32_t var_74
    float zmm3_1[0x4] = var_74
    int32_t var_64
    zmm3_1[0] = zmm3_1[0] f- var_64
    float zmm6_4[0x4] = var_78
    zmm6_4[0] = zmm6_4[0] - var_68
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm5_1, data_143f3f2b0)
    arg1[8].b = 1
    zmm9_1 = zmm9_1 f/ arg3.d
    *(arg1 + 0x70) = temp0_1
    zmm3_1[0] = zmm3_1[0] * zmm9_1
    zmm2_1[0] = zmm2_1[0] f* zmm9_1
    zmm6_4[0] = zmm6_4[0] * zmm9_1
    zmm5_1[0].q = zx.o(0) u>> 0x40
    uint32_t zmm0_3[0x4] = zmm2_1
    *(arg1 + 0x50) = _mm_shuffle_ps(zx.o(0), zmm5_1, 0xc4)
    zmm2_1 = _mm_unpacklo_ps(zmm3_1, 0)
    *(arg1 + 0x60) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_4, zmm0_3[0].q), zmm2_1[0].q)
    *(arg1 + 0x70) = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143a2d2d0, data_143a2d2d8[0].q), 
        _mm_unpacklo_ps(data_143a2d2d4, 0)[0].q)
    *(arg1 + 0x44) = 0x3f800000

zmm8.d = zmm8.d f+ *(arg1 + 0x24)
jump(*(*arg1 + 0x38))
