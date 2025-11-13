// 函数: sub_142b9d510
// 地址: 0x142b9d510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0

if (arg1 == 0)
    rdi = (arg1 + 6).d
else
    int32_t entry_r9
    
    if (*(arg1 + 0x15) == 0)
        int32_t rax_13
        
        if (arg1[2] != arg1[7] || arg1[3] != arg1[8])
            rax_13, entry_r9 = sub_142b9d700(arg1, &arg1[7])
            rdi = rax_13
        
        if ((arg1[2] == arg1[7] && arg1[3] == arg1[8]) || rax_13 == 0)
            int32_t rdx_8 = arg1[6]
            int32_t rcx_8 = *arg1
            arg1[1] = rdx_8
            int32_t rax_14 = sub_142b91560(rcx_8, rdx_8)
            
            if (rax_14 == 0)
            label_142b9d6a3:
                sub_142b9e110(&arg1[0x10], 0)
                sub_142b9e110(&arg1[0x1c], 1)
            else
                int32_t rsi
                rsi.b = rax_14 s< 0
                int32_t rax_15
                int32_t r9_1
                rax_15, r9_1 = sub_142b9e690(arg1, rsi, arg1[9], entry_r9)
                rdi = rax_15
                
                if (rax_15 == 0)
                    int32_t rax_16 = sub_142b9e7a0(arg1, rsi ^ 1, arg1[9], r9_1, arg2)
                    rdi = rax_16
                    
                    if (rax_16 == 0)
                        goto label_142b9d6a3
    else
        int32_t rax_1
        int64_t* r9
        rax_1, r9 = sub_142b9e500(arg1, *arg1, 0, entry_r9, arg2)
        rdi = rax_1
        
        if (rax_1 == 0)
            rdi = 0
            int32_t rsi_2 = arg1[0x1c] - arg1[0x23]
            
            if (rsi_2 s> 0)
                int32_t rax_2
                rax_2, r9 = sub_142b9e2d0(&arg1[0x10], rsi_2)
                rdi = rax_2
                
                if (rax_2 == 0)
                    uint64_t rcx_1 = zx.q(arg1[0x10])
                    int64_t rdx_3 = *(arg1 + 0x78)
                    void* r10_2 = *(arg1 + 0x50) + rcx_1
                    r9 = *(arg1 + 0x48) + (rcx_1 << 3)
                    uint64_t rcx_2 = zx.q(arg1[0x1c])
                    void* r11_2 = rcx_2 - 1 + *(arg1 + 0x80)
                    int64_t* i = rdx_3 + ((rcx_2 - 1) << 3)
                    
                    if (i u>= rdx_3 + (sx.q(arg1[0x23]) << 3))
                        do
                            r11_2 -= 1
                            *r9 = *i
                            r9 = &r9[1]
                            r10_2 += 1
                            i -= 8
                            *(r10_2 - 1) = *(r11_2 + 1) & 0xf3
                        while (i u>= *(arg1 + 0x78) + (sx.q(arg1[0x23]) << 3))
                    
                    arg1[0x1c] = arg1[0x23]
                    arg1[0x10] += rsi_2
                    arg1[0x16].b = 0
                    arg1[0x22].b = 0
            
            if (rdi == 0)
                int32_t rdx_5 = arg1[6] + 0xb40000
                *(arg1 + 8) = *(arg1 + 0x1c)
                int32_t rax_10 = sub_142b9e500(arg1, rdx_5, 0, r9.d)
                rdi = rax_10
                
                if (rax_10 == 0)
                    sub_142b9e110(&arg1[0x10], 0)

return zx.q(rdi)
