// 函数: sub_1429d75a0
// 地址: 0x1429d75a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 8)
int32_t i = 0
void* r8 = arg1
int32_t i_1 = 0

if (*result s> 0)
    int32_t* r14_1 = nullptr
    int64_t r9_1 = 0
    int64_t var_50_1 = 0
    int32_t* arg_20 = nullptr
    
    do
        void* r8_1 = *(r8 + 8)
        void* rdx_1 = *(r8_1 + 0x18)
        int64_t rdx_2 = sx.q(*(rdx_1 + r9_1))
        int64_t rsi_1 = rdx_2
        int64_t r15_1 = *(r8_1 + 0x30) + (sx.q(*(rdx_1 + r9_1 + 4)) << 2)
        int64_t var_58_1 = r15_1
        r8 = arg1
        void* r12_1 = *(r8_1 + 0x48) + (sx.q(*(*(r8_1 + 0x18) + r9_1 + 4)) << 2)
        void* var_60_1 = r12_1
        int64_t r9_2 = 0
        int64_t rax_5 = *(r8 + 0x78) + (sx.q(*(r9_1 + *(r8 + 0x58) + 4)) << 2)
        int64_t var_68_1 = rax_5
        
        if (rdx_2.d s> 0)
            int32_t rbx_1 = -1
            
            do
                uint64_t rdi_1 = zx.q(*(rax_5 + (r9_2 << 2)))
                
                if (rdi_1.d != 0xffffffff)
                    int64_t r10
                    int32_t r11_1
                    
                    if (r9_2 == 0)
                        r11_1 = (rdx_2 - 1).d
                        r10 = rsi_1 - 1
                    else
                        r11_1 = rbx_1
                        r10 = r9_2 - 1
                    
                    int64_t rdx_3 = *(r8 + 0xd8)
                    int32_t rbp_1 = *(r14_1 + *(r8 + 0xa8))
                    int32_t r14_2 = *(rdx_3 + (sx.q(*(r12_1 + (r10 << 2))) << 2))
                    void* r8_2 = *(r8 + 0x10)
                    int32_t r15_2 = *(*(r8 + 0xf0) + (sx.q(*(r15_1 + (r9_2 << 2))) << 2))
                    int32_t r12_2 = *(rdx_3 + (sx.q(*(r12_1 + (r9_2 << 2))) << 2))
                    int32_t* rax_13 = *(r8_2 + 0x30)
                        + (sx.q(*(*(r8_2 + 0x18) + (sx.q(((rdi_1 << 1) + 1).d) << 2))) << 2)
                    
                    if (rsi_1 != 4)
                        *rax_13 = r15_2
                        rax_13[1] = r12_2
                        rax_13[2] = rbp_1
                        rax_13[3] = r14_2
                    else
                        int32_t rcx_6
                        int64_t r10_1
                        
                        if (r10 == 0)
                            r10_1 = 3
                            rcx_6 = 3 - 1
                        else
                            r10_1 = r10 - 1
                            
                            if (r10 != 1)
                                rcx_6 = r11_1 - 2
                            else
                                rcx_6 = (rsi_1 - 1).d
                        
                        rax_13[r9_2] = r15_2
                        rax_13[sx.q(rcx_6)] = r12_2
                        rax_13[r10_1] = rbp_1
                        rax_13[r10] = r14_2
                    
                    r15_1 = var_58_1
                    rdx_2 = zx.q(rsi_1.d)
                    r12_1 = var_60_1
                    r14_1 = arg_20
                    rax_5 = var_68_1
                    r8 = arg1
                
                rbx_1 += 1
                r9_2 += 1
            while (r9_2 s< rsi_1)
            
            i = i_1
        
        i += 1
        result = *(r8 + 8)
        r9_1 = var_50_1 + 8
        r14_1 = &r14_1[1]
        i_1 = i
        var_50_1 = r9_1
        arg_20 = r14_1
    while (i s< *result)

return result
