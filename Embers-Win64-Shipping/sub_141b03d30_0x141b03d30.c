// 函数: sub_141b03d30
// 地址: 0x141b03d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(sub_140d226f0(arg1, sub_141a6e000()) + 0x108)
uint32_t rdi_1 = (rsi u>> 0x20).d
uint128_t zmm1
zmm1.q = _mm_cvtepi32_pd(zx.q(rsi.d)).q f/ _mm_cvtepi32_pd(zx.q(rdi_1))
int64_t rcx_1 = int.q(zmm1.q)

if (rcx_1 != -0x8000000000000000 && not(float.d(rcx_1) f== zmm1.q))
    zmm1.q = float.d(rcx_1 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))

int32_t rbp = int.d(zmm1.q)
uint128_t zmm0_1 = sub_141a52fb0(arg2)
int64_t arg_8

if (not(zmm0_1.d f== 10000f))
    zmm0_1.q = fconvert.d(zmm0_1.d)
    uint128_t zmm2
    zmm2.q = _mm_cvtepi32_pd(zx.q(rsi.d)).q f* zmm0_1.q
    zmm2.q = zmm2.q f/ _mm_cvtepi32_pd(zx.q(rdi_1)).q
    int64_t rcx_4 = int.q(zmm2.q)
    zmm0_1 = zmm2
    
    if (rcx_4 != -0x8000000000000000)
        zmm1.q = float.d(rcx_4)
        
        if (not(zmm1.q f== zmm2.q))
            zmm0_1.q =
                float.d(rcx_4 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
    
    zmm2.q = zmm2.q f- zmm0_1.q
    
    if (not(zmm2.q f<= 0.0))
        zmm2 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm2.q)
    
    zmm1 = _mm_cvtpd_ps(zmm2)
    arg_8.d = int.d(zmm0_1.q)
    
    if (zmm1.d f>= 0f)
        arg_8:4.d = _mm_min_ss(zmm1.d, 0x3f7fffff).d
    else
        arg_8:4.d = 0
    
    int64_t rax_7 = arg_8
    arg_8 = rax_7
    rbp = rax_7.d

arg_8 = 0
char var_38 = 0
void* result = sub_141af37d0(arg1, 0, 8, 0, 0, 0)
var_38.d = arg4
(*(*result + 0x2b8))(result, arg1 + 0x58, zx.q(arg3), zx.q(rbp), 0)
*(result + 0xe0) = arg2
int64_t rbx_1 = sx.q(*(arg1 + 0x60))
int32_t rcx_8 = (rbx_1 + 1).d
*(arg1 + 0x60) = rcx_8

if (rcx_8 s> *(arg1 + 0x64))
    sub_1405a4d70(arg1 + 0x58)

*(*(arg1 + 0x58) + (rbx_1 << 3)) = result
return result
