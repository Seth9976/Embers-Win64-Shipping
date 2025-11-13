// 函数: sub_1414df6b0
// 地址: 0x1414df6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = 0x3f800000
int32_t rdx = int.d(fconvert.t(*(data_143ee73b8 + 4)))
int32_t r9 = int.d(fconvert.t(*(data_143ee73d0 + 4)))
int32_t r10 = int.d(fconvert.t(*(data_143ee7430 + 4)))
int32_t r11 = int.d(fconvert.t(*(data_143ee7448 + 4)))
int32_t rbx = int.d(fconvert.t(*(data_143ee72b0 + 4)))
int32_t r8 = int.d(fconvert.t(*(data_143ee72c8 + 4)))
int32_t rsi = int.d(fconvert.t(*(data_143ee7358 + 4)))
int32_t rcx = int.d(fconvert.t(*(data_143ee7310 + 4)))
float temp0[0x4] = _mm_max_ss((*(data_143ee7328 + 4))[0], 0x3f800000)

if (rcx s< 4)
    rcx = 4

if (rdx s< 4)
    rdx = 4

if (r9 s< 4)
    r9 = 4

uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rdx))

if (r10 s< 4)
    r10 = 4

if (r11 s< 4)
    r11 = 4

if (rbx s< 4)
    rbx = 4

uint128_t zmm1
zmm1.d = 1f f/ zmm3.d
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(r9))
uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(rcx))
zmm3.d = zmm0.d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = zmm1.d
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm2[0] = 1f f/ zmm0.d
zmm3.d = zmm2[0]
zmm2 = 0x3f800000
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
uint128_t var_68 = zmm3
*(arg1 + 0x50) = zmm3
zmm0 = _mm_cvtepi32_ps(zx.o(r11))
zmm3 = _mm_cvtepi32_ps(zx.o(r10))
zmm2[0] = 1f f/ zmm0.d
zmm1.d = 1f f/ zmm3.d
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm3.d = zmm0.d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = zmm1.d
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3.d = zmm2[0]
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
uint128_t var_68_1 = zmm3
*(arg1 + 0x60) = zmm3
int128_t zmm8
zmm8.d = 1f f/ zmm9.d
zmm3 = _mm_cvtepi32_ps(zx.o(rbx))
temp0[0] = temp0[0] f* zmm8.d
zmm2 = 0x3f800000
zmm1.d = 1f f/ zmm3.d

if (r8 s< 4)
    r8 = 4

_mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm0 = _mm_cvtepi32_ps(zx.o(r8))
zmm3.d = zmm0.d
zmm2[0] = 1f f/ zmm0.d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = zmm1.d
zmm0.d = 1f / temp0[0]
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3.d = zmm2[0]
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
*(arg1 + 0x70) = zmm3
int96_t var_68_2 = zmm3.12
*arg1 = *(data_143ee7208 + 4)
int32_t zmm4 = *(data_143ee7208 + 4)
*arg1 = zmm4
int32_t temp0_20 = _mm_max_ss(zmm4, 0x3f800000)
zmm3 = *(data_143ee7220 + 4)
arg1[1] = zmm3.d
zmm3 = _mm_max_ss(zmm3.d, temp0_20)
float zmm6[0x4] = *(data_143ee7238 + 4)
arg1[3] = *(data_143ee7268 + 4)
arg1[4] = *(data_143ee7280 + 4)
int32_t zmm5 = *(data_143ee7298 + 4)
arg1[0xf] = zmm0.d
arg1[0xc] = zmm9.d
arg1[0xd] = zmm8.d
arg1[0xe] = temp0[0]
arg1[0x10] = *(data_143ee7340 + 4)
arg1[0x20] = *(data_143ee7388 + 4)
arg1[0x21] = *(data_143ee7400 + 4)
void* rcx_7 = *arg3
zmm2 = *(rcx_7 + 0xbc)
var_68_2:8.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
*(arg1 + 0x90) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
arg1[0x26] = var_68_2:8.d
int32_t result = *(rcx_7 + 0xcc)
*arg1 = temp0_20
arg1[0x22] = result
arg1[1] = zmm3.d
zmm1 = _mm_max_ss(arg1[3].d, 0x3f800000)
arg1[3] = zmm1.d
arg1[4] = _mm_max_ss(arg1[4].d, zmm1.d).d
arg1[0x10] = _mm_max_ss(arg1[0x10].d, 0x3f800000).d
arg1[0x20] = _mm_max_ss(arg1[0x20].d, 0x3f800000).d
zmm1 = arg1[0x21]
float temp0_29[0x4] = __maxss_xmmss_memss(zmm6[0], 0x38d1b717)
int32_t temp0_30 = __maxss_xmmss_memss(zmm5, 0x38d1b717)
zmm1 = _mm_max_ss(zmm1.d, 0x3f800000)

if (rsi s< 4)
    rsi = 4

arg1[0x21] = zmm1.d
zmm0.d = 1f / temp0_29[0]
arg1[2] = zmm0.d
zmm0.d = 1f f/ temp0_30
arg1[5] = zmm0.d
zmm0 = _mm_cvtepi32_ps(zx.o(rsi))
int128_t zmm10
zmm10.d = 1f f/ zmm0.d
_mm_shuffle_ps(zmm0, zmm0, 0xe1)
zmm1.d = zmm0.d
_mm_shuffle_ps(zmm1, zmm1, 0xc6)
zmm1.d = zmm10.d
_mm_shuffle_ps(zmm1, zmm1, 0x27)
zmm1.d = zmm10.d
*(arg1 + 0x20) = _mm_shuffle_ps(zmm1, zmm1, 0x39)
return result
