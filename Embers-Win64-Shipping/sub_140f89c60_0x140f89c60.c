// 函数: sub_140f89c60
// 地址: 0x140f89c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg2
int32_t result = (*(*arg1 + 0x290))()
float zmm3[0x2] = 0xc1200000
bool cond:0 = zmm6[0] < -10f
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(result)).d f+ 10f

if (not(cond:0))
    zmm3 = _mm_min_ss(zmm0.q[0], zmm6[0])

uint128_t zmm2 = zx.o(arg1[0x7e])
double temp0_2[0x2] = _mm_cvtps_pd(zmm3)
float temp0_3[0x2] = _mm_max_ss(zmm3[0], 0)
zmm0.q = zmm2.q f- temp0_2[0]
double temp0_4[0x2] = _mm_cvtps_pd(temp0_3)
zmm0 = __andps_xmmxud_memxud(zmm0, data_142d57d00)
bool cond:1 = zmm2.q f== temp0_4[0]
_mm_cvtpd_ps(zmm0)

if (not(cond:1))
    arg1[0x7e] = temp0_4.q
    sub_140f44620(&arg1[0x78], temp0_4)
    result, zmm6 = sub_140f89930(arg1)

arg1[0x86].b != 0 && not(temp0_2[0] f< arg1[0x7e])
return result
