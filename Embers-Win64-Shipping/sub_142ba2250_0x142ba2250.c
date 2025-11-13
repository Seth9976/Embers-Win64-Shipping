// 函数: sub_142ba2250
// 地址: 0x142ba2250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 8
void* rdi = *(arg1 + 0x20)
int64_t r15 = sx.q(arg2)
int64_t r8 = r15 * 0x898
void* r13_2 = sx.q(*(arg1 + 0x1c)) * 0x30 + rdi
int16_t* r14 = *(r8 + arg1 + 0x50)
void* result = 4
int64_t r8_1 = sx.q(*(r8 + arg1 + 0x48)) * 0x48

if (arg2 == 0)
    r12 = 4

void* rbp = r8_1 + r14
int64_t arg_8 = r8_1

if (r14 u< rbp && rdi u< r13_2)
    int32_t* rdi_1 = rdi + 8
    
    do
        uint32_t rax_2 = zx.d(rdi_1[-2].w)
        
        if ((r12 & rax_2) == 0 && (rax_2.b & 0x10) == 0)
            int16_t i_1
            int32_t rdx
            
            if (r15.d != 1)
                rdx = rdi_1[-1]
                i_1 = rdi_1[1].w
            else
                rdx = *rdi_1
                i_1 = *(rdi_1 + 6)
            
            int32_t i = sx.d(i_1)
            int32_t rax_6
            
            if (sx.d(*r14) - i s>= 0)
                rax_6 = *(r14 + 8) - *(r14 + 4) + rdx
            else if (i - sx.d(*(rbp - 0x48)) s< 0)
                int64_t rcx_2 = 0
                int64_t r8_4 = r8_1 s/ 0x48
                
                if (r8_4 s<= 8)
                    if (r8_4 s> 0)
                        int16_t* rdx_2 = r14
                        
                        while (sx.d(*rdx_2) s< i)
                            rcx_2 += 1
                            rdx_2 = &rdx_2[0x24]
                            
                            if (rcx_2 s>= r8_4)
                                break
                    
                    int64_t rax_13 = rcx_2 * 9
                    
                    if (sx.d(r14[rax_13 * 4]) != i)
                        goto label_142ba23b8
                    
                    rax_6 = *(r14 + (rax_13 << 3) + 8)
                else if (r8_4 s<= 0)
                label_142ba23b8:
                    int64_t rax_17 = rcx_2 * 9
                    void* rsi_1 = &r14[rax_17 * 4]
                    
                    if (*(r14 + (rax_17 << 3) - 0x38) == 0)
                        *(rsi_1 - 0x38) = sub_142b91790(*(rsi_1 + 8) - *(rsi_1 - 0x40), 
                            sx.d(*rsi_1) - sx.d(*(rsi_1 - 0x48)))
                    
                    rax_6 =
                        sub_142b93e80(i - sx.d(*(rsi_1 - 0x48)), *(rsi_1 - 0x38)) + *(rsi_1 - 0x40)
                else
                    while (true)
                        int64_t rdx_5 = (r8_4 + rcx_2) s>> 1
                        int64_t rax_15 = rdx_5 * 9
                        int32_t rax_16 = sx.d(r14[rax_15 * 4])
                        
                        if (i s>= rax_16)
                            if (i s<= rax_16)
                                rax_6 = *(r14 + (rax_15 << 3) + 8)
                                break
                            
                            rcx_2 = rdx_5 + 1
                        else
                            r8_4 = rdx_5
                        
                        if (rcx_2 s>= r8_4)
                            goto label_142ba23b8
                
                r8_1 = arg_8
            else
                rax_6 = *(rbp - 0x40) - *(rbp - 0x44) + rdx
            
            if (r15.d != 0)
                rdi_1[3] = rax_6
            else
                rdi_1[2] = rax_6
            
            rdi_1[-2].w |= r12.w
        
        rdi_1 = &rdi_1[0xc]
        result = &rdi_1[-2]
    while (result u< r13_2)

return result
