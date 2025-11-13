// 函数: sub_1426662a0
// 地址: 0x1426662a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *arg2
void* r8 = zmm0.q
uint128_t temp0 = _mm_bsrli_si128(zmm0, 8)
void* rax = *(r8 + 0x380)

if (rax != 0)
    r8 = rax

void* rcx_1 = *(r8 + sx.q(temp0.d) * 0x38 + 0x20)
int32_t rax_5 = sub_141dc56a0(rcx_1 + 0x70) + *(rcx_1 + 0x1c) + *(rcx_1 + 0x2c)
*(arg1 + 0x4a8) -= rax_5
uint128_t var_18 = *arg2
return sub_142665790(arg1 + 0x10, &var_18)
