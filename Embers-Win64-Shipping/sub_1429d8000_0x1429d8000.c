// 函数: sub_1429d8000
// 地址: 0x1429d8000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int32_t rbx = 0
int32_t i_1 = 0
int32_t i = 0

if (*(result + 4) s> 0)
    int32_t* rdi_1 = nullptr
    int64_t r14_1 = 0
    int64_t arg_18 = 0
    int32_t* arg_10 = nullptr
    
    do
        int32_t r9_1 = *(rdi_1 + *(arg1 + 0xd8))
        
        if (r9_1 != 0xffffffff)
            void* r8_1 = *(arg1 + 8)
            void* rdx_1 = *(r8_1 + 0x90)
            uint64_t j_2 = zx.q(*(rdx_1 + r14_1))
            int32_t* rsi_1 = *(r8_1 + 0xa8) + (sx.q(*(rdx_1 + r14_1 + 4)) << 2)
            int32_t rdx_2 = r9_1 * 2
            int16_t* rbp_1 = *(r8_1 + 0xc0) + (sx.q(*(rdx_1 + r14_1 + 4)) << 1)
            int64_t r8_2 = sx.q(rdx_2) << 2
            int64_t rcx_2 = *(*(arg1 + 0x10) + 0x108)
            *(r8_2 + rcx_2) = (j_2 * 2).d
            int32_t rax_6
            
            if (r9_1 != 0)
                rax_6 = *(r8_2 + rcx_2 - 8) + *(r8_2 + rcx_2 - 4)
            else
                rax_6 = 0
            
            *(r8_2 + rcx_2 + 4) = rax_6
            void* r8_3 = *(arg1 + 0x10)
            int64_t rcx_3 = sx.q(rdx_2 + 1)
            int32_t* r11_1 = *(r8_3 + 0x120) + (sx.q(*(*(r8_3 + 0x108) + (rcx_3 << 2))) << 2)
            int16_t* rax_13 = *(r8_3 + 0x138) + (sx.q(*(*(r8_3 + 0x108) + (rcx_3 << 2))) << 1)
            
            if (j_2.d s> 0)
                uint64_t j_1 = j_2
                uint64_t j
                
                do
                    int64_t r10_1 = *(arg1 + 0x58)
                    uint64_t rdi_2 = zx.q(*rbp_1)
                    int32_t r9_2 = *rsi_1 * 2
                    int64_t r12_1 = *(arg1 + 0x78) + (sx.q(*(r10_1 + (sx.q(r9_2 + 1) << 2))) << 2)
                    int32_t r9_3 = (rdi_2 + 1).d
                    int32_t r8_5 = *(r10_1 + (sx.q(r9_2) << 2))
                    
                    if (r9_3 == r8_5)
                        r9_3 = 0
                    
                    int32_t rdx_5 = *(r12_1 + (sx.q(r9_3) << 2))
                    
                    if (rdx_5 != 0xffffffff)
                        *r11_1 = rdx_5
                        int16_t rcx_11 = 3
                        
                        if (r8_5 == 4)
                            rcx_11 = rdi_2.w
                        
                        rbx += 1
                        r11_1 = &r11_1[1]
                        *rax_13 = rcx_11
                        rax_13 = &rax_13[1]
                    
                    int32_t rdx_6 = *(r12_1 + (rdi_2 << 2))
                    
                    if (rdx_6 != 0xffffffff)
                        *r11_1 = rdx_6
                        int16_t rcx_12 = 1
                        
                        if (r8_5 == 4)
                            rcx_12 = r9_3.w
                        
                        rbx += 1
                        r11_1 = &r11_1[1]
                        *rax_13 = rcx_12
                        rax_13 = &rax_13[1]
                    
                    rsi_1 = &rsi_1[1]
                    rbp_1 = &rbp_1[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                i = i_1
                rdi_1 = arg_10
                r14_1 = arg_18
            
            *(r8_2 + *(*(arg1 + 0x10) + 0x108)) = rbx
            rbx = 0
        
        result = *(arg1 + 8)
        i += 1
        rdi_1 = &rdi_1[1]
        i_1 = i
        r14_1 += 8
        arg_10 = rdi_1
        arg_18 = r14_1
    while (i s< *(result + 4))

return result
