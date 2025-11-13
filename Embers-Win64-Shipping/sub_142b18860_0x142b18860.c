// 函数: sub_142b18860
// 地址: 0x142b18860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) != 0 || *(arg1 + 8) == 0xffffffff)
    return *(arg1 + 0x10)

if (*(arg1 + 0x38) == 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_1 = j_sub_142a7dd00(0x40)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_8 = rax_1
    
    if (rax_1 != 0)
        *rax_1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        rax_1[1].w = 2
    
    *(arg1 + 0x38) = rax_1

void* rdi = *(arg1 + 0x38)

if (rdi != 0)
    int32_t rsi_1 = *(arg1 + 8)
    sub_142a4afe0(rdi)
    int16_t rax_2 = *(rdi + 8)
    int32_t r8_2
    
    if (rax_2 s< 0)
        r8_2 = *(rdi + 0xc)
    else
        r8_2 = sx.d(rax_2) s>> 5
    
    sub_142a4a6b0(rdi, 0, r8_2, rsi_1)

int64_t result = *(arg1 + 0x38)
*(arg1 + 0x10) = result
return result
