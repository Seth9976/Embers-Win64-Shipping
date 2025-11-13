// 函数: sub_14284d5f0
// 地址: 0x14284d5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t rax_2 = *(arg1 + 0x34)
int64_t r14 = 0
int64_t r15 = 0
int64_t* result

if (rax_2 s< 2)
label_14284d77b:
    *arg4 = 0
    *arg3 = 0
    result.b = 0
else
    int64_t var_68
    void var_60
    
    if (rax_2 s<= 3)
        int64_t i = 0
        
        if (arg1[3] u> 0)
            do
                uint64_t rdi_2 = *arg1
                int64_t j = 0
                uint64_t rsi_2 = arg1[1]
                
                if (arg1[4] u> 0)
                    do
                        if (sub_14284ac90(arg1[6].d, rdi_2, rsi_2, &var_60, &var_68, arg2) s< 0)
                            goto label_14284d77b
                        
                        r14 += var_68
                        r15 += 1
                        j += 1
                        uint64_t rax_14 = rsi_2 u>> 1
                        
                        if (rsi_2 u<= 1)
                            rax_14 = rsi_2
                        
                        rsi_2 = rax_14
                        uint64_t rax_16 = rdi_2 u>> 1
                        
                        if (rdi_2 u<= 1)
                            rax_16 = rdi_2
                        
                        rdi_2 = rax_16
                    while (j u< arg1[4])
                
                i += 1
            while (i u< arg1[3])
    else
        if (rax_2 != 4)
            goto label_14284d77b
        
        uint64_t rsi_1 = *arg1
        int64_t i_1 = 0
        uint64_t rbp_1 = arg1[1]
        uint64_t rdi_1 = arg1[2]
        
        if (arg1[4] u> 0)
            do
                if (sub_14284ac90(arg1[6].d, rsi_1, rbp_1, &var_60, &var_68, arg2) s< 0)
                    goto label_14284d77b
                
                if (rdi_1 != 0)
                    r14 += var_68 * rdi_1
                    r15 += rdi_1
                
                i_1 += 1
                uint64_t rax_7 = rbp_1 u>> 1
                
                if (rbp_1 u<= 1)
                    rax_7 = rbp_1
                
                rbp_1 = rax_7
                uint64_t rax_9 = rsi_1 u>> 1
                
                if (rsi_1 u<= 1)
                    rax_9 = rsi_1
                
                rsi_1 = rax_9
                uint64_t rax_11 = rdi_1 u>> 1
                
                if (rdi_1 u<= 1)
                    rax_11 = rdi_1
                
                rdi_1 = rax_11
            while (i_1 u< arg1[4])
    *arg3 = r15
    *arg4 = r14
    result.b = 1

__security_check_cookie(rax_1 ^ &var_a8)
return result
