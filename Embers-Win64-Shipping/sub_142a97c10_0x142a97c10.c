// 函数: sub_142a97c10
// 地址: 0x142a97c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::BreakIterator::VTable** arg_8 = arg1
int64_t var_18 = -2
struct icu_64::BreakIterator::icu_64::SimpleFilteredSentenceBreakIterator::VTable** result = arg1
sub_142a54d00(arg1, arg2)
*result = &icu_64::SimpleFilteredSentenceBreakIterator::`vftable'{for `icu_64::BreakIterator'}
void* rax = *(arg2 + 0x148)
*(rax + 0x18) += 1
result[0x29] = rax
int64_t* rcx = *(arg2 + 0x150)
result[0x2a] = (*(*rcx + 0x18))(rcx)
result[0x2b] = 0
return result
