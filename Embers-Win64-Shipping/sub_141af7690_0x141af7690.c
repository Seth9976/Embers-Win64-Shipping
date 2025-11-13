// 函数: sub_141af7690
// 地址: 0x141af7690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143036ee0
arg1[1] = *(arg2 + 8)
arg1[2] = 0
int64_t rbp = sx.q(*(arg2 + 0x18))
int64_t r14 = *(arg2 + 0x10)
arg1[3].d = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&arg1[2], rbp.d, 0)
    memcpy(arg1[2], r14, (rbp << 2).d)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
sub_141aedc00(&arg1[4], *(arg2 + 0x20), *(arg2 + 0x28), 0, 0)
sub_141af77a0(&arg1[6], arg2 + 0x30)
void* rcx_4 = &arg1[0x10]
__builtin_memset(&arg1[0xc], 0, 0x20)
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_1 = *(rcx_4 + 0x10)

if (rax_1 != 0)
    rcx_4 = rax_1

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
arg1[0x16] = 0
arg1[0x17].d = 0
return arg1
