// 函数: sub_1413bee70
// 地址: 0x1413bee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
*arg1 = rax

if (rax != 0)
    *(rax + 8) += 1

arg1[1].d = arg3
__builtin_memset(&arg1[2], 0, 0x1c)
__builtin_memset(&arg1[6], 0, 0xa0)
int64_t rbp = sx.q(arg1[1].d)
int64_t r14 = sx.q(arg1[3].d)
int32_t rax_1 = (r14 + rbp).d
arg1[3].d = rax_1

if (rax_1 s> *(arg1 + 0x1c))
    sub_1406105e0(&arg1[2])

memset(arg1[2] + (r14 << 2), 0, rbp << 2)
sub_1405d1550(arg2)
return arg1
