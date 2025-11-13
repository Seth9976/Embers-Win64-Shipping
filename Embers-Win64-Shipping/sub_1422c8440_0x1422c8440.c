// 函数: sub_1422c8440
// 地址: 0x1422c8440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r11 = *(arg1 + 0x21)
uint64_t r15 = zx.q((arg3 << 2).d)
int32_t rbx = 2
void* rsi = arg2 + 0x19
int32_t rbp = arg3.d
void* r14 = arg2 + 4
int64_t i_1 = 3
int64_t i

do
    uint32_t rax_3
    uint32_t rdx
    
    if (r11 == 0)
        rdx = *(arg1 + 0x24)
        int32_t rax_4
        rax_4.b = *(arg1 + 0x28) != 0
        rax_3 = (rax_4 + 2) * rdx * rbp
    else
        int32_t rcx = *(r15 + *(arg1 + 0x78))
        rax_3 = rcx u>> 8
        rdx = zx.d(rcx.b)
    
    uint64_t rdi_1 = zx.q(rbx - 2)
    uint16_t rax_8
    
    if (rdi_1.d u>= rdx)
        rax_8 = 0
    else
        int64_t rcx_2 = zx.q(rax_3) + *(arg1 + 0x38)
        
        if (*(arg1 + 0x28) == 0)
            rax_8 = zx.w(*(rdi_1 + rcx_2))
        else
            rax_8 = *(rcx_2 + (rdi_1 << 1))
    
    *(r14 - 4) = rax_8
    uint32_t rdx_2
    uint32_t r8
    
    if (r11 == 0)
        r8 = *(arg1 + 0x24)
        int32_t rdx_3
        rdx_3.b = *(arg1 + 0x28) != 0
        rdx_2 = (rdx_3 + 2) * r8 * rbp
    else
        int32_t rcx_3 = *(r15 + *(arg1 + 0x78))
        rdx_2 = rcx_3 u>> 8
        r8 = zx.d(rcx_3.b)
    
    if (rdi_1.d u>= r8)
        rdx_2.b = 0
    else
        int32_t rax_10
        rax_10.b = *(arg1 + 0x28) != 0
        rdx_2 = zx.d(*(zx.q((rax_10 + 1) * r8 + rdi_1.d) + zx.q(rdx_2) + *(arg1 + 0x38)))
    
    *(rsi - 1) = rdx_2.b
    uint32_t rax_15
    uint32_t rdx_6
    
    if (r11 == 0)
        rdx_6 = *(arg1 + 0x24)
        int32_t rax_16
        rax_16.b = *(arg1 + 0x28) != 0
        rax_15 = (rax_16 + 2) * rdx_6 * rbp
    else
        int32_t rcx_8 = *(r15 + *(arg1 + 0x78))
        rax_15 = rcx_8 u>> 8
        rdx_6 = zx.d(rcx_8.b)
    
    uint64_t r10_1 = zx.q(rbx - 1)
    uint16_t rax_20
    
    if (r10_1.d u>= rdx_6)
        rax_20 = 0
    else
        int64_t rcx_10 = zx.q(rax_15) + *(arg1 + 0x38)
        
        if (*(arg1 + 0x28) == 0)
            rax_20 = zx.w(*(r10_1 + rcx_10))
        else
            rax_20 = *(rcx_10 + (r10_1 << 1))
    
    *(r14 - 2) = rax_20
    uint32_t rdx_8
    uint32_t r8_1
    
    if (r11 == 0)
        r8_1 = *(arg1 + 0x24)
        int32_t rdx_9
        rdx_9.b = *(arg1 + 0x28) != 0
        rdx_8 = (rdx_9 + 2) * r8_1 * rbp
    else
        int32_t rcx_11 = *(r15 + *(arg1 + 0x78))
        rdx_8 = rcx_11 u>> 8
        r8_1 = zx.d(rcx_11.b)
    
    if (r10_1.d u>= r8_1)
        rdx_8.b = 0
    else
        int32_t rax_22
        rax_22.b = *(arg1 + 0x28) != 0
        rdx_8 = zx.d(*(zx.q((rax_22 + 1) * r8_1 + 1 + rdi_1.d) + zx.q(rdx_8) + *(arg1 + 0x38)))
    
    *rsi = rdx_8.b
    uint32_t rax_27
    uint32_t rdx_12
    
    if (r11 == 0)
        rdx_12 = *(arg1 + 0x24)
        int32_t rax_28
        rax_28.b = *(arg1 + 0x28) != 0
        rax_27 = (rax_28 + 2) * rdx_12 * rbp
    else
        int32_t rcx_17 = *(r15 + *(arg1 + 0x78))
        rax_27 = rcx_17 u>> 8
        rdx_12 = zx.d(rcx_17.b)
    
    uint16_t rax_32
    
    if (rbx u>= rdx_12)
        rax_32 = 0
    else
        int64_t rcx_19 = zx.q(rax_27) + *(arg1 + 0x38)
        uint64_t rax_31 = zx.q(rbx)
        
        if (*(arg1 + 0x28) == 0)
            rax_32 = zx.w(*(rax_31 + rcx_19))
        else
            rax_32 = *(rcx_19 + (rax_31 << 1))
    
    *r14 = rax_32
    uint32_t rdx_14
    uint32_t r8_2
    
    if (r11 == 0)
        r8_2 = *(arg1 + 0x24)
        int32_t rdx_15
        rdx_15.b = *(arg1 + 0x28) != 0
        rdx_14 = (rdx_15 + 2) * r8_2 * rbp
    else
        int32_t rcx_20 = *(r15 + *(arg1 + 0x78))
        rdx_14 = rcx_20 u>> 8
        r8_2 = zx.d(rcx_20.b)
    
    if (rbx u>= r8_2)
        rdx_14.b = 0
    else
        int32_t rax_34
        rax_34.b = *(arg1 + 0x28) != 0
        rdx_14 = zx.d(*(zx.q((rax_34 + 1) * r8_2 + 2 + rdi_1.d) + zx.q(rdx_14) + *(arg1 + 0x38)))
    
    *(rsi + 1) = rdx_14.b
    uint32_t rax_39
    uint32_t rdx_18
    
    if (r11 == 0)
        rdx_18 = *(arg1 + 0x24)
        int32_t rax_40
        rax_40.b = *(arg1 + 0x28) != 0
        rax_39 = (rax_40 + 2) * rdx_18 * rbp
    else
        int32_t rcx_26 = *(r15 + *(arg1 + 0x78))
        rax_39 = rcx_26 u>> 8
        rdx_18 = zx.d(rcx_26.b)
    
    uint64_t r10_2 = zx.q(rbx + 1)
    uint16_t rax_44
    
    if (r10_2.d u>= rdx_18)
        rax_44 = 0
    else
        int64_t rcx_28 = zx.q(rax_39) + *(arg1 + 0x38)
        
        if (*(arg1 + 0x28) == 0)
            rax_44 = zx.w(*(r10_2 + rcx_28))
        else
            rax_44 = *(rcx_28 + (r10_2 << 1))
    
    *(r14 + 2) = rax_44
    uint32_t rdx_20
    uint32_t r8_3
    
    if (r11 == 0)
        r8_3 = *(arg1 + 0x24)
        int32_t rdx_21
        rdx_21.b = *(arg1 + 0x28) != 0
        rdx_20 = (rdx_21 + 2) * r8_3 * rbp
    else
        int32_t rcx_29 = *(r15 + *(arg1 + 0x78))
        rdx_20 = rcx_29 u>> 8
        r8_3 = zx.d(rcx_29.b)
    
    if (r10_2.d u>= r8_3)
        rdx_20.b = 0
    else
        int32_t rax_46
        rax_46.b = *(arg1 + 0x28) != 0
        rdx_20 = zx.d(*(zx.q((rax_46 + 1) * r8_3 + 3 + rdi_1.d) + zx.q(rdx_20) + *(arg1 + 0x38)))
    
    *(rsi + 2) = rdx_20.b
    rbx += 4
    rsi += 4
    r14 += 8
    i = i_1
    i_1 -= 1
while (i != 1)
return arg2
