// 函数: sub_141ba6fe0
// 地址: 0x141ba6fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)
uint128_t zmm2 = *(arg1 + 0x10)
int128_t zmm0 = *(arg1 + 0x20)
int32_t rcx_1 = _mm_bsrli_si128(zmm2, 8).d
int128_t var_18 = zmm0
return zmm2.q(sx.q(rcx_1) + rax, &var_18)
