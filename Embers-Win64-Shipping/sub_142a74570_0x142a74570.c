// 函数: sub_142a74570
// 地址: 0x142a74570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx != 0)
    (**rcx)(rcx, 1)

void* rax_2 = *(arg1 + 0x68)
int32_t i = 1
*(arg1 + 0x20) = 0

if (*(rax_2 + 8) s> 1)
    do
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_3 =
            sub_142ae72d0(*(arg1 + 0x68), i)
        
        if (rax_3 != 0)
            sub_142a9dbc0(rax_3)
            sub_142a47920(rax_3)
        
        i += 1
    while (i s< *(*(arg1 + 0x68) + 8))

int64_t* rcx_4 = *(arg1 + 0x68)

if (rcx_4 != 0)
    (**rcx_4)(rcx_4, 1)

int64_t rcx_5 = *(arg1 + 0x70)
*(arg1 + 0x68) = 0
sub_142a47920(rcx_5)
int64_t* rcx_6 = *(arg1 + 0x88)
*(arg1 + 0x70) = 0

if (rcx_6 != 0)
    (**rcx_6)(rcx_6, 1)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rdi = *(arg1 + 0xb0)
*(arg1 + 0x88) = 0

if (rdi != 0)
    sub_142a9dbc0(rdi)
    sub_142a47920(rdi)

int64_t rcx_9 = *(arg1 + 0xc0)
*(arg1 + 0xb0) = 0
sub_142a47920(rcx_9)
int32_t* rcx_10 = *(arg1 + 8)
*(arg1 + 0xc0) = 0

if (rcx_10 != 0)
    sub_142aea470(rcx_10)
    *(arg1 + 8) = 0

int64_t* rcx_11 = *(arg1 + 0x10)

if (rcx_11 != 0)
    (**rcx_11)(rcx_11, 1)
    *(arg1 + 0x10) = 0

int64_t result = sub_142a869e0(*(arg1 + 0xd0))
*(arg1 + 0xd0) = 0
return result
