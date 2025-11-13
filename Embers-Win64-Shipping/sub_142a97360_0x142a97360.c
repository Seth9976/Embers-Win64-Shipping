// 函数: sub_142a97360
// 地址: 0x142a97360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
struct icu_64::LanguageBreakFactory::icu_64::ICULanguageBreakFactory::VTable** rbx = nullptr
int32_t arg_8 = 0
struct icu_64::UObject::icu_64::UVector::VTable** rax = j_sub_142a7dd00(0x28)
struct icu_64::UObject::icu_64::UVector::VTable** arg_10 = rax
struct icu_64::UVector::icu_64::UStack::VTable** rax_1

if (rax == 0)
    rax_1 = nullptr
else
    rax_1 = sub_142b10230(rax, sub_140a4f210, 0, &arg_8)

data_144015c90 = rax_1

if (rax_1 != 0 && arg_8 s<= 0)
    struct icu_64::UObject::icu_64::UVector::VTable** rax_2 = j_sub_142a7dd00(0x10)
    arg_10 = rax_2
    
    if (rax_2 != 0)
        rbx = sub_142b0e160(rax_2)
    
    sub_142ae7110(data_144015c90, rbx, &arg_8)

return sub_142a7db20(3, sub_142a97970)
