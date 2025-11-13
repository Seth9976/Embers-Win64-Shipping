// 函数: sub_140e40f40
// 地址: 0x140e40f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = arg1 + 0x1cc
void* const r10 = 0x24c

if (arg2 s> 0)
    r10 = 0x34c

int32_t* r10_1 = r10 + arg1
int16_t result

for (int64_t i = 0; i s< 0x40; i += 8)
    int32_t r8_1 = *r10_1
    int32_t rcx = *(arg1 + (zx.q(*(i + 0x1439b37b0)) << 2) + 0xcc)
    int32_t rax_3 = r8_1 s>> 1
    int16_t rax_5
    
    if (rcx s>= 0)
        int32_t rcx_1 = rcx + rax_3
        
        if (rcx_1 s>= r8_1)
            rax_5 = (divs.dp.d(sx.q(rcx_1), r8_1)).w
        else
            rax_5 = 0
    else
        int32_t rax_4 = rax_3 - rcx
        
        if (rax_4 s>= r8_1)
            rax_5 = neg.w((divs.dp.d(sx.q(rax_4), r8_1)).w)
        else
            rax_5 = 0
    
    *rbx = rax_5
    int32_t r8_2 = r10_1[1]
    int32_t rcx_3 = r8_2 s>> 1
    int32_t rax_10 = *(arg1 + (zx.q(*(i + &data_1439b37b1)) << 2) + 0xcc)
    int16_t rax_11
    
    if (rax_10 s>= 0)
        int32_t rax_14 = rax_10 + rcx_3
        
        if (rax_14 s>= r8_2)
            rax_11 = (divs.dp.d(sx.q(rax_14), r8_2)).w
        else
            rax_11 = 0
    else
        int32_t rcx_4 = rcx_3 - rax_10
        
        if (rcx_4 s>= r8_2)
            rax_11 = neg.w((divs.dp.d(sx.q(rcx_4), r8_2)).w)
        else
            rax_11 = 0
    
    rbx[1] = rax_11
    int32_t r8_3 = r10_1[2]
    int32_t rcx_6 = r8_3 s>> 1
    int32_t rax_17 = *(arg1 + (zx.q(*(i + 0x1439b37b2)) << 2) + 0xcc)
    int16_t rax_18
    
    if (rax_17 s>= 0)
        int32_t rax_21 = rax_17 + rcx_6
        
        if (rax_21 s>= r8_3)
            rax_18 = (divs.dp.d(sx.q(rax_21), r8_3)).w
        else
            rax_18 = 0
    else
        int32_t rcx_7 = rcx_6 - rax_17
        
        if (rcx_7 s>= r8_3)
            rax_18 = neg.w((divs.dp.d(sx.q(rcx_7), r8_3)).w)
        else
            rax_18 = 0
    
    rbx[2] = rax_18
    int32_t r8_4 = r10_1[3]
    int32_t rcx_9 = r8_4 s>> 1
    int32_t rax_24 = *(arg1 + (zx.q(*(i + 0x1439b37b3)) << 2) + 0xcc)
    int16_t rax_25
    
    if (rax_24 s>= 0)
        int32_t rax_28 = rax_24 + rcx_9
        
        if (rax_28 s>= r8_4)
            rax_25 = (divs.dp.d(sx.q(rax_28), r8_4)).w
        else
            rax_25 = 0
    else
        int32_t rcx_10 = rcx_9 - rax_24
        
        if (rcx_10 s>= r8_4)
            rax_25 = neg.w((divs.dp.d(sx.q(rcx_10), r8_4)).w)
        else
            rax_25 = 0
    
    rbx[3] = rax_25
    int32_t r8_5 = r10_1[4]
    int32_t rcx_12 = r8_5 s>> 1
    int32_t rax_31 = *(arg1 + (zx.q(*(i + 0x1439b37b4)) << 2) + 0xcc)
    int16_t rax_32
    
    if (rax_31 s>= 0)
        int32_t rax_35 = rax_31 + rcx_12
        
        if (rax_35 s>= r8_5)
            rax_32 = (divs.dp.d(sx.q(rax_35), r8_5)).w
        else
            rax_32 = 0
    else
        int32_t rcx_13 = rcx_12 - rax_31
        
        if (rcx_13 s>= r8_5)
            rax_32 = neg.w((divs.dp.d(sx.q(rcx_13), r8_5)).w)
        else
            rax_32 = 0
    
    rbx[4] = rax_32
    int32_t r8_6 = r10_1[5]
    int32_t rcx_15 = r8_6 s>> 1
    int32_t rax_38 = *(arg1 + (zx.q(*(i + 0x1439b37b5)) << 2) + 0xcc)
    int16_t rax_39
    
    if (rax_38 s>= 0)
        int32_t rax_42 = rax_38 + rcx_15
        
        if (rax_42 s>= r8_6)
            rax_39 = (divs.dp.d(sx.q(rax_42), r8_6)).w
        else
            rax_39 = 0
    else
        int32_t rcx_16 = rcx_15 - rax_38
        
        if (rcx_16 s>= r8_6)
            rax_39 = neg.w((divs.dp.d(sx.q(rcx_16), r8_6)).w)
        else
            rax_39 = 0
    
    rbx[5] = rax_39
    void* r9_1 = &rbx[7]
    int32_t r8_7 = r10_1[6]
    int32_t rcx_18 = r8_7 s>> 1
    int32_t rax_45 = *(arg1 + (zx.q(*(i + 0x1439b37b6)) << 2) + 0xcc)
    int16_t rax_46
    
    if (rax_45 s>= 0)
        int32_t rax_49 = rax_45 + rcx_18
        
        if (rax_49 s>= r8_7)
            rax_46 = (divs.dp.d(sx.q(rax_49), r8_7)).w
        else
            rax_46 = 0
    else
        int32_t rcx_19 = rcx_18 - rax_45
        
        if (rcx_19 s>= r8_7)
            rax_46 = neg.w((divs.dp.d(sx.q(rcx_19), r8_7)).w)
        else
            rax_46 = 0
    
    rbx[6] = rax_46
    rbx = r9_1 + 2
    int32_t r8_8 = r10_1[7]
    int32_t rcx_20 = *(arg1 + (zx.q(*(i + 0x1439b37b7)) << 2) + 0xcc)
    int32_t rax_53 = r8_8 s>> 1
    
    if (rcx_20 s>= 0)
        int32_t rcx_21 = rcx_20 + rax_53
        
        if (rcx_21 s>= r8_8)
            result = (divs.dp.d(sx.q(rcx_21), r8_8)).w
        else
            result = 0
    else
        int32_t rax_54 = rax_53 - rcx_20
        
        if (rax_54 s>= r8_8)
            result = neg.w((divs.dp.d(sx.q(rax_54), r8_8)).w)
        else
            result = 0
    
    r10_1 = &r10_1[8]
    *r9_1 = result

return result
