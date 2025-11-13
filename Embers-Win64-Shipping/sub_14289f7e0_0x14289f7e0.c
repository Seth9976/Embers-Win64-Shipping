// 函数: sub_14289f7e0
// 地址: 0x14289f7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r13 = 0
int32_t r14 = 0
int32_t rax = sub_142898c70(*(arg1 + 0x98))
int32_t rbp = -1
int32_t r12
int32_t r15

if (*(arg1 + 0xd8) == 0)
    void* rax_1 = *(arg1 + 0x20)
    r12 = *(rax_1 + 0x18)
    r15 = *(rax_1 + 0x14) u>> 6 & 1
else
    r15 = 0
    r12 = 6

int32_t rsi = 0

if (rax s> 0)
    while (true)
        int64_t* rax_2 = sub_142898ea0(*(arg1 + 0x98), rsi)
        int32_t rax_3
        
        if ((*(*(arg1 + 0x20) + 0x14) & 0x10) == 0 && (rax_2[0x1a].d & 0x200) != 0)
            *(arg1 + 0xac) = rsi
            *(arg1 + 0xb8) = rax_2
            *(arg1 + 0xb0) = 0x22
            rax_3 = (*(arg1 + 0x38))(0, arg1)
        
        if ((*(*(arg1 + 0x20) + 0x14) & 0x10) != 0 || (rax_2[0x1a].d & 0x200) == 0 || rax_3 != 0)
            int32_t rax_4
            
            if (r15 == 0 && (rax_2[0x1a].d & 0x400) != 0)
                *(arg1 + 0xac) = rsi
                *(arg1 + 0xb8) = rax_2
                *(arg1 + 0xb0) = 0x28
                rax_4 = (*(arg1 + 0x38))(0, arg1)
            
            if (r15 != 0 || (rax_2[0x1a].d & 0x400) == 0 || rax_4 != 0)
                int32_t rax_5 = sub_1428ae760(rax_2)
                int32_t rax_6
                
                if (rbp == 0xffffffff)
                    if ((*(*(arg1 + 0x20) + 0x14) & 0x20) != 0 && rax_5 u> 1)
                    label_14289f931:
                        rax_6 = 0x18
                        goto label_14289f936
                    
                label_14289f971:
                    
                    if (r12 s<= 0)
                    label_14289fa10:
                        
                        if (rsi s<= 1 || (rax_2[0x1a].b & 0x20) != 0)
                        label_14289fa5a:
                            int32_t rcx_12 = rax_2[0x1a].d
                            int32_t rax_20 = r13 + 1
                            
                            if ((rcx_12.b & 0x20) != 0)
                                rax_20 = r13
                            
                            r13 = rax_20
                            
                            if (not(test_bit(rcx_12, 0xa)))
                                rbp = 1
                            label_14289faba:
                                rsi += 1
                                
                                if (rsi s>= rax)
                                    break
                                
                                continue
                            else
                                int32_t rax_21 = *(rax_2 + 0xcc)
                                
                                if (rax_21 == 0xffffffff)
                                    goto label_14289faae
                                
                                int32_t rax_22
                                
                                if (r14 s> rax_21)
                                    *(arg1 + 0xac) = rsi
                                    *(arg1 + 0xb8) = rax_2
                                    *(arg1 + 0xb0) = 0x26
                                    rax_22 = (*(arg1 + 0x38))(0, arg1)
                                
                                if (r14 s<= rax_21 || rax_22 != 0)
                                    r14 = *(rax_2 + 0xcc)
                                label_14289faae:
                                    r14 += 1
                                    rbp = 0
                                    goto label_14289faba
                        else
                            int32_t rax_16 = rax_2[0x19].d
                            
                            if (rax_16 == 0xffffffff || r13 s<= rax_16 + 1 + r14)
                                goto label_14289fa5a
                            
                            *(arg1 + 0xac) = rsi
                            *(arg1 + 0xb8) = rax_2
                            *(arg1 + 0xb0) = 0x19
                            
                            if ((*(arg1 + 0x38))(0, arg1) != 0)
                                goto label_14289fa5a
                    else
                        int32_t rax_10 = 3
                        
                        if (rsi s>= *(arg1 + 0x94))
                            void* rcx_8 = *(arg1 + 0x20)
                            
                            if (r12 == *(rcx_8 + 0x18))
                                rax_10 = sub_1428e78c0(rax_2, zx.q(*(rcx_8 + 0x1c)), 4)
                        
                        if (rax_10 == 1)
                            goto label_14289fa10
                        
                        int32_t rax_12
                        
                        if (rax_10 != 2)
                            int64_t r8_1
                            r8_1.b = rbp s> 0
                            rax_12 = sub_1428ae8e0(rax_2, zx.q(r12), r8_1)
                        
                        if (rax_10 != 2 && rax_12 != 0
                                && (rax_12 == 1 || (*(*(arg1 + 0x20) + 0x14) & 0x20) == 0))
                            goto label_14289fa10
                        
                        *(arg1 + 0xac) = rsi
                        int64_t* rax_14
                        
                        if (rax_2 == 0)
                            rax_14 = sub_142898ea0(*(arg1 + 0x98), rsi)
                        else
                            rax_14 = rax_2
                        
                        *(arg1 + 0xb8) = rax_14
                        *(arg1 + 0xb0) = 0x1a
                        
                        if ((*(arg1 + 0x38))(0, arg1) != 0)
                            goto label_14289fa10
                else
                    if (rbp != 0)
                        if (rax_5 == 0 || ((rsi + 1 s< rax
                                || (*(*(arg1 + 0x20) + 0x14) & 0x20) != 0) && rax_5 != 1))
                            goto label_14289f931
                        
                        goto label_14289f971
                    
                    if (rax_5 == 0)
                        goto label_14289f971
                    
                    rax_6 = 0x25
                label_14289f936:
                    *(arg1 + 0xb0) = rax_6
                    *(arg1 + 0xac) = rsi
                    int64_t* rax_8
                    
                    if (rax_2 == 0)
                        rax_8 = sub_142898ea0(*(arg1 + 0x98), rsi)
                    else
                        rax_8 = rax_2
                    
                    *(arg1 + 0xb8) = rax_8
                    
                    if ((*(arg1 + 0x38))(0, arg1) != 0)
                        goto label_14289f971
        
        return 0

return 1
