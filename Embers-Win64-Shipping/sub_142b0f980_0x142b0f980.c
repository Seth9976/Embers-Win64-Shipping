// 函数: sub_142b0f980
// 地址: 0x142b0f980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    int64_t rax
    rax.b = 0
    return rax

int32_t i = *(arg1 + (sx.q(*(arg1 + 0x10)) << 2) + 0x20)

if (i == 0)
    int64_t rax_1
    rax_1.b = 0
    return rax_1

void* rcx = *(arg1 + 8)
int32_t arg_10 = 0
int32_t arg_18 = 0

if (sub_142b0ff10(*(rcx + 0x1f0), i, &arg_10, &arg_18) != 0)
    int32_t rax_3 = *(arg1 + 0x14)
    uint64_t r8_3 = zx.q(*(arg1 + 0x10) - 1) & 0x7f
    
    if (r8_3.d == rax_3)
        *(arg1 + 0x14) = (rax_3 - 1) & 0x7f
    
    int32_t rdx_1 = arg_10
    int16_t rax_6 = arg_18.w
    *(arg1 + (r8_3 << 2) + 0x20) = rdx_1
    *(arg1 + (r8_3 << 1) + 0x220) = rax_6
    rax_6.b = 1
    *(arg1 + 0x10) = r8_3.d
    *(arg1 + 0x1c) = r8_3.d
    *(arg1 + 0x18) = rdx_1
    return rax_6

uint64_t i_1 = zx.q(i)
int32_t rbp_1
uint64_t rsi_1

do
    if (i_1.d - 0x1e s> 0)
        int32_t i_2
        i_2, arg3 = sub_142a96f60(*(arg1 + 8), zx.q(i_1.d - 0x1e))
        i_1 = sx.q(i_2)
        
        if ((i_1 + 1).d u<= 1)
            rsi_1 = 0
            rbp_1 = 0
        else
            *(*(arg1 + 8) + 0x1e0) = i_1.d
            int32_t rax_20
            rax_20, arg3 = sub_142a96ab0(*(arg1 + 8), arg2, arg3)
            rsi_1 = sx.q(rax_20)
            
            if (rsi_1.d s<= (i_1 + 4).d)
                sub_142aeacd0(*(arg1 + 8) + 0x148, rsi_1)
                
                if (i_1 == sub_142aea6c0(*(arg1 + 8) + 0x148, arg3))
                    int32_t rax_22
                    rax_22, arg3 = sub_142a96ab0(*(arg1 + 8), arg2, arg3)
                    rsi_1 = zx.q(rax_22)
            
            rbp_1 = *(*(arg1 + 8) + 0x1e4)
    else
        i_1 = 0
        rsi_1 = 0
        rbp_1 = 0
while (rsi_1.d s>= i)

pdb_internal::Array<struct PortablePDB::MethodInfo>::reset(arg1 + 0x320)
int32_t rdx_2 = *(arg1 + 0x328)
char rax_7

if (rdx_2 + 1 s< 0 || *(arg1 + 0x32c) s< rdx_2 + 1)
    rax_7, arg3 = sub_142ae7df0(arg1 + 0x320, rdx_2 + 1, arg2)

if ((rdx_2 + 1 s>= 0 && *(arg1 + 0x32c) s>= rdx_2 + 1) || rax_7 != 0)
    *(*(arg1 + 0x338) + (sx.q(*(arg1 + 0x328)) << 2)) = rsi_1.d
    *(arg1 + 0x328) += 1

int32_t rdx_4 = *(arg1 + 0x328)
char rax_9

if (rdx_4 + 1 s< 0 || *(arg1 + 0x32c) s< rdx_4 + 1)
    rax_9, arg3 = sub_142ae7df0(arg1 + 0x320, rdx_4 + 1, arg2)

if ((rdx_4 + 1 s>= 0 && *(arg1 + 0x32c) s>= rdx_4 + 1) || rax_9 != 0)
    *(*(arg1 + 0x338) + (sx.q(*(arg1 + 0x328)) << 2)) = rbp_1
    *(arg1 + 0x328) += 1

