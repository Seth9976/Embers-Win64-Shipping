// 函数: sub_142509070
// 地址: 0x142509070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_2 = *(arg2 + 0x20)
float zmm3[0x4] = var_18
int64_t rcx_1
rcx_1.b = rax_2 != 0
float var_10
float result = var_10 * 57.2957764f
*(arg2 + 0x20) = rcx_1 + rax_2
zmm3[0] = zmm3[0] * 57.2957764f
int32_t var_14
int64_t zmm2
zmm2.d = var_14.d f* 57.2957764f
*arg3 = (_mm_unpacklo_ps(zmm3, zmm2)).q
arg3[1].d = result
return result
