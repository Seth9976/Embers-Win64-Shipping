// 函数: sub_142be4830
// 地址: 0x142be4830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg2
int32_t* rsi = arg2

if (rax u>= 0xffff)
    return 0

uint32_t rdi

if ((arg1[4].b & 1) != 0)
    void* rbp_1 = *arg1
    rdi = 0
    void* r9_1 = arg1[3]
    uint32_t r8_1 = 0
    int64_t r14_2 = zx.q(*(rbp_1 + 0x298)) + *(rbp_1 + 0x290)
    uint64_t rdx_3 = (zx.q(zx.d(*(r9_1 + 6)) << 8) | zx.q(*(r9_1 + 7))) & 0xfffffffe
    uint32_t rbx_2 = rdx_3.d u>> 1
    
    if (rbx_2 != 0)
        int32_t rax_2 = rax + 1
        
        if (rax_2 u<= 0xffff)
            uint64_t r11_1 = zx.q(rdx_3.d)
            int32_t r12_1 = 0
            uint64_t var_58_1 = r11_1
            
            if (rbx_2 != 0)
                void* rdx_4 = r9_1 + 0xd
                void* r9_2 = 1 - r11_1
                void* r15_2 = rdx_3 + 0xe + r9_1 + r11_1
                int64_t r10_2 = neg.q(zx.q(r11_1.d))
                void* var_48_1 = r9_2
                int64_t var_40_1 = r10_2
                
                while (true)
                    uint32_t rcx_2 = zx.d(*(rdx_4 + 2))
                    rdx_4 += 2
                    uint32_t rsi_1 = zx.d(*(r10_2 + r15_2 + 2))
                    r15_2 += 2
                    uint32_t rbx_5 = zx.d(*(rdx_4 - 1)) << 8 | rcx_2
                    uint32_t rsi_3 = rsi_1 << 8 | zx.d(*(r9_2 + r15_2))
                    
                    if (rax_2 u< rsi_3)
                        rax_2 = rsi_3
                    
                    if (rax_2 u<= rbx_5)
                        int32_t rdx_6 = rbx_2 - 1
                        int32_t arg_20 = rdx_6
                        
                        while (true)
                            void* r11_2 = r11_1 + r15_2
                            int32_t r10_4 = zx.d(*(r15_2 + 1)) | sx.d(zx.w(*r15_2) << 8)
                            uint32_t r9_5 = zx.d(*r11_2) << 8 | zx.d(*(r11_2 + 1))
                            
                            if (r12_1 u>= rdx_6 && rsi_3 == 0xffff && rbx_5 == rsi_3 && r9_5 != 0
                                    && r11_2 + 2 + zx.q(r9_5) u> r14_2)
                                r10_4 = 1
                            label_142be49b6:
                                int32_t rdx_9 = r10_4 + rax_2
                                r8_1 = zx.d(rdx_9.w)
                                
                                if (r8_1 u< *(rbp_1 + 0x10))
                                label_142be4a3b:
                                    
                                    if (r8_1 != 0)
                                        goto label_142be4a84
                                    
                                    goto label_142be4a40
                                
                                r8_1 = 0
                                
                                if (rdx_9 s< 0 && r10_4 + rbx_5 s>= 0)
                                    rax_2 = neg.d(r10_4)
                                    goto label_142be4a40
                                
                                if (rdx_9 s< 0x10000 && r10_4 + rbx_5 s>= 0x10000)
                                    rax_2 = 0x10000 - r10_4
                                    goto label_142be4a40
                                
                                r11_1 = var_58_1
                            else if (r9_5 == 0xffff)
                                r11_1 = var_58_1
                            else
                                if (r9_5 == 0)
                                    goto label_142be49b6
                                
                                void* r11_3 = r11_2 + zx.q(r9_5 + ((rax_2 - rsi_3) << 1))
                                
                                if (r11_3 u> r14_2)
                                    r11_1 = var_58_1
                                else
                                    r8_1 = zx.d(*r11_3) << 8 | zx.d(*(r11_3 + 1))
                                    
                                    if (r8_1 == 0)
                                        goto label_142be4a40
                                    
                                    r8_1 = zx.d(r10_4.w + r8_1.w)
                                    
                                    if (r8_1 u< *(rbp_1 + 0x10))
                                        goto label_142be4a3b
                                    
                                    r8_1 = 0
                                label_142be4a40:
                                    
                                    if (rax_2 u>= 0xffff)
                                        goto label_142be4a84
                                    
                                    rdx_6 = arg_20
                                    rax_2 += 1
                                    r11_1 = var_58_1
                                    
                                    if (rax_2 u<= rbx_5)
                                        continue
                            
                            r9_2 = var_48_1
                            r10_2 = var_40_1
                            break
                    
                    r12_1 += 1
                    
                    if (r12_1 u>= rbx_2)
                        break
                
            label_142be4a84:
                rsi = arg2
            
            rdi = r8_1
            *rsi = rax_2
else if (rax != arg1[5].d)
    rdi = sub_142be9180(arg1, arg2, 1)
else
    sub_142be9690(arg1)
    rdi = *(arg1 + 0x2c)
    
    if (rdi != 0)
        *rsi = arg1[5].d

return zx.q(rdi)