do
    int32_t r12_1 = rsi_1.d
    int32_t r13_1 = rbp_1
    *(*(arg1 + 8) + 0x1e0) = rsi_1.d
    int32_t rax_12
    rax_12, arg3 = sub_142a96ab0(*(arg1 + 8), arg2, arg3)
    void* rcx_8 = *(arg1 + 8)
    rsi_1 = zx.q(rax_12)
    arg_10 = rax_12
    rbp_1 = *(rcx_8 + 0x1e4)
    arg_18 = rbp_1
    
    if (rax_12 == 0xffffffff)
        break
    
    if (*(rcx_8 + 0x208) == 0)
        goto label_142b0fc94
    
    arg3 = sub_142b0f1a0(*(rcx_8 + 0x1f0), r12_1, rax_12, r13_1, arg3, rbp_1)
    
    if (sub_142b0efa0(*(*(arg1 + 8) + 0x1f0), r12_1, &arg_10, &arg_18) == 0)
        rsi_1 = zx.q(arg_10)
        rbp_1 = arg_18
    label_142b0fc94:
        
        if (rsi_1.d s>= i)
            break
        
        int32_t rdx_15 = *(arg1 + 0x328)
        char rax_24
        
        if (rdx_15 + 1 s< 0 || *(arg1 + 0x32c) s< rdx_15 + 1)
            rax_24, arg3 = sub_142ae7df0(arg1 + 0x320, rdx_15 + 1, arg2)
        
        if ((rdx_15 + 1 s>= 0 && *(arg1 + 0x32c) s>= rdx_15 + 1) || rax_24 != 0)
            *(*(arg1 + 0x338) + (sx.q(*(arg1 + 0x328)) << 2)) = rsi_1.d
            *(arg1 + 0x328) += 1
        
        int32_t rdx_17 = *(arg1 + 0x328)
        char rax_26
        
        if (rdx_17 + 1 s< 0 || *(arg1 + 0x32c) s< rdx_17 + 1)
            rax_26, arg3 = sub_142ae7df0(arg1 + 0x320, rdx_17 + 1, arg2)
        
        if ((rdx_17 + 1 s>= 0 && *(arg1 + 0x32c) s>= rdx_17 + 1) || rax_26 != 0)
            *(*(arg1 + 0x338) + (sx.q(*(arg1 + 0x328)) << 2)) = rbp_1
            *(arg1 + 0x328) += 1
    else
        char j
        
        do
            int32_t rsi_2 = arg_10
            
            if (rsi_2 s>= i)
                goto label_142b0fcfb
            
            int32_t rdx_8 = *(arg1 + 0x328)
            char rax_14
            
            if (rdx_8 + 1 s< 0 || *(arg1 + 0x32c) s< rdx_8 + 1)
                rax_14, arg3 = sub_142ae7df0(arg1 + 0x320, rdx_8 + 1, arg2)
            
            if ((rdx_8 + 1 s>= 0 && *(arg1 + 0x32c) s>= rdx_8 + 1) || rax_14 != 0)
                *(*(arg1 + 0x338) + (sx.q(*(arg1 + 0x328)) << 2)) = rsi_2
                *(arg1 + 0x328) += 1
            
            int32_t rdx_10 = *(arg1 + 0x328)
            char rax_16
            
            if (rdx_10 + 1 s< 0 || *(arg1 + 0x32c) s< rdx_10 + 1)
                rax_16, arg3 = sub_142ae7df0(arg1 + 0x320, rdx_10 + 1, arg2)
            
            if ((rdx_10 + 1 s>= 0 && *(arg1 + 0x32c) s>= rdx_10 + 1) || rax_16 != 0)
                *(*(arg1 + 0x338) + (sx.q(*(arg1 + 0x328)) << 2)) = arg_18
                *(arg1 + 0x328) += 1
            
            j = sub_142b0efa0(*(*(arg1 + 8) + 0x1f0), rsi_2, &arg_10, &arg_18)
        while (j != 0)
        rsi_1 = zx.q(arg_10)
        rbp_1 = arg_18
while (rsi_1.d s< i)

label_142b0fcfb:
char r10 = 0

if (*(arg1 + 0x328) != 0)
    int32_t rax_28 = *(arg1 + 0x328)
    int16_t r8_14 = 0
    
    if (rax_28 s> 0)
        *(arg1 + 0x328) = rax_28 - 1
        r8_14 = (*(*(arg1 + 0x338) + (sx.q(rax_28 - 1) << 2))).w
    
    int32_t rax_31 = *(arg1 + 0x328)
    int32_t rdx_19 = 0
    
    if (rax_31 s> 0)
        *(arg1 + 0x328) = rax_31 - 1
        rdx_19 = *(*(arg1 + 0x338) + (sx.q(rax_31 - 1) << 2))
    
    int32_t rax_34 = *(arg1 + 0x14)
    uint64_t rcx_34 = zx.q(*(arg1 + 0x10) - 1) & 0x7f
    
    if (rcx_34.d == rax_34)
        *(arg1 + 0x14) = (rax_34 - 1) & 0x7f
    
    *(arg1 + (rcx_34 << 2) + 0x20) = rdx_19
    r10 = 1
    *(arg1 + (rcx_34 << 1) + 0x220) = r8_14
    bool cond:2_1 = *(arg1 + 0x328) == 0
    *(arg1 + 0x10) = rcx_34.d
    *(arg1 + 0x1c) = rcx_34.d
    *(arg1 + 0x18) = rdx_19
    
    if (not(cond:2_1))
        do
            int32_t rax_38 = *(arg1 + 0x328)
            int16_t r9_4 = 0
            
            if (rax_38 s> 0)
                *(arg1 + 0x328) = rax_38 - 1
                r9_4 = (*(*(arg1 + 0x338) + (sx.q(rax_38 - 1) << 2))).w
            
            int32_t rax_41 = *(arg1 + 0x328)
            int32_t r8_15 = 0
            
            if (rax_41 s> 0)
                *(arg1 + 0x328) = rax_41 - 1
                r8_15 = *(*(arg1 + 0x338) + (sx.q(rax_41 - 1) << 2))
            
            int32_t rcx_37 = *(arg1 + 0x14)
            uint64_t rdx_22 = zx.q(*(arg1 + 0x10) - 1) & 0x7f
            
            if (rdx_22.d == rcx_37)
                if (*(arg1 + 0x1c) == rcx_37)
                    break
                
                *(arg1 + 0x14) = (rcx_37 - 1) & 0x7f
            
            *(arg1 + (rdx_22 << 2) + 0x20) = r8_15
            *(arg1 + (rdx_22 << 1) + 0x220) = r9_4
            *(arg1 + 0x10) = rdx_22.d
        while (*(arg1 + 0x328) != 0)

return zx.q(r10)
