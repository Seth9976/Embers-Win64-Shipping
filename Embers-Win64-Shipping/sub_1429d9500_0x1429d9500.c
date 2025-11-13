// 函数: sub_1429d9500
// 地址: 0x1429d9500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 8)
int32_t i = 0

if (*result s> 0)
    int64_t rbx_1 = 0
    
    do
        void* r8_1 = *(arg1 + 8)
        int32_t* r14_1 = *(r8_1 + 0x30) + (sx.q(*(*(r8_1 + 0x18) + rbx_1 + 4)) << 2)
        int32_t* r8_2 = *(r8_1 + 0x48) + (sx.q(*(*(r8_1 + 0x18) + rbx_1 + 4)) << 2)
        int32_t* r11_1 = *(arg1 + 0x78) + (sx.q(*(*(arg1 + 0x58) + rbx_1 + 4)) << 2)
        int64_t rdx_4 = *(arg1 + 0xd8)
        int32_t rdi_1 = *(rdx_4 + (sx.q(*r8_2) << 2))
        int32_t rsi_1 = *(rdx_4 + (sx.q(r8_2[1]) << 2))
        int32_t rbp_1 = *(rdx_4 + (sx.q(r8_2[2]) << 2))
        uint64_t rax_9 = zx.q(*r11_1)
        
        if (rax_9.d != 0xffffffff)
            void* r9_1 = *(arg1 + 0x10)
            int32_t* r9_2 =
                *(r9_1 + 0x30) + (sx.q(*(*(r9_1 + 0x18) + (sx.q(((rax_9 << 1) + 1).d) << 2))) << 2)
            *r9_2 = *(*(arg1 + 0xf0) + (sx.q(*r14_1) << 2))
            r9_2[1] = rdi_1
            r9_2[2] = rbp_1
        
        uint64_t rax_14 = zx.q(r11_1[1])
        
        if (rax_14.d != 0xffffffff)
            void* r9_3 = *(arg1 + 0x10)
            int64_t r8_4 = sx.q(*(*(r9_3 + 0x18) + (sx.q(((rax_14 << 1) + 1).d) << 2)))
            int64_t rax_17 = *(r9_3 + 0x30)
            *(rax_17 + (r8_4 << 2)) = rdi_1
            void* r9_4 = rax_17 + (r8_4 << 2)
            *(r9_4 + 4) = *(*(arg1 + 0xf0) + (sx.q(r14_1[1]) << 2))
            *(r9_4 + 8) = rsi_1
        
        uint64_t rax_19 = zx.q(r11_1[2])
        
        if (rax_19.d != 0xffffffff)
            void* r9_5 = *(arg1 + 0x10)
            int64_t r8_5 = sx.q(*(*(r9_5 + 0x18) + (sx.q(((rax_19 << 1) + 1).d) << 2)))
            int64_t rax_22 = *(r9_5 + 0x30)
            *(rax_22 + (r8_5 << 2)) = rbp_1
            *(rax_22 + (r8_5 << 2) + 4) = rsi_1
            *(rax_22 + (r8_5 << 2) + 8) = *(*(arg1 + 0xf0) + (sx.q(r14_1[2]) << 2))
        
        uint64_t rax_24 = zx.q(r11_1[3])
        
        if (rax_24.d != 0xffffffff)
            void* r9_7 = *(arg1 + 0x10)
            int64_t r8_6 = sx.q(*(*(r9_7 + 0x18) + (sx.q(((rax_24 << 1) + 1).d) << 2)))
            int64_t rax_27 = *(r9_7 + 0x30)
            *(rax_27 + (r8_6 << 2)) = rsi_1
            *(rax_27 + (r8_6 << 2) + 4) = rbp_1
            *(rax_27 + (r8_6 << 2) + 8) = rdi_1
        
        result = *(arg1 + 8)
        i += 1
        rbx_1 += 8
    while (i s< *result)

return result
