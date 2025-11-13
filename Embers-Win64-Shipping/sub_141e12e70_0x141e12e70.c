// 函数: sub_141e12e70
// 地址: 0x141e12e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e37d10(arg1, arg2)
*arg1 = &data_143242f60
arg1[5] = &data_143243298
arg1[6] = &data_1432432c8
__builtin_memset(&arg1[0x16], 0, 0x20)
__builtin_memset(&arg1[0x1c], 0, 0x6c)
*(arg1 + 0x164) = 0
*(arg1 + 0x16c) = 0
*(arg1 + 0x16e) = 0
arg1[0x2e].w = 1
__builtin_memset(&arg1[0x2f], 0, 0x21)
*(arg1 + 0x94) = 0x3f800000

if (arg1[0x1b] == 0)
    arg1[0x1b] = sub_141deb9a0()

return arg1
