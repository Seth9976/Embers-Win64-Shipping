// 函数: sub_14064a950
// 地址: 0x14064a950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_18

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

int64_t rax_3 = *(arg2 + 0x20)
float zmm5[0x4] = var_28
int64_t rcx_2
rcx_2.b = rax_3 != 0
float result = var_18 * zmm5[0]
*(arg2 + 0x20) = rcx_2 + rax_3
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
float var_24
temp0[0] = var_24
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float var_20
temp0_1[0] = var_20
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
float var_14
float var_10
temp0_2[0] = var_14 * var_24 + result + var_10 * var_20
*arg3 = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
return result
