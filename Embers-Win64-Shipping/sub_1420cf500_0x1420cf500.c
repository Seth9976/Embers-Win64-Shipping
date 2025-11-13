// 函数: sub_1420cf500
// 地址: 0x1420cf500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s<= 0)
    return 0

int32_t rax = *(arg2 + 4) * 0xbb38435
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg1))
*(arg2 + 4) = rax + 0x3619636b
return zx.q(int.d((((rax + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d))
