// 函数: sub_141bb97d0
// 地址: 0x141bb97d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = arg3:4.d
float zmm1[0x4] = arg3.d
zmm3[0] = zmm3[0] f* *(arg2 + 0x24)
zmm1[0] = zmm1[0] f* *(arg2 + 0x1c)
zmm3[0] = zmm3[0] f* *(arg2 + 0x28)
zmm1[0] = zmm1[0] f* *(arg2 + 0x20)
zmm3[0] = zmm3[0] + zmm1[0]
zmm3[0] = zmm3[0] + zmm1[0]
zmm3[0] = zmm3[0] f+ *(arg2 + 0x2c)
zmm3[0] = zmm3[0] f+ *(arg2 + 0x30)
return sub_141b8f080(arg1, _mm_unpacklo_ps(zmm3, zmm3[0].q)[0].q, arg4, arg5) __tailcall
