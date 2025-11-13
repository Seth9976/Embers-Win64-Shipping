// 函数: sub_14019ce30
// 地址: 0x14019ce30
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
    label_1401a09d4:
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
                                        goto label_1401a40a1
                                    
                                    goto label_1401a1698
                                
                                zmm1[0].o = __vpbroadcastb_xmmdq_memb(*zmm2[0].q)
                                
                                if ((rdx_12 & 2) != 0)
                                label_1401a40a1:
                                    uint32_t rax_392 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_392, 1)
                                    zmm5[0].o = _mm256_extracti128_si256(arg9, 1)
                                    
                                    if ((rdx_12 & 4) == 0)
                                        goto label_1401a16a7
                                    
                                    goto label_1401a40b8
                                
                            label_1401a1698:
                                zmm5[0].o = _mm256_extracti128_si256(arg9, 1)
                                
                                if ((rdx_12 & 4) == 0)
                                label_1401a16a7:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_12 & 8) != 0)
                                        goto label_1401a40d9
                                    
                                    goto label_1401a16b5
                                
                            label_1401a40b8:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_12 & 8) != 0)
                                label_1401a40d9:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    uint32_t rax_396 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_396, 3)
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                    
                                    if ((rdx_12 & 0x10) == 0)
                                        goto label_1401a16c7
                                    
                                    goto label_1401a4107
                                
                            label_1401a16b5:
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                
                                if ((rdx_12 & 0x10) == 0)
                                label_1401a16c7:
                                    
                                    if ((rdx_12 & 0x20) != 0)
                                        goto label_1401a411b
                                    
                                    goto label_1401a16d0
                                
                            label_1401a4107:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm2[0].q), 4)
                                
                                if ((rdx_12 & 0x20) != 0)
                                label_1401a411b:
                                    uint32_t rax_400 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_400, 5)
                                    
                                    if ((rdx_12 & 0x40) == 0)
                                        goto label_1401a16d9
                                    
                                    goto label_1401a412c
                                
                            label_1401a16d0:
                                
                                if ((rdx_12 & 0x40) != 0)
                                label_1401a412c:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1441.b s< 0)
                                    label_1401a4147:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint32_t rax_404 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_404, 7)
                                else
                                label_1401a16d9:
                                    
                                    if (temp0_1441.b s< 0)
                                        goto label_1401a4147
                                
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
                                                    goto label_1401a1771
                                                
                                                goto label_1401a1866
                                            
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg15[0].q), 0)
                                            
                                            if ((temp0_1602 & 2) != 0)
                                            label_1401a1771:
                                                uint32_t rax_263 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_263, 1)
                                                zmm5[0].o = _mm256_extracti128_si256(arg11, 1)
                                                
                                                if ((temp0_1602 & 4) == 0)
                                                    goto label_1401a1876
                                                
                                                goto label_1401a1789
                                            
                                        label_1401a1866:
                                            zmm5[0].o = _mm256_extracti128_si256(arg11, 1)
                                            
                                            if ((temp0_1602 & 4) == 0)
                                            label_1401a1876:
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1602 & 8) != 0)
                                                    goto label_1401a17ab
                                                
                                                goto label_1401a1885
                                            
                                        label_1401a1789:
                                            zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm0[0].q), 2)
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1602 & 8) != 0)
                                            label_1401a17ab:
                                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                uint32_t rax_267 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_267, 3)
                                                arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                                
                                                if ((temp0_1602 & 0x10) == 0)
                                                    goto label_1401a1898
                                                
                                                goto label_1401a17da
                                            
                                        label_1401a1885:
                                            arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                            
                                            if ((temp0_1602 & 0x10) == 0)
                                            label_1401a1898:
                                                
                                                if ((temp0_1602 & 0x20) != 0)
                                                    goto label_1401a17ef
                                                
                                                goto label_1401a18a2
                                            
                                        label_1401a17da:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg15[0].q), 4)
                                            
                                            if ((temp0_1602 & 0x20) != 0)
                                            label_1401a17ef:
                                                uint32_t rax_271 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_271, 5)
                                                
                                                if ((temp0_1602 & 0x40) == 0)
                                                    goto label_1401a18ac
                                                
                                                goto label_1401a1801
                                            
                                        label_1401a18a2:
                                            
                                            if ((temp0_1602 & 0x40) != 0)
                                            label_1401a1801:
                                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*zmm0[0].q), 6)
                                                
                                                if (temp0_1602 s< 0)
                                                label_1401a181d:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                    uint32_t rax_275 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_275, 7)
                                            else
                                            label_1401a18ac:
                                                
                                                if (temp0_1602 s< 0)
                                                    goto label_1401a181d
                                            
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
                                                    goto label_1401a197d
                                                
                                                goto label_1401a1a61
                                            
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*arg13[0].q), 0)
                                            
                                            if ((temp0_1637 & 2) != 0)
                                            label_1401a197d:
                                                uint16_t rax_281[0x2] = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_281, 1)
                                                zmm5[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                
                                                if ((temp0_1637 & 4) == 0)
                                                    goto label_1401a1a71
                                                
                                                goto label_1401a1995
                                            
                                        label_1401a1a61:
                                            zmm5[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            
                                            if ((temp0_1637 & 4) == 0)
                                            label_1401a1a71:
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1637 & 8) != 0)
                                                    goto label_1401a19b7
                                                
                                                goto label_1401a1a80
                                            
                                        label_1401a1995:
                                            zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*zmm0[0].q), 2)
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1637 & 8) != 0)
                                            label_1401a19b7:
                                                zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                uint16_t rax_285[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_285, 3)
                                                arg13 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                                
                                                if ((temp0_1637 & 0x10) == 0)
                                                    goto label_1401a1a93
                                                
                                                goto label_1401a19e6
                                            
                                        label_1401a1a80:
                                            arg13 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                            
                                            if ((temp0_1637 & 0x10) == 0)
                                            label_1401a1a93:
                                                
                                                if ((temp0_1637 & 0x20) != 0)
                                                    goto label_1401a19fb
                                                
                                                goto label_1401a1a9d
                                            
                                        label_1401a19e6:
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*arg13[0].q), 4)
                                            
                                            if ((temp0_1637 & 0x20) != 0)
                                            label_1401a19fb:
                                                uint16_t rax_289[0x2] = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_289, 5)
                                                
                                                if ((temp0_1637 & 0x40) == 0)
                                                    goto label_1401a1aa7
                                                
                                                goto label_1401a1a0d
                                            
                                        label_1401a1a9d:
                                            
                                            if ((temp0_1637 & 0x40) != 0)
                                            label_1401a1a0d:
                                                zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, zx.d(*zmm0[0].q), 6)
                                                
                                                if (temp0_1637 s< 0)
                                                label_1401a1a29:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    uint16_t rax_293[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg11[0].o, rax_293, 7)
                                            else
                                            label_1401a1aa7:
                                                
                                                if (temp0_1637 s< 0)
                                                    goto label_1401a1a29
                                            
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
                                        goto label_1401a4183
                                    
                                    goto label_1401a1b68
                                
                                uint32_t rax_406 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_406, 1)
                                arg14 = var_940_1
                                zmm5[0].o = _mm256_extracti128_si256(arg12, 1)
                                
                                if ((rdx_12 & 4) != 0)
                                label_1401a4183:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 2)
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_12 & 8) == 0)
                                        goto label_1401a1b76
                                    
                                    goto label_1401a41a4
                                
                            label_1401a1b68:
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_12 & 8) == 0)
                                label_1401a1b76:
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                    
                                    if ((rdx_12 & 0x10) != 0)
                                        goto label_1401a41d2
                                    
                                    goto label_1401a1b88
                                
                            label_1401a41a4:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                uint32_t rax_410 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_410, 3)
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                
                                if ((rdx_12 & 0x10) != 0)
                                label_1401a41d2:
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm2[0].q), 4)
                                    
                                    if ((rdx_12 & 0x20) == 0)
                                        goto label_1401a1b91
                                    
                                    goto label_1401a41e6
                                
                            label_1401a1b88:
                                
                                if ((rdx_12 & 0x20) == 0)
                                label_1401a1b91:
                                    
                                    if ((rdx_12 & 0x40) != 0)
                                        goto label_1401a41f7
                                    
                                    goto label_1401a1b9a
                                
                            label_1401a41e6:
                                uint32_t rax_414 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_414, 5)
                                
                                if ((rdx_12 & 0x40) == 0)
                                label_1401a1b9a:
                                    
                                    if (temp0_1441.b s< 0)
                                    label_1401a4212:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint32_t rax_418 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_418, 7)
                                else
                                label_1401a41f7:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1441.b s< 0)
                                        goto label_1401a4212
                                
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
                                        goto label_1401a4244
                                    
                                    goto label_1401a1c07
                                
                                zmm2[0].o = __vpbroadcastb_xmmdq_memb(*arg5[0].q)
                                
                                if ((rdx_12 & 2) != 0)
                                label_1401a4244:
                                    uint32_t rax_421 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_421, 1)
                                    zmm0 = var_8c0_2
                                    arg6[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    
                                    if ((rdx_12 & 4) == 0)
                                        goto label_1401a1c1f
                                    
                                    goto label_1401a4264
                                
                            label_1401a1c07:
                                zmm0 = var_8c0_2
                                arg6[0].o = _mm256_extracti128_si256(zmm0, 1)
                                
                                if ((rdx_12 & 4) == 0)
                                label_1401a1c1f:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rdx_12 & 8) != 0)
                                        goto label_1401a4285
                                    
                                    goto label_1401a1c2d
                                
                            label_1401a4264:
                                zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rdx_12 & 8) != 0)
                                label_1401a4285:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    uint32_t rax_425 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_425, 3)
                                    arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8e0_2)
                                    
                                    if ((rdx_12 & 0x10) == 0)
                                        goto label_1401a1c3f
                                    
                                    goto label_1401a42b3
                                
                            label_1401a1c2d:
                                arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8e0_2)
                                
                                if ((rdx_12 & 0x10) != 0)
                                label_1401a42b3:
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*arg5[0].q), 4)
                                    
                                    if ((rdx_12 & 0x20) != 0)
                                    label_1401a42c7:
                                        uint32_t rax_429 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_429, 5)
                                        
                                        if ((rdx_12 & 0x40) == 0)
                                            goto label_1401a1c51
                                        
                                        goto label_1401a42d8
                                else
                                label_1401a1c3f:
                                    
                                    if ((rdx_12 & 0x20) != 0)
                                        goto label_1401a42c7
                                
                                if ((rdx_12 & 0x40) != 0)
                                label_1401a42d8:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    zmm1[0].o &= data_142fc92e0
                                    
                                    if (temp0_1441.b s< 0)
                                    label_1401a42fb:
                                        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                        uint32_t rax_433 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_433, 7)
                                else
                                label_1401a1c51:
                                    zmm1[0].o &= data_142fc92e0
                                    
                                    if (temp0_1441.b s< 0)
                                        goto label_1401a42fb
                                
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
                                        goto label_1401a3e65
                                    
                                    goto label_1401a108f
                                
                                zmm1[0].o = __vpbroadcastw_xmmdq_memw(*zmm2[0].q)
                                
                                if ((rdx_11 & 2) != 0)
                                label_1401a3e65:
                                    int64_t rax_368 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_368, 1)
                                    zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                    
                                    if ((rdx_11 & 4) == 0)
                                        goto label_1401a109e
                                    
                                    goto label_1401a3e7f
                                
                            label_1401a108f:
                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                
                                if ((rdx_11 & 4) == 0)
                                label_1401a109e:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_11 & 8) != 0)
                                        goto label_1401a3e9d
                                    
                                    goto label_1401a10ac
                                
                            label_1401a3e7f:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_11 & 8) != 0)
                                label_1401a3e9d:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    int64_t rax_370 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_370, 3)
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                    
                                    if ((rdx_11 & 0x10) == 0)
                                        goto label_1401a10be
                                    
                                    goto label_1401a3ec5
                                
                            label_1401a10ac:
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                
                                if ((rdx_11 & 0x10) == 0)
                                label_1401a10be:
                                    
                                    if ((rdx_11 & 0x20) != 0)
                                        goto label_1401a3ed3
                                    
                                    goto label_1401a10c7
                                
                            label_1401a3ec5:
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 4)
                                
                                if ((rdx_11 & 0x20) != 0)
                                label_1401a3ed3:
                                    int64_t rax_372 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_372, 5)
                                    
                                    if ((rdx_11 & 0x40) == 0)
                                        goto label_1401a10d0
                                    
                                    goto label_1401a3ee7
                                
                            label_1401a10c7:
                                
                                if ((rdx_11 & 0x40) != 0)
                                label_1401a3ee7:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1441.b s< 0)
                                    label_1401a3eff:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_374 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_374, 7)
                                else
                                label_1401a10d0:
                                    
                                    if (temp0_1441.b s< 0)
                                        goto label_1401a3eff
                                
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
                                                    goto label_1401a115b
                                                
                                                goto label_1401a1249
                                            
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm2[0].q, 0)
                                            
                                            if ((temp0_1498 & 2) != 0)
                                            label_1401a115b:
                                                int64_t rax_239 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_239, 1)
                                                zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                                
                                                if ((temp0_1498 & 4) == 0)
                                                    goto label_1401a1259
                                                
                                                goto label_1401a1176
                                            
                                        label_1401a1249:
                                            zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                            
                                            if ((temp0_1498 & 4) == 0)
                                            label_1401a1259:
                                                arg14 = var_940_1
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1498 & 8) != 0)
                                                    goto label_1401a119b
                                                
                                                goto label_1401a126e
                                            
                                        label_1401a1176:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm0[0].q, 2)
                                            arg14 = var_940_1
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1498 & 8) != 0)
                                            label_1401a119b:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                int64_t rax_241 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_241, 3)
                                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                                
                                                if ((temp0_1498 & 0x10) == 0)
                                                    goto label_1401a1281
                                                
                                                goto label_1401a11c4
                                            
                                        label_1401a126e:
                                            zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                            
                                            if ((temp0_1498 & 0x10) == 0)
                                            label_1401a1281:
                                                
                                                if ((temp0_1498 & 0x20) != 0)
                                                    goto label_1401a11d3
                                                
                                                goto label_1401a128b
                                            
                                        label_1401a11c4:
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm2[0].q, 4)
                                            
                                            if ((temp0_1498 & 0x20) != 0)
                                            label_1401a11d3:
                                                int64_t rax_243 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_243, 5)
                                                
                                                if ((temp0_1498 & 0x40) == 0)
                                                    goto label_1401a1295
                                                
                                                goto label_1401a11e8
                                            
                                        label_1401a128b:
                                            
                                            if ((temp0_1498 & 0x40) != 0)
                                            label_1401a11e8:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *zmm0[0].q, 6)
                                                
                                                if (temp0_1498 s< 0)
                                                label_1401a1201:
                                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    int64_t rax_245 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_245, 7)
                                            else
                                            label_1401a1295:
                                                
                                                if (temp0_1498 s< 0)
                                                    goto label_1401a1201
                                            
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
                                                goto label_1401a1353
                                            
                                            goto label_1401a1435
                                        
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg15[0].q, 0)
                                        
                                        if ((temp0_1535 & 2) != 0)
                                        label_1401a1353:
                                            int64_t rax_249 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_249, 1)
                                            zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                            
                                            if ((temp0_1535 & 4) == 0)
                                                goto label_1401a1445
                                            
                                            goto label_1401a136e
                                        
                                    label_1401a1435:
                                        zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                        
                                        if ((temp0_1535 & 4) == 0)
                                        label_1401a1445:
                                            arg14 = var_940_1
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1535 & 8) != 0)
                                                goto label_1401a1393
                                            
                                            goto label_1401a145a
                                        
                                    label_1401a136e:
                                        zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *zmm0[0].q, 2)
                                        arg14 = var_940_1
                                        zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                        
                                        if ((temp0_1535 & 8) != 0)
                                        label_1401a1393:
                                            zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                            int64_t rax_251 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_251, 3)
                                            arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                            
                                            if ((temp0_1535 & 0x10) == 0)
                                                goto label_1401a146d
                                            
                                            goto label_1401a13bc
                                        
                                    label_1401a145a:
                                        arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                        
                                        if ((temp0_1535 & 0x10) == 0)
                                        label_1401a146d:
                                            
                                            if ((temp0_1535 & 0x20) != 0)
                                                goto label_1401a13cb
                                            
                                            goto label_1401a1477
                                        
                                    label_1401a13bc:
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg15[0].q, 4)
                                        
                                        if ((temp0_1535 & 0x20) != 0)
                                        label_1401a13cb:
                                            int64_t rax_253 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_253, 5)
                                            
                                            if ((temp0_1535 & 0x40) == 0)
                                                goto label_1401a1481
                                            
                                            goto label_1401a13e0
                                        
                                    label_1401a1477:
                                        
                                        if ((temp0_1535 & 0x40) != 0)
                                        label_1401a13e0:
                                            zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm0[0].q, 6)
                                            
                                            if (temp0_1535 s< 0)
                                            label_1401a13f9:
                                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                int64_t rax_255 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_255, 7)
                                        else
                                        label_1401a1481:
                                            
                                            if (temp0_1535 s< 0)
                                                goto label_1401a13f9
                                        
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
                                        goto label_1401a3f2f
                                    
                                    goto label_1401a153d
                                
                                int64_t rax_375 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_375, 1)
                                zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                
                                if ((rdx_11 & 4) != 0)
                                label_1401a3f2f:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_11 & 8) == 0)
                                        goto label_1401a154b
                                    
                                    goto label_1401a3f4d
                                
                            label_1401a153d:
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_11 & 8) == 0)
                                label_1401a154b:
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                    
                                    if ((rdx_11 & 0x10) != 0)
                                        goto label_1401a3f75
                                    
                                    goto label_1401a155d
                                
                            label_1401a3f4d:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                int64_t rax_377 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_377, 3)
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8e0_2)
                                
                                if ((rdx_11 & 0x10) != 0)
                                label_1401a3f75:
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 4)
                                    
                                    if ((rdx_11 & 0x20) == 0)
                                        goto label_1401a1566
                                    
                                    goto label_1401a3f83
                                
                            label_1401a155d:
                                
                                if ((rdx_11 & 0x20) == 0)
                                label_1401a1566:
                                    
                                    if ((rdx_11 & 0x40) != 0)
                                        goto label_1401a3f97
                                    
                                    goto label_1401a156f
                                
                            label_1401a3f83:
                                int64_t rax_379 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_379, 5)
                                
                                if ((rdx_11 & 0x40) == 0)
                                label_1401a156f:
                                    
                                    if (temp0_1441.b s< 0)
                                    label_1401a3faf:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_381 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_381, 7)
                                else
                                label_1401a3f97:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1441.b s< 0)
                                        goto label_1401a3faf
                                
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
                                        goto label_1401a3fd8
                                    
                                    goto label_1401a15e0
                                
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*arg5[0].q)
                                
                                if ((rdx_11 & 2) != 0)
                                label_1401a3fd8:
                                    int64_t rax_383 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_383, 1)
                                    arg6[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    
                                    if ((rdx_11 & 4) == 0)
                                        goto label_1401a15ef
                                    
                                    goto label_1401a3ff2
                                
                            label_1401a15e0:
                                arg6[0].o = _mm256_extracti128_si256(zmm5, 1)
                                
                                if ((rdx_11 & 4) == 0)
                                label_1401a15ef:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rdx_11 & 8) != 0)
                                        goto label_1401a4010
                                    
                                    goto label_1401a15fd
                                
                            label_1401a3ff2:
                                zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rdx_11 & 8) != 0)
                                label_1401a4010:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    int64_t rax_385 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_385, 3)
                                    arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8e0_2)
                                    
                                    if ((rdx_11 & 0x10) == 0)
                                        goto label_1401a160f
                                    
                                    goto label_1401a4038
                                
                            label_1401a15fd:
                                arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8e0_2)
                                
                                if ((rdx_11 & 0x10) == 0)
                                label_1401a160f:
                                    
                                    if ((rdx_11 & 0x20) != 0)
                                        goto label_1401a4046
                                    
                                    goto label_1401a1618
                                
                            label_1401a4038:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 4)
                                
                                if ((rdx_11 & 0x20) != 0)
                                label_1401a4046:
                                    int64_t rax_387 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_387, 5)
                                    
                                    if ((rdx_11 & 0x40) == 0)
                                        goto label_1401a1621
                                    
                                    goto label_1401a405a
                                
                            label_1401a1618:
                                
                                if ((rdx_11 & 0x40) != 0)
                                label_1401a405a:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1441.b s< 0)
                                    label_1401a4072:
                                        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                        int64_t rax_389 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_389, 7)
                                else
                                label_1401a1621:
                                    
                                    if (temp0_1441.b s< 0)
                                        goto label_1401a4072
                                
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
                                    goto label_1401a3659
                                
                                goto label_1401a2854
                            
                            arg12[0].o = __vpbroadcastw_xmmdq_memw(*var_980_3[0].q)
                            
                            if ((temp0_2017 & 2) != 0)
                            label_1401a3659:
                                uint16_t* rax_335 = __vpextrq_gpr64q_xmmdq_immb(var_980_3[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_335, 1)
                                
                                if ((temp0_2017 & 4) == 0)
                                    goto label_1401a285d
                                
                                goto label_1401a3672
                            
                        label_1401a2854:
                            
                            if ((temp0_2017 & 4) == 0)
                            label_1401a285d:
                                
                                if ((temp0_2017 & 8) != 0)
                                    goto label_1401a3690
                                
                                goto label_1401a2866
                            
                        label_1401a3672:
                            var_980_3[0].o = _mm256_extracti128_si256(var_980_3, 1)
                            arg12[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *var_980_3[0].q, 2)
                            
                            if ((temp0_2017 & 8) != 0)
                            label_1401a3690:
                                var_980_3[0].o = _mm256_extracti128_si256(var_980_3, 1)
                                uint16_t* rax_337 = __vpextrq_gpr64q_xmmdq_immb(var_980_3[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_337, 3)
                                zmm0 = var_920_5
                                arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                                
                                if ((temp0_2017 & 0x10) == 0)
                                    goto label_1401a287a
                                
                                goto label_1401a36ba
                            
                        label_1401a2866:
                            zmm0 = var_920_5
                            arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                            uint16_t* rax_312
                            
                            if ((temp0_2017 & 0x10) != 0)
                            label_1401a36ba:
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *zmm0[0].q, 4)
                                arg5 = _mm256_slli_epi32(arg5, 0x1f)
                                
                                if ((temp0_2017 & 0x20) != 0)
                                    rax_312 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg12[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_312, 5)
                            else
                            label_1401a287a:
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
                                    goto label_1401a36f8
                                
                                goto label_1401a29c3
                            
                            zmm1[0].o = __vpbroadcastw_xmmdq_memw(*var_980_3[0].q)
                            arg13 = var_8a0_3
                            
                            if ((temp0_2049 & 2) != 0)
                            label_1401a36f8:
                                int64_t rax_340 = __vpextrq_gpr64q_xmmdq_immb(var_980_3[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_340, 1)
                                
                                if ((temp0_2049 & 4) == 0)
                                    goto label_1401a29cc
                                
                                goto label_1401a3711
                            
                        label_1401a29c3:
                            
                            if ((temp0_2049 & 4) == 0)
                            label_1401a29cc:
                                
                                if ((temp0_2049 & 8) != 0)
                                    goto label_1401a372f
                                
                                goto label_1401a29d5
                            
                        label_1401a3711:
                            var_980_3[0].o = _mm256_extracti128_si256(var_980_3, 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *var_980_3[0].q, 2)
                            
                            if ((temp0_2049 & 8) != 0)
                            label_1401a372f:
                                var_980_3[0].o = _mm256_extracti128_si256(var_980_3, 1)
                                int64_t rax_342 = __vpextrq_gpr64q_xmmdq_immb(var_980_3[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_342, 3)
                                zmm0 = var_920_5
                                
                                if ((temp0_2049 & 0x10) == 0)
                                    goto label_1401a29e4
                                
                                goto label_1401a3754
                            
                        label_1401a29d5:
                            zmm0 = var_920_5
                            
                            if ((temp0_2049 & 0x10) == 0)
                            label_1401a29e4:
                                
                                if ((temp0_2049 & 0x20) != 0)
                                    goto label_1401a3762
                                
                                goto label_1401a29ed
                            
                        label_1401a3754:
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 4)
                            
                            if ((temp0_2049 & 0x20) != 0)
                            label_1401a3762:
                                int64_t rax_344 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_344, 5)
                                
                                if ((temp0_2049 & 0x40) == 0)
                                    goto label_1401a29f6
                                
                                goto label_1401a3776
                            
                        label_1401a29ed:
                            
                            if ((temp0_2049 & 0x40) != 0)
                            label_1401a3776:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                                
                                if (temp0_2049 s< 0)
                                label_1401a3794:
                                    var_920_5[0].o = _mm256_extracti128_si256(var_920_5, 1)
                                    int64_t rax_346 = __vpextrq_gpr64q_xmmdq_immb(var_920_5[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_346, 7)
                            else
                            label_1401a29f6:
                                
                                if (temp0_2049 s< 0)
                                    goto label_1401a3794
                            
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
                                        goto label_1401a3d1c
                                    
                                    goto label_1401a381f
                                
                                zmm2 = var_980_4
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*zmm2[0].q)
                                
                                if ((temp0_2447 & 2) != 0)
                                label_1401a3d1c:
                                    int64_t rax_355 = __vpextrq_gpr64q_xmmdq_immb(var_980_4[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_355, 1)
                                    
                                    if ((temp0_2447 & 4) == 0)
                                        goto label_1401a3828
                                    
                                    goto label_1401a3d30
                                
                            label_1401a381f:
                                
                                if ((temp0_2447 & 4) == 0)
                                label_1401a3828:
                                    
                                    if ((temp0_2447 & 8) != 0)
                                        goto label_1401a3d4e
                                    
                                    goto label_1401a3831
                                
                            label_1401a3d30:
                                zmm5 = var_980_4
                                zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm5[0].q, 2)
                                
                                if ((temp0_2447 & 8) != 0)
                                label_1401a3d4e:
                                    zmm5 = var_980_4
                                    zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    int64_t rax_357 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_357, 3)
                                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                    
                                    if ((temp0_2447 & 0x10) == 0)
                                        goto label_1401a383f
                                    
                                    goto label_1401a3d77
                                
                            label_1401a3831:
                                arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                int64_t rax_347
                                
                                if ((temp0_2447 & 0x10) != 0)
                                label_1401a3d77:
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg12[0].q, 4)
                                    arg6 = _mm256_slli_epi32(arg6, 0x1f)
                                    
                                    if ((temp0_2447 & 0x20) != 0)
                                        rax_347 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_347, 5)
                                else
                                label_1401a383f:
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
                                        goto label_1401a3da7
                                    
                                    goto label_1401a3977
                                
                                zmm1 = var_980_4
                                zmm1[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                                
                                if ((temp0_2477 & 2) != 0)
                                label_1401a3da7:
                                    zmm2 = var_980_4
                                    int64_t rax_360 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_360, 1)
                                    
                                    if ((temp0_2477 & 4) == 0)
                                        goto label_1401a3980
                                    
                                    goto label_1401a3dc0
                                
                            label_1401a3977:
                                
                                if ((temp0_2477 & 4) == 0)
                                label_1401a3980:
                                    
                                    if ((temp0_2477 & 8) != 0)
                                        goto label_1401a3dde
                                    
                                    goto label_1401a3989
                                
                            label_1401a3dc0:
                                zmm2 = var_980_4
                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 2)
                                
                                if ((temp0_2477 & 8) != 0)
                                label_1401a3dde:
                                    zmm2 = var_980_4
                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    int64_t rax_362 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_362, 3)
                                    
                                    if ((temp0_2477 & 0x10) == 0)
                                        goto label_1401a3992
                                    
                                    goto label_1401a3e02
                                
                            label_1401a3989:
                                
                                if ((temp0_2477 & 0x10) == 0)
                                label_1401a3992:
                                    
                                    if ((temp0_2477 & 0x20) != 0)
                                        goto label_1401a3e10
                                    
                                    goto label_1401a399b
                                
                            label_1401a3e02:
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg12[0].q, 4)
                                
                                if ((temp0_2477 & 0x20) != 0)
                                label_1401a3e10:
                                    int64_t rax_364 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_364, 5)
                                    
                                    if ((temp0_2477 & 0x40) == 0)
                                        goto label_1401a39a4
                                    
                                    goto label_1401a3e24
                                
                            label_1401a399b:
                                
                                if ((temp0_2477 & 0x40) != 0)
                                label_1401a3e24:
                                    zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 6)
                                    
                                    if (temp0_2477 s< 0)
                                    label_1401a3e3c:
                                        zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                        int64_t rax_366 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_366, 7)
                                else
                                label_1401a39a4:
                                    
                                    if (temp0_2477 s< 0)
                                        goto label_1401a3e3c
                                
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
        label_1401a081e:
            zmm0 = _mm256_xor_ps(arg15, arg16)
            
            if (_mm256_movemask_ps(zmm0) != 0)
            label_1401a082b:
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
                                        goto label_14019de2e
                                    
                                    goto label_14019d8ce
                                
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm2[0].q), 0)
                                arg9 = arg16
                                zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                                
                                if ((r15_2 & 2) != 0)
                                label_14019de2e:
                                    uint32_t rax_66 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_66, 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                    
                                    if ((r15_2 & 4) == 0)
                                        goto label_14019d8de
                                    
                                    goto label_14019de46
                                
                            label_14019d8ce:
                                arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                
                                if ((r15_2 & 4) == 0)
                                label_14019d8de:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((r15_2 & 8) != 0)
                                        goto label_14019de68
                                    
                                    goto label_14019d8ed
                                
                            label_14019de46:
                                zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm1[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((r15_2 & 8) != 0)
                                label_14019de68:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    uint32_t rax_70 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_70, 3)
                                    zmm2 = _mm256_add_epi64(arg12, arg6)
                                    
                                    if ((r15_2 & 0x10) == 0)
                                        goto label_14019d8fb
                                    
                                    goto label_14019de92
                                
                            label_14019d8ed:
                                zmm2 = _mm256_add_epi64(arg12, arg6)
                                
                                if ((r15_2 & 0x10) == 0)
                                label_14019d8fb:
                                    
                                    if ((r15_2 & 0x20) != 0)
                                        goto label_14019dea7
                                    
                                    goto label_14019d905
                                
                            label_14019de92:
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm2[0].q), 4)
                                
                                if ((r15_2 & 0x20) != 0)
                                label_14019dea7:
                                    uint32_t rax_74 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_74, 5)
                                    
                                    if ((r15_2 & 0x40) == 0)
                                        goto label_14019d90f
                                    
                                    goto label_14019deb9
                                
                            label_14019d905:
                                
                                if ((r15_2 & 0x40) != 0)
                                label_14019deb9:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_155.b s< 0)
                                    label_14019ded4:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint32_t rax_78 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_78, 7)
                                else
                                label_14019d90f:
                                    
                                    if (temp0_155.b s< 0)
                                        goto label_14019ded4
                                
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
                                                    goto label_14019d9ad
                                                
                                                goto label_14019da96
                                            
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, zx.d(*arg16[0].q), 0)
                                            
                                            if ((temp0_219 & 2) != 0)
                                            label_14019d9ad:
                                                uint32_t rax_35 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1))
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, rax_35, 1)
                                                arg6[0].o = _mm256_extracti128_si256(arg11, 1)
                                                
                                                if ((temp0_219 & 4) == 0)
                                                    goto label_14019daa6
                                                
                                                goto label_14019d9c5
                                            
                                        label_14019da96:
                                            arg6[0].o = _mm256_extracti128_si256(arg11, 1)
                                            
                                            if ((temp0_219 & 4) == 0)
                                            label_14019daa6:
                                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                                
                                                if ((temp0_219 & 8) != 0)
                                                    goto label_14019d9e7
                                                
                                                goto label_14019dab5
                                            
                                        label_14019d9c5:
                                            zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, zx.d(*zmm1[0].q), 2)
                                            arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                            
                                            if ((temp0_219 & 8) != 0)
                                            label_14019d9e7:
                                                zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                                uint32_t rax_39 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, rax_39, 3)
                                                arg16 = _mm256_add_epi64(arg12, arg6)
                                                
                                                if ((temp0_219 & 0x10) == 0)
                                                    goto label_14019dac3
                                                
                                                goto label_14019da11
                                            
                                        label_14019dab5:
                                            arg16 = _mm256_add_epi64(arg12, arg6)
                                            
                                            if ((temp0_219 & 0x10) == 0)
                                            label_14019dac3:
                                                
                                                if ((temp0_219 & 0x20) != 0)
                                                    goto label_14019da26
                                                
                                                goto label_14019dacd
                                            
                                        label_14019da11:
                                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg5[0].o, zx.d(*arg16[0].q), 4)
                                            
                                            if ((temp0_219 & 0x20) != 0)
                                            label_14019da26:
                                                uint32_t rax_43 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1))
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, rax_43, 5)
                                                
                                                if ((temp0_219 & 0x40) == 0)
                                                    goto label_14019dad7
                                                
                                                goto label_14019da38
                                            
                                        label_14019dacd:
                                            
                                            if ((temp0_219 & 0x40) != 0)
                                            label_14019da38:
                                                zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg5[0].o, zx.d(*zmm1[0].q), 6)
                                                
                                                if (temp0_219 s< 0)
                                                label_14019da54:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                                    uint32_t rax_47 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg5[0].o, rax_47, 7)
                                            else
                                            label_14019dad7:
                                                
                                                if (temp0_219 s< 0)
                                                    goto label_14019da54
                                            
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
                                                    goto label_14019dfd2
                                                
                                                goto label_14019e0d9
                                            
                                            zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, zx.d(*zmm1[0].q), 2)
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_322 & 8) != 0)
                                            label_14019dfd2:
                                                zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                                uint16_t rax_87[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg8[0].o, rax_87, 3)
                                                arg10 = _mm256_add_epi64(arg12, arg5)
                                                
                                                if ((temp0_322 & 0x10) == 0)
                                                    goto label_14019e0e7
                                                
                                                goto label_14019dffc
                                            
                                        label_14019e0d9:
                                            arg10 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_322 & 0x10) == 0)
                                            label_14019e0e7:
                                                
                                                if ((temp0_322 & 0x20) != 0)
                                                    goto label_14019e011
                                                
                                                goto label_14019e0f1
                                            
                                        label_14019dffc:
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, zx.d(*arg10[0].q), 4)
                                            
                                            if ((temp0_322 & 0x20) != 0)
                                            label_14019e011:
                                                uint16_t rax_91[0x2] = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg8[0].o, rax_91, 5)
                                                
                                                if ((temp0_322 & 0x40) == 0)
                                                    goto label_14019e0fb
                                                
                                                goto label_14019e023
                                            
                                        label_14019e0f1:
                                            
                                            if ((temp0_322 & 0x40) != 0)
                                            label_14019e023:
                                                zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg8[0].o, zx.d(*zmm1[0].q), 6)
                                                
                                                if (temp0_322 s< 0)
                                                label_14019e03f:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                                    uint16_t rax_95[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg8[0].o, rax_95, 7)
                                            else
                                            label_14019e0fb:
                                                
                                                if (temp0_322 s< 0)
                                                    goto label_14019e03f
                                            
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
                                        goto label_14019e339
                                    
                                    goto label_14019e1c1
                                
                                uint32_t rax_109 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_109, 1)
                                arg5[0].o = _mm256_extracti128_si256(arg9, 1)
                                
                                if ((r15_2 & 4) != 0)
                                label_14019e339:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm1[0].q), 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((r15_2 & 8) == 0)
                                        goto label_14019e1d0
                                    
                                    goto label_14019e35b
                                
                            label_14019e1c1:
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((r15_2 & 8) == 0)
                                label_14019e1d0:
                                    zmm2 = _mm256_add_epi64(arg12, arg5)
                                    
                                    if ((r15_2 & 0x10) != 0)
                                        goto label_14019e385
                                    
                                    goto label_14019e1de
                                
                            label_14019e35b:
                                zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                uint32_t rax_113 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_113, 3)
                                zmm2 = _mm256_add_epi64(arg12, arg5)
                                int128_t var_420
                                
                                if ((r15_2 & 0x10) != 0)
                                label_14019e385:
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm2[0].q), 4)
                                    arg5[0].o = var_420
                                    
                                    if ((r15_2 & 0x20) == 0)
                                        goto label_14019e1f1
                                    
                                    goto label_14019e3a3
                                
                            label_14019e1de:
                                arg5[0].o = var_420
                                
                                if ((r15_2 & 0x20) == 0)
                                label_14019e1f1:
                                    
                                    if ((r15_2 & 0x40) != 0)
                                        goto label_14019e3b5
                                    
                                    goto label_14019e1fb
                                
                            label_14019e3a3:
                                uint32_t rax_117 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_117, 5)
                                
                                if ((r15_2 & 0x40) == 0)
                                label_14019e1fb:
                                    
                                    if (temp0_155.b s< 0)
                                    label_14019e3d0:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint32_t rax_121 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_121, 7)
                                else
                                label_14019e3b5:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_155.b s< 0)
                                        goto label_14019e3d0
                                
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
                                        goto label_14019e40f
                                    
                                    goto label_14019e259
                                
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm0[0].q), 0)
                                arg14 = var_7a0_1
                                
                                if ((r15_2 & 2) != 0)
                                label_14019e40f:
                                    uint32_t rax_125 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_125, 1)
                                    var_960_2[0].o = _mm256_extracti128_si256(arg8, 1)
                                    
                                    if ((r15_2 & 4) == 0)
                                        goto label_14019e269
                                    
                                    goto label_14019e427
                                
                            label_14019e259:
                                var_960_2[0].o = _mm256_extracti128_si256(arg8, 1)
                                
                                if ((r15_2 & 4) == 0)
                                label_14019e269:
                                    zmm2 = _mm256_cvtepi32_epi64(var_960_2[0].o)
                                    
                                    if ((r15_2 & 8) != 0)
                                        goto label_14019e449
                                    
                                    goto label_14019e278
                                
                            label_14019e427:
                                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm1[0].q), 2)
                                zmm2 = _mm256_cvtepi32_epi64(var_960_2[0].o)
                                
                                if ((r15_2 & 8) != 0)
                                label_14019e449:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint32_t rax_129 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_129, 3)
                                    zmm0 = _mm256_add_epi64(arg12, zmm2)
                                    
                                    if ((r15_2 & 0x10) == 0)
                                        goto label_14019e286
                                    
                                    goto label_14019e473
                                
                            label_14019e278:
                                zmm0 = _mm256_add_epi64(arg12, zmm2)
                                
                                if ((r15_2 & 0x10) == 0)
                                label_14019e286:
                                    arg12 = var_8a0_1
                                    
                                    if ((r15_2 & 0x20) != 0)
                                        goto label_14019e491
                                    
                                    goto label_14019e299
                                
                            label_14019e473:
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm0[0].q), 4)
                                arg12 = var_8a0_1
                                
                                if ((r15_2 & 0x20) == 0)
                                label_14019e299:
                                    
                                    if ((r15_2 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                            zx.d(*zmm1[0].q), 6)
                                else
                                label_14019e491:
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
                                    goto label_14019e872
                            else
                                arg6 = _mm256_add_epi32(arg15, arg15)
                                zmm1 = _mm256_cvtepi32_epi64(arg6[0].o)
                                zmm2 = _mm256_add_epi64(arg14, zmm1)
                                char rdi_4 = temp0_155.b
                                arg9 = arg16
                                
                                if ((rdi_4 & 1) == 0)
                                    zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                                    
                                    if ((rdi_4 & 2) != 0)
                                        goto label_14019db72
                                    
                                    goto label_14019d82e
                                
                                int128_t var_6d0
                                zmm1[0].o = var_6d0
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 0)
                                var_6d0 = zmm1[0].o
                                zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                                
                                if ((rdi_4 & 2) != 0)
                                label_14019db72:
                                    int64_t rax_50 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o = var_6d0
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_50, 1)
                                    var_6d0 = zmm1[0].o
                                    arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((rdi_4 & 4) == 0)
                                        goto label_14019d83e
                                    
                                    goto label_14019db9f
                                
                            label_14019d82e:
                                arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                
                                if ((rdi_4 & 4) != 0)
                                label_14019db9f:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg6[0].o = var_6d0
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                    label_14019dbc3:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_52 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_52, 3)
                                else
                                label_14019d83e:
                                    arg6[0].o = var_6d0
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                        goto label_14019dbc3
                                
                                zmm2 = _mm256_add_epi64(arg12, arg5)
                                
                                if ((rdi_4 & 0x10) == 0)
                                    if ((rdi_4 & 0x20) != 0)
                                        goto label_14019df01
                                    
                                    goto label_14019dbec
                                
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 4)
                                
                                if ((rdi_4 & 0x20) != 0)
                                label_14019df01:
                                    int64_t rax_80 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_80, 5)
                                    
                                    if ((rdi_4 & 0x40) == 0)
                                        goto label_14019dbf6
                                    
                                    goto label_14019df16
                                
                            label_14019dbec:
                                
                                if ((rdi_4 & 0x40) != 0)
                                label_14019df16:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_155.b s< 0)
                                    label_14019df2e:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_82 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_82, 7)
                                else
                                label_14019dbf6:
                                    
                                    if (temp0_155.b s< 0)
                                        goto label_14019df2e
                                
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
                                                    goto label_14019dc8e
                                                
                                                goto label_14019dd80
                                            
                                            zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *zmm1[0].q, 2)
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_264 & 8) != 0)
                                            label_14019dc8e:
                                                zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                                int64_t rax_55 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *rax_55, 3)
                                                arg16 = _mm256_add_epi64(arg12, arg5)
                                                
                                                if ((temp0_264 & 0x10) == 0)
                                                    goto label_14019dd8d
                                                
                                                goto label_14019dcb1
                                            
                                        label_14019dd80:
                                            arg16 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_264 & 0x10) == 0)
                                            label_14019dd8d:
                                                
                                                if ((temp0_264 & 0x20) != 0)
                                                    goto label_14019dcbf
                                                
                                                goto label_14019dd96
                                            
                                        label_14019dcb1:
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *arg16[0].q, 4)
                                            
                                            if ((temp0_264 & 0x20) != 0)
                                            label_14019dcbf:
                                                int64_t rax_57 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *rax_57, 5)
                                                
                                                if ((temp0_264 & 0x40) == 0)
                                                    goto label_14019dd9f
                                                
                                                goto label_14019dcd3
                                            
                                        label_14019dd96:
                                            
                                            if ((temp0_264 & 0x40) != 0)
                                            label_14019dcd3:
                                                zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *zmm1[0].q, 6)
                                                
                                                if (temp0_264 s< 0)
                                                label_14019dceb:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                                    int64_t rax_59 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_59, 7)
                                            else
                                            label_14019dd9f:
                                                
                                                if (temp0_264 s< 0)
                                                    goto label_14019dceb
                                            
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
                                                    goto label_14019e51e
                                                
                                                goto label_14019e610
                                            
                                            zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                                *zmm1[0].q, 2)
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_407 & 8) != 0)
                                            label_14019e51e:
                                                zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                                uint16_t* rax_136 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg8[0].o, *rax_136, 3)
                                                arg10 = _mm256_add_epi64(arg12, arg5)
                                                
                                                if ((temp0_407 & 0x10) == 0)
                                                    goto label_14019e61d
                                                
                                                goto label_14019e541
                                            
                                        label_14019e610:
                                            arg10 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_407 & 0x10) == 0)
                                            label_14019e61d:
                                                
                                                if ((temp0_407 & 0x20) != 0)
                                                    goto label_14019e54f
                                                
                                                goto label_14019e626
                                            
                                        label_14019e541:
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                                *arg10[0].q, 4)
                                            
                                            if ((temp0_407 & 0x20) != 0)
                                            label_14019e54f:
                                                uint16_t* rax_138 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg8[0].o, *rax_138, 5)
                                                
                                                if ((temp0_407 & 0x40) == 0)
                                                    goto label_14019e62f
                                                
                                                goto label_14019e563
                                            
                                        label_14019e626:
                                            
                                            if ((temp0_407 & 0x40) != 0)
                                            label_14019e563:
                                                zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg8[0].o, *zmm1[0].q, 6)
                                                
                                                if (temp0_407 s< 0)
                                                label_14019e57b:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                                                    uint16_t* rax_140 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg8[0].o, *rax_140, 7)
                                            else
                                            label_14019e62f:
                                                
                                                if (temp0_407 s< 0)
                                                    goto label_14019e57b
                                            
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
                                    label_14019e746:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_147 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_147, 3)
                                else
                                    arg6[0].o = var_6e0
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                        goto label_14019e746
                                
                                zmm2 = _mm256_add_epi64(arg12, arg5)
                                int128_t var_410
                                
                                if ((rdi_4 & 0x10) == 0)
                                    arg5[0].o = var_410
                                    
                                    if ((rdi_4 & 0x20) != 0)
                                        goto label_14019d087
                                    
                                    goto label_14019e778
                                
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 4)
                                arg5[0].o = var_410
                                
                                if ((rdi_4 & 0x20) != 0)
                                label_14019d087:
                                    int64_t rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_8, 5)
                                    
                                    if ((rdi_4 & 0x40) == 0)
                                        goto label_14019e782
                                    
                                    goto label_14019d09c
                                
                            label_14019e778:
                                
                                if ((rdi_4 & 0x40) != 0)
                                label_14019d09c:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_155.b s< 0)
                                    label_14019d0b4:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_10 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_10, 7)
                                else
                                label_14019e782:
                                    
                                    if (temp0_155.b s< 0)
                                        goto label_14019d0b4
                                
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
                                        goto label_14019d0e7
                                    
                                    goto label_14019e7e4
                                
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 0)
                                arg14 = var_7a0_1
                                
                                if ((rdi_4 & 2) != 0)
                                label_14019d0e7:
                                    int64_t rax_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_12, 1)
                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    
                                    if ((rdi_4 & 4) == 0)
                                        goto label_14019e7f4
                                    
                                    goto label_14019d102
                                
                            label_14019e7e4:
                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                
                                if ((rdi_4 & 4) == 0)
                                label_14019e7f4:
                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                        goto label_14019d121
                                    
                                    goto label_14019e803
                                
                            label_14019d102:
                                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm1[0].q, 2)
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                
                                if ((rdi_4 & 8) != 0)
                                label_14019d121:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    int64_t rax_14 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_14, 3)
                                    zmm0 = _mm256_add_epi64(arg12, zmm2)
                                    
                                    if ((rdi_4 & 0x10) == 0)
                                        goto label_14019e811
                                    
                                    goto label_14019d145
                                
                            label_14019e803:
                                zmm0 = _mm256_add_epi64(arg12, zmm2)
                                
                                if ((rdi_4 & 0x10) != 0)
                                label_14019d145:
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 4)
                                    arg12 = var_8a0_1
                                    
                                    if ((rdi_4 & 0x20) != 0)
                                    label_14019d15d:
                                        int64_t rax_16 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_16, 5)
                                        
                                        if ((rdi_4 & 0x40) == 0)
                                            goto label_14019e830
                                        
                                        goto label_14019d172
                                else
                                label_14019e811:
                                    arg12 = var_8a0_1
                                    
                                    if ((rdi_4 & 0x20) != 0)
                                        goto label_14019d15d
                                
                                if ((rdi_4 & 0x40) != 0)
                                label_14019d172:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm1[0].q, 6)
                                    var_960_1 = arg8
                                    
                                    if (temp0_155.b s< 0)
                                    label_14019d190:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_18 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_18, 7)
                                else
                                label_14019e830:
                                    var_960_1 = arg8
                                    
                                    if (temp0_155.b s< 0)
                                        goto label_14019d190
                                
                                var_6e0 = arg6[0].o
                                zmm0 = _mm256_cvtepu16_epi32(arg6[0].o)
                                var_410 = arg5[0].o
                                zmm2 = _mm256_cvtepu16_epi32(arg5[0].o)
                                arg6 = __vxorps_ymmqq_ymmqq_memqq(arg16, var_820_1)
                                arg5[0].o = zx.o(0)
                                
                                if (arg19 != 1)
                                label_14019e872:
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
                                goto label_14019f4fb
                            
                            goto label_14019f499
                        
                        zmm5[0].o = zmm1[0].o
                        zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                        zmm1[0].o = zmm5[0].o
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm1[0].q, 2)
                        
                        if ((temp0_782 & 8) != 0)
                        label_14019f4fb:
                            zmm5[0].o = zmm1[0].o
                            zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                            int64_t rax_168 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = zmm5[0].o
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_168, 3)
                            arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                            
                            if ((temp0_782 & 0x10) == 0)
                                goto label_14019f4a4
                            
                            goto label_14019f524
                        
                    label_14019f499:
                        arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                        int64_t rax_166
                        
                        if ((temp0_782 & 0x10) != 0)
                        label_14019f524:
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *var_7e0_3[0].q, 4)
                            arg6 = _mm256_slli_epi32(arg6, 0x1f)
                            
                            if ((temp0_782 & 0x20) != 0)
                                rax_166 = __vpextrq_gpr64q_xmmdq_immb(var_7e0_3[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_166, 5)
                        else
                        label_14019f4a4:
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
                                goto label_1401a030d
                            
                            goto label_14019f670
                        
                        zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 2)
                        
                        if ((temp0_819 & 8) != 0)
                        label_1401a030d:
                            zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                            int64_t rax_194 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_194, 3)
                            
                            if ((temp0_819 & 0x10) == 0)
                                goto label_14019f67a
                            
                            goto label_1401a032d
                        
                    label_14019f670:
                        
                        if ((temp0_819 & 0x10) == 0)
                        label_14019f67a:
                            
                            if ((temp0_819 & 0x20) != 0)
                                goto label_1401a033c
                            
                            goto label_14019f684
                        
                    label_1401a032d:
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm5[0].q, 4)
                        
                        if ((temp0_819 & 0x20) != 0)
                        label_1401a033c:
                            int64_t rax_196 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_196, 5)
                            
                            if ((temp0_819 & 0x40) == 0)
                                goto label_14019f68e
                            
                            goto label_1401a0351
                        
                    label_14019f684:
                        
                        if ((temp0_819 & 0x40) != 0)
                        label_1401a0351:
                            zmm1[0].o = _mm256_extracti128_si256(zmm5, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 6)
                            
                            if (temp0_819 s< 0)
                            label_1401a0369:
                                zmm1[0].o = _mm256_extracti128_si256(zmm5, 1)
                                int64_t rax_198 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_198, 7)
                        else
                        label_14019f68e:
                            
                            if (temp0_819 s< 0)
                                goto label_1401a0369
                        
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
                                        goto label_1401a05a7
                                    
                                    goto label_1401a0448
                                
                                zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm1[0].q, 2)
                                
                                if ((temp0_1201 & 8) != 0)
                                label_1401a05a7:
                                    zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                                    int64_t rax_204 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_204, 3)
                                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                    
                                    if ((temp0_1201 & 0x10) == 0)
                                        goto label_1401a0457
                                    
                                    goto label_1401a05cc
                                
                            label_1401a0448:
                                zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                
                                if ((temp0_1201 & 0x10) == 0)
                                label_1401a0457:
                                    zmm2 = _mm256_slli_epi32(zmm2, 0x1f)
                                    
                                    if ((temp0_1201 & 0x20) != 0)
                                        goto label_1401a05e0
                                    
                                    goto label_1401a0466
                                
                            label_1401a05cc:
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg9[0].q, 4)
                                zmm2 = _mm256_slli_epi32(zmm2, 0x1f)
                                
                                if ((temp0_1201 & 0x20) == 0)
                                label_1401a0466:
                                    arg14 = __vpbroadcastq_ymmqq_memq(2)
                                    arg8 = _mm256_srai_epi32(zmm2, 0x1f)
                                    
                                    if ((temp0_1201 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                                            *zmm1[0].q, 6)
                                else
                                label_1401a05e0:
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
                                        goto label_14019cfd4
                                    
                                    goto label_1401a0652
                                
                                var_900_2[0].o = _mm256_extracti128_si256(var_900_2, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *var_900_2[0].q, 2)
                                
                                if ((temp0_1232 & 8) != 0)
                                label_14019cfd4:
                                    var_900_2[0].o = _mm256_extracti128_si256(var_900_2, 1)
                                    int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(var_900_2[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_2, 3)
                                    
                                    if ((temp0_1232 & 0x10) == 0)
                                        goto label_1401a065c
                                    
                                    goto label_14019cffd
                                
                            label_1401a0652:
                                
                                if ((temp0_1232 & 0x10) == 0)
                                label_1401a065c:
                                    
                                    if ((temp0_1232 & 0x20) != 0)
                                        goto label_14019d015
                                    
                                    goto label_1401a0666
                                
                            label_14019cffd:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *var_820_3[0].q, 4)
                                
                                if ((temp0_1232 & 0x20) != 0)
                                label_14019d015:
                                    int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(var_820_3[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_4, 5)
                                    
                                    if ((temp0_1232 & 0x40) == 0)
                                        goto label_1401a0670
                                    
                                    goto label_14019d033
                                
                            label_1401a0666:
                                
                                if ((temp0_1232 & 0x40) != 0)
                                label_14019d033:
                                    var_820_3[0].o = _mm256_extracti128_si256(var_820_3, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                        *var_820_3[0].q, 6)
                                    
                                    if (temp0_1232 s< 0)
                                    label_14019d054:
                                        var_820_3[0].o = _mm256_extracti128_si256(var_820_3, 1)
                                        int64_t rax_6 =
                                            __vpextrq_gpr64q_xmmdq_immb(var_820_3[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_6, 7)
                                else
                                label_1401a0670:
                                    
                                    if (temp0_1232 s< 0)
                                        goto label_14019d054
                                
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
                goto label_1401a081e
            
            arg11 = var_8c0_1
            arg15 = var_980_1
            zmm0 = arg15 ^ arg16
            
            if (_mm256_movemask_ps(zmm0) != 0)
                goto label_1401a082b
        
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
        goto label_1401a09d4
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
