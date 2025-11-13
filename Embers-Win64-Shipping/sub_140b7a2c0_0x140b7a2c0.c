// 函数: sub_140b7a2c0
// 地址: 0x140b7a2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rdi = arg9
int64_t* rsi = arg4
int64_t* var_c8 = rdi
int32_t var_118
int32_t* result

if (*sub_1408f1b50(rdi, &var_118, arg1) == 0xffffffff)
    int32_t var_6c_1 = 0x80
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    int32_t var_68_1 = 0xffffffff
    sub_1406b3860(&var_98, &var_118, arg1, nullptr)
    int64_t** var_108 = nullptr
    int64_t var_100_1 = 1
    sub_1405a4d70(&var_108)
    int64_t** r15_1 = var_108
    int32_t r14_1 = 0
    int32_t r12_1 = var_100_1.d
    int64_t var_b0 = 0
    int64_t var_a8_1 = 0
    *r15_1 = arg1
    int32_t var_114_1 = 0
    
    if (r12_1 s> 0)
        int64_t* rbx_1 = nullptr
        int64_t* var_f0_1 = nullptr
        
        do
            int64_t* rbx_2 = *(rbx_1 + r15_1)
            
            if (rbx_2[2].b != 0)
                char rax_4
                
                if (rbx_2[8].d s> 0)
                    rax_4 = sub_1405a71a0(&rbx_2[7], rsi)
                
                if (rbx_2[8].d s<= 0 || rax_4 != 0)
                    char rax_5 = sub_1405a71a0(&rbx_2[9], rsi)
                    
                    if (rax_5 == 0 && rbx_2[2].b != rax_5)
                        char i_3
                        
                        if (rbx_2[0xc].d s<= 0)
                            i_3 = arg5
                        label_140b7a448:
                            
                            for (char* i = rbx_2[0xd]; i != &i[sx.q(rbx_2[0xe].d)]; i = &i[1])
                                if (*i == i_3)
                                    goto label_140b7a6a5
                            
                            if (rbx_2[0x10].d s<= 0)
                            label_140b7a49a:
                                
                                for (char* i_1 = rbx_2[0x11]; i_1 != &i_1[sx.q(rbx_2[0x12].d)]; 
                                        i_1 = &i_1[1])
                                    if (*i_1 == arg6)
                                        goto label_140b7a6a5
                                
                                if (arg7 != 0 || rbx_2[0x14].d == 0)
                                label_140b7a4f4:
                                    sub_140926e00(arg8, &var_118, rbx_2)
                                    int64_t rax_9 = sx.q(var_118)
                                    void* const rcx_15
                                    
                                    if (rax_9.d == 0xffffffff)
                                        rcx_15 = nullptr
                                    else
                                        rcx_15 = *arg8 + rax_9 * 0x28
                                    
                                    void** rax_12 = rcx_15 + 0x10
                                    
                                    if (rcx_15 == 0)
                                        rax_12 = nullptr
                                    
                                    if (rax_12 != 0)
                                        void* rsi_1 = *rax_12
                                        
                                        if (arg7 != 0 || *(rsi_1 + 0xd8) == 0)
                                        label_140b7a5a0:
                                            
                                            if (arg6 != 5)
                                            label_140b7a5bf:
                                                
                                                if (*(rsi_1 + 0x1e0) != 1 || arg2 == 0
                                                        || *(arg2 + 0x110) != 0)
                                                    int64_t* i_2 = *(rsi_1 + 0x1d0)
                                                    
                                                    for (void* r14_3 =
                                                            sx.q(*(rsi_1 + 0x1d8)) * 0xa8 + i_2; 
                                                            i_2 != r14_3; i_2 = &i_2[0x15])
                                                        void var_e8
                                                        void var_e4
                                                        
                                                        if (*sub_1408f1b50(rdi, &var_e8, i_2)
                                                                == 0xffffffff &&
                                                                *sub_140960120(&var_98, &var_e4, i_2)
                                                                == 0xffffffff)
                                                            void var_e0
                                                            sub_1406b3860(&var_98, &var_e0, i_2, 
                                                                nullptr)
                                                            int64_t rdi_1 = sx.q(r12_1)
                                                            r12_1 = (rdi_1 + 1).d
                                                            var_100_1.d = r12_1
                                                            
                                                            if (r12_1 s> var_100_1:4.d)
                                                                sub_1405a4d70(&var_108)
                                                                r12_1 = var_100_1.d
                                                                r15_1 = var_108
                                                            
                                                            r15_1[rdi_1] = i_2
                                                            rdi = var_c8
                                                    
                                                    void* var_c0 = rsi_1
                                                    sub_140917cc0(rdi, rsi_1 + 8, &var_c0)
                                                    r14_1 = var_114_1
                                            else if (sub_1405a71a0(rsi_1 + 0xe0, arg3) != 0)
                                                goto label_140b7a5bf
                                        else if (sub_1405a71a0(rsi_1 + 0xd0, arg4) != 0)
                                            goto label_140b7a5a0
                                        
                                        rsi = arg4
                                    else if (*(rbx_2 + 0x11) == 0)
                                        *arg10 = rbx_2
                                        sub_140596d80(&var_b0)
                                        
                                        if (r15_1 != 0)
                                            sub_140a74f90(r15_1)
                                        
                                        int32_t var_50_2 = 0
                                        
                                        if (var_58_1 != 0)
                                            sub_140a74f90(var_58_1)
                                        
                                        sub_140669e00(&var_98)
                                        result.b = 0
                                        goto label_140b7a6f3
                                else if (sub_1405a71a0(&rbx_2[0x13], rsi) != 0)
                                    goto label_140b7a4f4
                            else
                                char* rax_7 = rbx_2[0xf]
                                void* rcx_10 = &rax_7[sx.q(rbx_2[0x10].d)]
                                
                                if (rax_7 != rcx_10)
                                    while (*rax_7 != arg6)
                                        rax_7 = &rax_7[1]
                                        
                                        if (rax_7 == rcx_10)
                                            goto label_140b7a6a5
                                    
                                    goto label_140b7a49a
                        else
                            char* rax_6 = rbx_2[0xb]
                            void* rcx_6 = &rax_6[sx.q(rbx_2[0xc].d)]
                            
                            if (rax_6 != rcx_6)
                                i_3 = arg5
                                
                                while (*rax_6 != i_3)
                                    rax_6 = &rax_6[1]
                                    
                                    if (rax_6 == rcx_6)
                                        goto label_140b7a6a5
                                
                                goto label_140b7a448
            
        label_140b7a6a5:
            r14_1 += 1
            rbx_1 = &var_f0_1[1]
            var_114_1 = r14_1
            var_f0_1 = rbx_1
        while (r14_1 s< r12_1)
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)
    
    int32_t var_50_3 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    sub_140669e00(&var_98)

result.b = 1
label_140b7a6f3:
__security_check_cookie(rax_1 ^ &var_138)
return result
