// 函数: sub_142076360
// 地址: 0x142076360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
int64_t* rcx = &arg1[0x5a]
*arg1 = &data_1432ada30
arg1[0x47] = 0
arg1[0x48] = 0
__builtin_memset(&arg1[0x4a], 0, 0x20)
__builtin_memset(&arg1[0x50], 0, 0x18)
__builtin_memset(&arg1[0x54], 0, 0x30)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
*(arg1 + 0x2f4) = 0
arg1[0x5e].d = 0xffffffff
arg1[0x60] = 0
arg1[0x61].d = 0
*(arg1 + 0x32) |= 2
arg1[6].b = 2
sub_141dd84c0(arg1, 1)
arg1[0x45].b &= 0xfe
*(arg1 + 0x5b) &= 0xfe
arg1[0x45].b |= 2
sub_141dd7d00(arg1, 0)
arg1[0x46].b &= 0xfb
return arg1
