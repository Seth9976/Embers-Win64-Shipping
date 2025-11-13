// 函数: sub_140f66410
// 地址: 0x140f66410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
*(arg1 + 4) = 0
int32_t zmm0 = *arg3

if (arg2 != 1)
    arg1[1] = zmm0
    arg1[2] = arg3[1]
    return arg1

arg1[2] = zmm0
arg1[1] = arg3[1]
return arg1
