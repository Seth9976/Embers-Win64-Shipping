// 函数: sub_1429d8bc0
// 地址: 0x1429d8bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = arg1
int32_t i = 0
int32_t i_1 = 0
void* result = *(r10 + 8)

if (*(result + 4) s> 0)
    int32_t rdx_1 = 0
    int64_t rdi_1 = 0
    int64_t var_88_1 = 0
    int32_t arg_18 = 0
    
    do
        int64_t r9_1 = sx.q(rdx_1) << 2
        int32_t* rbx_2 = *(r10 + 0xc0) + r9_1
        
        if (*rbx_2 != 0xffffffff || rbx_2[1] != 0xffffffff)
            void* r8_1 = *(r10 + 8)
            int32_t j = 0
            int32_t* rdx_2 = *(r8_1 + 0x90)
            int32_t k_2 = *(rdx_2 + rdi_1)
            int32_t k_3 = k_2
            int32_t* rbp_1 = *(r8_1 + 0xa8) + (sx.q(*(rdx_2 + rdi_1 + 4)) << 2)
            int32_t* var_70_1 = rbp_1
            int16_t* rsi_1 = *(r8_1 + 0xc0) + (sx.q(*(rdx_2 + rdi_1 + 4)) << 1)
            int32_t* rcx_3 = *(r8_1 + 0x78) + r9_1
            int16_t* var_68_1 = rsi_1
            void* rbx_3 = rbx_2 - rcx_3
            void* var_58_1 = rbx_3
            int32_t* r13_1 = rcx_3
            
            do
                int32_t rcx_4 = *(rbx_3 + r13_1)
                
                if (rcx_4 != 0xffffffff)
                    void* r8_2 = *(r10 + 0x10)
                    int32_t r9_2 = rcx_4 * 2
                    int64_t rdx_3 = sx.q(r9_2) << 2
                    int32_t* rdx_4 = rdx_3 + *(r8_2 + 0x90)
                    *rdx_4 = k_2
                    int32_t rax_4
                    
                    if (rcx_4 != 0)
                        rax_4 = rdx_4[-2] + rdx_4[-1]
                    else
                        rax_4 = 0
                    
                    rdx_4[1] = rax_4
                    int32_t r15_1 = 0
                    int32_t k_4 = *(r8_2 + 0x10)
                    
                    if (k_4 s< k_2)
                        k_4 = k_2
                    
                    *(r8_2 + 0x10) = k_4
                    void* r8_3 = *(r10 + 0x10)
                    int64_t rcx_5 = sx.q(r9_2 + 1)
                    int32_t* rbx_4 = *(r8_3 + 0xa8) + (sx.q(*(*(r8_3 + 0x90) + (rcx_5 << 2))) << 2)
                    int16_t* rdi_2 = *(r8_3 + 0xc0) + (sx.q(*(*(r8_3 + 0x90) + (rcx_5 << 2))) << 1)
                    
                    if (k_2 s> 0)
                        int32_t* r14_1 = rbp_1
                        uint64_t k_1 = zx.q(k_2)
                        uint64_t k
                        
                        do
                            void* r8_4 = *(r10 + 8)
                            uint64_t r11_1 = zx.q(*rsi_1)
                            int64_t rdx_6 = *(r8_4 + 0x18)
                            int32_t r9_3 = *r14_1 * 2
                            int64_t rcx_8 = sx.q(r9_3 + 1)
                            r10 = arg1
                            int32_t j_1
                            
                            if (*rcx_3 != rcx_3[1])
                                j_1.b = *(*(r8_4 + 0x30) + (sx.q(*(rdx_6 + (rcx_8 << 2))) << 2)
                                    + (r11_1 << 2)) != *r13_1
                            else
                                j_1 = j
                            
                            int32_t rcx_13 = j_1 + r11_1.d
                            
                            if (rcx_13 == *(rdx_6 + (sx.q(r9_3) << 2)))
                                rcx_13 = 0
                            
                            int32_t rcx_15 = *(*(r10 + 0x78)
                                + (sx.q(*((rcx_8 << 2) + *(arg1 + 0x58))) << 2)
                                + (sx.q(rcx_13) << 2))
                            
                            if (rcx_15 != 0xffffffff)
                                *rbx_4 = rcx_15
                                r15_1 += 1
                                rbx_4 = &rbx_4[1]
                                *rdi_2 = r11_1.w
                                rdi_2 = &rdi_2[1]
                            
                            r14_1 = &r14_1[1]
                            rsi_1 = &rsi_1[1]
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                        k_2 = k_3
                        rbp_1 = var_70_1
                        rsi_1 = var_68_1
                    
                    rbx_3 = var_58_1
                    *(rdx_3 + *(*(r10 + 0x10) + 0x90)) = r15_1
                
                j += 1
                r13_1 = &r13_1[1]
            while (j s< 2)
            
            rdi_1 = var_88_1
            i = i_1
            rdx_1 = arg_18
        
        result = *(r10 + 8)
        i += 1
        rdx_1 += 2
        i_1 = i
        rdi_1 += 8
        arg_18 = rdx_1
        var_88_1 = rdi_1
    while (i s< *(result + 4))

return result
