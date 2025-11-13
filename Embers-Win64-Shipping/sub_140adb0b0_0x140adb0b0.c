// 函数: sub_140adb0b0
// 地址: 0x140adb0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = 0x3f000000
uint128_t zmm6 = *(arg2 + 4)
uint128_t zmm7 = arg2[1].d
uint128_t zmm9 = *arg2
uint128_t zmm2
zmm2.d = zmm9.d f* zmm9.d
uint128_t zmm14 = data_143dbb200
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
uint128_t zmm1
zmm1.d = zmm7.d f* zmm7.d
zmm2.d = zmm2.d f+ zmm0.d
uint128_t zmm15 = data_143dbb1fc
zmm2.d = zmm2.d f+ zmm1.d
uint128_t zmm3
uint128_t zmm8

if (not(zmm2.d f!= 1f))
    zmm0 = zx.o(*arg2)
    zmm7 = arg2[1].d
    zmm9 = zmm0.d
    zmm8 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm3 = data_143dbb1f8
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
    zmm0.d = temp0_2.d f* zmm4.d
    zmm4 = 0x3f000000
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm6.d = zmm6.d f* temp0_2[0]
    zmm9.d = zmm9.d f* temp0_2[0]
    zmm8 = zmm6
    zmm7.d = zmm7.d f* temp0_2[0]
    zmm3 = data_143dbb1f8
else
    zmm3 = data_143dbb1f8
    zmm8 = zmm15
    zmm9 = zmm3
    zmm7 = zmm14

uint128_t zmm11 = *(arg3 + 4)
zmm6 = *arg3
uint128_t zmm12 = *(arg3 + 8)
zmm2.d = zmm6.d f* zmm6.d
zmm0.d = zmm11.d f* zmm11.d
zmm1.d = zmm12.d f* zmm12.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d

if (not(zmm2.d f!= 1f))
    zmm0 = zx.o(*arg3)
    zmm12 = *(arg3 + 8)
    zmm6 = zmm0.d
    zmm3 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
else if (zmm2.d f>= 9.99999994e-09f)
    float temp0_4[0x4] = _mm_rsqrt_ss(zmm2[0], zmm2.d)
    zmm3.d = zmm2.d f* zmm4.d
    zmm0.d = temp0_4.d f* temp0_4[0]
    zmm1.d = zmm3.d f* zmm0.d
    zmm2.d = zmm4.d f- zmm1.d
    zmm0.d = temp0_4.d f* zmm2.d
    temp0_4[0] = temp0_4[0] f+ zmm0.d
    zmm1.d = temp0_4.d f* temp0_4[0]
    zmm3.d = zmm3.d f* zmm1.d
    zmm4.d = zmm4.d f- zmm3.d
    zmm0.d = temp0_4.d f* zmm4.d
    temp0_4[0] = temp0_4[0] f+ zmm0.d
    zmm11.d = zmm11.d f* temp0_4[0]
    zmm6.d = zmm6.d f* temp0_4[0]
    zmm3 = zmm11
    zmm12.d = zmm12.d f* temp0_4[0]
else
    zmm6 = zmm3
    zmm12 = zmm14
    zmm3 = zmm15

zmm2.d = zmm6.d f* zmm9.d
zmm0.d = zmm3.d f* zmm8.d
zmm1.d = zmm12.d f* zmm7.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
zmm2.d = _mm_and_ps(zmm2, 0x7fffffff).d f- 1f

if (not(_mm_and_ps(zmm2, 0x7fffffff).d f> 9.99999994e-09f))
    int64_t var_b8_1
    int32_t var_b0_1
    
    if (_mm_and_ps(zmm7, 0x7fffffff).d f>= 0.999899983f)
        var_b8_1 = 0x3f800000
        var_b0_1 = 0
    else
        var_b8_1 = 0
        var_b0_1 = 0x3f800000
    
    zmm1 = zx.o(var_b8_1)
    zmm3 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm12 = var_b0_1
    zmm6 = zmm1.d

zmm0.d = zmm12.d f* zmm8.d
uint128_t zmm10
zmm10.d = zmm3.d f* zmm7.d
zmm11.d = zmm9.d f* zmm12.d
zmm10.d = zmm10.d f- zmm0.d
zmm3.d = zmm3.d f* zmm9.d
zmm0 = zmm6
zmm6.d = zmm6.d f* zmm8.d
zmm0.d = zmm0.d f* zmm7.d
zmm6.d = zmm6.d f- zmm3.d
zmm11.d = zmm11.d f- zmm0.d
zmm0.d = zmm10.d f* zmm10.d
zmm1.d = zmm6.d f* zmm6.d
zmm2.d = zmm11.d f* zmm11.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d

if (zmm2.d f== 1f)
    zmm4 = data_143dbb1f8
else if (zmm2.d f>= 9.99999994e-09f)
    float temp0_9[0x4] = _mm_rsqrt_ss(zmm2[0], zmm2.d)
    zmm3.d = zmm2.d f* 0.5f
    zmm0.d = temp0_9.d f* temp0_9[0]
    zmm1.d = zmm3.d f* zmm0.d
    zmm2.d = 0.5f f- zmm1.d
    zmm0.d = temp0_9.d f* zmm2.d
    temp0_9[0] = temp0_9[0] f+ zmm0.d
    zmm1.d = temp0_9.d f* temp0_9[0]
    zmm3.d = zmm3.d f* zmm1.d
    zmm4.d = 0.5f f- zmm3.d
    zmm0.d = temp0_9.d f* zmm4.d
    temp0_9[0] = temp0_9[0] f+ zmm0.d
    zmm10.d = zmm10.d f* temp0_9[0]
    zmm11.d = zmm11.d f* temp0_9[0]
    zmm6.d = zmm6.d f* temp0_9[0]
    zmm4 = data_143dbb1f8
else
    zmm4 = data_143dbb1f8
    zmm11 = zmm15
    zmm10 = zmm4
    zmm6 = zmm14

arg1[4] = zmm9.d
zmm0.d = zmm11.d f* zmm7.d
arg1[3] = 0
zmm3.d = zmm6.d f* zmm8.d
arg1[7] = 0
zmm2.d = zmm10.d f* zmm7.d
arg1[0xb] = 0
zmm3.d = zmm3.d f- zmm0.d
zmm1.d = zmm11.d f* zmm9.d
arg1[0xf] = 0x3f800000
arg1[5] = zmm8.d
zmm0.d = zmm6.d f* zmm9.d
arg1[6] = zmm7.d
zmm2.d = zmm2.d f- zmm0.d
arg1[8] = zmm10.d
zmm0.d = zmm10.d f* zmm8.d
arg1[9] = zmm11.d
zmm1.d = zmm1.d f- zmm0.d
arg1[0xa] = zmm6.d
arg1[0xd] = zmm15.d
arg1[0xe] = zmm14.d
arg1[2] = zmm1.d
*arg1 = zmm3.d
arg1[1] = zmm2.d
arg1[0xc] = zmm4.d
return arg1
