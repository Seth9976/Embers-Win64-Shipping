// 函数: sub_1417ee580
// 地址: 0x1417ee580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
sub_141f0e650(arg1, arg2)
uint128_t var_48[0x3]
uint128_t* rax_2 = sub_141f3cf60(arg1, &var_48)
*(arg1 + 0x450) = *rax_2
*(arg1 + 0x460) = rax_2[1]
*(arg1 + 0x470) = rax_2[2]
float zmm2[0x4] = *(arg1 + 0x1e0)
int32_t result = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
arg1[0x90] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
arg1[0x91].d = result
__security_check_cookie(rax_1 ^ &var_78)
return result
