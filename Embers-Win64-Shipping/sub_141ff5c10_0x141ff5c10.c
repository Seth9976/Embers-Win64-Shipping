// 函数: sub_141ff5c10
// 地址: 0x141ff5c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_143298840
arg1[5] = &data_143298aa0
__builtin_memset(&arg1[7], 0, 0x20)
sub_141ff3c60(&arg1[0xe])
arg1[0x25] = 0
void* rcx_1 = &arg1[0x32]
arg1[0x26] = 0
__builtin_memset(&arg1[0x28], 0, 0x28)
__builtin_memset(&arg1[0x2e], 0, 0x20)
arg1[0x2d].d = 0x3f800000
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x36].d = 0xffffffff
*(arg1 + 0x1b4) = 0
arg1[0x38] = 0
arg1[0x39].d = 0
arg1[0x27].d = 0x3f800000
*(arg1 + 0x13c) = 9
return arg1
