// 函数: sub_140b2ee20
// 地址: 0x140b2ee20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b0b2f0(arg1)
int64_t* rdx = &arg1[3]
void* rcx = &arg1[0x4f]
*arg1 = &data_142e781f8
arg1[1] = 0
arg1[2] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 0
arg1[9] = 0
arg1[0xa].d = 0
arg1[0x4b] = 0
arg1[0x4c].d = 0
*(arg1 + 0x264) = 0x10
arg1[0x4d] = 0
arg1[0x4e] = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x5a]
arg1[0x53].d = 0xffffffff
*(arg1 + 0x29c) = 0
arg1[0x55] = 0
arg1[0x56].d = 0
arg1[0x57].w = 0
arg1[0x58] = 0
arg1[0x59] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x5e].d = 0xffffffff
*(arg1 + 0x2f4) = 0
arg1[0x60] = 0
arg1[0x61].d = 0
arg1[0x62] = 0
arg1[0x63] = 0
arg1[0x64] = 2
arg1[0x65] = 0
arg1[0x66] = 0
arg1[0x67] = 2
arg1[0x68] = 0
arg1[0x69].d = 0
__builtin_memset(&arg1[0x6a], 0, 0x40)
arg1[0x74].b = 0
InitializeCriticalSection(&arg1[0x75])
SetCriticalSectionSpinCount(&arg1[0x75], 0xfa0)
return arg1
