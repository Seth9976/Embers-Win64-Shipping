// 函数: sub_14284d7b0
// 地址: 0x14284d7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
uint64_t var_40 = __security_cookie ^ &var_98
int32_t var_68 = arg4
int64_t r8 = arg5
int64_t rdi = arg1
int64_t var_58 = r8
uint64_t result

if (r8 == 0)
labelid_10:
    result.b = 0
else
    result = zx.q(*(arg3 + 0x34))
    int64_t r13_1 = arg1 + arg2
    int64_t rsi_1 = 0
    
    if (result.d s< 2)
    labelid_10:
        result.b = 0
    else
        uint64_t result_1
        int64_t var_48
        
        if (result.d s<= 3)
            result = arg3[3]
            
            if (result == 0)
            labelid_10:
                result.b = 0
            else
                int64_t rcx_5 = arg3[4]
                
                if (rcx_5 == 0)
                labelid_10:
                    result.b = 0
                else
                    int64_t i = 0
                    int64_t i_3 = 0
                    
                    if (result != 0)
                        do
                            uint64_t result_3 = *arg3
                            int64_t r12_2 = 0
                            uint64_t r15_2 = arg3[1]
                            
                            if (rcx_5 != 0)
                                void* rbx_2 = r8 + 0x10 + rsi_1 * 0x30
                                
                                do
                                    if (rsi_1 u>= arg6)
                                        goto label_14284da45_2
                                    
                                    if (sub_14284ac90(arg3[6].d, result_3, r15_2, &var_48, 
                                            &result_1, arg4).d s< 0)
                                        goto label_14284da45_2
                                    
                                    *(rbx_2 - 0x10) = result_3
                                    rsi_1 += 1
                                    *(rbx_2 - 8) = r15_2
                                    *rbx_2 = arg3[6].d
                                    *(rbx_2 + 8) = var_48
                                    result = result_1
                                    *(rbx_2 + 0x18) = rdi
                                    rdi += result
                                    *(rbx_2 + 0x10) = result
                                    rbx_2 += 0x30
                                    
                                    if (rdi u> r13_1)
                                        goto label_14284da45_2
                                    
                                    rcx_5 = arg3[4]
                                    r12_2 += 1
                                    arg4 = var_68
                                    uint64_t rax_12 = r15_2 u>> 1
                                    
                                    if (r15_2 u<= 1)
                                        rax_12 = r15_2
                                    
                                    r15_2 = rax_12
                                    result = result_3 u>> 1
                                    
                                    if (result_3 u<= 1)
                                        result = result_3
                                    
                                    result_3 = result
                                while (r12_2 u< rcx_5)
                                
                                i = i_3
                                r8 = var_58
                            
                            i += 1
                            i_3 = i
                        while (i u< arg3[3])
                    
                    result.b = 1
        else if (result.d != 4)
        label_14284da45:
            result.b = 0
        else
            result = arg3[4]
            
            if (result == 0)
            label_14284da45_1:
                result.b = 0
            else
                uint64_t result_2 = arg3[2]
                
                if (result_2 == 0)
                label_14284da45_2:
                    result.b = 0
                else
                    uint64_t rbp_1 = *arg3
                    uint64_t r15_1 = arg3[1]
                    int64_t i_2 = 0
                    
                    if (result == 0)
                        result.b = 1
                    else
                        int64_t i_1
                        
                        do
                            if (sub_14284ac90(arg3[6].d, rbp_1, r15_1, &var_48, &result_1, arg4).d
                                    s< 0)
                                goto label_14284da45_2
                            
                            int64_t rdx_1 = 0
                            
                            if (result_2 != 0)
                                uint64_t result_4 = result_1
                                int64_t r9_1 = var_48
                                result = rsi_1 * 0x30 + var_58 + 0x10
                                
                                do
                                    if (rsi_1 u>= arg6)
                                        goto label_14284da45_2
                                    
                                    *(result - 0x10) = rbp_1
                                    rsi_1 += 1
                                    *(result - 8) = r15_1
                                    int32_t rcx_3 = arg3[6].d
                                    *(result + 0x18) = rdi
                                    rdi += result_4
                                    *result = rcx_3
                                    *(result + 8) = r9_1
                                    *(result + 0x10) = result_4
                                    result += 0x30
                                    
                                    if (rdi u> r13_1)
                                        goto label_14284da45_2
                                    
                                    rdx_1 += 1
                                while (rdx_1 u< result_2)
                            
                            arg4 = var_68
                            i_1 = i_2 + 1
                            uint64_t rax_4 = r15_1 u>> 1
                            i_2 = i_1
                            
                            if (r15_1 u<= 1)
                                rax_4 = r15_1
                            
                            r15_1 = rax_4
                            uint64_t rax_6 = rbp_1 u>> 1
                            
                            if (rbp_1 u<= 1)
                                rax_6 = rbp_1
                            
                            rbp_1 = rax_6
                            result = result_2 u>> 1
                            
                            if (result_2 u<= 1)
                                result = result_2
                            
                            result_2 = result
                        while (i_1 u< arg3[4])
                        result.b = 1

__security_check_cookie(var_40 ^ &var_98)
return result
