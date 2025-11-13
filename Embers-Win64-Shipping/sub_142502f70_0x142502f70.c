// 函数: sub_142502f70
// 地址: 0x142502f70
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
float zmm1[0x4] = var_28
int64_t rcx_2
rcx_2.b = rax_3 != 0
zmm1[0] = zmm1[0] f- var_18
int32_t var_24
int32_t var_14
int64_t zmm2
zmm2.d = var_24.d f- var_14
float var_20
float var_10
float result = var_20 - var_10
*(arg2 + 0x20) = rcx_2 + rax_3
*arg3 = (_mm_unpacklo_ps(zmm1, zmm2)).q
arg3[1].d = result
return result
