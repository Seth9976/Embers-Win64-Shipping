// 函数: sub_14077e420
// 地址: 0x14077e420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[2] = 0
arg1[3] = data_14396f0d8
arg1[4].w = data_14396f0e0
*(arg1 + 0x22) = 0xffffffff
arg1[5] = 0
arg1[6] = 0
sub_140747710(&arg1[2], arg3)
arg1[1] = sub_1408011e0(*arg1, arg3)
int64_t rcx_2 = *(arg3 + 0x18)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg1
