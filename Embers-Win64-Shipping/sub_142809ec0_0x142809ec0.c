// 函数: sub_142809ec0
// 地址: 0x142809ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)

if (arg2 u> (*(arg1 + 0x14) & 0x7fffffff))
    sub_142809ba0(arg1, rdi.d)

int64_t r8_1 = rdi + arg1[1]
char* i = zx.q(arg1[2].d) + arg1[1]

if (*arg3 != 0)
    for (; i u< r8_1; i = &i[1])
        if (i != 0)
            *i = *arg3
else if (r8_1 u> i)
    int64_t rax_3 = memset(i, 0, zx.q(r8_1.d - i.d))
    arg1[2].d = rdi.d
    return rax_3

arg1[2].d = rdi.d
return i
