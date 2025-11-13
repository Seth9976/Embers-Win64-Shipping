// 函数: sub_142aaf8c0
// 地址: 0x142aaf8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8 = -2
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t result = 0
__builtin_memset(arg4, 0, 0x48)

if (*arg5 s<= 0)
    sub_142ab05f0(arg1, arg5)
    sub_142ab0690(arg1, arg5)
    result = sub_142ab07e0(arg1, arg5)
    
    if (*arg5 s<= 0)
        int32_t r14_1 = 0
        int64_t* rax_2
        
        if (arg3 != 0)
            arg3[1].d += 1
            rax_2 = arg3
        else
            rax_2 = nullptr
        
        *(arg1 + 0x2a0) = rax_2
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
        sub_142a479b0(&var_d8, arg2)
        int16_t var_d0
        int32_t var_cc
        int32_t rax_5
        
        if (var_d0 s< 0)
            rax_5 = var_cc
        else
            rax_5 = sx.d(var_d0) s>> 5
        
        if (rax_5 == 0)
            *arg5 = 7
        else
            sub_142ab0f10(arg1, &var_d8)
            int32_t rdx_5 = 0
            int32_t rax_6 = var_cc
            int32_t r8_1
            
            if (var_d0 s< 0)
                r8_1 = rax_6
            else
                r8_1 = sx.d(var_d0) s>> 5
            
            if (r8_1 s< 0)
                if (var_d0 s< 0)
                    rdx_5 = rax_6
                else
                    rdx_5 = sx.d(var_d0) s>> 5
            
            if (var_d0 s>= 0)
                rax_6 = sx.d(var_d0) s>> 5
            
            int32_t rax_9 =
                sub_142a4a330(&var_d8, %%lenient-parse:", 0, 0xffffffff, rdx_5, rax_6 - rdx_5)
            int32_t r8_2 = var_cc
            int16_t rdx_7 = var_d0
            
            if (rax_9 == 0xffffffff)
            label_142aafc43:
                *(arg1 + 0x180) = 0
                int32_t rax_27 = 0
                int32_t rcx_19
                
                if (rdx_7 s< 0)
                    rcx_19 = r8_2
                else
                    rcx_19 = sx.d(rdx_7) s>> 5
                
                if (rcx_19 s< 0)
                    if (rdx_7 s< 0)
                        rax_27 = r8_2
                    else
                        rax_27 = sx.d(rdx_7) s>> 5
                
                if (rdx_7 s>= 0)
                    r8_2 = sx.d(rdx_7) s>> 5
                
                int32_t rax_29
                int32_t rcx_21
                
                for (int32_t i =
                        sub_142a4a330(&var_d8, &data_1436521a4, 0, 2, rax_27, r8_2 - rax_27); 
                        i != 0xffffffff; 
                        i = sub_142a4a330(&var_d8, &data_1436521a4, 0, 2, rax_29, rcx_21 - rax_29))
                    *(arg1 + 0x180) += 1
                    rax_29 = i + 1
                    rcx_21 = var_cc
                    
                    if (i + 1 s>= 0)
                        int32_t r8_11
                        
                        if (var_d0 s< 0)
                            r8_11 = rcx_21
                        else
                            r8_11 = sx.d(var_d0) s>> 5
                        
                        if (rax_29 s> r8_11)
                            if (var_d0 s< 0)
                                rax_29 = rcx_21
                            else
                                rax_29 = sx.d(var_d0) s>> 5
                    else
                        rax_29 = 0
                    
                    if (var_d0 s>= 0)
                        rcx_21 = sx.d(var_d0) s>> 5
                
                *(arg1 + 0x180) += 1
                int64_t rax_33 = sub_142a7dd00(sx.q(*(arg1 + 0x180) + 1) << 3)
                *(arg1 + 0x170) = rax_33
                
                if (rax_33 == 0)
                    *arg5 = 7
                else
                    int32_t i_1 = 0
                    
                    if (*(arg1 + 0x180) s>= 0)
                        int64_t* rcx_27 = nullptr
                        
                        do
                            *(rcx_27 + *(arg1 + 0x170)) = 0
                            i_1 += 1
                            rcx_27 = &rcx_27[1]
                        while (i_1 s<= *(arg1 + 0x180))
                    
                    int64_t rax_35 = sx.q(*(arg1 + 0x180))
                    
                    if (rax_35.d != 0)
                        int64_t* rax_36
                        
                        if (rax_35.d != 0)
                            int64_t rax_37 = 0x40 * rax_35
                            
                            if (mulu.dp.q(0x40, rax_35) u>> 0x40 != zx.o(0))
                                rax_37 = -1
                            
                            uint64_t rax_38 = rax_37 + 8
                            
                            if (rax_37 u>= -8)
                                rax_38 = -1
                            
                            rax_36 = j_sub_142a7dd00(rax_38)
                        else
                            rax_36 = j_sub_140a82f30(zx.q((rax_35 + 8).d))
                        
                        int32_t var_110_2 = rax_36.d
                        void (* rbx_2)()
                        
                        if (rax_36 == 0)
                            rbx_2 = nullptr
                        else
                            *rax_36 = rax_35
                            rbx_2 = &rax_36[1]
                            int32_t var_128_5
                            var_128_5.q = sub_142a47ff0
                            `eh vector constructor iterator'(rbx_2, 0x40, rax_35)
                        
                        *(arg1 + 0x178) = rbx_2
                        
                        if (rbx_2 == 0)
                            *arg5 = 7
                        else
                            int32_t rbx_3 = 0
                            var_110_2 = 0
                            int32_t r15_2 = 0
                            int32_t rdx_10 = 0
                            int32_t rax_39 = var_cc
                            int32_t r8_14
                            
                            if (var_d0 s< 0)
                                r8_14 = rax_39
                            else
                                r8_14 = sx.d(var_d0) s>> 5
                            
                            if (r8_14 s< 0)
                                if (var_d0 s< 0)
                                    rdx_10 = rax_39
                                else
                                    rdx_10 = sx.d(var_d0) s>> 5
                            
                            if (var_d0 s>= 0)
                                rax_39 = sx.d(var_d0) s>> 5
                            
                            int32_t i_5 = sub_142a4a330(&var_d8, &data_1436521a4, 0, 2, rdx_10, 
                                rax_39 - rdx_10)
                            int32_t i_4 = i_5
                            
                            if (i_5 != 0xffffffff)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable*** 
                                    r12_4 = nullptr
                                int64_t r13_1 = 0
                                int32_t i_2
                                
                                do
                                    void* rbx_5 = *(arg1 + 0x178) + r13_1
                                    sub_142a4afe0(rbx_5)
                                    int16_t rcx_34 = *(rbx_5 + 8)
                                    int32_t r8_16
                                    
                                    if (rcx_34 s< 0)
                                        r8_16 = *(rbx_5 + 0xc)
                                    else
                                        r8_16 = sx.d(rcx_34) s>> 5
                                    
                                    sub_142a49310(rbx_5, 0, r8_16, &var_d8, r15_2, i_4 - r15_2 + 1)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rax_45 = j_sub_142a7dd00(0xa0)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        var_100_1 = rax_45
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rcx_37
                                    
                                    if (rax_45 == 0)
                                        rcx_37 = nullptr
                                    else
                                        int32_t var_128_7
                                        var_128_7.q = arg5
                                        rcx_37 = sub_142b35530(rax_45, arg1, *(arg1 + 0x178), 
                                            var_110_2, var_128_7)
                                    
                                    *(r12_4 + *(arg1 + 0x170)) = rcx_37
                                    
                                    if (*(r12_4 + *(arg1 + 0x170)) == 0)
                                        *arg5 = 7
                                        goto label_142ab01f5
                                    
                                    rbx_3 = var_110_2 + 1
                                    var_110_2 = rbx_3
                                    r13_1 += 0x40
                                    r12_4 = &r12_4[1]
                                    r15_2 = i_4 + 1
                                    int32_t rdx_13 = r15_2
                                    int32_t rcx_38 = var_cc
                                    
                                    if (r15_2 s>= 0)
                                        int32_t r8_19
                                        
                                        if (var_d0 s< 0)
                                            r8_19 = rcx_38
                                        else
                                            r8_19 = sx.d(var_d0) s>> 5
                                        
                                        if (r15_2 s> r8_19)
                                            if (var_d0 s< 0)
                                                rdx_13 = rcx_38
                                            else
                                                rdx_13 = sx.d(var_d0) s>> 5
                                    else
                                        rdx_13 = 0
                                    
                                    if (var_d0 s>= 0)
                                        rcx_38 = sx.d(var_d0) s>> 5
                                    
                                    i_2 = sub_142a4a330(&var_d8, &data_1436521a4, 0, 2, rdx_13, 
                                        rcx_38 - rdx_13)
                                    i_4 = i_2
                                while (i_2 != 0xffffffff)
                            
                            int32_t rdi_5
                            
                            if (var_d0 s< 0)
                                rdi_5 = var_cc
                            else
                                rdi_5 = sx.d(var_d0) s>> 5
                            
                            int64_t r12_5 = sx.q(rbx_3)
                            void* rbx_9 = (r12_5 << 6) + *(arg1 + 0x178)
                            sub_142a4afe0(rbx_9)
                            int16_t rax_51 = *(rbx_9 + 8)
                            int32_t r8_21
                            
                            if (rax_51 s< 0)
                                r8_21 = *(rbx_9 + 0xc)
                            else
                                r8_21 = sx.d(rax_51) s>> 5
                            
                            sub_142a49310(rbx_9, 0, r8_21, &var_d8, r15_2, rdi_5 - r15_2)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_52 =
                                j_sub_142a7dd00(0xa0)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_100_2 =
                                rax_52
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_45
                            
                            if (rax_52 == 0)
                                rcx_45 = nullptr
                            else
                                int32_t var_128_9
                                var_128_9.q = arg5
                                rcx_45 = sub_142b35530(rax_52, arg1, *(arg1 + 0x178), var_110_2, 
                                    var_128_9)
                            
                            *(*(arg1 + 0x170) + (r12_5 << 3)) = rcx_45
                            
                            if (*(*(arg1 + 0x170) + (r12_5 << 3)) != 0)
                                sub_142ab0360(arg1)
                                int32_t i_3 = 0
                                
                                if (*(arg1 + 0x180) s> 0)
                                    void** rdi_7 = nullptr
                                    
                                    do
                                        sub_142b36680(*(rdi_7 + *(arg1 + 0x170)), 
                                            (sx.q(i_3) << 6) + *(arg1 + 0x178), arg5)
                                        i_3 += 1
                                        rdi_7 = &rdi_7[1]
                                    while (i_3 s< *(arg1 + 0x180))
                                
                                if (arg3 != 0 && (*(*arg3 + 0x10))(arg3) s> 0)
                                    while (true)
                                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* 
                                            var_98
                                        sub_142a47a60(&var_98, 1, 
                                            (*(*arg3 + 0x18))(arg3, zx.q(r14_1)), 0xffffffff)
                                        
                                        if (*arg5 s<= 0)
                                            int64_t* rdi_8 = *(arg1 + 0x170)
                                            
                                            if (rdi_8 != 0)
                                                void* rbx_10 = *rdi_8
                                                
                                                if (rbx_10 == 0)
                                                label_142ab01cd:
                                                    *arg5 = 1
                                                else
                                                    int16_t var_90
                                                    int16_t rcx_52 = var_90
                                                    
                                                    while (true)
                                                        if ((*(rbx_10 + 8) & 1) == 0)
                                                            int16_t rax_61 = *(rbx_10 + 8)
                                                            int32_t r8_26
                                                            
                                                            if (rax_61 s< 0)
                                                                r8_26 = *(rbx_10 + 0xc)
                                                            else
                                                                r8_26 = sx.d(rax_61) s>> 5
                                                            
                                                            int32_t rax_63
                                                            int32_t var_8c
                                                            
                                                            if (rcx_52 s< 0)
                                                                rax_63 = var_8c
                                                            else
                                                                rax_63 = sx.d(rcx_52) s>> 5
                                                            
                                                            if ((rcx_52.b & 1) == 0
                                                                    && r8_26 == rax_63)
                                                                if (
                                                                        sub_142a490e0(rbx_10, &var_98, r8_26)
                                                                        != 0)
                                                                    break
                                                                
                                                                rcx_52 = var_90
                                                        else if ((rcx_52.b & 1) != 0)
                                                            break
                                                        
                                                        rdi_8 = &rdi_8[1]
                                                        rbx_10 = *rdi_8
                                                        
                                                        if (rbx_10 == 0)
                                                            goto label_142ab01cd
                                                    
                                                    if (r14_1 == 0)
                                                        *(arg1 + 0x188) = rbx_10
                                                    
                                                    sub_142a47ff0(&var_98)
                                                    r14_1 += 1
                                                    
                                                    if (r14_1 s>= (*(*arg3 + 0x10))(arg3))
                                                        break
                                                    
                                                    continue
                                        
                                        sub_142a47ff0(&var_98)
                                        break
                                
                                sub_142a48100(arg1 + 0x2a8, arg2)
                            else
                                *arg5 = 7
                    else
                        *arg5 = 1
            else
                void var_ce
                int16_t* var_c0
                
                if (rax_9 != 0)
                    int32_t rax_11
                    
                    if (rdx_7 s< 0)
                        rax_11 = r8_2
                    else
                        rax_11 = sx.d(rdx_7) s>> 5
                    
                    if (rax_9 - 1 u>= rax_11)
                        goto label_142aafc43
                    
                    void* rcx_6 = &var_ce
                    
                    if ((var_d0.b & 2) == 0)
                        rcx_6 = var_c0
                    
                    if (*(rcx_6 + (sx.q(rax_9 - 1) << 1)) != 0x3b)
                        goto label_142aafc43
                
                int32_t rax_13 = rax_9
                
                if (rax_9 s>= 0)
                    int32_t rcx_8
                    
                    if (rdx_7 s< 0)
                        rcx_8 = r8_2
                    else
                        rcx_8 = sx.d(rdx_7) s>> 5
                    
                    if (rax_9 s> rcx_8)
                        if (rdx_7 s< 0)
                            rax_13 = r8_2
                        else
                            rax_13 = sx.d(rdx_7) s>> 5
                else
                    rax_13 = 0
                
                if (rdx_7 s>= 0)
                    r8_2 = sx.d(rdx_7) s>> 5
                
                int32_t rax_15 =
                    sub_142a4a330(&var_d8, &data_1436521a4, 0, 2, rax_13, r8_2 - rax_13)
                int32_t r12_1 = rax_15
                
                if (rax_15 == 0xffffffff)
                    int32_t rax_18
                    
                    if (var_d0 s< 0)
                        rax_18 = var_cc
                    else
                        rax_18 = sx.d(var_d0) s>> 5
                    
                    r12_1 = rax_18 - 1
                
                int32_t rbx_1 = rax_9 + std::_WChar_traits<wchar_t>::length(u"%%lenient-parse:")
                int64_t rdi_1 = sx.q(rbx_1) * 2
                
                while (true)
                    int32_t rcx_12
                    
                    if (var_d0 s< 0)
                        rcx_12 = var_cc
                    else
                        rcx_12 = sx.d(var_d0) s>> 5
                    
                    int16_t rcx_13
                    
                    if (rbx_1 u>= rcx_12)
                        rcx_13 = -1
                    else
                        int16_t* rax_21 = &var_ce
                        
                        if ((var_d0.b & 2) == 0)
                            rax_21 = var_c0
                        
                        rcx_13 = *(rax_21 + rdi_1)
                    
                    if (sub_142b13730(zx.d(rcx_13)) == 0)
                        break
                    
                    rbx_1 += 1
                    rdi_1 += 2
                
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_23 =
                    j_sub_142a7dd00(0x40)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdi_2 = rax_23
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_110_1 = rax_23
                
                if (rax_23 == 0)
                    rdi_2 = nullptr
                else
                    *rdi_2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    rdi_2[1].w = 2
                
                *(arg1 + 0x298) = rdi_2
                
                if (rdi_2 != 0)
                    sub_142a4afe0(rdi_2)
                    int16_t rax_24 = rdi_2[1].w
                    int32_t r8_6
                    
                    if (rax_24 s< 0)
                        r8_6 = *(rdi_2 + 0xc)
                    else
                        r8_6 = sx.d(rax_24) s>> 5
                    
                    sub_142a49310(rdi_2, 0, r8_6, &var_d8, rbx_1, r12_1 - rbx_1)
                    
                    if (rax_9 s> 0 || r12_1 - rax_9 != 0x7ffffffe)
                        sub_142a49390(&var_d8, rax_9, r12_1 - rax_9 + 1, 0, 0, 0)
                        r8_2 = var_cc
                        rdx_7 = var_d0
                    else
                        r8_2 = var_cc
                        
                        if ((var_d0.b & 1) == 0)
                            rdx_7 = var_d0 & 0x1f
                            var_d0 = rdx_7
                        else
                            rdx_7 = 2
                            var_d0 = 2
                    
                    goto label_142aafc43
                
                *arg5 = 7
        
    label_142ab01f5:
        result = sub_142a47ff0(&var_d8)

__security_check_cookie(rax_1 ^ &var_148)
return result
