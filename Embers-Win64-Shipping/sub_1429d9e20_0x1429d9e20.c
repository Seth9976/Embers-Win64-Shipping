// 函数: sub_1429d9e20
// 地址: 0x1429d9e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int32_t i = 0

if (*(result + 8) s> 0)
    int64_t r12_1 = 0
    int32_t* r14_1 = nullptr
    
    do
        int32_t r9_1 = *(r14_1 + *(arg1 + 0xf0))
        
        if (r9_1 != 0xffffffff)
            void* r8_1 = *(arg1 + 8)
            void* rdx_1 = *(r8_1 + 0x108)
            uint64_t j_2 = zx.q(*(rdx_1 + r12_1))
            int32_t* r10_1 = *(r8_1 + 0x120) + (sx.q(*(rdx_1 + r12_1 + 4)) << 2)
            int32_t rdx_2 = r9_1 * 2
            int16_t* r11_1 = *(r8_1 + 0x138) + (sx.q(*(rdx_1 + r12_1 + 4)) << 1)
            int32_t* rcx_2 = *(*(arg1 + 0x10) + 0x108)
            rcx_2[sx.q(rdx_2)] = j_2.d
            int32_t rax_5
            
            if (r9_1 != 0)
                rax_5 = rcx_2[sx.q(rdx_2) - 2] + rcx_2[sx.q(rdx_2) - 1]
            else
                rax_5 = 0
            
            rcx_2[sx.q(rdx_2) + 1] = rax_5
            int32_t rbp_1 = 0
            void* r8_2 = *(arg1 + 0x10)
            int64_t rcx_3 = sx.q(rdx_2 + 1)
            int32_t* r9_2 = *(r8_2 + 0x120) + (sx.q(*(*(r8_2 + 0x108) + (rcx_3 << 2))) << 2)
            int16_t* rax_12 = *(r8_2 + 0x138) + (sx.q(*(*(r8_2 + 0x108) + (rcx_3 << 2))) << 1)
            
            if (j_2.d s> 0)
                uint64_t j_1 = j_2
                uint64_t j
                
                do
                    uint64_t rdi_1 = zx.q(*r11_1)
                    int32_t rdx_5 = *(*(arg1 + 0x78) + ((
                        sx.q(*(*(arg1 + 0x58) + (sx.q(((zx.q(*r10_1) << 1) + 1).d) << 2))) + rdi_1)
                        << 2))
                    
                    if (rdx_5 != 0xffffffff)
                        *r9_2 = rdx_5
                        rbp_1 += 1
                        r9_2 = &r9_2[1]
                        *rax_12 = rdi_1.w
                        rax_12 = &rax_12[1]
                    
                    r11_1 = &r11_1[1]
                    r10_1 = &r10_1[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            (*(*(arg1 + 0x10) + 0x108))[sx.q(rdx_2)] = rbp_1
        
        result = *(arg1 + 8)
        i += 1
        r14_1 = &r14_1[1]
        r12_1 += 8
    while (i s< *(result + 8))

return result
