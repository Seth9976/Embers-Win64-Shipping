// 函数: sub_142a594a0
// 地址: 0x142a594a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_4e8 = -2
void var_568
int64_t rax_1 = __security_cookie ^ &var_568
char rdi = arg3
int64_t r15 = sx.q(arg2)
int32_t var_534 = r15.d
struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** result

if (*arg4 s> 0)
    result = nullptr
else if (r15.d u> 0x10)
    *arg4 = 1
    result = nullptr
else if (*((r15 << 3) + 0x14363ce10) != 0)
    struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** result_2 = nullptr
    struct icu_64::UObject::icu_64::NumberingSystem::VTable** var_48
    
    if (rdi == 0)
        int32_t var_548 = arg4.d
        int32_t rax_2 = sub_142a46470(arg1, "compat", &var_48, 8)
        
        if (*arg4 s<= 0 && rax_2 s> 0)
            int64_t rcx_1 = 0
            
            while (true)
                char rax_3 = *(&var_48 + rcx_1)
                rcx_1 += 1
                
                if (rax_3 != *(rcx_1 + 0x14363d4bf))
                    break
                
                if (rcx_1 == 5)
                    int64_t rbx
                    rbx.b = 1
                    
                    if (r15.d == 1)
                        rbx.b = 0
                    else
                        if (r15.d u> 0x10)
                            goto label_142a59613
                        
                        if (not(test_bit(0x13c04, r15.d)))
                            goto label_142a59613
                    
                    struct icu_64::UObject::icu_64::Format::VTable** rax_4 = j_sub_142a7dd00(0x278)
                    struct icu_64::UObject::icu_64::Format::VTable** var_510_1 = rax_4
                    struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** result_1
                    
                    if (rax_4 == 0)
                        result_1 = nullptr
                    else
                        result_1 = sub_142ab1150(rax_4, arg1, rbx.b, arg4)
                    
                    if (result_1 == 0)
                        if (*arg4 s<= result_1.d)
                            *arg4 = 7
                        
                        goto label_142a59613
                    
                    if (*arg4 s> 0)
                        (*result_1)->__offset(0x0).q(result_1, 1)
                        goto label_142a59613
                    
                    result = result_1
                    goto label_142a59e59
    
