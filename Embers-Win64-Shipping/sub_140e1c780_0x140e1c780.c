// 函数: sub_140e1c780
// 地址: 0x140e1c780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x910) == 0)
    *(arg1 + 0x780) = arg2
    return 

uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(int.d(fconvert.t(arg2:4.d))))
sub_140e238f0(arg1, _mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(int.d(fconvert.t(arg2.d)))), zmm0.q)[0].q)
jump(*(**(arg1 + 0x910) + 0x18))
