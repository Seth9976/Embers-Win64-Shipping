// 函数: sub_142b80410
// 地址: 0x142b80410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 0
int32_t rcx = *(arg1 + 0xa0)
int32_t r9 = 0

if (rcx s> 0)
    void* rax_1 = arg1 + 0x38
    
    while (*(rax_1 - 4) == arg3)
        r11 += *rax_1
        r9 += 1
        rax_1 += 0x10
        
        if (r9 s>= rcx)
            break

int64_t rcx_1 = sx.q(arg3 + 1)
int32_t r8_1 = *(arg1 + (rcx_1 << 2) + 0x18) - *(arg1 + (rcx_1 << 2) + 4)

if (arg2 s> (r8_1 + 1) * r11)
    int32_t rax_4
    rax_4.b = 0
    return rax_4

int32_t r10 = *(arg1 + 0x2c)
int32_t rbx = *(arg1 + 0x30)
int64_t rdx = sx.q(r9)

if (rdx s> 1)
    void* rcx_2 = arg1 + 0x3c
    int64_t i_1 = rdx - 1
    int64_t i
    
    do
        if (*rcx_2 u< r10)
            r10 = *rcx_2
        
        if (*(rcx_2 + 4) u> rbx)
            rbx = *(rcx_2 + 4)
        
        rcx_2 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t temp0 = divs.dp.d(sx.q(arg2 - r11), r8_1)
int32_t rsi_1 = r11 - temp0
int32_t r14 = temp0

if (temp0 == 0 || temp0 * (r8_1 + 1) + rsi_1 s< arg2)
    r14 += 1
    rsi_1 -= 1

*(arg1 + 0x2c) = r10

if (rsi_1 != 0)
    int32_t rax_15 = sub_142b80be0(arg1, r10, arg3, rsi_1 - 1)
    *(arg1 + 0x30) = rax_15
    *(arg1 + 0x38) = rsi_1
    *(arg1 + 0x3c) = sub_142b80b10(arg1, rax_15, arg3)
    *(arg1 + 0x40) = rbx
    *(arg1 + 0x44) = arg3
    *(arg1 + 0x48) = r14
    char rcx_14 = ((4 - (arg3 + 1)) << 3).b
    int32_t r10_4 = 0xffffff00 << rcx_14
    int64_t r8_5 = sx.q(arg3 + 1)
    int32_t r10_5 = r10_4 & *(arg1 + 0x40)
    *(arg1 + 0x3c) = *(arg1 + (r8_5 << 2) + 4) << rcx_14 | (r10_4 & *(arg1 + 0x3c))
    *(arg1 + 0x40) = *(arg1 + (r8_5 << 2) + 0x18) << rcx_14 | r10_5
    int32_t rcx_17 = *(arg1 + (r8_5 << 2) + 0x18) - *(arg1 + (r8_5 << 2) + 4) + 1
    *(arg1 + 0x44) = arg3 + 1
    *(arg1 + 0x48) = r14 * rcx_17
    *(arg1 + 0xa0) = 2
else
    *(arg1 + 0x30) = rbx
    *(arg1 + 0x38) = r11
    int32_t r9_2 = *(arg1 + 0x34) + 1
    int64_t r8_2 = sx.q(r9_2)
    char rcx_7 = ((4 - r9_2) << 3).b
    int32_t r10_1 = 0xffffff00 << rcx_7
    int32_t r10_2 = r10_1 & *(arg1 + 0x30)
    *(arg1 + 0x2c) = (*(arg1 + 0x2c) & r10_1) | *(arg1 + (r8_2 << 2) + 4) << rcx_7
    *(arg1 + 0x30) = r10_2 | *(arg1 + (r8_2 << 2) + 0x18) << rcx_7
    int32_t rcx_10 = *(arg1 + (r8_2 << 2) + 0x18) - *(arg1 + (r8_2 << 2) + 4) + 1
    *(arg1 + 0x34) = r9_2
    *(arg1 + 0x38) = r11 * rcx_10
    *(arg1 + 0xa0) = 1

int32_t rax_14
rax_14.b = 1
return rax_14
