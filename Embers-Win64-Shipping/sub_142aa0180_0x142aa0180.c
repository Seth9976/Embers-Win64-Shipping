// 函数: sub_142aa0180
// 地址: 0x142aa0180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = arg4

if (*(arg1 + 0x28) != 0 || *(arg1 + 0x58) != 0 || (*(arg1 + 0x20) & 1) != 0
        || sub_142a9f640(arg1, *(arg1 + 0x1c) + arg3).b == 0)
    return 

int32_t r10_1 = 1
int32_t r8 = *arg2
int32_t r11_1 = 0
int32_t r9 = 1
int32_t rax_2 = **(arg1 + 0x10)

while (true)
    int32_t rdx_2 = sx.d(rbx)
    
    if (rbx == 0)
        if (r8 s<= rax_2)
            if (r8 s>= rax_2)
                if (rax_2 == 0x110000)
                    break
                
                int64_t rdx_10 = sx.q(r11_1)
                r11_1 += 1
                *(*(arg1 + 0x30) + (rdx_10 << 2)) = rax_2
                int64_t rcx_19 = sx.q(r10_1)
                r10_1 += 1
                rax_2 = *(*(arg1 + 0x10) + (rcx_19 << 2))
                int64_t rcx_20 = sx.q(r9)
                r9 += 1
                rbx ^= 3
                r8 = arg2[rcx_20]
                continue
            else
                int64_t rcx_17 = sx.q(r9)
                r9 += 1
                rbx ^= 2
                r8 = arg2[rcx_17]
                continue
    else if (rdx_2 == 1)
        if (r8 s> rax_2)
            int64_t rcx_11 = sx.q(r10_1)
            r10_1 += 1
            rax_2 = *(*(arg1 + 0x10) + (rcx_11 << 2))
            rbx ^= 1
            continue
        else if (r8 s>= rax_2)
            if (rax_2 == 0x110000)
                break
            
            int64_t rcx_14 = sx.q(r10_1)
            r10_1 += 1
            rax_2 = *(*(arg1 + 0x10) + (rcx_14 << 2))
            int64_t rcx_15 = sx.q(r9)
            r9 += 1
            r8 = arg2[rcx_15]
            rbx ^= 3
            continue
        else
            int64_t rdx_9 = sx.q(r11_1)
            r11_1 += 1
            *(*(arg1 + 0x30) + (rdx_9 << 2)) = r8
            int64_t rcx_13 = sx.q(r9)
            r9 += 1
            r8 = arg2[rcx_13]
            rbx ^= 2
            continue
    else if (rdx_2 == 2)
        if (rax_2 s> r8)
            int64_t rcx_7 = sx.q(r9)
            r9 += 1
            rbx ^= 2
            r8 = arg2[rcx_7]
            continue
        else if (rax_2 s>= r8)
            if (rax_2 == 0x110000)
                break
            
            int64_t rcx_9 = sx.q(r10_1)
            r10_1 += 1
            rax_2 = *(*(arg1 + 0x10) + (rcx_9 << 2))
            int64_t rcx_10 = sx.q(r9)
            r9 += 1
            rbx ^= 3
            r8 = arg2[rcx_10]
            continue
        else
            int64_t rdx_8 = sx.q(r11_1)
            r11_1 += 1
            *(*(arg1 + 0x30) + (rdx_8 << 2)) = rax_2
    else if (rdx_2 != 3)
        continue
    else if (r8 s> rax_2)
        int64_t rdx_5 = sx.q(r11_1)
        r11_1 += 1
        *(*(arg1 + 0x30) + (rdx_5 << 2)) = rax_2
        int64_t rcx_1 = sx.q(r10_1)
        r10_1 += 1
        rax_2 = *(*(arg1 + 0x10) + (rcx_1 << 2))
        rbx ^= 1
        continue
    else if (r8 s>= rax_2)
        if (rax_2 == 0x110000)
            break
        
        int64_t rdx_7 = sx.q(r11_1)
        r11_1 += 1
        *(*(arg1 + 0x30) + (rdx_7 << 2)) = rax_2
        int64_t rcx_5 = sx.q(r10_1)
        r10_1 += 1
        rax_2 = *(*(arg1 + 0x10) + (rcx_5 << 2))
        int64_t rcx_6 = sx.q(r9)
        r9 += 1
        r8 = arg2[rcx_6]
        rbx ^= 3
        continue
    else
        int64_t rdx_6 = sx.q(r11_1)
        r11_1 += 1
        *(*(arg1 + 0x30) + (rdx_6 << 2)) = r8
        int64_t rcx_3 = sx.q(r9)
        r9 += 1
        r8 = arg2[rcx_3]
        rbx ^= 2
        continue
    
    int64_t rcx_16 = sx.q(r10_1)
    r10_1 += 1
    rbx ^= 1
    rax_2 = *(*(arg1 + 0x10) + (rcx_16 << 2))

*(*(arg1 + 0x30) + (sx.q(r11_1) << 2)) = 0x110000
int64_t rcx_22 = *(arg1 + 0x10)
*(arg1 + 0x1c) = r11_1 + 1
int64_t rax_12 = *(arg1 + 0x30)
*(arg1 + 0x30) = rcx_22
int32_t rcx_23 = *(arg1 + 0x18)
*(arg1 + 0x10) = rax_12
int32_t rax = *(arg1 + 0x38)
*(arg1 + 0x38) = rcx_23
int64_t rcx_24 = *(arg1 + 0x40)
*(arg1 + 0x18) = rax

if (rcx_24 == 0)
    return 

sub_142a7dcd0(rcx_24)
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
