// 函数: sub_140055c60
// 地址: 0x140055c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg17[0].o
int128_t var_68 = arg16[0].o
int128_t var_78 = arg15[0].o
int128_t var_88 = arg14[0].o
int128_t var_98 = arg13[0].o
int128_t var_a8 = arg12[0].o
int128_t var_b8 = arg11[0].o
int128_t var_c8 = arg10[0].o
int128_t var_d8 = arg9[0].o
int128_t var_e8 = arg8[0].o
float zmm0[0x8] = *arg26
float* var_5a8 = arg3
float* var_5b0 = arg1
int32_t* result
uint32_t zmm1[0x8]
float zmm2[0x8]

if (_mm256_movemask_ps(zmm0) != 0xff)
    float var_1a0_1[0x8] = zmm0
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    float var_400_1[0x8] = arg6
    float var_420_1[0x8] = arg6
    float var_440_1[0x8] = arg6
    zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
    zmm2 = _mm256_broadcast_ss(0.5f)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
    float var_4a0_1[0x8] = zmm2
    zmm0 = _mm256_mul_ps(zmm0, zmm2)
    zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    uint32_t var_730_1 = zmm1[0]
    float temp0_319 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float temp0_320 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_740_1 = zmm0[0]
    float temp0_324 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_325 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t rax_35 = ((arg25 s>> 0x1f u>> 0x1d) + arg25) & 0xfffffff8
    int32_t rbx_2
    
    if (rax_35 s<= 0)
        rbx_2 = 0
    else
        float temp0_326[0x8] = _mm256_broadcast_ss(arg19[3])
        temp0_326[0].o = *arg19
        zmm1[0].o = arg19[1]
        zmm2[0].o = zx.o(arg19[2])
        float temp0_327[0x8] = _mm256_broadcast_ss(*arg1)
        arg16 = _mm256_broadcast_ss(*(arg1 + 4))
        float temp0_329[0x8] = _mm256_broadcast_ss(arg1[1].d)
        float temp0_330[0x8] = _mm256_broadcast_ss(*arg3)
        float temp0_331[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
        float temp0_332[0x8] = _mm256_broadcast_ss(arg3[1].d)
        temp0_332[0].o = __vmovsd_xmmdq_memq(*arg3)
        float temp0_334[0x8] = _mm256_broadcast_ss(2f)
        temp0_332[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_332[0].o, temp0_334[0].o)
        float temp0_336[0x8] = _mm256_broadcastss_ps(temp0_332[0].o)
        arg7[0].o = __vmovshdup_xmmdq_xmmdq(temp0_332[0].o)
        arg6 = _mm256_broadcastsd_pd(arg7[0].o)
        float var_580_2[0x8] = arg6
        temp0_332[0].o = _mm_permute_ps(temp0_332[0].o, 0xea)
        float var_5a0_2[0x8] = _mm256_broadcastsd_pd(temp0_332[0].o)
        float temp0_341[0x8] = _mm256_broadcast_ss(*(arg18 + 4))
        arg5 = _mm256_broadcast_ss(*(arg18 + 8))
        float var_260_2[0x8] = arg5
        int64_t r11_6 = *(arg18 + 0x10)
        int32_t rdi_3 = 0
        uint32_t var_280_2[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
        uint32_t temp0_344[0x8] = _mm256_broadcastd_epi32(zmm2[0])
        arg14 = _mm256_broadcastss_ps(temp0_326[0].o)
        rbx_2 = 0
        temp0_326[0].o = arg22
        float temp0_346[0x8] = _mm256_broadcastss_ps(temp0_326[0].o)
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        float temp0_348[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
        float temp0_349[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
        arg15 = _mm256_cmpeq_epi32(arg15, arg15)
        float temp0_351[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
        float temp0_352[0x8] = _mm256_broadcast_ss(1.12103877e-44f)
        float temp0_353[0x8] = _mm256_broadcast_ss(-9.99999975e-05f)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        uint32_t var_460_2[0x8] = arg16
        float var_480_2[0x8] = arg14
        
        do
            float var_600_2[0x8] = arg6
            zmm0 = *(arg21 + sx.q(rdi_3))
            zmm1 = __vpmulld_ymmqq_ymmqq_memqq(zmm0, temp0_348)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_358[0x8]
            int32_t temp1_12
            temp0_358, temp1_12 = _mm256_i32gather_ps(arg5, *(arg20 + (zmm1[0].q << 2)), zmm2)
            zmm2 = temp1_12
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm0, temp0_349)
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, temp0_351)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_363[0x8]
            int32_t temp1_13
            temp0_363, temp1_13 = _mm256_i32gather_ps(arg7, *(arg20 + zmm1[0].q), zmm2)
            zmm2 = temp1_13
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, temp0_352)
            uint32_t temp0_365[0x8] = _mm256_cmpeq_epi32(zmm1, zmm1)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            float temp0_367[0x8]
            int32_t temp1_14
            temp0_367, temp1_14 = _mm256_i32gather_ps(zmm2, *(arg20 + zmm0[0].q), temp0_365)
            float var_660_2[0x8] = arg8
            float var_7c0_3[0x8] = temp0_326
            float var_7a0_3[0x8] = temp0_326
            float var_780_5[0x8] = temp0_326
            float var_760_2[0x8] = temp0_326
            arg13 = temp0_344
            float temp0_368[0x8] = _mm256_mul_ps(temp0_363, arg13)
            zmm1 = _mm256_mul_ps(temp0_367, arg14)
            float temp0_370[0x8] = _mm256_mul_ps(temp0_358, var_280_2)
            float temp0_371[0x8] = _mm256_fmsub_ps(temp0_367, var_280_2, temp0_368)
            float temp0_372[0x8] = _mm256_fmsub_ps(temp0_358, arg13, zmm1)
            float temp0_373[0x8] = _mm256_fmsub_ps(temp0_363, arg14, temp0_370)
            zmm1 = _mm256_add_ps(temp0_371, temp0_371)
            float temp0_375[0x8] = _mm256_add_ps(temp0_372, temp0_372)
            float temp0_376[0x8] = _mm256_add_ps(temp0_373, temp0_373)
            float temp0_377[0x8] = _mm256_fmadd_ps(temp0_358, temp0_326, zmm1)
            float temp0_378[0x8] = _mm256_fmadd_ps(temp0_363, temp0_326, temp0_375)
            float temp0_379[0x8] = _mm256_fmadd_ps(temp0_367, temp0_326, temp0_376)
            float temp0_380[0x8] = _mm256_mul_ps(temp0_375, arg13)
            float temp0_381[0x8] = _mm256_mul_ps(temp0_376, arg14)
            float temp0_382[0x8] = _mm256_mul_ps(zmm1, var_280_2)
            float temp0_384[0x8] =
                _mm256_add_ps(temp0_377, _mm256_fmsub_ps(temp0_376, var_280_2, temp0_380))
            zmm1 = _mm256_add_ps(temp0_378, _mm256_fmsub_ps(zmm1, arg13, temp0_381))
            float temp0_388[0x8] = _mm256_add_ps(temp0_384, _mm256_broadcast_ss(arg19[4]))
            float temp0_389[0x8] = _mm256_broadcast_ss(arg19[5])
            float temp0_390[0x8] = _mm256_broadcast_ss(arg19[6])
            float temp0_391[0x8] = _mm256_broadcast_ss(var_730_1)
            float temp0_392[0x8] = _mm256_cmp_ps(temp0_391, temp0_388, 1)
            
            if (_mm256_movemask_ps(temp0_392) != 0)
                var_7c0_3 = _mm256_maskstore_ps(temp0_392, temp0_391)
            
            float temp0_395[0x8] = _mm256_fmsub_ps(temp0_375, arg14, temp0_382)
            float temp0_396[0x8] = _mm256_add_ps(zmm1, temp0_389)
            zmm0 = _mm256_xor_ps(temp0_392, arg15)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_399[0x8] = _mm256_broadcast_ss(var_740_1)
                zmm1 = _mm256_cmp_ps(temp0_388, temp0_399, 1)
                arg9 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(arg9) != 0)
                    var_7c0_3 = _mm256_maskstore_ps(arg9, temp0_399)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_7c0_3 = _mm256_maskstore_ps(zmm0, temp0_388)
            
            float temp0_407[0x8] = _mm256_add_ps(temp0_379, temp0_395)
            float temp0_408[0x8] = _mm256_broadcast_ss(temp0_319)
            zmm1 = _mm256_cmp_ps(temp0_408, temp0_396, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_7a0_3 = _mm256_maskstore_ps(zmm1, temp0_408)
            
            float temp0_412[0x8] = _mm256_add_ps(temp0_407, temp0_390)
            zmm0 = _mm256_xor_ps(zmm1, arg15)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_415[0x8] = _mm256_broadcast_ss(temp0_324)
                zmm1 = _mm256_cmp_ps(temp0_396, temp0_415, 1)
                arg5 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_7a0_3 = _mm256_maskstore_ps(arg5, temp0_415)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_7a0_3 = _mm256_maskstore_ps(zmm0, temp0_396)
            
            zmm1 = _mm256_broadcast_ss(temp0_320)
            float temp0_424[0x8] = _mm256_cmp_ps(zmm1, temp0_412, 1)
            
            if (_mm256_movemask_ps(temp0_424) != 0)
                var_780_5 = _mm256_maskstore_ps(temp0_424, zmm1)
            
            arg10 = arg16
            zmm0 = _mm256_xor_ps(temp0_424, arg15)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_429[0x8] = _mm256_broadcast_ss(temp0_325)
                zmm1 = _mm256_cmp_ps(temp0_412, temp0_429, 1)
                arg5 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_780_5 = _mm256_maskstore_ps(arg5, temp0_429)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_780_5 = _mm256_maskstore_ps(zmm0, temp0_412)
            
            arg16 = temp0_327
            float temp0_438[0x8] = _mm256_div_ps(_mm256_sub_ps(var_7c0_3, arg16), temp0_330)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_7a0_3, arg10), temp0_331)
            float temp0_442[0x8] = _mm256_div_ps(_mm256_sub_ps(var_780_5, temp0_329), temp0_332)
            zmm0 = _mm256_cvttps_epi32(temp0_438)
            float temp0_444[0x8] = _mm256_cvttps_epi32(zmm1)
            arg12 = _mm256_cvttps_epi32(temp0_442)
            zmm1 = _mm256_cvtepi32_ps(zmm0)
            float temp0_447[0x8] = _mm256_cvtepi32_ps(temp0_444)
            float temp0_448[0x8] = _mm256_cvtepi32_ps(arg12)
            zmm1 = _mm256_fmadd_ps(zmm1, temp0_330, arg16)
            arg16 = arg10
            float temp0_450[0x8] = _mm256_fmadd_ps(temp0_447, temp0_331, arg10)
            float temp0_451[0x8] = _mm256_fmadd_ps(temp0_448, temp0_332, temp0_329)
            zmm1 = _mm256_cmp_ps(__vaddps_ymmqq_ymmqq_memqq(zmm1, temp0_336), var_7c0_3, 1)
            arg15 = _mm256_cmpeq_epi32(temp0_332, temp0_332)
            arg11 = _mm256_add_epi32(zmm0, arg15)
            zmm2 = _mm256_blendv_ps(arg11, zmm0, zmm1)
            float var_7c0_4[0x8] = zmm2
            float temp0_457[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_450, var_580_2)
            zmm1 = _mm256_cmp_ps(temp0_457, var_7a0_3, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm0 = temp0_444
            
            float temp0_460[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_451, var_5a0_2)
            float temp0_461[0x8] = _mm256_cmp_ps(temp0_457, var_7a0_3, 5)
            temp0_331[0].o = _mm256_extractf128_ps(temp0_461[0].o, 1)
            temp0_329[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_461[0].o, temp0_331[0].o)
            temp0_329[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_329[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_329[0].o) != 0)
                arg11 = _mm256_add_epi32(temp0_444, arg15)
            
            float temp0_467[0x8] = _mm256_blendv_ps(arg11, zmm0, zmm1)
            float var_7a0_4[0x8] = temp0_467
            zmm1 = _mm256_cmp_ps(temp0_460, var_780_5, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm0 = arg12
            
            float temp0_470[0x8] = _mm256_cmp_ps(temp0_460, var_780_5, 5)
            temp0_329[0].o = _mm256_extractf128_ps(temp0_470[0].o, 1)
            temp0_470[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_470[0].o, temp0_329[0].o)
            temp0_470[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_470[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_470[0].o) != 0)
                arg11 = _mm256_add_epi32(arg12, arg15)
            
            float temp0_480[0x8] = _mm256_div_ps(
                _mm256_sub_ps(var_7c0_3, 
                    __vaddps_ymmqq_ymmqq_memqq(
                        __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), temp0_330, 
                            temp0_327), 
                        temp0_336)), 
                temp0_330)
            zmm1 = _mm256_blendv_ps(arg11, zmm0, zmm1)
            float var_6c0_4[0x8] = temp0_480
            uint32_t var_780_6[0x8] = zmm1
            float temp0_482[0x8] = _mm256_cvtepi32_ps(temp0_467)
            zmm1 = _mm256_cvtepi32_ps(zmm1)
            float temp0_484[0x8] = _mm256_fmadd_ps(temp0_482, temp0_331, arg16)
            zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm1, temp0_332, temp0_329)
            float temp0_486[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_484, var_580_2)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_5a0_2)
            float temp0_489[0x8] = _mm256_div_ps(_mm256_sub_ps(var_7a0_3, temp0_486), temp0_331)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_780_5, zmm1), temp0_332)
            float var_6a0_4[0x8] = temp0_489
            uint32_t var_680_4[0x8] = zmm1
            zmm0 = _mm256_cmpeq_epi32(zmm2, arg15)
            bool cond:6_1 = _mm256_movemask_ps(zmm0) == 0
            temp0_332[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_332[0].o, temp0_332[0].o)
            
            if (not(cond:6_1))
                var_7c0_4 = _mm256_maskstore_ps(zmm0, temp0_332)
                var_6c0_4 = _mm256_maskstore_ps(zmm0, temp0_332)
                zmm2 = var_7c0_4
            
            int32_t rsi_2 = *arg4
            zmm0[0].o = zx.o(rsi_2 - 1)
            zmm0 = _mm256_cmpeq_epi32(zmm2, _mm256_broadcastd_epi32(zmm0[0]))
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rsi_2 - 2)
                var_7c0_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                var_6c0_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
            
            zmm1 = var_7a0_4
            zmm0 = _mm256_cmpeq_epi32(zmm1, arg15)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_7a0_4 = _mm256_maskstore_ps(zmm0, temp0_332)
                var_6a0_4 = _mm256_maskstore_ps(zmm0, temp0_332)
                zmm1 = var_7a0_4
            
            float temp0_508[0x8] = _mm256_sub_ps(var_7c0_3, temp0_388)
            int32_t rsi_4 = arg4[1]
            temp0_388[0].o = zx.o(rsi_4 - 1)
            zmm2 = _mm256_broadcastd_epi32(temp0_388[0])
            uint32_t temp0_510[0x8] = _mm256_cmpeq_epi32(zmm1, zmm2)
            
            if (_mm256_movemask_ps(temp0_510) != 0)
                zmm2[0].o = zx.o(rsi_4 - 2)
                var_7a0_4 = _mm256_maskstore_ps(temp0_510, _mm256_broadcastd_epi32(zmm2[0]))
                var_6a0_4 = _mm256_maskstore_ps(temp0_510, _mm256_broadcast_ss(1f))
            
            zmm1 = __vsubps_ymmqq_ymmqq_memqq(var_780_5, temp0_412)
            float temp0_517[0x8] = _mm256_sub_ps(var_7a0_3, temp0_396)
            float temp0_518[0x8] = _mm256_fmadd_ps(temp0_508, temp0_508, temp0_332)
            zmm2 = var_780_6
            arg5 = _mm256_cmpeq_epi32(zmm2, arg15)
            
            if (_mm256_movemask_ps(arg5) != 0)
                float temp0_521[0x8] = _mm256_maskstore_ps(arg5, temp0_332)
                var_680_4 = _mm256_maskstore_ps(arg5, temp0_332)
                zmm2 = temp0_521
            
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            uint32_t var_4c0_2[0x8] = zmm1
            arg7 = _mm256_fmadd_ps(temp0_517, temp0_517, temp0_518)
            int32_t rsi_6 = arg4[2]
            temp0_518[0].o = zx.o(rsi_6 - 1)
            zmm0 = _mm256_cmpeq_epi32(zmm2, _mm256_broadcastd_epi32(temp0_518[0]))
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rsi_6 - 2)
                float temp0_529[0x8] = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                var_680_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                zmm2 = temp0_529
            
            zmm1 = var_7c0_4
            arg13 = _mm256_mullo_epi32(temp0_341, zmm1)
            arg17 = var_260_2
            zmm0 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, var_7a0_4), arg17)
            arg5 = _mm256_slli_epi32(_mm256_add_epi32(zmm0, zmm2), 2)
            arg10 = _mm256_cmpeq_epi32(temp0_467, temp0_467)
            var_7c0_3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_7c0_3[0].o, var_7c0_3[0].o)
            float temp0_539[0x8]
            int32_t temp1_15
            temp0_539, temp1_15 = _mm256_i32gather_ps(var_7c0_3, *(r11_6 + arg5[0].q), arg10)
            arg9 = temp0_539
            arg10 = temp1_15
            arg14 = _mm256_mullo_epi32(temp0_341, _mm256_sub_epi32(zmm1, arg15))
            arg5 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, var_7a0_4), arg17)
            uint32_t temp0_545[0x8] = _mm256_slli_epi32(_mm256_add_epi32(arg5, zmm2), 2)
            arg10 = _mm256_cmpeq_epi32(arg10, arg10)
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            float temp0_548[0x8]
            int32_t temp1_16
            temp0_548, temp1_16 = _mm256_i32gather_ps(arg12, *(r11_6 + temp0_545[0].q), arg10)
            arg12 = temp0_548
            arg11 = var_6c0_4
            arg10 = var_6a0_4
            arg6 = _mm256_sub_epi32(var_7a0_4, arg15)
            arg13 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, arg6), arg17)
            zmm1 = _mm256_add_epi32(arg13, zmm2)
            arg8 = _mm256_cmpeq_epi32(var_780_5, var_780_5)
            arg15 = _mm256_slli_epi32(zmm1, 2)
            uint32_t temp0_555[0x8] = _mm256_cmpeq_epi32(arg16, arg16)
            zmm1[0].o = zx.o(0)
            float temp0_556[0x8]
            int32_t temp1_17
            temp0_556, temp1_17 = _mm256_i32gather_ps(zmm1, *(r11_6 + arg15[0].q), temp0_555)
            zmm1 = temp0_556
            arg16 = temp1_17
            arg6 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, arg6), arg17)
            arg14 = _mm256_slli_epi32(_mm256_add_epi32(arg6, zmm2), 2)
            arg15 = _mm256_cmpeq_epi32(arg15, arg15)
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            float temp0_563[0x8]
            int32_t temp1_18
            temp0_563, temp1_18 = _mm256_i32gather_ps(arg16, *(r11_6 + arg14[0].q), arg15)
            arg15 = temp1_18
            zmm2 = _mm256_sub_epi32(zmm2, arg8)
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm0, zmm2), 2)
            arg14 = _mm256_cmpeq_epi32(arg14, arg14)
            arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
            float temp0_569[0x8]
            int32_t temp1_19
            temp0_569, temp1_19 = _mm256_i32gather_ps(arg15, *(r11_6 + zmm0[0].q), arg14)
            arg14 = temp1_19
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(arg5, zmm2), 2)
            arg5 = _mm256_cmpeq_epi32(arg5, arg5)
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            float temp0_574[0x8]
            int32_t temp1_20
            temp0_574, temp1_20 = _mm256_i32gather_ps(arg14, *(r11_6 + zmm0[0].q), arg5)
            arg5 = temp1_20
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(arg13, zmm2), 2)
            arg5 = _mm256_cmpeq_epi32(arg5, arg5)
            arg13[0].o = zx.o(0)
            float temp0_578[0x8]
            int32_t temp1_21
            temp0_578, temp1_21 = _mm256_i32gather_ps(arg13, *(r11_6 + zmm0[0].q), arg5)
            arg13 = temp0_578
            arg5 = temp1_21
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(arg6, zmm2), 2)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_583[0x8]
            int32_t temp1_22
            temp0_583, temp1_22 = _mm256_i32gather_ps(arg5, *(r11_6 + zmm0[0].q), zmm2)
            float temp0_585[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg12, arg9), arg11, arg9)
            float temp0_587[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(temp0_563, zmm1), arg11, zmm1)
            zmm1 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_574, temp0_569), arg11, temp0_569)
            float temp0_591[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(temp0_583, arg13), arg11, arg13)
            float temp0_593[0x8] =
                _mm256_fmadd_ps(_mm256_sub_ps(temp0_587, temp0_585), arg10, temp0_585)
            zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(temp0_591, zmm1), arg10, zmm1), 
                    temp0_593), 
                temp0_593, var_680_4)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg7, var_4c0_2)
            arg8[0].o = zx.o(0)
            zmm1 = _mm256_cmp_ps(zmm2, arg8, 0xc)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                float temp0_601[0x8] = _mm256_rsqrt_ps(zmm2)
                float temp0_602[0x8] = _mm256_mul_ps(zmm2, temp0_601)
                arg7 = _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_601, temp0_602)
                float temp0_606[0x8] =
                    __vmulps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_601, arg7), var_4a0_1)
                float temp0_607[0x8] = _mm256_rcp_ps(temp0_606)
                zmm2 = _mm256_fmadd_ps(
                    __vfnmadd213ps_ymmqq_ymmqq_memqq(temp0_606, temp0_607, temp0_334), temp0_607, 
                    zmm0)
                zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
            
            arg6 = var_600_2
            arg16 = var_460_2
            arg14 = var_480_2
            arg15 = _mm256_cmpeq_epi32(temp0_569, temp0_569)
            arg5 = temp0_396
            zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm0, temp0_346)
            zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, temp0_353, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_388, zmm0, var_440_1)
                arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg5, zmm0, var_420_1)
                arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_412, zmm0, var_400_1)
                var_440_1 = _mm256_maskstore_ps(zmm1, zmm2)
                var_420_1 = _mm256_maskstore_ps(zmm1, arg5)
                var_400_1 = _mm256_maskstore_ps(zmm1, arg7)
                zmm0 = _mm256_add_ps(arg6, zmm0)
                arg6 = _mm256_blendv_ps(arg6, zmm0, zmm1)
            
            rbx_2 += 8
            rdi_3 += 0x20
        while (rbx_2 s< rax_35)
    
    result = zx.q(arg25)
    
    if (rbx_2 s< result.d)
        float var_600_4[0x8] = arg6
        zmm0[0].o = zx.o(rbx_2)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(result.d)
        arg6 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
        float temp0_999[0x8] = _mm256_maskload_ps(arg6, *(arg21 + sx.q(rbx_2 << 2)))
        zmm1 = _mm256_mullo_epi32(temp0_999, __vpbroadcastd_ymmqq_memd(3))
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        float temp0_1003[0x8]
        int32_t temp1_34
        temp0_1003, temp1_34 = _mm256_i32gather_ps(arg5, *(arg20 + (zmm1[0].q << 2)), arg6)
        zmm0 = _mm256_mullo_epi32(temp0_999, __vpbroadcastd_ymmqq_memd(0xc))
        zmm1 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(4))
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        float temp0_1009[0x8]
        int32_t temp1_35
        temp0_1009, temp1_35 = _mm256_i32gather_ps(arg7, *(arg20 + zmm1[0].q), arg6)
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm0 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        float temp0_1014[0x8]
        int32_t temp1_36
        temp0_1014, temp1_36 = _mm256_i32gather_ps(arg8, *(arg20 + zmm0[0].q), arg6)
        uint32_t var_1c0_2[0x8] = zmm1
        float temp0_1015[0x8] = _mm256_broadcast_ss(arg19[3])
        float var_7c0_7[0x8] = temp0_1015
        float var_7a0_7[0x8] = temp0_1015
        float var_780_13[0x8] = temp0_1015
        float var_760_4[0x8] = temp0_1015
        float temp0_1016[0x8] = _mm256_broadcast_ss(arg19[1])
        float temp0_1017[0x8] = _mm256_broadcast_ss(arg19[2])
        float temp0_1018[0x8] = _mm256_broadcast_ss(*arg19)
        zmm1 = _mm256_mul_ps(temp0_1015, zmm1)
        float temp0_1020[0x8] = _mm256_mul_ps(temp0_1009, temp0_1017)
        arg12 = _mm256_mul_ps(temp0_1014, temp0_1018)
        float temp0_1022[0x8] = _mm256_mul_ps(temp0_1003, temp0_1016)
        float temp0_1023[0x8] = _mm256_fmsub_ps(temp0_1020, temp0_1016, temp0_1014)
        arg12 = _mm256_fmsub_ps(arg12, temp0_1017, temp0_1003)
        float temp0_1025[0x8] = _mm256_fmsub_ps(temp0_1022, temp0_1018, temp0_1009)
        zmm1 = _mm256_sub_ps(zmm1, zmm1)
        float temp0_1027[0x8] = _mm256_add_ps(temp0_1023, temp0_1023)
        float temp0_1028[0x8] = _mm256_add_ps(arg12, arg12)
        float temp0_1029[0x8] = _mm256_add_ps(temp0_1025, temp0_1025)
        float temp0_1030[0x8] = _mm256_add_ps(zmm1, zmm1)
        float var_6c0_7[0x8] = temp0_1027
        float var_6a0_7[0x8] = temp0_1028
        float var_680_7[0x8] = temp0_1029
        float var_660_4[0x8] = temp0_1030
        float temp0_1031[0x8] = _mm256_fmadd_ps(temp0_1003, temp0_1015, temp0_1027)
        float temp0_1032[0x8] = _mm256_fmadd_ps(temp0_1009, temp0_1015, temp0_1028)
        zmm1 = _mm256_fmadd_ps(temp0_1014, temp0_1015, temp0_1029)
        float var_180_2[0x8] = temp0_1031
        float var_160_2[0x8] = temp0_1032
        uint32_t var_140_2[0x8] = zmm1
        float var_120_2[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_1030, temp0_1015, var_1c0_2)
        float temp0_1035[0x8] = _mm256_broadcast_ss(arg19[1])
        arg12 = _mm256_broadcast_ss(arg19[2])
        float temp0_1037[0x8] = _mm256_broadcast_ss(*arg19)
        float temp0_1038[0x8] = _mm256_mul_ps(temp0_1028, arg12)
        float temp0_1039[0x8] = _mm256_mul_ps(temp0_1029, temp0_1037)
        float temp0_1040[0x8] = _mm256_mul_ps(temp0_1027, temp0_1035)
        float temp0_1041[0x8] = _mm256_fmsub_ps(temp0_1038, temp0_1029, temp0_1035)
        float temp0_1042[0x8] = _mm256_fmsub_ps(temp0_1039, temp0_1027, arg12)
        float temp0_1043[0x8] = _mm256_add_ps(temp0_1031, temp0_1041)
        float temp0_1044[0x8] = _mm256_add_ps(temp0_1032, temp0_1042)
        float temp0_1046[0x8] = _mm256_add_ps(temp0_1043, _mm256_broadcast_ss(arg19[4]))
        float temp0_1047[0x8] = _mm256_broadcast_ss(arg19[5])
        float temp0_1048[0x8] = _mm256_broadcast_ss(arg19[6])
        float temp0_1049[0x8] = _mm256_broadcast_ss(var_730_1)
        arg8 = _mm256_cmp_ps(temp0_1049, temp0_1046, 1)
        float var_5e0_4[0x8] = arg6
        arg12 = _mm256_and_ps(arg8, arg6)
        temp0_1046[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        temp0_1046[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, temp0_1046[0].o)
        temp0_1046[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1046[0].o, temp0_1037[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(temp0_1046[0].o) != 0)
            var_7c0_7 = _mm256_maskstore_ps(arg8, temp0_1049)
        
        float temp0_1057[0x8] = _mm256_fmsub_ps(temp0_1037, temp0_1028, temp0_1040)
        float temp0_1058[0x8] = _mm256_add_ps(temp0_1044, temp0_1047)
        arg12 = var_5e0_4
        arg5 = _mm256_andnot_ps(arg8, arg12)
        
        if (_mm256_movemask_ps(arg5) != 0)
            arg5 = _mm256_xor_ps(arg8, _mm256_cmpeq_epi32(arg5, arg5))
            arg8 = _mm256_broadcast_ss(var_740_1)
            float temp0_1064[0x8] = _mm256_cmp_ps(temp0_1046, arg8, 1)
            arg9 = _mm256_and_ps(temp0_1064, arg5)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg9, arg12)) != 0)
                var_7c0_7 = _mm256_maskstore_ps(arg9, arg8)
            
            arg5 = _mm256_andnot_ps(temp0_1064, arg5)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg12)) != 0)
                var_7c0_7 = _mm256_maskstore_ps(arg5, temp0_1046)
        
        zmm1 = _mm256_add_ps(zmm1, temp0_1057)
        arg5 = _mm256_broadcast_ss(temp0_319)
        float temp0_1075[0x8] = _mm256_cmp_ps(arg5, temp0_1058, 1)
        arg7 = _mm256_and_ps(temp0_1075, arg12)
        arg8[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
        arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
        arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_1075[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg7[0].o) != 0)
            var_7a0_7 = _mm256_maskstore_ps(temp0_1075, arg5)
        
        float temp0_1082[0x8] = _mm256_add_ps(zmm1, temp0_1048)
        zmm1 = _mm256_andnot_ps(temp0_1075, arg12)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm0 = temp0_1075 ^ _mm256_cmpeq_epi32(zmm1, zmm1)
            float temp0_1086[0x8] = _mm256_broadcast_ss(temp0_324)
            zmm1 = _mm256_cmp_ps(temp0_1058, temp0_1086, 1)
            arg5 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg12)) != 0)
                var_7a0_7 = _mm256_maskstore_ps(arg5, temp0_1086)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg12)) != 0)
                var_7a0_7 = _mm256_maskstore_ps(zmm0, temp0_1058)
        
        zmm1 = _mm256_broadcast_ss(temp0_320)
        float temp0_1097[0x8] = _mm256_cmp_ps(zmm1, temp0_1082, 1)
        zmm2 = _mm256_and_ps(temp0_1097, arg12)
        arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_1097[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            var_780_13 = _mm256_maskstore_ps(temp0_1097, zmm1)
        
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        
        if (_mm256_movemask_ps(_mm256_andnot_ps(temp0_1097, arg12)) != 0)
            zmm0 = temp0_1097 ^ zmm2
            float temp0_1107[0x8] = _mm256_broadcast_ss(temp0_325)
            zmm1 = _mm256_cmp_ps(temp0_1082, temp0_1107, 1)
            arg5 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg12)) != 0)
                var_780_13 = _mm256_maskstore_ps(arg5, temp0_1107)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg12)) != 0)
                var_780_13 = _mm256_maskstore_ps(zmm0, temp0_1082)
        
        float temp0_1117[0x8] = _mm256_broadcast_ss(*var_5b0)
        float temp0_1118[0x8] = _mm256_broadcast_ss(var_5b0[1])
        float temp0_1119[0x8] = _mm256_sub_ps(var_7a0_7, temp0_1118)
        float temp0_1120[0x8] = _mm256_broadcast_ss(var_5a8[1])
        zmm1 = _mm256_div_ps(temp0_1119, temp0_1120)
        float temp0_1122[0x8] = _mm256_sub_ps(var_7c0_7, temp0_1117)
        float temp0_1123[0x8] = _mm256_broadcast_ss(var_5b0[2])
        zmm2 = _mm256_cvttps_epi32(zmm1)
        zmm1 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm2), temp0_1120, temp0_1118)
        temp0_1118[0].o = __vmovsd_xmmdq_memq(*var_5a8)
        float temp0_1128[0x8] = _mm256_broadcast_ss(2f)
        temp0_1128[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_1118[0].o, temp0_1128[0].o)
        temp0_1118[0].o = __vmovshdup_xmmdq_xmmdq(temp0_1128[0].o)
        arg5 = _mm256_broadcastsd_pd(temp0_1118[0].o)
        float var_4c0_4[0x8] = arg5
        arg16 = _mm256_add_ps(arg5, zmm1)
        float temp0_1133[0x8] = _mm256_cmp_ps(arg16, var_7a0_7, 1)
        zmm1 = _mm256_and_ps(temp0_1133, arg12)
        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        float temp0_1137[0x8] = _mm256_broadcast_ss(*var_5a8)
        float temp0_1138[0x8] = _mm256_div_ps(temp0_1122, temp0_1137)
        float temp0_1139[0x8] = _mm256_sub_ps(var_780_13, temp0_1123)
        float temp0_1140[0x8] = _mm256_broadcast_ss(var_5a8[2])
        float temp0_1141[0x8] = _mm256_div_ps(temp0_1139, temp0_1140)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1138[0].o)
        char temp0_1143 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
        arg10 = _mm256_cvttps_epi32(temp0_1138)
        arg5 = _mm256_cvttps_epi32(temp0_1141)
        float temp0_1147[0x8] = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg10), temp0_1137, temp0_1117)
        arg14 = arg12
        arg12 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg5), temp0_1140, temp0_1123)
        zmm1 = _mm256_broadcastss_ps(temp0_1128[0].o)
        float temp0_1151[0x8] = _mm256_add_ps(zmm1, temp0_1147)
        temp0_1147[0].o = _mm_permute_ps(temp0_1128[0].o, 0xea)
        arg11 = _mm256_broadcastsd_pd(temp0_1147[0].o)
        float temp0_1154[0x8] = _mm256_cmp_ps(temp0_1151, var_7c0_7, 1)
        arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg10, data_142fc9420)
        arg15 = _mm256_blendv_ps(arg9, arg10, temp0_1154)
        float var_7c0_8[0x8] = arg15
        arg16 = _mm256_cmp_ps(arg16, var_7a0_7, 5)
        
        if (temp0_1143 != 0)
            arg10 = zmm2
        
        arg12 = _mm256_add_ps(arg11, arg12)
        arg6 = _mm256_and_ps(arg14, arg16)
        temp0_1147[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        temp0_1147[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_1147[0].o)
        temp0_1147[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1147[0].o, temp0_1147[0].o)
        bool cond:4_1 = __vpmovmskb_gpr32d_xmmdq(temp0_1147[0].o) == 0
        arg13 = _mm256_cmpeq_epi32(var_7a0_7, var_7a0_7)
        
        if (not(cond:4_1))
            arg9 = _mm256_add_epi32(zmm2, arg13)
        
        float temp0_1166[0x8] = _mm256_blendv_ps(arg9, arg10, temp0_1133)
        float var_7a0_8[0x8] = temp0_1166
        arg16 = _mm256_cmp_ps(arg12, var_780_13, 5)
        float temp0_1168[0x8] = _mm256_cmp_ps(arg12, var_780_13, 1)
        zmm0 = _mm256_and_ps(temp0_1168, arg14)
        arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
            arg10 = arg5
        
        zmm0 = _mm256_and_ps(arg14, arg16)
        arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
            arg9 = _mm256_add_epi32(arg5, arg13)
        
        float temp0_1180[0x8] = _mm256_blendv_ps(arg9, arg10, temp0_1168)
        float temp0_1182[0x8] =
            __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg15), temp0_1137, temp0_1117)
        float temp0_1184[0x8] =
            __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_1166), temp0_1120, temp0_1118)
        float temp0_1186[0x8] =
            __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_1180), temp0_1140, temp0_1123)
        zmm1 = _mm256_add_ps(zmm1, temp0_1182)
        float temp0_1188[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1184, var_4c0_4)
        float temp0_1189[0x8] = _mm256_add_ps(arg11, temp0_1186)
        zmm1 = _mm256_div_ps(_mm256_sub_ps(var_7c0_7, zmm1), temp0_1137)
        float temp0_1193[0x8] = _mm256_div_ps(_mm256_sub_ps(var_7a0_7, temp0_1188), temp0_1120)
        uint32_t var_6c0_8[0x8] = zmm1
        float var_6a0_8[0x8] = temp0_1193
        float var_680_8[0x8] = _mm256_div_ps(_mm256_sub_ps(var_780_13, temp0_1189), temp0_1140)
        zmm0 = _mm256_cmpeq_epi32(arg15, arg13)
        zmm1 = zmm0 & arg14
        temp0_1193[0].o = _mm256_extracti128_si256(zmm1, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1193[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm1[0].o = zx.o(0)
            var_7c0_8 = _mm256_maskstore_ps(zmm0, zmm1)
            var_6c0_8 = _mm256_maskstore_ps(zmm0, zmm1)
            arg15 = var_7c0_8
        
        int32_t rax_78 = *arg4
        zmm0[0].o = zx.o(rax_78 - 1)
        zmm0 = _mm256_cmpeq_epi32(arg15, _mm256_broadcastd_epi32(zmm0[0]))
        zmm1 = zmm0 & arg14
        temp0_1193[0].o = _mm256_extracti128_si256(zmm1, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1193[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm1[0].o = zx.o(rax_78 - 2)
            var_7c0_8 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            zmm1 = _mm256_broadcast_ss(1f)
            var_6c0_8 = _mm256_maskstore_ps(zmm0, zmm1)
        
        float temp0_1213[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_7c0_7, temp0_1046)
        temp0_1193[0].o = zx.o(0)
        arg5 = var_7a0_8
        uint32_t temp0_1215[0x8] = _mm256_cmpeq_epi32(arg5, _mm256_cmpeq_epi32(zmm1, zmm1))
        arg7 = temp0_1215 & arg14
        var_7c0_7[0].o = _mm256_extracti128_si256(arg7, 1)
        arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, var_7c0_7[0].o)
        arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_1213[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg7[0].o) != 0)
            arg5[0].o = zx.o(0)
            var_7a0_8 = _mm256_maskstore_ps(temp0_1215, arg5)
            var_6a0_8 = _mm256_maskstore_ps(temp0_1215, arg5)
            arg5 = var_7a0_8
        
        zmm1 = _mm256_sub_ps(var_7a0_7, temp0_1058)
        float temp0_1223[0x8] = _mm256_fmadd_ps(temp0_1213, temp0_1213, temp0_1193)
        int32_t rdx_7 = arg4[1]
        temp0_1193[0].o = zx.o(rdx_7 - 1)
        zmm2 = _mm256_cmpeq_epi32(arg5, _mm256_broadcastd_epi32(temp0_1193[0]))
        arg5 = zmm2 & arg14
        arg7[0].o = _mm256_extracti128_si256(arg5, 1)
        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1223[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            arg5[0].o = zx.o(rdx_7 - 2)
            var_7a0_8 = _mm256_maskstore_ps(zmm2, _mm256_broadcastd_epi32(arg5[0]))
            var_6a0_8 = _mm256_maskstore_ps(zmm2, _mm256_broadcast_ss(1f))
        
        float temp0_1234[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_780_13, temp0_1082)
        zmm1 = _mm256_fmadd_ps(zmm1, zmm1, temp0_1223)
        arg8 = temp0_1180
        zmm0 = _mm256_cmpeq_epi32(arg8, _mm256_cmpeq_epi32(temp0_1223, temp0_1223))
        zmm2 = zmm0 & arg14
        arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            zmm2[0].o = zx.o(0)
            float temp0_1242[0x8] = _mm256_maskstore_ps(zmm0, zmm2)
            var_680_8 = _mm256_maskstore_ps(zmm0, zmm2)
            arg8 = temp0_1242
        
        float temp0_1244[0x8] = _mm256_fmadd_ps(temp0_1234, temp0_1234, zmm1)
        int32_t rdx_10 = arg4[2]
        zmm0[0].o = zx.o(rdx_10 - 1)
        zmm0 = _mm256_cmpeq_epi32(arg8, _mm256_broadcastd_epi32(zmm0[0]))
        zmm1 = zmm0 & arg14
        zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm1[0].o = zx.o(rdx_10 - 2)
            float temp0_1252[0x8] = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            var_680_8 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
            arg8 = temp0_1252
        
        uint32_t temp0_1255[0x8] = __vpbroadcastd_ymmqq_memd(*(arg18 + 4))
        arg14 = _mm256_mullo_epi32(temp0_1255, var_7c0_8)
        zmm0 = _mm256_add_epi32(arg14, var_7a0_8)
        uint32_t temp0_1258[0x8] = __vpbroadcastd_ymmqq_memd(*(arg18 + 8))
        arg9 = _mm256_mullo_epi32(zmm0, temp0_1258)
        zmm0 = _mm256_add_epi32(arg9, arg8)
        int64_t rax_81 = *(arg18 + 0x10)
        arg7 = _mm256_slli_epi32(zmm0, 2)
        arg11 = var_5e0_4
        zmm0[0].o = zx.o(0)
        float temp0_1262[0x8]
        int32_t temp1_37
        temp0_1262, temp1_37 = _mm256_i32gather_ps(zmm0, *(rax_81 + arg7[0].q), arg11)
        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
        arg15 = _mm256_mullo_epi32(temp0_1255, _mm256_sub_epi32(var_7c0_8, arg13))
        arg5 = _mm256_mullo_epi32(_mm256_add_epi32(arg15, var_7a0_8), temp0_1258)
        uint32_t temp0_1269[0x8] = _mm256_slli_epi32(_mm256_add_epi32(arg5, arg8), 2)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        float temp0_1271[0x8]
        int32_t temp1_38
        temp0_1271, temp1_38 = _mm256_i32gather_ps(arg7, *(rax_81 + temp0_1269[0].q), arg11)
        zmm2 = var_6c0_8
        zmm1 = var_6a0_8
        arg16 = _mm256_sub_epi32(var_7a0_8, arg13)
        arg14 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, arg16), temp0_1258)
        arg10 = _mm256_add_epi32(arg14, arg8)
        arg17 = _mm256_slli_epi32(arg10, 2)
        arg10[0].o = zx.o(0)
        float temp0_1277[0x8]
        int32_t temp1_39
        temp0_1277, temp1_39 = _mm256_i32gather_ps(arg10, *(rax_81 + arg17[0].q), arg11)
        arg10 = temp0_1277
        arg6 = _mm256_mullo_epi32(_mm256_add_epi32(arg15, arg16), temp0_1258)
        uint32_t temp0_1281[0x8] = _mm256_slli_epi32(_mm256_add_epi32(arg6, arg8), 2)
        arg16[0].o = zx.o(0)
        float temp0_1282[0x8]
        int32_t temp1_40
        temp0_1282, temp1_40 = _mm256_i32gather_ps(arg16, *(rax_81 + temp0_1281[0].q), arg11)
        arg16 = temp0_1282
        arg15 = temp1_40
        arg8 = _mm256_sub_epi32(arg8, arg13)
        arg9 = _mm256_slli_epi32(_mm256_add_epi32(arg9, arg8), 2)
        arg13[0].o = zx.o(0)
        float temp0_1286[0x8]
        int32_t temp1_41
        temp0_1286, temp1_41 = _mm256_i32gather_ps(arg13, *(rax_81 + arg9[0].q), arg11)
        arg13 = temp0_1286
        arg12 = temp1_41
        arg9 = _mm256_slli_epi32(_mm256_add_epi32(arg5, arg8), 2)
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        float temp0_1290[0x8]
        int32_t temp1_42
        temp0_1290, temp1_42 = _mm256_i32gather_ps(arg12, *(rax_81 + arg9[0].q), arg11)
        arg12 = temp0_1290
        arg9 = _mm256_slli_epi32(_mm256_add_epi32(arg14, arg8), 2)
        arg14[0].o = zx.o(0)
        float temp0_1293[0x8]
        int32_t temp1_43
        temp0_1293, temp1_43 = _mm256_i32gather_ps(arg14, *(rax_81 + arg9[0].q), arg11)
        arg14 = temp0_1293
        arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg6, arg8), 2)
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        float temp0_1297[0x8]
        int32_t temp1_44
        temp0_1297, temp1_44 = _mm256_i32gather_ps(arg9, *(rax_81 + arg6[0].q), arg11)
        arg9 = temp0_1297
        float temp0_1299[0x8] =
            _mm256_fmadd_ps(_mm256_sub_ps(temp0_1271, temp0_1262), zmm2, temp0_1262)
        float temp0_1301[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg16, arg10), zmm2, arg10)
        float temp0_1303[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg12, arg13), zmm2, arg13)
        arg8 = _mm256_fmadd_ps(_mm256_sub_ps(arg9, arg14), zmm2, arg14)
        zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_1301, temp0_1299), zmm1, temp0_1299)
        zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
            _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(arg8, temp0_1303), zmm1, temp0_1303), 
                zmm2), 
            zmm2, var_680_8)
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        arg5 = temp0_1244
        zmm1 = _mm256_and_ps(_mm256_cmp_ps(arg5, zmm1, 0xc), arg11)
        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            float temp0_1319[0x8] = _mm256_rsqrt_ps(arg5)
            float temp0_1320[0x8] = _mm256_mul_ps(arg5, temp0_1319)
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(temp0_1319, 
                    _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_1319, temp0_1320)), 
                var_4a0_1)
            arg5 = _mm256_rcp_ps(zmm2)
            float temp0_1327[0x8] =
                _mm256_fmadd_ps(_mm256_fnmadd_ps(temp0_1128, arg5, zmm2), arg5, zmm0)
            zmm1 = _mm256_cvtepi16_epi32(zmm1[0].o)
            zmm0 = _mm256_blendv_ps(zmm0, temp0_1327, zmm1)
        
        arg6 = var_600_4
        zmm1[0].o = arg22
        zmm0 = _mm256_sub_ps(zmm0, _mm256_broadcastss_ps(zmm1[0].o))
        zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(-9.99999975e-05f), 1), arg11)
        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        result = zx.q(__vpmovmskb_gpr32d_xmmdq(arg5[0].o))
        
        if (result.b != 0)
            arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_1046, zmm0, var_440_1)
            float temp0_1340[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_1058, zmm0, var_420_1)
            arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_1082, zmm0, var_400_1)
            var_440_1 = _mm256_maskstore_ps(zmm1, arg5)
            var_420_1 = _mm256_maskstore_ps(zmm1, temp0_1340)
            var_400_1 = _mm256_maskstore_ps(zmm1, arg8)
            zmm0 = _mm256_add_ps(arg6, zmm0)
            arg6 = _mm256_blendv_ps(arg6, zmm0, _mm256_cvtepi16_epi32(zmm2[0].o))
    
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm0 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_1a0_1)
    zmm1 = zmm0 & not.32(var_440_1)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    zmm2 = zmm0 & not.32(var_420_1)
    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    float temp0_1353[0x8] = _mm256_hadd_ps(zmm2, zmm2)
    zmm1[0].o = zmm1[0].o f+ arg5[0]
    float temp0_1354[0x8] = _mm256_hadd_ps(temp0_1353, temp0_1353)
    arg5[0].o = _mm256_extractf128_ps(temp0_1354[0].o, 1)
    temp0_1354[0].o = temp0_1354[0].o f+ arg5[0]
    arg5 = zmm0 & not.32(var_400_1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_1354[0].o, 0x10)
    float temp0_1357[0x8] = _mm256_hadd_ps(arg5, arg5)
    float temp0_1358[0x8] = _mm256_hadd_ps(temp0_1357, temp0_1357)
    arg5[0].o = _mm256_extractf128_ps(temp0_1358[0].o, 1)
    temp0_1358[0].o = temp0_1358[0].o f+ arg5[0]
    arg5[0].o = __vmovsd_xmmdq_memq(*arg24)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, arg24[1].d, 0x20)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_1358[0].o, 0x20)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
    *arg24 = zmm1[0]
    *(arg24 + 4) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    arg24[1].d = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm0 &= not.32(arg6)
    float temp0_1366[0x8] = _mm256_hadd_ps(zmm0, zmm0)
    float temp0_1367[0x8] = _mm256_hadd_ps(temp0_1366, temp0_1366)
    zmm1[0].o = _mm256_extractf128_ps(temp0_1367[0].o, 1)
    temp0_1367[0].o = temp0_1367[0].o f+ zmm1[0]
    temp0_1367[0].o = temp0_1367[0].o f+ *arg23
    *arg23 = temp0_1367[0]
