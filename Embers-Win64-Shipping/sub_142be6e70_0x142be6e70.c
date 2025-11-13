// 函数: sub_142be6e70
// 地址: 0x142be6e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int16_t rdi = 0
int32_t r13_1 = *(arg1 + 0xc) + 0xc
int16_t rbx = 0
int32_t r12 = 0
int32_t r15 = 0
int32_t r14 = 0
int32_t result = sub_142b97060(arg2, r13_1, arg4)
int32_t result_1 = result

if (result == 0)
    if (0 u>= *(arg1 + 4))
    label_142be6fd9:
        *arg3 = rbx
        
        if (rbx == 0)
            result = 2
        else if (r12 != 0 || (r15 != 0 && r14 != 0))
            result = 0
        else
            result = 0x8e
    else
        while (true)
            int32_t var_58
            int32_t result_2 = sub_142b96aa0(arg2, &data_1436983c8, &var_58)
            result_1 = result_2
            
            if (result_2 != 0)
                *(arg1 + 4) = rdi - 1
                goto label_142be6fd9
            
            int32_t rcx_2 = arg2[1].d
            int32_t var_50
            
            if (var_50 u<= rcx_2)
                int32_t rax_2 = var_58
                int32_t var_4c
                
                if (var_4c u<= rcx_2 - var_50 || rax_2 == 0x686d7478 || rax_2 == 0x766d7478)
                    rbx += 1
                    
                    if (rax_2 == 0x68656164 || rax_2 == 0x62686564)
                        r12 = 1
                        
                        if (var_4c u< 0x36)
                            break
                        
                        result = sub_142b97060(arg2, var_50 + 0xc, arg4)
                        result_1 = result
                        
                        if (result != 0)
                            goto label_142be7001
                        
                        sub_142b96d30(arg2, &result_1)
                        result = result_1
                        
                        if (result != 0)
                            goto label_142be7001
                        
                        result = sub_142b97060(arg2, ((zx.d(rdi) + 1) << 4) + r13_1, arg4)
                        result_1 = result
                        
                        if (result != 0)
                            goto label_142be7001
                    else if (rax_2 == 0x53494e47)
                        r15 = 1
                    else if (rax_2 == 0x4d455441)
                        r14 = 1
            
            rdi += 1
            
            if (rdi u>= *(arg1 + 4))
                goto label_142be6fd9
        
        result = 0x8e

label_142be7001:
__security_check_cookie(rax_1 ^ &var_88)
return result
