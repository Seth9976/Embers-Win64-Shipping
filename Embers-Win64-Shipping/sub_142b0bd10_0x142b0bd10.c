// 函数: sub_142b0bd10
// 地址: 0x142b0bd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *(arg1 + 8)
char* r11 = *(arg1 + 0x20)
int16_t* rbp = *(arg1 + 0x10)
int32_t rsi_1 = *(arg1 + 0x28) - r11.d
int32_t rdi = *(r13 + 0x50)
int64_t r14 = *(arg1 + 0x18)
uint32_t rbx = *(r13 + 0x54)

if (rdi == 0)
    rdi = 0x40

if (rbx == 0)
    goto label_142b0bd73

if (rsi_1 s<= 0)
    goto label_142b0bd73

while (rbp u< r14)
    uint32_t rcx_2 = zx.d(*rbp)
    
    if ((rcx_2 & 0xfffffc00) == 0xdc00)
        rbp = &rbp[1]
        rbx = ((rbx - 0xd7f7) << 0xa) + rcx_2
    
    while (true)
        int32_t rcx_4 = rbx - rdi
        
        if (rbx - 0x3040 u> 0xa763)
            rdi = (rbx & 0xffffff80) + 0x40
        else if (rbx s<= 0x309f)
            rdi = 0x3070
        else if (rbx - 0x4e00 u<= 0x51a5)
            rdi = 0x7711
        else if (rbx s< 0xac00)
            rdi = (rbx & 0xffffff80) + 0x40
        else
            rdi = 0xc1d1
        
        int64_t rax
        
        if (rcx_4 + 0x40 u<= 0x7f)
            rcx_4.b -= 0x70
            rsi_1 -= 1
            *r11 = rcx_4.b
            r11 = &r11[1]
            
            if (rbx s< 0x3000)
            label_142b0bd73:
                rax = (r14 - rbp) s>> 1
                
                if (rsi_1 s> rax.d)
                    rsi_1 = rax.d
                
                if (rsi_1 s> 0)
                label_142b0bd80:
                    rbx = zx.d(*rbp)
                    
                    if (rbx s< 0x3000)
                        if (rbx s<= 0x20)
                            if (rbx != 0x20)
                                rdi = 0x40
                            
                            *r11 = rbx.b
                            goto label_142b0bdb8
                        
                        int32_t rcx_1 = rbx - rdi
                        
                        if (rcx_1 + 0x40 u<= 0x7f)
                            rdi = (rbx & 0xffffff80) + 0x40
                            rcx_1.b -= 0x70
                            *r11 = rcx_1.b
                        label_142b0bdb8:
                            r11 = &r11[1]
                            rbp = &rbp[1]
                            rsi_1 -= 1
                            
                            if (rsi_1 s> 0)
                                goto label_142b0bd80
                
                rsi_1 = *(arg1 + 0x28) - r11.d
            
            goto label_142b0bdd1
        
        if (rcx_4 + 0x2911 u<= 0x5221 && rsi_1 s>= 2)
            int32_t rcx_6
            char rdx_5
            
            if (rcx_4 s< 0)
                int32_t rdx_9 = (rcx_4 + 0x40) s/ 0xf3
                rax = zx.q(rdx_9 * 0xf3)
                rcx_6 = rcx_4 + 0x40 - rax.d
                
                if (rcx_4 + 0x40 - rax.d s< 0)
                    rdx_9 -= 1
                    rcx_6 += 0xf3
                
                rdx_5 = rdx_9.b + 0x50
            else
                rcx_6 = (rcx_4 - 0x40) s% 0xf3
                rdx_5 = ((rcx_4 - 0x40) s/ 0xf3).b - 0x30
            
            *r11 = rdx_5
            char rcx_8
            
            if (rcx_6 s< 0x14)
                rcx_8 = *(sx.q(rcx_6) + &data_143669890)
            else
                rcx_8 = rcx_6.b + 0xd
            
            r11[1] = rcx_8
            r11 = &r11[2]
            rsi_1 -= 2
            goto label_142b0bdd1
        
        rax = sub_142b0cbd0(rcx_4)
        int32_t rdx_10 = rax.d
        int32_t rcx_10
        
        if (rax.d u>= 0x4000000)
            rcx_10 = 4
        else
            rcx_10 = rax.d s>> 0x18
        
        if (rcx_10 s> rsi_1)
            uint64_t rcx_11 = zx.q(rcx_10 - rsi_1)
            void* r8_3 = r13 + 0x68
            int32_t r9_1 = rcx_11.d
            
            if (r9_1 == 1)
                *r8_3 = rdx_10.b
            else
                if (r9_1 == 2)
                    goto label_142b0bfc2
                
                if (r9_1 == 3)
                    *r8_3 = (rax.d s>> 0x10).b
                    r8_3 += 1
                label_142b0bfc2:
                    *r8_3 = (rdx_10 s>> 8).b
                    *(r8_3 + 1) = rdx_10.b
            
            *(r13 + 0x5b) = rcx_11.b
            int32_t rdx_11 = rdx_10 s>> (rcx_11 << 3).b
            
            if (rsi_1 == 1)
                *r11 = rdx_11.b
                r11 = &r11[1]
            else
                if (rsi_1 == 2)
                    goto label_142b0bff7
                
                if (rsi_1 == 3)
                    *r11 = (rdx_11 s>> 0x10).b
                    r11 = &r11[1]
                label_142b0bff7:
                    *r11 = (rdx_11 s>> 8).b
                    r11 = &r11[1]
                    *r11 = rdx_11.b
                    r11 = &r11[1]
        else
            if (rcx_10 == 3)
                goto label_142b0bf6e
            
            if (rcx_10 == 4)
                *r11 = (rax.d s>> 0x18).b
                r11 = &r11[1]
            label_142b0bf6e:
                *r11 = (rdx_10 s>> 0x10).b
                r11[1] = (rdx_10 s>> 8).b
                r11[2] = rdx_10.b
                r11 = &r11[3]
            
            rsi_1 -= rcx_10
        label_142b0bdd1:
            
            if (rbp u>= r14)
                goto label_142b0c00b
            
            if (rsi_1 s> 0)
                rbx = zx.d(*rbp)
                rbp = &rbp[1]
                
                if (rbx s> 0x20)
                    if ((rbx & 0xfffffc00) == 0xd800)
                        break
                    
                    continue
                
                if (rbx != 0x20)
                    rdi = 0x40
                
                *r11 = rbx.b
                r11 = &r11[1]
                rsi_1 -= 1
                goto label_142b0bdd1
        
        *arg2 = 0xf
        goto label_142b0c00b

rbx = neg.d(rbx)
label_142b0c00b:
int32_t rbx_3

if (rbx s>= 0)
    rbx_3 = 0
else
    rbx_3 = neg.d(rbx)

*(r13 + 0x54) = rbx_3
*(r13 + 0x50) = rdi
*(arg1 + 0x10) = rbp
*(arg1 + 0x20) = r11
