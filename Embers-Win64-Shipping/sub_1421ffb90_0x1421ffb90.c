// 函数: sub_1421ffb90
// 地址: 0x1421ffb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = 0
int32_t var_18
sub_141fe56b0(arg1 + 0x30, &var_18, *(arg4 + 0xc), arg3, (*(arg2 + 0x18)).d, nullptr)
uint32_t zmm3[0x4] = *(arg4 + 0x40)
uint32_t temp0[0x4] = _mm_and_ps(*(arg4 + 0x48), 0x7fffffff)
int32_t var_10
temp0[0] = temp0[0] f* var_10
uint32_t temp0_1[0x4] = _mm_and_ps(zmm3, 0x7fffffff)
uint32_t zmm2_1[0x4] = *(arg4 + 0x44)
temp0_1[0] = temp0_1[0] f* var_18
uint32_t temp0_2[0x4] = _mm_and_ps(zmm2_1, 0x7fffffff)
int32_t var_14
temp0_2[0] = temp0_2[0] f* var_14
uint32_t result = temp0[0]
*(arg4 + 0x50) = (_mm_unpacklo_ps(temp0_1, temp0_2[0].q)).q
*(arg4 + 0x58) = result
return result
