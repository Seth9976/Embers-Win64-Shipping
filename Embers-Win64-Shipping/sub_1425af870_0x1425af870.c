// 函数: sub_1425af870
// 地址: 0x1425af870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
*arg1 = 0
arg1[1].b = 2
*(arg1 + 0xc) = 0xffffffff
arg1[2].b = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x1c) = 0
__builtin_memset(&arg1[5], 0, 0x40)
int64_t rbp = sx.q(arg1[6].d)
int32_t rax = (rbp + 1).d
arg1[6].d = rax

if (rax s> *(arg1 + 0x34))
    sub_1405a4d70(&arg1[5])

*(arg1[5] + (rbp << 3)) = 0
int64_t rbx = sx.q(arg1[0xa].d)
int32_t rax_2 = (rbx + 1).d
arg1[0xa].d = rax_2

if (rax_2 s> *(arg1 + 0x54))
    sub_140679a80(&arg1[9])

*(rbx + arg1[9]) = 1
return arg1
