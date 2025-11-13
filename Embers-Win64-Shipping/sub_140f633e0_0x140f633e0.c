// 函数: sub_140f633e0
// 地址: 0x140f633e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 8)
int32_t rbx = *(arg1 + 0xc)
int128_t var_48
int16_t* rax = sub_140a95a00(&var_48)
*(rax + 0x10) = rdi

if (rbx s>= rdi)
    rdi = rbx

*(rax + 0x14) = rdi
*(rax + 1) = 0
*rax
*(rax + 0x10)
int64_t* rax_1
int64_t zmm6_1
int128_t zmm7_1
rax_1, zmm6_1, zmm7_1 = sub_140ad7b30()
uint128_t zmm0 = *arg3
var_48 = zmm7_1
*arg2 = 0
zmm0 = _mm_cvtps_pd(zmm0.q)
arg2[1] = 0
int64_t var_38 = zmm6_1
sub_140a745d0(zmm0, rax_1, &var_48, arg2)
return arg2
