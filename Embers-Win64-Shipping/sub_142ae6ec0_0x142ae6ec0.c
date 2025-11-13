// 函数: sub_142ae6ec0
// 地址: 0x142ae6ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::UVector::`vftable'{for `icu_64::UObject'}
int32_t rdi = arg4
arg1[3] = arg2
arg1[1] = 0
arg1[2] = 0
arg1[4] = arg3

if (*arg5 s> 0)
    return arg1

if (arg4 - 1 u> 0xffffffe)
    rdi = 8

int64_t rax_1 = sub_142a7dd00(sx.q(rdi) << 3)
arg1[2] = rax_1

if (rax_1 != 0)
    *(arg1 + 0xc) = rdi
    return arg1

*arg5 = 7
return arg1
