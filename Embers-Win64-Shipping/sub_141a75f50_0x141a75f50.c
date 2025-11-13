// 函数: sub_141a75f50
// 地址: 0x141a75f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143036ee0
__builtin_memset(&arg1[1], 0, 0x28)
sub_141a75ff0(&arg1[6])
__builtin_memset(&arg1[0xc], 0, 0x20)
void* rcx_1 = &arg1[0x10]
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
arg1[0x16] = 0
arg1[0x17].d = 0
return arg1
