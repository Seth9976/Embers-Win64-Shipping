// 函数: sub_142a74750
// 地址: 0x142a74750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &icu_64::RegexMatcher::`vftable'{for `icu_64::UObject'}
int64_t* rcx = arg1[0x16]

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t rcx_1 = arg1[0x18]

if (rcx_1 != &arg1[0x19])
    sub_142a7dcd0(rcx_1)
    arg1[0x18] = 0

struct icu_64::UObject::icu_64::RegexPattern::VTable** rdi = arg1[2]

if (rdi != 0)
    sub_142a738b0(rdi)
    sub_142a47920(rdi)
    arg1[2] = 0
    arg1[1] = 0

int64_t* rcx_4 = arg1[3]

if (rcx_4 != 0)
    (**rcx_4)(rcx_4, 1)

int32_t* rcx_5 = arg1[4]

if (rcx_5 != 0)
    sub_142aea470(rcx_5)

int32_t* rcx_6 = arg1[5]

if (rcx_6 != 0)
    sub_142aea470(rcx_6)

int64_t* rcx_7 = arg1[0x28]

if (rcx_7 != 0)
    (**rcx_7)(rcx_7, 1)

return sub_142a47900(arg1) __tailcall
