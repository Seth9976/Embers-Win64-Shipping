// 函数: sub_142af8080
// 地址: 0x142af8080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *(arg1 + 8)
uint64_t r9 = arg2
void* r10 = arg1

if (*(r13 + 0x11a) s<= 0)
    goto label_142af80dc

int32_t* result = sub_142b6c310(r13, arg1, 0xffffffff, r9)
r9 = arg2

if (*r9 s<= 0 && *(r13 + 0x11a) s>= 0)
    r10 = arg1
label_142af80dc:
    void* rax_1 = *(r13 + 0x30)
    
    if (*(rax_1 + 0x30) == 1)
        if ((*(rax_1 + 0xfd) & 1) != 0)
            return sub_142afbee0(r10, r9)
        
        return sub_142afbb60(r10, r9)
    
    char* r8_1 = *(r10 + 0x10)
    int64_t r11_1 = *(r10 + 0x18)
    int64_t rdx_2 = *(r10 + 0x28)
    int16_t* arg_18 = *(r10 + 0x20)
    int32_t* result_1 = *(r10 + 0x30)
    void* var_68 = r8_1
    void* rax_6 = *(r13 + 0x30)
    int64_t var_40_1 = arg3
    int64_t var_50_1 = r11_1
    int64_t var_60_1 = rdx_2
    int64_t r12_1
    
    if ((*(r13 + 0x38) & 0x10) == 0)
        r12_1 = *(rax_6 + 0x38)
    else
        r12_1 = *(rax_6 + 0x40)
    
    uint8_t rdi_1 = *(r13 + 0x4c)
    int64_t r10_1 = *(rax_6 + 0x48)
    int32_t rbx_1 = *(r13 + 0x48)
    char i = *(r13 + 0x40)
    int64_t var_58_1 = r10_1
    
    if (rdi_1 == 0)
        rdi_1 = *(rax_6 + 0x31)
    
    int32_t r15 = sbb.d(arg3.d, arg3.d, i != 0)
    int32_t r14_1 = 0
    
    if (r8_1 u< r11_1)
        while (true)
            if (arg_18 u< rdx_2)
                int32_t rax_9
                
                if (i != 0)
                    uint64_t rcx_33 = zx.q(*r8_1)
                    *(sx.q(i) + r13 + 0x41) = rcx_33.b
                    rax_9 = *(r12_1 + (((zx.q(rdi_1) << 8) + rcx_33) << 2))
                label_142af843b:
                    i += 1
                    r8_1 = var_68 + 1
                    r14_1 += 1
                    var_68 = r8_1
                    
                    if (rax_9 s< 0)
                        *(r13 + 0x4c) = zx.d(rdi_1)
                        uint8_t rdx_10 = (rax_9 u>> 0x14).b & 0xf
                        rdi_1 = (rax_9 u>> 0x18).b & 0x7f
                        int16_t rcx_38
                        
                        if (rdx_10 == 4)
                            uint64_t rbx_4 = zx.q(rbx_1 + zx.d(rax_9.w))
                            rcx_38 = *(var_58_1 + (rbx_4 << 1))
                            
                            if (rcx_38 u< 0xfffe)
                                goto label_142af84a9
                            
                            if (rcx_38 != 0xfffe)
                                goto label_142af8631
                            
                            int32_t rax_16 = sub_142afb4b0(*(r13 + 0x30) + 0x30, rbx_4.d)
                            
                            if (rax_16 != 0xfffe)
                                *arg_18 = rax_16.w
                                arg_18 = &arg_18[1]
                                int32_t* result_3 = result_1
                                
                                if (result_3 != 0)
                                    *result_3 = r15
                                    result_1 = &result_1[1]
                                
                                i = 0
                            
                            goto label_142af8515
                        
                        if (rdx_10 == 0)
                            *arg_18 = rax_9.w
                        label_142af84ac:
                            arg_18 = &arg_18[1]
                            int32_t* result_2 = result_1
                            
                            if (result_2 != 0)
                                *result_2 = r15
                                result_1 = &result_1[1]
                            
                            goto label_142af84c2
                        
                        int64_t r10_4
                        
                        if (rdx_10 != 5)
                            if (((rdx_10 - 1) & 0xfd) == 0)
                                int32_t rax_21 = rax_9 & 0xfffff
                                *arg_18 = (rax_21 s>> 0xa).w | 0xd800
                                int32_t* result_9 = result_1
                                int16_t* rcx_49 = &arg_18[1]
                                arg_18 = rcx_49
                                
                                if (result_9 != 0)
                                    *result_9 = r15
                                    result_1 = &result_1[1]
                                    rcx_49 = arg_18
                                
                                r10_4 = var_60_1
                                rax_21.w &= 0x3ff
                                i = 0
                                rax_21.w |= 0xdc00
                                
                                if (rcx_49 u>= r10_4)
                                    *(r13 + 0x90) = rax_21.w
                                label_142af8856:
                                    rbx_1 = 0
                                    *(r13 + 0x5d) = 1
                                    *arg2 = 0xf
                                    break
                                
                                *rcx_49 = rax_21.w
                                arg_18 = &arg_18[1]
                                int32_t* result_6 = result_1
                                
                                if (result_6 != 0)
                                    *result_6 = r15
                                    result_1 = &result_1[1]
                                
                                goto label_142af86f8
                            
                            if (rdx_10 != 8)
                                if (rdx_10 == 2)
                                    *arg_18 = rax_9.w
                                    goto label_142af84ac
                                
                                if (rdx_10 == 6)
                                label_142af8515:
                                    r10_4 = var_60_1
                                label_142af86f8:
                                    r9 = arg2
                                    goto label_142af86fc
                                
                                r9 = arg2
                                
                                if (rdx_10 != 7)
                                    r10_4 = var_60_1
                                    i = 0
                                else
                                    *r9 = 0xc
                                    r10_4 = var_60_1
                                
                                goto label_142af86fc
                            
                            if (*(*(r13 + 0x30) + 0x31) == 0)
                            label_142af84c2:
                                i = 0
                            label_142af84c5:
                                r8_1 = var_68
                                rbx_1 = 0
                                r9 = arg2
                                r15 = r14_1
                            else
                                rdi_1 = *(r13 + 0x4c)
                            label_142af8631:
                                r9 = arg2
                                r10_4 = var_60_1
                                *r9 = 0xc
                            label_142af86fc:
                                rbx_1 = 0
                                
                                if (i != 0)
                                    if (*r9 s> 0)
                                        if (i s> 1)
                                            r9.b = 1
                                            char r10_5 = *(*(r13 + 0x30) + 0x31)
                                            
                                            if (i s> 1)
                                                void* r11_2 = r13 + 0x41
                                                uint64_t r8_13 = zx.q(rdi_1) << 8
                                                
                                                do
                                                    int32_t rax_34 = *(r12_1 + ((
                                                        zx.q(*(sx.q(r9.b) + r11_2)) + r8_13) << 2))
                                                    uint8_t rax_36
                                                    
                                                    if (rax_34 s< 0)
                                                        rax_36 = (rax_34 u>> 0x14).b & 0xf
                                                        
                                                        if (rax_36 != 8 || r10_5 == 0)
                                                            rax_36 = rax_36 != 7
                                                            goto label_142af88d7
                                                    else
                                                        rax_36, r8_13, r9, r10_5, r11_2 =
                                                            sub_142afae10(r12_1, 
                                                            (rax_34 u>> 0x18).b)
                                                    label_142af88d7:
                                                        
                                                        if (rax_36 != 0)
                                                            if (r9.b s< i)
                                                                void* rdx_22 = var_68
                                                                int32_t r8_14 = sx.d(i - r9.b)
                                                                i = r9.b
                                                                int32_t rcx_61 =
                                                                    rdx_22.d - *(arg1 + 0x10)
                                                                
                                                                if (r8_14 s> rcx_61)
                                                                    rcx_61.b -= r8_14.b
                                                                    *(r13 + 0x11a) = rcx_61.b
                                                                    memcpy(r13 + 0xfa, sx.q(r9.b) + r11_2, 
                                                                        neg.d(sx.d(rcx_61.b)))
                                                                    var_68 = *(arg1 + 0x10)
                                                                else
                                                                    var_68 = rdx_22 - sx.q(r8_14.b)
                                                            
                                                            break
                                                    r9.b += 1
                                                while (r9.b s< i)
                                        
                                        break
                                    
                                    r8_1 = var_68
                                    char rcx_50 = *(arg1 + 2)
                                    *(arg1 + 0x10) = r8_1
                                    void* rdx_16 = *(*(r13 + 0x30) + 0x120)
                                    char rax_24
                                    
                                    if (rdx_16 != 0)
                                        rax_24 = sub_142b6ca00(r13, rdx_16, sx.d(i), &var_68, 
                                            r11_1.d, &arg_18, r10_4, &result_1, r15, rcx_50, r9)
                                        r8_1 = var_68
                                        r9 = arg2
                                    
                                    if (rdx_16 != 0 && rax_24 != 0)
                                        i = 0
                                    else if (i != 4 || (*(r13 + 0x38) & 0x8000) == 0)
                                    label_142af87da:
                                        *r9 = 0xa
                                    else
                                        uint32_t i_1 = zx.d(*(r13 + 0x44)) + ((zx.d(*(r13 + 0x42))
                                            + ((zx.q(*(r13 + 0x41)) * 5).d << 1)) * 0x7e
                                            + zx.d(*(r13 + 0x43))) * 0xa
                                        int32_t rcx_55 = 0
                                        void* const rax_29 = &data_143663ee0
                                        
                                        while (*(rax_29 + 8) u> i_1 || i_1 u> *(rax_29 + 0xc))
                                            rax_29 += 0x10
                                            rcx_55 += 1
                                            
                                            if (rcx_55 s>= 0xe)
                                                goto label_142af87da
                                        
                                        *r9 = 0
                                        int64_t* var_a0
                                        var_a0.d = r15
                                        sub_142b6b650(r13, i_1 - *(rax_29 + 8) + *rax_29, &arg_18, 
                                            var_60_1, &result_1, var_a0.d, r9)
                                        r8_1 = var_68
                                        i = 0
                                        r9 = arg2
                                    
                                    r14_1 = r14_1 - *(arg1 + 0x10) + r8_1.d
                                    r15 = r14_1
                                    
                                    if (*r9 s> 0)
                                        break
                                    
                                    r11_1 = var_50_1
                                else
                                    r8_1 = var_68
                                    r15 = r14_1
                                    r9 = arg2
                        else
                            uint64_t rbx_5 = zx.q(rbx_1 + zx.d(rax_9.w))
                            rcx_38 = *(var_58_1 + (rbx_5 << 1))
                            uint64_t rbx_6 = zx.q(rbx_5.d + 1)
                            
                            if (rcx_38 u< 0xd800)
                                goto label_142af84a9
                            
                            if (rcx_38 u> 0xdfff)
                                if ((rcx_38 & 0xfffe) == 0xe000)
                                    rcx_38 = *(var_58_1 + (rbx_6 << 1))
                                label_142af84a9:
                                    *arg_18 = rcx_38
                                    goto label_142af84ac
                                
                                if (rcx_38 != 0xffff)
                                    goto label_142af8515
                                
                                r10_4 = var_60_1
                                *arg2 = 0xc
                                goto label_142af86f8
                            
                            *arg_18 = rcx_38 & 0xdbff
                            int32_t* result_4 = result_1
                            int16_t* rdx_13 = &arg_18[1]
                            arg_18 = rdx_13
                            
                            if (result_4 != 0)
                                *result_4 = r15
                                result_1 = &result_1[1]
                                rdx_13 = arg_18
                            
                            int16_t rcx_44 = *(var_58_1 + (rbx_6 << 1))
                            i = 0
                            
                            if (rdx_13 u>= var_60_1)
                                *(r13 + 0x90) = rcx_44
                                goto label_142af8856
                            
                            *rdx_13 = rcx_44
                            arg_18 = &arg_18[1]
                            int32_t* result_5 = result_1
                            
                            if (result_5 == 0)
                                goto label_142af84c5
                            
                            r9 = arg2
                            *result_5 = r15
                            r15 = r14_1
                            result_1 = &result_1[1]
                            r8_1 = var_68
                            rbx_1 = 0
                    else
                        r9 = arg2
                        rdi_1 = (rax_9 u>> 0x18).b
                        rbx_1 += rax_9 & 0xffffff
                    
                    if (r8_1 u>= r11_1)
                        break
                    
                    rdx_2 = var_60_1
                    r10_1 = var_58_1
                    continue
                else
                    void* r10_2
                    uint8_t rcx_14
                    void* r8_2
                    
                    if (result_1 != 0)
                        while (true)
                            rax_9 = *(r12_1 + (((zx.q(rdi_1) << 8) + zx.q(*r8_1)) << 2))
                            
                            if (rax_9 s< 0)
                                if (rax_9 s>= 0x80100000)
                                    goto label_142af83f6
                                
                                int16_t* rcx_29 = arg_18
                                var_68 = &r8_1[1]
                                *rcx_29 = rax_9.w
                                arg_18 = &arg_18[1]
                                int32_t* result_8 = result_1
                                
                                if (result_8 != 0)
                                    *result_8 = r15
                                    result_1 = &result_1[1]
                                    r14_1 += 1
                                    r15 = r14_1
                                
                                rcx_14 = (rax_9 u>> 0x18).b
                            else
                                r8_2 = &r8_1[1]
                                rdi_1 = (rax_9 u>> 0x18).b
                                rbx_1 = rax_9 & 0xffffff
                                var_68 = r8_2
                                
                                if (r8_2 u>= r11_1)
                                    r14_1 += 1
                                    goto label_142af83e3
                                
                                rax_9 = *(r12_1 + (((zx.q(rdi_1) << 8) + zx.q(*r8_2)) << 2))
                                
                                if (rax_9 s>= 0 || (rax_9 & 0xf00000) != 0x400000)
                                    r14_1 += 1
                                    goto label_142af83e3
                                
                                int16_t rdx_4 = *(r10_1 + (zx.q(zx.d(rax_9.w) + rbx_1) << 1))
                                
                                if (rdx_4 u>= 0xfffe)
                                    rdx_2 = var_60_1
                                    r14_1 += 1
                                    goto label_142af83e3
                                
                                int16_t* rcx_27 = arg_18
                                var_68 = r8_2 + 1
                                *rcx_27 = rdx_4
                                arg_18 = &arg_18[1]
                                int32_t* result_7 = result_1
                                
                                if (result_7 != 0)
                                    *result_7 = r15
                                    result_1 = &result_1[1]
                                    r14_1 += 2
                                    r15 = r14_1
                                
                                rdx_2 = var_60_1
                                rcx_14 = (rax_9 u>> 0x18).b
                                rbx_1 = 0
                            
                            r8_1 = var_68
                            rcx_14 &= 0x7f
                            
                            if (r8_1 u>= r11_1)
                                break
                            
                            if (arg_18 u>= rdx_2)
                                break
                            
                            rdi_1 = rcx_14
                        
                    label_142af83f3:
                        rdi_1 = rcx_14
                    label_142af83f6:
                        r10_2 = r13 + 0x41
                    else
                        while (true)
                            rax_9 = *(r12_1 + (((zx.q(rdi_1) << 8) + zx.q(*r8_1)) << 2))
                            
                            if (rax_9 s< 0)
                                if (rax_9 s>= 0x80100000)
                                    goto label_142af83f6
                                
                                int16_t* rcx_15 = arg_18
                                var_68 = &r8_1[1]
                                *rcx_15 = rax_9.w
                                arg_18 = &arg_18[1]
                                rcx_14 = (rax_9 u>> 0x18).b
                            else
                                r8_2 = &r8_1[1]
                                rdi_1 = (rax_9 u>> 0x18).b
                                rbx_1 = rax_9 & 0xffffff
                                var_68 = r8_2
                                
                                if (r8_2 u>= r11_1)
                                    goto label_142af83e3
                                
                                rax_9 = *(r12_1 + (((zx.q(rdi_1) << 8) + zx.q(*r8_2)) << 2))
                                
                                if (rax_9 s>= 0 || (rax_9 & 0xf00000) != 0x400000)
                                    goto label_142af83e3
                                
                                int16_t rdx_3 = *(r10_1 + (zx.q(zx.d(rax_9.w) + rbx_1) << 1))
                                
                                if (rdx_3 u>= 0xfffe)
                                    rdx_2 = var_60_1
                                label_142af83e3:
                                    r10_2 = r13 + 0x41
                                    *r10_2 = *(r8_2 - 1)
                                    i = 1
                                    r8_1 = var_68
                                    break
                                
                                int16_t* rcx_12 = arg_18
                                var_68 = r8_2 + 1
                                *rcx_12 = rdx_3
                                arg_18 = &arg_18[1]
                                rdx_2 = var_60_1
                                rcx_14 = (rax_9 u>> 0x18).b
                                rbx_1 = 0
                            
                            r8_1 = var_68
                            rcx_14 &= 0x7f
                            
                            if (r8_1 u>= r11_1)
                                goto label_142af83f3
                            
                            if (arg_18 u>= rdx_2)
                                goto label_142af83f3
                            
                            rdi_1 = rcx_14
                    
                    if (r8_1 u>= r11_1)
                        break
                    
                    if (arg_18 u< rdx_2)
                        *(sx.q(i) + r10_2) = *r8_1
                        goto label_142af843b
            
            *r9 = 0xf
            break
    
    *(r13 + 0x48) = rbx_1
    *(r13 + 0x40) = i
    *(r13 + 0x4c) = zx.d(rdi_1)
    *(arg1 + 0x10) = var_68
    *(arg1 + 0x20) = arg_18
    result = result_1
    *(arg1 + 0x30) = result

return result
