// 函数: sub_142a29fa0
// 地址: 0x142a29fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0
int32_t r9 = arg8
int32_t rbx = 0
void* rsi = arg1
int32_t arg_10 = 0
int32_t* var_40

if (*(arg1 + 0x420) == 0)
    var_40 = nullptr
else
    var_40 = *(*(arg1 + 0x190) + 8) + (sx.q(*(arg1 + 0x364) * r9) + sx.q(arg9)) * 0xc

int64_t* rdi = arg7
int32_t r14 = 0
int64_t r11
r11.b = arg3 != 0xb
int64_t var_48 = r11
*rdi = 0

if (arg11 == 0)
label_142a2a296:
    int64_t r8_1 = sx.q(r14)
    
    if (r8_1 s>= 8)
    label_142a2a3a3:
        void* rax_40 = arg1
        
        if (*(rax_40 + 0x115c) != 0 && arg12 != 0)
            arg12(arg13, zx.q(arg8))
            rax_40 = arg1
        
        int32_t* r14_3
        
        if (var_40 == 0)
            r14_3 = var_40
        label_142a2a43d:
            int32_t rax_50
            
            if (arg_10 == 0)
            label_142a2a62f:
                
                if (r14_3 == 0)
                label_142a2a6fa:
                    
                    rbx = arg3 != 0xb ? 1 : 2
                else
                    char rcx_42 = r14_3[2].b
                    
                    if (rcx_42 == arg4 || rcx_42 s<= 0)
                    label_142a2a6a3:
                        char rcx_45 = *(r14_3 + 9)
                        
                        if (rcx_45 s<= 0 || rcx_45 == arg4)
                            goto label_142a2a6fa
                        
                        rax_50 = r14_3[1]
                        
                        if (rax_50 == *r14_3)
                            goto label_142a2a6fa
                        
                        if (*(arg1 + (sx.q(rcx_45) << 2) + 0x10a4)
                                != *(arg1 + (sx.q(arg4) << 2) + 0x10a4))
                            arg11.w = neg.w(rax_50.w)
                            arg11:2.w = neg.w(arg11:2.w)
                            rax_50 = arg11
                        
                        if (rbx == 0)
                            rbx = 1
                            *rdi = rax_50
                            
                            if (arg3 == 0xb)
                                rbx = 2
                        else
                            if (rax_50 == *rdi)
                                goto label_142a2a6fa
                            
                        label_142a2a528:
                            int64_t rcx_39 = sx.q(rbx)
                            rbx += 1
                            *(rdi + (rcx_39 << 2)) = rax_50
                    else
                        int32_t rax_52 = *r14_3
                        
                        if (*(arg1 + (sx.q(rcx_42) << 2) + 0x10a4)
                                != *(arg1 + (sx.q(arg4) << 2) + 0x10a4))
                            arg11.w = neg.w(rax_52.w)
                            arg11:2.w = neg.w(arg11:2.w)
                            rax_52 = arg11
                        
                        if (rbx == 0)
                            rbx = 1
                            *rdi = rax_52
                            
                            if (arg3 == 0xb)
                                goto label_142a2a6a3
                        else
                            if (rax_52 == *rdi)
                                goto label_142a2a6a3
                            
                            int64_t rcx_44 = sx.q(rbx)
                            rbx += 1
                            *(rdi + (rcx_44 << 2)) = rax_52
            else
                void* rcx_32 = arg6
                int64_t r11_3 = 0
                int64_t r10_3 = sx.q(rbx)
                
                while (true)
                    int32_t rdx_9 = *(rcx_32 + (r11_3 << 3))
                    
                    if (arg8 + rdx_9 s>= 0)
                        int32_t r8_2 = *(rcx_32 + (r11_3 << 3) + 4)
                        int32_t rcx_34 = arg9 + r8_2
                        
                        if (rcx_34 s>= *(arg2 + 0x198) && arg8 + rdx_9 s< *(arg1 + 0x35c)
                                && rcx_34 s< *(arg2 + 0x19c))
                            void* r9_3 =
                                *(*(arg2 + 0x1a8) + (sx.q(*(arg2 + 0x1a0) * rdx_9 + r8_2) << 3))
                            char rdx_10 = *(r9_3 + 8)
                            
                            if (rdx_10 s> 0)
                                int64_t rcx_38
                                int32_t r8_3
                                
                                if (rdx_10 != arg4)
                                    int32_t rax_49 = *(r9_3 + 0xc)
                                    int64_t rcx_36 = sx.q(arg4)
                                    
                                    if (r10_3 == 0)
                                        if (*(arg1 + (sx.q(rdx_10) << 2) + 0x10a4)
                                                != *(arg1 + (rcx_36 << 2) + 0x10a4))
                                            arg11.w = neg.w(rax_49.w)
                                            arg11:2.w = neg.w(arg11:2.w)
                                            rax_49 = arg11
                                        
                                        rbx += 1
                                        *rdi = rax_49
                                        r10_3 = 1
                                        
                                        if (var_48 != 0)
                                            break
                                        
                                        goto label_142a2a572
                                    
                                    r8_3 = *(arg1 + (rcx_36 << 2) + 0x10a4)
                                    
                                    if (*(arg1 + (sx.q(rdx_10) << 2) + 0x10a4) != r8_3)
                                        arg11.w = neg.w(rax_49.w)
                                        arg11:2.w = neg.w(arg11:2.w)
                                        rax_49 = arg11
                                    
                                    if (rax_49 == *rdi)
                                        goto label_142a2a572
                                    
                                    rax_50 = *(r9_3 + 0xc)
                                    rcx_38 = sx.q(*(r9_3 + 8))
                                label_142a2a510:
                                    char arg_18
                                    arg_18.d = rax_50
                                    
                                    if (*(arg1 + (rcx_38 << 2) + 0x10a4) != r8_3)
                                        arg_18.w = neg.w(arg_18.w)
                                        arg5 = neg.w(arg5)
                                        rax_50 = arg_18.d
                                    
                                    goto label_142a2a528
                                
                            label_142a2a572:
                                char rdx_12 = *(r9_3 + 9)
                                
                                if (rdx_12 s> 0 && rdx_12 != arg4)
                                    int32_t rax_51 = *(r9_3 + 0x10)
                                    
                                    if (rax_51 != *(r9_3 + 0xc))
                                        int64_t rcx_40 = sx.q(arg4)
                                        
                                        if (r10_3 == 0)
                                            if (*(arg1 + (sx.q(rdx_12) << 2) + 0x10a4)
                                                    != *(arg1 + (rcx_40 << 2) + 0x10a4))
                                                arg11.w = neg.w(rax_51.w)
                                                arg11:2.w = neg.w(arg11:2.w)
                                                rax_51 = arg11
                                            
                                            rbx += 1
                                            *rdi = rax_51
                                            r10_3 = 1
                                            
                                            if (var_48 != 0)
                                                break
                                        else
                                            r8_3 = *(arg1 + (rcx_40 << 2) + 0x10a4)
                                            
                                            if (*(arg1 + (sx.q(rdx_12) << 2) + 0x10a4) != r8_3)
                                                arg11.w = neg.w(rax_51.w)
                                                arg11:2.w = neg.w(arg11:2.w)
                                                rax_51 = arg11
                                            
                                            if (rax_51 != *rdi)
                                                rax_50 = *(r9_3 + 0x10)
                                                rcx_38 = sx.q(*(r9_3 + 9))
                                                goto label_142a2a510
                        
                        rcx_32 = arg6
                    
                    r11_3 += 1
                    
                    if (r11_3 s>= 8)
                        goto label_142a2a62f
        else
            if (*(rax_40 + 0x115c) != 0 && arg12 != 0)
                arg12(arg13, zx.q(arg8))
            
            r14_3 = var_40
            int32_t rax_42
            int32_t rcx_31
            
            if (r14_3[2].b != arg4)
                if (*(r14_3 + 9) != arg4)
                    goto label_142a2a43d
                
                if (rbx == 0)
                    rax_42 = r14_3[1]
                    goto label_142a2a414
                
                rcx_31 = r14_3[1]
                goto label_142a2a3fc
            
            if (rbx == 0)
                rax_42 = *r14_3
            label_142a2a414:
                rbx = 1
                *rdi = rax_42
                
                if (arg3 == 0xb)
                    goto label_142a2a43d
            else
                rcx_31 = *r14_3
            label_142a2a3fc:
                
                if (rcx_31 == *rdi)
                    goto label_142a2a43d
                
                int64_t rax_41 = sx.q(rbx)
                rbx += 1
                *(rdi + (rax_41 << 2)) = rcx_31
    else
        void* rcx_21 = arg6
        int64_t r9_2 = sx.q(rbx)
        
        while (true)
            int32_t rdx_5 = *(rcx_21 + (r8_1 << 3))
            int32_t rax_28 = rdx_5 + arg8
            
            if (rax_28 s>= 0)
                int32_t r10_2 = *(rcx_21 + (r8_1 << 3) + 4)
                int32_t rcx_23 = arg9 + r10_2
                
                if (rcx_23 s>= *(arg2 + 0x198) && rax_28 s< *(rsi + 0x35c)
                        && rcx_23 s< *(arg2 + 0x19c))
                    arg_10 = 1
                    void* rdx_6 = *(*(arg2 + 0x1a8) + (sx.q(*(arg2 + 0x1a0) * rdx_5 + r10_2) << 3))
                    int32_t rax_37
                    
                    if (*(rdx_6 + 8) != arg4)
                        if (*(rdx_6 + 9) == arg4)
                            if (r9_2 == 0)
                                rax_37 = *(rdx_6 + 0x10)
                                goto label_142a2a37f
                            
                            if (*(rdx_6 + 0x10) != *rdi)
                                int64_t rcx_28 = sx.q(rbx)
                                rbx += 1
                                *(rdi + (rcx_28 << 2)) = *(rdx_6 + 0x10)
                                break
                    else if (r9_2 == 0)
                        rax_37 = *(rdx_6 + 0xc)
                    label_142a2a37f:
                        rbx += 1
                        *rdi = rax_37
                        r9_2 = 1
                        
                        if (r11 != 0)
                            break
                    else if (*(rdx_6 + 0xc) != *rdi)
                        int64_t rcx_25 = sx.q(rbx)
                        rbx += 1
                        *(rdi + (rcx_25 << 2)) = *(rdx_6 + 0xc)
                        break
                
                rcx_21 = arg6
            
            r8_1 += 1
            
            if (r8_1 s>= 8)
                goto label_142a2a3a3
