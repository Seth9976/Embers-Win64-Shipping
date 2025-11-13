// 函数: sub_142a72250
// 地址: 0x142a72250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::ForwardCharacterIterator::icu_64::CharacterIterator::VTable** arg_8 = arg1
int64_t var_18 = -2
struct icu_64::UCharCharacterIterator::icu_64::StringCharacterIterator::VTable** result = arg1
Concurrency::details::WaitAllBlock::WaitAllBlock(arg1, arg2)
*result = &icu_64::StringCharacterIterator::`vftable'{for `icu_64::UCharCharacterIterator'}
sub_142a479b0(&result[4], arg2 + 0x20)
char rax = (result[5].w).b
void* rax_1

if ((rax & 0x11) == 0)
    rax_1 = result + 0x2a
    
    if ((rax & 2) == 0)
        rax_1 = result[7]
else
    rax_1 = nullptr

result[3] = rax_1
return result
