// 函数: sub_141e715b0
// 地址: 0x141e715b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[4]
arg1[1] = 0
*arg1 = &data_143250b18
arg1[2] = 0
arg1[3] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
__builtin_memset(&arg1[0xc], 0, 0x20)
void* rcx = arg1 + 0x80
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

__builtin_memset(rcx, 0, 0x1c)
arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
arg1[0x16] = 0
arg1[0x17].d = 0
arg1[0x18] = 0
arg1[0x19] = 0
InitializeCriticalSection(&arg1[0x1a])
SetCriticalSectionSpinCount(&arg1[0x1a], 0xfa0)
InitializeCriticalSection(&arg1[0x1f])
SetCriticalSectionSpinCount(&arg1[0x1f], 0xfa0)
arg1[0x24] = 0
arg1[0x25] = 0
return arg1