else
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    float var_3a0_1[0x8] = arg6
    float var_3c0_1[0x8] = arg6
    float var_3e0_1[0x8] = arg6
    zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
    zmm2 = _mm256_broadcast_ss(0.5f)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
    float var_4a0[0x8] = zmm2
    zmm0 = _mm256_mul_ps(zmm0, zmm2)
    zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    uint32_t var_710_1 = zmm1[0]
    float temp0_9 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float temp0_10 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_720_1 = zmm0[0]
    float temp0_14 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_15 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t r11_5 = ((arg25 s>> 0x1f u>> 0x1d) + arg25) & 0xfffffff8
    double* rdi_2
    int32_t rax_30
    int32_t rbx_1
    
    if (r11_5 s<= 0)
        rbx_1 = 0
        rax_30 = arg25
        rdi_2 = arg24
        
        if (0 s< rax_30)
        label_140057288:
            float var_600_3[0x8] = arg6
            zmm0[0].o = zx.o(rbx_1)
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
            zmm1[0].o = zx.o(rax_30)
            arg5 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
            float temp0_627[0x8] = _mm256_maskload_ps(arg5, *(arg21 + sx.q(rbx_1 << 2)))
            zmm1 = _mm256_mullo_epi32(temp0_627, __vpbroadcastd_ymmqq_memd(3))
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            float temp0_631[0x8]
            int32_t temp1_23
            temp0_631, temp1_23 = _mm256_i32gather_ps(arg6, *(arg20 + (zmm1[0].q << 2)), arg5)
            zmm0 = _mm256_mullo_epi32(temp0_627, __vpbroadcastd_ymmqq_memd(0xc))
            zmm1 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(4))
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_637[0x8]
            int32_t temp1_24
            temp0_637, temp1_24 = _mm256_i32gather_ps(arg7, *(arg20 + zmm1[0].q), arg5)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm0 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            float temp0_642[0x8]
            int32_t temp1_25
            temp0_642, temp1_25 = _mm256_i32gather_ps(arg8, *(arg20 + zmm0[0].q), arg5)
            uint32_t var_1c0_1[0x8] = zmm1
            float temp0_643[0x8] = _mm256_broadcast_ss(arg19[3])
            float var_7c0_5[0x8] = temp0_643
            float var_7a0_5[0x8] = temp0_643
            float var_780_9[0x8] = temp0_643
            float var_760_3[0x8] = temp0_643
            float temp0_644[0x8] = _mm256_broadcast_ss(arg19[1])
            float temp0_645[0x8] = _mm256_broadcast_ss(arg19[2])
            float temp0_646[0x8] = _mm256_broadcast_ss(*arg19)
            zmm1 = _mm256_mul_ps(temp0_643, zmm1)
            float temp0_648[0x8] = _mm256_mul_ps(temp0_637, temp0_645)
            arg12 = _mm256_mul_ps(temp0_642, temp0_646)
            float temp0_650[0x8] = _mm256_mul_ps(temp0_631, temp0_644)
            float temp0_651[0x8] = _mm256_fmsub_ps(temp0_648, temp0_644, temp0_642)
            arg12 = _mm256_fmsub_ps(arg12, temp0_645, temp0_631)
            float temp0_653[0x8] = _mm256_fmsub_ps(temp0_650, temp0_646, temp0_637)
            zmm1 = _mm256_sub_ps(zmm1, zmm1)
            float temp0_655[0x8] = _mm256_add_ps(temp0_651, temp0_651)
            float temp0_656[0x8] = _mm256_add_ps(arg12, arg12)
            float temp0_657[0x8] = _mm256_add_ps(temp0_653, temp0_653)
            float temp0_658[0x8] = _mm256_add_ps(zmm1, zmm1)
            float var_6c0_5[0x8] = temp0_655
            float var_6a0_5[0x8] = temp0_656
            float var_680_5[0x8] = temp0_657
            float var_660_3[0x8] = temp0_658
            float temp0_659[0x8] = _mm256_fmadd_ps(temp0_631, temp0_643, temp0_655)
            float temp0_660[0x8] = _mm256_fmadd_ps(temp0_637, temp0_643, temp0_656)
            zmm1 = _mm256_fmadd_ps(temp0_642, temp0_643, temp0_657)
            float var_180_1[0x8] = temp0_659
            float var_160_1[0x8] = temp0_660
            uint32_t var_140_1[0x8] = zmm1
            float var_120_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_658, temp0_643, var_1c0_1)
            float temp0_663[0x8] = _mm256_broadcast_ss(arg19[1])
            arg12 = _mm256_broadcast_ss(arg19[2])
            float temp0_665[0x8] = _mm256_broadcast_ss(*arg19)
            float temp0_666[0x8] = _mm256_mul_ps(temp0_656, arg12)
            float temp0_667[0x8] = _mm256_mul_ps(temp0_657, temp0_665)
            float temp0_668[0x8] = _mm256_mul_ps(temp0_655, temp0_663)
            float temp0_669[0x8] = _mm256_fmsub_ps(temp0_666, temp0_657, temp0_663)
            float temp0_670[0x8] = _mm256_fmsub_ps(temp0_667, temp0_655, arg12)
            float temp0_671[0x8] = _mm256_add_ps(temp0_659, temp0_669)
            float temp0_672[0x8] = _mm256_add_ps(temp0_660, temp0_670)
            float temp0_674[0x8] = _mm256_add_ps(temp0_671, _mm256_broadcast_ss(arg19[4]))
            float temp0_675[0x8] = _mm256_broadcast_ss(arg19[5])
            float temp0_676[0x8] = _mm256_broadcast_ss(arg19[6])
            float temp0_677[0x8] = _mm256_broadcast_ss(var_710_1)
            arg8 = _mm256_cmp_ps(temp0_677, temp0_674, 1)
            float var_5e0_3[0x8] = arg5
            arg12 = _mm256_and_ps(arg8, arg5)
            temp0_674[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            temp0_674[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, temp0_674[0].o)
            temp0_674[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_674[0].o, temp0_665[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_674[0].o) != 0)
                var_7c0_5 = _mm256_maskstore_ps(arg8, temp0_677)
            
            float temp0_685[0x8] = _mm256_fmsub_ps(temp0_665, temp0_656, temp0_668)
            float temp0_686[0x8] = _mm256_add_ps(temp0_672, temp0_675)
            arg6 = _mm256_andnot_ps(arg8, var_5e0_3)
            
            if (_mm256_movemask_ps(arg6) != 0)
                arg6 = _mm256_xor_ps(arg8, _mm256_cmpeq_epi32(arg6, arg6))
                arg8 = _mm256_broadcast_ss(var_720_1)
                float temp0_692[0x8] = _mm256_cmp_ps(temp0_674, arg8, 1)
                arg9 = _mm256_and_ps(temp0_692, arg6)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg9, var_5e0_3)) != 0)
                    var_7c0_5 = _mm256_maskstore_ps(arg9, arg8)
                
                arg6 = _mm256_andnot_ps(temp0_692, arg6)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg6, var_5e0_3)) != 0)
                    var_7c0_5 = _mm256_maskstore_ps(arg6, temp0_674)
            
            zmm1 = _mm256_add_ps(zmm1, temp0_685)
            float temp0_702[0x8] = _mm256_broadcast_ss(temp0_9)
            float temp0_703[0x8] = _mm256_cmp_ps(temp0_702, temp0_686, 1)
            arg7 = _mm256_and_ps(temp0_703, var_5e0_3)
            arg8[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
            arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_703[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg7[0].o) != 0)
                var_7a0_5 = _mm256_maskstore_ps(temp0_703, temp0_702)
            
            float temp0_710[0x8] = _mm256_add_ps(zmm1, temp0_676)
            zmm1 = _mm256_andnot_ps(temp0_703, var_5e0_3)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm0 = temp0_703 ^ _mm256_cmpeq_epi32(zmm1, zmm1)
                float temp0_714[0x8] = _mm256_broadcast_ss(temp0_14)
                zmm1 = _mm256_cmp_ps(temp0_686, temp0_714, 1)
                arg6 = _mm256_and_ps(zmm1, zmm0)
                arg5 = _mm256_and_ps(arg6, var_5e0_3)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_7a0_5 = _mm256_maskstore_ps(arg6, temp0_714)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, var_5e0_3)) != 0)
                    var_7a0_5 = _mm256_maskstore_ps(zmm0, temp0_686)
            
            zmm1 = _mm256_broadcast_ss(temp0_10)
            float temp0_725[0x8] = _mm256_cmp_ps(zmm1, temp0_710, 1)
            zmm2 = _mm256_and_ps(temp0_725, var_5e0_3)
            arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_725[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                var_780_9 = _mm256_maskstore_ps(temp0_725, zmm1)
            
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(temp0_725, var_5e0_3)) != 0)
                zmm0 = temp0_725 ^ zmm2
                float temp0_735[0x8] = _mm256_broadcast_ss(temp0_15)
                zmm1 = _mm256_cmp_ps(temp0_710, temp0_735, 1)
                arg6 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg6, var_5e0_3)) != 0)
                    var_780_9 = _mm256_maskstore_ps(arg6, temp0_735)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, var_5e0_3)) != 0)
                    var_780_9 = _mm256_maskstore_ps(zmm0, temp0_710)
            
            float temp0_745[0x8] = _mm256_broadcast_ss(*var_5b0)
            float temp0_746[0x8] = _mm256_broadcast_ss(var_5b0[1])
            float temp0_747[0x8] = _mm256_sub_ps(var_7a0_5, temp0_746)
            float temp0_748[0x8] = _mm256_broadcast_ss(var_5a8[1])
            zmm1 = _mm256_div_ps(temp0_747, temp0_748)
            float temp0_750[0x8] = _mm256_sub_ps(var_7c0_5, temp0_745)
            float temp0_751[0x8] = _mm256_broadcast_ss(var_5b0[2])
            zmm2 = _mm256_cvttps_epi32(zmm1)
            zmm1 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm2), temp0_748, temp0_746)
            temp0_746[0].o = __vmovsd_xmmdq_memq(*var_5a8)
            float temp0_756[0x8] = _mm256_broadcast_ss(2f)
            temp0_746[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_746[0].o, temp0_756[0].o)
            temp0_756[0].o = __vmovshdup_xmmdq_xmmdq(temp0_746[0].o)
            arg6 = _mm256_broadcastsd_pd(temp0_756[0].o)
            arg16 = _mm256_add_ps(arg6, zmm1)
            float temp0_761[0x8] = _mm256_cmp_ps(arg16, var_7a0_5, 1)
            zmm1 = _mm256_and_ps(temp0_761, var_5e0_3)
            arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
            float temp0_765[0x8] = _mm256_broadcast_ss(*var_5a8)
            float temp0_766[0x8] = _mm256_div_ps(temp0_750, temp0_765)
            float temp0_767[0x8] = _mm256_sub_ps(var_780_9, temp0_751)
            float temp0_768[0x8] = _mm256_broadcast_ss(var_5a8[2])
            float temp0_769[0x8] = _mm256_div_ps(temp0_767, temp0_768)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_766[0].o)
            char temp0_771 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            arg10 = _mm256_cvttps_epi32(temp0_766)
            arg7 = _mm256_cvttps_epi32(temp0_769)
            float temp0_775[0x8] = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg10), temp0_765, temp0_745)
            arg12 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg7), temp0_768, temp0_751)
            zmm1 = _mm256_broadcastss_ps(temp0_746[0].o)
            float temp0_779[0x8] = _mm256_add_ps(zmm1, temp0_775)
            temp0_775[0].o = _mm_permute_ps(temp0_746[0].o, 0xea)
            arg11 = _mm256_broadcastsd_pd(temp0_775[0].o)
            float temp0_782[0x8] = _mm256_cmp_ps(temp0_779, var_7c0_5, 1)
            arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg10, data_142fc9420)
            arg15 = _mm256_blendv_ps(arg9, arg10, temp0_782)
            float var_7c0_6[0x8] = arg15
            arg16 = _mm256_cmp_ps(arg16, var_7a0_5, 5)
            
            if (temp0_771 != 0)
                arg10 = zmm2
            
            arg12 = _mm256_add_ps(arg11, arg12)
            arg5 = _mm256_and_ps(var_5e0_3, arg16)
            temp0_775[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            temp0_775[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_775[0].o)
            temp0_775[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_775[0].o, temp0_775[0].o)
            bool cond:5_1 = __vpmovmskb_gpr32d_xmmdq(temp0_775[0].o) == 0
            arg13 = _mm256_cmpeq_epi32(var_7a0_5, var_7a0_5)
            
            if (not(cond:5_1))
                arg9 = _mm256_add_epi32(zmm2, arg13)
            
            float temp0_794[0x8] = _mm256_blendv_ps(arg9, arg10, temp0_761)
            float var_7a0_6[0x8] = temp0_794
            arg16 = _mm256_cmp_ps(arg12, var_780_9, 5)
            float temp0_796[0x8] = _mm256_cmp_ps(arg12, var_780_9, 1)
            zmm0 = _mm256_and_ps(temp0_796, var_5e0_3)
            arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                arg10 = arg7
            
            zmm0 = _mm256_and_ps(var_5e0_3, arg16)
            arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                arg9 = _mm256_add_epi32(arg7, arg13)
            
            float temp0_808[0x8] = _mm256_blendv_ps(arg9, arg10, temp0_796)
            float temp0_810[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg15), temp0_765, temp0_745)
            float temp0_812[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_794), temp0_748, temp0_746)
            float temp0_814[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_808), temp0_768, temp0_751)
            zmm1 = _mm256_add_ps(zmm1, temp0_810)
            float temp0_816[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_812, arg6)
            float temp0_817[0x8] = _mm256_add_ps(arg11, temp0_814)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_7c0_5, zmm1), temp0_765)
            float temp0_821[0x8] = _mm256_div_ps(_mm256_sub_ps(var_7a0_5, temp0_816), temp0_748)
            uint32_t var_6c0_6[0x8] = zmm1
            float var_6a0_6[0x8] = temp0_821
            float var_680_6[0x8] = _mm256_div_ps(_mm256_sub_ps(var_780_9, temp0_817), temp0_768)
            zmm0 = _mm256_cmpeq_epi32(arg15, arg13)
            zmm1 = zmm0 & var_5e0_3
            temp0_821[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_821[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(0)
                var_7c0_6 = _mm256_maskstore_ps(zmm0, zmm1)
                var_6c0_6 = _mm256_maskstore_ps(zmm0, zmm1)
                arg15 = var_7c0_6
            
            int32_t rax_54 = *arg4
            zmm0[0].o = zx.o(rax_54 - 1)
            zmm0 = _mm256_cmpeq_epi32(arg15, _mm256_broadcastd_epi32(zmm0[0]))
            zmm1 = zmm0 & var_5e0_3
            temp0_821[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_821[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(rax_54 - 2)
                var_7c0_6 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                zmm1 = _mm256_broadcast_ss(1f)
                var_6c0_6 = _mm256_maskstore_ps(zmm0, zmm1)
            
            float temp0_841[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_7c0_5, temp0_674)
            temp0_821[0].o = zx.o(0)
            arg6 = var_7a0_6
            uint32_t temp0_843[0x8] = _mm256_cmpeq_epi32(arg6, _mm256_cmpeq_epi32(zmm1, zmm1))
            arg7 = temp0_843 & var_5e0_3
            temp0_748[0].o = _mm256_extracti128_si256(arg7, 1)
            arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_748[0].o)
            arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_841[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg7[0].o) != 0)
                arg6[0].o = zx.o(0)
                var_7a0_6 = _mm256_maskstore_ps(temp0_843, arg6)
                var_6a0_6 = _mm256_maskstore_ps(temp0_843, arg6)
                arg6 = var_7a0_6
            
            zmm1 = _mm256_sub_ps(var_7a0_5, temp0_686)
            float temp0_851[0x8] = _mm256_fmadd_ps(temp0_841, temp0_841, temp0_821)
            int32_t rdx_1 = arg4[1]
            temp0_821[0].o = zx.o(rdx_1 - 1)
            zmm2 = _mm256_cmpeq_epi32(arg6, _mm256_broadcastd_epi32(temp0_821[0]))
            arg6 = zmm2 & var_5e0_3
            arg7[0].o = _mm256_extracti128_si256(arg6, 1)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_851[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                arg6[0].o = zx.o(rdx_1 - 2)
                var_7a0_6 = _mm256_maskstore_ps(zmm2, _mm256_broadcastd_epi32(arg6[0]))
                arg6 = _mm256_broadcast_ss(1f)
                var_6a0_6 = _mm256_maskstore_ps(zmm2, arg6)
            
            float temp0_862[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_780_9, temp0_710)
            zmm1 = _mm256_fmadd_ps(zmm1, zmm1, temp0_851)
            arg8 = temp0_808
            zmm0 = _mm256_cmpeq_epi32(arg8, _mm256_cmpeq_epi32(temp0_851, temp0_851))
            zmm2 = zmm0 & var_5e0_3
            arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm2[0].o = zx.o(0)
                float temp0_870[0x8] = _mm256_maskstore_ps(zmm0, zmm2)
                var_680_6 = _mm256_maskstore_ps(zmm0, zmm2)
                arg8 = temp0_870
            
            float temp0_872[0x8] = _mm256_fmadd_ps(temp0_862, temp0_862, zmm1)
            int32_t rdx_3 = arg4[2]
            zmm0[0].o = zx.o(rdx_3 - 1)
            zmm0 = _mm256_cmpeq_epi32(arg8, _mm256_broadcastd_epi32(zmm0[0]))
            zmm1 = zmm0 & var_5e0_3
            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(rdx_3 - 2)
                float temp0_880[0x8] = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                var_680_6 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                arg8 = temp0_880
            
            uint32_t temp0_883[0x8] = __vpbroadcastd_ymmqq_memd(*(arg18 + 4))
            arg14 = _mm256_mullo_epi32(temp0_883, var_7c0_6)
            zmm0 = _mm256_add_epi32(arg14, var_7a0_6)
            uint32_t temp0_886[0x8] = __vpbroadcastd_ymmqq_memd(*(arg18 + 8))
            arg9 = _mm256_mullo_epi32(zmm0, temp0_886)
            zmm0 = _mm256_add_epi32(arg9, arg8)
            int64_t rax_57 = *(arg18 + 0x10)
            arg6 = _mm256_slli_epi32(zmm0, 2)
            arg11 = var_5e0_3
            zmm0[0].o = zx.o(0)
            float temp0_890[0x8]
            int32_t temp1_26
            temp0_890, temp1_26 = _mm256_i32gather_ps(zmm0, *(rax_57 + arg6[0].q), arg11)
            arg13 = _mm256_cmpeq_epi32(arg13, arg13)
            arg15 = _mm256_mullo_epi32(temp0_883, _mm256_sub_epi32(var_7c0_6, arg13))
            arg7 = _mm256_mullo_epi32(_mm256_add_epi32(arg15, var_7a0_6), temp0_886)
            uint32_t temp0_897[0x8] = _mm256_slli_epi32(_mm256_add_epi32(arg7, arg8), 2)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            float temp0_899[0x8]
            int32_t temp1_27
            temp0_899, temp1_27 = _mm256_i32gather_ps(arg6, *(rax_57 + temp0_897[0].q), arg11)
            zmm2 = var_6c0_6
            zmm1 = var_6a0_6
            arg16 = _mm256_sub_epi32(var_7a0_6, arg13)
            arg14 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, arg16), temp0_886)
            arg10 = _mm256_add_epi32(arg14, arg8)
            arg17 = _mm256_slli_epi32(arg10, 2)
            arg10[0].o = zx.o(0)
            float temp0_905[0x8]
            int32_t temp1_28
            temp0_905, temp1_28 = _mm256_i32gather_ps(arg10, *(rax_57 + arg17[0].q), arg11)
            arg10 = temp0_905
            arg5 = _mm256_mullo_epi32(_mm256_add_epi32(arg15, arg16), temp0_886)
            uint32_t temp0_909[0x8] = _mm256_slli_epi32(_mm256_add_epi32(arg5, arg8), 2)
            arg16[0].o = zx.o(0)
            float temp0_910[0x8]
            int32_t temp1_29
            temp0_910, temp1_29 = _mm256_i32gather_ps(arg16, *(rax_57 + temp0_909[0].q), arg11)
            arg16 = temp0_910
            arg15 = temp1_29
            arg8 = _mm256_sub_epi32(arg8, arg13)
            arg9 = _mm256_slli_epi32(_mm256_add_epi32(arg9, arg8), 2)
            arg13[0].o = zx.o(0)
            float temp0_914[0x8]
            int32_t temp1_30
            temp0_914, temp1_30 = _mm256_i32gather_ps(arg13, *(rax_57 + arg9[0].q), arg11)
            arg13 = temp0_914
            arg12 = temp1_30
            arg9 = _mm256_slli_epi32(_mm256_add_epi32(arg7, arg8), 2)
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            float temp0_918[0x8]
            int32_t temp1_31
            temp0_918, temp1_31 = _mm256_i32gather_ps(arg12, *(rax_57 + arg9[0].q), arg11)
            arg12 = temp0_918
            arg9 = _mm256_slli_epi32(_mm256_add_epi32(arg14, arg8), 2)
            arg14[0].o = zx.o(0)
            float temp0_921[0x8]
            int32_t temp1_32
            temp0_921, temp1_32 = _mm256_i32gather_ps(arg14, *(rax_57 + arg9[0].q), arg11)
            arg14 = temp0_921
            arg5 = _mm256_slli_epi32(_mm256_add_epi32(arg5, arg8), 2)
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            float temp0_925[0x8]
            int32_t temp1_33
            temp0_925, temp1_33 = _mm256_i32gather_ps(arg9, *(rax_57 + arg5[0].q), arg11)
            arg9 = temp0_925
            float temp0_927[0x8] =
                _mm256_fmadd_ps(_mm256_sub_ps(temp0_899, temp0_890), zmm2, temp0_890)
            float temp0_929[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg16, arg10), zmm2, arg10)
            float temp0_931[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg12, arg13), zmm2, arg13)
            arg8 = _mm256_fmadd_ps(_mm256_sub_ps(arg9, arg14), zmm2, arg14)
            zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_929, temp0_927), zmm1, temp0_927)
            zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(arg8, temp0_931), zmm1, temp0_931), 
                    zmm2), 
                zmm2, var_680_6)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            arg5 = temp0_872
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(arg5, zmm1, 0xc), arg11)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                float temp0_947[0x8] = _mm256_rsqrt_ps(arg5)
                float temp0_948[0x8] = _mm256_mul_ps(arg5, temp0_947)
                zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_947, 
                        _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_947, temp0_948)), 
                    var_4a0)
                float temp0_953[0x8] = _mm256_rcp_ps(zmm2)
                arg5 =
                    _mm256_fmadd_ps(_mm256_fnmadd_ps(temp0_756, temp0_953, zmm2), temp0_953, zmm0)
                zmm1 = _mm256_cvtepi16_epi32(zmm1[0].o)
                zmm0 = _mm256_blendv_ps(zmm0, arg5, zmm1)
            
            arg6 = var_600_3
            zmm1[0].o = arg22
            float temp0_959[0x8] = _mm256_sub_ps(zmm0, _mm256_broadcastss_ps(zmm1[0].o))
            zmm1 = _mm256_and_ps(
                _mm256_cmp_ps(temp0_959, _mm256_broadcast_ss(-9.99999975e-05f), 1), arg11)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_959[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_674, temp0_959, var_3e0_1)
                float temp0_968[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_686, temp0_959, var_3c0_1)
                arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_710, temp0_959, var_3a0_1)
                var_3e0_1 = _mm256_maskstore_ps(zmm1, arg5)
                var_3c0_1 = _mm256_maskstore_ps(zmm1, temp0_968)
                var_3a0_1 = _mm256_maskstore_ps(zmm1, arg8)
                arg6 = _mm256_blendv_ps(arg6, _mm256_add_ps(arg6, temp0_959), 
                    _mm256_cvtepi16_epi32(zmm2[0].o))
    else
        float temp0_16[0x8] = _mm256_broadcast_ss(arg19[3])
        temp0_16[0].o = *arg19
        zmm1[0].o = arg19[1]
        zmm2[0].o = zx.o(arg19[2])
        float temp0_17[0x8] = _mm256_broadcast_ss(*arg1)
        arg15 = _mm256_broadcast_ss(*(arg1 + 4))
        float temp0_19[0x8] = _mm256_broadcast_ss(arg1[1].d)
        float temp0_20[0x8] = _mm256_broadcast_ss(*arg3)
        float temp0_21[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
        float temp0_22[0x8] = _mm256_broadcast_ss(arg3[1].d)
        arg6[0].o = __vmovsd_xmmdq_memq(*arg3)
        float temp0_24[0x8] = _mm256_broadcast_ss(2f)
        arg6[0].o = __vdivps_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_24[0].o)
        float temp0_26[0x8] = _mm256_broadcastss_ps(arg6[0].o)
        arg7[0].o = __vmovshdup_xmmdq_xmmdq(arg6[0].o)
        float var_580_1[0x8] = _mm256_broadcastsd_pd(arg7[0].o)
        arg6[0].o = _mm_permute_ps(arg6[0].o, 0xea)
        float var_5a0_1[0x8] = _mm256_broadcastsd_pd(arg6[0].o)
        float temp0_31[0x8] = _mm256_broadcast_ss(*(arg18 + 4))
        arg5 = _mm256_broadcast_ss(*(arg18 + 8))
        float var_260_1[0x8] = arg5
        int64_t rdi_1 = *(arg18 + 0x10)
        int32_t rsi_1 = 0
        uint32_t var_280_1[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
        uint32_t temp0_34[0x8] = _mm256_broadcastd_epi32(zmm2[0])
        arg14 = _mm256_broadcastss_ps(temp0_16[0].o)
        rbx_1 = 0
        temp0_16[0].o = arg22
        float temp0_36[0x8] = _mm256_broadcastss_ps(temp0_16[0].o)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        float temp0_38[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
        float temp0_39[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
        arg16 = _mm256_cmpeq_epi32(arg16, arg16)
        float temp0_41[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
        float temp0_42[0x8] = _mm256_broadcast_ss(1.12103877e-44f)
        float temp0_43[0x8] = _mm256_broadcast_ss(-9.99999975e-05f)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        float var_460_1[0x8] = arg15
        float var_480_1[0x8] = arg14
        
        do
            zmm0 = *(arg21 + sx.q(rsi_1))
            zmm1 = __vpmulld_ymmqq_ymmqq_memqq(zmm0, temp0_38)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            float temp0_48[0x8]
            int32_t temp1_1
            temp0_48, temp1_1 = _mm256_i32gather_ps(arg6, *(arg20 + (zmm1[0].q << 2)), zmm2)
            zmm2 = temp1_1
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm0, temp0_39)
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, temp0_41)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_53[0x8]
            int32_t temp1_2
            temp0_53, temp1_2 = _mm256_i32gather_ps(arg7, *(arg20 + zmm1[0].q), zmm2)
            zmm2 = temp1_2
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, temp0_42)
            uint32_t temp0_55[0x8] = _mm256_cmpeq_epi32(zmm1, zmm1)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            float temp0_57[0x8]
            int32_t temp1_3
            temp0_57, temp1_3 = _mm256_i32gather_ps(zmm2, *(arg20 + zmm0[0].q), temp0_55)
            float var_660_1[0x8] = arg5
            float var_7c0_1[0x8] = temp0_16
            float var_7a0_1[0x8] = temp0_16
            float var_780_1[0x8] = temp0_16
            float var_760_1[0x8] = temp0_16
            arg13 = temp0_34
            float temp0_58[0x8] = _mm256_mul_ps(temp0_53, arg13)
            zmm1 = _mm256_mul_ps(temp0_57, arg14)
            float temp0_60[0x8] = _mm256_mul_ps(temp0_48, var_280_1)
            float temp0_61[0x8] = _mm256_fmsub_ps(temp0_57, var_280_1, temp0_58)
            float temp0_62[0x8] = _mm256_fmsub_ps(temp0_48, arg13, zmm1)
            float temp0_63[0x8] = _mm256_fmsub_ps(temp0_53, arg14, temp0_60)
            float temp0_64[0x8] = _mm256_add_ps(temp0_61, temp0_61)
            float temp0_65[0x8] = _mm256_add_ps(temp0_62, temp0_62)
            float temp0_66[0x8] = _mm256_add_ps(temp0_63, temp0_63)
            float temp0_67[0x8] = _mm256_fmadd_ps(temp0_48, temp0_16, temp0_64)
            float temp0_68[0x8] = _mm256_fmadd_ps(temp0_53, temp0_16, temp0_65)
            zmm1 = _mm256_fmadd_ps(temp0_57, temp0_16, temp0_66)
            float temp0_70[0x8] = _mm256_mul_ps(temp0_65, arg13)
            float temp0_71[0x8] = _mm256_mul_ps(temp0_66, arg14)
            float temp0_72[0x8] = _mm256_mul_ps(temp0_64, var_280_1)
            float temp0_74[0x8] =
                _mm256_add_ps(temp0_67, _mm256_fmsub_ps(temp0_66, var_280_1, temp0_70))
            float temp0_76[0x8] =
                _mm256_add_ps(temp0_68, _mm256_fmsub_ps(temp0_64, arg13, temp0_71))
            float temp0_78[0x8] = _mm256_add_ps(temp0_74, _mm256_broadcast_ss(arg19[4]))
            float temp0_79[0x8] = _mm256_broadcast_ss(arg19[5])
            float temp0_80[0x8] = _mm256_broadcast_ss(arg19[6])
            float temp0_81[0x8] = _mm256_broadcast_ss(var_710_1)
            float temp0_82[0x8] = _mm256_cmp_ps(temp0_81, temp0_78, 1)
            
            if (_mm256_movemask_ps(temp0_82) != 0)
                var_7c0_1 = _mm256_maskstore_ps(temp0_82, temp0_81)
            
            float temp0_85[0x8] = _mm256_fmsub_ps(temp0_65, arg14, temp0_72)
            float temp0_86[0x8] = _mm256_add_ps(temp0_76, temp0_79)
            zmm2 = _mm256_xor_ps(temp0_82, arg16)
            
            if (_mm256_movemask_ps(zmm2) != 0)
                float temp0_89[0x8] = _mm256_broadcast_ss(var_720_1)
                float temp0_90[0x8] = _mm256_cmp_ps(temp0_78, temp0_89, 1)
                arg9 = _mm256_and_ps(temp0_90, zmm2)
                
                if (_mm256_movemask_ps(arg9) != 0)
                    var_7c0_1 = _mm256_maskstore_ps(arg9, temp0_89)
                
                zmm2 = _mm256_andnot_ps(temp0_90, zmm2)
                
                if (_mm256_movemask_ps(zmm2) != 0)
                    var_7c0_1 = _mm256_maskstore_ps(zmm2, temp0_78)
            
            float temp0_97[0x8] = _mm256_add_ps(zmm1, temp0_85)
            float temp0_98[0x8] = _mm256_broadcast_ss(temp0_9)
            zmm1 = _mm256_cmp_ps(temp0_98, temp0_86, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_7a0_1 = _mm256_maskstore_ps(zmm1, temp0_98)
            
            float temp0_102[0x8] = _mm256_add_ps(temp0_97, temp0_80)
            zmm1 = _mm256_xor_ps(zmm1, arg16)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                float temp0_105[0x8] = _mm256_broadcast_ss(temp0_14)
                float temp0_106[0x8] = _mm256_cmp_ps(temp0_86, temp0_105, 1)
                arg7 = _mm256_and_ps(temp0_106, zmm1)
                
                if (_mm256_movemask_ps(arg7) != 0)
                    var_7a0_1 = _mm256_maskstore_ps(arg7, temp0_105)
                
                zmm1 = _mm256_andnot_ps(temp0_106, zmm1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_7a0_1 = _mm256_maskstore_ps(zmm1, temp0_86)
            
            float temp0_113[0x8] = _mm256_broadcast_ss(temp0_10)
            zmm1 = _mm256_cmp_ps(temp0_113, temp0_102, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_780_1 = _mm256_maskstore_ps(zmm1, temp0_113)
            
            zmm1 = _mm256_xor_ps(zmm1, arg16)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                float temp0_119[0x8] = _mm256_broadcast_ss(temp0_15)
                float temp0_120[0x8] = _mm256_cmp_ps(temp0_102, temp0_119, 1)
                arg7 = _mm256_and_ps(temp0_120, zmm1)
                
                if (_mm256_movemask_ps(arg7) != 0)
                    var_780_1 = _mm256_maskstore_ps(arg7, temp0_119)
                
                zmm1 = _mm256_andnot_ps(temp0_120, zmm1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_780_1 = _mm256_maskstore_ps(zmm1, temp0_102)
            
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_7c0_1, temp0_17), temp0_20)
            float temp0_130[0x8] = _mm256_div_ps(_mm256_sub_ps(var_7a0_1, arg15), temp0_21)
            float temp0_132[0x8] = _mm256_div_ps(_mm256_sub_ps(var_780_1, temp0_19), temp0_22)
            arg9 = _mm256_cvttps_epi32(zmm1)
            arg16 = _mm256_cvttps_epi32(temp0_130)
            arg11 = _mm256_cvttps_epi32(temp0_132)
            zmm1 = _mm256_cvtepi32_ps(arg9)
            arg12 = _mm256_cvtepi32_ps(arg16)
            float temp0_138[0x8] = _mm256_cvtepi32_ps(arg11)
            zmm1 = _mm256_fmadd_ps(zmm1, temp0_20, temp0_17)
            arg12 = _mm256_fmadd_ps(arg12, temp0_21, arg15)
            float temp0_141[0x8] = _mm256_fmadd_ps(temp0_138, temp0_22, temp0_19)
            zmm1 = _mm256_cmp_ps(__vaddps_ymmqq_ymmqq_memqq(zmm1, temp0_26), var_7c0_1, 1)
            arg10 = __vpaddd_ymmqq_ymmqq_memqq(arg9, data_142fc9420)
            zmm1 = _mm256_blendv_ps(arg10, arg9, zmm1)
            uint32_t var_7c0_2[0x8] = zmm1
            arg12 = __vaddps_ymmqq_ymmqq_memqq(arg12, var_580_1)
            float temp0_147[0x8] = _mm256_cmp_ps(arg12, var_7a0_1, 1)
            
            if (_mm256_movemask_ps(temp0_147) != 0)
                arg9 = arg16
            
            float temp0_149[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_141, var_5a0_1)
            arg12 = _mm256_cmp_ps(arg12, var_7a0_1, 5)
            temp0_20[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            temp0_19[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, temp0_20[0].o)
            temp0_19[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_19[0].o, temp0_17[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_19[0].o) != 0)
                arg10 = __vpaddd_ymmqq_ymmqq_memqq(arg16, data_142fc9420)
            
            arg16 = _mm256_blendv_ps(arg10, arg9, temp0_147)
            uint32_t var_7a0_2[0x8] = arg16
            float temp0_157[0x8] = _mm256_cmp_ps(temp0_149, var_780_1, 1)
            
            if (_mm256_movemask_ps(temp0_157) != 0)
                arg9 = arg11
            
            float temp0_159[0x8] = _mm256_cmp_ps(temp0_149, var_780_1, 5)
            temp0_19[0].o = _mm256_extractf128_ps(temp0_159[0].o, 1)
            temp0_159[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_159[0].o, temp0_19[0].o)
            temp0_159[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_159[0].o, temp0_17[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_159[0].o) != 0)
                arg10 = __vpaddd_ymmqq_ymmqq_memqq(arg11, data_142fc9420)
            
            float temp0_169[0x8] = _mm256_div_ps(
                _mm256_sub_ps(var_7c0_1, 
                    __vaddps_ymmqq_ymmqq_memqq(
                        __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm1), temp0_20, 
                            temp0_17), 
                        temp0_26)), 
                temp0_20)
            float temp0_170[0x8] = _mm256_blendv_ps(arg10, arg9, temp0_157)
            float var_6c0_2[0x8] = temp0_169
            float temp0_171[0x8] = _mm256_cvtepi32_ps(arg16)
            float temp0_172[0x8] = _mm256_cvtepi32_ps(temp0_170)
            float temp0_173[0x8] = _mm256_fmadd_ps(temp0_171, temp0_21, arg15)
            float temp0_174[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_172, temp0_22, temp0_19)
            float temp0_175[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_173, var_580_1)
            float temp0_176[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_174, var_5a0_1)
            float var_6a0_2[0x8] = _mm256_div_ps(_mm256_sub_ps(var_7a0_1, temp0_175), temp0_21)
            float var_680_2[0x8] = _mm256_div_ps(_mm256_sub_ps(var_780_1, temp0_176), temp0_22)
            arg14 = _mm256_cmpeq_epi32(temp0_22, temp0_22)
            zmm2 = _mm256_cmpeq_epi32(zmm1, arg14)
            bool cond:7_1 = _mm256_movemask_ps(zmm2) == 0
            temp0_17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_17[0].o, temp0_17[0].o)
            
            if (not(cond:7_1))
                var_7c0_2 = _mm256_maskstore_ps(zmm2, temp0_17)
                var_6c0_2 = _mm256_maskstore_ps(zmm2, temp0_17)
                zmm1 = var_7c0_2
            
            int32_t rax_20 = *arg4
            zmm2[0].o = zx.o(rax_20 - 1)
            zmm2 = _mm256_broadcastd_epi32(zmm2[0])
            uint32_t temp0_188[0x8] = _mm256_cmpeq_epi32(zmm1, zmm2)
            
            if (_mm256_movemask_ps(temp0_188) != 0)
                zmm2[0].o = zx.o(rax_20 - 2)
                var_7c0_2 = _mm256_maskstore_ps(temp0_188, _mm256_broadcastd_epi32(zmm2[0]))
                var_6c0_2 = _mm256_maskstore_ps(temp0_188, _mm256_broadcast_ss(1f))
            
            zmm1 = var_7a0_2
            zmm2 = _mm256_cmpeq_epi32(zmm1, arg14)
            
            if (_mm256_movemask_ps(zmm2) != 0)
                var_7a0_2 = _mm256_maskstore_ps(zmm2, temp0_17)
                var_6a0_2 = _mm256_maskstore_ps(zmm2, temp0_17)
                zmm1 = var_7a0_2
            
            float temp0_198[0x8] = _mm256_sub_ps(var_7c0_1, temp0_78)
            int32_t rax_23 = arg4[1]
            zmm2[0].o = zx.o(rax_23 - 1)
            zmm2 = _mm256_broadcastd_epi32(zmm2[0])
            uint32_t temp0_200[0x8] = _mm256_cmpeq_epi32(zmm1, zmm2)
            
            if (_mm256_movemask_ps(temp0_200) != 0)
                zmm2[0].o = zx.o(rax_23 - 2)
                var_7a0_2 = _mm256_maskstore_ps(temp0_200, _mm256_broadcastd_epi32(zmm2[0]))
                var_6a0_2 = _mm256_maskstore_ps(temp0_200, _mm256_broadcast_ss(1f))
            
            float temp0_206[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_780_1, temp0_102)
            float temp0_207[0x8] = _mm256_sub_ps(var_7a0_1, temp0_86)
            float temp0_208[0x8] = _mm256_fmadd_ps(temp0_198, temp0_198, temp0_17)
            zmm1 = temp0_170
            arg7 = _mm256_cmpeq_epi32(zmm1, arg14)
            
            if (_mm256_movemask_ps(arg7) != 0)
                float temp0_211[0x8] = _mm256_maskstore_ps(arg7, temp0_17)
                var_680_2 = _mm256_maskstore_ps(arg7, temp0_17)
                zmm1 = temp0_211
            
            float temp0_213[0x8] = _mm256_mul_ps(temp0_206, temp0_206)
            float temp0_214[0x8] = _mm256_fmadd_ps(temp0_207, temp0_207, temp0_208)
            int32_t rax_26 = arg4[2]
            temp0_206[0].o = zx.o(rax_26 - 1)
            zmm2 = _mm256_cmpeq_epi32(zmm1, _mm256_broadcastd_epi32(temp0_206[0]))
            
            if (_mm256_movemask_ps(zmm2) != 0)
                zmm1[0].o = zx.o(rax_26 - 2)
                float temp0_219[0x8] = _mm256_maskstore_ps(zmm2, _mm256_broadcastd_epi32(zmm1[0]))
                var_680_2 = _mm256_maskstore_ps(zmm2, _mm256_broadcast_ss(1f))
                zmm1 = temp0_219
            
            zmm2 = var_7c0_2
            arg5 = var_7a0_2
            arg12 = _mm256_mullo_epi32(temp0_31, zmm2)
            zmm0 = var_260_1
            arg16 = _mm256_mullo_epi32(_mm256_add_epi32(arg12, arg5), zmm0)
            arg8 = _mm256_add_epi32(arg16, zmm1)
            arg9 = _mm256_slli_epi32(arg8, 2)
            arg10 = _mm256_cmpeq_epi32(temp0_22, temp0_22)
            arg8[0].o = zx.o(0)
            float temp0_228[0x8]
            int32_t temp1_4
            temp0_228, temp1_4 = _mm256_i32gather_ps(arg8, *(rdi_1 + arg9[0].q), arg10)
            arg10 = temp1_4
            arg13 = _mm256_mullo_epi32(temp0_31, _mm256_sub_epi32(zmm2, arg14))
            zmm2 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, arg5), zmm0)
            arg9 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm1), 2)
            arg10 = _mm256_cmpeq_epi32(arg10, arg10)
            temp0_31[0].o = zx.o(0)
            float temp0_236[0x8]
            int32_t temp1_5
            temp0_236, temp1_5 = _mm256_i32gather_ps(temp0_31, *(rdi_1 + arg9[0].q), arg10)
            arg11 = temp0_236
            arg10 = var_6c0_2
            arg9 = var_6a0_2
            arg5 = _mm256_sub_epi32(arg5, arg14)
            arg12 = _mm256_mullo_epi32(_mm256_add_epi32(arg12, arg5), zmm0)
            arg7 = _mm256_cmpeq_epi32(arg7, arg7)
            arg17 = _mm256_add_epi32(arg12, zmm1)
            arg14 = _mm256_slli_epi32(arg17, 2)
            arg15 = _mm256_cmpeq_epi32(arg15, arg15)
            arg17[0].o = zx.o(0)
            float temp0_244[0x8]
            int32_t temp1_6
            temp0_244, temp1_6 = _mm256_i32gather_ps(arg17, *(rdi_1 + arg14[0].q), arg15)
            arg17 = temp0_244
            arg15 = temp1_6
            arg5 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, arg5), zmm0)
            arg13 = _mm256_slli_epi32(_mm256_add_epi32(arg5, zmm1), 2)
            arg14 = _mm256_cmpeq_epi32(arg14, arg14)
            arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
            float temp0_251[0x8]
            int32_t temp1_7
            temp0_251, temp1_7 = _mm256_i32gather_ps(arg15, *(rdi_1 + arg13[0].q), arg14)
            arg14 = temp1_7
            zmm1 = _mm256_sub_epi32(zmm1, arg7)
            arg13 = _mm256_slli_epi32(_mm256_add_epi32(arg16, zmm1), 2)
            arg14 = _mm256_cmpeq_epi32(arg14, arg14)
            arg16[0].o = zx.o(0)
            float temp0_256[0x8]
            int32_t temp1_8
            temp0_256, temp1_8 = _mm256_i32gather_ps(arg16, *(rdi_1 + arg13[0].q), arg14)
            arg16 = temp0_256
            arg14 = temp1_8
            zmm2 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm1), 2)
            arg13 = _mm256_cmpeq_epi32(arg13, arg13)
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            float temp0_261[0x8]
            int32_t temp1_9
            temp0_261, temp1_9 = _mm256_i32gather_ps(arg14, *(rdi_1 + zmm2[0].q), arg13)
            arg13 = temp1_9
            zmm2 = _mm256_slli_epi32(_mm256_add_epi32(arg12, zmm1), 2)
            uint32_t temp0_264[0x8] = _mm256_cmpeq_epi32(arg12, arg12)
            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            float temp0_266[0x8]
            int32_t temp1_10
            temp0_266, temp1_10 = _mm256_i32gather_ps(arg13, *(rdi_1 + zmm2[0].q), temp0_264)
            arg13 = temp0_266
            arg12 = temp1_10
            uint32_t temp0_268[0x8] = _mm256_slli_epi32(_mm256_add_epi32(arg5, zmm1), 2)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            arg5[0].o = zx.o(0)
            float temp0_270[0x8]
            int32_t temp1_11
            temp0_270, temp1_11 = _mm256_i32gather_ps(arg5, *(rdi_1 + temp0_268[0].q), zmm2)
            zmm1 = _mm256_fmadd_ps(_mm256_sub_ps(arg11, temp0_228), arg10, temp0_228)
            float temp0_274[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(temp0_251, arg17), arg10, arg17)
            arg8 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_261, arg16), arg10, arg16)
            arg5 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_270, arg13), arg10, arg13)
            float temp0_280[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(temp0_274, zmm1), arg9, zmm1)
            zmm1 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(arg5, arg8), arg9, arg8), temp0_280), 
                temp0_280, var_680_2)
            float temp0_285[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_214, temp0_213)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_287[0x8] = _mm256_cmp_ps(temp0_285, arg5, 0xc)
            
            if (_mm256_movemask_ps(temp0_287) != 0)
                float temp0_289[0x8] = _mm256_rsqrt_ps(temp0_285)
                float temp0_290[0x8] = _mm256_mul_ps(temp0_285, temp0_289)
                arg8 = _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_289, temp0_290)
                float temp0_294[0x8] =
                    __vmulps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_289, arg8), var_4a0)
                float temp0_295[0x8] = _mm256_rcp_ps(temp0_294)
                zmm1 = _mm256_blendv_ps(zmm1, 
                    _mm256_fmadd_ps(
                        __vfnmadd213ps_ymmqq_ymmqq_memqq(temp0_294, temp0_295, temp0_24), 
                        temp0_295, zmm1), 
                    temp0_287)
            
            arg6 = arg6
            arg15 = var_460_1
            arg14 = var_480_1
            arg16 = _mm256_cmpeq_epi32(arg16, arg16)
            arg7 = temp0_86
            zmm1 = __vsubps_ymmqq_ymmqq_memqq(zmm1, temp0_36)
            zmm2 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm1, temp0_43, 1)
            
            if (_mm256_movemask_ps(zmm2) != 0)
                float temp0_303[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_78, zmm1, var_3e0_1)
                arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, zmm1, var_3c0_1)
                arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_102, zmm1, var_3a0_1)
                var_3e0_1 = _mm256_maskstore_ps(zmm2, temp0_303)
                var_3c0_1 = _mm256_maskstore_ps(zmm2, arg7)
                var_3a0_1 = _mm256_maskstore_ps(zmm2, arg8)
                zmm0 = _mm256_add_ps(arg6, zmm1)
                arg6 = _mm256_blendv_ps(arg6, zmm0, zmm2)
            
            rbx_1 += 8
            rsi_1 += 0x20
        while (rbx_1 s< r11_5)
        
        rax_30 = arg25
        rdi_2 = arg24
        
        if (rbx_1 s< rax_30)
            goto label_140057288
    float temp0_976[0x8] = _mm256_hadd_ps(var_3e0_1, var_3e0_1)
    float temp0_977[0x8] = _mm256_hadd_ps(temp0_976, temp0_976)
    zmm1 = var_3c0_1
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    arg5[0].o = _mm256_extractf128_ps(temp0_977[0].o, 1)
    temp0_977[0].o = temp0_977[0].o f+ arg5[0]
    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o = zmm1[0].o f+ arg5[0]
    temp0_977[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_977[0].o, zmm1[0].o, 0x10)
    zmm1 = _mm256_hadd_ps(var_3a0_1, var_3a0_1)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    var_3a0_1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o = zmm1[0].o f+ var_3a0_1[0]
    var_3a0_1[0].o = __vmovsd_xmmdq_memq(*rdi_2)
    var_3a0_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_3a0_1[0].o, rdi_2[1].d, 0x20)
    temp0_977[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_977[0].o, zmm1[0].o, 0x20)
    temp0_977[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_977[0].o, var_3a0_1[0].o)
    *rdi_2 = temp0_977[0]
    *(rdi_2 + 4) = __vextractps_memd_xmmdq_immb(temp0_977[0].o, 1)
    rdi_2[1].d = __vextractps_memd_xmmdq_immb(temp0_977[0].o, 2)
    float temp0_992[0x8] = _mm256_hadd_ps(arg6, arg6)
    float temp0_993[0x8] = _mm256_hadd_ps(temp0_992, temp0_992)
    zmm1[0].o = _mm256_extractf128_ps(temp0_993[0].o, 1)
    temp0_993[0].o = temp0_993[0].o f+ zmm1[0]
    result = arg23
    temp0_993[0].o = temp0_993[0].o f+ *result
    *result = temp0_993[0]
arg8[0].o = var_e8
arg9[0].o = var_d8
arg10[0].o = var_c8
arg11[0].o = var_b8
arg12[0].o = var_a8
arg13[0].o = var_98
arg14[0].o = var_88
arg15[0].o = var_78
arg16[0].o = var_68
arg17[0].o = var_58
_mm256_zeroupper()
return result
