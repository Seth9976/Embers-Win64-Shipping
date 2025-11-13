// 函数: sub_141e90840
// 地址: 0x141e90840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140bd5ed0(arg1, arg2)
int64_t* rcx = &arg1[0x56]
*arg1 = &data_143253410
__builtin_memset(&arg1[0x47], 0, 0x40)
arg1[0x54] = 0
arg1[0x55] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x5a].d = 0xffffffff
*(arg1 + 0x2d4) = 0
arg1[0x5c] = 0
arg1[0x5d].d = 0
arg1[0x5e] = 0
arg1[0x5f] = 0
InitializeCriticalSection(&arg1[0x60])
SetCriticalSectionSpinCount(&arg1[0x60], 0xfa0)
*(arg1 + 0x234) &= 0xf8
arg1[0x46].d = 0
return arg1
