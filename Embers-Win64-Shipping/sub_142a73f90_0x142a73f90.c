// 函数: sub_142a73f90
// 地址: 0x142a73f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0

if ((*(arg1 + 0x30) & 1) == 0)
    *(arg1 + 0x30) &= 0x1f
else
    *(arg1 + 0x30) = 2

__builtin_memset(arg1 + 0x68, 0, 0x44)
*(arg1 + 0xb0) = 0
*(arg1 + 0xb8) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = 0
*(arg1 + 0xd0) = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
struct icu_64::UObject::icu_64::UVector64::VTable** rax = j_sub_142a7dd00(0x20)
struct icu_64::UObject::icu_64::UVector64::VTable** arg_8 = rax
struct icu_64::UObject::icu_64::UVector64::VTable** rax_1

if (rax == 0)
    rax_1 = nullptr
else
    rax_1 = sub_142aeb0c0(rax, arg1 + 0x78)

*(arg1 + 0x20) = rax_1
struct icu_64::UObject::icu_64::UVector64::VTable** rax_2 = j_sub_142a7dd00(0x20)
arg_8 = rax_2
struct icu_64::UObject::icu_64::UVector32::VTable** rax_3

if (rax_2 == 0)
    rax_3 = nullptr
else
    rax_3 = sub_142ae7bc0(rax_2, arg1 + 0x78)

*(arg1 + 0x88) = rax_3
struct icu_64::UObject::icu_64::UVector64::VTable** rax_4 = j_sub_142a7dd00(0x28)
arg_8 = rax_4
struct icu_64::UObject::icu_64::UVector::VTable** rax_5

if (rax_4 == 0)
    rax_5 = nullptr
else
    rax_5 = sub_142ae6d20(rax_4, arg1 + 0x78)

*(arg1 + 0x68) = rax_5
struct icu_64::UObject::icu_64::UVector64::VTable** rax_6 = j_sub_142a7dd00(0xc8)
arg_8 = rax_6
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_7

if (rax_6 == 0)
    rax_7 = nullptr
else
    rax_7 = sub_142a9db60(rax_6)

*(arg1 + 0xb0) = rax_7
struct icu_64::UObject::icu_64::UVector64::VTable** rax_8 = j_sub_142a7dd00(0x20)
arg_8 = rax_8

if (rax_8 == 0)
    rax_8 = nullptr
else
    __builtin_memset(rax_8, 0, 0x20)

*(arg1 + 0xc0) = rax_8
int64_t* result = sub_142a86f30(sub_142a4b0a0, sub_142a4b070, sub_142a86b90, arg1 + 0x78)
*(arg1 + 0xd0) = result

if (*(arg1 + 0x78) s<= 0)
    if (*(arg1 + 0x20) != 0 && *(arg1 + 0x88) != 0)
        void* rcx_4 = *(arg1 + 0x68)
        
        if (rcx_4 != 0 && *(arg1 + 0xb0) != 0 && *(arg1 + 0xc0) != 0 && result != 0)
            sub_142ae70c0(rcx_4, 0, arg1 + 0x78)
            return std::ios_base::precision(*(arg1 + 0xd0), sub_140a4f210)
    
    *(arg1 + 0x78) = 7

return result
