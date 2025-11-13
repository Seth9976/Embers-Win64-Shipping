// 函数: sub_141ed89e0
// 地址: 0x141ed89e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = zx.o(*(arg1 + 0x420))
float zmm4[0x4] = *(arg1 + 0x420)
uint128_t zmm9
zmm9.d = zmm2.d f- (zmm4 ^ 0x80000000)[0]
uint64_t var_40 = zmm2.q
int128_t zmm5
zmm5.d = (*(arg1 + 0x428)).d f- (*(arg1 + 0x428) ^ 0x80000000)[0]
uint128_t zmm8
zmm8.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f- (*(arg1 + 0x424) ^ 0x80000000).d
uint128_t zmm3 = zmm9
zmm9.d = zmm9.d f* zmm9.d
zmm3.d = zmm3.d f* 0.5f
int128_t zmm1 = zmm5
zmm5.d = zmm5.d f* zmm5.d
zmm1.d = zmm1.d f* 0.5f
zmm2.d = zmm8.d f* 0.5f
float zmm0[0x4] = zmm3
zmm3.d = zmm3.d f- zmm4[0]
zmm8.d = zmm8.d f* zmm8.d
float temp0_1[0x4] = _mm_unpacklo_ps(zmm0, zmm2.q)
zmm2.d = zmm2.d f- *(arg1 + 0x424)
int64_t var_40_1 = temp0_1.q
zmm9.d = zmm9.d f+ zmm8.d
int32_t var_50 = zmm1.d
zmm1.d = zmm1.d f- *(arg1 + 0x428)
int64_t var_4c = (_mm_unpacklo_ps(zmm3, zmm2.q)).q
zmm9.d = zmm9.d f+ zmm5.d
int32_t var_38_1 = var_50
zmm9.d = zmm9.d f* 0.25f
int32_t var_44 = zmm1.d
float var_34 = _mm_sqrt_ss(0, zmm9.d)[0]
sub_140ae2e90(&var_4c, arg2, arg3)
return arg2
