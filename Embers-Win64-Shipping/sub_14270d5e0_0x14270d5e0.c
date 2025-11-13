// 函数: sub_14270d5e0
// 地址: 0x14270d5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3c6e0(arg2 + 0x34)

if (result != 0)
    arg2[6].d
    sub_1426cce30(arg1 + 0x88, result)
    sub_1426e2610(arg1 + 0x88)
    arg2[6].d
    sub_1426cce30(arg1 + 0xc0, result)
    int128_t zmm0_2 = sub_1426e2610(arg1 + 0xc0)
    float (* var_b8)[0x2] = nullptr
    int32_t var_b0_1 = 0
    void* rdx_2
    
    if (*(arg1 + 0x200) == 0)
        rdx_2 = nullptr
    else
        void* rax = sub_142736ba0()
        
        if (rax == 0)
            rdx_2 = nullptr
        else
            rdx_2 = *(arg1 + 0x200)
            int64_t rax_1 = sx.q(*(rax + 0x38))
            
            if (rax_1.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_1 << 3)) != rax + 0x30)
                rdx_2 = nullptr
    
    int128_t zmm6_1
    uint128_t zmm7_1
    uint128_t zmm8_1
    float zmm9_1
    result, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_1426e7790(arg2, rdx_2, &var_b8)
    
    if (result.b != 0)
        uint32_t rcx_7 = zx.d(*(arg1 + 0x1f8))
        int128_t var_38_1 = zmm6_1
        uint128_t var_48_1 = zmm7_1
        float var_c8
        float var_c4
        float var_c0
        uint64_t* var_a8
        int32_t i_1
        double var_98
        int64_t var_90
        char var_87
        char var_86
        int64_t performanceCount
        int32_t i
        uint64_t* r8_6
        float zmm2_1
        
        if (rcx_7 == 0)
            result = sub_1426c5aa0(&var_a8, arg1, arg2, 0xffffffff)
            i = i_1
            r8_6 = var_a8
            
            while (true)
                if (i s>= r8_6[1].d)
                    goto label_14270e0af_1
                
                if ((*(r8_6 + 0x13e) & 1) != 0)
                    goto label_14270e0af_1
                
                if (not(var_98 < 0.0))
                    result = QueryPerformanceCounter(&performanceCount)
                    i = i_1
                    
                    if (float.d(performanceCount) f* data_143d796f8 f+ 0x4170000000000000 >= var_98)
                        break
                
                sub_1426df900(arg1, &var_c8, arg2, i)
                
                if (_finite(_mm_cvtps_pd(var_c8).q) != 0 && _finite(_mm_cvtps_pd(var_c4).q) != 0)
                    _finite(_mm_cvtps_pd(var_c0).q)
                
                int32_t rsi_4 = 0
                
                if (var_b0_1 s> 0)
                    float* rdi_4 = var_b8
                    int64_t rbx_4 = 0
                    
                    do
                        if (_finite(_mm_cvtps_pd(*(rdi_4 + rbx_4)).q) != 0
                                && _finite(_mm_cvtps_pd(*(rdi_4 + rbx_4 + 4)).q) != 0)
                            _finite(_mm_cvtps_pd(*(rdi_4 + rbx_4 + 8)).q)
                        
                        rdi_4 = var_b8
                        float zmm1_4 = *(rdi_4 + rbx_4) - var_c8
                        zmm2_1 = *(rdi_4 + rbx_4 + 4) - var_c4
                        float zmm0_10[0x2] = *(rdi_4 + rbx_4 + 8)
                        zmm0_10[0] = zmm0_10[0] - var_c0
                        zmm0_10[0] = zmm0_10[0] * zmm0_10[0]
                        zmm1_4 = _mm_sqrt_ss(0, zmm2_1 * zmm2_1 + zmm1_4 * zmm1_4 + zmm0_10[0])
                        
                        if ((var_86 & 2) == 0)
                            if (*(arg1 + 0x34) == 1)
                            label_14270dfce:
                                uint32_t rcx_45 = zx.d(var_87)
                                int16_t rax_18 = var_90:4.w
                                
                                if (rcx_45 == 0)
                                    zmm0_10 = var_90.d
                                    zmm0_10[0] = zmm0_10[0] + zmm1_4
                                    var_90.d = zmm0_10[0]
                                else if (rcx_45 == 1)
                                    if (rax_18 == 0 || not(var_90.d[0] <= zmm1_4))
                                        var_90.d = zmm1_4
                                else if (rcx_45 == 2)
                                    if (rax_18 == 0)
                                        var_90.d = zmm1_4
                                    else if (not(var_90.d[0] >= zmm1_4))
                                        var_90.d = zmm1_4
                                else if (rcx_45 == 3)
                                    zmm0_10 = var_90.d
                                    zmm0_10[0] = zmm0_10[0] * zmm1_4
                                    var_90.d = zmm0_10[0]
                                
                                var_90:4.w = rax_18 + 1
                            else
                                uint32_t rcx_43 = zx.d(*(arg1 + 0x4a))
                                bool cond:4_1
                                
                                if (rcx_43 == 0)
                                    cond:4_1 = zmm1_4 >= zmm9_1
                                label_14270dfc7:
                                    int32_t rax_17
                                    rax_17.b = cond:4_1
                                    
                                    if (rax_17.b != 0)
                                        goto label_14270dfce
                                else
                                    if (rcx_43 == 1)
                                        cond:4_1 = zmm0_2.d f>= zmm1_4
                                        goto label_14270dfc7
                                    
                                    if (rcx_43 == 2 && not(zmm1_4 < zmm9_1)
                                            && not(zmm1_4 f> zmm0_2.d))
                                        goto label_14270dfce
                            
                            var_90:6.w += 1
                        
                        rsi_4 += 1
                        rbx_4 += 0xc
                    while (rsi_4 s< var_b0_1)
                
                result = sub_1426ec620(&var_a8)
                r8_6 = var_a8
                i = i_1
                
                if ((*(r8_6 + 0x13e) & 1) == 0)
                    i += 1
                    result.b = var_86 & 0xfd
                    var_90 = 0
                    result.b |= 1
                    i_1 = i
                    var_86 = result.b
                    
                    if (i s>= r8_6[1].d)
                        goto label_14270e0af_1
                    
                    do
                        result = *r8_6
                        int32_t r9_9 = *(result + (sx.q(i) << 3) + 4)
                        
                        if (not(test_bit(r9_9, 0x1e)) && r9_9 s>= 0)
                            break
                        
                        i += 1
                        i_1 = i
                    while (i s< r8_6[1].d)
            
        label_14270e0ab:
        label_14270e0af:
            *(var_a8 + 0x124) = i
        else
            if (rcx_7 == 1)
                result = sub_1426c5aa0(&var_a8, arg1, arg2, 0xffffffff)
                i = i_1
                r8_6 = var_a8
                
                while (true)
                    if (i s>= r8_6[1].d)
                        goto label_14270e0af_1
                    
                    if ((*(r8_6 + 0x13e) & 1) != 0)
                        goto label_14270e0af_1
                    
                    if (not(var_98 < 0.0))
                        result = QueryPerformanceCounter(&performanceCount)
                        i = i_1
                        
                        if (float.d(performanceCount) f* data_143d796f8 f+ 0x4170000000000000
                                >= var_98)
                            break
                    
                    sub_1426df900(arg1, &var_c8, arg2, i)
                    
                    if (_finite(_mm_cvtps_pd(var_c8).q) != 0
                            && _finite(_mm_cvtps_pd(var_c4).q) != 0)
                        _finite(_mm_cvtps_pd(var_c0).q)
                    
                    int32_t rsi_3 = 0
                    
                    if (var_b0_1 s> 0)
                        float (* rdi_3)[0x2] = var_b8
                        int64_t rbx_3 = 0
                        
                        do
                            if (_finite(_mm_cvtps_pd(*(rdi_3 + rbx_3)).q) != 0
                                    && _finite(_mm_cvtps_pd(*(rdi_3 + rbx_3 + 4)).q) != 0)
                                _finite(_mm_cvtps_pd(*(rdi_3 + rbx_3 + 8)).q)
                            
                            rdi_3 = var_b8
                            float zmm1_3 = *(rdi_3 + rbx_3)
                            float zmm0_8[0x2] = *(rdi_3 + rbx_3 + 4)
                            zmm0_8[0] = zmm0_8[0] - var_c4
                            zmm1_3 = zmm1_3 - var_c8
                            zmm0_8[0] = zmm0_8[0] * zmm0_8[0]
                            zmm0_8[0] = zmm0_8[0] + zmm1_3 * zmm1_3
                            zmm2_1 = _mm_sqrt_ss((zx.o(0)).d, zmm0_8[0])
                            
                            if ((var_86 & 2) == 0)
                                if (*(arg1 + 0x34) == 1)
                                label_14270dd4b:
                                    uint32_t rcx_35 = zx.d(var_87)
                                    int16_t rax_14 = var_90:4.w
                                    
                                    if (rcx_35 == 0)
                                        zmm0_8 = var_90.d
                                        zmm0_8[0] = zmm0_8[0] + zmm2_1
                                        var_90.d = zmm0_8[0]
                                    else if (rcx_35 == 1)
                                        if (rax_14 == 0 || not(var_90.d[0] <= zmm2_1))
                                            var_90.d = zmm2_1
                                    else if (rcx_35 == 2)
                                        if (rax_14 == 0)
                                            var_90.d = zmm2_1
                                        else if (not(var_90.d[0] >= zmm2_1))
                                            var_90.d = zmm2_1
                                    else if (rcx_35 == 3)
                                        zmm0_8 = var_90.d
                                        zmm0_8[0] = zmm0_8[0] * zmm2_1
                                        var_90.d = zmm0_8[0]
                                    
                                    var_90:4.w = rax_14 + 1
                                else
                                    uint32_t rcx_33 = zx.d(*(arg1 + 0x4a))
                                    bool cond:5_1
                                    
                                    if (rcx_33 == 0)
                                        cond:5_1 = zmm2_1 >= zmm9_1
                                    label_14270dd44:
                                        int32_t rax_13
                                        rax_13.b = cond:5_1
                                        
                                        if (rax_13.b != 0)
                                            goto label_14270dd4b
                                    else
                                        if (rcx_33 == 1)
                                            cond:5_1 = zmm0_2.d f>= zmm2_1
                                            goto label_14270dd44
                                        
                                        if (rcx_33 == 2 && not(zmm2_1 < zmm9_1)
                                                && not(zmm2_1 f> zmm0_2.d))
                                            goto label_14270dd4b
                                
                                var_90:6.w += 1
                            
                            rsi_3 += 1
                            rbx_3 += 0xc
                        while (rsi_3 s< var_b0_1)
                    
                    result = sub_1426ec620(&var_a8)
                    r8_6 = var_a8
                    i = i_1
                    
                    if ((*(r8_6 + 0x13e) & 1) == 0)
                        i += 1
                        result.b = var_86 & 0xfd
                        var_90 = 0
                        result.b |= 1
                        i_1 = i
                        var_86 = result.b
                        
                        if (i s>= r8_6[1].d)
                            goto label_14270e0af_1
                        
                        do
                            result = *r8_6
                            int32_t r9_7 = *(result + (sx.q(i) << 3) + 4)
                            
                            if (not(test_bit(r9_7, 0x1e)) && r9_7 s>= 0)
                                break
                            
                            i += 1
                            i_1 = i
                        while (i s< r8_6[1].d)
                
                goto label_14270e0ab
            
            if (rcx_7 == 2)
                result = sub_1426c5aa0(&var_a8, arg1, arg2, 0xffffffff)
                i = i_1
                r8_6 = var_a8
                
                while (true)
                    if (i s>= r8_6[1].d)
                        goto label_14270e0af_1
                    
                    if ((*(r8_6 + 0x13e) & 1) != 0)
                        goto label_14270e0af_1
                    
                    if (not(var_98 < 0.0))
                        result = QueryPerformanceCounter(&performanceCount)
                        i = i_1
                        
                        if (float.d(performanceCount) f* data_143d796f8 f+ 0x4170000000000000
                                >= var_98)
                            break
                    
                    sub_1426df900(arg1, &var_c8, arg2, i)
                    
                    if (_finite(_mm_cvtps_pd(var_c8).q) != 0
                            && _finite(_mm_cvtps_pd(var_c4).q) != 0)
                        _finite(_mm_cvtps_pd(var_c0).q)
                    
                    int32_t rsi_2 = 0
                    
                    if (var_b0_1 s> 0)
                        float (* rdi_2)[0x2] = var_b8
                        int64_t rbx_2 = 0
                        
                        do
                            if (_finite(_mm_cvtps_pd(*(rdi_2 + rbx_2)).q) != 0
                                    && _finite(_mm_cvtps_pd(*(rdi_2 + rbx_2 + 4)).q) != 0)
                                _finite(_mm_cvtps_pd(*(rdi_2 + rbx_2 + 8)).q)
                            
                            rdi_2 = var_b8
                            float zmm1_2 = *(rdi_2 + rbx_2 + 8) - var_c0
                            
                            if ((var_86 & 2) == 0)
                                if (*(arg1 + 0x34) == 1)
                                label_14270dade:
                                    uint32_t rcx_25 = zx.d(var_87)
                                    int16_t rax_10 = var_90:4.w
                                    float zmm0_6[0x2]
                                    
                                    if (rcx_25 == 0)
                                        zmm0_6 = var_90.d
                                        zmm0_6[0] = zmm0_6[0] + zmm1_2
                                        var_90.d = zmm0_6[0]
                                    else if (rcx_25 == 1)
                                        if (rax_10 == 0 || not(var_90.d[0] <= zmm1_2))
                                            var_90.d = zmm1_2
                                    else if (rcx_25 == 2)
                                        if (rax_10 == 0)
                                            var_90.d = zmm1_2
                                        else if (not(var_90.d[0] >= zmm1_2))
                                            var_90.d = zmm1_2
                                    else if (rcx_25 == 3)
                                        zmm0_6 = var_90.d
                                        zmm0_6[0] = zmm0_6[0] * zmm1_2
                                        var_90.d = zmm0_6[0]
                                    var_90:4.w = rax_10 + 1
                                else
                                    uint32_t rcx_23 = zx.d(*(arg1 + 0x4a))
                                    bool cond:6_1
                                    
                                    if (rcx_23 == 0)
                                        cond:6_1 = zmm1_2 >= zmm9_1
                                    label_14270dad7:
                                        int32_t rax_9
                                        rax_9.b = cond:6_1
                                        
                                        if (rax_9.b != 0)
                                            goto label_14270dade
                                    else
                                        if (rcx_23 == 1)
                                            cond:6_1 = zmm0_2.d f>= zmm1_2
                                            goto label_14270dad7
                                        
                                        if (rcx_23 == 2 && not(zmm1_2 < zmm9_1)
                                                && not(zmm1_2 f> zmm0_2.d))
                                            goto label_14270dade
                                
                                var_90:6.w += 1
                            
                            rsi_2 += 1
                            rbx_2 += 0xc
                        while (rsi_2 s< var_b0_1)
                    
                    result = sub_1426ec620(&var_a8)
                    r8_6 = var_a8
                    i = i_1
                    
                    if ((*(r8_6 + 0x13e) & 1) == 0)
                        i += 1
                        result.b = var_86 & 0xfd
                        var_90 = 0
                        result.b |= 1
                        i_1 = i
                        var_86 = result.b
                        
                        if (i s>= r8_6[1].d)
                            goto label_14270e0af_1
                        
                        do
                            result = *r8_6
                            int32_t r9_5 = *(result + (sx.q(i) << 3) + 4)
                            
                            if (not(test_bit(r9_5, 0x1e)) && r9_5 s>= 0)
                                break
                            
                            i += 1
                            i_1 = i
                        while (i s< r8_6[1].d)
                
                goto label_14270e0ab
            
            if (rcx_7 == 3)
                uint128_t var_58_1 = zmm8_1
                result = sub_1426c5aa0(&var_a8, arg1, arg2, rcx_7 - 4)
                i = i_1
                r8_6 = var_a8
                
                while (i s< r8_6[1].d)
                    if ((*(r8_6 + 0x13e) & 1) != 0)
                        break
                    
                    if (not(var_98 < 0.0))
                        result = QueryPerformanceCounter(&performanceCount)
                        i = i_1
                        
                        if (float.d(performanceCount) f* data_143d796f8 f+ 0x4170000000000000
                                >= var_98)
                            r8_6 = var_a8
                            break
                    
                    sub_1426df900(arg1, &var_c8, arg2, i)
                    
                    if (_finite(_mm_cvtps_pd(var_c8).q) != 0
                            && _finite(_mm_cvtps_pd(var_c4).q) != 0)
                        _finite(_mm_cvtps_pd(var_c0).q)
                    
                    int32_t rsi_1 = 0
                    
                    if (var_b0_1 s> 0)
                        float (* rdi_1)[0x2] = var_b8
                        int64_t rbx_1 = 0
                        
                        do
                            if (_finite(_mm_cvtps_pd(*(rdi_1 + rbx_1)).q) != 0
                                    && _finite(_mm_cvtps_pd(*(rdi_1 + rbx_1 + 4)).q) != 0)
                                _finite(_mm_cvtps_pd(*(rdi_1 + rbx_1 + 8)).q)
                            
                            rdi_1 = var_b8
                            uint32_t zmm1_1[0x4] = *(rdi_1 + rbx_1 + 8)
                            zmm1_1[0] = zmm1_1[0] f- var_c0
                            zmm1_1 = _mm_and_ps(zmm1_1, 0x7fffffff)
                            
                            if ((var_86 & 2) == 0)
                                if (*(arg1 + 0x34) == 1)
                                label_14270d881:
                                    uint32_t rcx_15 = zx.d(var_87)
                                    int16_t rax_6 = var_90:4.w
                                    float zmm0_4[0x2]
                                    
                                    if (rcx_15 == 0)
                                        zmm0_4 = var_90.d
                                        zmm0_4[0] = zmm0_4[0] f+ zmm1_1[0]
                                        var_90.d = zmm0_4[0]
                                    else if (rcx_15 == 1)
                                        if (rax_6 == 0 || not(var_90.d[0] f<= zmm1_1[0]))
                                            var_90.d = zmm1_1[0]
                                    else if (rcx_15 == 2)
                                        if (rax_6 == 0)
                                            var_90.d = zmm1_1[0]
                                        else if (not(var_90.d[0] f>= zmm1_1[0]))
                                            var_90.d = zmm1_1[0]
                                    else if (rcx_15 == 3)
                                        zmm0_4 = var_90.d
                                        zmm0_4[0] = zmm0_4[0] f* zmm1_1[0]
                                        var_90.d = zmm0_4[0]
                                    var_90:4.w = rax_6 + 1
                                else
                                    uint32_t rcx_13 = zx.d(*(arg1 + 0x4a))
                                    bool cond:7_1
                                    
                                    if (rcx_13 == 0)
                                        cond:7_1 = zmm1_1[0] f>= zmm9_1
                                    label_14270d87a:
                                        int32_t rax_5
                                        rax_5.b = cond:7_1
                                        
                                        if (rax_5.b != 0)
                                            goto label_14270d881
                                    else
                                        if (rcx_13 == 1)
                                            cond:7_1 = zmm0_2.d f>= zmm1_1[0]
                                            goto label_14270d87a
                                        
                                        if (rcx_13 == 2 && not(zmm1_1[0] f< zmm9_1)
                                                && not(zmm1_1[0] f> zmm0_2.d))
                                            goto label_14270d881
                                
                                var_90:6.w += 1
                            
                            rsi_1 += 1
                            rbx_1 += 0xc
                        while (rsi_1 s< var_b0_1)
                    
                    result = sub_1426ec620(&var_a8)
                    r8_6 = var_a8
                    i = i_1
                    
                    if ((*(r8_6 + 0x13e) & 1) == 0)
                        i += 1
                        result.b = var_86 & 0xfd
                        var_90 = 0
                        result.b |= 1
                        i_1 = i
                        var_86 = result.b
                        
                        if (i s>= r8_6[1].d)
                            break
                        
                        do
                            result = *r8_6
                            int32_t r9_3 = *(result + (sx.q(i) << 3) + 4)
                            
                            if (not(test_bit(r9_3, 0x1e)) && r9_3 s>= 0)
                                break
                            
                            i += 1
                            i_1 = i
                        while (i s< r8_6[1].d)
                
            label_14270e0af_1:
                *(r8_6 + 0x124) = i
    
    float (* rcx_50)[0x2] = var_b8
    
    if (rcx_50 != 0)
        return sub_140a74f90(rcx_50)

return result
