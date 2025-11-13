// 函数: sub_142b1a300
// 地址: 0x142b1a300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_1 = arg3
uint32_t r10 = zx.d(*(arg1 + 0xa))
uint64_t result_2 = arg3
int16_t* rdi = arg2
uint32_t arg_8 = r10
int16_t* r12 = arg2
int32_t* r15

if (arg3 != 0)
    r15 = arg7
    goto label_142b1a3f4

int64_t* rcx = nullptr

if (arg5 != 0)
    rcx = arg6

int16_t* rbx_1
uint32_t r8

do
    r8 = zx.d(*arg2)
    rbx_1 = arg2
    arg2 = &arg2[1]
    
    if (r8 u>= r10)
        break
while (r8.w != 0)
r15 = arg7

if (rbx_1 != rdi && rcx != 0)
    sub_142b1a0e0(rcx, rdi, rbx_1, r15)

rdi = rbx_1
uint64_t result

if (*r15 s<= 0)
    result = sub_142a8c220(rbx_1, 0)
    result_1 = result
    result_2 = result
    
    if (r12 != rbx_1)
        result = sub_142b1e520(arg1, zx.d(rbx_1[-1]), arg4)
        
        if (result.b != 0)
            r12 = rbx_1
            goto label_142b1a3de
        
        sub_142b1fb50(arg6, 1)
        rdi = &rbx_1[-1]
        r12 = &rbx_1[-1]
        goto label_142b1a3de
    
    while (true)
        r10 = arg_8
    label_142b1a3f4:
        int32_t* r8_40
        int64_t result_3
        
        if (rdi == result_2)
        label_142b1aedd:
            
            if (r12 == result_2 || arg5 == 0)
                goto label_142b1af4c
            
            result_3 = (result_2 - r12) s>> 1
            result_1 = result_3
            
            if (arg6[5].d s>= result_3.d)
                goto label_142b1af24
            
            r8_40 = r15
        label_142b1af09:
            
            if (sub_142b1fbc0(arg6, result_3.d, r8_40).b == 0)
                goto label_142b1af4c
            
            result_3 = result_1
        label_142b1af24:
            sub_142a8bca0(arg6[4], r12, result_3.d)
            int32_t r12_2 = result_1.d
            *(arg6 + 0x2c) = 0
            arg6[4] += sx.q(r12_2) * 2
            arg6[5].d -= r12_2
            arg6[3] = arg6[4]
        label_142b1af4c:
            result.b = 1
            return result
        
        uint32_t rbx_2 = zx.d(*rdi)
        int64_t* r8_3
        uint16_t r14_1
        
        if (rbx_2 u>= r10)
            r8_3 = *(arg1 + 0x20)
            r14_1 =
                *(r8_3[1] + (zx.q(zx.d(*(*r8_3 + (zx.q(rbx_2) u>> 6 << 1))) + (rbx_2 & 0x3f)) << 1))
        
        if (rbx_2 u< r10 || r14_1 u< *(arg1 + 0x12))
            rdi = &rdi[1]
            goto label_142b1a3f4
        
        int16_t* arg_10 = rdi
        int16_t* rsi_1 = rdi
        rdi = &rdi[1]
        
        if ((rbx_2 & 0xfffffc00) == 0xd800)
            if (rdi == result_2)
                goto label_142b1aedd
            
            uint32_t rcx_5 = zx.d(*rdi)
            
            if ((rcx_5 & 0xfffffc00) != 0xdc00)
                goto label_142b1a3f4
            
            rdi = &rdi[1]
            rbx_2 = ((rbx_2 - 0xd7f7) << 0xa) + rcx_5
            int32_t rax_6
            
            if (rbx_2 s< r8_3[3].d)
                rax_6 = sub_142b6a760(r8_3, rbx_2)
                result_2 = result_1
                r10 = arg_8
            else
                rax_6 = *(r8_3 + 0x14) - 2
            
            r14_1 = *(*(*(arg1 + 0x20) + 8) + (sx.q(rax_6) << 1))
            
            if (r14_1 u< *(arg1 + 0x12))
                goto label_142b1a3f4
        
        if (r14_1 u< *(arg1 + 0x1e))
            if (arg5 == 0)
                break
            
            if (r14_1 u< *(arg1 + 0x1a))
                int16_t* rdx_13
                int16_t* r8_10
                
                if (r14_1 u>= *(arg1 + 0x14))
                    if (r14_1 u< *(arg1 + 0x18))
                        goto label_142b1a7b0
                    
                    result = sub_142b1e750(arg1, rdi, result_2)
                    
                    if (result.b == 0)
                        result = sub_142b1e420(arg1, r12, rsi_1, arg4)
                        
                        if (result.b == 0)
                            goto label_142b1a7b0
                    
                    if (r12 == rsi_1)
                    label_142b1a6e9:
                        r12 = rdi
                    label_142b1a3de:
                        result_2 = result_1
                        continue
                        continue
                    else
                        r8_10 = rsi_1
                        rdx_13 = r12
                else
                    if ((r14_1.b & 1) == 0)
                    label_142b1a68d:
                        
                        if (sub_142b1e750(arg1, rdi, result_2) == 0)
                            goto label_142b1a7b0
                    else if (arg4 != 0 && r14_1 != 1)
                        int32_t rcx_16
                        rcx_16.b = *(*(arg1 + 0x30) + (zx.q(r14_1) u>> 1 << 1)) u<= 0x1ff
                        
                        if (rcx_16 == 0)
                            goto label_142b1a68d
                    
                    if (r12 != rsi_1 && sub_142b1a0e0(arg6, r12, rsi_1, r15).b == 0)
                        goto label_142b1af4c
                    
                    int64_t rax_15 = *(arg1 + 0x30)
                    uint64_t rcx_20 = zx.q(r14_1) u>> 1
                    rdx_13 = rax_15 + (rcx_20 << 1) + 2
                    r8_10 = &rdx_13[zx.q(*(rax_15 + (rcx_20 << 1))) & 0x1f]
                
                result = sub_142b1a0e0(arg6, rdx_13, r8_10, r15)
                
                if (result.b == 0)
                    goto label_142b1af4c
                
                goto label_142b1a6e9
            
            if ((r14_1.b & 1) == 0)
            label_142b1a545:
                
                if (sub_142b1e750(arg1, rdi, result_2) == 0)
                    goto label_142b1a7b0
            else if (arg4 != 0 && r14_1 != 1)
                int32_t rcx_9
                rcx_9.b = (r14_1.b & 6) u<= 2
                
                if (rcx_9 == 0)
                    goto label_142b1a545
            
            if (r12 != rsi_1)
                result = sub_142b1a0e0(arg6, r12, rsi_1, r15)
            
            if (r12 != rsi_1 && result.b == 0)
                goto label_142b1af4c
            
            uint32_t rsi_5 = (zx.d(r14_1) u>> 3) - zx.d(*(arg1 + 0x1c)) + rbx_2
            
            if (rsi_5 s> 0xffff)
                if (arg6[5].d s>= 2)
                label_142b1a5fd:
                    *arg6[4] = (rsi_5 s>> 0xa).w - 0x2840
                    rsi_5.w &= 0x3ff
                    rsi_5.w |= 0xdc00
                    *(arg6[4] + 2) = rsi_5.w
                    arg6[4] += 4
                    arg6[5].d -= 2
                label_142b1a622:
                    r12 = rdi
                    result_2 = result_1
                    r10 = arg_8
                    arg6[3] = arg6[4]
                    *(arg6 + 0x2c) = 0
                    goto label_142b1a3f4
                
                result = sub_142b1fbc0(arg6, 2, r15)
                
                if (result.b != 0)
                    goto label_142b1a5fd
            else
                if (arg6[5].d != 0)
                label_142b1a5b0:
                    *arg6[4] = rsi_5.w
                    arg6[4] += 2
                    arg6[5].d -= 1
                    goto label_142b1a622
                
                result = sub_142b1fbc0(arg6, 1, r15)
                
                if (result.b != 0)
                    goto label_142b1a5b0
            
            goto label_142b1af4c
        
        char r15_2
        
        if (r14_1 != 0xfe00)
            r15_2 = arg4
            
            if (r14_1 u<= 0xfe00)
                goto label_142b1a7b9
            
            uint16_t rbx_10 = r14_1 u>> 1
            
            if (r15_2 != 0)
                result = sub_142b1e080(arg1, r12, rsi_1)
            
            if (r15_2 == 0 || result.b u<= rbx_10.b)
                result_2 = result_1
            label_142b1a9a4:
                
                if (rdi == result_2)
                    if (arg5 == 0 || r12 == result_2)
                        goto label_142b1af4c
                    
                    result_3 = (result_2 - r12) s>> 1
                    result_1 = result_3
                    
                    if (arg6[5].d s>= result_3.d)
                        goto label_142b1af24
                    
                    r8_40 = arg7
                    goto label_142b1af09
                
                uint32_t r8_22 = zx.d(*rdi)
                void* rsi_7 = &rdi[1]
                char r15_3 = rbx_10.b
                int32_t rax_33
                
                if ((r8_22 & 0xfffff800) == 0xd800)
                    uint32_t rcx_35
                    
                    if (not(test_bit(r8_22, 0xa)) && rsi_7 != result_2)
                        rcx_35 = zx.d(*rsi_7)
                    
                    if (test_bit(r8_22, 0xa) || rsi_7 == result_2
                            || (rcx_35 & 0xfffffc00) != 0xdc00)
                        rax_33 = *(*(arg1 + 0x20) + 0x14) - 1
                    else
                        rsi_7 += 2
                        int32_t rdx_32 = ((r8_22 - 0xd7f7) << 0xa) + rcx_35
                        int64_t* rcx_36 = *(arg1 + 0x20)
                        
                        if (rdx_32 s< rcx_36[3].d)
                            rax_33 = sub_142b6a760(rcx_36, rdx_32)
                            result_2 = result_1
                        else
                            rax_33 = *(rcx_36 + 0x14) - 2
                else
                    rax_33 = zx.d(*(**(arg1 + 0x20) + (zx.q(r8_22) u>> 6 << 1))) + (r8_22 & 0x3f)
                
                int16_t r8_24 = *(*(*(arg1 + 0x20) + 8) + (sx.q(rax_33) << 1))
                
                if (r8_24 u>= 0xfe02)
                    result.w = r8_24 u>> 1
                    rbx_10 = zx.w(result.b)
                    
                    if (r15_3 u<= result.b)
                        rdi = rsi_7
                        goto label_142b1a9a4
                    
                    if (arg5 == 0)
                        break
                
                if (r8_24 u>= *(arg1 + 0x16))
                    if (*(arg1 + 0x1a) u<= r8_24 && r8_24 u< *(arg1 + 0x1e))
                        goto label_142b1aa9c
                    
                    goto label_142b1a7a8
                
            label_142b1aa9c:
                r15 = arg7
                r10 = arg_8
                
                if (r8_24 u>= *(arg1 + 0x12))
                    goto label_142b1a3f4
                
                rdi = rsi_7
                goto label_142b1a3f4
            
            if (arg5 == 0)
                break
        else
            if (r12 == rsi_1)
            label_142b1ab6e:
                
                if (arg5 != 0 && r12 != rsi_1 && sub_142b1a0e0(arg6, r12, rsi_1, arg7).b == 0)
                    goto label_142b1af4c
                
                int32_t* r9_8 = arg7
                int64_t r15_6 = (arg6[4] - arg6[2]) s>> 1
                
                if (*r9_8 s<= 0 && arg_10 u< rdi)
                label_142b1abc1:
                    uint32_t rbx_13 = zx.d(*rsi_1)
                    rsi_1 = &rsi_1[1]
                    int32_t r8_27
                    
                    if ((rbx_13 & 0xfffff800) == 0xd800)
                        uint32_t rcx_44
                        
                        if (not(test_bit(rbx_13, 0xa)) && rsi_1 != rdi)
                            rcx_44 = zx.d(*rsi_1)
                        
                        if (test_bit(rbx_13, 0xa) || rsi_1 == rdi
                                || (rcx_44 & 0xfffffc00) != 0xdc00)
                            r8_27 = *(*(arg1 + 0x20) + 0x14) - 1
                        else
                            rsi_1 = &rsi_1[1]
                            rbx_13 = ((rbx_13 - 0xd7f7) << 0xa) + rcx_44
                            int64_t* rcx_45 = *(arg1 + 0x20)
                            
                            if (rbx_13 s< rcx_45[3].d)
                                r8_27 = sub_142b6a760(rcx_45, rbx_13)
                            else
                                r8_27 = *(rcx_45 + 0x14) - 2
                    else
                        r8_27 =
                            zx.d(*(**(arg1 + 0x20) + (zx.q(rbx_13) u>> 6 << 1))) + (rbx_13 & 0x3f)
                    
                    if (sub_142b1c340(arg1, rbx_13, *(*(*(arg1 + 0x20) + 8) + (sx.q(r8_27) << 1)), 
                            arg6, r9_8) != 0 && rsi_1 u< rdi)
                        goto label_142b1abc1
                    
                    r9_8 = arg7
                
                int16_t* r14_2 = rdi
                char r8_37
                
                if (*r9_8 s> 0)
                    rdi = nullptr
                    r8_37 = arg4
                else if (rdi u>= result_1)
                    rdi = r14_2
                    r8_37 = arg4
                else
                label_142b1aca4:
                    int16_t rax_59 = *r14_2
                    rdi = r14_2
                    
                    if (rax_59 u< *(arg1 + 0xa))
                        r8_37 = arg4
                    else
                        uint32_t rsi_8 = zx.d(rax_59)
                        r14_2 = &r14_2[1]
                        int32_t r8_33
                        
                        if ((rsi_8 & 0xfffff800) == 0xd800)
                            uint32_t rcx_49
                            
                            if (not(test_bit(rsi_8, 0xa)) && r14_2 != result_1)
                                rcx_49 = zx.d(*r14_2)
                            
                            if (test_bit(rsi_8, 0xa) || r14_2 == result_1
                                    || (rcx_49 & 0xfffffc00) != 0xdc00)
                                r8_33 = *(*(arg1 + 0x20) + 0x14) - 1
                            else
                                r14_2 = &r14_2[1]
                                rsi_8 = ((rsi_8 - 0xd7f7) << 0xa) + rcx_49
                                int64_t* rcx_50 = *(arg1 + 0x20)
                                
                                if (rsi_8 s< rcx_50[3].d)
                                    r9_8 = arg7
                                    r8_33 = sub_142b6a760(rcx_50, rsi_8)
                                else
                                    r8_33 = *(rcx_50 + 0x14) - 2
                        else
                            r8_33 =
                                zx.d(*(**(arg1 + 0x20) + (zx.q(rsi_8) u>> 6 << 1))) + (rsi_8 & 0x3f)
                        
                        uint16_t rbx_14 = *(*(*(arg1 + 0x20) + 8) + (sx.q(r8_33) << 1))
                        
                        if (rbx_14 u< *(arg1 + 0x16)
                                || (*(arg1 + 0x1a) u<= rbx_14 && rbx_14 u< *(arg1 + 0x1e)))
                            r8_37 = arg4
                        else if (sub_142b1c340(arg1, rsi_8, rbx_14, arg6, r9_8) == 0)
                            rdi = nullptr
                            r8_37 = arg4
                        else if ((rbx_14.b & 1) == 0)
                        label_142b1add0:
                            
                            if (r14_2 u< result_1)
                                r9_8 = arg7
                                goto label_142b1aca4
                            
                            rdi = r14_2
                            r8_37 = arg4
                        else
                            r8_37 = arg4
                            
                            if (r8_37 == 0 || rbx_14 == 1)
                                rdi = r14_2
                            else
                                bool cond:4_1
                                
                                if (rbx_14 u< *(arg1 + 0x1a))
                                    cond:4_1 =
                                        *(*(arg1 + 0x30) + (zx.q(rbx_14) u>> 1 << 1)) u<= 0x1ff
                                else
                                    rbx_14.b &= 6
                                    cond:4_1 = rbx_14.b u<= 2
                                
                                int32_t rdx_50
                                rdx_50.b = cond:4_1
                                
                                if (rdx_50 == 0)
                                    goto label_142b1add0
                                
                                rdi = r14_2
                
                result = arg7
                
                if (*result s> 0)
                    goto label_142b1af4c
                
                int64_t rbx_17 = (rdi - arg_10) s>> 1
                
                if (rbx_17 s> 0x7fffffff)
                    *result = 8
                    goto label_142b1af4c
                
                sub_142b1f620(arg1, arg6, r15_6.d, r8_37)
                
                if (arg5 == 0)
                    int16_t* rcx_56 = arg6[2]
                    result = (arg6[4] - rcx_56) s>> 1
                    
                    if (result.d != rbx_17.d)
                        break
                    
                    if (sub_142a8bc60(rcx_56, arg_10, result.d).d != 0)
                        break
                    
                    int64_t rax_74 = arg6[2]
                    arg6[4] = rax_74
                    arg6[3] = rax_74
                    void* rax_75 = arg6[1]
                    
                    if ((*(rax_75 + 8) & 2) == 0)
                        result = zx.q(*(rax_75 + 0x10))
                    else
                        result = 0x1b
                    
                    arg6[5].d = result.d
                    *(arg6 + 0x2c) = 0
                
                r15 = arg7
                r12 = rdi
                goto label_142b1a3de
            
            int16_t rsi_6 = rsi_1[-1]
            int16_t rbx_8
            
            if (rbx_2 s< 0x11a7)
                if (rsi_6 - 0x1100 u>= 0x13)
                    goto label_142b1a7a8
                
                if (arg5 == 0)
                    break
                
                int32_t rdx_17
                
                if (rdi != result_2)
                    rdx_17 = zx.d(*rdi) - 0x11a7
                
                if (rdi == result_2 || rdx_17 - 1 u> 0x1a)
                    if (sub_142b1e750(arg1, rdi, result_2) == 0)
                        goto label_142b1a7a8
                    
                    rdx_17 = 0
                else
                    rdi = &rdi[1]
                    
                    if (rdx_17 s< 0)
                        goto label_142b1a7a8
                
                rbx_8 = ((rsi_6 - 0x1100) * 0x15 + rbx_2.w) * 0x1c - 0x3a9c + rdx_17.w
                
                if (r12 != &rsi_1[-1] && sub_142b1a0e0(arg6, r12, &rsi_1[-1], arg7).b == 0)
                    goto label_142b1af4c
                
                if (arg6[5].d != 0)
                    goto label_142b1a890
                
                r15 = arg7
                
                if (sub_142b1fbc0(arg6, 1, r15).b == 0)
                    goto label_142b1af4c
                
                goto label_142b1a89c
            
            uint32_t r8_18 = zx.d(rsi_6)
            
            if (r8_18 - 0xac00 u<= 0x2ba3)
                if (r8_18 - 0xac00 != (r8_18 - 0xac00) s/ 0x1c * 0x1c)
                    goto label_142b1a7a8
                
                if (arg5 == 0)
                    break
                
                rbx_8 = rbx_2.w - 0x11a7 + r8_18.w
                
                if (r12 != &rsi_1[-1] && sub_142b1a0e0(arg6, r12, &rsi_1[-1], arg7).b == 0)
                    goto label_142b1af4c
                
                if (arg6[5].d == 0)
                    r15 = arg7
                    
                    if (sub_142b1fbc0(arg6, 1, r15).b == 0)
                        goto label_142b1af4c
                    
                    goto label_142b1a89c
                
            label_142b1a890:
                r15 = arg7
            label_142b1a89c:
                r12 = rdi
                *arg6[4] = rbx_8
                arg6[4] += 2
                result = arg6[4]
                arg6[5].d -= 1
                arg6[3] = result
                *(arg6 + 0x2c) = 0
                goto label_142b1a3de
            
        label_142b1a7a8:
            rsi_1 = arg_10
        label_142b1a7b0:
            r15_2 = arg4
        
    label_142b1a7b9:
        
        if (r12 == rsi_1)
            goto label_142b1ab6e
        
        if (r14_1 u>= *(arg1 + 0x16) && (*(arg1 + 0x1a) u> r14_1 || r14_1 u>= *(arg1 + 0x1e)))
            uint32_t r8_13 = zx.d(rsi_1[-1])
            void* rbx_5 = &rsi_1[-1]
            int32_t rax_23
            
            if ((r8_13 & 0xfffff800) == 0xd800)
                uint32_t rdx_34
                
                if (test_bit(r8_13, 0xa) && rbx_5 != r12)
                    rdx_34 = zx.d(*(rbx_5 - 2))
                
                if (not(test_bit(r8_13, 0xa)) || rbx_5 == r12 || (rdx_34 & 0xfffffc00) != 0xd800)
                    rax_23 = *(*(arg1 + 0x20) + 0x14) - 1
                else
                    int64_t* rcx_38 = *(arg1 + 0x20)
                    rbx_5 -= 2
                    int32_t rdx_37 = ((rdx_34 - 0xd7f7) << 0xa) + r8_13
                    
                    if (rdx_37 s< rcx_38[3].d)
                        rax_23 = sub_142b6a760(rcx_38, rdx_37)
                    else
                        rax_23 = *(rcx_38 + 0x14) - 2
            else
                rax_23 = zx.d(*(**(arg1 + 0x20) + (zx.q(r8_13) u>> 6 << 1))) + (r8_13 & 0x3f)
            
            int16_t rax_46 = *(*(*(arg1 + 0x20) + 8) + (sx.q(rax_23) << 1))
            
            if ((rax_46.b & 1) == 0)
                rsi_1 = rbx_5
                arg_10 = rbx_5
            else if (r15_2 != 0 && rax_46 != 1)
                bool cond:3_1
                
                if (rax_46 u< *(arg1 + 0x1a))
                    cond:3_1 = *(*(arg1 + 0x30) + (zx.q(rax_46) u>> 1 << 1)) u<= 0x1ff
                else
                    rax_46.b &= 6
                    cond:3_1 = rax_46.b u<= 2
                
                int32_t rdx_39
                rdx_39.b = cond:3_1
                
                if (rdx_39 == 0)
                    rsi_1 = rbx_5
                    arg_10 = rbx_5
        
        goto label_142b1ab6e

result.b = 0
return result
