// 函数: sub_14260d860
// 地址: 0x14260d860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
int64_t rdx = *arg4
uint128_t zmm8
uint128_t var_68 = zmm8
int64_t* rsi = arg1
uint128_t zmm9
uint128_t var_78 = zmm9
uint128_t zmm10
uint128_t var_88 = zmm10
uint128_t zmm11
uint128_t var_98 = zmm11
uint128_t zmm12
uint128_t var_a8 = zmm12
uint128_t zmm13
uint128_t var_b8 = zmm13
uint128_t zmm14
uint128_t var_c8 = zmm14
uint128_t zmm15
uint128_t var_d8 = zmm15
int32_t var_198

if (rdx != 0 && (sub_142604ad0(arg1, rdx, arg2, &var_198) u>> 0x1f).b == 0)
    int64_t rax_3 = sx.q(arg5)
    float var_140
    
    if ((sub_142604ad0(rsi, arg4[rax_3 - 1], arg3, &var_140) u>> 0x1f).b == 0)
        int64_t rdi_1 = *arg4
        zmm10 = zx.o(0)
        int32_t rax_6 = arg6[1].d
        char rax_10
        
        if (rax_6 s> 0)
            rax_10 = sub_142609980((sx.q(rax_6 - 1) << 5) + *arg6 + 0xc, &var_198)
        
        int32_t var_190
        uint128_t var_118
        uint128_t zmm0_1
        uint128_t zmm1_1
        
        if (rax_6 s<= 0 || rax_10 == 0)
            zmm6 = var_198
            int32_t var_120_1 = 0
            int32_t var_110_1 = 1
            sub_142616200(arg6, arg6[1].d + 1)
            int64_t rax_13 = *arg6
            zmm0_1 = rdi_1.o
            int64_t rcx_11 = sx.q(arg6[1].d) << 5
            int32_t var_194
            zmm1_1.d = var_194.d
            _mm_shuffle_ps(zmm0_1, zmm0_1, 0x93)
            _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
            zmm0_1.d = zmm6.d
            zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x39)
            zmm1_1.d = var_190.d
            zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
            *(rcx_11 + rax_13 - 0x20) = zmm0_1
            var_118 = zmm1_1
            *(rcx_11 + rax_13 - 0x10) = zmm1_1
            int64_t var_128_1
            var_128_1.o = zmm0_1
        else
            *((sx.q(arg6[1].d) << 5) + *arg6 - 8) = 1
            *((sx.q(arg6[1].d) << 5) + *arg6 - 0x20) = rdi_1
        
        int32_t r8_2 = arg5
        int32_t var_13c
        int32_t var_138
        
        if (r8_2 s<= 1)
        label_14260e488:
            int32_t rax_38 = arg6[1].d
            
            if (rax_38 s> 0 && sub_142609980((sx.q(rax_38 - 1) << 5) + *arg6 + 0xc, &var_140) != 0)
                *((sx.q(arg6[1].d) << 5) + *arg6 - 8) = 2
                *((sx.q(arg6[1].d) << 5) + *arg6 - 0x20) = 0
                return 0x40000000
            
            zmm6 = var_140
            int64_t var_128_4 = 0
            int32_t var_120_4 = 0
            int32_t var_110_4 = 2
            sub_142616200(arg6, arg6[1].d + 1)
            int64_t rax_57 = *arg6
            int64_t rcx_60 = sx.q(arg6[1].d) << 5
            float zmm0_3[0x4] = var_128_4.o
            zmm1_1.d = var_13c.d
            float temp0_19[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 0x93)
            _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
            temp0_19[0] = zmm6.d
            zmm1_1.d = var_138.d
            *(rcx_60 + rax_57 - 0x20) = _mm_shuffle_ps(temp0_19, temp0_19, 0x39)
            *(rcx_60 + rax_57 - 0x10) = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
            return 0x40000000
        
        zmm1_1 = zx.o(var_198.q)
        int32_t rdx_5 = 0
        int32_t r15_1 = var_190
        int32_t r14_1 = 0
        int64_t* rax_14 = arg4
        int32_t r13_1 = 0
        int32_t rdi_2 = 0
        uint64_t var_188 = zmm1_1.q
        int32_t r12_1 = r15_1
        uint64_t var_108_1 = zmm1_1.q
        zmm6 = zx.o(0)
        int64_t rcx_12 = *rax_14
        int64_t var_e8_1 = rcx_12
        int64_t var_f0_1 = rcx_12
        uint64_t var_150 = zmm1_1.q
        int32_t var_148_1 = r15_1
        uint64_t var_100_1 = zmm1_1.q
        var_198.q = zmm1_1.q
        int32_t var_190_1 = r15_1
        int32_t var_19c_1 = 0
        int32_t var_178_1 = 0
        char var_19d_1 = 0
        char var_19e_1 = 0
        char var_1a8_1 = 0
        int32_t result
        
        if (r8_2 s<= 0)
        label_14260e454:
            char rcx_36 = arg7.b
            
            if ((rcx_36 & 3) == 0)
                goto label_14260e488
            
            result = sub_1426037f0(rsi, rdx_5, (rax_3 - 1).d, &var_140, rax_14, arg6, rcx_36)
            
            if (result != 0x20000000)
                return result
            
            goto label_14260e488
        
        uint128_t zmm2_1 = var_150.d
        zmm15 = var_198
        zmm14 = 0x3f800000
        zmm11 = r15_1
        zmm9 = var_188.d
        int32_t var_1a4_1 = zmm2_1.d
        int32_t var_174_1 = zmm15.d
        
        while (true)
            uint128_t zmm4_1 = 0x3f000000
            zmm0_1 = zx.o(var_140.q)
            char var_1a0
            uint8_t var_19f
            uint64_t var_170
            int32_t var_168
            uint64_t var_160
            int32_t var_158
            uint128_t zmm3_1
            
            if (rdi_2 + 1 s>= r8_2)
                zmm7 = zmm0_1
                rsi.b = 0
                var_160 = zmm0_1.q
                var_170 = zmm7.q
                zmm13 = var_170.d
                var_168 = var_138
                zmm14 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                zmm12 = var_168
                var_158 = var_138
                zmm8 = var_158
                var_1a0 = 0
                var_19f = 0
            label_14260dcd3:
                var_1a8_1 = 0
                
                if (rsi.b == 2 && rdi_2 != rdx_5)
                    zmm3_1.d = var_190_1.d f+ var_148_1
                    zmm0_1.d = zmm15.d f+ zmm2_1.d
                    uint128_t zmm5_1
                    zmm5_1.d = zmm13.d f+ zmm7.d
                    zmm3_1.d = zmm3_1.d f* zmm4_1.d
                    zmm0_1.d = zmm0_1.d f* zmm4_1.d
                    zmm5_1.d = zmm5_1.d f* zmm4_1.d
                    zmm15.d = var_1a4_1.d f- zmm0_1.d
                    zmm4_1.d = zmm12.d f+ zmm8.d
                    zmm2_1.d = zmm5_1.d f- zmm0_1.d
                    zmm0_1.d = var_148_1.d f- zmm3_1.d
                    zmm4_1.d = zmm4_1.d f* 0.5f
                    zmm0_1.d = zmm0_1.d f* zmm2_1.d
                    zmm1_1.d = zmm4_1.d f- zmm3_1.d
                    zmm3_1.d = zmm13.d f- zmm5_1.d
                    zmm15.d = zmm15.d f* zmm1_1.d
                    zmm3_1.d = zmm3_1.d f* zmm1_1.d
                    zmm15.d = zmm15.d f- zmm0_1.d
                    zmm0_1.d = zmm12.d f- zmm4_1.d
                    zmm15.d f- zmm10.d
                    bool cond:1_1 = zmm15.d f>= zmm10.d
                    zmm0_1.d = zmm0_1.d f* zmm2_1.d
                    zmm3_1.d = zmm3_1.d f- zmm0_1.d
                    
                    if (zmm15.d f<= zmm10.d)
                        goto label_14260dd7f
                    
                    if (zmm3_1.d f< zmm10.d)
                    label_14260dd87:
                        zmm1_1 = zx.o(var_160)
                        zmm7 = zmm13
                        int32_t rax_18 = var_158
                        zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                        zmm8 = zmm12
                        var_160:4.d = zmm14.d
                        zmm14 = zmm0_1
                        var_158 = zmm12.d
                        var_168 = rax_18
                        zmm12 = var_168
                        var_170 = zmm1_1.q
                        zmm13 = var_170.d
                        var_160.d = zmm7.d
                        var_1a8_1 = 1
                    else
                        cond:1_1 = zmm15.d f>= zmm10.d
                    label_14260dd7f:
                        
                        if (not(cond:1_1) && not(zmm3_1.d f<= zmm10.d))
                            goto label_14260dd87
                        
                        var_1a8_1 = 0
                
                zmm1_1.d = var_190_1.d f- zmm11.d
                zmm15.d = zmm7.d f- zmm9.d
                zmm2_1.d = zmm8.d f- zmm11.d
                zmm0_1.d = var_174_1.d f- zmm9.d
                zmm1_1.d = zmm1_1.d f* zmm15.d
                zmm0_1.d = zmm0_1.d f* zmm2_1.d
                int32_t var_130_1 = zmm2_1.d
                zmm1_1.d = zmm1_1.d f- zmm0_1.d
                
                if (zmm1_1.d f> zmm10.d)
                label_14260e02c:
                    zmm1_1.d = var_148_1.d f- zmm11.d
                    zmm15.d = zmm13.d f- zmm9.d
                    zmm2_1.d = zmm12.d f- zmm11.d
                    zmm0_1.d = var_1a4_1.d f- zmm9.d
                    zmm1_1.d = zmm1_1.d f* zmm15.d
                    zmm0_1.d = zmm0_1.d f* zmm2_1.d
                    int32_t var_130_2 = zmm2_1.d
                    zmm1_1.d = zmm1_1.d f- zmm0_1.d
                    
                    if (zmm1_1.d f< zmm10.d)
                        zmm2_1 = var_1a4_1
                    label_14260e25f:
                        
                        if (rsi.b != 2)
                            zmm15 = var_174_1
                        else
                            zmm7.d = zmm7.d f- zmm13.d
                            zmm8.d = zmm8.d f- zmm12.d
                            zmm6.d = zmm11.d f- zmm12.d
                            zmm9.d = zmm9.d f- zmm13.d
                            zmm0_1.d = zmm7.d f* zmm7.d
                            zmm1_1.d = zmm8.d f* zmm8.d
                            zmm6.d = zmm6.d f* zmm8.d
                            zmm1_1.d = zmm1_1.d f+ zmm0_1.d
                            zmm9.d = zmm9.d f* zmm7.d
                            zmm6.d = zmm6.d f+ zmm9.d
                            
                            if (not(zmm1_1.d f<= zmm10.d))
                                zmm6.d = zmm6.d f/ zmm1_1.d
                            
                            if (zmm6.d f>= zmm10.d)
                                zmm6 = __minss_xmmss_memss(zmm6.d, 0x3f800000)
                            else
                                zmm6 = zmm10
                            
                            zmm9 = zmm7
                            zmm7.d = var_160:4.d.d f- zmm14.d
                            zmm9.d = zmm9.d f* zmm6.d
                            zmm11.d = zmm8.d f* zmm6.d
                            rsi = arg4[sx.q(rdi_2) + 1]
                            int32_t rax_30 = arg6[1].d
                            zmm9.d = zmm9.d f+ zmm13.d
                            zmm7.d = zmm7.d f* zmm6.d
                            zmm11.d = zmm11.d f+ zmm12.d
                            var_188.d = zmm9.d
                            zmm7.d = zmm7.d f+ zmm14.d
                            int32_t var_180_4 = zmm11.d
                            var_188:4.d = zmm7.d
                            char rax_34
                            
                            if (rax_30 s> 0)
                                rax_34 =
                                    sub_142609980((sx.q(rax_30 - 1) << 5) + *arg6 + 0xc, &var_188)
                            
                            if (rax_30 s<= 0 || rax_34 == 0)
                                int32_t var_120_2 = 0
                                int32_t var_110_2 = 4
                                sub_142616200(arg6, arg6[1].d + 1)
                                int64_t rax_37 = *arg6
                                zmm0_1 = rsi.o
                                int64_t rcx_35 = sx.q(arg6[1].d) << 5
                                zmm1_1.d = zmm7.d
                                _mm_shuffle_ps(zmm0_1, zmm0_1, 0x93)
                                _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
                                zmm0_1.d = zmm9.d
                                zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x39)
                                zmm1_1.d = zmm11.d
                                zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
                                *(rcx_35 + rax_37 - 0x20) = zmm0_1
                                var_118 = zmm1_1
                                *(rcx_35 + rax_37 - 0x10) = zmm1_1
                                int64_t* var_128_2
                                var_128_2.o = zmm0_1
                            else
                                *((sx.q(arg6[1].d) << 5) + *arg6 - 8) = 4
                                *((sx.q(arg6[1].d) << 5) + *arg6 - 0x20) = rsi
                            
                            zmm1_1 = zx.o(var_188)
                            r13_1 = rdi_2
                            r15_1 = var_180_4
                            zmm2_1 = zmm1_1
                            r8_2 = arg5
                            zmm15 = zmm1_1
                            var_1a4_1 = zmm1_1.d
                            r12_1 = r15_1
                            var_174_1 = zmm1_1.d
                            r14_1 = rdi_2
                            var_108_1 = zmm1_1.q
                            var_100_1 = zmm1_1.q
                            var_150 = zmm1_1.q
                            var_198.q = zmm1_1.q
                            var_148_1 = r15_1
                            var_190_1 = r15_1
                            var_178_1 = rdi_2
                        
                        zmm14 = 0x3f800000
                    else
                        char rax_24 = sub_142609980(&var_188, &var_150)
                        
                        if (rax_24 == 0)
                            zmm1_1.d = var_190_1.d f- zmm11.d
                            zmm1_1.d = zmm1_1.d f* zmm15.d
                            zmm15 = var_174_1
                            zmm0_1.d = zmm15.d f- zmm9.d
                            zmm0_1.d = zmm0_1.d f* var_130_2
                            zmm1_1.d = zmm1_1.d f- zmm0_1.d
                        
                        if (rax_24 != 0 || zmm1_1.d f< zmm10.d)
                            zmm2_1 = zx.o(var_170)
                            r8_2 = arg5
                            r15_1 = var_168
                            var_108_1 = zmm2_1.q
                            var_150 = zmm2_1.q
                            var_148_1 = r15_1
                            
                            if (rdi_2 + 1 s>= r8_2)
                                var_e8_1 = 0
                            else
                                var_e8_1 = arg4[sx.q(rdi_2) + 1]
                            
                            zmm2_1 = var_150.d
                            r13_1 = rdi_2
                            var_1a4_1 = zmm2_1.d
                            var_19d_1 = rsi.b
                            goto label_14260e25f
                        
                        if ((arg7.b & 3) != 0)
                            result, zmm6, zmm7, zmm8, zmm10, zmm12, zmm13, zmm15 =
                                sub_1426037f0(arg1, var_19c_1, r14_1, &var_198, arg4, arg6, arg7.b)
                            
                            if (result != 0x20000000)
                                return result
                        
                        result.b = 0
                        zmm14 = zx.o(var_100_1)
                        var_188 = zmm14.q
                        var_19c_1 = r14_1
                        
                        if (var_f0_1 != 0)
                            result = 0
                            
                            if (var_19e_1 != 0)
                                result = 4
                        else
                            result.b = 2
                        
                        result = sub_142603df0(arg1, &var_188, zx.q(result.b), var_f0_1, arg6)
                        
                        if (result != 0x20000000)
                            return result
                        
                        var_148_1 = r12_1
                        var_108_1 = zmm14.q
                        r15_1 = r12_1
                        var_150 = zmm14.q
                        r13_1 = r14_1
                        
                        if (rsi.b != 2)
                            zmm14 = 0x3f800000
                        else
                            zmm7.d = zmm7.d f- zmm13.d
                            zmm8.d = zmm8.d f- zmm12.d
                            zmm6.d = var_190_1.d f- zmm12.d
                            zmm0_1.d = zmm7.d f* zmm7.d
                            zmm1_1.d = zmm8.d f* zmm8.d
                            zmm6.d = zmm6.d f* zmm8.d
                            zmm1_1.d = zmm1_1.d f+ zmm0_1.d
                            zmm0_1.d = zmm15.d f- zmm13.d
                            zmm0_1.d = zmm0_1.d f* zmm7.d
                            zmm6.d = zmm6.d f+ zmm0_1.d
                            
                            if (not(zmm1_1.d f<= zmm10.d))
                                zmm6.d = zmm6.d f/ zmm1_1.d
                            
                            zmm14 = 0x3f800000
                            
                            if (zmm6.d f>= zmm10.d)
                                zmm6 = _mm_min_ss(zmm6.d, 0x3f800000)
                            else
                                zmm6 = zmm10
                        
                        zmm2_1 = var_150.d
                        rdi_2 = r14_1
                        zmm11 = r12_1
                        zmm9 = var_188.d
                        r8_2 = arg5
                        var_1a4_1 = zmm2_1.d
                else
                    char rax_19 = sub_142609980(&var_188, &var_198)
                    
                    if (rax_19 == 0)
                        zmm1_1.d = var_148_1.d f- zmm11.d
                        zmm0_1.d = var_1a4_1.d f- zmm9.d
                        zmm1_1.d = zmm1_1.d f* zmm15.d
                        zmm0_1.d = zmm0_1.d f* var_130_1
                        zmm1_1.d = zmm1_1.d f- zmm0_1.d
                    
                    if (rax_19 != 0 || zmm1_1.d f> zmm10.d)
                        zmm2_1 = zx.o(var_160)
                        r8_2 = arg5
                        r12_1 = var_158
                        var_100_1 = zmm2_1.q
                        var_198.q = zmm2_1.q
                        var_190_1 = r12_1
                        
                        if (rdi_2 + 1 s>= r8_2)
                            var_f0_1 = 0
                        else
                            var_f0_1 = arg4[sx.q(rdi_2) + 1]
                        
                        r14_1 = rdi_2
                        var_174_1 = var_198.d
                        var_19e_1 = rsi.b
                        var_178_1 = rdi_2
                        goto label_14260e02c
                    
                    if ((arg7.b & 3) != 0)
                        result, zmm6, zmm7, zmm8, zmm10, zmm12, zmm13 =
                            sub_1426037f0(arg1, var_19c_1, r13_1, &var_150, arg4, arg6, arg7.b)
                        
                        if (result != 0x20000000)
                            return result
                    
                    result.b = 0
                    zmm15 = zx.o(var_108_1)
                    var_188 = zmm15.q
                    var_19c_1 = r13_1
                    
                    if (var_e8_1 != 0)
                        result = 0
                        
                        if (var_19d_1 != 0)
                            result = 4
                    else
                        result.b = 2
                    
                    result = sub_142603df0(arg1, &var_188, zx.q(result.b), var_e8_1, arg6)
                    
                    if (result != 0x20000000)
                        return result
                    
                    var_190_1 = r15_1
                    var_100_1 = zmm15.q
                    r12_1 = r15_1
                    var_198.q = zmm15.q
                    r14_1 = r13_1
                    var_178_1 = r13_1
                    
                    if (rsi.b != 2)
                        zmm14 = 0x3f800000
                    else
                        zmm7.d = zmm7.d f- zmm13.d
                        zmm8.d = zmm8.d f- zmm12.d
                        zmm6.d = var_148_1.d f- zmm12.d
                        zmm0_1.d = zmm7.d f* zmm7.d
                        zmm1_1.d = zmm8.d f* zmm8.d
                        zmm6.d = zmm6.d f* zmm8.d
                        zmm1_1.d = zmm1_1.d f+ zmm0_1.d
                        zmm0_1.d = var_1a4_1.d f- zmm13.d
                        zmm0_1.d = zmm0_1.d f* zmm7.d
                        zmm6.d = zmm6.d f+ zmm0_1.d
                        
                        if (not(zmm1_1.d f<= zmm10.d))
                            zmm6.d = zmm6.d f/ zmm1_1.d
                        
                        zmm14 = 0x3f800000
                        
                        if (zmm6.d f>= zmm10.d)
                            zmm6 = _mm_min_ss(zmm6.d, 0x3f800000)
                        else
                            zmm6 = zmm10
                    
                    zmm15 = var_198
                    rdi_2 = r13_1
                    zmm11 = r15_1
                    zmm9 = var_188.d
                    zmm2_1 = var_1a4_1
                    r8_2 = arg5
                    var_174_1 = zmm15.d
            else
                int64_t rsi_1 = sx.q(rdi_2)
                int32_t var_1b8
                var_1b8.q = &var_1a0
                int64_t r14_2 = rax_14[rsi_1]
                
                if ((sub_142610700(arg1, r14_2, rax_14[rsi_1 + 1], &var_170, &var_160, &var_19f, 
                        var_1b8) u>> 0x1f).b != 0)
                    if ((sub_142604ad0(arg1, r14_2, arg3, &var_140) u>> 0x1f).b != 0)
                        break
                    
                    char rcx_46 = arg7.b
                    
                    if ((rcx_46 & 3) != 0)
                        sub_1426037f0(arg1, var_19c_1, rdi_2, &var_140, arg4, arg6, rcx_46)
                    
                    int64_t rdi_5 = arg4[rsi_1]
                    int32_t rax_49 = arg6[1].d
                    
                    if (rax_49 s> 0
                            && sub_142609980((sx.q(rax_49 - 1) << 5) + *arg6 + 0xc, &var_140) != 0)
                        *((sx.q(arg6[1].d) << 5) + *arg6 - 8) = 0
                        *((sx.q(arg6[1].d) << 5) + *arg6 - 0x20) = rdi_5
                        return 0x40000040
                    
                    zmm6 = var_140
                    int32_t var_120_3 = 0
                    int32_t var_110_3 = 0
                    sub_142616200(arg6, arg6[1].d + 1)
                    int64_t rax_56 = *arg6
                    int64_t rcx_57 = sx.q(arg6[1].d) << 5
                    float zmm0_2[0x4] = rdi_5.o
                    uint128_t zmm1_2
                    zmm1_2.d = var_13c.d
                    float temp0_15[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x93)
                    _mm_shuffle_ps(zmm1_2, zmm1_2, 0xe1)
                    temp0_15[0] = zmm6.d
                    zmm1_2.d = var_138.d
                    *(rcx_57 + rax_56 - 0x20) = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
                    *(rcx_57 + rax_56 - 0x10) = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xe1)
                    return 0x40000040
                
                rsi = zx.q(var_1a0)
                zmm8 = var_158
                zmm7 = var_160.d
                zmm12 = var_168
                zmm13 = var_170.d
                
                if (rdi_2 == 0 && rsi.b == 0)
                    zmm3_1.d = zmm7.d f- zmm13.d
                    zmm2_1.d = zmm8.d f- zmm12.d
                    zmm1_1.d = zmm11.d f- zmm12.d
                    zmm0_1.d = zmm3_1.d f* zmm3_1.d
                    zmm4_1.d = zmm2_1.d f* zmm2_1.d
                    zmm1_1.d = zmm1_1.d f* zmm2_1.d
                    zmm4_1.d = zmm4_1.d f+ zmm0_1.d
                    zmm0_1.d = zmm9.d f- zmm13.d
                    zmm0_1.d = zmm0_1.d f* zmm3_1.d
                    zmm1_1.d = zmm1_1.d f+ zmm0_1.d
                    
                    if (not(zmm4_1.d f<= zmm10.d))
                        zmm1_1.d = zmm1_1.d f/ zmm4_1.d
                    
                    if (zmm1_1.d f>= zmm10.d)
                        zmm1_1 = _mm_min_ss(zmm1_1.d, zmm14.d)
                    else
                        zmm1_1 = zmm10
                    
                    zmm2_1.d = zmm2_1.d f* zmm1_1.d
                    zmm3_1.d = zmm3_1.d f* zmm1_1.d
                    zmm2_1.d = zmm2_1.d f+ zmm12.d
                    zmm3_1.d = zmm3_1.d f+ zmm13.d
                    zmm2_1.d = zmm2_1.d f- zmm11.d
                    zmm3_1.d = zmm3_1.d f- zmm9.d
                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                    zmm3_1.d = zmm3_1.d f* zmm3_1.d
                    zmm2_1.d = zmm2_1.d f+ zmm3_1.d
                
                if (rdi_2 != 0 || rsi.b != 0 || not(zmm2_1.d f< 1.00000011e-06f))
                    if (var_19f != 2)
                        zmm14 = var_170:4.d
                        zmm2_1 = var_1a4_1
                        zmm4_1 = 0x3f000000
                        r14_1 = var_178_1
                        rdx_5 = var_19c_1
                        r8_2 = arg5
                        goto label_14260dcd3
                    
                    if (var_1a8_1 != 0)
                        zmm0_1.d = zmm14.d f- zmm6.d
                        zmm6 = zmm0_1
                    
                    zmm7.d = zmm7.d f- zmm13.d
                    zmm14.d = var_160:4.d.d f- var_170:4.d
                    zmm2_1 = var_1a4_1
                    zmm8.d = zmm8.d f- zmm12.d
                    zmm4_1 = 0x3f000000
                    r14_1 = var_178_1
                    rdx_5 = var_19c_1
                    r8_2 = arg5
                    zmm7.d = zmm7.d f* zmm6.d
                    zmm8.d = zmm8.d f* zmm6.d
                    zmm7.d = zmm7.d f+ zmm13.d
                    zmm14.d = zmm14.d f* zmm6.d
                    zmm8.d = zmm8.d f+ zmm12.d
                    zmm14.d = zmm14.d f+ var_170:4.d
                    var_170.d = zmm7.d
                    zmm13 = zmm7
                    var_160.d = zmm7.d
                    var_168 = zmm8.d
                    zmm12 = zmm8
                    var_158 = zmm8.d
                    var_170:4.d = zmm14.d
                    var_160:4.d = zmm14.d
                    goto label_14260dcd3
                
                zmm2_1 = var_1a4_1
                r14_1 = var_178_1
                r8_2 = arg5
            rax_14 = arg4
            rdi_2 += 1
            rdx_5 = var_19c_1
            
            if (rdi_2 s>= r8_2)
                rsi = arg1
                goto label_14260e454

return -0x7ffffff8
