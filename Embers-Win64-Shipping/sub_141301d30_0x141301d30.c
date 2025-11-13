// 函数: sub_141301d30
// 地址: 0x141301d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x19)
__builtin_memset(arg2 + 0x20, 0, 0x7c)
*(arg2 + 0xa0) = 0
*(arg2 + 0xa8) = 0x100
uint128_t zmm1 = *arg3
uint128_t zmm0 = zx.o(arg3[1].q)
*(arg2 + 0x20) = zmm1.q
uint64_t var_18 = zmm0.q
*(arg2 + 0x28) = _mm_bsrli_si128(zmm1, 8).d
*(arg2 + 0x2c) = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
*(arg2 + 0x30) = var_18.d
*(arg2 + 0x34) = (var_18 u>> 0x20).d
zmm1 = *(arg1 + 0x18)
zmm0 = zx.o(arg1[5])
*(arg2 + 0x38) = zmm1.q
uint64_t var_18_1 = zmm0.q
*(arg2 + 0x40) = _mm_bsrli_si128(zmm1, 8).d
*(arg2 + 0x44) = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
*(arg2 + 0x48) = var_18_1.d
*(arg2 + 0x4c) = (var_18_1 u>> 0x20).d
zmm1 = *(arg1 + 0x30)
zmm0 = zx.o(arg1[8])
*(arg2 + 0x80) = zmm1.q
uint64_t var_18_2 = zmm0.q
int64_t rax_10 = _mm_bsrli_si128(zmm1, 8).q
uint128_t temp0_5 = _mm_bsrli_si128(zmm1, 8)
*(arg2 + 0x8c) = (rax_10 u>> 0x20).d
*(arg2 + 0x88) = temp0_5.d
*(arg2 + 0x90) = var_18_2.d
*(arg2 + 0x94) = (var_18_2 u>> 0x20).d
*(arg2 + 0xa0) = *arg1
return arg2
