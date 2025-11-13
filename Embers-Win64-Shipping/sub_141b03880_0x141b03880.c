// 函数: sub_141b03880
// 地址: 0x141b03880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = (*(*arg1 + 0x2d8))()
int64_t* result = result_1
void* rax_1
int64_t rax_2
void* rdx

if (result_1 != 0)
    rax_1 = sub_141b418f0()
    rdx = result[2]
    rax_2 = sx.q(*(rax_1 + 0x38))

if (result_1 == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    result = nullptr

void* rax_5 = sub_140d226f0(arg1, sub_141a6e000())
uint128_t zmm2 = _mm_cvtps_pd((*(arg3 + 0x90)).q)
int64_t rax_6 = *(rax_5 + 0x108)
zmm2.q = zmm2.q f* _mm_cvtepi32_pd(zx.q(rax_6.d)).q
zmm2.q = zmm2.q f/ _mm_cvtepi32_pd(zx.q((rax_6 u>> 0x20).d)).q
int64_t rcx_2 = int.q(zmm2.q)
uint128_t zmm1 = zmm2
uint128_t zmm0

if (rcx_2 != -0x8000000000000000)
    zmm0.q = float.d(rcx_2)
    
    if (not(zmm0.q f== zmm2.q))
        zmm1.q = float.d(rcx_2 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))

zmm2.q = zmm2.q f- zmm1.q
int32_t rax_10 = int.d(zmm1.q)

if (not(zmm2.q f<= 0.0))
    zmm0 = _mm_cvtps_pd(0x3f7fffff)
    
    if (not(zmm2.q f<= zmm0.q))
        zmm2 = zmm0

zmm1 = _mm_cvtpd_ps(zmm2)
zmm0 = zx.o(0)

if (not(zmm1.d f< 0f))
    zmm0 = _mm_min_ss(zmm1.d, 0x3f7fffff)

zmm0.d = zmm0.d f+ 0.5f
(*(*result + 0x2b8))(result, &arg1[0xb], zx.q(arg2), zx.q(rax_10 + 1 + int.d(zmm0.d)), arg4)
result[0x1c] = arg3
int64_t r8_1 = *arg1
(*(r8_1 + 0x2d0))(arg1, result, r8_1)
return result
