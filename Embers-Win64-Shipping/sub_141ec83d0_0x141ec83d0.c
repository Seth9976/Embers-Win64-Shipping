// 函数: sub_141ec83d0
// 地址: 0x141ec83d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t r13 = data_143f3a5c8
sub_140b34200("GeomOverlapBlocking", r13)
int128_t zmm3 = *arg3
_mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, *(arg2 + 8)), _mm_unpacklo_ps(*(arg2 + 4), 0)[0].q)
int64_t var_d8 = 0
int64_t var_d0 = 0
int128_t var_c8 = zmm3
void var_88
void* r9
float zmm6_1[0x4]
r9, zmm6_1 = sub_1417c75c0(&var_88, &var_c8, arg5)
void* var_e8 = &data_143f3a680
float var_58[0x4]
float var_b8[0x4] = var_58
int64_t var_f0 = arg7
int64_t var_f8 = arg6
float temp0_3[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
float temp0_5[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0x55), 0)
float zmm3_1[0x4] = data_14399f668
float temp0_6[0x4] = _mm_unpacklo_ps(zmm6_1, temp0_3[0].q)
float zmm2_1[0x4] = data_14399f66c
float var_a8[0x4] = _mm_unpacklo_ps(temp0_6, temp0_5[0].q)
float var_98[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, data_14399f670[0].q), _mm_unpacklo_ps(zmm2_1, 0)[0].q)
char rax_2 = sub_141eb0f10(arg1, &var_88, arg5, r9, &var_d8, arg4)
int64_t rcx_2 = var_d8

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140b38680("GeomOverlapBlocking", r13)
__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rax_2)
