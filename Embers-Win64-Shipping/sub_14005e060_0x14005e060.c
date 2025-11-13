// 函数: sub_14005e060
// 地址: 0x14005e060
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
float zmm0[0x8] = *arg23
int32_t temp0 = _mm256_movemask_ps(zmm0)
zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
float zmm1[0x8] = _mm256_broadcast_ss(0.5f)
float var_380[0x8] = zmm1
zmm0 = _mm256_mul_ps(zmm0, zmm1)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
float zmm2[0x8]
zmm2[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
float zmm3[0x8]
zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
int32_t result

if (temp0 != 0xff)
    float var_5b0_1 = zmm1[0]
    float var_5ac_1 = zmm2[0]
    float var_5a8_1 = zmm3[0]
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_5c0_1 = zmm0[0]
    float temp0_303 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_304 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t rsi_5 = ((arg22 s>> 0x1f u>> 0x1d) + arg22) & 0xfffffff8
    int32_t rdx_5
    
    if (rsi_5 s<= 0)
        result = 0
        rdx_5 = 0
    else
        rdx_5 = 0
        float temp0_305[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
        float temp0_306[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        float temp0_309[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
        zmm0 = _mm256_broadcast_ss(1.12103877e-44f)
        float var_360_2[0x8] = zmm0
        result = 0
        
        while (true)
            bool cond:2_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:2_1))
                zmm0[0].o = zx.o(rdx_5)
                zmm3 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm3, temp0_305)
                zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                float temp0_316[0x8]
                int32_t temp1_12
                temp0_316, temp1_12 = _mm256_i32gather_ps(zmm2, *(arg19 + (zmm0[0].q << 2)), zmm1)
                float var_4a0_2[0x8] = zmm3
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm3, temp0_306)
                zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, temp0_309)
                zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                float temp0_321[0x8]
                int32_t temp1_13
                temp0_321, temp1_13 = _mm256_i32gather_ps(arg5, *(arg19 + zmm1[0].q), zmm3)
                zmm3 = temp1_13
                zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_360_2)
                zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                float temp0_325[0x8]
                int32_t temp1_14
                temp0_325, temp1_14 = _mm256_i32gather_ps(zmm3, *(arg19 + zmm0[0].q), zmm1)
                float var_500_2[0x8] = arg6
                float temp0_326[0x8] = _mm256_broadcast_ss(arg18[3])
                float var_640_3[0x8] = temp0_326
                float var_620_3[0x8] = temp0_326
                float var_600_5[0x8] = temp0_326
                float var_5e0_2[0x8] = temp0_326
                float temp0_327[0x8] = _mm256_broadcast_ss(arg18[1])
                float temp0_328[0x8] = _mm256_broadcast_ss(arg18[2])
                float temp0_329[0x8] = _mm256_broadcast_ss(*arg18)
                arg8 = _mm256_mul_ps(temp0_321, temp0_328)
                float temp0_331[0x8] = _mm256_mul_ps(temp0_325, temp0_329)
                float temp0_332[0x8] = _mm256_mul_ps(temp0_316, temp0_327)
                float temp0_333[0x8] = _mm256_fmsub_ps(temp0_325, temp0_327, arg8)
                float temp0_334[0x8] = _mm256_fmsub_ps(temp0_316, temp0_328, temp0_331)
                float temp0_335[0x8] = _mm256_fmsub_ps(temp0_321, temp0_329, temp0_332)
                arg8 = _mm256_add_ps(temp0_333, temp0_333)
                float temp0_337[0x8] = _mm256_add_ps(temp0_334, temp0_334)
                float temp0_338[0x8] = _mm256_add_ps(temp0_335, temp0_335)
                float temp0_339[0x8] = _mm256_fmadd_ps(temp0_316, temp0_326, arg8)
                float temp0_340[0x8] = _mm256_fmadd_ps(temp0_321, temp0_326, temp0_337)
                float temp0_341[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_326, temp0_338, temp0_325)
                float temp0_343[0x8] =
                    _mm256_fmsub_ps(_mm256_mul_ps(temp0_337, temp0_328), temp0_338, temp0_327)
                float temp0_344[0x8] = _mm256_mul_ps(temp0_338, temp0_329)
                float temp0_345[0x8] = _mm256_mul_ps(arg8, temp0_327)
                float temp0_346[0x8] = _mm256_add_ps(temp0_339, temp0_343)
                float temp0_348[0x8] =
                    _mm256_add_ps(temp0_340, _mm256_fmsub_ps(temp0_344, arg8, temp0_328))
                float temp0_350[0x8] = _mm256_add_ps(temp0_346, _mm256_broadcast_ss(arg18[4]))
                float temp0_351[0x8] = _mm256_broadcast_ss(arg18[5])
                float temp0_352[0x8] = _mm256_broadcast_ss(arg18[6])
                float temp0_353[0x8] = _mm256_broadcast_ss(var_5b0_1)
                arg8 = _mm256_cmp_ps(temp0_353, temp0_350, 1)
                
                if (_mm256_movemask_ps(arg8) != 0)
                    var_640_3 = _mm256_maskstore_ps(arg8, temp0_353)
                
                float temp0_357[0x8] = _mm256_fmsub_ps(temp0_329, temp0_337, temp0_345)
                float temp0_358[0x8] = _mm256_add_ps(temp0_348, temp0_351)
                zmm3 = _mm256_xor_ps(arg8, arg12)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_361[0x8] = _mm256_broadcast_ss(var_5c0_1)
                    float temp0_362[0x8] = _mm256_cmp_ps(temp0_350, temp0_361, 1)
                    arg7 = _mm256_and_ps(temp0_362, zmm3)
                    
                    if (_mm256_movemask_ps(arg7) != 0)
                        var_640_3 = _mm256_maskstore_ps(arg7, temp0_361)
                    
                    zmm3 = _mm256_andnot_ps(temp0_362, zmm3)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_640_3 = _mm256_maskstore_ps(zmm3, temp0_350)
                
                float temp0_369[0x8] = _mm256_add_ps(temp0_341, temp0_357)
                float temp0_370[0x8] = _mm256_broadcast_ss(var_5ac_1)
                float temp0_371[0x8] = _mm256_cmp_ps(temp0_370, temp0_358, 1)
                
                if (_mm256_movemask_ps(temp0_371) != 0)
                    var_620_3 = _mm256_maskstore_ps(temp0_371, temp0_370)
                
                float temp0_374[0x8] = _mm256_add_ps(temp0_369, temp0_352)
                zmm0 = _mm256_xor_ps(temp0_371, arg12)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    float temp0_377[0x8] = _mm256_broadcast_ss(temp0_303)
                    float temp0_378[0x8] = _mm256_cmp_ps(temp0_358, temp0_377, 1)
                    zmm3 = _mm256_and_ps(temp0_378, zmm0)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_620_3 = _mm256_maskstore_ps(zmm3, temp0_377)
                    
                    zmm0 = _mm256_andnot_ps(temp0_378, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_620_3 = _mm256_maskstore_ps(zmm0, temp0_358)
                
                float temp0_385[0x8] = _mm256_broadcast_ss(var_5a8_1)
                float temp0_386[0x8] = _mm256_cmp_ps(temp0_385, temp0_374, 1)
                
                if (_mm256_movemask_ps(temp0_386) != 0)
                    var_600_5 = _mm256_maskstore_ps(temp0_386, temp0_385)
                
                zmm0 = _mm256_xor_ps(temp0_386, arg12)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    float temp0_391[0x8] = _mm256_broadcast_ss(temp0_304)
                    float temp0_392[0x8] = _mm256_cmp_ps(temp0_374, temp0_391, 1)
                    zmm3 = _mm256_and_ps(temp0_392, zmm0)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_600_5 = _mm256_maskstore_ps(zmm3, temp0_391)
                    
                    zmm0 = _mm256_andnot_ps(temp0_392, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_600_5 = _mm256_maskstore_ps(zmm0, temp0_374)
                
                arg8 = var_620_3
                arg12 = _mm256_broadcast_ss(*arg1)
                float temp0_400[0x8] = _mm256_sub_ps(var_640_3, arg12)
                arg13 = _mm256_broadcast_ss(*(arg1 + 4))
                float temp0_402[0x8] = _mm256_sub_ps(arg8, arg13)
                float temp0_403[0x8] = _mm256_broadcast_ss(arg1[1].d)
                float temp0_404[0x8] = _mm256_sub_ps(var_600_5, temp0_403)
                float temp0_405[0x8] = _mm256_broadcast_ss(*arg3)
                float temp0_406[0x8] = _mm256_div_ps(temp0_400, temp0_405)
                float temp0_407[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
                float temp0_408[0x8] = _mm256_div_ps(temp0_402, temp0_407)
                float temp0_409[0x8] = _mm256_broadcast_ss(arg3[1].d)
                float temp0_410[0x8] = _mm256_div_ps(temp0_404, temp0_409)
                arg5 = _mm256_cvttps_epi32(temp0_406)
                int32_t temp0_412[0x8] = _mm256_cvttps_epi32(temp0_408)
                arg7 = _mm256_cvttps_epi32(temp0_410)
                float temp0_414[0x8] = _mm256_cvtepi32_ps(arg5)
                float temp0_415[0x8] = _mm256_cvtepi32_ps(temp0_412)
                float var_4c0_2[0x8] = arg7
                float temp0_416[0x8] = _mm256_cvtepi32_ps(arg7)
                float temp0_417[0x8] = _mm256_fmadd_ps(temp0_414, temp0_405, arg12)
                float temp0_418[0x8] = _mm256_fmadd_ps(temp0_415, temp0_407, arg13)
                float temp0_419[0x8] = _mm256_fmadd_ps(temp0_416, temp0_409, temp0_403)
                temp0_403[0].o = __vmovsd_xmmdq_memq(*arg3)
                float temp0_421[0x8] = _mm256_broadcast_ss(2f)
                temp0_403[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_403[0].o, temp0_421[0].o)
                float temp0_423[0x8] = _mm256_broadcastss_ps(temp0_403[0].o)
                float temp0_424[0x8] = _mm256_add_ps(temp0_423, temp0_417)
                temp0_423[0].o = __vmovshdup_xmmdq_xmmdq(temp0_403[0].o)
                arg7 = _mm256_broadcastsd_pd(temp0_423[0].o)
                float temp0_427[0x8] = _mm256_add_ps(arg7, temp0_418)
                temp0_403[0].o = _mm_permute_ps(temp0_403[0].o, 0xea)
                float temp0_429[0x8] = _mm256_cmp_ps(temp0_424, var_640_3, 1)
                arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg5, data_142fc9420)
                arg6 = _mm256_blendv_ps(arg9, arg5, temp0_429)
                float var_640_4[0x8] = arg6
                arg10 = _mm256_broadcastsd_pd(temp0_403[0].o)
                float temp0_433[0x8] = _mm256_cmp_ps(temp0_427, arg8, 1)
                
                if (_mm256_movemask_ps(temp0_433) != 0)
                    arg5 = temp0_412
                
                float temp0_435[0x8] = _mm256_add_ps(arg10, temp0_419)
                float temp0_436[0x8] = _mm256_cmp_ps(temp0_427, arg8, 5)
                arg7[0].o = _mm256_extractf128_ps(temp0_436[0].o, 1)
                temp0_436[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_436[0].o, arg7[0].o)
                temp0_436[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_436[0].o, temp0_405[0].o)
                arg11 = arg8
                
                if (__vpmovmskb_gpr32d_xmmdq(temp0_436[0].o) != 0)
                    arg9 = __vpaddd_ymmqq_ymmqq_memqq(temp0_412, data_142fc9420)
                
                int32_t temp0_442[0x8] = _mm256_blendv_ps(arg9, arg5, temp0_433)
                int32_t var_620_4[0x8] = temp0_442
                float temp0_443[0x8] = _mm256_cmp_ps(temp0_435, var_600_5, 1)
                
                if (_mm256_movemask_ps(temp0_443) != 0)
                    arg5 = var_4c0_2
                
                float temp0_445[0x8] = _mm256_cmp_ps(temp0_435, var_600_5, 5)
                var_600_5[0].o = _mm256_extractf128_ps(temp0_445[0].o, 1)
                temp0_445[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_445[0].o, var_600_5[0].o)
                temp0_445[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_445[0].o, temp0_405[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(temp0_445[0].o) != 0)
                    arg9 = __vpaddd_ymmqq_ymmqq_memqq(var_4c0_2, data_142fc9420)
                
                float temp0_451[0x8] = _mm256_blendv_ps(arg9, arg5, temp0_443)
                float temp0_453[0x8] = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg6), temp0_405, arg12)
                float temp0_455[0x8] =
                    _mm256_fmadd_ps(_mm256_cvtepi32_ps(temp0_442), temp0_407, arg13)
                float temp0_457[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(
                    _mm256_cvtepi32_ps(temp0_451), temp0_409, temp0_403)
                float temp0_458[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_453, temp0_423)
                float temp0_459[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_455, arg7)
                arg8 = _mm256_add_ps(arg10, temp0_457)
                float temp0_462[0x8] = _mm256_div_ps(_mm256_sub_ps(var_640_3, temp0_458), temp0_405)
                float temp0_464[0x8] = _mm256_div_ps(_mm256_sub_ps(arg11, temp0_459), temp0_407)
                float temp0_465[0x8] = _mm256_sub_ps(var_600_5, arg8)
                float var_560_4[0x8] = temp0_462
                float var_540_4[0x8] = temp0_464
                float var_520_4[0x8] = _mm256_div_ps(temp0_465, temp0_409)
                uint32_t temp0_467[0x8] = _mm256_cmpeq_epi32(arg12, arg12)
                zmm0 = _mm256_cmpeq_epi32(arg6, temp0_467)
                bool cond:6_1 = _mm256_movemask_ps(zmm0) == 0
                temp0_465[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_465[0].o, temp0_465[0].o)
                
                if (not(cond:6_1))
                    var_640_4 = _mm256_maskstore_ps(zmm0, temp0_465)
                    var_560_4 = _mm256_maskstore_ps(zmm0, temp0_465)
                    arg6 = var_640_4
                
                int32_t rax_48 = *arg4
                zmm0[0].o = zx.o(rax_48 - 1)
                zmm0 = _mm256_cmpeq_epi32(arg6, _mm256_broadcastd_epi32(zmm0[0]))
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    temp0_464[0].o = zx.o(rax_48 - 2)
                    var_640_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(temp0_464[0]))
                    var_560_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                
                zmm0 = var_620_4
                zmm1 = _mm256_cmpeq_epi32(zmm0, temp0_467)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_620_4 = _mm256_maskstore_ps(zmm1, temp0_465)
                    var_540_4 = _mm256_maskstore_ps(zmm1, temp0_465)
                    zmm0 = var_620_4
                
                float temp0_484[0x8] = _mm256_sub_ps(var_640_3, temp0_350)
                int32_t rax_51 = arg4[1]
                temp0_350[0].o = zx.o(rax_51 - 1)
                zmm2 = _mm256_broadcastd_epi32(temp0_350[0])
                zmm0 = _mm256_cmpeq_epi32(zmm0, zmm2)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2[0].o = zx.o(rax_51 - 2)
                    var_620_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm2[0]))
                    var_540_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                
                float temp0_492[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_600_5, temp0_374)
                float temp0_493[0x8] = _mm256_sub_ps(arg11, temp0_358)
                float temp0_494[0x8] = _mm256_fmadd_ps(temp0_484, temp0_484, temp0_465)
                zmm0 = temp0_451
                zmm3 = _mm256_cmpeq_epi32(zmm0, temp0_467)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_497[0x8] = _mm256_maskstore_ps(zmm3, temp0_465)
                    var_520_4 = _mm256_maskstore_ps(zmm3, temp0_465)
                    zmm0 = temp0_497
                
                float temp0_499[0x8] = _mm256_mul_ps(temp0_492, temp0_492)
                arg11 = _mm256_fmadd_ps(temp0_493, temp0_493, temp0_494)
                int32_t rax_54 = arg4[2]
                temp0_494[0].o = zx.o(rax_54 - 1)
                zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(temp0_494[0]))
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm0[0].o = zx.o(rax_54 - 2)
                    float temp0_505[0x8] =
                        _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
                    var_520_4 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
                    zmm0 = temp0_505
                
                zmm2 = __vpbroadcastd_ymmqq_memd(*(arg17 + 4))
                arg7 = var_620_4
                arg9 = _mm256_mullo_epi32(zmm2, var_640_4)
                zmm1 = _mm256_add_epi32(arg9, arg7)
                arg10 = __vpbroadcastd_ymmqq_memd(*(arg17 + 8))
                arg6 = _mm256_mullo_epi32(zmm1, arg10)
                zmm1 = _mm256_add_epi32(arg6, zmm0)
                int64_t rax_57 = *(arg17 + 0x10)
                arg5 = _mm256_slli_epi32(zmm1, 2)
                arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                zmm1[0].o = zx.o(0)
                float temp0_516[0x8]
                int32_t temp1_15
                temp0_516, temp1_15 = _mm256_i32gather_ps(zmm1, *(rax_57 + arg5[0].q), arg8)
                zmm3 = _mm256_sub_epi32(var_640_4, temp0_467)
                int32_t temp0_518[0x8] = _mm256_mullo_epi32(zmm2, zmm3)
                int32_t temp0_520[0x8] =
                    _mm256_mullo_epi32(_mm256_add_epi32(temp0_518, arg7), arg10)
                zmm2 = _mm256_slli_epi32(_mm256_add_epi32(temp0_520, zmm0), 2)
                zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                float temp0_525[0x8]
                int32_t temp1_16
                temp0_525, temp1_16 = _mm256_i32gather_ps(arg5, *(rax_57 + zmm2[0].q), zmm3)
                arg14 = _mm256_sub_epi32(arg7, temp0_467)
                arg9 = _mm256_mullo_epi32(_mm256_add_epi32(arg9, arg14), arg10)
                arg7 = _mm256_add_epi32(arg9, zmm0)
                uint32_t temp0_530[0x8] = _mm256_cmpeq_epi32(temp0_467, temp0_467)
                arg15 = _mm256_slli_epi32(arg7, 2)
                arg16 = _mm256_cmpeq_epi32(temp0_442, temp0_442)
                arg7[0].o = zx.o(0)
                float temp0_533[0x8]
                int32_t temp1_17
                temp0_533, temp1_17 = _mm256_i32gather_ps(arg7, *(rax_57 + arg15[0].q), arg16)
                arg7 = temp0_533
                arg16 = temp1_17
                arg10 = _mm256_mullo_epi32(_mm256_add_epi32(temp0_518, arg14), arg10)
                arg13 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm0), 2)
                arg14 = _mm256_cmpeq_epi32(arg14, arg14)
                arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                float temp0_540[0x8]
                int32_t temp1_18
                temp0_540, temp1_18 = _mm256_i32gather_ps(arg15, *(rax_57 + arg13[0].q), arg14)
                arg15 = temp0_540
                arg14 = temp1_18
                zmm0 = _mm256_sub_epi32(zmm0, temp0_530)
                arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg6, zmm0), 2)
                arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                float temp0_546[0x8]
                int32_t temp1_19
                temp0_546, temp1_19 = _mm256_i32gather_ps(arg14, *(rax_57 + arg6[0].q), arg13)
                arg14 = temp0_546
                arg13 = temp1_19
                arg6 = _mm256_slli_epi32(_mm256_add_epi32(temp0_520, zmm0), 2)
                arg8 = _mm256_cmpeq_epi32(temp0_520, temp0_520)
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                float temp0_551[0x8]
                int32_t temp1_20
                temp0_551, temp1_20 = _mm256_i32gather_ps(arg13, *(rax_57 + arg6[0].q), arg8)
                arg13 = temp0_551
                arg8 = temp1_20
                arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg9, zmm0), 2)
                arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                arg9[0].o = zx.o(0)
                float temp0_555[0x8]
                int32_t temp1_21
                temp0_555, temp1_21 = _mm256_i32gather_ps(arg9, *(rax_57 + arg6[0].q), arg8)
                arg9 = temp0_555
                arg8 = temp1_21
                arg5 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_525, temp0_516), var_560_4, temp0_516)
                float temp0_558[0x8] = _mm256_sub_ps(arg15, arg7)
                zmm0 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm0), 2)
                arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                float temp0_563[0x8]
                int32_t temp1_22
                temp0_563, temp1_22 = _mm256_i32gather_ps(arg8, *(rax_57 + zmm0[0].q), arg6)
                arg8 = temp0_563
                float temp0_564[0x8] = _mm256_fmadd_ps(temp0_558, var_560_4, arg7)
                float temp0_566[0x8] =
                    _mm256_fmadd_ps(_mm256_sub_ps(arg13, arg14), var_560_4, arg14)
                arg6 = _mm256_fmadd_ps(_mm256_sub_ps(arg8, arg9), var_560_4, arg9)
                float temp0_570[0x8] =
                    _mm256_fmadd_ps(_mm256_sub_ps(temp0_564, arg5), var_540_4, arg5)
                zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_fmadd_ps(_mm256_sub_ps(arg6, temp0_566), var_540_4, temp0_566), 
                        temp0_570), 
                    temp0_570, var_520_4)
                float temp0_575[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg11, temp0_499)
                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                float temp0_577[0x8] = _mm256_cmp_ps(temp0_575, arg6, 0xc)
                
                if (_mm256_movemask_ps(temp0_577) != 0)
                    float temp0_579[0x8] = _mm256_rsqrt_ps(temp0_575)
                    float temp0_580[0x8] = _mm256_mul_ps(temp0_575, temp0_579)
                    float temp0_584[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_mul_ps(temp0_579, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_579, temp0_580)), 
                        var_380)
                    float temp0_585[0x8] = _mm256_rcp_ps(temp0_584)
                    arg5 = _mm256_fmadd_ps(_mm256_fnmadd_ps(temp0_421, temp0_585, temp0_584), 
                        temp0_585, zmm0)
                    zmm0 = _mm256_blendv_ps(zmm0, arg5, temp0_577)
                
                arg12 = _mm256_cmpeq_epi32(temp0_530, temp0_530)
                zmm2 = var_4a0_2
                zmm1 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg21), 1)
                char i_5 = _mm256_movemask_ps(zmm1)
                
                if (i_5 == 0)
                    result = 0
                    rdx_5 += 8
                    
                    if (rdx_5 s>= rsi_5)
                        break
                    
                    continue
                else
                    uint64_t i = zx.q(i_5)
                    result = 0
                    
                    do
                        uint64_t r15_2 = _tzcnt_u64(i)
                        i &= not.q(1 << (r15_2 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            float var_1c0[0x8] = zmm0
                            uint64_t r15_3 = zx.q(r15_2.d) & 7
                            zmm1[0].o = var_1c0[r15_3]
                            *arg21 = zmm1[0]
                            float var_1a0[0x8] = zmm2
                            *arg20 = var_1a0[r15_3]
                        
                        result.b = 1
                    while (i != 0)
            
            rdx_5 += 8
            
            if (rdx_5 s>= rsi_5)
                break
    
    if (rdx_5 s< arg22)
        bool cond:0_1 = result.b != 0
        result.b = 1
        
        if (not(cond:0_1))
            zmm0[0].o = zx.o(rdx_5)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm2 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
            zmm0[0].o = zx.o(arg22)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm1 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(3))
            float temp0_933[0x8] = _mm256_cmpgt_epi32(zmm0, zmm2)
            zmm0[0].o = zx.o(0)
            float temp0_934[0x8]
            int32_t temp1_34
            temp0_934, temp1_34 = _mm256_i32gather_ps(zmm0, *(arg19 + (zmm1[0].q << 2)), temp0_933)
            zmm1 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(0xc))
            zmm3 = _mm256_add_epi32(zmm1, __vpbroadcastd_ymmqq_memd(4))
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_940[0x8]
            int32_t temp1_35
            temp0_940, temp1_35 = _mm256_i32gather_ps(arg5, *(arg19 + zmm3[0].q), temp0_933)
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            arg6 = __vpbroadcastd_ymmqq_memd(8)
            zmm1 = _mm256_add_epi32(zmm1, arg6)
            arg6[0].o = zx.o(0)
            float temp0_944[0x8]
            int32_t temp1_36
            temp0_944, temp1_36 = _mm256_i32gather_ps(arg6, *(arg19 + zmm1[0].q), temp0_933)
            float temp0_945[0x8] = _mm256_broadcast_ss(arg18[3])
            float var_640_7[0x8] = temp0_945
            int32_t var_620_7[0x8] = temp0_945
            float var_600_13[0x8] = temp0_945
            float var_5e0_4[0x8] = temp0_945
            float temp0_946[0x8] = _mm256_broadcast_ss(arg18[1])
            arg8 = _mm256_broadcast_ss(arg18[2])
            float temp0_948[0x8] = _mm256_broadcast_ss(*arg18)
            float temp0_949[0x8] = _mm256_mul_ps(temp0_945, zmm3)
            float temp0_950[0x8] = _mm256_mul_ps(temp0_940, arg8)
            float temp0_951[0x8] = _mm256_mul_ps(temp0_944, temp0_948)
            arg12 = _mm256_mul_ps(temp0_934, temp0_946)
            float temp0_953[0x8] = _mm256_fmsub_ps(temp0_950, temp0_946, temp0_944)
            float temp0_954[0x8] = _mm256_fmsub_ps(temp0_951, arg8, temp0_934)
            arg12 = _mm256_fmsub_ps(arg12, temp0_948, temp0_940)
            float temp0_956[0x8] = _mm256_sub_ps(temp0_949, temp0_949)
            float temp0_957[0x8] = _mm256_add_ps(temp0_953, temp0_953)
            arg6 = _mm256_add_ps(temp0_954, temp0_954)
            float temp0_959[0x8] = _mm256_add_ps(arg12, arg12)
            float temp0_960[0x8] = _mm256_add_ps(temp0_956, temp0_956)
            float var_560_7[0x8] = temp0_957
            float var_540_7[0x8] = arg6
            float var_520_7[0x8] = temp0_959
            float var_500_4[0x8] = temp0_960
            arg8 = _mm256_fmadd_ps(temp0_934, temp0_945, temp0_957)
            float temp0_962[0x8] = _mm256_fmadd_ps(temp0_940, temp0_945, arg6)
            float temp0_963[0x8] = _mm256_fmadd_ps(temp0_944, temp0_945, temp0_959)
            int32_t var_180_2[0x8] = arg8
            float var_160_2[0x8] = temp0_962
            float var_140_2[0x8] = temp0_963
            float var_120_2[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_960, temp0_945, zmm3)
            float temp0_965[0x8] = _mm256_broadcast_ss(arg18[1])
            float temp0_966[0x8] = _mm256_broadcast_ss(arg18[2])
            float temp0_967[0x8] = _mm256_broadcast_ss(*arg18)
            arg12 = _mm256_mul_ps(arg6, temp0_966)
            arg13 = _mm256_mul_ps(temp0_959, temp0_967)
            float temp0_970[0x8] = _mm256_mul_ps(temp0_957, temp0_965)
            arg12 = _mm256_fmsub_ps(arg12, temp0_959, temp0_965)
            arg13 = _mm256_fmsub_ps(arg13, temp0_957, temp0_966)
            float temp0_973[0x8] = _mm256_add_ps(arg8, arg12)
            arg8 = _mm256_add_ps(temp0_962, arg13)
            arg13 = _mm256_add_ps(temp0_973, _mm256_broadcast_ss(arg18[4]))
            float temp0_977[0x8] = _mm256_broadcast_ss(arg18[5])
            arg12 = _mm256_broadcast_ss(arg18[6])
            float temp0_979[0x8] = _mm256_broadcast_ss(var_5b0_1)
            arg7 = _mm256_cmp_ps(temp0_979, arg13, 1)
            arg11 = _mm256_and_ps(arg7, temp0_933)
            temp0_973[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            temp0_973[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, temp0_973[0].o)
            temp0_973[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_973[0].o, temp0_963[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_973[0].o) != 0)
                var_640_7 = _mm256_maskstore_ps(arg7, temp0_979)
            
            float temp0_987[0x8] = _mm256_fmsub_ps(temp0_967, arg6, temp0_970)
            float temp0_988[0x8] = _mm256_add_ps(arg8, temp0_977)
            zmm1 = _mm256_andnot_ps(arg7, temp0_933)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm1 = _mm256_xor_ps(arg7, _mm256_cmpeq_epi32(zmm1, zmm1))
                arg7 = _mm256_broadcast_ss(var_5c0_1)
                arg6 = _mm256_cmp_ps(arg13, arg7, 1)
                int32_t temp0_995[0x8] = _mm256_and_ps(arg6, zmm1)
                
                if (_mm256_movemask_ps(_mm256_and_ps(temp0_995, temp0_933)) != 0)
                    var_640_7 = _mm256_maskstore_ps(temp0_995, arg7)
                
                zmm1 = _mm256_andnot_ps(arg6, zmm1)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm1, temp0_933)) != 0)
                    var_640_7 = _mm256_maskstore_ps(zmm1, arg13)
            
            float var_4e0_4[0x8] = zmm2
            float temp0_1003[0x8] = _mm256_add_ps(temp0_963, temp0_987)
            float temp0_1004[0x8] = _mm256_broadcast_ss(var_5ac_1)
            float temp0_1005[0x8] = _mm256_cmp_ps(temp0_1004, temp0_988, 1)
            zmm3 = _mm256_and_ps(temp0_1005, temp0_933)
            arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1005[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                var_620_7 = _mm256_maskstore_ps(temp0_1005, temp0_1004)
            
            float temp0_1012[0x8] = _mm256_add_ps(temp0_1003, arg12)
            zmm1 = _mm256_andnot_ps(temp0_1005, temp0_933)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm0 = temp0_1005 ^ _mm256_cmpeq_epi32(zmm1, zmm1)
                zmm3 = _mm256_broadcast_ss(temp0_303)
                float temp0_1017[0x8] = _mm256_cmp_ps(temp0_988, zmm3, 1)
                arg5 = _mm256_and_ps(temp0_1017, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, temp0_933)) != 0)
                    var_620_7 = _mm256_maskstore_ps(arg5, zmm3)
                
                zmm0 = _mm256_andnot_ps(temp0_1017, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, temp0_933)) != 0)
                    var_620_7 = _mm256_maskstore_ps(zmm0, temp0_988)
            
            float temp0_1026[0x8] = _mm256_broadcast_ss(var_5a8_1)
            float temp0_1027[0x8] = _mm256_cmp_ps(temp0_1026, temp0_1012, 1)
            zmm2 = _mm256_and_ps(temp0_1027, temp0_933)
            zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_1027[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                var_600_13 = _mm256_maskstore_ps(temp0_1027, temp0_1026)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(temp0_1027, temp0_933)) != 0)
                zmm0 = __vxorps_ymmqq_ymmqq_memqq(temp0_1027, data_142fc9420)
                float temp0_1037[0x8] = _mm256_broadcast_ss(temp0_304)
                float temp0_1038[0x8] = _mm256_cmp_ps(temp0_1012, temp0_1037, 1)
                arg5 = _mm256_and_ps(temp0_1038, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, temp0_933)) != 0)
                    var_600_13 = _mm256_maskstore_ps(arg5, temp0_1037)
                
                zmm0 = _mm256_andnot_ps(temp0_1038, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, temp0_933)) != 0)
                    var_600_13 = _mm256_maskstore_ps(zmm0, temp0_1012)
            
            int32_t var_3c0_4[0x8] = arg13
            arg8 = var_600_13
            float temp0_1047[0x8] = _mm256_broadcast_ss(*arg1)
            float temp0_1048[0x8] = _mm256_broadcast_ss(*(arg1 + 4))
            float temp0_1049[0x8] = _mm256_sub_ps(var_620_7, temp0_1048)
            arg12 = _mm256_broadcast_ss(*(arg3 + 4))
            float temp0_1051[0x8] = _mm256_div_ps(temp0_1049, arg12)
            float temp0_1052[0x8] = _mm256_sub_ps(var_640_7, temp0_1047)
            float temp0_1053[0x8] = _mm256_broadcast_ss(arg1[1].d)
            zmm1 = _mm256_cvttps_epi32(temp0_1051)
            float temp0_1056[0x8] = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm1), arg12, temp0_1048)
            temp0_1048[0].o = __vmovsd_xmmdq_memq(*arg3)
            float temp0_1058[0x8] = _mm256_broadcast_ss(2f)
            arg7[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_1048[0].o, temp0_1058[0].o)
            temp0_1048[0].o = __vmovshdup_xmmdq_xmmdq(arg7[0].o)
            zmm3 = _mm256_broadcastsd_pd(temp0_1048[0].o)
            float var_4c0_4[0x8] = zmm3
            float temp0_1062[0x8] = _mm256_add_ps(zmm3, temp0_1056)
            float temp0_1063[0x8] = _mm256_cmp_ps(temp0_1062, var_620_7, 1)
            zmm3 = _mm256_and_ps(temp0_1063, temp0_933)
            temp0_1058[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1058[0].o)
            float temp0_1067[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_1068[0x8] = _mm256_div_ps(temp0_1052, temp0_1067)
            int32_t var_580_7[0x8] = arg8
            arg8 = _mm256_sub_ps(arg8, temp0_1053)
            float temp0_1070[0x8] = _mm256_broadcast_ss(arg3[1].d)
            arg8 = _mm256_div_ps(arg8, temp0_1070)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1068[0].o)
            char temp0_1073 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
            zmm3 = _mm256_cvttps_epi32(temp0_1068)
            int32_t temp0_1075[0x8] = _mm256_cvttps_epi32(arg8)
            float temp0_1077[0x8] =
                _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm3), temp0_1067, temp0_1047)
            arg13 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(temp0_1075), temp0_1070, temp0_1053)
            float temp0_1080[0x8] = _mm256_broadcastss_ps(arg7[0].o)
            float temp0_1081[0x8] = _mm256_add_ps(temp0_1080, temp0_1077)
            arg7[0].o = _mm_permute_ps(arg7[0].o, 0xea)
            arg15 = _mm256_broadcastsd_pd(arg7[0].o)
            float temp0_1084[0x8] = _mm256_cmp_ps(temp0_1081, var_640_7, 1)
            arg10 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc9420)
            zmm0 = _mm256_blendv_ps(arg10, zmm3, temp0_1084)
            float var_640_8[0x8] = zmm0
            arg16 = _mm256_cmp_ps(temp0_1062, var_620_7, 5)
            
            if (temp0_1073 != 0)
                zmm3 = zmm1
            
            arg13 = _mm256_add_ps(arg15, arg13)
            zmm2 = _mm256_and_ps(temp0_933, arg16)
            arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                arg10 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, data_142fc9420)
            
            float temp0_1095[0x8] = _mm256_blendv_ps(arg10, zmm3, temp0_1063)
            float var_620_8[0x8] = temp0_1095
            zmm2 = var_580_7
            int32_t temp0_1096[0x8] = _mm256_cmp_ps(arg13, zmm2, 5)
            float temp0_1097[0x8] = _mm256_cmp_ps(arg13, zmm2, 1)
            zmm2 = _mm256_and_ps(temp0_1097, temp0_933)
            arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm3 = temp0_1075
            
            zmm2 = _mm256_and_ps(temp0_933, temp0_1096)
            arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                arg10 = __vpaddd_ymmqq_ymmqq_memqq(temp0_1075, data_142fc9420)
            
            float temp0_1109[0x8] = _mm256_blendv_ps(arg10, zmm3, temp0_1097)
            float temp0_1111[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm0), temp0_1067, temp0_1047)
            float temp0_1113[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_1095), arg12, temp0_1048)
            float temp0_1115[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_1109), 
                temp0_1070, temp0_1053)
            float temp0_1116[0x8] = _mm256_add_ps(temp0_1080, temp0_1111)
            float temp0_1117[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1113, var_4c0_4)
            float temp0_1118[0x8] = _mm256_add_ps(arg15, temp0_1115)
            float temp0_1120[0x8] = _mm256_div_ps(_mm256_sub_ps(var_640_7, temp0_1116), temp0_1067)
            float temp0_1122[0x8] = _mm256_div_ps(_mm256_sub_ps(var_620_7, temp0_1117), arg12)
            float temp0_1124[0x8] = _mm256_div_ps(_mm256_sub_ps(var_580_7, temp0_1118), temp0_1070)
            float var_560_8[0x8] = temp0_1120
            float var_540_8[0x8] = temp0_1122
            float var_520_8[0x8] = temp0_1124
            zmm1 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, data_142fc9420)
            zmm2 = zmm1 & temp0_933
            temp0_1120[0].o = _mm256_extracti128_si256(zmm2, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_1120[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                var_640_8 = _mm256_maskstore_ps(zmm1, zmm0)
                var_560_8 = _mm256_maskstore_ps(zmm1, zmm0)
                zmm0 = var_640_8
            
            int32_t rax_100 = *arg4
            zmm1[0].o = zx.o(rax_100 - 1)
            zmm0 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            zmm1 = zmm0 & temp0_933
            temp0_1120[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1120[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(rax_100 - 2)
                var_640_8 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                zmm1 = _mm256_broadcast_ss(1f)
                var_560_8 = _mm256_maskstore_ps(zmm0, zmm1)
            
            float temp0_1143[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_640_7, var_3c0_4)
            zmm1[0].o = zx.o(0)
            zmm3 = var_620_8
            arg5 = _mm256_cmpeq_epi32(zmm3, _mm256_cmpeq_epi32(temp0_1124, temp0_1124))
            arg6 = arg5 & temp0_933
            temp0_1118[0].o = _mm256_extracti128_si256(arg6, 1)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_1118[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_1143[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                zmm3[0].o = zx.o(0)
                var_620_8 = _mm256_maskstore_ps(arg5, zmm3)
                var_540_8 = _mm256_maskstore_ps(arg5, zmm3)
                zmm3 = var_620_8
            
            float temp0_1152[0x8] = _mm256_sub_ps(var_620_7, temp0_988)
            float temp0_1153[0x8] = _mm256_fmadd_ps(temp0_1143, temp0_1143, zmm1)
            int32_t rdx_17 = arg4[1]
            zmm1[0].o = zx.o(rdx_17 - 1)
            zmm1 = _mm256_cmpeq_epi32(zmm3, _mm256_broadcastd_epi32(zmm1[0]))
            zmm3 = zmm1 & temp0_933
            arg5[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1153[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm3[0].o = zx.o(rdx_17 - 2)
                var_620_8 = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm3[0]))
                var_540_8 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
            
            zmm1 = var_580_7
            float temp0_1164[0x8] = __vsubps_ymmqq_ymmqq_memqq(zmm1, temp0_1012)
            float temp0_1165[0x8] = _mm256_fmadd_ps(temp0_1152, temp0_1152, temp0_1153)
            zmm0 = temp0_1109
            zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_cmpeq_epi32(zmm1, zmm1))
            zmm3 = zmm1 & temp0_933
            temp0_1118[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1118[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm0[0].o = zx.o(0)
                float temp0_1172[0x8] = _mm256_maskstore_ps(zmm1, zmm0)
                var_520_8 = _mm256_maskstore_ps(zmm1, zmm0)
                zmm0 = temp0_1172
            
            float temp0_1174[0x8] = _mm256_fmadd_ps(temp0_1164, temp0_1164, temp0_1165)
            int32_t rdx_20 = arg4[2]
            zmm1[0].o = zx.o(rdx_20 - 1)
            zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            zmm3 = zmm1 & temp0_933
            temp0_1165[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1165[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm0[0].o = zx.o(rdx_20 - 2)
                float temp0_1182[0x8] = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
                var_520_8 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
                zmm0 = temp0_1182
            
            zmm1 = __vpbroadcastd_ymmqq_memd(*(arg17 + 4))
            int32_t temp0_1186[0x8] = _mm256_mullo_epi32(zmm1, var_640_8)
            arg6 = _mm256_add_epi32(temp0_1186, var_620_8)
            arg11 = __vpbroadcastd_ymmqq_memd(*(arg17 + 8))
            int32_t temp0_1189[0x8] = _mm256_mullo_epi32(arg6, arg11)
            arg6 = _mm256_add_epi32(temp0_1189, zmm0)
            int64_t rax_103 = *(arg17 + 0x10)
            arg7 = _mm256_slli_epi32(arg6, 2)
            arg6[0].o = zx.o(0)
            float temp0_1192[0x8]
            int32_t temp1_37
            temp0_1192, temp1_37 = _mm256_i32gather_ps(arg6, *(rax_103 + arg7[0].q), temp0_933)
            uint32_t temp0_1193[0x8] = _mm256_cmpeq_epi32(arg12, arg12)
            zmm3 = _mm256_sub_epi32(var_640_8, temp0_1193)
            float temp0_1195[0x8] = _mm256_mullo_epi32(zmm1, zmm3)
            arg10 = _mm256_mullo_epi32(_mm256_add_epi32(temp0_1195, var_620_8), arg11)
            zmm1 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm0), 2)
            zmm3[0].o = zx.o(0)
            float temp0_1200[0x8]
            int32_t temp1_38
            temp0_1200, temp1_38 = _mm256_i32gather_ps(zmm3, *(rax_103 + zmm1[0].q), temp0_933)
            arg7 = var_560_8
            arg15 = _mm256_sub_epi32(var_620_8, temp0_1193)
            int32_t temp0_1203[0x8] = _mm256_mullo_epi32(_mm256_add_epi32(temp0_1186, arg15), arg11)
            arg9 = _mm256_add_epi32(temp0_1203, zmm0)
            arg16 = _mm256_slli_epi32(arg9, 2)
            arg9[0].o = zx.o(0)
            float temp0_1206[0x8]
            int32_t temp1_39
            temp0_1206, temp1_39 = _mm256_i32gather_ps(arg9, *(rax_103 + arg16[0].q), temp0_933)
            arg9 = temp0_1206
            zmm2 = _mm256_mullo_epi32(_mm256_add_epi32(temp0_1195, arg15), arg11)
            arg11 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm0), 2)
            temp0_1195[0].o = zx.o(0)
            float temp0_1211[0x8]
            int32_t temp1_40
            temp0_1211, temp1_40 =
                _mm256_i32gather_ps(temp0_1195, *(rax_103 + arg11[0].q), temp0_933)
            arg14 = temp0_1211
            arg15 = temp1_40
            zmm0 = _mm256_sub_epi32(zmm0, temp0_1193)
            arg8 = _mm256_slli_epi32(_mm256_add_epi32(temp0_1189, zmm0), 2)
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            float temp0_1216[0x8]
            int32_t temp1_41
            temp0_1216, temp1_41 = _mm256_i32gather_ps(arg11, *(rax_103 + arg8[0].q), temp0_933)
            arg11 = temp0_1216
            arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm0), 2)
            arg10[0].o = zx.o(0)
            float temp0_1219[0x8]
            int32_t temp1_42
            temp0_1219, temp1_42 = _mm256_i32gather_ps(arg10, *(rax_103 + arg8[0].q), temp0_933)
            arg10 = temp0_1219
            arg12 = temp1_42
            arg8 = _mm256_slli_epi32(_mm256_add_epi32(temp0_1203, zmm0), 2)
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            float temp0_1223[0x8]
            int32_t temp1_43
            temp0_1223, temp1_43 = _mm256_i32gather_ps(arg12, *(rax_103 + arg8[0].q), temp0_933)
            arg12 = temp0_1223
            arg13 = temp0_933
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm0), 2)
            zmm2[0].o = zx.o(0)
            float temp0_1226[0x8]
            int32_t temp1_44
            temp0_1226, temp1_44 = _mm256_i32gather_ps(zmm2, *(rax_103 + zmm0[0].q), temp0_933)
            arg8 = temp1_44
            float temp0_1228[0x8] =
                _mm256_fmadd_ps(_mm256_sub_ps(temp0_1200, temp0_1192), arg7, temp0_1192)
            float temp0_1230[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg14, arg9), arg7, arg9)
            float temp0_1232[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg10, arg11), arg7, arg11)
            float temp0_1234[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(temp0_1226, arg12), arg7, arg12)
            float temp0_1236[0x8] =
                _mm256_fmadd_ps(_mm256_sub_ps(temp0_1230, temp0_1228), var_540_8, temp0_1228)
            zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(
                    _mm256_fmadd_ps(_mm256_sub_ps(temp0_1234, temp0_1232), var_540_8, temp0_1232), 
                    temp0_1236), 
                temp0_1236, var_520_8)
            var_540_8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_540_8[0].o, var_540_8[0].o)
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(temp0_1174, var_540_8, 0xc), arg13)
            temp0_1234[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1234[0].o)
            temp0_1234[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1234[0].o) != 0)
                float temp0_1248[0x8] = _mm256_rsqrt_ps(temp0_1174)
                float temp0_1249[0x8] = _mm256_mul_ps(temp0_1174, temp0_1248)
                float temp0_1253[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_1248, 
                        _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_1248, temp0_1249)), 
                    var_380)
                float temp0_1254[0x8] = _mm256_rcp_ps(temp0_1253)
                zmm0 = _mm256_blendv_ps(zmm0, 
                    _mm256_fmadd_ps(_mm256_fnmadd_ps(temp0_1058, temp0_1254, temp0_1253), 
                        temp0_1254, zmm0), 
                    _mm256_cvtepi16_epi32(zmm1[0].o))
            
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg21), 1), arg13)
            int32_t i_7 = _mm256_movemask_ps(zmm1)
            
            if (i_7 == 0)
                result = 0
            else
                uint64_t i_1 = zx.q(i_7)
                result = 0
                
                do
                    uint64_t rdx_23 = _tzcnt_u64(i_1)
                    i_1 &= not.q(1 << (rdx_23 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        float var_200[0x8] = zmm0
                        uint64_t rdx_24 = zx.q(rdx_23.d) & 7
                        zmm1[0].o = var_200[rdx_24]
                        *arg21 = zmm1[0]
                        float var_1e0[0x8] = var_4e0_4
                        *arg20 = var_1e0[rdx_24]
                    
                    result.b = 1
                while (i_1 != 0)
else
    float var_590_1 = zmm1[0]
    float var_58c_1 = zmm2[0]
    float var_588_1 = zmm3[0]
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_5a0_1 = zmm0[0]
    float temp0_13 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_14 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t rdx_4 = ((arg22 s>> 0x1f u>> 0x1d) + arg22) & 0xfffffff8
    int32_t rsi
    
    if (rdx_4 s<= 0)
        rsi = 0
        result = 0
    else
        result = 0
        float temp0_15[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
        float temp0_16[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        float temp0_19[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
        zmm0 = _mm256_broadcast_ss(1.12103877e-44f)
        float var_360_1[0x8] = zmm0
        rsi = 0
        
        while (true)
            bool cond:3_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:3_1))
                zmm0[0].o = zx.o(rsi)
                zmm3 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm3, temp0_15)
                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
                float temp0_26[0x8]
                int32_t temp1_1
                temp0_26, temp1_1 = _mm256_i32gather_ps(zmm2, *(arg19 + (zmm0[0].q << 2)), zmm1)
                float var_4a0_1[0x8] = zmm3
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm3, temp0_16)
                zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, temp0_19)
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                float temp0_31[0x8]
                int32_t temp1_2
                temp0_31, temp1_2 = _mm256_i32gather_ps(arg5, *(arg19 + zmm1[0].q), zmm3)
                zmm3 = temp1_2
                zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_360_1)
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
                float temp0_35[0x8]
                int32_t temp1_3
                temp0_35, temp1_3 = _mm256_i32gather_ps(zmm3, *(arg19 + zmm0[0].q), zmm1)
                float var_500_1[0x8] = arg6
                float temp0_36[0x8] = _mm256_broadcast_ss(arg18[3])
                float var_640_1[0x8] = temp0_36
                float var_620_1[0x8] = temp0_36
                float var_600_1[0x8] = temp0_36
                float var_5e0_1[0x8] = temp0_36
                float temp0_37[0x8] = _mm256_broadcast_ss(arg18[1])
                float temp0_38[0x8] = _mm256_broadcast_ss(arg18[2])
                float temp0_39[0x8] = _mm256_broadcast_ss(*arg18)
                arg8 = _mm256_mul_ps(temp0_31, temp0_38)
                float temp0_41[0x8] = _mm256_mul_ps(temp0_35, temp0_39)
                float temp0_42[0x8] = _mm256_mul_ps(temp0_26, temp0_37)
                float temp0_43[0x8] = _mm256_fmsub_ps(temp0_35, temp0_37, arg8)
                float temp0_44[0x8] = _mm256_fmsub_ps(temp0_26, temp0_38, temp0_41)
                float temp0_45[0x8] = _mm256_fmsub_ps(temp0_31, temp0_39, temp0_42)
                arg8 = _mm256_add_ps(temp0_43, temp0_43)
                float temp0_47[0x8] = _mm256_add_ps(temp0_44, temp0_44)
                float temp0_48[0x8] = _mm256_add_ps(temp0_45, temp0_45)
                float temp0_49[0x8] = _mm256_fmadd_ps(temp0_26, temp0_36, arg8)
                float temp0_50[0x8] = _mm256_fmadd_ps(temp0_31, temp0_36, temp0_47)
                float temp0_51[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_36, temp0_48, temp0_35)
                float temp0_53[0x8] =
                    _mm256_fmsub_ps(_mm256_mul_ps(temp0_47, temp0_38), temp0_48, temp0_37)
                float temp0_54[0x8] = _mm256_mul_ps(temp0_48, temp0_39)
                float temp0_55[0x8] = _mm256_mul_ps(arg8, temp0_37)
                float temp0_56[0x8] = _mm256_add_ps(temp0_49, temp0_53)
                float temp0_58[0x8] =
                    _mm256_add_ps(temp0_50, _mm256_fmsub_ps(temp0_54, arg8, temp0_38))
                float temp0_60[0x8] = _mm256_add_ps(temp0_56, _mm256_broadcast_ss(arg18[4]))
                float temp0_61[0x8] = _mm256_broadcast_ss(arg18[5])
                float temp0_62[0x8] = _mm256_broadcast_ss(arg18[6])
                float temp0_63[0x8] = _mm256_broadcast_ss(var_590_1)
                arg8 = _mm256_cmp_ps(temp0_63, temp0_60, 1)
                
                if (_mm256_movemask_ps(arg8) != 0)
                    var_640_1 = _mm256_maskstore_ps(arg8, temp0_63)
                
                float temp0_67[0x8] = _mm256_fmsub_ps(temp0_39, temp0_47, temp0_55)
                float temp0_68[0x8] = _mm256_add_ps(temp0_58, temp0_61)
                zmm3 = _mm256_xor_ps(arg8, arg12)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_71[0x8] = _mm256_broadcast_ss(var_5a0_1)
                    float temp0_72[0x8] = _mm256_cmp_ps(temp0_60, temp0_71, 1)
                    arg7 = _mm256_and_ps(temp0_72, zmm3)
                    
                    if (_mm256_movemask_ps(arg7) != 0)
                        var_640_1 = _mm256_maskstore_ps(arg7, temp0_71)
                    
                    zmm3 = _mm256_andnot_ps(temp0_72, zmm3)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_640_1 = _mm256_maskstore_ps(zmm3, temp0_60)
                
                float temp0_79[0x8] = _mm256_add_ps(temp0_51, temp0_67)
                float temp0_80[0x8] = _mm256_broadcast_ss(var_58c_1)
                float temp0_81[0x8] = _mm256_cmp_ps(temp0_80, temp0_68, 1)
                
                if (_mm256_movemask_ps(temp0_81) != 0)
                    var_620_1 = _mm256_maskstore_ps(temp0_81, temp0_80)
                
                float temp0_84[0x8] = _mm256_add_ps(temp0_79, temp0_62)
                zmm0 = _mm256_xor_ps(temp0_81, arg12)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    float temp0_87[0x8] = _mm256_broadcast_ss(temp0_13)
                    float temp0_88[0x8] = _mm256_cmp_ps(temp0_68, temp0_87, 1)
                    zmm3 = _mm256_and_ps(temp0_88, zmm0)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_620_1 = _mm256_maskstore_ps(zmm3, temp0_87)
                    
                    zmm0 = _mm256_andnot_ps(temp0_88, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_620_1 = _mm256_maskstore_ps(zmm0, temp0_68)
                
                float temp0_95[0x8] = _mm256_broadcast_ss(var_588_1)
                float temp0_96[0x8] = _mm256_cmp_ps(temp0_95, temp0_84, 1)
                
                if (_mm256_movemask_ps(temp0_96) != 0)
                    var_600_1 = _mm256_maskstore_ps(temp0_96, temp0_95)
                
                zmm0 = _mm256_xor_ps(temp0_96, arg12)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    float temp0_101[0x8] = _mm256_broadcast_ss(temp0_14)
                    float temp0_102[0x8] = _mm256_cmp_ps(temp0_84, temp0_101, 1)
                    zmm3 = _mm256_and_ps(temp0_102, zmm0)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_600_1 = _mm256_maskstore_ps(zmm3, temp0_101)
                    
                    zmm0 = _mm256_andnot_ps(temp0_102, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_600_1 = _mm256_maskstore_ps(zmm0, temp0_84)
                
                arg8 = var_620_1
                arg12 = _mm256_broadcast_ss(*arg1)
                float temp0_110[0x8] = _mm256_sub_ps(var_640_1, arg12)
                arg13 = _mm256_broadcast_ss(*(arg1 + 4))
                float temp0_112[0x8] = _mm256_sub_ps(arg8, arg13)
                float temp0_113[0x8] = _mm256_broadcast_ss(arg1[1].d)
                float temp0_114[0x8] = _mm256_sub_ps(var_600_1, temp0_113)
                float temp0_115[0x8] = _mm256_broadcast_ss(*arg3)
                float temp0_116[0x8] = _mm256_div_ps(temp0_110, temp0_115)
                float temp0_117[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
                float temp0_118[0x8] = _mm256_div_ps(temp0_112, temp0_117)
                float temp0_119[0x8] = _mm256_broadcast_ss(arg3[1].d)
                float temp0_120[0x8] = _mm256_div_ps(temp0_114, temp0_119)
                arg5 = _mm256_cvttps_epi32(temp0_116)
                int32_t temp0_122[0x8] = _mm256_cvttps_epi32(temp0_118)
                arg7 = _mm256_cvttps_epi32(temp0_120)
                float temp0_124[0x8] = _mm256_cvtepi32_ps(arg5)
                float temp0_125[0x8] = _mm256_cvtepi32_ps(temp0_122)
                float var_4c0_1[0x8] = arg7
                float temp0_126[0x8] = _mm256_cvtepi32_ps(arg7)
                float temp0_127[0x8] = _mm256_fmadd_ps(temp0_124, temp0_115, arg12)
                float temp0_128[0x8] = _mm256_fmadd_ps(temp0_125, temp0_117, arg13)
                float temp0_129[0x8] = _mm256_fmadd_ps(temp0_126, temp0_119, temp0_113)
                temp0_113[0].o = __vmovsd_xmmdq_memq(*arg3)
                float temp0_131[0x8] = _mm256_broadcast_ss(2f)
                temp0_113[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_113[0].o, temp0_131[0].o)
                float temp0_133[0x8] = _mm256_broadcastss_ps(temp0_113[0].o)
                float temp0_134[0x8] = _mm256_add_ps(temp0_133, temp0_127)
                temp0_133[0].o = __vmovshdup_xmmdq_xmmdq(temp0_113[0].o)
                arg7 = _mm256_broadcastsd_pd(temp0_133[0].o)
                float temp0_137[0x8] = _mm256_add_ps(arg7, temp0_128)
                temp0_113[0].o = _mm_permute_ps(temp0_113[0].o, 0xea)
                float temp0_139[0x8] = _mm256_cmp_ps(temp0_134, var_640_1, 1)
                arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg5, data_142fc9420)
                arg6 = _mm256_blendv_ps(arg9, arg5, temp0_139)
                float var_640_2[0x8] = arg6
                arg10 = _mm256_broadcastsd_pd(temp0_113[0].o)
                float temp0_143[0x8] = _mm256_cmp_ps(temp0_137, arg8, 1)
                
                if (_mm256_movemask_ps(temp0_143) != 0)
                    arg5 = temp0_122
                
                float temp0_145[0x8] = _mm256_add_ps(arg10, temp0_129)
                float temp0_146[0x8] = _mm256_cmp_ps(temp0_137, arg8, 5)
                arg7[0].o = _mm256_extractf128_ps(temp0_146[0].o, 1)
                temp0_146[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_146[0].o, arg7[0].o)
                temp0_146[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_146[0].o, temp0_115[0].o)
                arg11 = arg8
                
                if (__vpmovmskb_gpr32d_xmmdq(temp0_146[0].o) != 0)
                    arg9 = __vpaddd_ymmqq_ymmqq_memqq(temp0_122, data_142fc9420)
                
                arg16 = _mm256_blendv_ps(arg9, arg5, temp0_143)
                int32_t var_620_2[0x8] = arg16
                float temp0_153[0x8] = _mm256_cmp_ps(temp0_145, var_600_1, 1)
                
                if (_mm256_movemask_ps(temp0_153) != 0)
                    arg5 = var_4c0_1
                
                float temp0_155[0x8] = _mm256_cmp_ps(temp0_145, var_600_1, 5)
                var_600_1[0].o = _mm256_extractf128_ps(temp0_155[0].o, 1)
                temp0_155[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_155[0].o, var_600_1[0].o)
                temp0_155[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_155[0].o, temp0_115[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(temp0_155[0].o) != 0)
                    arg9 = __vpaddd_ymmqq_ymmqq_memqq(var_4c0_1, data_142fc9420)
                
                float temp0_161[0x8] = _mm256_blendv_ps(arg9, arg5, temp0_153)
                float temp0_163[0x8] = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg6), temp0_115, arg12)
                float temp0_165[0x8] = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg16), temp0_117, arg13)
                float temp0_167[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(
                    _mm256_cvtepi32_ps(temp0_161), temp0_119, temp0_113)
                float temp0_168[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_163, temp0_133)
                float temp0_169[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_165, arg7)
                arg8 = _mm256_add_ps(arg10, temp0_167)
                float temp0_172[0x8] = _mm256_div_ps(_mm256_sub_ps(var_640_1, temp0_168), temp0_115)
                float temp0_174[0x8] = _mm256_div_ps(_mm256_sub_ps(arg11, temp0_169), temp0_117)
                float temp0_175[0x8] = _mm256_sub_ps(var_600_1, arg8)
                float var_560_2[0x8] = temp0_172
                float var_540_2[0x8] = temp0_174
                float var_520_2[0x8] = _mm256_div_ps(temp0_175, temp0_119)
                uint32_t temp0_177[0x8] = _mm256_cmpeq_epi32(arg12, arg12)
                zmm0 = _mm256_cmpeq_epi32(arg6, temp0_177)
                bool cond:7_1 = _mm256_movemask_ps(zmm0) == 0
                temp0_175[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_175[0].o, temp0_175[0].o)
                
                if (not(cond:7_1))
                    var_640_2 = _mm256_maskstore_ps(zmm0, temp0_175)
                    var_560_2 = _mm256_maskstore_ps(zmm0, temp0_175)
                    arg6 = var_640_2
                
                int32_t rax_19 = *arg4
                zmm0[0].o = zx.o(rax_19 - 1)
                zmm0 = _mm256_cmpeq_epi32(arg6, _mm256_broadcastd_epi32(zmm0[0]))
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    temp0_174[0].o = zx.o(rax_19 - 2)
                    var_640_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(temp0_174[0]))
                    var_560_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                
                zmm0 = var_620_2
                zmm1 = _mm256_cmpeq_epi32(zmm0, temp0_177)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_620_2 = _mm256_maskstore_ps(zmm1, temp0_175)
                    var_540_2 = _mm256_maskstore_ps(zmm1, temp0_175)
                    zmm0 = var_620_2
                
                float temp0_194[0x8] = _mm256_sub_ps(var_640_1, temp0_60)
                int32_t rax_22 = arg4[1]
                temp0_60[0].o = zx.o(rax_22 - 1)
                zmm2 = _mm256_broadcastd_epi32(temp0_60[0])
                zmm0 = _mm256_cmpeq_epi32(zmm0, zmm2)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2[0].o = zx.o(rax_22 - 2)
                    var_620_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm2[0]))
                    var_540_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                
                float temp0_202[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_600_1, temp0_84)
                float temp0_203[0x8] = _mm256_sub_ps(arg11, temp0_68)
                float temp0_204[0x8] = _mm256_fmadd_ps(temp0_194, temp0_194, temp0_175)
                zmm0 = temp0_161
                zmm3 = _mm256_cmpeq_epi32(zmm0, temp0_177)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    float temp0_207[0x8] = _mm256_maskstore_ps(zmm3, temp0_175)
                    var_520_2 = _mm256_maskstore_ps(zmm3, temp0_175)
                    zmm0 = temp0_207
                
                float temp0_209[0x8] = _mm256_mul_ps(temp0_202, temp0_202)
                arg11 = _mm256_fmadd_ps(temp0_203, temp0_203, temp0_204)
                int32_t rax_25 = arg4[2]
                temp0_204[0].o = zx.o(rax_25 - 1)
                zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(temp0_204[0]))
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm0[0].o = zx.o(rax_25 - 2)
                    float temp0_215[0x8] =
                        _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
                    var_520_2 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
                    zmm0 = temp0_215
                
                zmm2 = __vpbroadcastd_ymmqq_memd(*(arg17 + 4))
                arg7 = var_620_2
                arg9 = _mm256_mullo_epi32(zmm2, var_640_2)
                zmm1 = _mm256_add_epi32(arg9, arg7)
                arg10 = __vpbroadcastd_ymmqq_memd(*(arg17 + 8))
                arg6 = _mm256_mullo_epi32(zmm1, arg10)
                zmm1 = _mm256_add_epi32(arg6, zmm0)
                int64_t rax_28 = *(arg17 + 0x10)
                arg5 = _mm256_slli_epi32(zmm1, 2)
                zmm1[0].o = zx.o(0)
                arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                float temp0_226[0x8]
                int32_t temp1_4
                temp0_226, temp1_4 = _mm256_i32gather_ps(zmm1, *(rax_28 + arg5[0].q), arg8)
                zmm3 = _mm256_sub_epi32(var_640_2, temp0_177)
                int32_t temp0_228[0x8] = _mm256_mullo_epi32(zmm2, zmm3)
                int32_t temp0_230[0x8] =
                    _mm256_mullo_epi32(_mm256_add_epi32(temp0_228, arg7), arg10)
                zmm2 = _mm256_slli_epi32(_mm256_add_epi32(temp0_230, zmm0), 2)
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                float temp0_235[0x8]
                int32_t temp1_5
                temp0_235, temp1_5 = _mm256_i32gather_ps(arg5, *(rax_28 + zmm2[0].q), zmm3)
                arg14 = _mm256_sub_epi32(arg7, temp0_177)
                arg9 = _mm256_mullo_epi32(_mm256_add_epi32(arg9, arg14), arg10)
                arg7 = _mm256_add_epi32(arg9, zmm0)
                uint32_t temp0_240[0x8] = _mm256_cmpeq_epi32(temp0_177, temp0_177)
                arg15 = _mm256_slli_epi32(arg7, 2)
                arg7[0].o = zx.o(0)
                arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                float temp0_243[0x8]
                int32_t temp1_6
                temp0_243, temp1_6 = _mm256_i32gather_ps(arg7, *(rax_28 + arg15[0].q), arg16)
                arg7 = temp0_243
                arg16 = temp1_6
                arg10 = _mm256_mullo_epi32(_mm256_add_epi32(temp0_228, arg14), arg10)
                arg13 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm0), 2)
                arg14[0].o = zx.o(0)
                arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                float temp0_249[0x8]
                int32_t temp1_7
                temp0_249, temp1_7 = _mm256_i32gather_ps(arg14, *(rax_28 + arg13[0].q), arg15)
                arg14 = temp0_249
                arg15 = temp1_7
                zmm0 = _mm256_sub_epi32(zmm0, temp0_240)
                arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg6, zmm0), 2)
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                float temp0_255[0x8]
                int32_t temp1_8
                temp0_255, temp1_8 = _mm256_i32gather_ps(arg13, *(rax_28 + arg6[0].q), arg15)
                arg13 = temp0_255
                arg15 = temp1_8
                arg6 = _mm256_slli_epi32(_mm256_add_epi32(temp0_230, zmm0), 2)
                temp0_230[0].o = zx.o(0)
                arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                float temp0_259[0x8]
                int32_t temp1_9
                temp0_259, temp1_9 = _mm256_i32gather_ps(temp0_230, *(rax_28 + arg6[0].q), arg15)
                arg8 = temp0_259
                arg15 = temp1_9
                arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg9, zmm0), 2)
                arg9[0].o = zx.o(0)
                arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                float temp0_263[0x8]
                int32_t temp1_10
                temp0_263, temp1_10 = _mm256_i32gather_ps(arg9, *(rax_28 + arg6[0].q), arg15)
                arg9 = temp0_263
                arg15 = temp1_10
                arg5 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_235, temp0_226), var_560_2, temp0_226)
                float temp0_266[0x8] = _mm256_sub_ps(arg14, arg7)
                zmm0 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm0), 2)
                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                float temp0_271[0x8]
                int32_t temp1_11
                temp0_271, temp1_11 = _mm256_i32gather_ps(arg6, *(rax_28 + zmm0[0].q), arg10)
                arg10 = temp1_11
                float temp0_272[0x8] = _mm256_fmadd_ps(temp0_266, var_560_2, arg7)
                float temp0_274[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg8, arg13), var_560_2, arg13)
                arg6 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_271, arg9), var_560_2, arg9)
                float temp0_278[0x8] =
                    _mm256_fmadd_ps(_mm256_sub_ps(temp0_272, arg5), var_540_2, arg5)
                zmm3 = _mm256_fmadd_ps(_mm256_sub_ps(arg6, temp0_274), var_540_2, temp0_274)
                zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(_mm256_sub_ps(zmm3, temp0_278), temp0_278, 
                    var_520_2)
                float temp0_283[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg11, temp0_209)
                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                float temp0_285[0x8] = _mm256_cmp_ps(temp0_283, arg6, 0xc)
                
                if (_mm256_movemask_ps(temp0_285) != 0)
                    float temp0_287[0x8] = _mm256_rsqrt_ps(temp0_283)
                    float temp0_288[0x8] = _mm256_mul_ps(temp0_283, temp0_287)
                    float temp0_292[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_mul_ps(temp0_287, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_287, temp0_288)), 
                        var_380)
                    zmm3 = _mm256_rcp_ps(temp0_292)
                    arg5 = _mm256_fmadd_ps(_mm256_fnmadd_ps(temp0_131, zmm3, temp0_292), zmm3, zmm0)
                    zmm0 = _mm256_blendv_ps(zmm0, arg5, temp0_285)
                
                arg12 = _mm256_cmpeq_epi32(temp0_240, temp0_240)
                zmm2 = var_4a0_1
                zmm1 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg21), 1)
                char i_4 = _mm256_movemask_ps(zmm1)
                
                if (i_4 == 0)
                    result = 0
                    rsi += 8
                    
                    if (rsi s>= rdx_4)
                        break
                    
                    continue
                else
                    uint64_t i_2 = zx.q(i_4)
                    result = 0
                    
                    do
                        uint64_t rbx_8 = _tzcnt_u64(i_2)
                        i_2 &= not.q(1 << (rbx_8 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            float var_240[0x8] = zmm0
                            uint64_t rbx_9 = zx.q(rbx_8.d) & 7
                            zmm1[0].o = var_240[rbx_9]
                            *arg21 = zmm1[0]
                            float var_220[0x8] = zmm2
                            *arg20 = var_220[rbx_9]
                        
                        result.b = 1
                    while (i_2 != 0)
            
            rsi += 8
            
            if (rsi s>= rdx_4)
                break
    
    if (rsi s< arg22)
        bool cond:1_1 = result.b != 0
        result.b = 1
        
        if (not(cond:1_1))
            zmm0[0].o = zx.o(rsi)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm2 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
            zmm0[0].o = zx.o(arg22)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm1 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(3))
            arg14 = _mm256_cmpgt_epi32(zmm0, zmm2)
            zmm3[0].o = __vxorpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            float temp0_599[0x8]
            int32_t temp1_23
            temp0_599, temp1_23 = _mm256_i32gather_ps(zmm3, *(arg19 + (zmm1[0].q << 2)), arg14)
            zmm0 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(0xc))
            zmm1 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(4))
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            float temp0_605[0x8]
            int32_t temp1_24
            temp0_605, temp1_24 = _mm256_i32gather_ps(arg6, *(arg19 + zmm1[0].q), arg14)
            arg5 = temp1_24
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            zmm0 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_610[0x8]
            int32_t temp1_25
            temp0_610, temp1_25 = _mm256_i32gather_ps(arg7, *(arg19 + zmm0[0].q), arg14)
            float temp0_611[0x8] = _mm256_broadcast_ss(arg18[3])
            float var_640_5[0x8] = temp0_611
            float var_620_5[0x8] = temp0_611
            float var_600_9[0x8] = temp0_611
            float var_5e0_3[0x8] = temp0_611
            float temp0_612[0x8] = _mm256_broadcast_ss(arg18[1])
            arg8 = _mm256_broadcast_ss(arg18[2])
            float temp0_614[0x8] = _mm256_broadcast_ss(*arg18)
            float temp0_615[0x8] = _mm256_mul_ps(temp0_611, arg5)
            float temp0_616[0x8] = _mm256_mul_ps(temp0_605, arg8)
            float temp0_617[0x8] = _mm256_mul_ps(temp0_610, temp0_614)
            arg12 = _mm256_mul_ps(temp0_599, temp0_612)
            float temp0_619[0x8] = _mm256_fmsub_ps(temp0_616, temp0_612, temp0_610)
            float temp0_620[0x8] = _mm256_fmsub_ps(temp0_617, arg8, temp0_599)
            arg12 = _mm256_fmsub_ps(arg12, temp0_614, temp0_605)
            float temp0_622[0x8] = _mm256_sub_ps(temp0_615, temp0_615)
            float temp0_623[0x8] = _mm256_add_ps(temp0_619, temp0_619)
            arg6 = _mm256_add_ps(temp0_620, temp0_620)
            float temp0_625[0x8] = _mm256_add_ps(arg12, arg12)
            float temp0_626[0x8] = _mm256_add_ps(temp0_622, temp0_622)
            float var_560_5[0x8] = temp0_623
            float var_540_5[0x8] = arg6
            float var_520_5[0x8] = temp0_625
            float var_500_3[0x8] = temp0_626
            arg8 = _mm256_fmadd_ps(temp0_599, temp0_611, temp0_623)
            float temp0_628[0x8] = _mm256_fmadd_ps(temp0_605, temp0_611, arg6)
            float temp0_629[0x8] = _mm256_fmadd_ps(temp0_610, temp0_611, temp0_625)
            int32_t var_180_1[0x8] = arg8
            float var_160_1[0x8] = temp0_628
            float var_140_1[0x8] = temp0_629
            float var_120_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_626, temp0_611, arg5)
            float temp0_631[0x8] = _mm256_broadcast_ss(arg18[1])
            float temp0_632[0x8] = _mm256_broadcast_ss(arg18[2])
            float temp0_633[0x8] = _mm256_broadcast_ss(*arg18)
            arg12 = _mm256_mul_ps(arg6, temp0_632)
            arg13 = _mm256_mul_ps(temp0_625, temp0_633)
            float temp0_636[0x8] = _mm256_mul_ps(temp0_623, temp0_631)
            arg12 = _mm256_fmsub_ps(arg12, temp0_625, temp0_631)
            arg13 = _mm256_fmsub_ps(arg13, temp0_623, temp0_632)
            float temp0_639[0x8] = _mm256_add_ps(arg8, arg12)
            arg8 = _mm256_add_ps(temp0_628, arg13)
            arg13 = _mm256_add_ps(temp0_639, _mm256_broadcast_ss(arg18[4]))
            float temp0_643[0x8] = _mm256_broadcast_ss(arg18[5])
            arg12 = _mm256_broadcast_ss(arg18[6])
            float temp0_645[0x8] = _mm256_broadcast_ss(var_590_1)
            arg7 = _mm256_cmp_ps(temp0_645, arg13, 1)
            arg11 = _mm256_and_ps(arg7, arg14)
            temp0_639[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            temp0_639[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, temp0_639[0].o)
            temp0_639[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_639[0].o, temp0_629[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_639[0].o) != 0)
                var_640_5 = _mm256_maskstore_ps(arg7, temp0_645)
            
            float temp0_653[0x8] = _mm256_fmsub_ps(temp0_633, arg6, temp0_636)
            float temp0_654[0x8] = _mm256_add_ps(arg8, temp0_643)
            zmm1 = _mm256_andnot_ps(arg7, arg14)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm1 = _mm256_xor_ps(arg7, _mm256_cmpeq_epi32(zmm1, zmm1))
                arg7 = _mm256_broadcast_ss(var_5a0_1)
                arg6 = _mm256_cmp_ps(arg13, arg7, 1)
                int32_t temp0_661[0x8] = _mm256_and_ps(arg6, zmm1)
                
                if (_mm256_movemask_ps(_mm256_and_ps(temp0_661, arg14)) != 0)
                    var_640_5 = _mm256_maskstore_ps(temp0_661, arg7)
                
                zmm1 = _mm256_andnot_ps(arg6, zmm1)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm1, arg14)) != 0)
                    var_640_5 = _mm256_maskstore_ps(zmm1, arg13)
            
            float var_4e0_3[0x8] = zmm2
            float temp0_669[0x8] = _mm256_add_ps(temp0_629, temp0_653)
            float temp0_670[0x8] = _mm256_broadcast_ss(var_58c_1)
            float temp0_671[0x8] = _mm256_cmp_ps(temp0_670, temp0_654, 1)
            zmm3 = _mm256_and_ps(temp0_671, arg14)
            arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_671[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                var_620_5 = _mm256_maskstore_ps(temp0_671, temp0_670)
            
            float temp0_678[0x8] = _mm256_add_ps(temp0_669, arg12)
            zmm1 = _mm256_andnot_ps(temp0_671, arg14)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm0 = temp0_671 ^ _mm256_cmpeq_epi32(zmm1, zmm1)
                zmm3 = _mm256_broadcast_ss(temp0_13)
                float temp0_683[0x8] = _mm256_cmp_ps(temp0_654, zmm3, 1)
                arg5 = _mm256_and_ps(temp0_683, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg14)) != 0)
                    var_620_5 = _mm256_maskstore_ps(arg5, zmm3)
                
                zmm0 = _mm256_andnot_ps(temp0_683, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg14)) != 0)
                    var_620_5 = _mm256_maskstore_ps(zmm0, temp0_654)
            
            float temp0_692[0x8] = _mm256_broadcast_ss(var_588_1)
            float temp0_693[0x8] = _mm256_cmp_ps(temp0_692, temp0_678, 1)
            zmm2 = _mm256_and_ps(temp0_693, arg14)
            zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_693[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                var_600_9 = _mm256_maskstore_ps(temp0_693, temp0_692)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(temp0_693, arg14)) != 0)
                zmm0 = __vxorps_ymmqq_ymmqq_memqq(temp0_693, data_142fc9420)
                float temp0_703[0x8] = _mm256_broadcast_ss(temp0_14)
                float temp0_704[0x8] = _mm256_cmp_ps(temp0_678, temp0_703, 1)
                arg5 = _mm256_and_ps(temp0_704, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg14)) != 0)
                    var_600_9 = _mm256_maskstore_ps(arg5, temp0_703)
                
                zmm0 = _mm256_andnot_ps(temp0_704, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg14)) != 0)
                    var_600_9 = _mm256_maskstore_ps(zmm0, temp0_678)
            
            int32_t var_3c0_3[0x8] = arg13
            arg16 = var_620_5
            arg8 = var_600_9
            float temp0_713[0x8] = _mm256_broadcast_ss(*arg1)
            float temp0_714[0x8] = _mm256_broadcast_ss(*(arg1 + 4))
            float temp0_715[0x8] = _mm256_sub_ps(arg16, temp0_714)
            arg12 = _mm256_broadcast_ss(*(arg3 + 4))
            float temp0_717[0x8] = _mm256_div_ps(temp0_715, arg12)
            float temp0_718[0x8] = _mm256_sub_ps(var_640_5, temp0_713)
            float temp0_719[0x8] = _mm256_broadcast_ss(arg1[1].d)
            zmm1 = _mm256_cvttps_epi32(temp0_717)
            float temp0_722[0x8] = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm1), arg12, temp0_714)
            temp0_714[0].o = __vmovsd_xmmdq_memq(*arg3)
            float temp0_724[0x8] = _mm256_broadcast_ss(2f)
            arg7[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_714[0].o, temp0_724[0].o)
            temp0_714[0].o = __vmovshdup_xmmdq_xmmdq(arg7[0].o)
            zmm3 = _mm256_broadcastsd_pd(temp0_714[0].o)
            float var_4c0_3[0x8] = zmm3
            float temp0_728[0x8] = _mm256_add_ps(zmm3, temp0_722)
            float temp0_729[0x8] = _mm256_cmp_ps(temp0_728, arg16, 1)
            zmm3 = _mm256_and_ps(temp0_729, arg14)
            temp0_724[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_724[0].o)
            float temp0_733[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_734[0x8] = _mm256_div_ps(temp0_718, temp0_733)
            int32_t var_580_5[0x8] = arg8
            arg8 = _mm256_sub_ps(arg8, temp0_719)
            float temp0_736[0x8] = _mm256_broadcast_ss(arg3[1].d)
            arg8 = _mm256_div_ps(arg8, temp0_736)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_734[0].o)
            char temp0_739 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
            zmm3 = _mm256_cvttps_epi32(temp0_734)
            int32_t temp0_741[0x8] = _mm256_cvttps_epi32(arg8)
            float temp0_743[0x8] = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm3), temp0_733, temp0_713)
            arg13 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(temp0_741), temp0_736, temp0_719)
            float temp0_746[0x8] = _mm256_broadcastss_ps(arg7[0].o)
            float temp0_747[0x8] = _mm256_add_ps(temp0_746, temp0_743)
            arg7[0].o = _mm_permute_ps(arg7[0].o, 0xea)
            arg15 = _mm256_broadcastsd_pd(arg7[0].o)
            float temp0_750[0x8] = _mm256_cmp_ps(temp0_747, var_640_5, 1)
            arg10 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc9420)
            zmm0 = _mm256_blendv_ps(arg10, zmm3, temp0_750)
            float var_640_6[0x8] = zmm0
            int32_t var_400_3[0x8] = arg16
            arg16 = _mm256_cmp_ps(temp0_728, arg16, 5)
            
            if (temp0_739 != 0)
                zmm3 = zmm1
            
            arg13 = _mm256_add_ps(arg15, arg13)
            zmm2 = _mm256_and_ps(arg14, arg16)
            arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                arg10 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, data_142fc9420)
            
            float temp0_761[0x8] = _mm256_blendv_ps(arg10, zmm3, temp0_729)
            float var_620_6[0x8] = temp0_761
            zmm2 = var_580_5
            arg16 = _mm256_cmp_ps(arg13, zmm2, 5)
            float temp0_763[0x8] = _mm256_cmp_ps(arg13, zmm2, 1)
            zmm2 = _mm256_and_ps(temp0_763, arg14)
            arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm3 = temp0_741
            
            zmm2 = _mm256_and_ps(arg14, arg16)
            arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                arg10 = __vpaddd_ymmqq_ymmqq_memqq(temp0_741, data_142fc9420)
            
            float temp0_775[0x8] = _mm256_blendv_ps(arg10, zmm3, temp0_763)
            float temp0_777[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm0), temp0_733, temp0_713)
            float temp0_779[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_761), arg12, temp0_714)
            float temp0_781[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_775), temp0_736, temp0_719)
            float temp0_782[0x8] = _mm256_add_ps(temp0_746, temp0_777)
            float temp0_783[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_779, var_4c0_3)
            float temp0_784[0x8] = _mm256_add_ps(arg15, temp0_781)
            float temp0_786[0x8] = _mm256_div_ps(_mm256_sub_ps(var_640_5, temp0_782), temp0_733)
            float temp0_788[0x8] = _mm256_div_ps(_mm256_sub_ps(var_400_3, temp0_783), arg12)
            float temp0_790[0x8] = _mm256_div_ps(_mm256_sub_ps(var_580_5, temp0_784), temp0_736)
            float var_560_6[0x8] = temp0_786
            float var_540_6[0x8] = temp0_788
            float var_520_6[0x8] = temp0_790
            zmm1 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, data_142fc9420)
            zmm2 = zmm1 & arg14
            temp0_786[0].o = _mm256_extracti128_si256(zmm2, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_786[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                var_640_6 = _mm256_maskstore_ps(zmm1, zmm0)
                var_560_6 = _mm256_maskstore_ps(zmm1, zmm0)
                zmm0 = var_640_6
            
            int32_t rax_77 = *arg4
            zmm1[0].o = zx.o(rax_77 - 1)
            zmm0 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            zmm1 = zmm0 & arg14
            temp0_786[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_786[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(rax_77 - 2)
                var_640_6 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                zmm1 = _mm256_broadcast_ss(1f)
                var_560_6 = _mm256_maskstore_ps(zmm0, zmm1)
            
            float temp0_809[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_640_5, var_3c0_3)
            zmm1[0].o = zx.o(0)
            zmm3 = var_620_6
            arg5 = _mm256_cmpeq_epi32(zmm3, _mm256_cmpeq_epi32(temp0_790, temp0_790))
            arg6 = arg5 & arg14
            temp0_784[0].o = _mm256_extracti128_si256(arg6, 1)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_784[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_809[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                zmm3[0].o = zx.o(0)
                var_620_6 = _mm256_maskstore_ps(arg5, zmm3)
                var_540_6 = _mm256_maskstore_ps(arg5, zmm3)
                zmm3 = var_620_6
            
            float temp0_818[0x8] = _mm256_sub_ps(var_400_3, temp0_654)
            float temp0_819[0x8] = _mm256_fmadd_ps(temp0_809, temp0_809, zmm1)
            int32_t rdx_8 = arg4[1]
            zmm1[0].o = zx.o(rdx_8 - 1)
            zmm1 = _mm256_cmpeq_epi32(zmm3, _mm256_broadcastd_epi32(zmm1[0]))
            zmm3 = zmm1 & arg14
            arg5[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_819[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm3[0].o = zx.o(rdx_8 - 2)
                var_620_6 = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm3[0]))
                var_540_6 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
            
            zmm1 = var_580_5
            float temp0_830[0x8] = __vsubps_ymmqq_ymmqq_memqq(zmm1, temp0_678)
            float temp0_831[0x8] = _mm256_fmadd_ps(temp0_818, temp0_818, temp0_819)
            zmm0 = temp0_775
            zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_cmpeq_epi32(zmm1, zmm1))
            zmm3 = zmm1 & arg14
            temp0_784[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_784[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm0[0].o = zx.o(0)
                float temp0_838[0x8] = _mm256_maskstore_ps(zmm1, zmm0)
                var_520_6 = _mm256_maskstore_ps(zmm1, zmm0)
                zmm0 = temp0_838
            
            float temp0_840[0x8] = _mm256_fmadd_ps(temp0_830, temp0_830, temp0_831)
            int32_t rdx_11 = arg4[2]
            zmm1[0].o = zx.o(rdx_11 - 1)
            zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            arg5 = arg14
            zmm3 = zmm1 & arg14
            temp0_831[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_831[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm0[0].o = zx.o(rdx_11 - 2)
                float temp0_848[0x8] = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
                var_520_6 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
                zmm0 = temp0_848
            
            zmm1 = __vpbroadcastd_ymmqq_memd(*(arg17 + 4))
            int32_t temp0_852[0x8] = _mm256_mullo_epi32(zmm1, var_640_6)
            arg6 = _mm256_add_epi32(temp0_852, var_620_6)
            arg11 = __vpbroadcastd_ymmqq_memd(*(arg17 + 8))
            int32_t temp0_855[0x8] = _mm256_mullo_epi32(arg6, arg11)
            arg6 = _mm256_add_epi32(temp0_855, zmm0)
            int64_t rax_80 = *(arg17 + 0x10)
            arg7 = _mm256_slli_epi32(arg6, 2)
            arg6[0].o = zx.o(0)
            float temp0_858[0x8]
            int32_t temp1_26
            temp0_858, temp1_26 = _mm256_i32gather_ps(arg6, *(rax_80 + arg7[0].q), arg5)
            uint32_t temp0_859[0x8] = _mm256_cmpeq_epi32(arg12, arg12)
            zmm3 = _mm256_sub_epi32(var_640_6, temp0_859)
            arg14 = _mm256_mullo_epi32(zmm1, zmm3)
            arg10 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, var_620_6), arg11)
            zmm1 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm0), 2)
            zmm3[0].o = zx.o(0)
            float temp0_866[0x8]
            int32_t temp1_27
            temp0_866, temp1_27 = _mm256_i32gather_ps(zmm3, *(rax_80 + zmm1[0].q), arg5)
            arg7 = var_560_6
            arg15 = _mm256_sub_epi32(var_620_6, temp0_859)
            int32_t temp0_869[0x8] = _mm256_mullo_epi32(_mm256_add_epi32(temp0_852, arg15), arg11)
            arg9 = _mm256_add_epi32(temp0_869, zmm0)
            arg16 = _mm256_slli_epi32(arg9, 2)
            arg9[0].o = zx.o(0)
            float temp0_872[0x8]
            int32_t temp1_28
            temp0_872, temp1_28 = _mm256_i32gather_ps(arg9, *(rax_80 + arg16[0].q), arg5)
            arg9 = temp0_872
            zmm2 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, arg15), arg11)
            arg11 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm0), 2)
            arg14[0].o = zx.o(0)
            float temp0_877[0x8]
            int32_t temp1_29
            temp0_877, temp1_29 = _mm256_i32gather_ps(arg14, *(rax_80 + arg11[0].q), arg5)
            arg14 = temp0_877
            arg15 = temp1_29
            zmm0 = _mm256_sub_epi32(zmm0, temp0_859)
            arg8 = _mm256_slli_epi32(_mm256_add_epi32(temp0_855, zmm0), 2)
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            float temp0_882[0x8]
            int32_t temp1_30
            temp0_882, temp1_30 = _mm256_i32gather_ps(arg11, *(rax_80 + arg8[0].q), arg5)
            arg11 = temp0_882
            arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm0), 2)
            arg10[0].o = zx.o(0)
            float temp0_885[0x8]
            int32_t temp1_31
            temp0_885, temp1_31 = _mm256_i32gather_ps(arg10, *(rax_80 + arg8[0].q), arg5)
            arg10 = temp0_885
            arg12 = temp1_31
            arg8 = _mm256_slli_epi32(_mm256_add_epi32(temp0_869, zmm0), 2)
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            float temp0_889[0x8]
            int32_t temp1_32
            temp0_889, temp1_32 = _mm256_i32gather_ps(arg12, *(rax_80 + arg8[0].q), arg5)
            arg12 = temp0_889
            arg13 = arg5
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm0), 2)
            zmm2[0].o = zx.o(0)
            float temp0_892[0x8]
            int32_t temp1_33
            temp0_892, temp1_33 = _mm256_i32gather_ps(zmm2, *(rax_80 + zmm0[0].q), arg5)
            arg8 = temp1_33
            float temp0_894[0x8] =
                _mm256_fmadd_ps(_mm256_sub_ps(temp0_866, temp0_858), arg7, temp0_858)
            float temp0_896[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg14, arg9), arg7, arg9)
            float temp0_898[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg10, arg11), arg7, arg11)
            float temp0_900[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(temp0_892, arg12), arg7, arg12)
            float temp0_902[0x8] =
                _mm256_fmadd_ps(_mm256_sub_ps(temp0_896, temp0_894), var_540_6, temp0_894)
            zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(
                    _mm256_fmadd_ps(_mm256_sub_ps(temp0_900, temp0_898), var_540_6, temp0_898), 
                    temp0_902), 
                temp0_902, var_520_6)
            var_540_6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_540_6[0].o, var_540_6[0].o)
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(temp0_840, var_540_6, 0xc), arg13)
            temp0_900[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_900[0].o)
            temp0_900[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_900[0].o) != 0)
                float temp0_914[0x8] = _mm256_rsqrt_ps(temp0_840)
                float temp0_915[0x8] = _mm256_mul_ps(temp0_840, temp0_914)
                float temp0_919[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_914, 
                        _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_914, temp0_915)), 
                    var_380)
                float temp0_920[0x8] = _mm256_rcp_ps(temp0_919)
                zmm0 = _mm256_blendv_ps(zmm0, 
                    _mm256_fmadd_ps(_mm256_fnmadd_ps(temp0_724, temp0_920, temp0_919), temp0_920, 
                        zmm0), 
                    _mm256_cvtepi16_epi32(zmm1[0].o))
            
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg21), 1), arg13)
            int32_t i_6 = _mm256_movemask_ps(zmm1)
            
            if (i_6 == 0)
                result = 0
            else
                uint64_t i_3 = zx.q(i_6)
                result = 0
                
                do
                    uint64_t rdx_14 = _tzcnt_u64(i_3)
                    i_3 &= not.q(1 << (rdx_14 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        float var_280[0x8] = zmm0
                        uint64_t rdx_15 = zx.q(rdx_14.d) & 7
                        zmm1[0].o = var_280[rdx_15]
                        *arg21 = zmm1[0]
                        float var_260[0x8] = var_4e0_3
                        *arg20 = var_260[rdx_15]
                    
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
