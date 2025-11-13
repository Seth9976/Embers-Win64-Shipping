// 函数: sub_141501100
// 地址: 0x141501100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(*(arg1 + 0xa8) + 0x34)

if (i == 1)
    *(arg1 + 0xb8) = 0
    return i

do
    int64_t rcx = *(arg1 + 0xa8)
    int64_t r10_2 = sx.q(i) << 5
    int128_t zmm0 = *(r10_2 + rcx)
    int128_t var_18 = *(r10_2 + rcx + 0x10)
    __builtin_memset(r10_2 + rcx, 0, 0x14)
    *(r10_2 + rcx + 0x1c) = 0
    int64_t r8_1 = *(arg1 + 0xa8)
    void* r9_1 = r10_2 + r8_1
    *((sx.q(*(r9_1 + 0x18)) << 5) + r8_1 + 0x14) = *(r10_2 + r8_1 + 0x14)
    *((sx.q(*(r9_1 + 0x14)) << 5) + *(arg1 + 0xa8) + 0x18) = *(r9_1 + 0x18)
    *(r9_1 + 0x18) = i
    *(r9_1 + 0x14) = i
    void* r8_4 = *(arg1 + 0xa8)
    *(r10_2 + r8_4 + 0x14) = 0
    *(r10_2 + r8_4 + 0x18) = *(r8_4 + 0x18)
    *((sx.q(*(r8_4 + 0x18)) << 5) + *(arg1 + 0xa8) + 0x14) = i
    *(r8_4 + 0x18) = i
    int64_t rax_1 = zmm0.q
    
    if (rax_1 != 0)
        rax_1(&var_18, zmm0:8.q)
    
    i = var_18:4.d
while (i != 1)

*(arg1 + 0xb8) = 0
return i
