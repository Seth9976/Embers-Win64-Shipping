// 函数: sub_141edfbd0
// 地址: 0x141edfbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rsi = 0
int32_t arg_8 = 0

if (arg1[0x29] != 0)
    int64_t* r14_1 = arg2 + 0x98
    int64_t* var_48_1 = r14_1
    uint32_t rax_1 = zx.d(data_14399f630:1.b)
    uint128_t zmm0
    zmm0.d = _mm_cvtepi32_ps(zx.o(data_14399f630:2.b)).d f* 0.00392156886f
    int32_t var_98 = zmm0.d
    uint32_t rax_2 = zx.d(data_14399f630.b)
    zmm0 = _mm_cvtepi32_ps(zx.o(rax_1))
    uint32_t rax_3 = zx.d(data_14399f630:3.b)
    zmm0.d = zmm0.d f* 0.00392156886f
    uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_2))
    int32_t var_94_1 = zmm0.d
    int64_t rax_4 = *r14_1
    zmm1.d = zmm1.d f* 0.00392156886f
    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_3)).d f* 0.00392156886f
    int32_t var_90_1 = zmm1.d
    int32_t var_8c_1 = zmm0.d
    (*(rax_4 + 0x20))(r14_1, &var_98, 0x3b808081)
    float zmm2[0x2] = arg1[0x66].d
    zmm0 = arg1[0x67].d
    _mm_cvtps_pd(*(arg1 + 0x334))
    float temp0_6[0x2] = _mm_cvtps_pd(zmm2)
    uint64_t var_e8_1 = (_mm_cvtps_pd(zmm0.q)).q
    sub_140a2e390(&var_98, u"X=%3.3f Y=%3.3f Z=%3.3f", temp0_6)
    int16_t* const r12_1 = &data_142d40450
    int16_t* const rbx_1 = &data_142d40450
    
    if (var_90_1 != 0)
        rbx_1 = var_98.q
    
    (*(*arg1 + 0x540))(arg1)
    int16_t* var_a8
    sub_140a2e390(&var_a8, u"CHARACTER MOVEMENT Floor %s Crouched %i", rbx_1)
    int64_t rcx_4 = var_98.q
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    arg_8 = 0
    sub_142409af0(r14_1, &var_a8, &arg_8)
    arg_8.q = *(arg1[0x16] + 0x18)
    sub_140b63b70(&arg_8, &var_98)
    int16_t* const r8_4 = &data_142d40450
    
    if (var_90_1 != 0)
        r8_4 = var_98.q
    
    int16_t* var_b8
    sub_140a2e390(&var_b8, u"Updated Component: %s", r8_4)
    int16_t* rcx_9 = var_a8
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t rcx_10 = var_98.q
    var_a8 = var_b8
    int32_t var_b0
    int32_t var_a0_1 = var_b0
    int32_t var_ac
    int32_t var_9c_1 = var_ac
    var_b0.q = 0
    var_b8 = nullptr
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    arg_8 = 0
    int64_t r8_6 = sub_142409af0(r14_1, &var_a8, &arg_8)
    int64_t var_c8
    int16_t* var_88
    int32_t var_80
    int16_t* var_68
    int32_t var_60
    int16_t* var_58
    int32_t var_50
    int32_t rcx_13
    int16_t* rdx_4
    
    if (_mm_and_ps(*(arg1 + 0x22c), 0x7fffffff)[0] f> 9.99999975e-05f)
    label_141edfe08:
        var_b8 = nullptr
        var_b0.q = 0
        sub_1405947f0(&var_b8, 3)
        
        if (var_b0 + 3 s> var_ac)
            sub_140594770(&var_b8)
        
        UnDecorator::getReferenceType(var_b8, &data_142fdd3f4, 6)
        uint32_t zmm1_1[0x4] = *(arg1 + 0x22c)
        char rax_12 = 1
        
        if (not(_mm_and_ps(zmm1_1, 0x7fffffff)[0] f<= 9.99999994e-09f))
            sub_140a2e390(&var_68, u"X=%.2f", _mm_cvtps_pd(zmm1_1[0].q))
            int32_t r8_9
            
            if (var_60 == 0)
                r8_9 = 0
            else
                r8_9 = var_60 - 1
            
            sub_140a20ba0(&var_b8, var_68, r8_9)
            int16_t* rcx_19 = var_68
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            rax_12 = 0
        
        if (not(_mm_and_ps(arg1[0x46].d, 0x7fffffff)[0] f<= 9.99999994e-09f))
            if (rax_12 == 0)
                var_c8 = 0
                int32_t var_c0_1 = 0
                sub_1405947f0(&var_c8, 3)
                int32_t rbx_2 = var_c0_1 + 3
                
                if (rbx_2 s> 0)
                    sub_140594770(&var_c8)
                
                int64_t r14_2 = var_c8
                UnDecorator::getReferenceType(r14_2, &data_142d8adc4, 6)
                int32_t r8_10 = rbx_2 - 1
                
                if (rbx_2 == 0)
                    r8_10 = 0
                
                sub_140a20ba0(&var_b8, r14_2, r8_10)
                
                if (r14_2 != 0)
                    sub_140a74f90(r14_2)
            
            sub_140a2e390(&var_58, u"Y=%.2f", _mm_cvtps_pd(arg1[0x46].d))
            int32_t r8_13
            
            if (var_50 == 0)
                r8_13 = 0
            else
                r8_13 = var_50 - 1
            
            sub_140a20ba0(&var_b8, var_58, r8_13)
            int16_t* rcx_27 = var_58
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            rax_12 = 0
        
        if (not(_mm_and_ps(*(arg1 + 0x234), 0x7fffffff)[0] f<= 9.99999994e-09f))
            if (rax_12 == 0)
                var_c8 = 0
                int32_t var_c0_2 = 0
                sub_1405947f0(&var_c8, 3)
                int32_t rbx_3 = var_c0_2 + 3
                
                if (rbx_3 s> 0)
                    sub_140594770(&var_c8)
                
                int64_t r14_3 = var_c8
                UnDecorator::getReferenceType(r14_3, &data_142d8adc4, 6)
                int32_t r8_14 = rbx_3 - 1
                
                if (rbx_3 == 0)
                    r8_14 = 0
                
                sub_140a20ba0(&var_b8, r14_3, r8_14)
                
                if (r14_3 != 0)
                    sub_140a74f90(r14_3)
            
            sub_140a2e390(&var_88, u"Z=%.2f", _mm_cvtps_pd(*(arg1 + 0x234)))
            int32_t r8_17
            
            if (var_80 == 0)
                r8_17 = 0
            else
                r8_17 = var_80 - 1
            
            sub_140a20ba0(&var_b8, var_88, r8_17)
            int16_t* rcx_35 = var_88
            
            if (rcx_35 != 0)
                sub_140a74f90(rcx_35)
        
        var_c8 = 0
        int32_t var_c0_3 = 0
        sub_1405947f0(&var_c8, 2)
        int32_t rbx_4 = var_c0_3 + 2
        
        if (rbx_4 s> 0)
            sub_140594770(&var_c8)
        
        int64_t r14_4 = var_c8
        UnDecorator::getReferenceType(r14_4, &data_142da76f4, 4)
        int32_t r8_18 = rbx_4 - 1
        
        if (rbx_4 == 0)
            r8_18 = 0
        
        sub_140a20ba0(&var_b8, r14_4, r8_18)
        
        if (r14_4 != 0)
            sub_140a74f90(r14_4)
        
        rdx_4 = var_b8
        rcx_13 = var_b0 + 3
        r14_1 = var_48_1
        var_98.q = rdx_4
        var_b8 = nullptr
        var_90_1 = rcx_13
        var_8c_1 = var_ac
        int32_t var_b0_1
        var_b0_1.q = 0
    else
        if (_mm_and_ps(arg1[0x46].d, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141edfe08
        
        if (_mm_and_ps(*(arg1 + 0x234), 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141edfe08
        
        sub_140a2e390(&var_98, u"V(0)", r8_6)
        rcx_13 = var_90_1
        rdx_4 = var_98.q
    
    int16_t* const r8_19 = &data_142d40450
    
    if (rcx_13 != 0)
        r8_19 = rdx_4
    
    int16_t* var_78
    sub_140a2e390(&var_78, u"Acceleration: %s", r8_19)
    int16_t* rcx_42 = var_a8
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    int64_t rcx_43 = var_98.q
    var_a8 = var_78
    int32_t var_70
    int32_t var_a0_2 = var_70
    int32_t var_6c
    int32_t var_9c_2 = var_6c
    var_70.q = 0
    var_78 = nullptr
    
    if (rcx_43 != 0)
        sub_140a74f90(rcx_43)
    
    arg_8 = 0
    sub_142409af0(r14_1, &var_a8, &arg_8)
    sub_140a2e390(&var_88, u"bForceMaxAccel: %i", zx.q(zx.d(*(arg1 + 0x1f1)) u>> 1) & 1)
    int16_t* rcx_46 = var_a8
    
    if (rcx_46 != 0)
        sub_140a74f90(rcx_46)
    
    var_a8 = var_88
    int32_t var_a0_3 = var_80
    int32_t var_7c
    int32_t var_9c_3 = var_7c
    arg_8 = 0
    sub_142409af0(r14_1, &var_a8, &arg_8)
    sub_140a2e390(&var_88, u"RootMotionSources: %d active", zx.q(arg1[0x9d].d))
    int16_t* rcx_49 = var_a8
    
    if (rcx_49 != 0)
        sub_140a74f90(rcx_49)
    
    var_a8 = var_88
    int32_t var_a0_4 = var_80
    int32_t var_9c_4 = var_7c
    arg_8 = 0
    float zmm0_3 = sub_142409af0(r14_1, &var_a8, &arg_8)
    void* rax_24 = (*(*arg1 + 0x430))(arg1)
    void* rax_25 = *(arg1[0x29] + 0x298)
    void* const r14_5
    
    if (rax_25 == 0)
        r14_5 = nullptr
    else
        r14_5 = *(rax_25 + 0xa0)
    
    int16_t* const r15_1
    
    if (rax_25 == 0)
        r15_1 = u"None"
    else
        arg_8.q = *(rax_25 + 0x18)
        zmm0_3 = sub_140b63b70(&arg_8, &var_68)
        r15_1 = &data_142d40450
        rsi = 1
        
        if (var_60 != 0)
            r15_1 = var_68
    
    int16_t* const r14_6
    
    if (r14_5 == 0)
        r14_6 = u"None"
    else
        var_c8 = *(r14_5 + 0x18)
        rsi |= 2
        zmm0_3 = sub_140b63b70(&var_c8, &var_58)
        r14_6 = &data_142d40450
        
        if (var_50 != 0)
            r14_6 = var_58
    
    if (rax_24 != 0)
        var_b8 = *(rax_24 + 0x18)
        rsi |= 4
        zmm0_3 = sub_140b63b70(&var_b8, &var_88)
    
    int16_t** rax_30 = (*(*arg1 + 0x7e8))(arg1, &var_78)
    
    if (rax_30[1].d != 0)
        r12_1 = *rax_30
    
    (*(*arg1 + 0x3e8))(arg1)
    int64_t var_d8_1 = fconvert.d(zmm0_3)
    int16_t* const var_e0_1 = r15_1
    int16_t* const var_e8_2 = r14_6
    sub_140a2e390(&var_98, u"%s In physicsvolume %s on base %s component %s gravity %f", r12_1)
    int16_t* rcx_59 = var_a8
    
    if (rcx_59 != 0)
        sub_140a74f90(rcx_59)
    
    var_a8 = var_98.q
    int32_t var_a0_5 = var_90_1
    var_90_1.q = 0
    var_98.q = 0
    int16_t* rcx_60 = var_78
    int32_t var_9c_5 = var_8c_1
    
    if (rcx_60 != 0)
        sub_140a74f90(rcx_60)
    
    if ((rsi.b & 4) != 0)
        int16_t* rcx_61 = var_88
        rsi &= 0xfffffffb
        
        if (rcx_61 != 0)
            sub_140a74f90(rcx_61)
    
    if ((rsi.b & 2) != 0)
        int16_t* rcx_62 = var_58
        rsi &= 0xfffffffd
        
        if (rcx_62 != 0)
            sub_140a74f90(rcx_62)
    
    if ((rsi.b & 1) != 0)
        int16_t* rcx_63 = var_68
        
        if (rcx_63 != 0)
            sub_140a74f90(rcx_63)
    
    arg_8 = 0
    result = sub_142409af0(var_48_1, &var_a8, &arg_8)
    int16_t* rcx_65 = var_a8
    
    if (rcx_65 != 0)
        return sub_140a74f90(rcx_65)

return result
