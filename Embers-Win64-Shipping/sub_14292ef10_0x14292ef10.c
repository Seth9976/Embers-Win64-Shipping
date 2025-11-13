// 函数: sub_14292ef10
// 地址: 0x14292ef10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int32_t rdi = 0
int32_t var_48 = 0
int32_t rbp = arg4
int32_t* rsi = arg2

if (sub_142898c70(arg2) s> 0)
    int32_t rax_16
    
    do
        int64_t* rax_1 = sub_142898ea0(rsi, rdi)
        sub_1428b6f70(arg3, "%*sPolicy: ", zx.q(rbp))
        sub_1428cdc60(arg3, *rax_1)
        sub_14289a750(arg3, &data_14370209c)
        int32_t* rdi_2 = rax_1[1]
        int32_t* var_40_1 = rdi_2
        
        if (rdi_2 != 0)
            int32_t rbp_1 = 0
            
            if (sub_142898c70(rdi_2) s> 0)
                int32_t rax_15
                
                do
                    int64_t* rax_3 = sub_142898ea0(rdi_2, rbp_1)
                    int32_t rax_4 = sub_1428a96d0(*rax_3)
                    
                    if (rax_4 == 0xa4)
                        int64_t var_58_4 = *(rax_3[1] + 8)
                        sub_1428b6f70(arg3, "%*sCPS: %s\n", zx.q(rbp + 2))
                    else if (rax_4 == 0xa5)
                        sub_1428b6f70(arg3, "%*sUser Notice:\n", zx.q(rbp + 2))
                        int64_t* r12_1 = rax_3[1]
                        int64_t* r14_1 = *r12_1
                        
                        if (r14_1 != 0)
                            int64_t var_58_1 = *(*r14_1 + 8)
                            sub_1428b6f70(arg3, "%*sOrganization: %s\n", zx.q(rbp + 4))
                            char* const rcx_14 = &data_1437020ab
                            
                            if (sub_142898c70(r14_1[1]) s> 1)
                                rcx_14 = &data_142d8c8c4
                            
                            char* const var_58_2 = rcx_14
                            sub_1428b6f70(arg3, "%*sNumber%s: ", zx.q(rbp + 4))
                            int32_t rdi_4 = 0
                            
                            if (sub_142898c70(r14_1[1]) s> 0)
                                int32_t rax_11
                                
                                do
                                    int32_t* rax_9 = sub_142898ea0(r14_1[1], rdi_4)
                                    
                                    if (rdi_4 != 0)
                                        sub_14289a750(arg3, &data_14321f660)
                                    
                                    if (rax_9 != 0)
                                        int32_t* rax_10 = sub_1428ea3b0(0, rax_9)
                                        
                                        if (rax_10 == 0)
                                            goto label_14292f191
                                        
                                        sub_14289a750(arg3, rax_10)
                                        sub_1428a6780(rax_10)
                                    else
                                        sub_14289a750(arg3, "(null)")
                                    
                                    rdi_4 += 1
                                    rax_11 = sub_142898c70(r14_1[1])
                                while (rdi_4 s< rax_11)
                            
                            sub_14289a750(arg3, &data_14370209c)
                        
                        void* rax_12 = r12_1[1]
                        
                        if (rax_12 != 0)
                            int64_t var_58_3 = *(rax_12 + 8)
                            sub_1428b6f70(arg3, "%*sExplicit Text: %s\n", zx.q(rbp + 4))
                    else
                        sub_1428b6f70(arg3, "%*sUnknown Qualifier: ", zx.q(rbp + 4))
                        sub_1428cdc60(arg3, *rax_3)
                        sub_14289a750(arg3, &data_14370209c)
                    
                label_14292f191:
                    rdi_2 = var_40_1
                    rbp_1 += 1
                    rax_15 = sub_142898c70(rdi_2)
                while (rbp_1 s< rax_15)
                rsi = arg2
            
            rbp = arg4
        
        rdi = var_48 + 1
        var_48 = rdi
        rax_16 = sub_142898c70(rsi)
    while (rdi s< rax_16)

return 1
