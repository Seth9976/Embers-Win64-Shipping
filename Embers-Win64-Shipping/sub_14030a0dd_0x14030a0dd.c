// 函数: sub_14030a0dd
// 地址: 0x14030a0dd
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = zx.o(0)
float zmm0[0x4] = zx.o(0)

if ((arg2 & 4) != 0)
    zmm1 = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zx.o(0), zx.o(0), 0x30), 0x84)

int512_t zmm15
zmm15.o = arg4

if ((arg2 & 8) != 0)
    zmm0 = _mm_shuffle_ps(zx.o(0), zmm1, 0x20)
    zmm1 = _mm_shuffle_ps(zmm1, zmm0, 0x24)

int512_t zmm6
zmm6.o = zmm1
return sub_14030a18c(zmm0, arg2, arg3, zmm1) __tailcall
