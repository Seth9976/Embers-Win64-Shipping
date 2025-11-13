// 函数: sub_142be9690
// 地址: 0x142be9690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int32_t rbx = arg1[5].d
int64_t rbp_1 = zx.q(*(rsi + 0x298)) + *(rsi + 0x290)

if (rbx u< 0xffff)
    int32_t rdx_1 = arg1[7].d
    int32_t rbx_1 = rbx + 1
    
    if (rbx_1 u< rdx_1)
        rbx_1 = rdx_1
    
    while (true)
        int32_t r8_1 = *(arg1 + 0x3c)
        int64_t r10_1 = arg1[9]
        int32_t rcx = arg1[8].d
        
        if (rbx_1 u<= r8_1)
            if (r10_1 == 0)
                while (true)
                    int32_t rdx_6 = rcx + rbx_1
                    uint32_t rax = zx.d(rdx_6.w)
                    
                    if (rax u< *(rsi + 0x10))
                        if (rax != 0)
                            arg1[5].d = rbx_1
                            *(arg1 + 0x2c) = rax
                            break
                    else if (rdx_6 s>= 0 || rcx + r8_1 s< 0)
                        if (rdx_6 s>= 0x10000)
                            goto label_142be977c
                        
                        if (rcx + r8_1 s< 0x10000)
                            goto label_142be977c
                        
                        rbx_1 = 0x10000 - rcx
                    else
                        rbx_1 = neg.d(rcx)
                    
                    rbx_1 += 1
                    
                    if (rbx_1 u> r8_1)
                        goto label_142be977c
                
                return 
            
            int64_t r9_2 = zx.q((rbx_1 - rdx_1) * 2) + r10_1
            
            if (r9_2 u<= rbp_1)
                char* r9_3 = r9_2 - 1
                
                while (true)
                    uint32_t rdx_2 = zx.d(r9_3[1])
                    r9_3 = &r9_3[2]
                    uint32_t rdx_4 = rdx_2 << 8 | zx.d(*r9_3)
                    
                    if (rdx_4 != 0)
                        uint32_t rdx_5 = zx.d((rdx_4 + rcx).w)
                        
                        if (rdx_5 != 0)
                            arg1[5].d = rbx_1
                            *(arg1 + 0x2c) = rdx_5
                            break
                    
                    rbx_1 += 1
                    
                    if (rbx_1 u> r8_1)
                        goto label_142be977c
                
                return 
        
    label_142be977c:
        
        if (sub_142be97d0(arg1, *(arg1 + 0x34) + 1) s< 0)
            break
        
        rdx_1 = arg1[7].d
        
        if (rbx_1 u< rdx_1)
            rbx_1 = rdx_1

arg1[5].d = 0xffffffff
*(arg1 + 0x2c) = 0
