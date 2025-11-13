// 函数: sub_140a791d0
// 地址: 0x140a791d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t r14 = 2
uint64_t rdi = arg1

if (*(arg1 + 0x168) == 0)
    int64_t* rax_2 = sub_142a6d4b0(2, 2, arg1 + 8)
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
    
    if (arg1 + 0x168 != &var_190)
        *(arg1 + 0x168) = rcx_2
        var_190 = nullptr
        sub_1405aeff0(arg1 + 0x170, &var_188)
        rcx_7 = var_188
    
    if (rcx_7 != 0)
        rcx_7[1].d -= 1
        
        if (rcx_7[1].d == 1)
            void*** rbx_6 = var_188
            (**rbx_6)(rbx_6)
            int32_t rax_16 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
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
sub_140a8a850(&var_180, arg5)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_c0 = 2
int32_t var_178

if (var_178 != 0 && var_178 - 1 s> 0)
    memcpy(sub_142a4a0b0(&var_c8, var_178), var_180, (var_178 - 1) * 2)
    sub_142a4a600(&var_c8, var_178 - 1)

int64_t* rbx_8 = *(rdi + 0x170)
int64_t* rcx_17 = *(rdi + 0x168)

if (rbx_8 != 0)
    rbx_8[1].d += 1

rdi.b = var_178 s<= 1

if (var_178 s> 1)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int32_t var_1a0 = 0
    int16_t var_100_1 = 2
    sub_142a656e0(&var_c8, &var_108, &var_1a0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_80_1 = 2
    sub_142a48100(&var_88, (*(*rcx_17 + 0xa8))(rcx_17) + 8)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_140_1 = 2
    sub_142a656e0(&var_88, &var_148, &var_1a0)
    
    if ((var_100_1.b & 1) == 0)
        int32_t r8_7
        int32_t var_fc
        
        if (var_100_1 s< 0)
            r8_7 = var_fc
        else
            r8_7 = sx.d(var_100_1) s>> 5
        int32_t rax_29
        int32_t var_13c
        
        if (var_140_1 s< 0)
            rax_29 = var_13c
        else
            rax_29 = sx.d(var_140_1) s>> 5
        
        if ((var_140_1.b & 1) != 0 || r8_7 != rax_29)
            rdi.b = 0
        else if (sub_142a490e0(&var_108, &var_148, r8_7) == 0)
            rdi.b = 0
        else
            rdi.b = 1
    else
        rdi.b = var_140_1.b & 1
    
    sub_142a47ff0(&var_148)
    sub_142a47ff0(&var_88)
    sub_142a47ff0(&var_108)

int64_t* rcx_29
int32_t rdx_13

if (arg3 != 0)
label_140a795ef:
    
    if (arg4 != 0)
        goto label_140a795f4
    
label_140a7961e:
    rdx_13 = 2
label_140a79624:
    
    if (arg3 != 0)
        if (arg3 == 1)
            r14 = 3
        else if (arg3 != 2)
            if (arg3 == 3)
                r14 = 1
            else if (arg3 == 4)
                r14 = 0
    
    int64_t* rax_34 = sub_142a6d4b0(r14, rdx_13, arg1 + 8)
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
    
    int64_t* rcx_34 = var_160
    (*(*rcx_34 + 0xb0))(rcx_34, rax_36)
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
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t rsi_2 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (rsi_2 == 1)
                (*(*rbx_8 + 8))(rbx_8, zx.q(rsi_2))
    
    sub_142a47ff0(&var_c8)
    int64_t rbx_10 = var_180
    
    if (rbx_10 != 0)
        rcx_29 = data_143ddb3f0
        
        if (rcx_29 != 0)
            (*(*rcx_29 + 0x30))(rcx_29, var_180)
        else
            sub_140a750a0()
            rcx_29 = data_143ddb3f0
            (*(*rcx_29 + 0x30))(rcx_29, rbx_10)
else
    if (arg4 != 0)
    label_140a795f4:
        
        if (arg4 == 1)
            rdx_13 = 3
            goto label_140a79624
        
        if (arg4 == 2)
            goto label_140a7961e
        
        if (arg4 == 3)
            rdx_13 = 1
            goto label_140a79624
        
        if (arg4 != 4)
            goto label_140a7961e
        
        rdx_13 = 0
        goto label_140a79624
    
    if (rdi.b == 0)
        goto label_140a795ef
    
    *arg2 = rcx_17
    arg2[1] = rbx_8
    
    if (rbx_8 != 0)
        rbx_8[1].d += 1
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t rsi_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rbx_8 + 8))(rbx_8, zx.q(rsi_1))
    
    sub_142a47ff0(&var_c8)
    int64_t rbx_9 = var_180
    
    if (rbx_9 != 0)
        rcx_29 = data_143ddb3f0
        
        if (rcx_29 != 0)
            (*(*rcx_29 + 0x30))(rcx_29, var_180)
        else
            sub_140a750a0()
            int64_t* rcx_30 = data_143ddb3f0
            int64_t r8_8 = *rcx_30
            (*(r8_8 + 0x30))(rcx_30, rbx_9, r8_8)
__security_check_cookie(rax_1 ^ &var_1c8)
return arg2
