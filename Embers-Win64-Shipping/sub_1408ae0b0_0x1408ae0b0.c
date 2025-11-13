// 函数: sub_1408ae0b0
// 地址: 0x1408ae0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm1 = *(arg2 + 4)
int32_t arg_10 = (*(arg2 + 8)).d
int32_t arg_18 = (*arg2).d
int32_t r8_3 = ((zmm1 s>> 0x10 ^ zmm1) * 0x7a69) ^ ((arg_10 s>> 0x10 ^ arg_10) * 0x1b3b)
    ^ ((arg_18 s>> 0x10 ^ arg_18) * 0x653) ^ arg1
uint128_t result
result.d = _mm_cvtepi32_ps(zx.o(r8_3 * r8_3 * r8_3 * 0xec4d)).d f* 4.65661287e-10f
return result
