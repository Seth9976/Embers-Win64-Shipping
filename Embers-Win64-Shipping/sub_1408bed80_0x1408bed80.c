// 函数: sub_1408bed80
// 地址: 0x1408bed80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0
uint128_t zmm8
int512_t zmm9
zmm0, zmm8, zmm9 = sub_141f86ef0(arg1 + 0x180, arg3, 0x3f800000)
zmm9.o = zmm0
int128_t zmm0_1
int512_t zmm7
uint128_t zmm8_1
zmm0_1, zmm7, zmm8_1 = sub_141f86ef0(arg1 + 0x100, arg3, zmm8)
zmm7.o = zmm0_1
int128_t zmm0_2
int512_t zmm6
uint128_t zmm8_2
zmm0_2, zmm6, zmm8_2 = sub_141f86ef0(arg1 + 0x80, arg3, zmm8_1)
zmm6.o = zmm0_2
int32_t zmm0_3
int32_t zmm6_1
int32_t zmm7_1
int32_t zmm9_1
zmm0_3, zmm6_1, zmm7_1, zmm9_1 = sub_141f86ef0(arg1, arg3, zmm8_2)
arg2[1] = zmm6_1
arg2[2] = zmm7_1
arg2[3] = zmm9_1
*arg2 = zmm0_3
return arg2
