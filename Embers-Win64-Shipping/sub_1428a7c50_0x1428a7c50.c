// 函数: sub_1428a7c50
// 地址: 0x1428a7c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint32_t count = arg3
int64_t r15 = arg2
int32_t r12 = 0

if (arg2 != 0 && arg3 s> 0)
    void* rdi_1 = *(arg1 + 0x38)
    
    if (rdi_1 != 0 && *(arg1 + 0x40) != 0)
        sub_142899cc0(arg1, 0xf)
        int32_t rax = *(rdi_1 + 0x20)
        int32_t rcx = *(rdi_1 + 0x24)
        int32_t rbp_2 = *(rdi_1 + 4) - rax - rcx
        
        if (rbp_2 s< count)
            while (true)
                uint64_t rbx_2
                
                if (rax == 0)
                label_1428a7d3f:
                    int32_t rbp_3 = *(rdi_1 + 4)
                    *(rdi_1 + 0x24) = 0
                    
                    if (count s< rbp_3)
                    label_1428a7d85:
                        rax = *(rdi_1 + 0x20)
                        rcx = *(rdi_1 + 0x24)
                        rbp_2 = rbp_3 - rax - rcx
                        
                        if (rbp_2 s>= count)
                            break
                        
                        continue
                    else
                        while (true)
                            int32_t rax_4 = sub_14289aa40(*(arg1 + 0x40), r15, count)
                            rbx_2 = sx.q(rax_4)
                            
                            if (rax_4 s<= 0)
                                sub_142899cd0(arg1)
                                int32_t temp3_1 = rbx_2.d
                                
                                if (temp3_1 s< 0)
                                    break
                                
                                if (temp3_1 == 0)
                                    return zx.q(r12)
                            
                            r12 += rbx_2.d
                            r15 += rbx_2
                            uint32_t count_1 = count
                            count -= rbx_2.d
                            
                            if (count_1 == rbx_2.d)
                                return zx.q(r12)
                            
                            rbp_3 = *(rdi_1 + 4)
                            
                            if (count s< rbp_3)
                                goto label_1428a7d85
                else
                    if (rbp_2 s> 0)
                        int64_t rbx_1 = sx.q(rbp_2)
                        memcpy(sx.q(rax + rcx) + *(rdi_1 + 0x18), r15, rbx_1.d)
                        rcx = *(rdi_1 + 0x24)
                        r15 += rbx_1
                        count -= rbp_2
                        r12 += rbp_2
                        *(rdi_1 + 0x20) += rbp_2
                        rax = *(rdi_1 + 0x20)
                    
                    while (true)
                        int32_t rax_2 =
                            sub_14289aa40(*(arg1 + 0x40), sx.q(rcx) + *(rdi_1 + 0x18), rax)
                        rbx_2 = zx.q(rax_2)
                        
                        if (rax_2 s<= 0)
                            sub_142899cd0(arg1)
                            int32_t temp1_1 = rbx_2.d
                            
                            if (temp1_1 s< 0)
                                break
                            
                            if (temp1_1 == 0)
                                return zx.q(r12)
                        
                        *(rdi_1 + 0x24) += rbx_2.d
                        int32_t rax_3 = *(rdi_1 + 0x20)
                        rcx = *(rdi_1 + 0x24)
                        rax = rax_3 - rbx_2.d
                        *(rdi_1 + 0x20) = rax
                        
                        if (rax_3 == rbx_2.d)
                            goto label_1428a7d3f
                
                if (r12 s> 0)
                    rbx_2 = zx.q(r12)
                
                return zx.q(rbx_2.d)
        
        memcpy(sx.q(rax + rcx) + *(rdi_1 + 0x18), r15, count)
        *(rdi_1 + 0x20) += count
        return zx.q(r12 + count)

return 0
