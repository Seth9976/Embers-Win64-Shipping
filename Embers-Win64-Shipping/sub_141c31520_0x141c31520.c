// 函数: sub_141c31520
// 地址: 0x141c31520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143205178
int32_t* rdi = nullptr
arg1[1].d = 1 << arg2.b
*(arg1 + 0xc) = arg2
__builtin_memset(&arg1[2], 0, 0x90)
int32_t* rax_1 = j_sub_140a82f30(0x50)

if (rax_1 != 0)
    rdi = sub_141c31380(rax_1, arg2 - 1)

arg1[0x14] = rdi
int32_t r8_1 = arg1[1].d + arg1[3].d
arg1[3].d = r8_1

if (r8_1 s> *(arg1 + 0x1c))
    sub_140775270(&arg1[2])

sub_141c3baa0(arg1)
return arg1
