// 函数: sub_14103e2d0
// 地址: 0x14103e2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x10000
arg1[1].b = 0
*(arg1 + 6) = 0
int32_t rax = sub_141021240(arg5)
char rdx

if (rax != 0x13)
    rdx = 1

if (rax == 0x13 || rax == 0x2c)
    rdx = 2

*(arg1 + 7) = rdx
jump(&__dos_header.e_magic[zx.q(*((sx.q(*(arg2 + 4) - 1) << 2) + 0x14103e43c))])
