// 函数: sub_141e328d0
// 地址: 0x141e328d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
uint128_t zmm0 = zx.o(arg1[2])
uint128_t zmm6
uint128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
uint128_t zmm8
uint128_t var_38 = zmm8
float zmm9[0x4]
float var_48[0x4] = zmm9
float zmm10[0x4]
float var_58[0x4] = zmm10
uint128_t zmm11
uint128_t var_68 = zmm11
uint128_t zmm12
uint128_t var_78 = zmm12
float result_2 = arg1[3].d
uint128_t result_1
uint128_t result_3 = result_1
uint64_t var_a8 = zmm0.q
float zmm1[0x4]
uint128_t zmm2
float zmm4[0x4]
uint128_t zmm5

if (rdx != 0)
    result_1 = result_2
    zmm12 = *(rdx + 0x14)
    zmm7 = *(rdx + 0x18)
    zmm5 = var_a8.d
    zmm10 = *(rdx + 0x10)
    zmm9 = zmm5
    zmm9[0] = zmm9[0] f* zmm7.d
    zmm11.d = result_1.d f* zmm12.d
    zmm8 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm0.d = zmm8.d f* zmm7.d
    zmm6.d = zmm8.d f* zmm10[0]
    zmm11.d = zmm11.d f- zmm0.d
    zmm0.d = result_1.d f* zmm10[0]
    zmm9[0] = zmm9[0] f- zmm0.d
    zmm0.d = zmm5.d f* zmm12.d
    zmm11.d = zmm11.d f+ zmm11.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0 = *(rdx + 0x1c)
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm2.d = zmm11.d f* zmm0.d
    zmm6.d = zmm6.d f+ zmm6.d
    zmm2.d = zmm2.d f+ zmm5.d
    zmm9[0] = zmm9[0] f* zmm0.d
    zmm4 = zmm6
    zmm1 = zmm6
    zmm4[0] = zmm4[0] f* zmm0.d
    zmm9[0] = zmm9[0] f+ zmm8.d
    zmm1[0] = zmm1[0] f* zmm12.d
    zmm0.d = zmm9.d f* zmm7.d
    zmm4[0] = zmm4[0] f+ result_1.d
    zmm9[0] = zmm9[0] * zmm10[0]
    zmm1[0] = zmm1[0] f- zmm0.d
    zmm6.d = zmm6.d f* zmm10[0]
    zmm0 = zmm11
    zmm11.d = zmm11.d f* zmm12.d
    zmm0.d = zmm0.d f* zmm7.d
    zmm9[0] = zmm9[0] f- zmm11.d
    zmm1[0] = zmm1[0] f+ zmm2.d
    zmm0.d = zmm0.d f- zmm6.d
    zmm9[0] = zmm9[0] + zmm4[0]
    var_a8.d = zmm1[0]
    zmm0.d = zmm0.d f+ zmm9[0]
    result_2 = zmm9[0]
    var_a8:4.d = zmm0.d

void* r8 = arg1[1]
*(arg1 + 0x4c) = var_a8
zmm0 = zx.o(*(arg1 + 0x1c))
*(arg1 + 0x54) = result_2
uint64_t var_a8_1 = zmm0.q
float result = *(arg1 + 0x24)

if (r8 != 0)
    result_1 = result
    zmm12 = *(r8 + 0x14)
    zmm7 = *(r8 + 0x18)
    zmm5 = var_a8_1.d
    zmm10 = *(r8 + 0x10)
    zmm9 = zmm5
    zmm9[0] = zmm9[0] f* zmm7.d
    zmm11.d = result_1.d f* zmm12.d
    zmm8 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm0.d = zmm8.d f* zmm7.d
    zmm6.d = zmm8.d f* zmm10[0]
    zmm11.d = zmm11.d f- zmm0.d
    zmm0.d = result_1.d f* zmm10[0]
    zmm9[0] = zmm9[0] f- zmm0.d
    zmm0.d = zmm5.d f* zmm12.d
    zmm11.d = zmm11.d f+ zmm11.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0 = *(r8 + 0x1c)
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm2.d = zmm11.d f* zmm0.d
    zmm6.d = zmm6.d f+ zmm6.d
    zmm2.d = zmm2.d f+ zmm5.d
    zmm9[0] = zmm9[0] f* zmm0.d
    zmm4 = zmm6
    zmm1 = zmm6
    zmm4[0] = zmm4[0] f* zmm0.d
    zmm9[0] = zmm9[0] f+ zmm8.d
    zmm1[0] = zmm1[0] f* zmm12.d
    zmm0.d = zmm9.d f* zmm7.d
    zmm4[0] = zmm4[0] f+ result_1.d
    zmm9[0] = zmm9[0] * zmm10[0]
    zmm1[0] = zmm1[0] f- zmm0.d
    zmm6.d = zmm6.d f* zmm10[0]
    zmm0 = zmm11
    zmm11.d = zmm11.d f* zmm12.d
    zmm0.d = zmm0.d f* zmm7.d
    zmm9[0] = zmm9[0] f- zmm11.d
    zmm1[0] = zmm1[0] f+ zmm2.d
    zmm0.d = zmm0.d f- zmm6.d
    zmm9[0] = zmm9[0] + zmm4[0]
    var_a8_1.d = zmm1[0]
    zmm0.d = zmm0.d f+ zmm9[0]
    result = zmm9[0]
    var_a8_1:4.d = zmm0.d

