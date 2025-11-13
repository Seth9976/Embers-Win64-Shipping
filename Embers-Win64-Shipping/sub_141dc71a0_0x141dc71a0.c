// 函数: sub_141dc71a0
// 地址: 0x141dc71a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0

if (arg3 != 0)
    void* rax_1 = sub_140cbe090()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(arg3 + 0x38) && *(*(arg3 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            int32_t rcx_1 = 0
            int32_t r11_1 = *(arg1 + 0x1c8)
            int32_t r8 = 0
            int32_t var_98_1 = 0
            int32_t var_94_1 = 1
            void* var_90_1 = arg1 + 0x1b0
            int32_t var_88_1 = 0xffffffff
            int64_t var_84_1 = 0
            
            if (r11_1 != 0)
                void* rax_4 = *(arg1 + 0x1c0)
                void* r9_1 = arg1 + 0x1b0
                
                if (rax_4 != 0)
                    r9_1 = rax_4
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r11_1 - 1)
                int32_t rdx_3 = *r9_1
                
                if (rdx_3 != 0)
                label_141dc72a8:
                    int32_t rax_11 = neg.d(rdx_3) & rdx_3
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
                    int32_t var_94_2 = rax_11
                    int32_t rax_12
                    
                    if (rax_11 == 0)
                        rax_12 = 0x20
                    else
                        rax_12 = 0x1f - temp0_2
                    
                    var_84_1.d = r8 - rax_12 + 0x1f
                    
                    if (r8 - rax_12 + 0x1f s> r11_1)
                        var_84_1.d = r11_1
                else
                    while (true)
                        int64_t rdx_4 = sx.q(rcx_1)
                        r8 += 0x20
                        rcx_1 += 1
                        var_84_1:4.d = r8
                        var_98_1 = rcx_1
                        
                        if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                        int32_t var_88_2 = 0xffffffff
                        
                        if (rdx_3 != 0)
                            goto label_141dc72a8
                    
                    var_84_1.d = r11_1
            
            int32_t rdx_5 = *(arg1 + 0x1c8)
            int128_t var_38_1 = 0xffffffff
            int32_t r15_1 = 0xffffffff << (rdx_5.b & 0x1f)
            int128_t var_48_1 = var_98_1.o
            int32_t r8_3 = rdx_5 s>> 5
            int32_t r9_3 = rdx_5 & 0xffffffe0
            int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int32_t var_88_3 = r15_1
            var_84_1.d = rdx_5
            int128_t var_78 = (arg1 + 0x1a0).o
            int96_t var_68_1 = var_48_1:8.12
            
            if (rdx_5 != r11_1)
                void* rax_14 = *(arg1 + 0x1c0)
                void* r10_1 = arg1 + 0x1b0
                
                if (rax_14 != 0)
                    r10_1 = rax_14
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r11_1 - 1)
                int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r15_1
                
                if (rdx_9 != 0)
                label_141dc7372:
                    int32_t rax_21 = neg.d(rdx_9) & rdx_9
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
                    int32_t rsi_1
                    
                    if (rax_21 == 0)
                        rsi_1 = 0x20
                    else
                        rsi_1 = 0x1f - temp0_4
                    
                    var_84_1.d = r9_3 - rsi_1 + 0x1f
                    
                    if (r9_3 - rsi_1 + 0x1f s> r11_1)
                        var_84_1.d = r11_1
                else
                    while (true)
                        int64_t rcx_6 = sx.q(r8_3)
                        r9_3 += 0x20
                        r8_3 += 1
                        
                        if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
                        var_88_3 = 0xffffffff
                        
                        if (rdx_9 != 0)
                            goto label_141dc7372
                    
                    var_84_1.d = r11_1
            
            while (true)
                int32_t var_5c
                int64_t rcx_8 = sx.q(var_5c)
                int64_t* rax_23 = var_78.q
                
                if (rcx_8.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x1b0
                        && rax_23 == arg1 + 0x1a0)
                    break
                
                void* r14_1 = *(*rax_23 + rcx_8 * 0x10)
                
                if (r14_1 != 0)
                    void* rax_25 = sub_140cbe090()
                    int64_t rax_26
                    
                    if (rax_25 != 0)
                        rax_26 = sx.q(*(rax_25 + 0x38))
                    
                    void* const rdx_11
                    
                    if (rax_25 == 0 || rax_26.d s> *(arg3 + 0x38)
                            || *(*(arg3 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30)
                        rdx_11 = nullptr
                    else
                        rdx_11 = arg3
                    
                    if (sub_140be1130(*(r14_1 + 0x10), rdx_11) != 0)
                        int64_t rsi_2 = sx.q(arg2[1].d)
                        int32_t rax_29 = (rsi_2 + 1).d
                        arg2[1].d = rax_29
                        
                        if (rax_29 s> *(arg2 + 0xc))
                            sub_1405a4d70(arg2)
                        
                        *(*arg2 + (rsi_2 << 3)) = r14_1
                
                var_68_1:8.d &= not.d(var_78:0xc.d)
                sub_14059bdd0(&var_78:8)

return arg2
