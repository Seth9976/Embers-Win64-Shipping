// 函数: sub_1429d9be0
// 地址: 0x1429d9be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int32_t i = 0

if (*(result + 4) s> 0)
    int64_t r12_1 = 0
    int32_t* rsi_1 = nullptr
    int32_t* arg_8 = nullptr
    
    do
        int32_t r9_1 = *(rsi_1 + *(arg1 + 0xd8))
        
        if (r9_1 != 0xffffffff)
            void* r8_1 = *(arg1 + 8)
            void* rdx_1 = *(r8_1 + 0x90)
            uint64_t j_2 = zx.q(*(rdx_1 + r12_1))
            int32_t* rbx_1 = *(r8_1 + 0xa8) + (sx.q(*(rdx_1 + r12_1 + 4)) << 2)
            int32_t rdx_2 = r9_1 * 2
            int16_t* rdi_1 = *(r8_1 + 0xc0) + (sx.q(*(rdx_1 + r12_1 + 4)) << 1)
            int64_t r8_2 = sx.q(rdx_2) << 2
            int64_t rcx_2 = *(*(arg1 + 0x10) + 0x108)
            *(r8_2 + rcx_2) = (j_2 * 2).d
            int32_t rax_6
            
            if (r9_1 != 0)
                rax_6 = *(r8_2 + rcx_2 - 8) + *(r8_2 + rcx_2 - 4)
            else
                rax_6 = 0
            
            *(r8_2 + rcx_2 + 4) = rax_6
            int32_t r10_1 = 0
            void* r8_3 = *(arg1 + 0x10)
            int64_t rcx_3 = sx.q(rdx_2 + 1)
            int32_t* r9_2 = *(r8_3 + 0x120) + (sx.q(*(*(r8_3 + 0x108) + (rcx_3 << 2))) << 2)
            int16_t* rcx_6 = *(r8_3 + 0x138) + (sx.q(*(*(r8_3 + 0x108) + (rcx_3 << 2))) << 1)
            
            if (j_2.d s> 0)
                uint64_t j_1 = j_2
                uint64_t j
                
                do
                    uint64_t r11_1 = zx.q(*rdi_1)
                    int32_t r15_1 = (r11_1 + 2).d
                    int32_t r14_1 = (r11_1 + 1).d
                    int16_t r14_2 = r14_1.w - (zx.q(r14_1 s/ 3) * 3).w
                    void* rdx_9 = *(arg1 + 0x78)
                        + (sx.q(*(*(arg1 + 0x58) + (sx.q(((zx.q(*rbx_1) << 1) + 1).d) << 2))) << 2)
                    int32_t r8_6 = *(rdx_9 + (zx.q(r14_2) << 2))
                    
                    if (r8_6 != 0xffffffff)
                        *r9_2 = r8_6
                        r10_1 += 1
                        r9_2 = &r9_2[1]
                        *rcx_6 = r11_1.w
                        rcx_6 = &rcx_6[1]
                    
                    int32_t rax_23 = *(rdx_9 + 0xc)
                    
                    if (rax_23 != 0xffffffff)
                        *r9_2 = rax_23
                        r10_1 += 1
                        r9_2 = &r9_2[1]
                        *rcx_6 = r15_1.w - (zx.q(r15_1 s/ 3) * 3).w
                        rcx_6 = &rcx_6[1]
                    
                    int32_t rdx_10 = *(rdx_9 + (r11_1 << 2))
                    
                    if (rdx_10 != 0xffffffff)
                        *r9_2 = rdx_10
                        r10_1 += 1
                        r9_2 = &r9_2[1]
                        *rcx_6 = r14_2
                        rcx_6 = &rcx_6[1]
                    
                    rbx_1 = &rbx_1[1]
                    rdi_1 = &rdi_1[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                rsi_1 = arg_8
            
            *(r8_2 + *(*(arg1 + 0x10) + 0x108)) = r10_1
        
        result = *(arg1 + 8)
        rsi_1 = &rsi_1[1]
        i += 1
        arg_8 = rsi_1
        r12_1 += 8
    while (i s< *(result + 4))

return result
