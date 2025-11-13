// 函数: sub_142b2dab0
// 地址: 0x142b2dab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rcx = *(arg1 + 0x2a8)

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t* rcx_1 = *(arg1 + 0x2c0)

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t* rcx_2 = *(arg2 + 0x2a8)
int64_t rax_3

if (rcx_2 != 0)
    rax_3 = (*(*rcx_2 + 0x18))(rcx_2)
else
    rax_3 = sub_142a586f0(arg1 + 0x148, &arg_8)

*(arg1 + 0x2a8) = rax_3
void* rcx_4 = *(arg2 + 0x2c0)

if (rcx_4 != 0)
    struct icu_64::UObject::icu_64::PluralRules::VTable** rax_6 = sub_142a6f460(rcx_4)
    *(arg1 + 0x2c0) = rax_6
    return rax_6

struct icu_64::UObject::icu_64::PluralRules::VTable** rax_5 = sub_142a6f8c0(arg1 + 0x148, &arg_8)
*(arg1 + 0x2c0) = rax_5
return rax_5
