// 函数: sub_142b875d0
// 地址: 0x142b875d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg4[7].d = 0
**arg4 = 0
void var_18
uint128_t zmm1 = *sub_142a85330(&var_18, "NumberElements/")
sub_142a8cbd0(arg4, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg5)
zmm1 = *sub_142a85330(&var_18, arg1)
sub_142a8cbd0(arg4, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg5)
char const* const rdx_3 = "/patternsLong"

if (arg2 == 0)
    rdx_3 = "/patternsShort"

zmm1 = *sub_142a85330(&var_18, rdx_3)
sub_142a8cbd0(arg4, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg5)
char const* const rdx_5 = "/currencyFormat"

if (arg3 == 0)
    rdx_5 = "/decimalFormat"

zmm1 = *sub_142a85330(&var_18, rdx_5)
return sub_142a8cbd0(arg4, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg5)
