// 函数: sub_142acd600
// 地址: 0x142acd600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = arg3
int16_t rdi = *(arg1 + 0x4c) + *(arg1 + 0x48) + *(arg1 + 0x4a)

if (rdi s<= 0)
    *arg6 = **(arg1 + 0x70) * 0x3e8
    *arg7 = *(*(arg1 + 0x70) + 4) * 0x3e8
    return arg7

uint16_t r14 = 0
arg2 = sub_142a4b9b0(arg2 / 1000.0)

if (rsi == 0)
    int16_t rax_1 = *(arg1 + 0x48)
    uint64_t r9_1
    
    if (0 s>= rax_1)
        int16_t rcx_2 = *(arg1 + 0x4a)
        rax_1 = neg.w(rax_1)
        
        if (rax_1 s>= rcx_2)
            int64_t r8 = *(arg1 + 0x60)
            uint64_t rdx_1 = zx.q(sx.d(rax_1 - rcx_2))
            r9_1 = zx.q(*(r8 + (sx.q((rdx_1 * 2).d) << 2))) << 0x20
                | zx.q(*(r8 + (sx.q(((rdx_1 << 1) + 1).d) << 2)))
        else
            r9_1 = sx.q(*(*(arg1 + 0x58) + (sx.q(rax_1) << 2)))
    else
        int32_t* rax_2 = *(arg1 + 0x50)
        r9_1 = zx.q(rax_2[1]) | zx.q(*rax_2) << 0x20
    
    if (not(float.d(r9_1) <= arg2))
        *arg6 = **(arg1 + 0x70) * 0x3e8
        *arg7 = *(*(arg1 + 0x70) + 4) * 0x3e8
        return arg7

int16_t temp0 = rdi
rdi -= 1
uint16_t rdx_7

if (temp0 - 1 s< 0)
label_142acd8f9:
    rdx_7 = 0
