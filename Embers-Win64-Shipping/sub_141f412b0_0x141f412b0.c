// 函数: sub_141f412b0
// 地址: 0x141f412b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(*arg2)
uint128_t zmm1 = zx.o(arg1[0x25])
uint128_t zmm2 = zmm0
int32_t rax = arg2[1].d
uint128_t zmm3
zmm3.d = zmm1.d f+ zmm0.d
uint64_t var_18 = zmm0.q
int32_t rax_1 = arg1[0x26].d
int64_t r9 = 0
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm2.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f+ zmm0.d

if (arg3 != 0)
    r9 = arg4

zmm0.d = rax_1.d f+ rax
var_18 = (_mm_unpacklo_ps(zmm3, zmm2.q)).q
int32_t var_10_1 = zmm0.d
return sub_141f48c80(arg1, &var_18, arg3, r9, arg5)
