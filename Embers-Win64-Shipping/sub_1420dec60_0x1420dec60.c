// 函数: sub_1420dec60
// 地址: 0x1420dec60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm12 = *arg2

if (not(zmm12.d f!= 0f) && not(0f f!= *(arg2 + 4)) && not(0f f!= *(arg2 + 8)))
    int32_t rax = arg3[1].d
    *arg1 = *arg3
    arg1[1].d = rax
    return arg1

uint128_t zmm9 = *arg3
uint128_t zmm10 = *(arg3 + 4)
int128_t zmm11 = arg3[1].d
uint128_t zmm13 = *(arg2 + 4)
uint128_t zmm0
zmm0.d = zmm12.d f* zmm12.d
uint128_t zmm2
zmm2.d = zmm10.d f* zmm13.d
float zmm3 = zmm13.d f* zmm13.d f+ zmm0.d
int128_t zmm14 = *(arg2 + 8)
zmm0.d = zmm9.d f* zmm12.d
zmm3 = zmm3 + zmm14.d f* zmm14.d
zmm2.d = zmm2.d f+ zmm0.d
float temp0[0x4] = _mm_sqrt_ss(0, zmm3)
zmm2.d = zmm2.d f+ zmm11.d f* zmm14.d
zmm2.d = zmm2.d f/ zmm3
uint128_t zmm6
zmm6.d = zmm12.d f* zmm2.d
uint128_t zmm7
zmm7.d = zmm13.d f* zmm2.d
int128_t zmm8
zmm8.d = zmm14.d f* zmm2.d

if (temp0[0] >= 9.99999975e-05f)
    zmm2.d = zmm7.d f* zmm7.d
    zmm0.d = zmm6.d f* zmm6.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
    
    if (not(zmm2.d f<= zmm3))
        zmm3 = zmm2.d
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3)
        zmm3 = zmm3 * 0.5f
        zmm0.d = temp0_1.d f* temp0_1[0]
        zmm2.d = 0.5f - zmm3 f* zmm0.d
        zmm0.d = temp0_1.d f* zmm2.d
        temp0_1[0] = temp0_1[0] f+ zmm0.d
        zmm0.d = temp0_1.d f* (0.5f - zmm3 * temp0_1[0] * temp0_1[0])
        temp0_1[0] = temp0_1[0] f+ zmm0.d
        temp0_1[0] = temp0_1[0] * temp0[0]
        zmm6.d = zmm6.d f* temp0_1[0]
        zmm7.d = zmm7.d f* temp0_1[0]
        zmm8.d = zmm8.d f* temp0_1[0]
else
    zmm6 = data_143dbb1f8
    zmm7 = data_143dbb1fc
    zmm8 = data_143dbb200

zmm9.d = zmm9.d f- zmm6.d
zmm10.d = zmm10.d f- zmm7.d
zmm11.d = zmm11.d f- zmm8.d
zmm9.d = zmm9.d f+ zmm12.d
zmm10.d = zmm10.d f+ zmm13.d
zmm11.d = zmm11.d f+ zmm14.d
*arg1 = zmm9.d
*(arg1 + 4) = zmm10.d
arg1[1].d = zmm11.d
return arg1
