// 函数: sub_142b2a830
// 地址: 0x142b2a830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_37
uint64_t rcx_16

while (true)
    int32_t rcx = *(arg1 + 0x198)
    
    if (rcx != 0)
        if (rcx == 2 && *(arg1 + 0x190) != *(arg1 + 0x1a0))
            return sub_142b2ac90(arg1, arg2)
        
        int32_t rax_31
        
        if (rcx == 3)
            int16_t rax_29 = *(arg1 + 0x1b8)
            
            if (rax_29 s< 0)
                rax_31 = *(arg1 + 0x1bc)
            else
                rax_31 = sx.d(rax_29) s>> 5
        
        if (rcx == 3 && *(arg1 + 0x190) != rax_31)
            int64_t rdx_10 = sx.q(*(arg1 + 0x190))
            *(arg1 + 0x190) = (rdx_10 + 1).d
            int16_t rcx_22 = *(arg1 + 0x1b8)
            int32_t rax_49
            
            if (rcx_22 s< 0)
                rax_49 = *(arg1 + 0x1bc)
            else
                rax_49 = sx.d(rcx_22) s>> 5
            
            int16_t rcx_24
            
            if (rdx_10.d u>= rax_49)
                rcx_24 = -1
            else
                void* rcx_23 = arg1 + 0x1ba
                
                if ((rcx_22.b & 2) == 0)
                    rcx_23 = *(arg1 + 0x1c8)
                
                rcx_24 = *(rcx_23 + (rdx_10 << 1))
            
            *arg2 = zx.d(rcx_24)
        else if (rcx != 1)
            if (rcx != 2)
                int32_t rax_34 = *(arg1 + 0x1a0)
                *(arg1 + 0x190) = rax_34
                *(arg1 + 0x19c) = rax_34
            
            *(arg1 + 0x198) = 0
            continue
        else
            int32_t rcx_15 = 2
            *(arg1 + 0x19c) = *(arg1 + 0x190)
            
            if (*(arg1 + 0x190) == *(arg1 + 0x1a0))
                rcx_15 = 0
            
            *(arg1 + 0x198) = rcx_15
            continue
    else
        int64_t rax_1 = sx.q(*(arg1 + 0x190))
        
        if (rax_1.d == *(arg1 + 0x194))
            *arg2 = 0xffffffff
            return 0xc0
        
        *arg2 = zx.d(*(rax_1 + *(arg1 + 0x188)))
        *(arg1 + 0x190) += 1
        uint32_t r10_1 = *arg2
        int64_t rdx = sx.q(*(arg1 + 0x190))
        
        if (r10_1.b s>= 0)
            return zx.q(*(*(*(arg1 + 8) + 0x10) + (sx.q(*arg2) << 2)))
        
        int32_t rax_19
        
        if (r10_1 s< 0xe0)
            if (r10_1 s>= 0xc2 && rdx.d != *(arg1 + 0x194))
            label_142b2a9b2:
                char rdx_1 = *(rdx + *(arg1 + 0x188)) - 0x80
                
                if (rdx_1 u> 0x3f)
                    goto label_142b2aa3c
                
                int64_t* r8_1 = *(arg1 + 8)
                uint32_t r9_3 = zx.d(rdx_1)
                int32_t rbp_2 =
                    *(r8_1[2] + (zx.q(zx.d(*(*r8_1 + (sx.q(r10_1 + 0x760) << 1))) + r9_3) << 2))
                *arg2 = (r10_1 & 0x1f) << 6 | r9_3
                *(arg1 + 0x190) += 1
                int32_t rsi_3 = *(arg1 + 0x190)
                char rax_17 = sub_142b2ae70(*arg2)
                char rax_18
                
                if (rax_17 != 0 && rsi_3 != *(arg1 + 0x194))
                    rax_18 = sub_142b2b4e0(arg1)
                
                if (rax_17 == 0 || rsi_3 == *(arg1 + 0x194) || rax_18 == 0)
                    return zx.q(rbp_2)
                
                rax_19 = rsi_3 - 2
                goto label_142b2aab5
            
        label_142b2aa3c:
            uint32_t rax_20 =
                sub_142a9bc10(*(arg1 + 0x188), arg1 + 0x190, *(arg1 + 0x194), r10_1, 0xfd)
            *arg2 = rax_20
            
            if (rax_20 == 0xfffd)
                return 0xfffd0505
            
            uint32_t rcx_11 = zx.d((rax_20 s>> 0xa).w - 0x2840)
            
            if (rcx_11 u< 0xc0)
            label_142b2ab77:
                int64_t* r8_3 = **(arg1 + 0x10)
                
                if (rax_20 s< *(r8_3 + 0x2c))
                    int64_t rdx_7 = *r8_3
                    rcx_16 = sx.q((rax_20 & 0x1f) + (zx.d(*(rdx_7 + (zx.q(
                        zx.d(*(rdx_7 + (sx.q((rax_20 s>> 0xb) + 0x820) << 1)))
                        + (rax_20 s>> 5 & 0x3f)) << 1))) << 2))
                    rax_37 = r8_3[2]
                else
                    rcx_16 = sx.q(r8_3[6].d)
                    rax_37 = r8_3[2]
                
                break
            
            uint64_t rdx_5 = zx.q(*((zx.q(rcx_11) u>> 5) + 0x14367be00))
            
            if (rdx_5.d == 0 || not(test_bit(*((rdx_5 << 2) + 0x14367c720), rcx_11 & 0x1f)))
                goto label_142b2ab77
            
            int32_t rbp_3 = *(arg1 + 0x190)
            
            if (rbp_3 == *(arg1 + 0x194))
                goto label_142b2ab77
            
            if (sub_142b2b4e0(arg1) == 0)
                goto label_142b2ab77
            
            rax_19 = rbp_3 - 4
            goto label_142b2aab5
        
        if (r10_1 s>= 0xf0)
        label_142b2a985:
            
            if (r10_1 s>= 0xe0 || r10_1 s< 0xc2 || rdx.d == *(arg1 + 0x194))
                goto label_142b2aa3c
            
            goto label_142b2a9b2
        
        int32_t rax_3 = *(arg1 + 0x194)
        int32_t r8 = (rdx + 1).d
        
        if (r8 s>= rax_3 && rax_3 s>= 0)
            goto label_142b2a985
        
        int64_t r11_1 = *(arg1 + 0x188)
        uint32_t r9_1 = zx.d(*(rdx + r11_1))
        
        if (not(test_bit(sx.d(*((zx.q(r10_1) & 0xf) + " 000000000000")), zx.d((r9_1 u>> 5).b))))
            goto label_142b2a985
        
        char rcx_4 = *(sx.q(r8) + r11_1) - 0x80
        
        if (rcx_4 u> 0x3f)
            goto label_142b2a985
        
        *arg2 = ((r10_1 & 0xf) << 6 | (r9_1 & 0x3f)) << 6 | zx.d(rcx_4)
        *(arg1 + 0x190) += 2
        uint32_t rsi_1 = *arg2
        int32_t rbp_1 = *(arg1 + 0x190)
        
        if (sub_142b2ae70(rsi_1) != 0)
            if ((rsi_1 & 0x1fff01) == 0xf01)
            label_142b2a97d:
                rax_19 = rbp_1 - 3
            label_142b2aab5:
                *(arg1 + 0x190) = rax_19
                
                if (sub_142b2b6c0(arg1, arg3) != 0)
                    continue
                
                *arg2 = 0xffffffff
                return 0xc0
            else if (rbp_1 != *(arg1 + 0x194) && sub_142b2b4e0(arg1) != 0)
                goto label_142b2a97d
    
    int64_t* r9_5 = *(arg1 + 8)
    int64_t r8_5 = sx.q(*arg2)
    rax_37 = r9_5[2]
    rcx_16 = zx.q((r8_5.d & 0x1f) + (zx.d(*(*r9_5 + (r8_5 s>> 5 << 1))) << 2))
    break

return zx.q(*(rax_37 + (rcx_16 << 2)))
