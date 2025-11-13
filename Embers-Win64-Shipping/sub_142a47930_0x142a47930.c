// 函数: sub_142a47930
// 地址: 0x142a47930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t rax = *(arg2 + 8)
arg1[1].w = rax

if ((rax.b & 2) == 0)
    bool cond:0_1 = arg1[1].w s>= 0
    arg1[3] = *(arg2 + 0x18)
    arg1[2].d = *(arg2 + 0x10)
    
    if (not(cond:0_1))
        *(arg1 + 0xc) = *(arg2 + 0xc)
    
    *(arg2 + 8) = 1
    *(arg2 + 0x18) = 0
    *(arg2 + 0x10) = 0
else if (arg1 != arg2)
    memcpy(arg1 + 0xa, arg2 + 0xa, (sx.d(rax) s>> 5) * 2)

return arg1
