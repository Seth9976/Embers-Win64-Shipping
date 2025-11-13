// 函数: sub_141f6f460
// 地址: 0x141f6f460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)

if (arg2 s>= 0)
    int32_t r15_1 = arg1[0x82].d
    
    if (rbp.d s< r15_1)
        int32_t rdx_1 = r15_1 - rbp.d
        int64_t rdi_1 = rbp * 0x2c
        int64_t r14_1 = sx.q((rbp + 1).d)
        int32_t rcx = r15_1
        int64_t rsi_1 = rbp
        
        if (rdx_1 != 1)
            int64_t rcx_1 = arg1[0x81]
            memmove(rcx_1 + rdi_1, r14_1 * 0x2c + rcx_1, (rdx_1 - 1) * 0x2c)
            rcx = arg1[0x82].d
        
        arg1[0x82].d = rcx - 1
        int32_t rcx_3 = arg1[0x85].d
        int32_t rax_5 = rcx_3 - rbp.d
        
        if (rax_5 != 1)
            int64_t r9_1 = arg1[0x84]
            memmove(rbp * 0x50 + r9_1, r14_1 * 0x50 + r9_1, (rax_5 - 1) * 0x50)
            rcx_3 = arg1[0x85].d
        
        arg1[0x85].d = rcx_3 - 1
        int32_t rcx_8 = arg1[0x88].d
        int32_t rax_10 = rcx_8 - rbp.d
        
        if (rax_10 != 1)
            int64_t rcx_9 = arg1[0x87]
            rdi_1 = rsi_1 * 0x2c
            memmove(rcx_9 + rdi_1, r14_1 * 0x2c + rcx_9, (rax_10 - 1) * 0x2c)
            rcx_8 = arg1[0x88].d
        
        arg1[0x88].d = rcx_8 - 1
        int64_t* rax_15 = (*(*arg1 + 0x868))(arg1)
        
        if (rax_15 != 0)
            int64_t r8_4 = *rax_15
            (*(r8_4 + 0x278))(rax_15, zx.q(rbp.d), r8_4)
        
        int64_t r8_5 = sx.q(r15_1 - 1)
        
        if (rsi_1 s< r8_5)
            uint64_t rax
            
            if (r8_5 - rsi_1 s>= 4)
                int64_t rdx_13 = rbp * 0x50
                int64_t i_2 = ((r8_5 - rsi_1 - 4) u>> 2) + 1
                rsi_1 = (i_2 << 2) + rbp
                int64_t i
                
                do
                    int32_t* rax_17 = arg1[0x81]
                    *(rax_17 + rdi_1) = *(rax_17 + rdi_1) - 1f
                    int32_t* rax_18 = arg1[0x84]
                    *(rax_18 + rdx_13) = *(rax_18 + rdx_13) - 1f
                    float* rax_19 = arg1[0x87]
                    *(rax_19 + rdi_1) = *(rax_19 + rdi_1) - 1f
                    int64_t rax_20 = arg1[0x81]
                    *(rax_20 + rdi_1 + 0x2c) = *(rax_20 + rdi_1 + 0x2c) - 1f
                    int64_t rax_21 = arg1[0x84]
                    *(rax_21 + rdx_13 + 0x50) = *(rax_21 + rdx_13 + 0x50) - 1f
                    int64_t rax_22 = arg1[0x87]
                    *(rax_22 + rdi_1 + 0x2c) = *(rax_22 + rdi_1 + 0x2c) - 1f
                    int64_t rax_23 = arg1[0x81]
                    *(rdi_1 + rax_23 + 0x58) = *(rdi_1 + rax_23 + 0x58) - 1f
                    int64_t rax_24 = arg1[0x84]
                    *(rdx_13 + rax_24 + 0xa0) = *(rdx_13 + rax_24 + 0xa0) - 1f
                    int64_t rax_25 = arg1[0x87]
                    *(rdi_1 + rax_25 + 0x58) = *(rdi_1 + rax_25 + 0x58) - 1f
                    int64_t rax_26 = arg1[0x81]
                    *(rdi_1 + rax_26 + 0x84) = *(rdi_1 + rax_26 + 0x84) - 1f
                    int64_t rax_27 = arg1[0x84]
                    *(rdx_13 + rax_27 + 0xf0) = *(rdx_13 + rax_27 + 0xf0) - 1f
                    rdx_13 += 0x140
                    rax = arg1[0x87]
                    *(rdi_1 + rax + 0x84) = *(rdi_1 + rax + 0x84) - 1f
                    rdi_1 += 0xb0
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            if (rsi_1 s< r8_5)
                int64_t rdx_15 = rsi_1 * 0x50
                float* rcx_17 = rsi_1 * 0x2c
                int64_t i_3 = r8_5 - rsi_1
                int64_t i_1
                
                do
                    int64_t rax_28 = arg1[0x81]
                    *(rcx_17 + rax_28) = *(rcx_17 + rax_28) - 1f
                    int64_t rax_29 = arg1[0x84]
                    *(rdx_15 + rax_29) = *(rdx_15 + rax_29) - 1f
                    rdx_15 += 0x50
                    rax = arg1[0x87]
                    *(rcx_17 + rax) = *(rcx_17 + rax) - 1f
                    rcx_17 = &rcx_17[0xb]
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
        
        if (*(arg1 + 0x4e2) != 0)
            *(arg1 + 0x4e4) = *(arg1 + 0x4e4) - 1f

if (arg3 == 0)
    return 

return sub_141f77550(arg1) __tailcall
