// 函数: sub_1418eb2e0
// 地址: 0x1418eb2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xa].b = *(arg2 + 0x360)
int64_t i_4 = 8
*(arg1 + 0x51) = *(arg2 + 0x361)
void* rdi = arg2
int64_t i_3 = 8
*(arg1 + 0x52) = *(arg2 + 0x363) != 0
*(arg1 + 0x53) = *(arg2 + 0x364) != 0
*(arg1 + 0x54) = *(arg2 + 0x365) != 0
*(arg1 + 0x55) = *(arg2 + 0x367)
arg1[0xb].d = *(arg2 + 0x370)
*(arg1 + 0x5c) = float.s(zx.q(*(arg2 + 0x378)))
arg1[0xc].d = float.s(zx.q(*(arg2 + 0x37c)))
*(arg1 + 0x64) = float.s(zx.q(*(arg2 + 0x380)))
int64_t i

do
    int64_t rsi_1 = sx.q(arg1[1].d)
    int32_t rax_7 = (rsi_1 + 1).d
    arg1[1].d = rax_7
    
    if (rax_7 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int32_t* rcx_3 = (rsi_1 << 4) + *arg1
    *rcx_3 = *rdi
    int64_t rax_9 = sx.q(*(rdi + 4))
    rdi += 8
    *(rcx_3 + 8) = rax_9
    i = i_3
    i_3 -= 1
while (i != 1)
void* rsi_2 = arg2 + 0x50
int64_t i_1

do
    int64_t r14 = sx.q(arg1[3].d)
    int32_t rax_10 = (r14 + 1).d
    arg1[3].d = rax_10
    
    if (rax_10 s> *(arg1 + 0x1c))
        sub_1405a4f90(&arg1[2])
    
    int32_t* rcx_7 = (r14 << 4) + arg1[2]
    *rcx_7 = *rsi_2
    int64_t rax_12 = sx.q(*(rsi_2 + 4))
    rsi_2 += 8
    *(rcx_7 + 8) = rax_12
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
arg1[4].d = *(arg2 + 0x40)
arg1[5] = sx.q(*(arg2 + 0x44))
arg1[6].d = *(arg2 + 0x48)
arg1[7] = sx.q(*(arg2 + 0x4c))
int64_t rdi_1 = sx.q(arg1[9].d)
int32_t rax_17 = (rdi_1 + 0x12).d
arg1[9].d = rax_17

if (rax_17 s> *(arg1 + 0x4c))
    sub_1405c4e40(&arg1[8])

memset((rdi_1 << 5) + arg1[8], 0, 0x240)
int32_t i_2 = 0
int32_t* rdx_3 = 0x40
void* rbp_1 = arg2 + 0xe0
int64_t result

do
    int64_t rcx_12 = arg1[8]
    *(rdx_3 + rcx_12 - 0x40) = *(rbp_1 - 4)
    *(rdx_3 + rcx_12 - 0x3c) = *(rbp_1 - 8)
    *(rdx_3 + rcx_12 - 0x3b) = *rbp_1
    *(rdx_3 + rcx_12 - 0x3a) = *(rbp_1 + 4)
    *(rdx_3 + rcx_12 - 0x39) = *(rbp_1 + 8)
    *(rdx_3 + rcx_12 - 0x38) = *(rbp_1 + 0xc)
    *(rdx_3 + rcx_12 - 0x37) = *(rbp_1 + 0x10)
    *(rdx_3 + rcx_12 - 0x30) = sx.q(*(rbp_1 + 0x14))
    *(rdx_3 + rcx_12 - 0x28) = sx.q(*(rbp_1 + 0x18))
    int64_t rcx_13 = arg1[8]
    *(rdx_3 + rcx_13 - 0x20) = *(rbp_1 + 0x20)
    *(rdx_3 + rcx_13 - 0x1c) = *(rbp_1 + 0x1c)
    *(rdx_3 + rcx_13 - 0x1b) = *(rbp_1 + 0x24)
    *(rdx_3 + rcx_13 - 0x1a) = *(rbp_1 + 0x28)
    *(rdx_3 + rcx_13 - 0x19) = *(rbp_1 + 0x2c)
    *(rdx_3 + rcx_13 - 0x18) = *(rbp_1 + 0x30)
    *(rdx_3 + rcx_13 - 0x17) = *(rbp_1 + 0x34)
    *(rdx_3 + rcx_13 - 0x10) = sx.q(*(rbp_1 + 0x38))
    *(rdx_3 + rcx_13 - 8) = sx.q(*(rbp_1 + 0x3c))
    int64_t rcx_14 = arg1[8]
    *(rdx_3 + rcx_14) = *(rbp_1 + 0x44)
    *(rdx_3 + rcx_14 + 4) = *(rbp_1 + 0x40)
    *(rdx_3 + rcx_14 + 5) = *(rbp_1 + 0x48)
    *(rdx_3 + rcx_14 + 6) = *(rbp_1 + 0x4c)
    *(rdx_3 + rcx_14 + 7) = *(rbp_1 + 0x50)
    *(rdx_3 + rcx_14 + 8) = *(rbp_1 + 0x54)
    *(rdx_3 + rcx_14 + 9) = *(rbp_1 + 0x58)
    *(rdx_3 + rcx_14 + 0x10) = sx.q(*(rbp_1 + 0x5c))
    *(rdx_3 + rcx_14 + 0x18) = sx.q(*(rbp_1 + 0x60))
    int64_t rcx_15 = arg1[8]
    *(rdx_3 + rcx_15 + 0x20) = *(rbp_1 + 0x68)
    *(rdx_3 + rcx_15 + 0x24) = *(rbp_1 + 0x64)
    *(rdx_3 + rcx_15 + 0x25) = *(rbp_1 + 0x6c)
    *(rdx_3 + rcx_15 + 0x26) = *(rbp_1 + 0x70)
    *(rdx_3 + rcx_15 + 0x27) = *(rbp_1 + 0x74)
    *(rdx_3 + rcx_15 + 0x28) = *(rbp_1 + 0x78)
    *(rdx_3 + rcx_15 + 0x29) = *(rbp_1 + 0x7c)
    *(rdx_3 + rcx_15 + 0x30) = sx.q(*(rbp_1 + 0x80))
    *(rdx_3 + rcx_15 + 0x38) = sx.q(*(rbp_1 + 0x84))
    int64_t rcx_16 = arg1[8]
    *(rdx_3 + rcx_16 + 0x40) = *(rbp_1 + 0x8c)
    *(rdx_3 + rcx_16 + 0x44) = *(rbp_1 + 0x88)
    *(rdx_3 + rcx_16 + 0x45) = *(rbp_1 + 0x90)
    *(rdx_3 + rcx_16 + 0x46) = *(rbp_1 + 0x94)
    *(rdx_3 + rcx_16 + 0x47) = *(rbp_1 + 0x98)
    *(rdx_3 + rcx_16 + 0x48) = *(rbp_1 + 0x9c)
    *(rdx_3 + rcx_16 + 0x49) = *(rbp_1 + 0xa0)
    *(rdx_3 + rcx_16 + 0x50) = sx.q(*(rbp_1 + 0xa4))
    *(rdx_3 + rcx_16 + 0x58) = sx.q(*(rbp_1 + 0xa8))
    int64_t rcx_17 = arg1[8]
    *(rdx_3 + rcx_17 + 0x60) = *(rbp_1 + 0xb0)
    *(rdx_3 + rcx_17 + 0x64) = *(rbp_1 + 0xac)
    *(rdx_3 + rcx_17 + 0x65) = *(rbp_1 + 0xb4)
    *(rdx_3 + rcx_17 + 0x66) = *(rbp_1 + 0xb8)
    *(rdx_3 + rcx_17 + 0x67) = *(rbp_1 + 0xbc)
    *(rdx_3 + rcx_17 + 0x68) = *(rbp_1 + 0xc0)
    *(rdx_3 + rcx_17 + 0x69) = *(rbp_1 + 0xc4)
    *(rdx_3 + rcx_17 + 0x70) = sx.q(*(rbp_1 + 0xc8))
    *(rdx_3 + rcx_17 + 0x78) = sx.q(*(rbp_1 + 0xcc))
    int64_t rcx_18 = arg1[8]
    *(rdx_3 + rcx_18 + 0x80) = *(rbp_1 + 0xd4)
    *(rdx_3 + rcx_18 + 0x84) = *(rbp_1 + 0xd0)
    *(rdx_3 + rcx_18 + 0x85) = *(rbp_1 + 0xd8)
    *(rdx_3 + rcx_18 + 0x86) = *(rbp_1 + 0xdc)
    *(rdx_3 + rcx_18 + 0x87) = *(rbp_1 + 0xe0)
    *(rdx_3 + rcx_18 + 0x88) = *(rbp_1 + 0xe4)
    *(rdx_3 + rcx_18 + 0x89) = *(rbp_1 + 0xe8)
    *(rdx_3 + rcx_18 + 0x90) = sx.q(*(rbp_1 + 0xec))
    *(rdx_3 + rcx_18 + 0x98) = sx.q(*(rbp_1 + 0xf0))
    int64_t rcx_19 = arg1[8]
    *(rdx_3 + rcx_19 + 0xa0) = *(rbp_1 + 0xf8)
    *(rdx_3 + rcx_19 + 0xa4) = *(rbp_1 + 0xf4)
    *(rdx_3 + rcx_19 + 0xa5) = *(rbp_1 + 0xfc)
    *(rdx_3 + rcx_19 + 0xa6) = *(rbp_1 + 0x100)
    *(rdx_3 + rcx_19 + 0xa7) = *(rbp_1 + 0x104)
    *(rdx_3 + rcx_19 + 0xa8) = *(rbp_1 + 0x108)
    *(rdx_3 + rcx_19 + 0xa9) = *(rbp_1 + 0x10c)
    *(rdx_3 + rcx_19 + 0xb0) = sx.q(*(rbp_1 + 0x110))
    *(rdx_3 + rcx_19 + 0xb8) = sx.q(*(rbp_1 + 0x114))
    int64_t rcx_20 = arg1[8]
    *(rdx_3 + rcx_20 + 0xc0) = *(rbp_1 + 0x11c)
    *(rdx_3 + rcx_20 + 0xc4) = *(rbp_1 + 0x118)
    *(rdx_3 + rcx_20 + 0xc5) = *(rbp_1 + 0x120)
    *(rdx_3 + rcx_20 + 0xc6) = *(rbp_1 + 0x124)
    *(rdx_3 + rcx_20 + 0xc7) = *(rbp_1 + 0x128)
    rdx_3 = &rdx_3[0x48]
    char rax_95 = *(rbp_1 + 0x12c)
    rbp_1 += 0x144
    *(rdx_3 + rcx_20 - 0x58) = rax_95
    i_2 += 9
    *(rdx_3 + rcx_20 - 0x57) = *(rbp_1 - 0x14)
    *(rdx_3 + rcx_20 - 0x50) = sx.q(*(rbp_1 - 0x10))
    result = sx.q(*(rbp_1 - 0xc))
    *(rdx_3 + rcx_20 - 0x48) = result
while (i_2 u< 0x12)

return result
