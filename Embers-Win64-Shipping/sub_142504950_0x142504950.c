// 函数: sub_142504950
// 地址: 0x142504950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int32_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_10 = (zx.o(0)).d

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int32_t zmm2 = arg_10
float zmm0_1[0x4] = var_28
zmm0_1[0] = zmm0_1[0] f- var_18
int64_t rcx_3
rcx_3.b = rax_4 != 0
int32_t var_24
int32_t var_14
int64_t zmm3
zmm3.d = var_24.d f- var_14
*(arg2 + 0x20) = rcx_3 + rax_4
zmm0_1[0] = zmm0_1[0] f* zmm2
zmm3.d = zmm3.d f* zmm2
zmm0_1[0] = zmm0_1[0] f+ var_18
zmm3.d = zmm3.d f+ var_14
float var_20
float var_10
float result = (var_20 - var_10) f* zmm2 + var_10
*arg3 = (_mm_unpacklo_ps(zmm0_1, zmm3)).q
arg3[1].d = result
return result
