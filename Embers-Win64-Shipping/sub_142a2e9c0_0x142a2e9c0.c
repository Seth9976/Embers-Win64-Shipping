// 函数: sub_142a2e9c0
// 地址: 0x142a2e9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg1 + 0x34b5
void* arg_8 = r12
uint64_t result = sub_142a20ce0(arg1 + 0x36a0, 0x80)
*(arg1 + 0x1e80) = result.d
*(arg1 + 0x3827) = 0

if (result.d != 0)
    int32_t rbp_1 = 0
    int32_t r14_1 = 7
    int32_t temp0_1
    
    do
        int32_t rsi_1 = 0
        int32_t result_1 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
        
        if (*(arg1 + 0x36b8) s< 0)
            sub_142a2e350(arg1 + 0x36a0)
        
        int64_t r8_1 = *(arg1 + 0x36b0)
        uint64_t rcx_3 = zx.q(result_1) << 0x38
        
        if (r8_1 u>= rcx_3)
            rsi_1 = 1
            result_1 = *(arg1 + 0x36bc) - result_1
            r8_1 -= rcx_3
        
        result = zx.q(result_1)
        uint32_t rdx_1 = zx.d(*(result + &data_143609200))
        *(arg1 + 0x36b8) -= rdx_1
        rbp_1 |= rsi_1 << r14_1.b
        *(arg1 + 0x36b0) = r8_1 << rdx_1.b
        temp0_1 = r14_1
        r14_1 -= 1
        *(arg1 + 0x36bc) = result_1 << rdx_1.b
    while (temp0_1 - 1 s>= 0)
    *(arg1 + 0x3827) = rbp_1.b

if (*(arg1 + 0x1e64) == 0)
    return result

int32_t r14_2 = 0
int32_t rbp_2 = 7
int32_t temp1_1

do
    int32_t rsi_3 = 0
    int32_t rdi_10 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
    
    if (*(arg1 + 0x36b8) s< 0)
        sub_142a2e350(arg1 + 0x36a0)
    
    int64_t r8_3 = *(arg1 + 0x36b0)
    uint64_t rcx_9 = zx.q(rdi_10) << 0x38
    
    if (r8_3 u>= rcx_9)
        rsi_3 = 1
        rdi_10 = *(arg1 + 0x36bc) - rdi_10
        r8_3 -= rcx_9
    
    uint32_t rdx_2 = zx.d(*(zx.q(rdi_10) + &data_143609200))
    *(arg1 + 0x36b8) -= rdx_2
    r14_2 |= rsi_3 << rbp_2.b
    *(arg1 + 0x36b0) = r8_3 << rdx_2.b
    temp1_1 = rbp_2
    rbp_2 -= 1
    *(arg1 + 0x36bc) = rdi_10 << rdx_2.b
while (temp1_1 - 1 s>= 0)
*(arg1 + 0x3824) = r14_2.b
int32_t r14_3 = 0
int32_t rbp_3 = 7
int32_t temp2_1

do
    int32_t rsi_5 = 0
    int32_t rdi_16 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
    
    if (*(arg1 + 0x36b8) s< 0)
        sub_142a2e350(arg1 + 0x36a0)
    
    int64_t r8_5 = *(arg1 + 0x36b0)
    uint64_t rcx_15 = zx.q(rdi_16) << 0x38
    
    if (r8_5 u>= rcx_15)
        rsi_5 = 1
        rdi_16 = *(arg1 + 0x36bc) - rdi_16
        r8_5 -= rcx_15
    
    uint32_t rdx_3 = zx.d(*(zx.q(rdi_16) + &data_143609200))
    *(arg1 + 0x36b8) -= rdx_3
    r14_3 |= rsi_5 << rbp_3.b
    *(arg1 + 0x36b0) = r8_5 << rdx_3.b
    temp2_1 = rbp_3
    rbp_3 -= 1
    *(arg1 + 0x36bc) = rdi_16 << rdx_3.b
