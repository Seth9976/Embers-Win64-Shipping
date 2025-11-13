// 函数: sub_142bbd420
// 地址: 0x142bbd420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 8)
int32_t* r14 = arg4
int32_t result_1 = 0
uint64_t j_2 = zx.q(arg3)
void* var_60 = rsi
int64_t rdi = *(rsi + 0x10)

if (arg3 == 0 || arg4 != 0)
    *arg1 = 0
    
    if ((arg3 == 0 || j_2.d == zx.d(*(rsi + 0x1128))) && arg2 u< *(rsi + 0x1118))
        int32_t* r12_2 = (zx.q(arg2) << 4) + *(rsi + 0x1120)
        int32_t* var_68 = r12_2
        uint64_t rbp_1 = zx.q(*r12_2 + 1)
        int32_t arg_8 = rbp_1.d
        *(arg1 + 0x28) =
            sub_142b99a90(rdi, 1, *(arg1 + 0x20) << 2, (rbp_1 << 2).d, *(arg1 + 0x28), &result_1)
        int32_t result = result_1
        
        if (result == 0)
            int32_t i = 0
            *(arg1 + 0x20) = rbp_1.d
            
            if (rbp_1.d != 0)
                int32_t* rdi_1 = nullptr
                
                do
                    if (i != 0)
                        uint64_t rdx = zx.q(*(*(r12_2 + 8) + (zx.q(i - 1) << 2)))
                        int64_t* r12_3 = *(rsi + 0x1130) + (rdx << 3)
                        
                        if (rdx.d u>= *(rsi + 0x112c))
                            return 3
                        
                        int64_t rax_8 = *(arg1 + 0x28)
                        
                        if (j_2.d != 0)
                            *(rdi_1 + rax_8) = 0x10000
                            
                            if (j_2.d != 0)
                                int64_t rsi_1 = 0
                                uint64_t j_1 = j_2
                                uint64_t j
                                
                                do
                                    int32_t* rcx_2 = *r12_3
                                    int32_t rdx_1 = *(rcx_2 + rsi_1)
                                    int32_t rax_9 = *(rcx_2 + rsi_1 + 4)
                                    uint32_t rax_11
                                    
                                    if (rdx_1 s> rax_9)
                                        rax_11 = 0x10000
                                    else
                                        int32_t r8_2 = *(rcx_2 + rsi_1 + 8)
                                        
                                        if (rax_9 s> r8_2)
                                            rax_11 = 0x10000
                                        else if (rdx_1 s>= 0)
                                            if (rax_9 != 0)
                                                goto label_142bbd5a6
                                            
                                            rax_11 = 0x10000
                                        else if (r8_2 s> 0 || rax_9 == 0)
                                            rax_11 = 0x10000
                                        else
                                        label_142bbd5a6:
                                            int32_t rcx_3 = *r14
                                            
                                            if (rcx_3 s< rdx_1 || rcx_3 s> r8_2)
                                                rax_11 = 0
                                            else if (rcx_3 == rax_9)
                                                rax_11 = 0x10000
                                            else if (rcx_3 s>= rax_9)
                                                rax_11 = sub_142b91790(r8_2 - rcx_3, r8_2 - rax_9)
                                            else
                                                rax_11 = sub_142b91790(rcx_3 - rdx_1, rax_9 - rdx_1)
                                    
                                    rsi_1 += 0xc
                                    r14 = &r14[1]
                                    *(rdi_1 + *(arg1 + 0x28)) =
                                        sub_142b93e80(*(*(arg1 + 0x28) + rdi_1), rax_11)
                                    j = j_1
                                    j_1 -= 1
                                while (j != 1)
                                rsi = var_60
                                rbp_1 = zx.q(arg_8)
                                r14 = arg4
                        else
                            *(rdi_1 + rax_8) = j_2.d
                        
                        r12_2 = var_68
                    else
                        *(rdi_1 + *(arg1 + 0x28)) = 0x10000
                    
                    i += 1
                    rdi_1 = &rdi_1[1]
                while (i u< rbp_1.d)
                
                result = result_1
            
            *(arg1 + 0x10) = arg2
            
            if (j_2.d == 0)
                *(arg1 + 0x14) = j_2.d
                *arg1 = 1
            else
                int64_t rax_14 = sub_142b99a90(rdi, 1, *(arg1 + 0x14) << 2, (j_2 << 2).d, 
                    *(arg1 + 0x18), &result_1)
                *(arg1 + 0x18) = rax_14
                result = result_1
                
                if (result == 0)
                    memcpy(rax_14, r14, (j_2 << 2).d)
                    result = result_1
                    *(arg1 + 0x14) = j_2.d
                    *arg1 = 1
        
        return result

return 3
