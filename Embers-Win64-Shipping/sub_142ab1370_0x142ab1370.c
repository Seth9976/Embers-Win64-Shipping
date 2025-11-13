// 函数: sub_142ab1370
// 地址: 0x142ab1370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
sub_142a57fd0(arg1, arg2)
*(arg1 + 0x170) = *(arg2 + 0x170)
sub_142a45c20(arg1 + 0x178, arg2 + 0x178)
*(arg1 + 0x258) = *(arg2 + 0x258)
*(arg1 + 0x268) = *(arg2 + 0x268)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3
void* rdi

if (*(arg2 + 0x270) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_4 = j_sub_142a7dd00(0x40)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_8 = rax_4
    rdi = nullptr
    
    if (rax_4 == 0)
        rax_3 = nullptr
    else
        rax_3 = sub_142a479b0(rax_4, *(arg2 + 0x270))
else
    rdi = nullptr
    rax_3 = nullptr

*(arg1 + 0x270) = rax_3

if (rax_3 != 0)
    rdi = sub_142a4a210(rax_3)

void* rsi_1 = *(arg1 + 0x260)

if (*(arg1 + 0x170) == 0)
    if (rsi_1 != 0)
        sub_142a7dcd0(*(rsi_1 + 0x18))
        sub_142a7dcd0(*(rsi_1 + 0x10))
    
    sub_142ab1c40(*(arg1 + 0x260), rdi)
else
    if (rsi_1 != 0)
        sub_142a7dcd0(*(rsi_1 + 0x28))
        sub_142a7dcd0(*(rsi_1 + 0x18))
        sub_142a7dcd0(*(rsi_1 + 0x10))
    
    sub_142ab1ac0(*(arg1 + 0x260), rdi)

return arg1
