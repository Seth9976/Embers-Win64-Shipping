// 函数: sub_141820bf0
// 地址: 0x141820bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0xffffffff
arg1[1].b = 0
arg1[2] = 0xffffffff
__builtin_memset(&arg1[4], 0, 0x50)
void* rcx = &arg1[0x18]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x20] = 0xffffffff
arg1[0x21] = 0
*(arg1 + 0x90) = 0
arg1[0x26] = 0
__builtin_memset(&arg1[0x28], 0, 0x30)
void var_18
sub_140b214c0(&var_18)
sub_140aef380(&arg1[0x34], &var_18, 0x10)
sub_140a306e0(&arg1[0x34], &data_142e5c1c0, &data_142d404b0, 0)
sub_140a306e0(&arg1[0x34], &data_142d5a024, &data_142d99650, 0)
sub_140a306e0(&arg1[0x34], &data_142e1462c, &data_142d40450, 0)
return arg1
