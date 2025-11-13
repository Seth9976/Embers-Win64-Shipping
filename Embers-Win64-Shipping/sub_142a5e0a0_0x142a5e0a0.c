// 函数: sub_142a5e0a0
// 地址: 0x142a5e0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x170)

if (rbx == 0)
    return 

void* rbx_1 = *rbx
void* rcx = *(rbx_1 + 0x30)

if (rcx != 0)
    sub_142ab9ac0(rcx, arg2)
else
    struct icu_64::UObject::icu_64::CurrencyPluralInfo::VTable** rax_1 = sub_142ab9c10(arg2)
    int64_t* rcx_2 = *(rbx_1 + 0x30)
    
    if (rcx_2 != 0)
        int64_t r8_1 = *rcx_2
        (*r8_1)(rcx_2, 1, r8_1)
    
    *(rbx_1 + 0x30) = rax_1

int32_t arg_8 = 0
sub_142a5f4f0(arg1, &arg_8)
