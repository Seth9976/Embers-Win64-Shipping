// 函数: sub_142c1fca0
// 地址: 0x142c1fca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = sub_142bfe120(arg3, (zx.d(*arg1) << 8) + zx.d(arg1[1]), 
    (zx.d(arg1[2]) << 8) + zx.d(arg1[3]), *(arg2 + 0x38), *(arg2 + 0x34))
void* rcx_1 = *(arg2 + 0x18)
int32_t zmm6 = zmm0.d
int32_t rdi = *(arg2 + 0x20)
uint32_t rax_3 = *(rcx_1 + 0x2c)

if (rax_3 == 0)
    rax_3 = sub_142bf7870(rcx_1)

zmm0.d = float.s(zx.q(rax_3))
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rdi)).d f* zmm6
zmm1.d = zmm1.d f/ zmm0.d
int64_t _X = _mm_cvtps_pd(zmm1.q)
round(_X)
return zx.q(int.d(_X))
