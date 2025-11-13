// 函数: sub_142bf57a0
// 地址: 0x142bf57a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg3 - arg2)

if (result.d u>= 2)
    uint64_t r11_1 = zx.q(arg3 - 1)
    int32_t rsi_1 = arg2
    int32_t rdi_1 = r11_1.d
    int128_t zmm1
    
    if (arg2 u< r11_1.d)
        do
            int64_t r8 = *(arg1 + 0x70)
            uint64_t rax_1 = zx.q(rsi_1)
            rsi_1 += 1
            uint64_t rcx = rax_1 * 5
            uint64_t rax_2 = zx.q(rdi_1)
            zmm1 = *(r8 + (rcx << 2))
            int32_t r10_1 = *(r8 + (rcx << 2) + 0x10)
            int128_t* r9_1 = r8 + (rcx << 2)
            rdi_1 -= 1
            uint64_t rcx_1 = rax_2 * 5
            *r9_1 = *(r8 + (rcx_1 << 2))
            r9_1[1].d = *(r8 + (rcx_1 << 2) + 0x10)
            result = *(arg1 + 0x70)
            *(result + (rcx_1 << 2)) = zmm1
            *(result + (rcx_1 << 2) + 0x10) = r10_1
        while (rsi_1 u< rdi_1)
    
    if (*(arg1 + 0x5a) != 0 && arg2 u< r11_1.d)
        do
            int64_t r8_1 = *(arg1 + 0x80)
            uint64_t rax_4 = zx.q(arg2)
            arg2 += 1
            uint64_t rcx_2 = rax_4 * 5
            zmm1 = *(r8_1 + (rcx_2 << 2))
            int32_t r10_2 = *(r8_1 + (rcx_2 << 2) + 0x10)
            int128_t* r9_2 = r8_1 + (rcx_2 << 2)
            uint64_t rcx_3 = r11_1 * 5
            r11_1 = zx.q(r11_1.d - 1)
            *r9_2 = *(r8_1 + (rcx_3 << 2))
            r9_2[1].d = *(r8_1 + (rcx_3 << 2) + 0x10)
            result = *(arg1 + 0x80)
            *(result + (rcx_3 << 2)) = zmm1
            *(result + (rcx_3 << 2) + 0x10) = r10_2
        while (arg2 u< r11_1.d)

return result
