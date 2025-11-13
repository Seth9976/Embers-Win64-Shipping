// 函数: sub_1408be910
// 地址: 0x1408be910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0
int512_t zmm6
float zmm7_1[0x4]
uint128_t zmm8_1
float zmm9_1[0x4]
zmm0, zmm6, zmm7_1, zmm8_1, zmm9_1 = sub_1408beb20(arg1, arg2, arg3, arg4)
zmm6.o = zmm0
float zmm0_1
float zmm6_1
zmm0_1, zmm6_1 = sub_1408beb20(arg1 + 0x88, zmm9_1, zmm8_1, zmm7_1)
return (zmm0_1 - zmm6_1) * arg5 + zmm6_1
