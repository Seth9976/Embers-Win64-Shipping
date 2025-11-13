// 函数: sub_142aac160
// 地址: 0x142aac160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    int64_t rax
    rax.b = 1
    return rax

if (*(arg1 + 0xaf8) != *(arg2 + 0xaf8) || *(arg1 + 0xaf9) != *(arg2 + 0xaf9))
    return 0

void* rbx = arg1 + 0x10
int64_t rbp = 0
char* rsi_1 = arg2 - arg1
int64_t rdi = 0
uint64_t rax_2

while (true)
    bool cond:0_1
    
    if ((*rbx & 1) == 0)
        int16_t rax_3 = *rbx
        int32_t r8_2
        
        if (rax_3 s< 0)
            r8_2 = *(rbx + 4)
        else
            r8_2 = sx.d(rax_3) s>> 5
        
        int16_t rax_4 = *(rsi_1 + rbx)
        
        if (rax_4 s< 0)
            rax_2 = zx.q(*(rsi_1 + rbx + 4))
        else
            rax_2 = zx.q(sx.d(rax_4) s>> 5)
        
        if ((*(rsi_1 + rbx) & 1) == 0 && r8_2 == rax_2.d)
            cond:0_1 = sub_142a490e0(rbx - 8, &rsi_1[-8] + rbx, r8_2).b == 0
            goto label_142aac22b
    else
        rax_2.b = *(rsi_1 + rbx) & 1
        cond:0_1 = rax_2.b == 0
    label_142aac22b:
        
        if (not(cond:0_1))
            rdi += 1
            rbx += 0x40
            
            if (rdi s< 0x1c)
                continue
            
            char* rbx_1 = arg1 + 0x980
            
            while (true)
                bool cond:1_1
                
                if ((*rbx_1 & 1) == 0)
                    int16_t rax_6 = *rbx_1
                    int32_t r8_4
                    
                    if (rax_6 s< 0)
                        r8_4 = *(rbx_1 + 4)
                    else
                        r8_4 = sx.d(rax_6) s>> 5
                    
                    int16_t rax_7 = *(rbx_1 + rsi_1)
                    
                    if (rax_7 s< 0)
                        rax_2 = zx.q(*(rbx_1 + rsi_1 + 4))
                    else
                        rax_2 = zx.q(sx.d(rax_7) s>> 5)
                    
                    if ((*(rbx_1 + rsi_1) & 1) != 0)
                        goto label_142aac3af
                    
                    if (r8_4 != rax_2.d)
                        goto label_142aac3af
                    
                    cond:1_1 = sub_142a490e0(&rbx_1[-8], &rsi_1[-8] + rbx_1, r8_4).b == 0
                else
                    rax_2.b = *(rbx_1 + rsi_1) & 1
                    cond:1_1 = rax_2.b == 0
                
                if (cond:1_1)
                    goto label_142aac3af
                
                bool cond:2_1
                
                if ((rbx_1[0xc0] & 1) == 0)
                    int16_t rax_9 = *(rbx_1 + 0xc0)
                    int32_t r8_6
                    
                    if (rax_9 s< 0)
                        r8_6 = *(rbx_1 + 0xc4)
                    else
                        r8_6 = sx.d(rax_9) s>> 5
                    
                    int16_t rax_10 = *(rbx_1 + rsi_1 + 0xc0)
                    
                    if (rax_10 s< 0)
                        rax_2 = zx.q(*(rbx_1 + rsi_1 + 0xc4))
                    else
                        rax_2 = zx.q(sx.d(rax_10) s>> 5)
                    
                    if ((*(rbx_1 + rsi_1 + 0xc0) & 1) != 0)
                        goto label_142aac3af
                    
                    if (r8_6 != rax_2.d)
                        goto label_142aac3af
                    
                    cond:2_1 = sub_142a490e0(&rbx_1[0xb8], &rsi_1[0xb8] + rbx_1, r8_6).b == 0
                else
                    rax_2.b = *(rbx_1 + rsi_1 + 0xc0) & 1
                    cond:2_1 = rax_2.b == 0
                
                if (cond:2_1)
                    goto label_142aac3af
                
                rbp += 1
                rbx_1 = &rbx_1[0x40]
                
                if (rbp s>= 3)
                    if (sub_142a45d30(arg1 + 0x750, arg2 + 0x750) == 0)
                        return 0
                    
                    void* rax_13 = arg1 + 0x8cd
                    int64_t r8_8 = arg2 + 0x8cd - rax_13
                    uint32_t i
                    uint32_t rdx_7
                    
                    do
                        rdx_7 = zx.d(*rax_13)
                        i = zx.d(*(rax_13 + r8_8))
                        
                        if (rdx_7 != i)
                            break
                        
                        rax_13 += 1
                    while (i != 0)
                    
                    if (rdx_7 - i != 0)
                        return 0
                    
                    rax_2 = arg1 + 0x830
                    void* r8_10 = arg2 + 0x830 - rax_2
                    uint32_t i_1
                    uint32_t rdx_9
                    
                    do
                        rdx_9 = zx.d(*rax_2)
                        i_1 = zx.d(*(rax_2 + r8_10))
                        
                        if (rdx_9 != i_1)
                            break
                        
                        rax_2 += 1
                    while (i_1 != 0)
                    
                    if (rdx_9 - i_1 != 0)
                        return 0
                    
                    rax_2.b = 1
                    break
            
            break
label_142aac3af:
    rax_2.b = 0
    break

return rax_2
