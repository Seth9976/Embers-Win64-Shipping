// 函数: sub_142bf1b80
// 地址: 0x142bf1b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int32_t r8_1 = *(arg1 + 0x1100) - *(arg1 + 0x10f8)

if (r8_1 u>= arg2)
    r8_1 = arg2

*(arg1 + 0x10f0) += r8_1
*(arg1 + 0x10f8) += zx.q(r8_1)
int32_t r13_1 = arg2 - r8_1

while (true)
    if (r13_1 == 0)
        return 0
    
    uint32_t r15_1 = *(arg1 + 0x64)
    void* rbx_1 = arg1 + 0x18
    uint32_t r14_1 = *(rbx_1 + 0x48)
    int32_t rbp_1 = 0x1000
    uint32_t r12_1 = *(rbx_1 + 0x50)
    
    if (r13_1 u< 0x1000)
        rbp_1 = r13_1
    
    int32_t rsi_1 = 0
    
    if (rbp_1 != 0)
        int32_t rcx = *rbx_1
        
        if (rcx == 0)
            int32_t rax_1 = sub_142b97060(*(rbx_1 + 0xc8), 2, arg4)
            
            if (rax_1 != 0)
            labelid_9:
                *rbx_1 = 3
            else
                char arg_10
                int32_t rax_2
                rax_2, arg3 = sub_142b97130(*(rbx_1 + 0xc8), &arg_10, rax_1 + 1, arg3)
                
                if (rax_2 != 1)
                label_142bf1e30:
                    *rbx_1 = 3
                else
                    uint32_t rdx_1 = zx.d(arg_10)
                    int32_t rdx_2 = rdx_1 & 0x80
                    int32_t rcx_5 = rdx_1 & 0x1f
                    *(rbx_1 + 0x34) = rdx_2
                    *(rbx_1 + 0x30) = rcx_5
                    *(rbx_1 + 0x38) = (rax_2 << rcx_5.b) - 0x100
                    
                    if (rcx_5 u> 0x10)
                    label_142bf1e30_1:
                        *rbx_1 = 3
                    else
                        *(rbx_1 + 0x3c) = 9
                        int32_t rax_3
                        rax_3.b = rdx_2 != 0
                        r12_1 = 0
                        *(rbx_1 + 0x40) = rax_3
                        int32_t rax_4 = 0x100
                        
                        if (rcx_5 u<= 9)
                            rax_4 = (rax_2 << rcx_5.b) - 0xff
                        
                        *(rbx_1 + 0x44) = rax_4
                        uint32_t rax_5
                        rax_5, arg3 = sub_142bf1f80(rbx_1, arg3)
                        
                        if (rax_5 u> 0xff)
                        label_142bf1e30_2:
                            *rbx_1 = 3
                        else
                            rsi_1 = 1
                            r15_1 = rax_5
                            r14_1 = rax_5
                            
                            if (rbp_1 u> 1)
                                *rbx_1 = 1
                                goto label_142bf1cc8
        else
            if (rcx == 1)
                goto label_142bf1cc8
            
            if (rcx == 2)
                while (true)
                    while (*(rbx_1 + 0x78) u> 0)
                        *(rbx_1 + 0x78) -= 1
                        rsi_1 += 1
                        
                        if (rsi_1 == rbp_1)
                            goto label_142bf1e36
                    
                    int32_t rax_19 = *(rbx_1 + 0x40)
                    
                    if (rax_19 u< *(rbx_1 + 0x38))
                        if (rax_19 u>= *(rbx_1 + 0x68))
                            int32_t rax_20
                            rax_20, arg3 = sub_142bf23b0(rbx_1)
                            
                            if (rax_20 s< 0)
                                goto label_142bf1e30_2
                        
                        *(*(rbx_1 + 0x58) + (zx.q(*(rbx_1 + 0x40)) << 1)) = r14_1.w
                        *(zx.q(*(rbx_1 + 0x40)) + *(rbx_1 + 0x60)) = r15_1.b
                        *(rbx_1 + 0x40) += 1
                    
                    r14_1 = r12_1
                    *rbx_1 = 1
                label_142bf1cc8:
                    uint32_t rax_6
                    rax_6, arg3 = sub_142bf1f80(rbx_1, arg3)
                    uint32_t rdi_1 = rax_6
                    
                    if (rax_6 s< 0)
                        goto label_142bf1e30_2
                    
                    if (rax_6 == 0x100 && *(rbx_1 + 0x34) != 0)
                        r14_1 = 0
                        *(rbx_1 + 0x40) = 0
                        r15_1 = 0
                        *(rbx_1 + 0x20) = 1
                        goto label_142bf1cc8
                    
                    r12_1 = rdi_1
                    
                    if (rdi_1 u>= 0x100)
                        int32_t rax_7 = *(rbx_1 + 0x40)
                        
                        if (rdi_1 - 0x100 u>= rax_7)
                            if (rdi_1 - 0x100 u> rax_7)
                                goto label_142bf1e30_2
                            
                            if (zx.q(*(rbx_1 + 0x78)) u>= *(rbx_1 + 0x80))
                                int32_t rax_9
                                rax_9, arg3 = sub_142bf2450(rbx_1)
                                
                                if (rax_9 s< 0)
                                    goto label_142bf1e30_2
                            
                            rdi_1 = r14_1
                            *(zx.q(*(rbx_1 + 0x78)) + *(rbx_1 + 0x70)) = r15_1.b
                            *(rbx_1 + 0x78) += 1
                        
                        if (rdi_1 u>= 0x100)
                        label_142bf1d50:
                            
                            if (*(rbx_1 + 0x58) == 0)
                                goto label_142bf1e30_2
                            
                            if (zx.q(*(rbx_1 + 0x78)) u>= *(rbx_1 + 0x80))
                                int32_t rax_12
                                rax_12, arg3 = sub_142bf2450(rbx_1)
                                
                                if (rax_12 s< 0)
                                    break
                            
                            uint64_t r8_6 = zx.q(rdi_1 - 0x100)
                            *(zx.q(*(rbx_1 + 0x78)) + *(rbx_1 + 0x70)) = *(r8_6 + *(rbx_1 + 0x60))
                            *(rbx_1 + 0x78) += 1
                            rdi_1 = zx.d(*(*(rbx_1 + 0x58) + (r8_6 << 1)))
                            
                            if (rdi_1 u>= 0x100)
                                goto label_142bf1d50
                    
                    r15_1 = rdi_1
                    
                    if (zx.q(*(rbx_1 + 0x78)) u>= *(rbx_1 + 0x80))
                        int32_t rax_17
                        rax_17, arg3 = sub_142bf2450(rbx_1)
                        
                        if (rax_17 s< 0)
                            goto label_142bf1e30_2
                    
                    *(zx.q(*(rbx_1 + 0x78)) + *(rbx_1 + 0x70)) = rdi_1.b
                    *(rbx_1 + 0x78) += 1
                    *rbx_1 = 2
                
                goto label_142bf1e30_2
        
    label_142bf1e36:
        arg1 = arg_8
    
    *(rbx_1 + 0x48) = r14_1
    *(rbx_1 + 0x4c) = r15_1
    *(rbx_1 + 0x50) = r12_1
    
    if (rsi_1 u< rbp_1)
        break
    
    *(arg1 + 0x10f0) += rbp_1
    r13_1 -= rbp_1

return 0x55
