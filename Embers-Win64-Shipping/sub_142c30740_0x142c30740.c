// 函数: sub_142c30740
// 地址: 0x142c30740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbp_4 =
    (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18) + zx.d(arg1[3])
uint32_t rdx_3 = (zx.d(arg1[9]) << 0x10) + (zx.d(arg1[0xa]) << 8) + (zx.d(arg1[8]) << 0x18)
uint32_t rax_9 = zx.d(arg1[0xb])

if (rdx_3 != neg.d(rax_9))
    int64_t rbx_1 = *(arg2 + 0x10)
    int32_t rsi_2 = *(arg2 + 8) - 1
    void* r14_1 = nullptr
    uint64_t r15_1 = zx.q(rdx_3 + rax_9)
    
    while (true)
        void* rax_10 = r14_1 + &arg1[0x10]
        void* rdi_1 = &data_14369a5d0
        
        if (rax_10 u>= &arg1[0x10])
            rdi_1 = rax_10
        
        uint32_t r10_3 = (zx.d(*rdi_1) << 8) + zx.d(*(rdi_1 + 1))
        uint32_t r11_3 = (zx.d(*(rdi_1 + 2)) << 8) + zx.d(*(rdi_1 + 3))
        
        while (true)
            int32_t r8_1 = 0
            int32_t rdx_5 = rsi_2
            
            if (rsi_2 s>= 0)
                while (true)
                    uint64_t rax_14 = zx.q((rdx_5 + r8_1) u>> 1)
                    uint64_t rcx = zx.q(rax_14.d)
                    int32_t r9_1 = *(rbx_1 + rax_14 * 0xc)
                    
                    if (r9_1 != r10_3)
                        int32_t rax_16 = 1
                        
                        if (r9_1 s< r10_3)
                            rax_16 = -1
                        
                        if (rax_16 s< 0)
                            rdx_5 = (rcx - 1).d
                        label_142c3083d:
                            
                            if (r8_1 s> rdx_5)
                                break
                            
                            continue
                        else if (rax_16 s> 0)
                            r8_1 = (rcx + 1).d
                            goto label_142c3083d
                    
                    void* rax_17 = rbx_1 + rcx * 0xc
                    
                    if (rax_17 == 0)
                        goto label_142c30857
                    
                    if (*(rax_17 + 4) != r11_3)
                        goto label_142c30857
                    
                    rbp_4 = (rbp_4 & ((zx.d(*(rdi_1 + 9)) << 0x10) + (zx.d(*(rdi_1 + 0xa)) << 8)
                        + (zx.d(*(rdi_1 + 8)) << 0x18) + zx.d(*(rdi_1 + 0xb)))) | ((zx.d(*(rdi_1 + 5))
                        << 0x10) + (zx.d(*(rdi_1 + 6)) << 8) + (zx.d(*(rdi_1 + 4)) << 0x18)
                        + zx.d(*(rdi_1 + 7)))
                    goto label_142c308b0
            
        label_142c30857:
            
            if (r10_3 != 3)
                break
            
            if (r11_3 != r10_3)
                break
            
            r10_3 = 0x25
            r11_3 = 1
        
    label_142c308b0:
        r14_1 += 0xc
        uint64_t temp1_1 = r15_1
        r15_1 -= 1
        
        if (temp1_1 == 1)
            break

return zx.q(rbp_4)
