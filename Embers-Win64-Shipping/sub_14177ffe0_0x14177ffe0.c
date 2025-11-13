// 函数: sub_14177ffe0
// 地址: 0x14177ffe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_28
sub_1417a9150(arg1 + 0x10, &var_28, arg2)
arg2[1]
*arg2
arg2[2]
float zmm0_1[0x4]
int32_t zmm6_1
zmm0_1, zmm6_1 = sub_1417920a0(arg1 + 0x10, arg1 + 0x40, &var_28)
float zmm1_1[0x4] = zmm0_1

if (zmm6_1 f== 0f)
    return zmm1_1

zmm0_1 = _mm_sqrt_ss(0, zmm6_1)
zmm0_1[0] = zmm0_1[0] + zmm1_1[0]
return zmm0_1
