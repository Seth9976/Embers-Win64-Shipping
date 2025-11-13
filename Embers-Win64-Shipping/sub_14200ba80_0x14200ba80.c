// 函数: sub_14200ba80
// 地址: 0x14200ba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = 0x3f800000
arg1[8].b = 0
*(arg1 + 0x44) = 0
float zmm8[0x4] = arg1[0x13].d
float zmm9[0x4] = arg3
uint128_t zmm10 = arg2
uint32_t zmm12[0x4] = data_143f3f2a0
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 0x9c), 0)
uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm12, data_143f3f2b0)
zmm12[0].q = zx.o(0) u>> 0x40
float temp0_2[0x4] = _mm_shuffle_ps(zx.o(0), zmm12, 0xc4)
void* rcx = arg1[0x15]
zmm8 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, arg1[0x14].d[0].q), temp0[0].q)
uint32_t zmm0[0x4]

if (rcx != 0)
    zmm0 = *(arg1 + 0x2c)
    arg2 = *(arg1 + 0x24)
    
    if (not(zmm0[0] f<= 0f))
        arg2.d = arg2.d f/ zmm0[0]
        
        if (arg2.d f>= 0f)
            arg2 = _mm_min_ss(arg2.d, 0x3f800000)
        else
            arg2 = zx.o(0)
    
    zmm0, zmm6, zmm8, zmm9 = sub_141f89240(rcx, arg2)
    float temp0_6[0x4] = _mm_unpacklo_ps(zmm0, 0)
    zmm8 = _mm_mul_ps(zmm8, _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, zmm0[0].q), temp0_6[0].q))

if (not(zmm9[0] <= 9.99999994e-09f))
    zmm6.d = zmm10.d f/ zmm9[0]

arg1[8].b = 1
*(arg1 + 0x50) = temp0_2
*(arg1 + 0x70) = temp0_1
*(arg1 + 0x60) =
    _mm_mul_ps(zmm8, _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm6.q), _mm_unpacklo_ps(zmm6, 0)[0].q))
zmm0 = data_143a2d2d8
float zmm3[0x4] = data_143a2d2d0
float temp0_14[0x4] = _mm_unpacklo_ps(data_143a2d2d4, 0)
*(arg1 + 0x44) = 0x3f800000
*(arg1 + 0x70) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), temp0_14[0].q)
zmm10.d = zmm10.d f+ *(arg1 + 0x24)
jump(*(*arg1 + 0x38))
