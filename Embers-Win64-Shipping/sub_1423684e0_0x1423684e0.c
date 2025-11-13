// 函数: sub_1423684e0
// 地址: 0x1423684e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_18 = zmm6
uint128_t zmm7
uint128_t var_28 = zmm7
uint128_t zmm8 = arg2
uint128_t zmm0
int64_t zmm2

if (arg2.q f> arg1[0xae])
label_14236854a:
    zmm6 = _mm_cvtpd_ps(zx.o(arg1[0xaa]))
    zmm0.d = float.s(rand())
    zmm0.d = zmm0.d f* 3.05185094e-05f
    zmm0.d = zmm0.d f* zmm6.d
    arg2 = _mm_cvtps_pd(zmm0.q)
    zmm0.q = _mm_cvtps_pd(arg1[0xa3].d.q).q f* arg1[0xaa]
    zmm0.q = zmm0.q f* 0.0099999997764825821
    
    if (not(arg2.q f>= zmm0.q))
        zmm6 = arg1[0xa4].d
        zmm7 = *(arg1 + 0x51c)
        arg1[0xb0] = (_mm_cvtps_pd((*(arg1 + 0x55c)).q)).q
        arg1[0xaf] = zmm8.q
        int32_t rax_2 = rand()
        float zmm5_1[0x2] = *(arg1 + 0x534)
        zmm6.d = zmm6.d f- zmm7.d
        zmm0.d = float.s(rax_2)
        zmm0.d = zmm0.d f* 3.05185094e-05f
        zmm0.d = zmm0.d f* zmm6.d
        zmm0.d = zmm0.d f+ zmm7.d
        arg2 = _mm_cvtps_pd(zmm0.q)
        zmm0.d = 1f - zmm5_1[0]
        arg1[0xac] = arg2.q
        double zmm4_1[0x2] = _mm_cvtps_pd(zmm0.q)
        
        if (arg2.q f<= zmm4_1[0])
            zmm4_1 = arg2
        else
            arg1[0xac] = zmm4_1.q
        
        zmm2 = *arg1
        arg2.q = zmm4_1.q f- _mm_cvtps_pd(zmm5_1).q
        float zmm3 = zmm2.d * 0.5f
        zmm0 = _mm_cvtps_pd((*(arg1 + 0x55c)).q)
        arg2 = __andps_xmmxud_memxud(arg2, data_142d57d00)
        zmm2.d = zmm2.d f- zmm3
        bool cond:1_1 = zmm4_1[0] f<= zmm0.q
        float temp0_10[0x4] = _mm_cvtpd_ps(arg2)
        temp0_10[0] = temp0_10[0] f* zmm2.d
        temp0_10[0] = temp0_10[0] + zmm3
        temp0_10[0] = temp0_10[0] + temp0_10[0]
        zmm6.d = temp0_10.d f- temp0_10[0]
        
        if (cond:1_1)
            zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
            zmm0.d = zmm0.d f* zmm6.d
            zmm0.d = zmm0.d f+ temp0_10[0]
            zmm0.d = zmm0.d f* arg1[0xa6].d
        else
            zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
            zmm0.d = zmm0.d f* zmm6.d
            zmm0.d = zmm0.d f+ temp0_10[0]
            zmm0.d = zmm0.d f* *(arg1 + 0x52c)
        
        zmm0.q = _mm_cvtps_pd(zmm0.q).q f+ zmm8.q
        arg1[0xad] = zmm0.q
        zmm7 = *(arg1 + 0x524)
        zmm6.d = arg1[0xa5].d.d f- zmm7.d
        zmm0.d = float.s(rand())
        zmm0.d = zmm0.d f* 3.05185094e-05f
        zmm0.d = zmm0.d f* zmm6.d
        zmm0.d = zmm0.d f+ zmm7.d
        zmm0.q = _mm_cvtps_pd(zmm0.q).q f+ arg1[0xad]
        arg1[0xb1] = zmm0.q
        int32_t rax_6 = rand()
        temp0_10[0] = temp0_10[0] * 3f
        zmm0.d = float.s(rax_6)
        temp0_10[0] = temp0_10[0] - temp0_10[0]
        zmm0.d = zmm0.d f* 3.05185094e-05f
        zmm0.d = zmm0.d f* temp0_10[0]
        zmm0.d = zmm0.d f+ temp0_10[0]
        zmm0.d = zmm0.d f* arg1[0xa6].d
        zmm0.q = _mm_cvtps_pd(zmm0.q).q f+ arg1[0xb1]
        arg1[0xae] = zmm0.q
else if (not(arg2.q f>= arg1[0xb1]) && not(arg2.q f<= arg1[0xad]))
    goto label_14236854a

arg2 = zx.o(arg1[0xad])

if (zmm8.q f>= arg2.q)
    zmm2 = arg1[0xb1]
    
    if (not(zmm8.q f<= zmm2))
        arg2 = zx.o(arg1[0xae])
        
        if (not(arg2.q f<= 0.0) && not(arg2.q f<= zmm2))
            arg2.q = arg2.q f- zmm2
            zmm8.q = zmm8.q f- zmm2
            zmm8.q = zmm8.q f/ arg2.q
            zmm6.d = fconvert.s(zmm8.q)
            arg2.d = zmm6.d f* 12f
            zmm0.d = 6f f- arg2.d
            zmm0.d = expf(zmm0.d).d f+ 1f
            arg2.d = 1f f/ zmm0.d
            zmm6.d = zmm6.d f- arg2.d
            zmm6.d = zmm6.d f* 0.5f
            zmm6.d = zmm6.d f+ arg2.d
            arg2.d = 1f f- zmm6.d
            arg2.d = arg2.d f* _mm_cvtpd_ps(zx.o(arg1[0xac])).d
            *(arg1 + 0x55c) = arg2.d
else
    zmm0 = zx.o(arg1[0xaf])
    arg2.q = arg2.q f- zmm0.q
    zmm7 = zx.o(arg1[0xac])
    zmm8.q = zmm8.q f- zmm0.q
    zmm6 = _mm_cvtpd_ps(zx.o(arg1[0xb0]))
    zmm8.q = zmm8.q f/ arg2.q
    arg2.d = fconvert.s(zmm8.q)
    arg2.d = arg2.d f* 12f
    zmm7.d = _mm_cvtpd_ps(zmm7).d f- zmm6.d
    zmm0.d = 6f f- arg2.d
    zmm0.d = expf(zmm0.d).d f+ 1f
    zmm7.d = zmm7.d f/ zmm0.d
    zmm7.d = zmm7.d f+ zmm6.d
    *(arg1 + 0x55c) = zmm7.d

*(arg1 + 0x55c) = _mm_max_ss(_mm_min_ss((*(arg1 + 0x55c)).d, 0x3f800000).d, 0).d
return zx.o(0)
