// 函数: sub_141c672d0
// 地址: 0x141c672d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x348)
*(arg1 + 0x32c) &= 0xfe
*arg2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x120))).d
*arg3 = _mm_cvtepi32_ps(zx.o(*(*(arg1 + 0x88) + 0xc))).d

if (arg1 != -0x348)
    LeaveCriticalSection(arg1 + 0x348)

return arg1 + 0x318
