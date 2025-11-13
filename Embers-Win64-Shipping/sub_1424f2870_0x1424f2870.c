// 函数: sub_1424f2870
// 地址: 0x1424f2870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_2 = *(arg2 + 0x20)
float zmm2 = var_18 * 0.300000012f
int64_t rcx_1
rcx_1.b = rax_2 != 0
float var_14
float result = var_14 * 0.589999974f
*(arg2 + 0x20) = rcx_1 + rax_2
float var_10
*arg3 = zmm2 + result + var_10 * 0.109999999f
return result
