// 函数: sub_142c6e7b0
// 地址: 0x142c6e7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (*arg1).b & (arg1[2]).b

if ((rax & 4) != 0)
    arg1[1] = 4
    arg1[2] = 0
    return 1

if ((rax & 2) != 0)
    arg1[1] = 2
    arg1[2] = 0
    return 1

if ((rax & 8) != 0)
    arg1[1] = 8
    arg1[2] = 0
    return 1

if ((rax & 0x20) != 0)
    arg1[1] = 0x20
    arg1[2] = 0
    return 1

if ((rax & 1) == 0)
    arg1[1] = 0x40000000
    arg1[2] = 0
    return 0

arg1[1] = 1
arg1[2] = 0
return 1
