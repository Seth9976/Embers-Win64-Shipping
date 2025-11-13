// 函数: sub_142bcf570
// 地址: 0x142bcf570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
void* result_1 = arg1
memset(arg3, 0, 0x2d0)
memset(arg3 + 0xc0, 0, 0x178)
uint32_t i_12 = zx.d(*(arg2 + 8))
*(arg3 + 0xc0) = i_12.b
uint64_t i_6 = zx.q(i_12)

if (i_12.b != 0)
    void* rcx_2 = arg3 + 0xc4
    void* rdx = arg2 + 0xc
    uint64_t i
    
    do
        int32_t rax = sx.d(*rdx)
        rdx += 2
        *rcx_2 = rax
        rcx_2 += 4
        i = i_6
        i_6 -= 1
    while (i != 1)

uint32_t i_13 = zx.d(*(arg2 + 9))
*(arg3 + 0xc1) = i_13.b
uint64_t i_7 = zx.q(i_13)

if (i_13.b != 0)
    void* rcx_3 = arg3 + 0xfc
    void* rdx_1 = arg2 + 0x28
    uint64_t i_1
    
    do
        int32_t rax_1 = sx.d(*rdx_1)
        rdx_1 += 2
        *rcx_3 = rax_1
        rcx_3 += 4
        i_1 = i_7
        i_7 -= 1
    while (i_1 != 1)

uint32_t i_14 = zx.d(*(arg2 + 0xa))
*(arg3 + 0xc2) = i_14.b
uint64_t i_8 = zx.q(i_14)

if (i_14.b != 0)
    void* rcx_4 = arg3 + 0x124
    void* rdx_2 = arg2 + 0x3c
    uint64_t i_2
    
    do
        int32_t rax_2 = sx.d(*rdx_2)
        rdx_2 += 2
        *rcx_4 = rax_2
        rcx_4 += 4
        i_2 = i_8
        i_8 -= 1
    while (i_2 != 1)

uint32_t i_15 = zx.d(*(arg2 + 0xb))
*(arg3 + 0xc3) = i_15.b
uint64_t i_9 = zx.q(i_15)

if (i_15.b != 0)
    void* rcx_5 = arg3 + 0x15c
    void* rdx_3 = arg2 + 0x58
    uint64_t i_3
    
    do
        int32_t rax_3 = sx.d(*rdx_3)
        rdx_3 += 2
        *rcx_5 = rax_3
        rcx_5 += 4
        i_3 = i_9
        i_9 -= 1
    while (i_3 != 1)

*(arg3 + 0x184) = *(arg2 + 0x6c)
*(arg3 + 0x188) = *(arg2 + 0x70)
*(arg3 + 0x18c) = *(arg2 + 0x74)
*(arg3 + 0x190) = zx.d(*(arg2 + 0x78))
*(arg3 + 0x194) = zx.d(*(arg2 + 0x7a))
uint32_t i_16 = zx.d(*(arg2 + 0x7c))
*(arg3 + 0x198) = i_16.b
uint64_t i_10 = zx.q(i_16)

if (i_16.b != 0)
    void* rcx_6 = arg3 + 0x19c
    void* rdx_4 = arg2 + 0x80
    uint64_t i_4
    
    do
        int32_t rax_9 = sx.d(*rdx_4)
        rdx_4 += 2
        *rcx_6 = rax_9
        rcx_6 += 4
        i_4 = i_10
        i_10 -= 1
    while (i_4 != 1)

uint32_t i_17 = zx.d(*(arg2 + 0x7d))
*(arg3 + 0x199) = i_17.b
uint64_t i_11 = zx.q(i_17)

if (i_17.b != 0)
    void* rcx_7 = arg3 + 0x1d0
    void* rdx_5 = arg2 + 0x9a
    uint64_t i_5
    
    do
        int32_t rax_10 = sx.d(*rdx_5)
        rdx_5 += 2
        *rcx_7 = rax_10
        rcx_7 += 4
        i_5 = i_11
        i_11 -= 1
    while (i_5 != 1)

*(arg3 + 0x204) = *(arg2 + 0x7e)
*(arg3 + 0x20c) = *(arg2 + 4)
*(arg3 + 0x210) = *(arg2 + 0xb8)
*(arg3 + 0x214) = *(arg2 + 0xb4)
*(arg3 + 0x230) = arg_18
void* const result = result_1
int32_t rdx_6 = *(*(result + 0xd0) + 0x5c)

if (rdx_6 != 0xffffffff)
    *(arg_18 + 0x2c8) = rdx_6
    void** rcx_10 = result_1 + 0xd0
    result = *rcx_10
    
    if (*(result + 0x5c) != 0)
        do
            void* rdx_7 = *rcx_10
            int32_t rcx_11 = *(rdx_7 + 0x5c)
            int32_t rcx_12 = rcx_11 ^ rcx_11 << 0xd
            int32_t rcx_13 = rcx_12 ^ rcx_12 u>> 0x11
            *(rdx_7 + 0x5c) = rcx_13 << 5 ^ rcx_13
            rcx_10 = result_1 + 0xd0
            result = *rcx_10
        while (*(result + 0x5c) s< 0)

void* rdx_8 = arg_18

if (*(rdx_8 + 0x2c8) == 0)
    void arg_10
    int32_t rcx_16 = &arg_10 ^ &result_1 ^ &arg_18
    int32_t rcx_17 = rcx_16 ^ (rcx_16 u>> 0xa ^ rcx_16) u>> 0xa
    result = 0x7384
    
    if (rcx_17 == 0)
        rcx_17 = 0x7384
    
    *(rdx_8 + 0x2c8) = rcx_17

return result
