// 函数: sub_141b02e20
// 地址: 0x141b02e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t rbx = arg3[4].d
int64_t var_90 = *arg3
int64_t var_74 = *(arg3 + 0xc)
int64_t zmm0 = arg3[3]
int32_t var_78 = arg3[1].d
int32_t var_6c = *(arg3 + 0x14)
int64_t var_98
sub_141a533c0(&var_98)
int64_t rax_4 = var_98
int32_t var_30 = rbx
int64_t rbx_1 = sx.q(arg2[1].d)
uint128_t zmm0_1
zmm0_1.q = var_90
int32_t rax_5 = (rbx_1 + 1).d
uint128_t zmm1 = _mm_unpacklo_pd(var_74:4.o, zmm0)
arg2[1].d = rax_5

if (rax_5 s> *(arg2 + 0xc))
    sub_140775520(arg2)

int64_t rcx_2 = *arg2
int64_t rdx_1 = rbx_1 * 9
char result = *(rcx_2 + (rdx_1 << 3) + 0x40)
*(rcx_2 + (rdx_1 << 3)) = rax_4.o
result = (result & 0xfe) | 2 | 3
*(rcx_2 + (rdx_1 << 3) + 0x10) = zmm0_1
*(rcx_2 + (rdx_1 << 3) + 0x40) = result
*(rcx_2 + (rdx_1 << 3) + 0x20) = zmm1
uint128_t var_28
*(rcx_2 + (rdx_1 << 3) + 0x30) = var_28
__security_check_cookie(rax_1 ^ &var_b8)
return result
