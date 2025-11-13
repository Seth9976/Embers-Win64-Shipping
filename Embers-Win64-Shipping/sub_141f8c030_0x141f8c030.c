// 函数: sub_141f8c030
// 地址: 0x141f8c030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0
uint128_t zmm6_1
zmm0, zmm6_1 = sub_141f86ef0(arg1 + 0x30, arg3, zx.o(0))
*arg2 = zmm0
int32_t zmm0_1
uint128_t zmm6_2
zmm0_1, zmm6_2 = sub_141f86ef0(arg1 + 0xb0, zmm6_1, zx.o(0))
arg2[1] = zmm0_1
arg2[2] = sub_141f86ef0(arg1 + 0x130, zmm6_2, zx.o(0))
return arg2
