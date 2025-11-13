// 函数: sub_142c1e130
// 地址: 0x142c1e130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 0x80)
void* rcx = *(rdi + 0x18)
int32_t r14 = *(rdi + 0x20)
uint32_t rdx = *(rcx + 0x2c)
int32_t rbp = sx.d(zx.w(*(arg1 + 2)) * 0x100 + zx.w(*(arg1 + 3)))

if (rdx == 0)
    rdx = sub_142bf7870(rcx)

uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(r14)).d f* _mm_cvtepi32_ps(zx.o(rbp)).d
zmm2.d = zmm2.d f/ float.s(zx.q(rdx))
*arg4 = zmm2.d
int32_t rsi_1 = *(rdi + 0x24)
void* rcx_1 = *(rdi + 0x18)
int32_t rbx_1 = sx.d(zx.w(*(arg1 + 4)) * 0x100 + zx.w(*(arg1 + 5)))
uint32_t rdx_3 = *(rcx_1 + 0x2c)

if (rdx_3 == 0)
    rdx_3 = sub_142bf7870(rcx_1)

zmm2 = _mm_cvtepi32_ps(zx.o(rsi_1))
uint128_t result = _mm_cvtepi32_ps(zx.o(rbx_1))
zmm2.d = zmm2.d f* result.d
zmm2.d = zmm2.d f/ float.s(zx.q(rdx_3))
*arg5 = zmm2.d
return result
