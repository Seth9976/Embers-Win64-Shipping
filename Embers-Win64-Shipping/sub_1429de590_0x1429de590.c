// 函数: sub_1429de590
// 地址: 0x1429de590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x12c0) = 0
int32_t rax = sub_1429ddf20(arg1)

if (rax s<= 0)
    return rax

int32_t rcx = 0

while ((arg1 + 0x12c0)[sx.q(rcx) + 0x270] != 0)
    rcx += 1
    
    if (rcx s>= 4)
        break

int64_t rax_2 = sx.q(rcx)
(arg1 + 0x12c0)[rax_2 + 0x270] = 1
*(arg1 + 0x1c90) = rcx
*(arg1 + 0x12a0) = rax_2 * 0x90 + 0x780 + arg1 + 0x12c0
*(arg1 + 0x12a8) = arg1 + 0x1a40 + sx.q(*(arg1 + 0x1c94)) * 0x90
*(arg1 + 0x12b0) = arg1 + 0x1a40 + sx.q(*(arg1 + 0x1c98)) * 0x90
*(arg1 + 0x12b8) = arg1 + 0x1a40 + sx.q(*(arg1 + 0x1c9c)) * 0x90
void var_38
int32_t rsi_1

if (__intrinsic_setjmp(arg1 + 0x1320, &var_38) == 0)
    *(arg1 + 0x1318) = 1
    int32_t rax_21 = sub_142a1f510(arg1)
    int32_t var_18_1 = rax_21
    rsi_1 = rax_21
    
    if (rax_21 s>= 0)
        if (sub_1429de180(arg1 + 0x12c0) != 0)
            *(arg1 + 0x12c0) = 1
        else
            if (*(arg1 + 0x1e68) != 0)
                *(arg1 + 0x34dc) += 1
                *(arg1 + 0x1eb8) = *(arg1 + 0x1eb0)
            
            *(arg1 + 0x3818) = arg4
            *(arg1 + 0x3820) = 0
    else
        void* rax_22 = &(arg1 + 0x12c0)[sx.q(*(arg1 + 0x1c90))]
        int32_t rcx_13 = *(rax_22 + 0x9c0)
        
        if (rcx_13 s> 0)
            *(rax_22 + 0x9c0) = rcx_13 - 1
        
        *(arg1 + 0x12c0) = 1
else
    rsi_1 = rax
    (arg1 + 0x12c0)[sx.q(*(arg1 + 0x1c94)) * 0x24 + 0x202] = 1
    void* rcx_10 = &(arg1 + 0x12c0)[sx.q(*(arg1 + 0x1c90))]
    int32_t rax_19 = *(rcx_10 + 0x9c0)
    
    if (rax_19 s> 0)
        *(rcx_10 + 0x9c0) = rax_19 - 1

*(arg1 + 0x1318) = 0
return rsi_1
