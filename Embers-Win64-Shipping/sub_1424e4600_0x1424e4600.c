// 函数: sub_1424e4600
// 地址: 0x1424e4600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
uint128_t zmm3 = var_18
int64_t rdi
rdi.b = rax_3 != 0
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg_10))
*(arg2 + 0x20) = rdi + rax_3
float var_10
float result = var_10 f+ zmm1.d
zmm3.d = zmm3.d f+ zmm1.d
int32_t var_14
int64_t zmm2
zmm2.d = var_14.d f+ zmm1.d
*arg3 = (_mm_unpacklo_ps(zmm3, zmm2)).q
arg3[1].d = result
return result
