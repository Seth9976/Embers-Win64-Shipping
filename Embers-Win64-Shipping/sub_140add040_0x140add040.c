// 函数: sub_140add040
// 地址: 0x140add040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg3)

if (arg2 == 0)
    *arg1 = arg4
    return arg1

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_forward(arg2)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(1 << (0x18 - r11.b)))
int64_t rdx_3 = (zx.q(temp0) & 0x1f) + (r11 << 5)
uint128_t zmm0
zmm0.d = arg4.d.d f* zmm1.d
float zmm2 = 1f f/ zmm1.d
int32_t rcx_1 = int.d(zmm0.d)
zmm0.d = arg4:4.d.d f* zmm1.d
int32_t rax_5 = (int.d(zmm0.d) & 0xffffff) ^ *((rdx_3 << 3) + 0x142e689f4)
zmm0.d =
    _mm_cvtepi32_ps((zx.o(rcx_1) & 0xffffff) ^ zx.o(*(&data_142e689f0 + (rdx_3 << 3)))).d f* zmm2
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_5)).d f* zmm2
*arg1 = zmm0.d
*(arg1 + 4) = zmm1.d
return arg1
