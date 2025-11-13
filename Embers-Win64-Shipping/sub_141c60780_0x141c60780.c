// 函数: sub_141c60780
// 地址: 0x141c60780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xe0) |= 1
uint32_t rax = *(arg1 + 0x78)

if (rax s>= 0)
    if (rax s<= 1)
        *(arg1 + 0x50) = 0
        int32_t rcx = *(arg1 + 0x18)
        *(arg1 + 0x24) = rcx u>> 1
        *(arg1 + 0x20) = 0
        
        if (*(arg1 + 0x10) != 0 && rcx != 0)
            int64_t* rax_4 = *(arg1 + 0x28)
            int32_t rdi_1 = *(arg1 + 0x74)
            *(arg1 + 0x1c) = sbb.d(rcx, rcx, *(arg1 + 0x70) != 0)
            uint64_t* rcx_2 = *rax_4
            int32_t rdi_2 = rdi_1 << 0xd
            rcx_2[1].d = 0
            
            if (rdi_2 s> *(rcx_2 + 0xc))
                sub_140775b10(rcx_2, rdi_2)
            
            int64_t* rsi_1 = **(arg1 + 0x28)
            int64_t r14_1 = sx.q(rsi_1[1].d)
            int32_t rax_6 = r14_1.d + rdi_2
            rsi_1[1].d = rax_6
            
            if (rax_6 s> *(rsi_1 + 0xc))
                sub_140775270(rsi_1)
            
            memset(*rsi_1 + (r14_1 << 2), 0, sx.q(rdi_2) << 2)
            sub_141c5e3a0(arg1 + 0x10, **(arg1 + 0x28), rdi_2)
            int64_t* rcx_6 = *(arg1 + 0x28)
            int64_t var_18 = *rcx_6
            void* rax_9 = rcx_6[1]
            void* var_10_1 = rax_9
            
            if (rax_9 != 0)
                *(rax_9 + 8) += 1
            
            sub_141c71a70(arg1, &var_18)
            *(arg1 + 0x50) = 1
    else if (rax s<= 3)
        sub_141c71b10(arg1)
        int64_t rax_1
        rax_1.b = 1
        return rax_1

rax.b = 1
return rax
