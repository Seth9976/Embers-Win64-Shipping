// 函数: sub_142ace690
// 地址: 0x142ace690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1a0 = -2
uint128_t zmm6
uint128_t var_48 = zmm6
void var_1f8
int64_t result = __security_cookie ^ &var_1f8
int64_t result_1 = result
int32_t* r12 = arg2
int32_t* var_1b0 = arg2

if (*arg2 s<= 0)
    sub_142acd4b0(arg1)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_158 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_150_1 = 2
    sub_142a48100(&var_158, arg1 + 8)
    void var_198
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
    sub_142a481a0(&var_d8, &var_158, sub_142a47a60(&var_198, 1, u"(STD)", 0xffffffff))
    sub_142a47ff0(&var_198)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
    sub_142a481a0(&var_118, &var_158, sub_142a47a60(&var_98, 1, u"(DST)", 0xffffffff))
    sub_142a47ff0(&var_98)
    int32_t* rax_3 = *(arg1 + 0x70)
    int32_t r14_1 = *rax_3 * 0x3e8
    int32_t rsi_1 = rax_3[1] * 0x3e8
    struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_4 = j_sub_142a7dd00(0x50)
    struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_1b8 = rax_4
    struct icu_64::UObject::icu_64::TimeZoneTransition::VTable** rdi_1 = nullptr
    struct icu_64::TimeZoneRule::icu_64::InitialTimeZoneRule::VTable** rax_5
    
    if (rax_4 == 0)
        rax_5 = nullptr
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdx_5 = &var_d8
        
        if (rsi_1 != 0)
            rdx_5 = &var_118
        
        rax_5 = sub_142b4ae10(rax_4, rdx_5, r14_1, rsi_1)
    
    *(arg1 + 0xa0) = rax_5
    
    if (rax_5 == 0)
        *r12 = 7
        sub_142acd4b0(arg1)
    else
        int64_t r15_1 = sx.q(*(arg1 + 0x4c) + *(arg1 + 0x4a) + *(arg1 + 0x48))
        struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_1d8
        int32_t var_1d0
        int32_t var_1c8
        
        if (r15_1.d s<= 0)
        label_142aceb5c:
            int64_t* rcx_37 = *(arg1 + 0x80)
            
            if (rcx_37 != 0)
                var_1b8 = *(arg1 + 0x88)
                char rax_43 = (*(*rcx_37 + 0x40))(rcx_37)
                int64_t* rcx_38 = *(arg1 + 0x80)
                int64_t rax_44 = *rcx_38
                struct icu_64::TimeZoneRule::icu_64::TimeArrayTimeZoneRule::VTable** rsi_4
                
                if (rax_43 == 0)
                    int64_t rax_49 = (*(rax_44 + 0x58))(rcx_38)
                    *(arg1 + 0xd0) = rax_49
                    
                    if (rax_49 == 0)
                        *r12 = 7
                        sub_142acd4b0(arg1)
                    else
                        sub_142a48100(&var_158, *(arg1 + 0x80) + 8)
                        struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_50 =
                            j_sub_142a7dd00(0x160)
                        struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_1a8_3 = rax_50
                        
                        if (rax_50 == 0)
                            rsi_4 = nullptr
                        else
                            int64_t* rcx_49 = *(arg1 + 0x80)
                            int64_t rdx_18 = *rcx_49
                            rsi_4 = sub_142b4aef0(rax_50, &var_158, 
                                (*(rdx_18 + 0x38))(rcx_49, rdx_18), 0, &var_1b8, 1, 2)
                        
                        if (rsi_4 != 0)
                            goto label_142acecb7
                        
                        *r12 = 7
                        sub_142acd4b0(arg1)
                else
                    void* rax_45 = (*(rax_44 + 0x58))(rcx_38)
                    *(arg1 + 0xd0) = rax_45
                    
                    if (rax_45 == 0)
                        *r12 = 7
                        sub_142acd4b0(arg1)
                    else
                        sub_142ac5dc0(rax_45, *(arg1 + 0x90))
                        sub_142ad0f20(&var_198)
                        int64_t* rcx_41 = *(arg1 + 0xd0)
                        (*(*rcx_41 + 0x68))(rcx_41, var_1b8, 0, &var_198, var_1d8, var_1d0, var_1c8)
                        int64_t* rax_47 = sub_14082fb80(&var_198)
                        int64_t rdx_15 = *rax_47
                        struct icu_64::TimeZoneRule::icu_64::TimeArrayTimeZoneRule::VTable** 
                            rax_48 = (*(rdx_15 + 0x10))(rax_47, rdx_15)
                        rsi_4 = rax_48
                        
                        if (rax_48 != 0)
                            var_1b8 = sub_142ad1130(&var_198)
                            sub_142ad0f40(&var_198)
                        label_142acecb7:
                            int64_t* r14_4
                            
                            if (r15_1.d s> 0)
                                r14_4 = *(*(arg1 + 0xc0)
                                    + (zx.q(*(sx.q((r15_1 - 1).d) + *(arg1 + 0x78))) << 3))
                            
                            if (r15_1.d s<= 0 || r14_4 == 0)
                                r14_4 = *(arg1 + 0xa0)
                            
                            struct icu_64::UObject::icu_64::TimeZoneTransition::VTable** rax_56 =
                                j_sub_142a7dd00(0x20)
                            struct icu_64::UObject::icu_64::TimeZoneTransition::VTable** 
                                var_1a8_4 = rax_56
                            
                            if (rax_56 != 0)
                                rdi_1 = sub_142ad0f20(rax_56)
                            
                            *(arg1 + 0xb8) = rdi_1
                            
                            if (rdi_1 != 0)
                                sub_142838410(rdi_1, var_1b8)
                                int64_t rax_59 = (*(*r14_4 + 0x10))(r14_4)
                                sub_142ad10a0(*(arg1 + 0xb8), rax_59)
                                sub_142ad10e0(*(arg1 + 0xb8), rsi_4)
                            else
                                *r12 = 7
                                sub_142acd4b0(arg1)
                        else
                            *r12 = 7
                            sub_142acd4b0(arg1)
                            sub_142ad0f40(&var_198)
        else
            *(arg1 + 0xb0) = 0
            int16_t rcx_8 = 0
            int64_t rdx_6 = *(arg1 + 0x78)
            
            while (*(sx.q(rcx_8) + rdx_6) == 0)
                *(arg1 + 0xb0) += 1
                rcx_8 += 1
                
                if (sx.d(rcx_8) s>= r15_1.d)
                    break
            
            if (sx.d(rcx_8) == r15_1.d)
                goto label_142aceb5c
            
            struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_10 =
                sub_142a7dd00(r15_1 << 3)
            var_1b8 = rax_10
            
            if (rax_10 == 0)
                *r12 = 7
                sub_142acd4b0(arg1)
            else
                int16_t i = 0
                zmm6 = 0x408f400000000000
                
                if (0 s< *(arg1 + 0x68))
                    do
                        int32_t rsi_2 = 0
                        int32_t r10_1 = sx.d(*(arg1 + 0xb0))
                        uint64_t r8_4 = zx.q(r10_1)
                        
                        if (r10_1 s< r15_1.d)
                            uint64_t r14_2 = zx.q(sx.d(i))
                            struct icu_64::UObject::icu_64::TimeZoneRule::VTable** r11_1 = rax_10
                            
                            do
                                if (r14_2.d == zx.d(*(sx.q(r10_1.w) + *(arg1 + 0x78))))
                                    int16_t rcx_13 = *(arg1 + 0x48)
                                    uint64_t r9_3
                                    
                                    if (r10_1.w s>= rcx_13)
                                        int16_t rax_15 = r10_1.w - rcx_13
                                        int16_t rcx_16 = *(arg1 + 0x4a)
                                        
                                        if (rax_15 s>= rcx_16)
                                            uint64_t rdx_8 = zx.q(sx.d(rax_15 - rcx_16))
                                            int64_t r8_5 = *(arg1 + 0x60)
                                            r9_3 =
                                                zx.q(*(r8_5 + (sx.q((rdx_8 * 2).d) << 2))) << 0x20
                                                | zx.q(*(r8_5 + (sx.q(((rdx_8 << 1) + 1).d) << 2)))
                                        else
                                            r9_3 = sx.q(*(*(arg1 + 0x58) + (sx.q(rax_15) << 2)))
                                    else
                                        int64_t rdx_7 = *(arg1 + 0x50)
                                        r9_3 = zx.q(*(rdx_7 + (sx.q((r8_4 * 2).d) << 2))) << 0x20
                                            | zx.q(*(rdx_7 + (sx.q(((r8_4 << 1) + 1).d) << 2)))
                                    
                                    double zmm1 = float.d(r9_3) f* zmm6.q
                                    
                                    if (*(arg1 + 0x80) == 0 || not(*(arg1 + 0x88) f< zmm1))
                                        *r11_1 = zmm1
                                        rsi_2 += 1
                                        r11_1 = &r11_1[1]
                                
                                r10_1.w += 1
                                r8_4 = zx.q(sx.d(r10_1.w))
                            while (r8_4.d s< r15_1.d)
                            
                            if (rsi_2 s> 0)
                                int64_t rdx_9 = *(arg1 + 0x70)
                                int32_t r12_1 = *(rdx_9 + (sx.q((r14_2 * 2).d) << 2)) * 0x3e8
                                int32_t r14_3 = *(rdx_9 + (sx.q(((r14_2 << 1) + 1).d) << 2)) * 0x3e8
                                
                                if (*(arg1 + 0xc0) == 0)
                                    int64_t rax_21 = sx.q(*(arg1 + 0x68))
                                    *(arg1 + 0xc8) = rax_21.w
                                    int64_t rax_22 = sub_142a7dd00(rax_21 << 3)
                                    *(arg1 + 0xc0) = rax_22
                                    
                                    if (rax_22 == 0)
                                        *var_1b0 = 7
                                        sub_142acd4b0(arg1)
                                        sub_142a7dcd0(var_1b8)
                                        goto label_142aced57
                                    
                                    int32_t j = 0
                                    
                                    if (0 s< *(arg1 + 0xc8))
                                        int64_t* rcx_24 = nullptr
                                        
                                        do
                                            *(rcx_24 + *(arg1 + 0xc0)) = 0
                                            j += 1
                                            rcx_24 = &rcx_24[1]
                                        while (j s< sx.d(*(arg1 + 0xc8)))
                                
                                struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_25 =
                                    j_sub_142a7dd00(0x160)
                                struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_1a8_1 =
                                    rax_25
                                struct icu_64::TimeZoneRule::icu_64::TimeArrayTimeZoneRule::VTable**
                                     rdx_11
                                
                                if (rax_25 == 0)
                                    rdx_11 = nullptr
                                else
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rdx_10 = &var_d8
                                    
                                    if (r14_3 != 0)
                                        rdx_10 = &var_118
                                    
                                    var_1c8 = 2
                                    var_1d0 = rsi_2
                                    var_1d8 = var_1b8
                                    rdx_11 = sub_142b4aef0(rax_25, rdx_10, r12_1, r14_3, var_1d8, 
                                        var_1d0, var_1c8)
                                
                                int64_t i_1 = sx.q(i)
                                *(*(arg1 + 0xc0) + (i_1 << 3)) = rdx_11
                                
                                if (*(*(arg1 + 0xc0) + (i_1 << 3)) == 0)
                                    *var_1b0 = 7
                                    sub_142acd4b0(arg1)
                                    goto label_142aced57
                            
                            rax_10 = var_1b8
                        
                        i += 1
                    while (i s< *(arg1 + 0x68))
                    
                    r12 = var_1b0
                
                sub_142a7dcd0(rax_10)
                char rsi_3 = *(sx.q(*(arg1 + 0xb0)) + *(arg1 + 0x78))
                struct icu_64::UObject::icu_64::TimeZoneTransition::VTable** rax_32 =
                    j_sub_142a7dd00(0x20)
                struct icu_64::UObject::icu_64::TimeZoneTransition::VTable** var_1a8_2 = rax_32
                struct icu_64::UObject::icu_64::TimeZoneTransition::VTable** rax_41
                
                if (rax_32 == 0)
                    rax_41 = nullptr
                else
                    int16_t rcx_32 = *(arg1 + 0xb0)
                    int16_t rdx_12 = *(arg1 + 0x48)
                    uint64_t r10_3
                    uint64_t rdx_13
                    int64_t r8_7
                    
                    if (rcx_32 s>= rdx_12)
                        rcx_32 -= rdx_12
                        int16_t rax_35 = *(arg1 + 0x4a)
                        
                        if (rcx_32 s>= rax_35)
                            rdx_13 = zx.q(sx.d(rcx_32 - rax_35))
                            r8_7 = *(arg1 + 0x60)
                            r10_3 = zx.q(*(r8_7 + (sx.q((rdx_13 * 2).d) << 2))) << 0x20
                                | zx.q(*(r8_7 + (sx.q(((rdx_13 << 1) + 1).d) << 2)))
                        else
                            r10_3 = sx.q(*(*(arg1 + 0x58) + (sx.q(rcx_32) << 2)))
                    else
                        rdx_13 = zx.q(sx.d(rcx_32))
                        r8_7 = *(arg1 + 0x50)
                        r10_3 = zx.q(*(r8_7 + (sx.q((rdx_13 * 2).d) << 2))) << 0x20
                            | zx.q(*(r8_7 + (sx.q(((rdx_13 << 1) + 1).d) << 2)))
                    rax_41 = sub_142ad0ec0(rax_32, float.d(r10_3) f* zmm6.q, *(arg1 + 0xa0), 
                        *(*(arg1 + 0xc0) + (zx.q(rsi_3) << 3)))
                
                *(arg1 + 0xa8) = rax_41
                
                if (rax_41 != 0)
                    goto label_142aceb5c
                
                *r12 = 7
                sub_142acd4b0(arg1)
    
label_142aced57:
    sub_142a47ff0(&var_118)
    sub_142a47ff0(&var_d8)
    result = sub_142a47ff0(&var_158)

__security_check_cookie(result_1 ^ &var_1f8)
return result
