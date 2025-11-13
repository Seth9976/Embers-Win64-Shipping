// 函数: sub_142b5ce70
// 地址: 0x142b5ce70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8 = -2
void var_168
uint64_t result = __security_cookie ^ &var_168
uint64_t result_1 = result
int64_t* rbx = arg4
int64_t* var_110 = rbx
char* var_108 = arg3

if (*arg5 s<= 0)
    void var_a8
    result = (*(*arg4 + 0x50))(rbx, &var_a8, arg5)
    
    if (*arg5 s<= 0)
        int32_t rax_2 = 0
        int64_t* var_f8_1 = nullptr
        int32_t rdx_1 = 0
        
        while (true)
            result = sub_142ac2da0(&var_a8, rdx_1, &var_108, rbx)
            
            if (result.b == 0)
                break
            
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
            sub_142a47e10(&var_78, var_108, 0xffffffff)
            int16_t var_70
            int32_t var_6c
            int32_t rdx_4
            
            if (var_70 s< 0)
                rdx_4 = var_6c
            else
                rdx_4 = sx.d(var_70) s>> 5
            
            if (sub_142a48fb0(&var_78, rdx_4 - 8, 8, u"%variantleapcyclicNameSets", 0, 8) == 0)
                goto label_142b5d4cf
            
            int32_t rax_6 = (*(*rbx + 0x10))(rbx)
            int32_t var_138
            
            if (rax_6 != 0)
                var_138 = sub_142a4a1f0(arg2)
                int16_t var_130 = 0x2f
                void* rax_15 = sub_142a48d70(arg2, &var_130, 0, 1)
                int32_t r9_6
                
                if (var_70 s< 0)
                    r9_6 = var_6c
                else
                    r9_6 = sx.d(var_70) s>> 5
                
                sub_142a48d00(rax_15, &var_78, 0, r9_6)
                int32_t var_140_2 = 0xe
                int32_t var_148_2 = 0
                
                if (sub_142a48fb0(arg2, 0, 0xe, &(*%variantleapcyclicNameSets")[0xc], var_148_2, 
                        var_140_2) != 0)
                    goto label_142b5d256
                
                int32_t rbx_3 = 0
                
                if (sub_142a4a1f0(arg2) != 0xe)
                    rbx_3 = 8
                    var_140_2 = 8
                    var_148_2 = 0
                    
                    if (sub_142a48fb0(arg2, 0xe, 8, /zodiacs/dayParts", var_148_2, var_140_2) == 0)
                        goto label_142b5d1a0
                    
                    rbx_3 = 6
                    var_140_2 = 6
                    var_148_2 = 0
                    
                    if (sub_142a48fb0(arg2, 0xe, 6, u"/years", var_148_2, var_140_2) == 0)
                        goto label_142b5d1a0
                    
                    rbx_3 = 9
                    var_140_2 = 9
                    var_148_2 = 0
                    
                    if (sub_142a48fb0(arg2, 0xe, 9, &(*/zodiacs/dayParts")[8], var_148_2, var_140_2)
                            != 0)
                        goto label_142b5d22c
                    
                    goto label_142b5d1a0
                
            label_142b5d1a0:
                var_130.d = 0
                int32_t rax_21 = sub_142a4a1f0(arg2)
                char rax_22
                
                if (rbx_3 + 0xe != rax_21)
                    var_130.d = 7
                    var_140_2 = 7
                    var_148_2 = 0
                    rax_22 = sub_142a48fb0(arg2, rbx_3 + 0xe, 7, u"/format", var_148_2, var_140_2)
                
                if (rbx_3 + 0xe != rax_21 && rax_22 != 0)
                label_142b5d22c:
                    sub_142b5df40(arg2, 0, var_138)
                    sub_142a47ff0(&var_78)
                    rbx = var_110
                else
                    int32_t rbx_5 = rbx_3 + 0xe + var_130.d
                    int32_t rax_23 = sub_142a4a1f0(arg2)
                    char rax_24
                    
                    if (rbx_5 != rax_23)
                        var_140_2 = 0xc
                        var_148_2 = 0
                        rax_24 = sub_142a48fb0(arg2, rbx_5, 0xc, 
                            /abbreviatedGyMdkHmsSEDFwWahKzYeugAZvcLQqVUOXxrbB", var_148_2, var_140_2)
                    
                    if (rbx_5 != rax_23 && rax_24 != 0)
                        goto label_142b5d22c
                    
                    rbx = var_110
                label_142b5d256:
                    
                    if (sub_142a86c30(*(arg1 + 8), arg2) != 0)
                        goto label_142b5d4c5
                    
                    if (sub_142a86c30(*(arg1 + 0xb8), arg2) != 0)
                        goto label_142b5d4c5
                    
                    int32_t rax_29 = sub_142b5caa0(arg1, arg2, rbx, arg5)
                    
                    if (*arg5 s> 0)
                        result = sub_142a47ff0(&var_78)
                        break
                        break
                    
                    if (rax_29 != 0)
                        bool cond:0_1 = (*(*rbx + 0x10))(rbx) != 8
                        int64_t rax_35 = *rbx
                        
                        if (cond:0_1)
                            if ((*(rax_35 + 0x10))(rbx) != 2)
                                goto label_142b5d4c5
                            
                            var_148_2.q = arg5
                            sub_142b5ce70(arg1, arg2, var_108, rbx, var_148_2, var_140_2)
                            
                            if (*arg5 s<= 0)
                                goto label_142b5d4c5
                            
                            result = sub_142a47ff0(&var_78)
                            break
                            break
                        
                        void var_c0
                        (*(rax_35 + 0x48))(rbx, &var_c0, arg5)
                        int32_t var_b0
                        int64_t rax_36 = sx.q(var_b0)
                        var_130.d = rax_36.d
                        int64_t* rax_37
                        
                        if (rax_36.d != 0)
                            int64_t rax_38 = 0x40 * rax_36
                            
                            if (mulu.dp.q(0x40, rax_36) u>> 0x40 != zx.o(0))
                                rax_38 = -1
                            
                            uint64_t rax_39 = rax_38 + 8
                            
                            if (rax_38 u>= -8)
                                rax_39 = -1
                            
                            rax_37 = j_sub_142a7dd00(rax_39)
                        else
                            rax_37 = j_sub_140a82f30(zx.q((rax_36 + 8).d))
                        
                        int64_t* var_128_4 = rax_37
                        void* rbx_8
                        
                        if (rax_37 == 0)
                            rbx_8 = nullptr
                        else
                            *rax_37 = rax_36
                            rbx_8 = &rax_37[1]
                            var_148_2.q = sub_142a47ff0
                            `eh vector constructor iterator'(rbx_8, 0x40, sx.q(var_130.d))
                        
                        void* var_128_5 = rbx_8
                        
                        if (rbx_8 == 0 && *arg5 s<= rbx_8.d)
                            *arg5 = 7
                        
                        (*(*var_110 + 0x60))(var_110, rbx_8, zx.q(var_130.d), arg5, var_148_2, 
                            var_140_2)
                        int64_t var_128_6 = 0
                        sub_142a5a080(arg1 + 8, arg2, rbx_8, arg5)
                        sub_142b5ded0(arg1 + 0x60, arg2, var_130.d, arg5)
                        
                        if (*arg5 s> 0)
                            result = sub_142a47ff0(&var_78)
                            break
                            break
                        
                        rbx = var_110
                    label_142b5d4c5:
                        sub_142b5df40(arg2, 0, var_138)
                    label_142b5d4cf:
                        sub_142a47ff0(&var_78)
                    else
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_30 =
                            j_sub_142a7dd00(zx.q(rax_29 + 0x40))
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_d0_1 =
                            rax_30
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_6
                        
                        if (rax_30 == 0)
                            rbx_6 = nullptr
                        else
                            rbx_6 = sub_142a479b0(rax_30, arg1 + 0x218)
                        
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_f0_1 = rbx_6
                        
                        if (rbx_6 == 0 && *arg5 s<= rbx_6.d)
                            *arg5 = 7
                        
                        sub_142ae7110(arg1 + 0x168, rbx_6, arg5)
                        
                        if (*arg5 s> 0)
                        label_142b5d4fe:
                            
                            if (rbx_6 == 0)
                                result = sub_142a47ff0(&var_78)
                                break
                                break
                            
                            (*rbx_6)->__offset(0x0).q(rbx_6, 1)
                            result = sub_142a47ff0(&var_78)
                            break
                            break
                        
                        rbx_6 = nullptr
                        int64_t var_f0_2 = 0
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_32 =
                            j_sub_142a7dd00(0x40)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_c8_1 =
                            rax_32
                        
                        if (rax_32 != 0)
                            rax_32 = sub_142a479b0(rax_32, arg2)
                        
                        var_130.q = rax_32
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_128_2 =
                            rax_32
                        
                        if (rax_32 == 0 && *arg5 s<= rax_32.d)
                            *arg5 = 7
                        
                        sub_142ae7110(arg1 + 0x168, rax_32, arg5)
                        
                        if (*arg5 s> 0)
                            int64_t* rcx_54 = var_130.q
                            
                            if (rcx_54 != 0)
                                (**rcx_54)(rcx_54, 1)
                            
                            goto label_142b5d4fe
                        
                        int64_t var_128_3 = 0
                        sub_142b5df40(arg2, 0, var_138)
                        sub_142a47ff0(&var_78)
                        rbx = var_110
            else
                if (rax_2 == rax_6)
                    var_138 = rax_6
                    int64_t* rax_7 = sub_142b57560(arg1 + 0x110, &var_138, arg5)
                    var_f8_1 = rax_7
                    
                    if (rax_7 == 0)
                        *arg5 = 7
                        result = sub_142a47ff0(&var_78)
                        break
                        break
                    
                    sub_142a5a080(arg1 + 0xb8, arg2, rax_7, arg5)
                    
                    if (*arg5 s> 0)
                        result = sub_142a47ff0(&var_78)
                        break
                        break
                    
                    std::ios_base::width(*var_f8_1, sub_140a4f210)
                
                int32_t var_100
                int64_t rax_9 = (*(*rbx + 0x18))(rbx, &var_100, arg5)
                
                if (*arg5 s> 0)
                    result = sub_142a47ff0(&var_78)
                    break
                    break
                
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_10 =
                    j_sub_142a7dd00(0x40)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_e0_1 = rax_10
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_2
                
                if (rax_10 == 0)
                    rbx_2 = nullptr
                else
                    rbx_2 = sub_142a47a60(rax_10, 1, rax_9, var_100)
                
                if (rbx_2 == 0 && *arg5 s<= rbx_2.d)
                    *arg5 = 7
                
                int64_t var_128_1 = 0
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_12 =
                    j_sub_142a7dd00(0x40)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_d8_1 = rax_12
                
                if (rax_12 != 0)
                    rax_12 = sub_142a479b0(rax_12, &var_78)
                
                sub_142a86f50(*var_f8_1, rax_12, rbx_2, arg5)
                
                if (*arg5 s> 0)
                    result = sub_142a47ff0(&var_78)
                    break
                    break
                
                sub_142a47ff0(&var_78)
                rbx = var_110
            rax_2 += 1
            rdx_1 = rax_2

__security_check_cookie(result_1 ^ &var_168)
return result
