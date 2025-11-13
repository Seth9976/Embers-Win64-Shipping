// 函数: sub_14283ea30
// 地址: 0x14283ea30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char r12 = arg2
int32_t result

if ((arg2 & 0x60) != 0 && arg4 == 0)
    result = -0x7ff8ffa9
else if (arg1[5] != 0)
    int32_t var_78 = 0
    int128_t var_70
    __builtin_memset(&var_70, 0, 0x12)
    result = sub_14283e3a0(arg1, &var_70, &var_78)
    
    if (result s>= 0)
        sub_14284b5f0(arg3)
        int32_t rdi_1 = var_78
        uint64_t var_58
        int64_t var_50
        int64_t rcx_2
        result, rcx_2 =
            sub_14284ac90(arg1[2].d, *arg1, arg1[1], &var_58, &var_50, rdi_1 u>> 1 & 0x10000)
        
        if (result s>= 0)
            result = sub_14284b3d0(arg3, 
                var_50 + 0x2c + (zx.q((sbb.q(rcx_2, rcx_2, arg4 != 0)).d) & 0x1ef))
            
            if (result s>= 0)
                uint64_t count = arg3[1]
                int128_t* r15_1 = *arg3
                
                if (r15_1 == 0)
                    *_errno() = 0x16
                    _invalid_parameter_noinfo()
                else if (count u< 0x12)
                    memset(r15_1, 0, count)
                    *_errno() = 0x22
                    _invalid_parameter_noinfo()
                else
                    *r15_1 = var_70
                    int16_t var_60
                    r15_1[1].w = var_60
                
                int32_t* rbp_1 = arg1[5]
                int32_t* rbx_1 = r15_1 + 0x12
                int64_t i = 0
                
                if (arg1[1] u> 0)
                    uint64_t rdx_5 = arg1[3]
                    uint64_t rcx_7 = var_58
                    int32_t r12_2 = rdi_1 & 0x20000
                    
                    do
                        if (r12_2 == 0)
                            int32_t var_80_2 = 0
                            int64_t* var_88_1
                            var_88_1.d = arg1[2].d
                            
                            if (not(test_bit(rdi_1, 0x10)))
                                sub_142840fe0(rbx_1, rcx_7, rbp_1, rdx_5, var_88_1.d, var_80_2.b)
                                rcx_7 = var_58
                            else
                                sub_14284a7a0(rbx_1, rcx_7, rbp_1, rdx_5, var_88_1.d, var_80_2)
                                rcx_7 = var_58
                        else
                            int32_t* r9_1 = rbp_1
                            char* rax_10 = rbx_1
                            
                            if (rdx_5 u>= 4 && rcx_7 u>= 3)
                                int64_t j = 0
                                
                                if (rdx_5 != 3)
                                    void* r8_2 = rbx_1 + 3
                                    
                                    do
                                        int32_t rdx_6 = *r9_1
                                        r9_1 = &r9_1[1]
                                        
                                        if (r8_2 u> rbx_1 + rcx_7)
                                            break
                                        
                                        *rax_10 = rdx_6.b
                                        r8_2 += 3
                                        j += 4
                                        rax_10[1] = (rdx_6 u>> 8).b
                                        rax_10[2] = (rdx_6 u>> 0x10).b
                                        rax_10 = &rax_10[3]
                                    while (j u< rdx_5 - 3)
                                    
                                    rcx_7 = var_58
                                
                                rdi_1 = var_78
                        
                        rdx_5 = arg1[3]
                        rbx_1 += rcx_7
                        rbp_1 += rdx_5
                        i += 1
                    while (i u< arg1[1])
                    
                    r12 = arg2
                
                int32_t rax_12 = 0
                
                if (arg4 != 0)
                    sub_14283ecf0(rbx_1, r12, arg4)
                    rax_12 = rbx_1.d - r15_1.d
                    rbx_1 += 0x1ef
                
                *rbx_1 = rax_12
                rbx_1[1] = 0
                __builtin_strcpy(&rbx_1[2], "TRUEVISION-XFILE.")
                result = 0
else
    result = -0x7fffbffd

__security_check_cookie(rax_1 ^ &var_a8)
return result