label_142a59613:
    
    if (data_144015608 != 2 && sub_142a85f00(&data_144015608) != 0)
        sub_142a59e80()
        sub_142a85e80(&data_144015608)
    
    struct icu_64::UObject::icu_64::NumberingSystem::VTable** rsi_1 = nullptr
    int64_t var_510_2 = 0
    struct icu_64::UObject::icu_64::NumberingSystem::VTable** rbx_1
    
    if (data_144015600 == 0)
        struct icu_64::UObject::icu_64::NumberingSystem::VTable** rax_12 = sub_142aab3f0(arg1, arg4)
        rsi_1 = rax_12
        struct icu_64::UObject::icu_64::NumberingSystem::VTable** var_510_3 = rax_12
        rbx_1 = rax_12
        var_48 = rax_12
    else
        int32_t rax_9 = sub_142a46520(arg1)
        TEB* gsbase
        
        if (data_144015670
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_144015670)
            
            if (data_144015670 == 0xffffffff)
                memset(&data_144015620, 0, 0x50)
                _Mtx_init_in_situ(&data_144015620, 2)
                atexit(sub_142d16000)
                _Init_thread_footer(&data_144015670)
        
        int32_t var_530 = 0x44015620
        sub_142a860a0(&data_144015620)
        struct icu_64::UObject::icu_64::NumberingSystem::VTable** rax_10 =
            sub_142a86d40(data_144015600, rax_9)
        rbx_1 = rax_10
        var_48 = rax_10
        
        if (rax_10 == 0)
            struct icu_64::UObject::icu_64::NumberingSystem::VTable** rax_11 =
                sub_142aab3f0(arg1, arg4)
            rbx_1 = rax_11
            var_48 = rax_11
            sub_142a86e20(data_144015600, rax_9, rax_11, arg4)
        
        sub_142a860d0(&data_144015620)
        rdi = arg3
    
    if (*arg4 s<= 0)
        char rax_13
        
        if (rdi != 0)
            rax_13 = sub_142aabab0(rbx_1)
        
        if (rdi == 0 || rax_13 == 0)
            int64_t* rdi_2 = nullptr
            int64_t* var_528 = nullptr
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_3c8 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_3c0_1 = 2
            char** rax_14 = sub_142a641c0(nullptr, *(arg1 + 0x28), arg4)
            char** var_4e0_1 = rax_14
            
            if (*arg4 s<= 0)
                struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_15 =
                    j_sub_142a7dd00(0xb00)
                struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** var_518_1 = rax_15
                struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_16
                
                if (rax_15 == 0)
                    rax_16 = nullptr
                else
                    rax_16 = sub_142aabd40(rax_15, arg1, arg4)
                
                sub_142a58580(&var_528, rax_16, arg4)
                
                if (*arg4 s<= 0)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_348
                    sub_142a48050(&var_3c8, 
                        sub_142a47a60(&var_348, 1, 
                            sub_142ab5b50(arg1, sub_142aabaa0(rbx_1), *((r15 << 2) + 0x14363cea0), 
                                arg4), 
                            0xffffffff))
                    sub_142a47ff0(&var_348)
                
                if (*arg4 s> 0 || *arg4 s> 0)
                    rdi_2 = var_528
                else
                    rdi_2 = var_528
                    
                    if (r15.d u<= 0x10 && test_bit(0x13404, r15.d))
                        int64_t rbx_2 = rdi_2[0x12e]
                        
                        if (rbx_2 != 0)
                            int32_t rax_20 = std::_WChar_traits<wchar_t>::length(rbx_2)
                            sub_142a4afe0(&var_3c8)
                            int32_t r8_9
                            int32_t var_3bc
                            
                            if (var_3c0_1 s< 0)
                                r8_9 = var_3bc
                            else
                                r8_9 = sx.d(var_3c0_1) s>> 5
                            sub_142a49390(&var_3c8, 0, r8_9, rbx_2, 0, rax_20)
                    
                    struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** result_4 =
                        nullptr
                    int64_t var_518_2 = 0
                    
                    if (sub_142aabab0(var_48) == 0)
                        if (r15.d == 0xa)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_248
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_43 =
                                sub_142a47a60(&var_248, 1, &data_14363ce00, (r15 - 8).d)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_288
                            sub_142a58a40(&var_3c8, sub_142a47a60(&var_288, 1, &data_14363cd7c, 1), 
                                rax_43)
                            sub_142a47ff0(&var_288)
                            sub_142a47ff0(&var_248)
                            r15 = zx.q(var_534)
                        
                        struct icu_64::UObject::icu_64::Format::VTable** rax_45 =
                            j_sub_142a7dd00(0x178)
                        struct icu_64::UObject::icu_64::Format::VTable** var_500_1 = rax_45
                        struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** result_8
                        
                        if (rax_45 == 0)
                            result_8 = nullptr
                        else
                            result_8 = sub_142a5ab70(rax_45, &var_3c8, rdi_2, r15.d, arg4)
                        
                        struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** result_9 =
                            result_8
                        
                        if (result_8 == 0)
                            *arg4 = 7
                        label_142a59dd4:
                            
                            if (result_8 != 0)
                                (*result_8)->__offset(0x0).q(result_8, 1)
                        else
                            rdi_2 = nullptr
                            var_528 = nullptr
                            
                            if (*arg4 s> 0)
                                goto label_142a59dd4
                            
                            if (var_534 == 0xd)
                                sub_142a5e120(result_8, 1, arg4)
                            
                            if (*arg4 s> 0)
                                goto label_142a59dd4
                            
                            result_4 = result_8
                            struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** 
                                result_6 = result_4
                        label_142a59d94:
                            char* rax_47 = sub_142a637a0(rax_14, 0, arg4)
                            sub_142aa8420(result_4, sub_142a637a0(rax_14, 1, arg4), rax_47)
                            
                            if (*arg4 s<= 0)
                                struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** 
                                    result_3 = result_4
                                result_4 = nullptr
                                result_2 = result_3
                    else
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_4c8 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_4c0_1 = 2
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_488 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_480_1 = 2
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_408 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_400_1 = 2
                        struct icu_64::UObject::icu_64::Locale::VTable* var_208
                        sub_142a459c0(&var_208)
                        int32_t r15_1 = 3
                        struct icu_64::UObject::icu_64::NumberingSystem::VTable** rcx_23 = var_48
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_308
                        sub_142a48aa0(&var_4c8, (*rcx_23)->vFunc_2(rcx_23, &var_308), 0)
                        sub_142a47ff0(&var_308)
                        int32_t var_4bc
                        int32_t r9_5
                        
                        if (var_4c0_1 s< 0)
                            r9_5 = var_4bc
                        else
                            r9_5 = sx.d(var_4c0_1) s>> 5
                        
                        int32_t rax_26 = sub_142a491f0(&var_4c8, 0x2f, 0, r9_5)
                        int32_t r9_7
                        
                        if (var_4c0_1 s< 0)
                            r9_7 = var_4bc
                        else
                            r9_7 = sx.d(var_4c0_1) s>> 5
                        
                        int32_t rax_28 = sub_142a49270(&var_4c8, 0x2f, 0, r9_7)
                        
                        if (rax_28 s<= rax_26)
                            sub_142a45c20(&var_208, arg1)
                            sub_142a48aa0(&var_408, &var_4c8, 0)
                        else
                            int16_t var_43c
                            void* var_448 = &var_43c:1
                            int32_t var_440_1 = 0x28
                            var_43c = 0
                            int32_t var_410_1 = 0
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_2c8
                            sub_142a8cd50(&var_448, sub_142a4ad20(&var_4c8, &var_2c8, 0, rax_26), 
                                arg4)
                            sub_142a47ff0(&var_2c8)
                            sub_142a4afe0(&var_488)
                            int32_t var_47c
                            int32_t r8_12
                            
                            if (var_480_1 s< 0)
                                r8_12 = var_47c
                            else
                                r8_12 = sx.d(var_480_1) s>> 5
                            
                            sub_142a49310(&var_488, 0, r8_12, &var_4c8, rax_26 + 1, 
                                rax_28 - rax_26 - 1)
                            int32_t r15_3 = rax_28 + 1
                            sub_142a4afe0(&var_408)
                            int32_t rcx_37 = var_4bc
                            
                            if (r15_3 s>= 0)
                                int32_t rdx_19
                                
                                if (var_4c0_1 s< 0)
                                    rdx_19 = rcx_37
                                else
                                    rdx_19 = sx.d(var_4c0_1) s>> 5
                                
                                if (r15_3 s> rdx_19)
                                    if (var_4c0_1 s< 0)
                                        r15_3 = rcx_37
                                    else
                                        r15_3 = sx.d(var_4c0_1) s>> 5
                            else
                                r15_3 = 0
                            
                            if (var_4c0_1 s>= 0)
                                rcx_37 = sx.d(var_4c0_1) s>> 5
                            
                            int32_t r8_14
                            int32_t var_3fc
                            
                            if (var_400_1 s< 0)
                                r8_14 = var_3fc
                            else
                                r8_14 = sx.d(var_400_1) s>> 5
                            sub_142a49310(&var_408, 0, r8_14, &var_4c8, r15_3, rcx_37 - r15_3)
                            struct icu_64::UObject::icu_64::Locale::VTable* var_128
                            sub_142a45b10(&var_208, sub_142a460b0(&var_128, var_448))
                            sub_142a45a20(&var_128)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_388
                            sub_142a47a60(&var_388, 1, u"SpelloutRules", 0xffffffff)
                            int32_t var_37c
                            int32_t rax_36 = var_37c
                            int16_t var_380
                            int32_t rcx_46
                            
                            if (var_380 s< 0)
                                rcx_46 = rax_36
                            else
                                rcx_46 = sx.d(var_380) s>> 5
                            
                            int32_t r8_17
                            
                            if (var_480_1 s< 0)
                                r8_17 = var_47c
                            else
                                r8_17 = sx.d(var_480_1) s>> 5
                            
                            char rax_37
                            
                            if ((var_380.b & 1) == 0)
                                if (var_380 s>= 0)
                                    rax_36 = sx.d(var_380) s>> 5
                                
                                int32_t r10_1 = 0
                                
                                if (rax_36 s< 0)
                                    r10_1 = rax_36
                                
                                if (rcx_46 s>= 0)
                                    int32_t rax_39 = rax_36 - r10_1
                                    
                                    if (rcx_46 s> rax_39)
                                        rcx_46 = rax_39
                                else
                                    rcx_46 = 0
                                
                                void var_37e
                                void* r9_11 = &var_37e
                                void* var_370
                                
                                if ((var_380.b & 2) == 0)
                                    r9_11 = var_370
                                rax_37 = sub_142a48fb0(&var_488, 0, r8_17, r9_11, r10_1, rcx_46)
                            else
                                rax_37 = not.b(var_480_1.b) & 1
                            
                            r15_1 = sbb.d(r15_3, r15_3, rax_37 != 0) & 3
                            sub_142a47ff0(&var_388)
                            
                            if (var_43c.b != 0)
                                sub_142a7dcd0(var_448)
                        
                        struct icu_64::UObject::icu_64::Format::VTable** rax_40 =
                            j_sub_142a7dd00(0x2f8)
                        struct icu_64::UObject::icu_64::Format::VTable** var_508_1 = rax_40
                        struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** result_7
                        
                        if (rax_40 == 0)
                            result_7 = nullptr
                        else
                            result_7 = sub_142aadaf0(rax_40, r15_1, &var_208, arg4)
                        
                        if (result_7 != 0)
                            (*result_7)->__offset(0x170).q(result_7, &var_408, arg4)
                            result_4 = result_7
                            struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** 
                                result_5 = result_4
                            sub_142a45a20(&var_208)
                            sub_142a47ff0(&var_408)
                            sub_142a47ff0(&var_488)
                            sub_142a47ff0(&var_4c8)
                            goto label_142a59d94
                        
                        *arg4 = 7
                        sub_142a45a20(&var_208)
                        sub_142a47ff0(&var_408)
                        sub_142a47ff0(&var_488)
                        sub_142a47ff0(&var_4c8)
                    
                    if (result_4 != 0)
                        (*result_4)->__offset(0x0).q(result_4, 1)
            
            if (rax_14 != 0)
                sub_142a5f860(rax_14)
            
            sub_142a47ff0(&var_3c8)
            
            if (rdi_2 != 0)
                (**rdi_2)(rdi_2, 1)
        else
            *arg4 = 0x10
    
    if (rsi_1 != 0)
        struct icu_64::UObject::icu_64::NumberingSystem::VTable* r8_26 = *rsi_1
        r8_26->__offset(0x0).q(rsi_1, 1, r8_26)
    
    result = result_2
else
    *arg4 = 0x10
    result = nullptr

label_142a59e59:
__security_check_cookie(rax_1 ^ &var_568)
return result
