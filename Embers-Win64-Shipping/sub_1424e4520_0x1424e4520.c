// 函数: sub_1424e4520
// 地址: 0x1424e4520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = (zx.o(0)).d

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
float zmm1[0x4] = arg_10
float zmm3[0x4] = var_18
zmm3[0] = zmm3[0] + zmm1[0]
float var_10
float result = var_10 + zmm1[0]
int32_t var_14
int64_t zmm2
zmm2.d = var_14.d f+ zmm1[0]
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
*arg3 = (_mm_unpacklo_ps(zmm3, zmm2)).q
arg3[1].d = result
return result
