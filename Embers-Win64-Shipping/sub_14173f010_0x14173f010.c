// 函数: sub_14173f010
// 地址: 0x14173f010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* var_d8 = arg2
*arg5 = 0
int64_t rsi = sx.q(arg1[1].d)
void* rdi = *arg1
float zmm6[0x4] = data_14399f668
int64_t rdx = rsi * 3
int64_t rcx = *(rdi + 0x28)
float var_98[0x4] = *((rsi << 4) + *(rdi + 0x3e0))
float zmm0[0x4] = *(rcx + (rdx << 2) + 8)
float zmm3[0x4] = *(rcx + (rdx << 2))
float temp0[0x4] = _mm_unpacklo_ps(*(rcx + (rdx << 2) + 4), 0)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
zmm0 = data_14399f670
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0[0].q), temp0_3[0].q)
float var_78[0x4] = temp0_5
float var_88[0x4] = temp0_2
float (* rax_5)[0x4] = sub_141746340(&var_d8)
float (* rax_6)[0x4] = sub_141749180(&var_d8)
int64_t r9 = sx.q(arg2[1].d)
void* rax_7 = *arg2
float var_c8[0x4] = *rax_6
float var_a8[0x4] = temp0_5
float var_b8[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(*rax_5, (*rax_5)[2]), _mm_unpacklo_ps((*rax_5)[1], 0)[0].q)
uint64_t result = sub_14173f1a0(arg1, arg2, *(*(rdi + 0x80) + (rsi << 3)), 
    *(*(rax_7 + 0x80) + (r9 << 3)), &var_98, &var_c8, arg3, arg4, arg5)
__security_check_cookie(rax_1 ^ &var_128)
return result
