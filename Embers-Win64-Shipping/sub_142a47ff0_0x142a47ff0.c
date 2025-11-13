// 函数: sub_142a47ff0
// 地址: 0x142a47ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (arg1[1].b & 4) == 0
*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}

if (not(cond:0))
    void* rdx_1 = arg1[3]
    int32_t rax_1 = *(rdx_1 - 4)
    *(rdx_1 - 4) -= 1
    
    if (rax_1 == 1)
        sub_142a7dcd0(arg1[3] - 4)

*arg1 = &icu_64::Replaceable::`vftable'{for `icu_64::UObject'}
return sub_142a47900(arg1) __tailcall