while (temp2_1 - 1 s>= 0)
*(arg1 + 0x3825) = r14_3.b
int32_t r14_4 = 0
int32_t rbp_4 = 7
int32_t temp3_1

do
    int32_t rsi_7 = 0
    int32_t rdi_22 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
    
    if (*(arg1 + 0x36b8) s< 0)
        sub_142a2e350(arg1 + 0x36a0)
    
    int64_t r8_7 = *(arg1 + 0x36b0)
    uint64_t rcx_21 = zx.q(rdi_22) << 0x38
    
    if (r8_7 u>= rcx_21)
        rsi_7 = 1
        rdi_22 = *(arg1 + 0x36bc) - rdi_22
        r8_7 -= rcx_21
    
    uint32_t rdx_4 = zx.d(*(zx.q(rdi_22) + &data_143609200))
    *(arg1 + 0x36b8) -= rdx_4
    r14_4 |= rsi_7 << rbp_4.b
    *(arg1 + 0x36b0) = r8_7 << rdx_4.b
    temp3_1 = rbp_4
    rbp_4 -= 1
    *(arg1 + 0x36bc) = rdi_22 << rdx_4.b
while (temp3_1 - 1 s>= 0)
*(arg1 + 0x3826) = r14_4.b

if (sub_142a20ce0(arg1 + 0x36a0, 0x80) != 0)
    for (int64_t i = 0; i s< 4; i += 1)
        int32_t rbp_5 = 0
        int32_t r14_5 = 7
        int32_t temp4_1
        
        do
            int32_t rsi_9 = 0
            int32_t rdi_28 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
            
            if (*(arg1 + 0x36b8) s< 0)
                sub_142a2e350(arg1 + 0x36a0)
            
            int64_t r8_9 = *(arg1 + 0x36b0)
            uint64_t rcx_28 = zx.q(rdi_28) << 0x38
            
            if (r8_9 u>= rcx_28)
                rsi_9 = 1
                rdi_28 = *(arg1 + 0x36bc) - rdi_28
                r8_9 -= rcx_28
            
            uint32_t rdx_5 = zx.d(*(zx.q(rdi_28) + &data_143609200))
            *(arg1 + 0x36b8) -= rdx_5
            rbp_5 |= rsi_9 << r14_5.b
            *(arg1 + 0x36b0) = r8_9 << rdx_5.b
            temp4_1 = r14_5
            r14_5 -= 1
            *(arg1 + 0x36bc) = rdi_28 << rdx_5.b
        while (temp4_1 - 1 s>= 0)
        *(i + arg1 + 0x308b) = rbp_5.b
    
    r12 = arg1 + 0x34b5

if (sub_142a20ce0(arg1 + 0x36a0, 0x80) != 0)
    for (int64_t i_1 = 0; i_1 s< 3; i_1 += 1)
        int32_t r14_6 = 0
        int32_t rbp_6 = 7
        int32_t temp5_1
        
        do
            int32_t rsi_11 = 0
            int32_t rdi_34 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
            
            if (*(arg1 + 0x36b8) s< 0)
                sub_142a2e350(arg1 + 0x36a0)
            
            int64_t r8_11 = *(arg1 + 0x36b0)
            uint64_t rcx_35 = zx.q(rdi_34) << 0x38
            
            if (r8_11 u>= rcx_35)
                rsi_11 = 1
                rdi_34 = *(arg1 + 0x36bc) - rdi_34
                r8_11 -= rcx_35
            
            uint32_t rdx_6 = zx.d(*(zx.q(rdi_34) + &data_143609200))
            *(arg1 + 0x36b8) -= rdx_6
            r14_6 |= rsi_11 << rbp_6.b
            *(arg1 + 0x36b0) = r8_11 << rdx_6.b
            temp5_1 = rbp_6
            rbp_6 -= 1
            *(arg1 + 0x36bc) = rdi_34 << rdx_6.b
        while (temp5_1 - 1 s>= 0)
        *(i_1 + arg1 + 0x308f) = r14_6.b
    
    r12 = arg_8

return sub_142a2f890(arg1 + 0x36a0, r12)
