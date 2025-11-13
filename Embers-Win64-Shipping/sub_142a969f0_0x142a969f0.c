// 函数: sub_142a969f0
// 地址: 0x142a969f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x1d8)

if (rcx != 0)
    return sub_1409103f0(rcx) __tailcall

if (data_144015ca8 != 2 && sub_142a85f00(&data_144015ca8) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 = j_sub_142a7dd00(0x40)
    
    if (rax_3 != 0)
        *rax_3 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        rax_3[1].w = 2
    
    data_144015c98 = rax_3
    sub_142a7db20(3, sub_142a97970)
    sub_142a85e80(&data_144015ca8)

return data_144015c98
