// 函数: sub_1428eb3a0
// 地址: 0x1428eb3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t* rbp = nullptr
int32_t arg_8 = 0
int64_t* rdi = nullptr

if (arg1 != 0)
    int32_t rax_1 = *arg1
    
    if (rax_1 != 0)
        if (rax_1 == 1 && sub_142898c70(*(arg1 + 8)) != 0)
            int32_t r13 = 0
            
            if (sub_142898c70(*(arg1 + 8)) - 1 s> 0)
                while (true)
                    int32_t* rax_5 = sub_142898ea0(*(arg1 + 8), r13)
                    r13 += 1
                    int32_t* rax_6 = sub_142898ea0(*(arg1 + 8), r13)
                    
                    if (rax_5 == 0)
                        goto label_1428eb58b
                    
                    int32_t rcx_4 = *rax_5
                    int32_t* rsi_1
                    int32_t* r14_1
                    
                    if (rcx_4 == 0)
                        rsi_1 = *(rax_5 + 8)
                        r14_1 = rsi_1
                    else
                        if (rcx_4 != 1)
                            goto label_1428eb58b
                        
                        int64_t* rcx_5 = *(rax_5 + 8)
                        rsi_1 = *rcx_5
                        r14_1 = rcx_5[1]
                    
                    if (rax_6 == 0)
                        goto label_1428eb58b
                    
                    int32_t rcx_6 = *rax_6
                    int32_t* rbx_2
                    int32_t* r15_1
                    
                    if (rcx_6 == 0)
                        rbx_2 = *(rax_6 + 8)
                        r15_1 = rbx_2
                    else
                        if (rcx_6 != 1)
                            goto label_1428eb58b
                        
                        int64_t* rax_7 = *(rax_6 + 8)
                        rbx_2 = *rax_7
                        r15_1 = rax_7[1]
                    
                    if (sub_1428e47f0(rsi_1, rbx_2) s>= 0)
                        goto label_1428eb58b
                    
                    if (sub_1428e47f0(rsi_1, r14_1) s> 0)
                        goto label_1428eb58b
                    
                    if (sub_1428e47f0(rbx_2, r15_1) s> 0)
                        goto label_1428eb58b
                    
                    if (rdi != 0)
                    label_1428eb4ed:
                        
                        if (sub_1428e49a0(r14_1, rdi) != 0 && sub_1428f4ee0(rdi, 1) != 0)
                            int32_t* rax_14 = sub_1428e49c0(rdi, rbp)
                            rbp = rax_14
                            
                            if (rax_14 != 0)
                                if (sub_1428e47f0(rax_14, rbx_2) s>= 0)
                                    goto label_1428eb58b
                                
                                if (r13 s>= sub_142898c70(*(arg1 + 8)) - 1)
                                    break
                                
                                continue
                    else
                        int64_t* rax_11 = sub_142890500()
                        rdi = rax_11
                        
                        if (rax_11 != 0)
                            goto label_1428eb4ed
                    
                    sub_1428a5670(0x22, 0xa2, 0x41, "crypto\x509v3\v3_asid.c", 0x131)
                    goto label_1428eb58b
            
            int32_t rax_18 = sub_142898c70(*(arg1 + 8))
            int32_t* rax_19 = sub_142898ea0(*(arg1 + 8), rax_18 - 1)
            int32_t rax_20
            
            if (rax_19 != 0 && *rax_19 == 1)
                int64_t* rdx_10 = *(rax_19 + 8)
                rax_20 = sub_1428e47f0(*rdx_10, rdx_10[1])
            
            if (rax_19 == 0 || *rax_19 != 1 || rax_20 s<= 0)
                arg_8 = 1
            
        label_1428eb58b:
            sub_1428c3460(rbp)
            sub_1428901a0(rdi)
            return zx.q(arg_8)
        
        return 0

return 1