else
    int64_t rsi_1 = 0
    int64_t r8 = sx.q(arg10)
    int32_t* r11_2 = arg6 + 4
    int64_t r10_1 = 0
    
    while (true)
        int32_t rdx_3 = r11_2[-1]
        int32_t rax_6 = rdx_3 + r9
        
        if (rax_6 s>= 0)
            int32_t r9_1 = *r11_2
            int32_t rcx_2 = arg9 + r9_1
            
            if (rcx_2 s>= *(arg2 + 0x198))
                rdi = arg7
                
                if (rax_6 s< *(arg1 + 0x35c) && rcx_2 s< *(arg2 + 0x19c))
                    arg_10 = 1
                    char* rdx_4 = *(*(arg2 + 0x1a8) + (sx.q(*(arg2 + 0x1a0) * rdx_3 + r9_1) << 3))
                    int32_t rax_22
                    
                    if (rdx_4[8] == arg4)
                        if (r10_1 == 0)
                            if (r8.d s< 0 || *rdx_4 u>= 3)
                                rax_22 = *(rdx_4 + 0xc)
                            else
                                int64_t rcx_9 = 0
                                
                                if (r9_1 == 0)
                                    rcx_9 = 4
                                
                                rax_22 = *(rdx_4
                                    + (sx.q(*(rcx_9 + (r8 << 3) + &data_143603ea0)) + 2) * 0xc)
                            
                            goto label_142a2a262
                        
                        int32_t rax_14
                        
                        if (r8.d s< 0 || *rdx_4 u>= 3)
                            rax_14 = *(rdx_4 + 0xc)
                        else
                            int64_t rcx_4 = 0
                            
                            if (r9_1 == 0)
                                rcx_4 = 4
                            
                            rax_14 =
                                *(rdx_4 + (sx.q(*(rcx_4 + (r8 << 3) + &data_143603ea0)) + 2) * 0xc)
                        
                        if (rax_14 != *rdi)
                            if (r8.d s< 0 || *rdx_4 u>= 3)
                                int64_t rcx_26 = sx.q(rbx)
                                rbx += 1
                                *(rdi + (rcx_26 << 2)) = *(rdx_4 + 0xc)
                            else
                                int64_t rcx_6 = 0
                                
                                if (*r11_2 == 0)
                                    rcx_6 = 4
                                
                                int64_t rcx_8 = sx.q(rbx)
                                rbx += 1
                                *(rdi + (rcx_8 << 2)) = *(rdx_4
                                    + (sx.q(*(rcx_6 + (r8 << 3) + &data_143603ea0)) + 2) * 0xc)
                            
                            break
                    else if (rdx_4[9] == arg4)
                        if (r10_1 == 0)
                            if (r8.d s< 0 || *rdx_4 u>= 3)
                                rax_22 = *(rdx_4 + 0x10)
                            else
                                int64_t rcx_18 = 0
                                
                                if (r9_1 == 0)
                                    rcx_18 = 4
                                
                                rax_22 = *(rdx_4
                                    + sx.q(*(rcx_18 + (r8 << 3) + &data_143603ea0)) * 0xc + 0x1c)
                            
                        label_142a2a262:
                            rbx += 1
                            *rdi = rax_22
                            r10_1 = 1
                            
                            if (var_48 != 0)
                                break
                        else
                            int32_t rax_24
                            
                            if (r8.d s< 0 || *rdx_4 u>= 3)
                                rax_24 = *(rdx_4 + 0x10)
                            else
                                int64_t rcx_11 = 0
                                
                                if (r9_1 == 0)
                                    rcx_11 = 4
                                
                                rax_24 = *(rdx_4
                                    + sx.q(*(rcx_11 + (r8 << 3) + &data_143603ea0)) * 0xc + 0x1c)
                            
                            if (rax_24 != *rdi)
                                if (r8.d s< 0 || *rdx_4 u>= 3)
                                    int64_t rcx_27 = sx.q(rbx)
                                    rbx += 1
                                    *(rdi + (rcx_27 << 2)) = *(rdx_4 + 0x10)
                                else
                                    int64_t rcx_14 = 0
                                    
                                    if (*r11_2 == 0)
                                        rcx_14 = 4
                                    
                                    int64_t rcx_17 = sx.q(rbx)
                                    rbx += 1
                                    *(rdi + (rcx_17 << 2)) = *(rdx_4
                                        + sx.q(*(rcx_14 + (r8 << 3) + &data_143603ea0)) * 0xc
                                        + 0x1c)
                                
                                break
            
            r9 = arg8
        
        r14 += 1
        rsi_1 += 1
        r11_2 = &r11_2[2]
        
        if (rsi_1 s>= 2)
            r11 = var_48
            rsi = arg1
            goto label_142a2a296

if (rbx s> 0)
    do
        int32_t r9_6 = *(arg2 + 0x1dc) + 0x80
        int32_t rcx_48 = *(arg2 + 0x1d8) - 0x80
        int32_t r8_9 = *(arg2 + 0x1d4) + 0x80
        int32_t rax_53 = sx.d(*(rdi + (i << 2) + 2))
        int32_t rdx_17 = *(arg2 + 0x1d0) - 0x80
        
        if (rax_53 s>= rdx_17)
            if (rax_53 s> r8_9)
                rax_53 = r8_9
            
            rdx_17 = rax_53
        
        int32_t rax_54 = sx.d(*(rdi + (i << 2)))
        *(rdi + (i << 2) + 2) = rdx_17.w
        
        if (rax_54 s>= rcx_48)
            if (rax_54 s> r9_6)
                rax_54 = r9_6
            
            rcx_48 = rax_54
        
        *(rdi + (i << 2)) = rcx_48.w
        i += 1
    while (i s< sx.q(rbx))

return zx.q(rbx)
