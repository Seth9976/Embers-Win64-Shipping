// 函数: sub_1428a7e00
// 地址: 0x1428a7e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t rdi = arg3
int64_t rbp = arg2

if (arg2 != 0)
    int32_t* rsi_1 = *(arg1 + 0x38)
    
    if (rsi_1 != 0 && *(arg1 + 0x40) != 0)
        int32_t r14 = 0
        sub_142899cc0(arg1, 0xf)
        uint64_t rbx = zx.q(rsi_1[4])
        
        while (true)
            if (rbx.d == 0)
                goto label_1428a7e9f
            
            int32_t r12_1 = rdi
            
            if (rbx.d s<= rdi)
                r12_1 = rbx.d
            
            int64_t rbx_1 = sx.q(r12_1)
            memcpy(rbp, sx.q(rsi_1[5]) + *(rsi_1 + 8), rbx_1.d)
            rsi_1[5] += r12_1
            r14 += r12_1
            rsi_1[4] -= r12_1
            
            if (rdi != r12_1)
                rdi -= r12_1
                rbp += rbx_1
            label_1428a7e9f:
                int32_t r8_1 = *rsi_1
                
                if (rdi s> r8_1)
                    while (true)
                        int32_t rax_2 = sub_14289a950(*(arg1 + 0x40), rbp, rdi)
                        rbx = sx.q(rax_2)
                        
                        if (rax_2 s<= 0)
                            sub_142899cd0(arg1)
                            int32_t temp0_1 = rbx.d
                            
                            if (temp0_1 s< 0)
                                break
                            
                            if (temp0_1 == 0)
                                return zx.q(r14)
                        
                        r14 += rbx.d
                        
                        if (rdi == rbx.d)
                            return zx.q(r14)
                        
                        rbp += rbx
                        rdi -= rbx.d
                    
                    break
                
                int32_t rax_1 = sub_14289a950(*(arg1 + 0x40), *(rsi_1 + 8), r8_1)
                rbx = zx.q(rax_1)
                
                if (rax_1 s> 0)
                label_1428a7ec8:
                    rsi_1[5] = 0
                    rsi_1[4] = rbx.d
                    continue
                else
                    sub_142899cd0(arg1)
                    int32_t temp1_1 = rbx.d
                    
                    if (temp1_1 s< 0)
                        break
                    
                    if (temp1_1 != 0)
                        goto label_1428a7ec8
            
            return zx.q(r14)
        
        if (r14 s> 0)
            rbx = zx.q(r14)
        
        return zx.q(rbx.d)

return 0
