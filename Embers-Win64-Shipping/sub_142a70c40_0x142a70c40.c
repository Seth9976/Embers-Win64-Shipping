// 函数: sub_142a70c40
// 地址: 0x142a70c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2

if (*arg4 s> 0)
    return 

*(arg1 + 8) = arg2

do
    void* rax_1 = *(arg1 + 8)
    int16_t rcx = *(rax_1 + 8)
    int32_t rax
    
    if (rcx s< 0)
        rax = *(rax_1 + 0xc)
    else
        rax = sx.d(rcx) s>> 5
    
    if (*(arg1 + 0x10) s>= rax)
        break
    
    sub_142a6fe90(arg1, arg4)
    
    if (*arg4 s> 0)
        break
    
    sub_142a6f1f0(arg1, arg4)
    
    if (*arg4 s> 0)
        break
    
    int32_t rdx_2 = *(arg1 + 0x58)
    
    if (rdx_2 - 1 u<= 0x1a)
        switch (rdx_2)
            case 1
                void* rax_18 = *(arg1 + 0x60)
                
                if (*(rax_18 + 8) != 1 || *(rax_18 + 0xc) != 0xffffffff)
                    void* rdx_6 = *(rax_18 + 0x18)
                    
                    if (rdx_6 != 0)
                        int64_t rbp_1 = sx.q(*(arg1 + 0x70))
                        int32_t rax_21
                        
                        if (rbp_1.d s>= 0)
                            rax_21 = *(rdx_6 + 8)
                        
                        if (rbp_1.d s< 0 || rax_21 s<= 0 || rax_21 - rbp_1.d s<= 0
                                || *(*(rdx_6 + 0x18) + (rbp_1 << 2)) != 0xffffffff)
                            int32_t rax_26 = sub_142a70140(arg1 + 0x18)
                            sub_142ae7f70(*(*(arg1 + 0x60) + 0x18), rax_26, *(arg1 + 0x74))
                            int64_t rcx_27 = sx.q(*(arg1 + 0x70))
                            void* rdx_10 = *(*(arg1 + 0x60) + 0x18)
                            int32_t rax_28
                            
                            if (rcx_27.d s>= 0)
                                rax_28 = *(rdx_10 + 8)
                            
                            int32_t r8_5
                            
                            if (rcx_27.d s< 0 || rax_28 s<= 0 || rax_28 - rcx_27.d s<= 0)
                                r8_5 = 0
                            else
                                r8_5 = *(*(rdx_10 + 0x18) + (rcx_27 << 2))
                            
                            int64_t rcx_28 = sx.q(*(arg1 + 0x74))
                            int32_t rax_31
                            
                            if (rcx_28.d s>= 0)
                                rax_31 = *(rdx_10 + 8)
                            
                            int32_t rdx_11
                            
                            if (rcx_28.d s< 0 || rax_31 s<= 0 || rax_31 - rcx_28.d s<= 0)
                                rdx_11 = 0
                            else
                                rdx_11 = *(*(rdx_10 + 0x18) + (rcx_28 << 2))
                            
                            if (r8_5 s> rdx_11)
                                *arg4 = 0x10100
                        else
                            int32_t rax_24 = sub_142a70140(arg1 + 0x18)
                            sub_142ae7f70(*(*(arg1 + 0x60) + 0x18), rax_24, rbp_1.d)
                            int32_t rax_25 = sub_142a70140(arg1 + 0x18)
                            sub_142ae7f70(*(*(arg1 + 0x60) + 0x18), rax_25, *(arg1 + 0x74))
                    else
                        *(*(arg1 + 0x60) + 0x10) = sub_142a70140(arg1 + 0x18)
                else
                    *(*(arg1 + 0x60) + 0xc) = sub_142a70140(arg1 + 0x18)
            case 2
                void* rcx_29 = *(arg1 + 0x60)
                void* rax_34
                
                if (rcx_29 != 0)
                    rax_34 = *(rcx_29 + 0x18)
                
                if (rcx_29 == 0 || rax_34 == 0)
                    *arg4 = 0x10100
                else
                    *(arg1 + 0x70) = *(rax_34 + 8)
                    sub_142a6f090(*(rcx_29 + 0x18), 0xffffffff, arg4)
                    void* r9 = *(arg1 + 0x60)
                    *(arg1 + 0x74) = *(*(r9 + 0x18) + 8)
                    sub_142a6f090(*(r9 + 0x18), 0xffffffff, arg4)
            case 0xa
                struct icu_64::RuleChain::VTable** rax_39 = j_sub_142a7dd00(0xe0)
                struct icu_64::RuleChain::VTable** var_30_2 = rax_39
                
                if (rax_39 == 0)
                    *arg4 = 7
                else
                    *rax_39 = &icu_64::RuleChain::`vftable'
                    rax_39[1] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    rax_39[2].w = 2
                    rax_39[9] = 0
                    rax_39[0xa] = 0
                    rax_39[0xb] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    rax_39[0xc].w = 2
                    rax_39[0x13] = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    rax_39[0x14].w = 2
                    rax_39[0x1b].w = 0
                    *(rax_39 + 0xdc) = 0
                    sub_142a48100(&rax_39[1], arg1 + 0x18)
                    void* rbp_2 = *(arg3 + 8)
                    
                    if (rbp_2 != 0)
                        void* rdi_2 = rbp_2 + 0x48
                        
                        while (*rdi_2 != 0)
                            if (sub_142a6f4f0(*rdi_2 + 8, u"other", 5) == 0)
                                break
                            
                            rbp_2 = *rdi_2
                            rdi_2 = rbp_2 + 0x48
                        
                        rax_39[9] = *(rbp_2 + 0x48)
                        *(rbp_2 + 0x48) = rax_39
                    else
                        *(arg3 + 8) = rax_39
                    
                    struct icu_64::OrConstraint::VTable** rax_42 = j_sub_142a7dd00(0x20)
                    
                    if (rax_42 == 0)
                        *arg4 = 7
                    else
                        rax_42[3] = 0
                        *rax_42 = &icu_64::OrConstraint::`vftable'
                        __builtin_memset(&rax_42[1], 0, 0x14)
                        rax_39[0xa] = rax_42
                        *(arg1 + 0x60) = sub_142a6efe0(rax_42, arg4)
                        *(arg1 + 0x68) = rax_39
            case 0xb
                *(arg1 + 0x60) = sub_142a6ef40(*(arg1 + 0x60), arg4)
            case 0xc
                void* rdi_1 = *(*(arg1 + 0x68) + 0x50)
                void* rax_7 = rdi_1 + 0x10
                
                while (*rax_7 != 0)
                    rdi_1 = *rax_7
                    rax_7 = rdi_1 + 0x10
                
                struct icu_64::OrConstraint::VTable** rax_8 = j_sub_142a7dd00(0x20)
                
                if (rax_8 == 0)
                    rax_8 = nullptr
                else
                    rax_8[3] = 0
                    *rax_8 = &icu_64::OrConstraint::`vftable'
                    __builtin_memset(&rax_8[1], 0, 0x14)
                
                *(rdi_1 + 0x10) = rax_8
                
                if (rax_8 != 0)
                    rax_8[2] = 0
                    *(arg1 + 0x60) = sub_142a6efe0(rax_8, arg4)
                else
                    *arg4 = 7
            case 0xd
                *(*(arg1 + 0x60) + 8) = 1
            case 0xe
                *(*(arg1 + 0x60) + 0x20) = 1
            case 0xf, 0x10, 0x13
                goto label_142a70dac
            case 0x11
                *(*(arg1 + 0x60) + 0x20) = 1
            label_142a70dac:
                struct icu_64::UObject::icu_64::UVector32::VTable** rax_12 = j_sub_142a7dd00(0x20)
                struct icu_64::UObject::icu_64::UVector32::VTable** arg_20 = rax_12
                struct icu_64::UObject::icu_64::UVector32::VTable** rcx_8
                
                if (rax_12 == 0)
                    rcx_8 = nullptr
                else
                    rcx_8 = sub_142ae7bc0(rax_12, arg4)
                
                if (rcx_8 == 0 && *arg4 s<= rcx_8.d)
                    *arg4 = 7
                
                if (*arg4 s<= 0)
                    int64_t var_30_1 = 0
                    *(*(arg1 + 0x60) + 0x18) = rcx_8
                    sub_142a6f090(*(*(arg1 + 0x60) + 0x18), 0xffffffff, arg4)
                    sub_142a6f090(*(*(arg1 + 0x60) + 0x18), 0xffffffff, arg4)
                    *(arg1 + 0x70) = 0
                    *(arg1 + 0x74) = 1
                    *(*(arg1 + 0x60) + 0x10) = 0x7fffffff
                    *(*(arg1 + 0x60) + 0x21) = *(arg1 + 0x58) != 0x13
                else if (rcx_8 != 0)
                    (*rcx_8)->__offset(0x0).q(rcx_8, 1)
            case 0x15, 0x16, 0x17, 0x18, 0x19
                *(*(arg1 + 0x60) + 0x24) = rdx_2
            case 0x1a
                sub_142a6fe90(arg1, arg4)
                
                while (*arg4 s<= 0)
                    int32_t rax_47 = *(arg1 + 0x58)
                    
                    if (rax_47 u<= 0x1c && test_bit(0x10000048, rax_47))
                        break
                    
                    if (rax_47 != 9)
                        int16_t rax_49 = *(arg1 + 0x20)
                        int32_t r9_4
                        
                        if (rax_49 s< 0)
                            r9_4 = *(arg1 + 0x24)
                        else
                            r9_4 = sx.d(rax_49) s>> 5
                        
                        sub_142a48d00(*(arg1 + 0x68) + 0x58, arg1 + 0x18, 0, r9_4)
                    else
                        *(*(arg1 + 0x68) + 0xd8) = 1
                    
                    sub_142a6fe90(arg1, arg4)
            case 0x1b
                sub_142a6fe90(arg1, arg4)
                
                while (*arg4 s<= 0)
                    int32_t rax_44 = *(arg1 + 0x58)
                    
                    if (rax_44 u<= 0x1c && test_bit(0x10000048, rax_44))
                        break
                    
                    if (rax_44 != 9)
                        int16_t rax_46 = *(arg1 + 0x20)
                        int32_t r9_2
                        
                        if (rax_46 s< 0)
                            r9_2 = *(arg1 + 0x24)
                        else
                            r9_2 = sx.d(rax_46) s>> 5
                        
                        sub_142a48d00(*(arg1 + 0x68) + 0x98, arg1 + 0x18, 0, r9_2)
                    else
                        *(*(arg1 + 0x68) + 0xd9) = 1
                    
                    sub_142a6fe90(arg1, arg4)
    
    *(arg1 + 0x5c) = *(arg1 + 0x58)
while (*arg4 s<= 0)
