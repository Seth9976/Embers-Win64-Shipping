// 函数: sub_141e99780
// 地址: 0x141e99780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_138 = 0
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
zmm6, zmm7, zmm8 = sub_142214b70(arg1, arg2, arg3, arg4, arg5)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
int32_t r13 = 1
uint64_t rdx = zx.q(data_14401b1a0)
float var_128 = 0f

if (data_143f3a420 s> *(0x14 + *(ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f3a420)
    
    if (data_143f3a420 == 0xffffffff)
        zmm6 = sub_140b58260(&data_143f3a418, u"Physics", 1)
        _Init_thread_footer(&data_143f3a420)

int64_t* rcx_3 = *arg3
int64_t rax_1 = sx.q(arg3[1].d)
void* rdx_1 = &rcx_3[rax_1]

if (rcx_3 != rdx_1)
    int64_t i = data_143f3a418
    
    while (*rcx_3 != i)
        rcx_3 = &rcx_3[1]
        
        if (rcx_3 == rdx_1)
            return i
    
    int16_t* const r12_1 = &data_142d40450
    float var_58_1[0x4] = zmm7
    var_128 = var_128 + 4f
    float var_68_1[0x4] = zmm8
    int64_t* rcx_4
    
    if (arg1[0x51] != 0)
        rcx_4 = arg1[0x53]
    
    int16_t* var_158
    int16_t* var_120
    int32_t var_118
    int32_t rdi_2
    int64_t r8_1
    int16_t* r14_2
    
    if (arg1[0x51] == 0 || rcx_4 == 0)
        var_158 = nullptr
        int32_t var_150_2 = 0
        sub_1405947f0(&var_158, 0xa)
        rdi_2 = var_150_2 + 0xa
        
        if (rdi_2 s> 0)
            sub_140594770(&var_158)
        
        r14_2 = var_158
        r8_1 = sub_1405a7220(r14_2, 0xa, "Not Based", 0xa, 0x3f)
    else
        int64_t* rax_5
        int32_t rdi_1
        
        if ((*(*rcx_4 + 0x4c0))(rcx_4) == 0)
            var_138.q = *(arg1[0x53] + 0x18)
            sub_140b63b70(&var_138, &var_120)
            rax_5 = &var_120
            rdi_1 = 2
        else
            var_158 = nullptr
            int32_t var_150_1 = 0
            sub_1405947f0(&var_158, 0xf)
            int32_t rax_4 = var_150_1 + 0xf
            var_150_1 = rax_4
            
            if (rax_4 s> 0)
                sub_140594770(&var_158)
            
            sub_1405a7220(var_158, 0xf, "World Geometry", 0xf, 0x3f)
            rax_5 = &var_158
            rdi_1 = 1
        
        int16_t* rsi_1 = *rax_5
        *rax_5 = 0
        int32_t r14_1 = rax_5[1].d
        rax_5[1] = 0
        
        if ((rdi_1.b & 2) != 0)
            int16_t* rcx_10 = var_120
            rdi_1 &= 0xfffffffd
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
        
        if ((1 & rdi_1.b) != 0)
            int16_t* rcx_11 = var_158
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
        
        int16_t* const r8 = &data_142d40450
        
        if (r14_1 != 0)
            r8 = rsi_1
        
        r8_1 = sub_140a2e390(&var_120, u"Based On %s", r8)
        
        if (rsi_1 != 0)
            r8_1 = sub_140a74f90(rsi_1)
        
        r14_2 = var_120
        rdi_2 = var_118
    
    zmm8 = data_143f3a240
    int32_t zmm0_2[0x4] = *(arg1 + 0x2bc)
    float zmm2_1[0x4] = arg1[0x57].d
    zmm7 = *(arg1 + 0x2b4)
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm8, data_143f3a0e0)
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm2_1, zx.o(0)[0].q)
    float temp0_4[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, zmm0_2[0].q), temp0_2[0].q)
    zmm2_1 = data_143f3a250
    float temp0_5[0x4] = _mm_div_ps(temp0_4, zmm8)
    int16_t* const rcx_18 = &data_142d40450
    
    if (rdi_2 != 0)
        rcx_18 = r14_2
    
    var_138 = 0x38d1b717
    float temp0_7[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_5))
    zmm2_1 = _mm_and_ps(_mm_cmpeq_ps(zmm2_1, __andps_xmmxud_memxud(temp0_5, data_143f3a0e0), 2), 
        temp0_7 ^ temp0_5)
    float temp0_15[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_1), 
        _mm_min_ps(_mm_sub_ps(temp0_4, _mm_mul_ps(zmm2_1 ^ temp0_7, zmm8)), temp0_1))
    float temp0_16[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_15, 2)
    zmm0_2 = _mm_add_ps(temp0_15, zmm8)
    zmm2_1 = _mm_and_ps(zmm0_2 ^ temp0_15, temp0_16) ^ zmm0_2
    zmm0_2 = _mm_cmpeq_ps(data_143f3a230, zmm2_1, 1)
    float zmm1_1[0x4] = _mm_and_ps(_mm_sub_ps(zmm2_1, zmm8) ^ zmm2_1, zmm0_2)
    zmm0_2 = var_138
    int16_t* var_100
    int64_t r8_2
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0_2, zmm0_2, 0), 
            __andps_xmmxud_memxud(zmm1_1 ^ zmm2_1, data_143f3a0e0), 1)) != 0)
        var_138.q = 0
        int64_t var_130_1 = 0
        sub_1405947f0(&var_138, 3)
        int32_t rax_9 = var_130_1.d + 3
        var_130_1.d = rax_9
        
        if (rax_9 s> 0)
            sub_140594770(&var_138)
        
        UnDecorator::getReferenceType(var_138.q, &data_14323b344, 6)
        zmm1_1 = *(arg1 + 0x2b4)
        char rax_10 = 1
        
        if (not(_mm_and_ps(zmm1_1, 0x7fffffff)[0] <= 9.99999994e-09f))
            int64_t var_e0
            sub_140a2e390(&var_e0, u"P=%.2f", _mm_cvtps_pd(zmm1_1[0].q)[0].q)
            int32_t var_d8
            int32_t r8_5
            
            if (var_d8 == 0)
                r8_5 = 0
            else
                r8_5 = var_d8 - 1
            
            sub_140a20ba0(&var_138, var_e0, r8_5)
            int64_t rcx_26 = var_e0
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            rax_10 = 0
        
        if (not(_mm_and_ps(arg1[0x57].d, 0x7fffffff)[0] <= 9.99999994e-09f))
            if (rax_10 == 0)
                var_158 = nullptr
                int32_t var_150_3 = 0
                sub_1405947f0(&var_158, 3)
                int32_t rdi_3 = var_150_3 + 3
                
                if (rdi_3 s> 0)
                    sub_140594770(&var_158)
                
                int16_t* rsi_2 = var_158
                UnDecorator::getReferenceType(rsi_2, &data_142d8adc4, 6)
                int32_t r8_6
                
                if (rdi_3 == 0)
                    r8_6 = 0
                else
                    r8_6 = rdi_3 - 1
                
                sub_140a20ba0(&var_138, rsi_2, r8_6)
                
                if (rsi_2 != 0)
                    sub_140a74f90(rsi_2)
            
            int64_t var_d0
            sub_140a2e390(&var_d0, u"Y=%.2f", _mm_cvtps_pd(arg1[0x57].d[0].q)[0].q)
            int32_t var_c8
            int32_t r8_9
            
            if (var_c8 == 0)
                r8_9 = 0
            else
                r8_9 = var_c8 - 1
            
            sub_140a20ba0(&var_138, var_d0, r8_9)
            int64_t rcx_34 = var_d0
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            rax_10 = 0
        
        if (not(_mm_and_ps(*(arg1 + 0x2bc), 0x7fffffff)[0] <= 9.99999994e-09f))
            if (rax_10 == 0)
                var_158 = nullptr
                int32_t var_150_4 = 0
                sub_1405947f0(&var_158, 3)
                int32_t rdi_4 = var_150_4 + 3
                
                if (rdi_4 s> 0)
                    sub_140594770(&var_158)
                
                int16_t* rsi_3 = var_158
                UnDecorator::getReferenceType(rsi_3, &data_142d8adc4, 6)
                int32_t r8_10
                
                if (rdi_4 == 0)
                    r8_10 = 0
                else
                    r8_10 = rdi_4 - 1
                
                sub_140a20ba0(&var_138, rsi_3, r8_10)
                
                if (rsi_3 != 0)
                    sub_140a74f90(rsi_3)
            
            int64_t var_c0
            sub_140a2e390(&var_c0, u"R=%.2f", _mm_cvtps_pd((*(arg1 + 0x2bc))[0].q)[0].q)
            int32_t var_b8
            int32_t r8_13
            
            if (var_b8 == 0)
                r8_13 = 0
            else
                r8_13 = var_b8 - 1
            
            sub_140a20ba0(&var_138, var_c0, r8_13)
            int64_t rcx_42 = var_c0
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
        
        var_158 = nullptr
        int32_t var_150_5 = 0
        sub_1405947f0(&var_158, 2)
        int32_t rdi_5 = var_150_5 + 2
        
        if (rdi_5 s> 0)
            sub_140594770(&var_158)
        
        int16_t* rsi_4 = var_158
        UnDecorator::getReferenceType(rsi_4, &data_142da76f4, 4)
        int32_t r8_14 = rdi_5 - 1
        
        if (rdi_5 == 0)
            r8_14 = 0
        
        r8_2 = sub_140a20ba0(&var_138, rsi_4, r8_14)
        
        if (rsi_4 != 0)
            r8_2 = sub_140a74f90(rsi_4)
        
        var_100 = var_138.q
        var_138.q = 0
        int64_t var_130_2 = 0
        int32_t var_f8_1 = var_130_1.d
        int32_t var_f4_1 = var_130_1:4.d
    else
        r8_2 = sub_140a2e390(&var_100, u"R(0)", r8_1)
    
    int16_t* var_110
    int32_t rcx_49
    int16_t* rdx_16
    
    if (_mm_and_ps(arg1[0x55].d, 0x7fffffff)[0] f> 9.99999975e-05f)
    label_141e99e9c:
        var_158 = nullptr
        int64_t var_150_6 = 0
        sub_1405947f0(&var_158, 3)
        int32_t rax_12 = var_150_6.d + 3
        var_150_6.d = rax_12
        
        if (rax_12 s> 0)
            sub_140594770(&var_158)
        
        UnDecorator::getReferenceType(var_158, &data_142fdd3f4, 6)
        zmm1_1 = arg1[0x55].d
        char rax_13 = 1
        
        if (not(_mm_and_ps(zmm1_1, 0x7fffffff)[0] <= 9.99999994e-09f))
            int64_t var_b0
            sub_140a2e390(&var_b0, u"X=%.2f", _mm_cvtps_pd(zmm1_1[0].q)[0].q)
            int32_t var_a8
            int32_t r8_17
            
            if (var_a8 == 0)
                r8_17 = 0
            else
                r8_17 = var_a8 - 1
            
            sub_140a20ba0(&var_158, var_b0, r8_17)
            int64_t rcx_55 = var_b0
            
            if (rcx_55 != 0)
                sub_140a74f90(rcx_55)
            
            rax_13 = 0
        
        int64_t var_148
        
        if (not(_mm_and_ps(*(arg1 + 0x2ac), 0x7fffffff)[0] <= 9.99999994e-09f))
            if (rax_13 == 0)
                var_148 = 0
                int32_t var_140_1 = 0
                sub_1405947f0(&var_148, 3)
                int32_t rdi_6 = var_140_1 + 3
                
                if (rdi_6 s> 0)
                    sub_140594770(&var_148)
                
                int64_t rsi_5 = var_148
                UnDecorator::getReferenceType(rsi_5, &data_142d8adc4, 6)
                int32_t r8_18
                
                if (rdi_6 == 0)
                    r8_18 = 0
                else
                    r8_18 = rdi_6 - 1
                
                sub_140a20ba0(&var_158, rsi_5, r8_18)
                
                if (rsi_5 != 0)
                    sub_140a74f90(rsi_5)
            
            int64_t var_a0
            sub_140a2e390(&var_a0, u"Y=%.2f", _mm_cvtps_pd((*(arg1 + 0x2ac))[0].q)[0].q)
            int32_t var_98
            int32_t r8_21
            
            if (var_98 == 0)
                r8_21 = 0
            else
                r8_21 = var_98 - 1
            
            sub_140a20ba0(&var_158, var_a0, r8_21)
            int64_t rcx_63 = var_a0
            
            if (rcx_63 != 0)
                sub_140a74f90(rcx_63)
            
            rax_13 = 0
        
        if (not(_mm_and_ps(arg1[0x56].d, 0x7fffffff)[0] <= 9.99999994e-09f))
            if (rax_13 == 0)
                var_148 = 0
                int32_t var_140_2 = 0
                sub_1405947f0(&var_148, 3)
                int32_t rdi_7 = var_140_2 + 3
                
                if (rdi_7 s> 0)
                    sub_140594770(&var_148)
                
                int64_t rsi_6 = var_148
                UnDecorator::getReferenceType(rsi_6, &data_142d8adc4, 6)
                int32_t r8_22
                
                if (rdi_7 == 0)
                    r8_22 = 0
                else
                    r8_22 = rdi_7 - 1
                
                sub_140a20ba0(&var_158, rsi_6, r8_22)
                
                if (rsi_6 != 0)
                    sub_140a74f90(rsi_6)
            
            sub_140a2e390(&var_120, u"Z=%.2f", _mm_cvtps_pd(arg1[0x56].d[0].q)[0].q)
            int32_t r8_25
            
            if (var_118 == 0)
                r8_25 = 0
            else
                r8_25 = var_118 - 1
            
            sub_140a20ba0(&var_158, var_120, r8_25)
            int16_t* rcx_71 = var_120
            
            if (rcx_71 != 0)
                sub_140a74f90(rcx_71)
        
        var_148 = 0
        int32_t var_140_3 = 0
        sub_1405947f0(&var_148, 2)
        int32_t rdi_8 = var_140_3 + 2
        
        if (rdi_8 s> 0)
            sub_140594770(&var_148)
        
        int64_t rsi_7 = var_148
        UnDecorator::getReferenceType(rsi_7, &data_142da76f4, 4)
        int32_t r8_26
        
        if (rdi_8 == 0)
            r8_26 = 0
        else
            r8_26 = rdi_8 - 1
        
        sub_140a20ba0(&var_158, rsi_7, r8_26)
        
        if (rsi_7 != 0)
            sub_140a74f90(rsi_7)
        
        rdx_16 = var_158
        rcx_49 = var_150_6.d
        var_110 = rdx_16
        var_158 = nullptr
        int64_t var_150_7 = 0
        int32_t var_108_1 = rcx_49
        int32_t var_104_1 = var_150_6:4.d
    else
        if (_mm_and_ps(*(arg1 + 0x2ac), 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141e99e9c
        
        if (_mm_and_ps(arg1[0x56].d, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_141e99e9c
        
        sub_140a2e390(&var_110, u"V(0)", r8_2)
        int32_t var_108
        rcx_49 = var_108
        rdx_16 = var_110
    
    int16_t* const var_168_1 = rcx_18
    
    if (rcx_49 != 0)
        r12_1 = rdx_16
    
    int64_t var_90
    sub_140a2e390(&var_90, u"RelativeLoc: %s Rot: %s %s", r12_1)
    sub_142409af0(arg2 + 0x98, &var_90, &var_128)
    int64_t rcx_79 = var_90
    int512_t zmm6_1
    zmm6_1.o = zmm6
    
    if (rcx_79 != 0)
        sub_140a74f90(rcx_79)
    
    int16_t* rcx_80 = var_110
    
    if (rcx_80 != 0)
        sub_140a74f90(rcx_80)
    
    int16_t* rcx_81 = var_100
    
    if (rcx_81 != 0)
        sub_140a74f90(rcx_81)
    
    int64_t* rcx_82 = arg1[0x51]
    
    if (rcx_82 == 0)
        r13 = 0
    else
        (*(*rcx_82 + 0x800))(rcx_82, arg2, arg3, arg4, arg5)
        int64_t* rcx_83 = arg1[0x51]
        
        if (rcx_83 == 0)
            r13 = 0
        else if ((*(*rcx_83 + 0x540))(rcx_83) == 0)
            r13 = 0
    
    int64_t var_80
    sub_140a2e390(&var_80, u"Crouched %i", zx.q(r13))
    rax_1 = sub_142409af0(arg2 + 0x98, &var_80, &var_128)
    int64_t rcx_86 = var_80
    
    if (rcx_86 != 0)
        rax_1 = sub_140a74f90(rcx_86)
    
    if (r14_2 != 0)
        return sub_140a74f90(r14_2)

return rax_1
