// 函数: sub_141cf7f00
// 地址: 0x141cf7f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
InitializeCriticalSection(&arg1[1])
SetCriticalSectionSpinCount(&arg1[1], 0xfa0)
int32_t rdx = data_143a2104c
void* rcx_2 = &arg1[0xd]
arg1[7] = 1
arg1[6] = 0
__builtin_memset(&arg1[8], 0, 0x14)
arg1[0xb] = 0
arg1[0xc] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

data_143a2104c = rdx + 1
*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
__builtin_memset(&arg1[0x15], 0, 0x30)
arg1[0x1b].d = rdx << 0x1e
*(arg1 + 0xdc) = 0xc0000000
sub_141cfc5b0(&arg1[0x17])
int32_t rdx_2 = data_143a2104c
__builtin_memset(&arg1[0x1c], 0, 0x20)
arg1[0x20].d = rdx_2 << 0x1e
*(arg1 + 0x104) = 0xc0000000
data_143a2104c = rdx_2 + 1
sub_141cfc530(&arg1[0x1c])
arg1[0x21] = 0
void* rcx_5 = &arg1[0x23]
arg1[0x22] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_5 = *(rcx_5 + 0x10)

if (rax_5 != 0)
    rcx_5 = rax_5

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0x27].d = 0xffffffff
*(arg1 + 0x13c) = 0
arg1[0x29] = 0
arg1[0x2a].d = 0
__builtin_memset(&arg1[0x2b], 0, 0x1c)
__builtin_memset(&arg1[0x2f], 0, 0x1c)
__builtin_memset(&arg1[0x33], 0, 0x1c)
__builtin_memset(&arg1[0x37], 0, 0x1c)
__builtin_memset(&arg1[0x3b], 0, 0x1c)
__builtin_memset(&arg1[0x3f], 0, 0x1c)
__builtin_memset(&arg1[0x43], 0, 0x1c)
__builtin_memset(&arg1[0x47], 0, 0x1c)
__builtin_memset(&arg1[0x4b], 0, 0x2c)
arg1[0x51] = 0
arg1[0x52].d = 0
InitializeCriticalSection(&arg1[0x53])
SetCriticalSectionSpinCount(&arg1[0x53], 0xfa0)
arg1[0x58].b = arg3
return arg1
