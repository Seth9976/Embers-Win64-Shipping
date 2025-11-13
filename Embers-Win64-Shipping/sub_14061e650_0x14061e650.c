// 函数: sub_14061e650
// 地址: 0x14061e650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg2 + 0x20)
int64_t rax
rax.b = r8 != 0
*(arg2 + 0x20) = rax + r8
void* rax_2 = *(arg1 + 0xa8)

if (rax_2 == 0)
    rax_2 = sub_141ee69e0(arg1)

uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(fconvert.t(*(rax_2 + 0x520))))).d f+ *(arg1 + 0x194)
int32_t rax_4 = int.d(zmm0.d)

if (rax_4 s< 0 || rax_4 s>= *(arg1 + 0x1a0))
    *(arg1 + 0x190) = 0
    return rax_4

int64_t rax_5 = *(arg1 + 0x198)
*(arg1 + 0x190) = *(rax_5 + (sx.q(rax_4) << 2))
return rax_5
