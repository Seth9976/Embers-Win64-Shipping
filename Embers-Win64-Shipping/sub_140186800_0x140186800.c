// 函数: sub_140186800
// 地址: 0x140186800
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
float zmm2[0x8]
zmm2[0].o = arg18
int32_t rdx_4 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
int64_t result
float var_780[0x8]
float var_6c0[0x8]
float var_560[0x8]
float var_300[0x8]
int32_t r10
float zmm0[0x8]
float zmm1[0x8]
int32_t zmm5[0x8]

if (rdx_4 s<= 0)
    r10 = 0
    result = zx.q(arg20)
    
    if (0 s< result.d)
    label_14018a3a4:
        zmm0[0].o = zx.o(r10)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(result.d)
        zmm5 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
        zmm2 = _mm256_slli_epi32(zmm0, 3)
        arg16[0].o = zx.o(0)
        int128_t temp0_1319
        int32_t temp1_58
        temp0_1319, temp1_58 = _mm256_i32gather_epi32(arg16, *(arg2 + zmm2[0].q), zmm5)
        arg16 = temp0_1319
        arg13[0].o = zx.o(0)
        zmm1 = __vpbroadcastd_ymmqq_memd(4)
        zmm2 |= zmm1
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int128_t temp0_1322
        int32_t temp1_59
        temp0_1322, temp1_59 = _mm256_i32gather_epi32(arg6, *(arg2 + zmm2[0].q), zmm5)
        arg5 = _mm256_slli_epi32(temp0_1322, 3)
        zmm2[0].o = zx.o(0)
        int128_t temp0_1324
        int32_t temp1_60
        temp0_1324, temp1_60 = _mm256_i32gather_epi32(zmm2, *(arg3 + arg5[0].q), zmm5)
        zmm2 = temp0_1324
        arg6 = temp1_60
        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
        zmm0 = _mm256_cmpeq_epi32(zmm2, arg7)
        float var_7a0_2[0x8] = zmm5
        float var_500_1[0x8] = zmm0
        arg8 = zmm0 & not.32(zmm5)
        arg5[0].o = _mm256_extracti128_si256(arg8, 1)
        arg15[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
        int128_t var_5c0
        int128_t var_5a0
        int128_t var_580
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            arg6[0].o = zx.o(arg4)
            arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            int128_t temp0_1333
            int32_t temp1_61
            temp0_1333, temp1_61 = _mm256_i32gather_epi32(arg14, *(arg4 + zmm2[0].q), arg8)
            arg14 = temp0_1333
            zmm5 = temp1_61
            zmm5[0].o = 4
            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
            zmm0 = _mm256_srli_epi32(arg14, 0x1c)
            zmm5 = _mm256_slli_epi32(zmm0, 2)
            float var_540_1[0x8] = arg8
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            int128_t temp0_1338
            int32_t temp1_62
            temp0_1338, temp1_62 =
                _mm256_i32gather_epi32(arg10, *(&data_143442960 + zmm5[0].q), arg8)
            arg8 = _mm256_srli_epi32(arg14, 0x18)
            arg11 =
                _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 0x1f)
            float var_820_4[0x8] = arg8
            zmm5 = (arg8 & __vpbroadcastd_ymmqq_memd(7)) | _mm256_slli_epi32(zmm0, 3)
            arg8 = __vpbroadcastd_ymmqq_memd(3)
            zmm5 &= arg11
            uint64_t r8_4 = zx.q(zmm5[0])
            uint64_t r10_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t r11_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t r14_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
            uint64_t rsi_12 = zx.q(zmm5[0])
            uint64_t rax_225 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t rdx_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t rbx_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = zx.o(*(r8_4 + &data_143442980))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r10_1 + &data_143442980), 1)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r11_4 + &data_143442980), 2)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r14_1 + &data_143442980), 3)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rsi_12 + &data_143442980), 4)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_225 + &data_143442980), 5)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rdx_8 + &data_143442980), 6)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_10 + &data_143442980), 7)
            arg12 = _mm256_cvtepu8_epi32(zmm5[0].q)
            float var_7c0_3[0x8] = zmm0
            zmm0 = _mm256_cmpeq_epi32(zmm0, arg8)
            zmm5[0].o = _mm256_extracti128_si256(zmm0, 1)
            int32_t var_860_1[0x4] = zmm5[0].o
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
            float var_900_3[0x8] = zmm0
            arg7 ^= zmm0
            arg8[0].o = _mm256_extracti128_si256(arg7, 1)
            arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
            arg8[0].o = arg7[0].o & arg15[0].o
            arg7[0].o = __vpsllw_xmmdq_xmmdq_immb(arg8[0].o, 0xf)
            arg7[0].o = __vpsraw_xmmdq_xmmdq_immb(arg7[0].o, 0xf)
            arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
            char temp0_1369 = __vpmovmskb_gpr32d_xmmdq(arg7[0].o)
            arg7[0].o = zx.o(0)
            
            if (temp0_1369 != 0)
                arg7 = _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(arg8[0].o), 0x1f), 
                    0x1f) & arg12
            
            float var_760_2[0x8] = _mm256_cvtepi32_epi64(zmm2[0].o)
            zmm0 = _mm256_cvtepi32_epi64(arg5[0].o)
            float var_720_1[0x8] = zmm0
            zmm2 = _mm256_broadcastq_epi64(arg6[0].q)
            arg9 = arg14 & data_143442840
            arg5 = arg11 & temp0_1338
            arg6[0].o = arg15[0].o & zmm5[0].o
            zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
            zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            char temp0_1379 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o)
            arg10 = _mm256_broadcast_ss(1.40129846e-45f)
            
            if (temp0_1379 == 0)
                arg6[0].o = zx.o(0)
            else
                zmm5 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f)
                arg6 = _mm256_blendv_ps(arg13, arg12, zmm5)
                arg7 = _mm256_blendv_ps(arg7, arg10, zmm5)
            
            arg8[0].o = arg18
            zmm0 = _mm256_mullo_epi32(arg7, arg5)
            int32_t var_800_1[0x8] = zmm0
            zmm5 = _mm256_madd_epi16(arg6, arg11 & zmm1)
            arg11 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_720_1)
            arg12 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_760_2)
            zmm1 = _mm256_cmpgt_epi32(arg9, arg10)
            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm1[0].o &= arg15[0].o
            zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            float var_940_1[0x8] = arg14
            float var_840_2[0x8] = arg12
            float var_740_2[0x8] = arg11
            float var_8c0_2[0x8]
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) == 0)
                arg12[0].o = zx.o(0)
                zmm0[0].o = zx.o(0)
                var_8c0_2 = zmm0
            else
                zmm0 = arg14 & __vpbroadcastd_ymmqq_memd(0x8000000)
                zmm2[0].o = zx.o(0)
                zmm2 = _mm256_cmpeq_epi32(zmm0, zmm2)
                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                arg5[0].o = zmm1[0].o & zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                float var_980_2[0x8]
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    zmm0[0].o = zx.o(0)
                    var_980_2 = zmm0
                    arg7[0].o = zx.o(0)
                    zmm0[0].o = zx.o(0)
                    var_780 = zmm0
                    zmm0[0].o = zx.o(0)
                    var_8c0_2 = zmm0
                    arg13[0].o = zx.o(0)
                else
                    arg6[0].o = zx.o(0)
                    zmm0[0].o = zx.o(0)
                    
                    if (zx.o(0) f>= arg8[0])
                        zmm0[0].o = zx.o(0)
                        var_980_2 = zmm0
                        arg7[0].o = zx.o(0)
                        zmm0[0].o = zx.o(0)
                        var_780 = zmm0
                        zmm0[0].o = zx.o(0)
                        var_8c0_2 = zmm0
                    else
                        arg7 = _mm256_add_epi32(arg9, _mm256_cmpeq_epi32(zmm0, zmm0))
                        
                        if (arg8[0].o f>= 1f)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f) & arg7
                            arg7 = zmm0
                            var_780 = zmm0
                            var_980_2 = zmm0
                            var_8c0_2 = zmm0
                        else
                            uint32_t var_880_2[0x8] = arg9
                            arg9 = zmm5
                            arg13 = arg10
                            arg10 = _mm256_mul_ps(_mm256_broadcastss_ps(arg8[0].o), 
                                _mm256_cvtepi32_ps(arg7))
                            arg11 = _mm256_round_ps(arg10, 9)
                            zmm0 = _mm256_min_epi32(arg7, _mm256_cvttps_epi32(arg11))
                            arg6 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f)
                            zmm5 = _mm256_srai_epi32(arg6, 0x1f)
                            zmm0 &= zmm5
                            var_980_2 = zmm0
                            arg6[0].o = zx.o(0)
                            
                            if (arg19 != 1)
                                arg6 = _mm256_sub_ps(arg10, arg11)
                            
                            zmm0 = zmm5 & _mm256_min_epi32(
                                _mm256_sub_epi32(var_980_2, _mm256_cmpeq_epi32(zmm0, zmm0)), arg7)
                            arg7 = var_980_2
                            var_780 = zmm0
                            var_8c0_2 = zmm0
                            arg11 = var_740_2
                            arg10 = arg13
                            zmm5 = arg9
                            arg9 = var_880_2
                    
                    arg13 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f) & arg6
                
                arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                zmm0 = zmm2 ^ arg6
                zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm1[0].o &= zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg12 = arg7
                else
                    zmm2 = arg9
                    zmm0 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f)
                    float var_960_4[0x8] = zmm0
                    zmm1 = _mm256_srai_epi32(zmm0, 0x1f)
                    uint32_t var_880_3[0x8] = arg9
                    zmm0 = _mm256_cmpeq_epi32(arg9, _mm256_min_epu32(arg9, arg10))
                    zmm2[0].o = zx.o(0)
                    int32_t rax_231
                    rax_231.b = zmm2[0].o f>= arg8[0]
                    zmm2[0].o = zx.o(neg.d(rax_231))
                    arg5 = zmm0 | _mm256_broadcastd_epi32(zmm2[0])
                    zmm2 = arg5 & zmm1
                    
                    if (_mm256_movemask_ps(zmm2) == 0)
                        zmm0 = var_8c0_2
                    else
                        arg9[0].o = zx.o(0)
                        arg7 = _mm256_blendv_ps(var_980_2, arg9, zmm2)
                        zmm0 = _mm256_blendv_ps(var_780, arg9, zmm2)
                        var_980_2 = arg7
                        var_780 = zmm0
                    
                    uint32_t var_920_4[0x8] = arg5
                    arg5 &= not.32(zmm1)
                    int32_t temp0_1441 = _mm256_movemask_ps(arg5)
                    zmm1[0].o = zx.o(0)
                    
                    if (temp0_1441 == 0)
                        var_8c0_2 = zmm0
                        arg12 = arg7
                        arg8 = var_960_4
                    else
                        zmm2 = var_880_3
                        arg7 = _mm256_add_epi32(zmm2, arg6)
                        
                        if (arg8[0].o f>= 1f)
                            arg12 = _mm256_blendv_ps(var_980_2, arg7, arg5)
                            var_8c0_2 = _mm256_blendv_ps(var_780, arg7, arg5)
                            arg8 = var_960_4
                        else
                            zmm0[0].o = _mm256_extracti128_si256(zmm5, 1)
                            zmm0 = _mm256_cvtepu32_epi64(zmm0[0].o)
                            int32_t var_7e0_5[0x8] = zmm5
                            zmm1 = _mm256_cvtepu32_epi64(zmm5[0].o)
                            zmm2 = __vpmulld_ymmqq_ymmqq_memqq(zmm2, var_800_1)
                            arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                            zmm1 = _mm256_add_epi64(arg12, zmm1)
                            zmm0 = _mm256_add_epi64(arg11, zmm0)
                            zmm5 = __vpbroadcastq_ymmqq_memq(3)
                            zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                            arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                            zmm1 = _mm256_add_epi64(zmm2, _mm256_add_epi64(zmm1, zmm5))
                            zmm0 = _mm256_add_epi64(arg6, _mm256_add_epi64(zmm0, zmm5))
                            zmm2 = __vpbroadcastq_ymmqq_memq(-4)
                            float var_8e0_2[0x8] = zmm0 & zmm2
                            arg6 = zmm1 & zmm2
                            int32_t rbx_11 = arg17 - 2
                            zmm0 = _mm256_broadcastss_ps(arg8[0].o)
                            zmm1 = _mm256_cvtepi32_ps(arg7)
                            zmm0 = _mm256_mul_ps(zmm0, zmm1)
                            zmm1[0].o = arg14[0].o
                            zmm1[0] = float.s(arg17 - 1)
                            arg8[0].o = zmm1[0].o f* arg8[0]
                            int32_t rax_235 = int.d(arg8[0])
                            int32_t rax_236 = rax_235 & not.d(rax_235 s>> 0x1f)
                            
                            if (rbx_11 s> rax_236)
                                rbx_11 = rax_236
                            
                            zmm0 = _mm256_cvttps_epi32(zmm0)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            arg9 = _mm256_min_epi32(_mm256_max_epi32(zmm0, zmm1), arg7)
                            uint32_t var_8a0_2[0x8] = arg13
                            var_300[0].o = arg15[0].o
                            var_6c0 = arg10
                            var_560[0].o = arg8[0].o
                            float var_8c0_3[0x8] = arg7
                            
                            if (arg17 s< 0x100)
                                zmm0 = _mm256_cvtepi32_epi64(arg9[0].o)
                                zmm2 = _mm256_add_epi64(arg6, zmm0)
                                char rdx_12 = temp0_1441.b
                                
                                if ((rdx_12 & 1) == 0)
                                    if ((rdx_12 & 2) != 0)
                                        goto label_14018da71
                                    
                                    goto label_14018b068
                                
                                zmm1[0].o = __vpbroadcastb_xmmdq_memb(*zmm2[0].q)
                                
                                if ((rdx_12 & 2) != 0)
                                label_14018da71:
                                    uint32_t rax_392 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_392, 1)
                                    zmm5[0].o = _mm256_extracti128_si256(arg9, 1)
                                    
                                    if ((rdx_12 & 4) == 0)
                                        goto label_14018b077
                                    
                                    goto label_14018da88
                                
                            label_14018b068:
                                zmm5[0].o = _mm256_extracti128_si256(arg9, 1)
                                
                                if ((rdx_12 & 4) == 0)
                                label_14018b077:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_12 & 8) != 0)
                                        goto label_14018daa9
                                    
                                    goto label_14018b085
                                
                            label_14018da88:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_12 & 8) != 0)
                                label_14018daa9:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    uint32_t rax_396 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_396, 3)
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                    
                                    if ((rdx_12 & 0x10) == 0)
                                        goto label_14018b097
                                    
                                    goto label_14018dad7
                                
                            label_14018b085:
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                
                                if ((rdx_12 & 0x10) == 0)
                                label_14018b097:
                                    
                                    if ((rdx_12 & 0x20) != 0)
                                        goto label_14018daeb
                                    
                                    goto label_14018b0a0
                                
                            label_14018dad7:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm2[0].q), 4)
                                
                                if ((rdx_12 & 0x20) != 0)
                                label_14018daeb:
                                    uint32_t rax_400 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_400, 5)
                                    
                                    if ((rdx_12 & 0x40) == 0)
                                        goto label_14018b0a9
                                    
                                    goto label_14018dafc
                                
                            label_14018b0a0:
                                
                                if ((rdx_12 & 0x40) != 0)
                                label_14018dafc:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1441.b s< 0)
                                    label_14018db17:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint32_t rax_404 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_404, 7)
                                else
                                label_14018b0a9:
                                    
                                    if (temp0_1441.b s< 0)
                                        goto label_14018db17
                                
                                zmm0[0].o = zmm1[0].o & data_142fc92e0
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                zmm1[0].o = zx.o(rbx_11)
                                arg12 = _mm256_broadcastd_epi32(zmm1[0])
                                zmm1 = _mm256_cmpgt_epi32(zmm0, arg12)
                                arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                                arg14 = zmm1 ^ arg8
                                arg10 = arg9
                                
                                if (_mm256_movemask_ps(zmm1 & not.32(arg5)) != 0)
                                    arg10 =
                                        __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg9, var_8c0_3, arg14)
                                    arg15 = _mm256_sub_epi32(arg9, arg8)
                                    arg13 = zmm1 & not.32(_mm256_cmpgt_epi32(var_880_3, arg15))
                                    arg7 = arg5 & arg13
                                    int32_t i = _mm256_movemask_ps(arg7)
                                    
                                    if (i != 0)
                                        zmm1 = arg9
                                        
                                        do
                                            arg11 = arg15
                                            zmm0 = _mm256_cvtepi32_epi64(arg11[0].o)
                                            arg15 = _mm256_add_epi64(arg6, zmm0)
                                            char temp0_1602 = _mm256_movemask_ps(arg7)
                                            
                                            if ((temp0_1602 & 1) == 0)
                                                if ((temp0_1602 & 2) != 0)
                                                    goto label_14018b141
                                                
                                                goto label_14018b236
                                            
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg15[0].q), 0)
                                            
                                            if ((temp0_1602 & 2) != 0)
                                            label_14018b141:
                                                uint32_t rax_263 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_263, 1)
                                                zmm5[0].o = _mm256_extracti128_si256(arg11, 1)
                                                
                                                if ((temp0_1602 & 4) == 0)
                                                    goto label_14018b246
                                                
                                                goto label_14018b159
                                            
                                        label_14018b236:
                                            zmm5[0].o = _mm256_extracti128_si256(arg11, 1)
                                            
                                            if ((temp0_1602 & 4) == 0)
                                            label_14018b246:
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1602 & 8) != 0)
                                                    goto label_14018b17b
                                                
                                                goto label_14018b255
                                            
                                        label_14018b159:
                                            zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm0[0].q), 2)
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1602 & 8) != 0)
                                            label_14018b17b:
                                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                uint32_t rax_267 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_267, 3)
                                                arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                                
                                                if ((temp0_1602 & 0x10) == 0)
                                                    goto label_14018b268
                                                
                                                goto label_14018b1aa
                                            
                                        label_14018b255:
                                            arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                            
                                            if ((temp0_1602 & 0x10) == 0)
                                            label_14018b268:
                                                
                                                if ((temp0_1602 & 0x20) != 0)
                                                    goto label_14018b1bf
                                                
                                                goto label_14018b272
                                            
                                        label_14018b1aa:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg15[0].q), 4)
                                            
                                            if ((temp0_1602 & 0x20) != 0)
                                            label_14018b1bf:
                                                uint32_t rax_271 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_271, 5)
                                                
                                                if ((temp0_1602 & 0x40) == 0)
                                                    goto label_14018b27c
                                                
                                                goto label_14018b1d1
                                            
                                        label_14018b272:
                                            
                                            if ((temp0_1602 & 0x40) != 0)
                                            label_14018b1d1:
                                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*zmm0[0].q), 6)
                                                
                                                if (temp0_1602 s< 0)
                                                label_14018b1ed:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                    uint32_t rax_275 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_275, 7)
                                            else
                                            label_14018b27c:
                                                
                                                if (temp0_1602 s< 0)
                                                    goto label_14018b1ed
                                            
                                            zmm0[0].o = zmm2[0].o & data_142fc92e0
                                            arg7 = _mm256_cmpgt_epi32(
                                                _mm256_cvtepu16_epi32(zmm0[0].o), arg12) & arg13
                                            zmm5[0].o = zx.o(0)
                                            
                                            if (_mm256_movemask_ps(arg7 & arg5) != i)
                                                zmm5 = arg7 ^ arg13
                                            
                                            arg10 = _mm256_blendv_ps(arg10, zmm1, arg7)
                                            arg15 =
                                                __vpsubd_ymmqq_ymmqq_memqq(arg11, data_142fc9420)
                                            arg13 = _mm256_cmpgt_epi32(var_880_3, arg15) & zmm5
                                            arg7 = arg13 & arg5
                                            i = _mm256_movemask_ps(arg7)
                                            zmm1 = arg11
                                        while (i != 0)
                                
                                if (_mm256_movemask_ps(_mm256_andnot_ps(arg14, arg5)) != 0)
                                    zmm0 = arg14 ^ arg8
                                    zmm5[0].o = zx.o(0)
                                    arg10 = _mm256_blendv_ps(arg10, zmm5, zmm0)
                                    zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
                                    zmm2 = _mm256_add_epi32(arg9, zmm1)
                                    zmm5 = _mm256_cmpgt_epi32(zmm2, zmm5)
                                    arg15 = zmm5 & zmm0
                                    arg7 = arg15 & arg5
                                    int32_t i_1 = _mm256_movemask_ps(arg7)
                                    
                                    if (i_1 != 0)
                                        arg9[0].o = data_142fc92e0
                                        
                                        do
                                            zmm0 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                            arg13 = _mm256_add_epi64(arg6, zmm0)
                                            char temp0_1637 = _mm256_movemask_ps(arg7)
                                            
                                            if ((temp0_1637 & 1) == 0)
                                                if ((temp0_1637 & 2) != 0)
                                                    goto label_14018b34d
                                                
                                                goto label_14018b431
                                            
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*arg13[0].q), 0)
                                            
                                            if ((temp0_1637 & 2) != 0)
                                            label_14018b34d:
                                                uint16_t rax_281[0x2] = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_281, 1)
                                                zmm5[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                
                                                if ((temp0_1637 & 4) == 0)
                                                    goto label_14018b441
                                                
                                                goto label_14018b365
                                            
                                        label_14018b431:
                                            zmm5[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            
                                            if ((temp0_1637 & 4) == 0)
                                            label_14018b441:
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1637 & 8) != 0)
                                                    goto label_14018b387
                                                
                                                goto label_14018b450
                                            
                                        label_14018b365:
                                            zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*zmm0[0].q), 2)
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1637 & 8) != 0)
                                            label_14018b387:
                                                zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                uint16_t rax_285[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_285, 3)
                                                arg13 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                                
                                                if ((temp0_1637 & 0x10) == 0)
                                                    goto label_14018b463
                                                
                                                goto label_14018b3b6
                                            
                                        label_14018b450:
                                            arg13 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                            
                                            if ((temp0_1637 & 0x10) == 0)
                                            label_14018b463:
                                                
                                                if ((temp0_1637 & 0x20) != 0)
                                                    goto label_14018b3cb
                                                
                                                goto label_14018b46d
                                            
                                        label_14018b3b6:
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*arg13[0].q), 4)
                                            
                                            if ((temp0_1637 & 0x20) != 0)
                                            label_14018b3cb:
                                                uint16_t rax_289[0x2] = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_289, 5)
                                                
                                                if ((temp0_1637 & 0x40) == 0)
                                                    goto label_14018b477
                                                
                                                goto label_14018b3dd
                                            
                                        label_14018b46d:
                                            
                                            if ((temp0_1637 & 0x40) != 0)
                                            label_14018b3dd:
                                                zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, zx.d(*zmm0[0].q), 6)
                                                
                                                if (temp0_1637 s< 0)
                                                label_14018b3f9:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    uint16_t rax_293[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg11[0].o, rax_293, 7)
                                            else
                                            label_14018b477:
                                                
                                                if (temp0_1637 s< 0)
                                                    goto label_14018b3f9
                                            
                                            zmm0[0].o = arg11[0].o & arg9[0].o
                                            arg7 = _mm256_cmpgt_epi32(
                                                _mm256_cvtepu16_epi32(zmm0[0].o), arg12) & not.32(arg15)
                                            zmm5[0].o = zx.o(0)
                                            int32_t temp0_1643 = _mm256_movemask_ps(arg7 & arg5)
                                            arg8[0].o = zx.o(0)
                                            
                                            if (temp0_1643 != i_1)
                                                arg8 = arg7 ^ arg15
                                            
                                            arg10 = _mm256_blendv_ps(arg10, zmm2, arg7)
                                            zmm2 = _mm256_add_epi32(zmm2, zmm1)
                                            arg15 = _mm256_cmpgt_epi32(zmm2, zmm5) & arg8
                                            arg7 = arg15 & arg5
                                            i_1 = _mm256_movemask_ps(arg7)
                                        while (i_1 != 0)
                                
                                arg12 = _mm256_blendv_ps(var_980_2, arg10, arg5)
                                zmm0 = _mm256_cvtepi32_epi64(arg12[0].o)
                                zmm2 = _mm256_add_epi64(arg6, zmm0)
                                
                                if ((rdx_12 & 1) != 0)
                                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*zmm2[0].q)
                                
                                arg13 = var_8a0_2
                                arg11 = var_740_2
                                arg15[0].o = var_300[0].o
                                arg10 = var_6c0
                                arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                                
                                if ((rdx_12 & 2) == 0)
                                    arg14 = var_940_1
                                    zmm5[0].o = _mm256_extracti128_si256(arg12, 1)
                                    
                                    if ((rdx_12 & 4) != 0)
                                        goto label_14018db53
                                    
                                    goto label_14018b538
                                
                                uint32_t rax_406 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_406, 1)
                                arg14 = var_940_1
                                zmm5[0].o = _mm256_extracti128_si256(arg12, 1)
                                
                                if ((rdx_12 & 4) != 0)
                                label_14018db53:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 2)
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_12 & 8) == 0)
                                        goto label_14018b546
                                    
                                    goto label_14018db74
                                
                            label_14018b538:
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_12 & 8) == 0)
                                label_14018b546:
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                    
                                    if ((rdx_12 & 0x10) != 0)
                                        goto label_14018dba2
                                    
                                    goto label_14018b558
                                
                            label_14018db74:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                uint32_t rax_410 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_410, 3)
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                
                                if ((rdx_12 & 0x10) != 0)
                                label_14018dba2:
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm2[0].q), 4)
                                    
                                    if ((rdx_12 & 0x20) == 0)
                                        goto label_14018b561
                                    
                                    goto label_14018dbb6
                                
                            label_14018b558:
                                
                                if ((rdx_12 & 0x20) == 0)
                                label_14018b561:
                                    
                                    if ((rdx_12 & 0x40) != 0)
                                        goto label_14018dbc7
                                    
                                    goto label_14018b56a
                                
                            label_14018dbb6:
                                uint32_t rax_414 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_414, 5)
                                
                                if ((rdx_12 & 0x40) == 0)
                                label_14018b56a:
                                    
                                    if (temp0_1441.b s< 0)
                                    label_14018dbe2:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint32_t rax_418 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_418, 7)
                                else
                                label_14018dbc7:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1441.b s< 0)
                                        goto label_14018dbe2
                                
                                zmm5 = _mm256_blendv_ps(var_780, 
                                    _mm256_sub_epi32(arg12, _mm256_cmpeq_epi32(zmm0, zmm0)), arg5)
                                zmm2 = _mm256_cmpgt_epi32(var_880_3, zmm5) & not.32(arg5)
                                
                                if (_mm256_movemask_ps(zmm2) != 0)
                                    zmm5 =
                                        __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm5, var_8c0_3, zmm2)
                                
                                arg8 = var_960_4
                                var_8c0_2 = zmm5
                                arg5 = _mm256_add_epi64(arg6, _mm256_cvtepi32_epi64(zmm5[0].o))
                                
                                if ((rdx_12 & 1) == 0)
                                    if ((rdx_12 & 2) != 0)
                                        goto label_14018dc14
                                    
                                    goto label_14018b5d7
                                
                                zmm2[0].o = __vpbroadcastb_xmmdq_memb(*arg5[0].q)
                                
                                if ((rdx_12 & 2) != 0)
                                label_14018dc14:
                                    uint32_t rax_421 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_421, 1)
                                    zmm0 = var_8c0_2
                                    arg6[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    
                                    if ((rdx_12 & 4) == 0)
                                        goto label_14018b5ef
                                    
                                    goto label_14018dc34
                                
                            label_14018b5d7:
                                zmm0 = var_8c0_2
                                arg6[0].o = _mm256_extracti128_si256(zmm0, 1)
                                
                                if ((rdx_12 & 4) == 0)
                                label_14018b5ef:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rdx_12 & 8) != 0)
                                        goto label_14018dc55
                                    
                                    goto label_14018b5fd
                                
                            label_14018dc34:
                                zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rdx_12 & 8) != 0)
                                label_14018dc55:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    uint32_t rax_425 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_425, 3)
                                    arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8e0_2)
                                    
                                    if ((rdx_12 & 0x10) == 0)
                                        goto label_14018b60f
                                    
                                    goto label_14018dc83
                                
                            label_14018b5fd:
                                arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8e0_2)
                                
                                if ((rdx_12 & 0x10) != 0)
                                label_14018dc83:
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*arg5[0].q), 4)
                                    
                                    if ((rdx_12 & 0x20) != 0)
                                    label_14018dc97:
                                        uint32_t rax_429 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_429, 5)
                                        
                                        if ((rdx_12 & 0x40) == 0)
                                            goto label_14018b621
                                        
                                        goto label_14018dca8
                                else
                                label_14018b60f:
                                    
                                    if ((rdx_12 & 0x20) != 0)
                                        goto label_14018dc97
                                
                                if ((rdx_12 & 0x40) != 0)
                                label_14018dca8:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    zmm1[0].o &= data_142fc92e0
                                    
                                    if (temp0_1441.b s< 0)
                                    label_14018dccb:
                                        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                        uint32_t rax_433 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_433, 7)
                                else
                                label_14018b621:
                                    zmm1[0].o &= data_142fc92e0
                                    
                                    if (temp0_1441.b s< 0)
                                        goto label_14018dccb
                                
                                arg5 = var_920_4
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm0[0].o = zmm2[0].o & data_142fc92e0
                                zmm2 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            else
                                arg7 = _mm256_add_epi32(arg9, arg9)
                                zmm0 = _mm256_cvtepi32_epi64(arg7[0].o)
                                zmm2 = _mm256_add_epi64(arg6, zmm0)
                                char rdx_11 = temp0_1441.b
                                
                                if ((rdx_11 & 1) == 0)
                                    if ((rdx_11 & 2) != 0)
                                        goto label_14018d835
                                    
                                    goto label_14018aa5f
                                
                                zmm1[0].o = __vpbroadcastw_xmmdq_memw(*zmm2[0].q)
                                
                                if ((rdx_11 & 2) != 0)
                                label_14018d835:
                                    int64_t rax_368 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_368, 1)
                                    zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                    
                                    if ((rdx_11 & 4) == 0)
                                        goto label_14018aa6e
                                    
                                    goto label_14018d84f
                                
                            label_14018aa5f:
                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                
                                if ((rdx_11 & 4) == 0)
                                label_14018aa6e:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_11 & 8) != 0)
                                        goto label_14018d86d
                                    
                                    goto label_14018aa7c
                                
                            label_14018d84f:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_11 & 8) != 0)
                                label_14018d86d:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    int64_t rax_370 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_370, 3)
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                    
                                    if ((rdx_11 & 0x10) == 0)
                                        goto label_14018aa8e
                                    
                                    goto label_14018d895
                                
                            label_14018aa7c:
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                
                                if ((rdx_11 & 0x10) == 0)
                                label_14018aa8e:
                                    
                                    if ((rdx_11 & 0x20) != 0)
                                        goto label_14018d8a3
                                    
                                    goto label_14018aa97
                                
                            label_14018d895:
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 4)
                                
                                if ((rdx_11 & 0x20) != 0)
                                label_14018d8a3:
                                    int64_t rax_372 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_372, 5)
                                    
                                    if ((rdx_11 & 0x40) == 0)
                                        goto label_14018aaa0
                                    
                                    goto label_14018d8b7
                                
                            label_14018aa97:
                                
                                if ((rdx_11 & 0x40) != 0)
                                label_14018d8b7:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1441.b s< 0)
                                    label_14018d8cf:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_374 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_374, 7)
                                else
                                label_14018aaa0:
                                    
                                    if (temp0_1441.b s< 0)
                                        goto label_14018d8cf
                                
                                zmm0 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm1[0].o = zx.o(rbx_11)
                                arg12 = _mm256_broadcastd_epi32(zmm1[0])
                                zmm1 = _mm256_cmpgt_epi32(zmm0, arg12)
                                arg8 = zmm1 ^ _mm256_cmpeq_epi32(zmm0, zmm0)
                                arg10 = arg9
                                
                                if (_mm256_movemask_ps(zmm1 & not.32(arg5)) != 0)
                                    arg10 =
                                        __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg9, var_8c0_3, arg8)
                                    zmm2 = __vpsubd_ymmqq_ymmqq_memqq(arg9, data_142fc9420)
                                    arg11 = zmm1 & not.32(_mm256_cmpgt_epi32(var_880_3, zmm2))
                                    arg7 = arg5 & arg11
                                    int32_t i_2 = _mm256_movemask_ps(arg7)
                                    
                                    if (i_2 != 0)
                                        arg15 = arg9
                                        
                                        do
                                            arg13 = zmm2
                                            arg14 = _mm256_add_epi32(zmm2, zmm2)
                                            zmm0 = _mm256_cvtepi32_epi64(arg14[0].o)
                                            zmm2 = _mm256_add_epi64(arg6, zmm0)
                                            char temp0_1498 = _mm256_movemask_ps(arg7)
                                            
                                            if ((temp0_1498 & 1) == 0)
                                                if ((temp0_1498 & 2) != 0)
                                                    goto label_14018ab2b
                                                
                                                goto label_14018ac19
                                            
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm2[0].q, 0)
                                            
                                            if ((temp0_1498 & 2) != 0)
                                            label_14018ab2b:
                                                int64_t rax_239 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_239, 1)
                                                zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                                
                                                if ((temp0_1498 & 4) == 0)
                                                    goto label_14018ac29
                                                
                                                goto label_14018ab46
                                            
                                        label_14018ac19:
                                            zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                            
                                            if ((temp0_1498 & 4) == 0)
                                            label_14018ac29:
                                                arg14 = var_940_1
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1498 & 8) != 0)
                                                    goto label_14018ab6b
                                                
                                                goto label_14018ac3e
                                            
                                        label_14018ab46:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm0[0].q, 2)
                                            arg14 = var_940_1
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1498 & 8) != 0)
                                            label_14018ab6b:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                int64_t rax_241 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_241, 3)
                                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                                
                                                if ((temp0_1498 & 0x10) == 0)
                                                    goto label_14018ac51
                                                
                                                goto label_14018ab94
                                            
                                        label_14018ac3e:
                                            zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                            
                                            if ((temp0_1498 & 0x10) == 0)
                                            label_14018ac51:
                                                
                                                if ((temp0_1498 & 0x20) != 0)
                                                    goto label_14018aba3
                                                
                                                goto label_14018ac5b
                                            
                                        label_14018ab94:
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm2[0].q, 4)
                                            
                                            if ((temp0_1498 & 0x20) != 0)
                                            label_14018aba3:
                                                int64_t rax_243 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_243, 5)
                                                
                                                if ((temp0_1498 & 0x40) == 0)
                                                    goto label_14018ac65
                                                
                                                goto label_14018abb8
                                            
                                        label_14018ac5b:
                                            
                                            if ((temp0_1498 & 0x40) != 0)
                                            label_14018abb8:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *zmm0[0].q, 6)
                                                
                                                if (temp0_1498 s< 0)
                                                label_14018abd1:
                                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    int64_t rax_245 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_245, 7)
                                            else
                                            label_14018ac65:
                                                
                                                if (temp0_1498 s< 0)
                                                    goto label_14018abd1
                                            
                                            zmm2 = _mm256_cmpgt_epi32(
                                                _mm256_cvtepu16_epi32(zmm1[0].o), arg12) & arg11
                                            zmm5[0].o = zx.o(0)
                                            
                                            if (_mm256_movemask_ps(zmm2 & arg5) != i_2)
                                                zmm5 = zmm2 ^ arg11
                                            
                                            arg10 = _mm256_blendv_ps(arg10, arg15, zmm2)
                                            zmm2 = __vpsubd_ymmqq_ymmqq_memqq(arg13, data_142fc9420)
                                            arg11 = _mm256_cmpgt_epi32(var_880_3, zmm2) & zmm5
                                            arg7 = arg11 & arg5
                                            i_2 = _mm256_movemask_ps(arg7)
                                            arg15 = arg13
                                        while (i_2 != 0)
                                
                                if (_mm256_movemask_ps(_mm256_andnot_ps(arg8, arg5)) != 0)
                                    zmm0 = __vxorps_ymmqq_ymmqq_memqq(arg8, data_142fc9420)
                                    zmm1[0].o = zx.o(0)
                                    arg10 = _mm256_blendv_ps(arg10, zmm1, zmm0)
                                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                                    zmm2 = _mm256_add_epi32(arg9, arg13)
                                    zmm1 = _mm256_cmpgt_epi32(zmm2, zmm1)
                                    arg11 = zmm1 & zmm0
                                    arg7 = arg11 & arg5
                                    
                                    for (int32_t i_3 = _mm256_movemask_ps(arg7); i_3 != 0; 
                                            i_3 = _mm256_movemask_ps(arg7))
                                        arg14 = _mm256_add_epi32(zmm2, zmm2)
                                        zmm0 = _mm256_cvtepi32_epi64(arg14[0].o)
                                        arg15 = _mm256_add_epi64(arg6, zmm0)
                                        char temp0_1535 = _mm256_movemask_ps(arg7)
                                        
                                        if ((temp0_1535 & 1) == 0)
                                            if ((temp0_1535 & 2) != 0)
                                                goto label_14018ad23
                                            
                                            goto label_14018ae05
                                        
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg15[0].q, 0)
                                        
                                        if ((temp0_1535 & 2) != 0)
                                        label_14018ad23:
                                            int64_t rax_249 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_249, 1)
                                            zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                            
                                            if ((temp0_1535 & 4) == 0)
                                                goto label_14018ae15
                                            
                                            goto label_14018ad3e
                                        
                                    label_14018ae05:
                                        zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                        
                                        if ((temp0_1535 & 4) == 0)
                                        label_14018ae15:
                                            arg14 = var_940_1
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1535 & 8) != 0)
                                                goto label_14018ad63
                                            
                                            goto label_14018ae2a
                                        
                                    label_14018ad3e:
                                        zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *zmm0[0].q, 2)
                                        arg14 = var_940_1
                                        zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                        
                                        if ((temp0_1535 & 8) != 0)
                                        label_14018ad63:
                                            zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                            int64_t rax_251 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_251, 3)
                                            arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                            
                                            if ((temp0_1535 & 0x10) == 0)
                                                goto label_14018ae3d
                                            
                                            goto label_14018ad8c
                                        
                                    label_14018ae2a:
                                        arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                        
                                        if ((temp0_1535 & 0x10) == 0)
                                        label_14018ae3d:
                                            
                                            if ((temp0_1535 & 0x20) != 0)
                                                goto label_14018ad9b
                                            
                                            goto label_14018ae47
                                        
                                    label_14018ad8c:
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg15[0].q, 4)
                                        
                                        if ((temp0_1535 & 0x20) != 0)
                                        label_14018ad9b:
                                            int64_t rax_253 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_253, 5)
                                            
                                            if ((temp0_1535 & 0x40) == 0)
                                                goto label_14018ae51
                                            
                                            goto label_14018adb0
                                        
                                    label_14018ae47:
                                        
                                        if ((temp0_1535 & 0x40) != 0)
                                        label_14018adb0:
                                            zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm0[0].q, 6)
                                            
                                            if (temp0_1535 s< 0)
                                            label_14018adc9:
                                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                int64_t rax_255 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_255, 7)
                                        else
                                        label_14018ae51:
                                            
                                            if (temp0_1535 s< 0)
                                                goto label_14018adc9
                                        
                                        arg7 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                            arg12) & not.32(arg11)
                                        zmm5[0].o = zx.o(0)
                                        int32_t temp0_1541 = _mm256_movemask_ps(arg7 & arg5)
                                        arg8[0].o = zx.o(0)
                                        
                                        if (temp0_1541 != i_3)
                                            arg8 = arg7 ^ arg11
                                        
                                        arg10 = _mm256_blendv_ps(arg10, zmm2, arg7)
                                        zmm2 = _mm256_add_epi32(zmm2, arg13)
                                        arg11 = _mm256_cmpgt_epi32(zmm2, zmm5) & arg8
                                        arg7 = arg11 & arg5
                                
                                arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                                arg12 = _mm256_blendv_ps(var_980_2, arg10, arg5)
                                zmm5 = _mm256_add_epi32(arg12, arg12)
                                zmm0 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                zmm2 = _mm256_add_epi64(arg6, zmm0)
                                
                                if ((rdx_11 & 1) != 0)
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*zmm2[0].q)
                                
                                arg13 = var_8a0_2
                                arg11 = var_740_2
                                arg15[0].o = var_300[0].o
                                arg10 = var_6c0
                                
                                if ((rdx_11 & 2) == 0)
                                    zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    
                                    if ((rdx_11 & 4) != 0)
                                        goto label_14018d8ff
                                    
                                    goto label_14018af0d
                                
                                int64_t rax_375 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_375, 1)
                                zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                
                                if ((rdx_11 & 4) != 0)
                                label_14018d8ff:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_11 & 8) == 0)
                                        goto label_14018af1b
                                    
                                    goto label_14018d91d
                                
                            label_14018af0d:
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_11 & 8) == 0)
                                label_14018af1b:
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                    
                                    if ((rdx_11 & 0x10) != 0)
                                        goto label_14018d945
                                    
                                    goto label_14018af2d
                                
                            label_14018d91d:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                int64_t rax_377 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_377, 3)
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                
                                if ((rdx_11 & 0x10) != 0)
                                label_14018d945:
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 4)
                                    
                                    if ((rdx_11 & 0x20) == 0)
                                        goto label_14018af36
                                    
                                    goto label_14018d953
                                
                            label_14018af2d:
                                
                                if ((rdx_11 & 0x20) == 0)
                                label_14018af36:
                                    
                                    if ((rdx_11 & 0x40) != 0)
                                        goto label_14018d967
                                    
                                    goto label_14018af3f
                                
                            label_14018d953:
                                int64_t rax_379 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_379, 5)
                                
                                if ((rdx_11 & 0x40) == 0)
                                label_14018af3f:
                                    
                                    if (temp0_1441.b s< 0)
                                    label_14018d97f:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_381 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_381, 7)
                                else
                                label_14018d967:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1441.b s< 0)
                                        goto label_14018d97f
                                
                                zmm5 = _mm256_blendv_ps(var_780, 
                                    _mm256_sub_epi32(arg12, _mm256_cmpeq_epi32(zmm0, zmm0)), arg5)
                                zmm2 = _mm256_cmpgt_epi32(var_880_3, zmm5) & not.32(arg5)
                                
                                if (_mm256_movemask_ps(zmm2) != 0)
                                    zmm5 =
                                        __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm5, var_8c0_3, zmm2)
                                
                                arg8 = var_960_4
                                var_8c0_2 = zmm5
                                zmm5 = _mm256_add_epi32(zmm5, zmm5)
                                zmm0 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                arg5 = _mm256_add_epi64(arg6, zmm0)
                                
                                if ((rdx_11 & 1) == 0)
                                    if ((rdx_11 & 2) != 0)
                                        goto label_14018d9a8
                                    
                                    goto label_14018afb0
                                
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*arg5[0].q)
                                
                                if ((rdx_11 & 2) != 0)
                                label_14018d9a8:
                                    int64_t rax_383 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_383, 1)
                                    arg6[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    
                                    if ((rdx_11 & 4) == 0)
                                        goto label_14018afbf
                                    
                                    goto label_14018d9c2
                                
                            label_14018afb0:
                                arg6[0].o = _mm256_extracti128_si256(zmm5, 1)
                                
                                if ((rdx_11 & 4) == 0)
                                label_14018afbf:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rdx_11 & 8) != 0)
                                        goto label_14018d9e0
                                    
                                    goto label_14018afcd
                                
                            label_14018d9c2:
                                zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rdx_11 & 8) != 0)
                                label_14018d9e0:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    int64_t rax_385 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_385, 3)
                                    arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8e0_2)
                                    
                                    if ((rdx_11 & 0x10) == 0)
                                        goto label_14018afdf
                                    
                                    goto label_14018da08
                                
                            label_14018afcd:
                                arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8e0_2)
                                
                                if ((rdx_11 & 0x10) == 0)
                                label_14018afdf:
                                    
                                    if ((rdx_11 & 0x20) != 0)
                                        goto label_14018da16
                                    
                                    goto label_14018afe8
                                
                            label_14018da08:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 4)
                                
                                if ((rdx_11 & 0x20) != 0)
                                label_14018da16:
                                    int64_t rax_387 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_387, 5)
                                    
                                    if ((rdx_11 & 0x40) == 0)
                                        goto label_14018aff1
                                    
                                    goto label_14018da2a
                                
                            label_14018afe8:
                                
                                if ((rdx_11 & 0x40) != 0)
                                label_14018da2a:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1441.b s< 0)
                                    label_14018da42:
                                        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                        int64_t rax_389 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_389, 7)
                                else
                                label_14018aff1:
                                    
                                    if (temp0_1441.b s< 0)
                                        goto label_14018da42
                                
                                arg5 = var_920_4
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                            
                            arg6[0].o = zx.o(0)
                            zmm5[0].o = zx.o(0)
                            
                            if (arg19 != 1)
                                zmm0 = _mm256_max_epi32(_mm256_sub_epi32(zmm2, zmm1), arg10)
                                zmm2 = _mm256_broadcast_ss(var_560[0])
                                zmm5 = _mm256_div_ps(_mm256_sub_ps(zmm2, _mm256_cvtepi32_ps(zmm1)), 
                                    _mm256_cvtepi32_ps(zmm0))
                            
                            zmm1 = _mm256_blendv_ps(arg6, zmm5, arg5 ^ arg7)
                            zmm5 = var_7e0_5
                    
                    arg13 = _mm256_blendv_ps(arg13, zmm1, arg8)
            
            zmm1[0].o = _mm256_extracti128_si256(zmm5, 1)
            zmm0 = _mm256_cvtepu32_epi64(zmm1[0].o)
            arg5 = _mm256_cvtepu32_epi64(zmm5[0].o)
            zmm1 = __vpmulld_ymmqq_ymmqq_memqq(arg12, var_800_1)
            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
            uint32_t var_880_4[0x8] = arg5
            float var_560_1[0x8] = zmm1
            zmm1 = _mm256_add_epi64(zmm1, arg5)
            float var_8e0_3[0x8] = zmm0
            float var_7e0_6[0x8] = zmm2
            zmm2 = _mm256_add_epi64(zmm2, zmm0)
            float var_920_5[0x8] = _mm256_add_epi64(zmm2, arg11)
            float var_980_3[0x8] = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_840_2)
            zmm0 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg10, var_7c0_3)
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            float var_960_5[0x8] = zmm0
            var_6c0[0].o = zmm1[0].o
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o &= arg15[0].o
            zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            uint32_t var_8a0_3[0x8] = arg13
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm2 = arg14 & __vpbroadcastd_ymmqq_memd(0x7000000)
                arg5[0].o = zx.o(0)
                arg14 = _mm256_cmpeq_epi32(zmm2, arg5)
                arg5[0].o = _mm256_extracti128_si256(arg14, 1)
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg14[0].o, arg5[0].o)
                arg5[0].o &= zmm1[0].o
                zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                    arg5 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                    zmm5 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_3, var_720_1)
                    zmm0 = var_880_4
                    arg7 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_760_2)
                    arg8 = __vpbroadcastq_ymmqq_memq(4)
                    arg7 = __vpaddq_ymmqq_ymmqq_memqq(arg7, var_560_1)
                    zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_7e0_6)
                    arg9 = _mm256_add_epi64(zmm5, arg8)
                    arg8 = _mm256_add_epi64(arg7, arg8)
                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                    arg6[0].o = arg5[0].o
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    float temp0_1716[0x4]
                    int32_t temp1_63
                    temp0_1716, temp1_63 =
                        _mm256_i64gather_ps(arg10[0].o, *(arg4 + arg8[0].q), arg6[0].o)
                    arg10[0].o = temp0_1716
                    arg6[0].o = temp1_63
                    arg6[0].o = zmm0[0].o
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    float temp0_1718[0x4]
                    int32_t temp1_64
                    temp0_1718, temp1_64 =
                        _mm256_i64gather_ps(arg8[0].o, *(arg4 + arg9[0].q), arg6[0].o)
                    arg8[0].o = temp0_1718
                    arg6[0].o = temp1_64
                    arg6 = __vpbroadcastq_ymmqq_memq(8)
                    arg9 = _mm256_add_epi64(zmm5, arg6)
                    arg11 = _mm256_add_epi64(arg7, arg6)
                    arg6[0].o = arg5[0].o
                    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                    float temp0_1723[0x4]
                    int32_t temp1_65
                    temp0_1723, temp1_65 =
                        _mm256_i64gather_ps(arg13[0].o, *(arg4 + arg11[0].q), arg6[0].o)
                    arg13[0].o = temp0_1723
                    arg6[0].o = temp1_65
                    arg6[0].o = zmm0[0].o
                    zmm2[0].o = zx.o(0)
                    float temp0_1724[0x4]
                    int32_t temp1_66
                    temp0_1724, temp1_66 =
                        _mm256_i64gather_ps(zx.o(0), *(arg4 + arg9[0].q), arg6[0].o)
                    zmm2[0].o = temp0_1724
                    arg6[0].o = temp1_66
                    arg6 = __vpbroadcastq_ymmqq_memq(0xc)
                    arg9 = _mm256_add_epi64(arg7, arg6)
                    arg7[0].o = arg5[0].o
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    float temp0_1728[0x4]
                    int32_t temp1_67
                    temp0_1728, temp1_67 =
                        _mm256_i64gather_ps(arg11[0].o, *(arg4 + arg9[0].q), arg7[0].o)
                    arg11[0].o = temp0_1728
                    arg7[0].o = temp1_67
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    arg6 = _mm256_add_epi64(zmm5, arg6)
                    float temp0_1731[0x4]
                    int32_t temp1_68
                    temp0_1731, temp1_68 =
                        _mm256_i64gather_ps(arg7[0].o, *(arg4 + arg6[0].q), zmm0[0].o)
                    arg7[0].o = temp0_1731
                    zmm0[0].o = temp1_68
                    zmm0 = _mm256_insertf128_ps(arg10, arg8[0].o, 1)
                    zmm2 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                    arg13 = var_8a0_3
                    arg6 = _mm256_insertf128_ps(arg11, arg7[0].o, 1)
                    arg11 = var_740_2
                    var_5c0.32 = _mm256_maskstore_ps(arg5, zmm0)
                    var_5a0.32 = _mm256_maskstore_ps(arg5, zmm2)
                    var_580.32 = _mm256_maskstore_ps(arg5, arg6)
                
                arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                zmm2 = arg14 ^ arg5
                arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                zmm2[0].o &= zmm1[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                arg14 = var_940_1
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    arg11 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f), 0x1f)
                    arg9 = _mm256_srai_epi32(_mm256_slli_epi32(var_820_4, 0x1f), 0x1f)
                    zmm5 = arg9 & arg11
                    
                    if (_mm256_movemask_ps(zmm5) == 0)
                        arg5 = var_980_3
                        arg7 = var_920_5
                    else
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        arg5 = _mm256_blendv_ps(var_980_3, _mm256_add_epi64(var_980_3, zmm0), 
                            _mm256_permutevar8x32_ps(data_143442920, zmm5))
                        arg6 = _mm256_permutevar8x32_ps(data_143442940, zmm5)
                        arg7 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_3, var_720_1)
                        zmm1 = var_880_4
                        arg8 = __vpaddq_ymmqq_ymmqq_memqq(
                            __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_760_2), var_560_1)
                        arg7 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg7, var_7e0_6), zmm0)
                        arg8 = _mm256_add_epi64(arg8, zmm0)
                        zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        float temp0_1764[0x4]
                        int32_t temp1_69
                        temp0_1764, temp1_69 =
                            _mm256_i64gather_ps(arg10[0].o, *(arg4 + arg8[0].q), zmm5[0].o)
                        arg10[0].o = temp0_1764
                        zmm5[0].o = temp1_69
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        float temp0_1766[0x4]
                        int32_t temp1_70
                        temp0_1766, temp1_70 =
                            _mm256_i64gather_ps(zmm5[0].o, *(arg4 + arg7[0].q), zmm1[0].o)
                        zmm5[0].o = temp0_1766
                        zmm1[0].o = temp1_70
                        zmm1 = var_920_5
                        arg7 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, zmm0), arg6)
                        zmm5 = _mm256_insertf128_ps(arg10, zmm5[0].o, 1)
                    
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    var_5c0.32 = _mm256_maskstore_ps(arg11, _mm256_blendv_ps(arg10, zmm5, arg9))
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                    arg9 = arg14 & zmm0
                    zmm0 = _mm256_cmpeq_epi32(arg9, zmm0)
                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm5[0].o = zmm2[0].o & zmm0[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                        zmm1 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                        arg6 = _mm256_permutevar8x32_epi32(data_143442940, zmm0)
                        zmm5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_1788[0x4]
                        int32_t temp1_71
                        temp0_1788, temp1_71 = _mm256_i64gather_ps(arg8[0].o, *arg5[0].q, zmm0[0].o)
                        arg8[0].o = temp0_1788
                        zmm0[0].o = temp1_71
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        arg5 = _mm256_blendv_ps(arg5, _mm256_add_epi64(arg5, zmm0), zmm1)
                        arg13 = var_8a0_3
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_1793[0x4]
                        int32_t temp1_72
                        temp0_1793, temp1_72 = _mm256_i64gather_ps(zmm1[0].o, *arg7[0].q, zmm5[0].o)
                        zmm1[0].o = temp0_1793
                        zmm5[0].o = temp1_72
                        arg7 = _mm256_blendv_ps(arg7, _mm256_add_epi64(arg7, zmm0), arg6)
                        zmm5 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                    
                    var_5a0.32 =
                        _mm256_maskstore_ps(arg11, _mm256_cmpeq_epi32(arg9, arg10) & not.32(zmm5))
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                    arg9 = arg14 & zmm0
                    zmm0 = _mm256_cmpeq_epi32(arg9, zmm0)
                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm2[0].o &= zmm0[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f), 0x1f)
                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                        zmm2[0].o = zx.o(0)
                        float temp0_1811[0x4]
                        int32_t temp1_73
                        temp0_1811, temp1_73 = _mm256_i64gather_ps(zx.o(0), *arg5[0].q, zmm0[0].o)
                        zmm2[0].o = temp0_1811
                        zmm0[0].o = temp1_73
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        float temp0_1813[0x4]
                        int32_t temp1_74
                        temp0_1813, temp1_74 = _mm256_i64gather_ps(zmm0[0].o, *arg7[0].q, zmm1[0].o)
                        zmm0[0].o = temp0_1813
                        zmm1[0].o = temp1_74
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm0 = _mm256_cmpeq_epi32(arg9, zmm0) & not.32(zmm2)
                    var_580.32 = _mm256_maskstore_ps(arg11, zmm0)
                    arg11 = var_740_2
            
            zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
            zmm1 = zmm5 ^ var_960_5
            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            var_780[0].o = zmm0[0].o
            zmm1[0].o = arg15[0].o & zmm0[0].o
            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm2 = var_900_3
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_860_1)
                zmm1[0].o = zmm0[0].o & arg15[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    arg13 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    zmm0[0].o = zx.o(0)
                    float var_600_3[0x8] = zmm0
                    float var_620_3[0x8] = zmm0
                    float var_640_3[0x8] = zmm0
                    float var_660_3[0x8] = zmm0
                    float var_680_3[0x8] = zmm0
                    float var_6a0_3[0x8] = zmm0
                    arg7 = zmm2 & _mm256_srai_epi32(_mm256_slli_epi32(var_820_4, 0x1f), 0x1f)
                    arg9 = arg7 & var_540_1
                    arg5 = var_840_2
                    zmm1 = arg5
                    zmm2 = arg11
                    
                    if (_mm256_movemask_ps(arg9) != 0)
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        zmm1 = _mm256_add_epi64(arg5, zmm0)
                        zmm2 = _mm256_permutevar8x32_ps(data_143442920, arg9)
                        arg6 = _mm256_blendv_ps(arg5, zmm1, zmm2)
                        zmm1 = _mm256_add_epi64(arg11, zmm0)
                        arg8[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        zmm5[0].o = arg9[0].o
                        float temp0_1841[0x4]
                        int32_t temp1_75
                        temp0_1841, temp1_75 =
                            _mm256_i64gather_ps(arg10[0].o, *arg5[0].q, zmm5[0].o)
                        arg10[0].o = temp0_1841
                        zmm5[0].o = temp1_75
                        zmm5[0].o = arg8[0].o
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_1843[0x4]
                        int32_t temp1_76
                        temp0_1843, temp1_76 =
                            _mm256_i64gather_ps(arg5[0].o, *arg11[0].q, zmm5[0].o)
                        arg5[0].o = temp0_1843
                        zmm5[0].o = temp1_76
                        zmm5 = _mm256_permutevar8x32_ps(data_143442940, arg9)
                        arg11 = _mm256_blendv_ps(arg11, zmm1, zmm5)
                        var_640_3 =
                            _mm256_maskstore_ps(arg7, _mm256_insertf128_ps(arg10, arg5[0].o, 1))
                        zmm1 = _mm256_blendv_ps(arg6, _mm256_add_epi64(arg6, zmm0), zmm2)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_1851[0x4]
                        int32_t temp1_77
                        temp0_1851, temp1_77 = _mm256_i64gather_ps(arg5[0].o, *arg6[0].q, arg9[0].o)
                        arg5[0].o = temp0_1851
                        arg9[0].o = temp1_77
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        float temp0_1853[0x4]
                        int32_t temp1_78
                        temp0_1853, temp1_78 =
                            _mm256_i64gather_ps(arg6[0].o, *arg11[0].q, arg8[0].o)
                        arg6[0].o = temp0_1853
                        arg8[0].o = temp1_78
                        zmm2 = _mm256_blendv_ps(arg11, _mm256_add_epi64(arg11, zmm0), zmm5)
                        var_6a0_3 =
                            _mm256_maskstore_ps(arg7, _mm256_insertf128_ps(arg5, arg6[0].o, 1))
                    
                    arg11 = _mm256_slli_epi32(arg13, 0x1f)
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                    zmm0 = _mm256_cmpeq_epi32(arg14 & zmm0, zmm0)
                    arg5 = zmm0 & var_900_3
                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    zmm5[0].o = zmm0[0].o & arg15[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                        arg6 = __vpbroadcastq_ymmqq_memq(4)
                        zmm5 = _mm256_add_epi64(zmm1, arg6)
                        arg8 = data_143442920
                        arg14 = _mm256_permutevar8x32_epi32(arg8, zmm0)
                        zmm5 = _mm256_blendv_ps(zmm1, zmm5, arg14)
                        arg9 = _mm256_add_epi64(zmm2, arg6)
                        arg10 = data_143442940
                        arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg13[0].o = zx.o(0)
                        arg8[0].o = zmm0[0].o
                        float temp0_1876[0x4]
                        int32_t temp1_79
                        temp0_1876, temp1_79 = _mm256_i64gather_ps(zx.o(0), *zmm1[0].q, arg8[0].o)
                        arg13[0].o = temp0_1876
                        arg8[0].o = temp1_79
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg8[0].o = arg7[0].o
                        float temp0_1878[0x4]
                        int32_t temp1_80
                        temp0_1878, temp1_80 = _mm256_i64gather_ps(zmm1[0].o, *zmm2[0].q, arg8[0].o)
                        zmm1[0].o = temp0_1878
                        arg8[0].o = temp1_80
                        arg8 = _mm256_permutevar8x32_epi32(arg10, zmm0)
                        zmm2 = _mm256_blendv_ps(zmm2, arg9, arg8)
                        var_620_3 =
                            _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(arg13, zmm1[0].o, 1))
                        zmm1 = _mm256_blendv_ps(zmm5, _mm256_add_epi64(zmm5, arg6), arg14)
                        arg14 = var_940_1
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        float temp0_1886[0x4]
                        int32_t temp1_81
                        temp0_1886, temp1_81 = _mm256_i64gather_ps(arg9[0].o, *zmm5[0].q, zmm0[0].o)
                        arg9[0].o = temp0_1886
                        zmm0[0].o = temp1_81
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        float temp0_1888[0x4]
                        int32_t temp1_82
                        temp0_1888, temp1_82 = _mm256_i64gather_ps(zmm0[0].o, *zmm2[0].q, arg7[0].o)
                        zmm0[0].o = temp0_1888
                        arg7[0].o = temp1_82
                        zmm2 = _mm256_blendv_ps(zmm2, _mm256_add_epi64(zmm2, arg6), arg8)
                        var_680_3 =
                            _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(arg9, zmm0[0].o, 1))
                    
                    arg13 = var_8a0_3
                    arg7 = _mm256_srai_epi32(arg11, 0x1f)
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                    zmm0 = _mm256_cmpeq_epi32(arg14 & zmm0, zmm0)
                    arg5 = zmm0 & var_900_3
                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    zmm5[0].o = zmm0[0].o & arg15[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                        arg6 = __vpbroadcastq_ymmqq_memq(4)
                        zmm5 = _mm256_add_epi64(zmm1, arg6)
                        arg8 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                        arg10 = _mm256_blendv_ps(zmm1, zmm5, arg8)
                        arg6 = _mm256_add_epi64(zmm2, arg6)
                        arg9 = data_143442940
                        arg8[0].o = _mm256_extracti128_si256(zmm0, 1)
                        zmm5[0].o = zmm0[0].o
                        arg11[0].o = zx.o(0)
                        float temp0_1911[0x4]
                        int32_t temp1_83
                        temp0_1911, temp1_83 = _mm256_i64gather_ps(zx.o(0), *zmm1[0].q, zmm5[0].o)
                        arg11[0].o = temp0_1911
                        zmm5[0].o = temp1_83
                        zmm1[0].o = arg8[0].o
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        float temp0_1913[0x4]
                        int32_t temp1_84
                        temp0_1913, temp1_84 = _mm256_i64gather_ps(zmm5[0].o, *zmm2[0].q, zmm1[0].o)
                        zmm5[0].o = temp0_1913
                        zmm1[0].o = temp1_84
                        zmm1 = _mm256_blendv_ps(zmm2, arg6, _mm256_permutevar8x32_epi32(arg9, zmm0))
                        zmm2 = _mm256_insertf128_ps(arg11, zmm5[0].o, 1)
                        var_600_3 = _mm256_maskstore_ps(arg5, zmm2)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        float temp0_1919[0x4]
                        int32_t temp1_85
                        temp0_1919, temp1_85 =
                            _mm256_i64gather_ps(zmm2[0].o, *arg10[0].q, zmm0[0].o)
                        zmm2[0].o = temp0_1919
                        zmm0[0].o = temp1_85
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        float temp0_1921[0x4]
                        int32_t temp1_86
                        temp0_1921, temp1_86 = _mm256_i64gather_ps(zmm0[0].o, *zmm1[0].q, arg8[0].o)
                        zmm0[0].o = temp0_1921
                        arg8[0].o = temp1_86
                        var_660_3 =
                            _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(zmm2, zmm0[0].o, 1))
                    
                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_3, var_720_1)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_880_4, var_760_2)
                    zmm2 = __vpbroadcastq_ymmqq_memq(4)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_560_1)
                    zmm0 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(zmm0, var_7e0_6), zmm2)
                    zmm1 = _mm256_add_epi64(zmm1, zmm2)
                    zmm2[0].o = zx.o(0)
                    arg5[0].o = arg7[0].o
                    uint32_t temp0_1931[0x4]
                    int32_t temp1_87
                    temp0_1931, temp1_87 =
                        _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm1[0].q), arg5[0].o)
                    zmm2[0].o = temp0_1931
                    arg5[0].o = temp1_87
                    zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                    arg5[0].o = zx.o(0)
                    uint32_t temp0_1933[0x4]
                    int32_t temp1_88
                    temp0_1933, temp1_88 =
                        _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm0[0].q), zmm1[0].o)
                    arg5[0].o = temp0_1933
                    zmm1[0].o = temp1_88
                    zmm0 = _mm256_inserti128_si256(zmm2, arg5[0].o, 1)
                    zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                    zmm2 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg6 = var_680_3
                    zmm5 = var_660_3
                    arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_6a0_3, 
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                zmm0 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f)), 
                        var_640_3)
                    zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, zmm0))
                    arg8 = _mm256_broadcast_ss(1023f)
                    zmm2 = _mm256_div_ps(zmm2, arg8)
                    zmm0 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm0)), arg8)
                    zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg6, var_620_3)
                    zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, zmm5, var_600_3)
                    var_5c0.32 = _mm256_maskstore_ps(arg7, arg5)
                    var_5a0.32 = _mm256_maskstore_ps(arg7, zmm2)
                    var_580.32 = _mm256_maskstore_ps(arg7, zmm0)
                    zmm2 = var_900_3
                    arg11 = var_740_2
                    zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_860_1)
                zmm2[0].o = zmm0[0].o ^ var_780[0].o
                zmm0[0].o = zmm2[0].o & arg15[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    zmm0 = __vpbroadcastd_ymmqq_memd(2)
                    arg8 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_7c0_3)
                    arg5[0].o = _mm256_extracti128_si256(arg8, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                    zmm1[0].o = zmm0[0].o & arg15[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        var_540_1[0].o = arg5[0].o
                        arg7 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f), 0x1f)
                        arg5 = _mm256_srai_epi32(_mm256_slli_epi32(var_820_4, 0x1f), 0x1f)
                        zmm5 = arg5 & arg7
                        int32_t temp0_1977 = _mm256_movemask_ps(zmm5)
                        arg13[0].o = arg15[0].o
                        
                        if (temp0_1977 != 0)
                            zmm0 = __vpbroadcastq_ymmqq_memq(2)
                            arg6 = _mm256_add_epi64(var_920_5, zmm0)
                            arg15 = var_980_3
                            zmm0 = _mm256_add_epi64(arg15, zmm0)
                            arg9 = _mm256_permutevar8x32_ps(data_143442920, zmm5)
                            var_980_3 = _mm256_blendv_ps(arg15, zmm0, arg9)
                            zmm0 = _mm256_permutevar8x32_ps(data_143442940, zmm5)
                            var_920_5 = _mm256_blendv_ps(var_920_5, arg6, zmm0)
                            arg6 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_3, var_720_1)
                            zmm5 = __vpaddq_ymmqq_ymmqq_memqq(var_880_4, var_760_2)
                            arg10 = __vpbroadcastq_ymmqq_memq(4)
                            zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_560_1)
                            arg6 =
                                _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg6, var_7e0_6), arg10)
                            zmm5 = _mm256_add_epi64(zmm5, arg10)
                            arg10[0].o = zx.o(0)
                            zmm5 = _mm256_blendv_ps(arg10, zmm5, arg9)
                            zmm0 = _mm256_blendv_ps(arg10, arg6, zmm0)
                            int64_t r8_5 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            int64_t rcx_27 = zmm5[0].q
                            arg6[0].o = _mm256_extracti128_si256(zmm5, 1)
                            int64_t r10_2 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            int64_t rbx_12 = arg6[0].q
                            int64_t rdi_13 = zmm0[0].q
                            int64_t rsi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rax_311 = zmm0[0].q
                            int64_t rdx_13 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = zx.o(*(arg4 + rcx_27))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_5), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_12), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_2), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_13), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_13), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_311), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_13), 7)
                            zmm5 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                                _mm256_cvtepu16_epi32(zmm0[0].o), 
                                __vpbroadcastd_ymmqq_memd(0xffffff01)))
                        
                        arg6 = arg12
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        var_5c0.32 = _mm256_maskstore_ps(arg7, _mm256_blendv_ps(arg9, zmm5, arg5))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        arg15 = arg14 & zmm0
                        zmm0 = _mm256_cmpeq_epi32(arg15, zmm0)
                        arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        arg5[0].o = zmm1[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_2017 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_2017 == 0)
                            zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                        else
                            if ((temp0_2017 & 1) == 0)
                                if ((temp0_2017 & 2) != 0)
                                    goto label_14018d029
                                
                                goto label_14018c224
                            
                            arg12[0].o = __vpbroadcastw_xmmdq_memw(*var_980_3[0].q)
                            
                            if ((temp0_2017 & 2) != 0)
                            label_14018d029:
                                uint16_t* rax_335 = __vpextrq_gpr64q_xmmdq_immb(var_980_3[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_335, 1)
                                
                                if ((temp0_2017 & 4) == 0)
                                    goto label_14018c22d
                                
                                goto label_14018d042
                            
                        label_14018c224:
                            
                            if ((temp0_2017 & 4) == 0)
                            label_14018c22d:
                                
                                if ((temp0_2017 & 8) != 0)
                                    goto label_14018d060
                                
                                goto label_14018c236
                            
                        label_14018d042:
                            var_980_3[0].o = _mm256_extracti128_si256(var_980_3, 1)
                            arg12[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *var_980_3[0].q, 2)
                            
                            if ((temp0_2017 & 8) != 0)
                            label_14018d060:
                                var_980_3[0].o = _mm256_extracti128_si256(var_980_3, 1)
                                uint16_t* rax_337 = __vpextrq_gpr64q_xmmdq_immb(var_980_3[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_337, 3)
                                zmm0 = var_920_5
                                arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                                
                                if ((temp0_2017 & 0x10) == 0)
                                    goto label_14018c24a
                                
                                goto label_14018d08a
                            
                        label_14018c236:
                            zmm0 = var_920_5
                            arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                            uint16_t* rax_312
                            
                            if ((temp0_2017 & 0x10) != 0)
                            label_14018d08a:
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *zmm0[0].q, 4)
                                arg5 = _mm256_slli_epi32(arg5, 0x1f)
                                
                                if ((temp0_2017 & 0x20) != 0)
                                    rax_312 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg12[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_312, 5)
                            else
                            label_14018c24a:
                                arg5 = _mm256_slli_epi32(arg5, 0x1f)
                                
                                if ((temp0_2017 & 0x20) != 0)
                                    rax_312 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg12[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_312, 5)
                            arg5 = _mm256_srai_epi32(arg5, 0x1f)
                            zmm5 = __vpbroadcastq_ymmqq_memq(2)
                            arg11 = data_143442920
                            arg10 = data_143442940
                            
                            if ((temp0_2017 & 0x40) != 0)
                                var_920_5[0].o = _mm256_extracti128_si256(var_920_5, 1)
                                zmm0 = var_920_5
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *var_920_5[0].q, 6)
                            
                            arg9 = _mm256_add_epi64(zmm0, zmm5)
                            zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_980_3)
                            arg11 = _mm256_permutevar8x32_epi32(arg11, arg5)
                            arg5 = _mm256_permutevar8x32_epi32(arg10, arg5)
                            
                            if (temp0_2017 s< 0)
                                var_920_5[0].o = _mm256_extracti128_si256(var_920_5, 1)
                                uint16_t* rax_314 = __vpextrq_gpr64q_xmmdq_immb(var_920_5[0].o, 1)
                                zmm0 = var_920_5
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_314, 7)
                            
                            arg10 = _mm256_blendv_ps(var_980_3, zmm5, arg11)
                            var_980_3 = arg10
                            var_920_5 = _mm256_blendv_ps(zmm0, arg9, arg5)
                            arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                                _mm256_cvtepu16_epi32(arg12[0].o), 
                                __vpbroadcastd_ymmqq_memd(0xffffff01)))
                            arg11 = var_740_2
                            zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        
                        var_5a0.32 = _mm256_maskstore_ps(arg7, 
                            _mm256_cmpeq_epi32(arg15, arg9) & not.32(arg5))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                        arg12 = arg14 & zmm0
                        zmm0 = _mm256_cmpeq_epi32(arg12, zmm0)
                        arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        zmm0[0].o &= zmm1[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_2049 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_2049 == 0)
                            arg15[0].o = arg13[0].o
                            arg13 = var_8a0_3
                            arg5[0].o = var_540_1[0].o
                        else
                            arg15[0].o = arg13[0].o
                            arg5[0].o = var_540_1[0].o
                            
                            if ((temp0_2049 & 1) == 0)
                                arg13 = var_8a0_3
                                
                                if ((temp0_2049 & 2) != 0)
                                    goto label_14018d0c8
                                
                                goto label_14018c393
                            
                            zmm1[0].o = __vpbroadcastw_xmmdq_memw(*var_980_3[0].q)
                            arg13 = var_8a0_3
                            
                            if ((temp0_2049 & 2) != 0)
                            label_14018d0c8:
                                int64_t rax_340 = __vpextrq_gpr64q_xmmdq_immb(var_980_3[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_340, 1)
                                
                                if ((temp0_2049 & 4) == 0)
                                    goto label_14018c39c
                                
                                goto label_14018d0e1
                            
                        label_14018c393:
                            
                            if ((temp0_2049 & 4) == 0)
                            label_14018c39c:
                                
                                if ((temp0_2049 & 8) != 0)
                                    goto label_14018d0ff
                                
                                goto label_14018c3a5
                            
                        label_14018d0e1:
                            var_980_3[0].o = _mm256_extracti128_si256(var_980_3, 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *var_980_3[0].q, 2)
                            
                            if ((temp0_2049 & 8) != 0)
                            label_14018d0ff:
                                var_980_3[0].o = _mm256_extracti128_si256(var_980_3, 1)
                                int64_t rax_342 = __vpextrq_gpr64q_xmmdq_immb(var_980_3[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_342, 3)
                                zmm0 = var_920_5
                                
                                if ((temp0_2049 & 0x10) == 0)
                                    goto label_14018c3b4
                                
                                goto label_14018d124
                            
                        label_14018c3a5:
                            zmm0 = var_920_5
                            
                            if ((temp0_2049 & 0x10) == 0)
                            label_14018c3b4:
                                
                                if ((temp0_2049 & 0x20) != 0)
                                    goto label_14018d132
                                
                                goto label_14018c3bd
                            
                        label_14018d124:
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 4)
                            
                            if ((temp0_2049 & 0x20) != 0)
                            label_14018d132:
                                int64_t rax_344 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_344, 5)
                                
                                if ((temp0_2049 & 0x40) == 0)
                                    goto label_14018c3c6
                                
                                goto label_14018d146
                            
                        label_14018c3bd:
                            
                            if ((temp0_2049 & 0x40) != 0)
                            label_14018d146:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                                
                                if (temp0_2049 s< 0)
                                label_14018d164:
                                    var_920_5[0].o = _mm256_extracti128_si256(var_920_5, 1)
                                    int64_t rax_346 = __vpextrq_gpr64q_xmmdq_immb(var_920_5[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_346, 7)
                            else
                            label_14018c3c6:
                                
                                if (temp0_2049 s< 0)
                                    goto label_14018d164
                            
                            zmm0 = _mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                __vpbroadcastd_ymmqq_memd(0xffffff01))
                            zmm1 = _mm256_cvtepi32_ps(zmm0)
                        
                        zmm0[0].o = zx.o(0)
                        zmm0 = _mm256_cmpeq_epi32(arg12, zmm0) & not.32(zmm1)
                        var_580.32 = _mm256_maskstore_ps(arg7, zmm0)
                        arg12 = arg6
                    
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
                    zmm0[0].o ^= zmm2[0].o
                    zmm1[0].o = zmm0[0].o & arg15[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0 = __vpbroadcastd_ymmqq_memd(6)
                        zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_7c0_3)
                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        arg5[0].o = zmm0[0].o & arg15[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                            arg5[0].o = zx.o(0)
                            var_5c0.32 = _mm256_maskstore_ps(zmm0, arg5)
                            var_5a0.32 = _mm256_maskstore_ps(zmm0, arg5)
                            var_580.32 = _mm256_maskstore_ps(zmm0, arg5)
                        
                        zmm0 = zmm2 ^ _mm256_cmpeq_epi32(zmm0, zmm0)
                        zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                        zmm1[0].o &= zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f), 0x1f)
                            zmm1[0].o = zx.o(0)
                            var_5c0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_5a0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_580.32 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm2 = var_8c0_2
            zmm0 = _mm256_cmpeq_epi32(arg12, zmm2) ^ zmm5
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            arg15[0].o &= zmm0[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                arg5 = arg11
                arg11 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_memdq(var_960_5[0].o, var_6c0[0].o)
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm2, var_800_1)
                zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                arg6 = _mm256_cvtepi32_epi64(zmm2[0].o)
                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                int64_t var_960_6[0x4] = zmm0
                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_880_4)
                float var_800_2[0x8] = arg6
                float var_8c0_4[0x8] =
                    _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg6, var_8e0_3), arg5)
                arg12 = var_840_2
                zmm0 = _mm256_add_epi64(zmm2, arg12)
                uint32_t var_980_4[0x8] = zmm0
                zmm1[0].o &= arg15[0].o
                zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                float var_4e0[0x8]
                float var_4c0[0x8]
                float var_4a0[0x8]
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                    zmm2 = arg14 & __vpbroadcastd_ymmqq_memd(0x7000000)
                    arg5[0].o = zx.o(0)
                    arg13 = _mm256_cmpeq_epi32(zmm2, arg5)
                    arg5[0].o = _mm256_extracti128_si256(arg13, 1)
                    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                    arg5[0].o &= zmm1[0].o
                    arg6[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                    arg6[0].o = __vpsraw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                    arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                        arg5 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                        arg6 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_3, var_720_1)
                        zmm0 = var_880_4
                        zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_760_2)
                        arg9 = __vpbroadcastq_ymmqq_memq(4)
                        zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_960_6)
                        arg6 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_800_2)
                        arg10 = _mm256_add_epi64(arg6, arg9)
                        arg9 = _mm256_add_epi64(zmm5, arg9)
                        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                        arg7[0].o = arg5[0].o
                        arg14[0].o = zx.o(0)
                        float temp0_2129[0x4]
                        int32_t temp1_89
                        temp0_2129, temp1_89 =
                            _mm256_i64gather_ps(arg14[0].o, *(arg4 + arg9[0].q), arg7[0].o)
                        arg14[0].o = temp0_2129
                        arg7[0].o = temp1_89
                        arg7[0].o = zmm0[0].o
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_2131[0x4]
                        int32_t temp1_90
                        temp0_2131, temp1_90 =
                            _mm256_i64gather_ps(arg8[0].o, *(arg4 + arg10[0].q), arg7[0].o)
                        arg8[0].o = temp0_2131
                        arg7[0].o = temp1_90
                        arg7 = __vpbroadcastq_ymmqq_memq(8)
                        arg9 = _mm256_add_epi64(arg6, arg7)
                        arg10 = _mm256_add_epi64(zmm5, arg7)
                        arg7[0].o = arg5[0].o
                        arg12[0].o = zx.o(0)
                        float temp0_2135[0x4]
                        int32_t temp1_91
                        temp0_2135, temp1_91 =
                            _mm256_i64gather_ps(zx.o(0), *(arg4 + arg10[0].q), arg7[0].o)
                        arg12[0].o = temp0_2135
                        arg7[0].o = temp1_91
                        arg7[0].o = zmm0[0].o
                        zmm2[0].o = zx.o(0)
                        float temp0_2136[0x4]
                        int32_t temp1_92
                        temp0_2136, temp1_92 =
                            _mm256_i64gather_ps(zx.o(0), *(arg4 + arg9[0].q), arg7[0].o)
                        zmm2[0].o = temp0_2136
                        arg7[0].o = temp1_92
                        arg7 = __vpbroadcastq_ymmqq_memq(0xc)
                        arg9 = _mm256_add_epi64(zmm5, arg7)
                        zmm5[0].o = arg5[0].o
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        float temp0_2140[0x4]
                        int32_t temp1_93
                        temp0_2140, temp1_93 =
                            _mm256_i64gather_ps(arg10[0].o, *(arg4 + arg9[0].q), zmm5[0].o)
                        arg10[0].o = temp0_2140
                        zmm5[0].o = temp1_93
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        arg6 = _mm256_add_epi64(arg6, arg7)
                        float temp0_2143[0x4]
                        int32_t temp1_94
                        temp0_2143, temp1_94 =
                            _mm256_i64gather_ps(zmm5[0].o, *(arg4 + arg6[0].q), zmm0[0].o)
                        zmm5[0].o = temp0_2143
                        zmm0[0].o = temp1_94
                        zmm0 = _mm256_insertf128_ps(arg14, arg8[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                        arg12 = var_840_2
                        arg6 = _mm256_insertf128_ps(arg10, zmm5[0].o, 1)
                        var_4e0 = _mm256_maskstore_ps(arg5, zmm0)
                        var_4c0 = _mm256_maskstore_ps(arg5, zmm2)
                        var_4a0 = _mm256_maskstore_ps(arg5, arg6)
                    
                    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                    zmm2 = arg13 ^ arg5
                    arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
                    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm2[0].o &= zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    arg13 = var_8a0_3
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        arg9 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f), 0x1f)
                        arg6 = _mm256_srai_epi32(_mm256_slli_epi32(var_820_4, 0x1f), 0x1f)
                        arg5 = arg6 & arg9
                        
                        if (_mm256_movemask_ps(arg5) == 0)
                            arg10 = var_980_4
                            arg14 = var_8c0_4
                        else
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            zmm1 = var_980_4
                            arg10 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, zmm0), 
                                _mm256_permutevar8x32_ps(data_143442920, arg5))
                            zmm5 = _mm256_permutevar8x32_ps(data_143442940, arg5)
                            arg7 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_3, var_720_1)
                            zmm1 = var_880_4
                            arg8 = __vpaddq_ymmqq_ymmqq_memqq(
                                __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_760_2), var_960_6)
                            arg7 =
                                _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg7, var_800_2), zmm0)
                            arg8 = _mm256_add_epi64(arg8, zmm0)
                            zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg12[0].o = zx.o(0)
                            float temp0_2175[0x4]
                            int32_t temp1_95
                            temp0_2175, temp1_95 =
                                _mm256_i64gather_ps(arg12[0].o, *(arg4 + arg8[0].q), arg5[0].o)
                            arg12[0].o = temp0_2175
                            arg5[0].o = temp1_95
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_2177[0x4]
                            int32_t temp1_96
                            temp0_2177, temp1_96 =
                                _mm256_i64gather_ps(arg5[0].o, *(arg4 + arg7[0].q), zmm1[0].o)
                            arg5[0].o = temp0_2177
                            zmm1[0].o = temp1_96
                            zmm1 = var_8c0_4
                            arg14 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, zmm0), zmm5)
                            zmm5 = _mm256_insertf128_ps(arg12, arg5[0].o, 1)
                        
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        var_4e0 = _mm256_maskstore_ps(arg9, _mm256_blendv_ps(arg5, zmm5, arg6))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        arg6 = zmm0 & var_940_1
                        zmm0 = _mm256_cmpeq_epi32(arg6, zmm0)
                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm5[0].o = zmm2[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                            zmm1 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                            zmm5 = _mm256_permutevar8x32_epi32(data_143442940, zmm0)
                            arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            float temp0_2199[0x4]
                            int32_t temp1_97
                            temp0_2199, temp1_97 =
                                _mm256_i64gather_ps(arg8[0].o, *arg10[0].q, zmm0[0].o)
                            arg8[0].o = temp0_2199
                            zmm0[0].o = temp1_97
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            arg10 = _mm256_blendv_ps(arg10, _mm256_add_epi64(arg10, zmm0), zmm1)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            float temp0_2204[0x4]
                            int32_t temp1_98
                            temp0_2204, temp1_98 =
                                _mm256_i64gather_ps(zmm1[0].o, *arg14[0].q, arg7[0].o)
                            zmm1[0].o = temp0_2204
                            arg7[0].o = temp1_98
                            arg14 = _mm256_blendv_ps(arg14, _mm256_add_epi64(arg14, zmm0), zmm5)
                            zmm5 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                        
                        arg12 = var_840_2
                        var_4c0 =
                            _mm256_maskstore_ps(arg9, _mm256_cmpeq_epi32(arg6, arg5) & not.32(zmm5))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                        arg5 = zmm0 & var_940_1
                        zmm0 = _mm256_cmpeq_epi32(arg5, zmm0)
                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm2[0].o &= zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f), 0x1f)
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            zmm2[0].o = zx.o(0)
                            float temp0_2222[0x4]
                            int32_t temp1_99
                            temp0_2222, temp1_99 =
                                _mm256_i64gather_ps(zx.o(0), *arg10[0].q, zmm0[0].o)
                            zmm2[0].o = temp0_2222
                            zmm0[0].o = temp1_99
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_2224[0x4]
                            int32_t temp1_100
                            temp0_2224, temp1_100 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg14[0].q, zmm1[0].o)
                            zmm0[0].o = temp0_2224
                            zmm1[0].o = temp1_100
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm0 = _mm256_cmpeq_epi32(arg5, zmm0) & not.32(zmm2)
                        var_4a0 = _mm256_maskstore_ps(arg9, zmm0)
                
                arg14 = _mm256_srai_epi32(arg11, 0x1f)
                zmm1[0].o = arg15[0].o & var_780[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    zmm2 = var_900_3
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_860_1)
                    zmm1[0].o = arg15[0].o & zmm0[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        arg10 = _mm256_cvtepu16_epi32(zmm1[0].o)
                        zmm0[0].o = zx.o(0)
                        float var_600_4[0x8] = zmm0
                        float var_620_4[0x8] = zmm0
                        float var_640_4[0x8] = zmm0
                        float var_660_4[0x8] = zmm0
                        float var_680_4[0x8] = zmm0
                        float var_6a0_4[0x8] = zmm0
                        zmm2 &= _mm256_srai_epi32(_mm256_slli_epi32(var_820_4, 0x1f), 0x1f)
                        arg5 = zmm2 & arg14
                        
                        if (_mm256_movemask_ps(arg5) == 0)
                            arg11 = var_740_2
                        else
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            arg6 = _mm256_add_epi64(arg12, zmm0)
                            zmm5 = _mm256_permutevar8x32_ps(data_143442920, arg5)
                            arg6 = _mm256_blendv_ps(arg12, arg6, zmm5)
                            arg8 = arg12
                            arg13 = var_740_2
                            arg12 = _mm256_add_epi64(arg13, zmm0)
                            arg9 = data_143442940
                            arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            zmm1[0].o = arg5[0].o
                            arg11[0].o = zx.o(0)
                            float temp0_2249[0x4]
                            int32_t temp1_101
                            temp0_2249, temp1_101 =
                                _mm256_i64gather_ps(zx.o(0), *arg8[0].q, zmm1[0].o)
                            arg11[0].o = temp0_2249
                            zmm1[0].o = temp1_101
                            zmm1[0].o = arg7[0].o
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            float temp0_2251[0x4]
                            int32_t temp1_102
                            temp0_2251, temp1_102 =
                                _mm256_i64gather_ps(arg8[0].o, *arg13[0].q, zmm1[0].o)
                            arg8[0].o = temp0_2251
                            zmm1[0].o = temp1_102
                            zmm1 = _mm256_permutevar8x32_ps(arg9, arg5)
                            arg9 = _mm256_blendv_ps(arg13, arg12, zmm1)
                            var_640_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(arg11, arg8[0].o, 1))
                            arg8 = _mm256_add_epi64(arg6, zmm0)
                            arg12 = _mm256_blendv_ps(arg6, arg8, zmm5)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            float temp0_2259[0x4]
                            int32_t temp1_103
                            temp0_2259, temp1_103 =
                                _mm256_i64gather_ps(zmm5[0].o, *arg6[0].q, arg5[0].o)
                            zmm5[0].o = temp0_2259
                            arg5[0].o = temp1_103
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_2261[0x4]
                            int32_t temp1_104
                            temp0_2261, temp1_104 =
                                _mm256_i64gather_ps(arg5[0].o, *arg9[0].q, arg7[0].o)
                            arg5[0].o = temp0_2261
                            arg7[0].o = temp1_104
                            arg11 = _mm256_blendv_ps(arg9, _mm256_add_epi64(arg9, zmm0), zmm1)
                            var_6a0_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm5, arg5[0].o, 1))
                        
                        arg10 = _mm256_slli_epi32(arg10, 0x1f)
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        zmm0 = _mm256_cmpeq_epi32(zmm0 & var_940_1, zmm0)
                        zmm2 = zmm0 & var_900_3
                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        arg5[0].o = arg15[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                            arg5 = __vpbroadcastq_ymmqq_memq(4)
                            arg6 = _mm256_add_epi64(arg12, arg5)
                            zmm5 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                            arg6 = _mm256_blendv_ps(arg12, arg6, zmm5)
                            arg7 = arg12
                            arg12 = _mm256_add_epi64(arg11, arg5)
                            arg9 = data_143442940
                            arg8[0].o = _mm256_extracti128_si256(zmm0, 1)
                            zmm1[0].o = zmm0[0].o
                            arg13 = arg11
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            float temp0_2285[0x4]
                            int32_t temp1_105
                            temp0_2285, temp1_105 =
                                _mm256_i64gather_ps(arg11[0].o, *arg7[0].q, zmm1[0].o)
                            arg11[0].o = temp0_2285
                            zmm1[0].o = temp1_105
                            zmm1[0].o = arg8[0].o
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            float temp0_2287[0x4]
                            int32_t temp1_106
                            temp0_2287, temp1_106 =
                                _mm256_i64gather_ps(arg7[0].o, *arg13[0].q, zmm1[0].o)
                            arg7[0].o = temp0_2287
                            zmm1[0].o = temp1_106
                            zmm1 = _mm256_permutevar8x32_epi32(arg9, zmm0)
                            arg9 = _mm256_blendv_ps(arg13, arg12, zmm1)
                            var_620_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(arg11, arg7[0].o, 1))
                            arg7 = _mm256_add_epi64(arg6, arg5)
                            arg12 = _mm256_blendv_ps(arg6, arg7, zmm5)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            float temp0_2295[0x4]
                            int32_t temp1_107
                            temp0_2295, temp1_107 =
                                _mm256_i64gather_ps(zmm5[0].o, *arg6[0].q, zmm0[0].o)
                            zmm5[0].o = temp0_2295
                            zmm0[0].o = temp1_107
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_2297[0x4]
                            int32_t temp1_108
                            temp0_2297, temp1_108 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg9[0].q, arg8[0].o)
                            zmm0[0].o = temp0_2297
                            arg8[0].o = temp1_108
                            arg5 = _mm256_add_epi64(arg9, arg5)
                            arg11 = _mm256_blendv_ps(arg9, arg5, zmm1)
                            var_680_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm5, zmm0[0].o, 1))
                        
                        arg13 = var_8a0_3
                        zmm1 = _mm256_srai_epi32(arg10, 0x1f)
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                        zmm0 = _mm256_cmpeq_epi32(zmm0 & var_940_1, zmm0)
                        zmm2 = zmm0 & var_900_3
                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        arg5[0].o = arg15[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                            arg5 = __vpbroadcastq_ymmqq_memq(4)
                            arg6 = _mm256_add_epi64(arg12, arg5)
                            zmm5 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                            arg10 = _mm256_blendv_ps(arg12, arg6, zmm5)
                            arg5 = _mm256_add_epi64(arg11, arg5)
                            arg9 = data_143442940
                            arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            zmm5[0].o = zmm0[0].o
                            float temp0_2321[0x4]
                            int32_t temp1_109
                            temp0_2321, temp1_109 =
                                _mm256_i64gather_ps(arg8[0].o, *arg12[0].q, zmm5[0].o)
                            arg8[0].o = temp0_2321
                            zmm5[0].o = temp1_109
                            zmm5[0].o = arg7[0].o
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            float temp0_2323[0x4]
                            int32_t temp1_110
                            temp0_2323, temp1_110 =
                                _mm256_i64gather_ps(arg6[0].o, *arg11[0].q, zmm5[0].o)
                            arg6[0].o = temp0_2323
                            zmm5[0].o = temp1_110
                            arg5 = _mm256_blendv_ps(arg11, arg5, 
                                _mm256_permutevar8x32_epi32(arg9, zmm0))
                            arg6 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                            var_600_4 = _mm256_maskstore_ps(zmm2, arg6)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            float temp0_2329[0x4]
                            int32_t temp1_111
                            temp0_2329, temp1_111 =
                                _mm256_i64gather_ps(arg6[0].o, *arg10[0].q, zmm0[0].o)
                            arg6[0].o = temp0_2329
                            zmm0[0].o = temp1_111
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_2331[0x4]
                            int32_t temp1_112
                            temp0_2331, temp1_112 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg5[0].q, arg7[0].o)
                            zmm0[0].o = temp0_2331
                            arg7[0].o = temp1_112
                            var_660_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(arg6, zmm0[0].o, 1))
                        
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_3, var_720_1)
                        zmm2 = __vpaddq_ymmqq_ymmqq_memqq(var_880_4, var_760_2)
                        arg5 = __vpbroadcastq_ymmqq_memq(4)
                        zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_960_6)
                        zmm0 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(zmm0, var_800_2), arg5)
                        zmm2 = _mm256_add_epi64(zmm2, arg5)
                        arg5[0].o = zmm1[0].o
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        uint32_t temp0_2342[0x4]
                        int32_t temp1_113
                        temp0_2342, temp1_113 =
                            _mm256_i64gather_epi32(arg6[0].o, *(arg4 + zmm2[0].q), arg5[0].o)
                        arg6[0].o = temp0_2342
                        arg5[0].o = temp1_113
                        zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg5[0].o = zx.o(0)
                        uint32_t temp0_2344[0x4]
                        int32_t temp1_114
                        temp0_2344, temp1_114 =
                            _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm0[0].q), zmm2[0].o)
                        arg5[0].o = temp0_2344
                        zmm2[0].o = temp1_114
                        zmm0 = _mm256_inserti128_si256(arg6, arg5[0].o, 1)
                        zmm2 = _mm256_srli_epi32(zmm0, 0x15)
                        arg5 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm5 = var_680_4
                        arg7 = var_660_4
                        arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_6a0_4, 
                            _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    zmm0 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                    __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                _mm256_broadcast_ss(511f)), 
                            var_640_4)
                        zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, zmm0))
                        arg8 = _mm256_broadcast_ss(1023f)
                        arg5 = _mm256_div_ps(arg5, arg8)
                        zmm0 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, zmm0)), arg8)
                        arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg5, zmm5, var_620_4)
                        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, arg7, var_600_4)
                        var_4e0 = _mm256_maskstore_ps(zmm1, arg6)
                        var_4c0 = _mm256_maskstore_ps(zmm1, arg5)
                        var_4a0 = _mm256_maskstore_ps(zmm1, zmm0)
                        zmm2 = var_900_3
                    
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_860_1)
                    arg10[0].o = zmm0[0].o ^ var_780[0].o
                    zmm0[0].o = arg15[0].o & arg10[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0 = __vpbroadcastd_ymmqq_memd(2)
                        arg9 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_7c0_3)
                        arg5[0].o = _mm256_extracti128_si256(arg9, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                        zmm1[0].o = arg15[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f), 0x1f)
                            zmm2 = _mm256_srai_epi32(_mm256_slli_epi32(var_820_4, 0x1f), 0x1f)
                            arg6 = zmm2 & zmm0
                            bool cond:14_1 = _mm256_movemask_ps(arg6) == 0
                            var_900_3[0].o = arg5[0].o
                            uint32_t var_840_3[0x8] = arg9
                            
                            if (cond:14_1)
                                arg12 = var_8c0_4
                            else
                                zmm5 = __vpbroadcastq_ymmqq_memq(2)
                                arg7 = _mm256_add_epi64(var_8c0_4, zmm5)
                                zmm5 = _mm256_add_epi64(var_980_4, zmm5)
                                arg8 = _mm256_permutevar8x32_ps(data_143442920, arg6)
                                var_980_4 = _mm256_blendv_ps(var_980_4, zmm5, arg8)
                                arg6 = _mm256_permutevar8x32_ps(data_143442940, arg6)
                                arg12 = _mm256_blendv_ps(var_8c0_4, arg7, arg6)
                                zmm5 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_3, var_720_1)
                                arg7 = __vpaddq_ymmqq_ymmqq_memqq(var_880_4, var_760_2)
                                arg9 = __vpbroadcastq_ymmqq_memq(4)
                                arg7 = __vpaddq_ymmqq_ymmqq_memqq(arg7, var_960_6)
                                zmm5 = _mm256_add_epi64(
                                    __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_800_2), arg9)
                                arg7 = _mm256_add_epi64(arg7, arg9)
                                arg9[0].o = zx.o(0)
                                arg7 = _mm256_blendv_ps(arg9, arg7, arg8)
                                arg6 = _mm256_blendv_ps(arg9, zmm5, arg6)
                                int64_t r8_6 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                int64_t rcx_29 = arg7[0].q
                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                int64_t r10_3 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                int64_t rbx_15 = zmm5[0].q
                                int64_t rdi_14 = arg6[0].q
                                int64_t rsi_14 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                int64_t rax_333 = arg6[0].q
                                int64_t rdx_16 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                arg6[0].o = zx.o(*(arg4 + rcx_29))
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r8_6), 1)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rbx_15), 2)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r10_3), 3)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdi_14), 4)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rsi_14), 5)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rax_333), 6)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdx_16), 7)
                                arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                zmm5 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, zmm5))
                            
                            zmm5[0].o = zx.o(0)
                            var_4e0 = _mm256_maskstore_ps(zmm0, _mm256_blendv_ps(zmm5, arg6, zmm2))
                            zmm2 = __vpbroadcastd_ymmqq_memd(0x2000000)
                            arg11 = zmm2 & var_940_1
                            zmm2 = _mm256_cmpeq_epi32(arg11, zmm2)
                            arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                            arg6[0].o = zmm1[0].o & zmm2[0].o
                            zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                            zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            char temp0_2447 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
                            
                            if (temp0_2447 == 0)
                                arg5[0].o = var_900_3[0].o
                                arg9 = var_840_3
                            else
                                if ((temp0_2447 & 1) == 0)
                                    if ((temp0_2447 & 2) != 0)
                                        goto label_14018d6ec
                                    
                                    goto label_14018d1ef
                                
                                zmm2 = var_980_4
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*zmm2[0].q)
                                
                                if ((temp0_2447 & 2) != 0)
                                label_14018d6ec:
                                    int64_t rax_355 = __vpextrq_gpr64q_xmmdq_immb(var_980_4[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_355, 1)
                                    
                                    if ((temp0_2447 & 4) == 0)
                                        goto label_14018d1f8
                                    
                                    goto label_14018d700
                                
                            label_14018d1ef:
                                
                                if ((temp0_2447 & 4) == 0)
                                label_14018d1f8:
                                    
                                    if ((temp0_2447 & 8) != 0)
                                        goto label_14018d71e
                                    
                                    goto label_14018d201
                                
                            label_14018d700:
                                zmm5 = var_980_4
                                zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm5[0].q, 2)
                                
                                if ((temp0_2447 & 8) != 0)
                                label_14018d71e:
                                    zmm5 = var_980_4
                                    zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    int64_t rax_357 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_357, 3)
                                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                    
                                    if ((temp0_2447 & 0x10) == 0)
                                        goto label_14018d20f
                                    
                                    goto label_14018d747
                                
                            label_14018d201:
                                arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                int64_t rax_347
                                
                                if ((temp0_2447 & 0x10) != 0)
                                label_14018d747:
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg12[0].q, 4)
                                    arg6 = _mm256_slli_epi32(arg6, 0x1f)
                                    
                                    if ((temp0_2447 & 0x20) != 0)
                                        rax_347 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_347, 5)
                                else
                                label_14018d20f:
                                    arg6 = _mm256_slli_epi32(arg6, 0x1f)
                                    
                                    if ((temp0_2447 & 0x20) != 0)
                                        rax_347 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_347, 5)
                                arg6 = _mm256_srai_epi32(arg6, 0x1f)
                                zmm5 = __vpbroadcastq_ymmqq_memq(2)
                                arg13 = data_143442920
                                arg9 = data_143442940
                                
                                if ((temp0_2447 & 0x40) != 0)
                                    arg7[0].o = _mm256_extracti128_si256(arg12, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg7[0].q, 6)
                                
                                arg8 = arg12
                                arg12 = _mm256_add_epi64(arg12, zmm5)
                                zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_980_4)
                                arg13 = _mm256_permutevar8x32_epi32(arg13, arg6)
                                arg6 = _mm256_permutevar8x32_epi32(arg9, arg6)
                                
                                if (temp0_2447 s< 0)
                                    arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                    int64_t rax_349 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_349, 7)
                                
                                arg5[0].o = var_900_3[0].o
                                arg9 = var_840_3
                                arg7 = _mm256_blendv_ps(var_980_4, zmm5, arg13)
                                var_980_4 = arg7
                                arg8 = _mm256_blendv_ps(arg8, arg12, arg6)
                                zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(zmm2[0].o), 
                                    __vpbroadcastd_ymmqq_memd(0xffffff01)))
                                arg13 = var_8a0_3
                                arg12 = arg8
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            
                            arg6 = _mm256_cmpeq_epi32(arg11, zmm5)
                            var_4c0 = _mm256_maskstore_ps(zmm0, arg6 & not.32(zmm2))
                            zmm2 = __vpbroadcastd_ymmqq_memd(0x4000000)
                            zmm5 = zmm2 & var_940_1
                            zmm2 = _mm256_cmpeq_epi32(zmm5, zmm2)
                            arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                            zmm1[0].o &= zmm2[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            char temp0_2477 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_2477 != 0)
                                if ((temp0_2477 & 1) == 0)
                                    if ((temp0_2477 & 2) != 0)
                                        goto label_14018d777
                                    
                                    goto label_14018d347
                                
                                zmm1 = var_980_4
                                zmm1[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                                
                                if ((temp0_2477 & 2) != 0)
                                label_14018d777:
                                    zmm2 = var_980_4
                                    int64_t rax_360 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_360, 1)
                                    
                                    if ((temp0_2477 & 4) == 0)
                                        goto label_14018d350
                                    
                                    goto label_14018d790
                                
                            label_14018d347:
                                
                                if ((temp0_2477 & 4) == 0)
                                label_14018d350:
                                    
                                    if ((temp0_2477 & 8) != 0)
                                        goto label_14018d7ae
                                    
                                    goto label_14018d359
                                
                            label_14018d790:
                                zmm2 = var_980_4
                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 2)
                                
                                if ((temp0_2477 & 8) != 0)
                                label_14018d7ae:
                                    zmm2 = var_980_4
                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    int64_t rax_362 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_362, 3)
                                    
                                    if ((temp0_2477 & 0x10) == 0)
                                        goto label_14018d362
                                    
                                    goto label_14018d7d2
                                
                            label_14018d359:
                                
                                if ((temp0_2477 & 0x10) == 0)
                                label_14018d362:
                                    
                                    if ((temp0_2477 & 0x20) != 0)
                                        goto label_14018d7e0
                                    
                                    goto label_14018d36b
                                
                            label_14018d7d2:
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg12[0].q, 4)
                                
                                if ((temp0_2477 & 0x20) != 0)
                                label_14018d7e0:
                                    int64_t rax_364 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_364, 5)
                                    
                                    if ((temp0_2477 & 0x40) == 0)
                                        goto label_14018d374
                                    
                                    goto label_14018d7f4
                                
                            label_14018d36b:
                                
                                if ((temp0_2477 & 0x40) != 0)
                                label_14018d7f4:
                                    zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 6)
                                    
                                    if (temp0_2477 s< 0)
                                    label_14018d80c:
                                        zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                        int64_t rax_366 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_366, 7)
                                else
                                label_14018d374:
                                    
                                    if (temp0_2477 s< 0)
                                        goto label_14018d80c
                                
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm2 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm2))
                            
                            zmm2[0].o = zx.o(0)
                            zmm1 = _mm256_cmpeq_epi32(zmm5, zmm2) & not.32(zmm1)
                            var_4a0 = _mm256_maskstore_ps(zmm0, zmm1)
                        
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                        zmm0[0].o ^= arg10[0].o
                        zmm1[0].o = arg15[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = __vpbroadcastd_ymmqq_memd(6)
                            zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_7c0_3)
                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            arg5[0].o = arg15[0].o & zmm0[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                                zmm0 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                                arg5[0].o = zx.o(0)
                                var_4e0 = _mm256_maskstore_ps(zmm0, arg5)
                                var_4c0 = _mm256_maskstore_ps(zmm0, arg5)
                                var_4a0 = _mm256_maskstore_ps(zmm0, arg5)
                            
                            zmm0 = zmm2 ^ _mm256_cmpeq_epi32(zmm0, zmm0)
                            zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                            zmm1[0].o &= zmm0[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                                zmm0 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f), 0x1f)
                                zmm1[0].o = zx.o(0)
                                var_4e0 = _mm256_maskstore_ps(zmm0, zmm1)
                                var_4c0 = _mm256_maskstore_ps(zmm0, zmm1)
                                var_4a0 = _mm256_maskstore_ps(zmm0, zmm1)
                
                arg5 = var_5c0.32
                arg6 = var_5a0.32
                zmm5 = var_580.32
                zmm0 = _mm256_sub_ps(var_4e0, arg5)
                zmm1 = _mm256_sub_ps(var_4c0, arg6)
                zmm2 = _mm256_sub_ps(var_4a0, zmm5)
                zmm0 = _mm256_fmadd_ps(zmm0, arg13, arg5)
                zmm1 = _mm256_fmadd_ps(zmm1, arg13, arg6)
                zmm2 = _mm256_fmadd_ps(zmm2, arg13, zmm5)
                var_5c0.32 = _mm256_maskstore_ps(arg14, zmm0)
                var_5a0.32 = _mm256_maskstore_ps(arg14, zmm1)
                var_580.32 = _mm256_maskstore_ps(arg14, zmm2)
        
        arg11 = var_7a0_2
        zmm1 = arg11 & var_500_1
        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
            zmm0[0].o = zx.o(0)
            var_5c0.32 = _mm256_maskstore_ps(zmm1, zmm0)
            var_5a0.32 = _mm256_maskstore_ps(zmm1, zmm0)
            var_580.32 = _mm256_maskstore_ps(zmm1, zmm0)
        
        zmm1[0].o = var_5c0
        int128_t var_5b0
        arg10[0].o = var_5b0
        arg5[0].o = var_5a0
        int128_t var_590
        arg6[0].o = var_590
        zmm5[0].o = var_580
        int128_t var_570
        arg7[0].o = var_570
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, zmm5[0].o, 0x28)
        int128_t var_200 = zmm2[0].o
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        int128_t var_1f0_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 0xa8)
        int128_t var_1e0_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        int128_t var_1d0_1 = zmm0[0].o
        zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg7[0].o, 0x28)
        int128_t var_1c0_1 = zmm2[0].o
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_1b0_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg7[0].o, 0xa8)
        int128_t var_1a0_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        int128_t var_190_1 = zmm0[0].o
        uint64_t i_4 = zx.q(_mm256_movemask_ps(arg11))
        
        do
            uint64_t rcx_32 = _tzcnt_u64(i_4)
            result = rol.q(-2, rcx_32.b)
            uint32_t var_120[0x8] = arg16
            zmm0[0].o = (&var_200)[rcx_32]
            *(arg1 + sx.q(var_120[zx.q(rcx_32.d) & 7]) * 0x30 + 0x10) = zmm0[0].o
            i_4 &= result
        while (i_4 != 0)
