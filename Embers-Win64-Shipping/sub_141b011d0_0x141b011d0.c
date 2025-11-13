// 函数: sub_141b011d0
// 地址: 0x141b011d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
float zmm2[0x4] = arg3[1]
float var_d0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
float zmm0[0x4] = *arg3
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float var_98[0x4] = zmm0
_mm_unpacklo_ps(zmm2, temp0_1[0].q)
float var_c0 = var_d0
void var_d8
int32_t* rax_3
int128_t zmm7_1
rax_3, zmm7_1 = sub_140adf5d0(&var_98, &var_d8)
float zmm2_1[0x4] = arg3[2]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
int32_t rax_4 = rax_3[2]
uint64_t var_bc = *rax_3
int32_t var_d0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
int32_t var_b4 = rax_4
float temp0_5[0x4] = _mm_unpacklo_ps(zmm2_1, temp0_3[0].q)
int64_t* rax_5 = sub_141a533c0(&var_d8)
int32_t var_60 = var_d0_1
int64_t rbx_2 = sx.q(arg2[1].d)
int64_t rcx_2 = *rax_5
int128_t zmm0_2
zmm0_2.q = zmm7_1.q
int32_t rax_6 = (rbx_2 + 1).d
float zmm1_1[0x4] = _mm_unpacklo_pd(var_bc:4.o, temp0_5[0].q)
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_140775520(arg2)

int64_t rcx_4 = *arg2
int64_t rdx_2 = rbx_2 * 9
char result = *(rcx_4 + (rdx_2 << 3) + 0x40)
*(rcx_4 + (rdx_2 << 3)) = rcx_2.o
*(rcx_4 + (rdx_2 << 3) + 0x10) = zmm0_2
result = (result & 0xfe) | 2 | 3
*(rcx_4 + (rdx_2 << 3) + 0x20) = zmm1_1
*(rcx_4 + (rdx_2 << 3) + 0x40) = result
int128_t var_58
*(rcx_4 + (rdx_2 << 3) + 0x30) = var_58
__security_check_cookie(rax_1 ^ &var_f8)
return result
