// 函数: sub_1427228f0
// 地址: 0x1427228f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
void* result
uint128_t zmm6
result, zmm6 = sub_1423de540(data_143f5b298, *(arg1[7] + 0x20), 1)

if (result != 0)
    void* rbx
    void* arg_10 = rbx
    int128_t zmm10 = 0x5f800000
    char var_2c8
    int32_t zmm0_1
    
    if (*(arg1 + 0x124) != 0)
        void* rdx_1 = arg1[0x25]
        int64_t r10_1 = sx.q(arg1[0x26].d)
        void* r8_1 = rdx_1 + r10_1 * 0x28
        
        if (rdx_1 != r8_1)
            do
                int64_t rcx_2 = data_143de5458
                uint64_t rax_4 = *(rdx_1 + 0x20) u>> 1
                zmm0_1 = float.s(rcx_2 - rax_4)
                
                if (rcx_2 - rax_4 s< 0)
                    zmm0_1 = zmm0_1 f+ 1.84467441e+19f
                
                *(rdx_1 + 8) = zmm0_1 f+ *(rdx_1 + 0xc)
                rdx_1 += 0x28
            while (rdx_1 != r8_1)
            
            r10_1 = zx.q(arg1[0x26].d)
        
        sub_1427196d0(arg1[0x25], r10_1.d, var_2c8)
        arg1[0x24].d = 0
        *(arg1 + 0x124) = 0
    
    void* r15_1 = &arg1[0x27]
    void* rdx_3 = *r15_1
    uint64_t r10_2 = sx.q(*(r15_1 + 8))
    void* r8_3 = rdx_3 + r10_2 * 0x28
    
    if (rdx_3 != r8_3)
        do
            int64_t rcx_6 = data_143de5458
            uint64_t rax_6 = *(rdx_3 + 0x20) u>> 1
            zmm0_1 = float.s(rcx_6 - rax_6)
            
            if (rcx_6 - rax_6 s< 0)
                zmm0_1 = zmm0_1 f+ 1.84467441e+19f
            
            *(rdx_3 + 8) = zmm0_1 f+ *(rdx_3 + 0xc)
            rdx_3 += 0x28
        while (rdx_3 != r8_3)
        
        r10_2 = zx.q(*(r15_1 + 8))
    
    sub_1427196d0(*r15_1, r10_2.d, var_2c8)
    int32_t r12_1 = 0
    int32_t var_2b0_1 = 0
    int32_t var_260_1 = 0
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    uint128_t zmm13 = 0x4170000000000000
    void* result_1 = nullptr
    int128_t zmm11
    zmm11.q = float.d(performanceCount)
    uint64_t r13
    r13.b = 0
    int64_t var_298_1 = 0
    int32_t var_250_1 = r13.d
    void* var_270 = nullptr
    int64_t var_268_1 = 0
    zmm11.q = zmm11.q f* data_143d796f8
    zmm11.q = zmm11.q f+ zmm13.q
    zmm11.q = zmm11.q f+ arg1[0x2a]
    sub_141d26590(&result_1, 0x10)
    sub_1405dadb0(&var_270, 0x10)
    int32_t rcx_12 = arg1[0x28].d
    int32_t r10_3 = 0
    int32_t r8_5 = arg1[0x26].d
    int32_t rdi_1 = 0
    uint128_t zmm12 = zx.o(0)
    int64_t performanceCount_2 = arg1[7] + 0x38
    int32_t var_290_1 = 0
    performanceCount = performanceCount_2
    int32_t i_3 = 0
    char var_2c7
    void* var_280
    int64_t var_138
    int32_t var_118
    
    if (r8_5 + rcx_12 s> 0)
        uint128_t zmm14 = 0x3f000000
        uint128_t var_38_1 = zmm6
        uint128_t zmm7
        uint128_t var_48_1 = zmm7
        uint128_t zmm8
        uint128_t var_58_1 = zmm8
        int128_t zmm9
        int128_t var_68_1 = zmm9
        int32_t i
        
        do
            int32_t rax_7
            
            if (r10_3 s< 0 || r10_3 s>= rcx_12)
                rax_7.b = 0
            else
                rax_7.b = 1
            
            int32_t rcx_13 = -1
            
            if (rax_7.b != 0)
                rcx_13 = r10_3
            
            int32_t* r9_1
            
            if (rcx_13 == 0xffffffff)
                r9_1 = nullptr
            else
                r9_1 = *r15_1 + sx.q(rcx_13) * 0x28
            
            int32_t var_25c_1
            int32_t* r14_1
            int64_t r15_2
            uint128_t zmm0_2
            
            if (rdi_1 s< 0 || rdi_1 s>= r8_5)
                r15_2 = 0xffffffff
                var_25c_1 = 0xffffffff
                r14_1 = nullptr
            else
                r15_2 = sx.q(mods.dp.d(sx.q(arg1[0x24].d + rdi_1), r8_5))
                var_25c_1 = r15_2.d
                
                if (r15_2.d == 0xffffffff)
                    r14_1 = nullptr
                else
                    r14_1 = arg1[0x25] + r15_2 * 0x28
                    
                    if (r14_1 != 0)
                        int64_t rcx_16 = data_143de5458
                        uint64_t rax_14 = *(r14_1 + 0x20) u>> 1
                        zmm0_2.d = float.s(rcx_16 - rax_14)
                        
                        if (rcx_16 - rax_14 s< 0)
                            zmm0_2.d = zmm0_2.d f+ zmm10.d
                        
                        zmm0_2.d = zmm0_2.d f+ r14_1[3]
                        r14_1[2] = zmm0_2.d
            
            if (r9_1 == 0)
                rbx.b = r14_1 == 0
            else if (r14_1 == 0)
                rbx.b = r14_1 == 0
            else
                zmm0_2 = r14_1[2]
                float temp19_1 = r9_1[2]
                zmm0_2.d f- temp19_1
                rbx.b = zmm0_2.d f< temp19_1
            
            char var_2c8_1 = rbx.b
            
            if (rbx.b != 0)
                r14_1 = r9_1
            
            int32_t rax_16 = var_260_1 + 1
            var_260_1 = rax_16
            *(arg1 + 0x14c)
            
            if (mods.dp.d(sx.q(rax_16), *(arg1 + 0x14c)) == 0)
                int64_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                r10_3 = var_290_1
                zmm0_2.q = float.d(performanceCount_1)
                performanceCount_2 = performanceCount
                r13 = zx.q(r13.b)
                zmm0_2.q = zmm0_2.q f* data_143d796f8
                zmm0_2.q = zmm0_2.q f+ zmm13.q
                
                if (zmm0_2.q f> zmm11.q)
                    r13 = 1
                
                var_250_1 = r13.d
            
            if (r12_1 s>= arg1[0x29].d)
                break
            
            if (r13.b != 0)
                break
            
            char temp27_1 = rbx.b
            
            if (temp27_1 == 0)
                rdi_1 += 1
            
            int32_t rax_20 = r10_3 + 1
            
            if (temp27_1 == 0)
                rax_20 = r10_3
            
            var_290_1 = rax_20
            int32_t* rcx_22
            
            if (*(performanceCount_2 + 8) == *(performanceCount_2 + 0x34))
            label_142722d2e:
                rcx_22 = nullptr
            else
                int64_t rcx_19 = *(performanceCount_2 + 0x40)
                int64_t r8_7 = performanceCount_2 + 0x38
                int64_t r9_2 = sx.q(*r14_1)
                
                if (rcx_19 != 0)
                    r8_7 = rcx_19
                
                int32_t rax_22 = *(r8_7 + (((sx.q(*(performanceCount_2 + 0x48)) - 1) & r9_2) << 2))
                
                if (rax_22 == 0xffffffff)
                label_142722d2e_1:
                    rcx_22 = nullptr
                else
                    while (true)
                        rcx_22 = sx.q(rax_22) * 0x3c + *performanceCount_2
                        
                        if (*rcx_22 == r9_2.d)
                            break
                        
                        rax_22 = rcx_22[0xd]
                        
                        if (rax_22 == 0xffffffff)
                            goto label_142722d2e_2
                    
                    if (rax_22 == 0xffffffff)
                    label_142722d2e_2:
                        rcx_22 = nullptr
            
            int64_t r9_3 = sx.q(r14_1[1])
            void* const rcx_25
            
            if (arg1[0x11].d == *(arg1 + 0xb4))
            label_142722da0:
                rcx_25 = nullptr
            else
                void* r8_9 = &arg1[0x17]
                void* rcx_23 = *(r8_9 + 8)
                
                if (rcx_23 != 0)
                    r8_9 = rcx_23
                
                int32_t rax_24 = *(r8_9 + (((sx.q(arg1[0x19].d) - 1) & r9_3) << 2))
                
                if (rax_24 == 0xffffffff)
                label_142722da0_1:
                    rcx_25 = nullptr
                else
                    int64_t r8_10 = arg1[0x10]
                    
                    while (true)
                        int64_t rdx_16 = sx.q(rax_24) * 5
                        rcx_25 = r8_10 + (rdx_16 << 3)
                        
                        if (*(r8_10 + (rdx_16 << 3)) == r9_3.d)
                            break
                        
                        rax_24 = *(rcx_25 + 0x20)
                        
                        if (rax_24 == 0xffffffff)
                            goto label_142722da0_2
                    
                    if (rax_24 == 0xffffffff)
                    label_142722da0_2:
                        rcx_25 = nullptr
            
            void* rax_25 = sub_140d3c6e0(rcx_25 + 8)
            void* rax_26 = sub_140d3c6e0(&rcx_22[1])
            
            if (rax_25 == 0 || rax_26 == 0)
                bool cond:11_1 = rbx.b != 0
                char var_230_1 = rbx.b
                rbx = sx.q(var_298_1.d)
                
                if (cond:11_1)
                    r15_2 = zx.q(rcx_13)
                
                char var_22f_1 = 0
                int32_t var_22c_1 = r15_2.d
                int32_t rax_87 = (rbx + 1).d
                var_298_1.d = rax_87
                
                if (rax_87 s> var_298_1:4.d)
                    sub_1409da2a0(&result_1)
                
                *(result_1 + (rbx << 3)) = var_230_1.q
                
                if (rax_25 == 0)
                    void* r8_23 = var_270
                    void* r9_9 = sx.q(var_268_1.d)
                    void* rcx_82 = r8_23
                    void* rdx_42 = r8_23 + (r9_9 << 2)
                    
                    if (r8_23 != rdx_42)
                        while (*rcx_82 != r14_1[1])
                            rcx_82 += 4
                            
                            if (rcx_82 == rdx_42)
                                goto label_1427237e5
                    
                    if (r8_23 == rdx_42 || ((rcx_82 - r8_23) s>> 2).d == 0xffffffff)
                    label_1427237e5:
                        var_268_1.d = r9_9.d + 1
                        
                        if (r9_9.d + 1 s> var_268_1:4.d)
                            sub_1405a4cf0(&var_270)
                            r8_23 = var_270
                        
                        *(r8_23 + (r9_9 << 2)) = r14_1[1]
            else
                void* rcx_28 = *(rax_25 + 0x130)
                int32_t* rax_27
                uint128_t zmm1_1
                
                if (rcx_28 == 0)
                    int32_t var_278 = data_143dbb200
                    rax_27 = &var_280
                    var_280 = data_143dbb1f8.q
                else
                    zmm1_1 = *(rcx_28 + 0x1d0)
                    int32_t var_1f0
                    rax_27 = &var_1f0
                    var_1f0 = zmm1_1.d
                    zmm0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    int32_t var_1e8_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa).d
                    int32_t var_1ec_1 = zmm0_2.d
                
                int32_t rax_29 = rax_27[2]
                int32_t rax_30 = arg1[0x1b].d
                uint64_t var_2c0 = *rax_27
                int32_t* rdx_22
                
                if (rax_30 == *(arg1 + 0x104))
                label_142722e8e:
                    rdx_22 = nullptr
                else
                    void* r8_11 = &arg1[0x21]
                    void* rcx_29 = *(r8_11 + 8)
                    int64_t r9_4 = sx.q(*r14_1)
                    
                    if (rcx_29 != 0)
                        r8_11 = rcx_29
                    
                    int32_t rax_31 = *(r8_11 + (((sx.q(arg1[0x23].d) - 1) & r9_4) << 2))
                    
                    if (rax_31 == 0xffffffff)
                    label_142722e8e_1:
                        rdx_22 = nullptr
                    else
                        while (true)
                            rdx_22 = (sx.q(rax_31) << 5) + arg1[0x1a]
                            
                            if (*rdx_22 == r9_4.d)
                                break
                            
                            rax_31 = rdx_22[6]
                            
                            if (rax_31 == 0xffffffff)
                                goto label_142722e8e_2
                        
                        if (rax_31 == 0xffffffff)
                        label_142722e8e_2:
                            rdx_22 = nullptr
                
                if ((r14_1[8].b & 1) == 0)
                    zmm9 = rdx_22[2]
                else
                    zmm9 = rdx_22[4]
                
                int64_t rax_32 = *arg1
                int32_t var_2ac
                int32_t* var_2e0_1 = &var_2ac
                var_2ac = 0x3f800000
                int128_t* var_2d8
                uint64_t j
                uint128_t zmm2_1
                int64_t var_128
                int64_t var_108
                int32_t var_100
                
                if ((*(rax_32 + 0x2b8))(arg1, &rdx_22[1], r14_1, &rcx_22[1], rax_25, var_2e0_1, 
                        var_2d8).b == 0)
                    zmm6.d = var_2c0.d.d f- rcx_22[4]
                    zmm7.d = var_2c0:4.d.d f- rcx_22[5]
                    zmm8.d = rax_29.d f- rcx_22[6]
                    zmm0_2.d = zmm6.d f* zmm6.d
                    zmm2_1.d = zmm7.d f* zmm7.d
                    zmm1_1.d = zmm8.d f* zmm8.d
                    zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                    zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                    
                    if (zmm2_1.d f> zmm9.d)
                    label_1427235b2:
                        
                        if ((r14_1[8].b & 1) != 0)
                            var_128:4.d = rax_29
                            uint64_t var_12c_6 = var_2c0
                            zmm0_2 = zx.o(*(rcx_22 + 0x10))
                            var_118 = rcx_22[6]
                            int64_t var_1f8_1 = 0
                            var_138.d = 0
                            var_138:4.d = 0x7f7fffff
                            int32_t var_130_6 = 0xbf800000
                            uint64_t var_120_6 = zmm0_2.q
                            int64_t var_114_6 = 0
                            char var_10c_11 = 0xff
                            sub_140b58260(&var_108, u"Invalid", 1)
                            int32_t rcx_71
                            rcx_71.b = *(arg1 + 0x2c) == 1
                            int64_t rax_80 = arg1[9]
                            var_100 = rcx_71 | (var_100 & 0xfffffff8)
                            char rcx_73 = *(arg1 + 0x44)
                            rcx_22[0xb] |= 1
                            char var_10c_12 = rcx_73
                            var_108 = rax_80
                            j, zmm9, zmm10 =
                                sub_14270a6d0(sub_140d3c6e0(&rcx_22[1]), rax_25, &var_138)
                            *(r14_1 + 0x20) &= 0xfffffffffffffffe
                    else
                        uint128_t zmm4_1
                        zmm4_1.d = zmm14.d
                        uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                        uint128_t zmm3_1
                        zmm3_1.d = zmm2_1.d f* zmm4_1.d
                        zmm0_2.d = zmm5_1.d f* zmm5_1.d
                        zmm2_1.d = zmm3_1.d f* zmm0_2.d
                        zmm1_1.d = zmm4_1.d f- zmm2_1.d
                        zmm0_2.d = zmm5_1.d f* zmm1_1.d
                        zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                        zmm0_2.d = zmm5_1.d f* zmm5_1.d
                        zmm3_1.d = zmm3_1.d f* zmm0_2.d
                        zmm4_1.d = zmm4_1.d f- zmm3_1.d
                        zmm0_2.d = zmm5_1.d f* zmm4_1.d
                        zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                        int32_t var_28c = zmm5_1.d
                        zmm1_1 = zmm5_1
                        zmm0_2.d = zmm5_1.d f* zmm7.d
                        zmm5_1.d = zmm5_1.d f* zmm6.d
                        zmm0_2.d = zmm0_2.d f* rcx_22[8]
                        zmm5_1.d = zmm5_1.d f* rcx_22[7]
                        zmm1_1.d = zmm1_1.d f* zmm8.d
                        zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                        zmm1_1.d = zmm1_1.d f* rcx_22[9]
                        zmm5_1.d = zmm5_1.d f+ zmm1_1.d
                        j.b = zmm5_1.d f> rdx_22[1]
                        
                        if (j.b == 0)
                            goto label_1427235b2
                        
                        bool cond:15_1 = *(rcx_25 + 0x10) == 0
                        int64_t var_248 = 0
                        int32_t var_240_1 = 0
                        
                        if (cond:15_1)
                            void var_1c8
                            memset(&var_1c8, 0, 0x88)
                            int32_t var_1c0_1 = 0x3f800000
                            TEB* gsbase
                            
                            if (data_143f72538 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer
                                    + (zx.q(data_14401b1a0) << 3))))
                                _Init_thread_header(&data_143f72538)
                                
                                if (data_143f72538 == 0xffffffff)
                                    sub_140b58170(&data_143f72530, "AILineOfSight", 1)
                                    _Init_thread_footer(&data_143f72538)
                            
                            int64_t* rax_58 = sub_141eb54c0(&var_138, data_143f72530, &var_2c7, 1, 
                                sub_1426fb720(rax_26))
                            var_2d8 = &data_143f3a660
                            void* var_2e8_3
                            var_2e8_3.d = arg1[0x2d].d
                            char rax_60
                            rax_60, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 = sub_141ec6a20(result, 
                                &var_1c8, &rcx_22[4], &var_2c0, var_2e8_3.b, rax_58, var_2d8)
                            int64_t var_d8
                            
                            if (var_d8 != 0)
                                sub_140a74f90(var_d8)
                            
                            int64_t var_f8
                            
                            if (var_f8 != 0)
                                sub_140a74f90(var_f8)
                            
                            var_2b0_1 += 1
                            
                            if (rax_60 == 0)
                            label_1427234e7:
                                var_128:4.d = rax_29
                                uint64_t var_12c_5 = var_2c0
                                zmm0_2 = zx.o(*(rcx_22 + 0x10))
                                var_118 = rcx_22[6]
                                uint64_t var_120_5 = zmm0_2.q
                                int64_t var_200_1 = 0
                                var_138.d = 0
                                var_138:4.d = 0x7f7fffff
                                int32_t var_130_5 = 0x3f800000
                                int64_t var_114_5 = 0
                                char var_10c_9 = 0xff
                                sub_140b58260(&var_108, u"Invalid", 1)
                                int32_t rcx_64
                                rcx_64.b = *(arg1 + 0x2c) == 1
                                int64_t rax_73 = arg1[9]
                                var_100 = (rcx_64 + 2) | (var_100 & 0xfffffffa)
                                char rcx_67 = *(arg1 + 0x44)
                                rcx_22[0xb] |= 1
                                char var_10c_10 = rcx_67
                                var_108 = rax_73
                                zmm9, zmm10 =
                                    sub_14270a6d0(sub_140d3c6e0(&rcx_22[1]), rax_25, &var_138)
                                zmm0_2 = zx.o(var_2c0)
                                *(r14_1 + 0x20) |= 1
                                *(r14_1 + 0x10) = zmm0_2.q
                                r14_1[6] = rax_29
                            else
                                void var_160
                                
                                for (j = sub_140d3c6e0(&var_160); j != 0; j = *(j + 0xe0))
                                    if (j == rax_25)
                                        goto label_1427234e7
                                
                                if ((r14_1[8].b & 1) != 0)
                                    var_128:4.d = rax_29
                                    uint64_t var_12c_4 = var_2c0
                                    zmm0_2 = zx.o(*(rcx_22 + 0x10))
                                    var_118 = rcx_22[6]
                                    uint64_t var_120_4 = zmm0_2.q
                                    int64_t var_208_1 = 0
                                    var_138.d = 0
                                    var_138:4.d = 0x7f7fffff
                                    int32_t var_130_4 = 0xbf800000
                                    int64_t var_114_4 = 0
                                    char var_10c_7 = 0xff
                                    sub_140b58260(&var_108, u"Invalid", 1)
                                    int32_t rcx_58
                                    rcx_58.b = *(arg1 + 0x2c) == 1
                                    int64_t rax_66 = arg1[9]
                                    var_100 = rcx_58 | (var_100 & 0xfffffff8)
                                    char rcx_60 = *(arg1 + 0x44)
                                    rcx_22[0xb] |= 1
                                    char var_10c_8 = rcx_60
                                    var_108 = rax_66
                                    zmm9, zmm10 =
                                        sub_14270a6d0(sub_140d3c6e0(&rcx_22[1]), rax_25, &var_138)
                                    *(r14_1 + 0x20) &= 0xfffffffffffffffe
                                    *(r14_1 + 0x10) = data_143b58120.q
                                    r14_1[6] = data_143b58128
                        else
                            rbx = *(rcx_25 + 0x10)
                            var_28c = 0
                            
                            if ((*(*rbx + 0x10))(rbx, &rcx_22[4], &var_248, &var_28c, &var_2ac, 
                                    sub_1426fb720(rax_26)).b != 1)
                                if ((r14_1[8].b & 1) != 0)
                                    var_128:4.d = rax_29
                                    uint64_t var_12c_3 = var_2c0
                                    zmm0_2 = zx.o(*(rcx_22 + 0x10))
                                    var_118 = rcx_22[6]
                                    int64_t var_218_1 = 0
                                    var_138.d = 0
                                    var_138:4.d = 0x7f7fffff
                                    int32_t var_130_3 = 0xbf800000
                                    uint64_t var_120_3 = zmm0_2.q
                                    int64_t var_114_3 = 0
                                    char var_10c_5 = 0xff
                                    sub_140b58260(&var_108, u"Invalid", 1)
                                    int32_t rcx_44
                                    rcx_44.b = *(arg1 + 0x2c) == 1
                                    int64_t rax_53 = arg1[9]
                                    var_100 = rcx_44 | (var_100 & 0xfffffff8)
                                    char rcx_46 = *(arg1 + 0x44)
                                    rcx_22[0xb] |= 1
                                    char var_10c_6 = rcx_46
                                    var_108 = rax_53
                                    zmm9, zmm10 =
                                        sub_14270a6d0(sub_140d3c6e0(&rcx_22[1]), rax_25, &var_138)
                                    *(r14_1 + 0x20) &= 0xfffffffffffffffe
                                    *(r14_1 + 0x10) = data_143b58120.q
                                    r14_1[6] = data_143b58128
                                
                                var_2b0_1 += var_28c
                            else
                                zmm1_1 = zx.o(var_248)
                                var_128:4.d = var_240_1
                                int32_t var_130_2 = var_2ac.d
                                zmm0_2 = zx.o(*(rcx_22 + 0x10))
                                var_118 = rcx_22[6]
                                int64_t var_220_1 = 0
                                var_138.d = 0
                                var_138:4.d = 0x7f7fffff
                                uint64_t var_12c_2 = zmm1_1.q
                                uint64_t var_120_2 = zmm0_2.q
                                int64_t var_114_2 = 0
                                char var_10c_3 = 0xff
                                sub_140b58260(&var_108, u"Invalid", 1)
                                int32_t rcx_37
                                rcx_37.b = *(arg1 + 0x2c) == 1
                                int64_t rax_46 = arg1[9]
                                var_100 = (rcx_37 + 2) | (var_100 & 0xfffffffa)
                                char rcx_40 = *(arg1 + 0x44)
                                rcx_22[0xb] |= 1
                                char var_10c_4 = rcx_40
                                var_108 = rax_46
                                zmm9, zmm10 =
                                    sub_14270a6d0(sub_140d3c6e0(&rcx_22[1]), rax_25, &var_138)
                                *(r14_1 + 0x20) |= 1
                                int32_t rdi_5 = var_2b0_1 + var_28c
                                *(r14_1 + 0x10) = var_248
                                r14_1[6] = var_240_1
                                var_2b0_1 = rdi_5
                else
                    zmm1_1 = zx.o(*(r14_1 + 0x10))
                    var_128:4.d = r14_1[6]
                    int32_t var_130_1 = var_2ac.d
                    zmm0_2 = zx.o(*(rcx_22 + 0x10))
                    var_118 = rcx_22[6]
                    int64_t var_228_1 = 0
                    var_138.d = 0
                    var_138:4.d = 0x7f7fffff
                    uint64_t var_12c_1 = zmm1_1.q
                    uint64_t var_120_1 = zmm0_2.q
                    int64_t var_114_1 = 0
                    char var_10c_1 = 0xff
                    sub_140b58260(&var_108, u"Invalid", 1)
                    int32_t rdx_24
                    rdx_24.b = *(arg1 + 0x2c) == 1
                    int64_t rax_38 = arg1[9]
                    var_100 = (rdx_24 + 2) | (var_100 & 0xfffffffa)
                    char rdx_27 = *(arg1 + 0x44)
                    rcx_22[0xb] |= 1
                    char var_10c_2 = rdx_27
                    var_108 = rax_38
                    j, zmm9, zmm10 = sub_14270a6d0(sub_140d3c6e0(&rcx_22[1]), rax_25, &var_138)
                    *(r14_1 + 0x20) |= 1
                zmm1_1.d = var_2c0.d.d f- rcx_22[4]
                zmm2_1.d = var_2c0:4.d.d f- rcx_22[5]
                zmm0_2.d = rax_29.d f- rcx_22[6]
                zmm1_1.d = zmm1_1.d f* zmm1_1.d
                zmm2_1.d = zmm2_1.d f* zmm2_1.d
                zmm0_2.d = zmm0_2.d f* zmm0_2.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                zmm1_1 = arg1[0x2c].d
                zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                
                if (not(zmm2_1.d f<= *(arg1 + 0x15c)))
                    zmm0_2.d = (*(arg1 + 0x164)).d f- zmm1_1.d
                    zmm0_2.d = zmm0_2.d f/ zmm9.d
                    zmm0_2.d = zmm0_2.d f* zmm2_1.d
                    zmm0_2.d = zmm0_2.d f+ zmm1_1.d
                    
                    if (zmm0_2.d f>= zmm12.d)
                        zmm1_1 = _mm_min_ss(zmm1_1.d, zmm0_2.d)
                    else
                        zmm1_1 = zmm12
                
                r14_1[3] = zmm1_1.d
                j.b = zmm1_1.d f> zmm12.d
                
                if (var_2c8_1 != j.b)
                    rbx = sx.q(var_298_1.d)
                    int32_t rax_82 = var_25c_1
                    
                    if (var_2c8_1 != 0)
                        rax_82 = rcx_13
                    
                    int32_t var_234_1 = rax_82
                    int32_t rax_83 = (rbx + 1).d
                    char var_237_1 = 1
                    var_298_1.d = rax_83
                    
                    if (rax_83 s> var_298_1:4.d)
                        sub_1409da2a0(&result_1)
                    
                    *(result_1 + (rbx << 3)) = var_2c8_1.q
                
                *(r14_1 + 0x20) = (zx.q(r14_1[8]) & 1) | (data_143de5458 * 2)
            
            r15_1 = &arg1[0x27]
            rcx_12 = arg1[0x28].d
            i = i_3 + 1
            r8_5 = arg1[0x26].d
            r10_3 = var_290_1
            performanceCount_2 = performanceCount
            r12_1 = var_2b0_1
            r13 = zx.q(var_250_1)
            i_3 = i
        while (i s< r8_5 + rcx_12)
    
    int32_t rcx_86 = arg1[0x26].d
    int32_t rdx_46
    
    if (rcx_86 s<= 0)
        rdx_46 = 0
    else
        rdx_46 = mods.dp.d(sx.q(arg1[0x24].d + rdi_1), rcx_86)
    
    int64_t rbx_2 = sx.q(var_298_1.d)
    arg1[0x24].d = rdx_46
    
    if (rbx_2.d s> 0)
        void* result_2 = result_1
        char var_2c8_2 = 0
        sub_142719a40(result_2, rbx_2.d, var_2c7)
        int64_t i_1 = result_2 + (rbx_2 << 3)
        var_280 = nullptr
        void* rdi_8 = nullptr
        int32_t var_274_1 = 0
        int32_t i_5 = 0
        performanceCount = i_1
        int32_t rcx_88 = 0
        
        if (result_2 != i_1)
            int32_t* r14_2 = result_2 + 4
            
            do
                if (*(r14_2 - 3) == 1)
                    int64_t rbx_3 = sx.q(*r14_2) * 5
                    
                    if (r14_2[-1].b == 0)
                        int32_t rcx_91 = arg1[0x28].d
                        int64_t r15_4 = arg1[0x25]
                        arg1[0x28].d = rcx_91 + 1
                        
                        if (rcx_91 + 1 s> *(arg1 + 0x144))
                            sub_1405c4ec0(&arg1[0x27])
                        
                        int64_t rcx_93 = arg1[0x27]
                        int64_t rdx_50 = sx.q(rcx_91) * 5
                        *(rcx_93 + (rdx_50 << 3)) = *(r15_4 + (rbx_3 << 3))
                        *(rcx_93 + (rdx_50 << 3) + 4) = *(r15_4 + (rbx_3 << 3) + 4)
                        *(rcx_93 + (rdx_50 << 3) + 8) = *(r15_4 + (rbx_3 << 3) + 8)
                        *(rcx_93 + (rdx_50 << 3) + 0xc) = *(r15_4 + (rbx_3 << 3) + 0xc)
                        *(rcx_93 + (rdx_50 << 3) + 0x10) = *(r15_4 + (rbx_3 << 3) + 0x10)
                        *(rcx_93 + (rdx_50 << 3) + 0x18) = *(r15_4 + (rbx_3 << 3) + 0x18)
                        *(rcx_93 + (rdx_50 << 3) + 0x20) ^= (zx.q(*(rcx_93 + (rdx_50 << 3) + 0x20))
                            ^ zx.q(*(r15_4 + (rbx_3 << 3) + 0x20))) & 1
                        *(rcx_93 + (rdx_50 << 3) + 0x20) = ((zx.q(*(rcx_93 + (rdx_50 << 3) + 0x20))
                            ^ zx.q(*(r15_4 + (rbx_3 << 3) + 0x20))) & 1)
                            ^ *(r15_4 + (rbx_3 << 3) + 0x20)
                    else
                        int64_t r15_3 = arg1[0x27]
                        int64_t i_6 = sx.q(i_5)
                        i_5 = (i_6 + 1).d
                        
                        if (i_5 s> rcx_88)
                            sub_1405c4ec0(&var_280)
                            rdi_8 = var_280
                        
                        int64_t rcx_90 = i_6 * 5
                        *(rdi_8 + (rcx_90 << 3)) = *(r15_3 + (rbx_3 << 3))
                        *(rdi_8 + (rcx_90 << 3) + 4) = *(r15_3 + (rbx_3 << 3) + 4)
                        *(rdi_8 + (rcx_90 << 3) + 8) = *(r15_3 + (rbx_3 << 3) + 8)
                        *(rdi_8 + (rcx_90 << 3) + 0xc) = *(r15_3 + (rbx_3 << 3) + 0xc)
                        *(rdi_8 + (rcx_90 << 3) + 0x10) = *(r15_3 + (rbx_3 << 3) + 0x10)
                        *(rdi_8 + (rcx_90 << 3) + 0x18) = *(r15_3 + (rbx_3 << 3) + 0x18)
                        *(rdi_8 + (rcx_90 << 3) + 0x20) ^= (zx.q(*(rdi_8 + (rcx_90 << 3) + 0x20))
                            ^ zx.q(*(r15_3 + (rbx_3 << 3) + 0x20))) & 1
                        *(rdi_8 + (rcx_90 << 3) + 0x20) = ((zx.q(*(rdi_8 + (rcx_90 << 3) + 0x20))
                            ^ zx.q(*(r15_3 + (rbx_3 << 3) + 0x20))) & 1)
                            ^ *(r15_3 + (rbx_3 << 3) + 0x20)
                    
                    i_1 = performanceCount
                
                int64_t r10_4 = sx.q(*r14_2)
                
                if (r14_2[-1].b == 0)
                    int32_t rcx_100 = arg1[0x26].d
                    int32_t rax_126 = rcx_100 - r10_4.d
                    
                    if (rax_126 != 1)
                        int64_t r9_12 = arg1[0x25]
                        memmove(r9_12 + r10_4 * 0x28, r9_12 + sx.q((r10_4 + 1).d) * 0x28, 
                            (rax_126 - 1) * 0x28)
                        rcx_100 = arg1[0x26].d
                    
                    arg1[0x26].d = rcx_100 - 1
                    int32_t rax_132 = arg1[0x24].d
                    
                    if (*r14_2 s< rax_132)
                        arg1[0x24].d = rax_132 - 1
                else
                    int32_t rdx_51 = arg1[0x28].d
                    int32_t rcx_96 = rdx_51 - r10_4.d - 1
                    
                    if (rcx_96 s>= 1)
                        rcx_96 = 1
                    
                    if (rcx_96 != 0)
                        int64_t r9_11 = arg1[0x27]
                        memcpy(r9_11 + r10_4 * 0x28, r9_11 + sx.q(rdx_51 - rcx_96) * 0x28, 
                            rcx_96 * 0x28)
                        rdx_51 = arg1[0x28].d
                    
                    arg1[0x28].d = rdx_51 - 1
                
                rcx_88 = var_274_1
                r14_2 = &r14_2[2]
            while (&r14_2[-1] != i_1)
            
            if (i_5 s> 0)
                int32_t r14_3 = arg1[0x26].d
                int64_t r12_4 = sx.q(arg1[0x24].d)
                int32_t rax_135 = r14_3 + i_5
                arg1[0x26].d = rax_135
                
                if (rax_135 s> *(arg1 + 0x134))
                    sub_1405c4ec0(&arg1[0x25])
                
                int64_t rbx_4 = r12_4 * 5
                int64_t rdx_56 = arg1[0x25] + (rbx_4 << 3)
                memmove(rdx_56 + sx.q(i_5) * 0x28, rdx_56, (r14_3 - r12_4.d) * 0x28)
                void* rdx_57 = rdi_8 + 8
                int32_t i_4 = i_5
                int32_t* rcx_107 = arg1[0x25] + (rbx_4 << 3)
                int32_t i_2
                
                do
                    int32_t rax_140 = *(rdx_57 - 8)
                    rdx_57 += 0x28
                    *rcx_107 = rax_140
                    rcx_107 = &rcx_107[0xa]
                    rcx_107[-9] = *(rdx_57 - 0x2c)
                    rcx_107[-8] = *(rdx_57 - 0x28)
                    rcx_107[-7] = *(rdx_57 - 0x24)
                    *(rcx_107 - 0x18) = *(rdx_57 - 0x20)
                    rcx_107[-4] = *(rdx_57 - 0x18)
                    *(rcx_107 - 8) ^= (zx.q(*(rdx_57 - 0x10)) ^ zx.q(rcx_107[-2])) & 1
                    *(rcx_107 - 8) =
                        ((zx.q(rcx_107[-2]) ^ zx.q(*(rdx_57 - 0x10))) & 1) ^ *(rdx_57 - 0x10)
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
                arg1[0x24].d += i_5
        
        int64_t rax_152 = sx.q(var_268_1.d)
        
        if (rax_152.d s> 0)
            void* rbx_5 = var_270
            void* r15_5 = rbx_5 + (rax_152 << 2)
            
            if (rbx_5 != r15_5)
                int64_t* var_278_1 = &var_138
                
                do
                    var_138 = 0
                    int32_t* var_128_1 = nullptr
                    var_280 = rbx_5
                    sub_142719d90(&arg1[0x27], &var_280)
                    char rax_153 = sub_142719d90(&arg1[0x25], &var_280)
                    
                    if (rax_153 == 1)
                        *(arg1 + 0x124) = rax_153
                    
                    if (var_138 != 0)
                        int32_t* rcx_110 = &var_118
                        
                        if (var_128_1 != 0)
                            rcx_110 = var_128_1
                        
                        (*(*rcx_110 + 0x10))(rcx_110)
                    
                    sub_1427205d0(&arg1[0x10], *rbx_5)
                    rbx_5 += 4
                while (rbx_5 != r15_5)
            
            if (sub_1417c7e40(&arg1[0x10]) != 0)
                sub_140837b00(&arg1[0x10])
        
        if (rdi_8 != 0)
            sub_140a74f90(rdi_8)
    
    void* rax_157 = var_270
    
    if (rax_157 != 0)
        sub_140a74f90(rax_157)
    
    result = result_1
    
    if (result != 0)
        result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_308)
return result
