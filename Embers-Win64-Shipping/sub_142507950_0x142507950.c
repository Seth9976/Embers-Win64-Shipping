// 函数: sub_142507950
// 地址: 0x142507950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

float var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_3 = *(arg2 + 0x20)
float var_24
float var_14
float zmm2 = var_24 - var_14
float zmm1 = var_28 - var_18
int64_t rcx_2
rcx_2.b = rax_3 != 0
float var_20
float var_10
float result = var_20 - var_10
*(arg2 + 0x20) = rcx_2 + rax_3
result = result * result
*arg3 = zmm2 * zmm2 + zmm1 * zmm1 + result
return result
