// 函数: sub_142c308f0
// 地址: 0x142c308f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_1 = zx.d(arg1[8]) << 8
uint32_t rbp_4 =
    (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18) + zx.d(arg1[3])
uint32_t rax_5 = zx.d(arg1[9])

if (rdx_1 != neg.d(rax_5))
    int64_t rbx_1 = *(arg2 + 0x10)
    int32_t rsi_2 = *(arg2 + 8) - 1
    void* r14_1 = nullptr
    uint64_t r15_1 = zx.q(rdx_1 + rax_5)
    
    while (true)
        void* rax_6 = r14_1 + &arg1[0xc]
        void* rdi_1 = &data_14369a5d0
        
        if (rax_6 u>= &arg1[0xc])
            rdi_1 = rax_6
        
        uint32_t r10_3 = (zx.d(*rdi_1) << 8) + zx.d(*(rdi_1 + 1))
        uint32_t r11_3 = (zx.d(*(rdi_1 + 2)) << 8) + zx.d(*(rdi_1 + 3))
        
        while (true)
            int32_t r8_1 = 0
            int32_t rdx_3 = rsi_2
            
            if (rsi_2 s>= 0)
                while (true)
                    uint64_t rax_10 = zx.q((rdx_3 + r8_1) u>> 1)
                    uint64_t rcx = zx.q(rax_10.d)
                    int32_t r9_1 = *(rbx_1 + rax_10 * 0xc)
                    
                    if (r9_1 != r10_3)
                        int32_t rax_12 = 1
                        
                        if (r9_1 s< r10_3)
                            rax_12 = -1
                        
                        if (rax_12 s< 0)
                            rdx_3 = (rcx - 1).d
                        label_142c309dd:
                            
                            if (r8_1 s> rdx_3)
                                break
                            
                            continue
                        else if (rax_12 s> 0)
                            r8_1 = (rcx + 1).d
                            goto label_142c309dd
                    
                    void* rax_13 = rbx_1 + rcx * 0xc
                    
                    if (rax_13 == 0)
                        goto label_142c309f7
                    
                    if (*(rax_13 + 4) != r11_3)
                        goto label_142c309f7
                    
                    rbp_4 = (rbp_4 & ((zx.d(*(rdi_1 + 9)) << 0x10) + (zx.d(*(rdi_1 + 0xa)) << 8)
                        + (zx.d(*(rdi_1 + 8)) << 0x18) + zx.d(*(rdi_1 + 0xb)))) | ((zx.d(*(rdi_1 + 5))
                        << 0x10) + (zx.d(*(rdi_1 + 6)) << 8) + (zx.d(*(rdi_1 + 4)) << 0x18)
                        + zx.d(*(rdi_1 + 7)))
                    goto label_142c30a50
            
        label_142c309f7:
            
            if (r10_3 != 3)
                break
            
            if (r11_3 != r10_3)
                break
            
            r10_3 = 0x25
            r11_3 = 1
        
    label_142c30a50:
        r14_1 += 0xc
        uint64_t temp1_1 = r15_1
        r15_1 -= 1
        
        if (temp1_1 == 1)
            break

return zx.q(rbp_4)
