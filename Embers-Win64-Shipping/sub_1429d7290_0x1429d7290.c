// 函数: sub_1429d7290
// 地址: 0x1429d7290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 8)
int32_t i = 0
void* rbp = arg1
int32_t i_1 = 0

if (*result s> 0)
    int64_t r9_1 = 0
    int64_t var_60_1 = 0
    
    do
        void* r8_1 = *(rbp + 8)
        void* rdx_1 = *(r8_1 + 0x18)
        int64_t rdx_2 = sx.q(*(rdx_1 + r9_1))
        int64_t r13_1 = rdx_2
        int64_t rax_1 = *(r8_1 + 0x30) + (sx.q(*(rdx_1 + r9_1 + 4)) << 2)
        int64_t r11_1 = *(r8_1 + 0x48) + (sx.q(*(*(r8_1 + 0x18) + r9_1 + 4)) << 2)
        int64_t var_68_1 = r11_1
        int64_t r8_2 = *(rbp + 0x78) + (sx.q(*(r9_1 + *(rbp + 0x58) + 4)) << 2)
        int64_t arg_20 = r8_2
        int64_t r9_2 = *(rbp + 0x90) + (sx.q(*(*(rbp + 0x68) + r9_1 + 4)) << 2)
        int64_t r9_3 = 0
        
        if (rdx_2.d s> 0)
            int32_t r15_1 = -1
            
            do
                uint64_t r14_1 = zx.q(*(r8_2 + (r9_3 << 2)))
                
                if (r14_1.d != 0xffffffff)
                    int32_t rbx_1
                    int64_t r10
                    
                    if (r9_3 == 0)
                        rbx_1 = (rdx_2 - 1).d
                        r10 = r13_1 - 1
                    else
                        rbx_1 = r15_1
                        r10 = r9_3 - 1
                    
                    int64_t r12_1 = r10 << 2
                    int64_t rdi_1 = sx.q(*(r12_1 + r11_1) * 2)
                    int64_t rcx_4 = *(*(rbp + 8) + 0x78)
                    int64_t rsi_1 = sx.q(*(r11_1 + (r9_3 << 2)) * 2)
                    int32_t r11_2 = *(rax_1 + (r9_3 << 2))
                    int32_t rax_14 = *(rcx_4 + (rdi_1 << 2))
                    int64_t r8_3
                    
                    if (rax_14 == *(rcx_4 + (rdi_1 << 2) + 4))
                        r8_3 = 1
                    else
                        r8_3.b = rax_14 != r11_2
                    
                    int32_t rax_15 = *(rcx_4 + (rsi_1 << 2))
                    int64_t rdx_3 = 0
                    
                    if (rax_15 != *(rcx_4 + (rsi_1 << 2) + 4))
                        rdx_3.b = rax_15 != r11_2
                    
                    int64_t rcx_5 = *(rbp + 0xc0)
                    int32_t r11_3 = *(rcx_5 + ((rdi_1 + r8_3) << 2))
                    int32_t rdi_2 = *(rcx_5 + ((rsi_1 + rdx_3) << 2))
                    void* r8_5 = *(arg1 + 0x10)
                    int32_t rsi_2 = *(r12_1 + r9_2)
                    int32_t rbp_1 = *(r9_2 + (r9_3 << 2))
                    int32_t* rax_22 = *(r8_5 + 0x48)
                        + (sx.q(*(*(r8_5 + 0x18) + (sx.q(((r14_1 << 1) + 1).d) << 2))) << 2)
                    
                    if (r13_1 != 4)
                        *rax_22 = rdi_2
                        rax_22[1] = rbp_1
                        rax_22[2] = rsi_2
                        rax_22[3] = r11_3
                    else
                        int32_t rcx_8
                        int64_t r10_1
                        
                        if (r10 == 0)
                            r10_1 = 3
                            rcx_8 = 3 - 1
                        else
                            r10_1 = r10 - 1
                            
                            if (r10 != 1)
                                rcx_8 = rbx_1 - 2
                            else
                                rcx_8 = (r13_1 - 1).d
                        
                        rax_22[r9_3] = rdi_2
                        rax_22[sx.q(rcx_8)] = rbp_1
                        rax_22[r10_1] = rsi_2
                        rax_22[r10] = r11_3
                    
                    r11_1 = var_68_1
                    rdx_2 = zx.q(r13_1.d)
                    r8_2 = arg_20
                    rbp = arg1
                
                r15_1 += 1
                r9_3 += 1
            while (r9_3 s< r13_1)
            
            i = i_1
        
        i += 1
        result = *(rbp + 8)
        r9_1 = var_60_1 + 8
        i_1 = i
        var_60_1 = r9_1
    while (i s< *result)

return result
