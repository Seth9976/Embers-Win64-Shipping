// 函数: sub_142c353e0
// 地址: 0x142c353e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rdi = &data_14369a5d0
void* rbx = *(arg2 + 8)
uint32_t r15_2 = (zx.d(*(arg3 + 2)) << 8) + zx.d(*(arg3 + 3))
int32_t r8 = *(rbx + 0x64)

if (zx.w(*(arg3 + 6)) * 0x100 + zx.w(*(arg3 + 7)) != 0xffff)
    int64_t rdx = *(arg1 + 0x18)
    int32_t i_4 = r15_2 & 0x1f
    int128_t* const rsi_1 = &data_14369a5d0
    int128_t* rax_3 = rdx + (((zx.q(*(arg3 + 6)) << 8) + zx.q(*(arg3 + 7))) << 1)
    
    if (rax_3 u>= rdx)
        rsi_1 = rax_3
    
    char rax_4 = sub_142bf7510(*(arg1 + 8) + 0x20, rsi_1, i_4 * 2)
    int32_t rax_5 = *(rbx + 0x64)
    
    if (rax_4 == 0)
        i_4 = 0
    
    uint32_t rbp_2
    rbp_2.b = (r15_2 u>> 0xa).b & 1
    sub_142bf54e0(rbx, *(arg1 + 0x10))
    
    if (*(rbx + 0x5c) u< *(rbx + 0x60) && rbp_2.b == 0)
        sub_142c30d50(rbx)
    
    if (i_4 != 0)
        uint64_t i_2 = zx.q(i_4)
        uint64_t i
        
        do
            sub_142c22760(rbx, zx.d(*(rsi_1 + 1)) + (zx.d(*rsi_1) << 8))
            rsi_1 += 2
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t rax_9 = *(rbx + 0x5c)
    
    if (rax_9 u< *(rbx + 0x60) && rbp_2.b == 0)
        *(rbx + 0x5c) = rax_9 + 1
    
    sub_142bf54e0(rbx, rax_5 + i_4)
    int32_t r8_2 = *(rbx + 0x60)
    int32_t rax_12 = *(rbx + 0x5c) + 1
    
    if (rax_12 u< r8_2)
        r8_2 = rax_12
    
    sub_142bf5b60(rbx, *(arg1 + 0x10), r8_2)

if (test_bit(r15_2, 0xf))
    *(arg1 + 0x10) = r8

uint16_t result = zx.w(*(arg3 + 5))

if (zx.w(*(arg3 + 4)) * 0x100 + result == 0xffff)
    return result

int64_t rdx_10 = *(arg1 + 0x18)
int32_t i_5 = r15_2 u>> 5 & 0x1f
int128_t* rax_15 = rdx_10 + ((zx.q(*(arg3 + 5)) + (zx.q(*(arg3 + 4)) << 8)) << 1)

if (rax_15 u>= rdx_10)
    rdi = rax_15

char rax_16 = sub_142bf7510(*(arg1 + 8) + 0x20, rdi, i_5 * 2)
int32_t r12_1 = *(rbx + 0x64)

if (rax_16 == 0)
    i_5 = 0

uint8_t rbp_4 = (r15_2 u>> 0xb).b & 1

if (*(rbx + 0x5c) u< *(rbx + 0x60) && rbp_4 == 0 && sub_142bf50b0(rbx, 0, 1) != 0)
    int64_t rdx_12 = *(rbx + 0x70)
    uint64_t r9_1 = zx.q(*(rbx + 0x5c)) * 5
    uint64_t rcx_17 = zx.q(*(rbx + 0x64)) * 5
    int64_t rax_21 = *(rbx + 0x78)
    *(rax_21 + (rcx_17 << 2)) = *(rdx_12 + (r9_1 << 2))
    *(rax_21 + (rcx_17 << 2) + 0x10) = *(rdx_12 + (r9_1 << 2) + 0x10)
    *(rbx + 0x64) += 1

if (i_5 != 0)
    uint64_t i_3 = zx.q(i_5)
    uint64_t i_1
    
    do
        sub_142c22760(rbx, zx.d(*(rdi + 1)) + (zx.d(*rdi) << 8))
        rdi += 2
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int32_t rax_25 = *(rbx + 0x5c)

if (rax_25 u< *(rbx + 0x60) && rbp_4 == 0)
    *(rbx + 0x5c) = rax_25 + 1

if (not(test_bit(r15_2, 0xe)))
    r12_1 += i_5

return sub_142bf54e0(rbx, r12_1)
