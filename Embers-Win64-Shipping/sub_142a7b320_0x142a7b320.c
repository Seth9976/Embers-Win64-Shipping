// 函数: sub_142a7b320
// 地址: 0x142a7b320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) != 0)
    return *(arg1 + 0x18)

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result = nullptr
int32_t arg_8 = 0
void* rcx = *(arg1 + 0x20)
int32_t rsi_1

if (*(*(rcx + 0x38) + 0x48) != 0)
    rsi_1 = sub_142aea690(rcx, 0, *(arg1 + 0x30), 0, 0, &arg_8, -2)
    arg_8 = 0
else
    rsi_1 = *(arg1 + 0x30)

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 = j_sub_142a7dd00(0x40)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_10 = rax_2

if (rax_2 != 0)
    result = sub_142a47bf0(rax_2, rsi_1, 0, 0)

void* rax_4 = sub_142a4a0b0(result, rsi_1)
sub_142aea690(*(arg1 + 0x20), 0, *(arg1 + 0x30), rax_4, rsi_1, &arg_8, -2)
sub_142a4a600(result, rsi_1)
*(arg1 + 0x18) = result
return result
