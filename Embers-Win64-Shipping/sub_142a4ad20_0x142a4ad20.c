// 函数: sub_142a4ad20
// 地址: 0x142a4ad20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rcx = *(arg1 + 8)
int32_t var_18 = 0
int32_t rax_1

if (rcx s< 0)
    rax_1 = *(arg1 + 0xc)
else
    rax_1 = sx.d(rcx) s>> 5

if (arg3 s< 0)
    arg3 = 0
else if (arg3 s> rax_1)
    arg3 = rax_1

if (arg4 s>= 0)
    int32_t rax_2 = rax_1 - arg3
    
    if (arg4 s> rax_2)
        arg4 = rax_2
else
    arg4 = 0

void* rcx_1

if ((rcx.b & 0x11) == 0)
    rcx_1 = arg1 + 0xa
    
    if ((rcx.b & 2) == 0)
        rcx_1 = *(arg1 + 0x18)

if ((rcx.b & 0x11) != 0 || rcx_1 == 0)
    rcx_1 = arg1 + 0xa
    arg4 = -2

void* rax_4 = rcx_1 + (sx.q(arg3) << 1)
*arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg2[1].w = 8

if (rax_4 == 0)
    arg2[1].w = 2
    return arg2

if (arg4 s< 0)
    arg2[3] = 0
    arg2[1].w = 1
    arg2[2].d = 0
    return arg2

if (arg4 s<= 0x3ff)
    arg2[3] = rax_4
    arg2[2].d = arg4
    arg2[1].w = arg4.w << 5 | 8
    return arg2

arg2[3] = rax_4
arg2[1].w = 0xffe8
*(arg2 + 0xc) = arg4
arg2[2].d = arg4
return arg2
