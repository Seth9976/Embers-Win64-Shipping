// 函数: sub_14039ea4e
// 地址: 0x14039ea4e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi_1 = arg1[6]
*rdi_1 = _mm_add_epi16(zx.o(arg2.q), _mm_bsrli_si128(arg2, 8)).d
rdi_1[1] = _mm_add_epi16(zx.o(arg3.q), _mm_bsrli_si128(arg3, 8)).d
uint128_t result = _mm_add_epi16(zx.o(arg4.q), _mm_bsrli_si128(arg4, 8))
rdi_1[2] = result.d
*arg1
return result