else
    zmm0[0].o = zx.o(arg4)
    zmm1[0].o = 4
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_140_1[0x8] = _mm256_broadcastq_epi64(zmm0[0].q)
    zmm0 = _mm256_broadcastss_ps(zmm2[0].o)
    float var_2c0_1[0x8] = zmm0
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    int32_t rbx_1
    rbx_1.b = zmm0[0].o f>= zmm2[0]
    zmm0[0].o = zx.o(neg.d(rbx_1))
    zmm0 = _mm256_broadcastd_epi32(zmm0[0])
    float var_160_1[0x8] = zmm0
    int32_t rbx_3 = arg17 - 2
    zmm0[0].o = arg5[0].o
    zmm0[0] = float.s(arg17 - 1)
    zmm0[0].o = zmm0[0].o f* zmm2[0]
    int32_t rcx_3 = int.d(zmm0[0]) s>> 0x1f
    int32_t rcx_4 = rcx_3 & not.d(rcx_3)
    
    if (rbx_3 s> rcx_4)
        rbx_3 = rcx_4
    
    zmm1[0].o = zx.o(rbx_3)
    zmm1 = _mm256_broadcastd_epi32(zmm1[0])
    int32_t var_740_1[0x8] = zmm1
    float var_180_1[0x8] = _mm256_broadcastss_ps(zmm0[0].o)
    arg16 = _mm256_cmpeq_epi32(arg16, arg16)
    arg7[0].o = zx.o(0)
    zmm0 = _mm256_broadcast_ss(5.60519386e-45f)
    float var_760_1[0x8] = zmm0
    r10 = 0
    
    do
        zmm0[0].o = zx.o(r10)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_broadcastd_epi32(zmm0[0]), 3), 
            data_143442140)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        arg13[0].o = zx.o(0)
        int128_t temp0_45
        int32_t temp1_1
        temp0_45, temp1_1 = _mm256_i32gather_epi32(arg13, *(arg2 + zmm0[0].q), zmm1)
        arg13 = temp0_45
        zmm1 = temp1_1
        zmm0 |= var_760_1
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int128_t temp0_48
        int32_t temp1_2
        temp0_48, temp1_2 = _mm256_i32gather_epi32(zmm2, *(arg2 + zmm0[0].q), zmm1)
        zmm2 = temp0_48
        zmm1 = _mm256_slli_epi32(zmm2, 3)
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        zmm0[0].o = zx.o(0)
        int128_t temp0_51
        int32_t temp1_3
        temp0_51, temp1_3 = _mm256_i32gather_epi32(zmm0, *(arg3 + zmm1[0].q), zmm2)
        zmm0 = temp0_51
        zmm2 = temp1_3
        arg14 = _mm256_cmpeq_epi32(zmm0, arg16)
        arg15 = arg14 ^ arg16
        int128_t var_480
        int128_t var_460
        int128_t var_440
        
        if (_mm256_movemask_ps(arg15) == 0)
        label_14018a1ee:
            zmm0 = _mm256_xor_ps(arg15, arg16)
            
            if (_mm256_movemask_ps(zmm0) != 0)
            label_14018a1fb:
                var_480.32 = _mm256_maskstore_ps(zmm0, arg7)
                var_460.32 = _mm256_maskstore_ps(zmm0, arg7)
                var_440.32 = _mm256_maskstore_ps(zmm0, arg7)
        else
            zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
            arg6[0].o = zx.o(0)
            int128_t temp0_55
            int32_t temp1_4
            temp0_55, temp1_4 = _mm256_i32gather_epi32(arg6, *(arg4 + zmm0[0].q), arg15)
            arg6 = temp0_55
            zmm1[0].o = zx.o(0)
            var_780 = zmm1
            arg5 = arg6 & data_143442840
            zmm5 = _mm256_srli_epi32(arg6, 0x18) & __vpbroadcastd_ymmqq_memd(0xf)
            arg6 = _mm256_srli_epi32(arg6, 0x1c)
            float var_720[0x8]
            arg10 = _mm256_blendv_ps(var_720, arg6, arg15)
            arg8 = _mm256_slli_epi32(arg10, 2)
            arg6[0].o = zx.o(0)
            int128_t temp0_61
            int32_t temp1_5
            temp0_61, temp1_5 = _mm256_i32gather_epi32(arg6, *(&data_143442960 + arg8[0].q), arg15)
            float var_940[0x8]
            zmm1 = _mm256_blendv_ps(var_940, zmm5, arg15)
            var_940 = zmm1
            zmm1 = _mm256_and_ps(zmm1, _mm256_broadcast_ss(9.80908925e-45f))
            zmm5 = _mm256_slli_epi32(arg10, 3)
            arg8 = __vpbroadcastd_ymmqq_memd(3)
            var_560 = zmm1
            zmm5 = arg14 & not.32(_mm256_or_ps(zmm1, zmm5))
            int64_t r15_1 = sx.q(zmm5[0])
            int64_t r13_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            int64_t rdi_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            int64_t rbx_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
            int64_t rax_22 = sx.q(zmm5[0])
            int64_t rcx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            int64_t r8_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            int32_t temp0_74 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            zmm5[0].o = zx.o(*(r15_1 + &data_143442980))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r13_1 + &data_143442980), 1)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rdi_3 + &data_143442980), 2)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_5 + &data_143442980), 3)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_22 + &data_143442980), 4)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rcx_8 + &data_143442980), 5)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r8_1 + &data_143442980), 6)
            zmm5[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(sx.q(temp0_74) + &data_143442980), 7)
            arg9 = _mm256_cvtepu8_epi32(zmm5[0].q)
            var_720 = arg10
            arg12 = _mm256_cmpeq_epi32(arg10, arg8)
            arg10 = arg12 & not.32(arg15)
            zmm5[0].o = _mm256_extracti128_si256(arg10, 1)
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            char temp0_87 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o)
            zmm5[0].o = zx.o(0)
            
            if (temp0_87 != 0)
                zmm5 = arg10 & arg9
            
            float var_8e0_1[0x8] = _mm256_cvtepi32_epi64(zmm0[0].o)
            float var_880_1[0x8] = _mm256_cvtepi32_epi64(zmm2[0].o)
            arg10 = _mm256_blendv_ps(var_300, arg5, arg15)
            zmm0 = arg14 & not.32(temp0_61)
            zmm1 = arg14 & not.32(arg12)
            arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
            int32_t var_540[0x4] = arg5[0].o
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            char temp0_94 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
            arg6 = _mm256_broadcast_ss(1.40129846e-45f)
            float var_900_1[0x8] = arg14
            var_6c0 = zmm1
            
            if (temp0_94 == 0)
                arg5[0].o = zx.o(0)
            else
                arg5 = zmm1 & arg9
                zmm5 = _mm256_blendv_ps(zmm5, arg6, zmm1)
            
            zmm2 = _mm256_madd_epi16(arg5, arg14 & not.32(var_760_1))
            zmm0 = _mm256_mullo_epi32(zmm5, zmm0)
            arg14 = __vpaddq_ymmqq_ymmqq_memqq(var_140_1, var_880_1)
            uint32_t var_500[0x8]
            arg5 = _mm256_blendv_ps(var_500, zmm0, arg15)
            var_500 = arg5
            arg11 = _mm256_blendv_ps(arg11, zmm2, arg15)
            float var_840_1[0x8] = __vpaddq_ymmqq_ymmqq_memqq(var_140_1, var_8e0_1)
            zmm0 = var_900_1 & not.32(_mm256_cmpgt_epi32(arg10, arg6))
            zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            uint32_t var_980_1[0x8] = arg15
            float var_8a0_1[0x8] = arg12
            float var_7a0_1[0x8] = arg14
            float var_8c0_1[0x8] = arg11
            var_300 = arg10
            float var_960_1[0x8]
            int128_t var_860
            float var_800[0x8]
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) == 0)
                arg9[0].o = zx.o(0)
                zmm0[0].o = zx.o(0)
                var_960_1 = zmm0
            else
                float var_7c0_1[0x8] = arg6
                zmm1 = __vpbroadcastd_ymmqq_memd(8)
                zmm2 = zmm1 & var_940
                zmm1[0].o = zx.o(0)
                zmm1 = _mm256_cmpeq_epi32(zmm2, zmm1)
                arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                arg6[0].o = zmm1[0].o & zmm0[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                    arg16[0].o = zx.o(0)
                    arg9[0].o = zx.o(0)
                    zmm1[0].o = zx.o(0)
                    var_860.32 = zmm1
                    zmm1[0].o = zx.o(0)
                    var_960_1 = zmm1
                    arg5[0].o = zx.o(0)
                else
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    zmm1[0].o = zx.o(arg18)
                    
                    if (zx.o(0) f>= zmm1[0])
                        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                        arg16[0].o = zx.o(0)
                        arg9[0].o = zx.o(0)
                        zmm1[0].o = zx.o(0)
                        var_860.32 = zmm1
                        zmm1[0].o = zx.o(0)
                        var_960_1 = zmm1
                    else
                        bool cond:6_1 = zmm1[0].o f>= 1f
                        arg14 = arg10
                        arg10 = _mm256_add_epi32(arg10, arg16)
                        
                        if (cond:6_1)
                            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                            zmm1 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f) & arg10
                            arg9 = zmm1
                            var_860.32 = zmm1
                            arg16 = zmm1
                            var_960_1 = zmm1
                            arg10 = arg14
                        else
                            arg11 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg10), var_2c0_1)
                            arg12 = _mm256_round_ps(arg11, 9)
                            zmm1 = _mm256_min_epi32(arg10, _mm256_cvttps_epi32(arg12))
                            arg5 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
                            arg9 = arg5 & zmm1
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            
                            if (arg19 != 1)
                                zmm5 = _mm256_sub_ps(arg11, arg12)
                            
                            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                            zmm1 = arg5 & _mm256_min_epi32(_mm256_sub_epi32(arg9, arg16), arg10)
                            arg16 = arg9
                            var_860.32 = zmm1
                            var_960_1 = zmm1
                            arg11 = var_8c0_1
                            arg10 = arg14
                            arg12 = var_8a0_1
                        
                        arg14 = var_7a0_1
                    
                    arg5 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f) & zmm5
                
                arg6 = var_7c0_1
                zmm1 = _mm256_cmpeq_epi32(zmm2, arg7) ^ arg8
                zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                zmm0[0].o &= zmm1[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    var_780 = arg5
                    arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                else
                    zmm0 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f)
                    var_800 = zmm0
                    zmm0 = _mm256_srai_epi32(zmm0, 0x1f)
                    zmm1 = _mm256_cmpgt_epi32(__vpbroadcastd_ymmqq_memd(2), arg10)
                    zmm5 = zmm1 | var_160_1
                    zmm2 = zmm5 & zmm0
                    
                    if (_mm256_movemask_ps(zmm2) != 0)
                        arg9 = _mm256_blendv_ps(arg16, arg7, zmm2)
                        zmm1 = _mm256_blendv_ps(var_860.32, arg7, zmm2)
                        arg16 = arg9
                        var_860.32 = zmm1
                        var_960_1 = zmm1
                    
                    zmm0 = zmm5 & not.32(zmm0)
                    int32_t temp0_155 = _mm256_movemask_ps(zmm0)
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    
                    if (temp0_155 == 0)
                        zmm5 = var_800
                        arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                    else
                        arg8 = _mm256_add_epi32(arg10, arg8)
                        zmm1[0].o = arg18
                        
                        if (zmm1[0].o f>= 1f)
                            arg9 = _mm256_blendv_ps(arg16, arg8, zmm0)
                            zmm0 = _mm256_blendv_ps(var_860.32, arg8, zmm0)
                            var_960_1 = zmm0
                            zmm5 = var_800
                            arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                        else
                            int32_t var_820_1[0x8] = zmm5
                            uint32_t var_780_1[0x8] = arg5
                            zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            zmm2 = __vpmulld_ymmqq_ymmqq_memqq(arg10, var_500)
                            arg5 = _mm256_cvtepi32_epi64(arg11[0].o)
                            arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                            arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg5, var_840_1)
                            zmm1 = _mm256_add_epi64(arg14, zmm1)
                            zmm5 = __vpbroadcastq_ymmqq_memq(3)
                            zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                            arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                            zmm2 = _mm256_add_epi64(zmm2, _mm256_add_epi64(arg5, zmm5))
                            zmm1 = _mm256_add_epi64(arg6, _mm256_add_epi64(zmm1, zmm5))
                            arg5 = __vpbroadcastq_ymmqq_memq(-4)
                            arg12 = zmm1 & arg5
                            arg14 = zmm2 & arg5
                            arg15 = _mm256_min_epi32(
                                _mm256_max_epi32(
                                    _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepi32_ps(arg8), var_2c0_1)), 
                                    arg7), 
                                arg8)
                            float var_960_2[0x8] = arg8
                            uint32_t var_920_1[0x8] = arg15
                            
                            if (arg17 s< 0x100)
                                zmm1 = _mm256_cvtepi32_epi64(arg15[0].o)
                                zmm2 = _mm256_add_epi64(arg14, zmm1)
                                char r15_2 = temp0_155.b
                                int128_t var_2d0
                                arg5[0].o = var_2d0
                                
                                if ((r15_2 & 1) == 0)
                                    arg9 = arg16
                                    zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                                    
                                    if ((r15_2 & 2) != 0)
                                        goto label_1401877fe
                                    
                                    goto label_14018729e
                                
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm2[0].q), 0)
                                arg9 = arg16
                                zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                                
                                if ((r15_2 & 2) != 0)
                                label_1401877fe:
                                    uint32_t rax_66 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_66, 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                    
                                    if ((r15_2 & 4) == 0)
                                        goto label_1401872ae
                                    
                                    goto label_140187816
                                
                            label_14018729e:
                                arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                
                                if ((r15_2 & 4) == 0)
                                label_1401872ae:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((r15_2 & 8) != 0)
                                        goto label_140187838
                                    
                                    goto label_1401872bd
                                
                            label_140187816:
                                zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm1[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((r15_2 & 8) != 0)
                                label_140187838:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    uint32_t rax_70 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_70, 3)
                                    zmm2 = _mm256_add_epi64(arg12, arg6)
                                    
                                    if ((r15_2 & 0x10) == 0)
                                        goto label_1401872cb
                                    
                                    goto label_140187862
                                
                            label_1401872bd:
                                zmm2 = _mm256_add_epi64(arg12, arg6)
                                
                                if ((r15_2 & 0x10) == 0)
                                label_1401872cb:
                                    
                                    if ((r15_2 & 0x20) != 0)
                                        goto label_140187877
                                    
                                    goto label_1401872d5
                                
                            label_140187862:
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm2[0].q), 4)
                                
                                if ((r15_2 & 0x20) != 0)
                                label_140187877:
                                    uint32_t rax_74 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_74, 5)
                                    
                                    if ((r15_2 & 0x40) == 0)
                                        goto label_1401872df
                                    
                                    goto label_140187889
                                
                            label_1401872d5:
                                
                                if ((r15_2 & 0x40) != 0)
                                label_140187889:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_155.b s< 0)
                                    label_1401878a4:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint32_t rax_78 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_78, 7)
                                else
                                label_1401872df:
                                    
                                    if (temp0_155.b s< 0)
                                        goto label_1401878a4
                                
                                var_2d0 = arg5[0].o
                                zmm1[0].o = arg5[0].o & data_142fc92e0
                                arg5 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepu16_epi32(zmm1[0].o), var_740_1)
                                zmm2 = arg5 ^ zmm5
                                float var_7e0_1[0x8] = zmm2
                                int128_t var_510
                                
                                if (_mm256_movemask_ps(arg5 & not.32(zmm0)) == 0)
                                    zmm2 = arg15
                                    arg5[0].o = var_510
                                else
                                    zmm2 = _mm256_blendv_ps(arg15, arg8, zmm2)
                                    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                                    arg16 = _mm256_sub_epi32(arg15, arg6)
                                    arg10 = arg5 & not.32(_mm256_cmpgt_epi32(arg16, arg8) ^ arg6)
                                    arg6 = zmm0 & arg10
                                    int32_t i_5 = _mm256_movemask_ps(arg6)
                                    
                                    if (i_5 == 0)
                                        arg5[0].o = var_510
                                    else
                                        arg5[0].o = var_510
                                        
                                        do
                                            arg11 = arg16
                                            zmm1 = _mm256_cvtepi32_epi64(arg11[0].o)
                                            arg16 = _mm256_add_epi64(arg14, zmm1)
                                            char temp0_219 = _mm256_movemask_ps(arg6)
                                            
                                            if ((temp0_219 & 1) == 0)
                                                if ((temp0_219 & 2) != 0)
                                                    goto label_14018737d
                                                
                                                goto label_140187466
                                            
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, zx.d(*arg16[0].q), 0)
                                            
                                            if ((temp0_219 & 2) != 0)
                                            label_14018737d:
                                                uint32_t rax_35 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1))
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, rax_35, 1)
                                                arg6[0].o = _mm256_extracti128_si256(arg11, 1)
                                                
                                                if ((temp0_219 & 4) == 0)
                                                    goto label_140187476
                                                
                                                goto label_140187395
                                            
                                        label_140187466:
                                            arg6[0].o = _mm256_extracti128_si256(arg11, 1)
                                            
                                            if ((temp0_219 & 4) == 0)
                                            label_140187476:
                                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                                
                                                if ((temp0_219 & 8) != 0)
                                                    goto label_1401873b7
                                                
                                                goto label_140187485
                                            
                                        label_140187395:
                                            zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, zx.d(*zmm1[0].q), 2)
                                            arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                            
                                            if ((temp0_219 & 8) != 0)
                                            label_1401873b7:
                                                zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                                uint32_t rax_39 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, rax_39, 3)
                                                arg16 = _mm256_add_epi64(arg12, arg6)
                                                
                                                if ((temp0_219 & 0x10) == 0)
                                                    goto label_140187493
                                                
                                                goto label_1401873e1
                                            
                                        label_140187485:
                                            arg16 = _mm256_add_epi64(arg12, arg6)
                                            
                                            if ((temp0_219 & 0x10) == 0)
                                            label_140187493:
                                                
                                                if ((temp0_219 & 0x20) != 0)
                                                    goto label_1401873f6
                                                
                                                goto label_14018749d
                                            
                                        label_1401873e1:
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, zx.d(*arg16[0].q), 4)
                                            
                                            if ((temp0_219 & 0x20) != 0)
                                            label_1401873f6:
                                                uint32_t rax_43 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1))
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, rax_43, 5)
                                                
                                                if ((temp0_219 & 0x40) == 0)
                                                    goto label_1401874a7
                                                
                                                goto label_140187408
                                            
                                        label_14018749d:
                                            
                                            if ((temp0_219 & 0x40) != 0)
                                            label_140187408:
                                                zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, zx.d(*zmm1[0].q), 6)
                                                
                                                if (temp0_219 s< 0)
                                                label_140187424:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                                    uint32_t rax_47 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg5[0].o, rax_47, 7)
                                            else
                                            label_1401874a7:
                                                
                                                if (temp0_219 s< 0)
                                                    goto label_140187424
                                            
                                            zmm5[0].o = arg5[0].o
                                            zmm1[0].o = arg5[0].o & data_142fc92e0
                                            arg6 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                                _mm256_cvtepu16_epi32(zmm1[0].o), var_740_1) & arg10
                                            arg5[0].o = zx.o(0)
                                            zmm1 = arg6 & zmm0
                                            
                                            if (_mm256_movemask_ps(zmm1) != i_5)
                                                arg5 = arg6 ^ arg10
                                            
                                            zmm2 = _mm256_blendv_ps(zmm2, arg15, arg6)
                                            arg16 = _mm256_sub_epi32(arg11, 
                                                _mm256_cmpeq_epi32(zmm1, zmm1))
                                            arg10 = _mm256_cmpgt_epi32(arg16, arg8) & not.32(arg5)
                                            arg6 = arg10 & zmm0
                                            i_5 = _mm256_movemask_ps(arg6)
                                            arg15 = arg11
                                            arg5[0].o = zmm5[0].o
                                        while (i_5 != 0)
                                
                                var_510 = arg5[0].o
                                arg5 = var_7e0_1
                                int32_t temp0_301 = _mm256_movemask_ps(_mm256_andnot_ps(arg5, zmm0))
                                arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                                
                                if (temp0_301 != 0)
                                    zmm1 = _mm256_xor_ps(arg5, arg16)
                                    zmm2 = _mm256_blendv_ps(zmm2, arg7, zmm1)
                                    arg6 = __vpaddd_ymmqq_ymmqq_memqq(arg16, var_920_1)
                                    arg5 = _mm256_cmpgt_epi32(arg6, arg7)
                                    zmm5 = arg5 & zmm1
                                    arg11 = zmm5 & zmm0
                                    int32_t i_6 = _mm256_movemask_ps(arg11)
                                    
                                    if (i_6 != 0)
                                        do
                                            zmm1 = _mm256_cvtepi32_epi64(arg6[0].o)
                                            arg10 = _mm256_add_epi64(arg14, zmm1)
                                            char temp0_322 = _mm256_movemask_ps(arg11)
                                            int128_t var_3b0
                                            uint16_t rax_99[0x2]
                                            
                                            if ((temp0_322 & 1) != 0)
                                                arg8[0].o = var_3b0
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg8[0].o, zx.d(*arg10[0].q), 0)
                                                
                                                if ((temp0_322 & 2) != 0)
                                                    rax_99 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg8[0].o, rax_99, 1)
                                            else
                                                arg8[0].o = var_3b0
                                                
                                                if ((temp0_322 & 2) != 0)
                                                    rax_99 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg8[0].o, rax_99, 1)
                                            arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                            
                                            if ((temp0_322 & 4) == 0)
                                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                                
                                                if ((temp0_322 & 8) != 0)
                                                    goto label_1401879a2
                                                
                                                goto label_140187aa9
                                            
                                            zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, zx.d(*zmm1[0].q), 2)
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_322 & 8) != 0)
                                            label_1401879a2:
                                                zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                                uint16_t rax_87[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg8[0].o, rax_87, 3)
                                                arg10 = _mm256_add_epi64(arg12, arg5)
                                                
                                                if ((temp0_322 & 0x10) == 0)
                                                    goto label_140187ab7
                                                
                                                goto label_1401879cc
                                            
                                        label_140187aa9:
                                            arg10 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_322 & 0x10) == 0)
                                            label_140187ab7:
                                                
                                                if ((temp0_322 & 0x20) != 0)
                                                    goto label_1401879e1
                                                
                                                goto label_140187ac1
                                            
                                        label_1401879cc:
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, zx.d(*arg10[0].q), 4)
                                            
                                            if ((temp0_322 & 0x20) != 0)
                                            label_1401879e1:
                                                uint16_t rax_91[0x2] = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg8[0].o, rax_91, 5)
                                                
                                                if ((temp0_322 & 0x40) == 0)
                                                    goto label_140187acb
                                                
                                                goto label_1401879f3
                                            
                                        label_140187ac1:
                                            
                                            if ((temp0_322 & 0x40) != 0)
                                            label_1401879f3:
                                                zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg8[0].o, zx.d(*zmm1[0].q), 6)
                                                
                                                if (temp0_322 s< 0)
                                                label_140187a0f:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                                    uint16_t rax_95[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg8[0].o, rax_95, 7)
                                            else
                                            label_140187acb:
                                                
                                                if (temp0_322 s< 0)
                                                    goto label_140187a0f
                                            
                                            var_3b0 = arg8[0].o
                                            zmm1[0].o = arg8[0].o & data_142fc92e0
                                            arg10 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                                _mm256_cvtepu16_epi32(zmm1[0].o), var_740_1)
                                                & not.32(zmm5)
                                            arg5[0].o = zx.o(0)
                                            int32_t temp0_330 = _mm256_movemask_ps(arg10 & zmm0)
                                            arg11[0].o = zx.o(0)
                                            
                                            if (temp0_330 != i_6)
                                                arg11 = arg10 ^ zmm5
                                            
                                            zmm2 = _mm256_blendv_ps(zmm2, arg6, arg10)
                                            arg6 = _mm256_add_epi32(arg6, arg16)
                                            zmm5 = _mm256_cmpgt_epi32(arg6, arg5) & arg11
                                            arg11 = zmm5 & zmm0
                                            i_6 = _mm256_movemask_ps(arg11)
                                        while (i_6 != 0)
                                
                                int128_t var_400
                                arg6[0].o = var_400
                                arg9 = _mm256_blendv_ps(arg9, zmm2, zmm0)
                                zmm1 = _mm256_cvtepi32_epi64(arg9[0].o)
                                zmm2 = _mm256_add_epi64(arg14, zmm1)
                                
                                if ((r15_2 & 1) != 0)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm2[0].q), 0)
                                
                                arg11 = var_8c0_1
                                arg15 = var_980_1
                                zmm5 = var_800
                                
                                if ((r15_2 & 2) == 0)
                                    arg5[0].o = _mm256_extracti128_si256(arg9, 1)
                                    
                                    if ((r15_2 & 4) != 0)
                                        goto label_140187d09
                                    
                                    goto label_140187b91
                                
                                uint32_t rax_109 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_109, 1)
                                arg5[0].o = _mm256_extracti128_si256(arg9, 1)
                                
                                if ((r15_2 & 4) != 0)
                                label_140187d09:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm1[0].q), 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((r15_2 & 8) == 0)
                                        goto label_140187ba0
                                    
                                    goto label_140187d2b
                                
                            label_140187b91:
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((r15_2 & 8) == 0)
                                label_140187ba0:
                                    zmm2 = _mm256_add_epi64(arg12, arg5)
                                    
                                    if ((r15_2 & 0x10) != 0)
                                        goto label_140187d55
                                    
                                    goto label_140187bae
                                
                            label_140187d2b:
                                zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                uint32_t rax_113 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_113, 3)
                                zmm2 = _mm256_add_epi64(arg12, arg5)
                                int128_t var_420
                                
                                if ((r15_2 & 0x10) != 0)
                                label_140187d55:
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm2[0].q), 4)
                                    arg5[0].o = var_420
                                    
                                    if ((r15_2 & 0x20) == 0)
                                        goto label_140187bc1
                                    
                                    goto label_140187d73
                                
                            label_140187bae:
                                arg5[0].o = var_420
                                
                                if ((r15_2 & 0x20) == 0)
                                label_140187bc1:
                                    
                                    if ((r15_2 & 0x40) != 0)
                                        goto label_140187d85
                                    
                                    goto label_140187bcb
                                
                            label_140187d73:
                                uint32_t rax_117 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_117, 5)
                                
                                if ((r15_2 & 0x40) == 0)
                                label_140187bcb:
                                    
                                    if (temp0_155.b s< 0)
                                    label_140187da0:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint32_t rax_121 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_121, 7)
                                else
                                label_140187d85:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_155.b s< 0)
                                        goto label_140187da0
                                
                                arg8 = _mm256_blendv_ps(var_860.32, _mm256_sub_epi32(arg9, arg16), 
                                    zmm0)
                                zmm1 = _mm256_cmpgt_epi32(arg8, var_960_2)
                                zmm0 &= zmm1
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    arg8 = _mm256_blendv_ps(arg8, var_960_2, zmm0)
                                
                                zmm0 = _mm256_add_epi64(arg14, _mm256_cvtepi32_epi64(arg8[0].o))
                                
                                if ((r15_2 & 1) == 0)
                                    arg14 = var_7a0_1
                                    
                                    if ((r15_2 & 2) != 0)
                                        goto label_140187ddf
                                    
                                    goto label_140187c29
                                
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm0[0].q), 0)
                                arg14 = var_7a0_1
                                
                                if ((r15_2 & 2) != 0)
                                label_140187ddf:
                                    uint32_t rax_125 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_125, 1)
                                    var_960_2[0].o = _mm256_extracti128_si256(arg8, 1)
                                    
                                    if ((r15_2 & 4) == 0)
                                        goto label_140187c39
                                    
                                    goto label_140187df7
                                
                            label_140187c29:
                                var_960_2[0].o = _mm256_extracti128_si256(arg8, 1)
                                
                                if ((r15_2 & 4) == 0)
                                label_140187c39:
                                    zmm2 = _mm256_cvtepi32_epi64(var_960_2[0].o)
                                    
                                    if ((r15_2 & 8) != 0)
                                        goto label_140187e19
                                    
                                    goto label_140187c48
                                
                            label_140187df7:
                                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm1[0].q), 2)
                                zmm2 = _mm256_cvtepi32_epi64(var_960_2[0].o)
                                
                                if ((r15_2 & 8) != 0)
                                label_140187e19:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint32_t rax_129 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_129, 3)
                                    zmm0 = _mm256_add_epi64(arg12, zmm2)
                                    
                                    if ((r15_2 & 0x10) == 0)
                                        goto label_140187c56
                                    
                                    goto label_140187e43
                                
                            label_140187c48:
                                zmm0 = _mm256_add_epi64(arg12, zmm2)
                                
                                if ((r15_2 & 0x10) == 0)
                                label_140187c56:
                                    arg12 = var_8a0_1
                                    
                                    if ((r15_2 & 0x20) != 0)
                                        goto label_140187e61
                                    
                                    goto label_140187c69
                                
                            label_140187e43:
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm0[0].q), 4)
                                arg12 = var_8a0_1
                                
                                if ((r15_2 & 0x20) == 0)
                                label_140187c69:
                                    
                                    if ((r15_2 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                            zx.d(*zmm1[0].q), 6)
                                else
                                label_140187e61:
                                    uint32_t rax_133 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_133, 5)
                                    
                                    if ((r15_2 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                            zx.d(*zmm1[0].q), 6)
                                
                                zmm2[0].o = arg6[0].o & data_142fc92e0
                                var_400 = arg6[0].o
                                var_960_1 = arg8
                                
                                if (temp0_155.b s< 0)
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint32_t rax_107 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_107, 7)
                                
                                zmm0 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                var_420 = arg5[0].o
                                zmm1[0].o = arg5[0].o & data_142fc92e0
                                zmm2 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                arg6 = __vxorps_ymmqq_ymmqq_memqq(arg16, var_820_1)
                                arg5[0].o = zx.o(0)
                                
                                if (arg19 != 1)
                                    goto label_140188242
                            else
                                arg6 = _mm256_add_epi32(arg15, arg15)
                                zmm1 = _mm256_cvtepi32_epi64(arg6[0].o)
                                zmm2 = _mm256_add_epi64(arg14, zmm1)
                                char rdi_4 = temp0_155.b
                                arg9 = arg16
                                
                                if ((rdi_4 & 1) == 0)
                                    zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                                    
                                    if ((rdi_4 & 2) != 0)
                                        goto label_140187542
                                    
                                    goto label_1401871fe
                                
                                int128_t var_6d0
                                zmm1[0].o = var_6d0
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 0)
                                var_6d0 = zmm1[0].o
                                zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                                
                                if ((rdi_4 & 2) != 0)
                                label_140187542:
                                    int64_t rax_50 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o = var_6d0
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_50, 1)
                                    var_6d0 = zmm1[0].o
                                    arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((rdi_4 & 4) == 0)
                                        goto label_14018720e
                                    
                                    goto label_14018756f
                                
                            label_1401871fe:
                                arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                
                                if ((rdi_4 & 4) != 0)
                                label_14018756f:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg6[0].o = var_6d0
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                    label_140187593:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_52 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_52, 3)
                                else
                                label_14018720e:
                                    arg6[0].o = var_6d0
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                        goto label_140187593
                                
                                zmm2 = _mm256_add_epi64(arg12, arg5)
                                
                                if ((rdi_4 & 0x10) == 0)
                                    if ((rdi_4 & 0x20) != 0)
                                        goto label_1401878d1
                                    
                                    goto label_1401875bc
                                
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 4)
                                
                                if ((rdi_4 & 0x20) != 0)
                                label_1401878d1:
                                    int64_t rax_80 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_80, 5)
                                    
                                    if ((rdi_4 & 0x40) == 0)
                                        goto label_1401875c6
                                    
                                    goto label_1401878e6
                                
                            label_1401875bc:
                                
                                if ((rdi_4 & 0x40) != 0)
                                label_1401878e6:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_155.b s< 0)
                                    label_1401878fe:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_82 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_82, 7)
                                else
                                label_1401875c6:
                                    
                                    if (temp0_155.b s< 0)
                                        goto label_1401878fe
                                
                                arg5 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepu16_epi32(arg6[0].o), var_740_1)
                                zmm2 = arg5 ^ zmm5
                                bool cond:22_1 = _mm256_movemask_ps(arg5 & not.32(zmm0)) == 0
                                var_6d0 = arg6[0].o
                                float var_7e0_2[0x8] = zmm2
                                
                                if (cond:22_1)
                                    zmm2 = arg15
                                else
                                    zmm2 = _mm256_blendv_ps(arg15, arg8, zmm2)
                                    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                                    arg16 = _mm256_sub_epi32(arg15, arg6)
                                    arg10 = arg5 & not.32(_mm256_cmpgt_epi32(arg16, arg8) ^ arg6)
                                    arg6 = zmm0 & arg10
                                    int32_t i_7 = _mm256_movemask_ps(arg6)
                                    
                                    if (i_7 != 0)
                                        do
                                            arg11 = arg16
                                            zmm5 = _mm256_add_epi32(arg16, arg16)
                                            zmm1 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            arg16 = _mm256_add_epi64(arg14, zmm1)
                                            char temp0_264 = _mm256_movemask_ps(arg6)
                                            int128_t var_390
                                            int64_t rax_61
                                            
                                            if ((temp0_264 & 1) != 0)
                                                arg6[0].o = var_390
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *arg16[0].q, 0)
                                                
                                                if ((temp0_264 & 2) != 0)
                                                    rax_61 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_61, 1)
                                            else
                                                arg6[0].o = var_390
                                                
                                                if ((temp0_264 & 2) != 0)
                                                    rax_61 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_61, 1)
                                            arg5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                            
                                            if ((temp0_264 & 4) == 0)
                                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                                
                                                if ((temp0_264 & 8) != 0)
                                                    goto label_14018765e
                                                
                                                goto label_140187750
                                            
                                            zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *zmm1[0].q, 2)
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_264 & 8) != 0)
                                            label_14018765e:
                                                zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                                int64_t rax_55 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *rax_55, 3)
                                                arg16 = _mm256_add_epi64(arg12, arg5)
                                                
                                                if ((temp0_264 & 0x10) == 0)
                                                    goto label_14018775d
                                                
                                                goto label_140187681
                                            
                                        label_140187750:
                                            arg16 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_264 & 0x10) == 0)
                                            label_14018775d:
                                                
                                                if ((temp0_264 & 0x20) != 0)
                                                    goto label_14018768f
                                                
                                                goto label_140187766
                                            
                                        label_140187681:
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *arg16[0].q, 4)
                                            
                                            if ((temp0_264 & 0x20) != 0)
                                            label_14018768f:
                                                int64_t rax_57 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *rax_57, 5)
                                                
                                                if ((temp0_264 & 0x40) == 0)
                                                    goto label_14018776f
                                                
                                                goto label_1401876a3
                                            
                                        label_140187766:
                                            
                                            if ((temp0_264 & 0x40) != 0)
                                            label_1401876a3:
                                                zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *zmm1[0].q, 6)
                                                
                                                if (temp0_264 s< 0)
                                                label_1401876bb:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                                    int64_t rax_59 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_59, 7)
                                            else
                                            label_14018776f:
                                                
                                                if (temp0_264 s< 0)
                                                    goto label_1401876bb
                                            
                                            var_390 = arg6[0].o
                                            arg6 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                                _mm256_cvtepu16_epi32(arg6[0].o), var_740_1) & arg10
                                            arg5[0].o = zx.o(0)
                                            zmm1 = arg6 & zmm0
                                            
                                            if (_mm256_movemask_ps(zmm1) != i_7)
                                                arg5 = arg6 ^ arg10
                                            
                                            zmm2 = _mm256_blendv_ps(zmm2, arg15, arg6)
                                            arg16 = _mm256_sub_epi32(arg11, 
                                                _mm256_cmpeq_epi32(zmm1, zmm1))
                                            arg10 = _mm256_cmpgt_epi32(arg16, arg8) & not.32(arg5)
                                            arg6 = arg10 & zmm0
                                            i_7 = _mm256_movemask_ps(arg6)
                                            arg15 = arg11
                                        while (i_7 != 0)
                                
                                arg5 = var_7e0_2
                                int32_t temp0_385 = _mm256_movemask_ps(_mm256_andnot_ps(arg5, zmm0))
                                arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                                
                                if (temp0_385 != 0)
                                    zmm1 = _mm256_xor_ps(arg5, arg16)
                                    zmm2 = _mm256_blendv_ps(zmm2, arg7, zmm1)
                                    arg6 = __vpaddd_ymmqq_ymmqq_memqq(arg16, var_920_1)
                                    arg5 = _mm256_cmpgt_epi32(arg6, arg7)
                                    zmm5 = arg5 & zmm1
                                    arg11 = zmm5 & zmm0
                                    int32_t i_8 = _mm256_movemask_ps(arg11)
                                    
                                    if (i_8 != 0)
                                        do
                                            arg15 = _mm256_add_epi32(arg6, arg6)
                                            zmm1 = _mm256_cvtepi32_epi64(arg15[0].o)
                                            arg10 = _mm256_add_epi64(arg14, zmm1)
                                            char temp0_407 = _mm256_movemask_ps(arg11)
                                            int128_t var_3a0
                                            uint16_t* rax_142
                                            
                                            if ((temp0_407 & 1) != 0)
                                                arg8[0].o = var_3a0
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg8[0].o, *arg10[0].q, 0)
                                                
                                                if ((temp0_407 & 2) != 0)
                                                    rax_142 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg8[0].o, *rax_142, 1)
                                            else
                                                arg8[0].o = var_3a0
                                                
                                                if ((temp0_407 & 2) != 0)
                                                    rax_142 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg8[0].o, *rax_142, 1)
                                            arg5[0].o = _mm256_extracti128_si256(arg15, 1)
                                            
                                            if ((temp0_407 & 4) == 0)
                                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                                
                                                if ((temp0_407 & 8) != 0)
                                                    goto label_140187eee
                                                
                                                goto label_140187fe0
                                            
                                            zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                                *zmm1[0].q, 2)
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_407 & 8) != 0)
                                            label_140187eee:
                                                zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                                uint16_t* rax_136 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg8[0].o, *rax_136, 3)
                                                arg10 = _mm256_add_epi64(arg12, arg5)
                                                
                                                if ((temp0_407 & 0x10) == 0)
                                                    goto label_140187fed
                                                
                                                goto label_140187f11
                                            
                                        label_140187fe0:
                                            arg10 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_407 & 0x10) == 0)
                                            label_140187fed:
                                                
                                                if ((temp0_407 & 0x20) != 0)
                                                    goto label_140187f1f
                                                
                                                goto label_140187ff6
                                            
                                        label_140187f11:
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                                *arg10[0].q, 4)
                                            
                                            if ((temp0_407 & 0x20) != 0)
                                            label_140187f1f:
                                                uint16_t* rax_138 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg8[0].o, *rax_138, 5)
                                                
                                                if ((temp0_407 & 0x40) == 0)
                                                    goto label_140187fff
                                                
                                                goto label_140187f33
                                            
                                        label_140187ff6:
                                            
                                            if ((temp0_407 & 0x40) != 0)
                                            label_140187f33:
                                                zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg8[0].o, *zmm1[0].q, 6)
                                                
                                                if (temp0_407 s< 0)
                                                label_140187f4b:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                                    uint16_t* rax_140 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg8[0].o, *rax_140, 7)
                                            else
                                            label_140187fff:
                                                
                                                if (temp0_407 s< 0)
                                                    goto label_140187f4b
                                            
                                            var_3a0 = arg8[0].o
                                            arg10 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                                _mm256_cvtepu16_epi32(arg8[0].o), var_740_1)
                                                & not.32(zmm5)
                                            arg5[0].o = zx.o(0)
                                            int32_t temp0_415 = _mm256_movemask_ps(arg10 & zmm0)
                                            arg11[0].o = zx.o(0)
                                            
                                            if (temp0_415 != i_8)
                                                arg11 = arg10 ^ zmm5
                                            
                                            zmm2 = _mm256_blendv_ps(zmm2, arg6, arg10)
                                            arg6 = _mm256_add_epi32(arg6, arg16)
                                            zmm5 = _mm256_cmpgt_epi32(arg6, arg5) & arg11
                                            arg11 = zmm5 & zmm0
                                            i_8 = _mm256_movemask_ps(arg11)
                                        while (i_8 != 0)
                                
                                arg9 = _mm256_blendv_ps(arg9, zmm2, zmm0)
                                arg6 = _mm256_add_epi32(arg9, arg9)
                                zmm1 = _mm256_cvtepi32_epi64(arg6[0].o)
                                zmm2 = _mm256_add_epi64(arg14, zmm1)
                                int128_t var_6e0
                                
                                if ((rdi_4 & 1) != 0)
                                    zmm1[0].o = var_6e0
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 0)
                                    var_6e0 = zmm1[0].o
                                
                                arg11 = var_8c0_1
                                arg15 = var_980_1
                                zmm5 = var_800
                                
                                if ((rdi_4 & 2) != 0)
                                    int64_t rax_145 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o = var_6e0
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_145, 1)
                                    var_6e0 = zmm1[0].o
                                
                                arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                
                                if ((rdi_4 & 4) != 0)
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg6[0].o = var_6e0
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                    label_140188116:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_147 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_147, 3)
                                else
                                    arg6[0].o = var_6e0
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                        goto label_140188116
                                
                                zmm2 = _mm256_add_epi64(arg12, arg5)
                                int128_t var_410
                                
                                if ((rdi_4 & 0x10) == 0)
                                    arg5[0].o = var_410
                                    
                                    if ((rdi_4 & 0x20) != 0)
                                        goto label_140186a57
                                    
                                    goto label_140188148
                                
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 4)
                                arg5[0].o = var_410
                                
                                if ((rdi_4 & 0x20) != 0)
                                label_140186a57:
                                    int64_t rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_8, 5)
                                    
                                    if ((rdi_4 & 0x40) == 0)
                                        goto label_140188152
                                    
                                    goto label_140186a6c
                                
                            label_140188148:
                                
                                if ((rdi_4 & 0x40) != 0)
                                label_140186a6c:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_155.b s< 0)
                                    label_140186a84:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_10 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_10, 7)
                                else
                                label_140188152:
                                    
                                    if (temp0_155.b s< 0)
                                        goto label_140186a84
                                
                                arg8 = _mm256_blendv_ps(var_860.32, _mm256_sub_epi32(arg9, arg16), 
                                    zmm0)
                                zmm1 = _mm256_cmpgt_epi32(arg8, var_960_2)
                                zmm0 &= zmm1
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    arg8 = _mm256_blendv_ps(arg8, var_960_2, zmm0)
                                
                                zmm2 = _mm256_add_epi32(arg8, arg8)
                                zmm0 = _mm256_add_epi64(arg14, _mm256_cvtepi32_epi64(zmm2[0].o))
                                
                                if ((rdi_4 & 1) == 0)
                                    arg14 = var_7a0_1
                                    
                                    if ((rdi_4 & 2) != 0)
                                        goto label_140186ab7
                                    
                                    goto label_1401881b4
                                
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 0)
                                arg14 = var_7a0_1
                                
                                if ((rdi_4 & 2) != 0)
                                label_140186ab7:
                                    int64_t rax_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_12, 1)
                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    
                                    if ((rdi_4 & 4) == 0)
                                        goto label_1401881c4
                                    
                                    goto label_140186ad2
                                
                            label_1401881b4:
                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                
                                if ((rdi_4 & 4) == 0)
                                label_1401881c4:
                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                        goto label_140186af1
                                    
                                    goto label_1401881d3
                                
                            label_140186ad2:
                                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm1[0].q, 2)
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                
                                if ((rdi_4 & 8) != 0)
                                label_140186af1:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    int64_t rax_14 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_14, 3)
                                    zmm0 = _mm256_add_epi64(arg12, zmm2)
                                    
                                    if ((rdi_4 & 0x10) == 0)
                                        goto label_1401881e1
                                    
                                    goto label_140186b15
                                
                            label_1401881d3:
                                zmm0 = _mm256_add_epi64(arg12, zmm2)
                                
                                if ((rdi_4 & 0x10) != 0)
                                label_140186b15:
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 4)
                                    arg12 = var_8a0_1
                                    
                                    if ((rdi_4 & 0x20) != 0)
                                    label_140186b2d:
                                        int64_t rax_16 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_16, 5)
                                        
                                        if ((rdi_4 & 0x40) == 0)
                                            goto label_140188200
                                        
                                        goto label_140186b42
                                else
                                label_1401881e1:
                                    arg12 = var_8a0_1
                                    
                                    if ((rdi_4 & 0x20) != 0)
                                        goto label_140186b2d
                                
                                if ((rdi_4 & 0x40) != 0)
                                label_140186b42:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm1[0].q, 6)
                                    var_960_1 = arg8
                                    
                                    if (temp0_155.b s< 0)
                                    label_140186b60:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_18 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_18, 7)
                                else
                                label_140188200:
                                    var_960_1 = arg8
                                    
                                    if (temp0_155.b s< 0)
                                        goto label_140186b60
                                
                                var_6e0 = arg6[0].o
                                zmm0 = _mm256_cvtepu16_epi32(arg6[0].o)
                                var_410 = arg5[0].o
                                zmm2 = _mm256_cvtepu16_epi32(arg5[0].o)
                                arg6 = __vxorps_ymmqq_ymmqq_memqq(arg16, var_820_1)
                                arg5[0].o = zx.o(0)
                                
                                if (arg19 != 1)
                                label_140188242:
                                    zmm1 = __vpmaxsd_ymmqq_ymmqq_memqq(
                                        _mm256_sub_epi32(zmm2, zmm0), var_7c0_1)
                                    zmm0 = _mm256_sub_ps(var_180_1, _mm256_cvtepi32_ps(zmm0))
                                    arg5 = _mm256_div_ps(zmm0, _mm256_cvtepi32_ps(zmm1))
                            
                            zmm2 = _mm256_blendv_ps(arg7, arg5, arg6)
                            arg5 = var_780_1
                            arg6 = var_7c0_1
                    
                    var_780 = _mm256_blendv_ps(arg5, zmm2, zmm5)
            
            zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            zmm1 = _mm256_cvtepi32_epi64(zmm0[0].o)
            arg5 = _mm256_cvtepi32_epi64(arg11[0].o)
            uint32_t var_320_1[0x8] = arg9
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg9, var_500)
            zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
            arg11 = _mm256_cvtepi32_epi64(zmm2[0].o)
            zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
            var_860.32 = arg5
            int64_t var_920_2[0x4] = zmm0
            zmm0 = _mm256_add_epi64(zmm0, arg5)
            float var_7c0_2[0x8] = zmm1
            zmm2 = _mm256_add_epi64(arg11, zmm1)
            float var_7e0_3[0x8] = _mm256_add_epi64(zmm2, arg14)
            arg10 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_840_1)
            zmm1 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg6, var_720)
            float var_820_2[0x8] = zmm1
            zmm0 = var_900_1 & not.32(zmm1)
            zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg7, var_560)
                arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                arg5[0].o &= zmm0[0].o
                arg6[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                arg6[0].o = __vpsraw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                    arg6 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                    arg5 = __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_880_1)
                    zmm1 = var_860.32
                    arg12 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_8e0_1)
                    arg14 = __vpbroadcastq_ymmqq_memq(4)
                    arg12 = __vpaddq_ymmqq_ymmqq_memqq(arg12, var_920_2)
                    arg5 = _mm256_add_epi64(arg5, arg11)
                    arg15 = _mm256_add_epi64(arg5, arg14)
                    arg14 = _mm256_add_epi64(arg12, arg14)
                    arg8[0].o = _mm256_extracti128_si256(arg6, 1)
                    arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                    arg7[0].o = arg6[0].o
                    float temp0_491[0x4]
                    int32_t temp1_6
                    temp0_491, temp1_6 =
                        _mm256_i64gather_ps(arg16[0].o, *(arg4 + arg14[0].q), arg7[0].o)
                    arg16[0].o = temp0_491
                    arg7[0].o = temp1_6
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    zmm1[0].o = arg8[0].o
                    float temp0_493[0x4]
                    int32_t temp1_7
                    temp0_493, temp1_7 =
                        _mm256_i64gather_ps(arg7[0].o, *(arg4 + arg15[0].q), zmm1[0].o)
                    arg7[0].o = temp0_493
                    zmm1[0].o = temp1_7
                    zmm1 = __vpbroadcastq_ymmqq_memq(8)
                    arg14 = _mm256_add_epi64(arg5, zmm1)
                    zmm1 = _mm256_add_epi64(arg12, zmm1)
                    arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                    zmm5[0].o = arg6[0].o
                    float temp0_498[0x4]
                    int32_t temp1_8
                    temp0_498, temp1_8 =
                        _mm256_i64gather_ps(arg15[0].o, *(arg4 + zmm1[0].q), zmm5[0].o)
                    arg15[0].o = temp0_498
                    zmm5[0].o = temp1_8
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm5[0].o = arg8[0].o
                    float temp0_500[0x4]
                    int32_t temp1_9
                    temp0_500, temp1_9 =
                        _mm256_i64gather_ps(zmm1[0].o, *(arg4 + arg14[0].q), zmm5[0].o)
                    zmm1[0].o = temp0_500
                    zmm5[0].o = temp1_9
                    zmm5 = __vpbroadcastq_ymmqq_memq(0xc)
                    arg12 = _mm256_add_epi64(arg12, zmm5)
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    arg9[0].o = arg6[0].o
                    float temp0_504[0x4]
                    int32_t temp1_10
                    temp0_504, temp1_10 =
                        _mm256_i64gather_ps(arg14[0].o, *(arg4 + arg12[0].q), arg9[0].o)
                    arg14[0].o = temp0_504
                    arg9[0].o = temp1_10
                    arg12 = var_8a0_1
                    arg5 = _mm256_add_epi64(arg5, zmm5)
                    zmm5[0].o = zx.o(0)
                    float temp0_506[0x4]
                    int32_t temp1_11
                    temp0_506, temp1_11 =
                        _mm256_i64gather_ps(zx.o(0), *(arg4 + arg5[0].q), arg8[0].o)
                    zmm5[0].o = temp0_506
                    arg8[0].o = temp1_11
                    arg5 = _mm256_insertf128_ps(arg16, arg7[0].o, 1)
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                    zmm1 = _mm256_insertf128_ps(arg15, zmm1[0].o, 1)
                    arg15 = var_980_1
                    zmm5 = _mm256_insertf128_ps(arg14, zmm5[0].o, 1)
                    arg14 = var_7a0_1
                    var_480.32 = _mm256_maskstore_ps(arg6, arg5)
                    var_460.32 = _mm256_maskstore_ps(arg6, zmm1)
                    var_440.32 = _mm256_maskstore_ps(arg6, zmm5)
                
                zmm2 ^= arg16
                arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                zmm2[0].o &= zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    var_800 = arg11
                    zmm0 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f), 0x1f)
                    arg12 = _mm256_srai_epi32(_mm256_slli_epi32(var_940, 0x1f), 0x1f)
                    arg14 = arg12 & zmm0
                    arg16 = arg10
                    arg6 = var_7e0_3
                    arg11 = arg10
                    arg10 = arg6
                    
                    if (_mm256_movemask_ps(arg14) != 0)
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg9 = _mm256_permutevar8x32_ps(data_143442920, arg14)
                        arg10 = _mm256_permutevar8x32_ps(data_143442940, arg14)
                        zmm5 = _mm256_add_epi64(
                            __vpaddq_ymmqq_ymmqq_memqq(
                                __vpaddq_ymmqq_ymmqq_memqq(var_860.32, var_8e0_1), var_920_2), 
                            zmm1)
                        arg7[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_535[0x4]
                        int32_t temp1_12
                        temp0_535, temp1_12 =
                            _mm256_i64gather_ps(arg8[0].o, *(arg4 + zmm5[0].q), arg14[0].o)
                        arg8[0].o = temp0_535
                        arg14[0].o = temp1_12
                        arg5 = var_7c0_2
                        zmm5 = _mm256_add_epi64(
                            __vpaddq_ymmqq_ymmqq_memqq(__vpaddq_ymmqq_ymmqq_memqq(arg5, var_880_1), 
                                var_800), 
                            zmm1)
                        arg5[0].o = zx.o(0)
                        float temp0_539[0x4]
                        int32_t temp1_13
                        temp0_539, temp1_13 =
                            _mm256_i64gather_ps(zx.o(0), *(arg4 + zmm5[0].q), arg7[0].o)
                        arg5[0].o = temp0_539
                        arg7[0].o = temp1_13
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        zmm5 = _mm256_add_epi64(arg11, zmm1)
                        arg16 = _mm256_blendv_ps(arg11, zmm5, arg9)
                        arg10 = _mm256_blendv_ps(arg6, _mm256_add_epi64(arg6, zmm1), arg10)
                        arg5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                    
                    var_480.32 = _mm256_maskstore_ps(zmm0, _mm256_blendv_ps(arg7, arg5, arg12))
                    zmm1 = __vpbroadcastd_ymmqq_memd(2)
                    arg12 = zmm1 & var_940
                    zmm1 = _mm256_cmpeq_epi32(arg12, zmm1)
                    arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    arg5[0].o = zmm2[0].o & zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                        arg5 = _mm256_permutevar8x32_epi32(data_143442920, zmm1)
                        zmm5 = _mm256_permutevar8x32_epi32(data_143442940, zmm1)
                        arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_563[0x4]
                        int32_t temp1_14
                        temp0_563, temp1_14 = _mm256_i64gather_ps(arg8[0].o, *arg16[0].q, zmm1[0].o)
                        arg8[0].o = temp0_563
                        zmm1[0].o = temp1_14
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg9 = _mm256_add_epi64(arg16, zmm1)
                        arg16 = _mm256_blendv_ps(arg16, arg9, arg5)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_568[0x4]
                        int32_t temp1_15
                        temp0_568, temp1_15 = _mm256_i64gather_ps(arg5[0].o, *arg10[0].q, arg7[0].o)
                        arg5[0].o = temp0_568
                        arg7[0].o = temp1_15
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg10 = _mm256_blendv_ps(arg10, _mm256_add_epi64(arg10, zmm1), zmm5)
                        arg5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                    
                    arg14 = var_7a0_1
                    var_460.32 =
                        _mm256_maskstore_ps(zmm0, _mm256_cmpeq_epi32(arg12, arg7) & not.32(arg5))
                    arg12 = var_760_1 & var_940
                    zmm1 = _mm256_cmpeq_epi32(arg12, var_760_1)
                    arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm2[0].o &= zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f), 0x1f)
                        zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_587[0x4]
                        int32_t temp1_16
                        temp0_587, temp1_16 = _mm256_i64gather_ps(arg5[0].o, *arg16[0].q, zmm1[0].o)
                        arg5[0].o = temp0_587
                        zmm1[0].o = temp1_16
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_589[0x4]
                        int32_t temp1_17
                        temp0_589, temp1_17 = _mm256_i64gather_ps(zmm1[0].o, *arg10[0].q, zmm2[0].o)
                        zmm1[0].o = temp0_589
                        zmm2[0].o = temp1_17
                        arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                    
                    zmm1 = _mm256_cmpeq_epi32(arg12, arg7) & not.32(arg5)
                    var_440.32 = _mm256_maskstore_ps(zmm0, zmm1)
                    arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                    arg12 = var_8a0_1
                    arg10 = arg11
                    arg11 = var_800
            
            zmm0 = arg16 ^ var_820_2
            zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            var_800[0].o = zmm1[0].o
            zmm1 = var_900_1
            zmm0 = zmm1 & not.32(zmm0)
            zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            char temp0_599 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
            char temp0_730
            
            if (temp0_599 != 0)
                zmm1 = var_6c0
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm1[0].o, var_540)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    float var_600_1[0x8] = arg7
                    float var_620_1[0x8] = arg7
                    float var_640_1[0x8] = arg7
                    float var_660_1[0x8] = arg7
                    float var_680_1[0x8] = arg7
                    float var_6a0_1[0x8] = arg7
                    arg6 = arg12 & _mm256_srai_epi32(_mm256_slli_epi32(var_940, 0x1f), 0x1f)
                    arg12 = arg6 & arg15
                    zmm5 = var_840_1
                    zmm0 = zmm5
                    zmm2 = arg14
                    
                    if (_mm256_movemask_ps(arg12) != 0)
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        zmm0 = _mm256_add_epi64(arg14, zmm1)
                        zmm2 = _mm256_add_epi64(zmm5, zmm1)
                        arg5 = data_143442920
                        arg9 = _mm256_permutevar8x32_ps(arg5, arg12)
                        zmm2 = _mm256_blendv_ps(zmm5, zmm2, arg9)
                        arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                        arg7[0].o = arg12[0].o
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_613[0x4]
                        int32_t temp1_18
                        temp0_613, temp1_18 = _mm256_i64gather_ps(arg8[0].o, *zmm5[0].q, arg7[0].o)
                        arg8[0].o = temp0_613
                        arg7[0].o = temp1_18
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        zmm5[0].o = arg5[0].o
                        float temp0_615[0x4]
                        int32_t temp1_19
                        temp0_615, temp1_19 = _mm256_i64gather_ps(arg7[0].o, *arg14[0].q, zmm5[0].o)
                        arg7[0].o = temp0_615
                        zmm5[0].o = temp1_19
                        zmm5 = _mm256_permutevar8x32_ps(data_143442940, arg12)
                        arg14 = _mm256_blendv_ps(var_7a0_1, zmm0, zmm5)
                        var_640_1 =
                            _mm256_maskstore_ps(arg6, _mm256_insertf128_ps(arg8, arg7[0].o, 1))
                        zmm0 = _mm256_blendv_ps(zmm2, _mm256_add_epi64(zmm2, zmm1), arg9)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        float temp0_623[0x4]
                        int32_t temp1_20
                        temp0_623, temp1_20 = _mm256_i64gather_ps(arg7[0].o, *zmm2[0].q, arg12[0].o)
                        arg7[0].o = temp0_623
                        arg12[0].o = temp1_20
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_625[0x4]
                        int32_t temp1_21
                        temp0_625, temp1_21 = _mm256_i64gather_ps(arg8[0].o, *arg14[0].q, arg5[0].o)
                        arg8[0].o = temp0_625
                        arg5[0].o = temp1_21
                        zmm2 = _mm256_blendv_ps(arg14, _mm256_add_epi64(arg14, zmm1), zmm5)
                        arg14 = var_7a0_1
                        var_6a0_1 =
                            _mm256_maskstore_ps(arg6, _mm256_insertf128_ps(arg7, arg8[0].o, 1))
                    
                    zmm1 = __vpbroadcastd_ymmqq_memd(2)
                    arg5 = zmm1 & var_940
                    arg12 = var_8a0_1
                    arg6 = _mm256_cmpeq_epi32(arg5, zmm1) & arg12
                    zmm1 = var_900_1 & not.32(arg6)
                    arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                        arg5 = __vpbroadcastq_ymmqq_memq(4)
                        arg9 = _mm256_add_epi64(zmm2, arg5)
                        arg7 = _mm256_add_epi64(zmm0, arg5)
                        zmm5 = data_143442920
                        arg12 = _mm256_permutevar8x32_epi32(zmm5, zmm1)
                        arg7 = _mm256_blendv_ps(zmm0, arg7, arg12)
                        zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg8[0].o = zmm1[0].o
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                        float temp0_646[0x4]
                        int32_t temp1_22
                        temp0_646, temp1_22 = _mm256_i64gather_ps(arg14[0].o, *zmm0[0].q, arg8[0].o)
                        arg14[0].o = temp0_646
                        arg8[0].o = temp1_22
                        zmm0[0].o = zmm5[0].o
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_648[0x4]
                        int32_t temp1_23
                        temp0_648, temp1_23 = _mm256_i64gather_ps(arg8[0].o, *zmm2[0].q, zmm0[0].o)
                        arg8[0].o = temp0_648
                        zmm0[0].o = temp1_23
                        arg15 = _mm256_permutevar8x32_epi32(data_143442940, zmm1)
                        zmm2 = _mm256_blendv_ps(zmm2, arg9, arg15)
                        zmm0 = _mm256_insertf128_ps(arg14, arg8[0].o, 1)
                        arg14 = var_7a0_1
                        var_620_1 = _mm256_maskstore_ps(arg6, zmm0)
                        zmm0 = _mm256_blendv_ps(arg7, _mm256_add_epi64(arg7, arg5), arg12)
                        arg12 = var_8a0_1
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_656[0x4]
                        int32_t temp1_24
                        temp0_656, temp1_24 = _mm256_i64gather_ps(arg8[0].o, *arg7[0].q, zmm1[0].o)
                        arg8[0].o = temp0_656
                        zmm1[0].o = temp1_24
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_658[0x4]
                        int32_t temp1_25
                        temp0_658, temp1_25 = _mm256_i64gather_ps(zmm1[0].o, *zmm2[0].q, zmm5[0].o)
                        zmm1[0].o = temp0_658
                        zmm5[0].o = temp1_25
                        zmm2 = _mm256_blendv_ps(zmm2, _mm256_add_epi64(zmm2, arg5), arg15)
                        arg15 = var_980_1
                        var_680_1 =
                            _mm256_maskstore_ps(arg6, _mm256_insertf128_ps(arg8, zmm1[0].o, 1))
                    
                    arg5 = var_760_1
                    arg6 = _mm256_cmpeq_epi32(arg5 & var_940, arg5) & arg12
                    zmm1 = var_900_1 & not.32(arg6)
                    arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                        arg5 = __vpbroadcastq_ymmqq_memq(4)
                        zmm5 = _mm256_add_epi64(zmm2, arg5)
                        arg5 = _mm256_add_epi64(zmm0, arg5)
                        arg7 = _mm256_permutevar8x32_epi32(data_143442920, zmm1)
                        arg9 = _mm256_blendv_ps(zmm0, arg5, arg7)
                        arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        arg5[0].o = zmm1[0].o
                        float temp0_678[0x4]
                        int32_t temp1_26
                        temp0_678, temp1_26 = _mm256_i64gather_ps(arg8[0].o, *zmm0[0].q, arg5[0].o)
                        arg8[0].o = temp0_678
                        arg5[0].o = temp1_26
                        zmm0[0].o = arg7[0].o
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_680[0x4]
                        int32_t temp1_27
                        temp0_680, temp1_27 = _mm256_i64gather_ps(arg5[0].o, *zmm2[0].q, zmm0[0].o)
                        arg5[0].o = temp0_680
                        zmm0[0].o = temp1_27
                        zmm0 = _mm256_blendv_ps(zmm2, zmm5, 
                            _mm256_permutevar8x32_epi32(data_143442940, zmm1))
                        zmm2 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                        var_600_1 = _mm256_maskstore_ps(arg6, zmm2)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        float temp0_686[0x4]
                        int32_t temp1_28
                        temp0_686, temp1_28 = _mm256_i64gather_ps(zmm2[0].o, *arg9[0].q, zmm1[0].o)
                        zmm2[0].o = temp0_686
                        zmm1[0].o = temp1_28
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_688[0x4]
                        int32_t temp1_29
                        temp0_688, temp1_29 = _mm256_i64gather_ps(zmm1[0].o, *zmm0[0].q, arg7[0].o)
                        zmm1[0].o = temp0_688
                        arg7[0].o = temp1_29
                        var_660_1 =
                            _mm256_maskstore_ps(arg6, _mm256_insertf128_ps(zmm2, zmm1[0].o, 1))
                    
                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_880_1)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_860.32, var_8e0_1)
                    zmm2 = __vpbroadcastq_ymmqq_memq(4)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_920_2)
                    zmm0 = _mm256_add_epi64(zmm0, arg11)
                    zmm1 = _mm256_add_epi64(zmm1, zmm2)
                    arg8 = var_6c0
                    arg5[0].o = arg8[0].o
                    arg6[0].o = zx.o(0)
                    uint32_t temp0_697[0x4]
                    int32_t temp1_30
                    temp0_697, temp1_30 =
                        _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm1[0].q), arg5[0].o)
                    arg6[0].o = temp0_697
                    arg5[0].o = temp1_30
                    zmm0 = _mm256_add_epi64(zmm0, zmm2)
                    zmm1[0].o = zx.o(0)
                    zmm2[0].o = var_540
                    uint32_t temp0_699[0x4]
                    int32_t temp1_31
                    temp0_699, temp1_31 =
                        _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm0[0].q), zmm2[0].o)
                    zmm1[0].o = temp0_699
                    zmm2[0].o = temp1_31
                    zmm0 = _mm256_inserti128_si256(arg6, zmm1[0].o, 1)
                    zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                    zmm2 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg6 = var_680_1
                    zmm5 = var_660_1
                    arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_6a0_1, 
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                zmm0 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f)), 
                        var_640_1)
                    zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, zmm0))
                    arg7 = _mm256_broadcast_ss(1023f)
                    zmm2 = _mm256_div_ps(zmm2, arg7)
                    zmm0 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm0)), arg7)
                    zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg6, var_620_1)
                    zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, zmm5, var_600_1)
                    var_480.32 = _mm256_maskstore_ps(arg8, arg5)
                    var_460.32 = _mm256_maskstore_ps(arg8, zmm2)
                    var_440.32 = _mm256_maskstore_ps(arg8, zmm0)
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                
                zmm0[0].o = _mm256_extracti128_si256(arg12, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
                arg5[0].o = _mm256_extracti128_si256(arg15, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                zmm2[0].o = zmm0[0].o ^ var_800[0].o
                zmm0[0].o = zmm2[0].o & zmm1[0].o
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                temp0_730 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
            
            if (temp0_599 == 0 || temp0_730 == 0)
                arg6 = var_320_1
                zmm5 = var_960_1
            else
                arg15 = __vpbroadcastd_ymmqq_memd(2)
                arg9 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg15, var_720)
                zmm0 = var_900_1 & not.32(arg9)
                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                arg16[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                    arg15 = var_980_1
                else
                    arg12 = _mm256_srai_epi32(_mm256_slli_epi32(var_940, 0x1f), 0x1f)
                    var_6c0 = arg9
                    
                    if (_mm256_movemask_ps(arg12 & zmm0) == 0)
                        arg14 = arg10
                    else
                        zmm1 = __vpbroadcastq_ymmqq_memq(2)
                        arg6 = _mm256_add_epi64(arg10, zmm1)
                        zmm5 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg16[0].o), 0x1f), 0x1f) & arg12
                        arg9[0].o = zx.o(0)
                        arg7 = _mm256_permutevar8x32_epi32(data_143442920, zmm5)
                        arg14 = _mm256_blendv_ps(arg10, arg6, arg7)
                        zmm1 = _mm256_add_epi64(var_7e0_3, zmm1)
                        arg6 = _mm256_permutevar8x32_epi32(data_143442940, zmm5)
                        var_7e0_3 = _mm256_blendv_ps(var_7e0_3, zmm1, arg6)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(
                            __vpaddq_ymmqq_ymmqq_memqq(var_860.32, var_8e0_1), var_920_2)
                        zmm5 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_880_1), 
                            arg11)
                        arg8 = __vpbroadcastq_ymmqq_memq(4)
                        zmm5 = _mm256_add_epi64(zmm5, arg8)
                        zmm1 = _mm256_blendv_ps(arg9, _mm256_add_epi64(zmm1, arg8), arg7)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg6 = _mm256_blendv_ps(arg7, zmm5, arg6)
                        int64_t r8_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rcx_10 = zmm1[0].q
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        int64_t r11_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rdi_5 = zmm1[0].q
                        int64_t rsi_5 = arg6[0].q
                        int64_t rdx_5 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t rax_163 = zmm1[0].q
                        int64_t rbx_8 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = zx.o(*(arg4 + rcx_10))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r8_2), 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdi_5), 2)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r11_2), 3)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rsi_5), 4)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdx_5), 5)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rax_163), 6)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rbx_8), 7)
                        arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                            _mm256_cvtepu16_epi32(zmm1[0].o), 
                            __vpbroadcastd_ymmqq_memd(0xffffff01)))
                    
                    var_480.32 = _mm256_maskstore_ps(zmm0, _mm256_blendv_ps(arg7, arg6, arg12))
                    arg10 = arg15 & var_940
                    zmm1 = _mm256_cmpeq_epi32(arg10, arg15)
                    arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    arg6[0].o = zmm1[0].o & arg16[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    char temp0_782 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                    
                    if (temp0_782 == 0)
                        arg15 = var_980_1
                        arg12 = var_8a0_1
                        zmm5 = var_7e0_3
                        arg9 = var_6c0
                    else
                        int128_t var_3c0
                        int64_t rax_165
                        
                        if ((temp0_782 & 1) != 0)
                            zmm1[0].o = var_3c0
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg14[0].q, 0)
                            
                            if ((temp0_782 & 2) != 0)
                                rax_165 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_165, 1)
                        else
                            zmm1[0].o = var_3c0
                            
                            if ((temp0_782 & 2) != 0)
                                rax_165 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_165, 1)
                        arg9 = var_6c0
                        
                        if ((temp0_782 & 4) == 0)
                            if ((temp0_782 & 8) != 0)
                                goto label_140188ecb
                            
                            goto label_140188e69
                        
                        zmm5[0].o = zmm1[0].o
                        zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                        zmm1[0].o = zmm5[0].o
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm1[0].q, 2)
                        
                        if ((temp0_782 & 8) != 0)
                        label_140188ecb:
                            zmm5[0].o = zmm1[0].o
                            zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                            int64_t rax_168 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = zmm5[0].o
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_168, 3)
                            arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                            
                            if ((temp0_782 & 0x10) == 0)
                                goto label_140188e74
                            
                            goto label_140188ef4
                        
                    label_140188e69:
                        arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                        int64_t rax_166
                        
                        if ((temp0_782 & 0x10) != 0)
                        label_140188ef4:
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *var_7e0_3[0].q, 4)
                            arg6 = _mm256_slli_epi32(arg6, 0x1f)
                            
                            if ((temp0_782 & 0x20) != 0)
                                rax_166 = __vpextrq_gpr64q_xmmdq_immb(var_7e0_3[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_166, 5)
                        else
                        label_140188e74:
                            arg6 = _mm256_slli_epi32(arg6, 0x1f)
                            
                            if ((temp0_782 & 0x20) != 0)
                                rax_166 = __vpextrq_gpr64q_xmmdq_immb(var_7e0_3[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_166, 5)
                        arg12 = __vpbroadcastq_ymmqq_memq(2)
                        arg11 = _mm256_srai_epi32(arg6, 0x1f)
                        zmm5[0].o = zmm1[0].o
                        
                        if ((temp0_782 & 0x40) != 0)
                            arg8 = var_7e0_3
                            zmm1[0].o = _mm256_extracti128_si256(arg8, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm1[0].q, 6)
                        else
                            arg8 = var_7e0_3
                        
                        arg6 = _mm256_add_epi64(arg8, arg12)
                        arg12 = _mm256_add_epi64(arg14, arg12)
                        arg15 = _mm256_permutevar8x32_epi32(data_143442920, arg11)
                        zmm1 = data_143442940
                        arg11 = _mm256_permutevar8x32_epi32(zmm1, arg11)
                        
                        if (temp0_782 s< 0)
                            zmm1[0].o = _mm256_extracti128_si256(arg8, 1)
                            int64_t rax_171 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_171, 7)
                        
                        arg14 = _mm256_blendv_ps(arg14, arg12, arg15)
                        arg8 = _mm256_blendv_ps(arg8, arg6, arg11)
                        var_3c0 = zmm5[0].o
                        arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                            _mm256_cvtepu16_epi32(zmm5[0].o), 
                            __vpbroadcastd_ymmqq_memd(0xffffff01)))
                        arg15 = var_980_1
                        arg12 = var_8a0_1
                        zmm5 = arg8
                    
                    var_460.32 =
                        _mm256_maskstore_ps(zmm0, _mm256_cmpeq_epi32(arg10, arg7) & not.32(arg6))
                    arg10 = var_760_1 & var_940
                    zmm1 = _mm256_cmpeq_epi32(arg10, var_760_1)
                    arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                    zmm1[0].o &= arg16[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    char temp0_819 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                    
                    if (temp0_819 == 0)
                        arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                    else
                        int128_t var_3d0
                        int64_t rax_173
                        
                        if ((temp0_819 & 1) != 0)
                            arg6[0].o = var_3d0
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg14[0].q, 0)
                            
                            if ((temp0_819 & 2) != 0)
                                rax_173 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_173, 1)
                        else
                            arg6[0].o = var_3d0
                            
                            if ((temp0_819 & 2) != 0)
                                rax_173 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_173, 1)
                        arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                        
                        if ((temp0_819 & 4) == 0)
                            if ((temp0_819 & 8) != 0)
                                goto label_140189cdd
                            
                            goto label_140189040
                        
                        zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 2)
                        
                        if ((temp0_819 & 8) != 0)
                        label_140189cdd:
                            zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                            int64_t rax_194 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_194, 3)
                            
                            if ((temp0_819 & 0x10) == 0)
                                goto label_14018904a
                            
                            goto label_140189cfd
                        
                    label_140189040:
                        
                        if ((temp0_819 & 0x10) == 0)
                        label_14018904a:
                            
                            if ((temp0_819 & 0x20) != 0)
                                goto label_140189d0c
                            
                            goto label_140189054
                        
                    label_140189cfd:
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm5[0].q, 4)
                        
                        if ((temp0_819 & 0x20) != 0)
                        label_140189d0c:
                            int64_t rax_196 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_196, 5)
                            
                            if ((temp0_819 & 0x40) == 0)
                                goto label_14018905e
                            
                            goto label_140189d21
                        
                    label_140189054:
                        
                        if ((temp0_819 & 0x40) != 0)
                        label_140189d21:
                            zmm1[0].o = _mm256_extracti128_si256(zmm5, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 6)
                            
                            if (temp0_819 s< 0)
                            label_140189d39:
                                zmm1[0].o = _mm256_extracti128_si256(zmm5, 1)
                                int64_t rax_198 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_198, 7)
                        else
                        label_14018905e:
                            
                            if (temp0_819 s< 0)
                                goto label_140189d39
                        
                        var_3d0 = arg6[0].o
                        arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                            _mm256_cvtepu16_epi32(arg6[0].o), 
                            __vpbroadcastd_ymmqq_memd(0xffffff01)))
                    
                    zmm1 = _mm256_cmpeq_epi32(arg10, arg7) & not.32(arg6)
                    var_440.32 = _mm256_maskstore_ps(zmm0, zmm1)
                
                arg6 = var_320_1
                zmm5 = var_960_1
                zmm0[0].o = _mm256_extracti128_si256(arg9, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
                zmm0[0].o ^= zmm2[0].o
                zmm0[0].o &= zmm1[0].o
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    arg14 = var_7a0_1
                else
                    zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(__vpbroadcastd_ymmqq_memd(6), var_720)
                    arg5 = var_900_1 & not.32(zmm2)
                    var_900_1[0].o = _mm256_extracti128_si256(arg5, 1)
                    var_900_1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, var_900_1[0].o)
                    var_900_1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_900_1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(var_900_1[0].o) != 0)
                        var_480.32 = _mm256_maskstore_ps(arg5, arg7)
                        var_460.32 = _mm256_maskstore_ps(arg5, arg7)
                        var_440.32 = _mm256_maskstore_ps(arg5, arg7)
                    
                    zmm1 = zmm2 ^ arg16
                    zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm0[0].o &= zmm1[0].o
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg14 = var_7a0_1
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm0 = _mm256_cvtepi16_epi32(zmm0[0].o)
                        var_480.32 = _mm256_maskstore_ps(zmm0, arg7)
                        var_460.32 = _mm256_maskstore_ps(zmm0, arg7)
                        var_440.32 = _mm256_maskstore_ps(zmm0, arg7)
            
            zmm0 = _mm256_cmpeq_epi32(arg6, zmm5)
            arg11 = zmm0 & not.32(arg15)
            zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
            arg15[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                zmm0[0].o = _mm256_extracti128_si256(var_820_2, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_820_2[0].o, zmm0[0].o)
                zmm1 = __vpmulld_ymmqq_ymmqq_memqq(zmm5, var_500)
                zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                float var_920_3[0x8] = zmm1
                zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_860.32)
                float var_960_3[0x8] = zmm2
                zmm2 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(zmm2, var_7c0_2), arg14)
                float var_820_3[0x8] = zmm2
                zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_840_1)
                float var_900_2[0x8] = zmm1
                zmm0[0].o &= arg15[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                float var_380[0x8]
                float var_360[0x8]
                float var_340[0x8]
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg7, var_560)
                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                    arg6[0].o = zmm0[0].o & zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        arg6 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_880_1)
                        arg5 = var_860.32
                        zmm5 = __vpaddq_ymmqq_ymmqq_memqq(arg5, var_8e0_1)
                        arg10 = __vpbroadcastq_ymmqq_memq(4)
                        zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_920_3)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_960_3)
                        arg12 = _mm256_add_epi64(zmm1, arg10)
                        arg10 = _mm256_add_epi64(zmm5, arg10)
                        arg9[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                        arg5[0].o = arg6[0].o
                        float temp0_890[0x4]
                        int32_t temp1_32
                        temp0_890, temp1_32 =
                            _mm256_i64gather_ps(arg14[0].o, *(arg4 + arg10[0].q), arg5[0].o)
                        arg14[0].o = temp0_890
                        arg5[0].o = temp1_32
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg8[0].o = arg9[0].o
                        float temp0_892[0x4]
                        int32_t temp1_33
                        temp0_892, temp1_33 =
                            _mm256_i64gather_ps(arg5[0].o, *(arg4 + arg12[0].q), arg8[0].o)
                        arg5[0].o = temp0_892
                        arg8[0].o = temp1_33
                        arg8 = __vpbroadcastq_ymmqq_memq(8)
                        arg10 = _mm256_add_epi64(zmm1, arg8)
                        arg16 = _mm256_add_epi64(zmm5, arg8)
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        arg8[0].o = arg6[0].o
                        float temp0_897[0x4]
                        int32_t temp1_34
                        temp0_897, temp1_34 =
                            _mm256_i64gather_ps(arg12[0].o, *(arg4 + arg16[0].q), arg8[0].o)
                        arg12[0].o = temp0_897
                        arg8[0].o = temp1_34
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        arg7[0].o = arg9[0].o
                        float temp0_899[0x4]
                        int32_t temp1_35
                        temp0_899, temp1_35 =
                            _mm256_i64gather_ps(arg8[0].o, *(arg4 + arg10[0].q), arg7[0].o)
                        arg8[0].o = temp0_899
                        arg7[0].o = temp1_35
                        arg7 = __vpbroadcastq_ymmqq_memq(0xc)
                        arg16 = _mm256_add_epi64(zmm5, arg7)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        zmm5[0].o = arg6[0].o
                        float temp0_903[0x4]
                        int32_t temp1_36
                        temp0_903, temp1_36 =
                            _mm256_i64gather_ps(arg10[0].o, *(arg4 + arg16[0].q), zmm5[0].o)
                        arg10[0].o = temp0_903
                        zmm5[0].o = temp1_36
                        arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                        zmm1 = _mm256_add_epi64(zmm1, arg7)
                        arg7[0].o = zx.o(0)
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        float temp0_907[0x4]
                        int32_t temp1_37
                        temp0_907, temp1_37 =
                            _mm256_i64gather_ps(zmm5[0].o, *(arg4 + zmm1[0].q), arg9[0].o)
                        zmm5[0].o = temp0_907
                        arg9[0].o = temp1_37
                        zmm1 = _mm256_insertf128_ps(arg14, arg5[0].o, 1)
                        arg5 = _mm256_insertf128_ps(arg12, arg8[0].o, 1)
                        arg12 = var_8a0_1
                        zmm5 = _mm256_insertf128_ps(arg10, zmm5[0].o, 1)
                        var_380 = _mm256_maskstore_ps(arg6, zmm1)
                        var_360 = _mm256_maskstore_ps(arg6, arg5)
                        var_340 = _mm256_maskstore_ps(arg6, zmm5)
                    
                    zmm1 = zmm2 ^ arg16
                    zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm2[0].o = zmm0[0].o & zmm1[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        float var_7e0_4[0x8] = arg11
                        zmm0 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f), 0x1f)
                        arg12 = _mm256_srai_epi32(_mm256_slli_epi32(var_940, 0x1f), 0x1f)
                        arg14 = arg12 & zmm0
                        arg10 = var_900_2
                        arg11 = arg10
                        arg6 = var_820_3
                        arg16 = arg6
                        
                        if (_mm256_movemask_ps(arg14) != 0)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            arg9 = _mm256_permutevar8x32_ps(data_143442920, arg14)
                            arg16 = _mm256_permutevar8x32_ps(data_143442940, arg14)
                            zmm5 = _mm256_add_epi64(
                                __vpaddq_ymmqq_ymmqq_memqq(
                                    __vpaddq_ymmqq_ymmqq_memqq(var_860.32, var_8e0_1), var_920_3), 
                                zmm1)
                            arg7[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            float temp0_934[0x4]
                            int32_t temp1_38
                            temp0_934, temp1_38 =
                                _mm256_i64gather_ps(arg8[0].o, *(arg4 + zmm5[0].q), arg14[0].o)
                            arg8[0].o = temp0_934
                            arg14[0].o = temp1_38
                            arg5 = var_7c0_2
                            zmm5 = _mm256_add_epi64(
                                __vpaddq_ymmqq_ymmqq_memqq(
                                    __vpaddq_ymmqq_ymmqq_memqq(arg5, var_880_1), var_960_3), 
                                zmm1)
                            arg5[0].o = zx.o(0)
                            float temp0_938[0x4]
                            int32_t temp1_39
                            temp0_938, temp1_39 =
                                _mm256_i64gather_ps(zx.o(0), *(arg4 + zmm5[0].q), arg7[0].o)
                            arg5[0].o = temp0_938
                            arg7[0].o = temp1_39
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            arg11 = _mm256_blendv_ps(arg10, _mm256_add_epi64(arg10, zmm1), arg9)
                            arg16 = _mm256_blendv_ps(arg6, _mm256_add_epi64(arg6, zmm1), arg16)
                            zmm5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                        
                        var_380 = _mm256_maskstore_ps(zmm0, _mm256_blendv_ps(arg7, zmm5, arg12))
                        zmm1 = __vpbroadcastd_ymmqq_memd(2)
                        arg12 = zmm1 & var_940
                        zmm1 = _mm256_cmpeq_epi32(arg12, zmm1)
                        arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        zmm5[0].o = zmm2[0].o & zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                            arg5 = _mm256_permutevar8x32_epi32(data_143442920, zmm1)
                            zmm5 = _mm256_permutevar8x32_epi32(data_143442940, zmm1)
                            arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            float temp0_962[0x4]
                            int32_t temp1_40
                            temp0_962, temp1_40 =
                                _mm256_i64gather_ps(arg8[0].o, *arg11[0].q, zmm1[0].o)
                            arg8[0].o = temp0_962
                            zmm1[0].o = temp1_40
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            arg9 = _mm256_add_epi64(arg11, zmm1)
                            arg11 = _mm256_blendv_ps(arg11, arg9, arg5)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_967[0x4]
                            int32_t temp1_41
                            temp0_967, temp1_41 =
                                _mm256_i64gather_ps(arg5[0].o, *arg16[0].q, arg7[0].o)
                            arg5[0].o = temp0_967
                            arg7[0].o = temp1_41
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            arg16 = _mm256_blendv_ps(arg16, _mm256_add_epi64(arg16, zmm1), zmm5)
                            zmm5 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                        
                        var_360 = _mm256_maskstore_ps(zmm0, 
                            _mm256_cmpeq_epi32(arg12, arg7) & not.32(zmm5))
                        arg12 = var_760_1 & var_940
                        zmm1 = _mm256_cmpeq_epi32(arg12, var_760_1)
                        arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        zmm2[0].o &= zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f), 0x1f)
                            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                            arg5[0].o = zx.o(0)
                            float temp0_986[0x4]
                            int32_t temp1_42
                            temp0_986, temp1_42 =
                                _mm256_i64gather_ps(zx.o(0), *arg11[0].q, zmm1[0].o)
                            arg5[0].o = temp0_986
                            zmm1[0].o = temp1_42
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            float temp0_988[0x4]
                            int32_t temp1_43
                            temp0_988, temp1_43 =
                                _mm256_i64gather_ps(zmm1[0].o, *arg16[0].q, zmm2[0].o)
                            zmm1[0].o = temp0_988
                            zmm2[0].o = temp1_43
                            zmm5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        
                        zmm1 = _mm256_cmpeq_epi32(arg12, arg7) & not.32(zmm5)
                        var_340 = _mm256_maskstore_ps(zmm0, zmm1)
                        arg12 = var_8a0_1
                        arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                        arg11 = var_7e0_4
                
                zmm0[0].o = arg15[0].o & var_800[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg15 = var_980_1
                else
                    arg9[0].o = _mm256_extracti128_si256(arg12, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg9[0].o)
                    zmm2[0].o = arg15[0].o & zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        arg14 = _mm256_cvtepu16_epi32(zmm2[0].o)
                        float var_600_2[0x8] = arg7
                        float var_620_2[0x8] = arg7
                        float var_640_2[0x8] = arg7
                        float var_660_2[0x8] = arg7
                        float var_680_2[0x8] = arg7
                        float var_6a0_2[0x8] = arg7
                        zmm0 = var_940
                        arg6 = arg12 & _mm256_srai_epi32(_mm256_slli_epi32(zmm0, 0x1f), 0x1f)
                        arg10 = arg6 & arg11
                        
                        if (_mm256_movemask_ps(arg10) != 0)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            arg16 = var_7a0_1
                            arg5 = _mm256_add_epi64(arg16, zmm1)
                            zmm5 = _mm256_add_epi64(var_840_1, zmm1)
                            zmm0 = data_143442920
                            arg7 = _mm256_permutevar8x32_ps(zmm0, arg10)
                            zmm5 = _mm256_blendv_ps(var_840_1, zmm5, arg7)
                            arg8[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            zmm0[0].o = arg10[0].o
                            arg12[0].o = zx.o(0)
                            float temp0_1013[0x4]
                            int32_t temp1_44
                            temp0_1013, temp1_44 =
                                _mm256_i64gather_ps(arg12[0].o, *var_840_1[0].q, zmm0[0].o)
                            arg12[0].o = temp0_1013
                            zmm0[0].o = temp1_44
                            zmm0[0].o = arg8[0].o
                            var_840_1[0].o =
                                __vxorps_xmmdq_xmmdq_xmmdq(var_840_1[0].o, var_840_1[0].o)
                            float temp0_1015[0x4]
                            int32_t temp1_45
                            temp0_1015, temp1_45 =
                                _mm256_i64gather_ps(var_840_1[0].o, *arg16[0].q, zmm0[0].o)
                            var_840_1[0].o = temp0_1015
                            zmm0[0].o = temp1_45
                            zmm0 = _mm256_permutevar8x32_ps(data_143442940, arg10)
                            arg5 = _mm256_blendv_ps(arg16, arg5, zmm0)
                            var_640_2 = _mm256_maskstore_ps(arg6, 
                                _mm256_insertf128_ps(arg12, var_840_1[0].o, 1))
                            zmm2 = _mm256_blendv_ps(zmm5, _mm256_add_epi64(zmm5, zmm1), arg7)
                            var_840_1 = zmm2
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            float temp0_1023[0x4]
                            int32_t temp1_46
                            temp0_1023, temp1_46 =
                                _mm256_i64gather_ps(zmm2[0].o, *zmm5[0].q, arg10[0].o)
                            zmm2[0].o = temp0_1023
                            arg10[0].o = temp1_46
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            float temp0_1025[0x4]
                            int32_t temp1_47
                            temp0_1025, temp1_47 =
                                _mm256_i64gather_ps(zmm5[0].o, *arg5[0].q, arg8[0].o)
                            zmm5[0].o = temp0_1025
                            arg8[0].o = temp1_47
                            var_7a0_1 = _mm256_blendv_ps(arg5, _mm256_add_epi64(arg5, zmm1), zmm0)
                            zmm0 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
                            var_6a0_2 = _mm256_maskstore_ps(arg6, zmm0)
                        
                        arg12 = _mm256_slli_epi32(arg14, 0x1f)
                        zmm1 = __vpbroadcastd_ymmqq_memd(2)
                        zmm1 = _mm256_cmpeq_epi32(zmm1 & var_940, zmm1)
                        arg6 = zmm1 & var_8a0_1
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                        zmm5[0].o = arg15[0].o & zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                            arg7 = var_7a0_1
                        else
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            arg16 = var_7a0_1
                            arg14 = _mm256_add_epi64(arg16, zmm1)
                            arg5 = var_840_1
                            zmm5 = _mm256_add_epi64(arg5, zmm1)
                            zmm2 = data_143442920
                            arg7 = _mm256_permutevar8x32_epi32(zmm2, zmm0)
                            zmm5 = _mm256_blendv_ps(arg5, zmm5, arg7)
                            arg8[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            zmm2[0].o = zmm0[0].o
                            float temp0_1049[0x4]
                            int32_t temp1_48
                            temp0_1049, temp1_48 =
                                _mm256_i64gather_ps(arg10[0].o, *arg5[0].q, zmm2[0].o)
                            arg10[0].o = temp0_1049
                            zmm2[0].o = temp1_48
                            zmm2[0].o = arg8[0].o
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_1051[0x4]
                            int32_t temp1_49
                            temp0_1051, temp1_49 =
                                _mm256_i64gather_ps(arg5[0].o, *arg16[0].q, zmm2[0].o)
                            arg5[0].o = temp0_1051
                            zmm2[0].o = temp1_49
                            zmm2 = _mm256_permutevar8x32_epi32(data_143442940, zmm0)
                            arg14 = _mm256_blendv_ps(arg16, arg14, zmm2)
                            var_620_2 =
                                _mm256_maskstore_ps(arg6, _mm256_insertf128_ps(arg10, arg5[0].o, 1))
                            arg5 = _mm256_blendv_ps(zmm5, _mm256_add_epi64(zmm5, zmm1), arg7)
                            var_840_1 = arg5
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_1059[0x4]
                            int32_t temp1_50
                            temp0_1059, temp1_50 =
                                _mm256_i64gather_ps(arg5[0].o, *zmm5[0].q, zmm0[0].o)
                            arg5[0].o = temp0_1059
                            zmm0[0].o = temp1_50
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_1061[0x4]
                            int32_t temp1_51
                            temp0_1061, temp1_51 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg14[0].q, arg8[0].o)
                            zmm0[0].o = temp0_1061
                            arg8[0].o = temp1_51
                            arg7 = _mm256_blendv_ps(arg14, _mm256_add_epi64(arg14, zmm1), zmm2)
                            var_680_2 =
                                _mm256_maskstore_ps(arg6, _mm256_insertf128_ps(arg5, zmm0[0].o, 1))
                        
                        zmm2 = _mm256_srai_epi32(arg12, 0x1f)
                        zmm0 = _mm256_cmpeq_epi32(var_760_1 & var_940, var_760_1)
                        arg12 = var_8a0_1
                        arg6 = zmm0 & arg12
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                        zmm5[0].o = arg15[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            arg5 = _mm256_add_epi64(arg7, zmm1)
                            arg16 = arg7
                            arg14 = var_840_1
                            zmm1 = _mm256_add_epi64(arg14, zmm1)
                            zmm5 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                            arg10 = _mm256_blendv_ps(arg14, zmm1, zmm5)
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            arg8[0].o = zmm0[0].o
                            float temp0_1084[0x4]
                            int32_t temp1_52
                            temp0_1084, temp1_52 =
                                _mm256_i64gather_ps(arg7[0].o, *arg14[0].q, arg8[0].o)
                            arg7[0].o = temp0_1084
                            arg8[0].o = temp1_52
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            zmm5[0].o = zmm1[0].o
                            float temp0_1086[0x4]
                            int32_t temp1_53
                            temp0_1086, temp1_53 =
                                _mm256_i64gather_ps(arg8[0].o, *arg16[0].q, zmm5[0].o)
                            arg8[0].o = temp0_1086
                            zmm5[0].o = temp1_53
                            arg5 = _mm256_blendv_ps(arg16, arg5, 
                                _mm256_permutevar8x32_epi32(data_143442940, zmm0))
                            zmm5 = _mm256_insertf128_ps(arg7, arg8[0].o, 1)
                            var_600_2 = _mm256_maskstore_ps(arg6, zmm5)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            float temp0_1092[0x4]
                            int32_t temp1_54
                            temp0_1092, temp1_54 =
                                _mm256_i64gather_ps(zmm5[0].o, *arg10[0].q, zmm0[0].o)
                            zmm5[0].o = temp0_1092
                            zmm0[0].o = temp1_54
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_1094[0x4]
                            int32_t temp1_55
                            temp0_1094, temp1_55 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg5[0].q, zmm1[0].o)
                            zmm0[0].o = temp0_1094
                            zmm1[0].o = temp1_55
                            var_660_2 =
                                _mm256_maskstore_ps(arg6, _mm256_insertf128_ps(zmm5, zmm0[0].o, 1))
                        
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_880_1)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_860.32, var_8e0_1)
                        arg5 = __vpbroadcastq_ymmqq_memq(4)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_920_3)
                        zmm0 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(zmm0, var_960_3), arg5)
                        zmm1 = _mm256_add_epi64(zmm1, arg5)
                        arg5[0].o = zmm2[0].o
                        arg6[0].o = zx.o(0)
                        uint32_t temp0_1104[0x4]
                        int32_t temp1_56
                        temp0_1104, temp1_56 =
                            _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm1[0].q), arg5[0].o)
                        arg6[0].o = temp0_1104
                        arg5[0].o = temp1_56
                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                        arg5[0].o = zx.o(0)
                        uint32_t temp0_1106[0x4]
                        int32_t temp1_57
                        temp0_1106, temp1_57 =
                            _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm0[0].q), zmm1[0].o)
                        arg5[0].o = temp0_1106
                        zmm1[0].o = temp1_57
                        zmm0 = _mm256_inserti128_si256(arg6, arg5[0].o, 1)
                        zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                        arg5 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg7 = var_660_2
                        arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_6a0_2, 
                            _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    zmm0 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                    __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                _mm256_broadcast_ss(511f)), 
                            var_640_2)
                        zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, zmm0))
                        arg8 = _mm256_broadcast_ss(1023f)
                        arg5 = _mm256_div_ps(arg5, arg8)
                        zmm0 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm0)), arg8)
                        arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg5, var_680_2, var_620_2)
                        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, arg7, var_600_2)
                        var_380 = _mm256_maskstore_ps(zmm2, arg6)
                        var_360 = _mm256_maskstore_ps(zmm2, arg5)
                        var_340 = _mm256_maskstore_ps(zmm2, zmm0)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                    
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg9[0].o)
                    zmm0[0].o ^= var_800[0].o
                    zmm1[0].o = arg15[0].o & zmm0[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                        arg15 = var_980_1
                    else
                        arg16 = __vpbroadcastd_ymmqq_memd(2)
                        arg12 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg16, var_720)
                        arg5[0].o = _mm256_extracti128_si256(arg12, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                        arg6[0].o = arg15[0].o & zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                            arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                        else
                            arg10 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
                            zmm2 = _mm256_srai_epi32(_mm256_slli_epi32(var_940, 0x1f), 0x1f)
                            zmm5 = zmm2 & arg10
                            bool cond:19_1 = _mm256_movemask_ps(zmm5) == 0
                            var_840_1[0].o = arg5[0].o
                            arg14 = arg11
                            
                            if (not(cond:19_1))
                                zmm1 = __vpbroadcastq_ymmqq_memq(2)
                                arg5 = _mm256_add_epi64(var_820_3, zmm1)
                                zmm1 = _mm256_add_epi64(var_900_2, zmm1)
                                arg9[0].o = zx.o(0)
                                arg7 = _mm256_permutevar8x32_ps(data_143442920, zmm5)
                                var_900_2 = _mm256_blendv_ps(var_900_2, zmm1, arg7)
                                zmm1 = _mm256_permutevar8x32_ps(data_143442940, zmm5)
                                var_820_3 = _mm256_blendv_ps(var_820_3, arg5, zmm1)
                                arg5 = __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_880_1)
                                zmm5 = __vpaddq_ymmqq_ymmqq_memqq(var_860.32, var_8e0_1)
                                arg8 = __vpbroadcastq_ymmqq_memq(4)
                                zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_920_3)
                                arg5 = _mm256_add_epi64(
                                    __vpaddq_ymmqq_ymmqq_memqq(arg5, var_960_3), arg8)
                                zmm5 = _mm256_blendv_ps(arg9, _mm256_add_epi64(zmm5, arg8), arg7)
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                zmm1 = _mm256_blendv_ps(arg7, arg5, zmm1)
                                int64_t r8_3 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                int64_t rcx_15 = zmm5[0].q
                                arg5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                int64_t r11_3 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                int64_t rbx_9 = arg5[0].q
                                int64_t rdi_6 = zmm1[0].q
                                int64_t rsi_8 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                int64_t rax_192 = zmm1[0].q
                                int64_t rdx_6 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = zx.o(*(arg4 + rcx_15))
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r8_3), 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rbx_9), 2)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r11_3), 3)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdi_6), 4)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rsi_8), 5)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rax_192), 6)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdx_6), 7)
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                arg5 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                zmm5 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg5))
                            
                            var_380 = _mm256_maskstore_ps(arg10, _mm256_blendv_ps(arg7, zmm5, zmm2))
                            zmm5 = arg16 & var_940
                            zmm1 = _mm256_cmpeq_epi32(zmm5, arg16)
                            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                            zmm2[0].o = arg6[0].o & zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            char temp0_1201 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_1201 == 0)
                                arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                                arg11 = arg14
                            else
                                int128_t var_3e0
                                int64_t rax_200
                                
                                if ((temp0_1201 & 1) != 0)
                                    arg16 = var_900_2
                                    arg5[0].o = var_3e0
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg16[0].q, 0)
                                    arg9 = var_820_3
                                    
                                    if ((temp0_1201 & 2) != 0)
                                        rax_200 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_200, 1)
                                else
                                    arg5[0].o = var_3e0
                                    arg9 = var_820_3
                                    arg16 = var_900_2
                                    
                                    if ((temp0_1201 & 2) != 0)
                                        rax_200 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_200, 1)
                                arg11 = arg14
                                
                                if ((temp0_1201 & 4) == 0)
                                    if ((temp0_1201 & 8) != 0)
                                        goto label_140189f77
                                    
                                    goto label_140189e18
                                
                                zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm1[0].q, 2)
                                
                                if ((temp0_1201 & 8) != 0)
                                label_140189f77:
                                    zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                    int64_t rax_204 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_204, 3)
                                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                    
                                    if ((temp0_1201 & 0x10) == 0)
                                        goto label_140189e27
                                    
                                    goto label_140189f9c
                                
                            label_140189e18:
                                zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                
                                if ((temp0_1201 & 0x10) == 0)
                                label_140189e27:
                                    zmm2 = _mm256_slli_epi32(zmm2, 0x1f)
                                    
                                    if ((temp0_1201 & 0x20) != 0)
                                        goto label_140189fb0
                                    
                                    goto label_140189e36
                                
                            label_140189f9c:
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg9[0].q, 4)
                                zmm2 = _mm256_slli_epi32(zmm2, 0x1f)
                                
                                if ((temp0_1201 & 0x20) == 0)
                                label_140189e36:
                                    arg14 = __vpbroadcastq_ymmqq_memq(2)
                                    arg8 = _mm256_srai_epi32(zmm2, 0x1f)
                                    
                                    if ((temp0_1201 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                                            *zmm1[0].q, 6)
                                else
                                label_140189fb0:
                                    int64_t rax_206 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_206, 5)
                                    arg14 = __vpbroadcastq_ymmqq_memq(2)
                                    arg8 = _mm256_srai_epi32(zmm2, 0x1f)
                                    
                                    if ((temp0_1201 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                                            *zmm1[0].q, 6)
                                
                                zmm2 = _mm256_add_epi64(arg9, arg14)
                                arg14 = _mm256_add_epi64(arg16, arg14)
                                arg16 = _mm256_permutevar8x32_epi32(data_143442920, arg8)
                                zmm1 = data_143442940
                                arg8 = _mm256_permutevar8x32_epi32(zmm1, arg8)
                                
                                if (temp0_1201 s< 0)
                                    zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                    int64_t rax_202 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_202, 7)
                                
                                var_900_2 = _mm256_blendv_ps(var_900_2, arg14, arg16)
                                arg9 = _mm256_blendv_ps(arg9, zmm2, arg8)
                                var_820_3 = arg9
                                var_3e0 = arg5[0].o
                                zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg5[0].o), 
                                    __vpbroadcastd_ymmqq_memd(0xffffff01)))
                                arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                            
                            arg5[0].o = var_840_1[0].o
                            var_360 = _mm256_maskstore_ps(arg10, 
                                _mm256_cmpeq_epi32(zmm5, arg7) & not.32(zmm2))
                            zmm5 = var_760_1 & var_940
                            zmm1 = _mm256_cmpeq_epi32(zmm5, var_760_1)
                            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                            zmm1[0].o &= arg6[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            char temp0_1232 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_1232 != 0)
                                int128_t var_3f0
                                int64_t rax_208
                                
                                if ((temp0_1232 & 1) != 0)
                                    zmm2[0].o = var_3f0
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                        *var_900_2[0].q, 0)
                                    
                                    if ((temp0_1232 & 2) != 0)
                                        rax_208 = __vpextrq_gpr64q_xmmdq_immb(var_900_2[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_208, 1)
                                else
                                    zmm2[0].o = var_3f0
                                    
                                    if ((temp0_1232 & 2) != 0)
                                        rax_208 = __vpextrq_gpr64q_xmmdq_immb(var_900_2[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_208, 1)
                                
                                if ((temp0_1232 & 4) == 0)
                                    if ((temp0_1232 & 8) != 0)
                                        goto label_1401869a4
                                    
                                    goto label_14018a022
                                
                                var_900_2[0].o = _mm256_extracti128_si256(var_900_2, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *var_900_2[0].q, 2)
                                
                                if ((temp0_1232 & 8) != 0)
                                label_1401869a4:
                                    var_900_2[0].o = _mm256_extracti128_si256(var_900_2, 1)
                                    int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(var_900_2[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_2, 3)
                                    
                                    if ((temp0_1232 & 0x10) == 0)
                                        goto label_14018a02c
                                    
                                    goto label_1401869cd
                                
                            label_14018a022:
                                
                                if ((temp0_1232 & 0x10) == 0)
                                label_14018a02c:
                                    
                                    if ((temp0_1232 & 0x20) != 0)
                                        goto label_1401869e5
                                    
                                    goto label_14018a036
                                
                            label_1401869cd:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *var_820_3[0].q, 4)
                                
                                if ((temp0_1232 & 0x20) != 0)
                                label_1401869e5:
                                    int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(var_820_3[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_4, 5)
                                    
                                    if ((temp0_1232 & 0x40) == 0)
                                        goto label_14018a040
                                    
                                    goto label_140186a03
                                
                            label_14018a036:
                                
                                if ((temp0_1232 & 0x40) != 0)
                                label_140186a03:
                                    var_820_3[0].o = _mm256_extracti128_si256(var_820_3, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                        *var_820_3[0].q, 6)
                                    
                                    if (temp0_1232 s< 0)
                                    label_140186a24:
                                        var_820_3[0].o = _mm256_extracti128_si256(var_820_3, 1)
                                        int64_t rax_6 =
                                            __vpextrq_gpr64q_xmmdq_immb(var_820_3[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_6, 7)
                                else
                                label_14018a040:
                                    
                                    if (temp0_1232 s< 0)
                                        goto label_140186a24
                                
                                var_3f0 = zmm2[0].o
                                zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(zmm2[0].o), 
                                    __vpbroadcastd_ymmqq_memd(0xffffff01)))
                            
                            zmm1 = _mm256_cmpeq_epi32(zmm5, arg7) & not.32(zmm2)
                            var_340 = _mm256_maskstore_ps(arg10, zmm1)
                        
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                        zmm0[0].o ^= zmm1[0].o
                        zmm0[0].o &= arg15[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                            arg15 = var_980_1
                        else
                            zmm1 = __vpbroadcastd_ymmqq_memd(6)
                            zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm1, var_720)
                            zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                            arg6[0].o = arg15[0].o & zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm1 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
                                var_380 = _mm256_maskstore_ps(zmm1, arg7)
                                var_360 = _mm256_maskstore_ps(zmm1, arg7)
                                var_340 = _mm256_maskstore_ps(zmm1, arg7)
                            
                            zmm1 = zmm2 ^ arg16
                            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                            zmm0[0].o &= zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            arg15 = var_980_1
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm0 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                                var_380 = _mm256_maskstore_ps(zmm0, arg7)
                                var_360 = _mm256_maskstore_ps(zmm0, arg7)
                                var_340 = _mm256_maskstore_ps(zmm0, arg7)
                
                arg5 = var_480.32
                arg6 = var_460.32
                zmm5 = var_440.32
                zmm0 = _mm256_sub_ps(var_380, arg5)
                zmm1 = _mm256_sub_ps(var_360, arg6)
                zmm2 = _mm256_sub_ps(var_340, zmm5)
                arg8 = var_780
                zmm0 = _mm256_fmadd_ps(zmm0, arg8, arg5)
                zmm1 = _mm256_fmadd_ps(zmm1, arg8, arg6)
                zmm2 = _mm256_fmadd_ps(zmm2, arg8, zmm5)
                var_480.32 = _mm256_maskstore_ps(arg11, zmm0)
                var_460.32 = _mm256_maskstore_ps(arg11, zmm1)
                var_440.32 = _mm256_maskstore_ps(arg11, zmm2)
                arg11 = var_8c0_1
                goto label_14018a1ee
            
            arg11 = var_8c0_1
            arg15 = var_980_1
            zmm0 = arg15 ^ arg16
            
            if (_mm256_movemask_ps(zmm0) != 0)
                goto label_14018a1fb
        
        zmm0[0].o = var_480
        int128_t var_470
        arg9[0].o = var_470
        zmm2[0].o = var_460
        int128_t var_450
        arg5[0].o = var_450
        arg6[0].o = var_440
        int128_t var_430
        zmm5[0].o = var_430
        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
        arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg6[0].o, 0x28)
        int128_t var_280 = zmm1[0].o
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
        arg7[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
        int128_t var_270_1 = arg7[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg6[0].o, 0xa8)
        int128_t var_260_1 = zmm2[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        int128_t var_250_1 = zmm0[0].o
        zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0x28)
        int128_t var_240_1 = zmm2[0].o
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_230_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 0xa8)
        int128_t var_220_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        int128_t var_210_1 = zmm0[0].o
        uint64_t rcx_24
        int64_t rsi_11
        
        for (uint64_t i_9 = 0xff; i_9 != 0; i_9 = rsi_11 & rol.q(-2, rcx_24.b))
            uint64_t rax_213 = _tzcnt_u64(i_9)
            rsi_11 = i_9 & not.q(1 << (rax_213 u% 0x40))
            uint32_t var_2a0[0x8] = arg13
            zmm0[0].o = (&var_280)[rax_213]
            *(arg1 + sx.q(var_2a0[zx.q(rax_213.d) & 7]) * 0x30 + 0x10) = zmm0[0].o
            rcx_24 = _tzcnt_u64(rsi_11)
            zmm0[0].o = (&var_280)[rcx_24]
            *(arg1 + sx.q(var_2a0[zx.q(rcx_24.d) & 7]) * 0x30 + 0x10) = zmm0[0].o
        
        r10 += 8
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
    while (r10 s< rdx_4)
    
    result = zx.q(arg20)
    
    if (r10 s< result.d)
        goto label_14018a3a4
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
