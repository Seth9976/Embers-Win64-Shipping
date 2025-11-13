// 函数: sub_14270e110
// 地址: 0x14270e110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
int64_t* result = sub_140d3c6e0(arg2 + 0x34)

if (result != 0)
    r14[6].d
    sub_1426cce30(arg1 + 0x88, result)
    int128_t zmm0_1 = sub_1426e2610(arg1 + 0x88)
    r14[6].d
    int128_t zmm10 = zmm0_1
    sub_1426cce30(arg1 + 0xc0, result)
    int128_t zmm0_2 = sub_1426e2610(arg1 + 0xc0)
    void* rbx_1 = *(arg1 + 0x200)
    void* r13_1 = nullptr
    bool cond:0_1 = *(arg1 + 0x210) != 1
    int128_t zmm11 = zmm0_2
    uint64_t j_1 = 0
    int32_t j_2 = 0
    int64_t* result_1 = nullptr
    int32_t var_18c_1 = 0
    bool arg_18
    bool rax
    
    if (not(cond:0_1))
        rax = sub_1426e2f00(arg1, *(arg1 + 0x208))
        arg_18 = rax
        
        if (rax != 0)
            goto label_14270e291
        
        goto label_14270e276
    
    char rax_1 = sub_1426e2f00(arg1, *(arg1 + 0x1f8))
    
    if (rax_1 == 0)
        rax = sub_1426e2f00(arg1, rbx_1)
    
    uint128_t zmm6
    uint128_t zmm7
    uint128_t zmm8
    uint128_t zmm9
    uint128_t zmm14
    
    if (rax_1 != 0 || rax != 0)
        arg_18 = true
    label_14270e291:
        uint64_t rbx_2 = *(arg1 + 0x220)
        int32_t k_2 = 0
        int32_t rsi_1 = 0
        void* var_1a8 = nullptr
        int64_t var_1a0_1 = 0
        bool arg_20
        bool rax_4
        
        if (*(arg1 + 0x230) == 1)
            rax_4 = sub_1426e2f00(arg1, *(arg1 + 0x228))
            arg_20 = rax_4
            rbx_2 = zx.q(rax_4)
            
            if (rax_4 != 0)
                goto label_14270e373
            
            goto label_14270e34d
        
        char rax_5 = sub_1426e2f00(arg1, *(arg1 + 0x218))
        
        if (rax_5 == 0)
            rax_4 = sub_1426e2f00(arg1, rbx_2)
        
        if (rax_5 != 0 || rax_4 != 0)
            rbx_2.b = 1
            arg_20 = true
        label_14270e373:
            uint128_t var_48_1 = zmm6
            uint128_t var_58_1 = zmm7
            uint128_t var_68_1 = zmm8
            uint128_t var_78_1 = zmm9
            uint128_t var_c8_1 = zmm14
            int64_t* var_188
            sub_1426c5aa0(&var_188, arg1, r14, 0xffffffff)
            int32_t i_1
            int32_t i = i_1
            int64_t* r8_6 = var_188
            zmm14 = 0x3f000000
            
            while (i s< r8_6[1].d)
                if ((*(r8_6 + 0x13e) & 1) != 0)
                    break
                
                int64_t var_178
                uint128_t zmm0_3
                
                if (not(var_178 f< 0.0))
                    int64_t performanceCount
                    QueryPerformanceCounter(&performanceCount)
                    i = i_1
                    zmm0_3.q = float.d(performanceCount)
                    zmm0_3.q = zmm0_3.q f* data_143d796f8
                    zmm0_3.q = zmm0_3.q f+ 16777216.0
                    
                    if (zmm0_3.q f>= var_178)
                        r8_6 = var_188
                        break
                
                if (arg_18 != 0 || rbx_2.b != 0)
                    uint64_t var_158
                    int64_t* rax_13
                    void var_ec
                    
                    if (*(arg1 + 0x210) != 1 || *(arg1 + 0x230) != 1)
                        void var_f8
                        int64_t* rax_10 = sub_1426df900(arg1, &var_f8, r14, i)
                        bool cond:4_1 = *(arg1 + 0x210) == 1
                        int32_t rax_11 = rax_10[1].d
                        var_158 = *rax_10
                        int32_t var_150_2 = rax_11
                        
                        if (cond:4_1 || *(arg1 + 0x230) == 1)
                            rax_13 = sub_1426df980(arg1, &var_ec, r14, i_1)
                        else
                            int32_t var_10c_1 = data_143dbb210
                            uint64_t var_114
                            rax_13 = &var_114
                            var_114 = data_143dbb208
                    else
                        int32_t rax_8 = data_143dbb200
                        var_158 = data_143dbb1f8.q
                        int32_t var_150_1 = rax_8
                        rax_13 = sub_1426df980(arg1, &var_ec, r14, i)
                    int32_t rax_14 = rax_13[1].d
                    uint64_t var_148 = *rax_13
                    int32_t var_140_1 = rax_14
                    
                    if (arg_18 != 0)
                        j_2 = 0
                        
                        if (var_18c_1 s< 0 && var_18c_1 != 0)
                            sub_140638cc0(&result_1, 0)
                        
                        int32_t rax_15
                        rax_15.b = *(arg1 + 0x210) == 1
                        rax_14, zmm10, zmm11, zmm14 = sub_1426fae20(arg1, &result_1, r14, 
                            *(arg1 + 0x1f8), *(arg1 + 0x200), *(arg1 + 0x208), rax_15.b, &var_158, 
                            &var_148)
                    
                    if (rbx_2.b != 0)
                        var_1a0_1.d = 0
                        
                        if (rsi_1 s< 0 && rsi_1 != 0)
                            sub_140638cc0(&var_1a8, 0)
                        
                        rax_14.b = *(arg1 + 0x230) == 1
                        zmm10, zmm11, zmm14 = sub_1426fae20(arg1, &var_1a8, r14, *(arg1 + 0x218), 
                            *(arg1 + 0x220), *(arg1 + 0x228), rax_14.b, &var_158, &var_148)
                        k_2 = var_1a0_1.d
                        r13_1 = var_1a8
                    
                    j_1 = zx.q(j_2)
                
                int64_t var_170
                char var_166
                
                if (j_1.d s> 0)
                    int64_t* result_2 = result_1
                    uint64_t j
                    
                    do
                        if (k_2 s> 0)
                            void* rbx_3 = r13_1
                            uint64_t k_1 = zx.q(k_2)
                            uint64_t k
                            
                            do
                                uint32_t rcx_19 = zx.d(*(arg1 + 0x238))
                                zmm6 = zx.o(0)
                                uint128_t zmm1_1
                                
                                if (rcx_19 == 0)
                                    zmm6.d = (*(result_2 + 4)).d f* *(rbx_3 + 4)
                                    zmm0_3.d = (*rbx_3).d f* *result_2
                                    zmm1_1.d = result_2[1].d.d f* *(rbx_3 + 8)
                                    zmm6.d = zmm6.d f+ zmm0_3.d
                                    zmm6.d = zmm6.d f+ zmm1_1.d
                                else if (rcx_19 == 1)
                                    uint64_t var_138_1 = *rbx_3
                                    zmm0_3 = zx.o(*result_2)
                                    zmm9 = zmm0_3.d
                                    zmm8 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0x55)
                                    zmm0_3.d = zmm9.d f* zmm9.d
                                    zmm1_1.d = zmm8.d f* zmm8.d
                                    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
                                    uint128_t zmm3
                                    uint128_t zmm4_1
                                    float zmm5_1
                                    
                                    if (not(zmm1_1.d f<= 9.99999994e-09f))
                                        zmm5_1 = zmm14.d
                                        zmm3.d = zmm1_1.d
                                        zmm4_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                                        zmm3.d = zmm3.d f* zmm5_1
                                        zmm0_3.d = zmm4_1.d f* zmm4_1.d
                                        zmm1_1.d = zmm3.d f* zmm0_3.d
                                        zmm0_3.d = zmm4_1.d f* (zmm5_1 f- zmm1_1.d)
                                        zmm4_1.d = zmm4_1.d f+ zmm0_3.d
                                        zmm1_1.d = zmm4_1.d f* zmm4_1.d
                                        zmm3.d = zmm3.d f* zmm1_1.d
                                        zmm0_3.d = zmm4_1.d f* (zmm5_1 f- zmm3.d)
                                        zmm4_1.d = zmm4_1.d f+ zmm0_3.d
                                        zmm9.d = zmm9.d f* zmm4_1.d
                                        zmm8.d = zmm8.d f* zmm4_1.d
                                    
                                    zmm6 = var_138_1:4.d
                                    zmm7 = var_138_1.d
                                    zmm1_1.d = zmm6.d f* zmm6.d
                                    zmm0_3.d = zmm7.d f* zmm7.d
                                    zmm1_1.d = zmm1_1.d f+ zmm0_3.d
                                    
                                    if (not(zmm1_1.d f<= 9.99999994e-09f))
                                        zmm5_1 = zmm14.d
                                        zmm4_1 = _mm_rsqrt_ss(zmm1_1.d, zmm1_1.d)
                                        zmm3.d = zmm1_1.d f* zmm5_1
                                        zmm0_3.d = zmm4_1.d f* zmm4_1.d
                                        zmm1_1.d = zmm3.d f* zmm0_3.d
                                        zmm0_3.d = zmm4_1.d f* (zmm5_1 f- zmm1_1.d)
                                        zmm4_1.d = zmm4_1.d f+ zmm0_3.d
                                        zmm1_1.d = zmm4_1.d f* zmm4_1.d
                                        zmm3.d = zmm3.d f* zmm1_1.d
                                        zmm0_3.d = zmm4_1.d f* (zmm5_1 f- zmm3.d)
                                        zmm4_1.d = zmm4_1.d f+ zmm0_3.d
                                        zmm7.d = zmm7.d f* zmm4_1.d
                                        zmm6.d = zmm6.d f* zmm4_1.d
                                    
                                    zmm6.d = zmm6.d f* zmm8.d
                                    zmm7.d = zmm7.d f* zmm9.d
                                    zmm6.d = zmm6.d f+ zmm7.d
                                
                                if (_isnan(_mm_cvtps_pd(zmm6.q).q) != 0)
                                    zmm6 = zx.o(0)
                                else if (*(arg1 + 0x239) != 0)
                                    zmm6 = _mm_and_ps(zmm6, 0x7fffffff)
                                
                                if ((var_166 & 2) == 0)
                                    if (*(arg1 + 0x34) == 1)
                                    label_14270e808:
                                        char var_167
                                        uint32_t rcx_22 = zx.d(var_167)
                                        int16_t rax_21 = var_170:4.w
                                        
                                        if (rcx_22 == 0)
                                            zmm0_3.d = var_170.d.d f+ zmm6.d
                                            var_170.d = zmm0_3.d
                                        else if (rcx_22 == 1)
                                            if (rax_21 == 0 || not(var_170.d.d f<= zmm6.d))
                                                var_170.d = zmm6.d
                                        else if (rcx_22 == 2)
                                            if (rax_21 == 0)
                                                var_170.d = zmm6.d
                                            else if (not(var_170.d.d f>= zmm6.d))
                                                var_170.d = zmm6.d
                                        else if (rcx_22 == 3)
                                            zmm0_3.d = var_170.d.d f* zmm6.d
                                            var_170.d = zmm0_3.d
                                        
                                        var_170:4.w = rax_21 + 1
                                    else
                                        uint32_t rcx_20 = zx.d(*(arg1 + 0x4a))
                                        bool cond:10_1
                                        
                                        if (rcx_20 == 0)
                                            cond:10_1 = zmm6.d f>= zmm10.d
                                        label_14270e801:
                                            int32_t rax_20
                                            rax_20.b = cond:10_1
                                            
                                            if (rax_20.b != 0)
                                                goto label_14270e808
                                        else
                                            if (rcx_20 == 1)
                                                cond:10_1 = zmm11.d f>= zmm6.d
                                                goto label_14270e801
                                            
                                            if (rcx_20 == 2 && not(zmm6.d f< zmm10.d)
                                                    && not(zmm6.d f> zmm11.d))
                                                goto label_14270e808
                                    
                                    var_170:6.w += 1
                                
                                rbx_3 += 0xc
                                k = k_1
                                k_1 -= 1
                            while (k != 1)
                        
                        result_2 += 0xc
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    r14 = arg2
                    j_1 = zx.q(j_2)
                    rbx_2 = zx.q(arg_20)
                
                sub_1426ec620(&var_188)
                r8_6 = var_188
                i = i_1
                rsi_1 = var_1a0_1:4.d
                
                if ((*(r8_6 + 0x13e) & 1) == 0)
                    i += 1
                    var_170 = 0
                    i_1 = i
                    var_166 = (var_166 & 0xfd) | 1
                    
                    if (i s>= r8_6[1].d)
                        break
                    
                    while (true)
                        int32_t r9_7 = *(*r8_6 + (sx.q(i) << 3) + 4)
                        
                        if (not(test_bit(r9_7, 0x1e)))
                            rsi_1 = var_1a0_1:4.d
                            
                            if (r9_7 s>= 0)
                                break
                        
                        i += 1
                        i_1 = i
                        
                        if (i s>= r8_6[1].d)
                            rsi_1 = var_1a0_1:4.d
                            break
            
            *(r8_6 + 0x124) = i
        else
            rbx_2.b = 0
            arg_20 = false
        label_14270e34d:
            zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm14 = sub_1426fae20(arg1, &var_1a8, r14, 
                *(arg1 + 0x218), *(arg1 + 0x220), *(arg1 + 0x228), *(arg1 + 0x230) == 1, 
                &data_143dbb1f8, &data_143dbb208)
            k_2 = var_1a0_1.d
            r13_1 = var_1a8
            
            if (k_2 != 0)
                rsi_1 = var_1a0_1:4.d
                goto label_14270e373
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
    else
        arg_18 = false
    label_14270e276:
        zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm14 = sub_1426fae20(arg1, &result_1, r14, 
            *(arg1 + 0x1f8), *(arg1 + 0x200), *(arg1 + 0x208), *(arg1 + 0x210) == 1, 
            &data_143dbb1f8, &data_143dbb208)
        j_1 = zx.q(j_2)
        
        if (j_1.d != 0)
            goto label_14270e291
    result = result_1
    
    if (result != 0)
        return sub_140a74f90(result)

return result
