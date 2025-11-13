// 函数: sub_140add100
// 地址: 0x140add100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg3)

if (arg2 == 0)
    int32_t rax = arg4[1].d
    *arg1 = *arg4
    arg1[1].d = rax
    return arg1

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_forward(arg2)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(1 << (0x18 - r11.b)))
int64_t rdx_1 = ((zx.q(temp0) & 0x1f) + (r11 << 5)) * 3
float zmm2 = 1f f/ zmm1.d
uint128_t zmm0
zmm0.d = zmm1.d f* *arg4
int32_t r8_1 = int.d(zmm0.d)
zmm0.d = zmm1.d f* *(arg4 + 4)
int32_t rcx_4 = int.d(zmm0.d)
zmm0.d = zmm1.d f* arg4[1].d
int32_t rcx_6 = (rcx_4 & 0xffffff) ^ *((rdx_1 << 2) + 0x142e6aa74)
int32_t rax_4 = int.d(zmm0.d)
zmm0 = _mm_cvtepi32_ps((zx.o(r8_1) & 0xffffff) ^ zx.o(*(&data_142e6aa70 + (rdx_1 << 2))))
int32_t rax_6 = (rax_4 & 0xffffff) ^ *((rdx_1 << 2) + 0x142e6aa78)
zmm0.d = zmm0.d f* zmm2
zmm1 = _mm_cvtepi32_ps(zx.o(rcx_6))
*arg1 = zmm0.d
zmm1.d = zmm1.d f* zmm2
zmm0.d = _mm_cvtepi32_ps(zx.o(rax_6)).d f* zmm2
*(arg1 + 4) = zmm1.d
arg1[1].d = zmm0.d
return arg1
