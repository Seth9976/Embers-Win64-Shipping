// 函数: sub_1426d5f90
// 地址: 0x1426d5f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[0x14].d
char rax

if ((rcx.b & 0x18) == 0)
    rax = 1

if ((rcx.b & 0x18) != 0 || (rcx.b & 6) != 0)
    rax = 3

int32_t rcx_1 = rcx & 0xffffff7f
arg1[0x11].b = rax
arg1[0x14].d = rcx_1

if ((rcx_1.b & 0x18) == 0)
    return zx.q(rax)

void* rdx = arg1[0xe]
arg1[0x14].d = rcx_1 | 0x100

if (rdx != 0 && (rcx_1.b & 0x10) != 0)
    *(rdx + 0x250)
    sub_142734860(arg1, rdx)
else if ((rcx_1.b & 8) != 0)
    sub_142734820(arg1, arg1[0xf])

arg1[0x14].d &= 0xfffffeff
return zx.q(arg1[0x11].b)
