// 函数: sub_141522790
// 地址: 0x141522790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_1415225c0(arg1, arg2).b == 0)
label_141522b50:
    result.b = 0
else
    result = *(arg1 + 0x40)
    
    while (*(result + 8) s> 0)
        *(result + 8) -= 1
        int64_t r9_1 = *(*(arg1 + 0x48) + 0x10)
        int64_t r10_1 = sx.q(*(result + 8) * 5)
        int64_t r11_1 = sx.q(*(r9_1 + (r10_1 << 2)))
        int64_t rsi_1 = sx.q(*(r9_1 + (r10_1 << 2) + 4))
        
        if (r11_1.d == rsi_1.d)
            goto label_141522b50
        
        int32_t rcx_1 = 0
        int32_t r8_1 = *(*(arg1 + 0x28) + (r11_1 << 2))
        
        if (r8_1 s> 0)
            int32_t* rdx = *(*(arg1 + 0x20) + (r11_1 << 3))
            
            while (*rdx != rsi_1.d)
                rcx_1 += 1
                rdx = &rdx[1]
                
                if (rcx_1 s>= r8_1)
                    break
        
        int64_t r14_1 = sx.q(*(r9_1 + (r10_1 << 2) + 8))
        int64_t r15_1 = sx.q(*(r9_1 + (r10_1 << 2) + 0xc))
        int64_t rdi_1 = sx.q(*(r9_1 + (r10_1 << 2) + 0x10))
        
        if (rcx_1 != r8_1)
            if (TPI1::BuildTiToPrecMap(arg1, arg2, r11_1.d, r14_1.d, 0).b == 0)
                goto label_141522b50
            
            if (TPI1::BuildTiToPrecMap(arg1, arg2, rsi_1.d, r15_1.d, 1).b == 0)
                goto label_141522b50
        else
            *(*(*(arg1 + 0x20) + (r11_1 << 3)) + (r14_1 << 2)) = rsi_1.d
            *(*(*(arg1 + 0x20) + (rsi_1 << 3)) + (r15_1 << 2)) = r11_1.d
            *(*(*(arg1 + 0x20) + (r11_1 << 3))
                + (sx.q(*(*(arg1 + 0x28) + (r11_1 << 2)) + r14_1.d) << 2)) = r15_1.d
            *(*(*(arg1 + 0x20) + (rsi_1 << 3))
                + (sx.q(*(*(arg1 + 0x28) + (rsi_1 << 2)) + r15_1.d) << 2)) = r14_1.d
        
        int32_t rcx_10 = *(arg1 + 0x1c)
        uint64_t rax_12 = zx.q(*(arg1 + 0x18) - 1)
        *(arg1 + 0x18) = rax_12.d
        
        if (rcx_10 == rdi_1.d)
            *(arg1 + 0x1c) = 0
            rcx_10 = 0
        
        if (rax_12.d != rdi_1.d)
            if (rcx_10 == rax_12.d)
                *(arg1 + 0x1c) = rdi_1.d
            
            int64_t r8_4 = *(arg1 + 0x30)
            int32_t i = 0
            *(r8_4 + (sx.q((rdi_1 * 3).d) << 3)) = *(r8_4 + (sx.q((rax_12 * 3).d) << 3))
            int64_t r8_5 = rdi_1 * 3
            int64_t rdx_6 = *(arg1 + 0x30)
            *(rdx_6 + (r8_5 << 3) + 8) = *(rdx_6 + (sx.q(*(arg1 + 0x18) * 3) << 3) + 8)
            int64_t rdx_7 = *(arg1 + 0x30)
            *(rdx_7 + (r8_5 << 3) + 0x10) = *(rdx_7 + (sx.q(*(arg1 + 0x18) * 3) << 3) + 0x10)
            int64_t r8_6 = sx.q(*(arg1 + 0x18))
            
            if (*(*(arg1 + 0x28) + (r8_6 << 2)) s> 0)
                int64_t r11_2 = 0
                
                do
                    int64_t rcx_14 = sx.q(*(arg1 + 0x18))
                    r11_2 += 4
                    int64_t r9_4 = *(arg1 + 0x20)
                    int64_t r8_7 = *(r9_4 + (rcx_14 << 3))
                    int64_t rax_26 = sx.q(*(*(arg1 + 0x28) + (rcx_14 << 2)) + i)
                    i += 1
                    *(*(r9_4 + (sx.q(*(r11_2 + r8_7 - 4)) << 3))
                        + (sx.q(*(r8_7 + (rax_26 << 2))) << 2)) = rdi_1.d
                    r8_6 = sx.q(*(arg1 + 0x18))
                while (i s< *(*(arg1 + 0x28) + (r8_6 << 2)))
            
            int64_t rdx_9 = *(arg2 + 0xa8)
            *(rdx_9 + (rdi_1 << 3)) = *(rdx_9 + (sx.q(r8_6.d) << 3))
            int64_t rdx_10 = *(arg1 + 0x20)
            *(rdx_10 + (rdi_1 << 3)) = *(rdx_10 + (sx.q(*(arg1 + 0x18)) << 3))
            int64_t rdx_11 = *(arg1 + 0x28)
            *(rdx_11 + (rdi_1 << 2)) = *(rdx_11 + (sx.q(*(arg1 + 0x18)) << 2))
            *(*(*(arg1 + 0x20) + (rdi_1 << 3))
                + (sx.q(*(*(arg1 + 0x28) + (rdi_1 << 2)) * 2) << 2)) = rdi_1.d
        
        result = *(arg1 + 0x40)
        
        while (*(result + 4) s> 0)
            void* rax_34 = *(arg1 + 0x40)
            *(arg1 + 0x1c) = 0
            *(rax_34 + 4) -= 1
            int64_t rdx_13 = *(*(arg1 + 0x48) + 8)
            int64_t rcx_23 = sx.q(*(rax_34 + 4) * 3)
            int64_t rdi_2 = sx.q(*(rdx_13 + (rcx_23 << 2) + 8))
            
            if (TPI1::BuildTiToPrecMap(arg1, arg2, *(rdx_13 + (rcx_23 << 2)), 
                    *(rdx_13 + (rcx_23 << 2) + 4), 0).b == 0)
                goto label_141522b50
            
            int32_t rcx_25 = *(arg1 + 0x1c)
            uint64_t rax_38 = zx.q(*(arg1 + 0x18) - 1)
            *(arg1 + 0x18) = rax_38.d
            
            if (rcx_25 == rdi_2.d)
                *(arg1 + 0x1c) = 0
                rcx_25 = 0
            
            if (rax_38.d != rdi_2.d)
                if (rcx_25 == rax_38.d)
                    *(arg1 + 0x1c) = rdi_2.d
                
                int64_t r8_9 = *(arg1 + 0x30)
                int32_t i_1 = 0
                *(r8_9 + (sx.q((rdi_2 * 3).d) << 3)) = *(r8_9 + (sx.q((rax_38 * 3).d) << 3))
                int64_t r8_10 = rdi_2 * 3
                int64_t rdx_16 = *(arg1 + 0x30)
                *(rdx_16 + (r8_10 << 3) + 8) = *(rdx_16 + (sx.q(*(arg1 + 0x18) * 3) << 3) + 8)
                int64_t rdx_17 = *(arg1 + 0x30)
                *(rdx_17 + (r8_10 << 3) + 0x10) = *(rdx_17 + (sx.q(*(arg1 + 0x18) * 3) << 3) + 0x10)
                int64_t r8_11 = sx.q(*(arg1 + 0x18))
                
                if (*(*(arg1 + 0x28) + (r8_11 << 2)) s> 0)
                    int64_t r11_3 = 0
                    
                    do
                        int64_t rcx_29 = sx.q(*(arg1 + 0x18))
                        r11_3 += 4
                        int64_t r9_6 = *(arg1 + 0x20)
                        int64_t r8_12 = *(r9_6 + (rcx_29 << 3))
                        int64_t rax_52 = sx.q(*(*(arg1 + 0x28) + (rcx_29 << 2)) + i_1)
                        i_1 += 1
                        *(*(r9_6 + (sx.q(*(r11_3 + r8_12 - 4)) << 3))
                            + (sx.q(*(r8_12 + (rax_52 << 2))) << 2)) = rdi_2.d
                        r8_11 = sx.q(*(arg1 + 0x18))
                    while (i_1 s< *(*(arg1 + 0x28) + (r8_11 << 2)))
                
                int64_t rdx_19 = *(arg2 + 0xa8)
                *(rdx_19 + (rdi_2 << 3)) = *(rdx_19 + (sx.q(r8_11.d) << 3))
                int64_t rdx_20 = *(arg1 + 0x20)
                *(rdx_20 + (rdi_2 << 3)) = *(rdx_20 + (sx.q(*(arg1 + 0x18)) << 3))
                int64_t rdx_21 = *(arg1 + 0x28)
                *(rdx_21 + (rdi_2 << 2)) = *(rdx_21 + (sx.q(*(arg1 + 0x18)) << 2))
                *(*(*(arg1 + 0x20) + (rdi_2 << 3))
                    + (sx.q(*(*(arg1 + 0x28) + (rdi_2 << 2)) * 2) << 2)) = rdi_2.d
            
            result = *(arg1 + 0x40)
    
    result.b = 1

return result
