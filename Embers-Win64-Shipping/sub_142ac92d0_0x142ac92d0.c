// 函数: sub_142ac92d0
// 地址: 0x142ac92d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
sub_142aa75d0(0xd, sub_142acc550)
struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** i =
    j_sub_142a64700(1, nullptr, nullptr, arg1)
struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** i_3 = i

if (*arg1 s<= 0)
    i = j_sub_142a7dd00(0x38)
    struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** i_1 = i
    
    if (i != 0)
        i = sub_142b4cff0(i, 1, 0)
    
    data_144016538 = i
    
    if (i != 0)
        i = (*i_3)->__offset(0x30).q(i_3, arg1)
        struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** i_2 = i
        
        while (i != 0)
            void* rax_1 = j_sub_142a65150(i_2)
            void* rax_2 = sub_142ad0520(i_2)
            
            if (rax_2 != 0 && rax_1 != 0)
                sub_142b50890(data_144016538, rax_2, rax_1, arg1)
            
            i = (*i_3)->__offset(0x30).q(i_3, arg1)
            i_2 = i
    else
        *arg1 = 7

if (i_3 == 0)
    return i

return (*i_3)->__offset(0x0).q(i_3, 1)
