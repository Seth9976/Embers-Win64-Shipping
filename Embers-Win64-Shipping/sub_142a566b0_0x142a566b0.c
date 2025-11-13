// 函数: sub_142a566b0
// 地址: 0x142a566b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2

if (arg3 == 0)
    goto label_142a5676c

int32_t rax_2

if (arg3 != 1)
    if (arg3 != 2)
        if (arg3 == 3)
            goto label_142a5676c
        
        if (arg3 != 4)
            return 0xffffffff
        
        goto label_142a566ee
    
label_142a566ee:
    rax_2 = arg1[1].d
    
    if (rax_2 s>= 0)
        goto label_142a5676a
    
    *(arg1 + 0xc) = *(arg1 + 0x14)
    arg1[2].d = 0xffffffff
    arg1[3].d = 0
    
    if (rdi s< 0 && rdi != 0)
        goto label_142a56721
    
    return 0xfffffffe

rax_2 = arg1[2].d

if (rax_2 s>= 0)
label_142a5676a:
    rdi += rax_2
label_142a5676c:
    
    if (rdi s<= 0)
        arg1[3].d = 0
        *(arg1 + 0xc) = 0
        return 0
    
    int32_t r8_3 = arg1[1].d
    
    if (r8_3 s>= 0 && rdi s>= r8_3)
        arg1[2].d = r8_3
        *(arg1 + 0xc) = *(arg1 + 0x14)
        arg1[3].d = 0
        return zx.q(r8_3)
    
    int32_t r9_1 = arg1[2].d
    int32_t temp3_1
    int32_t temp4_1
    
    if (r9_1 s>= 0)
        temp3_1:temp4_1 = sx.q(r9_1)
    
    if (r9_1 s< 0 || rdi s< (temp4_1 - temp3_1) s>> 1)
        arg1[3].d = 0
        *(arg1 + 0xc) = 0
    else if (r8_3 s>= 0 && r8_3 - rdi s< rdi - r9_1)
        *(arg1 + 0xc) = *(arg1 + 0x14)
        arg1[2].d = r8_3
        arg1[3].d = 0
    
    int32_t rax_35 = arg1[2].d
    int32_t temp6_1 = rdi
    rdi -= rax_35
    
    if (temp6_1 == rax_35)
        return rax_35
else
    if (rdi == 0)
        return 0xfffffffe
    
label_142a56721:
    int32_t rcx = *(arg1 + 0xc)
    
    if (neg.d(rdi) s>= rcx)
        arg1[3].d = 0
        *(arg1 + 0xc) = 0
        return 0
    
    int32_t rdx = *(arg1 + 0x14)
    
    if (rdi s>= rdx - rcx)
        int32_t rcx_1 = arg1[1].d
        uint64_t rax_10 = 0xfffffffe
        arg1[2].d = rcx_1
        *(arg1 + 0xc) = rdx
        
        if (rcx_1 s>= 0)
            rax_10 = zx.q(rcx_1)
        
        arg1[3].d = 0
        return rax_10

int32_t i = *(arg1 + 0xc)
int64_t rbp_1 = *arg1
int32_t rsi_1 = arg1[2].d
int32_t i_1 = i

if (rdi s<= 0)
    if (arg1[3].d != 0)
        i -= 4
        arg1[3].d = 0
        rsi_1 -= 1
        rdi += 1
    
    if (rdi s< 0)
        while (i s> 0)
            i -= 1
            i_1 = i
            uint32_t rax_31 = zx.d(*(sx.q(i) + rbp_1))
            
            if (rax_31.b s< 0)
                rax_31 = sub_142a9be90(rbp_1, 0, &i_1, rax_31, 0xfd)
                i = i_1
            
            int32_t rax_32
            
            if (rax_31 s> 0xffff)
                if (rdi s> 0xfffffffe)
                    i += 4
                    arg1[3].d = rax_31
                    rsi_1 -= 1
                    break
                
                rsi_1 -= 2
                rax_32 = 2
            else
                rsi_1 -= 1
                rax_32 = 1
            
            int32_t temp7_1 = rdi
            rdi += rax_32
            
            if (temp7_1 + rax_32 s>= 0)
                break
