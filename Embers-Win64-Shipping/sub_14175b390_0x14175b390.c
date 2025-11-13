// 函数: sub_14175b390
// 地址: 0x14175b390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t rdi = sx.q(arg2)
int64_t rcx = *(arg1 + 0x28)
int64_t rdx = rdi * 3
int64_t rax_5 = *(arg1 + 0xf8)
int128_t var_48 = *((rdi << 4) + *(arg1 + 0x68))
float zmm2[0x4] = *(rcx + (rdx << 2) + 4)
int64_t rdx_1 = *(arg1 + 0x80)
float temp0[0x4] = _mm_unpacklo_ps(*(rcx + (rdx << 2)), (*(rcx + (rdx << 2) + 8)).q)
int128_t zmm0 = data_14399f670
float var_38[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
float var_28[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
sub_141700b70(rax_5 + rdi * 0x18, *(rdx_1 + (rdi << 3)), &var_48)
int32_t* result = sub_141744270(arg1, rdi.d)
__security_check_cookie(rax_1 ^ &var_68)
return result
