// 函数: sub_142b46aa0
// 地址: 0x142b46aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::numparse::impl::NumberParseMatcher::icu_64::numparse::impl::DecimalMatcher::VTable** 
    arg_8 = arg1
int64_t var_88 = -2
*arg1 = &icu_64::numparse::impl::DecimalMatcher::`vftable'{for `icu_64::numparse::impl::NumberParseMatcher'}
arg1[2] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[3].w = 2
arg1[0xa] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[0xb].w = 2
int32_t i = 0
__builtin_memset(&arg1[0x16], 0, 0x18)
void* rdx_1

if ((arg4.b & 2) == 0)
    sub_142a48100(&arg1[2], arg2 + 0x48)
    rdx_1 = arg2 + 8
else
    sub_142a48100(&arg1[2], arg2 + 0x448)
    rdx_1 = arg2 + 0x288

sub_142a48100(&arg1[0xa], rdx_1)
uint8_t r12_1 = (arg4 u>> 2).b & 1
int32_t rcx_2
rcx_2.b = r12_1 != 0
arg1[0x12] = sub_142b2ca60(rcx_2 + 9)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_80
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 =
    sub_142a479b0(&var_80, &arg1[0xa])
int32_t r8 = 4

if (r12_1 != 0)
    r8 = 6

int32_t rdx_4 = 3

if (r12_1 != 0)
    rdx_4 = 5

int32_t rax_4 = sub_142b2c750(rax_3, rdx_4, r8)
int64_t* arg_10
int32_t rcx_11
void* rax_8

if (rax_4 s>= 0)
    rax_8, rcx_11 = sub_142b2ca60(rax_4)
    arg1[0x13] = rax_8
else if ((arg1[0xb].w & 0xffe0) == 0)
    rax_8, rcx_11 = sub_142b2ca60(0)
    arg1[0x13] = rax_8
else
    int64_t* rax_5 = j_sub_142a7dd00(0xc8)
    arg_10 = rax_5
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rbx_1
    
    if (rax_5 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = sub_142a9db60(rax_5)
    
    sub_142a9e7d0(rbx_1, sub_142a486d0(&arg1[0xa], 0))
    rcx_11 = sub_142a9f940(rbx_1)
    arg1[0x13] = rbx_1
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** r14_1 = arg1[0x16]
    
    if (r14_1 != 0)
        sub_142a9dbc0(r14_1)
        rcx_11 = sub_142a47920(r14_1)
    
    arg1[0x16] = rbx_1

if (rax_4 s< 0)
    int64_t* rax_11 = j_sub_142a7dd00(0xc8)
    arg_10 = rax_11
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rbx_2
    
    if (rax_11 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = sub_142a9db60(rax_11)
    
    sub_142a9ebe0(rbx_2, arg1[0x12])
    sub_142a9ebe0(rbx_2, arg1[0x13])
    sub_142a9f940(rbx_2)
    arg1[0x14] = rbx_2
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** r14_2 = arg1[0x17]
    
    if (r14_2 != 0)
        sub_142a9dbc0(r14_2)
        sub_142a47920(r14_2)
    
    arg1[0x17] = rbx_2
    arg1[0x15] = 0
else
    arg1[0x14] = arg1[0x12]
    arg1[0x15] = sub_142b2ca60(sbb.d(rcx_11, rcx_11, r12_1 != 0) + 0x17)

int32_t rbx_3 = *(arg2 + 0x748)

if (rbx_3 == 0xffffffff)
label_142b46d03:
    int64_t* rax_15 = j_sub_142a7dd00(0x288)
    arg_10 = rax_15
    void* rbx_4
    
    if (rax_15 == 0)
        rbx_4 = nullptr
    else
        *rax_15 = 0xa
        rbx_4 = &rax_15[1]
        int64_t (* var_98_1)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg1) =
            sub_142a47ff0
        `eh vector constructor iterator'(rbx_4, 0x40, 0xa)
    
    int64_t* rcx_25 = arg1[0x18]
    
    if (rcx_25 != 0)
        if (rcx_25[-1] == 0)
            j_sub_140a74f90(&rcx_25[-1])
        else
            (**rcx_25)(rcx_25, 3)
    
    arg1[0x18] = rbx_4
    void* r14_5 = arg2 - rbx_4 + 0x448
    
    do
        void* rdx_9 = arg2 + 0x108
        
        if (i - 1 u<= 8)
            rdx_9 = r14_5 + rbx_4
        
        sub_142a48100(rbx_4, rdx_9)
        i += 1
        rbx_4 += 0x40
    while (i s<= 9)
else
    if (sub_142a54580(rbx_3) == 0)
        goto label_142b46d03
    
    if (sub_142a53ea0(rbx_3, 0xa) != 0)
        goto label_142b46d03

arg1[1].b = (arg4 u>> 3).b & 1
*(arg1 + 9) = (arg4 u>> 5).b & 1
*(arg1 + 0xa) = (arg4 u>> 4).b & 1
*(arg1 + 0xc) = sub_142b3c0b0(arg3)
*(arg1 + 0xe) = sub_142b3c0c0(arg3)
return arg1
