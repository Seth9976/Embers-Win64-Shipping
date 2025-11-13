// 函数: sub_141eb0c40
// 地址: 0x141eb0c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t r12 = data_143f3a5c8
sub_140b34200("GeomOverlapMultiple", r12)
int128_t zmm3 = *arg4
_mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, *(arg3 + 8)), _mm_unpacklo_ps(*(arg3 + 4), 0)[0].q)
int128_t var_d8 = zmm3
void var_98
void* r9
float zmm6_1[0x4]
r9, zmm6_1 = sub_1417c75c0(&var_98, &var_d8, arg2)
float var_68[0x4]
float var_c8[0x4] = var_68
int64_t var_f8 = arg9
float temp0_4[0x4] = _mm_unpacklo_ps(zmm6_1, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)[0].q)
float zmm2_1[0x4] = data_14399f66c
float temp0_6[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0x55), 0)
float zmm3_1[0x4] = data_14399f668
int64_t var_100 = arg8
float var_b8[0x4] = _mm_unpacklo_ps(temp0_4, temp0_6[0].q)
int64_t var_108 = arg7
float var_a8[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, data_14399f670[0].q), _mm_unpacklo_ps(zmm2_1, 0)[0].q)
char rax_3 = sub_141eb1300(arg1, &var_98, arg2, r9, arg5, arg6)
sub_140b38680("GeomOverlapMultiple", r12)
__security_check_cookie(rax_1 ^ &var_138)
return zx.q(rax_3)
