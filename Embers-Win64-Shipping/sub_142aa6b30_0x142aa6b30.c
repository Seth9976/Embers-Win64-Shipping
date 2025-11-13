// 函数: sub_142aa6b30
// 地址: 0x142aa6b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (*arg1 s> 0)
    return 

struct icu_64::SharedObject::icu_64::CollationSettings::VTable** rax = j_sub_142a7dd00(0x190)
struct icu_64::SharedObject::icu_64::CollationSettings::VTable** arg_8 = rax
struct icu_64::SharedObject::icu_64::CollationSettings::VTable** rbx_1

if (rax == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_142b130e0(rax, 0)

arg_8 = rbx_1

if (rbx_1 == 0 || rbx_1[4] == 0)
    *arg1 = 7
else
    int32_t* var_20_1 = arg1
    rax = sub_142a7f8c0("icudt64l-coll", "icu", "ucadata", sub_142b127b0, &rbx_1[0x29])
    rbx_1[0x2c] = rax
    
    if (*arg1 s<= 0)
        sub_142b12800(nullptr, sub_142a95f50(rax), sub_142a95f10(rbx_1[0x2c]), rbx_1, arg1)
        
        if (*arg1 s<= 0)
            sub_142aa75d0(0x1d, sub_142aa6c90)
            rax = j_sub_142a7dd00(0x100)
            struct icu_64::SharedObject::icu_64::CollationSettings::VTable** arg_10 = rax
            struct icu_64::SharedObject::icu_64::CollationSettings::VTable** rdi_3
            
            if (rax == 0)
                rdi_3 = nullptr
            else
                rdi_3 = sub_142a9c1e0(rax, sub_142a46510(), rbx_1)
            
            if (rdi_3 != 0)
                rbx_1 = nullptr
                arg_8 = nullptr
                sub_142aa6d40(rdi_3)
                data_144015df0 = rdi_3

if (rbx_1 != 0)
    (*rbx_1)->__offset(0x0).q(rbx_1, 1)
