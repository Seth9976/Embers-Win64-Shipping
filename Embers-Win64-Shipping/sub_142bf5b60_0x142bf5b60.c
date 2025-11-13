// 函数: sub_142bf5b60
// 地址: 0x142bf5b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg2)

if (*(arg1 + 0x59) == 0)
    return sub_142bf5c70(arg1, r10.d, arg3) __tailcall

int32_t result = -1
int32_t rbx = *(arg1 + 0x64)
int64_t rsi = *(arg1 + 0x78)

if (r10.d u< rbx)
    uint64_t i_4 = zx.q(rbx - r10.d)
    int32_t* r8_3 = rsi + ((r10 * 5 + 2) << 2)
    uint64_t i
    
    do
        if (result u>= *r8_3)
            result = *r8_3
        
        r8_3 = &r8_3[5]
        i = i_4
        i_4 -= 1
    while (i != 1)

if (*(arg1 + 0x5c) u< arg3)
    int32_t* r8_6 = *(arg1 + 0x70) + zx.q(*(arg1 + 0x5c)) * 0x14 + 8
    uint64_t i_5 = zx.q(arg3 - *(arg1 + 0x5c))
    uint64_t i_1
    
    do
        if (result u>= *r8_6)
            result = *r8_6
        
        r8_6 = &r8_6[5]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

if (r10.d u< rbx)
    int32_t* rcx_2 = rsi + ((r10 * 5 + 1) << 2)
    uint64_t i_6 = zx.q(rbx - r10.d)
    uint64_t i_2
    
    do
        if (result != rcx_2[1])
            *(arg1 + 0x28) |= 0x10
            *rcx_2 |= 1
        
        rcx_2 = &rcx_2[5]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

uint64_t r8_7 = zx.q(*(arg1 + 0x5c))

if (r8_7.d u< arg3)
    int32_t* rcx_3 = *(arg1 + 0x70) + ((r8_7 * 5 + 1) << 2)
    uint64_t i_7 = zx.q(arg3 - r8_7.d)
    uint64_t i_3
    
    do
        if (result != rcx_3[1])
            *(arg1 + 0x28) |= 0x10
            *rcx_3 |= 1
        
        rcx_3 = &rcx_3[5]
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)

return result
