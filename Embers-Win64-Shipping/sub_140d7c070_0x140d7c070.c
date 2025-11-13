// 函数: sub_140d7c070
// 地址: 0x140d7c070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

POINT point
GetCursorPos(&point)
uint128_t y = zx.o(point.y)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(point.x))
y = _mm_cvtepi32_ps(y)
*arg2 = zmm0.d
arg2[1] = y.d
return arg2
