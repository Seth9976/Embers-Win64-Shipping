// 函数: sub_1419991a0
// 地址: 0x1419991a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3 = *arg3
int128_t zmm1 = arg2[1]
*arg1 = *arg2
int128_t zmm0 = arg2[2]
arg1[1] = zmm1
zmm1 = arg2[3]
arg1[2] = zmm0
arg1[3] = zmm1
*(arg1 + 0xc) = rax_3
*(arg1 + 0x1c) = arg3[1]
*(arg1 + 0x2c) = arg3[2]
*(arg1 + 0x3c) = 0x3f800000
return arg1
