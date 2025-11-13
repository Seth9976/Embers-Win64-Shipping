// 函数: sub_142b74060
// 地址: 0x142b74060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
*arg1 = arg2
arg1[1] = arg2
arg1[2] = arg2
arg1[3] = -1
arg1[4].b = 0
arg1[5] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[6].w = 2
arg1[0xd].d = arg3
struct icu_64::UObject::icu_64::UVector32::VTable** rdi = nullptr
*(arg1 + 0x6c) = 0
arg1[0xe] = 0

if (*arg4 s<= 0)
    struct icu_64::UObject::icu_64::UVector32::VTable** rax_1 = j_sub_142a7dd00(0x20)
    struct icu_64::UObject::icu_64::UVector32::VTable** arg_20 = rax_1
    
    if (rax_1 != 0)
        rdi = sub_142ae7bc0(rax_1, arg4)
    
    arg1[0xe] = rdi
    
    if (rdi == 0)
        *arg4 = 7

return arg1
