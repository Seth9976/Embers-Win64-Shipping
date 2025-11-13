// 函数: sub_14224f570
// 地址: 0x14224f570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = *(arg1 + 0xe0)
int64_t var_28
sub_140adf5d0(&var_18, &var_28)
*arg3 = var_28
int32_t var_20
arg3[1].d = var_20
uint128_t zmm2 = *(arg1 + 0xf0)
int32_t result = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
*arg2 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
arg2[1].d = result
return result
