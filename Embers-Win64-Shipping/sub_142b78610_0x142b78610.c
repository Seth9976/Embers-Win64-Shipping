// 函数: sub_142b78610
// 地址: 0x142b78610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f0 = -2
void var_148
uint64_t result = __security_cookie ^ &var_148
uint64_t result_2 = result
int32_t* rbx = arg4
int32_t* var_108 = rbx
void* rbp = arg1

if (*arg4 s<= 0)
    int16_t rax_1 = *(arg1 + 8)
    
    if (rax_1 s< 0)
        result = zx.q(*(arg1 + 0xc))
    else
        result = zx.q(sx.d(rax_1) s>> 5)
    
    if (result.d s> 2)
    label_142b786d4:
        void* var_d8 = nullptr
        
        if (*rbx s<= 0)
            void var_d0
            result = sub_142a86da0(&var_d0, sub_142a4b0a0, sub_142a4b070, 0, rbx)
            
            if (*rbx s<= 0)
                var_d8 = &var_d0
                result = std::ios_base::precision(&var_d0, sub_140a4f210)
        
        if (*rbx s<= 0)
            std::ios_base::width(var_d8, sub_140a4f210)
            int32_t i = 0
            int32_t i_1 = 0
            result = sub_142a4a1f0(rbp)
            
            if (result.d s> 0)
                do
                    int32_t rax_3 = sub_142a486d0(rbp, i)
                    int32_t var_114 = 0xffffffff
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
                    sub_142a479b0(&var_78, arg1)
                    char rax_4
                    
                    if (arg2 != 0 && i != 0)
                        rax_4 = sub_142b69c00(zx.q(rax_3))
                    
                    if (arg2 == 0 || i == 0 || rax_4 != 0)
                        sub_142a86f90(var_d8)
                        int32_t r8_1
                        r8_1.b = rax_3 u> 0xffff
                        int32_t* var_128
                        var_128.d = 0
                        sub_142b78610(sub_142a49390(&var_78, i, r8_1 + 1, 0, var_128.d, 0), 
                            zx.q(arg2), &var_d8, rbx)
                        
                        if (*rbx s> 0)
                        label_142b788fe:
                            result = sub_142a47ff0(&var_78)
                            break
                        
                        void* j = sub_142a86e70(var_d8, &var_114)
                        
                        if (j != 0)
                            do
                                void* rdi_1 = *(j + 8)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_6 =
                                    j_sub_142a7dd00(0x40)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                    var_e8_1 = rax_6
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_1
                                
                                if (rax_6 == 0)
                                    rbx_1 = nullptr
                                else
                                    rbx_1 = sub_142a47b70(rax_6, rax_3)
                                
                                if (rbx_1 == 0)
                                    *var_108 = 7
                                    goto label_142b788fe
                                
                                int16_t rax_8 = *(rdi_1 + 8)
                                int32_t r9_3
                                
                                if (rax_8 s< 0)
                                    r9_3 = *(rdi_1 + 0xc)
                                else
                                    r9_3 = sx.d(rax_8) s>> 5
                                
                                sub_142a48d00(rbx_1, rdi_1, 0, r9_3)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_9 =
                                    j_sub_142a7dd00(0x40)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                    var_e0_1 = rax_9
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_10
                                
                                if (rax_9 == 0)
                                    rax_10 = nullptr
                                else
                                    rax_10 = sub_142a479b0(rax_9, rbx_1)
                                
                                sub_142a86f50(*arg3, rax_10, rbx_1, var_108)
                                j = sub_142a86e70(var_d8, &var_114)
                            while (j != 0)
                            
                            rbx = var_108
                            i = i_1
                    
                    sub_142a47ff0(&var_78)
                    int32_t rax_12
                    rax_12.b = rax_3 u> 0xffff
                    i += rax_12 + 1
                    i_1 = i
                    rbp = arg1
                    result = sub_142a4a1f0(rbp)
                while (i s< result.d)
        
        void* rcx_21 = var_d8
        
        if (rcx_21 != 0)
            result = sub_142a869e0(rcx_21)
    else
        result = sub_142a48c90(arg1, 0, 0x7fffffff)
        
        if (result.d s> 1)
            goto label_142b786d4
        
        result = j_sub_142a7dd00(0x40)
        uint64_t result_1 = result
        uint64_t result_3
        
        if (result == 0)
            result_3 = 0
        else
            result = sub_142a479b0(result, rbp)
            result_3 = result
        
        if (result_3 != 0)
            result = sub_142a5a080(arg3, rbp, result_3, rbx)
        else
            *rbx = 7

__security_check_cookie(result_2 ^ &var_148)
return result
