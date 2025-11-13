// 函数: sub_141a417b0
// 地址: 0x141a417b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg4
arg1[1] = 0
int32_t r11_1 = arg3 - arg2

if (arg3 == arg2)
    *(arg1 + 4) = 0
    *arg1 = arg3
    return arg1

int32_t arg_8
arg_8.q = arg4
int32_t arg_c
int32_t r8
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
int32_t zmm5

if (arg4.d s< arg2 || (arg4.d == arg2 && 0f f< arg2.q:4.d))
    zmm5 = 0x3f7fffff
    arg_8.q = arg3.q
    zmm2.d = 0f f- arg4:4.d
    zmm1.d = zmm2.d f+ zmm2.d
    zmm1.d = zmm1.d f- 0.5f
    int32_t rax_18 = int.d(zmm1.d) s>> 1
    int32_t rcx_8 = arg3 - arg4.d + rax_18
    zmm2.d = zmm2.d f- _mm_cvtepi32_ps(zx.o(rax_18)).d
    
    if (zmm2.d f>= 0f)
        arg_c = _mm_min_ss(zmm2.d, 0x3f7fffff).d
    else
        arg_c = 0
    
    arg_8.q = rcx_8.q
    zmm3.q = _mm_cvtepi32_pd(zx.q(rcx_8)).q f+ _mm_cvtps_pd(arg_c.q).q
    zmm3.q = zmm3.q f/ _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(r11_1)).q).q
    int64_t rcx_9 = int.q(zmm3.q)
    
    if (rcx_9 != -0x8000000000000000)
        zmm0.q = float.d(rcx_9)
        
        if (not(zmm0.q f== zmm3.q))
            zmm3.q = float.d(rcx_9 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm3, zmm3.q))) & 1))
    
    r8 = int.d(zmm3.q)
    arg_8.q = r11_1.q
    zmm3 = _mm_cvtps_pd(0)
    zmm1 = _mm_cvtepi32_ps(zx.o(r8))
    zmm3.q = zmm3.q f+ _mm_cvtepi32_pd(zx.q(r11_1)).q
    zmm3.q = zmm3.q f* _mm_cvtps_pd(zmm1.q).q
    int64_t rcx_11 = int.q(zmm3.q)
    zmm0 = zmm3
    
    if (rcx_11 != -0x8000000000000000)
        zmm1.q = float.d(rcx_11)
        
        if (not(zmm1.q f== zmm3.q))
            zmm0.q = float.d(rcx_11 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))
    
    int32_t rcx_13 = int.d(zmm0.q)
    zmm3.q = zmm3.q f- zmm0.q
    zmm0 = _mm_cvtpd_ps(zmm3)
    
    if (zmm0.d f>= 0f)
        zmm0 = _mm_min_ss(zmm0.d, 0x3f7fffff)
        
        if (zmm0.d f>= 0f)
            arg_c = _mm_min_ss(zmm0.d, 0x3f7fffff).d
        else
            arg_c = 0
    else
        arg_c = _mm_min_ss(zx.o(0).d, 0x3f7fffff).d
    
    arg_8.q = rcx_13.q
    zmm2.d = arg_c.d f+ arg4:4.d
    zmm1.d = zmm2.d f+ zmm2.d
    zmm1.d = zmm1.d f- 0.5f
    int32_t rax_26 = int.d(zmm1.d)
    zmm1 = zmm2
    int32_t rcx_14 = int.d(zmm1.d)
    arg_8 = (rax_26 s>> 1) + rcx_13 + arg4.d
    
    if (rcx_14 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_14)).d f== zmm1.d))
        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_14 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))
    
    zmm2.d = zmm2.d f- zmm1.d
label_141a41bb7:
    
    if (not(zmm2.d f>= 0f))
        arg_c = 0
        *arg1 = arg_8.q
        arg1[1].d = r8
        return arg1
    
    zmm2 = _mm_min_ss(zmm2.d, zmm5)
    arg1[1].d = r8
    arg_c = zmm2.d
    *arg1 = arg_8.q
else
    arg_8.q = arg4
    
    if (arg4.d s> arg3)
    label_141a41834:
        zmm5 = 0x3f7fffff
        arg_8.q = arg4
        zmm2.d = 0f f- arg2.q:4.d
        zmm1.d = zmm2.d f+ zmm2.d
        zmm1.d = zmm1.d f- 0.5f
        int32_t rcx_1 = int.d(zmm1.d) s>> 1
        int32_t rdx = rcx_1 - arg2 + arg4.d
        zmm2.d = zmm2.d f- _mm_cvtepi32_ps(zx.o(rcx_1)).d
        
        if (zmm2.d f>= 0f)
            arg_c = _mm_min_ss(zmm2.d, 0x3f7fffff).d
        else
            arg_c = 0
        
        arg_8.q = rdx.q
        zmm3.q = _mm_cvtepi32_pd(zx.q(rdx)).q f+ _mm_cvtps_pd(arg_c.q).q
        zmm3.q = zmm3.q f/ _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(r11_1)).q).q
        int64_t rcx_2 = int.q(zmm3.q)
        
        if (rcx_2 != -0x8000000000000000)
            zmm0.q = float.d(rcx_2)
            
            if (not(zmm0.q f== zmm3.q))
                zmm3.q = float.d(rcx_2 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm3, zmm3.q))) & 1))
        
        r8 = int.d(zmm3.q)
        arg_8.q = r11_1.q
        zmm3 = _mm_cvtps_pd(0)
        zmm1 = _mm_cvtepi32_ps(zx.o(r8))
        zmm3.q = zmm3.q f+ _mm_cvtepi32_pd(zx.q(r11_1)).q
        zmm3.q = zmm3.q f* _mm_cvtps_pd(zmm1.q).q
        int64_t rcx_4 = int.q(zmm3.q)
        zmm0 = zmm3
        
        if (rcx_4 != -0x8000000000000000)
            zmm1.q = float.d(rcx_4)
            
            if (not(zmm1.q f== zmm3.q))
                zmm0.q = float.d(rcx_4 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))
        
        int32_t rdx_1 = int.d(zmm0.q)
        zmm3.q = zmm3.q f- zmm0.q
        zmm0 = _mm_cvtpd_ps(zmm3)
        
        if (zmm0.d f>= 0f)
            zmm0 = _mm_min_ss(zmm0.d, 0x3f7fffff)
            
            if (zmm0.d f>= 0f)
                arg_c = _mm_min_ss(zmm0.d, 0x3f7fffff).d
            else
                arg_c = 0
        else
            arg_c = _mm_min_ss(zx.o(0).d, 0x3f7fffff).d
        
        arg_8.q = arg4
        zmm2.d = arg_c.d f- rdx_1.q:4.d
        zmm1.d = zmm2.d f+ zmm2.d
        zmm1.d = zmm1.d f- 0.5f
        int32_t rcx_7 = int.d(zmm1.d) s>> 1
        arg_8 = rcx_7 - rdx_1 + arg4.d
        zmm2.d = zmm2.d f- _mm_cvtepi32_ps(zx.o(rcx_7)).d
        goto label_141a41bb7
    
    if (arg4.d == arg3 && not(0f f<= arg3.q:4.d))
        goto label_141a41834
return arg1
