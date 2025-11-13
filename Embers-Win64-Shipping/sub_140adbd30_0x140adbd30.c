// 函数: sub_140adbd30
// 地址: 0x140adbd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm5 = 0x3f000000
uint128_t zmm6 = *(arg2 + 4)
uint128_t zmm7 = arg2[1].d
uint128_t zmm10 = *arg2
uint32_t zmm2[0x4] = zmm10
zmm2[0] = zmm2[0] f* zmm10.d
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
uint128_t zmm1
zmm1.d = zmm7.d f* zmm7.d
zmm2[0] = zmm2[0] f+ zmm0.d
uint128_t zmm15 = data_143dbb200
zmm2[0] = zmm2[0] f+ zmm1.d
uint128_t zmm3
uint32_t zmm4[0x4]
uint128_t zmm9

if (not(zmm2[0] f!= 1f))
    zmm0 = zx.o(*arg2)
    zmm7 = arg2[1].d
    zmm10 = zmm0.d
    zmm9 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm4 = data_143dbb1f8
    zmm3 = data_143dbb1fc
else if (zmm2[0] f>= 9.99999994e-09f)
    zmm4 = 0x3f000000
    zmm0 = zmm2
    zmm5 = _mm_rsqrt_ss(zmm0.d, zmm0.d)
    zmm2 = 0x3f000000
    zmm3.d = zmm0.d f* 0.5f
    zmm0.d = zmm5.d f* zmm5.d
    zmm1.d = zmm3.d f* zmm0.d
    zmm2[0] = 0.5f f- zmm1.d
    zmm0.d = zmm5.d f* zmm2[0]
    zmm5.d = zmm5.d f+ zmm0.d
    zmm1.d = zmm5.d f* zmm5.d
    zmm3.d = zmm3.d f* zmm1.d
    zmm4[0] = 0.5f f- zmm3.d
    zmm0.d = zmm5.d f* zmm4[0]
    zmm5.d = zmm5.d f+ zmm0.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm10.d = zmm10.d f* zmm5.d
    zmm7.d = zmm7.d f* zmm5.d
    zmm9 = zmm6
    zmm5 = 0x3f000000
    zmm4 = data_143dbb1f8
    zmm3 = data_143dbb1fc
else
    zmm4 = data_143dbb1f8
    zmm7 = zmm15
    zmm3 = data_143dbb1fc
    zmm10 = zmm4
    zmm9 = zmm3

zmm6 = *(arg3 + 4)
uint32_t zmm8[0x4] = *arg3
uint128_t zmm13 = *(arg3 + 8)
zmm8[0] = zmm8[0] f* zmm8[0]
zmm0.d = zmm6.d f* zmm6.d
zmm1.d = zmm13.d f* zmm13.d
zmm8[0] = zmm8[0] f+ zmm0.d
zmm8[0] = zmm8[0] f+ zmm1.d

if (not(zmm8[0] f!= 1f))
    zmm0 = zx.o(*arg3)
    zmm13 = *(arg3 + 8)
    zmm8 = zmm0.d
    zmm6 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
else if (zmm8[0] f>= 9.99999994e-09f)
    zmm4 = zmm5
    zmm0 = zmm8
    zmm5 = _mm_rsqrt_ss(zmm0.d, zmm0.d)
    zmm3.d = zmm0.d f* zmm4[0]
    zmm0.d = zmm5.d f* zmm5.d
    zmm1.d = zmm3.d f* zmm0.d
    zmm4[0] = zmm4[0] f- zmm1.d
    zmm0.d = zmm5.d f* zmm4[0]
    zmm5.d = zmm5.d f+ zmm0.d
    zmm1.d = zmm5.d f* zmm5.d
    zmm3.d = zmm3.d f* zmm1.d
    zmm4[0] = zmm4[0] f- zmm3.d
    zmm0.d = zmm5.d f* zmm4[0]
    zmm5.d = zmm5.d f+ zmm0.d
    zmm8[0] = zmm8[0] f* zmm5.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm13.d = zmm13.d f* zmm5.d
else
    zmm8 = zmm4
    zmm6 = zmm3
    zmm13 = zmm15

