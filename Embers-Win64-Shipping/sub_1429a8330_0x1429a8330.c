// 函数: sub_1429a8330
// 地址: 0x1429a8330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = *arg1
uint128_t zmm0 = zx.o(arg1[3].q)
uint128_t zmm2 = arg1[1]
uint128_t zmm3 = arg1[2]
*arg1 = *arg2
*(arg1 + 8) = arg2[1].b
*(arg1 + 0xa) = *(arg2 + 0xa)
arg1[1].q = arg2[2]
*(arg1 + 0x18) = arg2[3].d
arg1[2].q = arg2[4]
*(arg1 + 0x28) = arg2[5]
arg1[3].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)
uint64_t var_18 = zmm0.q
*arg2 = zmm1.q
char rax_9 = _mm_bsrli_si128(zmm1, 8).b
uint128_t temp0_1 = _mm_bsrli_si128(zmm1, 8)
arg2[1].b = rax_9
*(arg2 + 0xa) = (temp0_1.q u>> 0x10).w
arg2[2] = zmm2.q
arg2[4] = zmm3.q
uint128_t temp0_2 = _mm_bsrli_si128(zmm2, 8)
uint128_t temp0_3 = _mm_bsrli_si128(zmm3, 8)
arg2[6].d = var_18.d
int32_t result = var_18:4.d
arg2[3].d = temp0_2.d
arg2[5] = temp0_3.q
*(arg2 + 0x34) = result
return result
