// 函数: sub_14094a040
// 地址: 0x14094a040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14215cf50(arg1, arg2)
*arg1 = &data_142e27440
__builtin_memset(&arg1[6], 0, 0x20)
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xb] = 0
void*** rax = j_sub_140a82f30(0x30)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    __builtin_memset(&rax[1], 0, 0x28)
    *rbx = &data_142e27420

arg1[0xf] = rbx
void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

arg1[0x10] = rax_1
return arg1
