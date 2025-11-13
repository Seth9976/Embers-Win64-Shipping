// 函数: sub_140bd5d40
// 地址: 0x140bd5d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cd40d0(arg1)
arg1[7].d = 0xffffffff
void* rcx = &arg1[0x28]
arg1[6] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x15] = 0
*arg1 = &data_142e883b0
__builtin_memset(&arg1[0x1d], 0, 0x2c)
arg1[0x26] = 0
arg1[0x27] = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x32]
arg1[0x2c].d = 0xffffffff
*(arg1 + 0x164) = 0
arg1[0x2e] = 0
arg1[0x2f].d = 0
arg1[0x30] = 0
arg1[0x31] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x36].d = 0xffffffff
*(arg1 + 0x1b4) = 0
arg1[0x38] = 0
arg1[0x39].d = 0
InitializeSRWLock(&arg1[0x3a])
__builtin_memset(&arg1[0x3b], 0, 0x20)
InitializeCriticalSection(&arg1[0x3f])
SetCriticalSectionSpinCount(&arg1[0x3f], 0xfa0)
arg1[0x44] = 0
arg1[0x45] = 0
return arg1
