// 函数: sub_142817060
// 地址: 0x142817060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t* r12 = arg2

if (*(arg1 + 0x151) == 0)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(arg3 + 0x18) s> 0)
        do
            uint64_t r14_1 = 0
            int64_t* rcx = *(arg1 + 0x178)
            int32_t var_40_1 = 0
            uint64_t var_38
            int32_t arg_8
            
            if (*(arg1 + 0x148) != 4)
                uint64_t rsi_2 = *r12
                r12 = &r12[2]
                int32_t var_48
                int32_t var_4c
                
                if (rcx == 0)
                    if (sub_142811370(arg1 + 0x168, rsi_2, &var_48) != 0)
                        rsi_2 = zx.q(var_48)
                    else if (rsi_2 != 0)
                        int32_t rax_11 = *(arg1 + 0x180) + 1
                        *(arg1 + 0x180) = rax_11
                        int32_t rbx_4 = rax_11 | 0x80000000
                        sub_1428112f0(arg1 + 0x168, rsi_2, rbx_4)
                        rsi_2 = zx.q(rbx_4)
                else if (sub_142811370(rcx, rsi_2, &var_4c) != 0)
                    rsi_2 = zx.q(var_4c)
                else if (rsi_2 != 0)
                    char* rdx_4 = *(arg3 + 8)
                    
                    if (rdx_4 != 0)
                        int64_t rax_8 = 0
                        
                        while (true)
                            char rcx_5 = rdx_4[rax_8]
                            rax_8 += 1
                            
                            if (rcx_5 != *(rax_8 + 0x1434d0b47))
                                break
                            
                            if (rax_8 == 6)
                                goto label_142817254
                    
                    rsi_2 = 0x12345678
            label_142817254:
                r14_1 = 0
                
                if (*(arg1 + 0x150) == 0)
                    r14_1 = rsi_2
                
                var_40_1 = r14_1.d
                var_38 = r14_1
            else
                uint64_t rbx_1 = zx.q(*r12)
                r12 = &r12[1]
                arg_8 = rbx_1.d
                uint64_t rdx = zx.q(rbx_1.d)
                int32_t var_54
                
                if (rcx == 0)
                    int32_t var_50
                    
                    if (sub_142811370(arg1 + 0x168, rdx, &var_50) != 0)
                        rbx_1 = zx.q(var_50)
                        arg_8 = rbx_1.d
                    else if (rbx_1.d != 0)
                        int32_t rax_4 = *(arg1 + 0x180) + 1
                        uint64_t rdx_2 = rbx_1
                        *(arg1 + 0x180) = rax_4
                        rbx_1 = zx.q(rax_4) | 0x80000000
                        sub_1428112f0(arg1 + 0x168, rdx_2, rbx_1.d)
                        arg_8 = rbx_1.d
                    
                    i = i_1
                else if (sub_142811370(rcx, rdx, &var_54) != 0)
                    rbx_1 = zx.q(var_54)
                    arg_8 = rbx_1.d
                else if (rbx_1.d != 0)
                    char* rdx_1 = *(arg3 + 8)
                    
                    if (rdx_1 == 0)
                    label_142817126:
                        rbx_1 = 0x12345678
                        arg_8 = 0x12345678
                    else
                        for (int64_t j = 0; j != 6; )
                            char rax_1 = rdx_1[j]
                            j += 1
                            
                            if (rax_1 != *(j + 0x1434d0b47))
                                goto label_142817126
                
                if (*(arg1 + 0x140) != 0)
                    arg_8.b = arg_8:3.b
                    arg_8:3.b = arg_8.b
                    arg_8:1.b = arg_8:2.b
                    arg_8:2.b = arg_8:1.b
                    rbx_1 = zx.q(arg_8)
                
                if (*(arg1 + 0x150) != 0)
                    rbx_1 = 0
                
                var_38.d = rbx_1.d
            
            int32_t r8_6 = *(arg1 + 0x148)
            int32_t rax_12 = *(arg1 + 0x14c)
            int64_t* rdx_6
            
            if (rax_12 != r8_6)
                if (rax_12 s<= r8_6)
                    bool cond:2_1 = *(arg1 + 0x140) == 0
                    arg_8 = r14_1.d
                    
                    if (not(cond:2_1))
                        arg_8.b = var_40_1:3.b
                        arg_8:1.b = arg_8:2.b
                        arg_8:3.b = r14_1.b
                        arg_8:2.b = arg_8:1.b
                    
                    rdx_6 = &arg_8
                else
                    int64_t* rcx_8 = *(arg1 + 0x138)
                    int32_t rax_14 = (**rcx_8)(rcx_8, &var_38, r8_6)
                    int32_t var_44 = 0
                    rdx_6 = &var_44
                    *(arg1 + 0x144) += rax_14
                
                r8_6 = 4
            else
                rdx_6 = &var_38
            
            int64_t* rcx_10 = *(arg1 + 0x138)
            i += 1
            result = (**rcx_10)(rcx_10, rdx_6, r8_6)
            *(arg1 + 0x144) += result
            i_1 = i
        while (i s< *(arg3 + 0x18))

return result
