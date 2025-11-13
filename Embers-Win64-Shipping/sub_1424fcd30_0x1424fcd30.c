// 函数: sub_1424fcd30
// 地址: 0x1424fcd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

float var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_4 = *(arg2 + 0x20)
float zmm6[0x4] = var_58
int32_t var_54
int128_t zmm7 = var_54
zmm6[0] = zmm6[0] f- var_48
float zmm2 = var_38
int64_t rcx_3
rcx_3.b = rax_4 != 0
zmm6[0] = zmm6[0] * zmm2
*(arg2 + 0x20) = rcx_3 + rax_4
int32_t var_30
float zmm0[0x4] = var_30
float var_50
float var_44
float var_40
float var_34
float zmm5 = (zmm7.d - var_44) * var_34 + zmm6[0] + (var_50 - var_40) * zmm0[0]
zmm0[0] = zmm0[0] * zmm5
float result = var_50 - zmm0[0]
zmm6[0] = zmm6[0] - zmm2 * zmm5
zmm7.d = zmm7.d f- var_34 * zmm5
*arg3 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
arg3[1].d = result
return result
