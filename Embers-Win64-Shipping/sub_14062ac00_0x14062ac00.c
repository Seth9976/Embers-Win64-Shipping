// 函数: sub_14062ac00
// 地址: 0x14062ac00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0] = arg1[0] + 0.5f
int32_t rcx = int.d(arg1[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== arg1[0]))
    arg1 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(arg1, arg1[0].q)) & 1)))

return zx.q(int.d(arg1[0]))
