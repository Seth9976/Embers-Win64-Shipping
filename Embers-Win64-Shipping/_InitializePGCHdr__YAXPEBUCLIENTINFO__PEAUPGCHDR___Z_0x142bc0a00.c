// 函数: ?InitializePGCHdr@@YAXPEBUCLIENTINFO@@PEAUPGCHDR@@@Z
// 地址: 0x142bc0a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg2, 0, 0xc4)
uint32_t i_12 = zx.d(*(arg1 + 0xc0))
*(arg2 + 8) = i_12.b
uint64_t i_6 = zx.q(i_12)

if (i_12.b != 0)
    void* rcx_1 = arg2 + 0xc
    void* rdx = arg1 + 0xc4
    uint64_t i
    
    do
        int16_t rax = *rdx
        rdx += 4
        *rcx_1 = rax
        rcx_1 += 2
        i = i_6
        i_6 -= 1
    while (i != 1)

uint32_t i_13 = zx.d(*(arg1 + 0xc1))
*(arg2 + 9) = i_13.b
uint64_t i_7 = zx.q(i_13)

if (i_13.b != 0)
    void* rcx_2 = arg2 + 0x28
    void* rdx_1 = arg1 + 0xfc
    uint64_t i_1
    
    do
        int16_t rax_1 = *rdx_1
        rdx_1 += 4
        *rcx_2 = rax_1
        rcx_2 += 2
        i_1 = i_7
        i_7 -= 1
    while (i_1 != 1)

uint32_t i_14 = zx.d(*(arg1 + 0xc2))
*(arg2 + 0xa) = i_14.b
uint64_t i_8 = zx.q(i_14)

if (i_14.b != 0)
    void* rcx_3 = arg2 + 0x3c
    void* rdx_2 = arg1 + 0x124
    uint64_t i_2
    
    do
        int16_t rax_2 = *rdx_2
        rdx_2 += 4
        *rcx_3 = rax_2
        rcx_3 += 2
        i_2 = i_8
        i_8 -= 1
    while (i_2 != 1)

uint32_t i_15 = zx.d(*(arg1 + 0xc3))
*(arg2 + 0xb) = i_15.b
uint64_t i_9 = zx.q(i_15)

if (i_15.b != 0)
    void* rcx_4 = arg2 + 0x58
    void* rdx_3 = arg1 + 0x15c
    uint64_t i_3
    
    do
        int16_t rax_3 = *rdx_3
        rdx_3 += 4
        *rcx_4 = rax_3
        rcx_4 += 2
        i_3 = i_9
        i_9 -= 1
    while (i_3 != 1)

*(arg2 + 0x6c) = *(arg1 + 0x184)
*(arg2 + 0x70) = *(arg1 + 0x188)
*(arg2 + 0x74) = *(arg1 + 0x18c)
*(arg2 + 0x78) = *(arg1 + 0x190)
*(arg2 + 0x7a) = *(arg1 + 0x194)
uint32_t i_16 = zx.d(*(arg1 + 0x198))
*(arg2 + 0x7c) = i_16.b
uint64_t i_10 = zx.q(i_16)

if (i_16.b != 0)
    void* rcx_5 = arg2 + 0x80
    void* rdx_4 = arg1 + 0x19c
    uint64_t i_4
    
    do
        int16_t rax_9 = *rdx_4
        rdx_4 += 4
        *rcx_5 = rax_9
        rcx_5 += 2
        i_4 = i_10
        i_10 -= 1
    while (i_4 != 1)

uint32_t i_17 = zx.d(*(arg1 + 0x199))
*(arg2 + 0x7d) = i_17.b
uint64_t i_11 = zx.q(i_17)

if (i_17.b != 0)
    void* rcx_6 = arg2 + 0x9a
    void* rdx_5 = arg1 + 0x1d0
    uint64_t i_5
    
    do
        int16_t rax_10 = *rdx_5
        rdx_5 += 4
        *rcx_6 = rax_10
        rcx_6 += 2
        i_5 = i_11
        i_11 -= 1
    while (i_5 != 1)

*(arg2 + 0x7e) = *(arg1 + 0x204)
*(arg2 + 0xb8) = *(arg1 + 0x210)
int32_t result = *(arg1 + 0x20c)
*(arg2 + 4) = result
return result
