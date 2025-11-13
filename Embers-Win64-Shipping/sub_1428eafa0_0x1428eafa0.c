// 函数: sub_1428eafa0
// 地址: 0x1428eafa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t rbx = 0
int64_t* rdi = nullptr
__builtin_memset(&arg2, 0, 0x14)

if (arg1 != 0)
    int32_t rax_1 = *arg1
    
    if (rax_1 != 0)
        if (rax_1 == 1 && sub_142898c70(*(arg1 + 8)) != 0)
            sub_142898e50(*(arg1 + 8))
            int32_t r13 = 0
            
            if (sub_142898c70(*(arg1 + 8)) - 1 s> 0)
                int32_t rdi_1 = 1
                int32_t arg_8 = 1
                
                while (true)
                    int32_t* rax_5 = sub_142898ea0(*(arg1 + 8), r13)
                    int32_t* rax_6 = sub_142898ea0(*(arg1 + 8), rdi_1)
                    
                    if (rax_5 != 0)
                        int32_t rcx_5 = *rax_5
                        int32_t* rbp_1
                        int32_t* r14_1
                        
                        if (rcx_5 == 0)
                            r14_1 = *(rax_5 + 8)
                            rbp_1 = r14_1
                        label_1428eb09b:
                            
                            if (rax_6 != 0)
                                int32_t rcx_6 = *rax_6
                                int32_t* rsi_1
                                int32_t* r15_1
                                
                                if (rcx_6 == 0)
                                    rsi_1 = *(rax_6 + 8)
                                    r15_1 = rsi_1
                                label_1428eb0cd:
                                    
                                    if (sub_1428e47f0(r14_1, rsi_1) s<= 0
                                            && sub_1428e47f0(r14_1, rbp_1) s<= 0
                                            && sub_1428e47f0(rsi_1, r15_1) s<= 0)
                                        int32_t var_58_1
                                        int32_t r8_2
                                        
                                        if (sub_1428e47f0(rbp_1, rsi_1) s>= 0)
                                            var_58_1 = 0x19a
                                            r8_2 = 0x74
                                        else
                                            int64_t* rax_13 = arg2
                                            
                                            if (rax_13 != 0)
                                            label_1428eb13c:
                                                
                                                if (sub_1428e49a0(rbp_1, rax_13) != 0)
                                                    int64_t* rbp_2 = arg2
                                                    
                                                    if (sub_1428f4ee0(rbp_2, 1) != 0)
                                                        int32_t* rax_16 = sub_1428e49c0(rbp_2, arg3)
                                                        arg3 = rax_16
                                                        
                                                        if (rax_16 != 0)
                                                            int32_t rdi_4
                                                            
                                                            if (sub_1428e47f0(rax_16, rsi_1) != 0)
                                                                rdi_4 = arg_8
                                                            else
                                                                int32_t rcx_15 = *rax_5
                                                                
                                                                if (rcx_15 == 0)
                                                                    int64_t* rax_19 = sub_1428a6730(0x10)
                                                                    
                                                                    if (rax_19 == 0)
                                                                        sub_1428a5670(0x22, 0xa1, 0x41, 
                                                                            "crypto\x509v3\v3_asid.c", 0x1b4)
                                                                        rdi = rbp_2
                                                                        goto label_1428eb309
                                                                    
                                                                    *rax_19 = r14_1
                                                                    rax_19[1] = r15_1
                                                                    *rax_5 = 1
                                                                    *(rax_5 + 8) = rax_19
                                                                else if (rcx_15 == 1)
                                                                    sub_1428c3460(*(*(rax_5 + 8) + 8))
                                                                    *(*(rax_5 + 8) + 8) = r15_1
                                                                
                                                                int32_t rcx_18 = *rax_6
                                                                
                                                                if (rcx_18 == 0)
                                                                    *(rax_6 + 8) = 0
                                                                else if (rcx_18 == 1)
                                                                    *(*(rax_6 + 8) + 8) = 0
                                                                
                                                                sub_1428c3d60(rax_6, &data_143514b70)
                                                                sub_142898840(*(arg1 + 8), arg_8)
                                                                r13 -= 1
                                                                rdi_4 = arg_8 - 1
                                                            
                                                            rdi_1 = rdi_4 + 1
                                                            arg_8 = rdi_1
                                                            r13 += 1
                                                            
                                                            if (r13
                                                                    s< sub_142898c70(*(arg1 + 8)) - 1)
                                                                continue
                                                            
                                                            rbx = 0
                                                            rdi = rbp_2
                                                            break
                                            else
                                                rax_13 = sub_142890500()
                                                arg2 = rax_13
                                                
                                                if (rax_13 != 0)
                                                    goto label_1428eb13c
                                            
                                            var_58_1 = 0x1a7
                                            r8_2 = 0x41
                                        
                                        sub_1428a5670(0x22, 0xa1, r8_2, "crypto\x509v3\v3_asid.c", 
                                            var_58_1)
                                else if (rcx_6 == 1)
                                    int64_t* rax_8 = *(rax_6 + 8)
                                    rsi_1 = *rax_8
                                    r15_1 = rax_8[1]
                                    goto label_1428eb0cd
                        else if (rcx_5 == 1)
                            int64_t* rax_7 = *(rax_5 + 8)
                            r14_1 = *rax_7
                            rbp_1 = rax_7[1]
                            goto label_1428eb09b
                    
                    rdi = arg2
                    goto label_1428eb309
            
            int32_t rax_23 = sub_142898c70(*(arg1 + 8))
            int32_t* rax_24 = sub_142898ea0(*(arg1 + 8), rax_23 - 1)
            int32_t rax_25
            
            if (rax_24 != 0 && *rax_24 == 1)
                int64_t* rdx_13 = *(rax_24 + 8)
                rax_25 = sub_1428e47f0(*rdx_13, rdx_13[1])
            
            if (rax_24 == 0 || *rax_24 != 1 || rax_25 s<= 0)
                if (sub_1428eb3a0(arg1) != 0)
                    rbx = 1
                
                arg4 = rbx
            
        label_1428eb309:
            sub_1428c3460(arg3)
            sub_1428901a0(rdi)
            return zx.q(arg4)
        
        sub_1428a5670(0x22, 0xa1, 0x74, "crypto\x509v3\v3_asid.c", 0x171)
        return 0

return 1
