// 函数: sub_142bab0c0
// 地址: 0x142bab0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r14 = *arg2
int32_t r13 = *(arg1 + 0x1e4)
int32_t r15 = *(arg1 + 0x1d8)
int32_t rcx = *(arg2 + 4) + 1

if (r14 u< *(arg1 + 0x84) && rcx u< *(arg1 + 0x224) + 1 && *(arg1 + 0x1c0) u< *(arg1 + 0x44))
    int32_t rbp_1 = 0
    int32_t rsi_1
    
    if (rcx != 0)
        rsi_1 = (*(arg1 + 0x358))(arg1)
    else
        rsi_1 = 0
    
    int32_t rdx_1 = *(arg1 + 0x1ec)
    int32_t rcx_3 = rsi_1 - rdx_1
    int32_t rax_6 = neg.d(rcx_3)
    
    if (rcx_3 s>= 0)
        rax_6 = rcx_3
    
    if (rax_6 s< *(arg1 + 0x1e8))
        bool cond:1_1 = rsi_1 s>= 0
        rsi_1 = rdx_1
        
        if (not(cond:1_1))
            rsi_1 = neg.d(rsi_1)
    
    if (*(arg1 + 0x1fe) == 0)
        uint64_t rbx_1 = zx.q(r14) << 3
        *(rbx_1 + *(arg1 + 0x88)) = sub_142bae100(rsi_1, sx.d(*(arg1 + 0x1ce)))
            + *(*(arg1 + 0x48) + (zx.q(*(arg1 + 0x1c0)) << 3))
        *(rbx_1 + *(arg1 + 0x88) + 4) = sub_142bae100(rsi_1, sx.d(*(arg1 + 0x1d0)))
            + *(*(arg1 + 0x48) + (zx.q(*(arg1 + 0x1c0)) << 3) + 4)
        *(rbx_1 + *(arg1 + 0x90)) = *(rbx_1 + *(arg1 + 0x88))
    
    int32_t* r9_1 = *(arg1 + 0x48) + (zx.q(*(arg1 + 0x1c0)) << 3)
    uint64_t rbx_2 = zx.q(r14) << 3
    int64_t rax_16 = *(arg1 + 0x88)
    int32_t rax_17 = (*(arg1 + 0x330))(arg1, zx.q(*(rax_16 + rbx_2) - *r9_1), 
        zx.q(*(rax_16 + rbx_2 + 4) - r9_1[1]))
    int32_t* r9_2 = *(arg1 + 0x50) + (zx.q(*(arg1 + 0x1c0)) << 3)
    int64_t rcx_14 = *(arg1 + 0x90)
    int32_t rax_18 = (*(arg1 + 0x328))(arg1, zx.q(*(rcx_14 + rbx_2) - *r9_2), 
        zx.q(*(rcx_14 + rbx_2 + 4) - r9_2[1]))
    
    if (*(arg1 + 0x1e0) != 0 && (rax_17 ^ rsi_1) s< 0)
        rsi_1 = neg.d(rsi_1)
    
    char rdx_11 = *(arg1 + 0x218)
    
    if ((rdx_11 & 4) == 0)
        int32_t rcx_21 = *(arg1 + ((zx.q(rdx_11) & 3) << 2) + 0x1ac)
        
        if (rsi_1 s< 0)
            int32_t rsi_2 = rsi_1 - rcx_21
            
            if (rsi_2 s> 0)
                rsi_2 = 0
            
            rbp_1 = rsi_2
        else
            int32_t rax_27 = rcx_21 + rsi_1
            
            if (rax_27 s>= 0)
                rbp_1 = rax_27
    else
        if (*(arg1 + 0x1fc) == *(arg1 + 0x1fe))
            int32_t rcx_19 = rsi_1 - rax_17
            int32_t rax_21 = neg.d(rcx_19)
            
            if (rcx_19 s>= 0)
                rax_21 = rcx_19
            
            if (rax_21 s> r13)
                rsi_1 = rax_17
        
        rbp_1 =
            (*(arg1 + 0x320))(arg1, zx.q(rsi_1), zx.q(*(arg1 + ((zx.q(rdx_11) & 3) << 2) + 0x1ac)))
    
    if ((*(arg1 + 0x218) & 8) != 0)
        if (rax_17 s< 0)
            int32_t r15_1 = neg.d(r15)
            
            if (rbp_1 s> r15_1)
                rbp_1 = r15_1
        else if (rbp_1 s< r15)
            rbp_1 = r15
    
    (*(arg1 + 0x340))(arg1, arg1 + 0x78, zx.q(r14), zx.q(rbp_1 - rax_18))
else if (*(arg1 + 0x315) != 0)
    *(arg1 + 0x18) = 0x86

bool cond:0 = (*(arg1 + 0x218) & 0x10) == 0
int16_t result = *(arg1 + 0x1c0)
*(arg1 + 0x1c2) = result
*(arg1 + 0x1c4) = r14

if (not(cond:0))
    *(arg1 + 0x1c0) = r14

return result
