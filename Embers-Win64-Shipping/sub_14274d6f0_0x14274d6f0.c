// 函数: sub_14274d6f0
// 地址: 0x14274d6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_5 = *(arg1 + 0x10)
int32_t i_2 = *(arg1 + 0x44)
uint64_t r8 = zx.q(*rax_5)
*(arg1 + 0x10) = &rax_5[1]
uint64_t r9 = zx.q(rax_5[1])
*(arg1 + 0x10) = &rax_5[2]
uint32_t rdx = zx.d(rax_5[2])
*(arg1 + 0x10) = &rax_5[3]
void* result = zx.q(rdx * *(arg1 + 0x80)) + *(arg1 + 0x70)
int64_t* rdx_2 = r8 * 0x70 + *(arg1 + 0x50)
int128_t* r8_1 = *(*rdx_2 + (r9 << 3)) + (sx.q(*(rdx_2 + 0x14)) << 2)

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        result += 0x10
        float zmm0[0x4] = *r8_1
        *(result - 0x10) = _mm_shuffle_ps(zmm0, zmm0, 0)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
