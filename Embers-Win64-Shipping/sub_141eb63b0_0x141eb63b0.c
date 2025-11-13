// 函数: sub_141eb63b0
// 地址: 0x141eb63b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141fd7160(arg1, arg2)
int64_t* rcx = &arg1[0x13]
*arg1 = &data_14325a2e8
__builtin_memset(&arg1[7], 0, 0x60)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x1d]
*(arg1 + 0xbc) = 0
arg1[0x17].d = 0xffffffff
arg1[0x19] = 0
arg1[0x1a].d = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
*(arg1 + 0x10c) = 0
arg1[0x21].d = 0xffffffff
arg1[0x23] = 0
arg1[0x24].d = 0
__builtin_memset(&arg1[0x25], 0, 0x30)
int64_t arg_8
sub_140b58260(&arg_8, u"Collision", 1)
arg1[6] = arg_8
return arg1
