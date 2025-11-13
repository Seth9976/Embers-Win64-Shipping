// 函数: sub_1428a1040
// 地址: 0x1428a1040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char rax = (*(arg2 + 0x90)).b
char rsi = arg3
void* rbx = arg1

if ((rax & 0x10) == 0)
    if ((*(arg1 + 0xd0) & 0x10) == 0)
        if ((rax & 8) == 0)
        label_1428a10a3:
            int32_t r12_1 = 0
            *arg4 = *(arg2 + 0x94)
            
            if (sub_142898c70(*(arg1 + 0xf8)) s> 0)
                while (true)
                    int64_t* rax_3 = sub_142898ea0(*(rbx + 0xf8), r12_1)
                    void* rax_4 = sub_142891590(arg2)
                    int32_t* rcx_3 = rax_3[2]
                    
                    if (rcx_3 != 0)
                        int32_t rbx_1 = 0
                        
                        if (sub_142898c70(rcx_3) s> 0)
                            while (true)
                                int32_t* rax_6 = sub_142898ea0(rax_3[2], rbx_1)
                                
                                if (*rax_6 == 4 && sub_1428a32a0(*(rax_6 + 8), rax_4) == 0)
                                    rbx = arg1
                                    break
                                
                                rbx_1 += 1
                                
                                if (rbx_1 s>= sub_142898c70(rax_3[2]))
                                    goto label_1428a1120
                            
                            goto label_1428a113b
                        
                    label_1428a1120:
                        rbx = arg1
                    else if ((rsi & 0x20) != 0)
                    label_1428a113b:
                        int64_t* rdi_2 = *(arg2 + 0x88)
                        
                        if (rdi_2 == 0)
                        label_1428a1195:
                            *arg4 &= rax_3[3].d
                            break
                        
                        int32_t* r14_1 = *rax_3
                        int32_t* rdi_3 = *rdi_2
                        
                        if (r14_1 == 0 || rdi_3 == 0)
                            goto label_1428a1195
                        
                        void* rbp_1
                        int32_t* rsi_1
                        
                        if (*r14_1 == 1)
                            rbp_1 = *(r14_1 + 0x10)
                            
                            if (rbp_1 != 0)
                                if (*rdi_3 != 1)
                                    rsi_1 = *(rdi_3 + 8)
                                    goto label_1428a11bd
                                
                                void* rdx_3 = *(rdi_3 + 0x10)
                                
                                if (rdx_3 != 0 && sub_1428a32a0(rbp_1, rdx_3) == 0)
                                    goto label_1428a1195
                        else if (*rdi_3 != 1)
                        label_1428a1207:
                            int32_t rsi_2 = 0
                            
                            if (sub_142898c70(*(r14_1 + 8)) s<= 0)
                                rsi = arg3
                            else
                                int32_t rax_21
                                
                                do
                                    int32_t* rax_16 = sub_142898ea0(*(r14_1 + 8), rsi_2)
                                    int32_t rbx_3 = 0
                                    
                                    if (sub_142898c70(*(rdi_3 + 8)) s> 0)
                                        int32_t rax_20
                                        
                                        do
                                            if (sub_1428e7a60(rax_16, 
                                                    sub_142898ea0(*(rdi_3 + 8), rbx_3)) == 0)
                                                goto label_1428a1195
                                            
                                            rbx_3 += 1
                                            rax_20 = sub_142898c70(*(rdi_3 + 8))
                                        while (rbx_3 s< rax_20)
                                    
                                    rsi_2 += 1
                                    rax_21 = sub_142898c70(*(r14_1 + 8))
                                while (rsi_2 s< rax_21)
                                rbx = arg1
                                rsi = arg3
                        else
                            rbp_1 = *(rdi_3 + 0x10)
                            
                            if (rbp_1 != 0)
                                rsi_1 = *(r14_1 + 8)
                            label_1428a11bd:
                                
                                if (rbp_1 == 0)
                                    goto label_1428a1207
                                
                                int32_t rbx_2 = 0
                                
                                if (sub_142898c70(rsi_1) s> 0)
                                    int32_t rax_14
                                    
                                    do
                                        int32_t* rax_12 = sub_142898ea0(rsi_1, rbx_2)
                                        
                                        if (*rax_12 == 4
                                                && sub_1428a32a0(rbp_1, *(rax_12 + 8)) == 0)
                                            goto label_1428a1195
                                        
                                        rbx_2 += 1
                                        rax_14 = sub_142898c70(rsi_1)
                                    while (rbx_2 s< rax_14)
                                
                                rbx = arg1
                                rsi = arg3
                    
                    r12_1 += 1
                    
                    if (r12_1 s>= sub_142898c70(*(rbx + 0xf8)))
                        goto label_1428a128d
                
                return 1
            
        label_1428a128d:
            int64_t* rax_23 = *(arg2 + 0x88)
            
            if ((rax_23 == 0 || *rax_23 == 0) && (rsi & 0x20) != 0)
                return 1
    else if ((rax & 4) == 0)
        goto label_1428a10a3

return 0
