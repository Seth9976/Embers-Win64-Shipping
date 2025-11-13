// 函数: sub_142a68090
// 地址: 0x142a68090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm2 = (zx.o(0)).q
int32_t rcx = *(arg1 + 0xac)
int32_t rax = *(arg1 + 0xa8)
int32_t rdx = *(arg1 + 0xa4)

if (rax s> rdx)
    rdx = rax

int32_t rax_1 = rcx

if (rdx s> rcx)
    rax_1 = rdx

if (rax_1 != 0)
    if (rax_1 != rcx)
        zmm2 = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x34))) f+ 0.0
            f+ _mm_cvtepi32_pd(zx.q(*(arg1 + 0x30) * 0xc))
    else
        zmm2 = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x38))) + 0.0

return ((_mm_cvtepi32_pd(zx.q(*(arg1 + 0x3c))) f+ zmm2 f* 60.0)
    * 60.0 f+ _mm_cvtepi32_pd(zx.q(*(arg1 + 0x40)))) * 1000.0 f+ _mm_cvtepi32_pd(zx.q(*(arg1 + 0x44)))
