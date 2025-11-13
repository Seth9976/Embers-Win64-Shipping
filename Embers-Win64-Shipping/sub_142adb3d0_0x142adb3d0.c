// 函数: sub_142adb3d0
// 地址: 0x142adb3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_260 = -2
void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
char rdi = arg4
int32_t* result = arg5

if ((*(arg3 + 8) & 1) == 0 && *result s<= 0)
    int32_t rbx_1 = 0
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1d8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_1d0_1 = 2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_258 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_250_1 = 2
    char var_287_1 = 1
    int64_t* i_6 = nullptr
    
    while (true)
        int32_t r8 = rbx_1
        
        if (rbx_1 s>= 0)
            int16_t rax_2 = *(arg3 + 8)
            int32_t rcx_1
            
            if (rax_2 s< 0)
                rcx_1 = *(arg3 + 0xc)
            else
                rcx_1 = sx.d(rax_2) s>> 5
            
            if (rbx_1 s> rcx_1)
                if (rax_2 s< 0)
                    r8 = *(arg3 + 0xc)
                else
                    r8 = sx.d(rax_2) s>> 5
        else
            r8 = 0
        
        int16_t rax_3 = *(arg3 + 8)
        int32_t r9_1
        
        if (rax_3 s< 0)
            r9_1 = *(arg3 + 0xc)
        else
            r9_1 = sx.d(rax_3) s>> 5
        
        int32_t rax_4 = sub_142a491f0(arg3, 0x3b, r8, r9_1 - r8)
        int32_t var_278_1 = rax_4
        
        if (rax_4 == 0xffffffff)
            var_287_1 = 0
            rax_4 = sub_142a4a1f0(arg3)
        
        int32_t r14_2 = rax_4 - rbx_1
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_218
        Concurrency::details::_SyncOriginator<uint64_t>::_SyncOriginator<uint64_t>(&var_218, arg3, 
            rbx_1, r14_2)
        int32_t r8_3 = 0
        int32_t var_20c
        int32_t r9_4 = var_20c
        int16_t var_210
        int32_t rcx_6
        
        if (var_210 s< 0)
            rcx_6 = r9_4
        else
            rcx_6 = sx.d(var_210) s>> 5
        
        if (rcx_6 s< 0)
            if (var_210 s< 0)
                r8_3 = r9_4
            else
                r8_3 = sx.d(var_210) s>> 5
        
        if (var_210 s>= 0)
            r9_4 = sx.d(var_210) s>> 5
        
        int32_t rax_6 = sub_142a491f0(&var_218, 0x3d, r8_3, r9_4 - r8_3)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_8 = &var_1d8
        int32_t var_24c
        
        if (rax_6 != 0xffffffff)
            int32_t rbx_2 = rax_6 + 1
            sub_142a4afe0(rcx_8)
            int32_t rcx_10 = var_20c
            
            if (rbx_2 s>= 0)
                int32_t rdx_3
                
                if (var_210 s< 0)
                    rdx_3 = rcx_10
                else
                    rdx_3 = sx.d(var_210) s>> 5
                
                if (rbx_2 s> rdx_3)
                    if (var_210 s< 0)
                        rbx_2 = rcx_10
                    else
                        rbx_2 = sx.d(var_210) s>> 5
            else
                rbx_2 = 0
            
            if (var_210 s>= 0)
                rcx_10 = sx.d(var_210) s>> 5
            
            int32_t r8_6
            int32_t var_1cc
            
            if (var_1d0_1 s< 0)
                r8_6 = var_1cc
            else
                r8_6 = sx.d(var_1d0_1) s>> 5
            sub_142a49310(&var_1d8, 0, r8_6, &var_218, rbx_2, rcx_10 - rbx_2)
            sub_142a4afe0(&var_258)
            int32_t r8_8
            
            if (var_250_1 s< 0)
                r8_8 = var_24c
            else
                r8_8 = sx.d(var_250_1) s>> 5
            
            sub_142a49310(&var_258, 0, r8_8, &var_218, 0, 1)
        else
            sub_142a48aa0(rcx_8, &var_218, 0)
            sub_142a4ab40(&var_258)
        
        int32_t rax_10 = sub_142a491a0(&var_1d8)
        int64_t* i = i_6
        void* rbx_4 = nullptr
        char rdx_4 = 0
        
        if (i_6 != 0)
            do
                if (rdx_4 != 0)
                    goto label_142adb77b
                
                if (i[1].d == rax_10)
                    rbx_4 = *i
                    rdx_4 = 1
                
                i = i[2]
            while (i != 0)
        
        int32_t* result_1
        
        if (i_6 != 0 && rdx_4 != 0)
        label_142adb77b:
            result_1 = result
        label_142adb780:
            char rcx_24 = var_250_1.b
            
            if ((rcx_24 & 1) == 0)
                int32_t rax_18
                
                if (var_250_1 s< 0)
                    rax_18 = var_24c
                else
                    rax_18 = sx.d(var_250_1) s>> 5
                
                int16_t rcx_33
                
                if (rax_18 == 0)
                    rcx_33 = -1
                else
                    void var_24e
                    void* rax_19 = &var_24e
                    void* var_240
                    
                    if ((rcx_24 & 2) == 0)
                        rax_19 = var_240
                    rcx_33 = *rax_19
                
                int32_t rax_20 = sub_142b59b70(rcx_33)
                
                if (rax_20 != 0x26)
                    void** rdi_3 = *(arg1 + 0x320) + (sx.q(rax_20) << 3)
                    int64_t* rcx_35 = *rdi_3
                    
                    if (rbx_4 != rcx_35)
                        if (rcx_35 != 0)
                            sub_142aa6d70(rcx_35)
                        
                        *rdi_3 = rbx_4
                        
                        if (rbx_4 != 0)
                            sub_142aa6d40(rbx_4)
                    
                    goto label_142adb8c8
                
                *result_1 = 3
                
                if (i_6 != 0)
                    sub_142ad9190(i_6)
            else
                int32_t rcx_25 = sx.d(rdi)
                
                if (rdi == 0)
                label_142adb7a5:
                    void* const rdi_1 = &data_143659990
                    int64_t i_4 = 0x10
                    int64_t i_1
                    
                    do
                        int64_t* rsi_2 = *(arg1 + 0x320) + (sx.q(*rdi_1) << 3)
                        int64_t* rcx_28 = *rsi_2
                        
                        if (rbx_4 != rcx_28)
                            if (rcx_28 != 0)
                                sub_142aa6d70(rcx_28)
                            
                            *rsi_2 = rbx_4
                            
                            if (rbx_4 != 0)
                                sub_142aa6d40(rbx_4)
                        
                        rdi_1 += 4
                        i_1 = i_4
                        i_4 -= 1
                    while (i_1 != 1)
                    rdi = arg4
                    
                    if (rdi != 0)
                        goto label_142adb809
                else if (rcx_25 == 1)
                label_142adb809:
                    void* const rdi_2 = &data_1436599d0
                    int64_t i_5 = 0xa
                    int64_t i_2
                    
                    do
                        int64_t* rsi_3 = *(arg1 + 0x320) + (sx.q(*rdi_2) << 3)
                        int64_t* rcx_31 = *rsi_3
                        
                        if (rbx_4 != rcx_31)
                            if (rcx_31 != 0)
                                sub_142aa6d70(rcx_31)
                            
                            *rsi_3 = rbx_4
                            
                            if (rbx_4 != 0)
                                sub_142aa6d40(rbx_4)
                        
                        rdi_2 += 4
                        i_2 = i_5
                        i_5 -= 1
                    while (i_2 != 1)
                label_142adb8c8:
                    rdi = arg4
                else if (rcx_25 == 2)
                    goto label_142adb7a5
                
                rbx_1 = var_278_1 + 1
                sub_142a47ff0(&var_218)
                
                if (var_287_1 != 0)
                    continue
                
                if (i_6 != 0)
                    int64_t* i_3
                    
                    do
                        i_3 = i_6[2]
                        int64_t* rcx_38 = *i_6
                        
                        if (rcx_38 != 0)
                            sub_142aa6d70(rcx_38)
                        
                        sub_142a47920(i_6)
                        i_6 = i_3
                    while (i_3 != 0)
                
                break
        else
            int64_t* i_9 = j_sub_142a7dd00(0x18)
            int64_t* i_7 = i_9
            int64_t* i_10 = i_9
            struct icu_64::SharedObject::icu_64::SharedNumberFormat::VTable** rbx_5 = nullptr
            
            if (i_9 == 0)
                i_7 = nullptr
            else
                *i_9 = 0
                i_9[1].d = 0
                i_9[2] = 0
            
            int64_t* i_8 = i_7
            
            if (i_7 != 0)
                int64_t var_b8
                __builtin_strncpy(&var_b8, "numbers=", 9)
                int32_t var_290_3 = 0
                char var_b0[0x68]
                sub_142a49990(&var_1d8, 0, r14_2, &var_b0, 0x5c)
                int32_t var_298_3
                var_298_3.q = &var_b8
                struct icu_64::UObject::icu_64::Locale::VTable* var_198
                sub_142a45710(&var_198, arg2 + 8, arg2 + 0x1a, 
                    sx.q(*(arg2 + 0x20)) + *(arg2 + 0xd0), var_298_3)
                i_7[1].d = rax_10
                i_7[2] = i_6
                result_1 = result
                int64_t* rax_12 = sub_142a586f0(&var_198, result_1)
                
                if (*result_1 s<= 0)
                    struct icu_64::SharedObject::icu_64::SharedNumberFormat::VTable** rax_13 =
                        sub_142ad8fb0(rax_12)
                    rbx_5 = rax_13
                    
                    if (rax_13 == 0)
                        *result_1 = 7
                
                int64_t* rcx_21 = *i_7
                
                if (rbx_5 != rcx_21)
                    if (rcx_21 != 0)
                        sub_142aa6d70(rcx_21)
                    
                    *i_7 = rbx_5
                    
                    if (rbx_5 != 0)
                        sub_142aa6d40(rbx_5)
                
                if (*result_1 s<= 0)
                    rbx_4 = *i_7
                    i_6 = i_7
                    sub_142a45a20(&var_198)
                    rdi = arg4
                    goto label_142adb780
                
                if (i_6 != 0)
                    sub_142ad9190(i_6)
                
                sub_142a45a20(&var_198)
                goto label_142adb95b
            
            *result = 7
            
            if (i_6 != 0)
                sub_142ad9190(i_6)
            
        label_142adb95b:
            
            if (i_7 != 0)
                int64_t* rcx_44 = *i_7
                
                if (rcx_44 != 0)
                    sub_142aa6d70(rcx_44)
                
                sub_142a47920(i_7)
        sub_142a47ff0(&var_218)
        break
    
    sub_142a47ff0(&var_258)
    result = sub_142a47ff0(&var_1d8)

__security_check_cookie(rax_1 ^ &var_2b8)
return result
