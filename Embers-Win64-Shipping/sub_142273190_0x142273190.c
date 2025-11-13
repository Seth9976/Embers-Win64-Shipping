// 函数: sub_142273190
// 地址: 0x142273190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t var_68[0x6]
sub_1417c75c0(&var_68, arg3, arg2)
float zmm4[0x4] = *(arg4 + 0x10)
float var_38[0x4]
float var_98[0x4] = var_38
float temp0_1[0x4] = _mm_unpacklo_ps(zmm4, _mm_shuffle_ps(zmm4, zmm4, 0xaa)[0].q)
float zmm2[0x4] = data_14399f66c
float temp0_3[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
float zmm3[0x4] = data_14399f668
float var_88[0x4] = _mm_unpacklo_ps(temp0_1, temp0_3[0].q)
float var_78[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, data_14399f670[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q)
uint64_t result = sub_142273270(arg1, &var_68, &var_98, arg5)
__security_check_cookie(rax_1 ^ &var_b8)
return result
