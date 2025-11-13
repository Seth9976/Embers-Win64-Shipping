// 函数: sub_140e21b10
// 地址: 0x140e21b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg2 + 8)
int64_t zmm2 = *(arg2 + 4)
float zmm1[0x4] = *(arg2 + 0xc)
zmm0[0] = zmm0[0] f- *arg2
zmm1[0] = zmm1[0] f- zmm2.d
int64_t r8 = _mm_unpacklo_ps(zmm0, zmm1[0].q)[0].q
return sub_140e21b40(arg1, _mm_unpacklo_ps(*arg2, zmm2)[0].q, r8) __tailcall
