// 函数: sub_1420cf540
// 地址: 0x1420cf540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 - arg1 + 1 s<= 0)
    return zx.q(arg1)

int32_t rax = *(arg3 + 4) * 0xbb38435
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg2 - arg1 + 1))
*(arg3 + 4) = rax + 0x3619636b
return zx.q(int.d((((rax + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d) + arg1)