zmm8[0] = zmm8[0] f* zmm10.d
zmm0.d = zmm6.d f* zmm9.d
zmm1.d = zmm13.d f* zmm7.d
zmm8[0] = zmm8[0] f+ zmm0.d
zmm8[0] = zmm8[0] f+ zmm1.d
uint32_t temp0_5[0x4] = _mm_and_ps(zmm8, 0x7fffffff)
temp0_5[0] = temp0_5[0] f- 1f

if (not(_mm_and_ps(temp0_5, 0x7fffffff)[0] f> 9.99999994e-09f))
    int64_t var_b8_1
    int32_t var_b0_1
    
    if (_mm_and_ps(zmm7, 0x7fffffff).d f>= 0.999899983f)
        var_b8_1 = 0x3f800000
        var_b0_1 = 0
    else
        var_b8_1 = 0
        var_b0_1 = 0x3f800000
    
    zmm1 = zx.o(var_b8_1)
    zmm6 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm13 = var_b0_1
    zmm8 = zmm1.d

uint32_t zmm12[0x4] = zmm8
zmm0.d = zmm6.d f* zmm7.d
uint128_t zmm11
zmm11.d = zmm13.d f* zmm9.d
zmm12[0] = zmm12[0] f* zmm7.d
zmm11.d = zmm11.d f- zmm0.d
zmm6.d = zmm6.d f* zmm10.d
zmm8[0] = zmm8[0] f* zmm9.d
zmm0.d = zmm10.d f* zmm13.d
zmm6.d = zmm6.d f- zmm8[0]
zmm12[0] = zmm12[0] f- zmm0.d
zmm0.d = zmm11.d f* zmm11.d
zmm1.d = zmm6.d f* zmm6.d
zmm12[0] = zmm12[0] f* zmm12[0]
zmm12[0] = zmm12[0] f+ zmm0.d
zmm12[0] = zmm12[0] f+ zmm1.d

if (zmm12[0] f== 1f)
    zmm5 = data_143dbb1f8
    zmm4 = data_143dbb1fc
else if (zmm12[0] f>= 9.99999994e-09f)
    zmm4 = 0x3f000000
    zmm0 = zmm12
    zmm5 = _mm_rsqrt_ss(zmm0.d, zmm0.d)
    zmm2 = 0x3f000000
    zmm3.d = zmm0.d f* 0.5f
    zmm0.d = zmm5.d f* zmm5.d
    zmm1.d = zmm3.d f* zmm0.d
    zmm2[0] = 0.5f f- zmm1.d
    zmm0.d = zmm5.d f* zmm2[0]
    zmm5.d = zmm5.d f+ zmm0.d
    zmm1.d = zmm5.d f* zmm5.d
    zmm3.d = zmm3.d f* zmm1.d
    zmm4[0] = 0.5f f- zmm3.d
    zmm0.d = zmm5.d f* zmm4[0]
    zmm5.d = zmm5.d f+ zmm0.d
    zmm11.d = zmm11.d f* zmm5.d
    zmm12[0] = zmm12[0] f* zmm5.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm5 = data_143dbb1f8
    zmm4 = data_143dbb1fc
else
    zmm5 = data_143dbb1f8
    zmm6 = zmm15
    zmm4 = data_143dbb1fc
    zmm11 = zmm5
    zmm12 = zmm4

zmm0.d = zmm6.d f* zmm9.d
arg1[3] = 0
zmm3.d = zmm12.d f* zmm7.d
zmm2 = zmm6
arg1[7] = 0
zmm2[0] = zmm2[0] f* zmm10.d
arg1[0xb] = 0
zmm3.d = zmm3.d f- zmm0.d
zmm1.d = zmm11.d f* zmm9.d
arg1[0xf] = 0x3f800000
arg1[4] = zmm11.d
zmm0.d = zmm11.d f* zmm7.d
arg1[5] = zmm12[0]
arg1[6] = zmm6.d
zmm2[0] = zmm2[0] f- zmm0.d
arg1[8] = zmm10.d
zmm0.d = zmm12.d f* zmm10.d
arg1[9] = zmm9.d
zmm1.d = zmm1.d f- zmm0.d
arg1[0xa] = zmm7.d
arg1[0xe] = zmm15.d
arg1[2] = zmm1.d
*arg1 = zmm3.d
arg1[1] = zmm2[0]
arg1[0xc] = zmm5.d
arg1[0xd] = zmm4[0]
return arg1
