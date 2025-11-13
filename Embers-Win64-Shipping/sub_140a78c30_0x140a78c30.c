// 函数: sub_140a78c30
// 地址: 0x140a78c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const rdi = arg1
int32_t r12 = 2

if (*(arg1 + 0x148) == 0)
    int64_t* rax_2 = sub_142a6d490(2, &arg1->__offset(0x8).q)
    void*** rax_3 = j_sub_140a82f30(0x18)
    
    if (rax_3 != 0)
        rax_3[1].d = 1
        *rax_3 = &data_142d42ea8
        *(rax_3 + 0xc) = 1
        rax_3[2] = rax_2
    
    int64_t* var_170 = rax_2
    int64_t* rdi_1 = var_170
    (*(*rdi_1 + 0xb0))(rdi_1, sub_142a64c40(&var_170, rax_2, rax_2))
    int64_t* rcx_2 = var_170
    
    if (rax_3 != 0)
        rax_3[1].d += 1
        rax_3[1].d += 1
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            (**rax_3)(rax_3)
            int32_t rax_7 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*rax_3)[1](rax_3, 1)
        
        if (rax_3 != 0)
            rax_3[1].d -= 1
            
            if (rax_3[1].d == 1)
                (**rax_3)(rax_3)
                int32_t rax_11 = *(rax_3 + 0xc)
                *(rax_3 + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*rax_3)[1](rax_3, 1)
    
    void*** rcx_7 = rax_3
    int64_t* var_190 = rcx_2
    void*** var_188 = rcx_7
    
    if (rax_3 != 0)
        rax_3[1].d += 1
        rcx_7 = var_188
    
    if (arg1 + 0x148 != &var_190)
        *(arg1 + 0x148) = rcx_2
        var_190 = nullptr
        sub_1405aeff0(arg1 + 0x150, &var_188)
        rcx_7 = var_188
    
    if (rcx_7 != 0)
        rcx_7[1].d -= 1
        
        if (rcx_7[1].d == 1)
            void*** rbx_4 = var_188
            (**rbx_4)(rbx_4)
            int32_t rax_16 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rax_16 == 1)
                void*** rcx_10 = var_188
                (*rcx_10)[1](rcx_10, 1)
    
    if (rax_3 != 0)
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            (**rax_3)(rax_3)
            int32_t rax_20 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (rax_20 == 1)
                (*rax_3)[1](rax_3, 1)
    
    rdi = arg1

int64_t var_180
sub_140a8a850(&var_180, arg4)
int32_t var_178
int32_t r13_1 = var_178
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_c0 = 2

if (r13_1 != 0 && r13_1 - 1 s> 0)
    memcpy(sub_142a4a0b0(&var_c8, r13_1), var_180, (r13_1 - 1) * 2)
    sub_142a4a600(&var_c8, r13_1 - 1)

int64_t* rbx_6 = rdi->__offset(0x150).q
int64_t* rax_23 = rdi->__offset(0x148).q

if (rbx_6 != 0)
    rbx_6[1].d += 1
    r13_1 = var_178

rdi.b = r13_1 s<= 1

if (r13_1 s> 1)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int32_t var_1a8 = 0
    int16_t var_100_1 = 2
    sub_142a656e0(&var_c8, &var_108, &var_1a8)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_80_1 = 2
    sub_142a48100(&var_88, (*(*rax_23 + 0xa8))(rax_23) + 8)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_140_1 = 2
    sub_142a656e0(&var_88, &var_148, &var_1a8)
    
    if ((var_100_1.b & 1) == 0)
        int32_t r8_6
        int32_t var_fc
        
        if (var_100_1 s< 0)
            r8_6 = var_fc
        else
            r8_6 = sx.d(var_100_1) s>> 5
        int32_t rax_29
        int32_t var_13c
        
        if (var_140_1 s< 0)
            rax_29 = var_13c
        else
            rax_29 = sx.d(var_140_1) s>> 5
        
        if ((var_140_1.b & 1) != 0 || r8_6 != rax_29)
            rdi.b = 0
        else if (sub_142a490e0(&var_108, &var_148, r8_6) == 0)
            rdi.b = 0
        else
            rdi.b = 1
    else
        rdi.b = var_140_1.b & 1
    
    sub_142a47ff0(&var_148)
    sub_142a47ff0(&var_88)
    sub_142a47ff0(&var_108)

int64_t* rcx_28

if (arg3 != 0)
label_140a7903c:
    
    if (arg3 != 1)
        if (arg3 != 2)
            if (arg3 == 3)
                r12 = 1
            else if (arg3 == 4)
                r12 = 0
        
        goto label_140a79073
    
    r12 = 3
label_140a79073:
    int64_t* rax_34 = sub_142a6d490(r12, &arg1->__offset(0x8).q)
    int64_t* var_160 = rax_34
    void*** rax_35 = j_sub_140a82f30(0x18)
    
    if (rax_35 != 0)
        rax_35[1].d = 1
        *rax_35 = &data_142d42ea8
        *(rax_35 + 0xc) = 1
        rax_35[2] = rax_34
    
    struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** rax_36
    
    if (rdi.b == 0)
        rax_36 = sub_142a64de0(&var_c8, rax_34, rax_34)
    else
        rax_36 = sub_142a64c40(&var_160, rax_34, rax_34)
    
    int64_t* rcx_33 = var_160
    (*(*rcx_33 + 0xb0))(rcx_33, rax_36)
    *arg2 = var_160
    arg2[1] = rax_35
    
    if (rax_35 != 0)
        rax_35[1].d += 1
        
        if (rax_35 != 0)
            rax_35[1].d -= 1
            
            if (rax_35[1].d == 1)
                (**rax_35)(rax_35)
                int32_t rax_42 = *(rax_35 + 0xc)
                *(rax_35 + 0xc) -= 1
                
                if (rax_42 == 1)
                    (*rax_35)[1](rax_35, 1)
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t rsi_2 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (rsi_2 == 1)
                (*(*rbx_6 + 8))(rbx_6, zx.q(rsi_2))
    
    sub_142a47ff0(&var_c8)
    int64_t rbx_8 = var_180
    
    if (rbx_8 != 0)
        rcx_28 = data_143ddb3f0
        
        if (rcx_28 != 0)
            (*(*rcx_28 + 0x30))(rcx_28, var_180)
        else
            sub_140a750a0()
            rcx_28 = data_143ddb3f0
            (*(*rcx_28 + 0x30))(rcx_28, rbx_8)
else
    if (rdi.b == 0)
        if (arg3 == 0)
            goto label_140a79073
        
        goto label_140a7903c
    
    *arg2 = rax_23
    arg2[1] = rbx_6
    
    if (rbx_6 != 0)
        rbx_6[1].d += 1
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t rsi_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, zx.q(rsi_1))
    
    sub_142a47ff0(&var_c8)
    int64_t rbx_7 = var_180
    
    if (rbx_7 != 0)
        rcx_28 = data_143ddb3f0
        
        if (rcx_28 != 0)
            (*(*rcx_28 + 0x30))(rcx_28, var_180)
        else
            sub_140a750a0()
            int64_t* rcx_29 = data_143ddb3f0
            int64_t r8_7 = *rcx_29
            (*(r8_7 + 0x30))(rcx_29, rbx_7, r8_7)
__security_check_cookie(rax_1 ^ &var_1c8)
return arg2
