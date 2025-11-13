// 函数: sub_142b66530
// 地址: 0x142b66530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d0 = -2
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void** rdi = arg2
int128_t* result = arg6
int32_t* rsi = arg8
int32_t* var_128 = rsi

if (*rsi s<= 0)
    if (arg7 s<= 0x64)
        char rax_4 = (((zx.q(arg5) & 1) << 2) + 3).b
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_b0_1 = 2
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_70_1 = 2
        char var_137_1 = 0
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rbx_1 = nullptr
        int64_t var_d8_1 = 0
        char var_147_1 = 0
        char var_138_1 = 0
        int32_t var_130_1 = 0
        int16_t var_134_1 = 0
        char var_12c_1 = 0
        sub_142a9eda0(arg1)
        
        while (true)
            char rax_5 = sub_142b8be10(rdi)
            
            if (rax_5 != 0)
                if (var_138_1 == 2)
                    goto label_142b66e7d
                
                *rsi = 0x10002
                break
            
            char var_148 = rax_5
            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rsi_1 = nullptr
            int16_t var_140
            
            if (sub_142b67e00(rdi, rax_4) != 0)
                rdi.b = 2
            label_142b667b3:
                
                if (var_147_1 == 1)
                    if (var_134_1 != 0)
                    label_142b66e4b:
                        *var_128 = 0x10002
                        break
                        break
                    
                    sub_142a9e9d0(arg1, var_130_1, var_130_1)
                    sub_142a9df60(&var_b8, var_130_1, 0)
                    var_134_1.d = 0
                else if (var_134_1 == 0x2d || var_134_1 == 0x26)
                    var_140 = var_134_1
                    sub_142a48d70(&var_b8, &var_140, 0, 1)
                
                if (rsi_1 == 0)
                    if (rbx_1 == 0)
                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_14 =
                            j_sub_142a7dd00(0xc8)
                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_e0_1 = rax_14
                        
                        if (rax_14 != 0)
                            rax_14 = sub_142a9db60(rax_14)
                        
                        rbx_1 = rax_14
                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_d8_2 = rax_14
                        
                        if (rax_14 == 0)
                            *var_128 = 7
                            break
                    
                    rsi_1 = rbx_1
                
                uint32_t rcx_18 = zx.d(rdi.b)
                
                if (rcx_18 == 1)
                    int128_t var_c8 = *result
                    rdi = arg2
                    sub_142b66530(rsi_1, rdi, arg3, &var_b8, arg5, &var_c8, arg7 + 1, var_128)
                else
                    if (rcx_18 == 2)
                        sub_142b8c210(arg2, rax_4)
                        sub_142b67b00(rsi_1, arg2, &var_b8, var_128)
                        
                        if (*var_128 s> 0)
                            break
                    else if (rcx_18 == 3)
                        sub_142a9e2f0(rsi_1, &var_b8, 0)
                    
                    rdi = arg2
                
                var_137_1 = 1
                
                if (var_138_1 != 0)
                    uint32_t rax_19 = zx.d(var_134_1)
                    
                    if (rax_19 == 0)
                        sub_142a9ebe0(arg1, rsi_1)
                    else if (rax_19 == 0x26)
                        sub_142aa04d0(arg1, rsi_1)
                    else if (rax_19 == 0x2d)
                        sub_142aa00c0(arg1, rsi_1)
                    
                    var_134_1 = 0
                    var_147_1 = 2
                    goto label_142b66c7b
                
                sub_142a9dc70(arg1, rsi_1)
                rsi = var_128
            label_142b66e7d:
                sub_142b8c210(rdi, rax_4)
                char rax_33 = arg5.b
                
                if ((rax_33 & 2) != 0)
                    (*result)(sx.q(*(result + 8)) + arg1, 2)
                else if ((rax_33 & 4) != 0)
                    (*result)(sx.q(*(result + 8)) + arg1, 4)
                
                if (var_12c_1 != 0)
                    sub_142a9f070(arg1)
                
                if (var_137_1 == 0)
                    sub_142a9e060(arg1, arg4, 0)
                else
                    int32_t r9_11
                    int32_t var_ac
                    
                    if (var_b0_1 s< 0)
                        r9_11 = var_ac
                    else
                        r9_11 = sx.d(var_b0_1) s>> 5
                    sub_142a48d00(arg4, &var_b8, 0, r9_11)
                
                if ((*(arg1 + 0x20) & 1) != 0 && *rsi s<= 0)
                    *rsi = 7
                
                break
            
            void var_f8
            sub_142b8be40(rdi, &var_f8)
            rdi = zx.q(sub_142b8bf20(arg2, rax_4, &var_148, var_128))
            int32_t* rdx_3 = var_128
            
            if (*rdx_3 s> 0)
                break
            
            char rax_8 = var_148
            
            if (rdi.d == 0x5b && rax_8 == 0)
                if (var_138_1 == 1)
                    sub_142b8c1f0(arg2, &var_f8)
                    rdi.b = 1
                    goto label_142b667b3
                
                var_138_1 = 1
                var_140 = 0x5b
                sub_142a48d70(&var_b8, &var_140, 0, 1)
                sub_142b8be40(arg2, &var_f8)
                rsi = var_128
                int32_t rax_9 = sub_142b8bf20(arg2, rax_4, &var_148, rsi)
                rdi = zx.q(rax_9)
                
                if (*rsi s> 0)
                    break
                
                if (rax_9 == 0x5e)
                    if (var_148 != 0)
                    label_142b66753:
                        rdi = arg2
                        sub_142b8c1f0(rdi, &var_f8)
                        continue
                        continue
                    else
                        var_12c_1 = 1
                        var_140 = rax_9.w
                        sub_142a48d70(&var_b8, &var_140, 0, rax_9 - 0x5d)
                        sub_142b8be40(arg2, &var_f8)
                        rdi = zx.q(sub_142b8bf20(arg2, rax_4, &var_148, rsi))
                        
                        if (*rsi s> 0)
                            break
                
                if (rdi.d != 0x2d)
                    goto label_142b66753
                
                var_148 = 1
                goto label_142b66bb5
            
            if (arg3 != 0)
                int64_t inptr = (*(*arg3 + 0x10))(arg3, zx.q(rdi.d))
                
                if (inptr != 0)
                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_12 =
                        __RTDynamicCast(inptr, 0, 
                        &class icu_64::UnicodeFunctor `RTTI Type Descriptor', 
                        &class icu_64::UnicodeSet `RTTI Type Descriptor', 0)
                    rsi_1 = rax_12
                    
                    if (rax_12 == 0)
                        goto label_142b66e4b
                    
                    rdi.b = 3
                    goto label_142b667b3
                
                rax_8 = var_148
                rdx_3 = var_128
            
            if (var_138_1 == 0)
                *rdx_3 = 0x10002
                break
            
            if (rax_8 != 0)
            label_142b66bb0:
                rsi = var_128
            label_142b66bb5:
                int32_t rcx_47 = sx.d(var_147_1)
                
                if (rcx_47 == 0)
                label_142b66c72:
                    var_147_1 = 1
                label_142b66c77:
                    var_130_1 = rdi.d
                    goto label_142b66c7b
                
                if (rcx_47 != 1)
                    if (rcx_47 != 2)
                        goto label_142b66c7b
                    
                    if (var_134_1 != 0)
                        *rsi = 0x10002
                        break
                    
                    goto label_142b66c72
                
                if (var_134_1 != 0x2d)
                    sub_142a9e9d0(arg1, var_130_1, var_130_1)
                    sub_142a9df60(&var_b8, var_130_1, 0)
                    goto label_142b66c77
                
                if (var_130_1 s>= rdi.d)
                    *rsi = 0x10002
                    break
                
                sub_142a9e9d0(arg1, var_130_1, rdi.d)
                sub_142a9df60(&var_b8, var_130_1, 0)
                var_140 = 0x2d
                sub_142a48d70(&var_b8, &var_140, 0, 1)
                sub_142a9df60(&var_b8, rdi.d, 0)
                var_147_1 = 0
                var_134_1 = 0
                goto label_142b66c7b
            
            int32_t rax_20 = (rdi - 0x24).d
            
            if (rax_20 u> 0x57)
                goto label_142b66bb0
            
            int16_t* rdx_43
            int32_t r9_9
            
            switch (rax_20)
                case 0
                    rdi = arg2
                    sub_142b8be40(rdi, &var_f8)
                    rsi = var_128
                    int32_t rax_30 = sub_142b8bf20(rdi, rax_4, &var_148, rsi)
                    
                    if (*rsi s> 0)
                        break
                    
                    if (rax_30 != 0x5d || var_148 != 0)
                        rax_30.b = 0
                    else
                        rax_30.b = 1
                    
                    if (arg3 == 0)
                        if (rax_30.b == 0)
                            rdi = 0x24
                            sub_142b8c1f0(arg2, &var_f8)
                            goto label_142b66bb5
                        
                        if (var_134_1 != 0)
                            *rsi = 0x10002
                            break
                            break
                    else if (rax_30.b == 0 || var_134_1 != 0)
                        *rsi = 0x10002
                        break
                        break
                    
                    if (var_147_1 == 1)
                        sub_142a9e9d0(arg1, var_130_1, var_130_1)
                        sub_142a9df60(&var_b8, var_130_1, 0)
                    
                    sub_142a9e7d0(arg1, 0xffff)
                    var_137_1 = 1
                    var_140 = 0x24
                    sub_142a48d70(&var_b8, &var_140, 0, 1)
                    var_140 = 0x5d
                    r9_9 = 1
                    rdx_43 = &var_140
                    goto label_142b66e71
                case 1, 3, 4, 5, 6, 7, 8, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                        0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 
                        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 
                        0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
                        0x38, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 
                        0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 
                        0x52, 0x53, 0x54, 0x55, 0x56
                    goto label_142b66bb0
                case 2
                    if (var_147_1 != 2 || var_134_1 != 0)
                        *rdx_3 = 0x10002
                        break
                    
                    var_134_1 = rdi.w
                    goto label_142b66c7b
                case 9
                    if (var_134_1 != 0)
                        *var_128 = 0x10002
                        break
                    
                    if (var_147_1 != 0)
                        var_134_1 = rdi.w
                    label_142b66c7b:
                        rsi = var_128
                        rdi = arg2
                        
                        if (var_138_1 == 2)
                            goto label_142b66e7d
                        
                        continue
                    
                    sub_142a9e9d0(arg1, rdi.d, rdi.d)
                    rsi = var_128
                    rdi = arg2
                    int32_t rax_31 = sub_142b8bf20(rdi, rax_4, &var_148, rsi)
                    
                    if (*rsi s> 0)
                        break
                    
                    if (rax_31 != 0x5d || var_148 != 0)
                        *rsi = 0x10002
                        break
                    
                    r9_9 = rax_31 - 0x5b
                    rdx_43 = &data_143671c40
                label_142b66e71:
                    sub_142a48d70(&var_b8, rdx_43, 0, r9_9)
                    goto label_142b66e7d
                case 0x39
                    if (var_147_1 == 1)
                        sub_142a9e9d0(arg1, var_130_1, var_130_1)
                        sub_142a9df60(&var_b8, var_130_1, 0)
                    
                    if (var_134_1 == 0x2d)
                        sub_142a9e9d0(arg1, 0x2d, 0x2d)
                        var_140 = 0x2d
                        sub_142a48d70(&var_b8, &var_140, 0, 1)
                    else if (var_134_1 == 0x26)
                        goto label_142b66e4b
                    
                    var_140 = 0x5d
                    sub_142a48d70(&var_b8, &var_140, 0, 1)
                    rsi = var_128
                    rdi = arg2
                    goto label_142b66e7d
                case 0x3a
                    *rdx_3 = 0x10002
                    break
                case 0x57
                    if (var_134_1 != 0)
                        *rdx_3 = 0x10002
                        break
                    
                    if (var_147_1 == 1)
                        sub_142a9e9d0(arg1, var_130_1, var_130_1)
                        sub_142a9df60(&var_b8, var_130_1, 0)
                    
                    var_147_1 = 0
                    int32_t var_6c
                    
                    if ((var_70_1.b & 1) == 0)
                        int32_t rcx_34
                        
                        if (var_70_1 s< 0)
                            rcx_34 = var_6c
                        else
                            rcx_34 = sx.d(var_70_1) s>> 5
                        
                        if (rcx_34 != 0)
                            var_70_1 &= 0x1f
                    else
                        sub_142a4afe0(&var_78)
                    
                    var_140.b = 0
                    char rcx_36
                    
                    if (sub_142b8be10(arg2) != 0)
                        rcx_36 = 0
                    else
                        while (true)
                            int32_t rax_25 = sub_142b8bf20(arg2, rax_4, &var_148, var_128)
                            
                            if (*var_128 s> 0)
                                goto label_142b66f11
                            
                            if (rax_25 == 0x7d && var_148 == 0)
                                rcx_36 = 1
                                break
                            
                            sub_142a48580(&var_78, rax_25)
                            
                            if (sub_142b8be10(arg2) != 0)
                                rcx_36 = var_140.b
                                break
                    
                    int32_t rax_29
                    
                    if (var_70_1 s< 0)
                        rax_29 = var_6c
                    else
                        rax_29 = sx.d(var_70_1) s>> 5
                    
                    if (rax_29 s< 1 || rcx_36 == 0)
                        *var_128 = 0x10002
                        break
                    
                    sub_142a9e730(arg1, &var_78)
                    var_140 = 0x7b
                    sub_142a48d70(&var_b8, &var_140, 0, 1)
                    sub_142a9ded0(&var_b8, &var_78, 0)
                    var_140 = 0x7d
                    sub_142a48d70(&var_b8, &var_140, 0, 1)
                    goto label_142b66c7b
        
    label_142b66f11:
        
        if (rbx_1 != 0)
            sub_142a9dbc0(rbx_1)
            sub_142a47920(rbx_1)
        
        sub_142a47ff0(&var_78)
        result = sub_142a47ff0(&var_b8)
    else
        *rsi = 1

__security_check_cookie(rax_1 ^ &var_188)
return result
