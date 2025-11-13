// 函数: sub_142adf2f0
// 地址: 0x142adf2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::PatternMapIterator::`vftable'
arg1[1].d = 0
__builtin_memset(&arg1[2], 0, 0x18)

if (*arg2 s<= 0)
    struct icu_64::DateTimeMatcher::VTable** rax_1 = j_sub_142a7dd00(0x98)
    struct icu_64::DateTimeMatcher::VTable** arg_8 = rax_1
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        *rax_1 = &icu_64::DateTimeMatcher::`vftable'
        rax_1[1] = &icu_64::PtnSkeleton::`vftable'
        __builtin_memset(&rax_1[0xa], 0, 0x40)
    
    sub_142a58580(&arg1[3], rax_1, arg2)

return arg1
