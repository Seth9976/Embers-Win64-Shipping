// 函数: sub_142b4d8c0
// 地址: 0x142b4d8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2

if (*arg2 s> 0)
    return nullptr

int64_t* rax_1 = sub_142ad0270(arg1)
struct icu_64::UObject::icu_64::UVector::VTable** arg_10

if (rax_1 == 0)
    struct icu_64::UObject::icu_64::UVector::VTable** rax_2 = j_sub_142a7dd00(0x90)
    struct icu_64::StringEnumeration::icu_64::MetaZoneIDsEnumeration::VTable** rdi_1 = rax_2
    arg_10 = rax_2
    
    if (rax_2 == 0)
        return nullptr
    
    sub_142a85450(rax_2)
    *rdi_1 = &icu_64::MetaZoneIDsEnumeration::`vftable'{for `icu_64::StringEnumeration'}
    __builtin_memset(&rdi_1[0xf], 0, 0x18)
    return rdi_1

struct icu_64::UObject::icu_64::UVector::VTable** rax_3 = j_sub_142a7dd00(0x28)
arg_10 = rax_3
struct icu_64::UObject::icu_64::UVector::VTable** r14_1

if (rax_3 == 0)
    r14_1 = nullptr
else
    r14_1 = sub_142ae6e40(rax_3, 0, sub_142a86ba0, arg2)

if (r14_1 == 0)
    *arg2 = 7
else if (*arg2 s<= 0)
    int32_t i = 0
    
    while (i s< rax_1[1].d)
        int64_t r15_1 = *sub_142ae72d0(rax_1, i)
        
        if (sub_142ae7470(r14_1, r15_1, 0) s< 0)
            sub_142ae7110(r14_1, r15_1, arg2)
        
        i += 1
        
        if (*arg2 s> 0)
            break
    
    if (*arg2 s> 0)
        struct icu_64::UObject::icu_64::UVector::VTable* r8_2 = *r14_1
        r8_2->__offset(0x0).q(r14_1, 1, r8_2)
    else
        struct icu_64::StringEnumeration::icu_64::MetaZoneIDsEnumeration::VTable** rax_7 =
            j_sub_142a7dd00(0x90)
        arg_10 = rax_7
        
        if (rax_7 != 0)
            sub_142a85450(rax_7)
            *rax_7 = &icu_64::MetaZoneIDsEnumeration::`vftable'{for `icu_64::StringEnumeration'}
            rax_7[0xf] = 0
            rax_7[0x10] = r14_1
            rax_7[0x11] = r14_1
            rax_7[0xf].d = r14_1[1].d
            return rax_7

return nullptr
