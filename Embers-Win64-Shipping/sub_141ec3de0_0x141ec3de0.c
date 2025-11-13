// 函数: sub_141ec3de0
// 地址: 0x141ec3de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t r13 = data_143f3a5c8
sub_140b34200("GeomOverlapAny", r13)
int128_t zmm3 = *arg4
_mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, *(arg3 + 8)), _mm_unpacklo_ps(*(arg3 + 4), 0)[0].q)
int64_t var_e8 = 0
int64_t var_e0 = 0
int128_t var_d8 = zmm3
void var_98
void* r9
float zmm6_1[0x4]
r9, zmm6_1 = sub_1417c75c0(&var_98, &var_d8, arg2)
float var_68[0x4]
float var_c8[0x4] = var_68
int64_t var_f8 = arg8
float temp0_3[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
float temp0_5[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0x55), 0)
float zmm3_1[0x4] = data_14399f668
float temp0_6[0x4] = _mm_unpacklo_ps(zmm6_1, temp0_3[0].q)
float zmm2_1[0x4] = data_14399f66c
int64_t var_100 = arg7
float var_b8[0x4] = _mm_unpacklo_ps(temp0_6, temp0_5[0].q)
int64_t var_108 = arg6
float var_a8[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, data_14399f670[0].q), _mm_unpacklo_ps(zmm2_1, 0)[0].q)
char rax_3 = sub_141eb1110(arg1, &var_98, arg2, r9, &var_e8, arg5)
int64_t rcx_2 = var_e8

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140b38680("GeomOverlapAny", r13)
__security_check_cookie(rax_1 ^ &var_138)
return zx.q(rax_3)
