// 函数: sub_1429c3b00
// 地址: 0x1429c3b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__CheckForDebuggerJustMyCode(&data_14427d007)
float zmm3 = *(arg2 + 0xc)
float zmm4 = *(arg3 + 0xc)
zmm3 - zmm4
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2

if (is_unordered.d(zmm3, zmm4) || zmm3 != zmm4)
label_1429c3c1d:
    zmm0.d = (*(arg2 + 0x1c)).d f+ *(arg3 + 0x1c)
    zmm1 = zx.o(arg2[2])
    zmm2 = zx.o(*arg2)
    int32_t rax_7 = arg3[1].d
    zmm0.d = zmm0.d f* 0.5f
    int32_t rax_8 = arg2[1].d
    *(arg1 + 0x1c) = zmm0.d
    zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    uint128_t zmm7 = 0x7fffffffffffffff
    uint128_t zmm9 = zx.o(*arg3)
    uint128_t zmm10
    zmm10.d = (*arg3).d f+ zmm2.d
    uint128_t zmm11 = zx.o(arg3[2])
    uint128_t zmm13
    zmm13.d = arg3[2].d f+ zmm1.d
    uint128_t zmm14
    zmm14.d = rax_7.d f+ rax_8
    zmm9.d = _mm_shuffle_ps(zmm9, zmm9, 0x55).d f+ zmm0.d
    zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
    *(arg1 + 0xc) = (zmm4 + zmm3) * 0.5f
    *arg1 = (_mm_unpacklo_ps(zmm10, zmm9.q)).q
    zmm11.d = zmm11.d f+ _mm_shuffle_ps(zmm1, zmm1, 0x55).d
    arg1[1].d = zmm14.d
    int32_t rax_11 = arg2[3].d
    uint128_t zmm12 = arg3[3].d
    arg1[2] = (_mm_unpacklo_ps(zmm13, zmm11.q)).q
    zmm12.d = zmm12.d f+ rax_11
    zmm0.q = fconvert.d(zmm10.d)
    zmm0 = _mm_and_ps(zmm0, zmm7)
    arg1[3].d = zmm12.d
    int32_t rax_13
    rax_13.b = _mm_cvtpd_ps(zmm0).d f> 1.17549435e-38f
    
    if (rax_13 != 0)
    label_1429c3d9e:
        zmm0.d = zmm9.d f* zmm9.d
        zmm1.d = zmm10.d f* zmm10.d
        zmm2.d = zmm14.d f* zmm14.d
        zmm0.d = zmm0.d f+ zmm1.d
        zmm0.d = zmm0.d f+ zmm2.d
        zmm1.d = 1f f/ sqrtf(zmm0.d).d
        zmm10.d = zmm10.d f* zmm1.d
        zmm9.d = zmm9.d f* zmm1.d
        zmm1.d = zmm1.d f* zmm14.d
        *arg1 = (_mm_unpacklo_ps(zmm10, zmm9.q)).q
        arg1[1].d = zmm1.d
    else
        zmm0.q = fconvert.d(zmm9.d)
        int32_t rax_14
        rax_14.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm7)).d f> 1.17549435e-38f
        
        if (rax_14 != 0)
            goto label_1429c3d9e
        
        int32_t rax_15
        rax_15.b = _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm14.q), zmm7)).d f> 1.17549435e-38f
        
        if (rax_15 != 0)
            goto label_1429c3d9e
    
    zmm0.q = fconvert.d(zmm13.d)
    int32_t rax_17
    rax_17.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm7)).d f> 1.17549435e-38f
    
    if (rax_17 != 0)
    label_1429c3e5a:
        zmm0.d = zmm13.d f* zmm13.d
        zmm1.d = zmm11.d f* zmm11.d
        zmm2.d = zmm12.d f* zmm12.d
        zmm0.d = zmm0.d f+ zmm1.d
        zmm0.d = zmm0.d f+ zmm2.d
        uint128_t zmm6
        zmm6.d = 1f / sqrtf(zmm0.d)[0]
        float zmm0_1[0x4] = zmm6
        zmm0_1[0] = zmm0_1[0] f* zmm13.d
        zmm1.d = zmm6.d f* zmm11.d
        zmm6.d = zmm6.d f* zmm12.d
        arg1[2] = (_mm_unpacklo_ps(zmm0_1, zmm1.q)).q
        arg1[3].d = zmm6.d
    else
        zmm0.q = fconvert.d(zmm11.d)
        int32_t rax_18
        rax_18.b = _mm_cvtpd_ps(_mm_and_ps(zmm0, zmm7)).d f> 1.17549435e-38f
        
        if (rax_18 != 0)
            goto label_1429c3e5a
        
        int32_t rdi_1
        rdi_1.b = _mm_cvtpd_ps(_mm_and_ps(_mm_cvtps_pd(zmm12.q), zmm7)).d f> 1.17549435e-38f
        
        if (rdi_1 != 0)
            goto label_1429c3e5a
else
    zmm2 = *(arg2 + 0x1c)
    float temp0_1 = *(arg3 + 0x1c)
    zmm2.d f- temp0_1
    
    if (is_unordered.d(zmm2.d, temp0_1) || zmm2.d f!= temp0_1)
        goto label_1429c3c1d
    
    zmm1 = zx.o(*arg3)
    float rax_1 = arg3[1].d
    zmm0 = zx.o(*arg2)
    zmm0.d f- zmm1.d
    
    if (is_unordered.d(zmm0.d, zmm1.d) || zmm0.d f!= zmm1.d)
        goto label_1429c3c1d
    
    zmm0 = zmm0.q:4.d
    float temp1_1 = zmm1.q:4.d
    zmm0.d f- temp1_1
    
    if (is_unordered.d(zmm0.d, temp1_1) || zmm0.d f!= temp1_1)
        goto label_1429c3c1d
    
    zmm0 = arg2[1].d
    zmm0.d f- rax_1
    
    if (is_unordered.d(zmm0.d, rax_1) || zmm0.d f!= rax_1)
        goto label_1429c3c1d
    
    zmm1 = zx.o(arg3[2])
    float rax_3 = arg3[3].d
    zmm0 = zx.o(arg2[2])
    zmm0.d f- zmm1.d
    
    if (is_unordered.d(zmm0.d, zmm1.d) || zmm0.d f!= zmm1.d)
        goto label_1429c3c1d
    
    zmm0 = zmm0.q:4.d
    float temp3_1 = zmm1.q:4.d
    zmm0.d f- temp3_1
    
    if (is_unordered.d(zmm0.d, temp3_1) || zmm0.d f!= temp3_1)
        goto label_1429c3c1d
    
    zmm0 = arg2[3].d
    zmm0.d f- rax_3
    
    if (is_unordered.d(zmm0.d, rax_3) || zmm0.d f!= rax_3)
        goto label_1429c3c1d
    
    int32_t rax_5 = arg2[1].d
    *arg1 = *arg2
    arg1[1].d = rax_5
    int32_t rax_6 = arg2[3].d
    arg1[2] = arg2[2]
    arg1[3].d = rax_6
    *(arg1 + 0xc) = zmm3
    *(arg1 + 0x1c) = zmm2.d
return arg1
