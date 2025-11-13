// 函数: sub_141ac72b0
// 地址: 0x141ac72b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg4
int128_t* r13 = arg3
uint32_t zmm6[0x4] = *arg4
int16_t* var_f8
int32_t var_f0

if (_mm_and_ps(zmm6, 0x7fffffff)[0] f> 9.99999975e-05f)
label_141ac738a:
    int16_t* const rbx_1 = &data_142d40450
    char r15_1 = arg5
    
    if (r15_1 != 0 && not(_mm_and_ps(*arg6, 0x7fffffff)[0] f> 9.99999975e-05f)
            && not(_mm_and_ps((*arg6)[1], 0x7fffffff)[0] f> 9.99999975e-05f)
            && not(_mm_and_ps((*arg6)[2], 0x7fffffff)[0] f> 9.99999975e-05f))
        sub_140a2e390(&var_f8, LookUpVector should not be zero. Please specify which direction.", 
            arg3)
        int16_t* rcx_4 = &data_142d40450
        data_143f2bac0
        
        if (var_f0 != 0)
            rcx_4 = var_f8
        
        arg3 = sub_140d23f50(rcx_4, 3)
        int16_t* rcx_5 = var_f8
        
        if (rcx_5 != 0)
            arg3 = sub_140a74f90(rcx_5)
        
        r15_1 = 0
    
    int128_t zmm7 = arg7
    
    if (zmm7.d f< zx.o(0)[0] || not(zmm7.d f<= 180f))
        sub_140a2e390(&var_f8, u"ClampConeInDegree should range from (0, 180). ", arg3)
        data_143f2bac0
        
        if (var_f0 != 0)
            rbx_1 = var_f8
        
        sub_140d23f50(rbx_1, 3)
        int16_t* rcx_8 = var_f8
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    
    uint32_t zmm9[0x4] = (*arg6)[1]
    uint32_t zmm8[0x4] = *arg6
    int128_t zmm13 = (*arg6)[2]
    int128_t zmm10 = data_143dbb200
    int128_t zmm11 = data_143dbb1fc
    int128_t zmm12 = data_143dbb1f8
    uint32_t zmm3[0x4] = 0x3f000000
    zmm9[0] = zmm9[0] f* zmm9[0]
    zmm8[0] = zmm8[0] f* zmm8[0]
    zmm9[0] = zmm9[0] f+ zmm8[0]
    zmm9[0] = zmm9[0] f+ zmm13.d f* zmm13.d
    int64_t var_108
    uint32_t zmm5[0x4]
    
    if (not(zmm9[0] f!= 1f))
        uint32_t rax_1 = (*arg6)[2]
        var_108 = *arg6
        uint32_t var_100_1 = rax_1
    else if (zmm9[0] f>= 9.99999994e-09f)
        uint32_t zmm4[0x4] = 0x3f000000
        zmm5 = _mm_rsqrt_ss(zmm9[0], zmm9[0])
        uint32_t zmm2[0x4] = 0x3f000000
        zmm9[0] = zmm9[0] f* 0.5f
        zmm5[0] = zmm5[0] f* zmm5[0]
        zmm2[0] = 0.5f - zmm9[0] f* zmm5[0]
        zmm5[0] = zmm5[0] f* zmm2[0]
        zmm5[0] = zmm5[0] f+ zmm5[0]
        zmm9[0] = zmm9[0] f* zmm5[0] f* zmm5[0]
        zmm4[0] = 0.5f f- zmm9[0]
        zmm3 = 0x3f000000
        zmm5[0] = zmm5[0] f* zmm4[0]
        zmm5[0] = zmm5[0] f+ zmm5[0]
        zmm8[0] = zmm8[0] f* zmm5[0]
        zmm9[0] = zmm9[0] f* zmm5[0]
        zmm13.d = zmm13.d f* zmm5[0]
        var_108.d = zmm8[0]
        var_108:4.d = zmm9[0]
        int32_t var_100_3 = zmm13.d
    else
        var_108.d = zmm12.d
        var_108:4.d = zmm11.d
        int32_t var_100_2 = zmm10.d
    
    zmm8 = *(r14 + 4)
    zmm9 = r14[1].d
    float zmm1 = zmm9[0]
    zmm8[0] = zmm8[0] f* zmm8[0]
    zmm6[0] = zmm6[0] f* zmm6[0]
    zmm1 = zmm1 f* zmm9[0]
    zmm8[0] = zmm8[0] f+ zmm6[0]
    zmm8[0] = zmm8[0] f+ zmm1
    
    if (not(zmm8[0] f!= 1f))
        int32_t rax_2 = r14[1].d
        var_f8 = *r14
        int32_t var_f0_1 = rax_2
    else if (zmm8[0] f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm8[0], zmm8[0])
        zmm8[0] = zmm8[0] f* zmm3[0]
        zmm5[0] = zmm5[0] f* zmm5[0]
        zmm3[0] = zmm3[0] f- zmm8[0] f* zmm5[0]
        zmm5[0] = zmm5[0] f* zmm3[0]
        zmm5[0] = zmm5[0] f+ zmm5[0]
        zmm8[0] = zmm8[0] f* zmm5[0] f* zmm5[0]
        zmm3[0] = zmm3[0] f- zmm8[0]
        zmm5[0] = zmm5[0] f* zmm3[0]
        zmm5[0] = zmm5[0] f+ zmm5[0]
        zmm6[0] = zmm6[0] f* zmm5[0]
        zmm8[0] = zmm8[0] f* zmm5[0]
        zmm9[0] = zmm9[0] f* zmm5[0]
        var_f8.d = zmm6[0]
        var_f8:4.d = zmm8[0]
        uint32_t var_f0_3 = zmm9[0]
    else
        var_f8.d = zmm12.d
        var_f8:4.d = zmm11.d
        int32_t var_f0_2 = zmm10.d
    
    float var_e8[0x4][0x4]
    sub_141a80960(&var_e8, arg2, r13, &var_f8, r15_1, &var_108, zmm7.d)
    int128_t zmm1_2 = *(arg2 + 0x10)
    int128_t zmm2_1 = *(arg2 + 0x20)
    *arg1 = var_e8[0]
    arg1[1] = zmm1_2
    arg1[2] = zmm2_1
else
    if (_mm_and_ps(*(arg4 + 4), 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_141ac738a
    
    if (_mm_and_ps(*(arg4 + 8), 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_141ac738a
    
    sub_140a2e390(&var_f8, u"AimVector should not be zero. Please specify which direction.", arg3)
    int16_t* const rcx_1 = &data_142d40450
    data_143f2bac0
    
    if (var_f0 != 0)
        rcx_1 = var_f8
    
    sub_140d23f50(rcx_1, 3)
    int16_t* rcx_2 = var_f8
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int128_t zmm1_1 = data_143dbb0d0
    *arg1 = data_143dbb0c0
    int128_t zmm0_1 = data_143dbb0e0
    arg1[1] = zmm1_1
    arg1[2] = zmm0_1
return arg1
