// 函数: sub_1427a2050
// 地址: 0x1427a2050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = *(arg1 + 0x450)
float zmm1 = *(arg1 + 0x458)
int32_t rax = *(arg1 + 0x430)
int64_t var_28 = *(arg1 + 0x428)
int64_t zmm0 = *(arg1 + 0x454)
zmm0.d = zmm0.d f* zmm0.d
int32_t var_20 = rax
int32_t var_1c = _mm_sqrt_ss(0, zmm2 * zmm2 f+ zmm0.d + zmm1 * zmm1).d
int64_t var_18[0x2]
int64_t* rax_1 = sub_140ae2f70(&var_28, &var_18, arg3)
uint128_t zmm2_1 = *(rax_1 + 0xc)
int32_t rcx_1 = rax_1[1].d
*arg2 = *rax_1
int32_t var_20_1 = zmm2_1.d
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm2_1, zmm2_1.q)).q
*(arg2 + 0x14) = var_20_1
arg2[3].d = zmm2_1.d
arg2[1].d = rcx_1
return arg2
