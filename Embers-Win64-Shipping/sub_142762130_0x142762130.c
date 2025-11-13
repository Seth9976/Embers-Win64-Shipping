// 函数: sub_142762130
// 地址: 0x142762130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r9

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8 s>= rax_1)

float zmm6[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
uint64_t rdi_1 = zx.q(*(arg1 + 0x80) * zx.d(rax[1]))
*(arg1 + 0x10) = &rax[2]
int32_t result = *(arg1 + 0x44)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
int128_t* rdi_2 = rdi_1 + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rsi_1 = zx.q(result)
    uint64_t i
    
    do
        int128_t* rbx_1 = rdi_2
        float var_28[0x4] = zmm6
        rdi_2 = &rdi_2[1]
        int128_t zmm0_1
        zmm0_1, zmm6 = sub_141c46b90(&var_28)
        *rbx_1 = zmm0_1
        i = rsi_1
        rsi_1 -= 1
    while (i != 1)

return result
