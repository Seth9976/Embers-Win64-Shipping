// 函数: sub_141f41340
// 地址: 0x141f41340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *(arg1 + 0x1d0)
uint128_t zmm1 = zx.o(*arg2)
int32_t rax = arg2[1].d
uint128_t zmm3
zmm3.d = zmm4.d f+ zmm1.d
uint64_t var_28 = zmm1.q
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
uint128_t zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
int64_t r9 = 0
temp0[0] = temp0[0] f+ zmm0.d
float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
temp0_2[0] = temp0_2[0] f+ rax

if (arg3 != 0)
    r9 = arg4

zmm0 = _mm_unpacklo_ps(zmm3, temp0[0].q)
float var_20_1 = temp0_2[0]
var_28 = zmm0.q
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
return sub_141f49c70(arg1, &var_28, arg3, r9, zmm6, zmm7, zmm8, arg5)
