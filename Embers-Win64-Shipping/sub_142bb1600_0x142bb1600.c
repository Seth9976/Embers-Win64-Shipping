// 函数: sub_142bb1600
// 地址: 0x142bb1600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* r14 = *(arg1 + 0xa0)
void* rdi = *(arg1 + 0x410)
int64_t r13 = r14[6]
int32_t var_54
int32_t result = (*(arg1 + 0x2a0))(arg3, 0x67766172, r14, &var_54)
int32_t result_1 = result

if (result == 0)
    int32_t rax_2 = sub_1408e52d0(r14)
    int32_t var_50
    result = sub_142b96aa0(r14, &data_143683ae8, &var_50)
    result_1 = result
    int16_t var_4c
    
    if (result == 0)
        if (var_50 != 0x10000 || var_4c != **(rdi + 0x18))
            result = 8
        else
            int32_t rdx_2 = var_54
            int16_t var_4a
            
            if (zx.d(var_4a) * zx.d(var_4c) u> rdx_2 u>> 1)
                result = 8
            else
                int32_t rcx_4 = 2
                char var_42
                
                if ((var_42 & 1) != 0)
                    rcx_4 = 4
                
                int16_t var_44
                
                if (rcx_4 * zx.d(var_44) u<= rdx_2)
                    *(rdi + 0x88) = rdx_2
                    *(rdi + 0x68) = zx.d(var_4a)
                    uint32_t r9_1 = zx.d(var_44)
                    *(rdi + 0x78) = r9_1
                    int32_t var_40
                    int32_t rsi_2 = var_40 + rax_2
                    *(rdi + 0x80) = sub_142b99a90(r13, 4, 0, r9_1 + 1, 0, &result_1)
                    result = result_1
                    
                    if (result == 0)
                        uint64_t rdx_3 = zx.q(*(rdi + 0x78))
                        int32_t r15_2 = var_54 + rax_2
                        
                        if ((var_42 & 1) == 0)
                            result = sub_142b96500(r14, ((rdx_3 << 1) + 2).d)
                            result_1 = result
                            
                            if (result == 0)
                                uint64_t rbx_2 = 0
                                
                                do
                                    int64_t rdx_7 = rbx_2 << 2
                                    *(rdx_7 + *(rdi + 0x80)) =
                                        rsi_2 + (zx.d(sub_142b967c0(r14)) << 1)
                                    
                                    if (*(rdx_7 + *(rdi + 0x80)) u> r15_2)
                                        goto label_142bb17eb
                                    
                                    rbx_2 = zx.q(rbx_2.d + 1)
                                while (rbx_2.d u<= *(rdi + 0x78))
                                
                            label_142bb17f1:
                                sub_142b96620(r14)
                                result = result_1
                                
                                if (result == 0)
                                    int32_t r8_2 = *(rdi + 0x68)
                                    
                                    if (r8_2 != 0)
                                        *(rdi + 0x70) = sub_142b99a90(r13, 4, 0, 
                                            zx.d(var_4c) * r8_2, 0, &result_1)
                                        result = result_1
                                        
                                        if (result == 0)
                                            int32_t var_48
                                            result = sub_142b97060(r14, var_48 + rax_2, arg2)
                                            result_1 = result
                                            
                                            if (result == 0)
                                                result = sub_142b96500(r14, 
                                                    zx.d(var_4c) * *(rdi + 0x68) * 2)
                                                result_1 = result
                                                
                                                if (result == 0)
                                                    int32_t i = 0
                                                    
                                                    if (*(rdi + 0x68) u> 0)
                                                        uint32_t rax_18 = zx.d(var_4c)
                                                        
                                                        do
                                                            int32_t rbx_3 = 0
                                                            
                                                            if (rax_18 != 0)
                                                                do
                                                                    uint64_t rdx_15 =
                                                                        zx.q(zx.d(var_4c) * i + rbx_3)
                                                                    rbx_3 += 1
                                                                    *(*(rdi + 0x70) + (rdx_15 << 2)) =
                                                                        sx.d(sub_142b967c0(r14)) << 2
                                                                    rax_18 = zx.d(var_4c)
                                                                while (rbx_3 u< rax_18)
                                                            
                                                            i += 1
                                                        while (i u< *(rdi + 0x68))
                                                    
                                                    sub_142b96620(r14)
                                                    result = result_1
                        else
                            result = sub_142b96500(r14, ((rdx_3 << 2) + 4).d)
                            result_1 = result
                            
                            if (result == 0)
                                uint64_t rbx_1 = 0
                                
                                do
                                    int64_t rdx_5 = rbx_1 << 2
                                    *(rdx_5 + *(rdi + 0x80)) = sub_142b96720(r14) + rsi_2
                                    
                                    if (*(rdx_5 + *(rdi + 0x80)) u> r15_2)
                                    label_142bb17eb:
                                        result_1 = 8
                                        break
                                    
                                    rbx_1 = zx.q(rbx_1.d + 1)
                                while (rbx_1.d u<= *(rdi + 0x78))
                                
                                goto label_142bb17f1
                else
                    result = 8

__security_check_cookie(rax_1 ^ &var_88)
return result
