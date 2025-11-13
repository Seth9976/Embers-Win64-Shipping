// 函数: sub_142b130e0
// 地址: 0x142b130e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::SharedObject::icu_64::CollationTailoring::VTable** arg_8 = arg1
int64_t var_28 = -2
__builtin_memset(&arg1[1], 0, 0x18)
*arg1 = &icu_64::CollationTailoring::`vftable'{for `icu_64::SharedObject'}
arg1[4] = arg2
arg1[5] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[6].w = 2
sub_142a45710(&arg1[0xd], &data_1434cce10, nullptr, nullptr, nullptr)
__builtin_memset(&arg1[0x2a], 0, 0x38)

if (arg2 == 0)
    struct icu_64::SharedObject::icu_64::CollationSettings::VTable** rax_1 = j_sub_142a7dd00(0x358)
    struct icu_64::SharedObject::icu_64::CollationSettings::VTable** arg_10 = rax_1
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        rax_1[1] = 0
        rax_1[2] = 0
        *rax_1 = &icu_64::CollationSettings::`vftable'{for `icu_64::SharedObject'}
        rax_1[3] = 0x2010
        rax_1[4] = 0
        rax_1[5].d = 0
        rax_1[6] = 0
        rax_1[7].d = 0
        rax_1[8] = 0
        rax_1[9] = 0
        rax_1[0xa].d = 0xffffffff
    
    arg1[4] = rax_1

void* rcx_1 = arg1[4]

if (rcx_1 != 0)
    sub_142aa6d40(rcx_1)

sub_142a4a210(&arg1[5])
arg1[0x29].d = 0
arg1[0x31].d = 0
return arg1
