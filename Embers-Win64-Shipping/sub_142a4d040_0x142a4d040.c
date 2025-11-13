// 函数: sub_142a4d040
// 地址: 0x142a4d040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t r13 = sx.q(arg4)
char* rbx = arg1
uint64_t result

if (arg5 != 0 && *arg5 s<= 0 && arg1 != 0)
    if (arg2 == 0 || *arg2 == 0)
    label_142a4d2d9:
        *arg5 = 1
    else
        void var_118
        sub_142a4cb70(&var_118, arg2, arg5)
        
        if (*arg5 s<= 0)
            if (strstr(rbx, &data_143613e98) == 0 && sub_142a4ca80(rbx) == 1)
                void var_f8
                int32_t rax_4 = sub_142a8b1a0(rbx, &var_f8, 0x9d, nullptr, arg5)
                int32_t rax_5
                
                if (rax_4 s> 0)
                    rax_5 = *arg5
                
                if (rax_4 s> 0 && rax_5 s<= 0 && rax_5 != 0xffffff84)
                    rbx = &var_f8
                else if (*arg5 == 0xffffff84)
                    *arg5 = 0xf
            
            char* rax_6 = strchr(rbx, 0x40)
            char* rbx_1 = rax_6
            
            if (rax_6 != 0)
                int32_t rbp_1 = 0
                
                while (true)
                    void* string_1 = &rbx_1[1]
                    char* string = strchr(string_1, 0x3d)
                    
                    if (string == 0)
                        break
                    
                    while (*string_1 == 0x20)
                        string_1 += 1
                    
                    char* string_2 = string
                    
                    if (string u> string_1)
                        void* string_3
                        
                        do
                            string_3 = &string_2[-1]
                            
                            if (string_2[-1] != 0x20)
                                break
                            
                            string_2 = string_3
                        while (string_3 u> string_1)
                    
                    if (string_1 == string_2)
                        break
                    
                    int64_t rsi_1 = 0
                    char var_138[0x20]
                    
                    if (string_1 u< string_2)
                        while (true)
                            if (sub_142a86230(*string_1) == 0 && *string_1 - 0x30 u> 9)
                                goto label_142a4d2d9_1
                            
                            if (rsi_1 s>= 0x18)
                                *arg5 = 5
                                goto label_142a4d2e0
                            
                            var_138[rsi_1] = sub_142a86220(zx.d(*string_1))
                            string_1 += 1
                            rsi_1 += 1
                            
                            if (string_1 u>= string_2)
                                if (rsi_1 u< 0x19)
                                    break
                                
                                __report_rangecheckfailure()
                                noreturn
                    
                    var_138[rsi_1] = 0
                    rbx_1 = strchr(string, 0x3b)
                    void* rax_11 = &var_118
                    uint32_t i
                    uint32_t rdx_1
                    
                    do
                        rdx_1 = zx.d(*rax_11)
                        i = zx.d(*(rax_11 + &var_138 - &var_118))
                        
                        if (rdx_1 != i)
                            break
                        
                        rax_11 += 1
                    while (i != 0)
                    
                    if (rdx_1 - i == 0)
                        void* r14_2 = &string[1]
                        
                        while (*r14_2 == 0x20)
                            r14_2 += 1
                        
                        if (rbx_1 == 0)
                            void* rbx_2 = -ffffffffffffffff
                            
                            do
                                rbx_2 += 1
                            while (*(r14_2 + rbx_2) != 0)
                            
                            rbx_1 = rbx_2 + r14_2
                        
                        bool cond:2_1 = r14_2 == rbx_1
                        
                        if (r14_2 u< rbx_1)
                            void* rax_12
                            
                            do
                                rax_12 = &rbx_1[-1]
                                
                                if (rbx_1[-1] != 0x20)
                                    break
                                
                                rbx_1 = rax_12
                            while (rax_12 u> r14_2)
                            cond:2_1 = r14_2 == rbx_1
                        
                        if (cond:2_1)
                            break
                        
                        if (r14_2 u< rbx_1)
                            char* rdi_1 = nullptr
                            
                            do
                                if (sub_142a86230(*r14_2) == 0)
                                    uint64_t rax_14
                                    rax_14.b = *r14_2 - 0x2b
                                    
                                    if (rax_14.b u> 0x34)
                                        goto label_142a4d2d9_1
                                    
                                    if (not(test_bit(0x10000000007ff5, rax_14)))
                                        goto label_142a4d2d9_1
                                
                                if (rdi_1 s< r13)
                                    rdi_1[arg3] = *r14_2
                                
                                r14_2 += 1
                                rdi_1 = &rdi_1[1]
                                rbp_1 += 1
                            while (r14_2 u< rbx_1)
                        
                        result = sub_142a8c3f0(arg3, r13.d, rbp_1, arg5)
                        goto label_142a4d2ed
                    
                    if (rbx_1 == 0)
                        goto label_142a4d2e0
                
            label_142a4d2d9_1:
                *arg5 = 1

label_142a4d2e0:
result = 0
label_142a4d2ed:
__security_check_cookie(rax_1 ^ &var_168)
return result
