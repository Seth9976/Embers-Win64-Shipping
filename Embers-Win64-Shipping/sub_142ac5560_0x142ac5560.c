// 函数: sub_142ac5560
// 地址: 0x142ac5560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_118 = -2
void var_178
int64_t result = __security_cookie ^ &var_178
int64_t result_1 = result
int32_t* r13 = arg2
struct icu_64::UObject::icu_64::TimeZoneTransition::VTable** r15 = nullptr
int32_t r14 = 0
int32_t var_138 = 0

if (*arg2 s<= 0 && arg1[0xf].b == 0)
    sub_142ac4860(arg1)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_100_1 = 2
    sub_142a48100(&var_108, &arg1[1])
    bool cond:1_1
    
    if (arg1[0xd].b == 0)
        struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_49 = j_sub_142a7dd00(0x50)
        struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_130_15 = rax_49
        
        if (rax_49 != 0)
            int64_t rdx_25 = *arg1
            r15 = sub_142b4ae10(rax_49, &var_108, (*(rdx_25 + 0x38))(arg1, rdx_25), 0)
        
        arg1[0x10] = r15
        cond:1_1 = r15 != 0
        goto label_142ac5c7c
    
    int32_t rax_1 = arg1[0xa].d
    int32_t rdi_1 = 1
    int32_t rbx_1
    
    if (rax_1 != 1)
        rbx_1 = 0
        
        if (rax_1 == 2)
            rbx_1 = 2
    else
        rbx_1 = 1
    
    int32_t rcx_1 = *(arg1 + 0x6c)
    int32_t var_158
    int32_t var_150
    int32_t var_148
    struct icu_64::UObject::icu_64::DateTimeRule::VTable** r12_1
    
    if (rcx_1 == 1)
        struct icu_64::UObject::icu_64::DateTimeRule::VTable** rax_8 = j_sub_142a7dd00(0x28)
        struct icu_64::UObject::icu_64::DateTimeRule::VTable** var_130_4 = rax_8
        
        if (rax_8 == 0)
            r12_1 = nullptr
        else
            var_158 = rbx_1
            r12_1 =
                sub_142b4abc0(rax_8, sx.d(arg1[9].b), sx.d(*(arg1 + 0x49)), *(arg1 + 0x4c), var_158)
        
    label_142ac5731:
        
        if (r12_1 != 0)
            struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_10 = j_sub_142a7dd00(0x60)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
            struct icu_64::TimeZoneRule::icu_64::AnnualTimeZoneRule::VTable** rax_15
            
            if (rax_10 == 0)
                rax_15 = nullptr
            else
                int32_t var_138_1 = 1
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_12 =
                    sub_142a481a0(&var_c8, &var_108, Concurrency::agent::agent(&var_88, (DST)"))
                r14 = 3
                int32_t var_138_2 = 3
                int64_t rdx_6 = *arg1
                int32_t rax_13 = (*(rdx_6 + 0x60))(arg1, rdx_6)
                int64_t rdx_7 = *arg1
                int32_t rax_14 = (*(rdx_7 + 0x38))(arg1, rdx_7)
                var_148 = 0x7fffffff
                var_150 = arg1[0xc].d
                var_158.q = r12_1
                rax_15 = sub_142b4ad90(rax_10, rax_12, rax_14, rax_13, var_158, var_150, var_148)
                rdi_1 = 1
            
            arg1[0x13] = rax_15
            
            if ((r14.b & 2) != 0)
                r14 &= 0xfffffffd
                sub_142a47ff0(&var_c8)
            
            if ((r14.b & 1) != 0)
                r14 &= 0xfffffffe
                sub_142a47ff0(&var_88)
            
            int64_t* rbx_3 = arg1[0x13]
            
            if (rbx_3 == 0)
                *r13 = 7
                sub_142ac4860(arg1)
            else
                int64_t rbx_4 = *rbx_3
                uint64_t rdx_9 = zx.q((*(*arg1 + 0x38))(arg1))
                int64_t var_120
                (*(rbx_4 + 0x30))(arg1[0x13], rdx_9, 0, &var_120, var_158, var_150, var_148)
                int32_t rax_18 = *(arg1 + 0x54)
                
                if (rax_18 != 1)
                    rdi_1 = 0
                    
                    if (rax_18 == 2)
                        rdi_1 = 2
                
                int32_t rcx_22 = arg1[0xe].d
                
                if (rcx_22 == 1)
                    struct icu_64::UObject::icu_64::DateTimeRule::VTable** rax_25 =
                        j_sub_142a7dd00(0x28)
                    struct icu_64::UObject::icu_64::DateTimeRule::VTable** var_130_9 = rax_25
                    
                    if (rax_25 == 0)
                        r12_1 = nullptr
                    else
                        var_158 = rdi_1
                        r12_1 = sub_142b4abc0(rax_25, sx.d(arg1[0xb].b), sx.d(*(arg1 + 0x59)), 
                            *(arg1 + 0x5c), var_158)
                else if (rcx_22 == 2)
                    struct icu_64::UObject::icu_64::DateTimeRule::VTable** rax_23 =
                        j_sub_142a7dd00(0x28)
                    struct icu_64::UObject::icu_64::DateTimeRule::VTable** var_130_8 = rax_23
                    
                    if (rax_23 == 0)
                        r12_1 = nullptr
                    else
                        var_150 = rdi_1
                        var_158 = *(arg1 + 0x5c)
                        r12_1 = sub_142b4ab80(rax_23, sx.d(arg1[0xb].b), sx.d(*(arg1 + 0x59)), 
                            sx.d(*(arg1 + 0x5a)), var_158, var_150)
                else if (rcx_22 == 3)
                    struct icu_64::UObject::icu_64::DateTimeRule::VTable** rax_21 =
                        j_sub_142a7dd00(0x28)
                    struct icu_64::UObject::icu_64::DateTimeRule::VTable** var_130_7 = rax_21
                    
                    if (rax_21 == 0)
                        r12_1 = nullptr
                    else
                        var_148 = rdi_1
                        var_150 = *(arg1 + 0x5c)
                        var_158.b = 1
                        r12_1 = sub_142b4ab40(rax_21, sx.d(arg1[0xb].b), sx.d(*(arg1 + 0x59)), 
                            sx.d(*(arg1 + 0x5a)), var_158.b, var_150, var_148)
                else if (rcx_22 == 4)
                    struct icu_64::UObject::icu_64::DateTimeRule::VTable** rax_19 =
                        j_sub_142a7dd00(0x28)
                    struct icu_64::UObject::icu_64::DateTimeRule::VTable** var_130_6 = rax_19
                    
                    if (rax_19 == 0)
                        r12_1 = nullptr
                    else
                        var_148 = rdi_1
                        var_150 = *(arg1 + 0x5c)
                        var_158.b = 0
                        r12_1 = sub_142b4ab40(rax_19, sx.d(arg1[0xb].b), sx.d(*(arg1 + 0x59)), 
                            sx.d(*(arg1 + 0x5a)), var_158.b, var_150, var_148)
                
                if (r12_1 == 0)
                    goto label_142ac5c7e
                
                struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_27 =
                    j_sub_142a7dd00(0x60)
                struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_130_10 = rax_27
                struct icu_64::TimeZoneRule::icu_64::AnnualTimeZoneRule::VTable** rax_31
                
                if (rax_27 == 0)
                    rax_31 = nullptr
                else
                    int32_t r14_1 = r14 | 4
                    int32_t var_138_3 = r14_1
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_29 =
                        sub_142a481a0(&var_88, &var_108, Concurrency::agent::agent(&var_c8, (STD)"))
                    r14 = r14_1 | 8
                    int32_t var_138_4 = r14
                    int64_t rdx_15 = *arg1
                    int32_t rax_30 = (*(rdx_15 + 0x38))(arg1, rdx_15)
                    var_148 = 0x7fffffff
                    var_150 = arg1[0xc].d
                    var_158.q = r12_1
                    rax_31 = sub_142b4ad90(rax_27, rax_29, rax_30, 0, var_158, var_150, var_148)
                
                arg1[0x12] = rax_31
                
                if ((r14.b & 8) != 0)
                    r14 &= 0xfffffff7
                    sub_142a47ff0(&var_88)
                
                if ((r14.b & 4) != 0)
                    r14 &= 0xfffffffb
                    sub_142a47ff0(&var_c8)
                
                int64_t* rdi_4 = arg1[0x12]
                
                if (rdi_4 == 0)
                    goto label_142ac5c7e
                
                int64_t rdi_5 = *rdi_4
                int32_t rax_32 = sub_141b60020(arg1[0x13])
                int64_t rdx_17 = *arg1
                uint64_t rdx_18 = zx.q((*(rdx_17 + 0x38))(arg1, rdx_17))
                int64_t var_128
                (*(rdi_5 + 0x30))(arg1[0x12], rdx_18, zx.q(rax_32), &var_128, var_158, var_150, 
                    var_148)
                
                if (var_120 f<= var_128)
                    struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_42 =
                        j_sub_142a7dd00(0x50)
                    struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_130_13 = rax_42
                    struct icu_64::TimeZoneRule::icu_64::InitialTimeZoneRule::VTable** rax_46
                    
                    if (rax_42 == 0)
                        rax_46 = nullptr
                    else
                        int32_t r14_3 = r14 | 0x40
                        int32_t var_138_7 = r14_3
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_44 =
                            sub_142a481a0(&var_88, &var_108, 
                            Concurrency::agent::agent(&var_c8, (STD)"))
                        r14 = r14_3 | 0x80
                        int32_t var_138_8 = r14
                        int64_t rdx_23 = *arg1
                        rax_46 = sub_142b4ae10(rax_42, rax_44, (*(rdx_23 + 0x38))(arg1, rdx_23), 0)
                    
                    arg1[0x10] = rax_46
                    
                    if (r14.b s< 0)
                        r14 &= 0xffffff7f
                        sub_142a47ff0(&var_88)
                    
                    if ((r14.b & 0x40) != 0)
                        sub_142a47ff0(&var_c8)
                    
                    if (arg1[0x10] == 0)
                        goto label_142ac5c7e
                    
                    struct icu_64::UObject::icu_64::TimeZoneTransition::VTable** rax_47 =
                        j_sub_142a7dd00(0x20)
                    struct icu_64::UObject::icu_64::TimeZoneTransition::VTable** var_130_14 = rax_47
                    
                    if (rax_47 != 0)
                        r15 = sub_142ad0ec0(rax_47, var_120, arg1[0x10], arg1[0x13])
                else
                    struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_34 =
                        j_sub_142a7dd00(0x50)
                    struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_130_11 = rax_34
                    struct icu_64::TimeZoneRule::icu_64::InitialTimeZoneRule::VTable** rax_39
                    
                    if (rax_34 == 0)
                        rax_39 = nullptr
                    else
                        int32_t r14_2 = r14 | 0x10
                        int32_t var_138_5 = r14_2
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_36 =
                            sub_142a481a0(&var_88, &var_108, 
                            Concurrency::agent::agent(&var_c8, (DST)"))
                        r14 = r14_2 | 0x20
                        int32_t var_138_6 = r14
                        int32_t rax_37 = sub_141b60020(arg1[0x13])
                        int64_t rdx_20 = *arg1
                        rax_39 =
                            sub_142b4ae10(rax_34, rax_36, (*(rdx_20 + 0x38))(arg1, rdx_20), rax_37)
                    
                    arg1[0x10] = rax_39
                    
                    if ((r14.b & 0x20) != 0)
                        r14 &= 0xffffffdf
                        sub_142a47ff0(&var_88)
                    
                    if ((r14.b & 0x10) != 0)
                        sub_142a47ff0(&var_c8)
                    
                    if (arg1[0x10] == 0)
                        goto label_142ac5c7e
                    
                    struct icu_64::UObject::icu_64::TimeZoneTransition::VTable** rax_40 =
                        j_sub_142a7dd00(0x20)
                    struct icu_64::UObject::icu_64::TimeZoneTransition::VTable** var_130_12 = rax_40
                    
                    if (rax_40 != 0)
                        r15 = sub_142ad0ec0(rax_40, var_128, arg1[0x10], arg1[0x12])
                
                arg1[0x11] = r15
                cond:1_1 = r15 != 0
            label_142ac5c7c:
                
                if (cond:1_1)
                    arg1[0xf].b = 1
                else
                label_142ac5c7e:
                    *r13 = 7
                    sub_142ac4860(arg1)
        else
            *r13 = 7
    else
        if (rcx_1 == 2)
            struct icu_64::UObject::icu_64::DateTimeRule::VTable** rax_6 = j_sub_142a7dd00(0x28)
            struct icu_64::UObject::icu_64::DateTimeRule::VTable** var_130_3 = rax_6
            
            if (rax_6 == 0)
                r12_1 = nullptr
            else
                var_150 = rbx_1
                var_158 = *(arg1 + 0x4c)
                r12_1 = sub_142b4ab80(rax_6, sx.d(arg1[9].b), sx.d(*(arg1 + 0x49)), 
                    sx.d(*(arg1 + 0x4a)), var_158, var_150)
            
            goto label_142ac5731
        
        if (rcx_1 == 3)
            struct icu_64::UObject::icu_64::DateTimeRule::VTable** rax_4 = j_sub_142a7dd00(0x28)
            struct icu_64::UObject::icu_64::DateTimeRule::VTable** var_130_2 = rax_4
            
            if (rax_4 == 0)
                r12_1 = nullptr
            else
                var_148 = rbx_1
                var_150 = *(arg1 + 0x4c)
                var_158.b = 1
                r12_1 = sub_142b4ab40(rax_4, sx.d(arg1[9].b), sx.d(*(arg1 + 0x49)), 
                    sx.d(*(arg1 + 0x4a)), var_158.b, var_150, var_148)
            
            goto label_142ac5731
        
        if (rcx_1 == 4)
            struct icu_64::UObject::icu_64::DateTimeRule::VTable** rax_2 = j_sub_142a7dd00(0x28)
            struct icu_64::UObject::icu_64::DateTimeRule::VTable** var_130_1 = rax_2
            
            if (rax_2 == 0)
                r12_1 = nullptr
            else
                var_148 = rbx_1
                var_150 = *(arg1 + 0x4c)
                var_158.b = 0
                r12_1 = sub_142b4ab40(rax_2, sx.d(arg1[9].b), sx.d(*(arg1 + 0x49)), 
                    sx.d(*(arg1 + 0x4a)), var_158.b, var_150, var_148)
            
            goto label_142ac5731
        
        *r13 = 0x1b
    result = sub_142a47ff0(&var_108)

__security_check_cookie(result_1 ^ &var_178)
return result
