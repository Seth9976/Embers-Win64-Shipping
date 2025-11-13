// 函数: sub_141e755a0
// 地址: 0x141e755a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg3 == 0)
    int64_t rax
    rax.b = 0
    return rax

double zmm0 = *(arg1 + 0x360)
*(arg3 + 0x10) = zmm0
float zmm1[0x2] = _mm_cvtps_pd(*(arg2 + 0x80)) f+ zmm0
*(arg3 + 0x18) = zmm1
zmm0 = _mm_cvtps_pd(*(arg2 + 0x84))
*(arg3 + 0x28) = -0x4010000000000000
*(arg3 + 0x30) = -0x4010000000000000
zmm0 = zmm0 f+ zmm1
*(arg3 + 0x20) = zmm0
zmm1 = *(arg2 + 0x88)

if (not(zmm1[0] < 0f))
    zmm1 = _mm_cvtps_pd(zmm1) f+ zmm0
    *(arg3 + 0x28) = zmm1
    *(arg3 + 0x30) = _mm_cvtps_pd(*(arg2 + 0x8c)) f+ zmm1

*(arg3 + 0x38) = 0
sub_141e74db0(arg1, arg2, zx.o(0), zx.o(0))
int64_t rax_1
rax_1.b = 1
return rax_1
