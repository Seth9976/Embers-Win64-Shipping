// 函数: sub_142a9e420
// 地址: 0x142a9e420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = arg4

if (*(arg1 + 0x28) != 0 || *(arg1 + 0x58) != 0 || (*(arg1 + 0x20) & 1) != 0 || arg2 == 0
        || sub_142a9f640(arg1, *(arg1 + 0x1c) + arg3).b == 0)
    return 

int32_t r11_1 = 1
int32_t r10_1 = *arg2
uint64_t r9 = 0
int32_t rdi_1 = 1
int32_t rax_2 = **(arg1 + 0x10)

while (true)
    int32_t rdx_2 = sx.d(rsi)
    
    if (rsi == 0)
        if (r10_1 s> rax_2)
            if (r9.d s> 0)
                int64_t r8 = *(arg1 + 0x30)
                int32_t rdx_8 = (r9 - 1).d
                
                if (rax_2 s<= *(r8 + (sx.q(rdx_8) << 2)))
                    int64_t rcx_14 = *(arg1 + 0x10)
                    r9 = sx.q(rdx_8)
                    int64_t rdx_9 = sx.q(r11_1)
                    rax_2 = *(r8 + (r9 << 2))
                    
                    if (*(rcx_14 + (rdx_9 << 2)) s> rax_2)
                        rax_2 = *(rcx_14 + (rdx_9 << 2))
                    
                    r11_1 += 1
                    rsi ^= 1
                    continue
            
            int64_t rdx_10 = sx.q(r9.d)
            r9 = zx.q(r9.d + 1)
            *(*(arg1 + 0x30) + (rdx_10 << 2)) = rax_2
        label_142a9e60e:
            int64_t rcx_16 = sx.q(r11_1)
            r11_1 += 1
            rsi ^= 1
            rax_2 = *(*(arg1 + 0x10) + (rcx_16 << 2))
            continue
        else if (r10_1 s>= rax_2)
            if (rax_2 == 0x110000)
                break
            
            int32_t rdx_12
            int64_t r8_2
            
            if (r9.d s> 0)
                r8_2 = *(arg1 + 0x30)
                rdx_12 = (r9 - 1).d
            
            if (r9.d s<= 0 || rax_2 s> *(r8_2 + (sx.q(rdx_12) << 2)))
                int64_t rdx_14 = sx.q(r9.d)
                r9 = zx.q(r9.d + 1)
                *(*(arg1 + 0x30) + (rdx_14 << 2)) = rax_2
                rax_2 = *(*(arg1 + 0x10) + (sx.q(r11_1) << 2))
            else
                int64_t rcx_20 = *(arg1 + 0x10)
                r9 = sx.q(rdx_12)
                int64_t rdx_13 = sx.q(r11_1)
                rax_2 = *(r8_2 + (r9 << 2))
                
                if (*(rcx_20 + (rdx_13 << 2)) s> rax_2)
                    rax_2 = *(rcx_20 + (rdx_13 << 2))
            
            int64_t rcx_23 = sx.q(rdi_1)
            r11_1 += 1
            rdi_1 += 1
            rsi ^= 3
            r10_1 = arg2[rcx_23]
            continue
        else if (r9.d s> 0)
            int64_t r8_1 = *(arg1 + 0x30)
            int32_t rdx_11 = (r9 - 1).d
            
            if (r10_1 s<= *(r8_1 + (sx.q(rdx_11) << 2)))
                int64_t rcx_18 = sx.q(rdi_1)
                r9 = sx.q(rdx_11)
                r10_1 = *(r8_1 + (r9 << 2))
                
                if (arg2[rcx_18] s> r10_1)
                    r10_1 = arg2[rcx_18]
                
                rdi_1 += 1
                rsi ^= 2
                continue
    else if (rdx_2 == 1)
        if (r10_1 s> rax_2)
            int64_t rdx_7 = sx.q(r9.d)
            r9 = zx.q(r9.d + 1)
            *(*(arg1 + 0x30) + (rdx_7 << 2)) = rax_2
            int64_t rcx_9 = sx.q(r11_1)
            r11_1 += 1
            rax_2 = *(*(arg1 + 0x10) + (rcx_9 << 2))
            rsi ^= 1
            continue
        else if (r10_1 s>= rax_2)
            if (rax_2 == 0x110000)
                break
            
            int64_t rcx_11 = sx.q(r11_1)
            r11_1 += 1
            rax_2 = *(*(arg1 + 0x10) + (rcx_11 << 2))
            int64_t rcx_12 = sx.q(rdi_1)
            rdi_1 += 1
            r10_1 = arg2[rcx_12]
            rsi ^= 3
            continue
        else
            int64_t rcx_10 = sx.q(rdi_1)
            rdi_1 += 1
            r10_1 = arg2[rcx_10]
            rsi ^= 2
            continue
    else if (rdx_2 == 2)
        if (rax_2 s<= r10_1)
            if (rax_2 s< r10_1)
                goto label_142a9e60e
            
            if (rax_2 == 0x110000)
                break
            
            int64_t rcx_6 = sx.q(r11_1)
            r11_1 += 1
            rax_2 = *(*(arg1 + 0x10) + (rcx_6 << 2))
            int64_t rcx_7 = sx.q(rdi_1)
            rdi_1 += 1
            rsi ^= 3
            r10_1 = arg2[rcx_7]
            continue
    else if (rdx_2 != 3)
        continue
    else
        if (r10_1 s> rax_2)
            if (r10_1 == 0x110000)
                break
            
            *(*(arg1 + 0x30) + (sx.q(r9.d) << 2)) = r10_1
        else
            if (rax_2 == 0x110000)
                break
            
            *(*(arg1 + 0x30) + (sx.q(r9.d) << 2)) = rax_2
        
        rsi ^= 3
        int64_t rcx_2 = sx.q(r11_1)
        r11_1 += 1
        rax_2 = *(*(arg1 + 0x10) + (rcx_2 << 2))
        int64_t rcx_3 = sx.q(rdi_1)
        rdi_1 += 1
        r9 = zx.q(r9.d + 1)
        r10_1 = arg2[rcx_3]
        continue
    
    int64_t rdx_6 = sx.q(r9.d)
    r9 = zx.q(r9.d + 1)
    *(*(arg1 + 0x30) + (rdx_6 << 2)) = r10_1
    int64_t rcx_5 = sx.q(rdi_1)
    rdi_1 += 1
    rsi ^= 2
    r10_1 = arg2[rcx_5]

*(*(arg1 + 0x30) + (sx.q(r9.d) << 2)) = 0x110000
int64_t rcx_25 = *(arg1 + 0x10)
*(arg1 + 0x1c) = (r9 + 1).d
int64_t rax_12 = *(arg1 + 0x30)
*(arg1 + 0x30) = rcx_25
int32_t rcx_26 = *(arg1 + 0x18)
*(arg1 + 0x10) = rax_12
int32_t rax = *(arg1 + 0x38)
*(arg1 + 0x38) = rcx_26
int64_t rcx_27 = *(arg1 + 0x40)
*(arg1 + 0x18) = rax

if (rcx_27 == 0)
    return 

sub_142a7dcd0(rcx_27)
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
