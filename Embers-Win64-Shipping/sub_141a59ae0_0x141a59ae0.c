// 函数: sub_141a59ae0
// 地址: 0x141a59ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98

if (arg1[3].b == 0)
    *arg2 = *arg3
else
    int128_t zmm0 = *(arg1 + 8)
    uint128_t zmm6 = zx.o(arg1[5])
    (*(*arg1 + 0x28))()
    int128_t zmm7
    zmm7.q = zmm0.q f- zmm6.q
    arg1[4] = (zmm0.q f- arg1[7]) f* (fconvert.d(arg4.d) f- 1.0) f+ arg1[4]
    int64_t var_70
    
    if (&var_70 != &arg1[7])
        arg1[7] = zmm0.q
        arg1[8].b = 1
    
    zmm7.q = zmm7.q f+ arg1[4]
    sub_1408ec700(&var_70, zmm0.q, zmm0:8.q, arg3[1])
    int64_t rax_4 = arg3[1]
    uint128_t zmm2_1
    zmm2_1.q = _mm_cvtepi32_pd(zx.q(rax_4.d)).q f* zmm7.q
    zmm2_1.q = zmm2_1.q f/ _mm_cvtepi32_pd(zx.q((rax_4 u>> 0x20).d)).q
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
    int32_t var_74_1
    
    if (zmm0_1.d f>= 0f)
        var_74_1 = _mm_min_ss(zmm0_1.d, 0x3f7fffff).d
    else
        var_74_1 = 0
    
    int32_t var_78_1
    var_78_1.q = rcx_3.q
    int64_t rax_9 = var_70
    var_70 = rax_9
    zmm2_1.d = var_74_1.d f+ var_70:4.d
    zmm1_1.d = zmm2_1.d f+ zmm2_1.d
    zmm1_1.d = zmm1_1.d f- 0.5f
    int32_t rdx_1 = int.d(zmm1_1.d)
    zmm1_1 = zmm2_1
    int32_t rdx_4 = (rdx_1 s>> 1) + rcx_3 + rax_9.d
    int32_t rcx_4 = int.d(zmm1_1.d)
    
    if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm1_1.d))
        zmm1_1 =
            _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1.q)) & 1)))
    
    zmm2_1.d = zmm2_1.d f- zmm1_1.d
    
    if (zmm2_1.d f>= 0f)
        int32_t var_74_3 = _mm_min_ss(zmm2_1.d, 0x3f7fffff).d
        *arg2 = rdx_4.q
    else
        int32_t var_74_2 = 0
        *arg2 = rdx_4.q

__security_check_cookie(rax_1 ^ &var_98)
return arg2
