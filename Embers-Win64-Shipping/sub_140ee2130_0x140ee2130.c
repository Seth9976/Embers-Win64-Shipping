// 函数: sub_140ee2130
// 地址: 0x140ee2130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*arg1 = *arg2
*arg2 = 0
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
arg1[2] = 0
arg1[3] = 0
void* rcx = &arg1[4]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_3 = *(rcx + 0x10)

if (rax_3 != 0)
    rcx = rax_3

*rcx = 0
*(rcx + 8) = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
sub_140a642d0(&arg1[2], &arg2[2])

if (arg2[0xa] == 0)
    memmove(&arg1[9], &arg2[9], 4)

int64_t rcx_3 = arg1[0xa]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0xa] = arg2[0xa]
arg2[0xa] = 0
arg1[0xb].d = arg2[0xb].d
arg2[0xb].d = 0
arg1[0xc] = 0
arg1[0xc] = arg2[0xc]
arg2[0xc] = 0
arg1[0xd].d = arg2[0xd].d
*(arg1 + 0x6c) = *(arg2 + 0x6c)
arg2[0xd] = 0
return arg1
