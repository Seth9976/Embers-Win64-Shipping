// 函数: sub_142b22b50
// 地址: 0x142b22b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg3)
int32_t r15 = *(*(arg1 + 0x10) + 0x38)
int32_t rbx_4

if (arg3 s> 7)
label_142b22c91:
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg3 + 1)
    int32_t rbx_18 = (((temp1_1 - temp0_1) s>> 1 << 0x10) + 0x800000) | r15
    
    if (arg2[sx.q(arg3 - 1)] == 0)
        while (arg2[r10 - 2] == 0)
            r10 -= 2
            arg3 -= 2
            
            if (arg2[r10 - 1] != 0)
                break
    
    uint64_t rax_18 = zx.q(sx.d(*arg2))
    int64_t rdx_14
    
    if ((arg3.b & 1) == 0)
        rdx_14 = 2
        rax_18 = zx.q(sx.d(arg2[1]) + ((rax_18 * 5).d << 1))
    else
        rdx_14 = 1
    
    int64_t rbp_1 = sx.q(arg3)
    int32_t rax_20 = ((rax_18 << 1) + 0xb).d
    int32_t rcx_9 = 8
    
    if (rdx_14 s< rbp_1)
        void* rsi_2 = &arg2[1 + rdx_14]
        int64_t i_1 = ((rbp_1 - rdx_14 - 1) u>> 1) + 1
        int64_t i
        
        do
            if (rcx_9 != 0)
                rbx_18 |= rax_20 << rcx_9.b
                rcx_9 -= 8
            else
                int32_t r8_6 = *(arg1 + 0x18)
                
                if (r8_6 s< 0x28)
                label_142b22d76:
                    int64_t rax_23 = sx.q(*(arg1 + 0x18))
                    *(arg1 + 0x18) = rax_23.d + 1
                    *(*(arg1 + 0x20) + (rax_23 << 3)) =
                        (zx.q(rbx_18) | zx.q(rax_20)) << 0x20 | 0x5000500
                    rbx_18 = r15
                    rcx_9 = 0x10
                else
                    int32_t j_1 = *(arg1 + 0x28)
                    
                    if (r8_6 s< j_1)
                        goto label_142b22d76
                    
                    if (*arg4 s> rcx_9)
                        rbx_18 = r15
                        rcx_9 = 0x10
                    else
                        int32_t j
                        
                        do
                            int32_t rax_21 = 2
                            
                            if (j_1 s< 0x3e8)
                                rax_21 = 4
                            
                            j = rax_21 * j_1
                            j_1 = j
                        while (j s< r8_6 + 1)
                        int64_t rax_22 = sub_142a5da90(arg1 + 0x20, j_1, r8_6)
                        
                        if (rax_22 != 0)
                            goto label_142b22d76
                        
                        *arg4 = 7
                        rcx_9 = (rax_22 + 0x10).d
                        rbx_18 = r15
            
            uint64_t rax_27 = zx.q(sx.d(*(rsi_2 - 1)))
            int32_t rax_28 = sx.d(*rsi_2)
            rsi_2 += 2
            rax_20 = ((zx.q(rax_28 + ((rax_27 * 5).d << 1)) << 1) + 0xb).d
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    rbx_4 = rbx_18 | (rax_20 - 1) << rcx_9.b
else
    uint64_t rbx_1 = zx.q(sx.d(*arg2))
    void* r11_1 = 1
    
    if (1 s< r10)
        do
            int32_t rcx = sx.d(*(r11_1 + arg2))
            r11_1 += 1
            rbx_1 = zx.q(rcx + ((rbx_1 * 5).d << 1))
        while (r11_1 s< r10)
    
    if (rbx_1.d s< 0x4a)
        rbx_4 = ((rbx_1.d << 0x10) + 0x20000) | r15
    else if (rbx_1.d - 0x4a s>= 0x27b0)
        if (rbx_1.d - 0x27fa s>= 0xfc040)
            goto label_142b22c91
        
        int32_t r8_2 = (rbx_1.d - 0x27fa) s/ 0xfe
        int32_t rcx_3 = r8_2 s/ 0xfe
        rbx_4 = ((rbx_1.d - 0x27fa) s% 0xfe + 2) | r15 | ((r8_2 << 8) - rcx_3 * 0xfe00 + 0x200)
            | ((rcx_3 << 0x10) - rcx_3 s/ 0xfe * 0xfe0000 + 0x740000)
    else
        int32_t rdx_3 = (rbx_1.d - 0x4a) s/ 0xfe
        rbx_4 =
            (((rbx_1.d - 0x4a) << 8) - rdx_3 * 0xfe00 + 0x200) | ((rdx_3 << 0x10) + 0x4c0000) | r15

int64_t result

if (*(arg1 + 0x18) s>= 0x28)
    result = sub_142b22f80(arg1 + 0x18, 1, arg4)

if (*(arg1 + 0x18) s< 0x28 || result.b != 0)
    int64_t rax_31 = sx.q(*(arg1 + 0x18))
    *(arg1 + 0x18) = rax_31.d + 1
    result = *(arg1 + 0x20)
    *(result + (rax_31 << 3)) = zx.q(rbx_4) << 0x20 | 0x5000500

return result
