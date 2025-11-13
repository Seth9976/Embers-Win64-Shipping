// 函数: sub_14289de90
// 地址: 0x14289de90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r12 = 0

if (arg2 != 0)
    int32_t* rax_1 = sub_14289d150()
    
    if (rax_1 != 0)
        int32_t rax_2
        rax_2.b = arg3 != 0
        *rax_1 = rax_2 + 1
        *(rax_1 + 8) = arg2
        int32_t rcx = *rax_1
        
        if (rcx == 1)
            sub_1428a3ba0(arg2)
        else if (rcx == 2)
            sub_1428e46f0(arg2)
        
        sub_1428a5c40(*(arg1 + 0x90))
        int32_t* r15 = *(arg1 + 8)
        int32_t rax_4 = sub_1428989f0(r15, rax_1)
        int32_t rsi_1 = rax_4
        int32_t rbp
        
        if (rax_4 s< 0)
        label_14289dfe1:
            int32_t rax_13 = sub_142898d50(*(arg1 + 8), rax_1)
            r12 = rax_13
            rbp.b = rax_13 != 0
        else
            int32_t* rdi_1
            
            if (*rax_1 - 1 u<= 1)
                int32_t rax_8 = sub_142898c70(r15)
                
                if (rsi_1 s>= rax_8)
                    goto label_14289dfe1
                
                while (true)
                    int32_t* rax_9 = sub_142898ea0(r15, rsi_1)
                    rdi_1 = rax_9
                    int32_t rcx_8 = *rax_9
                    
                    if (rcx_8 != *rax_1)
                        goto label_14289dfe1
                    
                    if (rcx_8 != 0)
                        int32_t rax_10
                        
                        if (rcx_8 == 1)
                            rax_10 = sub_1428a3940(*(rax_9 + 8), *(rax_1 + 8))
                        label_14289df9f:
                            
                            if (rax_10 != 0)
                                goto label_14289dfe1
                        else if (rcx_8 == 2)
                            rax_10 = sub_1428a3250(*(rax_9 + 8), *(rax_1 + 8))
                            goto label_14289df9f
                    
                    int32_t rax_11 = *rax_1
                    int32_t rax_12
                    
                    if (rax_11 != 1)
                        if (rax_11 != 2)
                            break
                        
                        rax_12 = sub_1428a3270(*(rdi_1 + 8), *(rax_1 + 8))
                    else
                        rax_12 = sub_1428a3740(*(rdi_1 + 8), *(rax_1 + 8))
                    
                    if (rax_12 == 0)
                        break
                    
                    rsi_1 += 1
                    
                    if (rsi_1 s>= rax_8)
                        goto label_14289dfe1
            else
                rdi_1 = sub_142898ea0(r15, rsi_1)
            
            if (rdi_1 == 0)
                goto label_14289dfe1
            
            rbp = 1
        
        sub_1428a5d00(*(arg1 + 0x90))
        
        if (r12 == 0)
            sub_14289d0f0(rax_1)
        
        return zx.q(rbp)

return 0
