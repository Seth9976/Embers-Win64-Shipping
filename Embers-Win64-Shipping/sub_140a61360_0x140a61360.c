// 函数: sub_140a61360
// 地址: 0x140a61360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
struct icu_64::UObject::VTable*** rax_2 = j_sub_140a82f30(0x10)
struct icu_64::UObject::VTable*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    CRITICAL_SECTION* lpCriticalSection = data_143db7a50
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_60_1 = 2
    sub_140a6db10(arg2, &var_68, 1)
    int32_t var_88 = 0
    struct icu_64::UObject::VTable** rax_3 = sub_142a73e80(&var_68, 0, &var_88)
    void*** rax_4 = j_sub_140a82f30(0x18)
    
    if (rax_4 != 0)
        rax_4[1].d = 1
        *rax_4 = &data_142e63340
        *(rax_4 + 0xc) = 1
        rax_4[2] = rax_3
    
    struct icu_64::UObject::VTable** var_80 = rax_3
    
    if (var_80 != 0)
        EnterCriticalSection(lpCriticalSection)
        void var_70
        sub_140a5bdd0(&lpCriticalSection[1], &var_70, &var_80, nullptr)
        
        if (lpCriticalSection != 0)
            LeaveCriticalSection(lpCriticalSection)
    
    *rdi = var_80
    rdi[1] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 0xc) += 1
        
        if (rax_4 != 0)
            rax_4[1].d -= 1
            
            if (rax_4[1].d == 1)
                (**rax_4)(rax_4)
                int32_t temp1_1 = *(rax_4 + 0xc)
                *(rax_4 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rax_4)[1](rax_4, 1)
    
    sub_142a47ff0(&var_68)

*arg1 = rdi
void*** rax_9 = j_sub_140a82f30(0x18)

if (rax_9 != 0)
    rax_9[1].d = 1
    *rax_9 = &data_142e63300
    *(rax_9 + 0xc) = 1
    rax_9[2] = rdi

arg1[1] = rax_9
__security_check_cookie(rax_1 ^ &var_a8)
return arg1
