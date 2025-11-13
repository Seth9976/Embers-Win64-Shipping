// 函数: sub_141db5b80
// 地址: 0x141db5b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
*arg1 = &data_14323b400
sub_1423b9d00(&arg1[5])
arg1[5] = &data_14323b370
sub_141ff4110(&arg1[0xc])
void* rcx_2 = &arg1[0x36]
__builtin_memset(&arg1[0x14], 0, 0x34)
arg1[0x1b] = 0
arg1[0x1d] = 0
arg1[0x24] = 0
arg1[0x25] = 0
__builtin_memset(&arg1[0x27], 0, 0x28)
arg1[0x2c].d = 0xffffffff
*(arg1 + 0x164) = 0
__builtin_memset(&arg1[0x2e], 0, 0x40)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x3a].d = 0xffffffff
*(arg1 + 0x1d4) = 0
arg1[0x3c] = 0
arg1[0x3d].d = 0
__builtin_memset(&arg1[0x3e], 0, 0x28)
sub_141dcd930(arg1)
return arg1
