// 函数: sub_142504cd0
// 地址: 0x142504cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t result = *(arg2 + 0x20)
float zmm0 = var_18
int64_t rcx_1
rcx_1.b = result != 0
*(arg2 + 0x20) = rcx_1 + result
float var_14
*arg3 = _mm_sqrt_ss(0, var_14 * var_14 + zmm0 * zmm0)
return result
