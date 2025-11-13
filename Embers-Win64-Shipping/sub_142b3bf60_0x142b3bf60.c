// 函数: sub_142b3bf60
// 地址: 0x142b3bf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    arg1[2] = 0
    *arg1 = 0xffff
    *(arg1 + 2) = 0xffff
    arg1[1].w = 0xfffe
    return arg1

if (arg2 == 1)
    *arg1 = 0xfffefffe
    arg1[1].w = 0xfffd
    arg1[2] = 1
    return arg1

if (arg2 == 2)
    *arg1 = 0xfffefffe
    arg1[1].w = 0xfffe
    arg1[2] = 2
    return arg1

if (arg2 == 3)
    *arg1 = 0xfffcfffc
    arg1[1].w = 1
    arg1[2] = 3
    return arg1

if (arg2 != 4)
    abort()
    noreturn

*arg1 = 0x30003
arg1[1].w = 1
arg1[2] = 4
return arg1
