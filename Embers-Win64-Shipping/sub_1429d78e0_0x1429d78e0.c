// 函数: sub_1429d78e0
// 地址: 0x1429d78e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int32_t i_1 = 0
int32_t i = 0

if (*(result + 4) s> 0)
    int64_t rbp_1 = 0
    int32_t* r14_1 = nullptr
    int32_t r15_1 = 0
    int32_t arg_10 = 0
    int64_t arg_20 = 0
    int32_t* arg_18 = nullptr
    
    do
        int32_t r9_1 = *(r14_1 + *(arg1 + 0xd8))
        
        if (r9_1 != 0xffffffff)
            void* r8_1 = *(arg1 + 8)
            int32_t r10_1 = r9_1 * 2
            void* rdx_1 = *(r8_1 + 0x90)
            uint64_t j_2 = zx.q(*(rdx_1 + rbp_1))
            int64_t rax_2 = *(r8_1 + 0xa8) + (sx.q(*(rdx_1 + rbp_1 + 4)) << 2)
            int32_t rdx_2 = (j_2 + 2).d
            void* r8_2 = *(arg1 + 0x10)
            int64_t rax_4 = *(r8_1 + 0xc0) + (sx.q(*(rdx_1 + rbp_1 + 4)) << 1)
            int64_t rcx_2 = sx.q(r15_1) << 2
            int32_t* r12_2 = *(r8_1 + 0x78) + rcx_2
            int32_t* r11_2 = *(arg1 + 0xc0) + rcx_2
            int64_t rcx_3 = sx.q(r10_1) << 2
            int32_t* rcx_4 = rcx_3 + *(r8_2 + 0x150)
            *rcx_4 = rdx_2
            int32_t rax_7
            
            if (r9_1 != 0)
                rax_7 = rcx_4[-2] + rcx_4[-1]
            else
                rax_7 = 0
            
            rcx_4[1] = rax_7
            int32_t rax_9 = *(r8_2 + 0x14)
            
            if (rax_9 s< rdx_2)
                rax_9 = rdx_2
            
            *(r8_2 + 0x14) = rax_9
            void* r8_3 = *(arg1 + 0x10)
            int64_t rcx_5 = sx.q(r10_1 + 1)
            int32_t* r9_2 = *(r8_3 + 0x168) + (sx.q(*(*(r8_3 + 0x150) + (rcx_5 << 2))) << 2)
            int32_t rsi_1 = 0
            int64_t r10_2 = 0
            int16_t* rax_15 = *(r8_3 + 0x180) + (sx.q(*(*(r8_3 + 0x150) + (rcx_5 << 2))) << 1)
            int32_t rcx_8 = *r11_2
            
            if (rcx_8 != 0xffffffff)
                *r9_2 = rcx_8
                rsi_1 = 1
                *rax_15 = 0
                r10_2 = 1
            
            int32_t rcx_9 = r11_2[1]
            
            if (rcx_9 != 0xffffffff)
                r9_2[r10_2] = rcx_9
                rsi_1 += 1
                rax_15[r10_2] = 0
                r10_2 += 1
            
            int64_t r11_3 = 0
            
            if (j_2.d s> 0)
                uint64_t j_1 = j_2
                uint64_t j
                
                do
                    uint64_t r14_2 = zx.q(*(rax_4 + (r11_3 << 1)))
                    int64_t rdx_5 = sx.q(((zx.q(*(rax_2 + (r11_3 << 2))) << 1) + 1).d)
                    int32_t r8_4 =
                        *(*(arg1 + 0x90) + ((sx.q(*(*(arg1 + 0x68) + (rdx_5 << 2))) + r14_2) << 2))
                    
                    if (r8_4 != 0xffffffff)
                        r9_2[r10_2] = r8_4
                        rax_15[r10_2] = 1
                        rsi_1 += 1
                        r10_2 += 1
                        
                        if (r11_3 == 0 && r10_2 == 3)
                            int32_t rbx_1 = *r12_2
                            
                            if (rbx_1 != r12_2[1])
                                void* r8_5 = *(arg1 + 8)
                                
                                if (*(*(r8_5 + 0x30)
                                        + ((sx.q(*(*(r8_5 + 0x18) + (rdx_5 << 2))) + r14_2) << 2))
                                        == rbx_1)
                                    int32_t rdx_10 = *r9_2
                                    *r9_2 = r9_2[1]
                                    r9_2[1] = rdx_10
                                    int16_t rdx_11 = *rax_15
                                    *rax_15 = rax_15[1]
                                    rax_15[1] = rdx_11
                            
                            int32_t rdx_12 = r9_2[1]
                            r9_2[1] = r9_2[2]
                            r9_2[2] = rdx_12
                            int16_t rdx_13 = rax_15[1]
                            rax_15[1] = rax_15[2]
                            rax_15[2] = rdx_13
                    
                    r11_3 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                i = i_1
                r14_1 = arg_18
                rbp_1 = arg_20
                r15_1 = arg_10
            
            *(rcx_3 + *(*(arg1 + 0x10) + 0x150)) = rsi_1
        
        result = *(arg1 + 8)
        i += 1
        r15_1 += 2
        i_1 = i
        r14_1 = &r14_1[1]
        arg_10 = r15_1
        rbp_1 += 8
        arg_18 = r14_1
        arg_20 = rbp_1
    while (i s< *(result + 4))

return result
