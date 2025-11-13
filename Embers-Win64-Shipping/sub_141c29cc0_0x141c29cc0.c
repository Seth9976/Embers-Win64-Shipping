// 函数: sub_141c29cc0
// 地址: 0x141c29cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg1 + 0x30)
int32_t r11_1 = *(arg1 + 0x18) << 0xc
int64_t zmm4 = (zx.o(0)).q
int32_t temp0 = divs.dp.d(sx.q(r11_1 - arg3), arg2)
double zmm8[0x2] = arg4
uint128_t zmm9 = 0x3f30000000000000
int32_t rcx_1 = *(arg1 + 4) * temp0
arg4 = zx.o(0)
int32_t rax_4 = *(arg1 + 0x38)
int64_t zmm5 = (zx.o(0)).q
int128_t zmm6 = zx.o(0)
zmm8 = _mm_unpacklo_pd(zmm8, zmm8[0])
int128_t zmm7 = zx.o(0)
int32_t rdx_3 = temp0 * arg2 + arg3
void* rcx_4 = arg1 + ((sx.q(rax_4 - rcx_1) + 0x213) << 2)
double zmm0[0x2]
double zmm1[0x2]
double zmm2
int32_t temp8_1

do
    int64_t rax_7 = sx.q(rdx_3) s>> 0xc
    zmm1 = *(r9 + (rax_7 << 2))
    zmm0 = *(r9 + (rax_7 << 2) + 4)
    zmm0[0].d = zmm0[0].d f- zmm1[0].d
    zmm2 = _mm_cvtps_pd(zmm0[0]).q
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rdx_3 & 0xfff)
    zmm2 = zmm2 * zmm0[0]
    zmm0 = _mm_cvtps_pd(zmm1[0])
    zmm1 = _mm_cvtps_pd((*(rcx_4 - 4))[0])
    zmm2 = zmm2 f* zmm9.q + zmm0[0]
    zmm0 = _mm_cvtps_pd((*rcx_4)[0])
    zmm1[0] = zmm1[0] * zmm2
    zmm0[0] = zmm0[0] * zmm2
    zmm7.q = zmm7.q f+ zmm1[0]
    zmm1 = _mm_cvtps_pd((*(rcx_4 + 4))[0])
    zmm6.q = zmm6.q f+ zmm0[0]
    zmm0 = _mm_cvtps_pd((*(rcx_4 + 8))[0])
    rcx_4 += 0x10
    temp8_1 = rdx_3
    rdx_3 -= arg2
    zmm1[0] = zmm1[0] * zmm2
    zmm0[0] = zmm0[0] * zmm2
    zmm5 = zmm5 f+ zmm1[0]
    zmm4 = zmm4 f+ zmm0[0]
while (temp8_1 - arg2 s>= 0)
int64_t var_50 = zmm4
int32_t r8_1 = arg2 - arg3
int64_t var_58 = zmm5
int64_t var_60 = zmm6.q
int64_t var_68 = zmm7.q
zmm4 = (zx.o(0)).q
int32_t temp0_8 = divs.dp.d(sx.q(r11_1 - r8_1), arg2)
zmm5 = (zx.o(0)).q
zmm6 = zx.o(0)
int32_t i = r8_1 + temp0_8 * arg2
void* rcx_9 = arg1 + ((sx.q((temp0_8 + 1) * *(arg1 + 4) + *(arg1 + 0x38)) + 0x213) << 2)

do
    int64_t rax_17 = sx.q(i) s>> 0xc
    zmm1 = *(r9 + (rax_17 << 2))
    zmm0 = *(r9 + (rax_17 << 2) + 4)
    zmm0[0].d = zmm0[0].d f- zmm1[0].d
    int32_t rax_19 = i & 0xfff
    i -= arg2
    zmm2 = _mm_cvtps_pd(zmm0[0]).q
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rax_19)
    zmm2 = zmm2 * zmm0[0]
    zmm0 = _mm_cvtps_pd(zmm1[0])
    zmm1 = _mm_cvtps_pd((*(rcx_9 - 4))[0])
    zmm2 = zmm2 f* zmm9.q + zmm0[0]
    zmm0 = _mm_cvtps_pd((*rcx_9)[0])
    zmm1[0] = zmm1[0] * zmm2
    zmm0[0] = zmm0[0] * zmm2
    zmm6.q = zmm6.q f+ zmm1[0]
    zmm1 = _mm_cvtps_pd((*(rcx_9 + 4))[0])
    zmm5 = zmm5 f+ zmm0[0]
    zmm0 = _mm_cvtps_pd((*(rcx_9 + 8))[0])
    rcx_9 -= 0x10
    zmm1[0] = zmm1[0] * zmm2
    zmm0[0] = zmm0[0] * zmm2
    zmm4 = zmm4 f+ zmm1[0]
    arg4[0] = arg4[0] + zmm0[0]
while (i s> 0)

int64_t* rcx_10 = arg5
int64_t i_1 = 0
int64_t var_70 = arg4.q
int64_t var_78 = zmm4
int64_t var_80 = zmm5
int64_t var_88 = zmm6.q

do
    zmm0 = *(&var_68 + i_1)
    zmm1 = *(&var_88 + i_1)
    i_1 += 0x10
    *rcx_10 = (_mm_cvtpd_ps(_mm_mul_pd(_mm_add_pd(zmm1, zmm0), zmm8))).q
    rcx_10 = &rcx_10[1]
while (i_1 s< 0x20)

return i_1
