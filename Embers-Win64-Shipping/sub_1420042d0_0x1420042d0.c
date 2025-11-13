// 函数: sub_1420042d0
// 地址: 0x1420042d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x260))()
double zmm2[0x2] = _mm_cvtps_pd(arg1[5].d[0])
int64_t rcx = int.q(zmm2[0])
double zmm0[0x2] = zmm2

if (rcx != -0x8000000000000000 && not(float.d(rcx) f== zmm2[0]))
    uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rcx - (zx.q(temp0_2) & 1))

zmm2[0] = zmm2[0] - zmm0[0]
int32_t rdx = int.d(zmm0[0])
int32_t temp0_3 = _mm_cvtpd_ps(zmm2)
int32_t arg_c

if (temp0_3 f>= 0f)
    zmm0 = _mm_min_ss(0x3f7fffff, temp0_3)
    
    if (zmm0[0].d f>= 0f)
        arg_c = _mm_min_ss(zmm0[0].d, 0x3f7fffff)[0].d
    else
        arg_c = 0
else
    arg_c = _mm_min_ss(zx.o(0)[0].d, 0x3f7fffff)[0].d

zmm2 = arg2[1]
int32_t arg_8
arg_8.q = rdx.q
zmm2[0].d = zmm2[0].d f- arg_c
int64_t zmm1
zmm1.d = zmm2[0].d f+ zmm2[0].d
zmm1.d = zmm1.d f- 0.5f
int32_t rcx_3 = int.d(zmm1.d) s>> 1
*arg2 += rcx_3 - rdx
zmm0 = _mm_cvtepi32_ps(zx.o(rcx_3))
zmm2[0].d = zmm2[0].d f- zmm0[0].d
arg2[1] = zmm2[0].d
return arg2
