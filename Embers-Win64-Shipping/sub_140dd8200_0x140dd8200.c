// 函数: sub_140dd8200
// 地址: 0x140dd8200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = 0x3f800000
arg1[2].d = 0
uint128_t zmm5 = zx.o(*arg2)
uint128_t zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
uint128_t zmm7 = *arg3
uint128_t zmm6 = *arg5
uint128_t zmm3
zmm3.d = zmm6.d f* zmm5.d
zmm6.d = zmm6.d f* zmm5.d
zmm3 ^= data_142d3f780
uint128_t zmm9 = *(arg5 + 4)
uint128_t zmm4
zmm4.d = zmm9.d f* zmm0.d
zmm0.d = zmm3.d f* *arg4
zmm4 ^= data_142d3f780
zmm3.d = zmm3.d f* arg4[1]
uint128_t zmm1 = zmm4
zmm4.d = zmm4.d f* arg4[3]
zmm1.d = zmm1.d f* arg4[2]
zmm4.d = zmm4.d f+ zmm3.d
zmm1.d = zmm1.d f+ zmm0.d
zmm9.d = zmm9.d f* _mm_shuffle_ps(zmm5, zmm5, 0x55).d
zmm4.d = zmm4.d f+ arg4[5]
zmm1.d = zmm1.d f+ arg4[4]
zmm9.d = zmm9.d f+ zmm4.d
zmm4 = *arg4
zmm6.d = zmm6.d f+ zmm1.d
zmm5.d = zmm7.d f* zmm4.d
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
_mm_shuffle_ps(zmm5, zmm5, 0xe1)
uint128_t zmm8
zmm8.d = zmm7.d f* zmm6.d
zmm6 = zmm7
uint128_t zmm2
zmm2.d = zmm7.d f* zmm0.d
zmm8.d = zmm8.d f+ *(arg3 + 4)
zmm3.d = zmm7.d f* zmm1.d
zmm5.d = zmm2.d
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
_mm_shuffle_ps(zmm5, zmm5, 0xc6)
zmm5.d = zmm3.d
zmm7.d = zmm7.d f* zmm4.d
_mm_shuffle_ps(zmm5, zmm5, 0x27)
zmm6.d = zmm6.d f* zmm9.d
zmm5.d = zmm7.d
int32_t var_58 = zmm8.d
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0x39)
zmm6.d = zmm6.d f+ *(arg3 + 8)
uint128_t var_68 = zmm5
var_68 = zmm5
int32_t var_54 = zmm6.d
sub_1408b8950(arg1 + 0x1c, &var_68, arg7)
*(arg1 + 0x34) |= 1
zmm2 = *arg6
zmm1.d = zmm2.d f* *(arg3 + 4)
zmm1.d = zmm1.d f+ *(arg6 + 4)
int64_t zmm0_1
zmm0_1.d = zmm2.q.d f* *(arg3 + 8)
zmm2.d = zmm2.d f* *arg3
zmm0_1.d = zmm0_1.d f+ *(arg6 + 8)
arg1[2].d = zmm0_1.d
*(arg1 + 0xc) = zmm1.d
arg1[1].d = zmm2.d
*(arg1 + 0x14) = *(arg3 + 4)
return arg1
