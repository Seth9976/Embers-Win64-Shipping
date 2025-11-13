// 函数: sub_1426cc8b0
// 地址: 0x1426cc8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426a8df0(arg2, arg1)
int32_t rcx_1 = arg1[0x14].d
int32_t rcx_2 = rcx_1 | 0x80
arg1[0x14].d = rcx_2
arg1[0x11].b = ((rcx_1.b & 0x60) != 0) + 2

if ((rcx_2.b & 0x60) == 0)
    return zx.q(((rcx_1.b & 0x60) != 0) + 2)

void* rdx_1 = arg1[0xe]
arg1[0x14].d = rcx_2 | 0x100

if (rdx_1 != 0 && (rcx_2.b & 0x40) != 0)
    *(rdx_1 + 0x250)
    sub_1427346b0(arg1, rdx_1)
else if ((rcx_2.b & 0x20) != 0)
    sub_142734670(arg1, arg1[0xf])

arg1[0x14].d &= 0xfffffeff
return zx.q(arg1[0x11].b)