else
    int32_t r11_1 = *(arg1 + 0x14)
    
    if (arg1[3].d != 0)
        rsi_1 += 1
        arg1[3].d = 0
        rdi -= 1
    
    if (rdi s> 0)
        while (i s< r11_1)
            int64_t i_2 = sx.q(i)
            i += 1
            uint32_t rax_20 = zx.d(*(i_2 + rbp_1))
            i_1 = i
            
            if (rax_20.b s>= 0)
                goto label_142a5694c
            
            int32_t rax_26
            
            if (i == r11_1)
                rdi -= 1
                rax_26 = 1
            else
                int32_t rax_25
                
                if (rax_20 u< 0xe0)
                    if (rax_20 u< 0xc2)
                        rdi -= 1
                        rax_26 = 1
                    else
                        rax_25 = rax_20 & 0x1f
                    label_142a56934:
                        char rdx_6 = *(sx.q(i) + rbp_1) - 0x80
                        
                        if (rdx_6 u> 0x3f)
                            rdi -= 1
                            rax_26 = 1
                        else
                            rax_20 = rax_25 << 6 | zx.d(rdx_6)
                            i += 1
                            i_1 = i
                        label_142a5694c:
                            
                            if (rax_20 s> 0xffff)
                                if (rdi s< 2)
                                    arg1[3].d = rax_20
                                    rsi_1 += 1
                                    break
                                
                                rdi -= 2
                                rax_26 = 2
                            else
                                rdi -= 1
                                rax_26 = 1
                else
                    uint64_t rax_21
                    uint32_t r10_1
                    
                    if (rax_20 u< 0xf0)
                        rax_21 = zx.q(rax_20) & 0xf
                        r10_1 = zx.d(*(sx.q(i) + rbp_1))
                        
                        if (not(test_bit(sx.d((*" 000000000000")[rax_21]), zx.d((r10_1 u>> 5).b))))
                            rdi -= 1
                            rax_26 = 1
                        else
                            r10_1.b &= 0x3f
                        label_142a56907:
                            i += 1
                            rax_25 = rax_21.d << 6 | zx.d(r10_1.b)
                            i_1 = i
                            
                            if (i != r11_1)
                                goto label_142a56934
                            
                            rdi -= 1
                            rax_26 = 1
                    else if (rax_20 - 0xf0 s> 4)
                        rdi -= 1
                        rax_26 = 1
                    else
                        uint32_t rdx_3 = zx.d(*(sx.q(i) + rbp_1))
                        
                        if (not(test_bit(sx.d(*((zx.q(rdx_3) u>> 4) + 0x14363c6e8)), 
                                rax_20 - 0xf0)))
                            rdi -= 1
                            rax_26 = 1
                        else
                            i += 1
                            rax_21 = (zx.q(rdx_3.b) & 0x3f) | zx.q((rax_20 - 0xf0) << 6)
                            i_1 = i
                            
                            if (i == r11_1)
                                rdi -= 1
                                rax_26 = 1
                            else
                                r10_1.b = *(sx.q(i) + rbp_1) - 0x80
                                
                                if (r10_1.b u<= 0x3f)
                                    goto label_142a56907
                                
                                rdi -= 1
                                rax_26 = 1
            
            rsi_1 += rax_26
            
            if (rdi s<= 0)
                break
    
    if (i == r11_1)
        int32_t rax_28 = arg1[1].d
        
        if (rax_28 s< 0)
            if (arg1[2].d s< 0)
                goto label_142a569b2
            
            int32_t rax_29 = rsi_1
            
            if (arg1[3].d != 0)
                rax_29 = rsi_1 + 1
            
            arg1[1].d = rax_29
        else if (arg1[2].d s< 0)
        label_142a569b2:
            
            if (rax_28 s>= 0)
                if (arg1[3].d != 0)
                    rax_28 -= 1
                
                arg1[2].d = rax_28

bool cond:3_1 = arg1[2].d s< 0
*(arg1 + 0xc) = i

if (not(cond:3_1))
    arg1[2].d = rsi_1
    return zx.q(rsi_1)

if (i s> 1)
    return -2

arg1[2].d = i
return zx.q(i)
