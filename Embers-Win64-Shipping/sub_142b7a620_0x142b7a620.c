// 函数: sub_142b7a620
// 地址: 0x142b7a620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_328 = -2
void var_368
int64_t result = __security_cookie ^ &var_368
int64_t result_1 = result
int32_t r15 = 0
int32_t var_338 = 0

if (*arg2 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_318 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_310_1 = 2
    uint32_t rbx_2 = arg1[9].d + 1
    int64_t r12_1 = sx.q(sub_142b7c5a0(arg1, rbx_2, &var_318))
    
    if ((r12_1.d s<= rbx_2 || (var_310_1 & 0xffe0) == 0) && *arg2 s<= 0)
        *arg2 = 3
        arg1[6] = "expected a setting/option at '['"
        
        if (arg1[5] != 0)
            sub_142b7c7c0(arg1)
    
    void* rcx_1 = arg1[2]
    int16_t rdx_1 = *(rcx_1 + 8)
    int32_t rax_3
    
    if (rdx_1 s< 0)
        rax_3 = *(rcx_1 + 0xc)
    else
        rax_3 = sx.d(rdx_1) s>> 5
    
    void* rdx_2
    
    if (r12_1.d u< rax_3)
        rdx_2 = rcx_1 + 0xa
        
        if ((rdx_1.b & 2) == 0)
            rdx_2 = *(rcx_1 + 0x18)
    
    int32_t var_30c
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_298
    void var_218
    
    if (r12_1.d u>= rax_3 || *(rdx_2 + (r12_1 << 1)) != 0x5d)
        int16_t rdx_57 = *(rcx_1 + 8)
        int32_t rax_74
        
        if (rdx_57 s< 0)
            rax_74 = *(rcx_1 + 0xc)
        else
            rax_74 = sx.d(rdx_57) s>> 5
        
        if (r12_1.d u>= rax_74)
            goto label_142b7b87b
        
        void* rcx_177
        
        if ((rdx_57.b & 2) == 0)
            rcx_177 = *(rcx_1 + 0x18)
        else
            rcx_177 = rcx_1 + 0xa
        
        if (*(rcx_177 + (r12_1 << 1)) != 0x5b)
            goto label_142b7b87b
        
        sub_142a9db60(&var_218)
        int32_t rax_75 = sub_142b7c410(arg1, r12_1.d, &var_218, arg2)
        
        if (*arg2 s> 0)
            sub_142a9dbc0(&var_218)
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_76 =
                sub_142a47a60(&var_298, 1, optimize", 0xffffffff)
            
            if ((var_310_1.b & 1) == 0)
                int32_t r8_53
                
                if (var_310_1 s< 0)
                    r8_53 = var_30c
                else
                    r8_53 = sx.d(var_310_1) s>> 5
                
                int16_t rcx_182 = rax_76[1].w
                int32_t rcx_184
                
                if (rcx_182 s< 0)
                    rcx_184 = *(rax_76 + 0xc)
                else
                    rcx_184 = sx.d(rcx_182) s>> 5
                
                char rax_77
                
                if ((rax_76[1].b & 1) == 0 && r8_53 == rcx_184)
                    rax_77 = sub_142a490e0(&var_318, rax_76, r8_53)
                
                if ((rax_76[1].b & 1) != 0 || r8_53 != rcx_184 || rax_77 == 0)
                    rbx_2.b = 0
                else
                    rbx_2.b = 1
            else
                rbx_2.b = rax_76[1].b & 1
            
            sub_142a47ff0(&var_298)
            
            if (rbx_2.b == 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_79 =
                    sub_142a47a60(&var_298, 1, suppressContractions", 0xffffffff)
                
                if ((var_310_1.b & 1) == 0)
                    int32_t r8_56
                    
                    if (var_310_1 s< 0)
                        r8_56 = var_30c
                    else
                        r8_56 = sx.d(var_310_1) s>> 5
                    
                    int16_t rcx_191 = rax_79[1].w
                    int32_t rcx_193
                    
                    if (rcx_191 s< 0)
                        rcx_193 = *(rax_79 + 0xc)
                    else
                        rcx_193 = sx.d(rcx_191) s>> 5
                    
                    char rax_80
                    
                    if ((rax_79[1].b & 1) == 0 && r8_56 == rcx_193)
                        rax_80 = sub_142a490e0(&var_318, rax_79, r8_56)
                    
                    if ((rax_79[1].b & 1) != 0 || r8_56 != rcx_193 || rax_80 == 0)
                        rbx_2.b = 0
                    else
                        rbx_2.b = 1
                else
                    rbx_2.b = rax_79[1].b & 1
                
                sub_142a47ff0(&var_298)
                
                if (rbx_2.b != 0)
                    int64_t* rcx_196 = arg1[7]
                    (*(*rcx_196 + 0x20))(rcx_196, &var_218, &arg1[6], arg2)
                    goto label_142b7b7b6
                
                sub_142a9dbc0(&var_218)
            label_142b7b87b:
                
                if (*arg2 s<= 0)
                    *arg2 = 3
                    arg1[6] = "not a valid setting/option"
                    
                    if (arg1[5] != 0)
                        sub_142b7c7c0(arg1)
            else
                int64_t* rcx_187 = arg1[7]
                (*(*rcx_187 + 0x28))(rcx_187, &var_218, &arg1[6], arg2)
            label_142b7b7b6:
                
                if (*arg2 s> 0)
                    sub_142b7c7c0(arg1)
                
                arg1[9].d = rax_75
                sub_142a9dbc0(&var_218)
    else
        rdx_2.b = 1
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_4 =
            sub_142a47a60(&var_298, rdx_2.b, reorder", 0xffffffff)
        var_338 = 1
        
        if (sub_142ab0e60(&var_318, rax_4) == 0)
            rbx_2.b = 0
        else
            int32_t rax_6 = var_30c
            int32_t rdx_5
            
            if (var_310_1 s< 0)
                rdx_5 = rax_6
            else
                rdx_5 = sx.d(var_310_1) s>> 5
            
            if (rdx_5 == 7)
                rbx_2.b = 1
            else
                if (var_310_1 s>= 0)
                    rax_6 = sx.d(var_310_1) s>> 5
                
                if (rax_6 u<= 7)
                    rbx_2.b = 0
                else
                    void var_30e
                    void* rax_8 = &var_30e
                    void* var_300
                    
                    if ((var_310_1.b & 2) == 0)
                        rax_8 = var_300
                    
                    if (*(rax_8 + 0xe) != 0x20)
                        rbx_2.b = 0
                    else
                        rbx_2.b = 1
        
        sub_142a47ff0(&var_298)
        
        if (rbx_2.b == 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_9 =
                sub_142a47a60(&var_298, 1, backwards 2", 0xffffffff)
            
            if ((var_310_1.b & 1) == 0)
                int32_t r8_4
                
                if (var_310_1 s< 0)
                    r8_4 = var_30c
                else
                    r8_4 = sx.d(var_310_1) s>> 5
                
                int16_t rcx_9 = rax_9[1].w
                int32_t rcx_11
                
                if (rcx_9 s< 0)
                    rcx_11 = *(rax_9 + 0xc)
                else
                    rcx_11 = sx.d(rcx_9) s>> 5
                
                char rax_10
                
                if ((rax_9[1].b & 1) == 0 && r8_4 == rcx_11)
                    rax_10 = sub_142a490e0(&var_318, rax_9, r8_4)
                
                if ((rax_9[1].b & 1) != 0 || r8_4 != rcx_11 || rax_10 == 0)
                    rbx_2.b = 0
                else
                    rbx_2.b = 1
            else
                rbx_2.b = rax_9[1].b & 1
            
            sub_142a47ff0(&var_298)
            
            if (rbx_2.b == 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_2d8 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_2d0_1 = 2
                int32_t r9_2
                
                if (var_310_1 s< 0)
                    r9_2 = var_30c
                else
                    r9_2 = sx.d(var_310_1) s>> 5
                
                int32_t rax_12 = sub_142a49270(&var_318, 0x20, 0, r9_2)
                int32_t var_2cc
                
                if (rax_12 s>= 0)
                    rbx_2 = rax_12 + 1
                    sub_142a4afe0(&var_2d8)
                    int32_t rcx_17 = var_30c
                    
                    if (rbx_2 s>= 0)
                        int32_t rdx_11
                        
                        if (var_310_1 s< 0)
                            rdx_11 = rcx_17
                        else
                            rdx_11 = sx.d(var_310_1) s>> 5
                        
                        if (rbx_2 s> rdx_11)
                            if (var_310_1 s< 0)
                                rbx_2 = rcx_17
                            else
                                rbx_2 = sx.d(var_310_1) s>> 5
                    else
                        rbx_2 = 0
                    
                    if (var_310_1 s>= 0)
                        rcx_17 = sx.d(var_310_1) s>> 5
                    
                    int32_t r8_6
                    
                    if (var_2d0_1 s< 0)
                        r8_6 = var_2cc
                    else
                        r8_6 = sx.d(var_2d0_1) s>> 5
                    
                    sub_142a49310(&var_2d8, 0, r8_6, &var_318, rbx_2, rcx_17 - rbx_2)
                    
                    if ((var_310_1.b & 1) == 0 || rax_12 != 0)
                        int32_t rcx_23
                        
                        if (var_310_1 s< 0)
                            rcx_23 = var_30c
                        else
                            rcx_23 = sx.d(var_310_1) s>> 5
                        
                        if (rax_12 u< rcx_23)
                            int16_t rax_15
                            
                            if (rax_12 s> 0x3ff)
                                rax_15 = var_310_1 | 0xffe0
                                var_30c = rax_12
                            else
                                int32_t rsi_1
                                rsi_1.w = rax_12.w << 5
                                rax_15 = (var_310_1 & 0x1f) | rsi_1.w
                            
                            var_310_1 = rax_15
                    else
                        sub_142a4afe0(&var_318)
                
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_16 =
                    sub_142a47a60(&var_298, 1, strength", 0xffffffff)
                var_338 = 2
                bool cond:2_1
                
                if ((var_310_1.b & 1) == 0)
                    int32_t r8_8
                    
                    if (var_310_1 s< 0)
                        r8_8 = var_30c
                    else
                        r8_8 = sx.d(var_310_1) s>> 5
                    
                    int16_t rcx_26 = rax_16[1].w
                    int32_t rcx_28
                    
                    if (rcx_26 s< 0)
                        rcx_28 = *(rax_16 + 0xc)
                    else
                        rcx_28 = sx.d(rcx_26) s>> 5
                    
                    if ((rax_16[1].b & 1) == 0 && r8_8 == rcx_28)
                        cond:2_1 = sub_142a490e0(&var_318, rax_16, r8_8) == 0
                        goto label_142b7a9d8
                    
                    rbx_2.b = 0
                else
                    cond:2_1 = (rax_16[1].b & 1) == 0
                label_142b7a9d8:
                    
                    if (cond:2_1)
                        rbx_2.b = 0
                    else
                        int32_t rax_21
                        
                        if (var_2d0_1 s< 0)
                            rax_21 = var_2cc
                        else
                            rax_21 = sx.d(var_2d0_1) s>> 5
                        
                        if (rax_21 != 1)
                            rbx_2.b = 0
                        else
                            rbx_2 = zx.d(rax_21.b)
                sub_142a47ff0(&var_298)
                
                if (rbx_2.b == 0)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_27 =
                        sub_142a47a60(&var_298, 1, alternate", 0xffffffff)
                    
                    if ((var_310_1.b & 1) == 0)
                        int32_t r8_10
                        
                        if (var_310_1 s< 0)
                            r8_10 = var_30c
                        else
                            r8_10 = sx.d(var_310_1) s>> 5
                        
                        int16_t rcx_35 = rax_27[1].w
                        int32_t rcx_37
                        
                        if (rcx_35 s< 0)
                            rcx_37 = *(rax_27 + 0xc)
                        else
                            rcx_37 = sx.d(rcx_35) s>> 5
                        
                        char rax_28
                        
                        if ((rax_27[1].b & 1) == 0 && r8_10 == rcx_37)
                            rax_28 = sub_142a490e0(&var_318, rax_27, r8_10)
                        
                        if ((rax_27[1].b & 1) != 0 || r8_10 != rcx_37 || rax_28 == 0)
                            rbx_2.b = 0
                        else
                            rbx_2.b = 1
                    else
                        rbx_2.b = rax_27[1].b & 1
                    
                    sub_142a47ff0(&var_298)
                    char rdx_17 = 1
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_40 = &var_298
                    
                    if (rbx_2.b == 0)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_33 =
                            sub_142a47a60(rcx_40, rdx_17, maxVariable", 0xffffffff)
                        
                        if ((var_310_1.b & 1) == 0)
                            int32_t r8_16
                            
                            if (var_310_1 s< 0)
                                r8_16 = var_30c
                            else
                                r8_16 = sx.d(var_310_1) s>> 5
                            
                            int16_t rcx_56 = rax_33[1].w
                            int32_t rcx_58
                            
                            if (rcx_56 s< 0)
                                rcx_58 = *(rax_33 + 0xc)
                            else
                                rcx_58 = sx.d(rcx_56) s>> 5
                            
                            char rax_34
                            
                            if ((rax_33[1].b & 1) == 0 && r8_16 == rcx_58)
                                rax_34 = sub_142a490e0(&var_318, rax_33, r8_16)
                            
                            if ((rax_33[1].b & 1) != 0 || r8_16 != rcx_58 || rax_34 == 0)
                                rbx_2.b = 0
                            else
                                rbx_2.b = 1
                        else
                            rbx_2.b = rax_33[1].b & 1
                        
                        sub_142a47ff0(&var_298)
                        char rdx_23 = 1
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_61 =
                            &var_298
                        
                        if (rbx_2.b == 0)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_44 =
                                sub_142a47a60(rcx_61, rdx_23, caseFirst", 0xffffffff)
                            
                            if ((var_310_1.b & 1) == 0)
                                int32_t r8_26
                                
                                if (var_310_1 s< 0)
                                    r8_26 = var_30c
                                else
                                    r8_26 = sx.d(var_310_1) s>> 5
                                
                                int16_t rcx_93 = rax_44[1].w
                                int32_t rcx_95
                                
                                if (rcx_93 s< 0)
                                    rcx_95 = *(rax_44 + 0xc)
                                else
                                    rcx_95 = sx.d(rcx_93) s>> 5
                                
                                char rax_45
                                
                                if ((rax_44[1].b & 1) == 0 && r8_26 == rcx_95)
                                    rax_45 = sub_142a490e0(&var_318, rax_44, r8_26)
                                
                                if ((rax_44[1].b & 1) != 0 || r8_26 != rcx_95 || rax_45 == 0)
                                    rbx_2.b = 0
                                else
                                    rbx_2.b = 1
                            else
                                rbx_2.b = rax_44[1].b & 1
                            
                            sub_142a47ff0(&var_298)
                            char rdx_34 = 1
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_98 =
                                &var_298
                            
                            if (rbx_2.b == 0)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                    rax_52 = sub_142a47a60(rcx_98, rdx_34, caseLevel", 0xffffffff)
                                
                                if ((var_310_1.b & 1) == 0)
                                    int32_t r8_34
                                    
                                    if (var_310_1 s< 0)
                                        r8_34 = var_30c
                                    else
                                        r8_34 = sx.d(var_310_1) s>> 5
                                    
                                    int16_t rcx_121 = rax_52[1].w
                                    int32_t rcx_123
                                    
                                    if (rcx_121 s< 0)
                                        rcx_123 = *(rax_52 + 0xc)
                                    else
                                        rcx_123 = sx.d(rcx_121) s>> 5
                                    
                                    char rax_53
                                    
                                    if ((rax_52[1].b & 1) == 0 && r8_34 == rcx_123)
                                        rax_53 = sub_142a490e0(&var_318, rax_52, r8_34)
                                    
                                    if ((rax_52[1].b & 1) != 0 || r8_34 != rcx_123 || rax_53 == 0)
                                        rbx_2.b = 0
                                    else
                                        rbx_2.b = 1
                                else
                                    rbx_2.b = rax_52[1].b & 1
                                
                                sub_142a47ff0(&var_298)
                                
                                if (rbx_2.b == 0)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rax_55 = sub_142a47a60(&var_298, 1, normalization", 0xffffffff)
                                    
                                    if ((var_310_1.b & 1) == 0)
                                        int32_t r8_37
                                        
                                        if (var_310_1 s< 0)
                                            r8_37 = var_30c
                                        else
                                            r8_37 = sx.d(var_310_1) s>> 5
                                        
                                        int16_t rcx_130 = rax_55[1].w
                                        int32_t rcx_132
                                        
                                        if (rcx_130 s< 0)
                                            rcx_132 = *(rax_55 + 0xc)
                                        else
                                            rcx_132 = sx.d(rcx_130) s>> 5
                                        
                                        char rax_56
                                        
                                        if ((rax_55[1].b & 1) == 0 && r8_37 == rcx_132)
                                            rax_56 = sub_142a490e0(&var_318, rax_55, r8_37)
                                        
                                        if ((rax_55[1].b & 1) != 0 || r8_37 != rcx_132
                                                || rax_56 == 0)
                                            rbx_2.b = 0
                                        else
                                            rbx_2.b = 1
                                    else
                                        rbx_2.b = rax_55[1].b & 1
                                    
                                    sub_142a47ff0(&var_298)
                                    
                                    if (rbx_2.b == 0)
                                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                            rax_58 =
                                            sub_142a47a60(&var_298, 1, numericOrdering", 0xffffffff)
                                        
                                        if ((var_310_1.b & 1) == 0)
                                            int32_t r8_40
                                            
                                            if (var_310_1 s< 0)
                                                r8_40 = var_30c
                                            else
                                                r8_40 = sx.d(var_310_1) s>> 5
                                            
                                            int16_t rcx_139 = rax_58[1].w
                                            int32_t rcx_141
                                            
                                            if (rcx_139 s< 0)
                                                rcx_141 = *(rax_58 + 0xc)
                                            else
                                                rcx_141 = sx.d(rcx_139) s>> 5
                                            
                                            char rax_59
                                            
                                            if ((rax_58[1].b & 1) == 0 && r8_40 == rcx_141)
                                                rax_59 = sub_142a490e0(&var_318, rax_58, r8_40)
                                            
                                            if ((rax_58[1].b & 1) != 0 || r8_40 != rcx_141
                                                    || rax_59 == 0)
                                                rbx_2.b = 0
                                            else
                                                rbx_2.b = 1
                                        else
                                            rbx_2.b = rax_58[1].b & 1
                                        
                                        sub_142a47ff0(&var_298)
                                        
                                        if (rbx_2.b == 0)
                                            struct 
                                                icu_64::Replaceable::icu_64::UnicodeString::VTable**
                                                 rax_61 =
                                                sub_142a47a60(&var_298, 1, hiraganaQ", 0xffffffff)
                                            
                                            if ((var_310_1.b & 1) == 0)
                                                int32_t r8_43
                                                
                                                if (var_310_1 s< 0)
                                                    r8_43 = var_30c
                                                else
                                                    r8_43 = sx.d(var_310_1) s>> 5
                                                
                                                int16_t rcx_148 = rax_61[1].w
                                                int32_t rcx_150
                                                
                                                if (rcx_148 s< 0)
                                                    rcx_150 = *(rax_61 + 0xc)
                                                else
                                                    rcx_150 = sx.d(rcx_148) s>> 5
                                                
                                                char rax_62
                                                
                                                if ((rax_61[1].b & 1) == 0 && r8_43 == rcx_150)
                                                    rax_62 = sub_142a490e0(&var_318, rax_61, r8_43)
                                                
                                                if ((rax_61[1].b & 1) != 0 || r8_43 != rcx_150
                                                        || rax_62 == 0)
                                                    rbx_2.b = 0
                                                else
                                                    rbx_2.b = 1
                                            else
                                                rbx_2.b = rax_61[1].b & 1
                                            
                                            sub_142a47ff0(&var_298)
                                            
                                            if (rbx_2.b == 0)
                                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable
                                                    ** rax_64 =
                                                    sub_142a47a60(&var_298, 1, import", 0xffffffff)
                                                
                                                if ((var_310_1.b & 1) == 0)
                                                    int32_t r8_45
                                                    
                                                    if (var_310_1 s< 0)
                                                        r8_45 = var_30c
                                                    else
                                                        r8_45 = sx.d(var_310_1) s>> 5
                                                    
                                                    int16_t rcx_157 = rax_64[1].w
                                                    int32_t rcx_159
                                                    
                                                    if (rcx_157 s< 0)
                                                        rcx_159 = *(rax_64 + 0xc)
                                                    else
                                                        rcx_159 = sx.d(rcx_157) s>> 5
                                                    
                                                    char rax_65
                                                    
                                                    if ((rax_64[1].b & 1) == 0 && r8_45 == rcx_159)
                                                        rax_65 =
                                                            sub_142a490e0(&var_318, rax_64, r8_45)
                                                    
                                                    if ((rax_64[1].b & 1) != 0 || r8_45 != rcx_159
                                                            || rax_65 == 0)
                                                        rbx_2.b = 0
                                                    else
                                                        rbx_2.b = 1
                                                else
                                                    rbx_2.b = rax_64[1].b & 1
                                                
                                                sub_142a47ff0(&var_298)
                                                
                                                if (rbx_2.b == 0)
                                                    goto label_142b7b6b0
                                                
                                                int16_t var_24c
                                                void* var_258 = &var_24c:1
                                                int32_t var_250_1 = 0x28
                                                var_24c = 0
                                                int32_t var_220_1 = 0
                                                sub_142a8cd50(&var_258, &var_2d8, arg2)
                                                
                                                if (*arg2 != 7)
                                                    int32_t rax_66 = sub_142a8b1a0(var_258, 
                                                        &var_218, 0x9d, &var_338, arg2)
                                                    char const* const rax_70
                                                    
                                                    if (*arg2 s> 0 || var_338 != var_220_1
                                                        || rax_66 s>= 0x9d)
                                                    label_142b7b66c:
                                                        rax_70 = "expected language tag in [import langTag]"
                                                    label_142b7b673:
                                                        *arg2 = 3
                                                        bool cond:4_1 = arg1[5] == 0
                                                        arg1[6] = rax_70
                                                        
                                                        if (not(cond:4_1))
                                                            sub_142b7c7c0(arg1)
                                                    else
                                                        char var_148
                                                        int32_t rax_67 = sub_142a4cc50(&var_218, 
                                                            &var_148, 0x9d, arg2)
                                                        
                                                        if (*arg2 s> 0 || rax_67 s>= 0x60)
                                                            goto label_142b7b66c
                                                        
                                                        if (rax_67 == 0)
                                                            __builtin_strncpy(&var_148, "root", 5)
                                                        else if (var_148 == 0x5f)
                                                            void var_145
                                                            memmove(&var_145, &var_148, rax_67 + 1)
                                                            var_148.w = 0x6e75
                                                            char var_146_1 = 0x64
                                                        
                                                        void var_a8
                                                        int32_t rax_69 = sub_142a4d040(&var_218, 
                                                            "collation", &var_a8, 0x60, arg2)
                                                        
                                                        if (*arg2 s> 0 || rax_69 s>= 0x60)
                                                            goto label_142b7b66c
                                                        
                                                        int64_t* rcx_168 = arg1[8]
                                                        
                                                        if (rcx_168 == 0)
                                                            rax_70 =
                                                                "[import langTag] is not supported"
                                                            goto label_142b7b673
                                                        
                                                        var_298 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                                                        int16_t var_290_1 = 2
                                                        void* r8_49 = &var_a8
                                                        
                                                        if (rax_69 s<= 0)
                                                            r8_49 = "standard"
                                                        
                                                        int32_t var_340
                                                        var_340.q = arg2
                                                        (*(*rcx_168 + 0x10))(rcx_168, &var_148, 
                                                            r8_49, &var_298, &arg1[6], var_340)
                                                        
                                                        if (*arg2 s<= 0)
                                                            int64_t rbx_5 = arg1[2]
                                                            int32_t rsi_2 = arg1[9].d
                                                            sub_142b79900(arg1, &var_298, arg2)
                                                            
                                                            if (*arg2 s> 0)
                                                                void* rax_72 = arg1[5]
                                                                
                                                                if (rax_72 != 0)
                                                                    *(rax_72 + 4) = rsi_2
                                                            
                                                            arg1[2] = rbx_5
                                                            arg1[9].d = r12_1.d + 1
                                                            sub_142a47ff0(&var_298)
                                                        else
                                                            if (arg1[6] == 0)
                                                                arg1[6] = "[import langTag] failed"
                                                            
                                                            sub_142b7c7c0(arg1)
                                                            sub_142a47ff0(&var_298)
                                                
                                                if (var_24c.b != 0)
                                                    sub_142a7dcd0(var_258)
                                                
                                                sub_142a47ff0(&var_2d8)
                                            else
                                                int32_t rax_63 =
                                                    Concurrency::agent::cancel(&var_2d8)
                                                
                                                if (rax_63 == 0xffffffff)
                                                    goto label_142b7b6b0
                                                
                                                if (rax_63 == 0x11 && *arg2 s<= 0)
                                                    *arg2 = 3
                                                    arg1[6] = "[hiraganaQ on] is not supported"
                                                    
                                                    if (arg1[5] != 0)
                                                        sub_142b7c7c0(arg1)
                                                
                                                arg1[9].d = r12_1.d + 1
                                                sub_142a47ff0(&var_2d8)
                                        else
                                            int32_t rax_60 = Concurrency::agent::cancel(&var_2d8)
                                            
                                            if (rax_60 == 0xffffffff)
                                                goto label_142b7b6b0
                                            
                                            sub_142b27350(arg1[4], 2, rax_60, 0, arg2)
                                            arg1[9].d = r12_1.d + 1
                                            sub_142a47ff0(&var_2d8)
                                    else
                                        int32_t rax_57 = Concurrency::agent::cancel(&var_2d8)
                                        
                                        if (rax_57 == 0xffffffff)
                                            goto label_142b7b6b0
                                        
                                        sub_142b27350(arg1[4], 1, rax_57, 0, arg2)
                                        arg1[9].d = r12_1.d + 1
                                        sub_142a47ff0(&var_2d8)
                                else
                                    int32_t rax_54 = Concurrency::agent::cancel(&var_2d8)
                                    
                                    if (rax_54 == 0xffffffff)
                                        goto label_142b7b6b0
                                    
                                    sub_142b27350(arg1[4], 0x400, rax_54, 0, arg2)
                                    arg1[9].d = r12_1.d + 1
                                    sub_142a47ff0(&var_2d8)
                            else
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                    rax_46 = sub_142a47a60(rcx_98, rdx_34, &data_14367d570, 0xffffffff)
                                
                                if ((var_2d0_1.b & 1) == 0)
                                    int32_t r8_28
                                    
                                    if (var_2d0_1 s< 0)
                                        r8_28 = var_2cc
                                    else
                                        r8_28 = sx.d(var_2d0_1) s>> 5
                                    
                                    int16_t rcx_100 = rax_46[1].w
                                    int32_t rcx_102
                                    
                                    if (rcx_100 s< 0)
                                        rcx_102 = *(rax_46 + 0xc)
                                    else
                                        rcx_102 = sx.d(rcx_100) s>> 5
                                    
                                    char rax_47
                                    
                                    if ((rax_46[1].b & 1) == 0 && r8_28 == rcx_102)
                                        rax_47 = sub_142a490e0(&var_2d8, rax_46, r8_28)
                                    
                                    if ((rax_46[1].b & 1) != 0 || r8_28 != rcx_102 || rax_47 == 0)
                                        rbx_2.b = 0
                                    else
                                        rbx_2.b = 1
                                else
                                    rbx_2.b = rax_46[1].b & 1
                                
                                sub_142a47ff0(&var_298)
                                int32_t rdx_37
                                
                                if (rbx_2.b == 0)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rax_48 = sub_142a47a60(&var_298, 1, lower", 0xffffffff)
                                    
                                    if ((var_2d0_1.b & 1) == 0)
                                        int32_t r8_30
                                        
                                        if (var_2d0_1 s< 0)
                                            r8_30 = var_2cc
                                        else
                                            r8_30 = sx.d(var_2d0_1) s>> 5
                                        
                                        int16_t rcx_107 = rax_48[1].w
                                        int32_t rcx_109
                                        
                                        if (rcx_107 s< 0)
                                            rcx_109 = *(rax_48 + 0xc)
                                        else
                                            rcx_109 = sx.d(rcx_107) s>> 5
                                        
                                        char rax_49
                                        
                                        if ((rax_48[1].b & 1) == 0 && r8_30 == rcx_109)
                                            rax_49 = sub_142a490e0(&var_2d8, rax_48, r8_30)
                                        
                                        if ((rax_48[1].b & 1) != 0 || r8_30 != rcx_109
                                                || rax_49 == 0)
                                            rbx_2.b = 0
                                        else
                                            rbx_2.b = 1
                                    else
                                        rbx_2.b = rax_48[1].b & 1
                                    
                                    sub_142a47ff0(&var_298)
                                    
                                    if (rbx_2.b == 0)
                                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                            rax_50 = sub_142a47a60(&var_298, 1, upper", 0xffffffff)
                                        
                                        if ((var_2d0_1.b & 1) == 0)
                                            int32_t r8_32
                                            
                                            if (var_2d0_1 s< 0)
                                                r8_32 = var_2cc
                                            else
                                                r8_32 = sx.d(var_2d0_1) s>> 5
                                            
                                            int16_t rcx_114 = rax_50[1].w
                                            int32_t rcx_116
                                            
                                            if (rcx_114 s< 0)
                                                rcx_116 = *(rax_50 + 0xc)
                                            else
                                                rcx_116 = sx.d(rcx_114) s>> 5
                                            
                                            char rax_51
                                            
                                            if ((rax_50[1].b & 1) == 0 && r8_32 == rcx_116)
                                                rax_51 = sub_142a490e0(&var_2d8, rax_50, r8_32)
                                            
                                            if ((rax_50[1].b & 1) != 0 || r8_32 != rcx_116
                                                    || rax_51 == 0)
                                                rbx_2.b = 0
                                            else
                                                rbx_2.b = 1
                                        else
                                            rbx_2.b = rax_50[1].b & 1
                                        
                                        sub_142a47ff0(&var_298)
                                        
                                        if (rbx_2.b == 0)
                                            goto label_142b7b6b0
                                        
                                        rdx_37 = 0x19
                                    else
                                        rdx_37 = 0x18
                                else
                                    rdx_37 = 0x10
                                
                                sub_142b27300(arg1[4], rdx_37, 0, arg2)
                                arg1[9].d = r12_1.d + 1
                                sub_142a47ff0(&var_2d8)
                        else
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_35 =
                                sub_142a47a60(rcx_61, rdx_23, space", 0xffffffff)
                            
                            if ((var_2d0_1.b & 1) == 0)
                                int32_t r8_18
                                
                                if (var_2d0_1 s< 0)
                                    r8_18 = var_2cc
                                else
                                    r8_18 = sx.d(var_2d0_1) s>> 5
                                
                                int16_t rcx_63 = rax_35[1].w
                                int32_t rcx_65
                                
                                if (rcx_63 s< 0)
                                    rcx_65 = *(rax_35 + 0xc)
                                else
                                    rcx_65 = sx.d(rcx_63) s>> 5
                                
                                char rax_36
                                
                                if ((rax_35[1].b & 1) == 0 && r8_18 == rcx_65)
                                    rax_36 = sub_142a490e0(&var_2d8, rax_35, r8_18)
                                
                                if ((rax_35[1].b & 1) != 0 || r8_18 != rcx_65 || rax_36 == 0)
                                    rbx_2.b = 0
                                else
                                    rbx_2.b = 1
                            else
                                rbx_2.b = rax_35[1].b & 1
                            
                            sub_142a47ff0(&var_298)
                            
                            if (rbx_2.b == 0)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                    rax_37 = sub_142a47a60(&var_298, 1, punct", 0xffffffff)
                                
                                if ((var_2d0_1.b & 1) == 0)
                                    int32_t r8_20
                                    
                                    if (var_2d0_1 s< 0)
                                        r8_20 = var_2cc
                                    else
                                        r8_20 = sx.d(var_2d0_1) s>> 5
                                    
                                    int16_t rcx_70 = rax_37[1].w
                                    int32_t rcx_72
                                    
                                    if (rcx_70 s< 0)
                                        rcx_72 = *(rax_37 + 0xc)
                                    else
                                        rcx_72 = sx.d(rcx_70) s>> 5
                                    
                                    char rax_38
                                    
                                    if ((rax_37[1].b & 1) == 0 && r8_20 == rcx_72)
                                        rax_38 = sub_142a490e0(&var_2d8, rax_37, r8_20)
                                    
                                    if ((rax_37[1].b & 1) != 0 || r8_20 != rcx_72 || rax_38 == 0)
                                        rbx_2.b = 0
                                    else
                                        rbx_2.b = 1
                                else
                                    rbx_2.b = rax_37[1].b & 1
                                
                                sub_142a47ff0(&var_298)
                                
                                if (rbx_2.b == 0)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rax_39 = sub_142a47a60(&var_298, 1, symbol", 0xffffffff)
                                    
                                    if ((var_2d0_1.b & 1) == 0)
                                        int32_t r8_22
                                        
                                        if (var_2d0_1 s< 0)
                                            r8_22 = var_2cc
                                        else
                                            r8_22 = sx.d(var_2d0_1) s>> 5
                                        
                                        int16_t rcx_77 = rax_39[1].w
                                        int32_t rcx_79
                                        
                                        if (rcx_77 s< 0)
                                            rcx_79 = *(rax_39 + 0xc)
                                        else
                                            rcx_79 = sx.d(rcx_77) s>> 5
                                        
                                        char rax_40
                                        
                                        if ((rax_39[1].b & 1) == 0 && r8_22 == rcx_79)
                                            rax_40 = sub_142a490e0(&var_2d8, rax_39, r8_22)
                                        
                                        if ((rax_39[1].b & 1) != 0 || r8_22 != rcx_79
                                                || rax_40 == 0)
                                            rbx_2.b = 0
                                        else
                                            rbx_2.b = 1
                                    else
                                        rbx_2.b = rax_39[1].b & 1
                                    
                                    sub_142a47ff0(&var_298)
                                    
                                    if (rbx_2.b == 0)
                                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                            rax_41 = sub_142a47a60(&var_298, 1, currency", 0xffffffff)
                                        
                                        if ((var_2d0_1.b & 1) == 0)
                                            int32_t r8_24
                                            
                                            if (var_2d0_1 s< 0)
                                                r8_24 = var_2cc
                                            else
                                                r8_24 = sx.d(var_2d0_1) s>> 5
                                            
                                            int16_t rcx_84 = rax_41[1].w
                                            int32_t rcx_86
                                            
                                            if (rcx_84 s< 0)
                                                rcx_86 = *(rax_41 + 0xc)
                                            else
                                                rcx_86 = sx.d(rcx_84) s>> 5
                                            
                                            char rax_42
                                            
                                            if ((rax_41[1].b & 1) == 0 && r8_24 == rcx_86)
                                                rax_42 = sub_142a490e0(&var_2d8, rax_41, r8_24)
                                            
                                            if ((rax_41[1].b & 1) != 0 || r8_24 != rcx_86
                                                    || rax_42 == 0)
                                                rbx_2.b = 0
                                            else
                                                rbx_2.b = 1
                                        else
                                            rbx_2.b = rax_41[1].b & 1
                                        
                                        sub_142a47ff0(&var_298)
                                        
                                        if (rbx_2.b == 0)
                                            goto label_142b7b6b0
                                        
                                        r15 = 3
                                    else
                                        r15 = 2
                                else
                                    r15 = 1
                            
                            sub_142b27390(arg1[4], r15, 0, arg2)
                            *(arg1[4] + 0x1c) = sub_142aa6280(arg1[3], r15 + 0x1000)
                            arg1[9].d = r12_1.d + 1
                            sub_142a47ff0(&var_2d8)
                    else
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_29 =
                            sub_142a47a60(rcx_40, rdx_17, non-ignorable", 0xffffffff)
                        
                        if ((var_2d0_1.b & 1) == 0)
                            int32_t r8_12
                            
                            if (var_2d0_1 s< 0)
                                r8_12 = var_2cc
                            else
                                r8_12 = sx.d(var_2d0_1) s>> 5
                            
                            int16_t rcx_42 = rax_29[1].w
                            int32_t rcx_44
                            
                            if (rcx_42 s< 0)
                                rcx_44 = *(rax_29 + 0xc)
                            else
                                rcx_44 = sx.d(rcx_42) s>> 5
                            
                            char rax_30
                            
                            if ((rax_29[1].b & 1) == 0 && r8_12 == rcx_44)
                                rax_30 = sub_142a490e0(&var_2d8, rax_29, r8_12)
                            
                            if ((rax_29[1].b & 1) != 0 || r8_12 != rcx_44 || rax_30 == 0)
                                rbx_2.b = 0
                            else
                                rbx_2.b = 1
                        else
                            rbx_2.b = rax_29[1].b & 1
                        
                        sub_142a47ff0(&var_298)
                        int32_t rdx_20
                        
                        if (rbx_2.b == 0)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_31 =
                                sub_142a47a60(&var_298, 1, shifted", 0xffffffff)
                            
                            if ((var_2d0_1.b & 1) == 0)
                                int32_t r8_14
                                
                                if (var_2d0_1 s< 0)
                                    r8_14 = var_2cc
                                else
                                    r8_14 = sx.d(var_2d0_1) s>> 5
                                
                                int16_t rcx_49 = rax_31[1].w
                                int32_t rcx_51
                                
                                if (rcx_49 s< 0)
                                    rcx_51 = *(rax_31 + 0xc)
                                else
                                    rcx_51 = sx.d(rcx_49) s>> 5
                                
                                char rax_32
                                
                                if ((rax_31[1].b & 1) == 0 && r8_14 == rcx_51)
                                    rax_32 = sub_142a490e0(&var_2d8, rax_31, r8_14)
                                
                                if ((rax_31[1].b & 1) != 0 || r8_14 != rcx_51 || rax_32 == 0)
                                    rbx_2.b = 0
                                else
                                    rbx_2.b = 1
                            else
                                rbx_2.b = rax_31[1].b & 1
                            
                            sub_142a47ff0(&var_298)
                            
                            if (rbx_2.b == 0)
                                goto label_142b7b6b0
                            
                            rdx_20 = 0x14
                        else
                            rdx_20 = 0x15
                        
                        sub_142b272c0(arg1[4], rdx_20, 0, arg2)
                        arg1[9].d = r12_1.d + 1
                        sub_142a47ff0(&var_2d8)
                else
                    int32_t rax_24
                    
                    if (var_2d0_1 s< 0)
                        rax_24 = var_2cc
                    else
                        rax_24 = sx.d(var_2d0_1) s>> 5
                    
                    int16_t rcx_31
                    
                    if (rax_24 == 0)
                        rcx_31 = -1
                    else
                        void var_2ce
                        void* rax_25 = &var_2ce
                        void* var_2c0
                        
                        if ((var_2d0_1.b & 2) == 0)
                            rax_25 = var_2c0
                        rcx_31 = *rax_25
                    
                    int32_t rdx_15
                    
                    if (rcx_31 - 0x31 u> 3)
                        if (rcx_31 != 0x49)
                        label_142b7b6b0:
                            sub_142a47ff0(&var_2d8)
                            goto label_142b7b87b
                        
                        rdx_15 = 0xf
                    else
                        rdx_15 = zx.d(rcx_31) - 0x31
                        
                        if (rdx_15 == 0xffffffff)
                            goto label_142b7b6b0
                    
                    sub_142b27740(arg1[4], rdx_15, 0, arg2)
                    arg1[9].d = r12_1.d + 1
                    sub_142a47ff0(&var_2d8)
            else
                sub_142b27350(arg1[4], 0x800, 0x11, 0, arg2)
                arg1[9].d = r12_1.d + 1
        else
            sub_142b79fb0(arg1, &var_318, arg2)
            arg1[9].d = r12_1.d + 1
    result = sub_142a47ff0(&var_318)

__security_check_cookie(result_1 ^ &var_368)
return result
