// 函数: sub_142b74a00
// 地址: 0x142b74a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::MessagePattern::VTable** arg_8 = arg1
int64_t var_18 = -2
*arg1 = &icu_64::MessagePattern::`vftable'{for `icu_64::UObject'}
arg1[1].d = *(arg2 + 8)
sub_142a479b0(&arg1[2], arg2 + 0x10)
__builtin_memset(&arg1[0xa], 0, 0x14)
__builtin_memset(&arg1[0xd], 0, 0x14)
*(arg1 + 0x7c) = *(arg2 + 0x7c)
*(arg1 + 0x7d) = *(arg2 + 0x7d)
*(arg1 + 0x7e) = *(arg2 + 0x7e)
arg_8.d = 0

if (sub_142b750f0(arg1, arg2, &arg_8) == 0)
    if ((arg1[3].b & 1) == 0)
        arg1[3].w &= 0x1f
    else
        arg1[3].w = 2
    
    *(arg1 + 0x7c) = 0
    *(arg1 + 0x7e) = 0
    arg1[0xc].d = 0
    arg1[0xf].d = 0

return arg1
