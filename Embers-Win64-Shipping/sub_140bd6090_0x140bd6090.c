// 函数: sub_140bd6090
// 地址: 0x140bd6090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140bd6570(arg1, 0, arg4, zx.q(arg5), arg9)
void* rcx = &arg1[0x28]
arg1[0x19].d = 0
*arg1 = &data_142e883b0
arg1[0x16] = arg10
arg1[0x17] = arg11
arg1[0x18] = arg12
arg1[0x1b] = 0
*(arg1 + 0xcc) = arg6 | 0x80
arg1[0x1a] = arg7
__builtin_memset(&arg1[0x1c], 0, 0x34)
__builtin_memset(&arg1[0x23], 0, 0x28)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_7 = *(rcx + 0x10)

if (rax_7 != 0)
    rcx = rax_7

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
void* rax_8 = *(rcx_1 + 0x10)

if (rax_8 != 0)
    rcx_1 = rax_8

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
arg1[0x1d] = arg8
return arg1
