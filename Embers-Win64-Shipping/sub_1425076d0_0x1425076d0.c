// 函数: sub_1425076d0
// 地址: 0x1425076d0
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

int64_t result = *(arg2 + 0x20)
float var_24
float var_14
float zmm0 = var_24 - var_14
float zmm1 = var_28 - var_18
int64_t rcx_2
rcx_2.b = result != 0
*(arg2 + 0x20) = rcx_2 + result
zmm0 = zmm0 * zmm0 + zmm1 * zmm1
*arg3 = _mm_sqrt_ss(zmm0, zmm0)
return result
