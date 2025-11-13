// 函数: sub_142aeb4b0
// 地址: 0x142aeb4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::RegexCompile::VTable** arg_8 = arg1
int64_t var_18 = -2
*arg1 = &icu_64::RegexCompile::`vftable'
arg1[0x26] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[0x27].w = 2
sub_142ae7bc0(&arg1[0x2f], arg3)
sub_142b10200(&arg1[0x36], arg3)
sub_142b10200(&arg1[0x3b], arg3)
sub_142af38e0(arg3)
arg1[1] = arg3
arg1[2] = arg2
arg1[4] = 0
arg1[8] = -1
arg1[6] = 1
arg1[7] = 0
arg1[5].w = 0
*(arg1 + 0x124) = *(arg2 + 0x18) | 0x80000000
*(arg1 + 0x2a) = 1
arg1[0x33] = -1
arg1[0x41] = 0
arg1[0x40].d = 0xffffffff

if (*arg3 s<= 0)
    int32_t rax_2 = *(arg2 + 0x78)
    
    if (rax_2 s> 0)
        *arg3 = rax_2

return arg1
