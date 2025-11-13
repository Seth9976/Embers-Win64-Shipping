// 函数: sub_140804ba0
// 地址: 0x140804ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xb0) -= 1
int32_t r11 = 0
int32_t i = 0
uint64_t rbx = zx.q(arg2)
int32_t rdi = *(*(arg1 + 0x10) + 0x20)

if (rdi u>= 4)
    int32_t rsi_1 = 2
    
    do
        int64_t rdx = *(arg1 + 0x18)
        uint64_t r8_2 = zx.q(*(arg1 + 0xb8) * i)
        i += 4
        *(rdx + (rbx << 2) + r8_2) = *(rdx + (zx.q(*(arg1 + 0xb0)) << 2) + r8_2)
        uint64_t rdx_3 = zx.q((rsi_1 - 1) * *(arg1 + 0xb8))
        int64_t r8_3 = *(arg1 + 0x18)
        *(rdx_3 + (rbx << 2) + r8_3) = *(rdx_3 + (zx.q(*(arg1 + 0xb0)) << 2) + r8_3)
        int64_t r8_4 = *(arg1 + 0x18)
        uint64_t rdx_6 = zx.q(*(arg1 + 0xb8) * rsi_1)
        *(rdx_6 + (rbx << 2) + r8_4) = *(rdx_6 + (zx.q(*(arg1 + 0xb0)) << 2) + r8_4)
        uint64_t rdx_9 = zx.q((rsi_1 + 1) * *(arg1 + 0xb8))
        rsi_1 += 4
        int64_t r8_5 = *(arg1 + 0x18)
        *(rdx_9 + (rbx << 2) + r8_5) = *(rdx_9 + (zx.q(*(arg1 + 0xb0)) << 2) + r8_5)
    while (i u< rdi - 3)

while (i u< rdi)
    int64_t rdx_11 = *(arg1 + 0x18)
    uint64_t r8_7 = zx.q(*(arg1 + 0xb8) * i)
    i += 1
    *(rdx_11 + (rbx << 2) + r8_7) = *(rdx_11 + (zx.q(*(arg1 + 0xb0)) << 2) + r8_7)

uint64_t result = *(arg1 + 0x10)
int32_t r10 = *(result + 0x24)

if (r10 != 0)
    do
        int64_t rdx_13 = *(arg1 + 0x28)
        uint64_t r8_9 = zx.q(*(arg1 + 0xbc) * r11)
        r11 += 1
        result = zx.q(*(rdx_13 + (zx.q(*(arg1 + 0xb0)) << 2) + r8_9))
        *(rdx_13 + (rbx << 2) + r8_9) = result.d
    while (r11 u< r10)

return result
