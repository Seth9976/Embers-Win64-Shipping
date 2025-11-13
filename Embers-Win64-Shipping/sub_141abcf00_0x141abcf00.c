// 函数: sub_141abcf00
// 地址: 0x141abcf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result[0x4] = zx.o(0)
int128_t* rdx = *(arg1 + 0x20)
int64_t i = 0
int64_t r8 = sx.q(*(arg1 + 0x28)) << 2
uint64_t r8_1 = r8 u>> 2

if (rdx u> r8 + rdx)
    r8_1 = 0

if (r8_1 == 0)
    return zx.o(0)

if (r8_1 u>= 8)
    float zmm2[0x4] = zx.o(0)
    
    do
        i += 8
        zmm2 = _mm_add_ps(zmm2, *rdx)
        float zmm0[0x4] = rdx[1]
        rdx = &rdx[2]
        result = _mm_add_ps(result, zmm0)
    while (i != (r8_1 & 0xfffffffffffffff8))
    
    float temp0_3[0x4] = _mm_add_ps(zmm2, result)
    temp0_3[0].q = temp0_3 u>> 0x40
    result = _mm_add_ps(temp0_3, temp0_3)
    float temp0_5[0x4] = _mm_shuffle_ps(result, result, 0xf5)
    result[0] = result[0] + temp0_5[0]

for (; i != r8_1; i += 1)
    result[0] = result[0] f+ *rdx
    rdx += 4

return result
