// 函数: sub_142abd3a0
// 地址: 0x142abd3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 9) = *(arg2 + 9)
*(arg1 + 0xa) = *(arg2 + 0xa)
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0xe) = *(arg2 + 0xe)
sub_142a48050(arg1 + 0x10, arg2 + 0x10)
sub_142a48050(arg1 + 0x50, arg2 + 0x50)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0xa0) = *(arg2 + 0xa0)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rsi = *(arg1 + 0xb0)

if (rsi != 0)
    sub_142a9dbc0(rsi)
    sub_142a47920(rsi)

*(arg1 + 0xb0) = *(arg2 + 0xb0)
*(arg2 + 0xb0) = 0
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rsi_1 = *(arg1 + 0xb8)

if (rsi_1 != 0)
    sub_142a9dbc0(rsi_1)
    sub_142a47920(rsi_1)

*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg2 + 0xb8) = 0
int64_t* rcx_6 = *(arg1 + 0xc0)

if (rcx_6 != 0)
    if (rcx_6[-1] == 0)
        j_sub_140a74f90(&rcx_6[-1])
    else
        (**rcx_6)(rcx_6, 3)

*(arg1 + 0xc0) = *(arg2 + 0xc0)
*(arg2 + 0xc0) = 0
return arg1
