// 函数: sub_141703230
// 地址: 0x141703230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_143ef72f0
arg1[1] = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*arg1 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg1[2] = __andps_xmmxud_memxud(data_143ef72f0, data_143ef7300)
zmm1 = data_143ef72f0
zmm1[0].q = zx.o(0) u>> 0x40
arg1[3] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg1[4] = zx.o(0)
arg1[5] = __andps_xmmxud_memxud(data_143ef72f0, data_143ef7300)
arg1[7][0].q = 0.0
(*arg1)[0x1e] = 0f
arg1[8][0].b = 1
__builtin_memset(&(*arg1)[0x21], 0, 0x18)
__builtin_memset(&(*arg1)[0x29], 0, 0x1c)
*(arg1 + 0x9c) = 1.0568533719593415e-314
*(arg1 + 0xc8) = 0.0
arg1[0xc][0] = -1.40129846e-45f
arg1[0xd][0] = arg2
zmm1 = data_143dbb0d0
int128_t zmm2 = data_143dbb0e0
*arg1 = data_143dbb0c0
arg1[1] = zmm1
arg1[2] = zmm2
int128_t zmm3 = data_143dbb0d0
zmm1 = data_143dbb0e0
arg1[3] = data_143dbb0c0
arg1[4] = zmm3
arg1[5] = zmm1
arg1[0xb][0].q = 0.0
*(arg1 + 0xb8) = 0.0
arg1[6][0].q = 0.0
*(arg1 + 0x68) = 0.0
return arg1
