// 函数: sub_142307230
// 地址: 0x142307230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142380d90(arg1, arg2)
int64_t* rcx = &arg1[0x1f]
*arg1 = &data_143325c60
arg1[8] = &data_143325f58
arg1[9] = &data_143325f88
arg1[0xa] = &data_143325fb8
arg1[0xb] = 0
__builtin_memset(&arg1[0x17], 0, 0x40)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x23].d = 0xffffffff
*(arg1 + 0x11c) = 0
arg1[0x25] = 0
arg1[0x26].d = 0
arg1[0x27].d = 0
*(arg1 + 0x13c) = 0
__builtin_memset(&arg1[0x2b], 0, 0x28)
sub_141df2500(&arg1[0x31], 1)
arg1[0x52] = 0
void* rcx_2 = &arg1[0x54]
arg1[0x53] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x58].d = 0xffffffff
*(arg1 + 0x2c4) = 0
arg1[0x5a] = 0
arg1[0x5b].d = 0
__builtin_memset(&arg1[0x5c], 0, 0xa0)
*(arg1 + 0x13d) = 0x301
arg1[0x27].d = 0
*(arg1 + 0x13c) = 0
return arg1
