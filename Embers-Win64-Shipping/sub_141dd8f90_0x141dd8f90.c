// 函数: sub_141dd8f90
// 地址: 0x141dd8f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (*(arg1 + 0xf0) != 3)
    return 

uint64_t rax = zx.q(*(arg1 + 0x5b))

if ((rax.b & 1) != 0 || arg2 != 1)
    arg1.b = 0
else
    arg1 = zx.q(arg2)

rax.b &= 0xfe
*(rbx + 0x5f) = arg2
rax.b |= arg2
*(rbx + 0x5b) = rax.b

if (arg1.b == 0)
    return 

rax = (*(*rbx + 0x150))(rbx)

if (rax != 0)
    sub_14242c0c0(rax, rbx)
    return sub_141dc4c00(rbx) __tailcall
