// 函数: sub_141a2f0c0
// 地址: 0x141a2f0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*arg1 = *arg2
__builtin_memset(arg2, 0, 0x20)
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2] = 0
arg1[2] = arg2[2]
arg1[3].d = arg2[3].d
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4] = 0
arg1[5] = 0
void* rcx = &arg1[6]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_6 = *(rcx + 0x10)

if (rax_6 != 0)
    rcx = rax_6

*rcx = 0
*(rcx + 8) = 0
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
sub_140780e10(&arg1[4], &arg2[4])

if (arg2[0xc] == 0)
    memmove(&arg1[0xb], &arg2[0xb], 4)

int64_t rcx_3 = arg1[0xc]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0xc] = arg2[0xc]
arg2[0xc] = 0
arg1[0xd].d = arg2[0xd].d
arg2[0xd].d = 0
return arg1
