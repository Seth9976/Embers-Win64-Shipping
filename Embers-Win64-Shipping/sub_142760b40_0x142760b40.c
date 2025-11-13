// 函数: sub_142760b40
// 地址: 0x142760b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_3 = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
uint32_t r11 = zx.d(*rax_3)
*(arg1 + 0x10) = &rax_3[1]
uint32_t rdx = zx.d(rax_3[1])
*(arg1 + 0x10) = &rax_3[2]
uint64_t i_1 = zx.q(*(arg1 + 0x44))
int128_t* result = zx.q(rdx * r9) + *(arg1 + 0x70)
int128_t* r11_2 = zx.q(r11 * r9) + *(arg1 + 0x70)

if (i_1.d s> 0)
    uint64_t i
    
    do
        int128_t zmm1 = *r11_2
        r11_2 = &r11_2[1]
        int128_t* result_1 = result
        result = &result[1]
        *result_1 = ((data_143f87840 ^ data_143f87810) & zmm1) ^ data_143f87810
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
