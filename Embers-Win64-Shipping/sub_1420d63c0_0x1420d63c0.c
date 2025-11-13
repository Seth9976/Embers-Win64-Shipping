// 函数: sub_1420d63c0
// 地址: 0x1420d63c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[0] = arg2[0] * 0.0166666675f
arg2[0]
arg2[0] = arg2[0] + arg2[0]
arg2[0] = arg2[0] - 0.5f
float zmm2[0x4] = arg2
int32_t rcx = int.d(zmm2[0])
uint64_t r8_1 = zx.q(int.d(arg2[0]) s>> 1)

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm2[0]))
    zmm2 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))

arg2[0] = arg2[0] - zmm2[0]
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(r8_1.d))
arg2[0] = arg2[0] * 100f
zmm0.d = zmm0.d f* 60f
arg2[0] = arg2[0] + arg2[0]
arg2[0] = arg2[0] - 0.5f
int32_t var_18 = int.d(arg2[0]) s>> 1
sub_140a2e390(arg1, u"%02d:%02d.%02d", r8_1)
return arg1
