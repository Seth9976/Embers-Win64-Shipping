// 函数: sub_142a7d7f0
// 地址: 0x142a7d7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t* result_1 = arg2
int32_t* result

if (*arg5 s> 0)
    result = arg2
else if (arg3 != arg4)
    int64_t r15_1 = sx.q(sub_142aea690(arg1, arg3, arg4, 0, 0, arg5, arg1))
    int32_t rax_4 = *arg5
    
    if (rax_4 == 0xf || rax_4 s<= 0)
        void var_aa
        void* rbp_1 = &var_aa
        void* var_b8_1 = &var_aa
        *arg5 = 0
        int32_t var_b0_1 = 0x28
        char var_ac_1 = 0
        
        if (r15_1.d s>= 0x28)
            int32_t r14_1 = (r15_1 + 1).d
            
            if (r14_1 s<= 0)
                *arg5 = 7
            else
                void* rax_5 = sub_142a7dd00(sx.q(r14_1) * 2)
                rbp_1 = rax_5
                
                if (rax_5 == 0)
                    rbp_1 = var_b8_1
                    *arg5 = 7
                else
                    if (var_ac_1 != 0)
                        sub_142a7dcd0(var_b8_1)
                    
                    var_b8_1 = rbp_1
                    var_b0_1 = r14_1
                    var_ac_1 = 1
        
        int32_t r14_2 = (r15_1 + 1).d
        sub_142aea690(arg1, arg3, arg4, rbp_1, r14_2, arg5)
        
        if (result_1 == 0)
            if (*arg5 s> 0)
                goto label_142a7da0f
            
            void* rbp_2
            
            if (var_ac_1 == 0)
                if (r14_2 s> 0)
                    if (r14_2 s> var_b0_1)
                        r14_2 = var_b0_1
                    
                    uint64_t rdi_1 = sx.q(r14_2) * 2
                    void* rax_7 = sub_142a7dd00(rdi_1)
                    rbp_2 = rax_7
                    
                    if (rax_7 == 0)
                        goto label_142a7da09
                    
                    memcpy(rax_7, var_b8_1, rdi_1.d)
                    goto label_142a7d9c7
                
            label_142a7da09:
                *arg5 = 7
            label_142a7da0f:
                result_1 = nullptr
            else
                rbp_2 = var_b8_1
            label_142a7d9c7:
                int32_t var_b0_2 = 0x28
                var_b8_1 = &var_aa
                var_ac_1 = 0
                
                if (rbp_2 == 0)
                    goto label_142a7da09
                
                int32_t* result_2 = sub_142aeaaf0(nullptr, rbp_2, r15_1, arg5)
                result_1 = result_2
                
                if (*arg5 s<= 0)
                    result_2[2] |= 0x20
                else
                    sub_142a7dcd0(rbp_2)
                    result_1 = nullptr
        else
            sub_142aeaca0(result_1, nullptr, sub_142aea860(result_1), var_b8_1, r15_1.d, arg5)
            result_1 = result_1
        
        if (var_ac_1 != 0)
            sub_142a7dcd0(var_b8_1)
    
    result = result_1
else if (result_1 == 0)
    result = sub_142aeaaf0(nullptr, nullptr, 0, arg5)
else
    sub_142aeaca0(result_1, nullptr, sub_142aea860(result_1), 0, 0, arg5, arg1)
    result = result_1

__security_check_cookie(rax_1 ^ &var_f8)
return result