else
    int16_t rax_11 = *(arg1 + 0x48)
    int16_t rbp_1 = rdi - 1
    int16_t r12_1 = 1 - rax_11
    
    while (true)
        uint64_t r9_4
        uint64_t rdx_2
        int64_t r8_1
        
        if (rdi s>= rax_11)
            int16_t rcx_8 = *(arg1 + 0x4a)
            int16_t rax_12 = r12_1 + rbp_1
            
            if (rax_12 s>= rcx_8)
                r8_1 = *(arg1 + 0x60)
                rdx_2 = zx.q(sx.d(rax_12 - rcx_8))
                r9_4 = zx.q(*(r8_1 + (sx.q((rdx_2 * 2).d) << 2))) << 0x20
                    | zx.q(*(r8_1 + (sx.q(((rdx_2 << 1) + 1).d) << 2)))
            else
                r9_4 = sx.q(*(*(arg1 + 0x58) + (sx.q(rax_12) << 2)))
        else
            r8_1 = *(arg1 + 0x50)
            rdx_2 = zx.q(sx.d(rdi))
            r9_4 = zx.q(*(r8_1 + (sx.q((rdx_2 * 2).d) << 2))) << 0x20
                | zx.q(*(r8_1 + (sx.q(((rdx_2 << 1) + 1).d) << 2)))
        
        if (rsi != 0 && not(arg2 < float.d(r9_4 - 0x15180)))
            uint16_t rdx_3
            
            if (rbp_1 s< 0)
                rdx_3 = 0
            else
                rdx_3 = zx.w(*(sx.q(rbp_1) + *(arg1 + 0x78)))
            
            int64_t r8_2 = *(arg1 + 0x70)
            rdx_3 *= 2
            int32_t r11_2 = *(r8_2 + (sx.q(sx.d(rdx_3) + 1) << 2)) + *(r8_2 + (sx.q(rdx_3) << 2))
            uint16_t rdx_4
            
            if (rbp_1 s< 0)
                rdx_4 = 0
            else
                rdx_4 = zx.w(*(sx.q(rbp_1) + *(arg1 + 0x78)))
            
            int32_t rsi_1 = *(r8_2 + (sx.q(sx.d(rdx_4 * 2) + 1) << 2))
            uint16_t rdx_5
            
            if (rdi s< 0)
                rdx_5 = 0
            else
                rdx_5 = zx.w(*(sx.q(rdi) + *(arg1 + 0x78)))
            
            rdx_5 *= 2
            int32_t r10_2 = *(r8_2 + (sx.q(sx.d(rdx_5) + 1) << 2)) + *(r8_2 + (sx.q(rdx_5) << 2))
            uint16_t rdx_6
            
            if (rdi s< 0)
                rdx_6 = 0
            else
                rdx_6 = zx.w(*(sx.q(rdi) + *(arg1 + 0x78)))
            
            int32_t rcx_18 = *(r8_2 + (sx.q(sx.d(rdx_6 * 2) + 1) << 2))
            
            if (rsi_1 == 0 || rcx_18 != 0)
                rdx_6.b = 0
            else
                rdx_6.b = 1
            
            if (rsi_1 != 0 || rcx_18 == 0)
                rcx_18.b = 0
            else
                rcx_18.b = 1
            
            int64_t rax_41
            
            if (r10_2 - r11_2 s< 0)
                int32_t rax_39 = arg5 & 3
                bool cond:1_1
                
                if (rax_39 != 1)
                    if (rax_39 == 3)
                        cond:1_1 = rcx_18.b != 0
                        goto label_142acd8b0
                    
                label_142acd8b2:
                    
                    if (rax_39 == 1)
                        if (rcx_18.b == 0)
                            goto label_142acd8c6
                        
                        rax_41 = sx.q(r11_2)
                    else if (rax_39 != 3 || rdx_6.b == 0)
                    label_142acd8c6:
                        rax_41 = sx.q(r11_2)
                        
                        if ((arg5.b & 0xc) != 4)
                            rax_41 = sx.q(r10_2)
                    else
                        rax_41 = sx.q(r11_2)
                else
                    cond:1_1 = rdx_6.b != 0
                label_142acd8b0:
                    
                    if (not(cond:1_1))
                        goto label_142acd8b2
                    
                    rax_41 = sx.q(r10_2)
            else
                int32_t rax_36 = arg4 & 3
                bool cond:2_1
                
                if (rax_36 != 1)
                    if (rax_36 == 3)
                        cond:2_1 = rcx_18.b != 0
                        goto label_142acd872
                    
                label_142acd877:
                    bool cond:4_1
                    
                    if (rax_36 != 1)
                        if (rax_36 == 3)
                            cond:4_1 = rdx_6.b != 0
                            goto label_142acd884
                        
                        if ((arg4.b & 0xc) == 0xc)
                            r10_2 = r11_2
                    else
                        cond:4_1 = rcx_18.b != 0
                    label_142acd884:
                        
                        if (not(cond:4_1) && (arg4.b & 0xc) == 0xc)
                            r10_2 = r11_2
                    r11_2 = r10_2
                else
                    cond:2_1 = rdx_6.b != 0
                label_142acd872:
                    
                    if (not(cond:2_1))
                        goto label_142acd877
                rax_41 = sx.q(r11_2)
            
            rsi = arg3
            r9_4 += rax_41
        
        if (arg2 >= float.d(r9_4))
            break
        
        rax_11 = *(arg1 + 0x48)
        rbp_1 -= 1
        int16_t temp1_1 = rdi
        rdi -= 1
        
        if (temp1_1 - 1 s< 0)
            goto label_142acd8f9_1
    
    if (rdi s< 0)
    label_142acd8f9_1:
        rdx_7 = 0
    else
        rdx_7 = zx.w(*(sx.q(rdi) + *(arg1 + 0x78)))

*arg6 = *(*(arg1 + 0x70) + (sx.q(rdx_7 * 2) << 2)) * 0x3e8

if (rdi s>= 0)
    r14 = zx.w(*(sx.q(rdi) + *(arg1 + 0x78)))

*arg7 = *(*(arg1 + 0x70) + (sx.q(sx.d(r14 * 2) + 1) << 2)) * 0x3e8
return arg7
