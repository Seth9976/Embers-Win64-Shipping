// 函数: sub_140f89b60
// 地址: 0x140f89b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4] = arg3
int32_t rax_1 = (*(*arg1 + 0x290))()
int64_t zmm3 = arg1[0x83]
uint128_t zmm0

if (not(zmm3 f== 0.0))
    zmm0 = zx.o(arg1[0x84])

if (zmm3 f== 0.0 || zmm0.q f== 0.0)
    zmm0 = 0x3fe0000000000000
else
    zmm0.q = zmm0.q f/ zmm3

double zmm6[0x2] = zx.o(0)
arg3 = zx.o(0)
zmm0.d = _mm_cvtpd_ps(zmm0).d f* zmm7[0]
zmm6[0] = float.d(rax_1)
double temp0_1[0x2] = _mm_cvtps_pd(zmm0.q)
arg3[0] = float.s(rax_1)
temp0_1[0] = temp0_1[0] f+ arg1[0x7e]
temp0_1[0] = temp0_1[0] / zmm6[0]
zmm0.d = _mm_cvtpd_ps(temp0_1).d f* arg3[0]
int64_t temp0_3 = _mm_cvtps_pd(zmm0.q)
zmm0 = -0x3fdc000000000000

if (not(temp0_3 f< zmm0.q))
    arg3[0] = arg3[0] + 10f
    zmm0 = _mm_min_sd(_mm_cvtps_pd(arg3[0].q).q, temp0_3)

zmm6[0] = zmm6[0] f* zmm0.q

if (arg4 == 0)
    zmm0.q = fconvert.d(zmm7[0])
    zmm6[0] = zmm6[0] f- zmm0.q
    sub_140ed8eb0(&arg1[0x9c], arg2, _mm_cvtpd_ps(zmm6)[0])

int64_t rax_2 = *arg1
_mm_cvtpd_ps(zmm6)
jump(*(rax_2 + 0x258))
