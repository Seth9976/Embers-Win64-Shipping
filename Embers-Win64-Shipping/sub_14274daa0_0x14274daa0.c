// 函数: sub_14274daa0
// 地址: 0x14274daa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x80)
int16_t* rax = *(arg1 + 0x10) + 4
*(arg1 + 0x10) = rax
uint64_t r8_1 = zx.q(r8 * zx.d(*rax))
*(arg1 + 0x10) = &rax[1]
uint64_t result = zx.q(*(arg1 + 0x40))
uint64_t result_1 = r8_1 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        result = result_1
        result_1 += 4
        *result = 0
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
