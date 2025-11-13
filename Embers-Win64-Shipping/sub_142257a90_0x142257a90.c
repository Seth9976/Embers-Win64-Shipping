// 函数: sub_142257a90
// 地址: 0x142257a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg5 + 0x4e) = arg4
*arg5 = *arg2
arg5[1] = arg2[1]
arg5[2] = arg2[2]
int128_t zmm6 = *(arg1 + 0x14)
int128_t zmm7 = *(arg1 + 0x18)
float zmm5 = zmm6.d f* arg2[2]
float zmm0 = zmm7.d f* arg2[1]
zmm7.d = zmm7.d f* *arg2
zmm6.d = zmm6.d f* *arg2
zmm5 = zmm5 - zmm0
float zmm4 = *(arg1 + 0x10)
zmm0 = zmm4 f* arg2[2]
zmm4 = zmm4 f* arg2[1]
arg5[4] = zmm5
zmm7.d = zmm7.d f- zmm0
arg5[5] = zmm7.d
arg5[6] = zmm4 f- zmm6.d
arg5[8] = *arg2
arg5[9] = arg2[1]
arg5[0xa] = arg2[2]
zmm6 = *(arg1 + 0x20)
zmm7 = *(arg1 + 0x24)
zmm5 = zmm6.d
zmm4 = *(arg1 + 0x1c)
zmm0 = zmm7.d f* arg2[1]
zmm7.d = zmm7.d f* *arg2
zmm6.d = zmm6.d f* *arg2
zmm5 = zmm5 f* arg2[2] - zmm0
zmm0 = zmm4 f* arg2[2]
zmm4 = zmm4 f* arg2[1]
zmm7.d = zmm7.d f- zmm0
arg5[0xc] = zmm5
arg5[0xd] = zmm7.d
arg5[0xe] = zmm4 f- zmm6.d
arg5[3] = arg3
return arg5
