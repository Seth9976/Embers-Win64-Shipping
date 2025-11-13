// 函数: sub_1418cf390
// 地址: 0x1418cf390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int32_t* rdi = nullptr
__builtin_memset(&arg1[1], 0, 0x1c)
int32_t* rax = j_sub_140a82f30(0xc8)

if (rax != 0)
    rdi = sub_1418cdcd0(rax, *arg1, 0x80)

int64_t rbp = sx.q(arg1[2].d)
int32_t rax_2 = (rbp + 1).d
arg1[2].d = rax_2

if (rax_2 s> *(arg1 + 0x14))
    sub_1405a4d70(&arg1[1])

*(arg1[1] + (rbp << 3)) = rdi
return arg1
