// 函数: sub_1429d83a0
// 地址: 0x1429d83a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int32_t i = 0

if (*(result + 8) s> 0)
    int64_t r14_1 = 0
    int64_t arg_8 = 0
    int32_t* r12_1 = nullptr
    
    do
        int32_t r9_1 = *(r12_1 + *(arg1 + 0xf0))
        
        if (r9_1 != 0xffffffff)
            void* r8_1 = *(arg1 + 8)
            void* rdx_1 = *(r8_1 + 0x108)
            uint64_t j_1 = zx.q(*(rdx_1 + r14_1))
            int32_t* rbx_1 = *(r8_1 + 0x120) + (sx.q(*(rdx_1 + r14_1 + 4)) << 2)
            int32_t rdx_2 = r9_1 * 2
            int16_t* rdi_1 = *(r8_1 + 0x138) + (sx.q(*(rdx_1 + r14_1 + 4)) << 1)
            int64_t r8_2 = sx.q(rdx_2) << 2
            int64_t rcx_2 = *(*(arg1 + 0x10) + 0x108)
            *(r8_2 + rcx_2) = j_1.d
            int32_t rax_5
            
            if (r9_1 != 0)
                rax_5 = *(r8_2 + rcx_2 - 8) + *(r8_2 + rcx_2 - 4)
            else
                rax_5 = 0
            
            *(r8_2 + rcx_2 + 4) = rax_5
            int32_t rsi_1 = 0
            void* r8_3 = *(arg1 + 0x10)
            int64_t rcx_3 = sx.q(rdx_2 + 1)
            int32_t* r10_1 = *(r8_3 + 0x120) + (sx.q(*(*(r8_3 + 0x108) + (rcx_3 << 2))) << 2)
            int16_t* r11_1 = *(r8_3 + 0x138) + (sx.q(*(*(r8_3 + 0x108) + (rcx_3 << 2))) << 1)
            
            if (j_1.d s> 0)
                uint64_t j
                
                do
                    int64_t r9_2 = *(arg1 + 0x58)
                    uint64_t r14_2 = zx.q(*rdi_1)
                    int32_t r8_4 = *rbx_1 * 2
                    int32_t rdx_5 = *(*(arg1 + 0x78) + (sx.q(*(r9_2 + (sx.q(r8_4 + 1) << 2))) << 2)
                        + (r14_2 << 2))
                    int32_t r8_5 = *(r9_2 + (sx.q(r8_4) << 2))
                    
                    if (rdx_5 != 0xffffffff)
                        *r10_1 = rdx_5
                        int16_t rax_16
                        
                        rax_16 = r8_5 != 4 ? 0 : r14_2.w
                        
                        rsi_1 += 1
                        *r11_1 = rax_16
                        r10_1 = &r10_1[1]
                        r11_1 = &r11_1[1]
                    
                    rbx_1 = &rbx_1[1]
                    rdi_1 = &rdi_1[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                r14_1 = arg_8
            
            *(r8_2 + *(*(arg1 + 0x10) + 0x108)) = rsi_1
        
        result = *(arg1 + 8)
        r14_1 += 8
        i += 1
        arg_8 = r14_1
        r12_1 = &r12_1[1]
    while (i s< *(result + 8))

return result
