// 函数: sub_142acf050
// 地址: 0x142acf050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
struct icu_64::UObject::icu_64::UVector::VTable** rax = j_sub_142a7dd00(0x28)
struct icu_64::UObject::icu_64::UVector::VTable** arg_8 = rax

if (rax != 0)
    rax = sub_142ae6e40(rax, 0, sub_142a86ba0, arg1)

data_144016640 = rax

if (rax == 0)
    *arg1 = 7

struct icu_64::UObject::icu_64::UVector::VTable** rax_1 = j_sub_142a7dd00(0x28)
arg_8 = rax_1
struct icu_64::UObject::icu_64::UVector::VTable** rcx_2

if (rax_1 == 0)
    rcx_2 = nullptr
else
    rcx_2 = sub_142ae6e40(rax_1, 0, sub_142a86ba0, arg1)

data_144016648 = rcx_2

if (rcx_2 == 0)
    *arg1 = 7
label_142acf0e5:
    int64_t* r8_1 = data_144016640
    
    if (r8_1 != 0)
        (**r8_1)(r8_1, 1)
        rcx_2 = data_144016648
    
    if (rcx_2 != 0)
        (*rcx_2)->__offset(0x0).q(rcx_2, 1)
    
    data_144016640 = 0
    data_144016648 = 0
else if (*arg1 s> 0)
    goto label_142acf0e5

return sub_142aa75d0(0x11, sub_142ad0de0) __tailcall
