// 函数: sub_1418cfa40
// 地址: 0x1418cfa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int64_t rdi = 0
arg1[1].w = 0
*(arg1 + 0xa) = 0
__builtin_memset(&arg1[2], 0, 0x30)
InitializeSRWLock(&arg1[8])
arg1[9] = 0
void* rcx_1 = &arg1[0xb]
arg1[0xa] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x16]
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 0
arg1[0x11] = 0
arg1[0x12].d = 0
__builtin_memset(&arg1[0x13], 0, 0x18)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x1a].d = 0xffffffff
*(arg1 + 0xd4) = 0
arg1[0x1c] = 0
arg1[0x1d].d = 0
InitializeCriticalSection(&arg1[0x1e])
SetCriticalSectionSpinCount(&arg1[0x1e], 0xfa0)
arg1[0x23] = 0
void* rcx_5 = &arg1[0x25]
arg1[0x24] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_2 = *(rcx_5 + 0x10)

if (rax_2 != 0)
    rcx_5 = rax_2

*rcx_5 = 0
*(rcx_5 + 8) = 0
void* rcx_6 = &arg1[0x2f]
arg1[0x29].d = 0xffffffff
*(arg1 + 0x14c) = 0
arg1[0x2b] = 0
arg1[0x2c].d = 0
arg1[0x2d] = 0
arg1[0x2e] = 0
*(rcx_6 + 0x10) = 0
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_3 = *(rcx_6 + 0x10)

if (rax_3 != 0)
    rcx_6 = rax_3

*rcx_6 = 0
*(rcx_6 + 8) = 0
arg1[0x33].d = 0xffffffff
*(arg1 + 0x19c) = 0
arg1[0x35] = 0
arg1[0x36].d = 0
InitializeCriticalSection(&arg1[0x37])
SetCriticalSectionSpinCount(&arg1[0x37], 0xfa0)
arg1[0x3c] = 0
void* rcx_9 = &arg1[0x3e]
arg1[0x3d] = 0
*(rcx_9 + 0x10) = 0
*(rcx_9 + 0x18) = 0
*(rcx_9 + 0x1c) = 0x80
void* rax_4 = *(rcx_9 + 0x10)

if (rax_4 != 0)
    rcx_9 = rax_4

*rcx_9 = 0
*(rcx_9 + 8) = 0
arg1[0x42].d = 0xffffffff
*(arg1 + 0x214) = 0
arg1[0x44] = 0
arg1[0x45].d = 0
InitializeCriticalSection(&arg1[0x46])
SetCriticalSectionSpinCount(&arg1[0x46], 0xfa0)
arg1[0x4c] = 0
void* rcx_12 = &arg1[0x53]
arg1[0x4d] = 0
arg1[0x4b] = &data_142efce08
arg1[0x4e].d = 0
arg1[0x4f] = 0
arg1[0x50].d = 0
arg1[0x51] = 0
arg1[0x52] = 0
*(rcx_12 + 0x10) = 0
*(rcx_12 + 0x18) = 0
*(rcx_12 + 0x1c) = 0x80
void* rax_5 = *(rcx_12 + 0x10)

if (rax_5 != 0)
    rcx_12 = rax_5

*rcx_12 = 0
*(rcx_12 + 8) = 0
arg1[0x57].d = 0xffffffff
*(arg1 + 0x2bc) = 0
arg1[0x59] = 0
arg1[0x5a].d = 0
arg1[0x5b].b = 1
int64_t rbx = data_143efb3c0
int64_t rcx_13

if (data_143de5480 == 0)
    rcx_13 = 0
else
    rcx_13.b = GetCurrentThreadId().d != data_143de5470

rax_5.b = *(rbx + (rcx_13 << 2)) != 0
arg1[0x5b].b = rax_5.b
int64_t rbx_1 = data_143efb408

if (data_143de5480 != 0)
    rdi.b = GetCurrentThreadId() != data_143de5470

arg1[0x50].d = *(rbx_1 + (rdi << 2))
return arg1
