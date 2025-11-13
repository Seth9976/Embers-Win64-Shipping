// 函数: sub_142be4230
// 地址: 0x142be4230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t rbx = arg2[6]
int16_t var_64 = 0
int32_t rax_2 = sub_1408e52d0(arg2)
int32_t result_1
int32_t var_50 = sub_142b96d30(arg2, &result_1)
int32_t result = result_1

if (result == 0)
    result = sub_142b96aa0(arg2, &data_143698728, &var_50)
    result_1 = result
    
    if (result == 0)
        int32_t rax_4 = var_50
        int16_t rcx_4
        
        if (rax_4 == 0x4f54544f)
            int16_t var_4c
            rcx_4 = var_4c
        label_142be42d7:
            *(arg1 + 0xf0) = rax_4
            *(arg1 + 0xf4) = rcx_4
            *(arg1 + 0xf8) = sub_142b99a90(rbx, 0x10, 0, zx.d(rcx_4), 0, &result_1)
            result = result_1
            
            if (result == 0)
                result = sub_142b97060(arg2, rax_2 + 0xc, arg3)
                result_1 = result
                
                if (result == 0)
                    result = sub_142b96500(arg2, zx.d(var_4c) << 4)
                    result_1 = result
                    
                    if (result == 0)
                        int16_t rbx_1 = 0
                        int16_t r14_1 = 0
                        
                        if (0 u< var_4c)
                            do
                                int32_t rax_6 = sub_142b96720(arg2)
                                int32_t var_5c_1 = sub_142b96720(arg2)
                                int32_t rax_8 = sub_142b96720(arg2)
                                int32_t var_58_1 = rax_8
                                int32_t rax_9 = sub_142b96720(arg2)
                                int32_t var_54_1 = rax_9
                                int32_t rax_10 = arg2[1].d
                                
                                if (rax_8 u<= rax_10)
                                    int32_t rax_11 = rax_10 - rax_8
                                    
                                    if (rax_9 u<= rax_11)
                                        goto label_142be43c8
                                    
                                    if (rax_6 == 0x686d7478 || rax_6 == 0x766d7478)
                                        int32_t var_54_2 = rax_11 & 0xfffffffc
                                    label_142be43c8:
                                        int16_t rax_13 = 0
                                        
                                        if (0 u< rbx_1)
                                            do
                                                if (*(*(arg1 + 0xf8) + zx.q(rax_13) * 0x10)
                                                        == rax_6)
                                                    goto label_142be440b
                                                
                                                rax_13 += 1
                                            while (rax_13 u< rbx_1)
                                        
                                        uint64_t rdx_7 = zx.q(rbx_1)
                                        rbx_1 += 1
                                        *(*(arg1 + 0xf8) + rdx_7 * 0x10) = rax_6.o
                                
                            label_142be440b:
                                r14_1 += 1
                            while (r14_1 u< var_4c)
                        
                        *(arg1 + 0xf4) = rbx_1
                        sub_142b96620(arg2)
                        result = result_1
        else
            result = sub_142be6e70(&var_50, arg2, &var_64, arg3)
            result_1 = result
            
            if (result == 0)
                rcx_4 = var_64
                rax_4 = var_50
                goto label_142be42d7

__security_check_cookie(rax_1 ^ &var_98)
return result
