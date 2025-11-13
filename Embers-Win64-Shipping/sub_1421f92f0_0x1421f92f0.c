// 函数: sub_1421f92f0
// 地址: 0x1421f92f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rdx = arg1

if ((*(arg1 + 0x3c) & 0xc) != 0)
    int64_t r8 = *(arg1 + 0x78)
    int32_t i = 0
    int64_t var_2a8_1 = r8
    int32_t i_1 = 0
    
    if (*(arg1 + 0x5c) s> 0)
        int64_t rcx = 0
        uint128_t zmm6 = 0x437f0000
        uint128_t zmm7
        uint128_t var_48_1 = zmm7
        uint128_t zmm8 = zx.o(0)
        uint128_t zmm10
        uint128_t var_78_1 = zmm10
        int128_t zmm11
        int128_t var_88_1 = zmm11
        int128_t zmm12
        int128_t var_98_1 = zmm12
        uint128_t zmm13
        uint128_t var_a8_1 = zmm13
        int64_t var_2a0_1 = 0
        
        do
            void** result_2 = sx.q(zx.d(*(*(rdx + 0x80) + rcx)) * *(rdx + 0x60)) + r8
            int32_t* r15_2 = sx.q(*(rdx + 0x130)) + result_2
            void** result_1 = result_2
            int32_t* var_2b0_1 = r15_2
            int32_t rcx_3 = *r15_2
            result = zx.q(rcx_3) & 0xf0000000
            
            if (result.d == 0x40000000 || result.d == 0x10000000)
                uint128_t zmm0 = zx.o(r15_2[2])
                int32_t rcx_4 = rcx_3 & 0x3fff
                int64_t r9 = *(rdx + 0x78)
                void* var_298 = rdx + 0x50
                int64_t var_290_1 = r9
                void** result_3 = result_2
                int32_t* var_260_1 = r15_2
                zmm7.d = 2f f/ _mm_cvtepi32_ps(zmm0).d
                int32_t var_360_1 = zmm7.d
                int128_t var_288_1
                __builtin_memset(&var_288_1, 0, 0x20)
                int128_t var_258
                void** result_5
                int32_t* r13_2
                
                if (rcx_4 == 0x3fff)
                    var_258 = zx.o(0)
                    r13_2 = nullptr
                    result_5 = nullptr
                else
                    result = zx.q(*(rdx + 0x60) * rcx_4)
                    result_5 = sx.q(result.d) + r9
                    r13_2 = sx.q(*(rdx + 0x130)) + result_5
                    var_258.q = result_5
                    var_258:8.q = r13_2
                
                int32_t* var_338_1 = r13_2
                
                if (result_2 != 0)
                    char var_384_1 = 0
                    char var_381_1 = 0xff
                    zmm11.d = zmm6.d
                    char var_380_1 = 0
                    char var_37d_1 = 0xff
                    zmm12.d = zmm8.d
                    
                    while (true)
                        int32_t var_388
                        void var_378
                        int32_t var_370
                        int64_t var_358
                        int64_t var_348
                        uint128_t var_1f0
                        uint128_t zmm9_1
                        int32_t zmm15_1
                        zmm6, zmm7, zmm8, zmm9_1, zmm11, zmm12, zmm13, zmm15_1 = sub_1421db0a0(
                            &var_298, zmm8, &var_370, &var_358, &var_348, &var_378, &var_388, 
                            &var_1f0, nullptr)
                        zmm13.d = zmm13.d f+ zmm7.d
                        char var_383_1 = (int.d(zmm12.d)).b
                        char var_382_1 = (int.d(zmm11.d)).b
                        zmm0.d = zmm13.d f* zmm6.d
                        int32_t var_37c = var_384_1.d
                        zmm12.d = zmm0.d
                        char var_37f_1 = (int.d(zmm0.d)).b
                        zmm0.d = zmm9_1.d f- zmm13.d
                        zmm0.d = zmm0.d f* zmm6.d
                        zmm11.d = zmm0.d
                        char var_37e_1 = (int.d(zmm0.d)).b
                        int32_t var_320 = var_380_1.d
                        char rax_10 = (*(arg1 + 0x3c)).b
                        uint64_t* var_3b8_1
                        int32_t* var_3b0_1
                        int32_t* var_3a8_1
                        int32_t var_368
                        int128_t var_278_1
                        
                        if ((rax_10 & 4) == 0)
                            zmm7 = var_388
                        else
                            int32_t rax_12 = *r15_2 & 0xf0000000
                            char rax_15
                            void* r9_4
                            int128_t zmm2_3
                            
                            if (rax_12 == 0x40000000)
                                void var_134
                                sub_140acc920(&var_134, &data_14399f63c)
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                int128_t zmm7_1 =
                                    sub_14229cc60(arg3, &var_370, var_388, &var_134, var_3b8_1.b)
                                void var_1d4
                                sub_140acc920(&var_1d4, &data_14399f63c)
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                int128_t zmm7_2 =
                                    sub_14229cc60(arg3, &var_358, zmm7_1, &var_1d4, var_3b8_1.b)
                                void var_1c4
                                sub_140acc920(&var_1c4, &data_14399f63c)
                                rax_15 = sub_14082c3b0(arg2, arg4)
                                r9_4 = &var_1c4
                                zmm2_3 = zmm7_2
                            else if (rax_12 == 0x10000000)
                                void var_1b4
                                sub_140acc920(&var_1b4, &data_14399f638)
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                int128_t zmm7_3 =
                                    sub_14229cc60(arg3, &var_370, var_388, &var_1b4, var_3b8_1.b)
                                void var_1a4
                                sub_140acc920(&var_1a4, &data_14399f638)
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                int128_t zmm7_4 =
                                    sub_14229cc60(arg3, &var_358, zmm7_3, &var_1a4, var_3b8_1.b)
                                void var_144
                                sub_140acc920(&var_144, &data_14399f638)
                                rax_15 = sub_14082c3b0(arg2, arg4)
                                r9_4 = &var_144
                                zmm2_3 = zmm7_4
                            else if (rax_12 != 0x80000000)
                                void var_164
                                sub_140acc920(&var_164, &var_37c)
                                zmm6.d = var_388.d f* 0.5f
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                int128_t zmm6_1 =
                                    sub_14229cc60(arg3, &var_370, zmm6, &var_164, var_3b8_1.b)
                                void var_154
                                sub_140acc920(&var_154, &var_37c)
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                int128_t zmm6_2 =
                                    sub_14229cc60(arg3, &var_358, zmm6_1, &var_154, var_3b8_1.b)
                                void var_f4
                                sub_140acc920(&var_f4, &var_37c)
                                rax_15 = sub_14082c3b0(arg2, arg4)
                                r9_4 = &var_f4
                                zmm2_3 = zmm6_2
                            else
                                void var_194
                                sub_140acc920(&var_194, &data_14399f630)
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                int128_t zmm7_5 =
                                    sub_14229cc60(arg3, &var_370, var_388, &var_194, var_3b8_1.b)
                                void var_184
                                sub_140acc920(&var_184, &data_14399f630)
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                int128_t zmm7_6 =
                                    sub_14229cc60(arg3, &var_358, zmm7_5, &var_184, var_3b8_1.b)
                                void var_174
                                sub_140acc920(&var_174, &data_14399f630)
                                rax_15 = sub_14082c3b0(arg2, arg4)
                                r9_4 = &var_174
                                zmm2_3 = zmm7_6
                            
                            var_3b8_1.b = rax_15
                            zmm7 = sub_14229cc60(arg3, &var_348, zmm2_3, r9_4, var_3b8_1.b)
                            rax_10 = (*(arg1 + 0x3c)).b
                            
                            if ((rax_10 & 0x10) != 0 && result_2 != 0 && var_278_1.q != 0)
                                int64_t var_248[0x2]
                                uint64_t var_238[0x2]
                                uint64_t var_200[0x2]
                                zmm8, zmm15_1 = sub_1421db0a0(&var_298, zmm9_1, &var_200, &var_248, 
                                    &var_238, &var_378, &var_388, &var_1f0, nullptr)
                                void var_124
                                sub_140acc920(&var_124, &data_14399f640)
                                int64_t rbx_2 = *arg3
                                uint128_t* var_3a0_1
                                var_3a0_1.b = 0
                                var_3a8_1.d = zmm8.d
                                var_3b0_1.d = zmm8.d
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                (*(rbx_2 + 0x30))(arg3, &var_370, &var_200, &var_124, var_3b8_1, 
                                    var_3b0_1, var_3a8_1, var_3a0_1)
                                void var_114
                                sub_140acc920(&var_114, &data_14399f640)
                                int64_t rbx_3 = *arg3
                                var_3a8_1.d = zmm8.d
                                var_3b0_1.d = zmm8.d
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                (*(rbx_3 + 0x30))(arg3, &var_358, &var_248, &var_114, var_3b8_1, 
                                    var_3b0_1, var_3a8_1, 0)
                                void var_104
                                sub_140acc920(&var_104, &data_14399f640)
                                int64_t rbx_4 = *arg3
                                var_3a8_1.d = zmm8.d
                                var_3b0_1.d = zmm8.d
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                (*(rbx_4 + 0x30))(arg3, &var_348, &var_238, &var_104, var_3b8_1, 
                                    var_3b0_1, var_3a8_1, 0)
                                int32_t rbx_5 = r15_2[7]
                                int64_t var_318 = var_370.q
                                int32_t var_310_1 = var_368
                                int64_t var_308 = var_358
                                int32_t var_350
                                int32_t var_300_1 = var_350
                                int64_t var_2f8 = var_348
                                int32_t var_340
                                int32_t var_2f0_1 = var_340
                                zmm10 = _mm_cvtepi32_ps(zx.o(rbx_5))
                                void var_e0
                                sub_140acc920(&var_e0, &var_37c)
                                void var_210
                                sub_140acc920(&var_210, &var_320)
                                int32_t r15_3 = 0
                                
                                if (rbx_5 s<= 0)
                                    zmm7 = var_388
                                else
                                    do
                                        zmm6.d = _mm_cvtepi32_ps(zx.o(r15_3)).d f/ zmm10.d
                                        float var_330
                                        uint64_t var_2e8
                                        uint64_t var_2d8
                                        int64_t var_2c8
                                        int128_t zmm6_3
                                        float zmm9_2
                                        int32_t zmm14_1
                                        zmm6_3, zmm8, zmm9_2, zmm10, zmm14_1, zmm15_1 =
                                            sub_1421db0a0(&var_298, zmm6, &var_2d8, &var_2c8, 
                                            &var_2e8, &var_378, &var_388, &var_330, nullptr)
                                        int64_t rbx_6 = *arg3
                                        var_3a0_1.b = 0
                                        var_3a8_1.d = zmm8.d
                                        var_3b0_1.d = zmm8.d
                                        var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                        (*(rbx_6 + 0x30))(arg3, &var_318, &var_2d8, &var_330, 
                                            var_3b8_1, var_3b0_1, var_3a8_1, var_3a0_1)
                                        int64_t rbx_7 = *arg3
                                        var_3a8_1.d = zmm8.d
                                        var_3b0_1.d = zmm8.d
                                        var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                        (*(rbx_7 + 0x30))(arg3, &var_308, &var_2c8, &var_330, 
                                            var_3b8_1, var_3b0_1, var_3a8_1, 0)
                                        int64_t rbx_8 = *arg3
                                        var_3a8_1.d = zmm8.d
                                        var_3b0_1.d = zmm8.d
                                        var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                        (*(rbx_8 + 0x30))(arg3, &var_2f8, &var_2e8, &var_330, 
                                            var_3b8_1, var_3b0_1, var_3a8_1, 0)
                                        
                                        if (r15_3 s> 0)
                                            float zmm1_1 = zmm9_2 f- zmm6_3.d
                                            var_330 = zmm1_1
                                            float var_32c_1 = zmm1_1
                                            float var_328_1 = zmm9_2 - zmm1_1
                                        
                                        zmm6_3.d = var_388.d f* zmm14_1
                                        var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                        int128_t zmm6_4 = sub_14229cc60(arg3, &var_2d8, zmm6_3, 
                                            &var_330, var_3b8_1.b)
                                        var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                        int128_t zmm6_5 = sub_14229cc60(arg3, &var_2c8, zmm6_4, 
                                            &var_330, var_3b8_1.b)
                                        var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                        zmm7 = sub_14229cc60(arg3, &var_2e8, zmm6_5, &var_330, 
                                            var_3b8_1.b)
                                        r15_3 += 1
                                        var_318 = var_2d8
                                        int32_t var_2d0
                                        int32_t var_310_2 = var_2d0
                                        var_308 = var_2c8
                                        int32_t var_2c0
                                        int32_t var_300_2 = var_2c0
                                        var_2f8 = var_2e8
                                        int32_t var_2e0
                                        int32_t var_2f0_2 = var_2e0
                                    while (r15_3 s< rbx_5)
                                    
                                    r13_2 = var_338_1
                                
                                int64_t rbx_9 = *arg3
                                var_3a8_1.d = zmm8.d
                                var_3b0_1.d = zmm8.d
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                (*(rbx_9 + 0x30))(arg3, &var_318, &var_200, &var_210, var_3b8_1, 
                                    var_3b0_1, var_3a8_1, 0, 0)
                                int64_t rbx_10 = *arg3
                                var_3a8_1.d = zmm8.d
                                var_3b0_1.d = zmm8.d
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                (*(rbx_10 + 0x30))(arg3, &var_308, &var_248, &var_210, var_3b8_1, 
                                    var_3b0_1, var_3a8_1, 0)
                                int64_t rbx_11 = *arg3
                                var_3a8_1.d = zmm8.d
                                var_3b0_1.d = zmm8.d
                                var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                                (*(rbx_11 + 0x30))(arg3, &var_2f8, &var_238, &var_210, var_3b8_1, 
                                    var_3b0_1, var_3a8_1, 0)
                                r15_2 = var_2b0_1
                                rax_10 = (*(arg1 + 0x3c)).b
                        
                        if ((rax_10 & 8) != 0)
                            int64_t rbx_12 = *arg3
                            zmm0.d = zmm7.d f* r15_2[0xd]
                            float zmm1[0x4] = zmm7
                            zmm1[0] = zmm1[0] f* r15_2[0xe]
                            zmm7.d = zmm7.d f* r15_2[0xf]
                            zmm0.d = zmm0.d f* zmm15_1
                            zmm1[0] = zmm1[0] f* zmm15_1
                            zmm0.d = zmm0.d f+ var_370
                            zmm7.d = zmm7.d f* zmm15_1
                            int32_t var_36c
                            zmm1[0] = zmm1[0] f+ var_36c
                            zmm7.d = zmm7.d f+ var_368
                            uint64_t var_228 = (_mm_unpacklo_ps(zmm0, zmm1[0].q)).q
                            int32_t var_1d8_1 = zmm7.d
                            var_1f0 = data_142f2cb30
                            int32_t var_220_1 = var_1d8_1
                            var_3a8_1.d = zmm8.d
                            var_3b0_1.d = zmm8.d
                            var_3b8_1.b = sub_14082c3b0(arg2, arg4)
                            (*(rbx_12 + 0x30))(arg3, &var_370, &var_228, &var_1f0, var_3b8_1, 
                                var_3b0_1, var_3a8_1, 0, 0)
                        
                        result_2 = result_5
                        zmm6 = 0x437f0000
                        var_288_1.q = var_278_1.q
                        var_288_1:8.q = var_278_1:8.q
                        result = result_1
                        var_278_1:8.q = r15_2
                        r15_2 = r13_2
                        var_278_1.q = result
                        result_1 = result_2
                        void** result_4 = result_2
                        var_2b0_1 = r13_2
                        int32_t* var_260_2 = r13_2
                        
                        if (result_5 == 0)
                            break
                        
                        int32_t rcx_74 = *r13_2 & 0x3fff
                        
                        if (rcx_74 == 0x3fff)
                            var_258 = zx.o(0)
                            r13_2 = nullptr
                            result_5 = nullptr
                            var_338_1 = nullptr
                        else
                            void* rdx_53 = var_298
                            result_5 = sx.q(*(rdx_53 + 0x10) * rcx_74) + r9
                            r13_2 = sx.q(*(rdx_53 + 0xe0)) + result_5
                            var_258.q = result_5
                            var_338_1 = r13_2
                            var_258:8.q = r13_2
                    
                    rdx = arg1
                    i = i_1
                
                r8 = var_2a8_1
            
            i += 1
            rcx = var_2a0_1 + 2
            i_1 = i
            var_2a0_1 = rcx
        while (i s< *(rdx + 0x5c))

return result
