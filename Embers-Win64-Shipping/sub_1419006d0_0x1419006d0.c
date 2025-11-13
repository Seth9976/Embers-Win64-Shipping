// 函数: sub_1419006d0
// 地址: 0x1419006d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x70)
void*** rbx = rax

if (rax == 0)
    rbx = rax
else
    int64_t rcx = *(arg1 + 0x58)
    *rbx = &data_142d3ff08
    rbx[1].d = 0
    *(rbx + 0xc) = 0
    rbx[2].w = 0x100
    rbx[3] = rcx
    *rbx = &data_142ff1c10
    __builtin_memset(&rbx[4], 0, 0x24)
    rbx[9].d = 0
    __builtin_memset(&rbx[0xa], 0, 0x18)
    *(rbx + 0x6c) = 0xffffffff

rbx[0xd].d = zx.d(arg4)
sub_1405d16e0(&rbx[0xa], arg3)
*arg2 = rbx
rbx[1].d += 1
return arg2
