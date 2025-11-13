// 函数: sub_141eb0dd0
// 地址: 0x141eb0dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t r12 = data_143f3a5c8
void* r9 = sub_140b34200("GeomOverlapMultiple", r12)
int128_t zmm0 = *arg4
float zmm3[0x4] = *arg3
float temp0[0x4] = _mm_unpacklo_ps(*(arg3 + 4), 0)
int128_t var_78 = zmm0
float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, (*(arg3 + 8)).q)
zmm0 = data_14399f670
float var_68[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float var_58[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
int64_t var_98 = arg9
int64_t var_a0 = arg8
int64_t var_a8 = arg7
char rax_4 = sub_141eb1300(arg1, sub_14183e350(arg2), arg2, r9, arg5, arg6)
sub_140b38680("GeomOverlapMultiple", r12)
__security_check_cookie(rax_1 ^ &var_d8)
return zx.q(rax_4)
