// 函数: sub_1406b5400
// 地址: 0x1406b5400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
*arg1 = &data_142d5ec40
arg1[2] = *arg2
arg1[4] = arg2[2]
arg2[2] = 0
*(arg1 + 0x30) = *(arg2 + 0x20)
*(arg1 + 0x40) = *(arg2 + 0x30)

if (arg1[2] != 0)
    *arg2 = 0

sub_1406b5490(&arg1[0xa], arg3)
arg1[0xd] = *arg4
arg1[0xe] = arg4[1]
arg4[1] = 0
*arg4 = 0
return arg1
