// 函数: sub_142ae5f40
// 地址: 0x142ae5f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
sub_142a6cd30(arg1, arg2)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx

if (*(arg2 + 0x160) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_1 = j_sub_142a7dd00(0x40)
    arg_8 = rax_1
    rbx = nullptr
    
    if (rax_1 == 0)
        rax = nullptr
    else
        rax = sub_142a479b0(rax_1, *(arg2 + 0x160))
else
    rbx = nullptr
    rax = nullptr

*(arg1 + 0x160) = rax
*(arg1 + 0x168) = *(arg2 + 0x168)
*(arg1 + 0x16c) = *(arg2 + 0x16c)
sub_142a45c20(arg1 + 0x170, arg2 + 0x170)
sub_142a48100(arg1 + 0x250, arg2 + 0x250)
int128_t* rax_4 = sub_142a7dd00(0xac)
*(arg1 + 0x290) = rax_4
int128_t* rcx_3 = *(arg2 + 0x290)
*rax_4 = *rcx_3
rax_4[1] = rcx_3[1]
rax_4[2] = rcx_3[2]
rax_4[3] = rcx_3[3]
rax_4[4] = rcx_3[4]
rax_4[5] = rcx_3[5]
rax_4[6] = rcx_3[6]
rax_4[7] = rcx_3[7]
rax_4[8] = rcx_3[8]
rax_4[9] = rcx_3[9]
rax_4[0xa].q = rcx_3[0xa].q
*(rax_4 + 0xa8) = *(rcx_3 + 0xa8)

if (*(arg2 + 0x298) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_7 = j_sub_142a7dd00(0x40)
    arg_8 = rax_7
    
    if (rax_7 != 0)
        rbx = sub_142a479b0(rax_7, *(arg2 + 0x298))

*(arg1 + 0x298) = rbx
return arg1
