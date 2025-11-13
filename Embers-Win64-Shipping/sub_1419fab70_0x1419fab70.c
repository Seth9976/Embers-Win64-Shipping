// 函数: sub_1419fab70
// 地址: 0x1419fab70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0

if (arg8 == 0)
    zmm0 = 0x3f800000
else
    zmm0 = data_1439cbf8c

zmm0.d = zmm0.d f* *(arg4 + 8)
*(arg1 + 4) = zmm0.d
void* rax = *(arg2 + 0x130)
*(arg1 + 8) = *(rax + 0x134)
*(arg1 + 0x10) = *(rax + 0x13c)
void* rax_2 = *(arg2 + 0x130)
uint64_t var_78
int32_t var_70
uint128_t zmm1

if (rax_2 == 0)
    var_78 = data_143dbb1f8.q
    var_70 = data_143dbb200
else
    zmm1 = *(rax_2 + 0x1d0)
    var_78.d = zmm1.d
    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_70 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
    var_78:4.d = zmm0.d

*(arg1 + 0x14) = var_78
*(arg1 + 0x1c) = var_70
*(arg1 + 0x68) = *(arg2 + 0x238)
*(arg1 + 0x6c) = *(arg2 + 0x23c)
int32_t rcx = *(arg3 + 0x40c)
*(arg1 + 0x60) = *(arg3 + 0x408)
*(arg1 + 0x64) = rcx
int32_t rax_8 = *(arg3 + 0x410)
float zmm2[0x4] = *(arg1 + 8)
zmm1 = *(arg1 + 0xc)
int32_t rdx = *(arg1 + 0x60)
int32_t rcx_1 = rcx - *(arg1 + 0x6c)
int32_t rdx_1 = rdx - *(arg1 + 0x68)
uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(rax_8))
*(arg1 + 0x70) = rax_8
*(arg1 + 0x7c) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x94) = 0
uint128_t zmm9 = zmm8
zmm8.d = zmm8.d f* zmm1.d
zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_1)).d f* zmm2[0]
zmm9.d = zmm9.d f* zmm2[0]
*(arg1 + 0x8c) = zmm0.d
zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_1)).d f* zmm1.d
uint128_t zmm11
zmm11.d = _mm_cvtepi32_ps(zx.o(rcx)).d f* zmm1.d
*(arg1 + 0x90) = zmm0.d
zmm1.d = zmm9.d f* zmm8.d
*(arg1 + 0x78) = zmm11.d
*(arg1 + 0x80) = zmm9.d
zmm1.d = zmm1.d f* *(arg1 + 4)
*(arg1 + 0x84) = zmm8.d
zmm1.d = zmm1.d f* 9.99999997e-07f
uint128_t zmm10
zmm10.d = _mm_cvtepi32_ps(zx.o(rdx)).d f* zmm2[0]
zmm0 = _mm_sqrt_ss(0, __andps_xmmxud_memxud(zmm1, data_142d3f770).d)
zmm0.d = zmm0.d f+ zmm0.d
*(arg1 + 0x74) = zmm10.d
zmm1.d = -0.5f f- zmm0.d
int32_t rdx_4 = neg.d(int.d(zmm1.d) s>> 1)
*(arg1 + 0x98) = rdx_4
rax_8.b = rdx_4 != 0
*arg1 = rax_8.b
void* rax_9 = *(arg2 + 0x130)
zmm1 = *(rax_9 + 0x1c0)
uint128_t zmm3 = zmm1
float temp0_10[0x4] = _mm_add_ps(zmm1, zmm1)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
zmm3 = _mm_mul_ps(zmm3, temp0_10)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x29), zmm0)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x12), zmm1)
float temp0_18[0x4] = _mm_add_ps(temp0_17, temp0_15)
float temp0_19[0x4] = _mm_sub_ps(temp0_15, temp0_17)
float zmm4[0x4] = data_143f280c0
zmm2 = __andps_xmmxud_memxud(
    _mm_sub_ps(zmm4, _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))), 
    data_143f280d0)
zmm0 = _mm_shuffle_ps(temp0_19, zmm2, 0x32)
zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm2, 0), zmm0, 0x82)
zmm0 = _mm_shuffle_ps(temp0_18, zmm2, 0x31)
zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm2, 0x10), zmm0, 0x88)
zmm0 = *(rax_9 + 0x1d0)
float temp0_31[0x4] = _mm_shuffle_ps(temp0_18, temp0_19, 0x12)
zmm4[0].q = zmm0 u>> 0x40
float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, zmm2, 0xe8)
zmm0 = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
*(arg1 + 0x20) = zmm3
*(arg1 + 0x30) = zmm1
*(arg1 + 0x40) = temp0_32
*(arg1 + 0x50) = zmm0

if (rdx_4 != 0 && arg5 != 1)
    int128_t zmm7
    zmm7.d = 1f f/ _mm_cvtepi32_ps(zx.o(arg5)).d
    *(arg1 + 0x98) = divs.dp.d(sx.q(rdx_4), arg5)
    zmm9.d = zmm9.d f* zmm7.d
    zmm8.d = zmm8.d f* zmm7.d
    zmm0.d = _mm_cvtepi32_ps(zx.o(arg6)).d f* zmm9.d
    zmm1.d = _mm_cvtepi32_ps(zx.o(arg7)).d f* zmm8.d
    zmm0.d = zmm0.d f+ zmm10.d
    *(arg1 + 0x80) = zmm9.d
    *(arg1 + 0x84) = zmm8.d
    zmm1.d = zmm1.d f+ zmm11.d
    *(arg1 + 0x74) = zmm0.d
    *(arg1 + 0x78) = zmm1.d

return arg1
