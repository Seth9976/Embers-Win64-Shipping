// 函数: sub_141a59d10
// 地址: 0x141a59d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48

if (*(arg1 + 0x18) == 0)
    *arg2 = *arg3
else
    uint128_t zmm1 = *(arg1 + 8)
    int64_t var_20
    sub_1408ec700(&var_20, zmm1.q, _mm_bsrli_si128(zmm1, 8).q, arg3[1])
    int64_t rax_2 = arg3[1]
    uint128_t zmm2_1
    zmm2_1.q = _mm_cvtepi32_pd(zx.q(rax_2.d)).q f* *(arg1 + 0x20)
    zmm2_1.q = zmm2_1.q f/ _mm_cvtepi32_pd(zx.q((rax_2 u>> 0x20).d)).q
    int64_t rcx_1 = int.q(zmm2_1.q)
    uint128_t zmm1_1 = zmm2_1
    uint128_t zmm0_1
    
    if (rcx_1 != -0x8000000000000000)
        zmm0_1.q = float.d(rcx_1)
        
        if (not(zmm0_1.q f== zmm2_1.q))
            zmm1_1.q =
                float.d(rcx_1 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1.q))) & 1))
    
    zmm2_1.q = zmm2_1.q f- zmm1_1.q
    int32_t rcx_3 = int.d(zmm1_1.q)
    
    if (not(zmm2_1.q f<= 0.0))
        zmm2_1 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm2_1.q)
    
    zmm0_1 = _mm_cvtpd_ps(zmm2_1)
    int32_t zmm3_1 = (zx.o(0)).d
    int32_t var_24_1
    
    if (zmm0_1.d f>= 0f)
        var_24_1 = _mm_min_ss(zmm0_1.d, 0x3f7fffff).d
    else
        var_24_1 = 0
    
    int32_t var_28_1
    var_28_1.q = rcx_3.q
    int64_t rax_7 = var_20
    var_20 = rax_7
    zmm2_1.d = var_24_1.d f+ var_20:4.d
    zmm1_1.d = zmm2_1.d f+ zmm2_1.d
    zmm1_1.d = zmm1_1.d f- 0.5f
    int32_t rdx_1 = int.d(zmm1_1.d)
    zmm1_1 = zmm2_1
    int32_t rcx_4 = int.d(zmm1_1.d)
    *arg2 = (rdx_1 s>> 1) + rax_7.d + rcx_3
    
    if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm1_1.d))
        zmm1_1 =
            _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1.q)) & 1)))
    
    zmm2_1.d = zmm2_1.d f- zmm1_1.d
    arg2[1] = zmm2_1.d
    
    if (not(zmm2_1.d f< 0f))
        zmm3_1 = __minss_xmmss_memss(zmm2_1.d, 0x3f7fffff).d
    
    arg2[1] = zmm3_1

__security_check_cookie(rax_1 ^ &var_48)
return arg2
