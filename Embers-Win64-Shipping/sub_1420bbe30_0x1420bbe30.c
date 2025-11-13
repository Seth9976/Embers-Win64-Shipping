// 函数: sub_1420bbe30
// 地址: 0x1420bbe30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0_1[0x4]
int32_t zmm7_1
zmm0_1, zmm7_1 = sub_1420bbc00(*arg2, *arg3, arg4.d, arg5.d, arg6.d)
int32_t zmm1 = arg3[1]
*arg1 = zmm0_1[0]
uint32_t zmm0_2[0x4]
int32_t zmm7_2
zmm0_2, zmm7_2 = sub_1420bbc00(*(arg2 + 4), zmm1, arg4.d, arg5, zmm7_1)
zmm1 = arg3[2]
arg1[1] = zmm0_2[0]
arg1[2] = sub_1420bbc00(*(arg2 + 8), zmm1, arg4.d, arg5, zmm7_2)
return arg1
