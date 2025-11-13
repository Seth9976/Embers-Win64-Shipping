// 函数: sub_14017ec80
// 地址: 0x14017ec80
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
float zmm2[0x8]
zmm2[0].o = arg19
int32_t rdx_4 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
uint64_t result
float var_9e0[0x8]
int128_t var_840
int32_t r10
float zmm0[0x8]
int32_t zmm1[0x8]

if (rdx_4 s<= 0)
    r10 = 0
    result = zx.q(arg21)
    
    if (0 s< result.d)
    label_140182aae:
        zmm0[0].o = zx.o(r10)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(result.d)
        arg11 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
        zmm0 = _mm256_slli_epi32(zmm0, 3)
        arg15[0].o = zx.o(0)
        int128_t temp0_1460
        int32_t temp1_55
        temp0_1460, temp1_55 = _mm256_i32gather_epi32(arg15, *(arg2 + zmm0[0].q), arg11)
        arg15 = temp0_1460
        zmm1 = temp1_55
        arg5 = __vpbroadcastd_ymmqq_memd(4)
        zmm1[0].o = zx.o(0)
        int128_t temp0_1462
        int32_t temp1_56
        temp0_1462, temp1_56 = _mm256_i32gather_epi32(zmm1, *(arg2 + (zmm0 | arg5)[0].q), arg11)
        zmm1 = temp0_1462
        zmm2 = temp1_56
        uint32_t var_780_2[0x8] = arg5
        zmm0 = _mm256_slli_epi32(zmm1, 3) | arg5
        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
        zmm2[0].o = arg11[0].o
        arg5[0].o = zx.o(0)
        uint32_t temp0_1467[0x4]
        int32_t temp1_57
        temp0_1467, temp1_57 = _mm256_i64gather_epi32(zx.o(0), *(arg3 + zmm0[0].q), zmm2[0].o)
        arg5[0].o = temp0_1467
        zmm2[0].o = temp1_57
        zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
        zmm2[0].o = zx.o(0)
        uint32_t temp0_1469[0x4]
        int32_t temp1_58
        temp0_1469, temp1_58 = _mm256_i64gather_epi32(zx.o(0), *(arg3 + zmm1[0].q), zmm0[0].o)
        zmm2[0].o = temp0_1469
        zmm0[0].o = temp1_58
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        zmm2 = _mm256_inserti128_si256(arg5, zmm2[0].o, 1)
        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
        arg9 = _mm256_cmpeq_epi32(zmm2, arg7)
        arg5 = arg9 & not.32(arg11)
        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
        arg13[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
        int128_t var_800
        int128_t var_7e0
        int128_t var_7c0
        int128_t var_7a0
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
            int32_t var_5c0_2[0x8] = arg9
            int32_t var_460_1[0x8] = arg11
            zmm0[0].o = zx.o(arg4)
            arg10[0].o = _mm256_extracti128_si256(zmm2, 1)
            arg11[0].o = zx.o(0)
            int128_t temp0_1479
            int32_t temp1_59
            temp0_1479, temp1_59 = _mm256_i32gather_epi32(arg11, *(arg4 + zmm2[0].q), arg5)
            arg11 = temp0_1479
            zmm1 = temp1_59
            zmm1[0].o = 4
            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            arg17 = _mm256_srli_epi32(arg11, 0x1c)
            zmm0 = _mm256_slli_epi32(arg17, 2)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            float var_720_3[0x8] = arg5
            int128_t temp0_1484
            int32_t temp1_60
            temp0_1484, temp1_60 =
                _mm256_i32gather_epi32(arg8, *(&data_143442960 + zmm0[0].q), arg5)
            arg8 = temp0_1484
            zmm1 = _mm256_srli_epi32(arg11, 0x18)
            arg9 =
                _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 0x1f)
            int32_t var_6a0_2[0x8] = zmm1
            zmm0 = (zmm1 & __vpbroadcastd_ymmqq_memd(7)) | _mm256_slli_epi32(arg17, 3)
            arg5 = __vpbroadcastd_ymmqq_memd(3)
            zmm0 &= arg9
            uint64_t r8_3 = zx.q(zmm0[0])
            uint64_t r10_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t r14_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            uint64_t r15_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
            uint64_t rsi_12 = zx.q(zmm0[0])
            uint64_t rax_223 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            uint64_t rdx_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            uint64_t rbx_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = zx.o(*(r8_3 + &data_143442980))
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r10_1 + &data_143442980), 1)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r14_4 + &data_143442980), 2)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r15_5 + &data_143442980), 3)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rsi_12 + &data_143442980), 4)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rax_223 + &data_143442980), 5)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rdx_8 + &data_143442980), 6)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rbx_8 + &data_143442980), 7)
            zmm1 = _mm256_cvtepu8_epi32(zmm0[0].q)
            arg5 = _mm256_cmpeq_epi32(arg17, arg5)
            zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
            int32_t var_8c0_1[0x4] = zmm0[0].o
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            float var_a40_3[0x8] = arg5
            arg5 ^= arg7
            arg7[0].o = _mm256_extracti128_si256(arg5, 1)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
            arg5[0].o &= arg13[0].o
            arg7[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
            arg7[0].o = __vpsraw_xmmdq_xmmdq_immb(arg7[0].o, 0xf)
            arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
            char temp0_1515 = __vpmovmskb_gpr32d_xmmdq(arg7[0].o)
            arg7[0].o = zx.o(0)
            
            if (temp0_1515 != 0)
                arg7 = _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 
                    0x1f) & zmm1
            
            float var_940_1[0x8] = _mm256_cvtepi32_epi64(zmm2[0].o)
            float var_8e0_2[0x8] = _mm256_cvtepi32_epi64(arg10[0].o)
            zmm2 = _mm256_broadcastq_epi64(arg6[0].q)
            int32_t var_980_1[0x8] = arg11
            arg16 = arg11 & data_143442840
            arg5 = arg9 & arg8
            arg6 = arg9 & var_780_2
            zmm0[0].o &= arg13[0].o
            arg8[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            arg8[0].o = __vpsraw_xmmdq_xmmdq_immb(arg8[0].o, 0xf)
            arg8[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
            char temp0_1525 = __vpmovmskb_gpr32d_xmmdq(arg8[0].o)
            arg14 = _mm256_broadcast_ss(1.40129846e-45f)
            
            if (temp0_1525 == 0)
                zmm0[0].o = zx.o(0)
            else
                arg8 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f)
                zmm0 = _mm256_blendv_ps(arg12, zmm1, arg8)
                arg7 = _mm256_blendv_ps(arg7, arg14, arg8)
            
            zmm1 = _mm256_mullo_epi32(arg7, arg5)
            int32_t var_760_1[0x8] = zmm1
            arg11 = _mm256_madd_epi16(zmm0, arg6)
            float var_920_3[0x8] = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_8e0_2)
            uint32_t var_960_2[0x8] = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_940_1)
            zmm0 = _mm256_cmpgt_epi32(arg16, arg14)
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm2[0].o = zmm0[0].o & arg13[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            bool cond:2_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            int64_t var_9a0_2[0x4] = arg17
            int32_t var_880_2[0x8] = arg14
            var_9e0[0].o = arg13[0].o
            uint32_t var_a00_4[0x8]
            int64_t var_5e0
            
            if (cond:2_1)
                arg7[0].o = zx.o(0)
                zmm0[0].o = zx.o(0)
                var_a00_4 = zmm0
            else
                zmm0 = __vpbroadcastd_ymmqq_memd(0x8000000) & var_980_1
                arg10[0].o = zx.o(0)
                arg5 = _mm256_cmpeq_epi32(zmm0, arg10)
                zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                arg6[0].o = zmm2[0].o & zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg7[0].o = zx.o(0)
                    arg8[0].o = zx.o(0)
                    zmm0[0].o = zx.o(0)
                    var_a00_4 = zmm0
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                else
                    zmm1[0].o = zx.o(0)
                    zmm0[0].o = zx.o(0)
                    arg8[0].o = arg19
                    
                    if (zx.o(0) f>= arg8[0])
                        arg10[0].o = zx.o(0)
                        arg7[0].o = zx.o(0)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        zmm0[0].o = zx.o(0)
                        var_a00_4 = zmm0
                    else
                        arg7 = _mm256_add_epi32(arg16, _mm256_cmpeq_epi32(zmm0, zmm0))
                        
                        if (arg8[0].o f>= 1f)
                            arg10 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f) & arg7
                            arg7 = arg10
                            arg8 = arg10
                            var_a00_4 = arg10
                        else
                            arg8 = _mm256_mul_ps(_mm256_broadcastss_ps(arg8[0].o), 
                                _mm256_cvtepi32_ps(arg7))
                            arg9 = _mm256_round_ps(arg8, 9)
                            zmm1 = _mm256_min_epi32(arg7, _mm256_cvttps_epi32(arg9))
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
                            arg10 = zmm0 & zmm1
                            zmm1[0].o = zx.o(0)
                            
                            if (arg20 != 1)
                                zmm1 = _mm256_sub_ps(arg8, arg9)
                            
                            arg8 = zmm0 & _mm256_min_epi32(
                                _mm256_sub_epi32(arg10, _mm256_cmpeq_epi32(arg8, arg8)), arg7)
                            arg7 = arg10
                            var_a00_4 = arg8
                    
                    arg12 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f) & zmm1
                
                zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
                zmm0 = arg5 ^ zmm1
                arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                zmm0[0].o &= zmm2[0].o
                zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                    uint32_t var_a20_2[0x8] = arg8
                    arg8 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f)
                    zmm2 = _mm256_srai_epi32(arg8, 0x1f)
                    zmm0 = _mm256_cmpeq_epi32(arg16, _mm256_min_epu32(arg16, arg14))
                    arg5[0].o = zx.o(0)
                    arg6[0].o = arg19
                    int32_t rax_229
                    rax_229.b = zx.o(0) f>= arg6[0]
                    arg5[0].o = zx.o(neg.d(rax_229))
                    arg5 = _mm256_broadcastd_epi32(arg5[0])
                    arg9 = zmm0 | arg5
                    zmm0 = arg9 & zmm2
                    
                    if (_mm256_movemask_ps(zmm0) == 0)
                        arg5 = var_a00_4
                    else
                        arg5[0].o = zx.o(0)
                        arg10 = _mm256_blendv_ps(arg10, arg5, zmm0)
                        arg6 = _mm256_blendv_ps(var_a20_2, arg5, zmm0)
                        arg7 = arg10
                        var_a20_2 = arg6
                        arg5 = arg6
                    
                    arg17 = arg9 & not.32(zmm2)
                    int32_t temp0_1589 = _mm256_movemask_ps(arg17)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (temp0_1589 == 0)
                        var_a00_4 = arg5
                        arg17 = var_9a0_2
                    else
                        zmm2 = _mm256_add_epi32(arg16, zmm1)
                        arg7[0].o = arg19
                        
                        if (arg7[0].o f>= 1f)
                            arg7 = _mm256_blendv_ps(arg10, zmm2, arg17)
                            zmm1 = _mm256_blendv_ps(var_a20_2, zmm2, arg17)
                            var_a00_4 = zmm1
                            arg17 = var_9a0_2
                        else
                            float var_740_2[0x8] = arg12
                            zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                            zmm0 = _mm256_cvtepu32_epi64(zmm0[0].o)
                            zmm1 = _mm256_cvtepu32_epi64(arg11[0].o)
                            arg14 = zmm2
                            zmm2 = __vpmulld_ymmqq_ymmqq_memqq(arg16, var_760_1)
                            arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
                            zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_960_2)
                            zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_920_3)
                            arg6 = __vpbroadcastq_ymmqq_memq(3)
                            zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                            zmm1 = _mm256_add_epi64(zmm2, _mm256_add_epi64(zmm1, arg6))
                            zmm0 = _mm256_add_epi64(arg5, _mm256_add_epi64(zmm0, arg6))
                            zmm2 = __vpbroadcastq_ymmqq_memq(-4)
                            arg12 = zmm0 & zmm2
                            zmm2 &= zmm1
                            int32_t rbx_9 = arg18 - 2
                            zmm1 = _mm256_broadcastss_ps(arg7[0].o)
                            arg5 = _mm256_cvtepi32_ps(arg14)
                            zmm1 = _mm256_mul_ps(zmm1, arg5)
                            arg5[0].o = arg13[0].o
                            arg5[0] = float.s(arg18 - 1)
                            arg7[0].o = arg5[0].o f* arg7[0]
                            int32_t rax_233 = int.d(arg7[0])
                            int32_t rax_234 = rax_233 & not.d(rax_233 s>> 0x1f)
                            
                            if (rbx_9 s> rax_234)
                                rbx_9 = rax_234
                            
                            zmm1 = _mm256_cvttps_epi32(zmm1)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float var_8a0_2[0x8] = arg14
                            arg14 = _mm256_min_epi32(_mm256_max_epi32(zmm1, arg5), arg14)
                            var_840.32 = arg14
                            int32_t var_860_2[0x8] = arg11
                            uint32_t var_900_3[0x8] = arg8
                            int32_t var_9c0_5[0x8] = arg9
                            var_5e0.o = arg7[0].o
                            
                            if (arg18 s< 0x100)
                                zmm0 = _mm256_cvtepi32_epi64(arg14[0].o)
                                zmm1 = _mm256_add_epi64(zmm2, zmm0)
                                char rdx_12 = temp0_1589.b
                                
                                if ((rdx_12 & 1) == 0)
                                    if ((rdx_12 & 2) != 0)
                                        goto label_14018659b
                                    
                                    goto label_1401836f0
                                
                                arg5[0].o = __vpbroadcastb_xmmdq_memb(*zmm1[0].q)
                                
                                if ((rdx_12 & 2) != 0)
                                label_14018659b:
                                    uint32_t rax_388 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_388, 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg14, 1)
                                    
                                    if ((rdx_12 & 4) == 0)
                                        goto label_1401836ff
                                    
                                    goto label_1401865b2
                                
                            label_1401836f0:
                                arg6[0].o = _mm256_extracti128_si256(arg14, 1)
                                
                                if ((rdx_12 & 4) == 0)
                                label_1401836ff:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rdx_12 & 8) != 0)
                                        goto label_1401865d3
                                    
                                    goto label_14018370d
                                
                            label_1401865b2:
                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rdx_12 & 8) != 0)
                                label_1401865d3:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    uint32_t rax_392 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_392, 3)
                                    zmm1 = _mm256_add_epi64(arg12, arg6)
                                    
                                    if ((rdx_12 & 0x10) == 0)
                                        goto label_14018371a
                                    
                                    goto label_1401865fc
                                
                            label_14018370d:
                                zmm1 = _mm256_add_epi64(arg12, arg6)
                                
                                if ((rdx_12 & 0x10) == 0)
                                label_14018371a:
                                    
                                    if ((rdx_12 & 0x20) != 0)
                                        goto label_140186610
                                    
                                    goto label_140183723
                                
                            label_1401865fc:
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm1[0].q), 4)
                                
                                if ((rdx_12 & 0x20) != 0)
                                label_140186610:
                                    uint32_t rax_396 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_396, 5)
                                    
                                    if ((rdx_12 & 0x40) == 0)
                                        goto label_14018372c
                                    
                                    goto label_140186621
                                
                            label_140183723:
                                
                                if ((rdx_12 & 0x40) != 0)
                                label_140186621:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1589.b s< 0)
                                    label_14018663c:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        uint32_t rax_400 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_400, 7)
                                else
                                label_14018372c:
                                    
                                    if (temp0_1589.b s< 0)
                                        goto label_14018663c
                                
                                zmm0[0].o = arg5[0].o & data_142fc92e0
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                zmm1[0].o = zx.o(rbx_9)
                                arg8 = _mm256_broadcastd_epi32(zmm1[0])
                                arg5 = _mm256_cmpgt_epi32(zmm0, arg8)
                                float var_a00_5[0x8] = arg5 ^ _mm256_cmpeq_epi32(zmm0, zmm0)
                                arg7 = arg14
                                
                                if (_mm256_movemask_ps(arg5 & not.32(arg17)) != 0)
                                    arg14 = var_840.32
                                    arg7 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg14, var_8a0_2, 
                                        var_a00_5)
                                    zmm1 = __vpsubd_ymmqq_ymmqq_memqq(arg14, data_142fc9420)
                                    arg6 = arg5 & not.32(_mm256_cmpgt_epi32(arg16, zmm1))
                                    arg5 = arg17 & arg6
                                    int32_t i = _mm256_movemask_ps(arg5)
                                    
                                    while (i != 0)
                                        arg11 = zmm1
                                        zmm0 = _mm256_cvtepi32_epi64(arg11[0].o)
                                        zmm1 = _mm256_add_epi64(zmm2, zmm0)
                                        char temp0_1751 = _mm256_movemask_ps(arg5)
                                        
                                        if ((temp0_1751 & 1) == 0)
                                            if ((temp0_1751 & 2) != 0)
                                                goto label_1401837cd
                                            
                                            goto label_1401838b5
                                        
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            zx.d(*zmm1[0].q), 0)
                                        
                                        if ((temp0_1751 & 2) != 0)
                                        label_1401837cd:
                                            uint16_t rax_261[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_261, 1)
                                            arg5[0].o = _mm256_extracti128_si256(arg11, 1)
                                            
                                            if ((temp0_1751 & 4) == 0)
                                                goto label_1401838c5
                                            
                                            goto label_1401837e5
                                        
                                    label_1401838b5:
                                        arg5[0].o = _mm256_extracti128_si256(arg11, 1)
                                        
                                        if ((temp0_1751 & 4) == 0)
                                        label_1401838c5:
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_1751 & 8) != 0)
                                                goto label_140183807
                                            
                                            goto label_1401838d4
                                        
                                    label_1401837e5:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            zx.d(*zmm0[0].q), 2)
                                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                        
                                        if ((temp0_1751 & 8) != 0)
                                        label_140183807:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            uint16_t rax_265[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_265, 3)
                                            zmm1 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_1751 & 0x10) == 0)
                                                goto label_1401838e2
                                            
                                            goto label_140183831
                                        
                                    label_1401838d4:
                                        zmm1 = _mm256_add_epi64(arg12, arg5)
                                        
                                        if ((temp0_1751 & 0x10) == 0)
                                        label_1401838e2:
                                            
                                            if ((temp0_1751 & 0x20) != 0)
                                                goto label_140183846
                                            
                                            goto label_1401838ec
                                        
                                    label_140183831:
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            zx.d(*zmm1[0].q), 4)
                                        
                                        if ((temp0_1751 & 0x20) != 0)
                                        label_140183846:
                                            uint16_t rax_269[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_269, 5)
                                            
                                            if ((temp0_1751 & 0x40) == 0)
                                                goto label_1401838f6
                                            
                                            goto label_140183858
                                        
                                    label_1401838ec:
                                        
                                        if ((temp0_1751 & 0x40) != 0)
                                        label_140183858:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, zx.d(*zmm0[0].q), 6)
                                            
                                            if (temp0_1751 s< 0)
                                            label_140183874:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                uint16_t rax_273[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, rax_273, 7)
                                        else
                                        label_1401838f6:
                                            
                                            if (temp0_1751 s< 0)
                                                goto label_140183874
                                        
                                        zmm0[0].o = arg9[0].o & data_142fc92e0
                                        zmm1 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                            arg8) & arg6
                                        arg5[0].o = zx.o(0)
                                        
                                        if (_mm256_movemask_ps(zmm1 & arg17) != i)
                                            arg5 = zmm1 ^ arg6
                                        
                                        arg7 = _mm256_blendv_ps(arg7, arg14, zmm1)
                                        zmm1 = __vpsubd_ymmqq_ymmqq_memqq(arg11, data_142fc9420)
                                        arg6 = _mm256_cmpgt_epi32(arg16, zmm1) & arg5
                                        arg5 = arg6 & arg17
                                        i = _mm256_movemask_ps(arg5)
                                        arg14 = arg11
                                
                                zmm1 = var_a00_5
                                
                                if (_mm256_movemask_ps(_mm256_andnot_ps(zmm1, arg17)) != 0)
                                    zmm0 = __vxorps_ymmqq_ymmqq_memqq(zmm1, data_142fc9420)
                                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                    arg7 = _mm256_blendv_ps(arg7, zmm1, zmm0)
                                    arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                                    arg6 = __vpaddd_ymmqq_ymmqq_memqq(arg11, var_840.32)
                                    arg14 = _mm256_cmpgt_epi32(arg6, zmm1) & zmm0
                                    arg5 = arg14 & arg17
                                    int32_t i_1 = _mm256_movemask_ps(arg5)
                                    
                                    while (i_1 != 0)
                                        zmm0 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        zmm1 = _mm256_add_epi64(zmm2, zmm0)
                                        char temp0_1788 = _mm256_movemask_ps(arg5)
                                        
                                        if ((temp0_1788 & 1) == 0)
                                            if ((temp0_1788 & 2) != 0)
                                                goto label_1401839c7
                                            
                                            goto label_140183ab1
                                        
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            zx.d(*zmm1[0].q), 0)
                                        
                                        if ((temp0_1788 & 2) != 0)
                                        label_1401839c7:
                                            uint16_t rax_279[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_279, 1)
                                            arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                            
                                            if ((temp0_1788 & 4) == 0)
                                                goto label_140183ac1
                                            
                                            goto label_1401839df
                                        
                                    label_140183ab1:
                                        arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_1788 & 4) == 0)
                                        label_140183ac1:
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_1788 & 8) != 0)
                                                goto label_140183a01
                                            
                                            goto label_140183ad0
                                        
                                    label_1401839df:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            zx.d(*zmm0[0].q), 2)
                                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                        
                                        if ((temp0_1788 & 8) != 0)
                                        label_140183a01:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            uint16_t rax_283[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_283, 3)
                                            zmm1 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_1788 & 0x10) == 0)
                                                goto label_140183ade
                                            
                                            goto label_140183a2b
                                        
                                    label_140183ad0:
                                        zmm1 = _mm256_add_epi64(arg12, arg5)
                                        
                                        if ((temp0_1788 & 0x10) == 0)
                                        label_140183ade:
                                            
                                            if ((temp0_1788 & 0x20) != 0)
                                                goto label_140183a40
                                            
                                            goto label_140183ae8
                                        
                                    label_140183a2b:
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            zx.d(*zmm1[0].q), 4)
                                        
                                        if ((temp0_1788 & 0x20) != 0)
                                        label_140183a40:
                                            uint16_t rax_287[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_287, 5)
                                            
                                            if ((temp0_1788 & 0x40) == 0)
                                                goto label_140183af2
                                            
                                            goto label_140183a52
                                        
                                    label_140183ae8:
                                        
                                        if ((temp0_1788 & 0x40) != 0)
                                        label_140183a52:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, zx.d(*zmm0[0].q), 6)
                                            
                                            if (temp0_1788 s< 0)
                                            label_140183a6e:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                uint16_t rax_291[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, rax_291, 7)
                                        else
                                        label_140183af2:
                                            
                                            if (temp0_1788 s< 0)
                                                goto label_140183a6e
                                        
                                        zmm0[0].o = arg9[0].o & data_142fc92e0
                                        arg5 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                            arg8) & not.32(arg14)
                                        zmm1[0].o = zx.o(0)
                                        int32_t temp0_1794 = _mm256_movemask_ps(arg5 & arg17)
                                        arg13[0].o = zx.o(0)
                                        
                                        if (temp0_1794 != i_1)
                                            arg13 = arg5 ^ arg14
                                        
                                        arg7 = _mm256_blendv_ps(arg7, arg6, arg5)
                                        arg6 = _mm256_add_epi32(arg6, arg11)
                                        arg14 = _mm256_cmpgt_epi32(arg6, zmm1) & arg13
                                        arg5 = arg14 & arg17
                                        i_1 = _mm256_movemask_ps(arg5)
                                        arg13[0].o = var_9e0[0].o
                                
                                arg8 = var_900_3
                                arg7 = _mm256_blendv_ps(arg10, arg7, arg17)
                                zmm0 = _mm256_cvtepi32_epi64(arg7[0].o)
                                zmm1 = _mm256_add_epi64(zmm2, zmm0)
                                
                                if ((rdx_12 & 1) != 0)
                                    arg6[0].o = __vpbroadcastb_xmmdq_memb(*zmm1[0].q)
                                
                                arg14 = var_880_2
                                arg11 = var_860_2
                                arg9 = var_9c0_5
                                
                                if ((rdx_12 & 2) == 0)
                                    arg5[0].o = _mm256_extracti128_si256(arg7, 1)
                                    
                                    if ((rdx_12 & 4) != 0)
                                        goto label_140186672
                                    
                                    goto label_140183bb1
                                
                                uint16_t rax_402[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_402, 1)
                                arg5[0].o = _mm256_extracti128_si256(arg7, 1)
                                
                                if ((rdx_12 & 4) != 0)
                                label_140186672:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm0[0].q), 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdx_12 & 8) == 0)
                                        goto label_140183bbf
                                    
                                    goto label_140186693
                                
                            label_140183bb1:
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((rdx_12 & 8) == 0)
                                label_140183bbf:
                                    zmm1 = _mm256_add_epi64(arg12, arg5)
                                    
                                    if ((rdx_12 & 0x10) != 0)
                                        goto label_1401866bc
                                    
                                    goto label_140183bcc
                                
                            label_140186693:
                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                uint16_t rax_406[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_406, 3)
                                zmm1 = _mm256_add_epi64(arg12, arg5)
                                
                                if ((rdx_12 & 0x10) != 0)
                                label_1401866bc:
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm1[0].q), 4)
                                    
                                    if ((rdx_12 & 0x20) == 0)
                                        goto label_140183bd5
                                    
                                    goto label_1401866d0
                                
                            label_140183bcc:
                                
                                if ((rdx_12 & 0x20) == 0)
                                label_140183bd5:
                                    
                                    if ((rdx_12 & 0x40) != 0)
                                        goto label_1401866e1
                                    
                                    goto label_140183bde
                                
                            label_1401866d0:
                                uint16_t rax_410[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_410, 5)
                                
                                if ((rdx_12 & 0x40) == 0)
                                label_140183bde:
                                    
                                    if (temp0_1589.b s< 0)
                                    label_1401866fc:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        uint16_t rax_414[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_414, 7)
                                else
                                label_1401866e1:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1589.b s< 0)
                                        goto label_1401866fc
                                
                                arg5 = _mm256_blendv_ps(var_a20_2, 
                                    _mm256_sub_epi32(arg7, _mm256_cmpeq_epi32(zmm0, zmm0)), arg17)
                                zmm1 = _mm256_cmpgt_epi32(arg16, arg5) & not.32(arg17)
                                
                                if (_mm256_movemask_ps(zmm1) != 0)
                                    arg5 =
                                        __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg5, var_8a0_2, zmm1)
                                
                                arg17 = var_9a0_2
                                arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                                zmm0 = _mm256_cvtepi32_epi64(arg5[0].o)
                                zmm1 = _mm256_add_epi64(zmm2, zmm0)
                                
                                if ((rdx_12 & 1) == 0)
                                    if ((rdx_12 & 2) != 0)
                                        goto label_14018672e
                                    
                                    goto label_140183c3f
                                
                                zmm2[0].o = __vpbroadcastb_xmmdq_memb(*zmm1[0].q)
                                
                                if ((rdx_12 & 2) != 0)
                                label_14018672e:
                                    uint32_t rax_417 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_417, 1)
                                    var_a00_4 = arg5
                                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                    
                                    if ((rdx_12 & 4) == 0)
                                        goto label_140183c54
                                    
                                    goto label_14018674b
                                
                            label_140183c3f:
                                var_a00_4 = arg5
                                arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                
                                if ((rdx_12 & 4) == 0)
                                label_140183c54:
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdx_12 & 8) != 0)
                                        goto label_14018676c
                                    
                                    goto label_140183c62
                                
                            label_14018674b:
                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((rdx_12 & 8) != 0)
                                label_14018676c:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    uint32_t rax_421 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_421, 3)
                                    zmm1 = _mm256_add_epi64(arg12, arg5)
                                    
                                    if ((rdx_12 & 0x10) == 0)
                                        goto label_140183c6f
                                    
                                    goto label_140186795
                                
                            label_140183c62:
                                zmm1 = _mm256_add_epi64(arg12, arg5)
                                
                                if ((rdx_12 & 0x10) != 0)
                                label_140186795:
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 4)
                                    arg12 = var_740_2
                                    
                                    if ((rdx_12 & 0x20) != 0)
                                    label_1401867b2:
                                        uint32_t rax_425 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_425, 5)
                                        
                                        if ((rdx_12 & 0x40) == 0)
                                            goto label_140183c8a
                                        
                                        goto label_1401867c3
                                else
                                label_140183c6f:
                                    arg12 = var_740_2
                                    
                                    if ((rdx_12 & 0x20) != 0)
                                        goto label_1401867b2
                                
                                if ((rdx_12 & 0x40) != 0)
                                label_1401867c3:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    zmm0[0].o = arg6[0].o & data_142fc92e0
                                    
                                    if (temp0_1589.b s< 0)
                                    label_1401867e6:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        uint32_t rax_429 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_429, 7)
                                else
                                label_140183c8a:
                                    zmm0[0].o = arg6[0].o & data_142fc92e0
                                    
                                    if (temp0_1589.b s< 0)
                                        goto label_1401867e6
                                
                                zmm1 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                zmm0[0].o = zmm2[0].o & data_142fc92e0
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            else
                                arg6 = _mm256_add_epi32(arg14, arg14)
                                zmm1 = _mm256_add_epi64(zmm2, _mm256_cvtepi32_epi64(arg6[0].o))
                                char rdx_11 = temp0_1589.b
                                
                                if ((rdx_11 & 1) == 0)
                                    if ((rdx_11 & 2) != 0)
                                        goto label_140186365
                                    
                                    goto label_140183134
                                
                                arg5[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                                
                                if ((rdx_11 & 2) != 0)
                                label_140186365:
                                    int64_t rax_364 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_364, 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((rdx_11 & 4) == 0)
                                        goto label_140183143
                                    
                                    goto label_14018637f
                                
                            label_140183134:
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                
                                if ((rdx_11 & 4) == 0)
                                label_140183143:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rdx_11 & 8) != 0)
                                        goto label_14018639d
                                    
                                    goto label_140183151
                                
                            label_14018637f:
                                arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg7[0].q, 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rdx_11 & 8) != 0)
                                label_14018639d:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    int64_t rax_366 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_366, 3)
                                    zmm1 = _mm256_add_epi64(arg12, arg6)
                                    
                                    if ((rdx_11 & 0x10) == 0)
                                        goto label_14018315e
                                    
                                    goto label_1401863c0
                                
                            label_140183151:
                                zmm1 = _mm256_add_epi64(arg12, arg6)
                                
                                if ((rdx_11 & 0x10) == 0)
                                label_14018315e:
                                    
                                    if ((rdx_11 & 0x20) != 0)
                                        goto label_1401863ce
                                    
                                    goto label_140183167
                                
                            label_1401863c0:
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm1[0].q, 4)
                                
                                if ((rdx_11 & 0x20) != 0)
                                label_1401863ce:
                                    int64_t rax_368 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_368, 5)
                                    
                                    if ((rdx_11 & 0x40) == 0)
                                        goto label_140183170
                                    
                                    goto label_1401863e2
                                
                            label_140183167:
                                
                                if ((rdx_11 & 0x40) != 0)
                                label_1401863e2:
                                    arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg6[0].q, 6)
                                    
                                    if (temp0_1589.b s< 0)
                                    label_1401863fa:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        int64_t rax_370 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_370, 7)
                                else
                                label_140183170:
                                    
                                    if (temp0_1589.b s< 0)
                                        goto label_1401863fa
                                
                                zmm1 = _mm256_cvtepu16_epi32(arg5[0].o)
                                arg5[0].o = zx.o(rbx_9)
                                arg8 = _mm256_broadcastd_epi32(arg5[0])
                                arg5 = _mm256_cmpgt_epi32(zmm1, arg8)
                                zmm0 = arg5 ^ _mm256_cmpeq_epi32(zmm0, zmm0)
                                arg7 = arg14
                                
                                if (_mm256_movemask_ps(arg5 & not.32(arg17)) != 0)
                                    arg13 = var_840.32
                                    arg7 =
                                        __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg13, var_8a0_2, zmm0)
                                    zmm1 = __vpsubd_ymmqq_ymmqq_memqq(arg13, data_142fc9420)
                                    arg6 = _mm256_cmpgt_epi32(arg16, zmm1)
                                    arg9 = arg5 & not.32(arg6)
                                    arg5 = arg17 & arg9
                                    int32_t i_2 = _mm256_movemask_ps(arg5)
                                    
                                    while (i_2 != 0)
                                        arg14 = zmm1
                                        arg6 = _mm256_add_epi32(zmm1, zmm1)
                                        zmm1 =
                                            _mm256_add_epi64(zmm2, _mm256_cvtepi32_epi64(arg6[0].o))
                                        char temp0_1647 = _mm256_movemask_ps(arg5)
                                        
                                        if ((temp0_1647 & 1) == 0)
                                            if ((temp0_1647 & 2) != 0)
                                                goto label_1401831f4
                                            
                                            goto label_1401832d9
                                        
                                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, 
                                            *zmm1[0].q, 0)
                                        
                                        if ((temp0_1647 & 2) != 0)
                                        label_1401831f4:
                                            uint16_t* rax_237 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *rax_237, 1)
                                            arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                            
                                            if ((temp0_1647 & 4) == 0)
                                                goto label_1401832e9
                                            
                                            goto label_14018320f
                                        
                                    label_1401832d9:
                                        arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_1647 & 4) == 0)
                                        label_1401832e9:
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_1647 & 8) != 0)
                                                goto label_14018322e
                                            
                                            goto label_1401832f8
                                        
                                    label_14018320f:
                                        arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, 
                                            *arg6[0].q, 2)
                                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                        
                                        if ((temp0_1647 & 8) != 0)
                                        label_14018322e:
                                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            uint16_t* rax_239 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *rax_239, 3)
                                            zmm1 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_1647 & 0x10) == 0)
                                                goto label_140183306
                                            
                                            goto label_140183252
                                        
                                    label_1401832f8:
                                        zmm1 = _mm256_add_epi64(arg12, arg5)
                                        
                                        if ((temp0_1647 & 0x10) == 0)
                                        label_140183306:
                                            
                                            if ((temp0_1647 & 0x20) != 0)
                                                goto label_140183261
                                            
                                            goto label_140183310
                                        
                                    label_140183252:
                                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, 
                                            *zmm1[0].q, 4)
                                        
                                        if ((temp0_1647 & 0x20) != 0)
                                        label_140183261:
                                            uint16_t* rax_241 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *rax_241, 5)
                                            
                                            if ((temp0_1647 & 0x40) == 0)
                                                goto label_14018331a
                                            
                                            goto label_140183276
                                        
                                    label_140183310:
                                        
                                        if ((temp0_1647 & 0x40) != 0)
                                        label_140183276:
                                            arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *arg5[0].q, 6)
                                            
                                            if (temp0_1647 s< 0)
                                            label_14018328f:
                                                zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                uint16_t* rax_243 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg11[0].o, *rax_243, 7)
                                        else
                                        label_14018331a:
                                            
                                            if (temp0_1647 s< 0)
                                                goto label_14018328f
                                        
                                        zmm1 = _mm256_cmpgt_epi32(
                                            _mm256_cvtepu16_epi32(arg11[0].o), arg8) & arg9
                                        arg5[0].o = zx.o(0)
                                        
                                        if (_mm256_movemask_ps(zmm1 & arg17) != i_2)
                                            arg5 = zmm1 ^ arg9
                                        
                                        arg7 = _mm256_blendv_ps(arg7, arg13, zmm1)
                                        zmm1 = __vpsubd_ymmqq_ymmqq_memqq(arg14, data_142fc9420)
                                        arg6 = _mm256_cmpgt_epi32(arg16, zmm1)
                                        arg9 = arg6 & arg5
                                        arg5 = arg9 & arg17
                                        i_2 = _mm256_movemask_ps(arg5)
                                        arg13 = arg14
                                
                                if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg17)) != 0)
                                    zmm1 = __vxorps_ymmqq_ymmqq_memqq(zmm0, data_142fc9420)
                                    arg5[0].o = zx.o(0)
                                    arg7 = _mm256_blendv_ps(arg7, arg5, zmm1)
                                    arg14 = _mm256_cmpeq_epi32(arg14, arg14)
                                    arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg14, var_840.32)
                                    arg11 = _mm256_cmpgt_epi32(arg9, arg5) & zmm1
                                    arg5 = arg11 & arg17
                                    
                                    for (int32_t i_3 = _mm256_movemask_ps(arg5); i_3 != 0; 
                                            i_3 = _mm256_movemask_ps(arg5))
                                        arg13 = _mm256_add_epi32(arg9, arg9)
                                        zmm1 = _mm256_add_epi64(zmm2, 
                                            _mm256_cvtepi32_epi64(arg13[0].o))
                                        char temp0_1684 = _mm256_movemask_ps(arg5)
                                        
                                        if ((temp0_1684 & 1) == 0)
                                            if ((temp0_1684 & 2) != 0)
                                                goto label_1401833d4
                                            
                                            goto label_1401834b5
                                        
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                            *zmm1[0].q, 0)
                                        
                                        if ((temp0_1684 & 2) != 0)
                                        label_1401833d4:
                                            int64_t rax_247 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *rax_247, 1)
                                            arg5[0].o = _mm256_extracti128_si256(arg13, 1)
                                            
                                            if ((temp0_1684 & 4) == 0)
                                                goto label_1401834c5
                                            
                                            goto label_1401833ef
                                        
                                    label_1401834b5:
                                        arg5[0].o = _mm256_extracti128_si256(arg13, 1)
                                        
                                        if ((temp0_1684 & 4) == 0)
                                        label_1401834c5:
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_1684 & 8) != 0)
                                                goto label_14018340e
                                            
                                            goto label_1401834d4
                                        
                                    label_1401833ef:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                            *zmm0[0].q, 2)
                                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                        
                                        if ((temp0_1684 & 8) != 0)
                                        label_14018340e:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            int64_t rax_249 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *rax_249, 3)
                                            zmm1 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_1684 & 0x10) == 0)
                                                goto label_1401834e2
                                            
                                            goto label_140183432
                                        
                                    label_1401834d4:
                                        zmm1 = _mm256_add_epi64(arg12, arg5)
                                        
                                        if ((temp0_1684 & 0x10) == 0)
                                        label_1401834e2:
                                            
                                            if ((temp0_1684 & 0x20) != 0)
                                                goto label_140183441
                                            
                                            goto label_1401834ec
                                        
                                    label_140183432:
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                            *zmm1[0].q, 4)
                                        
                                        if ((temp0_1684 & 0x20) != 0)
                                        label_140183441:
                                            uint16_t* rax_251 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *rax_251, 5)
                                            
                                            if ((temp0_1684 & 0x40) == 0)
                                                goto label_1401834f6
                                            
                                            goto label_140183456
                                        
                                    label_1401834ec:
                                        
                                        if ((temp0_1684 & 0x40) != 0)
                                        label_140183456:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *zmm0[0].q, 6)
                                            
                                            if (temp0_1684 s< 0)
                                            label_14018346f:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                uint16_t* rax_253 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *rax_253, 7)
                                        else
                                        label_1401834f6:
                                            
                                            if (temp0_1684 s< 0)
                                                goto label_14018346f
                                        
                                        arg5 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 
                                            arg8) & not.32(arg11)
                                        zmm1[0].o = zx.o(0)
                                        int32_t temp0_1690 = _mm256_movemask_ps(arg5 & arg17)
                                        arg13[0].o = zx.o(0)
                                        
                                        if (temp0_1690 != i_3)
                                            arg13 = arg5 ^ arg11
                                        
                                        arg7 = _mm256_blendv_ps(arg7, arg9, arg5)
                                        arg9 = _mm256_add_epi32(arg9, arg14)
                                        zmm0 = _mm256_cmpgt_epi32(arg9, zmm1)
                                        arg11 = zmm0 & arg13
                                        arg5 = arg11 & arg17
                                
                                arg8 = var_900_3
                                arg7 = _mm256_blendv_ps(arg10, arg7, arg17)
                                arg5 = _mm256_add_epi32(arg7, arg7)
                                zmm0 = _mm256_cvtepi32_epi64(arg5[0].o)
                                zmm1 = _mm256_add_epi64(zmm2, zmm0)
                                
                                if ((rdx_11 & 1) != 0)
                                    arg6[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                                
                                arg14 = var_880_2
                                arg13[0].o = var_9e0[0].o
                                arg11 = var_860_2
                                arg9 = var_9c0_5
                                
                                if ((rdx_11 & 2) == 0)
                                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                    
                                    if ((rdx_11 & 4) != 0)
                                        goto label_14018642a
                                    
                                    goto label_1401835b1
                                
                                int64_t rax_371 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_371, 1)
                                arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                
                                if ((rdx_11 & 4) != 0)
                                label_14018642a:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdx_11 & 8) == 0)
                                        goto label_1401835bf
                                    
                                    goto label_140186448
                                
                            label_1401835b1:
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((rdx_11 & 8) == 0)
                                label_1401835bf:
                                    zmm1 = _mm256_add_epi64(arg12, arg5)
                                    
                                    if ((rdx_11 & 0x10) != 0)
                                        goto label_14018646b
                                    
                                    goto label_1401835cc
                                
                            label_140186448:
                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                int64_t rax_373 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_373, 3)
                                zmm1 = _mm256_add_epi64(arg12, arg5)
                                
                                if ((rdx_11 & 0x10) != 0)
                                label_14018646b:
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 4)
                                    
                                    if ((rdx_11 & 0x20) == 0)
                                        goto label_1401835d5
                                    
                                    goto label_140186479
                                
                            label_1401835cc:
                                
                                if ((rdx_11 & 0x20) == 0)
                                label_1401835d5:
                                    
                                    if ((rdx_11 & 0x40) != 0)
                                        goto label_14018648d
                                    
                                    goto label_1401835de
                                
                            label_140186479:
                                int64_t rax_375 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_375, 5)
                                
                                if ((rdx_11 & 0x40) == 0)
                                label_1401835de:
                                    
                                    if (temp0_1589.b s< 0)
                                    label_1401864a5:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        uint16_t* rax_377 =
                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_377, 7)
                                else
                                label_14018648d:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1589.b s< 0)
                                        goto label_1401864a5
                                
                                arg5 = _mm256_blendv_ps(var_a20_2, 
                                    _mm256_sub_epi32(arg7, _mm256_cmpeq_epi32(zmm0, zmm0)), arg17)
                                zmm1 = _mm256_cmpgt_epi32(arg16, arg5) & not.32(arg17)
                                
                                if (_mm256_movemask_ps(zmm1) != 0)
                                    arg5 =
                                        __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg5, var_8a0_2, zmm1)
                                
                                arg17 = var_9a0_2
                                arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                                var_a00_4 = arg5
                                arg5 = _mm256_add_epi32(arg5, arg5)
                                zmm0 = _mm256_cvtepi32_epi64(arg5[0].o)
                                zmm1 = _mm256_add_epi64(zmm2, zmm0)
                                
                                if ((rdx_11 & 1) == 0)
                                    if ((rdx_11 & 2) != 0)
                                        goto label_1401864ce
                                    
                                    goto label_140183649
                                
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                                
                                if ((rdx_11 & 2) != 0)
                                label_1401864ce:
                                    int64_t rax_379 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_379, 1)
                                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                    
                                    if ((rdx_11 & 4) == 0)
                                        goto label_140183658
                                    
                                    goto label_1401864e8
                                
                            label_140183649:
                                arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                
                                if ((rdx_11 & 4) == 0)
                                label_140183658:
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdx_11 & 8) != 0)
                                        goto label_140186506
                                    
                                    goto label_140183666
                                
                            label_1401864e8:
                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((rdx_11 & 8) != 0)
                                label_140186506:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    int64_t rax_381 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_381, 3)
                                    zmm1 = _mm256_add_epi64(arg12, arg5)
                                    
                                    if ((rdx_11 & 0x10) == 0)
                                        goto label_140183673
                                    
                                    goto label_140186529
                                
                            label_140183666:
                                zmm1 = _mm256_add_epi64(arg12, arg5)
                                
                                if ((rdx_11 & 0x10) == 0)
                                label_140183673:
                                    arg12 = var_740_2
                                    
                                    if ((rdx_11 & 0x20) != 0)
                                        goto label_140186540
                                    
                                    goto label_140183685
                                
                            label_140186529:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 4)
                                arg12 = var_740_2
                                
                                if ((rdx_11 & 0x20) != 0)
                                label_140186540:
                                    int64_t rax_383 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_383, 5)
                                    
                                    if ((rdx_11 & 0x40) == 0)
                                        goto label_14018368e
                                    
                                    goto label_140186554
                                
                            label_140183685:
                                
                                if ((rdx_11 & 0x40) != 0)
                                label_140186554:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1589.b s< 0)
                                    label_14018656c:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        int64_t rax_385 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_385, 7)
                                else
                                label_14018368e:
                                    
                                    if (temp0_1589.b s< 0)
                                        goto label_14018656c
                                
                                zmm1 = _mm256_cvtepu16_epi32(arg6[0].o)
                                zmm0 = _mm256_cvtepu16_epi32(zmm2[0].o)
                            
                            arg5[0].o = zx.o(0)
                            arg6[0].o = zx.o(0)
                            
                            if (arg20 != 1)
                                zmm0 = _mm256_max_epi32(_mm256_sub_epi32(zmm0, zmm1), arg14)
                                zmm1 = _mm256_sub_ps(_mm256_broadcast_ss(var_5e0.d), 
                                    _mm256_cvtepi32_ps(zmm1))
                                arg6 = _mm256_div_ps(zmm1, _mm256_cvtepi32_ps(zmm0))
                            
                            zmm0 = _mm256_blendv_ps(arg5, arg6, arg9 ^ arg10)
                    
                    arg12 = _mm256_blendv_ps(arg12, zmm0, arg8)
            
            zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
            arg10 = _mm256_cvtepu32_epi64(zmm0[0].o)
            float var_a20_3[0x8] = _mm256_cvtepu32_epi64(arg11[0].o)
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg7, var_760_1)
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
            uint32_t var_9c0_6[0x8] = zmm1
            float var_900_4[0x8] = _mm256_cvtepi32_epi64(zmm0[0].o)
            zmm0 = _mm256_cmpeq_epi32(arg17, __vpbroadcastd_ymmqq_memd(2))
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            float var_860_3[0x8] = zmm0
            int64_t var_5f0
            var_5f0.o = zmm1[0].o
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            arg9[0].o = zmm0[0].o & arg13[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg9[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            float var_8a0_3[0x8] = arg10
            float var_740_3[0x8] = arg12
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                var_5e0.32 = arg7
                arg11 = var_a20_3
                arg14 = var_900_4
                zmm0 = _mm256_add_epi64(arg14, arg11)
                arg13 = var_9c0_6
                zmm1 = _mm256_add_epi64(arg13, arg10)
                arg7 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_920_3)
                arg16 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_960_2)
                zmm2 = _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(arg9[0].o), 0x1f), 
                    0x1f)
                arg8 = _mm256_srai_epi32(_mm256_slli_epi32(var_6a0_2, 0x1f), 0x1f)
                zmm0 = arg8 & zmm2
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm1 = __vpbroadcastq_ymmqq_memq(2)
                    arg5 = _mm256_add_epi64(arg7, zmm1)
                    zmm1 = _mm256_add_epi64(arg16, zmm1)
                    arg6 = _mm256_permutevar8x32_ps(data_143442920, zmm0)
                    arg16 = _mm256_blendv_ps(arg16, zmm1, arg6)
                    zmm0 = _mm256_permutevar8x32_ps(data_143442940, zmm0)
                    arg7 = _mm256_blendv_ps(arg7, arg5, zmm0)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(arg10, var_8e0_2)
                    arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg11, var_940_1)
                    arg10 = __vpbroadcastq_ymmqq_memq(4)
                    arg5 = _mm256_add_epi64(arg5, arg14)
                    zmm1 = _mm256_add_epi64(_mm256_add_epi64(zmm1, arg13), arg10)
                    arg5 = _mm256_add_epi64(arg5, arg10)
                    arg10[0].o = zx.o(0)
                    arg5 = _mm256_blendv_ps(arg10, arg5, arg6)
                    zmm0 = _mm256_blendv_ps(arg10, zmm1, zmm0)
                    int64_t r10_2 = arg5[0].q
                    int64_t r8_4 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    zmm1[0].o = _mm256_extracti128_si256(arg5, 1)
                    int64_t r14_5 = zmm1[0].q
                    int64_t rbx_10 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rdi_14 = zmm0[0].q
                    int64_t rsi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    int64_t rcx_25 = zmm0[0].q
                    int64_t rax_297 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = zx.o(*(arg4 + r10_2))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_4), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_5), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_10), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_14), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_13), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_25), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_297), 7)
                    arg14 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(zmm0[0].o))
                
                arg12 = _mm256_broadcast_ss(32767f)
                zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                arg11 = zmm0 & var_980_1
                zmm0 = _mm256_cmpeq_epi32(arg11, zmm0)
                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = arg9[0].o & zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                char temp0_1889 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                
                if (temp0_1889 != 0)
                    if ((temp0_1889 & 1) == 0)
                        if ((temp0_1889 & 2) != 0)
                            goto label_140184ec4
                        
                        goto label_140183f4c
                    
                    arg5[0].o = __vpbroadcastw_xmmdq_memw(*arg16[0].q)
                    
                    if ((temp0_1889 & 2) != 0)
                    label_140184ec4:
                        int64_t rax_320 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_320, 1)
                        
                        if ((temp0_1889 & 4) == 0)
                            goto label_140183f55
                        
                        goto label_140184ed8
                    
                label_140183f4c:
                    
                    if ((temp0_1889 & 4) == 0)
                    label_140183f55:
                        
                        if ((temp0_1889 & 8) != 0)
                            goto label_140184ef1
                        
                        goto label_140183f5e
                    
                label_140184ed8:
                    zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 2)
                    
                    if ((temp0_1889 & 8) != 0)
                    label_140184ef1:
                        zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                        int64_t rax_322 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_322, 3)
                        zmm0 = _mm256_cvtepu16_epi32(zmm1[0].o)
                        
                        if ((temp0_1889 & 0x10) == 0)
                            goto label_140183f6c
                        
                        goto label_140184f15
                    
                label_140183f5e:
                    zmm0 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    int64_t rax_298
                    
                    if ((temp0_1889 & 0x10) != 0)
                    label_140184f15:
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg7[0].q, 4)
                        zmm0 = _mm256_slli_epi32(zmm0, 0x1f)
                        
                        if ((temp0_1889 & 0x20) != 0)
                            rax_298 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_298, 5)
                    else
                    label_140183f6c:
                        zmm0 = _mm256_slli_epi32(zmm0, 0x1f)
                        
                        if ((temp0_1889 & 0x20) != 0)
                            rax_298 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_298, 5)
                    zmm1 = _mm256_srai_epi32(zmm0, 0x1f)
                    arg13 = __vpbroadcastq_ymmqq_memq(2)
                    arg17 = data_143442920
                    arg10 = data_143442940
                    
                    if ((temp0_1889 & 0x40) != 0)
                        zmm0[0].o = _mm256_extracti128_si256(arg7, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 6)
                    
                    zmm0 = _mm256_add_epi64(arg7, arg13)
                    arg13 = _mm256_add_epi64(arg16, arg13)
                    arg17 = _mm256_permutevar8x32_epi32(arg17, zmm1)
                    zmm1 = _mm256_permutevar8x32_epi32(arg10, zmm1)
                    
                    if (temp0_1889 s< 0)
                        arg6[0].o = _mm256_extracti128_si256(arg7, 1)
                        int64_t rax_300 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_300, 7)
                    
                    arg16 = _mm256_blendv_ps(arg16, arg13, arg17)
                    arg7 = _mm256_blendv_ps(arg7, zmm0, zmm1)
                    arg13 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(arg5[0].o))
                    arg17 = var_9a0_2
                
                arg6 = _mm256_blendv_ps(arg12, arg14, arg8)
                zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                arg8 = zmm0 & var_980_1
                zmm0 = _mm256_cmpeq_epi32(arg8, zmm0)
                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm0[0].o &= arg9[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                char temp0_1915 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                
                if (temp0_1915 == 0)
                    arg14 = var_880_2
                else
                    arg14 = var_880_2
                    
                    if ((temp0_1915 & 1) == 0)
                        if ((temp0_1915 & 2) != 0)
                            goto label_140184f40
                        
                        goto label_14018405b
                    
                    arg5[0].o = __vpbroadcastw_xmmdq_memw(*arg16[0].q)
                    
                    if ((temp0_1915 & 2) != 0)
                    label_140184f40:
                        int64_t rax_325 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_325, 1)
                        
                        if ((temp0_1915 & 4) == 0)
                            goto label_140184064
                        
                        goto label_140184f54
                    
                label_14018405b:
                    
                    if ((temp0_1915 & 4) == 0)
                    label_140184064:
                        
                        if ((temp0_1915 & 8) != 0)
                            goto label_140184f6d
                        
                        goto label_14018406d
                    
                label_140184f54:
                    zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 2)
                    
                    if ((temp0_1915 & 8) != 0)
                    label_140184f6d:
                        zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                        int64_t rax_327 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_327, 3)
                        
                        if ((temp0_1915 & 0x10) == 0)
                            goto label_140184076
                        
                        goto label_140184f8c
                    
                label_14018406d:
                    
                    if ((temp0_1915 & 0x10) == 0)
                    label_140184076:
                        
                        if ((temp0_1915 & 0x20) != 0)
                            goto label_140184f9a
                        
                        goto label_14018407f
                    
                label_140184f8c:
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg7[0].q, 4)
                    
                    if ((temp0_1915 & 0x20) != 0)
                    label_140184f9a:
                        int64_t rax_329 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_329, 5)
                        
                        if ((temp0_1915 & 0x40) == 0)
                            goto label_140184088
                        
                        goto label_140184fae
                    
                label_14018407f:
                    
                    if ((temp0_1915 & 0x40) != 0)
                    label_140184fae:
                        zmm0[0].o = _mm256_extracti128_si256(arg7, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 6)
                        
                        if (temp0_1915 s< 0)
                        label_140184fc6:
                            zmm0[0].o = _mm256_extracti128_si256(arg7, 1)
                            int64_t rax_331 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_331, 7)
                    else
                    label_140184088:
                        
                        if (temp0_1915 s< 0)
                            goto label_140184fc6
                    
                    zmm0 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(arg5[0].o))
                
                zmm1[0].o = zx.o(0)
                arg5 = _mm256_cmpeq_epi32(arg8, zmm1)
                arg7 = _mm256_cmpeq_epi32(arg11, zmm1)
                arg8 = _mm256_broadcast_ss(-32767f)
                arg6 = _mm256_add_ps(arg6, arg8)
                arg9 = _mm256_broadcast_ss(3.05185094e-05f)
                arg6 = _mm256_mul_ps(arg6, arg9)
                arg10 = _mm256_mul_ps(_mm256_add_ps(arg13, arg8), arg9)
                arg7 &= not.32(arg10)
                zmm0 = arg5 & not.32(_mm256_mul_ps(_mm256_add_ps(zmm0, arg8), arg9))
                arg5 = _mm256_fnmadd_ps(
                    _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), arg7, 
                        arg7), 
                    zmm0, zmm0)
                zmm1 = _mm256_cmp_ps(zmm1, arg5, 2)
                arg5 = _mm256_sqrt_ps(arg5)
                zmm1 = _mm256_and_ps(zmm1, arg5)
                var_800.32 = _mm256_maskstore_ps(zmm2, arg6)
                var_7e0.32 = _mm256_maskstore_ps(zmm2, arg7)
                var_7c0.32 = _mm256_maskstore_ps(zmm2, zmm0)
                var_7a0.32 = _mm256_maskstore_ps(zmm2, zmm1)
                arg13[0].o = var_9e0[0].o
                arg7 = var_5e0.32
            
            arg10 = _mm256_cmpeq_epi32(arg10, arg10)
            zmm0 = arg10 ^ var_860_3
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            int128_t var_840_1 = zmm0[0].o
            zmm0[0].o &= arg13[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                arg16 = _mm256_cmpeq_epi32(arg17, arg14)
                arg11[0].o = _mm256_extracti128_si256(arg16, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg16[0].o, arg11[0].o)
                zmm0[0].o &= arg13[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    zmm1 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8a0_3, var_8e0_2)
                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(var_a20_3, var_940_1)
                    arg8 = __vpbroadcastq_ymmqq_memq(4)
                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_900_4)
                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_9c0_6)
                    arg9 = _mm256_add_epi64(zmm0, arg8)
                    arg8 = _mm256_add_epi64(zmm2, arg8)
                    arg10 = arg17
                    arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg6[0].o = zmm1[0].o
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    float temp0_1965[0x4]
                    int32_t temp1_61
                    temp0_1965, temp1_61 =
                        _mm256_i64gather_ps(arg12[0].o, *(arg4 + arg8[0].q), arg6[0].o)
                    arg12[0].o = temp0_1965
                    arg6[0].o = temp1_61
                    arg6[0].o = arg7[0].o
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    float temp0_1967[0x4]
                    int32_t temp1_62
                    temp0_1967, temp1_62 =
                        _mm256_i64gather_ps(arg8[0].o, *(arg4 + arg9[0].q), arg6[0].o)
                    arg8[0].o = temp0_1967
                    arg6[0].o = temp1_62
                    arg6 = __vpbroadcastq_ymmqq_memq(8)
                    arg13 = _mm256_add_epi64(zmm0, arg6)
                    arg6 = _mm256_add_epi64(zmm2, arg6)
                    arg9[0].o = zmm1[0].o
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    float temp0_1972[0x4]
                    int32_t temp1_63
                    temp0_1972, temp1_63 =
                        _mm256_i64gather_ps(arg14[0].o, *(arg4 + arg6[0].q), arg9[0].o)
                    arg14[0].o = temp0_1972
                    arg9[0].o = temp1_63
                    arg6[0].o = arg7[0].o
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    float temp0_1974[0x4]
                    int32_t temp1_64
                    temp0_1974, temp1_64 =
                        _mm256_i64gather_ps(arg9[0].o, *(arg4 + arg13[0].q), arg6[0].o)
                    arg9[0].o = temp0_1974
                    arg6[0].o = temp1_64
                    arg6 = __vpbroadcastq_ymmqq_memq(0xc)
                    zmm2 = _mm256_add_epi64(zmm2, arg6)
                    arg5[0].o = zmm1[0].o
                    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                    float temp0_1978[0x4]
                    int32_t temp1_65
                    temp0_1978, temp1_65 =
                        _mm256_i64gather_ps(arg13[0].o, *(arg4 + zmm2[0].q), arg5[0].o)
                    arg13[0].o = temp0_1978
                    arg5[0].o = temp1_65
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    arg5 = _mm256_insertf128_ps(arg12, arg8[0].o, 1)
                    zmm0 = _mm256_add_epi64(zmm0, arg6)
                    float temp0_1982[0x4]
                    int32_t temp1_66
                    temp0_1982, temp1_66 =
                        _mm256_i64gather_ps(zmm2[0].o, *(arg4 + zmm0[0].q), arg7[0].o)
                    zmm2[0].o = temp0_1982
                    arg7[0].o = temp1_66
                    zmm0 = _mm256_insertf128_ps(arg14, arg9[0].o, 1)
                    arg14 = var_880_2
                    zmm2 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                    arg13[0].o = var_9e0[0].o
                    arg6 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg5, arg5), 
                            zmm0, zmm0), 
                        zmm2, zmm2)
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    arg6 = _mm256_and_ps(_mm256_cmp_ps(arg7, arg6, 1), _mm256_sqrt_ps(arg6))
                    arg17 = arg10
                    arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                    var_800.32 = _mm256_maskstore_ps(zmm1, arg5)
                    var_7e0.32 = _mm256_maskstore_ps(zmm1, zmm0)
                    var_7c0.32 = _mm256_maskstore_ps(zmm1, zmm2)
                    var_7a0.32 = _mm256_maskstore_ps(zmm1, arg6)
                
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg16[0].o, arg11[0].o)
                arg12[0].o = zmm0[0].o ^ var_840_1
                zmm0[0].o = arg12[0].o & arg13[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    zmm2 = var_a40_3
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_8c0_1)
                    zmm0[0].o &= arg13[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        var_5e0.32 = arg7
                        arg16 = _mm256_cvtepu16_epi32(zmm0[0].o)
                        zmm0[0].o = zx.o(0)
                        float var_640_3[0x8] = zmm0
                        float var_660_3[0x8] = zmm0
                        float var_680_3[0x8] = zmm0
                        float var_6c0_3[0x8] = zmm0
                        float var_6e0_3[0x8] = zmm0
                        float var_700_3[0x8] = zmm0
                        arg6 = zmm2 & _mm256_srai_epi32(_mm256_slli_epi32(var_6a0_2, 0x1f), 0x1f)
                        arg11 = arg6 & var_720_3
                        zmm1 = var_960_2
                        arg8 = zmm1
                        arg5 = var_920_3
                        
                        if (_mm256_movemask_ps(arg11) != 0)
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            zmm2 = _mm256_add_epi64(zmm1, zmm0)
                            arg5 = _mm256_permutevar8x32_ps(data_143442920, arg11)
                            zmm2 = _mm256_blendv_ps(zmm1, zmm2, arg5)
                            arg7 = _mm256_add_epi64(var_920_3, zmm0)
                            arg14 = data_143442940
                            arg9[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            arg13[0].o = zx.o(0)
                            arg8[0].o = arg11[0].o
                            float temp0_2018[0x4]
                            int32_t temp1_67
                            temp0_2018, temp1_67 =
                                _mm256_i64gather_ps(arg13[0].o, *zmm1[0].q, arg8[0].o)
                            arg13[0].o = temp0_2018
                            arg8[0].o = temp1_67
                            arg8[0].o = arg9[0].o
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            float temp0_2020[0x4]
                            int32_t temp1_68
                            temp0_2020, temp1_68 =
                                _mm256_i64gather_ps(zmm1[0].o, *var_920_3[0].q, arg8[0].o)
                            zmm1[0].o = temp0_2020
                            arg8[0].o = temp1_68
                            arg14 = _mm256_permutevar8x32_ps(arg14, arg11)
                            arg7 = _mm256_blendv_ps(var_920_3, arg7, arg14)
                            var_680_3 =
                                _mm256_maskstore_ps(arg6, _mm256_insertf128_ps(arg13, zmm1[0].o, 1))
                            zmm1 = _mm256_add_epi64(zmm2, zmm0)
                            arg8 = _mm256_blendv_ps(zmm2, zmm1, arg5)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            float temp0_2028[0x4]
                            int32_t temp1_69
                            temp0_2028, temp1_69 =
                                _mm256_i64gather_ps(zmm1[0].o, *zmm2[0].q, arg11[0].o)
                            zmm1[0].o = temp0_2028
                            arg11[0].o = temp1_69
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            float temp0_2030[0x4]
                            int32_t temp1_70
                            temp0_2030, temp1_70 =
                                _mm256_i64gather_ps(zmm2[0].o, *arg7[0].q, arg9[0].o)
                            zmm2[0].o = temp0_2030
                            arg9[0].o = temp1_70
                            arg5 = _mm256_blendv_ps(arg7, _mm256_add_epi64(arg7, zmm0), arg14)
                            var_700_3 =
                                _mm256_maskstore_ps(arg6, _mm256_insertf128_ps(zmm1, zmm2[0].o, 1))
                        
                        arg14 = _mm256_slli_epi32(arg16, 0x1f)
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        arg13 = var_980_1
                        zmm0 = _mm256_cmpeq_epi32(arg13 & zmm0, zmm0)
                        zmm1 = zmm0 & var_a40_3
                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        zmm0[0].o &= var_9e0[0].o
                        zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                            zmm2 = __vpbroadcastq_ymmqq_memq(4)
                            arg7 = _mm256_add_epi64(arg8, zmm2)
                            arg9 = data_143442920
                            arg17 = _mm256_permutevar8x32_epi32(arg9, zmm0)
                            arg7 = _mm256_blendv_ps(arg8, arg7, arg17)
                            arg11 = _mm256_add_epi64(arg5, zmm2)
                            arg13 = data_143442940
                            arg6[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg16[0].o = zx.o(0)
                            arg9[0].o = zmm0[0].o
                            float temp0_2053[0x4]
                            int32_t temp1_71
                            temp0_2053, temp1_71 =
                                _mm256_i64gather_ps(zx.o(0), *arg8[0].q, arg9[0].o)
                            arg16[0].o = temp0_2053
                            arg9[0].o = temp1_71
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            arg9[0].o = arg6[0].o
                            float temp0_2055[0x4]
                            int32_t temp1_72
                            temp0_2055, temp1_72 =
                                _mm256_i64gather_ps(arg8[0].o, *arg5[0].q, arg9[0].o)
                            arg8[0].o = temp0_2055
                            arg9[0].o = temp1_72
                            arg9 = _mm256_permutevar8x32_epi32(arg13, zmm0)
                            arg5 = _mm256_blendv_ps(arg5, arg11, arg9)
                            arg13 = var_980_1
                            var_660_3 =
                                _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(arg16, arg8[0].o, 1))
                            arg8 = _mm256_blendv_ps(arg7, _mm256_add_epi64(arg7, zmm2), arg17)
                            arg17 = var_9a0_2
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            float temp0_2063[0x4]
                            int32_t temp1_73
                            temp0_2063, temp1_73 =
                                _mm256_i64gather_ps(arg11[0].o, *arg7[0].q, zmm0[0].o)
                            arg11[0].o = temp0_2063
                            zmm0[0].o = temp1_73
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_2065[0x4]
                            int32_t temp1_74
                            temp0_2065, temp1_74 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg5[0].q, arg6[0].o)
                            zmm0[0].o = temp0_2065
                            arg6[0].o = temp1_74
                            zmm2 = _mm256_add_epi64(arg5, zmm2)
                            arg5 = _mm256_blendv_ps(arg5, zmm2, arg9)
                            var_6e0_3 =
                                _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(arg11, zmm0[0].o, 1))
                        
                        arg10 = _mm256_cmpeq_epi32(var_920_3, var_920_3)
                        arg6 = _mm256_srai_epi32(arg14, 0x1f)
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                        zmm0 = _mm256_cmpeq_epi32(arg13 & zmm0, zmm0)
                        zmm1 = zmm0 & var_a40_3
                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        arg13[0].o = var_9e0[0].o
                        zmm0[0].o &= arg13[0].o
                        zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                            zmm2 = __vpbroadcastq_ymmqq_memq(4)
                            arg7 = _mm256_add_epi64(arg8, zmm2)
                            arg9 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                            arg13 = _mm256_blendv_ps(arg8, arg7, arg9)
                            zmm2 = _mm256_add_epi64(arg5, zmm2)
                            arg11 = data_143442940
                            arg9[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg7[0].o = zmm0[0].o
                            arg14[0].o = zx.o(0)
                            float temp0_2089[0x4]
                            int32_t temp1_75
                            temp0_2089, temp1_75 =
                                _mm256_i64gather_ps(zx.o(0), *arg8[0].q, arg7[0].o)
                            arg14[0].o = temp0_2089
                            arg7[0].o = temp1_75
                            arg7[0].o = arg9[0].o
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            float temp0_2091[0x4]
                            int32_t temp1_76
                            temp0_2091, temp1_76 =
                                _mm256_i64gather_ps(arg8[0].o, *arg5[0].q, arg7[0].o)
                            arg8[0].o = temp0_2091
                            arg7[0].o = temp1_76
                            zmm2 = _mm256_blendv_ps(arg5, zmm2, 
                                _mm256_permutevar8x32_epi32(arg11, zmm0))
                            arg5 = _mm256_insertf128_ps(arg14, arg8[0].o, 1)
                            var_640_3 = _mm256_maskstore_ps(zmm1, arg5)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_2097[0x4]
                            int32_t temp1_77
                            temp0_2097, temp1_77 =
                                _mm256_i64gather_ps(arg5[0].o, *arg13[0].q, zmm0[0].o)
                            arg5[0].o = temp0_2097
                            zmm0[0].o = temp1_77
                            arg13[0].o = var_9e0[0].o
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_2099[0x4]
                            int32_t temp1_78
                            temp0_2099, temp1_78 =
                                _mm256_i64gather_ps(zmm0[0].o, *zmm2[0].q, arg9[0].o)
                            zmm0[0].o = temp0_2099
                            arg9[0].o = temp1_78
                            var_6c0_3 =
                                _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(arg5, zmm0[0].o, 1))
                        
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8a0_3, var_8e0_2)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_a20_3, var_940_1)
                        zmm2 = __vpbroadcastq_ymmqq_memq(4)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_900_4)
                        zmm0 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(zmm0, var_9c0_6), zmm2)
                        zmm1 = _mm256_add_epi64(zmm1, zmm2)
                        zmm2[0].o = zx.o(0)
                        arg5[0].o = arg6[0].o
                        uint32_t temp0_2109[0x4]
                        int32_t temp1_79
                        temp0_2109, temp1_79 =
                            _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm1[0].q), arg5[0].o)
                        zmm2[0].o = temp0_2109
                        arg5[0].o = temp1_79
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg5[0].o = zx.o(0)
                        uint32_t temp0_2111[0x4]
                        int32_t temp1_80
                        temp0_2111, temp1_80 =
                            _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm0[0].q), zmm1[0].o)
                        arg5[0].o = temp0_2111
                        zmm1[0].o = temp1_80
                        zmm0 = _mm256_inserti128_si256(zmm2, arg5[0].o, 1)
                        zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                        zmm2 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg5 = __vpbroadcastd_ymmqq_memd(0x3ff)
                        arg7 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg7))
                        arg8 = _mm256_broadcast_ss(1023f)
                        zmm1 = _mm256_div_ps(zmm1, arg8)
                        zmm0 &= arg5
                        arg9 = var_6e0_3
                        zmm2 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg7)), arg8)
                        arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_700_3, zmm1, var_680_3)
                        zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg9, var_660_3)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, 
                            __vpbroadcastd_ymmqq_memd(0xfffffe01)))
                        arg7 = _mm256_broadcast_ss(511f)
                        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_div_ps(zmm0, arg7), 
                            var_6c0_3, var_640_3)
                        zmm1 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg5, arg5), 
                                zmm2, zmm2), 
                            zmm0, zmm0)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        zmm1 = _mm256_and_ps(_mm256_cmp_ps(arg7, zmm1, 1), _mm256_sqrt_ps(zmm1))
                        var_800.32 = _mm256_maskstore_ps(arg6, arg5)
                        var_7e0.32 = _mm256_maskstore_ps(arg6, zmm2)
                        var_7c0.32 = _mm256_maskstore_ps(arg6, zmm0)
                        var_7a0.32 = _mm256_maskstore_ps(arg6, zmm1)
                        zmm2 = var_a40_3
                        arg14 = var_880_2
                        arg7 = var_5e0.32
                    
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_8c0_1)
                    arg5[0].o = arg12[0].o ^ zmm0[0].o
                    zmm0[0].o = arg5[0].o & arg13[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0 = __vpbroadcastd_ymmqq_memd(5)
                        arg6 = _mm256_cmpeq_epi32(arg17, zmm0)
                        arg8[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                        zmm0[0].o &= arg13[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            arg9 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                            zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8a0_3, var_8e0_2)
                            zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_a20_3, var_940_1)
                            zmm2 = __vpbroadcastq_ymmqq_memq(4)
                            zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_900_4)
                            zmm0 =
                                _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(zmm0, var_9c0_6), zmm2)
                            zmm1 = _mm256_add_epi64(zmm1, zmm2)
                            zmm2[0].o = zx.o(0)
                            arg16 = arg7
                            arg7[0].o = arg9[0].o
                            uint32_t temp0_2168[0x4]
                            int32_t temp1_81
                            temp0_2168, temp1_81 =
                                _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm1[0].q), arg7[0].o)
                            zmm2[0].o = temp0_2168
                            arg7[0].o = temp1_81
                            zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                            arg7[0].o = zx.o(0)
                            uint32_t temp0_2170[0x4]
                            int32_t temp1_82
                            temp0_2170, temp1_82 =
                                _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm0[0].q), zmm1[0].o)
                            arg7[0].o = temp0_2170
                            zmm1[0].o = temp1_82
                            zmm0 = _mm256_inserti128_si256(zmm2, arg7[0].o, 1)
                            zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                            zmm2 = _mm256_srli_epi32(zmm0, 0xa)
                            arg7 = _mm256_srli_epi32(zmm0, 5)
                            arg11 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                            arg12 = __vpbroadcastd_ymmqq_memd(0x400)
                            arg13 = __vpbroadcastd_ymmqq_memd(0x380)
                            arg14 = __vpbroadcastd_ymmqq_memd(0x3d80)
                            zmm1 = (arg7 & arg11) | (zmm1 & arg12)
                                | _mm256_add_epi32(zmm1 & arg13, arg14)
                            arg7 = (_mm256_slli_epi32(zmm0, 6) & arg11) | (zmm2 & arg12)
                            arg13[0].o = var_9e0[0].o
                            zmm2 = _mm256_add_epi32(zmm2 & arg13, arg14)
                            arg14 = var_880_2
                            zmm2 |= arg7
                            arg7 = zmm0 & __vpbroadcastd_ymmqq_memd(0x1c0)
                            arg11 =
                                _mm256_slli_epi32(zmm0, 0x11) & __vpbroadcastd_ymmqq_memd(0x7e0000)
                            arg12 = __vpbroadcastd_ymmqq_memd(0x200)
                            zmm0 = arg11 | (zmm0 & arg12)
                            arg11 = __vpbroadcastd_ymmqq_memd(0x1ec0)
                            zmm0 |= _mm256_add_epi32(arg7, arg11)
                            arg7 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm1, zmm1), zmm2, 
                                    zmm2), 
                                zmm0, zmm0)
                            arg11[0].o = zx.o(0)
                            arg11 = _mm256_cmp_ps(arg11, arg7, 1)
                            arg7 = _mm256_and_ps(arg11, _mm256_sqrt_ps(arg7))
                            var_800.32 = _mm256_maskstore_ps(arg9, zmm1)
                            var_7e0.32 = _mm256_maskstore_ps(arg9, zmm2)
                            var_7c0.32 = _mm256_maskstore_ps(arg9, zmm0)
                            var_7a0.32 = _mm256_maskstore_ps(arg9, arg7)
                            arg7 = arg16
                        
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                        zmm0[0].o ^= arg5[0].o
                        arg5[0].o = zmm0[0].o & arg13[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            arg6 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg17, var_780_2)
                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                            zmm0[0].o &= arg5[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm1 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                                zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8a0_3, var_8e0_2)
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(var_a20_3, var_940_1)
                                arg10 = arg7
                                arg7 = __vpbroadcastq_ymmqq_memq(4)
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_900_4)
                                zmm0 = _mm256_add_epi64(
                                    __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_9c0_6), arg7)
                                zmm2 = _mm256_add_epi64(zmm2, arg7)
                                arg7[0].o = zmm1[0].o
                                arg8[0].o = zx.o(0)
                                uint32_t temp0_2221[0x4]
                                int32_t temp1_83
                                temp0_2221, temp1_83 =
                                    _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm2[0].q), arg7[0].o)
                                arg8[0].o = temp0_2221
                                arg7[0].o = temp1_83
                                zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                                arg7[0].o = zx.o(0)
                                uint32_t temp0_2223[0x4]
                                int32_t temp1_84
                                temp0_2223, temp1_84 =
                                    _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm0[0].q), zmm2[0].o)
                                arg7[0].o = temp0_2223
                                zmm2[0].o = temp1_84
                                zmm0 = _mm256_inserti128_si256(arg8, arg7[0].o, 1)
                                zmm2 = _mm256_srli_epi32(zmm0, 0x15)
                                arg7 =
                                    _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                                arg8 = __vpbroadcastd_ymmqq_memd(0x3ff)
                                arg9 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg9))
                                arg11 = _mm256_broadcast_ss(1023f)
                                zmm2 = _mm256_div_ps(zmm2, arg11)
                                arg7 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, arg9)), arg11)
                                zmm0 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0 & arg8, 
                                        __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                    _mm256_broadcast_ss(511f))
                                arg8 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm2, zmm2), 
                                        arg7, arg7), 
                                    zmm0, zmm0)
                                arg9[0].o = zx.o(0)
                                arg9 = _mm256_cmp_ps(arg9, arg8, 1)
                                arg8 = _mm256_and_ps(arg9, _mm256_sqrt_ps(arg8))
                                var_800.32 = _mm256_maskstore_ps(zmm1, zmm2)
                                var_7e0.32 = _mm256_maskstore_ps(zmm1, arg7)
                                arg7 = arg10
                                arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                                var_7c0.32 = _mm256_maskstore_ps(zmm1, zmm0)
                                var_7a0.32 = _mm256_maskstore_ps(zmm1, arg8)
                            
                            zmm0 = arg6 ^ _mm256_cmpeq_epi32(zmm0, zmm0)
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm1[0].o = arg5[0].o & zmm0[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                                zmm0 = _mm256_cmpeq_epi32(arg17, __vpbroadcastd_ymmqq_memd(6))
                                zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm2[0].o &= arg5[0].o
                                arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                                arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                                arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                                    zmm2 = _mm256_srai_epi32(
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f), 
                                        0x1f)
                                    arg5[0].o = zx.o(0)
                                    var_800.32 = _mm256_maskstore_ps(zmm2, arg5)
                                    var_7e0.32 = _mm256_maskstore_ps(zmm2, arg5)
                                    var_7c0.32 = _mm256_maskstore_ps(zmm2, arg5)
                                    var_7a0.32 = _mm256_maskstore_ps(zmm2, _mm256_broadcast_ss(1f))
                                
                                zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
                                zmm0 ^= zmm2
                                zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                zmm0[0].o &= zmm1[0].o
                                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                    zmm0 = _mm256_srai_epi32(
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 
                                        0x1f)
                                    zmm1[0].o = zx.o(0)
                                    var_800.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    var_7e0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    var_7c0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    zmm1 = _mm256_broadcast_ss(1f)
                                    var_7a0.32 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm2 = var_a00_4
            zmm0 = _mm256_cmpeq_epi32(arg7, zmm2) ^ arg10
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            arg16[0].o = zmm0[0].o & arg13[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg16[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                arg5 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg16[0].o), 0x1f)
                zmm0 = var_860_3
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm0[0].o, var_5f0.o)
                zmm1 = __vpmulld_ymmqq_ymmqq_memqq(zmm2, var_760_1)
                zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                arg12 = _mm256_cvtepi32_epi64(zmm2[0].o)
                arg13 = _mm256_cvtepi32_epi64(zmm1[0].o)
                arg9[0].o = arg16[0].o & zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg9[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                uint32_t var_9e0_1[0x8] = arg13
                float var_5a0[0x8]
                int32_t var_580[0x8]
                uint32_t var_560[0x8]
                int32_t var_540[0x8]
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    arg7 = var_a20_3
                    zmm0 = _mm256_add_epi64(arg13, arg7)
                    arg14 =
                        __vpaddq_ymmqq_ymmqq_memqq(_mm256_add_epi64(arg12, var_8a0_3), var_920_3)
                    arg17 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_960_2)
                    arg10 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg9[0].o), 0x1f), 0x1f)
                    arg11 = _mm256_srai_epi32(_mm256_slli_epi32(var_6a0_2, 0x1f), 0x1f)
                    zmm0 = arg11 & arg10
                    float var_9c0_7[0x8] = arg5
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm1 = __vpbroadcastq_ymmqq_memq(2)
                        zmm2 = _mm256_add_epi64(arg14, zmm1)
                        zmm1 = _mm256_add_epi64(arg17, zmm1)
                        arg5 = _mm256_permutevar8x32_ps(data_143442920, zmm0)
                        arg17 = _mm256_blendv_ps(arg17, zmm1, arg5)
                        zmm0 = _mm256_permutevar8x32_ps(data_143442940, zmm0)
                        arg14 = _mm256_blendv_ps(arg14, zmm2, zmm0)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_8a0_3, var_8e0_2)
                        zmm2 = __vpaddq_ymmqq_ymmqq_memqq(arg7, var_940_1)
                        arg6 = __vpbroadcastq_ymmqq_memq(4)
                        zmm2 = _mm256_add_epi64(zmm2, arg13)
                        zmm1 = _mm256_add_epi64(_mm256_add_epi64(zmm1, arg12), arg6)
                        zmm2 = _mm256_add_epi64(zmm2, arg6)
                        arg6[0].o = zx.o(0)
                        zmm2 = _mm256_blendv_ps(arg6, zmm2, arg5)
                        zmm0 = _mm256_blendv_ps(arg6, zmm1, zmm0)
                        int64_t r10_3 = zmm2[0].q
                        int64_t r8_5 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                        int64_t r14_6 = zmm1[0].q
                        int64_t rbx_11 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rdi_15 = zmm0[0].q
                        int64_t rsi_14 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rcx_28 = zmm0[0].q
                        int64_t rax_318 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = zx.o(*(arg4 + r10_3))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_5), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_6), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_11), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_15), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_14), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_28), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_318), 7)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(zmm0[0].o))
                    
                    arg5 = _mm256_broadcast_ss(32767f)
                    zmm1 = __vpbroadcastd_ymmqq_memd(0x2000000)
                    arg7 = zmm1 & var_980_1
                    zmm1 = _mm256_cmpeq_epi32(arg7, zmm1)
                    zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm1[0].o &= arg9[0].o
                    zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    char temp0_2376 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
                    zmm2 = __vpbroadcastd_ymmqq_memd(0x7fc00000)
                    
                    if (temp0_2376 == 0)
                        arg13 = zmm2
                    else
                        if ((temp0_2376 & 1) == 0)
                            if ((temp0_2376 & 2) != 0)
                                goto label_140186231
                            
                            goto label_14018504d
                        
                        arg5[0].o = __vpbroadcastw_xmmdq_memw(*arg17[0])
                        float var_760_2[0x8]
                        
                        if ((temp0_2376 & 2) != 0)
                        label_140186231:
                            int64_t rax_351 = __vpextrq_gpr64q_xmmdq_immb(arg17[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_351, 1)
                            var_760_2 = zmm2
                            
                            if ((temp0_2376 & 4) == 0)
                                goto label_14018505c
                            
                            goto label_14018624e
                        
                    label_14018504d:
                        var_760_2 = zmm2
                        
                        if ((temp0_2376 & 4) == 0)
                        label_14018505c:
                            
                            if ((temp0_2376 & 8) != 0)
                                goto label_140186267
                            
                            goto label_140185065
                        
                    label_14018624e:
                        zmm2[0].o = _mm256_extracti128_si256(arg17, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm2[0].q, 2)
                        
                        if ((temp0_2376 & 8) != 0)
                        label_140186267:
                            zmm2[0].o = _mm256_extracti128_si256(arg17, 1)
                            int64_t rax_353 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_353, 3)
                            zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                            
                            if ((temp0_2376 & 0x10) == 0)
                                goto label_140185073
                            
                            goto label_14018628b
                        
                    label_140185065:
                        zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                        int64_t rax_332
                        
                        if ((temp0_2376 & 0x10) != 0)
                        label_14018628b:
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg14[0].q, 4)
                            zmm1 = _mm256_slli_epi32(zmm1, 0x1f)
                            
                            if ((temp0_2376 & 0x20) != 0)
                                rax_332 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_332, 5)
                        else
                        label_140185073:
                            zmm1 = _mm256_slli_epi32(zmm1, 0x1f)
                            
                            if ((temp0_2376 & 0x20) != 0)
                                rax_332 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_332, 5)
                        arg6 = arg10
                        zmm1 = _mm256_srai_epi32(zmm1, 0x1f)
                        arg13 = __vpbroadcastq_ymmqq_memq(2)
                        zmm2 = data_143442920
                        arg10 = zmm0
                        arg8 = arg12
                        
                        if ((temp0_2376 & 0x40) != 0)
                            zmm0[0].o = _mm256_extracti128_si256(arg14, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 6)
                        
                        arg12 = _mm256_add_epi64(arg14, arg13)
                        arg13 = _mm256_add_epi64(arg17, arg13)
                        zmm2 = _mm256_permutevar8x32_epi32(zmm2, zmm1)
                        zmm0 = data_143442940
                        zmm1 = _mm256_permutevar8x32_epi32(zmm0, zmm1)
                        
                        if (temp0_2376 s< 0)
                            zmm0[0].o = _mm256_extracti128_si256(arg14, 1)
                            int64_t rax_334 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_334, 7)
                        
                        arg17 = _mm256_blendv_ps(arg17, arg13, zmm2)
                        arg14 = _mm256_blendv_ps(arg14, arg12, zmm1)
                        zmm0 = _mm256_add_ps(_mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(arg5[0].o)), 
                            _mm256_broadcast_ss(-32767f))
                        zmm1 = _mm256_broadcast_ss(3.05185094e-05f)
                        arg13 = _mm256_mul_ps(zmm0, zmm1)
                        arg12 = arg8
                        zmm0 = arg10
                        arg10 = arg6
                        zmm2 = var_760_2
                    
                    arg8 = _mm256_blendv_ps(arg5, zmm0, arg11)
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                    arg11 = zmm0 & var_980_1
                    zmm0 = _mm256_cmpeq_epi32(arg11, zmm0)
                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm0[0].o &= arg9[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_2407 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_2407 != 0)
                        if ((temp0_2407 & 1) == 0)
                            if ((temp0_2407 & 2) != 0)
                                goto label_1401862b6
                            
                            goto label_140185198
                        
                        arg5[0].o = __vpbroadcastw_xmmdq_memw(*arg17[0])
                        
                        if ((temp0_2407 & 2) != 0)
                        label_1401862b6:
                            int64_t rax_356 = __vpextrq_gpr64q_xmmdq_immb(arg17[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_356, 1)
                            
                            if ((temp0_2407 & 4) == 0)
                                goto label_1401851a1
                            
                            goto label_1401862ca
                        
                    label_140185198:
                        
                        if ((temp0_2407 & 4) == 0)
                        label_1401851a1:
                            
                            if ((temp0_2407 & 8) != 0)
                                goto label_1401862e3
                            
                            goto label_1401851aa
                        
                    label_1401862ca:
                        zmm0[0].o = _mm256_extracti128_si256(arg17, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 2)
                        
                        if ((temp0_2407 & 8) != 0)
                        label_1401862e3:
                            zmm0[0].o = _mm256_extracti128_si256(arg17, 1)
                            int64_t rax_358 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_358, 3)
                            
                            if ((temp0_2407 & 0x10) == 0)
                                goto label_1401851b3
                            
                            goto label_140186302
                        
                    label_1401851aa:
                        
                        if ((temp0_2407 & 0x10) == 0)
                        label_1401851b3:
                            
                            if ((temp0_2407 & 0x20) != 0)
                                goto label_140186310
                            
                            goto label_1401851bc
                        
                    label_140186302:
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg14[0].q, 4)
                        
                        if ((temp0_2407 & 0x20) != 0)
                        label_140186310:
                            int64_t rax_360 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_360, 5)
                            
                            if ((temp0_2407 & 0x40) == 0)
                                goto label_1401851c5
                            
                            goto label_140186324
                        
                    label_1401851bc:
                        
                        if ((temp0_2407 & 0x40) != 0)
                        label_140186324:
                            zmm0[0].o = _mm256_extracti128_si256(arg14, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 6)
                            
                            if (temp0_2407 s< 0)
                            label_14018633c:
                                zmm0[0].o = _mm256_extracti128_si256(arg14, 1)
                                int64_t rax_362 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_362, 7)
                        else
                        label_1401851c5:
                            
                            if (temp0_2407 s< 0)
                                goto label_14018633c
                        
                        zmm0 = _mm256_add_ps(_mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(arg5[0].o)), 
                            _mm256_broadcast_ss(-32767f))
                        zmm2 = _mm256_mul_ps(zmm0, _mm256_broadcast_ss(3.05185094e-05f))
                    
                    zmm0[0].o = zx.o(0)
                    zmm1 = _mm256_cmpeq_epi32(arg11, zmm0) & not.32(zmm2)
                    zmm2 = _mm256_cmpeq_epi32(arg7, zmm0) & not.32(arg13)
                    arg5 = _mm256_mul_ps(_mm256_add_ps(arg8, _mm256_broadcast_ss(-32767f)), 
                        _mm256_broadcast_ss(3.05185094e-05f))
                    arg6 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg5, arg5), 
                            zmm2, zmm2), 
                        zmm1, zmm1)
                    zmm0 = _mm256_cmp_ps(zmm0, arg6, 2)
                    arg6 = _mm256_sqrt_ps(arg6)
                    zmm0 = _mm256_and_ps(zmm0, arg6)
                    var_5a0 = _mm256_maskstore_ps(arg10, arg5)
                    var_580 = _mm256_maskstore_ps(arg10, zmm2)
                    var_560 = _mm256_maskstore_ps(arg10, zmm1)
                    var_540 = _mm256_maskstore_ps(arg10, zmm0)
                    arg17 = var_9a0_2
                    arg14 = var_880_2
                    arg13 = var_9e0_1
                    arg5 = var_9c0_7
                
                arg10 = _mm256_srai_epi32(arg5, 0x1f)
                zmm0[0].o = arg16[0].o & var_840_1
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                arg5 = var_a40_3
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    arg17 = _mm256_cmpeq_epi32(arg17, arg14)
                    arg11[0].o = _mm256_extracti128_si256(arg17, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg17[0].o, arg11[0].o)
                    zmm0[0].o &= arg16[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8a0_3, var_8e0_2)
                        zmm2 = __vpaddq_ymmqq_ymmqq_memqq(var_a20_3, var_940_1)
                        arg8 = __vpbroadcastq_ymmqq_memq(4)
                        zmm2 = _mm256_add_epi64(zmm2, arg13)
                        zmm0 = _mm256_add_epi64(zmm0, arg12)
                        arg9 = _mm256_add_epi64(zmm0, arg8)
                        arg8 = _mm256_add_epi64(zmm2, arg8)
                        arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg6[0].o = zmm1[0].o
                        var_880_2[0].o = arg16[0].o
                        arg16 = arg10
                        arg12[0].o = zx.o(0)
                        float temp0_2454[0x4]
                        int32_t temp1_85
                        temp0_2454, temp1_85 =
                            _mm256_i64gather_ps(arg12[0].o, *(arg4 + arg8[0].q), arg6[0].o)
                        arg12[0].o = temp0_2454
                        arg6[0].o = temp1_85
                        arg6[0].o = arg7[0].o
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_2456[0x4]
                        int32_t temp1_86
                        temp0_2456, temp1_86 =
                            _mm256_i64gather_ps(arg8[0].o, *(arg4 + arg9[0].q), arg6[0].o)
                        arg8[0].o = temp0_2456
                        arg6[0].o = temp1_86
                        arg6 = __vpbroadcastq_ymmqq_memq(8)
                        arg13 = _mm256_add_epi64(zmm0, arg6)
                        arg6 = _mm256_add_epi64(zmm2, arg6)
                        arg9[0].o = zmm1[0].o
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                        float temp0_2461[0x4]
                        int32_t temp1_87
                        temp0_2461, temp1_87 =
                            _mm256_i64gather_ps(arg14[0].o, *(arg4 + arg6[0].q), arg9[0].o)
                        arg14[0].o = temp0_2461
                        arg9[0].o = temp1_87
                        arg6[0].o = arg7[0].o
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        float temp0_2463[0x4]
                        int32_t temp1_88
                        temp0_2463, temp1_88 =
                            _mm256_i64gather_ps(arg9[0].o, *(arg4 + arg13[0].q), arg6[0].o)
                        arg9[0].o = temp0_2463
                        arg6[0].o = temp1_88
                        arg6 = __vpbroadcastq_ymmqq_memq(0xc)
                        zmm2 = _mm256_add_epi64(zmm2, arg6)
                        arg5[0].o = zmm1[0].o
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        float temp0_2467[0x4]
                        int32_t temp1_89
                        temp0_2467, temp1_89 =
                            _mm256_i64gather_ps(arg13[0].o, *(arg4 + zmm2[0].q), arg5[0].o)
                        arg13[0].o = temp0_2467
                        arg5[0].o = temp1_89
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        arg5 = _mm256_insertf128_ps(arg12, arg8[0].o, 1)
                        arg10 = arg16
                        arg16[0].o = var_880_2[0].o
                        zmm0 = _mm256_add_epi64(zmm0, arg6)
                        float temp0_2471[0x4]
                        int32_t temp1_90
                        temp0_2471, temp1_90 =
                            _mm256_i64gather_ps(zmm2[0].o, *(arg4 + zmm0[0].q), arg7[0].o)
                        zmm2[0].o = temp0_2471
                        arg7[0].o = temp1_90
                        zmm0 = _mm256_insertf128_ps(arg14, arg9[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                        arg13 = var_9e0_1
                        arg6 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg5, arg5), 
                                zmm0, zmm0), 
                            zmm2, zmm2)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg6 = _mm256_and_ps(_mm256_cmp_ps(arg7, arg6, 1), _mm256_sqrt_ps(arg6))
                        var_5a0 = _mm256_maskstore_ps(zmm1, arg5)
                        arg5 = var_a40_3
                        var_580 = _mm256_maskstore_ps(zmm1, zmm0)
                        var_560 = _mm256_maskstore_ps(zmm1, zmm2)
                        var_540 = _mm256_maskstore_ps(zmm1, arg6)
                    
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg17[0].o, arg11[0].o)
                    zmm2[0].o = zmm0[0].o ^ var_840_1
                    zmm0[0].o = arg16[0].o & zmm2[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg17 = var_9a0_2
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(arg5[0].o, var_8c0_1)
                        zmm0[0].o &= arg16[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            arg13 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            zmm0[0].o = zx.o(0)
                            float var_640_4[0x8] = zmm0
                            float var_660_4[0x8] = zmm0
                            float var_680_4[0x8] = zmm0
                            float var_6c0_4[0x8] = zmm0
                            int32_t var_6e0_4[0x8] = zmm0
                            float var_700_4[0x8] = zmm0
                            arg5 &= _mm256_srai_epi32(_mm256_slli_epi32(var_6a0_2, 0x1f), 0x1f)
                            arg6 = arg5 & arg10
                            bool cond:20_1 = _mm256_movemask_ps(arg6) == 0
                            var_880_2[0].o = zmm2[0].o
                            
                            if (not(cond:20_1))
                                zmm0 = __vpbroadcastq_ymmqq_memq(4)
                                arg9 = var_960_2
                                arg7 = _mm256_add_epi64(arg9, zmm0)
                                arg8 = _mm256_permutevar8x32_ps(data_143442920, arg6)
                                arg7 = _mm256_blendv_ps(arg9, arg7, arg8)
                                arg17 = _mm256_add_epi64(var_920_3, zmm0)
                                arg11 = data_143442940
                                zmm2[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                                zmm1[0].o = arg6[0].o
                                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                                float temp0_2507[0x4]
                                int32_t temp1_91
                                temp0_2507, temp1_91 =
                                    _mm256_i64gather_ps(arg14[0].o, *arg9[0].q, zmm1[0].o)
                                arg14[0].o = temp0_2507
                                zmm1[0].o = temp1_91
                                zmm1[0].o = zmm2[0].o
                                arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                                float temp0_2509[0x4]
                                int32_t temp1_92
                                temp0_2509, temp1_92 =
                                    _mm256_i64gather_ps(arg9[0].o, *var_920_3[0].q, zmm1[0].o)
                                arg9[0].o = temp0_2509
                                zmm1[0].o = temp1_92
                                zmm1 = _mm256_permutevar8x32_ps(arg11, arg6)
                                arg11 = _mm256_blendv_ps(var_920_3, arg17, zmm1)
                                var_680_4 = _mm256_maskstore_ps(arg5, 
                                    _mm256_insertf128_ps(arg14, arg9[0].o, 1))
                                arg9 = _mm256_add_epi64(arg7, zmm0)
                                arg8 = _mm256_blendv_ps(arg7, arg9, arg8)
                                var_960_2 = arg8
                                arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                                float temp0_2517[0x4]
                                int32_t temp1_93
                                temp0_2517, temp1_93 =
                                    _mm256_i64gather_ps(arg8[0].o, *arg7[0].q, arg6[0].o)
                                arg8[0].o = temp0_2517
                                arg6[0].o = temp1_93
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                float temp0_2519[0x4]
                                int32_t temp1_94
                                temp0_2519, temp1_94 =
                                    _mm256_i64gather_ps(arg6[0].o, *arg11[0].q, zmm2[0].o)
                                arg6[0].o = temp0_2519
                                zmm2[0].o = temp1_94
                                var_920_3 =
                                    _mm256_blendv_ps(arg11, _mm256_add_epi64(arg11, zmm0), zmm1)
                                var_700_4 = _mm256_maskstore_ps(arg5, 
                                    _mm256_insertf128_ps(arg8, arg6[0].o, 1))
                            
                            zmm2 = var_a40_3
                            arg14 = _mm256_slli_epi32(arg13, 0x1f)
                            zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                            zmm0 = _mm256_cmpeq_epi32(zmm0 & var_980_1, zmm0)
                            zmm1 = zmm0 & zmm2
                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm0[0].o &= arg16[0].o
                            arg6[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            arg6[0].o = __vpsraw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                                zmm0 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                                zmm2 = __vpbroadcastq_ymmqq_memq(4)
                                arg6 = _mm256_add_epi64(var_960_2, zmm2)
                                arg7 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                                arg6 = _mm256_blendv_ps(var_960_2, arg6, arg7)
                                arg17 = _mm256_add_epi64(var_920_3, zmm2)
                                arg11 = data_143442940
                                arg9[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg13[0].o = zx.o(0)
                                arg5[0].o = zmm0[0].o
                                float temp0_2542[0x4]
                                int32_t temp1_95
                                temp0_2542, temp1_95 =
                                    _mm256_i64gather_ps(zx.o(0), *var_960_2[0].q, arg5[0].o)
                                arg13[0].o = temp0_2542
                                arg5[0].o = temp1_95
                                arg5[0].o = arg9[0].o
                                var_960_2[0].o =
                                    __vxorps_xmmdq_xmmdq_xmmdq(var_960_2[0].o, var_960_2[0].o)
                                float temp0_2544[0x4]
                                int32_t temp1_96
                                temp0_2544, temp1_96 =
                                    _mm256_i64gather_ps(var_960_2[0].o, *var_920_3[0].q, arg5[0].o)
                                var_960_2[0].o = temp0_2544
                                arg5[0].o = temp1_96
                                arg5 = _mm256_permutevar8x32_epi32(arg11, zmm0)
                                arg11 = _mm256_blendv_ps(var_920_3, arg17, arg5)
                                var_660_4 = _mm256_maskstore_ps(zmm1, 
                                    _mm256_insertf128_ps(arg13, var_960_2[0].o, 1))
                                arg7 = _mm256_blendv_ps(arg6, _mm256_add_epi64(arg6, zmm2), arg7)
                                var_960_2 = arg7
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                float temp0_2552[0x4]
                                int32_t temp1_97
                                temp0_2552, temp1_97 =
                                    _mm256_i64gather_ps(arg7[0].o, *arg6[0].q, zmm0[0].o)
                                arg7[0].o = temp0_2552
                                zmm0[0].o = temp1_97
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                float temp0_2554[0x4]
                                int32_t temp1_98
                                temp0_2554, temp1_98 =
                                    _mm256_i64gather_ps(zmm0[0].o, *arg11[0].q, arg9[0].o)
                                zmm0[0].o = temp0_2554
                                arg9[0].o = temp1_98
                                var_920_3 =
                                    _mm256_blendv_ps(arg11, _mm256_add_epi64(arg11, zmm2), arg5)
                                zmm2 = var_a40_3
                                var_6e0_4 = _mm256_maskstore_ps(zmm1, 
                                    _mm256_insertf128_ps(arg7, zmm0[0].o, 1))
                            
                            arg17 = var_9a0_2
                            arg12 = arg12
                            arg13 = var_9e0_1
                            arg6 = _mm256_srai_epi32(arg14, 0x1f)
                            zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                            zmm0 = _mm256_cmpeq_epi32(zmm0 & var_980_1, zmm0)
                            zmm1 = zmm0 & zmm2
                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            zmm0[0].o &= arg16[0].o
                            zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                                zmm0 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                                zmm2 = __vpbroadcastq_ymmqq_memq(4)
                                arg5 = _mm256_add_epi64(var_960_2, zmm2)
                                arg7 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                                arg13 = _mm256_blendv_ps(var_960_2, arg5, arg7)
                                arg14 = arg10
                                zmm2 = _mm256_add_epi64(var_920_3, zmm2)
                                arg11 = data_143442940
                                arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                                arg7[0].o = zmm0[0].o
                                float temp0_2578[0x4]
                                int32_t temp1_99
                                temp0_2578, temp1_99 =
                                    _mm256_i64gather_ps(arg9[0].o, *var_960_2[0].q, arg7[0].o)
                                arg9[0].o = temp0_2578
                                arg7[0].o = temp1_99
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                var_960_2[0].o = arg5[0].o
                                float temp0_2580[0x4]
                                int32_t temp1_100
                                temp0_2580, temp1_100 =
                                    _mm256_i64gather_ps(arg7[0].o, *var_920_3[0].q, var_960_2[0].o)
                                arg7[0].o = temp0_2580
                                var_960_2[0].o = temp1_100
                                zmm2 = _mm256_blendv_ps(var_920_3, zmm2, 
                                    _mm256_permutevar8x32_epi32(arg11, zmm0))
                                arg10 = arg14
                                arg7 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                                var_640_4 = _mm256_maskstore_ps(zmm1, arg7)
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                float temp0_2586[0x4]
                                int32_t temp1_101
                                temp0_2586, temp1_101 =
                                    _mm256_i64gather_ps(arg7[0].o, *arg13[0].q, zmm0[0].o)
                                arg7[0].o = temp0_2586
                                zmm0[0].o = temp1_101
                                arg13 = var_9e0_1
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                float temp0_2588[0x4]
                                int32_t temp1_102
                                temp0_2588, temp1_102 =
                                    _mm256_i64gather_ps(zmm0[0].o, *zmm2[0].q, arg5[0].o)
                                zmm0[0].o = temp0_2588
                                arg5[0].o = temp1_102
                                var_6c0_4 = _mm256_maskstore_ps(zmm1, 
                                    _mm256_insertf128_ps(arg7, zmm0[0].o, 1))
                            
                            zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8a0_3, var_8e0_2)
                            zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_a20_3, var_940_1)
                            zmm2 = __vpbroadcastq_ymmqq_memq(4)
                            zmm1 = _mm256_add_epi64(zmm1, arg13)
                            zmm0 = _mm256_add_epi64(_mm256_add_epi64(zmm0, arg12), zmm2)
                            zmm1 = _mm256_add_epi64(zmm1, zmm2)
                            zmm2[0].o = arg6[0].o
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            uint32_t temp0_2599[0x4]
                            int32_t temp1_103
                            temp0_2599, temp1_103 =
                                _mm256_i64gather_epi32(arg5[0].o, *(arg4 + zmm1[0].q), zmm2[0].o)
                            arg5[0].o = temp0_2599
                            zmm2[0].o = temp1_103
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            zmm2[0].o = zx.o(0)
                            uint32_t temp0_2601[0x4]
                            int32_t temp1_104
                            temp0_2601, temp1_104 =
                                _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm0[0].q), zmm1[0].o)
                            zmm2[0].o = temp0_2601
                            zmm1[0].o = temp1_104
                            zmm0 = _mm256_inserti128_si256(arg5, zmm2[0].o, 1)
                            zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                            zmm2 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                            arg5 = __vpbroadcastd_ymmqq_memd(0x3ff)
                            arg7 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg7))
                            arg8 = _mm256_broadcast_ss(1023f)
                            zmm1 = _mm256_div_ps(zmm1, arg8)
                            zmm0 &= arg5
                            arg9 = var_6e0_4
                            zmm2 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg7)), 
                                arg8)
                            arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_700_4, zmm1, var_680_4)
                            zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg9, var_660_4)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01)))
                            arg7 = _mm256_broadcast_ss(511f)
                            zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_div_ps(zmm0, arg7), 
                                var_6c0_4, var_640_4)
                            zmm1 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg5, arg5), zmm2, 
                                    zmm2), 
                                zmm0, zmm0)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            zmm1 = _mm256_and_ps(_mm256_cmp_ps(arg7, zmm1, 1), _mm256_sqrt_ps(zmm1))
                            var_5a0 = _mm256_maskstore_ps(arg6, arg5)
                            var_580 = _mm256_maskstore_ps(arg6, zmm2)
                            var_560 = _mm256_maskstore_ps(arg6, zmm0)
                            var_540 = _mm256_maskstore_ps(arg6, zmm1)
                            arg5 = var_a40_3
                            zmm2[0].o = var_880_2[0].o
                        
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(arg5[0].o, var_8c0_1)
                        zmm2[0].o ^= zmm0[0].o
                        zmm0[0].o = arg16[0].o & zmm2[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = __vpbroadcastd_ymmqq_memd(5)
                            arg5 = _mm256_cmpeq_epi32(arg17, zmm0)
                            arg6[0].o = _mm256_extracti128_si256(arg5, 1)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm0[0].o &= arg16[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                arg8 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                                zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8a0_3, var_8e0_2)
                                zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_a20_3, var_940_1)
                                arg7 = __vpbroadcastq_ymmqq_memq(4)
                                zmm1 = _mm256_add_epi64(zmm1, arg13)
                                zmm0 = _mm256_add_epi64(_mm256_add_epi64(zmm0, arg12), arg7)
                                zmm1 = _mm256_add_epi64(zmm1, arg7)
                                arg7[0].o = arg8[0].o
                                arg9[0].o = zx.o(0)
                                uint32_t temp0_2658[0x4]
                                int32_t temp1_105
                                temp0_2658, temp1_105 =
                                    _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm1[0].q), arg7[0].o)
                                arg9[0].o = temp0_2658
                                arg7[0].o = temp1_105
                                zmm1[0].o = _mm256_extracti128_si256(arg8, 1)
                                arg7[0].o = zx.o(0)
                                uint32_t temp0_2660[0x4]
                                int32_t temp1_106
                                temp0_2660, temp1_106 =
                                    _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm0[0].q), zmm1[0].o)
                                arg7[0].o = temp0_2660
                                zmm1[0].o = temp1_106
                                zmm0 = _mm256_inserti128_si256(arg9, arg7[0].o, 1)
                                zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                                arg7 = _mm256_srli_epi32(zmm0, 0xa)
                                arg9 = _mm256_srli_epi32(zmm0, 5)
                                arg11 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                                arg17[0].o = arg16[0].o
                                arg16 = arg10
                                arg10 = arg12
                                arg12 = __vpbroadcastd_ymmqq_memd(0x400)
                                arg13 = __vpbroadcastd_ymmqq_memd(0x380)
                                arg14 = __vpbroadcastd_ymmqq_memd(0x3d80)
                                zmm1 = (arg9 & arg11) | (zmm1 & arg12)
                                    | _mm256_add_epi32(zmm1 & arg13, arg14)
                                arg9 = (_mm256_slli_epi32(zmm0, 6) & arg11) | (arg7 & arg12)
                                arg7 &= arg13
                                arg13 = var_9e0_1
                                arg7 = arg9 | _mm256_add_epi32(arg7, arg14)
                                arg9 = zmm0 & __vpbroadcastd_ymmqq_memd(0x1c0)
                                arg11 = _mm256_slli_epi32(zmm0, 0x11)
                                    & __vpbroadcastd_ymmqq_memd(0x7e0000)
                                zmm0 &= __vpbroadcastd_ymmqq_memd(0x200)
                                arg12 = arg10
                                arg10 = arg16
                                arg16[0].o = arg17[0].o
                                arg17 = var_9a0_2
                                zmm0 |= arg11
                                arg11 = __vpbroadcastd_ymmqq_memd(0x1ec0)
                                zmm0 |= _mm256_add_epi32(arg9, arg11)
                                arg9 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm1, zmm1), 
                                        arg7, arg7), 
                                    zmm0, zmm0)
                                arg11[0].o = zx.o(0)
                                arg9 = _mm256_and_ps(_mm256_cmp_ps(arg11, arg9, 1), 
                                    _mm256_sqrt_ps(arg9))
                                var_5a0 = _mm256_maskstore_ps(arg8, zmm1)
                                var_580 = _mm256_maskstore_ps(arg8, arg7)
                                var_560 = _mm256_maskstore_ps(arg8, zmm0)
                                var_540 = _mm256_maskstore_ps(arg8, arg9)
                            
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                            zmm0[0].o ^= zmm2[0].o
                            zmm2[0].o = arg16[0].o & zmm0[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                                arg5 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg17, var_780_2)
                                zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                                zmm0[0].o &= zmm2[0].o
                                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                    zmm1 = _mm256_srai_epi32(
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 
                                        0x1f)
                                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8a0_3, var_8e0_2)
                                    arg6 = __vpaddq_ymmqq_ymmqq_memqq(var_a20_3, var_940_1)
                                    arg7 = __vpbroadcastq_ymmqq_memq(4)
                                    arg6 = _mm256_add_epi64(arg6, arg13)
                                    zmm0 = _mm256_add_epi64(_mm256_add_epi64(zmm0, arg12), arg7)
                                    arg6 = _mm256_add_epi64(arg6, arg7)
                                    arg7[0].o = zx.o(0)
                                    arg8[0].o = zmm1[0].o
                                    uint32_t temp0_2711[0x4]
                                    int32_t temp1_107
                                    temp0_2711, temp1_107 = _mm256_i64gather_epi32(zx.o(0), 
                                        *(arg4 + arg6[0].q), arg8[0].o)
                                    arg7[0].o = temp0_2711
                                    arg8[0].o = temp1_107
                                    arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg8[0].o = zx.o(0)
                                    uint32_t temp0_2713[0x4]
                                    int32_t temp1_108
                                    temp0_2713, temp1_108 = _mm256_i64gather_epi32(zx.o(0), 
                                        *(arg4 + zmm0[0].q), arg6[0].o)
                                    arg8[0].o = temp0_2713
                                    arg6[0].o = temp1_108
                                    zmm0 = _mm256_inserti128_si256(arg7, arg8[0].o, 1)
                                    arg6 = _mm256_srli_epi32(zmm0, 0x15)
                                    arg7 = _mm256_srli_epi32(zmm0, 0xa)
                                        & __vpbroadcastd_ymmqq_memd(0x7ff)
                                    arg8 = __vpbroadcastd_ymmqq_memd(0x3ff)
                                    arg9 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                    arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg9))
                                    arg11 = _mm256_broadcast_ss(1023f)
                                    arg6 = _mm256_div_ps(arg6, arg11)
                                    arg7 = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, arg9)), arg11)
                                    zmm0 = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0 & arg8, 
                                            __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                        _mm256_broadcast_ss(511f))
                                    arg8 = _mm256_fnmadd_ps(
                                        _mm256_fnmadd_ps(
                                            _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), 
                                            arg7, arg7), 
                                        zmm0, zmm0)
                                    arg9[0].o = zx.o(0)
                                    arg8 = _mm256_and_ps(_mm256_cmp_ps(arg9, arg8, 1), 
                                        _mm256_sqrt_ps(arg8))
                                    var_5a0 = _mm256_maskstore_ps(zmm1, arg6)
                                    var_580 = _mm256_maskstore_ps(zmm1, arg7)
                                    var_560 = _mm256_maskstore_ps(zmm1, zmm0)
                                    var_540 = _mm256_maskstore_ps(zmm1, arg8)
                                
                                zmm0 = arg5 ^ _mm256_cmpeq_epi32(zmm0, zmm0)
                                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                zmm1[0].o = zmm2[0].o & zmm0[0].o
                                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                                    zmm0 = _mm256_cmpeq_epi32(arg17, __vpbroadcastd_ymmqq_memd(6))
                                    arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                                    zmm2[0].o &= arg5[0].o
                                    arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                                    arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                                    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                                    
                                    if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                                        zmm2 = _mm256_srai_epi32(
                                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 
                                                0x1f), 
                                            0x1f)
                                        arg5[0].o = zx.o(0)
                                        var_5a0 = _mm256_maskstore_ps(zmm2, arg5)
                                        var_580 = _mm256_maskstore_ps(zmm2, arg5)
                                        var_560 = _mm256_maskstore_ps(zmm2, arg5)
                                        var_540 = _mm256_maskstore_ps(zmm2, _mm256_broadcast_ss(1f))
                                    
                                    zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
                                    zmm0 ^= zmm2
                                    zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                                    zmm0[0].o &= zmm1[0].o
                                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                    
                                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                        zmm0 = _mm256_srai_epi32(
                                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                                0x1f), 
                                            0x1f)
                                        zmm1[0].o = zx.o(0)
                                        var_5a0 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_580 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_560 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_540 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                
                zmm0 = var_800.32
                zmm1 = var_7e0.32
                zmm2 = var_7c0.32
                arg5 = var_7a0.32
                arg11 = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_fmadd_ps(_mm256_mul_ps(zmm1, var_580), zmm0, var_5a0), 
                        zmm2, var_560), 
                    arg5, var_540)
                arg12[0].o = zx.o(0)
                arg11 = _mm256_cmp_ps(arg12, arg11, 2)
                arg12 = _mm256_broadcast_ss(1f)
                arg11 = _mm256_blendv_ps(_mm256_broadcast_ss(-1f), arg12, arg11)
                arg13 = var_740_3
                arg12 = _mm256_sub_ps(arg12, arg13)
                arg11 = _mm256_mul_ps(arg12, arg11)
                zmm0 = _mm256_mul_ps(arg11, zmm0)
                zmm1 = _mm256_mul_ps(arg11, zmm1)
                zmm2 = _mm256_mul_ps(arg11, zmm2)
                arg5 = _mm256_mul_ps(arg11, arg5)
                zmm0 = _mm256_fmadd_ps(zmm0, arg13, var_5a0)
                zmm1 = _mm256_fmadd_ps(zmm1, arg13, var_580)
                zmm2 = _mm256_fmadd_ps(zmm2, arg13, var_560)
                arg5 = _mm256_fmadd_ps(arg5, arg13, var_540)
                var_800.32 = _mm256_maskstore_ps(arg10, zmm0)
                var_7e0.32 = _mm256_maskstore_ps(arg10, zmm1)
                var_7c0.32 = _mm256_maskstore_ps(arg10, zmm2)
                var_7a0.32 = _mm256_maskstore_ps(arg10, arg5)
            
            arg11 = var_460_1
            arg9 = var_5c0_2
            arg10 = var_720_3
            zmm0 = var_800.32
            zmm1 = var_7e0.32
            zmm2 = var_7c0.32
            arg5 = var_7a0.32
            zmm2 = _mm256_mul_ps(zmm2, zmm2)
            arg5 = _mm256_mul_ps(arg5, arg5)
            zmm0 =
                _mm256_add_ps(_mm256_fmadd_ps(zmm2, zmm0, zmm0), _mm256_fmadd_ps(arg5, zmm1, zmm1))
            zmm1 = _mm256_broadcast_ss(0.5f)
            zmm2 = _mm256_mul_ps(zmm0, zmm1)
            float var_680_5[0x8] = zmm2
            float var_660_5[0x8] = zmm2
            float var_640_5[0x8] = zmm2
            float var_620_1[0x8] = zmm2
            arg5 = _mm256_broadcast_ss(9.99999994e-09f)
            arg6 = _mm256_rsqrt_ps(zmm0)
            arg7 = _mm256_cmp_ps(arg5, zmm0, 6)
            arg8 =
                _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(arg6, arg6), zmm2, zmm1), arg6, arg6)
            arg6 = _mm256_fnmadd_ps(_mm256_mul_ps(arg8, arg8), zmm2, zmm1)
            zmm1 = _mm256_fmadd_ps(arg8, arg6, arg8)
            arg6 = _mm256_fmadd_ps(arg6, arg8, arg8)
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(arg6, var_800.32)
            arg8 = __vmulps_ymmqq_ymmqq_memqq(zmm1, var_7e0.32)
            zmm1 = __vmulps_ymmqq_ymmqq_memqq(zmm1, var_7c0.32)
            arg6 = __vmulps_ymmqq_ymmqq_memqq(arg6, var_7a0.32)
            zmm0 = _mm256_cmp_ps(arg5, zmm0, 2)
            zmm2 = _mm256_and_ps(zmm2, zmm0)
            arg5 = _mm256_and_ps(arg8, zmm0)
            zmm1 = _mm256_and_ps(zmm1, zmm0)
            arg8 = _mm256_broadcast_ss(1f)
            arg7 = _mm256_and_ps(arg7, arg8)
            zmm0 = _mm256_or_ps(_mm256_and_ps(arg6, zmm0), arg7)
            var_800.32 = _mm256_maskstore_ps(arg10, zmm2)
            var_7e0.32 = _mm256_maskstore_ps(arg10, arg5)
            var_7c0.32 = _mm256_maskstore_ps(arg10, zmm1)
            var_7a0.32 = _mm256_maskstore_ps(arg10, zmm0)
        
        zmm0 = arg11 & arg9
        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm1[0].o = zx.o(0)
            var_800.32 = _mm256_maskstore_ps(zmm0, zmm1)
            var_7e0.32 = _mm256_maskstore_ps(zmm0, zmm1)
            var_7c0.32 = _mm256_maskstore_ps(zmm0, zmm1)
            zmm1 = _mm256_broadcast_ss(1f)
            var_7a0.32 = _mm256_maskstore_ps(zmm0, zmm1)
        
        zmm0[0].o = var_800
        int128_t var_7f0
        arg10[0].o = var_7f0
        zmm2[0].o = var_7e0
        int128_t var_7d0
        arg5[0].o = var_7d0
        arg6[0].o = var_7c0
        int128_t var_7b0
        arg7[0].o = var_7b0
        arg8[0].o = var_7a0
        arg9[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
        arg6[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm1[0].o = arg8[0].q | arg9[0].q << 0x40
        int128_t var_200 = zmm1[0].o
        int128_t var_790
        zmm1[0].o = var_790
        arg8[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
        int128_t var_1f0_1 = arg8[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm2[0].o = zmm0[0].q | arg6[0].q << 0x40
        int128_t var_1e0_1 = zmm2[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        int128_t var_1d0_1 = zmm0[0].o
        zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
        zmm2[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
        arg6[0].o = zmm2[0].q | zmm0[0].q << 0x40
        int128_t var_1c0_1 = arg6[0].o
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        int128_t var_1b0_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
        zmm2[0].o = zmm0[0].q | zmm1[0].q << 0x40
        int128_t var_1a0_1 = zmm2[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        int128_t var_190_1 = zmm0[0].o
        uint64_t i_4 = zx.q(_mm256_movemask_ps(arg11))
        
        do
            uint64_t rcx_32 = _tzcnt_u64(i_4)
            result = rol.q(-2, rcx_32.b)
            uint32_t var_120[0x8] = arg15
            zmm0[0].o = (&var_200)[rcx_32]
            arg1[sx.q(var_120[zx.q(rcx_32.d) & 7]) * 3] = zmm0[0].o
            i_4 &= result
        while (i_4 != 0)
else
    zmm0[0].o = zx.o(arg4)
    zmm1[0].o = 4
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_140_1[0x8] = _mm256_broadcastq_epi64(zmm0[0].q)
    zmm0 = _mm256_broadcastss_ps(zmm2[0].o)
    float var_2e0_1[0x8] = zmm0
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    int32_t rbx_1
    rbx_1.b = zmm0[0].o f>= zmm2[0]
    zmm0[0].o = zx.o(neg.d(rbx_1))
    int32_t rbx_3 = arg18 - 2
    zmm1[0].o = arg5[0].o
    zmm1[0] = float.s(arg18 - 1)
    zmm1[0].o = zmm1[0].o f* zmm2[0]
    int32_t rcx_3 = int.d(zmm1[0]) s>> 0x1f
    int32_t rcx_4 = rcx_3 & not.d(rcx_3)
    
    if (rbx_3 s> rcx_4)
        rbx_3 = rcx_4
    
    zmm0 = _mm256_broadcastd_epi32(zmm0[0])
    float var_160_1[0x8] = zmm0
    zmm0[0].o = zx.o(rbx_3)
    int32_t var_880_1[0x8] = _mm256_broadcastd_epi32(zmm0[0])
    float var_180_1[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
    arg15 = _mm256_cmpeq_epi32(arg15, arg15)
    zmm0 = _mm256_broadcast_ss(5.60519386e-45f)
    int32_t var_8e0_1[0x8] = zmm0
    r10 = 0
    
    do
        zmm0[0].o = zx.o(r10)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_broadcastd_epi32(zmm0[0]), 3), 
            data_143442140)
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        arg13[0].o = zx.o(0)
        int128_t temp0_49
        int32_t temp1_1
        temp0_49, temp1_1 = _mm256_i32gather_epi32(arg13, *(arg2 + zmm0[0].q), zmm2)
        arg13 = temp0_49
        zmm2 = temp1_1
        zmm1 = var_8e0_1
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        arg5[0].o = zx.o(0)
        int128_t temp0_51
        int32_t temp1_2
        temp0_51, temp1_2 = _mm256_i32gather_epi32(arg5, *(arg2 + (zmm0 | zmm1)[0].q), zmm2)
        arg5 = temp0_51
        zmm2 = temp1_2
        zmm0 = _mm256_slli_epi32(arg5, 3) | zmm1
        zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
        zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
        arg5[0].o = zx.o(0)
        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        uint32_t temp0_57[0x4]
        int32_t temp1_3
        temp0_57, temp1_3 = _mm256_i64gather_epi32(zx.o(0), *(arg3 + zmm0[0].q), arg6[0].o)
        arg5[0].o = temp0_57
        arg6[0].o = temp1_3
        zmm0[0].o = zx.o(0)
        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        uint32_t temp0_59[0x4]
        int32_t temp1_4
        temp0_59, temp1_4 = _mm256_i64gather_epi32(zx.o(0), *(arg3 + zmm2[0].q), arg6[0].o)
        zmm0[0].o = temp0_59
        arg6[0].o = temp1_4
        zmm0 = _mm256_inserti128_si256(arg5, zmm0[0].o, 1)
        arg17 = _mm256_cmpeq_epi32(zmm0, arg15)
        arg14 = arg17 ^ arg15
        int128_t var_4e0
        int128_t var_4c0
        int128_t var_4a0
        int128_t var_480
        
        if (_mm256_movemask_ps(arg14) != 0)
            zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
            arg6[0].o = zx.o(0)
            int128_t temp0_64
            int32_t temp1_5
            temp0_64, temp1_5 = _mm256_i32gather_epi32(arg6, *(arg4 + zmm0[0].q), arg14)
            arg6 = temp0_64
            arg5 = arg6 & data_143442840
            zmm1 = _mm256_srli_epi32(arg6, 0x18) & __vpbroadcastd_ymmqq_memd(0xf)
            arg6 = _mm256_srli_epi32(arg6, 0x1c)
            float var_940[0x8]
            arg10 = _mm256_blendv_ps(var_940, arg6, arg14)
            arg8 = _mm256_slli_epi32(arg10, 2)
            arg6[0].o = zx.o(0)
            int128_t temp0_70
            int32_t temp1_6
            temp0_70, temp1_6 = _mm256_i32gather_epi32(arg6, *(&data_143442960 + arg8[0].q), arg14)
            int32_t var_980[0x8]
            arg7 = _mm256_blendv_ps(var_980, zmm1, arg14)
            var_980 = arg7
            zmm1 = _mm256_or_ps(_mm256_and_ps(arg7, _mm256_broadcast_ss(9.80908925e-45f)), 
                _mm256_slli_epi32(arg10, 3))
            arg8 = __vpbroadcastd_ymmqq_memd(3)
            zmm1 = arg17 & not.32(zmm1)
            int64_t r15_1 = sx.q(zmm1[0])
            int64_t r13_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            int64_t r8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            int64_t rbx_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
            int64_t rax_36 = sx.q(zmm1[0])
            int64_t rcx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            int64_t rsi_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            int32_t temp0_83 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = zx.o(*(r15_1 + &data_143442980))
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(r13_1 + &data_143442980), 1)
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(r8 + &data_143442980), 2)
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(rbx_5 + &data_143442980), 3)
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(rax_36 + &data_143442980), 4)
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(rcx_8 + &data_143442980), 5)
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(rsi_3 + &data_143442980), 6)
            zmm1[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(sx.q(temp0_83) + &data_143442980), 7)
            arg9 = _mm256_cvtepu8_epi32(zmm1[0].q)
            var_940 = arg10
            arg12 = _mm256_cmpeq_epi32(arg10, arg8)
            arg10 = arg12 & not.32(arg14)
            zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            char temp0_96 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            arg8[0].o = zx.o(0)
            
            if (temp0_96 != 0)
                arg8 = arg10 & arg9
            
            var_9e0 = _mm256_cvtepi32_epi64(zmm0[0].o)
            float var_a20_1[0x8] = _mm256_cvtepi32_epi64(zmm2[0].o)
            int32_t var_460[0x8]
            arg7 = _mm256_blendv_ps(var_460, arg5, arg14)
            zmm0 = arg17 & not.32(temp0_70)
            arg6 = arg17 & not.32(arg12)
            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
            int32_t var_390_1[0x4] = zmm1[0].o
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            char temp0_103 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            arg16 = _mm256_broadcast_ss(1.40129846e-45f)
            float var_2c0_1[0x8] = arg6
            
            if (temp0_103 == 0)
                arg5[0].o = zx.o(0)
            else
                arg5 = arg6 & arg9
                arg8 = _mm256_blendv_ps(arg8, arg16, arg6)
            
            arg10[0].o = zx.o(0)
            zmm1 = _mm256_madd_epi16(arg5, arg17 & not.32(var_8e0_1))
            zmm0 = _mm256_mullo_epi32(arg8, zmm0)
            zmm2 = var_140_1
            arg9 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_a20_1)
            uint32_t var_760[0x8]
            arg8 = _mm256_blendv_ps(var_760, zmm0, arg14)
            arg11 = _mm256_blendv_ps(arg11, zmm1, arg14)
            float var_780_1[0x8] = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_9e0)
            zmm0 = arg17 & not.32(_mm256_cmpgt_epi32(arg7, arg16))
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            var_760 = arg8
            var_460 = arg7
            int32_t var_860_1[0x8] = arg14
            float var_9a0_1[0x8] = arg12
            int32_t var_960_1[0x8] = arg9
            int32_t var_8a0_1[0x8] = arg11
            float var_6a0_1[0x8] = arg16
            float var_9c0_1[0x8]
            int128_t var_8c0
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                zmm0[0].o = zx.o(0)
                var_9c0_1 = zmm0
            else
                zmm0 = __vpbroadcastd_ymmqq_memd(8)
                arg5 = zmm0 & var_980
                zmm0[0].o = zx.o(0)
                zmm1 = _mm256_cmpeq_epi32(arg5, zmm0)
                arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                arg6[0].o = zmm1[0].o & zmm2[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    arg16[0].o = zx.o(0)
                    arg6[0].o = zx.o(0)
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    arg10[0].o = zx.o(0)
                else
                    arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                    arg15 = arg8
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    zmm0[0].o = zx.o(0)
                    zmm1[0].o = zx.o(arg19)
                    
                    if (zx.o(0) f>= zmm1[0])
                        zmm0[0].o = zx.o(0)
                        arg16[0].o = zx.o(0)
                        arg12[0].o = zx.o(0)
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    else
                        zmm0[0].o = zmm1[0].o
                        bool cond:7_1 = zmm1[0].o f>= 1f
                        arg9 = _mm256_add_epi32(arg7, arg16)
                        
                        if (cond:7_1)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f) & arg9
                            arg16 = zmm0
                            arg12 = zmm0
                            arg11 = zmm0
                            arg9 = var_960_1
                        else
                            arg11 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg9), var_2e0_1)
                            arg12 = _mm256_round_ps(arg11, 9)
                            zmm0 = _mm256_min_epi32(arg9, _mm256_cvttps_epi32(arg12))
                            arg10 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
                            zmm0 &= arg10
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            
                            if (arg20 != 1)
                                arg8 = _mm256_sub_ps(arg11, arg12)
                            
                            arg11 = arg10 & _mm256_min_epi32(_mm256_sub_epi32(zmm0, arg16), arg9)
                            arg16 = zmm0
                            arg12 = arg11
                            arg7 = var_460
                            arg9 = var_960_1
                    
                    arg10 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f) & arg8
                    arg8 = arg15
                    arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                    arg6 = arg12
                
                zmm1 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg5, data_142fc9440) ^ arg15
                arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                zmm2[0].o &= zmm1[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                var_9c0_1 = arg11
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    arg11 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f)
                    zmm2 = _mm256_srai_epi32(arg11, 0x1f)
                    zmm1 = _mm256_cmpgt_epi32(__vpbroadcastd_ymmqq_memd(2), arg7)
                    arg12 = zmm1 | var_160_1
                    arg5 = arg12 & zmm2
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        zmm1[0].o = zx.o(0)
                        zmm0 = _mm256_blendv_ps(zmm0, zmm1, arg5)
                        arg6 = _mm256_blendv_ps(arg6, zmm1, arg5)
                        arg16 = zmm0
                        var_9c0_1 = arg6
                    
                    arg14 = arg12 & not.32(zmm2)
                    int32_t temp0_165 = _mm256_movemask_ps(arg14)
                    zmm2[0].o = zx.o(0)
                    
                    if (temp0_165 == 0)
                        arg14 = var_860_1
                    else
                        float var_720_1[0x8] = arg10
                        arg10 = _mm256_add_epi32(arg7, arg15)
                        zmm1[0].o = arg19
                        
                        if (zmm1[0].o f>= 1f)
                            arg16 = _mm256_blendv_ps(zmm0, arg10, arg14)
                            zmm0 = _mm256_blendv_ps(arg6, arg10, arg14)
                            var_9c0_1 = zmm0
                            arg14 = var_860_1
                            arg10 = var_720_1
                        else
                            var_840.32 = arg6
                            arg5 = var_8a0_1
                            zmm1[0].o = _mm256_extracti128_si256(arg5, 1)
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            zmm2 = _mm256_mullo_epi32(arg8, arg7)
                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                            arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                            arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg5, var_780_1)
                            zmm1 = _mm256_add_epi64(arg9, zmm1)
                            arg7 = __vpbroadcastq_ymmqq_memq(3)
                            zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                            arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                            zmm2 = _mm256_add_epi64(zmm2, _mm256_add_epi64(arg5, arg7))
                            zmm1 = _mm256_add_epi64(arg6, _mm256_add_epi64(zmm1, arg7))
                            arg5 = __vpbroadcastq_ymmqq_memq(-4)
                            zmm1 &= arg5
                            arg7 = zmm2 & arg5
                            zmm2 = _mm256_min_epi32(
                                __vpmaxsd_ymmqq_ymmqq_memqq(
                                    _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepi32_ps(arg10), var_2e0_1)), 
                                    data_142fc9440), 
                                arg10)
                            int32_t var_a40_1[0x8] = arg7
                            int32_t var_a00_1[0x8] = arg11
                            float var_900_1[0x8] = arg12
                            
                            if (arg18 s< 0x100)
                                arg5 = _mm256_add_epi64(arg7, _mm256_cvtepi32_epi64(zmm2[0].o))
                                char r15_2 = temp0_165.b
                                int128_t var_300
                                arg9[0].o = var_300
                                
                                if ((r15_2 & 1) == 0)
                                    if ((r15_2 & 2) != 0)
                                        goto label_14017fc71
                                    
                                    goto label_14017f90d
                                
                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                    zx.d(*arg5[0].q), 0)
                                
                                if ((r15_2 & 2) != 0)
                                label_14017fc71:
                                    uint16_t rax_84[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, rax_84, 1)
                                    arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    
                                    if ((r15_2 & 4) == 0)
                                        goto label_14017f91d
                                    
                                    goto label_14017fc89
                                
                            label_14017f90d:
                                arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                
                                if ((r15_2 & 4) == 0)
                                label_14017f91d:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((r15_2 & 8) != 0)
                                        goto label_14017fcab
                                    
                                    goto label_14017f92c
                                
                            label_14017fc89:
                                arg7[0].o = _mm256_extracti128_si256(arg5, 1)
                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                    zx.d(*arg7[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((r15_2 & 8) != 0)
                                label_14017fcab:
                                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                    uint16_t rax_88[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, rax_88, 3)
                                    arg5 = _mm256_add_epi64(zmm1, arg6)
                                    
                                    if ((r15_2 & 0x10) == 0)
                                        goto label_14017f93a
                                    
                                    goto label_14017fcd5
                                
                            label_14017f92c:
                                arg5 = _mm256_add_epi64(zmm1, arg6)
                                
                                if ((r15_2 & 0x10) == 0)
                                label_14017f93a:
                                    
                                    if ((r15_2 & 0x20) != 0)
                                        goto label_14017fcea
                                    
                                    goto label_14017f944
                                
                            label_14017fcd5:
                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                    zx.d(*arg5[0].q), 4)
                                
                                if ((r15_2 & 0x20) != 0)
                                label_14017fcea:
                                    uint16_t rax_92[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, rax_92, 5)
                                    
                                    if ((r15_2 & 0x40) == 0)
                                        goto label_14017f94e
                                    
                                    goto label_14017fcfc
                                
                            label_14017f944:
                                
                                if ((r15_2 & 0x40) != 0)
                                label_14017fcfc:
                                    arg6[0].o = _mm256_extracti128_si256(arg5, 1)
                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                        zx.d(*arg6[0].q), 6)
                                    
                                    if (temp0_165.b s< 0)
                                    label_14017fd18:
                                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                        uint16_t rax_96[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        arg9[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, rax_96, 7)
                                else
                                label_14017f94e:
                                    
                                    if (temp0_165.b s< 0)
                                        goto label_14017fd18
                                
                                arg5[0].o = arg9[0].o & data_142fc92e0
                                arg6 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepu16_epi32(arg5[0].o), var_880_1)
                                arg7 = arg6 ^ arg15
                                bool cond:26_1 = _mm256_movemask_ps(arg6 & not.32(arg14)) == 0
                                var_300 = arg9[0].o
                                int32_t var_9c0_3[0x8] = arg7
                                
                                if (cond:26_1)
                                    arg5 = zmm2
                                else
                                    arg5 = _mm256_blendv_ps(zmm2, arg10, arg7)
                                    arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                                    arg15 = _mm256_sub_epi32(zmm2, arg8)
                                    arg7 = _mm256_cmpgt_epi32(arg15, arg10) ^ arg8
                                    arg8 = arg6 & not.32(arg7)
                                    arg16 = arg14 & arg8
                                    int32_t i_5 = _mm256_movemask_ps(arg16)
                                    
                                    if (i_5 != 0)
                                        arg12 = zmm2
                                        
                                        do
                                            arg11 = arg15
                                            arg6 = _mm256_cvtepi32_epi64(arg11[0].o)
                                            arg15 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_a40_1)
                                            char temp0_259 = _mm256_movemask_ps(arg16)
                                            int128_t var_3b0
                                            uint16_t rax_71[0x2]
                                            
                                            if ((temp0_259 & 1) != 0)
                                                arg9[0].o = var_3b0
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, zx.d(*arg15[0].q), 0)
                                                
                                                if ((temp0_259 & 2) != 0)
                                                    rax_71 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_71, 1)
                                            else
                                                arg9[0].o = var_3b0
                                                
                                                if ((temp0_259 & 2) != 0)
                                                    rax_71 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_71, 1)
                                            arg6[0].o = _mm256_extracti128_si256(arg11, 1)
                                            
                                            if ((temp0_259 & 4) == 0)
                                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                                
                                                if ((temp0_259 & 8) != 0)
                                                    goto label_14017f9f2
                                                
                                                goto label_14017faf9
                                            
                                            arg7[0].o = _mm256_extracti128_si256(arg15, 1)
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, zx.d(*arg7[0].q), 2)
                                            arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                            
                                            if ((temp0_259 & 8) != 0)
                                            label_14017f9f2:
                                                arg7[0].o = _mm256_extracti128_si256(arg15, 1)
                                                uint16_t rax_59[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, rax_59, 3)
                                                arg15 = _mm256_add_epi64(zmm1, arg6)
                                                
                                                if ((temp0_259 & 0x10) == 0)
                                                    goto label_14017fb07
                                                
                                                goto label_14017fa1c
                                            
                                        label_14017faf9:
                                            arg15 = _mm256_add_epi64(zmm1, arg6)
                                            
                                            if ((temp0_259 & 0x10) == 0)
                                            label_14017fb07:
                                                
                                                if ((temp0_259 & 0x20) != 0)
                                                    goto label_14017fa31
                                                
                                                goto label_14017fb11
                                            
                                        label_14017fa1c:
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, zx.d(*arg15[0].q), 4)
                                            
                                            if ((temp0_259 & 0x20) != 0)
                                            label_14017fa31:
                                                uint16_t rax_63[0x2] = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, rax_63, 5)
                                                
                                                if ((temp0_259 & 0x40) == 0)
                                                    goto label_14017fb1b
                                                
                                                goto label_14017fa43
                                            
                                        label_14017fb11:
                                            
                                            if ((temp0_259 & 0x40) != 0)
                                            label_14017fa43:
                                                arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, zx.d(*arg6[0].q), 6)
                                                
                                                if (temp0_259 s< 0)
                                                label_14017fa5f:
                                                    arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                                    uint16_t rax_67[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_67, 7)
                                            else
                                            label_14017fb1b:
                                                
                                                if (temp0_259 s< 0)
                                                    goto label_14017fa5f
                                            
                                            var_3b0 = arg9[0].o
                                            arg6[0].o = arg9[0].o & data_142fc92e0
                                            arg6 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                                _mm256_cvtepu16_epi32(arg6[0].o), var_880_1)
                                            arg9 = arg6 & arg8
                                            arg6[0].o = zx.o(0)
                                            arg7 = arg9 & arg14
                                            
                                            if (_mm256_movemask_ps(arg7) != i_5)
                                                arg6 = arg9 ^ arg8
                                            
                                            arg5 = _mm256_blendv_ps(arg5, arg12, arg9)
                                            arg15 = _mm256_sub_epi32(arg11, 
                                                _mm256_cmpeq_epi32(arg7, arg7))
                                            arg7 = _mm256_cmpgt_epi32(arg15, arg10)
                                            arg8 = arg7 & not.32(arg6)
                                            arg16 = arg8 & arg14
                                            i_5 = _mm256_movemask_ps(arg16)
                                            arg12 = arg11
                                        while (i_5 != 0)
                                
                                arg6 = _mm256_andnot_ps(var_9c0_3, arg14)
                                bool cond:28_1 = _mm256_movemask_ps(arg6) == 0
                                int64_t var_920_1[0x4] = zmm1
                                arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                                int32_t i_6
                                
                                if (not(cond:28_1))
                                    arg6 = _mm256_xor_ps(var_9c0_3, arg15)
                                    zmm1[0].o = zx.o(0)
                                    arg5 = _mm256_blendv_ps(arg5, zmm1, arg6)
                                    zmm2 = _mm256_add_epi32(zmm2, arg15)
                                    arg6 &= _mm256_cmpgt_epi32(zmm2, zmm1)
                                    arg11 = arg6 & arg14
                                    i_6 = _mm256_movemask_ps(arg11)
                                
                                int128_t var_520
                                
                                if (cond:28_1 || i_6 == 0)
                                    zmm1[0].o = var_520
                                else
                                    zmm1[0].o = var_520
                                    
                                    do
                                        arg7 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                        arg8 = _mm256_add_epi64(var_a40_1, arg7)
                                        char temp0_416 = _mm256_movemask_ps(arg11)
                                        
                                        if ((temp0_416 & 1) == 0)
                                            if ((temp0_416 & 2) != 0)
                                                goto label_14018031d
                                            
                                            goto label_140180402
                                        
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*arg8[0].q), 0)
                                        
                                        if ((temp0_416 & 2) != 0)
                                        label_14018031d:
                                            uint32_t rax_128 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_128, 1)
                                            arg9[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            
                                            if ((temp0_416 & 4) == 0)
                                                goto label_140180412
                                            
                                            goto label_140180335
                                        
                                    label_140180402:
                                        arg9[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        
                                        if ((temp0_416 & 4) == 0)
                                        label_140180412:
                                            arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                            
                                            if ((temp0_416 & 8) != 0)
                                                goto label_140180357
                                            
                                            goto label_140180421
                                        
                                    label_140180335:
                                        arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*arg7[0].q), 2)
                                        arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                        
                                        if ((temp0_416 & 8) != 0)
                                        label_140180357:
                                            arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                            uint32_t rax_132 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_132, 3)
                                            arg8 = __vpaddq_ymmqq_ymmqq_memqq(arg9, var_920_1)
                                            
                                            if ((temp0_416 & 0x10) == 0)
                                                goto label_140180434
                                            
                                            goto label_140180386
                                        
                                    label_140180421:
                                        arg8 = __vpaddq_ymmqq_ymmqq_memqq(arg9, var_920_1)
                                        
                                        if ((temp0_416 & 0x10) == 0)
                                        label_140180434:
                                            
                                            if ((temp0_416 & 0x20) != 0)
                                                goto label_14018039b
                                            
                                            goto label_14018043e
                                        
                                    label_140180386:
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*arg8[0].q), 4)
                                        
                                        if ((temp0_416 & 0x20) != 0)
                                        label_14018039b:
                                            uint32_t rax_136 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_136, 5)
                                            
                                            if ((temp0_416 & 0x40) == 0)
                                                goto label_140180448
                                            
                                            goto label_1401803ad
                                        
                                    label_14018043e:
                                        
                                        if ((temp0_416 & 0x40) != 0)
                                        label_1401803ad:
                                            arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, zx.d(*arg7[0].q), 6)
                                            
                                            if (temp0_416 s< 0)
                                            label_1401803c9:
                                                arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                                uint32_t rax_140 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, rax_140, 7)
                                        else
                                        label_140180448:
                                            
                                            if (temp0_416 s< 0)
                                                goto label_1401803c9
                                        
                                        arg7[0].o = zmm1[0].o & data_142fc92e0
                                        arg9 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                            _mm256_cvtepu16_epi32(arg7[0].o), var_880_1) & not.32(arg6)
                                        arg8[0].o = zx.o(0)
                                        int32_t temp0_422 = _mm256_movemask_ps(arg9 & arg14)
                                        arg11[0].o = zx.o(0)
                                        
                                        if (temp0_422 != i_6)
                                            arg11 = arg9 ^ arg6
                                        
                                        arg5 = _mm256_blendv_ps(arg5, zmm2, arg9)
                                        zmm2 = _mm256_add_epi32(zmm2, arg15)
                                        arg6 = _mm256_cmpgt_epi32(zmm2, arg8) & arg11
                                        arg11 = arg6 & arg14
                                        i_6 = _mm256_movemask_ps(arg11)
                                    while (i_6 != 0)
                                
                                int128_t var_410
                                arg6[0].o = var_410
                                arg16 = _mm256_blendv_ps(zmm0, arg5, arg14)
                                zmm0 = __vpaddq_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepi32_epi64(arg16[0].o), var_a40_1)
                                var_520 = zmm1[0].o
                                
                                if ((r15_2 & 1) != 0)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm0[0].q), 0)
                                
                                arg8 = var_760
                                int128_t var_430
                                zmm1[0].o = var_430
                                arg9 = var_960_1
                                arg11 = var_a00_1
                                arg7 = var_900_1
                                
                                if ((r15_2 & 2) == 0)
                                    zmm2[0].o = _mm256_extracti128_si256(arg16, 1)
                                    
                                    if ((r15_2 & 4) != 0)
                                        goto label_14017ee97
                                    
                                    goto label_140180538
                                
                                uint16_t rax_8[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_8, 1)
                                zmm2[0].o = _mm256_extracti128_si256(arg16, 1)
                                
                                if ((r15_2 & 4) != 0)
                                label_14017ee97:
                                    arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*arg5[0].q), 2)
                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                    
                                    if ((r15_2 & 8) == 0)
                                        goto label_140180547
                                    
                                    goto label_14017eeb9
                                
                            label_140180538:
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                
                                if ((r15_2 & 8) == 0)
                                label_140180547:
                                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_920_1)
                                    
                                    if ((r15_2 & 0x10) != 0)
                                        goto label_14017eee8
                                    
                                    goto label_14018055a
                                
                            label_14017eeb9:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                uint16_t rax_12[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_12, 3)
                                zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_920_1)
                                
                                if ((r15_2 & 0x10) != 0)
                                label_14017eee8:
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm0[0].q), 4)
                                    
                                    if ((r15_2 & 0x20) == 0)
                                        goto label_140180564
                                    
                                    goto label_14017eefd
                                
                            label_14018055a:
                                
                                if ((r15_2 & 0x20) == 0)
                                label_140180564:
                                    
                                    if ((r15_2 & 0x40) != 0)
                                        goto label_14017ef0f
                                    
                                    goto label_14018056e
                                
                            label_14017eefd:
                                uint16_t rax_16[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_16, 5)
                                
                                if ((r15_2 & 0x40) == 0)
                                label_14018056e:
                                    
                                    if (temp0_165.b s< 0)
                                    label_14017ef2b:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        uint16_t rax_20[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_20, 7)
                                else
                                label_14017ef0f:
                                    zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm2[0].q), 6)
                                    
                                    if (temp0_165.b s< 0)
                                        goto label_14017ef2b
                                
                                zmm2 = var_840.32
                                arg12 =
                                    _mm256_blendv_ps(zmm2, _mm256_sub_epi32(arg16, arg15), arg14)
                                zmm0 = _mm256_cmpgt_epi32(arg12, arg10) & arg14
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    arg12 = _mm256_blendv_ps(arg12, arg10, zmm0)
                                
                                arg14 = var_860_1
                                arg10 = var_720_1
                                zmm0 = __vpaddq_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepi32_epi64(arg12[0].o), var_a40_1)
                                
                                if ((r15_2 & 1) == 0)
                                    if ((r15_2 & 2) != 0)
                                        goto label_14017ef61
                                    
                                    goto label_1401805d3
                                
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 0)
                                
                                if ((r15_2 & 2) != 0)
                                label_14017ef61:
                                    uint32_t rax_24 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_24, 1)
                                    zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                    
                                    if ((r15_2 & 4) == 0)
                                        goto label_1401805e3
                                    
                                    goto label_14017ef79
                                
                            label_1401805d3:
                                zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                
                                if ((r15_2 & 4) == 0)
                                label_1401805e3:
                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                    
                                    if ((r15_2 & 8) != 0)
                                        goto label_14017ef9b
                                    
                                    goto label_1401805f2
                                
                            label_14017ef79:
                                arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*arg5[0].q), 2)
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                
                                if ((r15_2 & 8) != 0)
                                label_14017ef9b:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint32_t rax_28 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_28, 3)
                                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_920_1)
                                    
                                    if ((r15_2 & 0x10) == 0)
                                        goto label_140180605
                                    
                                    goto label_14017efca
                                
                            label_1401805f2:
                                zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_920_1)
                                
                                if ((r15_2 & 0x10) == 0)
                                label_140180605:
                                    
                                    if ((r15_2 & 0x20) != 0)
                                        goto label_14017efdf
                                    
                                    goto label_14018060f
                                
                            label_14017efca:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 4)
                                
                                if ((r15_2 & 0x20) == 0)
                                label_14018060f:
                                    
                                    if ((r15_2 & 0x40) != 0)
                                    label_140180615:
                                        zmm2[0].o = zmm1[0].o
                                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        zmm1[0].o = zmm2[0].o
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                            zx.d(*zmm1[0].q), 6)
                                else
                                label_14017efdf:
                                    uint32_t rax_32 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_32, 5)
                                    
                                    if ((r15_2 & 0x40) != 0)
                                        goto label_140180615
                                
                                zmm2[0].o = arg6[0].o & data_142fc92e0
                                var_410 = arg6[0].o
                                var_9c0_1 = arg12
                                
                                if (temp0_165.b s< 0)
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint32_t rax_148 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_148, 7)
                                
                                zmm0 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                var_430 = zmm1[0].o
                                zmm1[0].o &= data_142fc92e0
                                zmm2 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                arg5 = _mm256_xor_ps(arg7, arg15)
                                arg6[0].o = zx.o(0)
                                
                                if (arg20 != 1)
                                label_140180694:
                                    zmm1 = __vpmaxsd_ymmqq_ymmqq_memqq(
                                        _mm256_sub_epi32(zmm2, zmm0), var_6a0_1)
                                    zmm0 = _mm256_sub_ps(var_180_1, _mm256_cvtepi32_ps(zmm0))
                                    zmm1 = _mm256_cvtepi32_ps(zmm1)
                                    arg6 = _mm256_div_ps(zmm0, zmm1)
                            else
                                arg6 = _mm256_add_epi32(zmm2, zmm2)
                                arg5 = _mm256_add_epi64(arg7, _mm256_cvtepi32_epi64(arg6[0].o))
                                char rsi_4 = temp0_165.b
                                int128_t var_2f0
                                arg8[0].o = var_2f0
                                
                                if ((rsi_4 & 1) == 0)
                                    if ((rsi_4 & 2) != 0)
                                        goto label_14017fba3
                                    
                                    goto label_14017f659
                                
                                arg8[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg5[0].q, 0)
                                
                                if ((rsi_4 & 2) != 0)
                                label_14017fba3:
                                    uint16_t* rax_74 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_74, 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((rsi_4 & 4) == 0)
                                        goto label_14017f669
                                    
                                    goto label_14017fbbe
                                
                            label_14017f659:
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                
                                if ((rsi_4 & 4) == 0)
                                label_14017f669:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rsi_4 & 8) != 0)
                                        goto label_14017fbdd
                                    
                                    goto label_14017f678
                                
                            label_14017fbbe:
                                arg7[0].o = _mm256_extracti128_si256(arg5, 1)
                                arg8[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg7[0].q, 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rsi_4 & 8) != 0)
                                label_14017fbdd:
                                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                    uint16_t* rax_76 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_76, 3)
                                    arg5 = _mm256_add_epi64(zmm1, arg6)
                                    
                                    if ((rsi_4 & 0x10) == 0)
                                        goto label_14017f686
                                    
                                    goto label_14017fc01
                                
                            label_14017f678:
                                arg5 = _mm256_add_epi64(zmm1, arg6)
                                
                                if ((rsi_4 & 0x10) == 0)
                                label_14017f686:
                                    
                                    if ((rsi_4 & 0x20) != 0)
                                        goto label_14017fc10
                                    
                                    goto label_14017f690
                                
                            label_14017fc01:
                                arg8[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg5[0].q, 4)
                                
                                if ((rsi_4 & 0x20) != 0)
                                label_14017fc10:
                                    uint16_t* rax_78 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_78, 5)
                                    
                                    if ((rsi_4 & 0x40) == 0)
                                        goto label_14017f69a
                                    
                                    goto label_14017fc25
                                
                            label_14017f690:
                                
                                if ((rsi_4 & 0x40) != 0)
                                label_14017fc25:
                                    arg6[0].o = _mm256_extracti128_si256(arg5, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg6[0].q, 6)
                                    
                                    if (temp0_165.b s< 0)
                                    label_14017fc3e:
                                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                        uint16_t* rax_80 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_80, 7)
                                else
                                label_14017f69a:
                                    
                                    if (temp0_165.b s< 0)
                                        goto label_14017fc3e
                                
                                arg6 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepu16_epi32(arg8[0].o), var_880_1)
                                arg9 = arg6 ^ arg15
                                bool cond:27_1 = _mm256_movemask_ps(arg6 & not.32(arg14)) == 0
                                var_2f0 = arg8[0].o
                                int32_t var_9c0_2[0x8] = arg9
                                
                                if (cond:27_1)
                                    arg5 = zmm2
                                else
                                    arg5 = _mm256_blendv_ps(zmm2, arg10, arg9)
                                    arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                                    arg15 = _mm256_sub_epi32(zmm2, arg8)
                                    arg8 = arg6 & not.32(_mm256_cmpgt_epi32(arg15, arg10) ^ arg8)
                                    arg16 = arg14 & arg8
                                    int32_t i_7 = _mm256_movemask_ps(arg16)
                                    
                                    if (i_7 != 0)
                                        arg12 = zmm2
                                        
                                        do
                                            arg11 = arg15
                                            arg6 = _mm256_add_epi32(arg15, arg15)
                                            arg7 = _mm256_cvtepi32_epi64(arg6[0].o)
                                            arg15 = __vpaddq_ymmqq_ymmqq_memqq(arg7, var_a40_1)
                                            char temp0_216 = _mm256_movemask_ps(arg16)
                                            int128_t var_3a0
                                            uint16_t* rax_53
                                            
                                            if ((temp0_216 & 1) != 0)
                                                arg9[0].o = var_3a0
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg9[0].o, *arg15[0].q, 0)
                                                
                                                if ((temp0_216 & 2) != 0)
                                                    rax_53 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg9[0].o, *rax_53, 1)
                                            else
                                                arg9[0].o = var_3a0
                                                
                                                if ((temp0_216 & 2) != 0)
                                                    rax_53 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg9[0].o, *rax_53, 1)
                                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                            
                                            if ((temp0_216 & 4) == 0)
                                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                                
                                                if ((temp0_216 & 8) != 0)
                                                    goto label_14017f72e
                                                
                                                goto label_14017f820
                                            
                                            arg7[0].o = _mm256_extracti128_si256(arg15, 1)
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                                *arg7[0].q, 2)
                                            arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                            
                                            if ((temp0_216 & 8) != 0)
                                            label_14017f72e:
                                                arg7[0].o = _mm256_extracti128_si256(arg15, 1)
                                                uint16_t* rax_47 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg9[0].o, *rax_47, 3)
                                                arg15 = _mm256_add_epi64(zmm1, arg6)
                                                
                                                if ((temp0_216 & 0x10) == 0)
                                                    goto label_14017f82d
                                                
                                                goto label_14017f751
                                            
                                        label_14017f820:
                                            arg15 = _mm256_add_epi64(zmm1, arg6)
                                            
                                            if ((temp0_216 & 0x10) == 0)
                                            label_14017f82d:
                                                
                                                if ((temp0_216 & 0x20) != 0)
                                                    goto label_14017f75f
                                                
                                                goto label_14017f836
                                            
                                        label_14017f751:
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                                *arg15[0].q, 4)
                                            
                                            if ((temp0_216 & 0x20) != 0)
                                            label_14017f75f:
                                                uint16_t* rax_49 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg9[0].o, *rax_49, 5)
                                                
                                                if ((temp0_216 & 0x40) == 0)
                                                    goto label_14017f83f
                                                
                                                goto label_14017f773
                                            
                                        label_14017f836:
                                            
                                            if ((temp0_216 & 0x40) != 0)
                                            label_14017f773:
                                                arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg9[0].o, *arg6[0].q, 6)
                                                
                                                if (temp0_216 s< 0)
                                                label_14017f78b:
                                                    arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                                    uint16_t* rax_51 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg9[0].o, *rax_51, 7)
                                            else
                                            label_14017f83f:
                                                
                                                if (temp0_216 s< 0)
                                                    goto label_14017f78b
                                            
                                            var_3a0 = arg9[0].o
                                            arg6 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                                _mm256_cvtepu16_epi32(arg9[0].o), var_880_1)
                                            arg9 = arg6 & arg8
                                            arg6[0].o = zx.o(0)
                                            arg7 = arg9 & arg14
                                            
                                            if (_mm256_movemask_ps(arg7) != i_7)
                                                arg6 = arg9 ^ arg8
                                            
                                            arg5 = _mm256_blendv_ps(arg5, arg12, arg9)
                                            arg15 = _mm256_sub_epi32(arg11, 
                                                _mm256_cmpeq_epi32(arg7, arg7))
                                            arg8 = _mm256_cmpgt_epi32(arg15, arg10) & not.32(arg6)
                                            arg16 = arg8 & arg14
                                            i_7 = _mm256_movemask_ps(arg16)
                                            arg12 = arg11
                                        while (i_7 != 0)
                                
                                arg6 = _mm256_andnot_ps(var_9c0_2, arg14)
                                bool cond:29_1 = _mm256_movemask_ps(arg6) == 0
                                var_8c0.32 = arg10
                                arg10 = zmm1
                                arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                                int32_t i_8
                                
                                if (not(cond:29_1))
                                    arg6 = _mm256_xor_ps(var_9c0_2, arg15)
                                    zmm1[0].o = zx.o(0)
                                    arg5 = _mm256_blendv_ps(arg5, zmm1, arg6)
                                    zmm2 = _mm256_add_epi32(zmm2, arg15)
                                    arg6 &= _mm256_cmpgt_epi32(zmm2, zmm1)
                                    arg11 = arg6 & arg14
                                    i_8 = _mm256_movemask_ps(arg11)
                                
                                int128_t var_510
                                
                                if (cond:29_1 || i_8 == 0)
                                    zmm1[0].o = var_510
                                else
                                    zmm1[0].o = var_510
                                    
                                    do
                                        arg12 = _mm256_add_epi32(zmm2, zmm2)
                                        arg7 = _mm256_cvtepi32_epi64(arg12[0].o)
                                        arg8 = _mm256_add_epi64(var_a40_1, arg7)
                                        char temp0_329 = _mm256_movemask_ps(arg11)
                                        
                                        if ((temp0_329 & 1) == 0)
                                            if ((temp0_329 & 2) != 0)
                                                goto label_14017fdc3
                                            
                                            goto label_14017fe94
                                        
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg8[0].q, 0)
                                        
                                        if ((temp0_329 & 2) != 0)
                                        label_14017fdc3:
                                            int64_t rax_99 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_99, 1)
                                            arg9[0].o = _mm256_extracti128_si256(arg12, 1)
                                            
                                            if ((temp0_329 & 4) == 0)
                                                goto label_14017fea3
                                            
                                            goto label_14017fddd
                                        
                                    label_14017fe94:
                                        arg9[0].o = _mm256_extracti128_si256(arg12, 1)
                                        
                                        if ((temp0_329 & 4) == 0)
                                        label_14017fea3:
                                            arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                            
                                            if ((temp0_329 & 8) != 0)
                                                goto label_14017fdfb
                                            
                                            goto label_14017feb1
                                        
                                    label_14017fddd:
                                        arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg7[0].q, 2)
                                        arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                        
                                        if ((temp0_329 & 8) != 0)
                                        label_14017fdfb:
                                            arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                            int64_t rax_101 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_101, 3)
                                            arg8 = _mm256_add_epi64(arg10, arg9)
                                            
                                            if ((temp0_329 & 0x10) == 0)
                                                goto label_14017febe
                                            
                                            goto label_14017fe1e
                                        
                                    label_14017feb1:
                                        arg8 = _mm256_add_epi64(arg10, arg9)
                                        
                                        if ((temp0_329 & 0x10) == 0)
                                        label_14017febe:
                                            
                                            if ((temp0_329 & 0x20) != 0)
                                                goto label_14017fe2c
                                            
                                            goto label_14017fec7
                                        
                                    label_14017fe1e:
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg8[0].q, 4)
                                        
                                        if ((temp0_329 & 0x20) != 0)
                                        label_14017fe2c:
                                            int64_t rax_103 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_103, 5)
                                            
                                            if ((temp0_329 & 0x40) == 0)
                                                goto label_14017fed0
                                            
                                            goto label_14017fe40
                                        
                                    label_14017fec7:
                                        
                                        if ((temp0_329 & 0x40) != 0)
                                        label_14017fe40:
                                            arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *arg7[0].q, 6)
                                            
                                            if (temp0_329 s< 0)
                                            label_14017fe58:
                                                arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                                int64_t rax_105 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_105, 7)
                                        else
                                        label_14017fed0:
                                            
                                            if (temp0_329 s< 0)
                                                goto label_14017fe58
                                        
                                        arg9 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                            _mm256_cvtepu16_epi32(zmm1[0].o), var_880_1) & not.32(arg6)
                                        arg8[0].o = zx.o(0)
                                        int32_t temp0_335 = _mm256_movemask_ps(arg9 & arg14)
                                        arg11[0].o = zx.o(0)
                                        
                                        if (temp0_335 != i_8)
                                            arg11 = arg9 ^ arg6
                                        
                                        arg5 = _mm256_blendv_ps(arg5, zmm2, arg9)
                                        zmm2 = _mm256_add_epi32(zmm2, arg15)
                                        arg6 = _mm256_cmpgt_epi32(zmm2, arg8) & arg11
                                        arg11 = arg6 & arg14
                                        i_8 = _mm256_movemask_ps(arg11)
                                    while (i_8 != 0)
                                
                                int128_t var_400
                                arg6[0].o = var_400
                                arg16 = _mm256_blendv_ps(zmm0, arg5, arg14)
                                zmm2 = _mm256_add_epi32(arg16, arg16)
                                zmm0 = __vpaddq_ymmqq_ymmqq_memqq(_mm256_cvtepi32_epi64(zmm2[0].o), 
                                    var_a40_1)
                                var_510 = zmm1[0].o
                                
                                if ((rsi_4 & 1) != 0)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 0)
                                
                                arg8 = var_760
                                arg9 = var_960_1
                                arg11 = var_a00_1
                                zmm1 = arg10
                                arg7 = var_8c0.32
                                
                                if ((rsi_4 & 2) == 0)
                                    arg10 = var_720_1
                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    
                                    if ((rsi_4 & 4) != 0)
                                        goto label_140180109
                                    
                                    goto label_14017ffbd
                                
                                uint16_t* rax_109 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_109, 1)
                                arg10 = var_720_1
                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                int128_t var_420
                                
                                if ((rsi_4 & 4) != 0)
                                label_140180109:
                                    var_720_1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *var_720_1[0].q, 2)
                                    var_720_1[0].o = var_420
                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                    
                                    if ((rsi_4 & 8) == 0)
                                        goto label_14017ffd5
                                    
                                    goto label_140180131
                                
                            label_14017ffbd:
                                var_720_1[0].o = var_420
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                
                                if ((rsi_4 & 8) == 0)
                                label_14017ffd5:
                                    zmm0 = _mm256_add_epi64(zmm1, zmm2)
                                    
                                    if ((rsi_4 & 0x10) != 0)
                                        goto label_140180155
                                    
                                    goto label_14017ffe3
                                
                            label_140180131:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                uint16_t* rax_111 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_111, 3)
                                zmm0 = _mm256_add_epi64(zmm1, zmm2)
                                
                                if ((rsi_4 & 0x10) != 0)
                                label_140180155:
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 4)
                                    
                                    if ((rsi_4 & 0x20) == 0)
                                        goto label_14017ffed
                                    
                                    goto label_140180164
                                
                            label_14017ffe3:
                                
                                if ((rsi_4 & 0x20) == 0)
                                label_14017ffed:
                                    
                                    if ((rsi_4 & 0x40) != 0)
                                        goto label_140180179
                                    
                                    goto label_14017fff7
                                
                            label_140180164:
                                uint16_t* rax_113 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_113, 5)
                                
                                if ((rsi_4 & 0x40) == 0)
                                label_14017fff7:
                                    
                                    if (temp0_165.b s< 0)
                                    label_140180192:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        uint16_t* rax_115 =
                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_115, 7)
                                else
                                label_140180179:
                                    zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 6)
                                    
                                    if (temp0_165.b s< 0)
                                        goto label_140180192
                                
                                arg12 = _mm256_blendv_ps(var_840.32, 
                                    _mm256_sub_epi32(arg16, arg15), arg14)
                                zmm0 = _mm256_cmpgt_epi32(arg12, arg7) & arg14
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    arg12 = _mm256_blendv_ps(arg12, arg7, zmm0)
                                
                                arg14 = var_860_1
                                zmm2 = _mm256_add_epi32(arg12, arg12)
                                zmm0 = __vpaddq_ymmqq_ymmqq_memqq(_mm256_cvtepi32_epi64(zmm2[0].o), 
                                    var_a40_1)
                                
                                if ((rsi_4 & 1) == 0)
                                    if ((rsi_4 & 2) != 0)
                                        goto label_1401801bc
                                    
                                    goto label_140180057
                                
                                var_720_1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(var_720_1[0].o, *zmm0[0].q, 0)
                                
                                if ((rsi_4 & 2) != 0)
                                label_1401801bc:
                                    int64_t rax_117 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    var_720_1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_720_1[0].o, *rax_117, 1)
                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    
                                    if ((rsi_4 & 4) == 0)
                                        goto label_140180067
                                    
                                    goto label_1401801db
                                
                            label_140180057:
                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                
                                if ((rsi_4 & 4) == 0)
                                label_140180067:
                                    arg7 = var_900_1
                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                    
                                    if ((rsi_4 & 8) != 0)
                                        goto label_14018020f
                                    
                                    goto label_14018007f
                                
                            label_1401801db:
                                zmm1[0].o = var_720_1[0].o
                                var_720_1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                var_720_1[0].o = zmm1[0].o
                                var_720_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_720_1[0].o, 
                                    *var_720_1[0].q, 2)
                                arg7 = var_900_1
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                
                                if ((rsi_4 & 8) != 0)
                                label_14018020f:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    int64_t rax_119 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    var_720_1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_720_1[0].o, *rax_119, 3)
                                    zmm0 = _mm256_add_epi64(zmm1, zmm2)
                                    
                                    if ((rsi_4 & 0x10) == 0)
                                        goto label_14018008d
                                    
                                    goto label_140180233
                                
                            label_14018007f:
                                zmm0 = _mm256_add_epi64(zmm1, zmm2)
                                
                                if ((rsi_4 & 0x10) != 0)
                                label_140180233:
                                    var_720_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        var_720_1[0].o, *zmm0[0].q, 4)
                                    
                                    if ((rsi_4 & 0x20) != 0)
                                    label_140180242:
                                        int64_t rax_121 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        var_720_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            var_720_1[0].o, *rax_121, 5)
                                        
                                        if ((rsi_4 & 0x40) == 0)
                                            goto label_1401800a4
                                        
                                        goto label_140180257
                                else
                                label_14018008d:
                                    
                                    if ((rsi_4 & 0x20) != 0)
                                        goto label_140180242
                                
                                if ((rsi_4 & 0x40) != 0)
                                label_140180257:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    var_720_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        var_720_1[0].o, *zmm1[0].q, 6)
                                    var_9c0_1 = arg12
                                    
                                    if (temp0_165.b s< 0)
                                    label_140180279:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_123 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        var_720_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            var_720_1[0].o, *rax_123, 7)
                                else
                                label_1401800a4:
                                    var_9c0_1 = arg12
                                    
                                    if (temp0_165.b s< 0)
                                        goto label_140180279
                                
                                var_400 = arg6[0].o
                                zmm0 = _mm256_cvtepu16_epi32(arg6[0].o)
                                var_420 = var_720_1[0].o
                                zmm2 = _mm256_cvtepu16_epi32(var_720_1[0].o)
                                arg5 = _mm256_xor_ps(arg7, arg15)
                                arg6[0].o = zx.o(0)
                                
                                if (arg20 != 1)
                                    goto label_140180694
                            
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            zmm2 = _mm256_blendv_ps(zmm0, arg6, arg5)
                    
                    arg10 = _mm256_blendv_ps(arg10, zmm2, arg11)
                
                arg11 = var_8a0_1
            
            zmm0[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            arg12 = _mm256_cvtepi32_epi64(zmm0[0].o)
            var_8c0.32 = arg16
            zmm0 = _mm256_mullo_epi32(arg16, arg8)
            arg11 = _mm256_cvtepi32_epi64(arg11[0].o)
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            arg5 = _mm256_cvtepi32_epi64(zmm1[0].o)
            arg15 = _mm256_cvtepi32_epi64(zmm0[0].o)
            zmm0 = __vpbroadcastd_ymmqq_memd(2)
            float var_900_2[0x8] = zmm0
            zmm0 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_940)
            float var_a00_2[0x8] = zmm0
            zmm0 = arg17 & not.32(zmm0)
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            arg16[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm0[0].o)
            float var_a40_2[0x8] = arg12
            float var_720_2[0x8] = arg10
            int32_t var_920_2[0x8] = arg11
            float var_5c0_1[0x8] = arg5
            uint32_t var_740_1[0x8] = arg15
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                arg16 = var_8c0.32
                arg15 = _mm256_cmpeq_epi32(arg15, arg15)
            else
                zmm1 = _mm256_add_epi64(arg15, arg11)
                arg6 = _mm256_add_epi64(_mm256_add_epi64(arg5, arg12), arg9)
                arg8 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_780_1)
                zmm1 = _mm256_srai_epi32(_mm256_slli_epi32(var_980, 0x1f), 0x1f)
                
                if (_mm256_movemask_ps(zmm1 & zmm0) != 0)
                    zmm2 = __vpbroadcastq_ymmqq_memq(2)
                    arg14 = arg5
                    arg5 = _mm256_add_epi64(arg8, zmm2)
                    arg9 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg16[0].o), 0x1f), 0x1f) & zmm1
                    arg7 = data_143442920
                    arg10 = _mm256_permutevar8x32_epi32(arg7, arg9)
                    arg8 = _mm256_blendv_ps(arg8, arg5, arg10)
                    zmm2 = _mm256_add_epi64(arg6, zmm2)
                    arg5 = _mm256_permutevar8x32_epi32(data_143442940, arg9)
                    arg6 = _mm256_blendv_ps(arg6, zmm2, arg5)
                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(arg12, var_a20_1)
                    arg9 = __vpaddq_ymmqq_ymmqq_memqq(arg11, var_9e0)
                    arg11 = __vpbroadcastq_ymmqq_memq(4)
                    arg9 = _mm256_add_epi64(arg9, arg15)
                    zmm2 = _mm256_add_epi64(_mm256_add_epi64(zmm2, arg14), arg11)
                    arg9 = _mm256_add_epi64(arg9, arg11)
                    arg7[0].o = zx.o(0)
                    arg9 = _mm256_blendv_ps(arg7, arg9, arg10)
                    zmm2 = _mm256_blendv_ps(arg7, zmm2, arg5)
                    int64_t r14_2 = arg9[0].q
                    int64_t r8_1 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                    arg5[0].o = _mm256_extracti128_si256(arg9, 1)
                    int64_t rbx_6 = arg5[0].q
                    int64_t r15_3 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                    int64_t rsi_5 = zmm2[0].q
                    int64_t rdx_5 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                    int64_t rcx_11 = zmm2[0].q
                    int64_t rax_151 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    zmm2[0].o = zx.o(*(arg4 + r14_2))
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r8_1), 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rbx_6), 2)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r15_3), 3)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rsi_5), 4)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rdx_5), 5)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rcx_11), 6)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rax_151), 7)
                    arg10 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(zmm2[0].o))
                
                int128_t var_3c0
                arg5[0].o = var_3c0
                arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                arg14 = _mm256_broadcast_ss(32767f)
                arg12 = var_900_2 & var_980
                zmm2 = _mm256_cmpeq_epi32(arg12, var_900_2)
                arg9[0].o = _mm256_extracti128_si256(zmm2, 1)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                zmm2[0].o &= arg16[0].o
                arg9[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                arg9[0].o = __vpsraw_xmmdq_xmmdq_immb(arg9[0].o, 0xf)
                arg9[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                char temp0_519 = __vpmovmskb_gpr32d_xmmdq(arg9[0].o)
                
                if (temp0_519 != 0)
                    if ((temp0_519 & 1) == 0)
                        if ((temp0_519 & 2) != 0)
                            goto label_140180a7d
                        
                        goto label_140180930
                    
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg8[0].q, 0)
                    
                    if ((temp0_519 & 2) != 0)
                    label_140180a7d:
                        int64_t rax_155 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_155, 1)
                        
                        if ((temp0_519 & 4) == 0)
                            goto label_14018093a
                        
                        goto label_140180a92
                    
                label_140180930:
                    
                    if ((temp0_519 & 4) == 0)
                    label_14018093a:
                        
                        if ((temp0_519 & 8) != 0)
                            goto label_140180aac
                        
                        goto label_140180944
                    
                label_140180a92:
                    arg9[0].o = _mm256_extracti128_si256(arg8, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg9[0].q, 2)
                    
                    if ((temp0_519 & 8) != 0)
                    label_140180aac:
                        arg9[0].o = _mm256_extracti128_si256(arg8, 1)
                        int64_t rax_157 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_157, 3)
                        zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                        
                        if ((temp0_519 & 0x10) == 0)
                            goto label_140180953
                        
                        goto label_140180ad1
                    
                label_140180944:
                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                    
                    if ((temp0_519 & 0x10) == 0)
                    label_140180953:
                        zmm2 = _mm256_slli_epi32(zmm2, 0x1f)
                        
                        if ((temp0_519 & 0x20) != 0)
                            goto label_140180ae5
                        
                        goto label_140180962
                    
                label_140180ad1:
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg6[0].q, 4)
                    zmm2 = _mm256_slli_epi32(zmm2, 0x1f)
                    
                    if ((temp0_519 & 0x20) == 0)
                    label_140180962:
                        arg15 = __vpbroadcastq_ymmqq_memq(2)
                        arg9 = _mm256_srai_epi32(zmm2, 0x1f)
                        
                        if ((temp0_519 & 0x40) != 0)
                            zmm2[0].o = _mm256_extracti128_si256(arg6, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm2[0].q, 6)
                    else
                    label_140180ae5:
                        int64_t rax_159 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_159, 5)
                        arg15 = __vpbroadcastq_ymmqq_memq(2)
                        arg9 = _mm256_srai_epi32(zmm2, 0x1f)
                        
                        if ((temp0_519 & 0x40) != 0)
                            zmm2[0].o = _mm256_extracti128_si256(arg6, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm2[0].q, 6)
                    
                    zmm2 = _mm256_add_epi64(arg6, arg15)
                    arg15 = _mm256_add_epi64(arg8, arg15)
                    arg11 = _mm256_permutevar8x32_epi32(data_143442920, arg9)
                    arg9 = _mm256_permutevar8x32_epi32(data_143442940, arg9)
                    
                    if (temp0_519 s< 0)
                        arg17[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t rax_153 = __vpextrq_gpr64q_xmmdq_immb(arg17[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_153, 7)
                    
                    arg8 = _mm256_blendv_ps(arg8, arg15, arg11)
                    arg6 = _mm256_blendv_ps(arg6, zmm2, arg9)
                    zmm2 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(arg5[0].o))
                    arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                
                arg7 = _mm256_blendv_ps(arg14, arg10, zmm1)
                arg10 = var_8e0_1 & var_980
                zmm1 = _mm256_cmpeq_epi32(arg10, var_8e0_1)
                arg9[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                zmm1[0].o &= arg16[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                char temp0_544 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                var_3c0 = arg5[0].o
                
                if (temp0_544 == 0)
                    arg14 = var_860_1
                    arg16 = var_8c0.32
                else
                    int128_t var_3d0
                    int64_t rax_161
                    
                    if ((temp0_544 & 1) != 0)
                        arg9[0].o = var_3d0
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg8[0].q, 0)
                        
                        if ((temp0_544 & 2) != 0)
                            rax_161 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_161, 1)
                    else
                        arg9[0].o = var_3d0
                        
                        if ((temp0_544 & 2) != 0)
                            rax_161 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_161, 1)
                    arg14 = var_860_1
                    arg16 = var_8c0.32
                    
                    if ((temp0_544 & 4) == 0)
                        if ((temp0_544 & 8) != 0)
                            goto label_14018186e
                        
                        goto label_140180b57
                    
                    zmm1[0].o = _mm256_extracti128_si256(arg8, 1)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm1[0].q, 2)
                    
                    if ((temp0_544 & 8) != 0)
                    label_14018186e:
                        zmm1[0].o = _mm256_extracti128_si256(arg8, 1)
                        uint16_t* rax_181 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_181, 3)
                        
                        if ((temp0_544 & 0x10) == 0)
                            goto label_140180b61
                        
                        goto label_14018188e
                    
                label_140180b57:
                    
                    if ((temp0_544 & 0x10) == 0)
                    label_140180b61:
                        
                        if ((temp0_544 & 0x20) != 0)
                            goto label_14018189d
                        
                        goto label_140180b6b
                    
                label_14018188e:
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg6[0].q, 4)
                    
                    if ((temp0_544 & 0x20) != 0)
                    label_14018189d:
                        uint16_t* rax_183 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_183, 5)
                        
                        if ((temp0_544 & 0x40) == 0)
                            goto label_140180b75
                        
                        goto label_1401818b2
                    
                label_140180b6b:
                    
                    if ((temp0_544 & 0x40) != 0)
                    label_1401818b2:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm1[0].q, 6)
                        
                        if (temp0_544 s< 0)
                        label_1401818ca:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint16_t* rax_185 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_185, 7)
                    else
                    label_140180b75:
                        
                        if (temp0_544 s< 0)
                            goto label_1401818ca
                    
                    var_3d0 = arg9[0].o
                    arg6 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(arg9[0].o))
                
                arg11[0].o = zx.o(0)
                zmm1 = _mm256_cmpeq_epi32(arg10, arg11)
                arg8 = _mm256_cmpeq_epi32(arg12, arg11)
                arg9 = _mm256_broadcast_ss(-32767f)
                arg5 = _mm256_add_ps(arg7, arg9)
                arg10 = _mm256_broadcast_ss(3.05185094e-05f)
                arg5 = _mm256_mul_ps(arg5, arg10)
                zmm2 = arg8 & not.32(_mm256_mul_ps(_mm256_add_ps(zmm2, arg9), arg10))
                zmm1 &= not.32(_mm256_mul_ps(_mm256_add_ps(arg6, arg9), arg10))
                arg6 = _mm256_fnmadd_ps(
                    _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg5, arg5), zmm2, 
                        zmm2), 
                    zmm1, zmm1)
                arg8 = _mm256_cmp_ps(arg11, arg6, 2)
                arg6 = _mm256_and_ps(arg8, _mm256_sqrt_ps(arg6))
                var_4e0.32 = _mm256_maskstore_ps(zmm0, arg5)
                var_4c0.32 = _mm256_maskstore_ps(zmm0, zmm2)
                var_4a0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                var_480.32 = _mm256_maskstore_ps(zmm0, arg6)
            
            zmm0 = arg15 ^ var_a00_2
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            var_840 = zmm1[0].o
            zmm0 = arg17 & not.32(zmm0)
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                zmm0 = var_6a0_1
                arg15 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_940)
                arg5 = arg17 & not.32(arg15)
                zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_a40_2, var_a20_1)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_920_2, var_9e0)
                    arg6 = __vpbroadcastq_ymmqq_memq(4)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_740_1)
                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_5c0_1)
                    arg8 = _mm256_add_epi64(zmm0, arg6)
                    arg6 = _mm256_add_epi64(zmm1, arg6)
                    arg9[0].o = _mm256_extracti128_si256(arg5, 1)
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    arg7[0].o = arg5[0].o
                    float temp0_602[0x4]
                    int32_t temp1_7
                    temp0_602, temp1_7 =
                        _mm256_i64gather_ps(arg10[0].o, *(arg4 + arg6[0].q), arg7[0].o)
                    arg10[0].o = temp0_602
                    arg7[0].o = temp1_7
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    arg7[0].o = arg9[0].o
                    float temp0_604[0x4]
                    int32_t temp1_8
                    temp0_604, temp1_8 =
                        _mm256_i64gather_ps(arg6[0].o, *(arg4 + arg8[0].q), arg7[0].o)
                    arg6[0].o = temp0_604
                    arg7[0].o = temp1_8
                    arg7 = __vpbroadcastq_ymmqq_memq(8)
                    arg12 = _mm256_add_epi64(zmm0, arg7)
                    arg7 = _mm256_add_epi64(zmm1, arg7)
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    arg8[0].o = arg5[0].o
                    float temp0_609[0x4]
                    int32_t temp1_9
                    temp0_609, temp1_9 =
                        _mm256_i64gather_ps(arg11[0].o, *(arg4 + arg7[0].q), arg8[0].o)
                    arg11[0].o = temp0_609
                    arg8[0].o = temp1_9
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    arg8[0].o = arg9[0].o
                    float temp0_611[0x4]
                    int32_t temp1_10
                    temp0_611, temp1_10 =
                        _mm256_i64gather_ps(arg7[0].o, *(arg4 + arg12[0].q), arg8[0].o)
                    arg7[0].o = temp0_611
                    arg8[0].o = temp1_10
                    arg8 = __vpbroadcastq_ymmqq_memq(0xc)
                    zmm1 = _mm256_add_epi64(zmm1, arg8)
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    zmm2[0].o = arg5[0].o
                    float temp0_615[0x4]
                    int32_t temp1_11
                    temp0_615, temp1_11 =
                        _mm256_i64gather_ps(arg12[0].o, *(arg4 + zmm1[0].q), zmm2[0].o)
                    arg12[0].o = temp0_615
                    zmm2[0].o = temp1_11
                    zmm0 = _mm256_add_epi64(zmm0, arg8)
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    float temp0_618[0x4]
                    int32_t temp1_12
                    temp0_618, temp1_12 =
                        _mm256_i64gather_ps(zmm1[0].o, *(arg4 + zmm0[0].q), arg9[0].o)
                    zmm1[0].o = temp0_618
                    arg9[0].o = temp1_12
                    zmm0 = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
                    zmm2 = _mm256_insertf128_ps(arg11, arg7[0].o, 1)
                    zmm1 = _mm256_insertf128_ps(arg12, zmm1[0].o, 1)
                    arg6 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm0, zmm0), 
                            zmm2, zmm2), 
                        zmm1, zmm1)
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    arg7 = _mm256_cmp_ps(arg7, arg6, 1)
                    arg6 = _mm256_and_ps(arg7, _mm256_sqrt_ps(arg6))
                    var_4e0.32 = _mm256_maskstore_ps(arg5, zmm0)
                    var_4c0.32 = _mm256_maskstore_ps(arg5, zmm2)
                    var_4a0.32 = _mm256_maskstore_ps(arg5, zmm1)
                    var_480.32 = _mm256_maskstore_ps(arg5, arg6)
                
                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
                arg12[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg14[0].o, arg12[0].o)
                arg15[0].o = zmm0[0].o ^ var_840
                zmm0[0].o = arg15[0].o & zmm1[0].o
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(var_2c0_1[0].o, var_390_1)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0[0].o = zx.o(0)
                        float var_640_1[0x8] = zmm0
                        float var_660_1[0x8] = zmm0
                        float var_680_1[0x8] = zmm0
                        float var_6c0_1[0x8] = zmm0
                        float var_6e0_1[0x8] = zmm0
                        float var_700_1[0x8] = zmm0
                        zmm0 = _mm256_srai_epi32(_mm256_slli_epi32(var_980, 0x1f), 0x1f) & var_9a0_1
                        arg10 = zmm0 & arg14
                        arg9 = var_780_1
                        zmm2 = arg9
                        arg16 = var_960_1
                        arg5 = arg16
                        
                        if (_mm256_movemask_ps(arg10) != 0)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            zmm2 = _mm256_add_epi64(arg16, zmm1)
                            arg5 = _mm256_add_epi64(arg9, zmm1)
                            arg6 = data_143442920
                            arg7 = _mm256_permutevar8x32_ps(arg6, arg10)
                            arg5 = _mm256_blendv_ps(arg9, arg5, arg7)
                            arg8[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            arg6[0].o = arg10[0].o
                            float temp0_653[0x4]
                            int32_t temp1_13
                            temp0_653, temp1_13 =
                                _mm256_i64gather_ps(arg11[0].o, *arg9[0].q, arg6[0].o)
                            arg11[0].o = temp0_653
                            arg6[0].o = temp1_13
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            arg9[0].o = arg8[0].o
                            float temp0_655[0x4]
                            int32_t temp1_14
                            temp0_655, temp1_14 =
                                _mm256_i64gather_ps(arg6[0].o, *arg16[0].q, arg9[0].o)
                            arg6[0].o = temp0_655
                            arg9[0].o = temp1_14
                            arg9 = _mm256_permutevar8x32_ps(data_143442940, arg10)
                            arg16 = _mm256_blendv_ps(arg16, zmm2, arg9)
                            var_680_1 =
                                _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(arg11, arg6[0].o, 1))
                            zmm2 = _mm256_blendv_ps(arg5, _mm256_add_epi64(arg5, zmm1), arg7)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            float temp0_663[0x4]
                            int32_t temp1_15
                            temp0_663, temp1_15 =
                                _mm256_i64gather_ps(arg6[0].o, *arg5[0].q, arg10[0].o)
                            arg6[0].o = temp0_663
                            arg10[0].o = temp1_15
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            float temp0_665[0x4]
                            int32_t temp1_16
                            temp0_665, temp1_16 =
                                _mm256_i64gather_ps(arg7[0].o, *arg16[0].q, arg8[0].o)
                            arg7[0].o = temp0_665
                            arg8[0].o = temp1_16
                            arg5 = _mm256_blendv_ps(arg16, _mm256_add_epi64(arg16, zmm1), arg9)
                            var_700_1 =
                                _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(arg6, arg7[0].o, 1))
                        
                        zmm1 = var_900_2
                        zmm0 = _mm256_cmpeq_epi32(zmm1 & var_980, zmm1) & var_9a0_1
                        zmm1 = arg17 & not.32(zmm0)
                        arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg9[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg9[0].o), 0x1f), 0x1f)
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            arg10 = _mm256_add_epi64(arg5, arg6)
                            arg8 = _mm256_add_epi64(zmm2, arg6)
                            arg7 = data_143442920
                            arg16 = _mm256_permutevar8x32_epi32(arg7, zmm1)
                            arg8 = _mm256_blendv_ps(zmm2, arg8, arg16)
                            arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            arg9[0].o = zmm1[0].o
                            float temp0_685[0x4]
                            int32_t temp1_17
                            temp0_685, temp1_17 =
                                _mm256_i64gather_ps(arg11[0].o, *zmm2[0].q, arg9[0].o)
                            arg11[0].o = temp0_685
                            arg9[0].o = temp1_17
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            arg9[0].o = arg7[0].o
                            float temp0_687[0x4]
                            int32_t temp1_18
                            temp0_687, temp1_18 =
                                _mm256_i64gather_ps(zmm2[0].o, *arg5[0].q, arg9[0].o)
                            zmm2[0].o = temp0_687
                            arg9[0].o = temp1_18
                            arg9 = _mm256_permutevar8x32_epi32(data_143442940, zmm1)
                            arg5 = _mm256_blendv_ps(arg5, arg10, arg9)
                            var_660_1 =
                                _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(arg11, zmm2[0].o, 1))
                            zmm2 = _mm256_blendv_ps(arg8, _mm256_add_epi64(arg8, arg6), arg16)
                            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            float temp0_695[0x4]
                            int32_t temp1_19
                            temp0_695, temp1_19 =
                                _mm256_i64gather_ps(arg10[0].o, *arg8[0].q, zmm1[0].o)
                            arg10[0].o = temp0_695
                            zmm1[0].o = temp1_19
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            float temp0_697[0x4]
                            int32_t temp1_20
                            temp0_697, temp1_20 =
                                _mm256_i64gather_ps(zmm1[0].o, *arg5[0].q, arg7[0].o)
                            zmm1[0].o = temp0_697
                            arg7[0].o = temp1_20
                            arg6 = _mm256_add_epi64(arg5, arg6)
                            arg5 = _mm256_blendv_ps(arg5, arg6, arg9)
                            var_6e0_1 =
                                _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(arg10, zmm1[0].o, 1))
                        
                        arg16 = var_8c0.32
                        zmm0 = _mm256_cmpeq_epi32(var_8e0_1 & var_980, var_8e0_1) & var_9a0_1
                        zmm1 = arg17 & not.32(zmm0)
                        arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg9[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg9[0].o), 0x1f), 0x1f)
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            arg7 = _mm256_add_epi64(arg5, arg6)
                            arg6 = _mm256_add_epi64(zmm2, arg6)
                            arg8 = _mm256_permutevar8x32_epi32(data_143442920, zmm1)
                            arg10 = _mm256_blendv_ps(zmm2, arg6, arg8)
                            arg8[0].o = _mm256_extracti128_si256(zmm1, 1)
                            arg9[0].o = zx.o(0)
                            arg6[0].o = zmm1[0].o
                            float temp0_716[0x4]
                            int32_t temp1_21
                            temp0_716, temp1_21 =
                                _mm256_i64gather_ps(zx.o(0), *zmm2[0].q, arg6[0].o)
                            arg9[0].o = temp0_716
                            arg6[0].o = temp1_21
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            arg6[0].o = arg8[0].o
                            float temp0_718[0x4]
                            int32_t temp1_22
                            temp0_718, temp1_22 =
                                _mm256_i64gather_ps(zmm2[0].o, *arg5[0].q, arg6[0].o)
                            zmm2[0].o = temp0_718
                            arg6[0].o = temp1_22
                            arg6 = _mm256_permutevar8x32_epi32(data_143442940, zmm1)
                            arg5 = _mm256_blendv_ps(arg5, arg7, arg6)
                            zmm2 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                            var_640_1 = _mm256_maskstore_ps(zmm0, zmm2)
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            float temp0_724[0x4]
                            int32_t temp1_23
                            temp0_724, temp1_23 =
                                _mm256_i64gather_ps(zmm2[0].o, *arg10[0].q, zmm1[0].o)
                            zmm2[0].o = temp0_724
                            zmm1[0].o = temp1_23
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            float temp0_726[0x4]
                            int32_t temp1_24
                            temp0_726, temp1_24 =
                                _mm256_i64gather_ps(zmm1[0].o, *arg5[0].q, arg8[0].o)
                            zmm1[0].o = temp0_726
                            arg8[0].o = temp1_24
                            var_6c0_1 =
                                _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm2, zmm1[0].o, 1))
                        
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_a40_2, var_a20_1)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_920_2, var_9e0)
                        zmm2 = __vpbroadcastq_ymmqq_memq(4)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_740_1)
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_5c0_1)
                        zmm1 = _mm256_add_epi64(zmm1, zmm2)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg10 = var_2c0_1
                        arg6[0].o = arg10[0].o
                        uint32_t temp0_736[0x4]
                        int32_t temp1_25
                        temp0_736, temp1_25 =
                            _mm256_i64gather_epi32(arg5[0].o, *(arg4 + zmm1[0].q), arg6[0].o)
                        arg5[0].o = temp0_736
                        arg6[0].o = temp1_25
                        zmm0 = _mm256_add_epi64(zmm0, zmm2)
                        zmm1[0].o = zx.o(0)
                        zmm2[0].o = var_390_1
                        uint32_t temp0_738[0x4]
                        int32_t temp1_26
                        temp0_738, temp1_26 =
                            _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm0[0].q), zmm2[0].o)
                        zmm1[0].o = temp0_738
                        zmm2[0].o = temp1_26
                        zmm0 = _mm256_inserti128_si256(arg5, zmm1[0].o, 1)
                        zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                        zmm2 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg5 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg5))
                        arg6 = _mm256_broadcast_ss(1023f)
                        zmm1 = _mm256_div_ps(zmm1, arg6)
                        arg7 = __vpbroadcastd_ymmqq_memd(0x3ff)
                        arg9 = var_6e0_1
                        zmm2 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg5)), arg6)
                        arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_700_1, zmm1, var_680_1)
                        zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg9, var_660_1)
                        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(
                            _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0 & arg7, 
                                    __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                _mm256_broadcast_ss(511f)), 
                            var_6c0_1, var_640_1)
                        zmm1 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg8, arg8), 
                                zmm2, zmm2), 
                            zmm0, zmm0)
                        arg5[0].o = zx.o(0)
                        zmm1 = _mm256_and_ps(_mm256_cmp_ps(arg5, zmm1, 1), _mm256_sqrt_ps(zmm1))
                        var_4e0.32 = _mm256_maskstore_ps(arg10, arg8)
                        var_4c0.32 = _mm256_maskstore_ps(arg10, zmm2)
                        var_4a0.32 = _mm256_maskstore_ps(arg10, zmm0)
                        var_480.32 = _mm256_maskstore_ps(arg10, zmm1)
                    
                    zmm1 = var_9a0_1
                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg14[0].o, arg12[0].o)
                    arg10[0].o = arg15[0].o ^ zmm0[0].o
                    zmm0[0].o = arg10[0].o & zmm1[0].o
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0 = __vpbroadcastd_ymmqq_memd(5)
                        arg5 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_940)
                        arg8 = arg17 & not.32(arg5)
                        zmm0[0].o = _mm256_extracti128_si256(arg8, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_a40_2, var_a20_1)
                            zmm2 = var_920_2
                            arg6 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_9e0)
                            arg7 = __vpbroadcastq_ymmqq_memq(4)
                            arg6 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_740_1)
                            zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_5c0_1)
                            arg6 = _mm256_add_epi64(arg6, arg7)
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            zmm2[0].o = arg8[0].o
                            uint32_t temp0_789[0x4]
                            int32_t temp1_27
                            temp0_789, temp1_27 =
                                _mm256_i64gather_epi32(arg9[0].o, *(arg4 + arg6[0].q), zmm2[0].o)
                            arg9[0].o = temp0_789
                            zmm2[0].o = temp1_27
                            zmm1 = _mm256_add_epi64(zmm1, arg7)
                            zmm2[0].o = zx.o(0)
                            uint32_t temp0_791[0x4]
                            int32_t temp1_28
                            temp0_791, temp1_28 =
                                _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm1[0].q), zmm0[0].o)
                            zmm2[0].o = temp0_791
                            zmm0[0].o = temp1_28
                            zmm0 = _mm256_inserti128_si256(arg9, zmm2[0].o, 1)
                            zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                            zmm2 = _mm256_srli_epi32(zmm0, 0xa)
                            arg6 = _mm256_srli_epi32(zmm0, 5)
                            arg7 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                            arg9 = __vpbroadcastd_ymmqq_memd(0x400)
                            arg11 = __vpbroadcastd_ymmqq_memd(0x380)
                            arg15 = __vpbroadcastd_ymmqq_memd(0x3d80)
                            zmm1 = (arg6 & arg7) | (zmm1 & arg9)
                                | _mm256_add_epi32(zmm1 & arg11, arg15)
                            zmm2 = (_mm256_slli_epi32(zmm0, 6) & arg7) | (zmm2 & arg9)
                                | _mm256_add_epi32(zmm2 & arg11, arg15)
                            arg6 = zmm0 & __vpbroadcastd_ymmqq_memd(0x1c0)
                            zmm0 = (_mm256_slli_epi32(zmm0, 0x11)
                                & __vpbroadcastd_ymmqq_memd(0x7e0000))
                                | (zmm0 & __vpbroadcastd_ymmqq_memd(0x200))
                            arg7 = __vpbroadcastd_ymmqq_memd(0x1ec0)
                            zmm0 |= _mm256_add_epi32(arg6, arg7)
                            arg6 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm1, zmm1), zmm2, 
                                    zmm2), 
                                zmm0, zmm0)
                            arg7[0].o = zx.o(0)
                            arg6 = _mm256_and_ps(_mm256_cmp_ps(arg7, arg6, 1), _mm256_sqrt_ps(arg6))
                            var_4e0.32 = _mm256_maskstore_ps(arg8, zmm1)
                            var_4c0.32 = _mm256_maskstore_ps(arg8, zmm2)
                            var_4a0.32 = _mm256_maskstore_ps(arg8, zmm0)
                            var_480.32 = _mm256_maskstore_ps(arg8, arg6)
                        
                        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg14[0].o, arg12[0].o)
                        zmm0[0].o ^= arg10[0].o
                        zmm2[0].o = zmm0[0].o & zmm1[0].o
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            arg5 = __vpcmpeqd_ymmqq_ymmqq_memqq(var_940, var_8e0_1)
                            var_940[0].o = _mm256_extracti128_si256(arg5, 1)
                            var_940[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, var_940[0].o)
                            var_940[0].o &= zmm2[0].o
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_940[0].o, var_940[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm0 = _mm256_cvtepi16_epi32(var_940[0].o)
                                zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_a40_2, var_a20_1)
                                arg6 = __vpaddq_ymmqq_ymmqq_memqq(var_920_2, var_9e0)
                                arg7 = __vpbroadcastq_ymmqq_memq(4)
                                arg6 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_740_1)
                                zmm1 = _mm256_add_epi64(
                                    __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_5c0_1), arg7)
                                arg6 = _mm256_add_epi64(arg6, arg7)
                                arg7[0].o = zx.o(0)
                                arg8[0].o = zmm0[0].o
                                uint32_t temp0_838[0x4]
                                int32_t temp1_29
                                temp0_838, temp1_29 =
                                    _mm256_i64gather_epi32(zx.o(0), *(arg4 + arg6[0].q), arg8[0].o)
                                arg7[0].o = temp0_838
                                arg8[0].o = temp1_29
                                arg6[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg8[0].o = zx.o(0)
                                uint32_t temp0_840[0x4]
                                int32_t temp1_30
                                temp0_840, temp1_30 =
                                    _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm1[0].q), arg6[0].o)
                                arg8[0].o = temp0_840
                                arg6[0].o = temp1_30
                                zmm1 = _mm256_inserti128_si256(arg7, arg8[0].o, 1)
                                arg6 = _mm256_srli_epi32(zmm1, 0x15)
                                arg7 =
                                    _mm256_srli_epi32(zmm1, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                                zmm1 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                                arg8 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg8))
                                arg9 = _mm256_broadcast_ss(1023f)
                                arg6 = _mm256_div_ps(arg6, arg9)
                                arg7 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, arg8)), arg9)
                                zmm1 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, 
                                        __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                    _mm256_broadcast_ss(511f))
                                arg8 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), 
                                        arg7, arg7), 
                                    zmm1, zmm1)
                                arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                                arg8 = _mm256_and_ps(_mm256_cmp_ps(arg9, arg8, 1), 
                                    _mm256_sqrt_ps(arg8))
                                var_4e0.32 = _mm256_maskstore_ps(zmm0, arg6)
                                var_4c0.32 = _mm256_maskstore_ps(zmm0, arg7)
                                var_4a0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                var_480.32 = _mm256_maskstore_ps(zmm0, arg8)
                            
                            zmm0 = arg5 ^ data_142fc9420
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                            zmm0[0].o &= zmm2[0].o
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm1 = __vpbroadcastd_ymmqq_memd(6)
                                arg5 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm1, var_940)
                                zmm1[0].o = _mm256_extracti128_si256(arg5, 1)
                                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                zmm2[0].o &= zmm1[0].o
                                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                    zmm1 = _mm256_cvtepi16_epi32(zmm2[0].o)
                                    zmm2[0].o = zx.o(0)
                                    var_4e0.32 = _mm256_maskstore_ps(zmm1, zmm2)
                                    var_4c0.32 = _mm256_maskstore_ps(zmm1, zmm2)
                                    var_4a0.32 = _mm256_maskstore_ps(zmm1, zmm2)
                                    zmm2 = _mm256_broadcast_ss(1f)
                                    var_480.32 = _mm256_maskstore_ps(zmm1, zmm2)
                                
                                zmm1 = arg5 ^ data_142fc9420
                                zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                zmm0[0].o &= zmm1[0].o
                                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                    zmm0 = _mm256_cvtepi16_epi32(zmm0[0].o)
                                    zmm1[0].o = zx.o(0)
                                    var_4e0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    var_4c0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    var_4a0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                                    var_480.32 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
            
            zmm1 = var_9c0_1
            zmm0 = _mm256_cmpeq_epi32(arg16, zmm1)
            arg7 = zmm0 & not.32(arg14)
            zmm0[0].o = _mm256_extracti128_si256(arg7, 1)
            arg16[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg16[0].o, zmm0[0].o)
            zmm2 = var_960_1
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                arg15 = _mm256_cmpeq_epi32(arg15, arg15)
            else
                arg5 = var_a00_2
                zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                arg6 = var_760
                zmm1 = _mm256_mullo_epi32(zmm1, arg6)
                arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                arg17 = _mm256_cvtepi32_epi64(arg5[0].o)
                arg12 = _mm256_cvtepi32_epi64(zmm1[0].o)
                arg5[0].o = arg16[0].o & zmm0[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                int32_t var_a00_3[0x8] = arg7
                int64_t var_9c0_4[0x4] = arg17
                var_8c0.32 = arg12
                float var_380[0x8]
                int32_t var_360[0x8]
                uint32_t var_340[0x8]
                int32_t var_320[0x8]
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                else
                    arg14 = var_920_2
                    zmm0 = _mm256_add_epi64(arg12, arg14)
                    arg6 = var_a40_2
                    arg15 = _mm256_add_epi64(_mm256_add_epi64(arg17, arg6), zmm2)
                    arg8 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_780_1)
                    arg11 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                    zmm1 = _mm256_srai_epi32(_mm256_slli_epi32(var_980, 0x1f), 0x1f)
                    zmm0 = zmm1 & arg11
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        arg7 = __vpbroadcastq_ymmqq_memq(2)
                        arg9 = _mm256_add_epi64(arg8, arg7)
                        arg10 = _mm256_permutevar8x32_ps(data_143442920, zmm0)
                        arg8 = _mm256_blendv_ps(arg8, arg9, arg10)
                        arg7 = _mm256_add_epi64(arg15, arg7)
                        zmm0 = _mm256_permutevar8x32_ps(data_143442940, zmm0)
                        arg15 = _mm256_blendv_ps(arg15, arg7, zmm0)
                        arg7 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_a20_1)
                        arg9 = __vpaddq_ymmqq_ymmqq_memqq(arg14, var_9e0)
                        zmm2 = arg12
                        arg12 = __vpbroadcastq_ymmqq_memq(4)
                        arg9 = _mm256_add_epi64(arg9, zmm2)
                        arg7 = _mm256_add_epi64(_mm256_add_epi64(arg7, arg17), arg12)
                        arg9 = _mm256_add_epi64(arg9, arg12)
                        zmm2[0].o = zx.o(0)
                        arg9 = _mm256_blendv_ps(zmm2, arg9, arg10)
                        zmm0 = _mm256_blendv_ps(zmm2, arg7, zmm0)
                        int64_t r14_3 = arg9[0].q
                        int64_t r8_2 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        arg7[0].o = _mm256_extracti128_si256(arg9, 1)
                        int64_t r15_4 = arg7[0].q
                        int64_t rbx_7 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        int64_t rdi_7 = zmm0[0].q
                        int64_t rsi_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rcx_14 = zmm0[0].q
                        int64_t rax_179 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = zx.o(*(arg4 + r14_3))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_2), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_4), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_7), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_7), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_8), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_14), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_179), 7)
                        arg10 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(zmm0[0].o))
                    
                    zmm2 = _mm256_broadcast_ss(32767f)
                    arg12 = var_900_2 & var_980
                    zmm0 = _mm256_cmpeq_epi32(arg12, var_900_2)
                    arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                    zmm0[0].o &= arg5[0].o
                    arg7[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    arg7[0].o = __vpsraw_xmmdq_xmmdq_immb(arg7[0].o, 0xf)
                    arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
                    char temp0_968 = __vpmovmskb_gpr32d_xmmdq(arg7[0].o)
                    
                    if (temp0_968 != 0)
                        int128_t var_3e0
                        int64_t rax_187
                        
                        if ((temp0_968 & 1) != 0)
                            arg7[0].o = var_3e0
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg8[0].q, 0)
                            
                            if ((temp0_968 & 2) != 0)
                                rax_187 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_187, 1)
                        else
                            arg7[0].o = var_3e0
                            
                            if ((temp0_968 & 2) != 0)
                                rax_187 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_187, 1)
                        
                        if ((temp0_968 & 4) == 0)
                            if ((temp0_968 & 8) != 0)
                                goto label_140181aac
                            
                            goto label_14018197a
                        
                        arg6[0].o = arg7[0].o
                        arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                        arg7[0].o = arg6[0].o
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg7[0].q, 2)
                        
                        if ((temp0_968 & 8) != 0)
                        label_140181aac:
                            arg6[0].o = arg7[0].o
                            arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                            uint16_t* rax_191 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            arg7[0].o = arg6[0].o
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_191, 3)
                            zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            
                            if ((temp0_968 & 0x10) == 0)
                                goto label_140181989
                            
                            goto label_140181ad9
                        
                    label_14018197a:
                        zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                        
                        if ((temp0_968 & 0x10) == 0)
                        label_140181989:
                            zmm0 = _mm256_slli_epi32(zmm0, 0x1f)
                            
                            if ((temp0_968 & 0x20) != 0)
                                goto label_140181aed
                            
                            goto label_140181998
                        
                    label_140181ad9:
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg15[0].q, 4)
                        zmm0 = _mm256_slli_epi32(zmm0, 0x1f)
                        
                        if ((temp0_968 & 0x20) == 0)
                        label_140181998:
                            arg17 = __vpbroadcastq_ymmqq_memq(2)
                            arg9 = _mm256_srai_epi32(zmm0, 0x1f)
                            
                            if ((temp0_968 & 0x40) != 0)
                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0].q, 6)
                        else
                        label_140181aed:
                            int64_t rax_193 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_193, 5)
                            arg17 = __vpbroadcastq_ymmqq_memq(2)
                            arg9 = _mm256_srai_epi32(zmm0, 0x1f)
                            
                            if ((temp0_968 & 0x40) != 0)
                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0].q, 6)
                        
                        zmm0 = _mm256_add_epi64(arg15, arg17)
                        arg17 = _mm256_add_epi64(arg8, arg17)
                        arg14 = _mm256_permutevar8x32_epi32(data_143442920, arg9)
                        arg6 = data_143442940
                        arg9 = _mm256_permutevar8x32_epi32(arg6, arg9)
                        
                        if (temp0_968 s< 0)
                            arg6[0].o = arg7[0].o
                            arg7[0].o = _mm256_extracti128_si256(arg15, 1)
                            int64_t rax_189 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            arg7[0].o = arg6[0].o
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_189, 7)
                        
                        arg8 = _mm256_blendv_ps(arg8, arg17, arg14)
                        arg15 = _mm256_blendv_ps(arg15, zmm0, arg9)
                        var_3e0 = arg7[0].o
                        arg17 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(arg7[0].o))
                    
                    arg10 = _mm256_blendv_ps(zmm2, arg10, zmm1)
                    zmm0 = var_8e0_1
                    zmm1 = zmm0 & var_980
                    zmm0 = _mm256_cmpeq_epi32(zmm1, zmm0)
                    arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
                    zmm0[0].o &= arg5[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_994 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_994 == 0)
                        arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                    else
                        int128_t var_3f0
                        int64_t rax_195
                        
                        if ((temp0_994 & 1) != 0)
                            zmm2[0].o = var_3f0
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg8[0].q, 0)
                            
                            if ((temp0_994 & 2) != 0)
                                rax_195 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_195, 1)
                        else
                            zmm2[0].o = var_3f0
                            
                            if ((temp0_994 & 2) != 0)
                                rax_195 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_195, 1)
                        
                        if ((temp0_994 & 4) == 0)
                            if ((temp0_994 & 8) != 0)
                                goto label_14017ee07
                            
                            goto label_140181b4d
                        
                        zmm0[0].o = _mm256_extracti128_si256(arg8, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                        
                        if ((temp0_994 & 8) != 0)
                        label_14017ee07:
                            zmm0[0].o = _mm256_extracti128_si256(arg8, 1)
                            int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_2, 3)
                            
                            if ((temp0_994 & 0x10) == 0)
                                goto label_140181b57
                            
                            goto label_14017ee27
                        
                    label_140181b4d:
                        
                        if ((temp0_994 & 0x10) == 0)
                        label_140181b57:
                            
                            if ((temp0_994 & 0x20) != 0)
                                goto label_14017ee36
                            
                            goto label_140181b61
                        
                    label_14017ee27:
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg15[0].q, 4)
                        
                        if ((temp0_994 & 0x20) != 0)
                        label_14017ee36:
                            int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_4, 5)
                            
                            if ((temp0_994 & 0x40) == 0)
                                goto label_140181b6b
                            
                            goto label_14017ee4b
                        
                    label_140181b61:
                        
                        if ((temp0_994 & 0x40) != 0)
                        label_14017ee4b:
                            zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                            
                            if (temp0_994 s< 0)
                            label_14017ee63:
                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                int64_t rax_6 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_6, 7)
                        else
                        label_140181b6b:
                            
                            if (temp0_994 s< 0)
                                goto label_14017ee63
                        
                        arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                        var_3f0 = zmm2[0].o
                        zmm0 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(zmm2[0].o))
                    
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    zmm1 = _mm256_cmpeq_epi32(zmm1, zmm2)
                    arg5 = _mm256_cmpeq_epi32(arg12, zmm2)
                    arg7 = _mm256_broadcast_ss(-32767f)
                    arg8 = _mm256_add_ps(arg10, arg7)
                    arg9 = _mm256_broadcast_ss(3.05185094e-05f)
                    arg8 = _mm256_mul_ps(arg8, arg9)
                    arg5 &= not.32(_mm256_mul_ps(_mm256_add_ps(arg17, arg7), arg9))
                    zmm0 = zmm1 & not.32(_mm256_mul_ps(_mm256_add_ps(zmm0, arg7), arg9))
                    zmm1 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg8, arg8), 
                            arg5, arg5), 
                        zmm0, zmm0)
                    arg7 = _mm256_cmp_ps(zmm2, zmm1, 2)
                    zmm1 = _mm256_and_ps(arg7, _mm256_sqrt_ps(zmm1))
                    var_380 = _mm256_maskstore_ps(arg11, arg8)
                    var_360 = _mm256_maskstore_ps(arg11, arg5)
                    var_340 = _mm256_maskstore_ps(arg11, zmm0)
                    var_320 = _mm256_maskstore_ps(arg11, zmm1)
                
                arg8 = var_9a0_1
                zmm1 = var_6a0_1
                arg12 = var_a40_2
                arg17 = var_920_2
                zmm0[0].o = arg16[0].o & var_840
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    arg15 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm1, var_940)
                    arg14[0].o = _mm256_extracti128_si256(arg15, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg15[0].o, arg14[0].o)
                    zmm0[0].o &= arg16[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm0 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(arg12, var_a20_1)
                        arg7 = __vpaddq_ymmqq_ymmqq_memqq(arg17, var_9e0)
                        arg9 = __vpbroadcastq_ymmqq_memq(4)
                        arg7 = __vpaddq_ymmqq_ymmqq_memqq(arg7, var_8c0.32)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_9c0_4)
                        arg10 = _mm256_add_epi64(zmm1, arg9)
                        arg9 = _mm256_add_epi64(arg7, arg9)
                        zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        arg6[0].o = zmm0[0].o
                        float temp0_1056[0x4]
                        int32_t temp1_31
                        temp0_1056, temp1_31 =
                            _mm256_i64gather_ps(arg11[0].o, *(arg4 + arg9[0].q), arg6[0].o)
                        arg11[0].o = temp0_1056
                        arg6[0].o = temp1_31
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        arg9[0].o = zmm2[0].o
                        float temp0_1058[0x4]
                        int32_t temp1_32
                        temp0_1058, temp1_32 =
                            _mm256_i64gather_ps(arg6[0].o, *(arg4 + arg10[0].q), arg9[0].o)
                        arg6[0].o = temp0_1058
                        arg9[0].o = temp1_32
                        arg9 = __vpbroadcastq_ymmqq_memq(8)
                        arg10 = _mm256_add_epi64(zmm1, arg9)
                        arg9 = _mm256_add_epi64(arg7, arg9)
                        arg12[0].o = zx.o(0)
                        arg8[0].o = zmm0[0].o
                        float temp0_1062[0x4]
                        int32_t temp1_33
                        temp0_1062, temp1_33 =
                            _mm256_i64gather_ps(zx.o(0), *(arg4 + arg9[0].q), arg8[0].o)
                        arg12[0].o = temp0_1062
                        arg8[0].o = temp1_33
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        arg9[0].o = zmm2[0].o
                        float temp0_1064[0x4]
                        int32_t temp1_34
                        temp0_1064, temp1_34 =
                            _mm256_i64gather_ps(arg8[0].o, *(arg4 + arg10[0].q), arg9[0].o)
                        arg8[0].o = temp0_1064
                        arg9[0].o = temp1_34
                        arg9 = __vpbroadcastq_ymmqq_memq(0xc)
                        arg7 = _mm256_add_epi64(arg7, arg9)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        arg5[0].o = zmm0[0].o
                        float temp0_1068[0x4]
                        int32_t temp1_35
                        temp0_1068, temp1_35 =
                            _mm256_i64gather_ps(arg10[0].o, *(arg4 + arg7[0].q), arg5[0].o)
                        arg10[0].o = temp0_1068
                        arg5[0].o = temp1_35
                        zmm1 = _mm256_add_epi64(zmm1, arg9)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_1071[0x4]
                        int32_t temp1_36
                        temp0_1071, temp1_36 =
                            _mm256_i64gather_ps(arg5[0].o, *(arg4 + zmm1[0].q), zmm2[0].o)
                        arg5[0].o = temp0_1071
                        zmm2[0].o = temp1_36
                        zmm1 = _mm256_insertf128_ps(arg11, arg6[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg12, arg8[0].o, 1)
                        arg12 = var_a40_2
                        arg8 = var_9a0_1
                        arg5 = _mm256_insertf128_ps(arg10, arg5[0].o, 1)
                        arg6 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm1, zmm1), 
                                zmm2, zmm2), 
                            arg5, arg5)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg7 = _mm256_cmp_ps(arg7, arg6, 1)
                        arg6 = _mm256_and_ps(arg7, _mm256_sqrt_ps(arg6))
                        var_380 = _mm256_maskstore_ps(zmm0, zmm1)
                        var_360 = _mm256_maskstore_ps(zmm0, zmm2)
                        var_340 = _mm256_maskstore_ps(zmm0, arg5)
                        var_320 = _mm256_maskstore_ps(zmm0, arg6)
                    
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg15[0].o, arg14[0].o)
                    arg14[0].o = zmm0[0].o ^ var_840
                    zmm1[0].o = arg16[0].o & arg14[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    bool cond:23_1 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0
                    arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                    
                    if (not(cond:23_1))
                        zmm2[0].o = _mm256_extracti128_si256(arg8, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                        arg5[0].o = arg16[0].o & zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        arg9 = var_960_1
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            arg15 = _mm256_cvtepu16_epi32(arg5[0].o)
                            zmm0[0].o = zx.o(0)
                            float var_640_2[0x8] = zmm0
                            float var_660_2[0x8] = zmm0
                            float var_680_2[0x8] = zmm0
                            float var_6c0_2[0x8] = zmm0
                            float var_6e0_2[0x8] = zmm0
                            float var_700_2[0x8] = zmm0
                            arg10 = arg8 & _mm256_srai_epi32(_mm256_slli_epi32(var_980, 0x1f), 0x1f)
                            arg11 = arg10 & var_a00_3
                            bool cond:25_1 = _mm256_movemask_ps(arg11) == 0
                            var_840 = zmm2[0].o
                            
                            if (not(cond:25_1))
                                zmm1 = __vpbroadcastq_ymmqq_memq(4)
                                zmm2 = _mm256_add_epi64(arg9, zmm1)
                                arg8 = var_780_1
                                arg6 = _mm256_add_epi64(arg8, zmm1)
                                zmm0 = data_143442920
                                arg7 = _mm256_permutevar8x32_ps(zmm0, arg11)
                                arg6 = _mm256_blendv_ps(arg8, arg6, arg7)
                                arg5[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                                arg12 = arg9
                                arg9[0].o = zx.o(0)
                                zmm0[0].o = arg11[0].o
                                float temp0_1109[0x4]
                                int32_t temp1_37
                                temp0_1109, temp1_37 =
                                    _mm256_i64gather_ps(zx.o(0), *arg8[0].q, zmm0[0].o)
                                arg9[0].o = temp0_1109
                                zmm0[0].o = temp1_37
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                arg8[0].o = arg5[0].o
                                float temp0_1111[0x4]
                                int32_t temp1_38
                                temp0_1111, temp1_38 =
                                    _mm256_i64gather_ps(zmm0[0].o, *arg12[0].q, arg8[0].o)
                                zmm0[0].o = temp0_1111
                                arg8[0].o = temp1_38
                                arg8 = _mm256_permutevar8x32_ps(data_143442940, arg11)
                                zmm2 = _mm256_blendv_ps(arg12, zmm2, arg8)
                                var_680_2 = _mm256_maskstore_ps(arg10, 
                                    _mm256_insertf128_ps(arg9, zmm0[0].o, 1))
                                zmm0 = _mm256_blendv_ps(arg6, _mm256_add_epi64(arg6, zmm1), arg7)
                                var_780_1 = zmm0
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                float temp0_1119[0x4]
                                int32_t temp1_39
                                temp0_1119, temp1_39 =
                                    _mm256_i64gather_ps(zmm0[0].o, *arg6[0].q, arg11[0].o)
                                zmm0[0].o = temp0_1119
                                arg11[0].o = temp1_39
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                float temp0_1121[0x4]
                                int32_t temp1_40
                                temp0_1121, temp1_40 =
                                    _mm256_i64gather_ps(arg6[0].o, *zmm2[0].q, arg5[0].o)
                                arg6[0].o = temp0_1121
                                arg5[0].o = temp1_40
                                var_960_1 =
                                    _mm256_blendv_ps(zmm2, _mm256_add_epi64(zmm2, zmm1), arg8)
                                var_700_2 = _mm256_maskstore_ps(arg10, 
                                    _mm256_insertf128_ps(zmm0, arg6[0].o, 1))
                            
                            arg11 = _mm256_slli_epi32(arg15, 0x1f)
                            zmm1 = _mm256_cmpeq_epi32(var_900_2 & var_980, var_900_2)
                            arg9 = zmm1 & var_9a0_1
                            zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
                            arg8[0].o = arg16[0].o & zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg8[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_900_2[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm0 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg8[0].o), 0x1f), 0x1f)
                                zmm1 = __vpbroadcastq_ymmqq_memq(4)
                                arg12 = var_960_1
                                arg15 = _mm256_add_epi64(arg12, zmm1)
                                arg8 = var_780_1
                                arg6 = _mm256_add_epi64(arg8, zmm1)
                                zmm2 = data_143442920
                                arg7 = _mm256_permutevar8x32_epi32(zmm2, zmm0)
                                arg6 = _mm256_blendv_ps(arg8, arg6, arg7)
                                zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                                arg5[0].o = zmm0[0].o
                                float temp0_1144[0x4]
                                int32_t temp1_41
                                temp0_1144, temp1_41 =
                                    _mm256_i64gather_ps(arg10[0].o, *arg8[0].q, arg5[0].o)
                                arg10[0].o = temp0_1144
                                arg5[0].o = temp1_41
                                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                arg8[0].o = zmm2[0].o
                                float temp0_1146[0x4]
                                int32_t temp1_42
                                temp0_1146, temp1_42 =
                                    _mm256_i64gather_ps(arg5[0].o, *arg12[0].q, arg8[0].o)
                                arg5[0].o = temp0_1146
                                arg8[0].o = temp1_42
                                arg8 = _mm256_permutevar8x32_epi32(data_143442940, zmm0)
                                arg15 = _mm256_blendv_ps(arg12, arg15, arg8)
                                var_660_2 = _mm256_maskstore_ps(arg9, 
                                    _mm256_insertf128_ps(arg10, arg5[0].o, 1))
                                arg5 = _mm256_blendv_ps(arg6, _mm256_add_epi64(arg6, zmm1), arg7)
                                var_780_1 = arg5
                                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                                float temp0_1154[0x4]
                                int32_t temp1_43
                                temp0_1154, temp1_43 =
                                    _mm256_i64gather_ps(arg5[0].o, *arg6[0].q, zmm0[0].o)
                                arg5[0].o = temp0_1154
                                zmm0[0].o = temp1_43
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                float temp0_1156[0x4]
                                int32_t temp1_44
                                temp0_1156, temp1_44 =
                                    _mm256_i64gather_ps(zmm0[0].o, *arg15[0].q, zmm2[0].o)
                                zmm0[0].o = temp0_1156
                                zmm2[0].o = temp1_44
                                var_960_1 =
                                    _mm256_blendv_ps(arg15, _mm256_add_epi64(arg15, zmm1), arg8)
                                var_6e0_2 = _mm256_maskstore_ps(arg9, 
                                    _mm256_insertf128_ps(arg5, zmm0[0].o, 1))
                            
                            arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                            arg12 = var_a40_2
                            arg5 = _mm256_srai_epi32(arg11, 0x1f)
                            zmm0 = _mm256_cmpeq_epi32(var_8e0_1 & var_980, var_8e0_1)
                            arg9 = zmm0 & var_9a0_1
                            zmm0[0].o = _mm256_extracti128_si256(arg9, 1)
                            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                            arg8[0].o = arg16[0].o & zmm0[0].o
                            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg8[0].o, 0xf)
                            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                                zmm0 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg8[0].o), 0x1f), 0x1f)
                                zmm1 = __vpbroadcastq_ymmqq_memq(4)
                                arg12 = var_960_1
                                zmm2 = _mm256_add_epi64(arg12, zmm1)
                                arg11 = var_780_1
                                zmm1 = _mm256_add_epi64(arg11, zmm1)
                                arg6 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                                arg10 = _mm256_blendv_ps(arg11, zmm1, arg6)
                                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                arg8[0].o = zmm0[0].o
                                float temp0_1180[0x4]
                                int32_t temp1_45
                                temp0_1180, temp1_45 =
                                    _mm256_i64gather_ps(arg7[0].o, *arg11[0].q, arg8[0].o)
                                arg7[0].o = temp0_1180
                                arg8[0].o = temp1_45
                                arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                                arg6[0].o = zmm1[0].o
                                float temp0_1182[0x4]
                                int32_t temp1_46
                                temp0_1182, temp1_46 =
                                    _mm256_i64gather_ps(arg8[0].o, *arg12[0].q, arg6[0].o)
                                arg8[0].o = temp0_1182
                                arg6[0].o = temp1_46
                                zmm2 = _mm256_blendv_ps(arg12, zmm2, 
                                    _mm256_permutevar8x32_epi32(data_143442940, zmm0))
                                arg12 = var_a40_2
                                arg6 = _mm256_insertf128_ps(arg7, arg8[0].o, 1)
                                var_640_2 = _mm256_maskstore_ps(arg9, arg6)
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                float temp0_1188[0x4]
                                int32_t temp1_47
                                temp0_1188, temp1_47 =
                                    _mm256_i64gather_ps(arg6[0].o, *arg10[0].q, zmm0[0].o)
                                arg6[0].o = temp0_1188
                                zmm0[0].o = temp1_47
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                float temp0_1190[0x4]
                                int32_t temp1_48
                                temp0_1190, temp1_48 =
                                    _mm256_i64gather_ps(zmm0[0].o, *zmm2[0].q, zmm1[0].o)
                                zmm0[0].o = temp0_1190
                                zmm1[0].o = temp1_48
                                var_6c0_2 = _mm256_maskstore_ps(arg9, 
                                    _mm256_insertf128_ps(arg6, zmm0[0].o, 1))
                            
                            zmm0 = __vpaddq_ymmqq_ymmqq_memqq(arg12, var_a20_1)
                            zmm1 = __vpaddq_ymmqq_ymmqq_memqq(arg17, var_9e0)
                            zmm2 = __vpbroadcastq_ymmqq_memq(4)
                            zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_8c0.32)
                            zmm0 =
                                _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(zmm0, var_9c0_4), zmm2)
                            zmm1 = _mm256_add_epi64(zmm1, zmm2)
                            zmm2[0].o = zx.o(0)
                            arg6[0].o = arg5[0].o
                            uint32_t temp0_1200[0x4]
                            int32_t temp1_49
                            temp0_1200, temp1_49 =
                                _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm1[0].q), arg6[0].o)
                            zmm2[0].o = temp0_1200
                            arg6[0].o = temp1_49
                            zmm1[0].o = _mm256_extracti128_si256(arg5, 1)
                            arg6[0].o = zx.o(0)
                            uint32_t temp0_1202[0x4]
                            int32_t temp1_50
                            temp0_1202, temp1_50 =
                                _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm0[0].q), zmm1[0].o)
                            arg6[0].o = temp0_1202
                            zmm1[0].o = temp1_50
                            zmm0 = _mm256_inserti128_si256(zmm2, arg6[0].o, 1)
                            zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                            zmm2 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                            arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg6))
                            arg7 = _mm256_broadcast_ss(1023f)
                            zmm1 = _mm256_div_ps(zmm1, arg7)
                            arg8 = __vpbroadcastd_ymmqq_memd(0x3ff)
                            zmm2 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg6)), 
                                arg7)
                            arg9 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_700_2, zmm1, var_680_2)
                            zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, var_6e0_2, var_660_2)
                            zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(
                                _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0 & arg8, 
                                        __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                    _mm256_broadcast_ss(511f)), 
                                var_6c0_2, var_640_2)
                            zmm1 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg9, arg9), zmm2, 
                                    zmm2), 
                                zmm0, zmm0)
                            arg6[0].o = zx.o(0)
                            arg6 = _mm256_cmp_ps(arg6, zmm1, 1)
                            zmm1 = _mm256_and_ps(arg6, _mm256_sqrt_ps(zmm1))
                            var_380 = _mm256_maskstore_ps(arg5, arg9)
                            var_360 = _mm256_maskstore_ps(arg5, zmm2)
                            var_340 = _mm256_maskstore_ps(arg5, zmm0)
                            var_320 = _mm256_maskstore_ps(arg5, zmm1)
                            arg8 = var_9a0_1
                            zmm2[0].o = var_840
                        
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                        zmm0[0].o = arg14[0].o ^ zmm1[0].o
                        zmm1[0].o = arg16[0].o & zmm0[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1 = __vpbroadcastd_ymmqq_memd(5)
                            arg5 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm1, var_940)
                            arg8[0].o = _mm256_extracti128_si256(arg5, 1)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
                            arg9[0].o = arg16[0].o & zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg9[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                arg9 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg9[0].o), 0x1f), 0x1f)
                                zmm1 = __vpaddq_ymmqq_ymmqq_memqq(arg12, var_a20_1)
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(arg17, var_9e0)
                                arg6 = __vpbroadcastq_ymmqq_memq(4)
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_8c0.32)
                                zmm1 = _mm256_add_epi64(
                                    __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_9c0_4), arg6)
                                zmm2 = _mm256_add_epi64(zmm2, arg6)
                                arg6[0].o = zx.o(0)
                                arg7[0].o = arg9[0].o
                                uint32_t temp0_1258[0x4]
                                int32_t temp1_51
                                temp0_1258, temp1_51 =
                                    _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm2[0].q), arg7[0].o)
                                arg6[0].o = temp0_1258
                                arg7[0].o = temp1_51
                                zmm2[0].o = _mm256_extracti128_si256(arg9, 1)
                                arg7[0].o = zx.o(0)
                                uint32_t temp0_1260[0x4]
                                int32_t temp1_52
                                temp0_1260, temp1_52 =
                                    _mm256_i64gather_epi32(zx.o(0), *(arg4 + zmm1[0].q), zmm2[0].o)
                                arg7[0].o = temp0_1260
                                zmm2[0].o = temp1_52
                                zmm1 = _mm256_inserti128_si256(arg6, arg7[0].o, 1)
                                zmm2 = _mm256_srli_epi32(zmm1, 0x15)
                                arg6 = _mm256_srli_epi32(zmm1, 0xa)
                                arg7 = _mm256_srli_epi32(zmm1, 5)
                                arg10 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                                arg11 = __vpbroadcastd_ymmqq_memd(0x400)
                                arg12 = __vpbroadcastd_ymmqq_memd(0x380)
                                arg14 = __vpbroadcastd_ymmqq_memd(0x3d80)
                                zmm2 = (arg7 & arg10) | (zmm2 & arg11)
                                    | _mm256_add_epi32(zmm2 & arg12, arg14)
                                arg7 = (_mm256_slli_epi32(zmm1, 6) & arg10) | (arg6 & arg11)
                                arg6 &= arg12
                                arg12 = var_a40_2
                                arg6 = arg7 | _mm256_add_epi32(arg6, arg14)
                                arg7 = zmm1 & __vpbroadcastd_ymmqq_memd(0x1c0)
                                arg10 = _mm256_slli_epi32(zmm1, 0x11)
                                    & __vpbroadcastd_ymmqq_memd(0x7e0000)
                                arg11 = __vpbroadcastd_ymmqq_memd(0x200)
                                zmm1 = arg10 | (zmm1 & arg11)
                                arg10 = __vpbroadcastd_ymmqq_memd(0x1ec0)
                                zmm1 |= _mm256_add_epi32(arg7, arg10)
                                arg7 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm2, zmm2), 
                                        arg6, arg6), 
                                    zmm1, zmm1)
                                arg10[0].o = zx.o(0)
                                arg7 = _mm256_and_ps(_mm256_cmp_ps(arg10, arg7, 1), 
                                    _mm256_sqrt_ps(arg7))
                                var_380 = _mm256_maskstore_ps(arg9, zmm2)
                                var_360 = _mm256_maskstore_ps(arg9, arg6)
                                var_340 = _mm256_maskstore_ps(arg9, zmm1)
                                var_320 = _mm256_maskstore_ps(arg9, arg7)
                            
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
                            zmm0[0].o ^= zmm1[0].o
                            zmm0[0].o &= arg16[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm1 = var_940
                                arg5 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm1, var_8e0_1)
                                zmm1[0].o = _mm256_extracti128_si256(arg5, 1)
                                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                                arg6[0].o = zmm0[0].o & zmm1[0].o
                                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                    arg6 = _mm256_srai_epi32(
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 
                                        0x1f)
                                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(arg12, var_a20_1)
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(arg17, var_9e0)
                                    arg7 = __vpbroadcastq_ymmqq_memq(4)
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_8c0.32)
                                    zmm1 = _mm256_add_epi64(
                                        __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_9c0_4), arg7)
                                    zmm2 = _mm256_add_epi64(zmm2, arg7)
                                    arg7[0].o = zx.o(0)
                                    arg8[0].o = arg6[0].o
                                    uint32_t temp0_1311[0x4]
                                    int32_t temp1_53
                                    temp0_1311, temp1_53 = _mm256_i64gather_epi32(zx.o(0), 
                                        *(arg4 + zmm2[0].q), arg8[0].o)
                                    arg7[0].o = temp0_1311
                                    arg8[0].o = temp1_53
                                    zmm2[0].o = _mm256_extracti128_si256(arg6, 1)
                                    arg8[0].o = zx.o(0)
                                    uint32_t temp0_1313[0x4]
                                    int32_t temp1_54
                                    temp0_1313, temp1_54 = _mm256_i64gather_epi32(zx.o(0), 
                                        *(arg4 + zmm1[0].q), zmm2[0].o)
                                    arg8[0].o = temp0_1313
                                    zmm2[0].o = temp1_54
                                    zmm1 = _mm256_inserti128_si256(arg7, arg8[0].o, 1)
                                    zmm2 = _mm256_srli_epi32(zmm1, 0x15)
                                    arg7 = _mm256_srli_epi32(zmm1, 0xa)
                                        & __vpbroadcastd_ymmqq_memd(0x7ff)
                                    zmm1 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                                    arg8 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                    zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg8))
                                    arg9 = _mm256_broadcast_ss(1023f)
                                    zmm2 = _mm256_div_ps(zmm2, arg9)
                                    arg7 = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, arg8)), arg9)
                                    zmm1 = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, 
                                            __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                        _mm256_broadcast_ss(511f))
                                    arg8 = _mm256_fnmadd_ps(
                                        _mm256_fnmadd_ps(
                                            _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm2, zmm2), 
                                            arg7, arg7), 
                                        zmm1, zmm1)
                                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                                    arg8 = _mm256_and_ps(_mm256_cmp_ps(arg9, arg8, 1), 
                                        _mm256_sqrt_ps(arg8))
                                    var_380 = _mm256_maskstore_ps(arg6, zmm2)
                                    var_360 = _mm256_maskstore_ps(arg6, arg7)
                                    var_340 = _mm256_maskstore_ps(arg6, zmm1)
                                    var_320 = _mm256_maskstore_ps(arg6, arg8)
                                
                                zmm1 = arg5 ^ arg15
                                zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                                arg5[0].o = zmm0[0].o & zmm1[0].o
                                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                    zmm1 = __vpbroadcastd_ymmqq_memd(6)
                                    arg6 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm1, var_940)
                                    zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                                    zmm0[0].o &= zmm1[0].o
                                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                    
                                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                        zmm0 = _mm256_srai_epi32(
                                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                                0x1f), 
                                            0x1f)
                                        zmm1[0].o = zx.o(0)
                                        var_380 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_360 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_340 = _mm256_maskstore_ps(zmm0, zmm1)
                                        zmm1 = _mm256_broadcast_ss(1f)
                                        var_320 = _mm256_maskstore_ps(zmm0, zmm1)
                                    
                                    zmm0 = arg6 ^ arg15
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                                    zmm0[0].o &= arg5[0].o
                                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                                    
                                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                        zmm0 = _mm256_srai_epi32(
                                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                                0x1f), 
                                            0x1f)
                                        zmm1[0].o = zx.o(0)
                                        var_380 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_360 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_340 = _mm256_maskstore_ps(zmm0, zmm1)
                                        var_320 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                
                zmm0 = var_4e0.32
                zmm1 = var_4c0.32
                zmm2 = var_4a0.32
                arg5 = var_480.32
                arg10 = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_fmadd_ps(_mm256_mul_ps(zmm1, var_360), zmm0, var_380), 
                        zmm2, var_340), 
                    arg5, var_320)
                arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                arg10 = _mm256_cmp_ps(arg11, arg10, 2)
                arg11 = _mm256_broadcast_ss(1f)
                arg10 = _mm256_blendv_ps(_mm256_broadcast_ss(-1f), arg11, arg10)
                arg12 = var_720_2
                arg10 = _mm256_mul_ps(_mm256_sub_ps(arg11, arg12), arg10)
                zmm0 = _mm256_mul_ps(arg10, zmm0)
                zmm1 = _mm256_mul_ps(arg10, zmm1)
                zmm2 = _mm256_mul_ps(arg10, zmm2)
                arg5 = _mm256_mul_ps(arg10, arg5)
                zmm0 = _mm256_fmadd_ps(zmm0, arg12, var_380)
                zmm1 = _mm256_fmadd_ps(zmm1, arg12, var_360)
                zmm2 = _mm256_fmadd_ps(zmm2, arg12, var_340)
                arg5 = _mm256_fmadd_ps(arg5, arg12, var_320)
                arg6 = var_a00_3
                var_4e0.32 = _mm256_maskstore_ps(arg6, zmm0)
                var_4c0.32 = _mm256_maskstore_ps(arg6, zmm1)
                var_4a0.32 = _mm256_maskstore_ps(arg6, zmm2)
                var_480.32 = _mm256_maskstore_ps(arg6, arg5)
                arg14 = var_860_1
            
            zmm0 = var_4e0.32
            zmm1 = var_4c0.32
            zmm2 = var_4a0.32
            arg5 = var_480.32
            arg6 = _mm256_mul_ps(zmm2, zmm2)
            arg7 = _mm256_mul_ps(arg5, arg5)
            arg6 =
                _mm256_add_ps(_mm256_fmadd_ps(arg6, zmm0, zmm0), _mm256_fmadd_ps(arg7, zmm1, zmm1))
            arg7 = _mm256_broadcast_ss(9.99999994e-09f)
            arg8 = _mm256_cmp_ps(arg7, arg6, 6)
            arg7 = _mm256_cmp_ps(arg7, arg6, 2)
            arg9 = _mm256_broadcast_ss(0.5f)
            arg10 = _mm256_mul_ps(arg6, arg9)
            arg6 = _mm256_rsqrt_ps(arg6)
            arg11 = _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(arg6, arg6), arg10, arg9), arg6, 
                arg6)
            arg6 = _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(arg11, arg11), arg10, arg9), 
                arg11, arg11)
            zmm0 = _mm256_mul_ps(arg6, zmm0)
            zmm1 = _mm256_mul_ps(arg6, zmm1)
            zmm2 = _mm256_mul_ps(arg6, zmm2)
            arg5 = _mm256_mul_ps(arg6, arg5)
            zmm0 = _mm256_and_ps(zmm0, arg7)
            zmm1 = _mm256_and_ps(zmm1, arg7)
            zmm2 = _mm256_and_ps(zmm2, arg7)
            arg6 = _mm256_and_ps(arg8, _mm256_broadcast_ss(1f))
            arg5 = _mm256_or_ps(_mm256_and_ps(arg5, arg7), arg6)
            var_4e0.32 = _mm256_maskstore_ps(arg14, zmm0)
            var_4c0.32 = _mm256_maskstore_ps(arg14, zmm1)
            var_4a0.32 = _mm256_maskstore_ps(arg14, zmm2)
            var_480.32 = _mm256_maskstore_ps(arg14, arg5)
            arg11 = var_8a0_1
        
        zmm0 = _mm256_xor_ps(arg14, arg15)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            var_4e0.32 = _mm256_maskstore_ps(zmm0, zmm1)
            var_4c0.32 = _mm256_maskstore_ps(zmm0, zmm1)
            var_4a0.32 = _mm256_maskstore_ps(zmm0, zmm1)
            zmm1 = _mm256_broadcast_ss(1f)
            var_480.32 = _mm256_maskstore_ps(zmm0, zmm1)
        
        zmm0[0].o = var_4e0
        int128_t var_4d0
        arg10[0].o = var_4d0
        arg5[0].o = var_4c0
        int128_t var_4b0
        arg6[0].o = var_4b0
        arg7[0].o = var_4a0
        int128_t var_490
        arg8[0].o = var_490
        arg9[0].o = var_480
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        arg7[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        arg9[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        zmm2[0].o = arg9[0].q | zmm1[0].q << 0x40
        int128_t var_280 = zmm2[0].o
        int128_t var_470
        zmm2[0].o = var_470
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm1[0].o)
        int128_t var_270_1 = zmm1[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        zmm1[0].o = zmm0[0].q | arg7[0].q << 0x40
        int128_t var_260_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
        int128_t var_250_1 = zmm0[0].o
        zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
        arg5[0].o = zmm1[0].q | zmm0[0].q << 0x40
        int128_t var_240_1 = arg5[0].o
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_230_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
        zmm1[0].o = zmm0[0].q | zmm2[0].q << 0x40
        int128_t var_220_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        int128_t var_210_1 = zmm0[0].o
        uint64_t rcx_22
        int64_t rsi_11
        
        for (uint64_t i_9 = 0xff; i_9 != 0; i_9 = rsi_11 & rol.q(-2, rcx_22.b))
            uint64_t rax_211 = _tzcnt_u64(i_9)
            rsi_11 = i_9 & not.q(1 << (rax_211 u% 0x40))
            uint32_t var_2a0[0x8] = arg13
            zmm0[0].o = (&var_280)[rax_211]
            arg1[sx.q(var_2a0[zx.q(rax_211.d) & 7]) * 3] = zmm0[0].o
            rcx_22 = _tzcnt_u64(rsi_11)
            zmm0[0].o = (&var_280)[rcx_22]
            arg1[sx.q(var_2a0[zx.q(rcx_22.d) & 7]) * 3] = zmm0[0].o
        
        r10 += 8
    while (r10 s< rdx_4)
    
    result = zx.q(arg21)
    
    if (r10 s< result.d)
        goto label_140182aae
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
