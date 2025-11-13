// 函数: sub_142b023c0
// 地址: 0x142b023c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 8)
char* r14 = *(arg1 + 0x10)
int16_t* rsi = *(arg1 + 0x20)
int32_t rdx = 1
int64_t r12 = *(arg1 + 0x18)
void* r15 = *(result + 0x10)
char* arg_18 = r14

if (*(r15 + 0x68) != 0)
    goto label_142b02440

uint32_t rdx_1
uint32_t rbx_1
int32_t r10_1

if (*(result + 0x40) != 1)
label_142b024d0:
    
    while (true)
        if (r14 u>= r12)
            goto label_142b028b7
        
        rdx_1 = 0xffff
        
        if (rsi u>= *(arg1 + 0x28))
            *arg2 = 0xf
            goto label_142b028b7
        
        rbx_1 = zx.d(*r14)
        r14 = &r14[1]
        
        if (rbx_1 == 0xa || rbx_1 == 0xd)
            char rax_5 = *(r15 + 0x5c)
            
            if (rax_5 != 0 && rax_5 != 3)
                *(r15 + 0x5c) = 0
            
            *(r15 + 0x5e) = 0
            *(r15 + 0x60) = 0
        label_142b0255f:
            *(r15 + 0x70) = 0
            result = zx.q(rbx_1 + 0x5f)
            int64_t rcx_2 = sx.q(*(r15 + 0x60))
            r10_1 = sx.d(*(rcx_2 + r15 + 0x5c))
            
            if (result.b u<= 0x3e && *(r15 + 0x6c) == 4)
                result = zx.q(r10_1 - 4)
                
                if (result.d u<= 3)
                    goto label_142b025a6
                
                rdx_1 = rbx_1 + 0xfec0
                
                if (rcx_2.b s>= 2)
                    result = zx.q(*(r15 + 0x61))
                    *(r15 + 0x60) = result.b
                
                goto label_142b02724
            
        label_142b025a6:
            
            if (r10_1 != 0)
                if (r10_1 == 1)
                    if (rbx_1 u<= 0x7f)
                        rdx_1 = rbx_1 + 0x80
                    
                    result = zx.q(*(r15 + 0x61))
                    *(r15 + 0x60) = result.b
                    goto label_142b02724
                
                if (r10_1 == 2)
                    if (rbx_1 u<= 0x7f)
                        rdx_1 = zx.d(*(*(*(r15 + 0x10) + 0x38) + (zx.q(rbx_1.b - 0x80) << 2)))
                    
                    result = zx.q(*(r15 + 0x61))
                    *(r15 + 0x60) = result.b
                    goto label_142b02724
                
                if (r10_1 == 3)
                    if (rbx_1 u<= 0x7f)
                        if (rbx_1 u< 0x5c)
                            goto label_142b02722
                        
                        if (rbx_1 != 0x5c)
                            if (rbx_1 != 0x7e)
                                goto label_142b02722
                            
                            rdx_1 = 0x203e
                            goto label_142b0272c
                        
                        rdx_1 = 0xa5
                    label_142b0272c:
                        int64_t r8_3 = *(arg1 + 0x30)
                        
                        if (r8_3 != 0)
                            int32_t rax_12
                            rax_12.b = rbx_1 u> 0xff
                            result = (rsi - *(arg1 + 0x20)) s>> 1
                            *(r8_3 + (result << 2)) = r14.d - (rax_12 + 1) - *(arg1 + 0x10)
                        
                        *rsi = rdx_1.w
                        rsi = &rsi[1]
                        continue
                else if (r10_1 == 8)
                    result = zx.q(rbx_1 - 0x21)
                    
                    if (result.b u<= 0x3e)
                        rdx_1 = rbx_1 + 0xff40
                        goto label_142b02724
                else
                    if (r14 u>= r12)
                        *(*(arg1 + 8) + 0x41) = rbx_1.b
                        result = *(arg1 + 8)
                        *(result + 0x40) = 1
                        *(arg1 + 0x20) = rsi
                        *(arg1 + 0x10) = r14
                        break
                    
                label_142b025dc:
                    char rcx_8 = *r14
                    int32_t r9_2
                    r9_2.b = rcx_8 - 0x21 u<= 0x5d
                    
                    if (rbx_1.b - 0x21 u<= 0x5d && rcx_8 - 0x21 u<= 0x5d)
                        r14 = &r14[1]
                        uint32_t rdx_5 = rbx_1 << 8 | zx.d(rcx_8)
                        uint8_t arg_8
                        char arg_9
                        
                        if (r10_1 != 4)
                            rbx_1 = rdx_5
                            
                            if (r10_1 == 7)
                                rdx_5 += 0x8080
                            
                            arg_9 = rdx_5.b
                            arg_8 = (rdx_5 u>> 8).b
                        else
                            if ((rbx_1.b & 1) == 0)
                                rcx_8 += 0x7e
                            else
                                rbx_1.b += 1
                                
                                if (rcx_8 u<= 0x5f)
                                    rcx_8 += 0x1f
                                else if (rcx_8 u> 0x7e)
                                    rcx_8 = 0
                                else
                                    rcx_8 += 0x20
                            
                            rbx_1.b u>>= 1
                            
                            if (rbx_1.b u<= 0x2f)
                                rbx_1.b += 0x70
                                arg_9 = rcx_8
                                arg_8 = rbx_1.b
                                rbx_1 = rdx_5
                            else if (rbx_1.b u> 0x3f)
                                arg_9 = rcx_8
                                arg_8 = 0
                                rbx_1 = rdx_5
                            else
                                rbx_1.b -= 0x50
                                arg_9 = rcx_8
                                arg_8 = rbx_1.b
                                rbx_1 = rdx_5
                        result = sub_142afc870(*(r15 + (sx.q(r10_1) << 3)), &arg_8, 2, 0)
                        rdx_1 = result.d
                        goto label_142b02724
                    
                    if (r9_2 == 0 && (rcx_8 u>= 0x20 || (1 << rcx_8 & 0x800c000) == 0))
                        r14 = &r14[1]
                        rbx_1 = (rbx_1 | 0x100) << 8 | zx.d(rcx_8)
            else if (rbx_1 u<= 0x7f)
            label_142b02722:
                rdx_1 = rbx_1
            label_142b02724:
                
                if (rdx_1 u< 0xfffe)
                    goto label_142b0272c
                
                if (rdx_1 u> 0xffff)
                    result.w = ((rdx_1 - 0x10000) u>> 0xa).w - 0x2800
                    *rsi = result.w
                    int64_t r8_4 = *(arg1 + 0x30)
                    
                    if (r8_4 != 0)
                        int32_t rax_17
                        rax_17.b = rbx_1 u> 0xff
                        result = (rsi - *(arg1 + 0x20)) s>> 1
                        *(r8_4 + (result << 2)) = r14.d - (rax_17 + 1) - *(arg1 + 0x10)
                    
                    rsi = &rsi[1]
                    int32_t rdx_8
                    rdx_8.w = (rdx_1 - 0x10000).w & 0x3ff
                    
                    if (rsi u>= *(arg1 + 0x28))
                        void* rcx_21 = *(arg1 + 8)
                        rdx_8.w -= 0x2400
                        *(rcx_21 + (sx.q(*(rcx_21 + 0x5d)) << 1) + 0x90) = rdx_8.w
                        result = *(arg1 + 8)
                        *(result + 0x5d) += 1
                        continue
                    else
                        rdx_8.w -= 0x2400
                        *rsi = rdx_8.w
                        int64_t rdx_9 = *(arg1 + 0x30)
                        
                        if (rdx_9 != 0)
                            int32_t rax_21
                            rax_21.b = rbx_1 u> 0xff
                            result = (rsi - *(arg1 + 0x20)) s>> 1
                            *(rdx_9 + (result << 2)) = r14.d - (rax_21 + 1) - *(arg1 + 0x10)
                        
                        rsi = &rsi[1]
                        continue
        else
            result = zx.q(rbx_1 - 0xe)
            
            if (rbx_1 == 0xe)
                if (*(r15 + 0x6c) == 3)
                    *(r15 + 0x5d) = 8
                    *(r15 + 0x60) = 1
                    continue
                
                *(r15 + 0x70) = 0
            else
                int32_t temp3_1 = result.d
                result = zx.q(result.d - 1)
                
                if (temp3_1 != 1)
                    if (result.d != 0xc)
                        goto label_142b0255f
                    
                    r14 -= 1
                    rdx = (result - 0xb).d
                    arg_18 = r14
                label_142b02440:
                    void* rcx = *(arg1 + 8)
                    char rbx_2 = r14.b
                    char rdi_1 = *(rcx + 0x40)
                    result = sub_142b04a80(rcx, &arg_18, r12, rdx, arg2)
                    r14 = arg_18
                    
                    if (*(r15 + 0x6c) != 0 || *(r15 + 0x68) != 0)
                    label_142b024b1:
                        
                        if (*arg2 s<= 0)
                            if (*(r15 + 0x68) != 0)
                                continue
                            else
                                *(r15 + 0x70) = 1
                                continue
                    else if (*arg2 s<= 0)
                        if (*(r15 + 0x70) != 0)
                            *arg2 = 0x12
                            *(*(arg1 + 8) + 0x11c) = 2
                            result = *(arg1 + 8)
                            *(result + 0x40) = r14.b - rbx_2 + rdi_1
                        
                        goto label_142b024b1
                    
                    *(arg1 + 0x20) = rsi
                    *(arg1 + 0x10) = r14
                    *(r15 + 0x70) = 0
                    break
                
                if (*(r15 + 0x6c) == 3)
                    *(r15 + 0x60) = 0
                    continue
                
                *(r15 + 0x70) = 0
        
        void* rcx_22 = *(arg1 + 8)
        
        if (rbx_1 u<= 0xff)
            *(rcx_22 + 0x41) = rbx_1.b
            *(rcx_22 + 0x40) = 1
        else
            *(rcx_22 + 0x42) = rbx_1.b
            *(rcx_22 + 0x41) = (rbx_1 u>> 8).b
            *(rcx_22 + 0x40) = 2
        
        result = 0xc
        
        if (rdx_1 == 0xfffe)
            result = 0xa
        
        *arg2 = result.d
        *(arg1 + 0x20) = rsi
        *(arg1 + 0x10) = r14
        break
else
    if (r14 u< r12)
        if (rsi u>= *(arg1 + 0x28))
            goto label_142b024d0
        
        rbx_1 = zx.d(*(result + 0x41))
        rdx_1 = 0xffff
        *(result + 0x40) = 0
        r10_1 = sx.d(*(sx.q(*(r15 + 0x60)) + r15 + 0x5c))
        goto label_142b025dc
    
label_142b028b7:
    *(arg1 + 0x20) = rsi
    *(arg1 + 0x10) = r14
return result
