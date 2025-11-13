// 函数: sub_140ebf2a0
// 地址: 0x140ebf2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
int128_t zmm0_1
int512_t zmm6
zmm0_1, zmm6 = sub_140f75d80(arg1, sub_140f66410(&var_28, *(arg1 + 0x4d8), arg1 + 0x434))
zmm6.o = zmm0_1
int32_t zmm0_2
int32_t zmm6_1
zmm0_2, zmm6_1 = sub_140f76110(arg1, zmm0_1.d)
void var_38
sub_140f66450(&var_38, *(arg1 + 0x4d8), zmm0_2, zmm6_1)
float var_30

if (var_30 <= 0f)
    return 1

float var_20
float zmm1 = var_20 / var_30
int32_t result = int.d(zmm1 + zmm1 - 0.5f) s>> 1

if (result s<= 1)
    return 1

return result
