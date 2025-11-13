// 函数: sub_142a99ce0
// 地址: 0x142a99ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t result

if (*arg5 s<= 0)
    if ((*(*arg1 + 0x58))() == 0)
        sub_142a9a540()
        void* rdi_1 = &data_144015d10
        void* var_b0_1 = &data_144015d10
        bool rax_5 = arg4 == 0
        
        if (rax_5 != 0)
            sub_142a860a0(&data_144015d10)
        
        int64_t result_1 = 0
        
        if (arg1[0xc] != 0)
            goto label_142a99df1
        
        int64_t* rax_6 = j_sub_142a7dd00(0x58)
        int64_t* var_b8_1 = rax_6
        int64_t* rbx_1
        
        if (rax_6 == 0)
            rbx_1 = nullptr
        else
            rbx_1 = sub_142a56eb0(rax_6, arg5)
        
        arg1[0xc] = rbx_1
        
        if (rbx_1 != 0)
            int64_t* rcx_2 = *rbx_1
            
            if (*arg5 s<= 0)
                std::ios_base::width(rcx_2, sub_142a9a9d0)
            label_142a99df1:
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_80_1 = 2
                int64_t* rbx_2 = nullptr
                int64_t var_b8_2 = 0
                char var_c8_1 = 0
                int32_t var_c4_1 = 0
                int32_t rbp_1 = *(arg1[0xb] + 8)
                char var_c7_1 = 1
                int32_t r14_1
                
                if (arg4 == 0)
                    r14_1 = 0
                label_142a99e77:
                    
                    while (true)
                        int16_t rax_10 = var_80_1 & 0x1f
                        
                        if ((var_80_1.b & 1) != 0)
                            rax_10 = 2
                        
                        var_80_1 = rax_10
                        (*(*arg2 + 0x28))(arg2, &var_88)
                        int32_t* rax_12 = sub_142a86c30(*arg1[0xc], &var_88)
                        int32_t* rdi_3 = rax_12
                        char r12_1
                        
                        if (rax_12 != 0)
                            r12_1 = var_c8_1
                            
                            if (r12_1 != 0)
                            label_142a9a074:
                                
                                if (var_c7_1 != 0)
                                    sub_142a5a080(arg1[0xc], &rdi_3[2], rdi_3, arg5)
                                    
                                    if (*arg5 s> 0)
                                        break
                                    
                                    if (rbx_2 != 0)
                                        int32_t rbp_2 = rbx_2[1].d
                                        int32_t rbp_3 = rbp_2 - 1
                                        
                                        if (rbp_2 - 1 s>= 0)
                                            int32_t temp1_1
                                            
                                            do
                                                void* rax_26 = sub_142ae72d0(rbx_2, rbp_3)
                                                sub_142a5a080(arg1[0xc], rax_26, rdi_3, arg5)
                                                
                                                if (*arg5 s> 0)
                                                    goto label_142a9a1b7
                                                
                                                *rdi_3 += 1
                                                sub_142ae7750(rbx_2, zx.q(rbp_3))
                                                temp1_1 = rbp_3
                                                rbp_3 -= 1
                                            while (temp1_1 - 1 s>= 0)
                            
                            if (arg3 != 0)
                                int16_t rax_27 = rdi_3[4].w
                                int32_t r9_7
                                
                                if (rax_27 s< 0)
                                    r9_7 = rdi_3[5]
                                else
                                    r9_7 = sx.d(rax_27) s>> 5
                                
                                if (sub_142a491f0(&rdi_3[2], 0x2f, 0, r9_7) != 0)
                                    sub_142a48100(arg3, &rdi_3[2])
                                else
                                    if ((*(arg3 + 8) & 1) == 0)
                                        *(arg3 + 8) &= 0x1f
                                    else
                                        *(arg3 + 8) = 2
                                    
                                    int16_t rax_29 = rdi_3[4].w
                                    int32_t r9_9
                                    
                                    if (rax_29 s< 0)
                                        r9_9 = rdi_3[5]
                                    else
                                        r9_9 = sx.d(rax_29) s>> 5
                                    
                                    sub_142a48d00(arg3, &rdi_3[2], 1, r9_9 - 1)
                            
                            if (arg3 == 0 || (*(arg3 + 8) & 1) == 0)
                                result_1 = (*(*arg1 + 0x68))(arg1, *(rdi_3 + 0x48))
                                
                                if (r12_1 == 0)
                                    break
                                
                                if (var_c7_1 != 0)
                                    break
                            else
                                *arg5 = 7
                            
                            int64_t* rcx_30 = *(rdi_3 + 0x48)
                            
                            if (rcx_30 != 0)
                                (**rcx_30)(rcx_30, 1)
                            
                            sub_142a47ff0(&rdi_3[2])
                            sub_142a47920(rdi_3)
                            break
                        
                        var_c8_1 = 1
                        int32_t rdi_4 = r14_1
                        int32_t* var_d8
                        
                        if (r14_1 s< rbp_1)
                            do
                                int64_t* rax_13 = sub_142ae72d0(arg1[0xb], rdi_4)
                                rdi_4 += 1
                                int64_t* rax_14 =
                                    (*(*rax_13 + 0x10))(rax_13, arg2, arg1, arg5, var_d8)
                                
                                if (*arg5 s> 0)
                                    if (rax_14 != 0)
                                        (**rax_14)(rax_14, 1)
                                    
                                    goto label_142a9a1b7
                                
                                if (rax_14 != 0)
                                    int32_t* rax_21 = j_sub_142a7dd00(0x50)
                                    rdi_3 = rax_21
                                    int32_t* var_a0_2 = rax_21
                                    
                                    if (rax_21 == 0)
                                        rdi_3 = nullptr
                                    else
                                        *rax_21 = 1
                                        sub_142a479b0(&rax_21[2], &var_88)
                                        *(rdi_3 + 0x48) = rax_14
                                    
                                    if (rdi_3 != 0)
                                        r12_1 = var_c8_1
                                        goto label_142a9a074
                                    
                                    (**rax_14)(rax_14, zx.q((rdi_3 + 1).d))
                                    goto label_142a99ff0
                            while (rdi_4 s< rbp_1)
                            
                            r14_1 = var_c4_1
                        
                        if (rbx_2 == 0)
                            struct icu_64::UObject::icu_64::UVector::VTable** rax_15 =
                                j_sub_142a7dd00(zx.q((&rbx_2[5]).d))
                            struct icu_64::UObject::icu_64::UVector::VTable** var_90_1 = rax_15
                            
                            if (rax_15 == 0)
                                rbx_2 = nullptr
                            else
                                var_d8 = arg5
                                rbx_2 =
                                    sub_142ae6ec0(rax_15, sub_140a4f210, 0, (rbx_2 + 5).d, var_d8)
                            
                            int64_t* var_b8_3 = rbx_2
                            
                            if (*arg5 s> 0)
                                break
                        
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_17 =
                            j_sub_142a7dd00(0x40)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_a0_1 =
                            rax_17
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_18
                        
                        if (rax_17 == 0)
                            rax_18 = nullptr
                        else
                            rax_18 = sub_142a479b0(rax_17, &var_88)
                        
                        if (rax_18 == 0 || (rax_18[1].b & 1) != 0)
                        label_142a99ff0:
                            *arg5 = 7
                            break
                        
                        sub_142ae7110(rbx_2, rax_18, arg5)
                        
                        if (*arg5 s> 0)
                            break
                        
                        if ((*(*arg2 + 0x30))(arg2) != 0)
                            continue
                        
                        if (rbx_2 != 0)
                            (**rbx_2)(rbx_2, 1)
                        
                        sub_142a47ff0(&var_88)
                        
                        if (rax_5 != 0)
                            sub_142a860d0(var_b0_1)
                        
                        result = (*(*arg1 + 0x80))(arg1, arg2, arg3, arg5, var_d8)
                        goto label_142a9a1f6
                else
                    int32_t rdi_2 = 0
                    
                    if (rbp_1 s> 0)
                        while (arg4 != sub_142ae72d0(arg1[0xb], rdi_2))
                            rdi_2 += 1
                            
                            if (rdi_2 s>= rbp_1)
                                goto label_142a99e62
                        
                        r14_1 = rdi_2 + 1
                        var_c4_1 = r14_1
                    
                    if (rbp_1 s> 0 && r14_1 != 0)
                        var_c7_1 = 0
                        goto label_142a99e77
                    
                label_142a99e62:
                    *arg5 = 1
            label_142a9a1b7:
                
                if (rbx_2 != 0)
                    (**rbx_2)(rbx_2, 1)
                
                sub_142a47ff0(&var_88)
                rdi_1 = var_b0_1
            else
                if (rcx_2 != 0)
                    sub_142a869e0(rcx_2)
                
                sub_142a47920(rbx_1)
        
        if (rax_5 != 0)
            sub_142a860d0(rdi_1)
        
        result = result_1
    else
        result = (*(*arg1 + 0x80))(arg1, arg2, arg3, arg5)
else
    result = 0

label_142a9a1f6:
__security_check_cookie(rax_1 ^ &var_f8)
return result
