// 函数: sub_140cd3830
// 地址: 0x140cd3830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b0b2f0(arg1)
int64_t* rdx = &arg1[3]
*arg1 = &data_142ea4c50
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
InitializeCriticalSection(&arg1[0xb])
SetCriticalSectionSpinCount(&arg1[0xb], 0xfa0)
arg1[0x10] = 0
void* rcx_2 = &arg1[0x12]
arg1[0x11] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
InitializeCriticalSection(&arg1[0x1a])
SetCriticalSectionSpinCount(&arg1[0x1a], 0xfa0)
arg1[0x1f] = 0
void* rcx_5 = &arg1[0x21]
arg1[0x20] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_2 = *(rcx_5 + 0x10)

if (rax_2 != 0)
    rcx_5 = rax_2

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0x25].d = 0xffffffff
*(arg1 + 0x12c) = 0
arg1[0x27] = 0
arg1[0x28].d = 0
InitializeCriticalSection(&arg1[0x29])
SetCriticalSectionSpinCount(&arg1[0x29], 0xfa0)
arg1[0x2e] = 0
void* rcx_8 = &arg1[0x30]
arg1[0x2f] = 0
*(rcx_8 + 0x10) = 0
*(rcx_8 + 0x18) = 0
*(rcx_8 + 0x1c) = 0x80
void* rax_3 = *(rcx_8 + 0x10)

if (rax_3 != 0)
    rcx_8 = rax_3

*rcx_8 = 0
*(rcx_8 + 8) = 0
arg1[0x34].d = 0xffffffff
*(arg1 + 0x1a4) = 0
arg1[0x36] = 0
arg1[0x37].d = 0
InitializeCriticalSection(&arg1[0x38])
SetCriticalSectionSpinCount(&arg1[0x38], 0xfa0)
arg1[0x3d].d = 0
return arg1
