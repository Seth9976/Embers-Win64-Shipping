// 函数: sub_142b090c0
// 地址: 0x142b090c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_40 = arg3
void* rdx = *(arg1 + 8)
char* rsi = *(arg1 + 0x20)
int64_t r8 = *(arg1 + 0x18)
int32_t r14_1 = *(arg1 + 0x28) - rsi.d
void* r13 = *(rdx + 0x10)
uint32_t rbx = *(rdx + 0x54)
int16_t* r12 = *(arg1 + 0x10)
int32_t* rdi = *(arg1 + 0x30)
uint64_t r10 = zx.q(*(r13 + 0x49))
int32_t r15 = sbb.d(arg3.d, arg3.d, rbx != 0)
char r11 = *(r13 + 0x48)
int32_t rbp = 0
int32_t rdx_1 = 0
void* var_68 = r13
int32_t r9 = *(r13 + (r10 << 2) + 0x20)
int32_t var_78 = r9
int64_t var_58 = r8
char arg_20 = r11
char arg_18 = r10.b
int32_t var_74 = r15
void* r9_1

while (true)
    int32_t var_6c_1
    int32_t rcx_2
    int32_t var_70
    
    if (r11 != 0)
        if (rbx != 0 && r14_1 s> 0)
            goto label_142b091f2
        
        while (true)
            if (r12 u>= r8)
                goto label_142b09bf5
            
            if (r14_1 s<= 0)
            label_142b09bef:
                *arg2 = 0xf
                goto label_142b09bf5
            
            rbx = zx.d(*r12)
            rdx_1 += 1
            r12 = &r12[1]
            var_6c_1 = rdx_1
            
            if (rbx - 0x20 u<= 0x5f)
                *rsi = rbx.b
                
                if (rdi != 0)
                    *rdi = r15
                    rdi = &rdi[1]
            else if (rbx u>= 0x20)
                int32_t rax_5 = rbx - r9
                
                if (rax_5 u> 0x7f)
                    if ((rbx & 0xfffff800) != 0xd800)
                        if (rbx u< 0xa0)
                            r13 = var_68
                            rbx = (rbx & 0x7f) | 0x200
                            rcx_2 = 2
                            break
                        
                        if (rbx == 0xfeff || rbx u>= 0xfff0)
                            r13 = var_68
                            rbx |= 0xe0000
                            goto label_142b09a64_1
                        
                        r13 = var_68
                        
                        while (rbx - *(r13 + (sx.q(rbp) << 2) + 0x20) u> 0x7f)
                            rbp += 1
                            
                            if (rbp s>= 8)
                                goto label_142b0944a
                        
                        if (rbp.b s>= 0)
                            uint32_t rcx_20
                            int32_t rdx_11
                            
                            if (r12 u< r8)
                                rcx_20 = zx.d(*r12)
                                rdx_11 = *(r13 + (sx.q(rbp.b) << 2) + 0x20)
                            
                            if (r12 u< r8 && (rcx_20 u> rdx_11 + 0x7f || (rcx_20 u< rdx_11 && (
                                    rcx_20 u> 0x7f
                                    || (rcx_20 u< 0x20 && (1 << rcx_20.b & 0x2601) == 0)))))
                                rcx_2 = 2
                                rbx = (sx.d(rbp.b) + 1) << 8 | (rbx - rdx_11) | 0x80
                                rbp = 0
                            else
                                arg_18 = rbp.b
                                var_78 = *(r13 + (zx.q(rbp.b) << 2) + 0x20)
                                sub_142b0a750(r13, rbp.b)
                                r9 = var_78
                                r11 = arg_20
                                r10 = zx.q(rbp.b)
                                rcx_2 = 2
                                rbx = (zx.d(rbp.b) + 0x10) << 8 | (rbx - r9) | 0x80
                                rbp = 0
                            
                            break
                        
                    label_142b0944a:
                        rbp = 0
                        int32_t rdx_7 = 0
                        
                        while (rbx - *(&data_143668d60 + (sx.q(rdx_7) << 2)) u> 0x7f)
                            rdx_7 += 1
                            
                            if (rdx_7 s>= 8)
                                goto label_142b09480
                        
                        if (rdx_7.b s>= 0)
                            rbx = (rbx - *(&data_143668d60 + (sx.q(rdx_7.b) << 2)))
                                | (sx.d(rdx_7.b) + 1) << 8
                        label_142b095d6:
                            rcx_2 = 2
                            break
                        
                    label_142b09480:
                        int32_t rax_20 = sub_142b0a6b0(rbx, &var_70)
                        
                        if (rax_20 s>= 0)
                            int64_t rdx_9 = sx.q(*(r13 + 0x4b))
                            uint64_t r8_1 = zx.q(*(rdx_9 + r13 + 0x4c))
                            rdx_9.b += 1
                            char rcx_15 = rdx_9.b
                            arg_18 = r8_1.b
                            
                            if (rdx_9.b == 8)
                                rcx_15 = 0
                            
                            *(r13 + 0x4b) = rcx_15
                            int32_t rcx_16 = var_70
                            var_78 = rcx_16
                            *(r13 + (r8_1 << 2) + 0x20) = rcx_16
                            sub_142b0a750(r13, r8_1.b)
                            r10 = zx.q(arg_18)
                            r9 = var_78
                            r11 = arg_20
                            rbx = (r10 + 0x18).d << 0x10 | (rbx - r9) | rax_20 << 8 | 0x80
                            rbp = 0
                        else if (rbx - 0x3400 u>= 0xa400
                                || (r12 u< var_58 && zx.d(*r12) - 0x3400 u>= 0xa400))
                            r9 = var_78
                            rbx |= 0xe0000
                            r10 = zx.q(arg_18)
                            rbp = 0
                            r11 = arg_20
                        else
                            r9 = var_78
                            r11 = 0
                            r10 = zx.q(arg_18)
                            rbx |= 0xf0000
                            arg_20 = nullptr
                            rbp = 0
                        
                        goto label_142b09a64_1
                    
                    if (test_bit(rbx, 0xa))
                        goto label_142b09b27
                    
                label_142b091f2:
                    
                    if (r12 u>= r8)
                        goto label_142b09bf5
                    
                    uint32_t r13_1 = zx.d(*r12)
                    
                    if ((r13_1 & 0xfffffc00) != 0xdc00)
                        goto label_142b09b27
                    
                    rdx_1 += 1
                    r12 = &r12[1]
                    var_6c_1 = rdx_1
                    int32_t r15_4 = (rbx << 0xa) - 0x35fdc00 + r13_1
                    int32_t rax_11 = r15_4 - r9
                    
                    if (rax_11 u> 0x7f)
                        while (true)
                            if (r15_4 - *(var_68 + (sx.q(rbp) << 2) + 0x20) u> 0x7f)
                                rbp += 1
                                
                                if (rbp s< 8)
                                    continue
                            else if (rbp.b s>= 0)
                                r13 = var_68
                                arg_18 = rbp.b
                                var_78 = *(var_68 + (zx.q(rbp.b) << 2) + 0x20)
                                sub_142b0a750(r13, rbp.b)
                                r9 = var_78
                                r10 = zx.q(rbp.b)
                                r11 = arg_20
                                rcx_2 = 2
                                r15 = var_74
                                rbx = (zx.d(rbp.b) + 0x10) << 8 | (r15_4 - r9) | 0x80
                                rbp = 0
                                break
                            
                            int32_t rax_14 = sub_142b0a6b0(r15_4, &var_70)
                            
                            if (rax_14 s< 0)
                                r15 = var_74
                                r11 = 0
                                *rsi = 0xf
                                rsi = &rsi[1]
                                arg_20 = nullptr
                                
                                if (rdi != 0)
                                    *rdi = r15
                                    rdi = &rdi[1]
                                
                                r9 = var_78
                                r14_1 -= 1
                                r10 = zx.q(arg_18)
                                rcx_2 = 4
                                r13 = var_68
                                rbx = zx.d(rbx.w) << 0x10 | zx.d(r13_1.w)
                                rbp = 0
                            else
                                r13 = var_68
                                int64_t rdx_4 = sx.q(*(r13 + 0x4b))
                                uint64_t rbx_1 = zx.q(*(rdx_4 + r13 + 0x4c))
                                rdx_4.b += 1
                                char rcx_6 = rdx_4.b
                                arg_18 = rbx_1.b
                                
                                if (rdx_4.b == 8)
                                    rcx_6 = 0
                                
                                *(r13 + 0x4b) = rcx_6
                                int32_t rcx_7 = var_70
                                var_78 = rcx_7
                                *(r13 + (rbx_1 << 2) + 0x20) = rcx_7
                                sub_142b0a750(r13, rbx_1.b)
                                r9 = var_78
                                rcx_2 = 4
                                r10 = zx.q(arg_18)
                                r11 = arg_20
                                r15 = var_74
                                rbx = (rbx_1.d << 0xd | (rax_14 - 0x200)) << 8 | (r15_4 - r9)
                                    | 0xb000080
                                rbp = 0
                            
                            break
                        
                        break
                    
                    rax_11.b |= 0x80
                    *rsi = rax_11.b
                    
                    if (rdi != 0)
                        *rdi = var_74
                        rdi = &rdi[1]
                else
                    rax_5.b |= 0x80
                    *rsi = rax_5.b
                    
                    if (rdi != 0)
                        *rdi = r15
                        rdi = &rdi[1]
            else
                if ((1 << rbx.b & 0x2601) == 0)
                    r13 = var_68
                    rbx |= 0x100
                    rcx_2 = 2
                    break
                
                *rsi = rbx.b
                
                if (rdi != 0)
                    *rdi = r15
                    rdi = &rdi[1]
            
            r14_1 -= 1
            var_74 = rdx_1
            rsi = &rsi[1]
            rbx = 0
            r15 = rdx_1
    else if (rbx == 0 || r14_1 s<= 0)
        while (true)
            if (r12 u>= r8)
                goto label_142b09bf5
            
            if (r14_1 s<= 0)
                goto label_142b09bef
            
            rbx = zx.d(*r12)
            rdx_1 += 1
            r12 = &r12[1]
            var_6c_1 = rdx_1
            
            if (rbx - 0x3400 u>= 0xa400)
                break
            
            if (r14_1 s< 2)
                goto label_142b095d6
            
            *rsi = (rbx u>> 8).b
            rsi[1] = rbx.b
            rsi = &rsi[2]
            
            if (rdi != 0)
                *rdi = r15
                rdi[1] = r15
                rdi = &rdi[2]
            
            r14_1 -= 2
            var_74 = rdx_1
            rbx = 0
            r15 = rdx_1
        
        if (rbx - 0x3400 u< 0xbf00)
            if (rbx u< 0xe000)
                if (test_bit(rbx, 0xa))
                    goto label_142b09b27
                
                goto label_142b0989c
            
            rbx |= 0xf00000
        label_142b09a64:
            rcx_2 = 3
        else if (r12 u< r8 && zx.d(*r12) - 0x3400 u< 0xa400)
            rcx_2 = 2
        else if (rbx - 0x30 u< 0xa || rbx - 0x61 u< 0x1a || rbx - 0x41 u< 0x1a)
            r11 = 1
            arg_20 = 1
            rcx_2 = 2
            rbx |= (zx.d(r10.b) + 0xe0) << 8
        else
            while (rbx - *(r13 + (sx.q(rbp) << 2) + 0x20) u> 0x7f)
                rbp += 1
                
                if (rbp s>= 8)
                    goto label_142b09751
            
            if (rbp.b s< 0)
            label_142b09751:
                int32_t rax_48 = sub_142b0a6b0(rbx, &var_70)
                
                if (rax_48 s< 0)
                    r9 = var_78
                    rbp = 0
                    r10 = zx.q(arg_18)
                    r11 = arg_20
                    rcx_2 = 2
                else
                    int64_t rdx_14 = sx.q(*(r13 + 0x4b))
                    arg_20 = 1
                    uint64_t r8_2 = zx.q(*(rdx_14 + r13 + 0x4c))
                    rdx_14.b += 1
                    char rcx_32 = rdx_14.b
                    arg_18 = r8_2.b
                    
                    if (rdx_14.b == 8)
                        rcx_32 = 0
                    
                    *(r13 + 0x4b) = rcx_32
                    int32_t rcx_33 = var_70
                    var_78 = rcx_33
                    *(r13 + (r8_2 << 2) + 0x20) = rcx_33
                    sub_142b0a750(r13, r8_2.b)
                    r10 = zx.q(arg_18)
                    r9 = var_78
                    r11 = 1
                    rbx = (r10 + 0xe8).d << 0x10 | (rbx - r9) | rax_48 << 8 | 0x80
                    rbp = 0
                label_142b09a64_1:
                    rcx_2 = 3
            else
                arg_20 = 1
                arg_18 = rbp.b
                var_78 = *(r13 + (zx.q(rbp.b) << 2) + 0x20)
                sub_142b0a750(r13, rbp.b)
                r9 = var_78
                r10 = zx.q(rbp.b)
                r11 = 1
                rcx_2 = 2
                rbx = (zx.d(rbp.b) + 0xe0) << 8 | (rbx - r9) | 0x80
                rbp = 0
    else
    label_142b0989c:
        
        if (r12 u>= r8)
            goto label_142b09bf5
        
        uint32_t r13_2 = zx.d(*r12)
        
        if ((r13_2 & 0xfffffc00) != 0xdc00)
        label_142b09b27:
            *arg2 = 0xc
        label_142b09bf5:
            r9_1 = rdx
            break
        
        var_6c_1 = rdx_1 + 1
        r12 = &r12[1]
        int32_t r15_8 = r13_2 - 0x35fdc00 + (rbx << 0xa)
        
        while (true)
            if (r15_8 - *(var_68 + (sx.q(rbp) << 2) + 0x20) u> 0x7f)
                rbp += 1
                
                if (rbp s< 8)
                    continue
            else if (rbp.b s>= 0 && (r12 u>= r8 || zx.d(*r12) - 0x3400 u>= 0xa400))
                r13 = var_68
                arg_20 = 1
                arg_18 = rbp.b
                var_78 = *(var_68 + (zx.q(rbp.b) << 2) + 0x20)
                sub_142b0a750(r13, rbp.b)
                r9 = var_78
                r10 = zx.q(rbp.b)
                rcx_2 = 2
                r11 = 1
                r15 = var_74
                rbx = (zx.d(rbp.b) + 0xe0) << 8 | (r15_8 - r9) | 0x80
                rbp = 0
                break
            
            if (r12 u< r8 && rbx.w == *r12)
                int32_t rax_62 = sub_142b0a6b0(r15_8, &var_70)
                
                if (rax_62 s>= 0)
                    r13 = var_68
                    arg_20 = 1
                    int64_t rdx_20 = sx.q(*(r13 + 0x4b))
                    uint64_t rbx_26 = zx.q(*(rdx_20 + r13 + 0x4c))
                    rdx_20.b += 1
                    char rcx_45 = rdx_20.b
                    arg_18 = rbx_26.b
                    
                    if (rdx_20.b == 8)
                        rcx_45 = 0
                    
                    *(r13 + 0x4b) = rcx_45
                    int32_t rcx_46 = var_70
                    var_78 = rcx_46
                    *(r13 + (rbx_26 << 2) + 0x20) = rcx_46
                    sub_142b0a750(r13, rbx_26.b)
                    r9 = var_78
                    rcx_2 = 4
                    r10 = zx.q(arg_18)
                    r11 = 1
                    r15 = var_74
                    rbx = (rbx_26.d << 0xd | (rax_62 - 0x200)) << 8 | (r15_8 - r9) | 0xf1000080
                    rbp = 0
                    break
                
                r9 = var_78
                r10 = zx.q(arg_18)
                r11 = arg_20
            
            r15 = var_74
            rcx_2 = 4
            rbx = zx.d(rbx.w) << 0x10 | r13_2
            r13 = var_68
            rbp = 0
            break
    
    if (rcx_2 s> r14_1)
        r9_1 = rdx
        uint64_t rcx_50 = zx.q(rcx_2 - r14_1)
        int32_t r8_3 = rcx_50.d
        void* rdx_30 = r9_1 + 0x68
        
        if (r8_3 == 1)
            *rdx_30 = rbx.b
        else
            if (r8_3 == 2)
                goto label_142b09b72
            
            if (r8_3 == 3)
                goto label_142b09b68
            
            if (r8_3 == 4)
                *rdx_30 = (rbx u>> 0x18).b
                rdx_30 += 1
            label_142b09b68:
                *rdx_30 = (rbx u>> 0x10).b
                rdx_30 += 1
            label_142b09b72:
                *rdx_30 = (rbx u>> 8).b
                *(rdx_30 + 1) = rbx.b
        
        *(r9_1 + 0x5b) = rcx_50.b
        uint32_t rbx_37 = rbx u>> (rcx_50 << 3).b
        
        if (r14_1 == 1)
        label_142b09bc4:
            *rsi = rbx_37.b
            rsi = &rsi[1]
            
            if (rdi != 0)
                *rdi = r15
                rdi = &rdi[1]
        else
            if (r14_1 == 2)
            label_142b09bb3:
                *rsi = (rbx_37 u>> 8).b
                rsi = &rsi[1]
                
                if (rdi != 0)
                    *rdi = r15
                    rdi = &rdi[1]
                
                goto label_142b09bc4
            
            if (r14_1 == 3)
                *rsi = (rbx_37 u>> 0x10).b
                rsi = &rsi[1]
                
                if (rdi != 0)
                    *rdi = r15
                    rdi = &rdi[1]
                
                goto label_142b09bb3
        
        rbx = 0
        *arg2 = 0xf
        break
    
    if (rdi != 0)
        if (rcx_2 == 1)
            goto label_142b09af9
        
        if (rcx_2 == 2)
            goto label_142b09aed
        
        if (rcx_2 == 3)
            goto label_142b09adc
        
        if (rcx_2 == 4)
            *rsi = (rbx u>> 0x18).b
            rsi = &rsi[1]
            *rdi = r15
            rdi = &rdi[1]
        label_142b09adc:
            *rsi = (rbx u>> 0x10).b
            rsi = &rsi[1]
            *rdi = r15
            rdi = &rdi[1]
        label_142b09aed:
            *rsi = (rbx u>> 8).b
            rsi = &rsi[1]
            *rdi = r15
            rdi = &rdi[1]
        label_142b09af9:
            *rsi = rbx.b
            rsi = &rsi[1]
            *rdi = r15
            rdi = &rdi[1]
    else if (rcx_2 == 1)
        *rsi = rbx.b
        rsi = &rsi[1]
    else
        if (rcx_2 == 2)
            goto label_142b09aa6
        
        if (rcx_2 == 3)
            goto label_142b09a9c
        
        if (rcx_2 == 4)
            *rsi = (rbx u>> 0x18).b
            rsi = &rsi[1]
        label_142b09a9c:
            *rsi = (rbx u>> 0x10).b
            rsi = &rsi[1]
        label_142b09aa6:
            *rsi = (rbx u>> 8).b
            rsi = &rsi[1]
            *rsi = rbx.b
            rsi = &rsi[1]
    
    rdx_1 = var_6c_1
    r14_1 -= rcx_2
    r8 = var_58
    r15 = rdx_1
    var_74 = rdx_1
    rbx = 0

*(var_68 + 0x48) = r11
*(var_68 + 0x49) = r10.b
*(r9_1 + 0x54) = rbx
*(arg1 + 0x10) = r12
*(arg1 + 0x20) = rsi
*(arg1 + 0x30) = rdi
return arg1
