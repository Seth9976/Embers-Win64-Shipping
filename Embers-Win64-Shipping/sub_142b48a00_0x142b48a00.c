// 函数: sub_142b48a00
// 地址: 0x142b48a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[4]

if (*arg1 == r8)
    int32_t rdx = 2
    
    if (r8 == 8)
        rdx = 4
    
    int64_t rax_1 = sub_142a5da90(&arg1[2], rdx * r8, r8)
    
    if (rax_1 == 0)
        return rax_1

struct icu_64::numparse::impl::NumberParseMatcher::icu_64::numparse::impl::CodePointMatcher::VTable*
    * rax_2 = j_sub_142a7dd00(0x10)
struct icu_64::numparse::impl::NumberParseMatcher::icu_64::numparse::impl::CodePointMatcher::VTable*
    * arg_8 = rax_2
struct icu_64::numparse::impl::NumberParseMatcher::icu_64::numparse::impl::CodePointMatcher::VTable*
    * r8_1 = rax_2

if (rax_2 == 0)
    r8_1 = nullptr
else
    int32_t rax_3 = *arg2
    *r8_1 = &icu_64::numparse::impl::CodePointMatcher::`vftable'{for `icu_64::numparse::impl::NumberParseMatcher'}
    r8_1[1].d = rax_3

int64_t rcx_1 = sx.q(*arg1)
*arg1 = rcx_1.d + 1
*(*(arg1 + 8) + (rcx_1 << 3)) = r8_1
return r8_1
