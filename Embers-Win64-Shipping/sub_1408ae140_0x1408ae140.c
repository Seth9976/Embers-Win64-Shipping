// 函数: sub_1408ae140
// 地址: 0x1408ae140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg2[3].d
int32_t arg_8 = arg2[1].d
int32_t arg_10 = arg2[2]
int32_t zmm1 = *arg2
int32_t r8_4 = ((arg_8 s>> 0x10 ^ arg_8) * 0x7a69) ^ ((arg_10 s>> 0x10 ^ arg_10) * 0x1b3b)
    ^ ((zmm1 s>> 0x10 ^ zmm1) * 0x653) ^ ((arg_20 s>> 0x10 ^ arg_20) * 0x3f5) ^ arg1
uint128_t result
result.d = _mm_cvtepi32_ps(zx.o(r8_4 * r8_4 * r8_4 * 0xec4d)).d f* 4.65661287e-10f
return result
