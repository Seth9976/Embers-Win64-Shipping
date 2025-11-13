// 函数: sub_142babf00
// 地址: 0x142babf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp

if (*(arg1 + 0x1fc) == 0 || *(arg1 + 0x1fe) == 0 || arg1[0x40].w == 0)
    rbp.b = 1
else
    rbp.b = 0

int32_t rdi = *(arg1 + 0x1d4)

if (*(arg1 + 0x1c) s>= rdi + 1)
    int32_t r10_1 = *arg2
    int32_t r11_1 = r10_1
    int32_t rax_2 = sx.d(*(arg1 + 0x1ce))
    
    if (r10_1 s< 0)
        r11_1 = neg.d(r11_1)
    
    int32_t r9_2 = neg.d(rax_2)
    
    if (rax_2 s>= 0)
        r9_2 = rax_2
    
    int32_t r8_2 = zx.d((r11_1 s>> 0x10).w) * r9_2
    uint32_t rdx_1 = r8_2 u>> 0x10
    int32_t rax_7 = zx.d(r11_1.w) * r9_2 + (r8_2 << 0x10) + 0x2000
    uint32_t rsi_1 = rdx_1 + 1
    
    if (rax_7 u>= (r8_2 << 0x10) + 0x2000)
        rsi_1 = rdx_1
    
    uint32_t rsi_3 = rsi_1 << 0x12 | rax_7 u>> 0xe
    
    if ((r10_1 ^ rax_2) s< 0)
        rsi_3 = neg.d(rsi_3)
    
    int32_t rax_9 = sx.d(arg1[0x3a].w)
    int32_t r11_3 = r10_1 ^ rax_9
    
    if (r10_1 s< 0)
        r10_1 = neg.d(r10_1)
    
    int32_t r9_4 = neg.d(rax_9)
    
    if (rax_9 s>= 0)
        r9_4 = rax_9
    
    int32_t r8_6 = zx.d((r10_1 s>> 0x10).w) * r9_4
    uint32_t rdx_3 = r8_6 u>> 0x10
    int32_t rax_14 = zx.d(r10_1.w) * r9_4 + (r8_6 << 0x10) + 0x2000
    uint32_t r9_5 = rdx_3 + 1
    
    if (rax_14 u>= (r8_6 << 0x10) + 0x2000)
        r9_5 = rdx_3
    
    uint32_t r9_7 = r9_5 << 0x12 | rax_14 u>> 0xe
    
    if (r11_3 s< 0)
        r9_7 = neg.d(r9_7)
    
    if (rdi s> 0)
        do
            arg1[6].d -= 1
            int64_t rax_16 = arg1[5]
            int16_t r8_9 = *(rax_16 + (sx.q(arg1[6].d) << 2))
            
            if (r8_9 u< *(arg1 + 0xc4))
                int32_t rax_18 = *(*(*arg1 + 0x90) + 0x78)
                
                if (rax_18 != 0x28 || *(arg1 + 0x373) == 0)
                    if (*(arg1 + 0x1ce) == 0)
                        goto label_142bac129
                    
                    if (rax_18 != 0x28 || *(arg1 + 0x373) == 0)
                        int64_t rax_20 = arg1[0x1a]
                        uint64_t rdx_7 = zx.q(r8_9)
                        *(rax_20 + (rdx_7 << 3)) += rsi_3
                    
                    goto label_142bac11a
                
                if (rbp.b != 0)
                label_142bac0f0:
                    
                    if (*(arg1 + 0x1ce) != 0)
                    label_142bac11a:
                        int64_t rax_21 = arg1[0x1c]
                        uint64_t rdx_8 = zx.q(r8_9)
                        *(rax_21 + rdx_8) |= 8
                    
                label_142bac129:
                    
                    if (arg1[0x3a].w != 0)
                        if (*(*(*arg1 + 0x90) + 0x78) != 0x28 || *(arg1 + 0x373) == 0
                                || *(arg1 + 0x374) == 0 || *(arg1 + 0x375) == 0)
                            int64_t rax_23 = arg1[0x1a]
                            uint64_t rdx_10 = zx.q(r8_9)
                            *(rax_23 + (rdx_10 << 3) + 4) += r9_7
                        
                        int64_t rax_24 = arg1[0x1c]
                        uint64_t rdx_11 = zx.q(r8_9)
                        *(rax_24 + rdx_11) |= 0x10
                else if (*(arg1 + 0x374) == rbp.b || *(arg1 + 0x375) == rbp.b)
                    if (*(arg1 + 0x314) == 0)
                        if ((*(zx.q(r8_9) + arg1[0x1c]) & 0x10) != 0)
                            goto label_142bac0f0
                    else if (arg1[0x3a].w != 0 || (*(zx.q(r8_9) + arg1[0x1c]) & 0x10) != 0)
                        goto label_142bac0f0
            else if (*(arg1 + 0x315) != 0)
                arg1[3].d = 0x86
                return rax_16
            
            *(arg1 + 0x1d4) -= 1
        while (*(arg1 + 0x1d4) s> 0)
else if (*(arg1 + 0x315) != 0)
    arg1[3].d = 0x86

int32_t rax_1 = arg1[6].d
*(arg1 + 0x34) = rax_1
*(arg1 + 0x1d4) = 1
return rax_1
