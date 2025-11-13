// 函数: sub_142a951b0
// 地址: 0x142a951b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
void* result = nullptr
void* result_1 = nullptr
char* rdi = arg4
char var_f8[0xa0]
memset(&var_f8, 0, 0x9d)
int32_t var_2c8 = 0
char** rbx_1 = sub_142a641c0(arg1, arg2, &var_2c8)
int32_t rax_4 = var_2c8

if (rax_4 s<= 0)
    if (rax_4 == 0xffffff81)
        *arg7 = rax_4
    else if (rax_4 == 0xffffff80 && *arg7 != 0xffffff81)
        *arg7 = rax_4
    
    char* var_298
    void* rcx_18
    
    while (true)
        sub_142a5f830(&var_298)
        void var_1c8
        sub_142a5f830(&var_1c8)
        sub_142a62230(rbx_1, arg3, &var_298, &var_2c8)
        
        if (rdi != 0)
            sub_142a62230(&var_298, rdi, &var_298, &var_2c8)
        
        int32_t rax_9 = var_2c8
        
        if (rax_9 s> 0)
        label_142a95361:
            int32_t var_2c4 = 0
            *arg7 = rax_9
            var_2c8 = 0
            void* rax_10 = sub_142a63c50(&var_298, "Fallback", &var_2c4, &var_2c8)
            int32_t rcx_14 = var_2c8
            
            if (rcx_14 s> 0)
                *arg7 = rcx_14
            else
                sub_142a8d6e0(rax_10, &var_f8, var_2c4)
                char (* rax_11)[0xa0] = &var_f8
                uint32_t i
                uint32_t rdx_6
                
                do
                    rdx_6 = zx.d(*rax_11)
                    i = zx.d(*(rax_11 + arg2 - &var_f8))
                    
                    if (rdx_6 != i)
                        break
                    
                    rax_11 = &(*rax_11)[1]
                while (i != 0)
                
                if (rdx_6 - i == 0)
                    *arg7 = 5
                else
                    char** rax_12 = sub_142a641c0(arg1, &var_f8, &var_2c8)
                    
                    if (rbx_1 != 0)
                        sub_142a5f860(rbx_1)
                    
                    int32_t rax_13 = var_2c8
                    rcx_18 = &var_1c8
                    rbx_1 = rax_12
                    
                    if (rax_13 s> 0)
                        *arg7 = rax_13
                        break
                    
                    sub_142a5f860(rcx_18)
                    sub_142a5f860(&var_298)
                    rdi = arg4
                    continue
        else
            void* result_2 = sub_142a63c50(&var_298, arg5, arg6, &var_2c8)
            int32_t rcx_7 = var_2c8
            result_1 = result_2
            
            if (rcx_7 s> 0)
                *arg7 = rcx_7
                var_2c8 = 0
                void* rax_6
                
                if (strcmp(arg3, "Countries") != 0)
                    if (strcmp(arg3, "Languages") == 0)
                        rax_6 = sub_142a4ce70(arg5)
                        goto label_142a9531f
                else
                    rax_6 = sub_142a4cde0(arg5)
                label_142a9531f:
                    
                    if (rax_6 == 0 || arg5 == rax_6)
                        rax_9 = var_2c8
                        
                        if (rax_9 s> 0)
                            goto label_142a95361
                    else
                        result_1 = sub_142a63c50(&var_298, rax_6, arg6, &var_2c8)
                        rax_9 = var_2c8
                        
                        if (rax_9 s> 0)
                            goto label_142a95361
                        
                        *arg7 = rax_9
        
        rcx_18 = &var_1c8
        break
    
    sub_142a5f860(rcx_18)
    sub_142a5f860(&var_298)
    result = result_1
else
    *arg7 = rax_4

if (rbx_1 != 0)
    sub_142a5f860(rbx_1)

__security_check_cookie(rax_1 ^ &var_2e8)
return result
