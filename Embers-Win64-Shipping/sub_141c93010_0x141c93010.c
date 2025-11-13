// 函数: sub_141c93010
// 地址: 0x141c93010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*arg1 = *arg2
__builtin_memset(arg2, 0, 0x40)
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2] = 0
arg1[2] = arg2[2]
arg1[3].d = arg2[3].d
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4] = 0
arg1[4] = arg2[4]
arg1[5].d = arg2[5].d
*(arg1 + 0x2c) = *(arg2 + 0x2c)
arg1[6] = 0
arg1[6] = arg2[6]
arg1[7].d = arg2[7].d
*(arg1 + 0x3c) = *(arg2 + 0x3c)
arg1[8] = 0
arg1[9] = 0
void* rcx = &arg1[0xa]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_12 = *(rcx + 0x10)

if (rax_12 != 0)
    rcx = rax_12

*rcx = 0
*(rcx + 8) = 0
arg1[0xe].d = 0xffffffff
*(arg1 + 0x74) = 0
arg1[0x10] = 0
arg1[0x11].d = 0
sub_140a3cab0(&arg1[8], &arg2[8])

if (arg2[0x10] == 0)
    memmove(&arg1[0xf], &arg2[0xf], 4)

int64_t rcx_3 = arg1[0x10]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x10] = arg2[0x10]
arg2[0x10] = 0
arg1[0x11].d = arg2[0x11].d
arg2[0x11].d = 0
return arg1
