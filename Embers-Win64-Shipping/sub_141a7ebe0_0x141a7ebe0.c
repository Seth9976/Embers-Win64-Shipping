// 函数: sub_141a7ebe0
// 地址: 0x141a7ebe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = &__return_addr

if (*(arg1 + 0x14) == 0)
    *arg3 = *arg2
    arg3[1] = arg2[1]
    arg3[2] = arg2[2]
else
    int64_t* rcx = *(arg1 + 8)
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    float zmm7[0x4]
    float var_38_1[0x4] = zmm7
    float zmm8[0x4]
    float var_48_1[0x4] = zmm8
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
    
    if (rcx == 0 || result.b == 0)
        int64_t* rcx_5 = *(arg1 + 8)
        
        if (rcx_5 != 0)
            result = (*(*rcx_5 + 0x18))(rcx_5)
            
            if (result.b != 0)
                arg6 = *(arg1 + 0x30)
                float zmm4_3[0x4] = *arg4
                float temp0_337[0x4] = _mm_shuffle_ps(arg6, arg6, 0xaa)
                float temp0_339[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(arg6, arg6, 0x55), 0)
                float temp0_340[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
                float temp0_342[0x4] =
                    _mm_unpacklo_ps(_mm_unpacklo_ps(arg6, temp0_337[0].q), temp0_339[0].q)
                float temp0_343[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xd2)
                float temp0_344[0x4] = _mm_shuffle_ps(temp0_342, temp0_342, 0xc9)
                float temp0_346[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_342, temp0_342, 0xd2), temp0_340)
                float temp0_347[0x4] = _mm_mul_ps(temp0_344, temp0_343)
                float temp0_348[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xff)
                float temp0_349[0x4] = _mm_sub_ps(temp0_346, temp0_347)
                float temp0_350[0x4] = _mm_add_ps(temp0_349, temp0_349)
                float temp0_351[0x4] = _mm_mul_ps(temp0_348, temp0_350)
                float temp0_352[0x4] = _mm_shuffle_ps(temp0_350, temp0_350, 0xc9)
                float temp0_354[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_350, temp0_350, 0xd2), temp0_340)
                float temp0_355[0x4] = _mm_mul_ps(temp0_352, temp0_343)
                float temp0_356[0x4] = _mm_add_ps(temp0_351, temp0_342)
                arg5 = zx.o(0)
                float temp0_358[0x4] = _mm_add_ps(_mm_sub_ps(temp0_354, temp0_355), temp0_356)
                zmm4_3 = arg2[1]
                float temp0_359[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                float temp0_360[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                zmm4_3[0] = zmm4_3[0] + temp0_358[0]
                float temp0_361[0x4] = _mm_shuffle_ps(temp0_358, temp0_358, 0x55)
                float temp0_362[0x4] = _mm_shuffle_ps(temp0_358, temp0_358, 0xaa)
                temp0_359[0] = temp0_359[0] + temp0_361[0]
                temp0_360[0] = temp0_360[0] + temp0_362[0]
                arg6 = _mm_unpacklo_ps(temp0_359, 0)
                arg7 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_3, temp0_360[0].q), arg6[0].q)
                arg3[1] = arg7
        
        int64_t* rcx_6 = *(arg1 + 8)
        
        if (rcx_6 != 0)
            result = (*(*rcx_6 + 0x10))(rcx_6, arg5, arg6, arg7)
            
            if (result.b != 0)
                arg6 = *arg2
                float zmm5_4[0x4] = *arg4
                zmm7 = *(arg1 + 0x20)
                float temp0_366[0x4] = _mm_shuffle_ps(arg6, arg6, 0)
                float temp0_367[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0x4e)
                float temp0_369[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_4, zmm5_4, 0x1b), temp0_366)
                float temp0_371[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg6, arg6, 0xff), zmm5_4)
                float temp0_372[0x4] = __mulps_xmmps_memps(temp0_369, data_143f2b4e0)
                float temp0_373[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xb1)
                float temp0_374[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x1b)
                float temp0_375[0x4] = _mm_add_ps(temp0_372, temp0_371)
                float temp0_377[0x4] = _mm_mul_ps(temp0_367, _mm_shuffle_ps(arg6, arg6, 0x55))
                float temp0_379[0x4] = _mm_mul_ps(temp0_373, _mm_shuffle_ps(arg6, arg6, 0xaa))
                float temp0_380[0x4] = __mulps_xmmps_memps(temp0_377, data_143f2b4d0)
                float temp0_381[0x4] = __mulps_xmmps_memps(temp0_379, data_143f2b4c0)
                float temp0_382[0x4] = _mm_add_ps(temp0_375, temp0_380)
                float temp0_383[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x4e)
                float temp0_384[0x4] = _mm_add_ps(temp0_382, temp0_381)
                float temp0_386[0x4] =
                    _mm_mul_ps(temp0_374, _mm_shuffle_ps(temp0_384, temp0_384, 0))
                float temp0_388[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_384, temp0_384, 0xff), zmm7)
                float temp0_389[0x4] = __mulps_xmmps_memps(temp0_386, data_143f2b4e0)
                float temp0_390[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xb1)
                float temp0_391[0x4] = _mm_add_ps(temp0_389, temp0_388)
                float temp0_393[0x4] =
                    _mm_mul_ps(temp0_383, _mm_shuffle_ps(temp0_384, temp0_384, 0x55))
                float temp0_395[0x4] =
                    _mm_mul_ps(temp0_390, _mm_shuffle_ps(temp0_384, temp0_384, 0xaa))
                float temp0_396[0x4] = __mulps_xmmps_memps(temp0_393, data_143f2b4d0)
                float temp0_397[0x4] = __mulps_xmmps_memps(temp0_395, data_143f2b4c0)
                float temp0_399[0x4] = _mm_add_ps(_mm_add_ps(temp0_391, temp0_396), temp0_397)
                *arg3 = temp0_399
                zmm5_4 = data_143f2b570
                float temp0_400[0x4] = _mm_mul_ps(temp0_399, temp0_399)
                float temp0_402[0x4] =
                    _mm_add_ps(temp0_400, _mm_shuffle_ps(temp0_400, temp0_400, 0x4e))
                float temp0_404[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_402, temp0_402, 0x39), temp0_402)
                arg5 = _mm_rsqrt_ps(temp0_404)
                arg7 = _mm_mul_ps(temp0_404, zmm5_4)
                arg6 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm5_4, _mm_mul_ps(_mm_mul_ps(arg5, arg5), arg7)), arg5), 
                    arg5)
                float temp0_414[0x4] = _mm_sub_ps(zmm5_4, _mm_mul_ps(_mm_mul_ps(arg6, arg6), arg7))
                float temp0_415[0x4] = _mm_cmpeq_ps(data_143f2b580, temp0_404, 2)
                *arg3 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_414, arg6), arg6), temp0_399)
                        ^ data_143f2b560, 
                    temp0_415) ^ data_143f2b560
        
        int64_t* rcx_7 = *(arg1 + 8)
        
        if (rcx_7 != 0)
            result = (*(*rcx_7 + 0x20))(rcx_7, arg5, arg6, arg7)
            
            if (result.b != 0)
                arg7 = arg4[2]
                zmm6 = arg2[2]
                float zmm4_5[0x4] = *(arg1 + 0x40)
                zmm6[0] = zmm6[0] * arg7[0]
                float temp0_420[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                float temp0_421[0x4] = _mm_shuffle_ps(arg7, arg7, 0x55)
                float temp0_422[0x4] = _mm_shuffle_ps(arg7, arg7, 0xaa)
                float temp0_423[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                temp0_423[0] = temp0_423[0] * temp0_422[0]
                float temp0_424[0x4] = _mm_shuffle_ps(zmm4_5, zmm4_5, 0x55)
                temp0_420[0] = temp0_420[0] * temp0_421[0]
                zmm6[0] = zmm6[0] * zmm4_5[0]
                temp0_420[0] = temp0_420[0] * temp0_424[0]
                float temp0_425[0x4] = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xaa)
                temp0_423[0] = temp0_423[0] * temp0_425[0]
                float temp0_426[0x4] = _mm_unpacklo_ps(temp0_420, 0)
                arg3[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, temp0_423[0].q), temp0_426[0].q)
    else
        zmm6 = arg4[2]
        zmm7 = data_143f2b4e0
        float zmm9[0x4] = data_143f2b4d0
        float zmm10[0x4] = data_143f2b4c0
        float zmm11[0x4]
        float var_78_1[0x4] = zmm11
        float zmm12[0x4] = *(arg1 + 0x40)
        float zmm13[0x4] = data_143f2b540
        float temp0_1[0x4] = _mm_min_ps(zmm12, zmm6)
        float zmm15[0x4] = data_143f2b5a0
        uint32_t var_118[0x4]
        float var_f8[0x4]
        float zmm5_1[0x4]
        float zmm14[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_1, zmm15, 1)) == 0)
            float zmm4_1[0x4] = *arg4
            arg6 = *(arg1 + 0x20)
            arg7 = *(arg1 + 0x30)
            zmm14 = *(arg1 + 0x40)
            float temp0_133[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
            float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg6, arg6, 0x1b), temp0_133)
            float temp0_136[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
            float temp0_137[0x4] = _mm_mul_ps(arg7, zmm6)
            float temp0_138[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
            float temp0_139[0x4] = _mm_mul_ps(temp0_135, zmm7)
            float temp0_140[0x4] = _mm_mul_ps(temp0_138, arg6)
            zmm14 = _mm_mul_ps(zmm14, zmm6)
            float temp0_142[0x4] = _mm_add_ps(temp0_139, temp0_140)
            float temp0_144[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(arg6, arg6, 0x4e))
            float temp0_147[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), _mm_shuffle_ps(arg6, arg6, 0xb1))
            float temp0_148[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
            float temp0_149[0x4] = _mm_mul_ps(temp0_144, zmm9)
            float temp0_150[0x4] = _mm_mul_ps(temp0_147, zmm10)
            float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_149)
            float temp0_152[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
            float temp0_153[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
            float temp0_154[0x4] = _mm_mul_ps(temp0_148, temp0_153)
            zmm12 = _mm_add_ps(temp0_151, temp0_150)
            float temp0_158[0x4] = _mm_sub_ps(temp0_154, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_152))
            float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
            float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
            float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
            float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_153)
            float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_152)
            float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_138)
            zmm13 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_137)), 
                arg4[1])
        else
            arg7 = *arg4
            zmm10 = data_143f2b550
            zmm8 = arg4[1]
            float temp0_4[0x4] = _mm_add_ps(arg7, arg7)
            float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            float temp0_6[0x4] = _mm_shuffle_ps(arg7, arg7, 4)
            float temp0_7[0x4] = _mm_shuffle_ps(arg7, arg7, 0xff)
            float temp0_8[0x4] = _mm_mul_ps(arg7, temp0_4)
            float temp0_10[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(temp0_4, temp0_4, 0x29))
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
            float temp0_13[0x4] = _mm_mul_ps(temp0_7, temp0_11)
            float temp0_15[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_8, temp0_8, 1))
            _mm_mul_ps(zmm6, zmm12)
            float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_10)
            float temp0_18[0x4] = _mm_sub_ps(temp0_10, temp0_13)
            arg7 = *(arg1 + 0x20)
            float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_15)
            float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm6)
            float temp0_21[0x4] = _mm_mul_ps(temp0_5, temp0_18)
            float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm6)
            float temp0_23[0x4] = _mm_shuffle_ps(arg7, arg7, 4)
            arg5 = _mm_and_ps(temp0_22, zmm13)
            float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, arg5, 0x32)
            float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, arg5, 0), temp0_25, 0x82)
            float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, arg5, 0x31)
            float temp0_30[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, arg5, 0x10), temp0_28, 0x88)
            float temp0_32[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), arg5, 0xe8)
            float temp0_33[0x4] = _mm_add_ps(arg7, arg7)
            zmm10[0].q = zmm8 u>> 0x40
            float temp0_34[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
            float temp0_35[0x4] = _mm_shuffle_ps(arg7, arg7, 0xff)
            float temp0_36[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
            float temp0_37[0x4] = _mm_mul_ps(arg7, temp0_33)
            float temp0_39[0x4] = _mm_mul_ps(temp0_23, _mm_shuffle_ps(temp0_33, temp0_33, 0x29))
            float temp0_41[0x4] = _mm_mul_ps(temp0_35, _mm_shuffle_ps(temp0_33, temp0_33, 0x12))
            float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
                _mm_shuffle_ps(temp0_37, temp0_37, 1))
            float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_39)
            float temp0_46[0x4] = _mm_sub_ps(temp0_39, temp0_41)
            float temp0_47[0x4] = _mm_sub_ps(zmm10, temp0_44)
            float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm12)
            float temp0_49[0x4] = _mm_mul_ps(temp0_36, temp0_46)
            arg5 = _mm_and_ps(_mm_mul_ps(temp0_47, zmm12), zmm13)
            float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, arg5, 0), 
                _mm_shuffle_ps(temp0_49, arg5, 0x32), 0x82)
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, arg5, 0x10)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_48, arg5, 0x31)
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_56, 0x88)
            float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_30)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
            zmm5_1 = *(arg1 + 0x30)
            float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, arg5, 0xe8)
            float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_32)
            zmm10[0].q = zmm5_1 u>> 0x40
            float temp0_64[0x4] = _mm_shuffle_ps(zmm5_1, zmm10, 0xc4)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_34)
            float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_27))
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_27)
            float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_32)
            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_30)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
            var_f8 = temp0_75
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_34)
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_27)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_32)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
            float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_34)
            float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
            int96_t var_e8_1 = temp0_88[0].12
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_32)
            float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_34)
            float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
            int96_t var_d8_1 = temp0_99[0].12
            int96_t var_c8_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
            zmm10, zmm14, zmm15 = sub_1407740e0(&var_f8, 0x322bcc77)
            float zmm2[0x4] = var_f8[0]
            float zmm1 = var_f8[1]
            zmm15 =
                _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm14, 2), data_143f2b590 ^ zmm10) ^ data_143f2b590
            zmm2[0] = zmm2[0] * zmm15[0]
            uint32_t zmm0_1[0x4] = var_f8[2]
            zmm0_1[0] = zmm0_1[0] f* zmm15[0]
            zmm1 = zmm1 * zmm15[0]
            var_f8[0] = zmm2[0]
            float temp0_107[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
            var_f8[2] = zmm0_1[0]
            zmm0_1 = var_e8_1:8.d
            zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
            var_f8[1] = zmm1
            zmm1 = var_e8_1:4.d * temp0_107[0]
            float zmm3 = var_e8_1.d * temp0_107[0]
            zmm2 = var_d8_1.d
            var_e8_1:8.d = zmm0_1[0]
            zmm0_1 = var_d8_1:8.d
            var_e8_1:4.d = zmm1
            float temp0_108[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
            zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
            zmm2[0] = zmm2[0] * temp0_108[0]
            zmm1 = var_d8_1:4.d * temp0_108[0]
            var_d8_1:8.d = zmm0_1[0]
            var_e8_1.d = zmm3
            var_d8_1.d = zmm2[0]
            var_d8_1:4.d = zmm1
            sub_14077e4a0(&var_118, &var_f8)
            zmm5_1 = var_118
            zmm12 = data_143f2b570
            zmm15 = data_143f2b5a0
            zmm7 = data_143f2b4e0
            zmm9 = data_143f2b4d0
            zmm10 = data_143f2b4c0
            float temp0_109[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
            float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
            float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
            float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
            float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm12)
            float temp0_120[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm12, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                    temp0_114), 
                temp0_114)
            float temp0_123[0x4] =
                _mm_sub_ps(zmm12, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
            float temp0_125[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
            float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
            float temp0_128[0x4] = _mm_unpacklo_ps(var_c8_1:4.d, 0)
            zmm12 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_1) ^ data_143f2b560, temp0_125)
                ^ data_143f2b560
            zmm13 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_c8_1.d, var_c8_1:8.d[0].q), temp0_128[0].q)
        
        zmm8 = arg2[2]
        zmm5_1 = *arg2
        result = _mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), zmm15, 1))
        float zmm0[0x4]
        
        if (result == 0)
            float temp0_301[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
            float temp0_302[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x1b)
            float temp0_303[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x4e)
            float temp0_305[0x4] = _mm_mul_ps(temp0_302, _mm_shuffle_ps(zmm5_1, zmm5_1, 0))
            float temp0_306[0x4] = _mm_mul_ps(zmm8, zmm13)
            float temp0_307[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float temp0_308[0x4] = _mm_mul_ps(zmm12, temp0_307)
            float temp0_309[0x4] = _mm_mul_ps(temp0_305, zmm7)
            float temp0_310[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xb1)
            float temp0_311[0x4] = _mm_add_ps(temp0_309, temp0_308)
            float temp0_313[0x4] = _mm_mul_ps(temp0_303, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
            float temp0_315[0x4] = _mm_mul_ps(temp0_310, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
            float temp0_316[0x4] = _mm_mul_ps(temp0_313, zmm9)
            float temp0_318[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_306, temp0_306, 0xc9), temp0_301)
            float temp0_319[0x4] = _mm_add_ps(temp0_311, temp0_316)
            float temp0_320[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            float temp0_321[0x4] = _mm_mul_ps(temp0_315, zmm10)
            float temp0_323[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_306, temp0_306, 0xd2), temp0_320)
            zmm6 = _mm_add_ps(temp0_319, temp0_321)
            float temp0_325[0x4] = _mm_sub_ps(temp0_323, temp0_318)
            float temp0_326[0x4] = _mm_add_ps(temp0_325, temp0_325)
            float temp0_327[0x4] = _mm_mul_ps(temp0_307, temp0_326)
            float temp0_328[0x4] = _mm_shuffle_ps(temp0_326, temp0_326, 0xd2)
            float temp0_329[0x4] = _mm_shuffle_ps(temp0_326, temp0_326, 0xc9)
            float temp0_330[0x4] = _mm_mul_ps(temp0_328, temp0_320)
            float temp0_331[0x4] = _mm_mul_ps(temp0_329, temp0_301)
            float temp0_332[0x4] = _mm_add_ps(temp0_327, temp0_306)
            float temp0_333[0x4] = _mm_sub_ps(temp0_330, temp0_331)
            zmm0 = _mm_mul_ps(zmm14, zmm8)
            zmm7 = __addps_xmmps_memps(_mm_add_ps(temp0_333, temp0_332), arg2[1])
        else
            zmm10 = data_143f2b550
            float temp0_172[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
            float temp0_173[0x4] = _mm_mul_ps(zmm14, zmm8)
            float temp0_174[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            float temp0_175[0x4] = _mm_shuffle_ps(temp0_172, temp0_172, 0x29)
            var_118 = temp0_173
            float temp0_177[0x4] = _mm_mul_ps(temp0_175, _mm_shuffle_ps(zmm5_1, zmm5_1, 4))
            float temp0_178[0x4] = _mm_mul_ps(temp0_172, zmm5_1)
            float temp0_181[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_172, temp0_172, 0x12), 
                _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff))
            float temp0_184[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_178, temp0_178, 0x1a), 
                _mm_shuffle_ps(temp0_178, temp0_178, 1))
            float temp0_185[0x4] = _mm_add_ps(temp0_181, temp0_177)
            float temp0_186[0x4] = _mm_sub_ps(temp0_177, temp0_181)
            float temp0_187[0x4] = _mm_shuffle_ps(zmm12, zmm12, 4)
            float temp0_188[0x4] = _mm_mul_ps(temp0_185, zmm8)
            float temp0_189[0x4] = _mm_mul_ps(temp0_174, temp0_186)
            float temp0_191[0x4] = _mm_mul_ps(_mm_sub_ps(zmm10, temp0_184), zmm8)
            zmm8 = arg2[1]
            arg5 = __andps_xmmxud_memxud(temp0_191, data_143f2b540)
            float temp0_193[0x4] = _mm_shuffle_ps(temp0_189, arg5, 0x32)
            float temp0_195[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, arg5, 0), temp0_193, 0x82)
            float temp0_196[0x4] = _mm_shuffle_ps(temp0_188, arg5, 0x31)
            float temp0_198[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_189, arg5, 0x10), temp0_196, 0x88)
            float temp0_200[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, temp0_189, 0x12), arg5, 0xe8)
            float temp0_201[0x4] = _mm_add_ps(zmm12, zmm12)
            zmm10[0].q = zmm8 u>> 0x40
            float temp0_202[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
            float temp0_203[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
            float temp0_204[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
            float temp0_205[0x4] = _mm_mul_ps(zmm12, temp0_201)
            float temp0_207[0x4] = _mm_mul_ps(temp0_187, _mm_shuffle_ps(temp0_201, temp0_201, 0x29))
            float temp0_208[0x4] = _mm_shuffle_ps(temp0_201, temp0_201, 0x12)
            float temp0_209[0x4] = _mm_shuffle_ps(temp0_205, temp0_205, 0x1a)
            float temp0_210[0x4] = _mm_mul_ps(temp0_203, temp0_208)
            float temp0_212[0x4] = _mm_add_ps(temp0_209, _mm_shuffle_ps(temp0_205, temp0_205, 1))
            float temp0_213[0x4] = _mm_add_ps(temp0_210, temp0_207)
            float temp0_214[0x4] = _mm_sub_ps(temp0_207, temp0_210)
            float temp0_215[0x4] = _mm_sub_ps(zmm10, temp0_212)
            float temp0_216[0x4] = _mm_mul_ps(temp0_213, zmm14)
            float temp0_217[0x4] = _mm_mul_ps(temp0_204, temp0_214)
            arg5 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_215, zmm14), data_143f2b540)
            float temp0_220[0x4] = _mm_shuffle_ps(temp0_217, arg5, 0x32)
            float temp0_222[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_216, arg5, 0), temp0_220, 0x82)
            float temp0_225[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_217, arg5, 0x10), 
                _mm_shuffle_ps(temp0_216, arg5, 0x31), 0x88)
            float temp0_227[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0x55), temp0_198)
            zmm10[0].q = zmm13 u>> 0x40
            float temp0_228[0x4] = _mm_shuffle_ps(zmm13, zmm10, 0xc4)
            float temp0_230[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0), temp0_195)
            float temp0_232[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_216, temp0_217, 0x12), arg5, 0xe8)
            float temp0_233[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0xaa)
            float temp0_234[0x4] = _mm_add_ps(temp0_227, temp0_230)
            float temp0_236[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0xff), temp0_202)
            float temp0_237[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0)
            float temp0_238[0x4] = _mm_mul_ps(temp0_233, temp0_200)
            float temp0_239[0x4] = _mm_mul_ps(temp0_237, temp0_195)
            float temp0_240[0x4] = _mm_add_ps(temp0_234, temp0_238)
            float temp0_242[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_225, temp0_225, 0xaa), temp0_200)
            float temp0_243[0x4] = _mm_add_ps(temp0_240, temp0_236)
            float temp0_245[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_225, temp0_225, 0x55), temp0_198)
            float temp0_246[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0xff)
            var_f8 = temp0_243
            float temp0_247[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0x55)
            float temp0_248[0x4] = _mm_add_ps(temp0_245, temp0_239)
            float temp0_249[0x4] = _mm_mul_ps(temp0_247, temp0_198)
            float temp0_250[0x4] = _mm_mul_ps(temp0_246, temp0_202)
            float temp0_251[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0)
            float temp0_252[0x4] = _mm_add_ps(temp0_248, temp0_242)
            float temp0_253[0x4] = _mm_mul_ps(temp0_251, temp0_195)
            float temp0_255[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xaa), temp0_200)
            float temp0_256[0x4] = _mm_add_ps(temp0_249, temp0_253)
            float temp0_257[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0xff)
            float temp0_258[0x4] = _mm_add_ps(temp0_252, temp0_250)
            float temp0_259[0x4] = _mm_mul_ps(temp0_257, temp0_202)
            float temp0_260[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0)
            float temp0_261[0x4] = _mm_add_ps(temp0_256, temp0_255)
            float temp0_262[0x4] = _mm_mul_ps(temp0_260, temp0_195)
            int96_t var_e8_2 = temp0_258[0].12
            float temp0_263[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0x55)
            float temp0_264[0x4] = _mm_add_ps(temp0_261, temp0_259)
            float temp0_265[0x4] = _mm_mul_ps(temp0_263, temp0_198)
            int96_t var_d8_2 = temp0_264[0].12
            float temp0_266[0x4] = _mm_add_ps(temp0_265, temp0_262)
            float temp0_268[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_228, temp0_228, 0xaa), temp0_200)
            float temp0_270[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_228, temp0_228, 0xff), temp0_202)
            int96_t var_c8_2 = _mm_add_ps(_mm_add_ps(temp0_266, temp0_268), temp0_270)[0].12
            int128_t zmm10_1
            float zmm15_1[0x4]
            zmm10_1, zmm15_1 = sub_1407740e0(&var_f8, 0x322bcc77)
            float temp0_273[0x4] = __cmpps_xmmps_memps_immb(zmm15_1, var_118, 2)
            float zmm2_1[0x4] = var_f8[0]
            float zmm1_1 = var_f8[1]
            zmm15_1 = _mm_and_ps(temp0_273, data_143f2b590 ^ zmm10_1) ^ data_143f2b590
            uint32_t zmm0_2[0x4] = var_f8[2]
            zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
            zmm1_1 = zmm1_1 * zmm15_1[0]
            zmm0_2[0] = zmm0_2[0] f* zmm15_1[0]
            var_f8[0] = zmm2_1[0]
            var_f8[1] = zmm1_1
            float temp0_275[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
            zmm1_1 = var_e8_2:4.d * temp0_275[0]
            var_f8[2] = zmm0_2[0]
            zmm0_2 = var_e8_2:8.d
            zmm0_2[0] = zmm0_2[0] f* temp0_275[0]
            float zmm3_1 = var_e8_2.d * temp0_275[0]
            zmm2_1 = var_d8_2.d
            var_e8_2:4.d = zmm1_1
            var_e8_2:8.d = zmm0_2[0]
            zmm0_2 = var_d8_2:8.d
            float temp0_276[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
            zmm1_1 = var_d8_2:4.d * temp0_276[0]
            zmm0_2[0] = zmm0_2[0] f* temp0_276[0]
            zmm2_1[0] = zmm2_1[0] * temp0_276[0]
            var_d8_2:4.d = zmm1_1
            var_d8_2:8.d = zmm0_2[0]
            var_e8_2.d = zmm3_1
            var_d8_2.d = zmm2_1[0]
            uint32_t var_108[0x4]
            result = sub_14077e4a0(&var_108, &var_f8)
            uint32_t zmm5_2[0x4] = var_108
            zmm6 = data_143f2b570
            uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
            zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
            uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
            zmm1_2 = _mm_rsqrt_ps(zmm4_2)
            uint32_t zmm3_2[0x4] = _mm_mul_ps(zmm4_2, zmm6)
            float temp0_288[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), 
                    zmm1_2), 
                zmm1_2)
            float temp0_291[0x4] =
                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_288, temp0_288), zmm3_2))
            float temp0_293[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
            float temp0_295[0x4] = _mm_add_ps(_mm_mul_ps(temp0_291, temp0_288), temp0_288)
            float temp0_296[0x4] = _mm_unpacklo_ps(var_c8_2:4.d, 0)
            zmm6 = _mm_and_ps(_mm_mul_ps(temp0_295, zmm5_2) ^ data_143f2b560, temp0_293)
                ^ data_143f2b560
            float temp0_299[0x4] = _mm_unpacklo_ps(var_c8_2.d, var_c8_2:8.d[0].q)
            zmm0 = var_118
            zmm7 = _mm_unpacklo_ps(temp0_299, temp0_296[0].q)
        
        *arg3 = zmm6
        arg3[1] = zmm7
        arg3[2] = zmm0

return result
