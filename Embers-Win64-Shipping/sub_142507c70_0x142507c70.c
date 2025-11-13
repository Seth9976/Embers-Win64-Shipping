// 函数: sub_142507c70
// 地址: 0x142507c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_2 = *(arg2 + 0x20)
float zmm0[0x4] = 0x3f800000
int32_t var_10
zmm0[0] = 1f f/ var_10
int64_t rcx_1
rcx_1.b = rax_2 != 0
int32_t var_10_1 = 0x3f800000
*(arg2 + 0x20) = rcx_1 + rax_2
float zmm2[0x4] = var_18
zmm2[0] = zmm2[0] * zmm0[0]
int32_t var_14
int64_t zmm1
zmm1.d = var_14.d f* zmm0[0]
*arg3 = (_mm_unpacklo_ps(zmm2, zmm1)).q
arg3[1].d = 0x3f800000
return 0x3f800000
