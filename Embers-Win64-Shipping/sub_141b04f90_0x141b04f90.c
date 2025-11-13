// 函数: sub_141b04f90
// 地址: 0x141b04f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax

if (*(arg1 + 0x11) == 0)
    rax = sub_141b0f4a0(arg1, arg2, arg3)

if (*(arg1 + 0x11) == 0 && rax == 0)
    return 

uint32_t rdx = zx.d(*(arg1 + 0x10))

if (rdx == 0)
    sub_141b05f60(arg1, arg2, arg3)
    return 

if (rdx == 1)
    return sub_141aed7e0(arg3, arg2, arg1) __tailcall

if (rdx == 2)
    return sub_141b05750(arg1, arg2, arg3) __tailcall
