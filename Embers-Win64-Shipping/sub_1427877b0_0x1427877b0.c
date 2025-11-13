// 函数: sub_1427877b0
// 地址: 0x1427877b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1434ab860
arg1[6] = 0
arg1[7] = 0
arg1[8].w = 1
__builtin_wmemcpy(arg1 + 0x44, U"\n\n22\0", 0xa)
*(arg1 + 0x5c) = 0x3f800000
arg1[0xc].d = 0x3dcccccd
*(arg1 + 0x64) = 0x3f800000
arg1[0xd].d = 0x3c
__builtin_memset(&arg1[0xe], 0, 0x11)
__builtin_memset(&arg1[0x11], 0, 0x30)
void*** rax = j_sub_140a82f30(0x350)
void*** rdi

if (rax == 0)
    rdi = nullptr
else
    rdi = sub_141d18060(rax)

arg1[0x18] = rdi
void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rdi

arg1[0x19] = rax_2
void var_18
*(arg1 + 0x98) = *sub_140b214c0(&var_18)
*(arg1 + 0xa8) = *sub_140b214c0(&var_18)
return arg1
