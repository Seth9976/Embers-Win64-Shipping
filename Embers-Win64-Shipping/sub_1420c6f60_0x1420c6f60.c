// 函数: sub_1420c6f60
// 地址: 0x1420c6f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = *(arg1 + 4)
uint32_t zmm8[0x4] = *arg1
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
zmm8[0] = zmm8[0] f* zmm8[0]
uint32_t zmm9[0x4] = arg1[1].d
zmm8[0] = zmm8[0] f+ zmm0.d
zmm9[0] = zmm9[0] f* zmm9[0]
zmm8[0] = zmm8[0] f+ zmm9[0]
uint128_t zmm7

if (not(zmm8[0] f!= 1f))
    zmm0 = zx.o(*arg1)
    zmm9 = arg1[1].d
    zmm8 = zmm0.d
    zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
else if (zmm8[0] f>= 9.99999994e-09f)
    zmm0 = zmm8
    uint128_t zmm5 = _mm_rsqrt_ss(zmm0.d, zmm0.d)
    uint32_t zmm2[0x4] = 0x3f000000
    uint128_t zmm3
    zmm3.d = zmm0.d f* 0.5f
    zmm0.d = zmm5.d f* zmm5.d
    uint32_t zmm1[0x4] = zmm3
    zmm1[0] = zmm1[0] f* zmm0.d
    zmm2[0] = 0.5f f- zmm1[0]
    zmm0.d = zmm5.d f* zmm2[0]
    zmm5.d = zmm5.d f+ zmm0.d
    zmm1 = zmm5
    zmm1[0] = zmm1[0] f* zmm5.d
    zmm3.d = zmm3.d f* zmm1[0]
    zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
    zmm5.d = zmm5.d f+ zmm0.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm8[0] = zmm8[0] f* zmm5.d
    zmm7 = zmm6
    zmm9[0] = zmm9[0] f* zmm5.d
else
    zmm8 = data_143dbb1f8
    zmm7 = data_143dbb1fc
    zmm9 = data_143dbb200

uint32_t zmm0_1[0x4] = sub_140a3f4a0(zmm7, zmm8)
zmm0_1[0] = zmm0_1[0] f* 57.2957764f
zmm7.d = zmm7.d f* zmm7.d
zmm8[0] = zmm8[0] f* zmm8[0]
*arg2 = zmm0_1[0]
zmm7.d = zmm7.d f+ zmm8[0]
int64_t result
float zmm0_2
zmm0_2, result = sub_140a3f4a0(zmm9, _mm_sqrt_ss(0, zmm7.d))
*arg3 = zmm0_2 * 57.2957764f
return result
