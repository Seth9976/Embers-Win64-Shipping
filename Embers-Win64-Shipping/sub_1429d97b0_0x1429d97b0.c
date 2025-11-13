// 函数: sub_1429d97b0
// 地址: 0x1429d97b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int64_t r11 = 0
int32_t i_1 = 0
int32_t i = 0

if (*(result + 4) s> 0)
    int32_t r10_1 = 0
    int64_t r12
    int64_t var_28_1 = r12
    int64_t r13_1 = 0
    int32_t* r14_1 = nullptr
    int32_t arg_10 = 0
    int64_t arg_20 = 0
    int32_t* arg_18 = nullptr
    
    do
        int32_t r9_1 = *(r14_1 + *(arg1 + 0xd8))
        
        if (r9_1 != 0xffffffff)
            void* r8_1 = *(arg1 + 8)
            void* rdx_1 = *(r8_1 + 0x90)
            uint64_t j_2 = zx.q(*(rdx_1 + r13_1))
            int64_t rax_2 = *(r8_1 + 0xa8) + (sx.q(*(rdx_1 + r13_1 + 4)) << 2)
            void* r8_2 = *(arg1 + 0x10)
            int64_t rax_4 = *(r8_1 + 0xc0) + (sx.q(*(rdx_1 + r13_1 + 4)) << 1)
            int32_t r10_2 = r9_1 * 2
            int64_t rcx_2 = sx.q(r10_1) << 2
            int32_t* rdx_3 = *(r8_1 + 0x78) + rcx_2
            int64_t rdx_5 = *(arg1 + 0xc0) + rcx_2
            int64_t rcx_3 = sx.q(r10_2) << 2
            int32_t* rcx_4 = rcx_3 + *(r8_2 + 0x150)
            int32_t rdx_6 = (j_2 + 2).d
            *rcx_4 = rdx_6
            int32_t rax_7
            
            if (r9_1 != 0)
                rax_7 = rcx_4[-2] + rcx_4[-1]
            else
                rax_7 = 0
            
            rcx_4[1] = rax_7
            int32_t rax_9 = *(r8_2 + 0x14)
            
            if (rax_9 s< rdx_6)
                rax_9 = rdx_6
            
            int32_t r15_1 = -1
            *(r8_2 + 0x14) = rax_9
            r12.b = 0
            void* r8_3 = *(arg1 + 0x10)
            int64_t rcx_5 = sx.q(r10_2 + 1)
            int32_t rbx_1 = -1
            int32_t r10_3 = 0
            int32_t* r9_2 = *(r8_3 + 0x168) + (sx.q(*(*(r8_3 + 0x150) + (rcx_5 << 2))) << 2)
            int16_t* rcx_8 = *(r8_3 + 0x180) + (sx.q(*(*(r8_3 + 0x150) + (rcx_5 << 2))) << 1)
            
            if (j_2.d s> 0)
                uint64_t j_1 = j_2
                uint64_t j
                
                do
                    uint64_t rdi_1 = zx.q(*(rax_4 + (r11 << 1)))
                    int64_t rdx_9 = sx.q(((zx.q(*(rax_2 + (r11 << 2))) << 1) + 1).d)
                    int64_t r14_2 = *(arg1 + 0x90) + (sx.q(*(*(arg1 + 0x68) + (rdx_9 << 2))) << 2)
                    
                    if (r11 == 0)
                        int32_t rbx_2 = *rdx_3
                        
                        if (rbx_2 != rdx_3[1])
                            void* r8_4 = *(arg1 + 8)
                            r12.b = *(*(r8_4 + 0x30)
                                + ((sx.q(*(*(r8_4 + 0x18) + (rdx_9 << 2))) + rdi_1) << 2)) != rbx_2
                        
                        int32_t* rax_23 = nullptr
                        
                        if (r12.b == 0)
                            rax_23 = 4
                        
                        r15_1 = *(rax_23 + rdx_5)
                        rbx_1 = *(rdx_5 + (zx.q(r12.b) << 2))
                    
                    int32_t r8_7 = *(r14_2 + (rdi_1 << 2))
                    int32_t rdx_16 = *(r14_2 + (sx.q((rdi_1 + 1).d u% 3) << 2))
                    
                    if (r11 == 0 && r15_1 != 0xffffffff)
                        *r9_2 = r15_1
                        r10_3 += 1
                        r9_2 = &r9_2[1]
                        *rcx_8 = 0
                        rcx_8 = &rcx_8[1]
                    
                    if (rdx_16 != 0xffffffff)
                        *r9_2 = rdx_16
                        r9_2 = &r9_2[1]
                        *rcx_8 = 1
                        r10_3 += 1
                        rcx_8 = &rcx_8[1]
                    
                    if (r8_7 != 0xffffffff)
                        *r9_2 = r8_7
                        r10_3 += 1
                        r9_2 = &r9_2[1]
                        *rcx_8 = 0
                        rcx_8 = &rcx_8[1]
                    
                    if (r11 == 0 && rbx_1 != 0xffffffff)
                        *r9_2 = rbx_1
                        r10_3 += 1
                        r9_2 = &r9_2[1]
                        *rcx_8 = 0
                        rcx_8 = &rcx_8[1]
                    
                    r11 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                i = i_1
                r14_1 = arg_18
                r13_1 = arg_20
            
            r11 = 0
            *(rcx_3 + *(*(arg1 + 0x10) + 0x150)) = r10_3
            r10_1 = arg_10
        
        result = *(arg1 + 8)
        i += 1
        r10_1 += 2
        i_1 = i
        r14_1 = &r14_1[1]
        arg_10 = r10_1
        r13_1 += 8
        arg_18 = r14_1
        arg_20 = r13_1
    while (i s< *(result + 4))

return result
