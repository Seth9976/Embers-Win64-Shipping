// 函数: sub_142a722c0
// 地址: 0x142a722c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::CharacterIterator::icu_64::UCharCharacterIterator::VTable** arg_8 = arg1
int64_t var_28 = -2
int16_t rax = *(arg2 + 8)
void* rbx = nullptr
void* rdx

if ((rax.b & 0x11) != 0)
    rdx = nullptr
else if ((rax.b & 2) == 0)
    rdx = *(arg2 + 0x18)
else
    rdx = arg2 + 0xa

int32_t r8_1

if (rax s< 0)
    r8_1 = *(arg2 + 0xc)
else
    r8_1 = sx.d(rax) s>> 5

sub_142a71790(arg1, rdx, r8_1)
*arg1 = &icu_64::StringCharacterIterator::`vftable'{for `icu_64::UCharCharacterIterator'}
sub_142a479b0(&arg1[4], arg2)
char rax_1 = (arg1[5].w).b

if ((rax_1 & 0x11) == 0)
    rbx = arg1 + 0x2a
    
    if ((rax_1 & 2) == 0)
        rbx = arg1[7]

arg1[3] = rbx
return arg1
