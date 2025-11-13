// 函数: sub_1428a0340
// 地址: 0x1428a0340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = sub_142898c70(*(arg1 + 0x98))
int32_t r14_1 = rax - 1

if (rax - 1 s>= 0)
    int32_t temp1_1
    
    do
        void* rax_1 = sub_142898ea0(*(arg1 + 0x98), r14_1)
        
        if (r14_1 == 0 || (*(rax_1 + 0xd0) & 0x20) == 0)
            if ((*(rax_1 + 0xd0) & 0x400) != 0)
                int64_t* rax_2 = sub_1428a3930(rax_1)
                int64_t* rax_3 = sub_1428a38f0(rax_1)
                int32_t rdi_1 = 0
                int32_t r13_1 = sub_1428e7350(rax_2) - 1
                
                if (r13_1 s>= 1)
                    int32_t rbx_1 = sub_1428e7350(rax_3) + 1
                    
                    if (sub_1428e7350(rax_2) != rbx_1)
                        rdi_1 = 0x48
                        goto label_1428a04a0
                    
                    int32_t rax_8 = sub_142890eb0(sub_1428e7380(rax_2, r13_1 - 1))
                    
                    if (sub_142890eb0(sub_1428e7380(rax_2, r13_1)) == rax_8)
                        rdi_1 = 0x48
                        goto label_1428a04a0
                    
                    int64_t* rax_11 = sub_1428abf10(rax_2)
                    
                    if (rax_11 == 0)
                        sub_1428a5670(0xb, 0x95, 0x41, "crypto\x509\x509_vfy.c", 0x285)
                        *(arg1 + 0xb0) = 0x11
                        return 0
                    
                    int64_t* rax_12 = sub_1428e7270(rax_11, r13_1)
                    int32_t rax_14 = sub_1428a96d0(sub_142891580(rax_12))
                    int32_t rax_15
                    
                    if (rax_14 == 0xd)
                        rax_15 = sub_1428a32a0(rax_11, rax_3)
                    
                    if (rax_14 != 0xd || rax_15 != 0)
                        rdi_1 = 0x48
                    
                    sub_1428abed0(rax_12)
                    sub_1428abf30(rax_11)
                    
                    if (rdi_1 != 0)
                        goto label_1428a04a0
                else
                    rdi_1 = 0x48
                label_1428a04a0:
                    *(arg1 + 0xac) = r14_1
                    *(arg1 + 0xb8) = rax_1
                    *(arg1 + 0xb0) = rdi_1
                    
                    if ((*(arg1 + 0x38))(0, arg1) == 0)
                        return 0
            
            for (int32_t i = sub_142898c70(*(arg1 + 0x98)) - 1; i s> r14_1; i -= 1)
                int64_t* r12_2 = *(sub_142898ea0(*(arg1 + 0x98), i) + 0x108)
                
                if (r12_2 != 0)
                    int32_t rax_19 = sub_1428e7e40(rax_1, r12_2)
                    
                    if (rax_19 != 0)
                    label_1428a05a1:
                        
                        if (rax_19 == 0x11)
                            return 0
                        
                        *(arg1 + 0xac) = r14_1
                        *(arg1 + 0xb8) = rax_1
                        *(arg1 + 0xb0) = rax_19
                        
                        if ((*(arg1 + 0x38))(0, arg1) == 0)
                            return 0
                    else if (r14_1 == 0)
                        char rcx_21 = (*(*(arg1 + 0x20) + 0x38)).b
                        
                        if ((rcx_21 & 0x20) == 0)
                            if ((rcx_21 & 1) != 0)
                            label_1428a0598:
                                rax_19 = sub_1428e8000(rax_1, r12_2)
                                
                                if (rax_19 != 0)
                                    goto label_1428a05a1
                            else
                                int32_t r13_2 = 0
                                int32_t* rax_21 =
                                    sub_1428ac7d0(rax_1, r14_1 + 0x55, nullptr, nullptr)
                                
                                if (rax_21 == 0)
                                    goto label_1428a0598
                                
                                int32_t rbx_4 = 0
                                
                                if (sub_142898c70(rax_21) s> 0)
                                    int32_t rax_24
                                    
                                    do
                                        if (*sub_142898ea0(rax_21, rbx_4) == 2)
                                            r13_2 = 1
                                            break
                                        
                                        rbx_4 += 1
                                        rax_24 = sub_142898c70(rax_21)
                                    while (rbx_4 s< rax_24)
                                
                                sub_1428e7a10(rax_21)
                                
                                if (r13_2 == 0)
                                    goto label_1428a0598
        
        temp1_1 = r14_1
        r14_1 -= 1
    while (temp1_1 - 1 s>= 0)

return 1
