// 函数: sub_142b4c140
// 地址: 0x142b4c140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_128 = -2
uint128_t zmm6
uint128_t var_58 = zmm6
uint128_t zmm7
uint128_t var_68 = zmm7
uint128_t zmm9
uint128_t var_88 = zmm9
void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
struct icu_64::TimeZoneRule::icu_64::AnnualTimeZoneRule::VTable*** rdi = arg4
struct icu_64::TimeZoneRule::icu_64::AnnualTimeZoneRule::VTable*** var_140 = arg4
struct icu_64::TimeZoneRule::icu_64::InitialTimeZoneRule::VTable*** var_130 = arg3
int64_t* result = arg5
struct icu_64::TimeZoneRule::icu_64::AnnualTimeZoneRule::VTable*** result_1 = result
struct icu_64::TimeZoneRule::icu_64::InitialTimeZoneRule::VTable** rsi = nullptr
*arg3 = 0
*arg4 = 0
*result = 0

if (*arg6 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_d0_1 = 2
    struct icu_64::TimeZoneRule::icu_64::AnnualTimeZoneRule::VTable** r15_1 = nullptr
    struct icu_64::TimeZoneRule::icu_64::AnnualTimeZoneRule::VTable** r14_1 = nullptr
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_110_1 = 2
    struct icu_64::UObject::icu_64::TimeZoneTransition::VTable* var_178
    sub_142ad0f20(&var_178)
    char rax_3
    int64_t r8
    rax_3, r8 = (*(*arg1 + 0x68))(arg1, arg2, 0, &var_178)
    int32_t var_198
    int32_t var_18c
    
    if (rax_3 != 0)
        Concurrency::details::SchedulerBase::GetPolicy(sub_1405948b0(&var_178), &var_d8)
        var_198 = sub_1405f8de0(sub_1405948b0(&var_178))
        var_18c = sub_141b60020(sub_1405948b0(&var_178))
        zmm9 = sub_142ad1130(&var_178)
        int32_t rax_10 = sub_141b60020(sub_1405948b0(&var_178))
        int32_t rax_12
        
        if (rax_10 == 0)
            rax_12 = sub_141b60020(sub_14082fb80(&var_178))
        
        if (rax_10 == 0 && rax_12 != 0)
        label_142b4c2c6:
            uint128_t zmm0_1
            zmm0_1.q = arg2.q - -0x421d5ec4b0000000
            
            if (not(zmm0_1.q f<= zmm9.q))
                zmm0_1.q = _mm_cvtepi32_pd(zx.q(var_198)).q f+ zmm9.q
                zmm0_1.q = zmm0_1.q f+ _mm_cvtepi32_pd(zx.q(var_18c)).q
                int32_t var_184
                int32_t* var_1a8_1 = &var_184
                void var_150
                void* var_1b0_1 = &var_150
                int32_t var_180
                int32_t* var_1b8_1 = &var_180
                int32_t var_194
                int32_t var_190
                int32_t var_188
                int512_t zmm1
                int128_t zmm8_1
                zmm1, zmm7, zmm8_1, zmm9 =
                    sub_142accb70(zmm0_1, &var_190, &var_194, &var_188, var_1b8_1)
                int32_t rax_17 = sub_142acc600(var_190, var_194, var_188)
                struct icu_64::UObject::icu_64::DateTimeRule::VTable** rax_18 =
                    j_sub_142a7dd00(0x28)
                struct icu_64::UObject::icu_64::DateTimeRule::VTable** var_158_1 = rax_18
                struct icu_64::UObject::icu_64::DateTimeRule::VTable** rdi_1
                
                if (rax_18 == 0)
                    rdi_1 = nullptr
                else
                    var_1b0_1.d = 0
                    var_1b8_1.d = var_184
                    rdi_1 =
                        sub_142b4ab80(rax_18, var_194, rax_17, var_180, var_1b8_1.d, var_1b0_1.d)
                
                Concurrency::details::SchedulerBase::GetPolicy(sub_14082fb80(&var_178), &var_118)
                struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_21
                int64_t r8_4
                rax_21, r8_4 = j_sub_142a7dd00(0x60)
                struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_158_2 = rax_21
                
                if (rax_21 == 0)
                    r15_1 = nullptr
                else
                    int32_t rax_23 = sub_141b60020(sub_14082fb80(&var_178))
                    var_1a8_1.d = 0x7fffffff
                    var_1b0_1.d = var_190
                    var_1b8_1 = rdi_1
                    struct icu_64::TimeZoneRule::icu_64::AnnualTimeZoneRule::VTable** rax_24
                    rax_24, r8_4 = sub_142b4ad90(rax_21, &var_118, var_198, rax_23, var_1b8_1, 
                        var_1b0_1.d, var_1a8_1.d)
                    r15_1 = rax_24
                
                if (sub_1405f8de0(sub_14082fb80(&var_178)) != var_198)
                    goto label_142b4c68b
                
                zmm1.o = zmm9
                char rax_28
                rax_28, r8_4 =
                    (*(*arg1 + 0x68))(arg1, zmm1, 0, &var_178, var_1b8_1, var_1b0_1, var_1a8_1)
                
                if (rax_28 == 0)
                    goto label_142b4c68b
                
                int32_t rax_30 = sub_141b60020(sub_1405948b0(&var_178))
                int32_t rax_32
                
                if (rax_30 == 0)
                    rax_32 = sub_141b60020(sub_14082fb80(&var_178))
                
                if (rax_30 != 0 || rax_32 == 0)
                    if (sub_141b60020(sub_1405948b0(&var_178)) == 0)
                        goto label_142b4c68b
                    
                    if (sub_141b60020(sub_14082fb80(&var_178)) != 0)
                        goto label_142b4c68b
                
                zmm6.q = zmm9.q f+ zmm7.q
                
                if (zmm6.q f<= sub_142ad1130(&var_178))
                    goto label_142b4c68b
                
                zmm6 = _mm_cvtepi32_pd(zx.q(sub_1405f8de0(sub_1405948b0(&var_178))))
                zmm7.q = sub_142ad1130(&var_178).q f+ zmm6.q
                uint128_t zmm0_3
                zmm0_3.q = _mm_cvtepi32_pd(zx.q(sub_141b60020(sub_1405948b0(&var_178)))).q f+ zmm7.q
                var_1a8_1 = &var_184
                int32_t var_1b0_2 = &var_150
                zmm1, zmm8_1 = sub_142accb70(zmm0_3, &var_190, &var_194, &var_188, &var_180)
                int32_t rax_41 = sub_142acc600(var_190, var_194, var_188)
                struct icu_64::UObject::icu_64::DateTimeRule::VTable** rax_42 =
                    j_sub_142a7dd00(0x28)
                struct icu_64::UObject::icu_64::DateTimeRule::VTable** var_158_3 = rax_42
                struct icu_64::UObject::icu_64::DateTimeRule::VTable** r13_1
                
                if (rax_42 == 0)
                    r13_1 = nullptr
                else
                    var_1b8_1.d = var_184
                    r13_1 = sub_142b4ab80(rax_42, var_194, rax_41, var_180, var_1b8_1.d, 0)
                
                Concurrency::details::SchedulerBase::GetPolicy(sub_14082fb80(&var_178), &var_118)
                struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_45 =
                    j_sub_142a7dd00(0x60)
                struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_158_4 = rax_45
                
                if (rax_45 == 0)
                    r14_1 = nullptr
                else
                    int32_t rdi_3 = var_190 - 1
                    int32_t rax_47 = sub_141b60020(sub_14082fb80(&var_178))
                    var_1a8_1.d = 0x7fffffff
                    r14_1 = sub_142b4ad90(rax_45, &var_118, sub_1405f8de0(sub_14082fb80(&var_178)), 
                        rax_47, r13_1, rdi_3, var_1a8_1.d)
                
                struct icu_64::TimeZoneRule::icu_64::AnnualTimeZoneRule::VTable* rdi_4 = *r14_1
                int32_t rax_52 = sub_141b60020(sub_1405948b0(&var_178))
                int64_t var_148
                var_1b0_1 = &var_148
                var_1b8_1.b = 1
                zmm1.o = zmm8_1
                
                if (rdi_4->__offset(0x48).q(r14_1, zmm1, 
                        zx.q(sub_1405f8de0(sub_1405948b0(&var_178))), zx.q(rax_52), var_1b8_1, 
                        var_1b0_1, var_1a8_1) != 0 && not(var_148 f> zmm8_1.q))
                    int32_t rax_57 = sub_1405f8de0(sub_14082fb80(&var_178))
                    
                    if (var_198 != rax_57)
                        goto label_142b4c67d
                    
                    int32_t rax_59 = sub_141b60020(sub_14082fb80(&var_178))
                    
                    if (var_18c == rax_59)
                        goto label_142b4c88a
                    
                    goto label_142b4c67d
                
            label_142b4c67d:
                (*r14_1)->__offset(0x0).q(r14_1, 1)
                r14_1 = nullptr
            label_142b4c68b:
                r8_4.b = 1
                zmm1.o = zmm8_1
                
                if ((*(*arg1 + 0x70))(arg1, zmm1, r8_4, &var_178, var_1b8_1, var_1b0_1, var_1a8_1)
                        == 0)
                    goto label_142b4c8c3
                
                int32_t rax_64 = sub_141b60020(sub_1405948b0(&var_178))
                int32_t rax_66
                
                if (rax_64 == 0)
                    rax_66 = sub_141b60020(sub_14082fb80(&var_178))
                
                if (rax_64 != 0 || rax_66 == 0)
                    if (sub_141b60020(sub_1405948b0(&var_178)) == 0)
                        goto label_142b4c8c3
                    
                    if (sub_141b60020(sub_14082fb80(&var_178)) != 0)
                        goto label_142b4c8c3
                
                zmm6 = _mm_cvtepi32_pd(zx.q(sub_1405f8de0(sub_1405948b0(&var_178))))
                zmm7.q = sub_142ad1130(&var_178).q f+ zmm6.q
                uint128_t zmm0_5
                zmm0_5.q = _mm_cvtepi32_pd(zx.q(sub_141b60020(sub_1405948b0(&var_178)))).q f+ zmm7.q
                int32_t* var_1a8_2 = &var_184
                int32_t var_1b0_3 = &var_150
                int128_t zmm8_2
                zmm1, zmm8_2, zmm9 = sub_142accb70(zmm0_5, &var_190, &var_194, &var_188, &var_180)
                int32_t rax_75 = sub_142acc600(var_190, var_194, var_188)
                struct icu_64::UObject::icu_64::DateTimeRule::VTable** rax_76 =
                    j_sub_142a7dd00(0x28)
                struct icu_64::UObject::icu_64::DateTimeRule::VTable** var_158_5 = rax_76
                int32_t* var_1b8_2
                struct icu_64::UObject::icu_64::DateTimeRule::VTable** rdi_5
                
                if (rax_76 == 0)
                    rdi_5 = nullptr
                else
                    var_1b8_2.d = var_184
                    rdi_5 = sub_142b4ab80(rax_76, var_194, rax_75, var_180, var_1b8_2.d, 0)
                
                Concurrency::details::SchedulerBase::GetPolicy(sub_14082fb80(&var_178), &var_118)
                struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_79 =
                    j_sub_142a7dd00(0x60)
                struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_158_6 = rax_79
                
                if (rax_79 == 0)
                    r14_1 = nullptr
                else
                    int32_t rax_81 = sub_140961f10(r15_1) - 1
                    var_1a8_2.d = 0x7fffffff
                    r14_1 = sub_142b4ad90(rax_79, &var_118, var_198, var_18c, rdi_5, rax_81, 
                        var_1a8_2.d)
                
                struct icu_64::TimeZoneRule::icu_64::AnnualTimeZoneRule::VTable* rdi_6 = *r14_1
                int32_t rax_84 = sub_141b60020(sub_1405948b0(&var_178))
                var_1b8_2.b = 0
                zmm1.o = zmm8_2
                
                if (rdi_6->__offset(0x40).q(r14_1, zmm1, 
                        zx.q(sub_1405f8de0(sub_1405948b0(&var_178))), zx.q(rax_84), var_1b8_2, 
                        &var_148, var_1a8_2) == 0 || zmm9.q f>= var_148)
                    (*r14_1)->__offset(0x0).q(r14_1, 1)
                    r14_1 = nullptr
                label_142b4c8c3:
                    
                    if (r15_1 != 0)
                        (*r15_1)->__offset(0x0).q(r15_1, 1)
                    
                    r15_1 = nullptr
                    rdi = var_140
                else
                label_142b4c88a:
                    Concurrency::details::SchedulerBase::GetPolicy(r15_1, &var_d8)
                    var_198 = sub_1405f8de0(r15_1)
                    var_18c = sub_141b60020(r15_1)
                    rdi = var_140
        else if (sub_141b60020(sub_1405948b0(&var_178)) != 0
                && sub_141b60020(sub_14082fb80(&var_178)) == 0)
            goto label_142b4c2c6
        
        goto label_142b4c96b
    
    r8.b = 1
    
    if ((*(*arg1 + 0x70))(arg1, arg2, r8, &var_178) == 0)
        (*(*arg1 + 0x18))(arg1, arg2, 0, &var_198, &var_18c, arg6)
        
        if (*arg6 s<= 0)
            goto label_142b4c96b
    else
        Concurrency::details::SchedulerBase::GetPolicy(sub_14082fb80(&var_178), &var_d8)
        var_198 = sub_1405f8de0(sub_14082fb80(&var_178))
        var_18c = sub_141b60020(sub_14082fb80(&var_178))
    label_142b4c96b:
        struct icu_64::UObject::icu_64::TimeZoneRule::VTable** rax_100 = j_sub_142a7dd00(0x50)
        struct icu_64::UObject::icu_64::TimeZoneRule::VTable** var_158_7 = rax_100
        
        if (rax_100 != 0)
            rsi = sub_142b4ae10(rax_100, &var_d8, var_198, var_18c)
        
        *var_130 = rsi
        
        if (r15_1 != 0 && r14_1 != 0)
            if (sub_141b60020(r15_1) == 0)
                *rdi = r15_1
                *result_1 = r14_1
            else
                *result_1 = r15_1
                *rdi = r14_1
    
    sub_142ad0f40(&var_178)
    sub_142a47ff0(&var_118)
    result = sub_142a47ff0(&var_d8)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
