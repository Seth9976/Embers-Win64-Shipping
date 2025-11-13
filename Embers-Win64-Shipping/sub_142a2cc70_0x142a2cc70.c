// 函数: sub_142a2cc70
// 地址: 0x142a2cc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
uint32_t rdi_3 = (arg1[1].d + 1) << 7 u>> 8

if (*(arg1 + 0xc) s< 0)
    sub_142a23140(arg1)

int64_t r8 = *arg1
uint64_t rcx_1 = zx.q(rdi_3) << 0x38

if (r8 u>= rcx_1)
    rsi = 1
    rdi_3 = arg1[1].d - rdi_3
    r8 -= rcx_1

uint32_t rdx = zx.d(*(zx.q(rdi_3) + &data_143603f00))
int32_t r9_1 = *(arg1 + 0xc) - rdx
uint32_t rdi_4 = rdi_3 << rdx.b
*arg1 = r8 << rdx.b
*(arg1 + 0xc) = r9_1
arg1[1].d = rdi_4

if (rsi == 0)
    int32_t r14_1 = 0
    int32_t rbp_1 = rsi + 3
    int32_t temp0_1
    
    do
        int32_t rsi_1 = 0
        uint32_t rdi_8 = (arg1[1].d + 1) << 7 u>> 8
        
        if (*(arg1 + 0xc) s< 0)
            sub_142a23140(arg1)
        
        int64_t r8_2 = *arg1
        uint64_t rcx_6 = zx.q(rdi_8) << 0x38
        
        if (r8_2 u>= rcx_6)
            rsi_1 = 1
            rdi_8 = arg1[1].d - rdi_8
            r8_2 -= rcx_6
        
        uint32_t rdx_1 = zx.d(*(zx.q(rdi_8) + &data_143603f00))
        *(arg1 + 0xc) -= rdx_1
        r14_1 |= rsi_1 << rbp_1.b
        *arg1 = r8_2 << rdx_1.b
        temp0_1 = rbp_1
        rbp_1 -= 1
        arg1[1].d = rdi_8 << rdx_1.b
    while (temp0_1 - 1 s>= 0)
    return zx.q(r14_1)

int32_t rsi_3 = 0
uint32_t rdi_12 = (rdi_4 + 1) << 7 u>> 8

if (r9_1 s< 0)
    sub_142a23140(arg1)

int64_t r8_4 = *arg1
uint64_t rcx_12 = zx.q(rdi_12) << 0x38

if (r8_4 u>= rcx_12)
    rsi_3 = 1
    rdi_12 = arg1[1].d - rdi_12
    r8_4 -= rcx_12

uint32_t rdx_2 = zx.d(*(zx.q(rdi_12) + &data_143603f00))
int32_t r9_3 = *(arg1 + 0xc) - rdx_2
uint32_t rdi_13 = rdi_12 << rdx_2.b
*arg1 = r8_4 << rdx_2.b
*(arg1 + 0xc) = r9_3
arg1[1].d = rdi_13

if (rsi_3 == 0)
    int32_t r14_2 = 0
    int32_t rbp_2 = rsi_3 + 3
    int32_t temp1_1
    
    do
        int32_t rsi_4 = 0
        uint32_t rdi_17 = (arg1[1].d + 1) << 7 u>> 8
        
        if (*(arg1 + 0xc) s< 0)
            sub_142a23140(arg1)
        
        int64_t r8_6 = *arg1
        uint64_t rcx_17 = zx.q(rdi_17) << 0x38
        
        if (r8_6 u>= rcx_17)
            rsi_4 = 1
            rdi_17 = arg1[1].d - rdi_17
            r8_6 -= rcx_17
        
        uint32_t rdx_3 = zx.d(*(zx.q(rdi_17) + &data_143603f00))
        *(arg1 + 0xc) -= rdx_3
        r14_2 |= rsi_4 << rbp_2.b
        *arg1 = r8_6 << rdx_3.b
        temp1_1 = rbp_2
        rbp_2 -= 1
        arg1[1].d = rdi_17 << rdx_3.b
    while (temp1_1 - 1 s>= 0)
    return zx.q(r14_2 + 0x10)

int32_t rsi_6 = 0
uint32_t rdi_21 = (rdi_13 + 1) << 7 u>> 8

if (r9_3 s< 0)
    sub_142a23140(arg1)

int64_t r8_8 = *arg1
uint64_t rcx_23 = zx.q(rdi_21) << 0x38

if (r8_8 u>= rcx_23)
    rsi_6 = 1
    rdi_21 = arg1[1].d - rdi_21
    r8_8 -= rcx_23

uint32_t rdx_4 = zx.d(*(zx.q(rdi_21) + &data_143603f00))
*(arg1 + 0xc) -= rdx_4
*arg1 = r8_8 << rdx_4.b
arg1[1].d = rdi_21 << rdx_4.b

if (rsi_6 != 0)
    return zx.q(sub_142a2cf10(arg1) + 0x40)

int32_t rbp_3 = 0
int32_t r14_3 = rsi_6 + 4
int32_t temp2_1

do
    int32_t rsi_7 = 0
    uint32_t rdi_26 = (arg1[1].d + 1) << 7 u>> 8
    
    if (*(arg1 + 0xc) s< 0)
        sub_142a23140(arg1)
    
    int64_t r8_10 = *arg1
    uint64_t rcx_28 = zx.q(rdi_26) << 0x38
    
    if (r8_10 u>= rcx_28)
        rsi_7 = 1
        rdi_26 = arg1[1].d - rdi_26
        r8_10 -= rcx_28
    
    uint32_t rdx_5 = zx.d(*(zx.q(rdi_26) + &data_143603f00))
    *(arg1 + 0xc) -= rdx_5
    rbp_3 |= rsi_7 << r14_3.b
    *arg1 = r8_10 << rdx_5.b
    temp2_1 = r14_3
    r14_3 -= 1
    arg1[1].d = rdi_26 << rdx_5.b
while (temp2_1 - 1 s>= 0)
return zx.q(rbp_3 + 0x20)
