// 函数: sub_142a5e160
// 地址: 0x142a5e160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2

if (*(arg1 + 0x170) == 0)
    return 

struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_1 = j_sub_142a7dd00(0xb00)
struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** arg_8 = rax_1
struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rbp_1

if (rax_1 == 0)
    rbp_1 = nullptr
else
    rbp_1 = sub_142aabc60(rax_1, arg2)

struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rbx_1 = rbp_1
int32_t rax = 0

if (rbp_1 == 0)
    rax = 7

int64_t* rsi_1 = *(arg1 + 0x170)

if (rax == 0)
    rbx_1 = nullptr
    int64_t arg_18 = 0
    int64_t* rcx_3 = rsi_1[1]
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)
    
    rsi_1[1] = rbp_1
    arg_8.d = 0
    sub_142a5f4f0(arg1, &arg_8)
else
    if (rsi_1 != 0)
        sub_142a5b340(rsi_1)
        sub_142a47920(rsi_1)
    
    *(arg1 + 0x170) = 0

if (rbx_1 != 0)
    (*rbx_1)->__offset(0x0).q(rbx_1, 1)
