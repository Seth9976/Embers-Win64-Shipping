// 函数: sub_141c293f0
// 地址: 0x141c293f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg1 + 0x30)
int32_t rcx = *(arg1 + 4)
int64_t zmm4 = (zx.o(0)).q
int64_t zmm5 = (zx.o(0)).q
int128_t zmm6 = zx.o(0)
int128_t zmm7 = zx.o(0)
double zmm9[0x2] = arg4
uint128_t zmm10 = 0x3f30000000000000
arg4 = zx.o(0)
int128_t zmm8 = zx.o(0)
int32_t r11_1 = *(arg1 + 0x18) << 0xc
int128_t zmm11 = zx.o(0)
double temp0[0x2] = _mm_unpacklo_pd(zmm9, zmm9[0])
int32_t temp0_1 = divs.dp.d(sx.q(r11_1 - arg3), arg2)
int32_t rdx_3 = temp0_1 * arg2 + arg3
void* rcx_4 = arg1 + ((sx.q(*(arg1 + 0x38) - rcx * temp0_1) + 0x213) << 2)
float zmm0[0x4]
double zmm1[0x2]
double zmm2
int32_t temp8_1

do
    int64_t rax_7 = sx.q(rdx_3) s>> 0xc
    zmm1 = *(r9 + (rax_7 << 2))
    zmm0 = *(r9 + (rax_7 << 2) + 4)
    zmm0[0] = zmm0[0] f- zmm1[0].d
    double temp0_2 = _mm_cvtps_pd(zmm0[0].q)
    zmm0 = zx.o(0)
    zmm0[0].q = float.d(rdx_3 & 0xfff)
    zmm2 = temp0_2 f* zmm0[0].q
    zmm0 = _mm_cvtps_pd(zmm1[0])
    double temp0_4[0x2] = _mm_cvtps_pd((*(rcx_4 - 4))[0])
    zmm2 = zmm2 f* zmm10.q f+ zmm0[0].q
    zmm0 = _mm_cvtps_pd((*rcx_4)[0].q)
    temp0_4[0] = temp0_4[0] * zmm2
    zmm0[0].q = zmm0[0].q f* zmm2
    zmm11.q = zmm11.q f+ temp0_4[0]
    double temp0_6[0x2] = _mm_cvtps_pd((*(rcx_4 + 4))[0])
    zmm8.q = zmm8.q f+ zmm0[0].q
    zmm0 = _mm_cvtps_pd((*(rcx_4 + 8))[0].q)
    temp0_6[0] = temp0_6[0] * zmm2
    zmm0[0].q = zmm0[0].q f* zmm2
    zmm7.q = zmm7.q f+ temp0_6[0]
    double temp0_8[0x2] = _mm_cvtps_pd((*(rcx_4 + 0xc))[0])
    zmm6.q = zmm6.q f+ zmm0[0].q
    zmm0 = _mm_cvtps_pd((*(rcx_4 + 0x10))[0].q)
    rcx_4 += 0x18
    temp8_1 = rdx_3
    rdx_3 -= arg2
    temp0_8[0] = temp0_8[0] * zmm2
    zmm0[0].q = zmm0[0].q f* zmm2
    zmm5 = zmm5 f+ temp0_8[0]
    zmm4 = zmm4 f+ zmm0[0].q
while (temp8_1 - arg2 s>= 0)
int64_t var_70 = zmm4
int32_t r8_1 = arg2 - arg3
int64_t var_78 = zmm5
int64_t var_80 = zmm6.q
int64_t var_88 = zmm7.q
int64_t var_90 = zmm8.q
int32_t temp0_10 = divs.dp.d(sx.q(r11_1 - r8_1), arg2)
int64_t var_98 = zmm11.q
zmm4 = (zx.o(0)).q
zmm5 = (zx.o(0)).q
zmm6 = zx.o(0)
zmm7 = zx.o(0)
zmm8 = zx.o(0)
int32_t i = r8_1 + temp0_10 * arg2
void* rcx_9 = arg1 + ((sx.q((temp0_10 + 1) * *(arg1 + 4) + *(arg1 + 0x38)) + 0x213) << 2)

do
    int64_t rax_17 = sx.q(i) s>> 0xc
    zmm1 = *(r9 + (rax_17 << 2))
    zmm0 = *(r9 + (rax_17 << 2) + 4)
    zmm0[0] = zmm0[0] f- zmm1[0].d
    int32_t rax_19 = i & 0xfff
    i -= arg2
    double temp0_11 = _mm_cvtps_pd(zmm0[0].q)
    zmm0 = zx.o(0)
    zmm0[0].q = float.d(rax_19)
    zmm2 = temp0_11 f* zmm0[0].q
    float temp0_12[0x4] = _mm_cvtps_pd(zmm1[0])
    double temp0_13[0x2] = _mm_cvtps_pd((*(rcx_9 - 4))[0])
    zmm2 = zmm2 f* zmm10.q f+ temp0_12[0].q
    zmm0 = _mm_cvtps_pd((*rcx_9)[0].q)
    temp0_13[0] = temp0_13[0] * zmm2
    zmm0[0].q = zmm0[0].q f* zmm2
    zmm8.q = zmm8.q f+ temp0_13[0]
    double temp0_15[0x2] = _mm_cvtps_pd((*(rcx_9 + 4))[0])
    zmm7.q = zmm7.q f+ zmm0[0].q
    zmm0 = _mm_cvtps_pd((*(rcx_9 + 8))[0].q)
    temp0_15[0] = temp0_15[0] * zmm2
    zmm0[0].q = zmm0[0].q f* zmm2
    zmm6.q = zmm6.q f+ temp0_15[0]
    double temp0_17[0x2] = _mm_cvtps_pd((*(rcx_9 + 0xc))[0])
    zmm5 = zmm5 f+ zmm0[0].q
    zmm0 = _mm_cvtps_pd((*(rcx_9 + 0x10))[0].q)
    rcx_9 -= 0x18
    temp0_17[0] = temp0_17[0] * zmm2
    zmm0[0].q = zmm0[0].q f* zmm2
    zmm4 = zmm4 f+ temp0_17[0]
    arg4[0] = arg4[0] f+ zmm0[0].q
while (i s> 0)

int64_t* rcx_10 = arg5
int64_t i_1 = 0
int64_t var_a0 = arg4.q
int64_t var_a8 = zmm4
int64_t var_b0 = zmm5
int64_t var_b8 = zmm6.q
int64_t var_c0 = zmm7.q
int64_t var_c8 = zmm8.q

do
    zmm0 = *(&var_98 + i_1)
    zmm1 = *(&var_c8 + i_1)
    i_1 += 0x10
    *rcx_10 = (_mm_cvtpd_ps(_mm_mul_pd(_mm_add_pd(zmm1, zmm0), temp0))).q
    rcx_10 = &rcx_10[1]
while (i_1 s< 0x30)

return i_1