zmm11 = zx.o(0)
arg1[0xb] = var_a8_1
arg1[0xc].d = result

if (rdx == 0)
    zmm12 = zx.o(0)
else
    zmm9 = arg1[0xa].d
    zmm7 = *(arg1 + 0x54)
    zmm8 = *(arg1 + 0x4c)
    zmm10 = arg1[6].d
    zmm1 = zmm8
    zmm5 = *(arg1 + 0x2c)
    zmm6 = arg1[5].d
    zmm0.d = zmm5.d f* zmm7.d
    int32_t var_9c_1 = 0
    zmm4 = var_a8_1.o
    zmm10[0] = zmm10[0] * zmm9[0]
    int64_t var_98_1 = 0
    zmm1[0] = zmm1[0] f* zmm5.d
    int32_t var_90_1 = 0
    zmm10[0] = zmm10[0] f- zmm0.d
    zmm2.d = zmm6.d f* zmm7.d
    zmm0.d = zmm8.d f* zmm10[0]
    zmm4[0] = zmm10[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
    zmm2.d = zmm2.d f- zmm0.d
    zmm0.d = zmm6.d f* zmm9[0]
    zmm1[0] = zmm1[0] f- zmm0.d
    temp0_3[0] = zmm2.d
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
    temp0_4[0] = zmm1[0]
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
    var_a8_1.o = temp0_5
    float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xff), *(rdx + 0xb0))
    zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xaa), *(rdx + 0xa0))
    float temp0_11[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0x55), *(rdx + 0x90))
    float temp0_16[0x4] = _mm_add_ps(_mm_add_ps(temp0_7, zmm0), 
        _mm_add_ps(temp0_11, 
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0), *(rdx + 0x80))))
    zmm2 = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)
    zmm0.d = temp0_16.d f* zmm7.d
    zmm12.d = zmm2.d f* zmm8.d
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x55)
    temp0_16[0] = temp0_16[0] * zmm9[0]
    zmm12.d = zmm12.d f- zmm0.d
    zmm2.d = zmm2.d f* zmm9[0]
    temp0_18[0] = temp0_18[0] f* zmm8.d
    zmm0.d = temp0_18.d f* zmm7.d
    zmm12.d = zmm12.d f* zmm5.d
    temp0_16[0] = temp0_16[0] - temp0_18[0]
    zmm0.d = zmm0.d f- zmm2.d
    temp0_16[0] = temp0_16[0] * zmm10[0]
    zmm0.d = zmm0.d f* zmm6.d
    zmm12.d = zmm12.d f+ zmm0.d
    zmm12.d = zmm12.d f+ temp0_16[0]
    zmm12.d = zmm12.d f+ *(rdx + 0x3c)

if (r8 != 0)
    zmm9 = *(arg1 + 0x5c)
    zmm7 = arg1[0xc].d
    zmm8 = arg1[0xb].d
    zmm10 = arg1[6].d
    zmm1 = zmm8
    zmm5 = *(arg1 + 0x2c)
    zmm6 = arg1[5].d
    zmm0.d = zmm5.d f* zmm7.d
    int32_t var_9c_2 = 0
    zmm4 = var_a8_1.o
    zmm10[0] = zmm10[0] * zmm9[0]
    int64_t var_98_2 = 0
    zmm1[0] = zmm1[0] f* zmm5.d
    int32_t var_90_2 = 0
    zmm10[0] = zmm10[0] f- zmm0.d
    zmm2.d = zmm6.d f* zmm7.d
    zmm0.d = zmm8.d f* zmm10[0]
    zmm4[0] = zmm10[0]
    float temp0_19[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
    zmm2.d = zmm2.d f- zmm0.d
    zmm0.d = zmm6.d f* zmm9[0]
    zmm1[0] = zmm1[0] f- zmm0.d
    temp0_19[0] = zmm2.d
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc6)
    temp0_20[0] = zmm1[0]
    float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc9)
    zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0xaa), *(r8 + 0xa0))
    float temp0_25[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0xff), *(r8 + 0xb0))
    float temp0_27[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0x55), *(r8 + 0x90))
    float temp0_32[0x4] = _mm_add_ps(_mm_add_ps(temp0_25, zmm0), 
        _mm_add_ps(temp0_27, 
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0), *(r8 + 0x80))))
    zmm2 = _mm_shuffle_ps(temp0_32, temp0_32, 0xaa)
    zmm0.d = temp0_32.d f* zmm7.d
    zmm11.d = zmm2.d f* zmm8.d
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x55)
    temp0_32[0] = temp0_32[0] * zmm9[0]
    zmm11.d = zmm11.d f- zmm0.d
    zmm2.d = zmm2.d f* zmm9[0]
    temp0_34[0] = temp0_34[0] f* zmm8.d
    zmm0.d = temp0_34.d f* zmm7.d
    zmm11.d = zmm11.d f* zmm5.d
    temp0_32[0] = temp0_32[0] - temp0_34[0]
    zmm0.d = zmm0.d f- zmm2.d
    temp0_32[0] = temp0_32[0] * zmm10[0]
    zmm0.d = zmm0.d f* zmm6.d
    zmm11.d = zmm11.d f+ zmm0.d
    zmm11.d = zmm11.d f+ temp0_32[0]
    zmm11.d = zmm11.d f+ *(r8 + 0x3c)

zmm11.d = zmm11.d f+ zmm12.d
zmm0.d = 1f f/ zmm11.d
arg1[9].d = zmm0.d
return result
