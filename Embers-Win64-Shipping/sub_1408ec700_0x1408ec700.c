// 函数: sub_1408ec700
// 地址: 0x1408ec700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3.d == arg4.d && (arg3 u>> 0x20).d == (arg4 u>> 0x20).d)
    *arg1 = arg2
    return arg1

int64_t r11_1 = sx.q((arg3 u>> 0x20).d) * sx.q(arg4.d)
int64_t rcx_1 = sx.q((arg4 u>> 0x20).d) * sx.q(arg3.d)
int64_t zmm2 = float.d(r11_1)
uint128_t zmm0
zmm0.q = float.d(rcx_1)
double zmm1 = _mm_cvtps_pd(arg2:4.d) f* zmm2
int64_t temp0_1 = divs.dp.q(sx.o(sx.q(arg2.d) * r11_1), rcx_1)
double zmm3 = 1.0 f/ zmm0.q
zmm0.q = float.d(temp0_1)
uint128_t zmm4
zmm4.q = _mm_cvtepi32_pd(zx.q(arg2.d)).q f* zmm2
zmm4.q = zmm4.q f* zmm3
zmm4.q = zmm4.q f- zmm0.q
zmm4.q = zmm4.q f+ zmm1 * zmm3
int64_t rcx_2 = int.q(zmm4.q)
zmm0 = zmm4

if (rcx_2 != -0x8000000000000000 && not(float.d(rcx_2) f== zmm4.q))
    zmm0.q = float.d(rcx_2 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))

zmm4.q = zmm4.q f- zmm0.q
int32_t r8_1 = temp0_1.d + (int.q(zmm0.q)).d

if (not(zmm4.q f<= 0.0))
    zmm0 = 0x3fefffffdfc9a9ad
    
    if (not(zmm4.q f<= zmm0.q))
        zmm4 = zmm0

zmm0 = _mm_cvtpd_ps(zmm4)
*arg1 = r8_1
zmm1 = (zx.o(0)).q

if (not(zmm0.d f< 0f))
    zmm1 = __minss_xmmss_memss(zmm0.d, 0x3f7fffff).q

*(arg1 + 4) = zmm1.d
return arg1
