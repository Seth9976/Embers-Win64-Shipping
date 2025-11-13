// 函数: sub_142508b30
// 地址: 0x142508b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_3 = *(arg2 + 0x20)
float zmm3[0x4] = var_18
int32_t var_14
int64_t zmm5 = var_14
int64_t rcx_2
rcx_2.b = rax_3 != 0
float zmm0[0x4] = var_28
zmm0[0] = zmm0[0] * zmm3[0]
*(arg2 + 0x20) = rcx_2 + rax_3
float var_24
float var_20
float var_10
float zmm4 = var_24 f* zmm5.d + zmm0[0] + var_20 * var_10
zmm3[0] = zmm3[0] * zmm4
zmm5.d = zmm5.d f* zmm4
float result = var_10 * zmm4
*arg3 = (_mm_unpacklo_ps(zmm3, zmm5)).q
arg3[1].d = result
return result
