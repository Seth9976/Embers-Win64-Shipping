// 函数: sub_142b0c750
// 地址: 0x142b0c750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1
int64_t var_30 = arg3
void* r10 = *(arg1 + 8)
char* r11 = *(arg1 + 0x20)
int16_t* r15 = *(arg1 + 0x10)
int32_t rbp_1 = *(arg1 + 0x28) - r11.d
int32_t rsi = *(r10 + 0x50)
uint32_t rdi = *(r10 + 0x54)
int64_t r13 = *(arg1 + 0x18)

if (rsi == 0)
    rsi = 0x40

int32_t* rbx = *(arg1 + 0x30)
int32_t r14 = sbb.d(arg3.d, arg3.d, rdi != 0)
int32_t r12 = 0

if (rdi == 0)
    goto label_142b0c7c2

if (rbp_1 s<= 0)
    goto label_142b0c7c2

label_142b0c86b:
void* r10_1

if (r15 u>= r13)
    rdi = neg.d(rdi)
label_142b0cadd:
    r10_1 = r10
else
    uint32_t rcx_2 = zx.d(*r15)
    
    if ((rcx_2 & 0xfffffc00) == 0xdc00)
        r15 = &r15[1]
        r12 += 1
        rdi = ((rdi - 0xd7f7) << 0xa) + rcx_2
    
    while (true)
        int32_t rcx_4 = rdi - rsi
        
        if (rdi - 0x3040 u> 0xa763)
            rsi = (rdi & 0xffffff80) + 0x40
        else if (rdi s<= 0x309f)
            rsi = 0x3070
        else if (rdi - 0x4e00 u<= 0x51a5)
            rsi = 0x7711
        else if (rdi s< 0xac00)
            rsi = (rdi & 0xffffff80) + 0x40
        else
            rsi = 0xc1d1
        
        if (rcx_4 + 0x40 u<= 0x7f)
            rcx_4.b -= 0x70
            rbp_1 -= 1
            *r11 = rcx_4.b
            r11 = &r11[1]
            *rbx = r14
            rbx = &rbx[1]
            
            if (rdi s< 0x3000)
                arg1 = result
            label_142b0c7c2:
                int32_t rax_4 = ((r13 - r15) s>> 1).d
                
                if (rbp_1 s> rax_4)
                    rbp_1 = rax_4
                
                if (rbp_1 s> 0)
                label_142b0c7d0:
                    rdi = zx.d(*r15)
                    
                    if (rdi s< 0x3000)
                        if (rdi s<= 0x20)
                            if (rdi != 0x20)
                                rsi = 0x40
                            
                            *r11 = rdi.b
                            goto label_142b0c803
                        
                        int32_t rcx_1 = rdi - rsi
                        
                        if (rcx_1 + 0x40 u<= 0x7f)
                            rsi = (rdi & 0xffffff80) + 0x40
                            rcx_1.b -= 0x70
                            *r11 = rcx_1.b
                        label_142b0c803:
                            *rbx = r12
                            r11 = &r11[1]
                            rbx = &rbx[1]
                            r12 += 1
                            rbp_1 -= 1
                            r15 = &r15[1]
                            
                            if (rbp_1 s> 0)
                                goto label_142b0c7d0
                    
                    arg1 = result
                
                rbp_1 = *(arg1 + 0x28) - r11.d
        else if (rcx_4 + 0x2911 u> 0x5221 || rbp_1 s< 2)
            int32_t rax_20 = sub_142b0cbd0(rcx_4)
            int32_t rcx_10
            
            if (rax_20 u>= 0x4000000)
                rcx_10 = 4
            else
                rcx_10 = rax_20 s>> 0x18
            
            if (rcx_10 s> rbp_1)
                r10_1 = r10
                uint64_t rcx_11 = zx.q(rcx_10 - rbp_1)
                int32_t r9_1 = rcx_11.d
                void* rdx_13 = r10_1 + 0x68
                
                if (r9_1 == 1)
                    *rdx_13 = rax_20.b
                else
                    if (r9_1 == 2)
                        goto label_142b0ca6d
                    
                    if (r9_1 == 3)
                        *rdx_13 = (rax_20 s>> 0x10).b
                        rdx_13 += 1
                    label_142b0ca6d:
                        *rdx_13 = (rax_20 s>> 8).b
                        *(rdx_13 + 1) = rax_20.b
                
                *(r10_1 + 0x5b) = rcx_11.b
                int32_t r8_2 = rax_20 s>> (rcx_11 << 3).b
                
                if (rbp_1 == 1)
                    goto label_142b0cab8
                
                if (rbp_1 == 2)
                    goto label_142b0caab
                
                if (rbp_1 == 3)
                    *r11 = (r8_2 s>> 0x10).b
                    r11 = &r11[1]
                    *rbx = r14
                    rbx = &rbx[1]
                label_142b0caab:
                    *r11 = (r8_2 s>> 8).b
                    r11 = &r11[1]
                    *rbx = r14
                    rbx = &rbx[1]
                label_142b0cab8:
                    *r11 = r8_2.b
                    r11 = &r11[1]
                    *rbx = r14
                    rbx = &rbx[1]
                
                *arg2 = 0xf
                break
            
            if (rcx_10 == 2)
                goto label_142b0ca0f
            
            if (rcx_10 == 3)
                goto label_142b0c9fc
            
            if (rcx_10 == 4)
                *r11 = (rax_20 s>> 0x18).b
                r11 = &r11[1]
                *rbx = r14
                rbx = &rbx[1]
            label_142b0c9fc:
                *r11 = (rax_20 s>> 0x10).b
                r11 = &r11[1]
                *rbx = r14
                rbx = &rbx[1]
            label_142b0ca0f:
                *r11 = (rax_20 s>> 8).b
                *rbx = r14
                r11[1] = rax_20.b
                r11 = &r11[2]
                rbx[1] = r14
                rbx = &rbx[2]
            
            rbp_1 -= rcx_10
        else
            int32_t rcx_6
            char rdx_5
            
            if (rcx_4 s< 0)
                int32_t rdx_9 = (rcx_4 + 0x40) s/ 0xf3
                rcx_6 = (rcx_4 + 0x40) s% 0xf3
                
                if ((rcx_4 + 0x40) s% 0xf3 s< 0)
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
            *rbx = r14
            r11 = &r11[2]
            rbx[1] = r14
            rbx = &rbx[2]
            rbp_1 -= 2
        
    label_142b0c825:
        r14 = r12
        
        if (r15 u>= r13)
            goto label_142b0cadd
        
        if (rbp_1 s<= 0)
            *arg2 = 0xf
            goto label_142b0cadd
        
        rdi = zx.d(*r15)
        r12 += 1
        r15 = &r15[1]
        
        if (rdi s<= 0x20)
            if (rdi != 0x20)
                rsi = 0x40
            
            *r11 = rdi.b
            *rbx = r14
            r11 = &r11[1]
            rbx = &rbx[1]
            rbp_1 -= 1
            goto label_142b0c825
        
        if ((rdi & 0xfffffc00) == 0xd800)
            goto label_142b0c86b

int32_t rdi_3

if (rdi s>= 0)
    rdi_3 = 0
else
    rdi_3 = neg.d(rdi)

*(r10_1 + 0x54) = rdi_3
*(r10_1 + 0x50) = rsi
*(result + 0x30) = rbx
*(result + 0x10) = r15
*(result + 0x20) = r11
return result
