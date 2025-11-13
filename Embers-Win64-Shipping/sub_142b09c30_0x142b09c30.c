// 函数: sub_142b09c30
// 地址: 0x142b09c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 8)
char* rdi = *(arg1 + 0x20)
int64_t rdx = *(arg1 + 0x18)
int32_t rsi_1 = *(arg1 + 0x28) - rdi.d
void* r13 = *(r10 + 0x10)
int32_t rbp = 0
int16_t* r14 = *(arg1 + 0x10)
uint32_t rbx = *(r10 + 0x54)
uint64_t r15 = zx.q(*(r13 + 0x49))
char r8 = *(r13 + 0x48)
int64_t var_58 = rdx
char arg_20 = r8
int32_t r12 = *(r13 + (r15 << 2) + 0x20)
int32_t var_68 = r12
char arg_18 = r15.b
void* r10_1

while (true)
    int32_t rcx_2
    int32_t var_64
    
    if (r8 != 0)
        if (rbx != 0 && rsi_1 s> 0)
            goto label_142b09d27
        
        while (true)
            if (r14 u>= rdx)
                goto label_142b0a525
            
            if (rsi_1 s<= 0)
                *arg2 = 0xf
                goto label_142b0a525
            
            rbx = zx.d(*r14)
            r14 = &r14[1]
            
            if (rbx - 0x20 u<= 0x5f)
                *rdi = rbx.b
                rsi_1 -= 1
                rdi = &rdi[1]
                rbx = 0
            else if (rbx u>= 0x20)
                int32_t rax_4 = rbx - r12
                
                if (rax_4 u> 0x7f)
                    if ((rbx & 0xfffff800) != 0xd800)
                        if (rbx u< 0xa0)
                            r15 = zx.q(arg_18)
                            rbx = (rbx & 0x7f) | 0x200
                            rcx_2 = 2
                            break
                        
                        if (rbx == 0xfeff || rbx u>= 0xfff0)
                            r15 = zx.q(arg_18)
                            rbx |= 0xe0000
                            goto label_142b0a4c3_1
                        
                        while (rbx - *(r13 + (sx.q(rbp) << 2) + 0x20) u> 0x7f)
                            rbp += 1
                            
                            if (rbp s>= 8)
                                goto label_142b09f3a
                        
                        if (rbp.b s>= 0)
                            uint32_t rcx_17
                            int32_t rdx_9
                            
                            if (r14 u< rdx)
                                rcx_17 = zx.d(*r14)
                                rdx_9 = *(r13 + (sx.q(rbp.b) << 2) + 0x20)
                            
                            if (r14 u< rdx && (rcx_17 u> rdx_9 + 0x7f || (rcx_17 u< rdx_9 && (
                                    rcx_17 u> 0x7f
                                    || (rcx_17 u< 0x20 && (1 << rcx_17.b & 0x2601) == 0)))))
                                r15 = zx.q(arg_18)
                                rcx_2 = 2
                                rbx = (sx.d(rbp.b) + 1) << 8 | (rbx - rdx_9) | 0x80
                                rbp = 0
                            else
                                arg_18 = rbp.b
                                r15 = zx.q(rbp.b)
                                r12 = *(r13 + (zx.q(rbp.b) << 2) + 0x20)
                                var_68 = r12
                                sub_142b0a750(r13, rbp.b)
                                r8 = arg_20
                                rcx_2 = 2
                                rbx = (zx.d(rbp.b) + 0x10) << 8 | (rbx - r12) | 0x80
                                rbp = 0
                            
                            break
                        
                    label_142b09f3a:
                        rbp = 0
                        int32_t rdx_5 = 0
                        
                        while (rbx - *(&data_143668d60 + (sx.q(rdx_5) << 2)) u> 0x7f)
                            rdx_5 += 1
                            
                            if (rdx_5 s>= 8)
                                goto label_142b09f60
                        
                        if (rdx_5.b s>= 0)
                            r15 = zx.q(arg_18)
                            rcx_2 = 2
                            rbx = (rbx - *(&data_143668d60 + (sx.q(rdx_5.b) << 2)))
                                | (sx.d(rdx_5.b) + 1) << 8
                            break
                        
                    label_142b09f60:
                        int32_t rax_17 = sub_142b0a6b0(rbx, &var_64)
                        
                        if (rax_17 s>= 0)
                            int64_t rdx_7 = sx.q(*(r13 + 0x4b))
                            r12 = var_64
                            var_68 = r12
                            r15 = zx.q(*(rdx_7 + r13 + 0x4c))
                            rdx_7.b += 1
                            char rcx_13 = rdx_7.b
                            arg_18 = r15.b
                            
                            if (rdx_7.b == 8)
                                rcx_13 = 0
                            
                            *(r13 + 0x4b) = rcx_13
                            *(r13 + (r15 << 2) + 0x20) = r12
                            sub_142b0a750(r13, r15.b)
                            r8 = arg_20
                            rbx = (r15 + 0x18).d << 0x10 | (rbx - r12) | rax_17 << 8 | 0x80
                            rbp = 0
                        else if (rbx - 0x3400 u>= 0xa400
                                || (r14 u< var_58 && zx.d(*r14) - 0x3400 u>= 0xa400))
                            r15 = zx.q(arg_18)
                            rbx |= 0xe0000
                            r8 = arg_20
                            rbp = 0
                        else
                            r15 = zx.q(arg_18)
                            r8 = 0
                            rbx |= 0xf0000
                            arg_20 = 0
                            rbp = 0
                        
                        goto label_142b0a4c3_1
                    
                    if (test_bit(rbx, 0xa))
                        goto label_142b0a51f
                    
                label_142b09d27:
                    
                    if (r14 u>= rdx)
                        goto label_142b0a525
                    
                    uint32_t r12_1 = zx.d(*r14)
                    
                    if ((r12_1 & 0xfffffc00) != 0xdc00)
                    label_142b0a51f:
                        *arg2 = 0xc
                    label_142b0a525:
                        r15 = zx.q(arg_18)
                        goto label_142b0a52e
                    
                    r14 = &r14[1]
                    int32_t r15_4 = (rbx << 0xa) - 0x35fdc00 + r12_1
                    rax_4 = r15_4 - var_68
                    
                    if (rax_4 u> 0x7f)
                        while (true)
                            if (r15_4 - *(r13 + (sx.q(rbp) << 2) + 0x20) u> 0x7f)
                                rbp += 1
                                
                                if (rbp s< 8)
                                    continue
                            else if (rbp.b s>= 0)
                                arg_18 = rbp.b
                                r12 = *(r13 + (zx.q(rbp.b) << 2) + 0x20)
                                var_68 = r12
                                sub_142b0a750(r13, rbp.b)
                                r8 = arg_20
                                rcx_2 = 2
                                r15 = zx.q(rbp.b)
                                rbx = (zx.d(rbp.b) + 0x10) << 8 | (r15_4 - r12) | 0x80
                                rbp = 0
                                break
                            
                            int32_t rax_11 = sub_142b0a6b0(r15_4, &var_64)
                            
                            if (rax_11 s< 0)
                                r15 = zx.q(arg_18)
                                r8 = 0
                                rsi_1 -= 1
                                rcx_2 = 4
                                r12 = var_68
                                rbx = zx.d(rbx.w) << 0x10 | zx.d(r12_1.w)
                                *rdi = 0xf
                                rdi = &rdi[1]
                                rbp = 0
                                arg_20 = 0
                            else
                                int64_t rdx_2 = sx.q(*(r13 + 0x4b))
                                r12 = var_64
                                var_68 = r12
                                uint64_t rbx_1 = zx.q(*(rdx_2 + r13 + 0x4c))
                                rdx_2.b += 1
                                char rcx_6 = rdx_2.b
                                arg_18 = rbx_1.b
                                
                                if (rdx_2.b == 8)
                                    rcx_6 = 0
                                
                                *(r13 + 0x4b) = rcx_6
                                *(r13 + (rbx_1 << 2) + 0x20) = r12
                                sub_142b0a750(r13, rbx_1.b)
                                r8 = arg_20
                                rcx_2 = 4
                                r15 = zx.q(arg_18)
                                rbx = (rbx_1.d << 0xd | (rax_11 - 0x200)) << 8 | (r15_4 - r12)
                                    | 0xb000080
                                rbp = 0
                            
                            break
                        
                        break
                    
                    r12 = var_68
                
                rax_4.b |= 0x80
                rsi_1 -= 1
                *rdi = rax_4.b
                rbx = 0
                rdi = &rdi[1]
            else
                if ((1 << rbx.b & 0x2601) == 0)
                    r15 = zx.q(arg_18)
                    rbx |= 0x100
                    rcx_2 = 2
                    break
                
                *rdi = rbx.b
                rsi_1 -= 1
                rdi = &rdi[1]
                rbx = 0
    else if (rbx == 0 || rsi_1 s<= 0)
        while (true)
            if (r14 u>= rdx)
                goto label_142b0a52e
            
            if (rsi_1 s<= 0)
                *arg2 = 0xf
                goto label_142b0a52e
            
            rbx = zx.d(*r14)
            r14 = &r14[1]
            
            if (rbx - 0x3400 u>= 0xa400)
                break
            
            if (rsi_1 s< 2)
                goto label_142b0a30e
            
            *rdi = (rbx u>> 8).b
            rdi[1] = rbx.b
            rdi = &rdi[2]
            rsi_1 -= 2
            rbx = 0
        
        if (rbx - 0x3400 u< 0xbf00)
            if (rbx u< 0xe000)
                if (test_bit(rbx, 0xa))
                    goto label_142b0a578
                
                goto label_142b0a32e
            
            rbx |= 0xf00000
        label_142b0a4c3:
            rcx_2 = 3
        else if (r14 u< rdx && zx.d(*r14) - 0x3400 u< 0xa400)
            rcx_2 = 2
        else if (rbx - 0x30 u< 0xa || rbx - 0x61 u< 0x1a || rbx - 0x41 u< 0x1a)
            r8 = 1
            arg_20 = 1
            rbx |= (zx.d(r15.b) + 0xe0) << 8
        label_142b0a30e:
            rcx_2 = 2
        else
            while (rbx - *(r13 + (sx.q(rbp) << 2) + 0x20) u> 0x7f)
                rbp += 1
                
                if (rbp s>= 8)
                    goto label_142b0a201
            
            if (rbp.b s< 0)
            label_142b0a201:
                int32_t rax_45 = sub_142b0a6b0(rbx, &var_64)
                
                if (rax_45 s< 0)
                    r8 = arg_20
                    rbp = 0
                    rcx_2 = 2
                else
                    int64_t rdx_12 = sx.q(*(r13 + 0x4b))
                    r12 = var_64
                    arg_20 = 1
                    var_68 = r12
                    r15 = zx.q(*(rdx_12 + r13 + 0x4c))
                    rdx_12.b += 1
                    char rcx_28 = rdx_12.b
                    arg_18 = r15.b
                    
                    if (rdx_12.b == 8)
                        rcx_28 = 0
                    
                    *(r13 + 0x4b) = rcx_28
                    *(r13 + (r15 << 2) + 0x20) = r12
                    sub_142b0a750(r13, r15.b)
                    r8 = 1
                    rbx = (r15 + 0xe8).d << 0x10 | (rbx - r12) | rax_45 << 8 | 0x80
                    rbp = 0
                label_142b0a4c3_1:
                    rcx_2 = 3
            else
                arg_20 = 1
                r15 = zx.q(rbp.b)
                arg_18 = rbp.b
                r12 = *(r13 + (zx.q(rbp.b) << 2) + 0x20)
                var_68 = r12
                sub_142b0a750(r13, rbp.b)
                r8 = 1
                rcx_2 = 2
                rbx = (zx.d(rbp.b) + 0xe0) << 8 | (rbx - r12) | 0x80
                rbp = 0
    else
    label_142b0a32e:
        
        if (r14 u>= rdx)
            goto label_142b0a52e
        
        uint32_t r12_2 = zx.d(*r14)
        
        if ((r12_2 & 0xfffffc00) != 0xdc00)
        label_142b0a578:
            *arg2 = 0xc
        label_142b0a52e:
            r10_1 = r10
            break
        
        r14 = &r14[1]
        int32_t r15_8 = r12_2 - 0x35fdc00 + (rbx << 0xa)
        
        while (true)
            if (r15_8 - *(r13 + (sx.q(rbp) << 2) + 0x20) u> 0x7f)
                rbp += 1
                
                if (rbp s< 8)
                    continue
            else if (rbp.b s>= 0 && (r14 u>= rdx || zx.d(*r14) - 0x3400 u>= 0xa400))
                arg_20 = 1
                arg_18 = rbp.b
                r12 = *(r13 + (zx.q(rbp.b) << 2) + 0x20)
                var_68 = r12
                sub_142b0a750(r13, rbp.b)
                rcx_2 = 2
                r8 = 1
                r15 = zx.q(rbp.b)
                rbx = (zx.d(rbp.b) + 0xe0) << 8 | (r15_8 - r12) | 0x80
                rbp = 0
                break
            
            if (r14 u< rdx && rbx.w == *r14)
                int32_t rax_59 = sub_142b0a6b0(r15_8, &var_64)
                
                if (rax_59 s>= 0)
                    int64_t rdx_16 = sx.q(*(r13 + 0x4b))
                    r12 = var_64
                    arg_20 = 1
                    var_68 = r12
                    uint64_t rbx_26 = zx.q(*(rdx_16 + r13 + 0x4c))
                    rdx_16.b += 1
                    char rcx_39 = rdx_16.b
                    arg_18 = rbx_26.b
                    
                    if (rdx_16.b == 8)
                        rcx_39 = 0
                    
                    *(r13 + 0x4b) = rcx_39
                    *(r13 + (rbx_26 << 2) + 0x20) = r12
                    sub_142b0a750(r13, rbx_26.b)
                    rcx_2 = 4
                    r8 = 1
                    r15 = zx.q(arg_18)
                    rbx = (rbx_26.d << 0xd | (rax_59 - 0x200)) << 8 | (r15_8 - r12) | 0xf1000080
                    rbp = 0
                    break
                
                r8 = arg_20
            
            r15 = zx.q(arg_18)
            rcx_2 = 4
            rbx = zx.d(rbx.w) << 0x10 | r12_2
            r12 = var_68
            rbp = 0
            break
    
    if (rcx_2 s> rsi_1)
        r10_1 = r10
        uint64_t rcx_42 = zx.q(rcx_2 - rsi_1)
        int32_t r8_1 = rcx_42.d
        void* rdx_23 = r10_1 + 0x68
        
        if (r8_1 == 1)
            *rdx_23 = rbx.b
        else
            if (r8_1 == 2)
                goto label_142b0a5bf
            
            if (r8_1 == 3)
                goto label_142b0a5b5
            
            if (r8_1 == 4)
                *rdx_23 = (rbx u>> 0x18).b
                rdx_23 += 1
            label_142b0a5b5:
                *rdx_23 = (rbx u>> 0x10).b
                rdx_23 += 1
            label_142b0a5bf:
                *rdx_23 = (rbx u>> 8).b
                *(rdx_23 + 1) = rbx.b
        
        *(r10_1 + 0x5b) = rcx_42.b
        uint32_t rbx_37 = rbx u>> (rcx_42 << 3).b
        
        if (rsi_1 == 1)
            *rdi = rbx_37.b
            rdi = &rdi[1]
        else
            if (rsi_1 == 2)
                goto label_142b0a5f1
            
            if (rsi_1 == 3)
                *rdi = (rbx_37 u>> 0x10).b
                rdi = &rdi[1]
            label_142b0a5f1:
                *rdi = (rbx_37 u>> 8).b
                rdi = &rdi[1]
                *rdi = rbx_37.b
                rdi = &rdi[1]
        
        rbx = 0
        r8 = arg_20
        *arg2 = 0xf
        break
    
    if (rcx_2 == 1)
        *rdi = rbx.b
        rdi = &rdi[1]
    else
        if (rcx_2 == 2)
            goto label_142b0a4ff
        
        if (rcx_2 == 3)
            goto label_142b0a4f5
        
        if (rcx_2 == 4)
            *rdi = (rbx u>> 0x18).b
            rdi = &rdi[1]
        label_142b0a4f5:
            *rdi = (rbx u>> 0x10).b
            rdi = &rdi[1]
        label_142b0a4ff:
            *rdi = (rbx u>> 8).b
            rdi = &rdi[1]
            *rdi = rbx.b
            rdi = &rdi[1]
    
    rdx = var_58
    rsi_1 -= rcx_2
    rbx = 0

*(r13 + 0x48) = r8
*(r13 + 0x49) = r15.b
*(r10_1 + 0x54) = rbx
*(arg1 + 0x10) = r14
*(arg1 + 0x20) = rdi
return arg1
