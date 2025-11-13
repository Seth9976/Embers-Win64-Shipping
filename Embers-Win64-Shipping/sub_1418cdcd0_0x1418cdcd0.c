// 函数: sub_1418cdcd0
// 地址: 0x1418cdcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = zx.o(0)
zmm1[0] = float.s(zx.q(arg3.d))
zmm1[0] = zmm1[0] * 16f

if (zmm1[0] >= 0f)
    int32_t rcx = int.d(zmm1[0])
    
    if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1[0]))
        zmm1 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
else
    int32_t r9_1 = int.d(zmm1[0])
    
    if (r9_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(r9_1)).d f== zmm1[0]))
        zmm1 = _mm_cvtepi32_ps(zx.o(r9_1
            + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1) ^ 1)))

*arg1 = (int.q(zmm1[0])).d
sub_1418cf420(&arg1[2], arg2, arg3)
void* rcx_3 = &arg1[0xc]
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_7 = *(rcx_3 + 0x10)

if (rax_7 != 0)
    rcx_3 = rax_7

*rcx_3 = 0
*(rcx_3 + 8) = 0
void* rcx_4 = &arg1[0x20]
arg1[0x14] = 0xffffffff
arg1[0x15] = 0
*(arg1 + 0x60) = 0
arg1[0x1a] = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_8 = *(rcx_4 + 0x10)

if (rax_8 != 0)
    rcx_4 = rax_8

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x28] = 0xffffffff
arg1[0x29] = 0
*(arg1 + 0xb0) = 0
arg1[0x2e] = 0
arg1[0x30] = 0
return arg1
