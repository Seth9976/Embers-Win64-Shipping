// 函数: sub_141a56f70
// 地址: 0x141a56f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 4)
double zmm0[0x2] = r8:4.d
int64_t arg_8

if (zmm0[0].d f!= 0f)
    int64_t zmm1
    zmm1.d = 1f f- zmm0[0].d
    arg_8.d = 0xffffffff - r8.d
    
    if (zmm1.d f>= 0f)
        arg_8:4.d = _mm_min_ss(0x3f7fffff, zmm1.d)[0].d
    else
        arg_8:4.d = 0
else
    arg_8:4.d = 0
    arg_8.d = neg.d(r8.d)

int128_t zmm6 = *arg1
uint128_t zmm4 = _mm_cvtepi32_pd(zx.q(arg_8.d))
double temp0_3[0x2] = _mm_cvtps_pd(arg_8:4.d[0])
int64_t temp0_4 = _mm_cvtps_pd(zmm6.q)
zmm4.q = zmm4.q f+ temp0_3[0]
zmm4.q = zmm4.q f/ temp0_4
int64_t rcx = int.q(zmm4.q)
zmm0 = zmm4

if (rcx != -0x8000000000000000 && not(float.d(rcx) f== zmm4.q))
    uint32_t temp0_6 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rcx - (zx.q(temp0_6) & 1))

zmm4.q = zmm4.q f- zmm0[0]
arg_8.d = int.d(zmm0[0])
zmm0 = _mm_cvtpd_ps(zmm4)

if (zmm0[0].d f>= 0f)
    zmm0 = _mm_min_ss(zmm0[0].d, 0x3f7fffff)
    
    if (zmm0[0].d f>= 0f)
        arg_8:4.d = _mm_min_ss(zmm0[0].d, 0x3f7fffff)[0].d
    else
        arg_8:4.d = 0
else
    arg_8:4.d = _mm_min_ss(zx.o(0)[0].d, 0x3f7fffff)[0].d

*(arg2 + 4) = arg_8
*arg2 = 1f f/ zmm6.d
return arg2
