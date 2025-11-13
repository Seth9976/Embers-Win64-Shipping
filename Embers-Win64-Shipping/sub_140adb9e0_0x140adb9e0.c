// 函数: sub_140adb9e0
// 地址: 0x140adb9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = 0x3f800000
uint128_t zmm4 = 0x3f000000
uint128_t zmm6 = arg2[1].d
uint128_t zmm7 = *(arg2 + 4)
uint128_t zmm8 = *arg2
uint128_t zmm12 = data_143dbb200
uint128_t zmm2
zmm2.d = zmm8.d f* zmm8.d
uint128_t zmm13 = data_143dbb1fc
uint128_t zmm0
zmm0.d = zmm7.d f* zmm7.d
uint128_t zmm1
zmm1.d = zmm6.d f* zmm6.d
zmm2.d = zmm2.d f+ zmm0.d
uint128_t zmm14 = data_143dbb1f8
zmm2.d = zmm2.d f+ zmm1.d

if (not(zmm2.d f!= 1f))
    zmm0 = zx.o(*arg2)
    zmm6 = arg2[1].d
    zmm8 = zmm0.d
    zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
else if (zmm2.d f>= 9.99999994e-09f)
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm2[0], zmm2.d)
    zmm3.d = zmm2.d f* 0.5f
    zmm0.d = temp0_2.d f* temp0_2[0]
    zmm1.d = zmm3.d f* zmm0.d
    zmm2.d = 0.5f f- zmm1.d
    zmm0.d = temp0_2.d f* zmm2.d
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm1.d = temp0_2.d f* temp0_2[0]
    zmm3.d = zmm3.d f* zmm1.d
    zmm4.d = 0.5f f- zmm3.d
    zmm3 = 0x3f800000
    zmm0.d = temp0_2.d f* zmm4.d
    zmm4 = 0x3f000000
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm8.d = zmm8.d f* temp0_2[0]
    zmm7.d = zmm7.d f* temp0_2[0]
    zmm6.d = zmm6.d f* temp0_2[0]
else
    zmm8 = zmm14
    zmm7 = zmm13
    zmm6 = zmm12

int64_t var_a8_2
int32_t var_a0_2

if (__andps_xmmxud_memxud(zmm6, data_142d3f770).d f>= 0.999899983f)
    var_a8_2 = 0x3f800000
    var_a0_2 = 0
else
    var_a8_2 = 0
    var_a0_2 = 0x3f800000

zmm0 = zx.o(var_a8_2)
uint128_t zmm10 = zmm0.d
zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
uint128_t zmm11 = zmm1
uint128_t zmm9 = var_a0_2
zmm1.d = zmm1.d f* zmm8.d
zmm0.d = zmm9.d f* zmm7.d
zmm11.d = zmm11.d f* zmm6.d
zmm9.d = zmm9.d f* zmm8.d
zmm11.d = zmm11.d f- zmm0.d
zmm0.d = zmm10.d f* zmm6.d
zmm10.d = zmm10.d f* zmm7.d
zmm9.d = zmm9.d f- zmm0.d
zmm0.d = zmm11.d f* zmm11.d
zmm10.d = zmm10.d f- zmm1.d
zmm2.d = zmm9.d f* zmm9.d
zmm1.d = zmm10.d f* zmm10.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d

if (not(zmm2.d f== zmm3.d))
    if (zmm2.d f>= 9.99999994e-09f)
        float temp0_5[0x4] = _mm_rsqrt_ss(zmm2[0], zmm2.d)
        zmm3.d = zmm2.d f* zmm4.d
        zmm0.d = temp0_5.d f* temp0_5[0]
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = zmm4.d f- zmm1.d
        zmm0.d = temp0_5.d f* zmm2.d
        temp0_5[0] = temp0_5[0] f+ zmm0.d
        zmm1.d = temp0_5.d f* temp0_5[0]
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = zmm4.d f- zmm3.d
        zmm0.d = temp0_5.d f* zmm4.d
        temp0_5[0] = temp0_5[0] f+ zmm0.d
        zmm11.d = zmm11.d f* temp0_5[0]
        zmm9.d = zmm9.d f* temp0_5[0]
        zmm10.d = zmm10.d f* temp0_5[0]
    else
        zmm11 = zmm14
        zmm9 = zmm13
        zmm10 = zmm12

*arg1 = zmm11.d
arg1[1] = zmm9.d
arg1[2] = zmm10.d
zmm0.d = zmm9.d f* zmm6.d
arg1[3] = 0
zmm3.d = zmm10.d f* zmm7.d
arg1[7] = 0
zmm2.d = zmm11.d f* zmm6.d
arg1[0xb] = 0
zmm3.d = zmm3.d f- zmm0.d
zmm1.d = zmm9.d f* zmm8.d
arg1[0xf] = 0x3f800000
zmm0.d = zmm10.d f* zmm8.d
arg1[8] = zmm8.d
zmm2.d = zmm2.d f- zmm0.d
arg1[9] = zmm7.d
arg1[0xa] = zmm6.d
zmm0.d = zmm11.d f* zmm7.d
arg1[0xc] = zmm14.d
zmm1.d = zmm1.d f- zmm0.d
arg1[0xd] = zmm13.d
arg1[0xe] = zmm12.d
arg1[6] = zmm1.d
arg1[4] = zmm3.d
arg1[5] = zmm2.d
return arg1
