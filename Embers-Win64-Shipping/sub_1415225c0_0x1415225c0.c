// 函数: sub_1415225c0
// 地址: 0x1415225c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(*(arg1 + 0x40) + 4) s<= 0)
label_141522762:
    result.b = 1
else
    while (true)
        void* rax = *(arg1 + 0x40)
        *(arg1 + 0x1c) = 0
        *(rax + 4) -= 1
        int64_t rdx = *(*(arg1 + 0x48) + 8)
        int64_t rcx_1 = sx.q(*(rax + 4) * 3)
        int64_t rdi_1 = sx.q(*(rdx + (rcx_1 << 2) + 8))
        
        if (TPI1::BuildTiToPrecMap(arg1, arg2, *(rdx + (rcx_1 << 2)), *(rdx + (rcx_1 << 2) + 4), 0)
                .b == 0)
            result.b = 0
            break
        
        int32_t rcx_3 = *(arg1 + 0x1c)
        uint64_t rax_4 = zx.q(*(arg1 + 0x18) - 1)
        *(arg1 + 0x18) = rax_4.d
        
        if (rcx_3 == rdi_1.d)
            *(arg1 + 0x1c) = 0
            rcx_3 = 0
        
        if (rax_4.d != rdi_1.d)
            if (rcx_3 == rax_4.d)
                *(arg1 + 0x1c) = rdi_1.d
            
            int64_t r8_2 = *(arg1 + 0x30)
            int32_t i = 0
            *(r8_2 + (sx.q((rdi_1 * 3).d) << 3)) = *(r8_2 + (sx.q((rax_4 * 3).d) << 3))
            int64_t r8_3 = rdi_1 * 3
            int64_t rdx_3 = *(arg1 + 0x30)
            *(rdx_3 + (r8_3 << 3) + 8) = *(rdx_3 + (sx.q(*(arg1 + 0x18) * 3) << 3) + 8)
            int64_t rdx_4 = *(arg1 + 0x30)
            *(rdx_4 + (r8_3 << 3) + 0x10) = *(rdx_4 + (sx.q(*(arg1 + 0x18) * 3) << 3) + 0x10)
            int64_t r8_4 = sx.q(*(arg1 + 0x18))
            
            if (*(*(arg1 + 0x28) + (r8_4 << 2)) s> 0)
                int64_t r11_1 = 0
                
                do
                    int64_t rcx_7 = sx.q(*(arg1 + 0x18))
                    r11_1 += 4
                    int64_t r9_2 = *(arg1 + 0x20)
                    int64_t r8_5 = *(r9_2 + (rcx_7 << 3))
                    int64_t rax_18 = sx.q(*(*(arg1 + 0x28) + (rcx_7 << 2)) + i)
                    i += 1
                    *(*(r9_2 + (sx.q(*(r8_5 + r11_1 - 4)) << 3))
                        + (sx.q(*(r8_5 + (rax_18 << 2))) << 2)) = rdi_1.d
                    r8_4 = sx.q(*(arg1 + 0x18))
                while (i s< *(*(arg1 + 0x28) + (r8_4 << 2)))
            
            int64_t rdx_6 = *(arg2 + 0xa8)
            *(rdx_6 + (rdi_1 << 3)) = *(rdx_6 + (sx.q(r8_4.d) << 3))
            int64_t rdx_7 = *(arg1 + 0x20)
            *(rdx_7 + (rdi_1 << 3)) = *(rdx_7 + (sx.q(*(arg1 + 0x18)) << 3))
            int64_t rdx_8 = *(arg1 + 0x28)
            *(rdx_8 + (rdi_1 << 2)) = *(rdx_8 + (sx.q(*(arg1 + 0x18)) << 2))
            *(*(*(arg1 + 0x20) + (rdi_1 << 3))
                + (sx.q(*(*(arg1 + 0x28) + (rdi_1 << 2)) * 2) << 2)) = rdi_1.d
        
        if (*(*(arg1 + 0x40) + 4) s<= 0)
            goto label_141522762

return result
