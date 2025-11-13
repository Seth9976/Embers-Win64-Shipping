// 函数: sub_1420e1940
// 地址: 0x1420e1940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int64_t* rsi_1 = arg2[0x26]
    
    if (rsi_1 != 0)
        uint64_t r12
        r12.b = 0
        char arg_10 = 0
        int64_t var_200 = 0
        int32_t var_1f8 = 0
        float var_1a8[0x4]
        sub_140ade170(arg4, &var_1a8)
        float zmm0[0x4] = *(arg3 + 8)
        uint32_t zmm12[0x4] = var_1a8
        float zmm8[0x4] = *arg3
        float zmm13[0x4] = data_14399f668
        float zmm7[0x4] = *(rsi_1 + 0x1e0)
        float zmm3[0x4] = data_143f482f0
        float temp0[0x4] = _mm_unpacklo_ps(*(arg3 + 4), 0)
        float temp0_1[0x4] = _mm_unpacklo_ps(zmm8, zmm0[0].q)
        zmm0 = data_14399f670
        zmm8 = _mm_unpacklo_ps(temp0_1, temp0[0].q)
        float temp0_3[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
        zmm13 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, zmm0[0].q), temp0_3[0].q)
        float zmm2[0x4] = data_143f481d0
        uint32_t var_178[0x4] = zmm12
        uint32_t temp0_8 = _mm_movemask_ps(_mm_cmpeq_ps(zmm3, _mm_and_ps(zmm7, zmm2), 1))
        float var_1e8[0x4] = zmm12
        float var_188[0x4] = zmm8
        float var_138[0x4] = zmm13
        uint32_t zmm1[0x4]
        float zmm11[0x4]
        float zmm15[0x4]
        
        if (temp0_8 == 0)
            zmm7 = data_143dbb0e0
            zmm15 = data_143dbb0c0
            zmm11 = data_143dbb0d0
            var_1a8 = zmm7
        else
            zmm0 = data_143f48200
            zmm15 = __mulps_xmmps_memps(*(rsi_1 + 0x1c0), data_143f482e0)
            float zmm5_1[0x4] = *(rsi_1 + 0x1d0)
            zmm0[0].q = zmm7 u>> 0x40
            float temp0_10[0x4] = _mm_shuffle_ps(zmm7, zmm0, 0xc4)
            zmm1 = _mm_rcp_ps(temp0_10)
            float temp0_12[0x4] = _mm_mul_ps(zmm1, zmm1)
            zmm1 = _mm_sub_ps(_mm_add_ps(zmm1, zmm1), _mm_mul_ps(temp0_12, temp0_10))
            float temp0_16[0x4] = _mm_mul_ps(zmm1, zmm1)
            zmm1 = _mm_add_ps(zmm1, zmm1)
            float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0_10)
            float temp0_20[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0_10, zmm2), zmm3, 2)
            zmm3 = _mm_shuffle_ps(zmm15, zmm15, 0xd2)
            zmm1 = _mm_sub_ps(zmm1, temp0_18)
            zmm7 =
                __andps_xmmxud_memxud(_mm_and_ps(temp0_20, zx.o(0) ^ zmm1) ^ zmm1, data_143f481e0)
            zmm1 = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
            float temp0_26[0x4] = _mm_mul_ps(zmm5_1, zmm7)
            var_1a8 = zmm7
            float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xc9), zmm3)
            float temp0_31[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xd2), zmm1), temp0_28)
            float temp0_32[0x4] = _mm_add_ps(temp0_31, temp0_31)
            float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xd2), zmm1)
            zmm1 = _mm_shuffle_ps(zmm15, zmm15, 0xff)
            float temp0_36[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc9)
            zmm1 = _mm_mul_ps(zmm1, temp0_32)
            float temp0_38[0x4] = _mm_mul_ps(temp0_36, zmm3)
            zmm1 = _mm_add_ps(zmm1, temp0_26)
            zmm11 = __andps_xmmxud_memxud(
                _mm_sub_ps(zx.o(0), _mm_add_ps(_mm_sub_ps(temp0_34, temp0_38), zmm1)), 
                data_143f481e0)
        
        uint32_t zmm9[0x4]
        uint32_t var_78[0x4] = zmm9
        float zmm10[0x4]
        float var_88[0x4] = zmm10
        float zmm14[0x4]
        float var_c8[0x4] = zmm14
        float var_108[0x4] = zmm11
        int64_t rax_1 = sub_14254ab60()
        int64_t r8 = *arg2
        void* rax_2 = (*(r8 + 0x610))(arg2, rax_1, r8, zmm3)
        int64_t* r15_1
        
        if (rax_2 != 0)
            r15_1 = *(rax_2 + 0xb8)
        
        int32_t r13_1
        float zmm6_1[0x4]
        float var_258[0x4]
        uint64_t var_210
        uint32_t var_168[0x4]
        char rax_8
        
        if (rax_2 == 0 || r15_1 == 0)
            char var_268_1 = 0
            var_210 = 0
            int64_t var_208_2 = 0
            
            if (sub_141f2c990(rsi_1) == 0)
                goto label_1420e269c
            
            if ((((*(*rsi_1 + 0x4c8))(rsi_1) - 1) & 0xfffffffd) != 0)
                goto label_1420e269c
            
            sub_141dc54d0(arg2, &var_210, 1)
            var_268_1 = 1
            int128_t* r9_1 = &var_1e8
            
            if (arg5 == 0)
                rax_8, zmm7, zmm11 = sub_1420df190(arg1, arg2, rsi_1, r9_1, &var_210)
            else
                rax_8, zmm7, zmm11 = sub_1420df520(arg1, arg2, rsi_1, r9_1, arg5, &var_210)
            
            if (rax_8 != 0)
                if (arg5 == 0)
                label_1420e31bc:
                    uint64_t rcx_25 = var_210
                    
                    if (rcx_25 != 0)
                        sub_140a74f90(rcx_25)
                    
                    return 1
                
                zmm12 = var_1e8
                zmm6_1 = zx.o(*arg5)
                r13_1 = arg5[1].d
                var_138 = zmm13
                var_188 = zmm8
                var_178 = zmm12
                arg_10 = 1
                goto label_1420e26a9
            
            zmm12 = var_1e8
            var_138 = zmm13
            var_188 = zmm8
            var_178 = zmm12
        label_1420e269c:
            zmm6_1 = zx.o(var_200)
            r13_1 = var_1f8
        label_1420e26a9:
            int64_t var_218_2 = zmm6_1.q
            uint64_t var_198 = 0
            int32_t var_190_1 = 0
            sub_141f3bc80(rsi_1, 1, &var_198)
            uint64_t r15_2 = var_198
            int64_t rax_14 = r15_2 + (sx.q(var_190_1) << 3)
            
            if (r15_2 != rax_14)
                while (true)
                    int64_t* rdi_1 = *r15_2
                    
                    if ((((*(*rdi_1 + 0x4c8))(rdi_1) - 1) & 0xfffffffd) == 0)
                        int64_t* rsi_2 = nullptr
                        
                        if (sub_141f2c990(rdi_1) != 0)
                            rsi_2 = rdi_1
                        
                        if (rsi_2 != 0)
                            zmm14 = data_143f482d0
                            float zmm5_4[0x4] = *(rdi_1 + 0x1e0)
                            zmm8 = data_143f48290
                            zmm9 = data_143f48280
                            zmm10 = data_143f48270
                            float var_128_1[0x4] = zmm14
                            float var_118_1[0x4]
                            float zmm4_5[0x4]
                            
                            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm5_4, zmm7), zmm14, 1))
                                    == 0)
                                zmm2 = *(rdi_1 + 0x1c0)
                                zmm4_5 = *(rdi_1 + 0x1d0)
                                float temp0_512[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
                                float temp0_514[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_512)
                                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                                float temp0_516[0x4] = _mm_mul_ps(zmm4_5, zmm7)
                                float temp0_517[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xff)
                                float temp0_518[0x4] = _mm_mul_ps(zmm2, temp0_517)
                                float temp0_519[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                                float temp0_520[0x4] = _mm_shuffle_ps(temp0_516, temp0_516, 0xd2)
                                float temp0_522[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_514, zmm8), temp0_518)
                                zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm15, zmm15, 0x55))
                                float temp0_526[0x4] =
                                    _mm_mul_ps(temp0_519, _mm_shuffle_ps(zmm15, zmm15, 0xaa))
                                zmm1 = _mm_mul_ps(zmm1, zmm9)
                                float temp0_528[0x4] = _mm_shuffle_ps(temp0_516, temp0_516, 0xc9)
                                float temp0_529[0x4] = _mm_mul_ps(temp0_526, zmm10)
                                float temp0_530[0x4] = _mm_add_ps(temp0_522, zmm1)
                                zmm1 = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                                float temp0_532[0x4] = _mm_mul_ps(temp0_520, zmm1)
                                zmm13 = _mm_add_ps(temp0_530, temp0_529)
                                float temp0_534[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xd2)
                                float temp0_536[0x4] =
                                    _mm_sub_ps(temp0_532, _mm_mul_ps(temp0_528, temp0_534))
                                float temp0_537[0x4] = _mm_add_ps(temp0_536, temp0_536)
                                float temp0_539[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_537, temp0_537, 0xd2), zmm1)
                                zmm1 = var_128_1
                                float temp0_540[0x4] = _mm_shuffle_ps(temp0_537, temp0_537, 0xc9)
                                float temp0_541[0x4] = _mm_mul_ps(temp0_537, temp0_517)
                                zmm5_4 = *(rdi_1 + 0x1e0)
                                float temp0_542[0x4] = _mm_mul_ps(temp0_540, temp0_534)
                                float temp0_543[0x4] = _mm_add_ps(temp0_541, temp0_516)
                                zmm5_4 = _mm_mul_ps(zmm5_4, zmm7)
                                var_118_1 = zmm5_4
                                zmm14 = _mm_add_ps(
                                    _mm_add_ps(_mm_sub_ps(temp0_539, temp0_542), temp0_543), zmm11)
                            else
                                zmm10 = data_143f48200
                                float temp0_383[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                                zmm1 = _mm_add_ps(zmm15, zmm15)
                                float temp0_385[0x4] = _mm_mul_ps(zmm5_4, zmm7)
                                float temp0_386[0x4] = _mm_shuffle_ps(zmm15, zmm15, 4)
                                float temp0_387[0x4] = _mm_mul_ps(zmm15, zmm1)
                                float temp0_389[0x4] =
                                    _mm_mul_ps(temp0_386, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                                float temp0_392[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(zmm15, zmm15, 0xff), 
                                    _mm_shuffle_ps(zmm1, zmm1, 0x12))
                                var_118_1 = temp0_385
                                float temp0_393[0x4] = _mm_add_ps(temp0_392, temp0_389)
                                float temp0_394[0x4] = _mm_sub_ps(temp0_389, temp0_392)
                                float temp0_397[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_387, temp0_387, 0x1a), 
                                    _mm_shuffle_ps(temp0_387, temp0_387, 1))
                                float temp0_398[0x4] = _mm_mul_ps(temp0_393, zmm7)
                                float temp0_399[0x4] = _mm_mul_ps(temp0_383, temp0_394)
                                uint32_t temp0_402[0x4] = __andps_xmmxud_memxud(
                                    _mm_mul_ps(_mm_sub_ps(zmm10, temp0_397), zmm7), data_143f481e0)
                                float temp0_403[0x4] = _mm_shuffle_ps(temp0_399, temp0_402, 0x32)
                                zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_398, temp0_402, 0), 
                                    temp0_403, 0x82)
                                float temp0_406[0x4] = _mm_shuffle_ps(temp0_398, temp0_402, 0x31)
                                float temp0_408[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_399, temp0_402, 0x10), temp0_406, 0x88)
                                float temp0_410[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_398, temp0_399, 0x12), temp0_402, 0xe8)
                                zmm1 = *(rdi_1 + 0x1c0)
                                zmm10[0].q = var_108 u>> 0x40
                                float temp0_411[0x4] = _mm_add_ps(zmm1, zmm1)
                                float temp0_412[0x4] = _mm_shuffle_ps(var_108, zmm10, 0xc4)
                                float temp0_413[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                                float temp0_414[0x4] = _mm_mul_ps(temp0_411, zmm1)
                                float temp0_416[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_411, temp0_411, 0x29), temp0_413)
                                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                                float temp0_418[0x4] = _mm_shuffle_ps(temp0_414, temp0_414, 0x1a)
                                float temp0_420[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_411, temp0_411, 0x12), zmm1)
                                float temp0_422[0x4] =
                                    _mm_add_ps(temp0_418, _mm_shuffle_ps(temp0_414, temp0_414, 1))
                                float temp0_423[0x4] = _mm_add_ps(temp0_420, temp0_416)
                                float temp0_424[0x4] = _mm_sub_ps(temp0_416, temp0_420)
                                zmm1 = _mm_sub_ps(zmm10, temp0_422)
                                float temp0_426[0x4] = _mm_mul_ps(temp0_423, zmm5_4)
                                zmm1 = __mulps_xmmps_memps(zmm1, *(rdi_1 + 0x1e0))
                                float temp0_429[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5_4, zmm5_4, 0xc9), temp0_424)
                                uint32_t temp0_430[0x4] =
                                    __andps_xmmxud_memxud(zmm1, data_143f481e0)
                                float temp0_433[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_426, temp0_430, 0), 
                                    _mm_shuffle_ps(temp0_429, temp0_430, 0x32), 0x82)
                                float temp0_434[0x4] = _mm_shuffle_ps(temp0_429, temp0_430, 0x10)
                                float temp0_435[0x4] = _mm_shuffle_ps(temp0_426, temp0_430, 0x31)
                                float temp0_436[0x4] = _mm_shuffle_ps(temp0_433, temp0_433, 0x55)
                                float temp0_437[0x4] = _mm_shuffle_ps(temp0_434, temp0_435, 0x88)
                                float temp0_438[0x4] = _mm_mul_ps(temp0_436, temp0_408)
                                float temp0_439[0x4] = _mm_shuffle_ps(temp0_426, temp0_429, 0x12)
                                zmm5_4 = *(rdi_1 + 0x1d0)
                                float temp0_440[0x4] = _mm_shuffle_ps(temp0_439, temp0_430, 0xe8)
                                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_433, temp0_433, 0xaa), 
                                    temp0_410)
                                zmm10[0].q = zmm5_4 u>> 0x40
                                float temp0_443[0x4] = _mm_shuffle_ps(zmm5_4, zmm10, 0xc4)
                                float temp0_444[0x4] = _mm_shuffle_ps(temp0_433, temp0_433, 0)
                                float temp0_446[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_433, temp0_433, 0xff), temp0_412)
                                float temp0_448[0x4] =
                                    _mm_add_ps(temp0_438, _mm_mul_ps(temp0_444, zmm9))
                                float temp0_450[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_437, temp0_437, 0), zmm9)
                                float temp0_451[0x4] = _mm_add_ps(temp0_448, zmm1)
                                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_437, temp0_437, 0xaa), 
                                    temp0_410)
                                float temp0_454[0x4] = _mm_add_ps(temp0_451, temp0_446)
                                float temp0_456[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_437, temp0_437, 0x55), temp0_408)
                                float temp0_457[0x4] = _mm_shuffle_ps(temp0_437, temp0_437, 0xff)
                                var_258 = temp0_454
                                float temp0_458[0x4] = _mm_shuffle_ps(temp0_440, temp0_440, 0x55)
                                float temp0_459[0x4] = _mm_add_ps(temp0_456, temp0_450)
                                float temp0_460[0x4] = _mm_mul_ps(temp0_458, temp0_408)
                                float temp0_461[0x4] = _mm_mul_ps(temp0_457, temp0_412)
                                float temp0_462[0x4] = _mm_shuffle_ps(temp0_440, temp0_440, 0)
                                float temp0_463[0x4] = _mm_add_ps(temp0_459, zmm1)
                                float temp0_464[0x4] = _mm_mul_ps(temp0_462, zmm9)
                                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_440, temp0_440, 0xaa), 
                                    temp0_410)
                                float temp0_467[0x4] = _mm_add_ps(temp0_463, temp0_461)
                                float temp0_468[0x4] = _mm_shuffle_ps(temp0_440, temp0_440, 0xff)
                                float temp0_469[0x4] = _mm_add_ps(temp0_460, temp0_464)
                                float temp0_470[0x4] = _mm_mul_ps(temp0_468, temp0_412)
                                float temp0_471[0x4] = _mm_shuffle_ps(temp0_443, temp0_443, 0)
                                int96_t var_248_2 = temp0_467[0].12
                                float temp0_472[0x4] = _mm_shuffle_ps(temp0_443, temp0_443, 0x55)
                                float temp0_473[0x4] = _mm_add_ps(temp0_469, zmm1)
                                float temp0_474[0x4] = _mm_mul_ps(temp0_472, temp0_408)
                                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_443, temp0_443, 0xaa), 
                                    temp0_410)
                                float temp0_477[0x4] = _mm_mul_ps(temp0_471, zmm9)
                                float temp0_478[0x4] = _mm_add_ps(temp0_473, temp0_470)
                                float temp0_480[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_443, temp0_443, 0xff), temp0_412)
                                float temp0_481[0x4] = _mm_add_ps(temp0_474, temp0_477)
                                int96_t var_238_2 = temp0_478[0].12
                                int96_t var_228_2 =
                                    _mm_add_ps(_mm_add_ps(temp0_481, zmm1), temp0_480)[0].12
                                zmm10, zmm12, zmm13, zmm14, zmm15 =
                                    sub_1407740e0(&var_258, 0x322bcc77)
                                float zmm2_4[0x4] = var_258[0]
                                float zmm1_4 = var_258[1]
                                uint32_t zmm4_6[0x4] = _mm_and_ps(data_143f482c0 ^ zmm10, 
                                    _mm_cmpeq_ps(zmm14, zmm13, 2)) ^ data_143f482c0
                                zmm2_4[0] = zmm2_4[0] f* zmm4_6[0]
                                float zmm0_8 = var_258[2] f* zmm4_6[0]
                                zmm1_4 = zmm1_4 f* zmm4_6[0]
                                var_258[0] = zmm2_4[0]
                                float temp0_486[0x4] = _mm_shuffle_ps(zmm4_6, zmm4_6, 0x55)
                                var_258[2] = zmm0_8
                                zmm0_8 = var_248_2:8.d * temp0_486[0]
                                var_258[1] = zmm1_4
                                zmm1_4 = var_248_2:4.d * temp0_486[0]
                                float zmm3_4 = var_248_2.d * temp0_486[0]
                                zmm2_4 = var_238_2.d
                                zmm4_6 = _mm_shuffle_ps(zmm4_6, zmm4_6, 0xaa)
                                var_248_2:8.d = zmm0_8
                                var_248_2:4.d = zmm1_4
                                zmm0_8 = var_238_2:8.d f* zmm4_6[0]
                                zmm2_4[0] = zmm2_4[0] f* zmm4_6[0]
                                zmm1_4 = var_238_2:4.d f* zmm4_6[0]
                                var_238_2:8.d = zmm0_8
                                var_248_2.d = zmm3_4
                                var_238_2.d = zmm2_4[0]
                                var_238_2:4.d = zmm1_4
                                uint32_t var_f8[0x4]
                                sub_14077e4a0(&var_f8, &var_258)
                                zmm5_4 = var_f8
                                zmm13 = data_143f482b0
                                zmm8 = data_143f48290
                                zmm9 = data_143f48280
                                zmm10 = data_143f48270
                                zmm1 = _mm_mul_ps(zmm5_4, zmm5_4)
                                zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                                float temp0_492[0x4] =
                                    _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                                zmm1 = _mm_rsqrt_ps(temp0_492)
                                float temp0_494[0x4] = _mm_mul_ps(temp0_492, zmm13)
                                float temp0_499[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm13, 
                                            _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), temp0_494)), 
                                        zmm1), 
                                    zmm1)
                                float temp0_502[0x4] = _mm_sub_ps(zmm13, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_499, temp0_499), temp0_494))
                                float temp0_504[0x4] = _mm_cmpeq_ps(
                                    _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_492, 2)
                                float temp0_506[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_502, temp0_499), temp0_499)
                                float temp0_507[0x4] = _mm_unpacklo_ps(var_228_2:4.d, 0)
                                zmm1 = data_143f482d0
                                var_128_1 = zmm1
                                float temp0_508[0x4] = _mm_mul_ps(temp0_506, zmm5_4)
                                zmm5_4 = var_118_1
                                zmm13 = _mm_and_ps(temp0_508 ^ data_143f482a0, temp0_504)
                                    ^ data_143f482a0
                                zmm14 = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_228_2.d, var_228_2:8.d[0].q), 
                                    temp0_507[0].q)
                                var_f8 = zmm13
                            
                            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm5_4, var_138), zmm1, 1))
                                    == 0)
                                float temp0_680[0x4] = _mm_mul_ps(zmm14, var_138)
                                float temp0_681[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x1b)
                                zmm1 = _mm_shuffle_ps(zmm13, zmm13, 0x4e)
                                float temp0_684[0x4] =
                                    _mm_mul_ps(temp0_681, _mm_shuffle_ps(zmm12, zmm12, 0))
                                float temp0_685[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                                float temp0_686[0x4] = _mm_shuffle_ps(temp0_680, temp0_680, 0xd2)
                                float temp0_687[0x4] = _mm_mul_ps(temp0_685, zmm13)
                                float temp0_688[0x4] = _mm_mul_ps(temp0_684, zmm8)
                                float temp0_689[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xb1)
                                float temp0_690[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
                                float temp0_691[0x4] = _mm_add_ps(temp0_688, temp0_687)
                                zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm12, zmm12, 0x55))
                                float temp0_695[0x4] =
                                    _mm_mul_ps(temp0_689, _mm_shuffle_ps(zmm12, zmm12, 0xaa))
                                zmm1 = _mm_mul_ps(zmm1, zmm9)
                                float temp0_698[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_680, temp0_680, 0xc9), temp0_690)
                                float temp0_701[0x4] = _mm_add_ps(_mm_add_ps(temp0_691, zmm1), 
                                    _mm_mul_ps(temp0_695, zmm10))
                                float temp0_702[0x4] = _mm_mul_ps(var_118_1, var_138)
                                var_1e8 = temp0_701
                                float temp0_703[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                                float var_1c8_5[0x4] = temp0_702
                                float temp0_705[0x4] =
                                    _mm_sub_ps(_mm_mul_ps(temp0_686, temp0_703), temp0_698)
                                float temp0_706[0x4] = _mm_add_ps(temp0_705, temp0_705)
                                float temp0_707[0x4] = _mm_mul_ps(temp0_685, temp0_706)
                                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_706, temp0_706, 0xd2), 
                                    temp0_703)
                                float temp0_710[0x4] = _mm_shuffle_ps(temp0_706, temp0_706, 0xc9)
                                float temp0_711[0x4] = _mm_add_ps(temp0_707, temp0_680)
                                uint32_t var_1d8_5[0x4] = __addps_xmmps_memps(
                                    _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_710, temp0_690)), 
                                        temp0_711), 
                                    var_188)
                            else
                                zmm4_5 = var_178
                                zmm10 = data_143f48200
                                zmm1 = _mm_add_ps(zmm4_5, zmm4_5)
                                _mm_mul_ps(zmm5_4, var_138)
                                float temp0_555[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(zmm4_5, zmm4_5, 4), 
                                    _mm_shuffle_ps(zmm1, zmm1, 0x29))
                                float temp0_556[0x4] = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xff)
                                float temp0_557[0x4] = _mm_mul_ps(zmm1, zmm4_5)
                                float temp0_559[0x4] =
                                    _mm_mul_ps(temp0_556, _mm_shuffle_ps(zmm1, zmm1, 0x12))
                                float temp0_560[0x4] = _mm_shuffle_ps(var_138, var_138, 0xc9)
                                float temp0_561[0x4] = _mm_add_ps(temp0_559, temp0_555)
                                float temp0_562[0x4] = _mm_sub_ps(temp0_555, temp0_559)
                                float temp0_565[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_557, temp0_557, 0x1a), 
                                    _mm_shuffle_ps(temp0_557, temp0_557, 1))
                                float temp0_566[0x4] = _mm_mul_ps(temp0_561, var_138)
                                float temp0_567[0x4] = _mm_mul_ps(temp0_560, temp0_562)
                                uint32_t temp0_570[0x4] = __andps_xmmxud_memxud(
                                    _mm_mul_ps(_mm_sub_ps(zmm10, temp0_565), var_138), 
                                    data_143f481e0)
                                float temp0_571[0x4] = _mm_shuffle_ps(temp0_567, temp0_570, 0x32)
                                zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_566, temp0_570, 0), 
                                    temp0_571, 0x82)
                                float temp0_574[0x4] = _mm_shuffle_ps(temp0_566, temp0_570, 0x31)
                                float temp0_576[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_567, temp0_570, 0x10), temp0_574, 0x88)
                                float temp0_578[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_566, temp0_567, 0x12), temp0_570, 0xe8)
                                zmm1 = var_188
                                zmm10[0].q = zmm1 u>> 0x40
                                float temp0_579[0x4] = _mm_shuffle_ps(zmm1, zmm10, 0xc4)
                                zmm1 = _mm_add_ps(zmm13, zmm13)
                                float temp0_581[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xc9)
                                float temp0_582[0x4] = _mm_shuffle_ps(zmm13, zmm13, 4)
                                float temp0_583[0x4] = _mm_mul_ps(zmm1, zmm13)
                                float temp0_585[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0x29), temp0_582)
                                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
                                float temp0_589[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_583, temp0_583, 0x1a), 
                                    _mm_shuffle_ps(temp0_583, temp0_583, 1))
                                float temp0_591[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xff), zmm1)
                                zmm1 = _mm_sub_ps(zmm10, temp0_589)
                                float temp0_593[0x4] = _mm_add_ps(temp0_591, temp0_585)
                                float temp0_594[0x4] = _mm_sub_ps(temp0_585, temp0_591)
                                zmm1 = _mm_mul_ps(zmm1, zmm5_4)
                                float temp0_596[0x4] = _mm_mul_ps(temp0_593, zmm5_4)
                                float temp0_597[0x4] = _mm_mul_ps(temp0_581, temp0_594)
                                uint32_t temp0_598[0x4] =
                                    __andps_xmmxud_memxud(zmm1, data_143f481e0)
                                float temp0_601[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_596, temp0_598, 0), 
                                    _mm_shuffle_ps(temp0_597, temp0_598, 0x32), 0x82)
                                float temp0_602[0x4] = _mm_shuffle_ps(temp0_601, temp0_601, 0x55)
                                float temp0_603[0x4] = _mm_shuffle_ps(temp0_596, temp0_598, 0x31)
                                float temp0_605[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_597, temp0_598, 0x10), temp0_603, 0x88)
                                float temp0_606[0x4] = _mm_mul_ps(temp0_602, temp0_576)
                                zmm10[0].q = zmm14 u>> 0x40
                                float temp0_607[0x4] = _mm_shuffle_ps(zmm14, zmm10, 0xc4)
                                float temp0_609[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_601, temp0_601, 0), zmm9)
                                float temp0_611[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_596, temp0_597, 0x12), temp0_598, 0xe8)
                                zmm1 = _mm_shuffle_ps(temp0_601, temp0_601, 0xaa)
                                float temp0_613[0x4] = _mm_add_ps(temp0_606, temp0_609)
                                float temp0_615[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_601, temp0_601, 0xff), temp0_579)
                                zmm1 = _mm_mul_ps(zmm1, temp0_578)
                                float temp0_618[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_605, temp0_605, 0), zmm9)
                                float temp0_619[0x4] = _mm_add_ps(temp0_613, zmm1)
                                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_605, temp0_605, 0xaa), 
                                    temp0_578)
                                float temp0_622[0x4] = _mm_add_ps(temp0_619, temp0_615)
                                float temp0_624[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_605, temp0_605, 0x55), temp0_576)
                                float temp0_625[0x4] = _mm_shuffle_ps(temp0_605, temp0_605, 0xff)
                                var_258 = temp0_622
                                float temp0_626[0x4] = _mm_shuffle_ps(temp0_611, temp0_611, 0x55)
                                float temp0_627[0x4] = _mm_add_ps(temp0_624, temp0_618)
                                float temp0_628[0x4] = _mm_mul_ps(temp0_626, temp0_576)
                                float temp0_629[0x4] = _mm_mul_ps(temp0_625, temp0_579)
                                float temp0_630[0x4] = _mm_shuffle_ps(temp0_611, temp0_611, 0)
                                float temp0_631[0x4] = _mm_add_ps(temp0_627, zmm1)
                                float temp0_632[0x4] = _mm_mul_ps(temp0_630, zmm9)
                                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_611, temp0_611, 0xaa), 
                                    temp0_578)
                                float temp0_635[0x4] = _mm_add_ps(temp0_631, temp0_629)
                                float temp0_636[0x4] = _mm_shuffle_ps(temp0_611, temp0_611, 0xff)
                                float temp0_637[0x4] = _mm_add_ps(temp0_628, temp0_632)
                                float temp0_638[0x4] = _mm_mul_ps(temp0_636, temp0_579)
                                float temp0_639[0x4] = _mm_shuffle_ps(temp0_607, temp0_607, 0)
                                int96_t var_248_3 = temp0_635[0].12
                                float temp0_640[0x4] = _mm_shuffle_ps(temp0_607, temp0_607, 0x55)
                                float temp0_641[0x4] = _mm_add_ps(temp0_637, zmm1)
                                float temp0_642[0x4] = _mm_mul_ps(temp0_640, temp0_576)
                                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_607, temp0_607, 0xaa), 
                                    temp0_578)
                                float temp0_645[0x4] = _mm_mul_ps(temp0_639, zmm9)
                                float temp0_646[0x4] = _mm_add_ps(temp0_641, temp0_638)
                                float temp0_648[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_607, temp0_607, 0xff), temp0_579)
                                float temp0_649[0x4] = _mm_add_ps(temp0_642, temp0_645)
                                int96_t var_238_3 = temp0_646[0].12
                                int96_t var_228_3 =
                                    _mm_add_ps(_mm_add_ps(temp0_649, zmm1), temp0_648)[0].12
                                int128_t zmm10_1
                                uint32_t zmm12_1[0x4]
                                zmm10_1, zmm12_1, zmm15 = sub_1407740e0(&var_258, 0x322bcc77)
                                float zmm2_5[0x4] = var_258[0]
                                float zmm4_7[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_128_1, zmm12_1, 2), 
                                    data_143f482c0 ^ zmm10_1) ^ data_143f482c0
                                zmm2_5[0] = zmm2_5[0] * zmm4_7[0]
                                uint32_t zmm0_9[0x4] = var_258[2]
                                float zmm1_5 = var_258[1] * zmm4_7[0]
                                zmm0_9[0] = zmm0_9[0] f* zmm4_7[0]
                                var_258[0] = zmm2_5[0]
                                float temp0_654[0x4] = _mm_shuffle_ps(zmm4_7, zmm4_7, 0x55)
                                var_258[1] = zmm1_5
                                zmm1_5 = var_248_3:4.d * temp0_654[0]
                                var_258[2] = zmm0_9[0]
                                zmm0_9 = var_248_3:8.d
                                zmm0_9[0] = zmm0_9[0] f* temp0_654[0]
                                float zmm3_5 = var_248_3.d * temp0_654[0]
                                zmm2_5 = var_238_3.d
                                float temp0_655[0x4] = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xaa)
                                var_248_3:4.d = zmm1_5
                                var_248_3:8.d = zmm0_9[0]
                                zmm0_9 = var_238_3:8.d
                                zmm1_5 = var_238_3:4.d * temp0_655[0]
                                zmm0_9[0] = zmm0_9[0] f* temp0_655[0]
                                zmm2_5[0] = zmm2_5[0] * temp0_655[0]
                                var_238_3:4.d = zmm1_5
                                var_238_3:8.d = zmm0_9[0]
                                var_248_3.d = zmm3_5
                                var_238_3.d = zmm2_5[0]
                                sub_14077e4a0(&var_168, &var_258)
                                uint32_t zmm5_5[0x4] = var_168
                                float zmm6_3[0x4] = data_143f482b0
                                uint32_t zmm1_6[0x4] = _mm_mul_ps(zmm5_5, zmm5_5)
                                uint32_t var_1c8_4[0x4] = zmm12_1
                                zmm1_6 = _mm_add_ps(zmm1_6, _mm_shuffle_ps(zmm1_6, zmm1_6, 0x4e))
                                uint32_t zmm4_8[0x4] =
                                    _mm_add_ps(_mm_shuffle_ps(zmm1_6, zmm1_6, 0x39), zmm1_6)
                                zmm1_6 = _mm_rsqrt_ps(zmm4_8)
                                uint32_t zmm3_6[0x4] = _mm_mul_ps(zmm4_8, zmm6_3)
                                float temp0_667[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm6_3, 
                                            _mm_mul_ps(_mm_mul_ps(zmm1_6, zmm1_6), zmm3_6)), 
                                        zmm1_6), 
                                    zmm1_6)
                                float temp0_670[0x4] = _mm_sub_ps(zmm6_3, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_667, temp0_667), zmm3_6))
                                uint32_t zmm0_10[0x4] = _mm_cmpeq_ps(
                                    _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_8, 2)
                                float temp0_674[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_670, temp0_667), temp0_667)
                                float temp0_675[0x4] = _mm_unpacklo_ps(var_228_3:4.d, 0)
                                zmm6_3 = _mm_and_ps(_mm_mul_ps(temp0_674, zmm5_5) ^ data_143f482a0, 
                                    zmm0_10) ^ data_143f482a0
                                uint32_t var_1d8_4[0x4] = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_228_3.d, var_228_3:8.d[0].q), 
                                    temp0_675[0].q)
                                var_168 = zmm6_3
                                var_1e8 = zmm6_3
                            
                            if (var_268_1 == 0)
                                sub_141dc54d0(arg2, &var_210, 1)
                                var_268_1 = 1
                            
                            float (* r9_2)[0x4] = &var_1e8
                            
                            if (arg5 == 0)
                                rax_8, zmm12 = sub_1420df190(arg1, arg2, rsi_2, r9_2, &var_210)
                            else
                                rax_8, zmm12 =
                                    sub_1420df520(arg1, arg2, rsi_2, r9_2, arg5, &var_210)
                            
                            if (rax_8 == 0)
                                zmm6_1 = zx.o(var_218_2)
                            else
                                if (arg5 == 0)
                                    uint64_t rcx_24 = var_198
                                    
                                    if (rcx_24 != 0)
                                        sub_140a74f90(rcx_24)
                                    
                                    break
                                
                                int32_t rax_21 = arg5[1].d
                                int64_t var_158 = *arg5
                                int64_t var_148 = var_218_2
                                int32_t var_150_1 = rax_21
                                int32_t var_140_1 = r13_1
                                uint64_t var_e8[0x2]
                                uint64_t* rax_22
                                rax_22, zmm12, zmm15 = sub_1420dec60(&var_e8, &var_148, &var_158)
                                arg_10 = 1
                                zmm6_1 = zx.o(*rax_22)
                                r13_1 = rax_22[1].d
                                var_218_2 = zmm6_1.q
                    
                    r15_2 += 8
                    
                    if (r15_2 == rax_14)
                        r15_2 = var_198
                        goto label_1420e324e
                    
                    zmm7 = var_1a8
                    zmm11 = var_108
                
                goto label_1420e31bc
            
        label_1420e324e:
            
            if (r15_2 != 0)
                sub_140a74f90(r15_2)
            
            uint64_t rcx_27 = var_210
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            r12 = zx.q(arg_10)
        else if ((((*(*r15_1 + 0x4c8))(r15_1) - 1) & 0xfffffffd) != 0)
            r13_1 = var_1f8
            zmm6_1 = zx.o(var_200)
        else
            float zmm5_2[0x4] = *(r15_1 + 0x1e0)
            zmm9 = data_143f48290
            zmm10 = data_143f48280
            float zmm0_1[0x4]
            
            if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm5_2, zmm7), data_143f482d0, 
                    1)) == 0)
                zmm2 = *(r15_1 + 0x1c0)
                zmm3 = *(r15_1 + 0x1d0)
                float temp0_176[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                float temp0_179[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_176)
                float temp0_180[0x4] = _mm_mul_ps(zmm3, zmm7)
                float temp0_181[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xff)
                float temp0_182[0x4] = _mm_mul_ps(temp0_179, zmm9)
                float temp0_183[0x4] = _mm_mul_ps(temp0_181, zmm2)
                float temp0_184[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                zmm5_2 = _mm_mul_ps(zmm5_2, zmm7)
                float temp0_186[0x4] = _mm_add_ps(temp0_182, temp0_183)
                zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm15, zmm15, 0x55))
                float temp0_190[0x4] = _mm_mul_ps(temp0_184, _mm_shuffle_ps(zmm15, zmm15, 0xaa))
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                float temp0_192[0x4] = _mm_shuffle_ps(temp0_180, temp0_180, 0xc9)
                float temp0_193[0x4] = __mulps_xmmps_memps(temp0_190, data_143f48270)
                float temp0_194[0x4] = _mm_add_ps(temp0_186, zmm1)
                zmm1 = _mm_shuffle_ps(temp0_180, temp0_180, 0xd2)
                zmm6_1 = _mm_add_ps(temp0_194, temp0_193)
                float temp0_197[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xd2)
                float temp0_198[0x4] = _mm_mul_ps(temp0_192, temp0_197)
                float temp0_199[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                zmm1 = _mm_sub_ps(_mm_mul_ps(zmm1, temp0_199), temp0_198)
                zmm1 = _mm_add_ps(zmm1, zmm1)
                float temp0_203[0x4] = _mm_mul_ps(temp0_181, zmm1)
                float temp0_205[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), temp0_199)
                float temp0_206[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                float temp0_207[0x4] = _mm_add_ps(temp0_203, temp0_180)
                zmm14 = _mm_add_ps(
                    _mm_add_ps(_mm_sub_ps(temp0_205, _mm_mul_ps(temp0_206, temp0_197)), temp0_207), 
                    zmm11)
            else
                zmm9 = data_143f48200
                zmm1 = _mm_add_ps(zmm15, zmm15)
                float temp0_48[0x4] = _mm_shuffle_ps(zmm15, zmm15, 4)
                float temp0_49[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                float temp0_50[0x4] = _mm_mul_ps(zmm5_2, zmm7)
                float temp0_51[0x4] = _mm_mul_ps(zmm15, zmm1)
                float temp0_53[0x4] = _mm_mul_ps(temp0_48, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
                float temp0_57[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0x1a), 
                    _mm_shuffle_ps(temp0_51, temp0_51, 1))
                float temp0_58[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xff)
                zmm3 = *(r15_1 + 0x1c0)
                float temp0_59[0x4] = _mm_mul_ps(temp0_58, zmm1)
                var_168 = temp0_50
                zmm1 = _mm_sub_ps(zmm9, temp0_57)
                float temp0_61[0x4] = _mm_add_ps(temp0_59, temp0_53)
                float temp0_62[0x4] = _mm_sub_ps(temp0_53, temp0_59)
                zmm1 = _mm_mul_ps(zmm1, zmm7)
                float temp0_64[0x4] = _mm_mul_ps(temp0_61, zmm7)
                float temp0_65[0x4] = _mm_mul_ps(temp0_49, temp0_62)
                uint32_t temp0_66[0x4] = __andps_xmmxud_memxud(zmm1, data_143f481e0)
                float temp0_67[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                float temp0_70[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_64, temp0_66, 0), 
                    _mm_shuffle_ps(temp0_65, temp0_66, 0x32), 0x82)
                float temp0_71[0x4] = _mm_shuffle_ps(temp0_64, temp0_66, 0x31)
                float temp0_73[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_65, temp0_66, 0x10), temp0_71, 0x88)
                zmm0_1 = zmm9
                float temp0_75[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_64, temp0_65, 0x12), temp0_66, 0xe8)
                zmm1 = _mm_add_ps(zmm3, zmm3)
                zmm0_1[0].q = zmm11 u>> 0x40
                float temp0_77[0x4] = _mm_shuffle_ps(zmm11, zmm0_1, 0xc4)
                float temp0_78[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                float temp0_79[0x4] = _mm_mul_ps(zmm3, zmm1)
                float temp0_81[0x4] = _mm_mul_ps(temp0_67, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                float temp0_83[0x4] = _mm_mul_ps(temp0_78, _mm_shuffle_ps(zmm1, zmm1, 0x12))
                float temp0_86[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0x1a), 
                    _mm_shuffle_ps(temp0_79, temp0_79, 1))
                float temp0_87[0x4] = _mm_add_ps(temp0_83, temp0_81)
                float temp0_88[0x4] = _mm_sub_ps(temp0_81, temp0_83)
                zmm1 = _mm_sub_ps(zmm9, temp0_86)
                float temp0_90[0x4] = _mm_mul_ps(temp0_87, zmm5_2)
                float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9), temp0_88)
                uint32_t temp0_94[0x4] =
                    __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm5_2), data_143f481e0)
                float temp0_97[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_90, temp0_94, 0), 
                    _mm_shuffle_ps(temp0_92, temp0_94, 0x32), 0x82)
                float temp0_98[0x4] = _mm_shuffle_ps(temp0_92, temp0_94, 0x10)
                float temp0_99[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0x55)
                float temp0_101[0x4] =
                    _mm_shuffle_ps(temp0_98, _mm_shuffle_ps(temp0_90, temp0_94, 0x31), 0x88)
                zmm0_1 = zmm9
                float temp0_102[0x4] = _mm_mul_ps(temp0_99, temp0_73)
                float temp0_103[0x4] = _mm_shuffle_ps(temp0_90, temp0_92, 0x12)
                zmm5_2 = *(r15_1 + 0x1d0)
                float temp0_104[0x4] = _mm_shuffle_ps(temp0_103, temp0_94, 0xe8)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_97, temp0_97, 0xaa), temp0_75)
                zmm0_1[0].q = zmm5_2 u>> 0x40
                float temp0_107[0x4] = _mm_shuffle_ps(zmm5_2, zmm0_1, 0xc4)
                float temp0_108[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0)
                float temp0_110[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_97, temp0_97, 0xff), temp0_77)
                float temp0_112[0x4] = _mm_add_ps(temp0_102, _mm_mul_ps(temp0_108, temp0_70))
                float temp0_114[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0), temp0_70)
                float temp0_115[0x4] = _mm_add_ps(temp0_112, zmm1)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0xaa), temp0_75)
                float temp0_118[0x4] = _mm_add_ps(temp0_115, temp0_110)
                float temp0_120[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0x55), temp0_73)
                float temp0_121[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xff)
                var_1e8 = temp0_118
                float temp0_122[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0x55)
                float temp0_123[0x4] = _mm_add_ps(temp0_120, temp0_114)
                float temp0_124[0x4] = _mm_mul_ps(temp0_122, temp0_73)
                float temp0_125[0x4] = _mm_mul_ps(temp0_121, temp0_77)
                float temp0_126[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0)
                float temp0_127[0x4] = _mm_add_ps(temp0_123, zmm1)
                float temp0_128[0x4] = _mm_mul_ps(temp0_126, temp0_70)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xaa), temp0_75)
                float temp0_131[0x4] = _mm_add_ps(temp0_127, temp0_125)
                float temp0_132[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xff)
                float temp0_133[0x4] = _mm_add_ps(temp0_124, temp0_128)
                float temp0_134[0x4] = _mm_mul_ps(temp0_132, temp0_77)
                float temp0_135[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0)
                int96_t var_1d8_1 = temp0_131[0].12
                float temp0_136[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0x55)
                float temp0_137[0x4] = _mm_add_ps(temp0_133, zmm1)
                float temp0_138[0x4] = _mm_mul_ps(temp0_136, temp0_73)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_107, temp0_107, 0xaa), temp0_75)
                float temp0_141[0x4] = _mm_mul_ps(temp0_135, temp0_70)
                float temp0_142[0x4] = _mm_add_ps(temp0_137, temp0_134)
                float temp0_144[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_107, temp0_107, 0xff), temp0_77)
                float temp0_145[0x4] = _mm_add_ps(temp0_138, temp0_141)
                int96_t var_1c8_1 = temp0_142[0].12
                int96_t var_1b8_1 = _mm_add_ps(_mm_add_ps(temp0_145, zmm1), temp0_144)[0].12
                zmm9, zmm12, zmm13, zmm14 = sub_1407740e0(&var_1e8, 0x322bcc77)
                float zmm2_1[0x4] = var_1e8[0]
                float zmm1_1 = var_1e8[1]
                float zmm4_3[0x4] =
                    _mm_and_ps(_mm_cmpeq_ps(data_143f482d0, zmm14, 2), data_143f482c0 ^ zmm9)
                    ^ data_143f482c0
                zmm2_1[0] = zmm2_1[0] * zmm4_3[0]
                uint32_t zmm0_2[0x4] = var_1e8[2]
                zmm0_2[0] = zmm0_2[0] f* zmm4_3[0]
                zmm1_1 = zmm1_1 * zmm4_3[0]
                var_1e8[0] = zmm2_1[0]
                float temp0_150[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                var_1e8[2] = zmm0_2[0]
                zmm0_2 = var_1d8_1:8.d
                zmm0_2[0] = zmm0_2[0] f* temp0_150[0]
                var_1e8[1] = zmm1_1
                zmm1_1 = var_1d8_1:4.d * temp0_150[0]
                float zmm3_1 = var_1d8_1.d * temp0_150[0]
                zmm2_1 = var_1c8_1.d
                float temp0_151[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                var_1d8_1:8.d = zmm0_2[0]
                zmm0_2 = var_1c8_1:8.d
                var_1d8_1:4.d = zmm1_1
                zmm0_2[0] = zmm0_2[0] f* temp0_151[0]
                zmm2_1[0] = zmm2_1[0] * temp0_151[0]
                zmm1_1 = var_1c8_1:4.d * temp0_151[0]
                var_1c8_1:8.d = zmm0_2[0]
                var_1d8_1.d = zmm3_1
                var_1c8_1.d = zmm2_1[0]
                var_1c8_1:4.d = zmm1_1
                sub_14077e4a0(&var_1a8, &var_1e8)
                zmm5_2 = var_1a8
                zmm6_1 = data_143f482b0
                zmm8 = var_188
                zmm9 = data_143f48290
                zmm10 = data_143f48280
                zmm1 = _mm_mul_ps(zmm5_2, zmm5_2)
                arg_10.d = 0x322bcc77
                zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                float temp0_156[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                zmm1 = _mm_rsqrt_ps(temp0_156)
                float temp0_158[0x4] = _mm_mul_ps(temp0_156, zmm6_1)
                float temp0_163[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), temp0_158)), 
                        zmm1), 
                    zmm1)
                float temp0_166[0x4] =
                    _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_163, temp0_163), temp0_158))
                float temp0_168[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_156, 2)
                float temp0_170[0x4] = _mm_add_ps(_mm_mul_ps(temp0_166, temp0_163), temp0_163)
                float temp0_171[0x4] = _mm_unpacklo_ps(var_1b8_1:4.d, 0)
                float temp0_172[0x4] = _mm_mul_ps(temp0_170, zmm5_2)
                zmm5_2 = var_168
                zmm6_1 = _mm_and_ps(temp0_172 ^ data_143f482a0, temp0_168) ^ data_143f482a0
                zmm14 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_1b8_1.d, var_1b8_1:8.d[0].q), 
                    temp0_171[0].q)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm5_2, zmm13), data_143f482d0, 1)) == 0)
                float temp0_344[0x4] = _mm_mul_ps(zmm14, zmm13)
                float temp0_345[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x1b)
                zmm1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x4e)
                float temp0_348[0x4] = _mm_mul_ps(temp0_345, _mm_shuffle_ps(zmm12, zmm12, 0))
                float temp0_349[0x4] = _mm_shuffle_ps(temp0_344, temp0_344, 0xd2)
                float temp0_350[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                float temp0_351[0x4] = _mm_mul_ps(zmm5_2, zmm13)
                float temp0_352[0x4] = _mm_mul_ps(temp0_350, zmm6_1)
                float temp0_353[0x4] = _mm_mul_ps(temp0_348, zmm9)
                float temp0_354[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xb1)
                float var_1c8_3[0x4] = temp0_351
                float temp0_355[0x4] = _mm_add_ps(temp0_353, temp0_352)
                zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm12, zmm12, 0x55))
                float temp0_359[0x4] = _mm_mul_ps(temp0_354, _mm_shuffle_ps(zmm12, zmm12, 0xaa))
                zmm1 = _mm_mul_ps(zmm1, zmm10)
                float temp0_361[0x4] = _mm_shuffle_ps(temp0_344, temp0_344, 0xc9)
                float temp0_362[0x4] = __mulps_xmmps_memps(temp0_359, data_143f48270)
                var_1e8 = _mm_add_ps(_mm_add_ps(temp0_355, zmm1), temp0_362)
                float temp0_365[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
                float temp0_366[0x4] = _mm_mul_ps(temp0_361, temp0_365)
                zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                float temp0_369[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_349, zmm12), temp0_366)
                float temp0_370[0x4] = _mm_add_ps(temp0_369, temp0_369)
                zmm1 = _mm_shuffle_ps(temp0_370, temp0_370, 0xd2)
                float temp0_372[0x4] = _mm_shuffle_ps(temp0_370, temp0_370, 0xc9)
                zmm1 = _mm_mul_ps(zmm1, zmm12)
                float temp0_374[0x4] = _mm_mul_ps(temp0_372, temp0_365)
                float temp0_375[0x4] = _mm_mul_ps(temp0_370, temp0_350)
                uint32_t var_1d8_3[0x4] = _mm_add_ps(
                    _mm_add_ps(_mm_sub_ps(zmm1, temp0_374), _mm_add_ps(temp0_375, temp0_344)), zmm8)
            else
                zmm9 = data_143f48200
                zmm1 = _mm_add_ps(zmm12, zmm12)
                zmm3 = zmm12
                float temp0_216[0x4] = _mm_shuffle_ps(zmm12, zmm12, 4)
                float temp0_217[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                float temp0_219[0x4] = _mm_mul_ps(zmm3, zmm1)
                float temp0_221[0x4] = _mm_mul_ps(temp0_216, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
                float temp0_223[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0x1a)
                zmm12 = _mm_mul_ps(zmm12, zmm1)
                float temp0_226[0x4] =
                    _mm_add_ps(temp0_223, _mm_shuffle_ps(temp0_219, temp0_219, 1))
                _mm_mul_ps(zmm5_2, zmm13)
                float temp0_228[0x4] = _mm_add_ps(zmm12, temp0_221)
                float temp0_229[0x4] = _mm_sub_ps(temp0_221, zmm12)
                zmm12 = var_188
                zmm1 = _mm_sub_ps(zmm9, temp0_226)
                float temp0_231[0x4] = _mm_mul_ps(temp0_228, zmm13)
                float temp0_232[0x4] = _mm_mul_ps(temp0_217, temp0_229)
                zmm1 = _mm_mul_ps(zmm1, zmm13)
                float temp0_234[0x4] = _mm_add_ps(zmm6_1, zmm6_1)
                uint32_t temp0_235[0x4] = __andps_xmmxud_memxud(zmm1, data_143f481e0)
                float temp0_236[0x4] = _mm_shuffle_ps(temp0_232, temp0_235, 0x32)
                float temp0_238[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_231, temp0_235, 0), temp0_236, 0x82)
                float temp0_239[0x4] = _mm_shuffle_ps(temp0_231, temp0_235, 0x31)
                float temp0_241[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_232, temp0_235, 0x10), temp0_239, 0x88)
                zmm0_1 = zmm9
                float temp0_242[0x4] = _mm_mul_ps(zmm6_1, temp0_234)
                float temp0_244[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_231, temp0_232, 0x12), temp0_235, 0xe8)
                zmm1 = _mm_shuffle_ps(temp0_234, temp0_234, 0x29)
                float temp0_246[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                zmm0_1[0].q = zmm12 u>> 0x40
                zmm12 = _mm_shuffle_ps(zmm12, zmm0_1, 0xc4)
                zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm6_1, zmm6_1, 4))
                float temp0_250[0x4] = _mm_shuffle_ps(temp0_242, temp0_242, 0x1a)
                float temp0_251[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                float temp0_253[0x4] =
                    _mm_add_ps(temp0_250, _mm_shuffle_ps(temp0_242, temp0_242, 1))
                float temp0_255[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_234, temp0_234, 0x12), temp0_251)
                float temp0_256[0x4] = _mm_add_ps(temp0_255, zmm1)
                zmm1 = _mm_sub_ps(zmm1, temp0_255)
                float temp0_258[0x4] = _mm_mul_ps(temp0_256, zmm5_2)
                float temp0_259[0x4] = _mm_mul_ps(temp0_246, zmm1)
                uint32_t temp0_262[0x4] = __andps_xmmxud_memxud(
                    _mm_mul_ps(_mm_sub_ps(zmm9, temp0_253), zmm5_2), data_143f481e0)
                float temp0_263[0x4] = _mm_shuffle_ps(temp0_259, temp0_262, 0x32)
                float temp0_265[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_258, temp0_262, 0), temp0_263, 0x82)
                float temp0_268[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_259, temp0_262, 0x10), 
                    _mm_shuffle_ps(temp0_258, temp0_262, 0x31), 0x88)
                zmm0_1 = zmm9
                float temp0_270[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_265, temp0_265, 0x55), temp0_241)
                zmm0_1[0].q = zmm14 u>> 0x40
                float temp0_271[0x4] = _mm_shuffle_ps(zmm14, zmm0_1, 0xc4)
                float temp0_273[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_265, temp0_265, 0), temp0_238)
                float temp0_275[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_258, temp0_259, 0x12), temp0_262, 0xe8)
                zmm1 = _mm_shuffle_ps(temp0_265, temp0_265, 0xaa)
                float temp0_277[0x4] = _mm_add_ps(temp0_270, temp0_273)
                float temp0_279[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_265, temp0_265, 0xff), zmm12)
                float temp0_280[0x4] = _mm_shuffle_ps(temp0_268, temp0_268, 0)
                zmm1 = _mm_mul_ps(zmm1, temp0_244)
                float temp0_282[0x4] = _mm_mul_ps(temp0_280, temp0_238)
                float temp0_283[0x4] = _mm_add_ps(temp0_277, zmm1)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_268, temp0_268, 0xaa), temp0_244)
                float temp0_286[0x4] = _mm_add_ps(temp0_283, temp0_279)
                float temp0_288[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_268, temp0_268, 0x55), temp0_241)
                float temp0_289[0x4] = _mm_shuffle_ps(temp0_268, temp0_268, 0xff)
                var_258 = temp0_286
                float temp0_290[0x4] = _mm_shuffle_ps(temp0_275, temp0_275, 0x55)
                float temp0_291[0x4] = _mm_add_ps(temp0_288, temp0_282)
                float temp0_292[0x4] = _mm_mul_ps(temp0_290, temp0_241)
                float temp0_293[0x4] = _mm_mul_ps(temp0_289, zmm12)
                float temp0_294[0x4] = _mm_shuffle_ps(temp0_275, temp0_275, 0)
                float temp0_295[0x4] = _mm_add_ps(temp0_291, zmm1)
                float temp0_296[0x4] = _mm_mul_ps(temp0_294, temp0_238)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_275, temp0_275, 0xaa), temp0_244)
                float temp0_299[0x4] = _mm_add_ps(temp0_292, temp0_296)
                float temp0_300[0x4] = _mm_shuffle_ps(temp0_275, temp0_275, 0xff)
                float temp0_301[0x4] = _mm_add_ps(temp0_295, temp0_293)
                float temp0_302[0x4] = _mm_mul_ps(temp0_300, zmm12)
                float temp0_303[0x4] = _mm_shuffle_ps(temp0_271, temp0_271, 0)
                float temp0_304[0x4] = _mm_add_ps(temp0_299, zmm1)
                float temp0_305[0x4] = _mm_mul_ps(temp0_303, temp0_238)
                int96_t var_248_1 = temp0_301[0].12
                float temp0_306[0x4] = _mm_shuffle_ps(temp0_271, temp0_271, 0x55)
                float temp0_307[0x4] = _mm_add_ps(temp0_304, temp0_302)
                float temp0_308[0x4] = _mm_mul_ps(temp0_306, temp0_241)
                int96_t var_238_1 = temp0_307[0].12
                float temp0_309[0x4] = _mm_add_ps(temp0_308, temp0_305)
                float temp0_311[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_271, temp0_271, 0xaa), temp0_244)
                float temp0_313[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_271, temp0_271, 0xff), zmm12)
                int96_t var_228_1 = _mm_add_ps(_mm_add_ps(temp0_309, temp0_311), temp0_313)[0].12
                int128_t zmm9_1
                float zmm11_1[0x4]
                float zmm15_1[0x4]
                zmm9_1, zmm11_1, zmm15_1 = sub_1407740e0(&var_258, 0x322bcc77)
                float zmm2_2[0x4] = var_258[0]
                float zmm1_2 = var_258[1]
                zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm11_1, 2), data_143f482c0 ^ zmm9_1)
                uint32_t zmm0_3[0x4] = var_258[2]
                zmm15_1 ^= data_143f482c0
                zmm2_2[0] = zmm2_2[0] * zmm15_1[0]
                zmm1_2 = zmm1_2 * zmm15_1[0]
                zmm0_3[0] = zmm0_3[0] f* zmm15_1[0]
                var_258[0] = zmm2_2[0]
                var_258[1] = zmm1_2
                float temp0_318[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                zmm1_2 = var_248_1:4.d * temp0_318[0]
                var_258[2] = zmm0_3[0]
                zmm0_3 = var_248_1:8.d
                zmm0_3[0] = zmm0_3[0] f* temp0_318[0]
                float zmm3_2 = var_248_1.d * temp0_318[0]
                zmm2_2 = var_238_1.d
                var_248_1:4.d = zmm1_2
                var_248_1:8.d = zmm0_3[0]
                zmm0_3 = var_238_1:8.d
                float temp0_319[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                zmm1_2 = var_238_1:4.d * temp0_319[0]
                zmm0_3[0] = zmm0_3[0] f* temp0_319[0]
                zmm2_2[0] = zmm2_2[0] * temp0_319[0]
                var_238_1:4.d = zmm1_2
                var_238_1:8.d = zmm0_3[0]
                var_248_1.d = zmm3_2
                var_238_1.d = zmm2_2[0]
                sub_14077e4a0(&var_1a8, &var_258)
                float zmm6_2[0x4] = var_1a8
                float zmm5_3[0x4] = data_143f482b0
                float temp0_320[0x4] = _mm_mul_ps(zmm6_2, zmm6_2)
                arg_10.d = 0x322bcc77
                float var_1c8_2[0x4] = zmm11_1
                float temp0_322[0x4] =
                    _mm_add_ps(temp0_320, _mm_shuffle_ps(temp0_320, temp0_320, 0x4e))
                float temp0_324[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_322, temp0_322, 0x39), temp0_322)
                float temp0_325[0x4] = _mm_rsqrt_ps(temp0_324)
                float temp0_326[0x4] = _mm_mul_ps(temp0_324, zmm5_3)
                float temp0_331[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5_3, 
                            _mm_mul_ps(_mm_mul_ps(temp0_325, temp0_325), temp0_326)), 
                        temp0_325), 
                    temp0_325)
                float temp0_334[0x4] =
                    _mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(temp0_331, temp0_331), temp0_326))
                float temp0_336[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_324, 2)
                float temp0_338[0x4] = _mm_add_ps(_mm_mul_ps(temp0_334, temp0_331), temp0_331)
                float temp0_339[0x4] = _mm_unpacklo_ps(var_228_1:4.d, 0)
                zmm5_3 = _mm_and_ps(_mm_mul_ps(temp0_338, zmm6_2) ^ data_143f482a0, temp0_336)
                    ^ data_143f482a0
                float var_1d8_2[0x4] = _mm_unpacklo_ps(
                    _mm_unpacklo_ps(var_228_1.d, var_228_1:8.d[0].q), temp0_339[0].q)
                var_1e8 = zmm5_3
            
            r12 = 0
            var_210 = 0
            int64_t var_208_1 = 0
            sub_141dc54d0(arg2, &var_210, 1)
            int128_t* r9 = &var_1e8
            
            if (arg5 == 0)
                rax_8 = sub_1420df190(arg1, arg2, r15_1, r9, &var_210)
            else
                rax_8 = sub_1420df520(arg1, arg2, r15_1, r9, arg5, &var_210)
            
            int64_t zmm0_5
            
            if (rax_8 == 0)
                r13_1 = var_1f8
                zmm0_5 = var_200
            else
                if (arg5 == 0)
                    goto label_1420e31bc
                
                zmm0_5 = *arg5
                r12.b = 1
                r13_1 = arg5[1].d
            
            uint64_t rcx_9 = var_210
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            zmm6_1 = zx.o(zmm0_5)
        
        if (arg5 != 0)
            *arg5 = zmm6_1.q
            arg5[1].d = r13_1
        
        return r12.b

void* const* result
result.b = 0
return result
