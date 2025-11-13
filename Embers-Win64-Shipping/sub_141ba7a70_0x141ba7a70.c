// 函数: sub_141ba7a70
// 地址: 0x141ba7a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 8)

if (rax == 0)
    return rax

int64_t rax_1 = sub_140d3c6e0(arg1 + 8)
uint128_t zmm2 = *(arg1 + 0x10)
int128_t zmm0 = *(arg1 + 0x20)
int32_t rcx_2 = _mm_bsrli_si128(zmm2, 8).d
int128_t var_18 = zmm0
zmm2.q(sx.q(rcx_2) + rax_1, &var_18)
int64_t rax_3
rax_3.b = 1
return rax_3
