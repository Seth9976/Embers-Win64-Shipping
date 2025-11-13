// 函数: sub_140058a20
// 地址: 0x140058a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg16[0].o
int128_t var_68 = arg15[0].o
int128_t var_78 = arg14[0].o
int128_t var_88 = arg13[0].o
int128_t var_98 = arg12[0].o
int128_t var_a8 = arg11[0].o
int128_t var_b8 = arg10[0].o
int128_t var_c8 = arg9[0].o
int128_t var_d8 = arg8[0].o
int128_t var_e8 = arg7[0].o
float zmm0[0x8] = *arg24
int32_t temp0 = _mm256_movemask_ps(zmm0)
zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
float zmm1[0x8] = _mm256_broadcast_ss(0.5f)
float var_3a0[0x8] = zmm1
zmm0 = _mm256_mul_ps(zmm0, zmm1)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
int32_t zmm2[0x8]
zmm2[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
float zmm3[0x8]
zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
int32_t result

if (temp0 != 0xff)
    float var_5d0_1 = zmm1[0]
    int32_t var_5cc_1 = zmm2[0]
    float var_5c8_1 = zmm3[0]
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_5e0_1 = zmm0[0]
    float temp0_303 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_304 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t rsi_9 = ((arg23 s>> 0x1f u>> 0x1d) + arg23) & 0xfffffff8
    uint64_t rdx_1
    
    if (rsi_9 s<= 0)
        result = 0
        rdx_1 = 0
    else
        rdx_1 = 0
        float temp0_305[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
        float temp0_306[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        float temp0_309[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
        zmm0 = _mm256_broadcast_ss(1.12103877e-44f)
        float var_380_2[0x8] = zmm0
        result = 0
        
        while (true)
            bool cond:2_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:2_1))
                zmm3 = *(arg20 + sx.q((rdx_1 << 2).d))
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm3, temp0_305)
                zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                float temp0_314[0x8]
                int32_t temp1_12
                temp0_314, temp1_12 = _mm256_i32gather_ps(zmm2, *(arg19 + (zmm0[0].q << 2)), zmm1)
                zmm2 = temp0_314
                float var_4e0_2[0x8] = zmm3
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm3, temp0_306)
                zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, temp0_309)
                zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                float temp0_319[0x8]
                int32_t temp1_13
                temp0_319, temp1_13 = _mm256_i32gather_ps(arg5, *(arg19 + zmm1[0].q), zmm3)
                zmm3 = temp1_13
                zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_380_2)
                zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                float temp0_323[0x8]
                int32_t temp1_14
                temp0_323, temp1_14 = _mm256_i32gather_ps(zmm3, *(arg19 + zmm0[0].q), zmm1)
                int32_t var_580_3[0x8] = zmm2
                float var_520_2[0x8] = arg6
                float temp0_324[0x8] = _mm256_broadcast_ss(arg18[3])
                float var_660_3[0x8] = temp0_324
                float var_640_3[0x8] = temp0_324
                float var_620_5[0x8] = temp0_324
                float var_600_2[0x8] = temp0_324
                float temp0_325[0x8] = _mm256_broadcast_ss(arg18[1])
                float temp0_326[0x8] = _mm256_broadcast_ss(arg18[2])
                float temp0_327[0x8] = _mm256_broadcast_ss(*arg18)
                float temp0_328[0x8] = _mm256_mul_ps(temp0_319, temp0_326)
                arg9 = _mm256_mul_ps(temp0_323, temp0_327)
                float temp0_330[0x8] = _mm256_mul_ps(zmm2, temp0_325)
                float temp0_331[0x8] = _mm256_fmsub_ps(temp0_323, temp0_325, temp0_328)
                zmm2 = _mm256_fmsub_ps(zmm2, temp0_326, arg9)
                float temp0_333[0x8] = _mm256_fmsub_ps(temp0_319, temp0_327, temp0_330)
                float temp0_334[0x8] = _mm256_add_ps(temp0_331, temp0_331)
                float temp0_335[0x8] = _mm256_add_ps(zmm2, zmm2)
                zmm2 = _mm256_add_ps(temp0_333, temp0_333)
                arg9 = _mm256_fmadd_ps(var_580_3, temp0_324, temp0_334)
                float temp0_338[0x8] = _mm256_fmadd_ps(temp0_319, temp0_324, temp0_335)
                float temp0_339[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_324, zmm2, temp0_323)
                float temp0_341[0x8] =
                    _mm256_fmsub_ps(_mm256_mul_ps(temp0_335, temp0_326), zmm2, temp0_325)
                zmm2 = _mm256_mul_ps(zmm2, temp0_327)
                float temp0_343[0x8] = _mm256_mul_ps(temp0_334, temp0_325)
                arg9 = _mm256_add_ps(arg9, temp0_341)
                float temp0_346[0x8] =
                    _mm256_add_ps(temp0_338, _mm256_fmsub_ps(zmm2, temp0_334, temp0_326))
                float temp0_348[0x8] = _mm256_add_ps(arg9, _mm256_broadcast_ss(arg18[4]))
                float temp0_349[0x8] = _mm256_broadcast_ss(arg18[5])
                zmm2 = _mm256_broadcast_ss(arg18[6])
                arg9 = _mm256_broadcast_ss(var_5d0_1)
                float temp0_352[0x8] = _mm256_cmp_ps(arg9, temp0_348, 1)
                
                if (_mm256_movemask_ps(temp0_352) != 0)
                    var_660_3 = _mm256_maskstore_ps(temp0_352, arg9)
                
                float temp0_355[0x8] = _mm256_fmsub_ps(temp0_327, temp0_335, temp0_343)
                arg9 = _mm256_add_ps(temp0_346, temp0_349)
                zmm3 = _mm256_xor_ps(temp0_352, arg12)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_359[0x8] = _mm256_broadcast_ss(var_5e0_1)
                    float temp0_360[0x8] = _mm256_cmp_ps(temp0_348, temp0_359, 1)
                    arg7 = _mm256_and_ps(temp0_360, zmm3)
                    
                    if (_mm256_movemask_ps(arg7) != 0)
                        var_660_3 = _mm256_maskstore_ps(arg7, temp0_359)
                    
                    zmm3 = _mm256_andnot_ps(temp0_360, zmm3)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_660_3 = _mm256_maskstore_ps(zmm3, temp0_348)
                
                float temp0_367[0x8] = _mm256_add_ps(temp0_339, temp0_355)
                float temp0_368[0x8] = _mm256_broadcast_ss(var_5cc_1)
                float temp0_369[0x8] = _mm256_cmp_ps(temp0_368, arg9, 1)
                
                if (_mm256_movemask_ps(temp0_369) != 0)
                    var_640_3 = _mm256_maskstore_ps(temp0_369, temp0_368)
                
                float temp0_372[0x8] = _mm256_add_ps(temp0_367, zmm2)
                zmm0 = _mm256_xor_ps(temp0_369, arg12)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2 = _mm256_broadcast_ss(temp0_303)
                    float temp0_376[0x8] = _mm256_cmp_ps(arg9, zmm2, 1)
                    zmm3 = _mm256_and_ps(temp0_376, zmm0)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_640_3 = _mm256_maskstore_ps(zmm3, zmm2)
                    
                    zmm0 = _mm256_andnot_ps(temp0_376, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_640_3 = _mm256_maskstore_ps(zmm0, arg9)
                
                float temp0_383[0x8] = _mm256_broadcast_ss(var_5c8_1)
                float temp0_384[0x8] = _mm256_cmp_ps(temp0_383, temp0_372, 1)
                
                if (_mm256_movemask_ps(temp0_384) != 0)
                    var_620_5 = _mm256_maskstore_ps(temp0_384, temp0_383)
                
                zmm0 = _mm256_xor_ps(temp0_384, arg12)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2 = _mm256_broadcast_ss(temp0_304)
                    float temp0_390[0x8] = _mm256_cmp_ps(temp0_372, zmm2, 1)
                    zmm3 = _mm256_and_ps(temp0_390, zmm0)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_620_5 = _mm256_maskstore_ps(zmm3, zmm2)
                    
                    zmm0 = _mm256_andnot_ps(temp0_390, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_620_5 = _mm256_maskstore_ps(zmm0, temp0_372)
                
                int32_t var_5a0_3[0x8] = arg9
                arg14 = var_660_3
                zmm2 = var_620_5
                float temp0_397[0x8] = _mm256_broadcast_ss(*arg1)
                float temp0_398[0x8] = _mm256_sub_ps(arg14, temp0_397)
                arg12 = _mm256_broadcast_ss(*(arg1 + 4))
                float temp0_400[0x8] = _mm256_sub_ps(var_640_3, arg12)
                float temp0_401[0x8] = _mm256_broadcast_ss(arg1[1].d)
                int32_t var_420_2[0x8] = zmm2
                float temp0_402[0x8] = _mm256_sub_ps(zmm2, temp0_401)
                float temp0_403[0x8] = _mm256_broadcast_ss(*arg3)
                float temp0_404[0x8] = _mm256_div_ps(temp0_398, temp0_403)
                float temp0_405[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
                float temp0_406[0x8] = _mm256_div_ps(temp0_400, temp0_405)
                float temp0_407[0x8] = _mm256_broadcast_ss(arg3[1].d)
                arg9 = _mm256_div_ps(temp0_402, temp0_407)
                zmm3 = _mm256_cvttps_epi32(temp0_404)
                arg15 = _mm256_cvttps_epi32(temp0_406)
                int32_t temp0_411[0x8] = _mm256_cvttps_epi32(arg9)
                float temp0_412[0x8] = _mm256_cvtepi32_ps(zmm3)
                float temp0_413[0x8] = _mm256_cvtepi32_ps(arg15)
                float temp0_414[0x8] = _mm256_cvtepi32_ps(temp0_411)
                float temp0_415[0x8] = _mm256_fmadd_ps(temp0_412, temp0_403, temp0_397)
                float temp0_416[0x8] = _mm256_fmadd_ps(temp0_413, temp0_405, arg12)
                float temp0_417[0x8] = _mm256_fmadd_ps(temp0_414, temp0_407, temp0_401)
                temp0_411[0].o = __vmovsd_xmmdq_memq(*arg3)
                float temp0_419[0x8] = _mm256_broadcast_ss(2f)
                temp0_411[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_411[0].o, temp0_419[0].o)
                float temp0_421[0x8] = _mm256_broadcastss_ps(temp0_411[0].o)
                float temp0_422[0x8] = _mm256_add_ps(temp0_421, temp0_415)
                temp0_421[0].o = __vmovshdup_xmmdq_xmmdq(temp0_411[0].o)
                arg6 = _mm256_broadcastsd_pd(temp0_421[0].o)
                float temp0_425[0x8] = _mm256_add_ps(arg6, temp0_416)
                temp0_411[0].o = _mm_permute_ps(temp0_411[0].o, 0xea)
                int32_t var_440_2[0x8] = arg14
                float temp0_427[0x8] = _mm256_cmp_ps(temp0_422, arg14, 1)
                arg8 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc9420)
                arg5 = _mm256_blendv_ps(arg8, zmm3, temp0_427)
                float var_660_4[0x8] = arg5
                arg9 = _mm256_broadcastsd_pd(temp0_411[0].o)
                arg14 = _mm256_cmp_ps(temp0_425, var_640_3, 1)
                
                if (_mm256_movemask_ps(arg14) != 0)
                    zmm3 = arg15
                
                float temp0_433[0x8] = _mm256_add_ps(arg9, temp0_417)
                zmm2 = _mm256_cmp_ps(temp0_425, var_640_3, 5)
                arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_405[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                    arg8 = __vpaddd_ymmqq_ymmqq_memqq(arg15, data_142fc9420)
                
                float temp0_440[0x8] = _mm256_blendv_ps(arg8, zmm3, arg14)
                float var_640_4[0x8] = temp0_440
                arg7 = var_420_2
                arg14 = _mm256_cmp_ps(temp0_433, arg7, 1)
                
                if (_mm256_movemask_ps(arg14) != 0)
                    zmm3 = temp0_411
                
                zmm2 = _mm256_cmp_ps(temp0_433, arg7, 5)
                arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_405[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                    arg8 = __vpaddd_ymmqq_ymmqq_memqq(temp0_411, data_142fc9420)
                
                zmm2 = _mm256_blendv_ps(arg8, zmm3, arg14)
                float temp0_451[0x8] =
                    _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg5), temp0_403, temp0_397)
                float temp0_453[0x8] =
                    _mm256_fmadd_ps(_mm256_cvtepi32_ps(temp0_440), temp0_405, arg12)
                float temp0_455[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), temp0_407, temp0_401)
                float temp0_456[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_451, temp0_421)
                float temp0_457[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_453, arg6)
                float temp0_458[0x8] = _mm256_add_ps(arg9, temp0_455)
                float temp0_460[0x8] = _mm256_div_ps(_mm256_sub_ps(var_440_2, temp0_456), temp0_403)
                float temp0_462[0x8] = _mm256_div_ps(_mm256_sub_ps(var_640_3, temp0_457), temp0_405)
                float temp0_463[0x8] = _mm256_sub_ps(arg7, temp0_458)
                float temp0_464[0x8] = _mm256_div_ps(temp0_463, temp0_407)
                int32_t var_620_6[0x8] = zmm2
                float var_580_4[0x8] = temp0_460
                float var_560_4[0x8] = temp0_462
                float var_540_4[0x8] = temp0_464
                arg11 = _mm256_cmpeq_epi32(temp0_397, temp0_397)
                zmm0 = _mm256_cmpeq_epi32(arg5, arg11)
                bool cond:8_1 = _mm256_movemask_ps(zmm0) == 0
                temp0_463[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_463[0].o, temp0_463[0].o)
                
                if (not(cond:8_1))
                    var_660_4 = _mm256_maskstore_ps(zmm0, temp0_463)
                    var_580_4 = _mm256_maskstore_ps(zmm0, temp0_463)
                    arg5 = var_660_4
                
                int32_t rax_52 = *arg4
                zmm0[0].o = zx.o(rax_52 - 1)
                zmm0 = _mm256_cmpeq_epi32(arg5, _mm256_broadcastd_epi32(zmm0[0]))
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    temp0_464[0].o = zx.o(rax_52 - 2)
                    var_660_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(temp0_464[0]))
                    var_580_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                
                zmm0 = var_640_4
                zmm1 = _mm256_cmpeq_epi32(zmm0, arg11)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_640_4 = _mm256_maskstore_ps(zmm1, temp0_463)
                    var_560_4 = _mm256_maskstore_ps(zmm1, temp0_463)
                    zmm0 = var_640_4
                
                float temp0_482[0x8] = _mm256_sub_ps(var_440_2, temp0_348)
                int32_t rax_55 = arg4[1]
                zmm2[0].o = zx.o(rax_55 - 1)
                zmm2 = _mm256_broadcastd_epi32(zmm2[0])
                zmm0 = _mm256_cmpeq_epi32(zmm0, zmm2)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2[0].o = zx.o(rax_55 - 2)
                    var_640_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm2[0]))
                    var_560_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                
                zmm2 = _mm256_sub_ps(arg7, temp0_372)
                float temp0_491[0x8] = _mm256_sub_ps(var_640_3, var_5a0_3)
                float temp0_492[0x8] = _mm256_fmadd_ps(temp0_482, temp0_482, temp0_463)
                zmm0 = var_620_6
                zmm3 = _mm256_cmpeq_epi32(zmm0, arg11)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_495[0x8] = _mm256_maskstore_ps(zmm3, temp0_463)
                    var_540_4 = _mm256_maskstore_ps(zmm3, temp0_463)
                    zmm0 = temp0_495
                
                int32_t var_5a0_4[0x8] = _mm256_mul_ps(zmm2, zmm2)
                arg10 = _mm256_fmadd_ps(temp0_491, temp0_491, temp0_492)
                int32_t rax_58 = arg4[2]
                temp0_492[0].o = zx.o(rax_58 - 1)
                zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(temp0_492[0]))
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm0[0].o = zx.o(rax_58 - 2)
                    float temp0_503[0x8] =
                        _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
                    var_540_4 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
                    zmm0 = temp0_503
                
                zmm2 = __vpbroadcastd_ymmqq_memd(*(arg17 + 4))
                int32_t temp0_507[0x8] = _mm256_mullo_epi32(zmm2, var_660_4)
                zmm1 = _mm256_add_epi32(temp0_507, var_640_4)
                uint32_t temp0_509[0x8] = __vpbroadcastd_ymmqq_memd(*(arg17 + 8))
                arg6 = _mm256_mullo_epi32(zmm1, temp0_509)
                zmm1 = _mm256_add_epi32(arg6, zmm0)
                int64_t rax_61 = *(arg17 + 0x10)
                arg5 = _mm256_slli_epi32(zmm1, 2)
                arg8 = _mm256_cmpeq_epi32(var_640_3, var_640_3)
                zmm1[0].o = zx.o(0)
                float temp0_514[0x8]
                int32_t temp1_15
                temp0_514, temp1_15 = _mm256_i32gather_ps(zmm1, *(rax_61 + arg5[0].q), arg8)
                zmm3 = _mm256_sub_epi32(var_660_4, arg11)
                arg13 = _mm256_mullo_epi32(zmm2, zmm3)
                arg8 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, var_640_4), temp0_509)
                zmm2 = _mm256_slli_epi32(_mm256_add_epi32(arg8, zmm0), 2)
                zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                float temp0_523[0x8]
                int32_t temp1_16
                temp0_523, temp1_16 = _mm256_i32gather_ps(arg5, *(rax_61 + zmm2[0].q), zmm3)
                zmm2 = var_560_4
                arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                int32_t temp0_525[0x8] = _mm256_sub_epi32(var_640_4, arg11)
                int32_t temp0_527[0x8] =
                    _mm256_mullo_epi32(_mm256_add_epi32(temp0_507, temp0_525), temp0_509)
                arg7 = _mm256_add_epi32(temp0_527, zmm0)
                arg15 = _mm256_slli_epi32(arg7, 2)
                arg16 = _mm256_cmpeq_epi32(temp0_403, temp0_403)
                arg7[0].o = zx.o(0)
                float temp0_531[0x8]
                int32_t temp1_17
                temp0_531, temp1_17 = _mm256_i32gather_ps(arg7, *(rax_61 + arg15[0].q), arg16)
                arg7 = temp0_531
                arg16 = temp1_17
                arg12 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, temp0_525), temp0_509)
                arg13 = _mm256_slli_epi32(_mm256_add_epi32(arg12, zmm0), 2)
                arg14 = _mm256_cmpeq_epi32(temp0_525, temp0_525)
                arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                float temp0_538[0x8]
                int32_t temp1_18
                temp0_538, temp1_18 = _mm256_i32gather_ps(arg15, *(rax_61 + arg13[0].q), arg14)
                arg15 = temp0_538
                arg14 = temp1_18
                zmm0 = _mm256_sub_epi32(zmm0, arg11)
                arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg6, zmm0), 2)
                arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                float temp0_544[0x8]
                int32_t temp1_19
                temp0_544, temp1_19 = _mm256_i32gather_ps(arg14, *(rax_61 + arg6[0].q), arg13)
                arg14 = temp0_544
                arg13 = temp1_19
                arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg8, zmm0), 2)
                arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                float temp0_549[0x8]
                int32_t temp1_20
                temp0_549, temp1_20 = _mm256_i32gather_ps(arg13, *(rax_61 + arg6[0].q), arg8)
                arg13 = temp0_549
                arg8 = temp1_20
                arg6 = _mm256_slli_epi32(_mm256_add_epi32(temp0_527, zmm0), 2)
                arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                temp0_527[0].o = zx.o(0)
                float temp0_553[0x8]
                int32_t temp1_21
                temp0_553, temp1_21 = _mm256_i32gather_ps(temp0_527, *(rax_61 + arg6[0].q), arg8)
                arg9 = temp0_553
                arg8 = temp1_21
                arg5 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_523, temp0_514), var_580_4, temp0_514)
                float temp0_556[0x8] = _mm256_sub_ps(arg15, arg7)
                zmm0 = _mm256_slli_epi32(_mm256_add_epi32(arg12, zmm0), 2)
                arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                float temp0_561[0x8]
                int32_t temp1_22
                temp0_561, temp1_22 = _mm256_i32gather_ps(arg8, *(rax_61 + zmm0[0].q), arg6)
                arg8 = temp0_561
                float temp0_562[0x8] = _mm256_fmadd_ps(temp0_556, var_580_4, arg7)
                float temp0_564[0x8] =
                    _mm256_fmadd_ps(_mm256_sub_ps(arg13, arg14), var_580_4, arg14)
                arg6 = _mm256_fmadd_ps(_mm256_sub_ps(arg8, arg9), var_580_4, arg9)
                float temp0_568[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(temp0_562, arg5), zmm2, arg5)
                zmm3 = _mm256_fmadd_ps(_mm256_sub_ps(arg6, temp0_564), zmm2, temp0_564)
                zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(_mm256_sub_ps(zmm3, temp0_568), temp0_568, 
                    var_540_4)
                zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg10, var_5a0_4)
                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                float temp0_575[0x8] = _mm256_cmp_ps(zmm2, arg6, 0xc)
                
                if (_mm256_movemask_ps(temp0_575) != 0)
                    float temp0_577[0x8] = _mm256_rsqrt_ps(zmm2)
                    zmm2 = _mm256_mul_ps(zmm2, temp0_577)
                    zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_mul_ps(temp0_577, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_577, zmm2)), 
                        var_3a0)
                    zmm3 = _mm256_rcp_ps(zmm2)
                    arg5 = _mm256_fmadd_ps(_mm256_fnmadd_ps(temp0_419, zmm3, zmm2), zmm3, zmm0)
                    zmm0 = _mm256_blendv_ps(zmm0, arg5, temp0_575)
                
                arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                zmm2 = var_4e0_2
                zmm1 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg22), 1)
                char i_5 = _mm256_movemask_ps(zmm1)
                
                if (i_5 == 0)
                    result = 0
                    rdx_1 = zx.q(rdx_1.d + 8)
                    
                    if (rdx_1.d s>= rsi_9)
                        break
                    
                    continue
                else
                    uint64_t i = zx.q(i_5)
                    result = 0
                    
                    do
                        uint64_t r12_2 = _tzcnt_u64(i)
                        i &= not.q(1 << (r12_2 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            float var_1c0[0x8] = zmm0
                            uint64_t r12_3 = zx.q(r12_2.d) & 7
                            zmm1[0].o = var_1c0[r12_3]
                            *arg22 = zmm1[0]
                            int32_t var_1a0[0x8] = zmm2
                            *arg21 = var_1a0[r12_3]
                        
                        result.b = 1
                    while (i != 0)
            
            rdx_1 = zx.q(rdx_1.d + 8)
            
            if (rdx_1.d s>= rsi_9)
                break
    
    if (rdx_1.d s< arg23)
        bool cond:0_1 = result.b != 0
        result.b = 1
        
        if (not(cond:0_1))
            zmm0[0].o = zx.o(rdx_1.d)
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
            zmm1[0].o = zx.o(arg23)
            int32_t temp0_931[0x8] = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
            zmm2 = _mm256_maskload_ps(temp0_931, *(arg20 + sx.q(rdx_1.d << 2)))
            zmm0 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(3))
            zmm3[0].o = __vxorpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            float temp0_936[0x8]
            int32_t temp1_34
            temp0_936, temp1_34 = _mm256_i32gather_ps(zmm3, *(arg19 + (zmm0[0].q << 2)), temp0_931)
            zmm0 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(0xc))
            zmm1 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(4))
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_942[0x8]
            int32_t temp1_35
            temp0_942, temp1_35 = _mm256_i32gather_ps(arg5, *(arg19 + zmm1[0].q), temp0_931)
            arg6 = temp1_35
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            zmm0 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_947[0x8]
            int32_t temp1_36
            temp0_947, temp1_36 = _mm256_i32gather_ps(arg7, *(arg19 + zmm0[0].q), temp0_931)
            float var_2a0_2[0x8] = arg6
            float temp0_948[0x8] = _mm256_broadcast_ss(arg18[3])
            float var_660_7[0x8] = temp0_948
            float var_640_7[0x8] = temp0_948
            float var_620_13[0x8] = temp0_948
            float var_600_4[0x8] = temp0_948
            float temp0_949[0x8] = _mm256_broadcast_ss(arg18[1])
            float temp0_950[0x8] = _mm256_broadcast_ss(arg18[2])
            arg9 = _mm256_broadcast_ss(*arg18)
            float temp0_952[0x8] = _mm256_mul_ps(temp0_948, arg6)
            float temp0_953[0x8] = _mm256_mul_ps(temp0_942, temp0_950)
            float temp0_954[0x8] = _mm256_mul_ps(temp0_947, arg9)
            arg12 = _mm256_mul_ps(temp0_936, temp0_949)
            float temp0_956[0x8] = _mm256_fmsub_ps(temp0_953, temp0_949, temp0_947)
            float temp0_957[0x8] = _mm256_fmsub_ps(temp0_954, temp0_950, temp0_936)
            arg12 = _mm256_fmsub_ps(arg12, arg9, temp0_942)
            float temp0_959[0x8] = _mm256_sub_ps(temp0_952, temp0_952)
            float temp0_960[0x8] = _mm256_add_ps(temp0_956, temp0_956)
            arg6 = _mm256_add_ps(temp0_957, temp0_957)
            float temp0_962[0x8] = _mm256_add_ps(arg12, arg12)
            float temp0_963[0x8] = _mm256_add_ps(temp0_959, temp0_959)
            float var_580_7[0x8] = temp0_960
            float var_560_7[0x8] = arg6
            float var_540_7[0x8] = temp0_962
            float var_520_4[0x8] = temp0_963
            float temp0_964[0x8] = _mm256_fmadd_ps(temp0_936, temp0_948, temp0_960)
            arg9 = _mm256_fmadd_ps(temp0_942, temp0_948, arg6)
            float temp0_966[0x8] = _mm256_fmadd_ps(temp0_947, temp0_948, temp0_962)
            float var_180_2[0x8] = temp0_964
            int32_t var_160_2[0x8] = arg9
            float var_140_2[0x8] = temp0_966
            float var_120_2[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_963, temp0_948, var_2a0_2)
            float temp0_968[0x8] = _mm256_broadcast_ss(arg18[1])
            float temp0_969[0x8] = _mm256_broadcast_ss(arg18[2])
            float temp0_970[0x8] = _mm256_broadcast_ss(*arg18)
            arg12 = _mm256_mul_ps(arg6, temp0_969)
            float temp0_972[0x8] = _mm256_mul_ps(temp0_962, temp0_970)
            float temp0_973[0x8] = _mm256_mul_ps(temp0_960, temp0_968)
            arg12 = _mm256_fmsub_ps(arg12, temp0_962, temp0_968)
            float temp0_975[0x8] = _mm256_fmsub_ps(temp0_972, temp0_960, temp0_969)
            float temp0_976[0x8] = _mm256_add_ps(temp0_964, arg12)
            float temp0_977[0x8] = _mm256_add_ps(arg9, temp0_975)
            float temp0_979[0x8] = _mm256_add_ps(temp0_976, _mm256_broadcast_ss(arg18[4]))
            arg9 = _mm256_broadcast_ss(arg18[5])
            arg12 = _mm256_broadcast_ss(arg18[6])
            float temp0_982[0x8] = _mm256_broadcast_ss(var_5d0_1)
            arg7 = _mm256_cmp_ps(temp0_982, temp0_979, 1)
            float temp0_984[0x8] = _mm256_and_ps(arg7, temp0_931)
            temp0_976[0].o = _mm256_extractf128_ps(temp0_984[0].o, 1)
            temp0_976[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_984[0].o, temp0_976[0].o)
            temp0_976[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_976[0].o, temp0_966[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_976[0].o) != 0)
                var_660_7 = _mm256_maskstore_ps(arg7, temp0_982)
            
            float temp0_990[0x8] = _mm256_fmsub_ps(temp0_970, arg6, temp0_973)
            arg9 = _mm256_add_ps(temp0_977, arg9)
            zmm1 = _mm256_andnot_ps(arg7, temp0_931)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm1 = _mm256_xor_ps(arg7, _mm256_cmpeq_epi32(zmm1, zmm1))
                arg7 = _mm256_broadcast_ss(var_5e0_1)
                arg6 = _mm256_cmp_ps(temp0_979, arg7, 1)
                arg8 = _mm256_and_ps(arg6, zmm1)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg8, temp0_931)) != 0)
                    var_660_7 = _mm256_maskstore_ps(arg8, arg7)
                
                zmm1 = _mm256_andnot_ps(arg6, zmm1)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm1, temp0_931)) != 0)
                    var_660_7 = _mm256_maskstore_ps(zmm1, temp0_979)
            
            int32_t var_500_4[0x8] = zmm2
            float temp0_1006[0x8] = _mm256_add_ps(temp0_966, temp0_990)
            float temp0_1007[0x8] = _mm256_broadcast_ss(var_5cc_1)
            float temp0_1008[0x8] = _mm256_cmp_ps(temp0_1007, arg9, 1)
            zmm3 = _mm256_and_ps(temp0_1008, temp0_931)
            arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1008[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                var_640_7 = _mm256_maskstore_ps(temp0_1008, temp0_1007)
            
            float temp0_1015[0x8] = _mm256_add_ps(temp0_1006, arg12)
            zmm1 = _mm256_andnot_ps(temp0_1008, temp0_931)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm0 = temp0_1008 ^ _mm256_cmpeq_epi32(zmm1, zmm1)
                zmm3 = _mm256_broadcast_ss(temp0_303)
                float temp0_1020[0x8] = _mm256_cmp_ps(arg9, zmm3, 1)
                arg5 = _mm256_and_ps(temp0_1020, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, temp0_931)) != 0)
                    var_640_7 = _mm256_maskstore_ps(arg5, zmm3)
                
                zmm0 = _mm256_andnot_ps(temp0_1020, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, temp0_931)) != 0)
                    var_640_7 = _mm256_maskstore_ps(zmm0, arg9)
            
            float temp0_1029[0x8] = _mm256_broadcast_ss(var_5c8_1)
            float temp0_1030[0x8] = _mm256_cmp_ps(temp0_1029, temp0_1015, 1)
            int32_t temp0_1031[0x8] = _mm256_and_ps(temp0_1030, temp0_931)
            zmm3[0].o = _mm256_extractf128_ps(temp0_1031[0].o, 1)
            temp0_1031[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1031[0].o, zmm3[0].o)
            temp0_1031[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1031[0].o, temp0_1030[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1031[0].o) != 0)
                var_620_13 = _mm256_maskstore_ps(temp0_1030, temp0_1029)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(temp0_1030, temp0_931)) != 0)
                zmm0 = __vxorps_ymmqq_ymmqq_memqq(temp0_1030, data_142fc9420)
                float temp0_1040[0x8] = _mm256_broadcast_ss(temp0_304)
                float temp0_1041[0x8] = _mm256_cmp_ps(temp0_1015, temp0_1040, 1)
                arg5 = _mm256_and_ps(temp0_1041, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, temp0_931)) != 0)
                    var_620_13 = _mm256_maskstore_ps(arg5, temp0_1040)
                
                zmm0 = _mm256_andnot_ps(temp0_1041, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, temp0_931)) != 0)
                    var_620_13 = _mm256_maskstore_ps(zmm0, temp0_1015)
            
            int32_t var_3c0_4[0x8] = arg9
            float temp0_1050[0x8] = _mm256_broadcast_ss(*arg1)
            float temp0_1051[0x8] = _mm256_broadcast_ss(*(arg1 + 4))
            float temp0_1052[0x8] = _mm256_sub_ps(var_640_7, temp0_1051)
            arg12 = _mm256_broadcast_ss(*(arg3 + 4))
            float temp0_1054[0x8] = _mm256_div_ps(temp0_1052, arg12)
            float temp0_1055[0x8] = _mm256_sub_ps(var_660_7, temp0_1050)
            float temp0_1056[0x8] = _mm256_broadcast_ss(arg1[1].d)
            zmm1 = _mm256_cvttps_epi32(temp0_1054)
            zmm2 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm1), arg12, temp0_1051)
            temp0_1051[0].o = __vmovsd_xmmdq_memq(*arg3)
            float temp0_1061[0x8] = _mm256_broadcast_ss(2f)
            arg7[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_1051[0].o, temp0_1061[0].o)
            temp0_1051[0].o = __vmovshdup_xmmdq_xmmdq(arg7[0].o)
            zmm3 = _mm256_broadcastsd_pd(temp0_1051[0].o)
            float var_4e0_4[0x8] = zmm3
            zmm2 = _mm256_add_ps(zmm3, zmm2)
            arg9 = _mm256_cmp_ps(zmm2, var_640_7, 1)
            zmm3 = _mm256_and_ps(arg9, temp0_931)
            temp0_1061[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1061[0].o)
            float temp0_1070[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_1071[0x8] = _mm256_div_ps(temp0_1055, temp0_1070)
            float temp0_1072[0x8] = _mm256_sub_ps(var_620_13, temp0_1056)
            float temp0_1073[0x8] = _mm256_broadcast_ss(arg3[1].d)
            float temp0_1074[0x8] = _mm256_div_ps(temp0_1072, temp0_1073)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1071[0].o)
            char temp0_1076 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
            zmm3 = _mm256_cvttps_epi32(temp0_1071)
            arg8 = _mm256_cvttps_epi32(temp0_1074)
            float temp0_1080[0x8] =
                _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm3), temp0_1070, temp0_1050)
            float temp0_1082[0x8] =
                _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg8), temp0_1073, temp0_1056)
            float temp0_1083[0x8] = _mm256_broadcastss_ps(arg7[0].o)
            float temp0_1084[0x8] = _mm256_add_ps(temp0_1083, temp0_1080)
            arg7[0].o = _mm_permute_ps(arg7[0].o, 0xea)
            arg15 = _mm256_broadcastsd_pd(arg7[0].o)
            float temp0_1087[0x8] = _mm256_cmp_ps(temp0_1084, var_660_7, 1)
            arg10 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc9420)
            zmm0 = _mm256_blendv_ps(arg10, zmm3, temp0_1087)
            float var_660_8[0x8] = zmm0
            float temp0_1090[0x8] = _mm256_cmp_ps(zmm2, var_640_7, 5)
            
            if (temp0_1076 != 0)
                zmm3 = zmm1
            
            float temp0_1091[0x8] = _mm256_add_ps(arg15, temp0_1082)
            int32_t temp0_1092[0x8] = _mm256_and_ps(temp0_931, temp0_1090)
            arg7[0].o = _mm256_extractf128_ps(temp0_1092[0].o, 1)
            temp0_1092[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1092[0].o, arg7[0].o)
            temp0_1092[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1092[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1092[0].o) != 0)
                arg10 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, data_142fc9420)
            
            float temp0_1098[0x8] = _mm256_blendv_ps(arg10, zmm3, arg9)
            float var_640_8[0x8] = temp0_1098
            zmm2 = var_620_13
            float temp0_1099[0x8] = _mm256_cmp_ps(temp0_1091, zmm2, 5)
            arg9 = _mm256_cmp_ps(temp0_1091, zmm2, 1)
            int32_t temp0_1101[0x8] = _mm256_and_ps(arg9, temp0_931)
            arg7[0].o = _mm256_extractf128_ps(temp0_1101[0].o, 1)
            temp0_1101[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1101[0].o, arg7[0].o)
            temp0_1101[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1101[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1101[0].o) != 0)
                zmm3 = arg8
            
            int32_t temp0_1106[0x8] = _mm256_and_ps(temp0_931, temp0_1099)
            arg7[0].o = _mm256_extractf128_ps(temp0_1106[0].o, 1)
            temp0_1106[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1106[0].o, arg7[0].o)
            temp0_1106[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1106[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1106[0].o) != 0)
                arg10 = __vpaddd_ymmqq_ymmqq_memqq(arg8, data_142fc9420)
            
            zmm2 = _mm256_blendv_ps(arg10, zmm3, arg9)
            float temp0_1114[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm0), temp0_1070, temp0_1050)
            float temp0_1116[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_1098), arg12, temp0_1051)
            float temp0_1118[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), temp0_1073, temp0_1056)
            float temp0_1119[0x8] = _mm256_add_ps(temp0_1083, temp0_1114)
            float temp0_1120[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1116, var_4e0_4)
            float temp0_1121[0x8] = _mm256_add_ps(arg15, temp0_1118)
            arg9 = var_660_7
            float temp0_1123[0x8] = _mm256_div_ps(_mm256_sub_ps(arg9, temp0_1119), temp0_1070)
            float temp0_1125[0x8] = _mm256_div_ps(_mm256_sub_ps(var_640_7, temp0_1120), arg12)
            float temp0_1127[0x8] = _mm256_div_ps(_mm256_sub_ps(var_620_13, temp0_1121), temp0_1073)
            int32_t var_620_14[0x8] = zmm2
            float var_580_8[0x8] = temp0_1123
            float var_560_8[0x8] = temp0_1125
            float var_540_8[0x8] = temp0_1127
            zmm1 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, data_142fc9420)
            zmm2 = zmm1 & temp0_931
            temp0_1123[0].o = _mm256_extracti128_si256(zmm2, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_1123[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                var_660_8 = _mm256_maskstore_ps(zmm1, zmm0)
                var_580_8 = _mm256_maskstore_ps(zmm1, zmm0)
                zmm0 = var_660_8
            
            int32_t rax_106 = *arg4
            zmm1[0].o = zx.o(rax_106 - 1)
            zmm0 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            zmm1 = zmm0 & temp0_931
            temp0_1123[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1123[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(rax_106 - 2)
                var_660_8 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                zmm1 = _mm256_broadcast_ss(1f)
                var_580_8 = _mm256_maskstore_ps(zmm0, zmm1)
            
            float temp0_1146[0x8] = __vsubps_ymmqq_ymmqq_memqq(arg9, temp0_979)
            zmm1[0].o = zx.o(0)
            zmm3 = var_640_8
            arg5 = _mm256_cmpeq_epi32(zmm3, _mm256_cmpeq_epi32(temp0_1127, temp0_1127))
            arg6 = arg5 & temp0_931
            temp0_1121[0].o = _mm256_extracti128_si256(arg6, 1)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_1121[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_1146[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                zmm3[0].o = zx.o(0)
                var_640_8 = _mm256_maskstore_ps(arg5, zmm3)
                var_560_8 = _mm256_maskstore_ps(arg5, zmm3)
                zmm3 = var_640_8
            
            float temp0_1155[0x8] = _mm256_sub_ps(var_640_7, var_3c0_4)
            float temp0_1156[0x8] = _mm256_fmadd_ps(temp0_1146, temp0_1146, zmm1)
            int32_t rdx_16 = arg4[1]
            zmm1[0].o = zx.o(rdx_16 - 1)
            zmm1 = _mm256_cmpeq_epi32(zmm3, _mm256_broadcastd_epi32(zmm1[0]))
            zmm3 = zmm1 & temp0_931
            arg5[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1156[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm3[0].o = zx.o(rdx_16 - 2)
                var_640_8 = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm3[0]))
                var_560_8 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
            
            zmm2 = __vsubps_ymmqq_ymmqq_memqq(var_620_13, temp0_1015)
            float temp0_1168[0x8] = _mm256_fmadd_ps(temp0_1155, temp0_1155, temp0_1156)
            zmm0 = var_620_14
            zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_cmpeq_epi32(var_620_13, var_620_13))
            zmm3 = zmm1 & temp0_931
            temp0_1121[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1121[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm0[0].o = zx.o(0)
                float temp0_1175[0x8] = _mm256_maskstore_ps(zmm1, zmm0)
                var_540_8 = _mm256_maskstore_ps(zmm1, zmm0)
                zmm0 = temp0_1175
            
            int32_t var_5a0_8[0x8] = _mm256_fmadd_ps(zmm2, zmm2, temp0_1168)
            int32_t rdx_19 = arg4[2]
            zmm1[0].o = zx.o(rdx_19 - 1)
            zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            arg10 = temp0_931
            zmm3 = zmm1 & temp0_931
            temp0_1168[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1168[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm0[0].o = zx.o(rdx_19 - 2)
                float temp0_1185[0x8] = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
                var_540_8 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
                zmm0 = temp0_1185
            
            zmm1 = __vpbroadcastd_ymmqq_memd(*(arg17 + 4))
            arg9 = var_640_8
            arg13 = _mm256_mullo_epi32(zmm1, var_660_8)
            arg6 = _mm256_add_epi32(arg13, arg9)
            arg11 = __vpbroadcastd_ymmqq_memd(*(arg17 + 8))
            arg8 = _mm256_mullo_epi32(arg6, arg11)
            arg6 = _mm256_add_epi32(arg8, zmm0)
            int64_t rax_109 = *(arg17 + 0x10)
            arg7 = _mm256_slli_epi32(arg6, 2)
            arg6[0].o = zx.o(0)
            float temp0_1195[0x8]
            int32_t temp1_37
            temp0_1195, temp1_37 = _mm256_i32gather_ps(arg6, *(rax_109 + arg7[0].q), arg10)
            uint32_t temp0_1196[0x8] = _mm256_cmpeq_epi32(arg12, arg12)
            int32_t temp0_1198[0x8] =
                _mm256_mullo_epi32(zmm1, _mm256_sub_epi32(var_660_8, temp0_1196))
            arg5 = _mm256_mullo_epi32(_mm256_add_epi32(temp0_1198, arg9), arg11)
            zmm1 = _mm256_slli_epi32(_mm256_add_epi32(arg5, zmm0), 2)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_1204[0x8]
            int32_t temp1_38
            temp0_1204, temp1_38 = _mm256_i32gather_ps(arg7, *(rax_109 + zmm1[0].q), arg10)
            arg15 = _mm256_sub_epi32(arg9, temp0_1196)
            arg13 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, arg15), arg11)
            int32_t temp0_1208[0x8] = _mm256_add_epi32(arg13, zmm0)
            arg16 = _mm256_slli_epi32(temp0_1208, 2)
            temp0_1208[0].o = zx.o(0)
            float temp0_1210[0x8]
            int32_t temp1_39
            temp0_1210, temp1_39 = _mm256_i32gather_ps(temp0_1208, *(rax_109 + arg16[0].q), arg10)
            arg9 = temp0_1210
            int32_t temp0_1212[0x8] = _mm256_mullo_epi32(_mm256_add_epi32(temp0_1198, arg15), arg11)
            arg11 = _mm256_slli_epi32(_mm256_add_epi32(temp0_1212, zmm0), 2)
            arg15[0].o = zx.o(0)
            float temp0_1215[0x8]
            int32_t temp1_40
            temp0_1215, temp1_40 = _mm256_i32gather_ps(arg15, *(rax_109 + arg11[0].q), arg10)
            arg15 = temp0_1215
            arg14 = temp1_40
            zmm0 = _mm256_sub_epi32(zmm0, temp0_1196)
            arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg8, zmm0), 2)
            temp0_1196[0].o = zx.o(0)
            float temp0_1219[0x8]
            int32_t temp1_41
            temp0_1219, temp1_41 = _mm256_i32gather_ps(temp0_1196, *(rax_109 + arg8[0].q), arg10)
            arg12 = temp0_1219
            arg11 = temp1_41
            arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg5, zmm0), 2)
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            float temp0_1223[0x8]
            int32_t temp1_42
            temp0_1223, temp1_42 = _mm256_i32gather_ps(arg11, *(rax_109 + arg8[0].q), arg10)
            arg11 = temp0_1223
            arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg13, zmm0), 2)
            arg13[0].o = zx.o(0)
            float temp0_1226[0x8]
            int32_t temp1_43
            temp0_1226, temp1_43 = _mm256_i32gather_ps(arg13, *(rax_109 + arg8[0].q), arg10)
            arg13 = temp0_1226
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(temp0_1212, zmm0), 2)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            float temp0_1230[0x8]
            int32_t temp1_44
            temp0_1230, temp1_44 = _mm256_i32gather_ps(arg8, *(rax_109 + zmm0[0].q), arg10)
            arg8 = temp0_1230
            float temp0_1232[0x8] =
                _mm256_fmadd_ps(_mm256_sub_ps(temp0_1204, temp0_1195), var_580_8, temp0_1195)
            zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(arg15, arg9), var_580_8, arg9)
            float temp0_1236[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg11, arg12), var_580_8, arg12)
            arg7 = _mm256_fmadd_ps(_mm256_sub_ps(arg8, arg13), var_580_8, arg13)
            zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(zmm2, temp0_1232), var_560_8, temp0_1232)
            zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(
                    _mm256_fmadd_ps(_mm256_sub_ps(arg7, temp0_1236), var_560_8, temp0_1236), zmm2), 
                zmm2, var_540_8)
            var_560_8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_560_8[0].o, var_560_8[0].o)
            arg5 = var_5a0_8
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(arg5, var_560_8, 0xc), arg10)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                float temp0_1252[0x8] = _mm256_rsqrt_ps(arg5)
                float temp0_1253[0x8] = _mm256_mul_ps(arg5, temp0_1252)
                float temp0_1257[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_1252, 
                        _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_1252, temp0_1253)), 
                    var_3a0)
                float temp0_1258[0x8] = _mm256_rcp_ps(temp0_1257)
                zmm0 = _mm256_blendv_ps(zmm0, 
                    _mm256_fmadd_ps(_mm256_fnmadd_ps(temp0_1061, temp0_1258, temp0_1257), 
                        temp0_1258, zmm0), 
                    _mm256_cvtepi16_epi32(zmm1[0].o))
            
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg22), 1), arg10)
            int32_t i_7 = _mm256_movemask_ps(zmm1)
            
            if (i_7 == 0)
                result = 0
            else
                uint64_t i_1 = zx.q(i_7)
                result = 0
                
                do
                    uint64_t rdx_22 = _tzcnt_u64(i_1)
                    i_1 &= not.q(1 << (rdx_22 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        float var_200[0x8] = zmm0
                        uint64_t rdx_23 = zx.q(rdx_22.d) & 7
                        zmm1[0].o = var_200[rdx_23]
                        *arg22 = zmm1[0]
                        int32_t var_1e0[0x8] = var_500_4
                        *arg21 = var_1e0[rdx_23]
                    
                    result.b = 1
                while (i_1 != 0)
else
    float var_5b0_1 = zmm1[0]
    float var_5ac_1 = zmm2[0]
    float var_5a8_1 = zmm3[0]
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_5c0_1 = zmm0[0]
    float temp0_13 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_14 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t rsi_4 = ((arg23 s>> 0x1f u>> 0x1d) + arg23) & 0xfffffff8
    uint64_t rdx
    
    if (rsi_4 s<= 0)
        rdx = 0
        result = 0
    else
        result = 0
        float temp0_15[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
        float temp0_16[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        float temp0_19[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
        zmm0 = _mm256_broadcast_ss(1.12103877e-44f)
        float var_380_1[0x8] = zmm0
        rdx = 0
        
        while (true)
            bool cond:3_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:3_1))
                zmm3 = *(arg20 + sx.q((rdx << 2).d))
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm3, temp0_15)
                zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                float temp0_24[0x8]
                int32_t temp1_1
                temp0_24, temp1_1 = _mm256_i32gather_ps(zmm2, *(arg19 + (zmm0[0].q << 2)), zmm1)
                zmm2 = temp0_24
                float var_4e0_1[0x8] = zmm3
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm3, temp0_16)
                zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, temp0_19)
                zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                float temp0_29[0x8]
                int32_t temp1_2
                temp0_29, temp1_2 = _mm256_i32gather_ps(arg5, *(arg19 + zmm1[0].q), zmm3)
                zmm3 = temp1_2
                zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_380_1)
                zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                float temp0_33[0x8]
                int32_t temp1_3
                temp0_33, temp1_3 = _mm256_i32gather_ps(zmm3, *(arg19 + zmm0[0].q), zmm1)
                int32_t var_580_1[0x8] = zmm2
                float var_520_1[0x8] = arg6
                float temp0_34[0x8] = _mm256_broadcast_ss(arg18[3])
                float var_660_1[0x8] = temp0_34
                float var_640_1[0x8] = temp0_34
                float var_620_1[0x8] = temp0_34
                float var_600_1[0x8] = temp0_34
                float temp0_35[0x8] = _mm256_broadcast_ss(arg18[1])
                float temp0_36[0x8] = _mm256_broadcast_ss(arg18[2])
                float temp0_37[0x8] = _mm256_broadcast_ss(*arg18)
                float temp0_38[0x8] = _mm256_mul_ps(temp0_29, temp0_36)
                arg9 = _mm256_mul_ps(temp0_33, temp0_37)
                float temp0_40[0x8] = _mm256_mul_ps(zmm2, temp0_35)
                float temp0_41[0x8] = _mm256_fmsub_ps(temp0_33, temp0_35, temp0_38)
                zmm2 = _mm256_fmsub_ps(zmm2, temp0_36, arg9)
                float temp0_43[0x8] = _mm256_fmsub_ps(temp0_29, temp0_37, temp0_40)
                float temp0_44[0x8] = _mm256_add_ps(temp0_41, temp0_41)
                float temp0_45[0x8] = _mm256_add_ps(zmm2, zmm2)
                zmm2 = _mm256_add_ps(temp0_43, temp0_43)
                arg9 = _mm256_fmadd_ps(var_580_1, temp0_34, temp0_44)
                float temp0_48[0x8] = _mm256_fmadd_ps(temp0_29, temp0_34, temp0_45)
                float temp0_49[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_34, zmm2, temp0_33)
                float temp0_51[0x8] =
                    _mm256_fmsub_ps(_mm256_mul_ps(temp0_45, temp0_36), zmm2, temp0_35)
                zmm2 = _mm256_mul_ps(zmm2, temp0_37)
                float temp0_53[0x8] = _mm256_mul_ps(temp0_44, temp0_35)
                arg9 = _mm256_add_ps(arg9, temp0_51)
                float temp0_56[0x8] =
                    _mm256_add_ps(temp0_48, _mm256_fmsub_ps(zmm2, temp0_44, temp0_36))
                float temp0_58[0x8] = _mm256_add_ps(arg9, _mm256_broadcast_ss(arg18[4]))
                float temp0_59[0x8] = _mm256_broadcast_ss(arg18[5])
                zmm2 = _mm256_broadcast_ss(arg18[6])
                arg9 = _mm256_broadcast_ss(var_5b0_1)
                float temp0_62[0x8] = _mm256_cmp_ps(arg9, temp0_58, 1)
                
                if (_mm256_movemask_ps(temp0_62) != 0)
                    var_660_1 = _mm256_maskstore_ps(temp0_62, arg9)
                
                float temp0_65[0x8] = _mm256_fmsub_ps(temp0_37, temp0_45, temp0_53)
                arg9 = _mm256_add_ps(temp0_56, temp0_59)
                zmm3 = _mm256_xor_ps(temp0_62, arg12)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_69[0x8] = _mm256_broadcast_ss(var_5c0_1)
                    float temp0_70[0x8] = _mm256_cmp_ps(temp0_58, temp0_69, 1)
                    arg7 = _mm256_and_ps(temp0_70, zmm3)
                    
                    if (_mm256_movemask_ps(arg7) != 0)
                        var_660_1 = _mm256_maskstore_ps(arg7, temp0_69)
                    
                    zmm3 = _mm256_andnot_ps(temp0_70, zmm3)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_660_1 = _mm256_maskstore_ps(zmm3, temp0_58)
                
                float temp0_77[0x8] = _mm256_add_ps(temp0_49, temp0_65)
                float temp0_78[0x8] = _mm256_broadcast_ss(var_5ac_1)
                float temp0_79[0x8] = _mm256_cmp_ps(temp0_78, arg9, 1)
                
                if (_mm256_movemask_ps(temp0_79) != 0)
                    var_640_1 = _mm256_maskstore_ps(temp0_79, temp0_78)
                
                float temp0_82[0x8] = _mm256_add_ps(temp0_77, zmm2)
                zmm0 = _mm256_xor_ps(temp0_79, arg12)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2 = _mm256_broadcast_ss(temp0_13)
                    float temp0_86[0x8] = _mm256_cmp_ps(arg9, zmm2, 1)
                    zmm3 = _mm256_and_ps(temp0_86, zmm0)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_640_1 = _mm256_maskstore_ps(zmm3, zmm2)
                    
                    zmm0 = _mm256_andnot_ps(temp0_86, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_640_1 = _mm256_maskstore_ps(zmm0, arg9)
                
                float temp0_93[0x8] = _mm256_broadcast_ss(var_5a8_1)
                float temp0_94[0x8] = _mm256_cmp_ps(temp0_93, temp0_82, 1)
                
                if (_mm256_movemask_ps(temp0_94) != 0)
                    var_620_1 = _mm256_maskstore_ps(temp0_94, temp0_93)
                
                zmm0 = _mm256_xor_ps(temp0_94, arg12)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2 = _mm256_broadcast_ss(temp0_14)
                    float temp0_100[0x8] = _mm256_cmp_ps(temp0_82, zmm2, 1)
                    zmm3 = _mm256_and_ps(temp0_100, zmm0)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_620_1 = _mm256_maskstore_ps(zmm3, zmm2)
                    
                    zmm0 = _mm256_andnot_ps(temp0_100, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_620_1 = _mm256_maskstore_ps(zmm0, temp0_82)
                
                int32_t var_5a0_1[0x8] = arg9
                arg14 = var_660_1
                zmm2 = var_620_1
                float temp0_107[0x8] = _mm256_broadcast_ss(*arg1)
                float temp0_108[0x8] = _mm256_sub_ps(arg14, temp0_107)
                arg12 = _mm256_broadcast_ss(*(arg1 + 4))
                float temp0_110[0x8] = _mm256_sub_ps(var_640_1, arg12)
                float temp0_111[0x8] = _mm256_broadcast_ss(arg1[1].d)
                int32_t var_420_1[0x8] = zmm2
                float temp0_112[0x8] = _mm256_sub_ps(zmm2, temp0_111)
                float temp0_113[0x8] = _mm256_broadcast_ss(*arg3)
                float temp0_114[0x8] = _mm256_div_ps(temp0_108, temp0_113)
                float temp0_115[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
                float temp0_116[0x8] = _mm256_div_ps(temp0_110, temp0_115)
                float temp0_117[0x8] = _mm256_broadcast_ss(arg3[1].d)
                arg9 = _mm256_div_ps(temp0_112, temp0_117)
                zmm3 = _mm256_cvttps_epi32(temp0_114)
                arg15 = _mm256_cvttps_epi32(temp0_116)
                int32_t temp0_121[0x8] = _mm256_cvttps_epi32(arg9)
                float temp0_122[0x8] = _mm256_cvtepi32_ps(zmm3)
                float temp0_123[0x8] = _mm256_cvtepi32_ps(arg15)
                float temp0_124[0x8] = _mm256_cvtepi32_ps(temp0_121)
                float temp0_125[0x8] = _mm256_fmadd_ps(temp0_122, temp0_113, temp0_107)
                float temp0_126[0x8] = _mm256_fmadd_ps(temp0_123, temp0_115, arg12)
                float temp0_127[0x8] = _mm256_fmadd_ps(temp0_124, temp0_117, temp0_111)
                temp0_121[0].o = __vmovsd_xmmdq_memq(*arg3)
                float temp0_129[0x8] = _mm256_broadcast_ss(2f)
                temp0_121[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_121[0].o, temp0_129[0].o)
                float temp0_131[0x8] = _mm256_broadcastss_ps(temp0_121[0].o)
                float temp0_132[0x8] = _mm256_add_ps(temp0_131, temp0_125)
                temp0_131[0].o = __vmovshdup_xmmdq_xmmdq(temp0_121[0].o)
                arg6 = _mm256_broadcastsd_pd(temp0_131[0].o)
                float temp0_135[0x8] = _mm256_add_ps(arg6, temp0_126)
                temp0_121[0].o = _mm_permute_ps(temp0_121[0].o, 0xea)
                int32_t var_440_1[0x8] = arg14
                float temp0_137[0x8] = _mm256_cmp_ps(temp0_132, arg14, 1)
                arg8 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc9420)
                arg5 = _mm256_blendv_ps(arg8, zmm3, temp0_137)
                float var_660_2[0x8] = arg5
                arg9 = _mm256_broadcastsd_pd(temp0_121[0].o)
                arg14 = _mm256_cmp_ps(temp0_135, var_640_1, 1)
                
                if (_mm256_movemask_ps(arg14) != 0)
                    zmm3 = arg15
                
                float temp0_143[0x8] = _mm256_add_ps(arg9, temp0_127)
                zmm2 = _mm256_cmp_ps(temp0_135, var_640_1, 5)
                arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_115[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                    arg8 = __vpaddd_ymmqq_ymmqq_memqq(arg15, data_142fc9420)
                
                float temp0_150[0x8] = _mm256_blendv_ps(arg8, zmm3, arg14)
                float var_640_2[0x8] = temp0_150
                arg7 = var_420_1
                arg14 = _mm256_cmp_ps(temp0_143, arg7, 1)
                
                if (_mm256_movemask_ps(arg14) != 0)
                    zmm3 = temp0_121
                
                zmm2 = _mm256_cmp_ps(temp0_143, arg7, 5)
                arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_115[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                    arg8 = __vpaddd_ymmqq_ymmqq_memqq(temp0_121, data_142fc9420)
                
                zmm2 = _mm256_blendv_ps(arg8, zmm3, arg14)
                float temp0_161[0x8] =
                    _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg5), temp0_113, temp0_107)
                float temp0_163[0x8] =
                    _mm256_fmadd_ps(_mm256_cvtepi32_ps(temp0_150), temp0_115, arg12)
                float temp0_165[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), temp0_117, temp0_111)
                float temp0_166[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_161, temp0_131)
                float temp0_167[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_163, arg6)
                float temp0_168[0x8] = _mm256_add_ps(arg9, temp0_165)
                float temp0_170[0x8] = _mm256_div_ps(_mm256_sub_ps(var_440_1, temp0_166), temp0_113)
                float temp0_172[0x8] = _mm256_div_ps(_mm256_sub_ps(var_640_1, temp0_167), temp0_115)
                float temp0_173[0x8] = _mm256_sub_ps(arg7, temp0_168)
                float temp0_174[0x8] = _mm256_div_ps(temp0_173, temp0_117)
                int32_t var_620_2[0x8] = zmm2
                float var_580_2[0x8] = temp0_170
                float var_560_2[0x8] = temp0_172
                float var_540_2[0x8] = temp0_174
                arg11 = _mm256_cmpeq_epi32(temp0_107, temp0_107)
                zmm0 = _mm256_cmpeq_epi32(arg5, arg11)
                bool cond:9_1 = _mm256_movemask_ps(zmm0) == 0
                temp0_173[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_173[0].o, temp0_173[0].o)
                
                if (not(cond:9_1))
                    var_660_2 = _mm256_maskstore_ps(zmm0, temp0_173)
                    var_580_2 = _mm256_maskstore_ps(zmm0, temp0_173)
                    arg5 = var_660_2
                
                int32_t rax_21 = *arg4
                zmm0[0].o = zx.o(rax_21 - 1)
                zmm0 = _mm256_cmpeq_epi32(arg5, _mm256_broadcastd_epi32(zmm0[0]))
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    temp0_174[0].o = zx.o(rax_21 - 2)
                    var_660_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(temp0_174[0]))
                    var_580_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                
                zmm0 = var_640_2
                zmm1 = _mm256_cmpeq_epi32(zmm0, arg11)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_640_2 = _mm256_maskstore_ps(zmm1, temp0_173)
                    var_560_2 = _mm256_maskstore_ps(zmm1, temp0_173)
                    zmm0 = var_640_2
                
                float temp0_192[0x8] = _mm256_sub_ps(var_440_1, temp0_58)
                int32_t rax_24 = arg4[1]
                zmm2[0].o = zx.o(rax_24 - 1)
                zmm2 = _mm256_broadcastd_epi32(zmm2[0])
                zmm0 = _mm256_cmpeq_epi32(zmm0, zmm2)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2[0].o = zx.o(rax_24 - 2)
                    var_640_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm2[0]))
                    var_560_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                
                zmm2 = _mm256_sub_ps(arg7, temp0_82)
                float temp0_201[0x8] = _mm256_sub_ps(var_640_1, var_5a0_1)
                float temp0_202[0x8] = _mm256_fmadd_ps(temp0_192, temp0_192, temp0_173)
                zmm0 = var_620_2
                zmm3 = _mm256_cmpeq_epi32(zmm0, arg11)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_205[0x8] = _mm256_maskstore_ps(zmm3, temp0_173)
                    var_540_2 = _mm256_maskstore_ps(zmm3, temp0_173)
                    zmm0 = temp0_205
                
                int32_t var_5a0_2[0x8] = _mm256_mul_ps(zmm2, zmm2)
                arg10 = _mm256_fmadd_ps(temp0_201, temp0_201, temp0_202)
                int32_t rax_27 = arg4[2]
                temp0_202[0].o = zx.o(rax_27 - 1)
                zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(temp0_202[0]))
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm0[0].o = zx.o(rax_27 - 2)
                    float temp0_213[0x8] =
                        _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
                    var_540_2 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
                    zmm0 = temp0_213
                
                zmm2 = __vpbroadcastd_ymmqq_memd(*(arg17 + 4))
                int32_t temp0_217[0x8] = _mm256_mullo_epi32(zmm2, var_660_2)
                zmm1 = _mm256_add_epi32(temp0_217, var_640_2)
                uint32_t temp0_219[0x8] = __vpbroadcastd_ymmqq_memd(*(arg17 + 8))
                arg6 = _mm256_mullo_epi32(zmm1, temp0_219)
                zmm1 = _mm256_add_epi32(arg6, zmm0)
                int64_t rax_30 = *(arg17 + 0x10)
                arg5 = _mm256_slli_epi32(zmm1, 2)
                arg8 = _mm256_cmpeq_epi32(var_640_1, var_640_1)
                zmm1[0].o = zx.o(0)
                float temp0_224[0x8]
                int32_t temp1_4
                temp0_224, temp1_4 = _mm256_i32gather_ps(zmm1, *(rax_30 + arg5[0].q), arg8)
                zmm3 = _mm256_sub_epi32(var_660_2, arg11)
                arg13 = _mm256_mullo_epi32(zmm2, zmm3)
                arg8 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, var_640_2), temp0_219)
                zmm2 = _mm256_slli_epi32(_mm256_add_epi32(arg8, zmm0), 2)
                zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                float temp0_233[0x8]
                int32_t temp1_5
                temp0_233, temp1_5 = _mm256_i32gather_ps(arg5, *(rax_30 + zmm2[0].q), zmm3)
                zmm2 = var_560_2
                arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                int32_t temp0_235[0x8] = _mm256_sub_epi32(var_640_2, arg11)
                int32_t temp0_237[0x8] =
                    _mm256_mullo_epi32(_mm256_add_epi32(temp0_217, temp0_235), temp0_219)
                arg7 = _mm256_add_epi32(temp0_237, zmm0)
                arg15 = _mm256_slli_epi32(arg7, 2)
                arg16 = _mm256_cmpeq_epi32(temp0_113, temp0_113)
                arg7[0].o = zx.o(0)
                float temp0_241[0x8]
                int32_t temp1_6
                temp0_241, temp1_6 = _mm256_i32gather_ps(arg7, *(rax_30 + arg15[0].q), arg16)
                arg7 = temp0_241
                arg16 = temp1_6
                arg12 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, temp0_235), temp0_219)
                arg13 = _mm256_slli_epi32(_mm256_add_epi32(arg12, zmm0), 2)
                arg14 = _mm256_cmpeq_epi32(temp0_235, temp0_235)
                arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                float temp0_248[0x8]
                int32_t temp1_7
                temp0_248, temp1_7 = _mm256_i32gather_ps(arg15, *(rax_30 + arg13[0].q), arg14)
                arg15 = temp0_248
                arg14 = temp1_7
                zmm0 = _mm256_sub_epi32(zmm0, arg11)
                arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg6, zmm0), 2)
                arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                float temp0_254[0x8]
                int32_t temp1_8
                temp0_254, temp1_8 = _mm256_i32gather_ps(arg14, *(rax_30 + arg6[0].q), arg13)
                arg14 = temp0_254
                arg13 = temp1_8
                arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg8, zmm0), 2)
                arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                float temp0_259[0x8]
                int32_t temp1_9
                temp0_259, temp1_9 = _mm256_i32gather_ps(arg13, *(rax_30 + arg6[0].q), arg8)
                arg13 = temp0_259
                arg8 = temp1_9
                arg6 = _mm256_slli_epi32(_mm256_add_epi32(temp0_237, zmm0), 2)
                arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                temp0_237[0].o = zx.o(0)
                float temp0_263[0x8]
                int32_t temp1_10
                temp0_263, temp1_10 = _mm256_i32gather_ps(temp0_237, *(rax_30 + arg6[0].q), arg8)
                arg9 = temp0_263
                arg8 = temp1_10
                arg5 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_233, temp0_224), var_580_2, temp0_224)
                float temp0_266[0x8] = _mm256_sub_ps(arg15, arg7)
                zmm0 = _mm256_slli_epi32(_mm256_add_epi32(arg12, zmm0), 2)
                arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                float temp0_271[0x8]
                int32_t temp1_11
                temp0_271, temp1_11 = _mm256_i32gather_ps(arg8, *(rax_30 + zmm0[0].q), arg6)
                arg8 = temp0_271
                float temp0_272[0x8] = _mm256_fmadd_ps(temp0_266, var_580_2, arg7)
                float temp0_274[0x8] =
                    _mm256_fmadd_ps(_mm256_sub_ps(arg13, arg14), var_580_2, arg14)
                arg6 = _mm256_fmadd_ps(_mm256_sub_ps(arg8, arg9), var_580_2, arg9)
                float temp0_278[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(temp0_272, arg5), zmm2, arg5)
                zmm3 = _mm256_fmadd_ps(_mm256_sub_ps(arg6, temp0_274), zmm2, temp0_274)
                zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(_mm256_sub_ps(zmm3, temp0_278), temp0_278, 
                    var_540_2)
                zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg10, var_5a0_2)
                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                float temp0_285[0x8] = _mm256_cmp_ps(zmm2, arg6, 0xc)
                
                if (_mm256_movemask_ps(temp0_285) != 0)
                    float temp0_287[0x8] = _mm256_rsqrt_ps(zmm2)
                    zmm2 = _mm256_mul_ps(zmm2, temp0_287)
                    zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_mul_ps(temp0_287, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_287, zmm2)), 
                        var_3a0)
                    zmm3 = _mm256_rcp_ps(zmm2)
                    arg5 = _mm256_fmadd_ps(_mm256_fnmadd_ps(temp0_129, zmm3, zmm2), zmm3, zmm0)
                    zmm0 = _mm256_blendv_ps(zmm0, arg5, temp0_285)
                
                arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                zmm2 = var_4e0_1
                zmm1 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg22), 1)
                char i_4 = _mm256_movemask_ps(zmm1)
                
                if (i_4 == 0)
                    result = 0
                    rdx = zx.q(rdx.d + 8)
                    
                    if (rdx.d s>= rsi_4)
                        break
                    
                    continue
                else
                    uint64_t i_2 = zx.q(i_4)
                    result = 0
                    
                    do
                        uint64_t rbx_9 = _tzcnt_u64(i_2)
                        i_2 &= not.q(1 << (rbx_9 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            float var_240[0x8] = zmm0
                            uint64_t rbx_10 = zx.q(rbx_9.d) & 7
                            zmm1[0].o = var_240[rbx_10]
                            *arg22 = zmm1[0]
                            int32_t var_220[0x8] = zmm2
                            *arg21 = var_220[rbx_10]
                        
                        result.b = 1
                    while (i_2 != 0)
            
            rdx = zx.q(rdx.d + 8)
            
            if (rdx.d s>= rsi_4)
                break
    
    if (rdx.d s< arg23)
        bool cond:1_1 = result.b != 0
        result.b = 1
        
        if (not(cond:1_1))
            zmm0[0].o = zx.o(rdx.d)
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
            zmm1[0].o = zx.o(arg23)
            int32_t temp0_593[0x8] = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
            zmm2 = _mm256_maskload_ps(temp0_593, *(arg20 + sx.q(rdx.d << 2)))
            zmm0 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(3))
            zmm3[0].o = __vxorpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            float temp0_598[0x8]
            int32_t temp1_23
            temp0_598, temp1_23 = _mm256_i32gather_ps(zmm3, *(arg19 + (zmm0[0].q << 2)), temp0_593)
            zmm0 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(0xc))
            zmm1 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(4))
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_604[0x8]
            int32_t temp1_24
            temp0_604, temp1_24 = _mm256_i32gather_ps(arg5, *(arg19 + zmm1[0].q), temp0_593)
            arg6 = temp1_24
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            zmm0 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_609[0x8]
            int32_t temp1_25
            temp0_609, temp1_25 = _mm256_i32gather_ps(arg7, *(arg19 + zmm0[0].q), temp0_593)
            float var_2a0_1[0x8] = arg6
            float temp0_610[0x8] = _mm256_broadcast_ss(arg18[3])
            float var_660_5[0x8] = temp0_610
            float var_640_5[0x8] = temp0_610
            float var_620_9[0x8] = temp0_610
            float var_600_3[0x8] = temp0_610
            float temp0_611[0x8] = _mm256_broadcast_ss(arg18[1])
            float temp0_612[0x8] = _mm256_broadcast_ss(arg18[2])
            arg9 = _mm256_broadcast_ss(*arg18)
            float temp0_614[0x8] = _mm256_mul_ps(temp0_610, arg6)
            float temp0_615[0x8] = _mm256_mul_ps(temp0_604, temp0_612)
            float temp0_616[0x8] = _mm256_mul_ps(temp0_609, arg9)
            arg12 = _mm256_mul_ps(temp0_598, temp0_611)
            float temp0_618[0x8] = _mm256_fmsub_ps(temp0_615, temp0_611, temp0_609)
            float temp0_619[0x8] = _mm256_fmsub_ps(temp0_616, temp0_612, temp0_598)
            arg12 = _mm256_fmsub_ps(arg12, arg9, temp0_604)
            float temp0_621[0x8] = _mm256_sub_ps(temp0_614, temp0_614)
            float temp0_622[0x8] = _mm256_add_ps(temp0_618, temp0_618)
            arg6 = _mm256_add_ps(temp0_619, temp0_619)
            float temp0_624[0x8] = _mm256_add_ps(arg12, arg12)
            float temp0_625[0x8] = _mm256_add_ps(temp0_621, temp0_621)
            float var_580_5[0x8] = temp0_622
            float var_560_5[0x8] = arg6
            float var_540_5[0x8] = temp0_624
            float var_520_3[0x8] = temp0_625
            float temp0_626[0x8] = _mm256_fmadd_ps(temp0_598, temp0_610, temp0_622)
            arg9 = _mm256_fmadd_ps(temp0_604, temp0_610, arg6)
            float temp0_628[0x8] = _mm256_fmadd_ps(temp0_609, temp0_610, temp0_624)
            float var_180_1[0x8] = temp0_626
            int32_t var_160_1[0x8] = arg9
            float var_140_1[0x8] = temp0_628
            float var_120_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_625, temp0_610, var_2a0_1)
            float temp0_630[0x8] = _mm256_broadcast_ss(arg18[1])
            float temp0_631[0x8] = _mm256_broadcast_ss(arg18[2])
            float temp0_632[0x8] = _mm256_broadcast_ss(*arg18)
            arg12 = _mm256_mul_ps(arg6, temp0_631)
            float temp0_634[0x8] = _mm256_mul_ps(temp0_624, temp0_632)
            float temp0_635[0x8] = _mm256_mul_ps(temp0_622, temp0_630)
            arg12 = _mm256_fmsub_ps(arg12, temp0_624, temp0_630)
            float temp0_637[0x8] = _mm256_fmsub_ps(temp0_634, temp0_622, temp0_631)
            float temp0_638[0x8] = _mm256_add_ps(temp0_626, arg12)
            float temp0_639[0x8] = _mm256_add_ps(arg9, temp0_637)
            float temp0_641[0x8] = _mm256_add_ps(temp0_638, _mm256_broadcast_ss(arg18[4]))
            arg9 = _mm256_broadcast_ss(arg18[5])
            arg12 = _mm256_broadcast_ss(arg18[6])
            float temp0_644[0x8] = _mm256_broadcast_ss(var_5b0_1)
            arg7 = _mm256_cmp_ps(temp0_644, temp0_641, 1)
            arg11 = _mm256_and_ps(arg7, temp0_593)
            temp0_638[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            temp0_638[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, temp0_638[0].o)
            temp0_638[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_638[0].o, temp0_628[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_638[0].o) != 0)
                var_660_5 = _mm256_maskstore_ps(arg7, temp0_644)
            
            float temp0_652[0x8] = _mm256_fmsub_ps(temp0_632, arg6, temp0_635)
            arg9 = _mm256_add_ps(temp0_639, arg9)
            zmm1 = _mm256_andnot_ps(arg7, temp0_593)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm1 = _mm256_xor_ps(arg7, _mm256_cmpeq_epi32(zmm1, zmm1))
                arg7 = _mm256_broadcast_ss(var_5c0_1)
                arg6 = _mm256_cmp_ps(temp0_641, arg7, 1)
                arg8 = _mm256_and_ps(arg6, zmm1)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg8, temp0_593)) != 0)
                    var_660_5 = _mm256_maskstore_ps(arg8, arg7)
                
                zmm1 = _mm256_andnot_ps(arg6, zmm1)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm1, temp0_593)) != 0)
                    var_660_5 = _mm256_maskstore_ps(zmm1, temp0_641)
            
            int32_t var_500_3[0x8] = zmm2
            float temp0_668[0x8] = _mm256_add_ps(temp0_628, temp0_652)
            float temp0_669[0x8] = _mm256_broadcast_ss(var_5ac_1)
            float temp0_670[0x8] = _mm256_cmp_ps(temp0_669, arg9, 1)
            zmm3 = _mm256_and_ps(temp0_670, temp0_593)
            arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_670[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                var_640_5 = _mm256_maskstore_ps(temp0_670, temp0_669)
            
            float temp0_677[0x8] = _mm256_add_ps(temp0_668, arg12)
            zmm1 = _mm256_andnot_ps(temp0_670, temp0_593)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm0 = temp0_670 ^ _mm256_cmpeq_epi32(zmm1, zmm1)
                zmm3 = _mm256_broadcast_ss(temp0_13)
                float temp0_682[0x8] = _mm256_cmp_ps(arg9, zmm3, 1)
                arg5 = _mm256_and_ps(temp0_682, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, temp0_593)) != 0)
                    var_640_5 = _mm256_maskstore_ps(arg5, zmm3)
                
                zmm0 = _mm256_andnot_ps(temp0_682, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, temp0_593)) != 0)
                    var_640_5 = _mm256_maskstore_ps(zmm0, arg9)
            
            float temp0_691[0x8] = _mm256_broadcast_ss(var_5a8_1)
            float temp0_692[0x8] = _mm256_cmp_ps(temp0_691, temp0_677, 1)
            int32_t temp0_693[0x8] = _mm256_and_ps(temp0_692, temp0_593)
            zmm3[0].o = _mm256_extractf128_ps(temp0_693[0].o, 1)
            temp0_693[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_693[0].o, zmm3[0].o)
            temp0_693[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_693[0].o, temp0_692[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_693[0].o) != 0)
                var_620_9 = _mm256_maskstore_ps(temp0_692, temp0_691)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(temp0_692, temp0_593)) != 0)
                zmm0 = __vxorps_ymmqq_ymmqq_memqq(temp0_692, data_142fc9420)
                float temp0_702[0x8] = _mm256_broadcast_ss(temp0_14)
                float temp0_703[0x8] = _mm256_cmp_ps(temp0_677, temp0_702, 1)
                arg5 = _mm256_and_ps(temp0_703, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, temp0_593)) != 0)
                    var_620_9 = _mm256_maskstore_ps(arg5, temp0_702)
                
                zmm0 = _mm256_andnot_ps(temp0_703, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, temp0_593)) != 0)
                    var_620_9 = _mm256_maskstore_ps(zmm0, temp0_677)
            
            int32_t var_3c0_3[0x8] = arg9
            float temp0_712[0x8] = _mm256_broadcast_ss(*arg1)
            float temp0_713[0x8] = _mm256_broadcast_ss(*(arg1 + 4))
            float temp0_714[0x8] = _mm256_sub_ps(var_640_5, temp0_713)
            arg12 = _mm256_broadcast_ss(*(arg3 + 4))
            float temp0_716[0x8] = _mm256_div_ps(temp0_714, arg12)
            float temp0_717[0x8] = _mm256_sub_ps(var_660_5, temp0_712)
            float temp0_718[0x8] = _mm256_broadcast_ss(arg1[1].d)
            zmm1 = _mm256_cvttps_epi32(temp0_716)
            zmm2 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm1), arg12, temp0_713)
            temp0_713[0].o = __vmovsd_xmmdq_memq(*arg3)
            float temp0_723[0x8] = _mm256_broadcast_ss(2f)
            arg7[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_713[0].o, temp0_723[0].o)
            temp0_713[0].o = __vmovshdup_xmmdq_xmmdq(arg7[0].o)
            zmm3 = _mm256_broadcastsd_pd(temp0_713[0].o)
            float var_4e0_3[0x8] = zmm3
            zmm2 = _mm256_add_ps(zmm3, zmm2)
            arg9 = _mm256_cmp_ps(zmm2, var_640_5, 1)
            zmm3 = _mm256_and_ps(arg9, temp0_593)
            temp0_723[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_723[0].o)
            float temp0_732[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_733[0x8] = _mm256_div_ps(temp0_717, temp0_732)
            float temp0_734[0x8] = _mm256_sub_ps(var_620_9, temp0_718)
            float temp0_735[0x8] = _mm256_broadcast_ss(arg3[1].d)
            float temp0_736[0x8] = _mm256_div_ps(temp0_734, temp0_735)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_733[0].o)
            char temp0_738 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
            zmm3 = _mm256_cvttps_epi32(temp0_733)
            arg8 = _mm256_cvttps_epi32(temp0_736)
            float temp0_742[0x8] = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm3), temp0_732, temp0_712)
            float temp0_744[0x8] = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg8), temp0_735, temp0_718)
            float temp0_745[0x8] = _mm256_broadcastss_ps(arg7[0].o)
            float temp0_746[0x8] = _mm256_add_ps(temp0_745, temp0_742)
            arg7[0].o = _mm_permute_ps(arg7[0].o, 0xea)
            arg15 = _mm256_broadcastsd_pd(arg7[0].o)
            float temp0_749[0x8] = _mm256_cmp_ps(temp0_746, var_660_5, 1)
            arg10 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc9420)
            zmm0 = _mm256_blendv_ps(arg10, zmm3, temp0_749)
            float var_660_6[0x8] = zmm0
            float temp0_752[0x8] = _mm256_cmp_ps(zmm2, var_640_5, 5)
            
            if (temp0_738 != 0)
                zmm3 = zmm1
            
            float temp0_753[0x8] = _mm256_add_ps(arg15, temp0_744)
            int32_t temp0_754[0x8] = _mm256_and_ps(temp0_593, temp0_752)
            arg7[0].o = _mm256_extractf128_ps(temp0_754[0].o, 1)
            temp0_754[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_754[0].o, arg7[0].o)
            temp0_754[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_754[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_754[0].o) != 0)
                arg10 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, data_142fc9420)
            
            float temp0_760[0x8] = _mm256_blendv_ps(arg10, zmm3, arg9)
            float var_640_6[0x8] = temp0_760
            zmm2 = var_620_9
            float temp0_761[0x8] = _mm256_cmp_ps(temp0_753, zmm2, 5)
            arg9 = _mm256_cmp_ps(temp0_753, zmm2, 1)
            int32_t temp0_763[0x8] = _mm256_and_ps(arg9, temp0_593)
            arg7[0].o = _mm256_extractf128_ps(temp0_763[0].o, 1)
            temp0_763[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_763[0].o, arg7[0].o)
            temp0_763[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_763[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_763[0].o) != 0)
                zmm3 = arg8
            
            int32_t temp0_768[0x8] = _mm256_and_ps(temp0_593, temp0_761)
            arg7[0].o = _mm256_extractf128_ps(temp0_768[0].o, 1)
            temp0_768[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_768[0].o, arg7[0].o)
            temp0_768[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_768[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_768[0].o) != 0)
                arg10 = __vpaddd_ymmqq_ymmqq_memqq(arg8, data_142fc9420)
            
            zmm2 = _mm256_blendv_ps(arg10, zmm3, arg9)
            float temp0_776[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm0), temp0_732, temp0_712)
            float temp0_778[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_760), arg12, temp0_713)
            float temp0_780[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), temp0_735, temp0_718)
            float temp0_781[0x8] = _mm256_add_ps(temp0_745, temp0_776)
            float temp0_782[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_778, var_4e0_3)
            float temp0_783[0x8] = _mm256_add_ps(arg15, temp0_780)
            arg9 = var_660_5
            float temp0_785[0x8] = _mm256_div_ps(_mm256_sub_ps(arg9, temp0_781), temp0_732)
            float temp0_787[0x8] = _mm256_div_ps(_mm256_sub_ps(var_640_5, temp0_782), arg12)
            float temp0_789[0x8] = _mm256_div_ps(_mm256_sub_ps(var_620_9, temp0_783), temp0_735)
            int32_t var_620_10[0x8] = zmm2
            float var_580_6[0x8] = temp0_785
            float var_560_6[0x8] = temp0_787
            float var_540_6[0x8] = temp0_789
            zmm1 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, data_142fc9420)
            zmm2 = zmm1 & temp0_593
            temp0_785[0].o = _mm256_extracti128_si256(zmm2, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_785[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                var_660_6 = _mm256_maskstore_ps(zmm1, zmm0)
                var_580_6 = _mm256_maskstore_ps(zmm1, zmm0)
                zmm0 = var_660_6
            
            int32_t rax_82 = *arg4
            zmm1[0].o = zx.o(rax_82 - 1)
            zmm0 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            zmm1 = zmm0 & temp0_593
            temp0_785[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_785[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(rax_82 - 2)
                var_660_6 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                zmm1 = _mm256_broadcast_ss(1f)
                var_580_6 = _mm256_maskstore_ps(zmm0, zmm1)
            
            float temp0_808[0x8] = __vsubps_ymmqq_ymmqq_memqq(arg9, temp0_641)
            zmm1[0].o = zx.o(0)
            zmm3 = var_640_6
            arg5 = _mm256_cmpeq_epi32(zmm3, _mm256_cmpeq_epi32(temp0_789, temp0_789))
            arg6 = arg5 & temp0_593
            temp0_783[0].o = _mm256_extracti128_si256(arg6, 1)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_783[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_808[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                zmm3[0].o = zx.o(0)
                var_640_6 = _mm256_maskstore_ps(arg5, zmm3)
                var_560_6 = _mm256_maskstore_ps(arg5, zmm3)
                zmm3 = var_640_6
            
            float temp0_817[0x8] = _mm256_sub_ps(var_640_5, var_3c0_3)
            float temp0_818[0x8] = _mm256_fmadd_ps(temp0_808, temp0_808, zmm1)
            int32_t rdx_5 = arg4[1]
            zmm1[0].o = zx.o(rdx_5 - 1)
            zmm1 = _mm256_cmpeq_epi32(zmm3, _mm256_broadcastd_epi32(zmm1[0]))
            zmm3 = zmm1 & temp0_593
            arg5[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_818[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm3[0].o = zx.o(rdx_5 - 2)
                var_640_6 = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm3[0]))
                var_560_6 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
            
            zmm2 = __vsubps_ymmqq_ymmqq_memqq(var_620_9, temp0_677)
            float temp0_830[0x8] = _mm256_fmadd_ps(temp0_817, temp0_817, temp0_818)
            zmm0 = var_620_10
            zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_cmpeq_epi32(var_620_9, var_620_9))
            zmm3 = zmm1 & temp0_593
            temp0_783[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_783[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm0[0].o = zx.o(0)
                float temp0_837[0x8] = _mm256_maskstore_ps(zmm1, zmm0)
                var_540_6 = _mm256_maskstore_ps(zmm1, zmm0)
                zmm0 = temp0_837
            
            int32_t var_5a0_6[0x8] = _mm256_fmadd_ps(zmm2, zmm2, temp0_830)
            int32_t rdx_8 = arg4[2]
            zmm1[0].o = zx.o(rdx_8 - 1)
            zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            arg10 = temp0_593
            zmm3 = zmm1 & temp0_593
            temp0_830[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_830[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm0[0].o = zx.o(rdx_8 - 2)
                float temp0_847[0x8] = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
                var_540_6 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
                zmm0 = temp0_847
            
            zmm1 = __vpbroadcastd_ymmqq_memd(*(arg17 + 4))
            arg9 = var_640_6
            arg13 = _mm256_mullo_epi32(zmm1, var_660_6)
            arg6 = _mm256_add_epi32(arg13, arg9)
            arg11 = __vpbroadcastd_ymmqq_memd(*(arg17 + 8))
            arg8 = _mm256_mullo_epi32(arg6, arg11)
            arg6 = _mm256_add_epi32(arg8, zmm0)
            int64_t rax_85 = *(arg17 + 0x10)
            arg7 = _mm256_slli_epi32(arg6, 2)
            arg6[0].o = zx.o(0)
            float temp0_857[0x8]
            int32_t temp1_26
            temp0_857, temp1_26 = _mm256_i32gather_ps(arg6, *(rax_85 + arg7[0].q), arg10)
            uint32_t temp0_858[0x8] = _mm256_cmpeq_epi32(arg12, arg12)
            int32_t temp0_860[0x8] =
                _mm256_mullo_epi32(zmm1, _mm256_sub_epi32(var_660_6, temp0_858))
            arg5 = _mm256_mullo_epi32(_mm256_add_epi32(temp0_860, arg9), arg11)
            zmm1 = _mm256_slli_epi32(_mm256_add_epi32(arg5, zmm0), 2)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_866[0x8]
            int32_t temp1_27
            temp0_866, temp1_27 = _mm256_i32gather_ps(arg7, *(rax_85 + zmm1[0].q), arg10)
            arg15 = _mm256_sub_epi32(arg9, temp0_858)
            arg13 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, arg15), arg11)
            int32_t temp0_870[0x8] = _mm256_add_epi32(arg13, zmm0)
            arg16 = _mm256_slli_epi32(temp0_870, 2)
            temp0_870[0].o = zx.o(0)
            float temp0_872[0x8]
            int32_t temp1_28
            temp0_872, temp1_28 = _mm256_i32gather_ps(temp0_870, *(rax_85 + arg16[0].q), arg10)
            arg9 = temp0_872
            int32_t temp0_874[0x8] = _mm256_mullo_epi32(_mm256_add_epi32(temp0_860, arg15), arg11)
            arg11 = _mm256_slli_epi32(_mm256_add_epi32(temp0_874, zmm0), 2)
            arg15[0].o = zx.o(0)
            float temp0_877[0x8]
            int32_t temp1_29
            temp0_877, temp1_29 = _mm256_i32gather_ps(arg15, *(rax_85 + arg11[0].q), arg10)
            arg15 = temp0_877
            arg14 = temp1_29
            zmm0 = _mm256_sub_epi32(zmm0, temp0_858)
            arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg8, zmm0), 2)
            temp0_858[0].o = zx.o(0)
            float temp0_881[0x8]
            int32_t temp1_30
            temp0_881, temp1_30 = _mm256_i32gather_ps(temp0_858, *(rax_85 + arg8[0].q), arg10)
            arg12 = temp0_881
            arg11 = temp1_30
            arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg5, zmm0), 2)
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            float temp0_885[0x8]
            int32_t temp1_31
            temp0_885, temp1_31 = _mm256_i32gather_ps(arg11, *(rax_85 + arg8[0].q), arg10)
            arg11 = temp0_885
            arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg13, zmm0), 2)
            arg13[0].o = zx.o(0)
            float temp0_888[0x8]
            int32_t temp1_32
            temp0_888, temp1_32 = _mm256_i32gather_ps(arg13, *(rax_85 + arg8[0].q), arg10)
            arg13 = temp0_888
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(temp0_874, zmm0), 2)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            float temp0_892[0x8]
            int32_t temp1_33
            temp0_892, temp1_33 = _mm256_i32gather_ps(arg8, *(rax_85 + zmm0[0].q), arg10)
            arg8 = temp0_892
            float temp0_894[0x8] =
                _mm256_fmadd_ps(_mm256_sub_ps(temp0_866, temp0_857), var_580_6, temp0_857)
            zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(arg15, arg9), var_580_6, arg9)
            float temp0_898[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg11, arg12), var_580_6, arg12)
            arg7 = _mm256_fmadd_ps(_mm256_sub_ps(arg8, arg13), var_580_6, arg13)
            zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(zmm2, temp0_894), var_560_6, temp0_894)
            zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(
                    _mm256_fmadd_ps(_mm256_sub_ps(arg7, temp0_898), var_560_6, temp0_898), zmm2), 
                zmm2, var_540_6)
            var_560_6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_560_6[0].o, var_560_6[0].o)
            arg5 = var_5a0_6
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(arg5, var_560_6, 0xc), arg10)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                float temp0_914[0x8] = _mm256_rsqrt_ps(arg5)
                float temp0_915[0x8] = _mm256_mul_ps(arg5, temp0_914)
                float temp0_919[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_914, 
                        _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_914, temp0_915)), 
                    var_3a0)
                float temp0_920[0x8] = _mm256_rcp_ps(temp0_919)
                zmm0 = _mm256_blendv_ps(zmm0, 
                    _mm256_fmadd_ps(_mm256_fnmadd_ps(temp0_723, temp0_920, temp0_919), temp0_920, 
                        zmm0), 
                    _mm256_cvtepi16_epi32(zmm1[0].o))
            
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg22), 1), arg10)
            int32_t i_6 = _mm256_movemask_ps(zmm1)
            
            if (i_6 == 0)
                result = 0
            else
                uint64_t i_3 = zx.q(i_6)
                result = 0
                
                do
                    uint64_t rdx_11 = _tzcnt_u64(i_3)
                    i_3 &= not.q(1 << (rdx_11 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        float var_280[0x8] = zmm0
                        uint64_t rdx_12 = zx.q(rdx_11.d) & 7
                        zmm1[0].o = var_280[rdx_12]
                        *arg22 = zmm1[0]
                        int32_t var_260[0x8] = var_500_3
                        *arg21 = var_260[rdx_12]
                    
                    result.b = 1
                while (i_3 != 0)

arg7[0].o = var_e8
arg8[0].o = var_d8
arg9[0].o = var_c8
arg10[0].o = var_b8
arg11[0].o = var_a8
arg12[0].o = var_98
arg13[0].o = var_88
arg14[0].o = var_78
arg15[0].o = var_68
arg16[0].o = var_58
_mm256_zeroupper()
return result
