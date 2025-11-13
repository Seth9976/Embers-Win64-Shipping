// 函数: sub_142a9de00
// 地址: 0x142a9de00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (*(arg1 + 0x28) != 0 || *(arg1 + 0x58) != 0 || (*(arg1 + 0x20) & 1) != 0)
    return 

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdi_1 = nullptr
int32_t arg_8 = 0
char rax_1

if (*(arg1 + 0x50) == 0)
    rax_1 = sub_142a9ecb0(arg1, &arg_8)

if (*(arg1 + 0x50) != 0 || rax_1 != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 = j_sub_142a7dd00(0x40)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_18 = rax_2
    
    if (rax_2 != 0)
        rdi_1 = sub_142a479b0(rax_2, arg2)

if ((*(arg1 + 0x50) == 0 && rax_1 == 0) || rdi_1 == 0)
    sub_142aa0650(arg1)
    return 

j_sub_142ae7a10(*(arg1 + 0x50), rdi_1, Concurrency::Scheduler::ResetDefaultSchedulerPolicy, &arg_8)

if (arg_8 s> 0)
    sub_142aa0650(arg1)
    (*rdi_1)->__offset(0x0).q(rdi_1, 1)
