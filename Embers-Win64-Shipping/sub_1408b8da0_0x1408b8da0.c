// 函数: sub_1408b8da0
// 地址: 0x1408b8da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2c) = 0x80
__builtin_memset(arg1, 0, 0x2c)
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
sub_1408babe0(arg1, arg2)

if (arg2[8] == 0)
    arg1[7].d = arg2[7].d

int64_t rcx = arg1[8]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[8] = arg2[8]
arg2[8] = 0
arg1[9].d = arg2[9].d
arg2[9].d = 0
return arg1
