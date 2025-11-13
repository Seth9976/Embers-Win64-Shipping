// 函数: sub_1429d8230
// 地址: 0x1429d8230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 8)
int32_t i = 0

if (*result s> 0)
    int64_t r15_1 = 0
    int32_t* r14_1 = nullptr
    
    do
        int32_t r8_1 = *(r14_1 + *(arg1 + 0xa8))
        
        if (r8_1 != 0xffffffff)
            void* rdx_1 = *(arg1 + 0x58)
            int64_t rbx_1 = sx.q(*(rdx_1 + r15_1))
            int32_t rdx_2 = r8_1 * 2
            int64_t rsi_1 = *(arg1 + 0x78) + (sx.q(*(rdx_1 + r15_1 + 4)) << 2)
            int64_t r12_1 = sx.q(rdx_2) << 2
            int64_t rcx_1 = *(*(arg1 + 0x10) + 0x108)
            *(r12_1 + rcx_1) = rbx_1.d
            int32_t rax_4
            
            if (r8_1 != 0)
                rax_4 = *(r12_1 + rcx_1 - 8) + *(r12_1 + rcx_1 - 4)
            else
                rax_4 = 0
            
            *(r12_1 + rcx_1 + 4) = rax_4
            int32_t r10_1 = 0
            void* r8_2 = *(arg1 + 0x10)
            int64_t rcx_2 = sx.q(rdx_2 + 1)
            int32_t* r9_1 = *(r8_2 + 0x120) + (sx.q(*(*(r8_2 + 0x108) + (rcx_2 << 2))) << 2)
            int16_t* r8_3 = *(r8_2 + 0x138) + (sx.q(*(*(r8_2 + 0x108) + (rcx_2 << 2))) << 1)
            int64_t rcx_5 = 0
            
            if (rbx_1.d s> 0)
                int32_t rdx_4 = -2
                
                do
                    int32_t rax_11 = *(rsi_1 + (rcx_5 << 2))
                    
                    if (rax_11 != 0xffffffff)
                        *r9_1 = rax_11
                        int16_t rax_13
                        
                        if (rbx_1.d != 4)
                            rax_13 = 2
                        else
                            rax_13 = rdx_4.w & 3
                        
                        r10_1 += 1
                        *r8_3 = rax_13
                        r9_1 = &r9_1[1]
                        r8_3 = &r8_3[1]
                    
                    rdx_4 += 1
                    rcx_5 += 1
                while (rcx_5 s< rbx_1)
            
            *(r12_1 + *(*(arg1 + 0x10) + 0x108)) = r10_1
        
        result = *(arg1 + 8)
        i += 1
        r14_1 = &r14_1[1]
        r15_1 += 8
    while (i s< *result)

return result
