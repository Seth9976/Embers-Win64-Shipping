// 函数: sub_1414486e0
// 地址: 0x1414486e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t i_1 = 0
arg1[0xe1cc] = 0
*(arg1 + 0x38737) = 0
*(arg1 + 0x38739) = 0
arg1[0xe1cd].b = 0

if (arg1[0x14] s> 0)
    void* rcx = &arg1[0x15]
    void* var_60_1 = rcx
    
    do
        int64_t r14_1 = sx.q(*rcx)
        int64_t rdi_2 = r14_1 * 2
        int64_t rsi_1 = *(*(arg1 + 0x18) + 0x1658)
        void* rbp_1 = *(*(*(arg1 + 0x10) + 0xdb8) + (r14_1 << 3))
        int64_t* rcx_2 = *(rbp_1 + 8)
        void var_58
        *(rsi_1 + (rdi_2 << 3)) = *(*(*rcx_2 + 0x70))(rcx_2, &var_58)
        int32_t r12_2 = *(rsi_1 + (rdi_2 << 3) + 8) | 0x8000
        *(rsi_1 + (rdi_2 << 3) + 8) = r12_2
        uint8_t r13_2 = (r12_2 u>> 2).b & 1
        uint8_t r12_3 = (r12_2 u>> 8).b & 1
        char rax_8 = *(rsi_1 + (rdi_2 << 3) + 2)
        char rcx_3 = rax_8 & 0x70
        
        if ((rax_8 & 8) == 0)
            rax_8 = 0
        else if (sub_141191440((*U"1111")[sx.q(*(*(arg1 + 0x10) + 8))]) == 0)
            rax_8 = 0
        else
            rax_8 = 1
        
        if (r12_3 == 0 && rax_8 != 0)
            int64_t* rax_10 = *(arg1 + 0x38)
            arg1[0x314] += 1
            char* rcx_6 = *rax_10
            rcx_6[r14_1] |= arg1[0xa].b
        
        if (*(*(arg1 + 0x18) + 0xd74) == 0 || (*(*(rbp_1 + 8) + 0x37) & 0x10) != 0)
            if ((r12_2.b & 1) == 0)
                goto label_141448876
            
            if (r13_2 != 0 || ((r12_2 u>> 3).b & 1) != r13_2)
                arg1[sx.q(arg1[0x94]) + 0x95] = r14_1.d
                arg1[0x94] += 1
            label_141448876:
                
                if (r13_2 == 0)
                    arg1[sx.q(arg1[0x114]) + 0x115] = r14_1.d
                    arg1[0x114] += 1
                else
                    if (r12_3 != 0)
                        arg1[0x315] += 1
                    else if (((r12_2 u>> 1).b & 1) != 0)
                        char** rax_16 = *(arg1 + 0x38)
                        arg1[0x314] += 1
                        char* rcx_7 = *rax_16
                        rcx_7[r14_1] |= arg1[0xa].b
                        
                        if ((*(rsi_1 + (rdi_2 << 3) + 8) & 0x800) != 0)
                            *(arg1 + (sx.q(arg1[0x214]) << 3) + 0x858) = rbp_1
                            arg1[0x214] += 1
                    
                    int32_t rax_21 = *(rsi_1 + (rdi_2 << 3) + 8)
                    
                    if (test_bit(rax_21, 0xe))
                        char* rcx_8 = **(arg1 + 0x38728)
                        rcx_8[r14_1] |= arg1[0xa].b
                        rax_21 = *(rsi_1 + (rdi_2 << 3) + 8)
                    
                    if (rcx_3 != 0 && r12_3 == 0 && rax_21.b s< 0)
                        char rax_22 = sub_1422dd780(**(arg1 + 0x18))
                        uint8_t rcx_11 = *(rsi_1 + (rdi_2 << 3) + 2)
                        
                        if (rax_22 == 0)
                            char rax_26 = *(rsi_1 + (rdi_2 << 3) + 3)
                            arg1[0x31a] += 1
                            *(arg1 + 0xc6f) |= rcx_11 u>> 7
                            *(arg1 + 0xc73) |= rax_26 & 1
                        else
                            if ((rcx_11 & 0x40) != 0)
                                char rax_23 = *(rsi_1 + (rdi_2 << 3) + 3)
                                arg1[0x317] += 1
                                arg1[0x31b].b |= rcx_11 u>> 7
                                arg1[0x31c].b |= rax_23 & 1
                                rcx_11 = *(rsi_1 + (rdi_2 << 3) + 2)
                            
                            if ((rcx_11 & 0x10) != 0)
                                char rax_24 = *(rsi_1 + (rdi_2 << 3) + 3)
                                arg1[0x318] += 1
                                *(arg1 + 0xc6d) |= rcx_11 u>> 7
                                *(arg1 + 0xc71) |= rax_24 & 1
                                rcx_11 = *(rsi_1 + (rdi_2 << 3) + 2)
                            
                            if ((rcx_11 & 0x20) != 0)
                                char rax_25 = *(rsi_1 + (rdi_2 << 3) + 3)
                                arg1[0x319] += 1
                                *(arg1 + 0xc6e) |= rcx_11 u>> 7
                                *(arg1 + 0xc72) |= rax_25 & 1
                        
                        if ((*(rsi_1 + (rdi_2 << 3) + 2) & 4) != 0)
                            arg1[0x31d].b = 1
                    
                    arg1[0xe1cc].w |= *(rsi_1 + (rdi_2 << 3))
                    *(arg1 + 0x38732) |= *(rsi_1 + (rdi_2 << 3) + 3) u>> 2 & 1
                    *(arg1 + 0x38733) |= (*(rsi_1 + (rdi_2 << 3) + 8) u>> 0xc).b & 1
                    arg1[0xe1cd].b |= *(rsi_1 + (rdi_2 << 3) + 3) u>> 5 & 1
                    *(arg1 + 0x38735) |= *(rsi_1 + (rdi_2 << 3) + 3) u>> 6 & 1
                    *(arg1 + 0x38736) |= *(rsi_1 + (rdi_2 << 3) + 4) u>> 2 & 1
                    *(arg1 + 0x38737) |= *(rsi_1 + (rdi_2 << 3) + 3) u>> 7
                    arg1[0xe1ce].b |= *(rsi_1 + (rdi_2 << 3) + 4) & 1
                    *(arg1 + 0x38739) |= *(rsi_1 + (rdi_2 << 3) + 2) u>> 5 & 1
                    
                    if ((*(rsi_1 + (rdi_2 << 3) + 8) & 0x20) != 0)
                        *(arg1 + 0xc75) = 1
                    
                    if (data_1439b709c != 0 && (*(rsi_1 + (rdi_2 << 3) + 8) & 0x2000) != 0)
                        arg1[sx.q(arg1[0x194]) + 0x195] = r14_1.d
                        arg1[0x194] += 1
                    
                    *(rbp_1 + 0xe8) = *arg1
                    void* rdx_3 = *(arg1 + 0x18) + 0x15d8
                    void* rax_39 = *(rdx_3 + 0x10)
                    
                    if (rax_39 != 0)
                        rdx_3 = rax_39
                    
                    int32_t rax_40 = r14_1.d
                    
                    if (r14_1.d s< 0)
                        rax_40 = (r14_1 + 0x1f).d
                    
                    if (test_bit(*(rdx_3 + (sx.q(rax_40 s>> 5) << 2)), r14_1.d & 0x1f))
                        sub_1413adb90(rbp_1, *arg1, 1)
                    
                    if (sub_1413a0790(rbp_1) != 0)
                        sub_141396900(rbp_1)
                        
                        if (sub_1410a09e0((*U"1111")[sx.q(*(*(arg1 + 0x10) + 8))]) != 0)
                            *(arg1 + (sx.q(arg1[0x51e]) << 3) + 0x1480) = rbp_1
                            arg1[0x51e] += 1
                    
                    char rax_49 = *(rbp_1 + 0x120)
                    
                    if ((rax_49 & 2) != 0)
                        *(arg1 + (sx.q(arg1[0x31e]) << 3) + 0xc80) = rbp_1
                        arg1[0x31e] += 1
                        rax_49 = *(rbp_1 + 0x120)
                    
                    if ((rax_49 & 4) != 0)
                        *(arg1 + (sx.q(arg1[0x41e]) << 3) + 0x1080) = rbp_1
                        arg1[0x41e] += 1
            else
                arg1[sx.q(arg1[0x114]) + 0x115] = r14_1.d
                arg1[0x114] += 1
        else
            arg1[sx.q(arg1[0x114]) + 0x115] = r14_1.d
            arg1[0x114] += 1
        
        i = i_1 + 1
        rcx = var_60_1 + 4
        i_1 = i
        var_60_1 = rcx
    while (i s< arg1[0x14])

return i
