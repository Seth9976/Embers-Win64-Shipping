// 函数: sub_1401952b0
// 地址: 0x1401952b0
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
    label_1401990de:
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
                                        goto label_14019cbcb
                                    
                                    goto label_140199d20
                                
                                arg5[0].o = __vpbroadcastb_xmmdq_memb(*zmm1[0].q)
                                
                                if ((rdx_12 & 2) != 0)
                                label_14019cbcb:
                                    uint32_t rax_388 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_388, 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg14, 1)
                                    
                                    if ((rdx_12 & 4) == 0)
                                        goto label_140199d2f
                                    
                                    goto label_14019cbe2
                                
                            label_140199d20:
                                arg6[0].o = _mm256_extracti128_si256(arg14, 1)
                                
                                if ((rdx_12 & 4) == 0)
                                label_140199d2f:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rdx_12 & 8) != 0)
                                        goto label_14019cc03
                                    
                                    goto label_140199d3d
                                
                            label_14019cbe2:
                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rdx_12 & 8) != 0)
                                label_14019cc03:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    uint32_t rax_392 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_392, 3)
                                    zmm1 = _mm256_add_epi64(arg12, arg6)
                                    
                                    if ((rdx_12 & 0x10) == 0)
                                        goto label_140199d4a
                                    
                                    goto label_14019cc2c
                                
                            label_140199d3d:
                                zmm1 = _mm256_add_epi64(arg12, arg6)
                                
                                if ((rdx_12 & 0x10) == 0)
                                label_140199d4a:
                                    
                                    if ((rdx_12 & 0x20) != 0)
                                        goto label_14019cc40
                                    
                                    goto label_140199d53
                                
                            label_14019cc2c:
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm1[0].q), 4)
                                
                                if ((rdx_12 & 0x20) != 0)
                                label_14019cc40:
                                    uint32_t rax_396 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_396, 5)
                                    
                                    if ((rdx_12 & 0x40) == 0)
                                        goto label_140199d5c
                                    
                                    goto label_14019cc51
                                
                            label_140199d53:
                                
                                if ((rdx_12 & 0x40) != 0)
                                label_14019cc51:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1589.b s< 0)
                                    label_14019cc6c:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        uint32_t rax_400 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rax_400, 7)
                                else
                                label_140199d5c:
                                    
                                    if (temp0_1589.b s< 0)
                                        goto label_14019cc6c
                                
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
                                                goto label_140199dfd
                                            
                                            goto label_140199ee5
                                        
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            zx.d(*zmm1[0].q), 0)
                                        
                                        if ((temp0_1751 & 2) != 0)
                                        label_140199dfd:
                                            uint16_t rax_261[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_261, 1)
                                            arg5[0].o = _mm256_extracti128_si256(arg11, 1)
                                            
                                            if ((temp0_1751 & 4) == 0)
                                                goto label_140199ef5
                                            
                                            goto label_140199e15
                                        
                                    label_140199ee5:
                                        arg5[0].o = _mm256_extracti128_si256(arg11, 1)
                                        
                                        if ((temp0_1751 & 4) == 0)
                                        label_140199ef5:
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_1751 & 8) != 0)
                                                goto label_140199e37
                                            
                                            goto label_140199f04
                                        
                                    label_140199e15:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            zx.d(*zmm0[0].q), 2)
                                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                        
                                        if ((temp0_1751 & 8) != 0)
                                        label_140199e37:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            uint16_t rax_265[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_265, 3)
                                            zmm1 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_1751 & 0x10) == 0)
                                                goto label_140199f12
                                            
                                            goto label_140199e61
                                        
                                    label_140199f04:
                                        zmm1 = _mm256_add_epi64(arg12, arg5)
                                        
                                        if ((temp0_1751 & 0x10) == 0)
                                        label_140199f12:
                                            
                                            if ((temp0_1751 & 0x20) != 0)
                                                goto label_140199e76
                                            
                                            goto label_140199f1c
                                        
                                    label_140199e61:
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            zx.d(*zmm1[0].q), 4)
                                        
                                        if ((temp0_1751 & 0x20) != 0)
                                        label_140199e76:
                                            uint16_t rax_269[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_269, 5)
                                            
                                            if ((temp0_1751 & 0x40) == 0)
                                                goto label_140199f26
                                            
                                            goto label_140199e88
                                        
                                    label_140199f1c:
                                        
                                        if ((temp0_1751 & 0x40) != 0)
                                        label_140199e88:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, zx.d(*zmm0[0].q), 6)
                                            
                                            if (temp0_1751 s< 0)
                                            label_140199ea4:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                uint16_t rax_273[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, rax_273, 7)
                                        else
                                        label_140199f26:
                                            
                                            if (temp0_1751 s< 0)
                                                goto label_140199ea4
                                        
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
                                                goto label_140199ff7
                                            
                                            goto label_14019a0e1
                                        
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            zx.d(*zmm1[0].q), 0)
                                        
                                        if ((temp0_1788 & 2) != 0)
                                        label_140199ff7:
                                            uint16_t rax_279[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_279, 1)
                                            arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                            
                                            if ((temp0_1788 & 4) == 0)
                                                goto label_14019a0f1
                                            
                                            goto label_14019a00f
                                        
                                    label_14019a0e1:
                                        arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_1788 & 4) == 0)
                                        label_14019a0f1:
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_1788 & 8) != 0)
                                                goto label_14019a031
                                            
                                            goto label_14019a100
                                        
                                    label_14019a00f:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            zx.d(*zmm0[0].q), 2)
                                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                        
                                        if ((temp0_1788 & 8) != 0)
                                        label_14019a031:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            uint16_t rax_283[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_283, 3)
                                            zmm1 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_1788 & 0x10) == 0)
                                                goto label_14019a10e
                                            
                                            goto label_14019a05b
                                        
                                    label_14019a100:
                                        zmm1 = _mm256_add_epi64(arg12, arg5)
                                        
                                        if ((temp0_1788 & 0x10) == 0)
                                        label_14019a10e:
                                            
                                            if ((temp0_1788 & 0x20) != 0)
                                                goto label_14019a070
                                            
                                            goto label_14019a118
                                        
                                    label_14019a05b:
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            zx.d(*zmm1[0].q), 4)
                                        
                                        if ((temp0_1788 & 0x20) != 0)
                                        label_14019a070:
                                            uint16_t rax_287[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_287, 5)
                                            
                                            if ((temp0_1788 & 0x40) == 0)
                                                goto label_14019a122
                                            
                                            goto label_14019a082
                                        
                                    label_14019a118:
                                        
                                        if ((temp0_1788 & 0x40) != 0)
                                        label_14019a082:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, zx.d(*zmm0[0].q), 6)
                                            
                                            if (temp0_1788 s< 0)
                                            label_14019a09e:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                uint16_t rax_291[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, rax_291, 7)
                                        else
                                        label_14019a122:
                                            
                                            if (temp0_1788 s< 0)
                                                goto label_14019a09e
                                        
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
                                        goto label_14019cca2
                                    
                                    goto label_14019a1e1
                                
                                uint16_t rax_402[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_402, 1)
                                arg5[0].o = _mm256_extracti128_si256(arg7, 1)
                                
                                if ((rdx_12 & 4) != 0)
                                label_14019cca2:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm0[0].q), 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdx_12 & 8) == 0)
                                        goto label_14019a1ef
                                    
                                    goto label_14019ccc3
                                
                            label_14019a1e1:
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((rdx_12 & 8) == 0)
                                label_14019a1ef:
                                    zmm1 = _mm256_add_epi64(arg12, arg5)
                                    
                                    if ((rdx_12 & 0x10) != 0)
                                        goto label_14019ccec
                                    
                                    goto label_14019a1fc
                                
                            label_14019ccc3:
                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                uint16_t rax_406[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_406, 3)
                                zmm1 = _mm256_add_epi64(arg12, arg5)
                                
                                if ((rdx_12 & 0x10) != 0)
                                label_14019ccec:
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm1[0].q), 4)
                                    
                                    if ((rdx_12 & 0x20) == 0)
                                        goto label_14019a205
                                    
                                    goto label_14019cd00
                                
                            label_14019a1fc:
                                
                                if ((rdx_12 & 0x20) == 0)
                                label_14019a205:
                                    
                                    if ((rdx_12 & 0x40) != 0)
                                        goto label_14019cd11
                                    
                                    goto label_14019a20e
                                
                            label_14019cd00:
                                uint16_t rax_410[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_410, 5)
                                
                                if ((rdx_12 & 0x40) == 0)
                                label_14019a20e:
                                    
                                    if (temp0_1589.b s< 0)
                                    label_14019cd2c:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        uint16_t rax_414[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_414, 7)
                                else
                                label_14019cd11:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1589.b s< 0)
                                        goto label_14019cd2c
                                
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
                                        goto label_14019cd5e
                                    
                                    goto label_14019a26f
                                
                                zmm2[0].o = __vpbroadcastb_xmmdq_memb(*zmm1[0].q)
                                
                                if ((rdx_12 & 2) != 0)
                                label_14019cd5e:
                                    uint32_t rax_417 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_417, 1)
                                    var_a00_4 = arg5
                                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                    
                                    if ((rdx_12 & 4) == 0)
                                        goto label_14019a284
                                    
                                    goto label_14019cd7b
                                
                            label_14019a26f:
                                var_a00_4 = arg5
                                arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                
                                if ((rdx_12 & 4) == 0)
                                label_14019a284:
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdx_12 & 8) != 0)
                                        goto label_14019cd9c
                                    
                                    goto label_14019a292
                                
                            label_14019cd7b:
                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((rdx_12 & 8) != 0)
                                label_14019cd9c:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    uint32_t rax_421 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_421, 3)
                                    zmm1 = _mm256_add_epi64(arg12, arg5)
                                    
                                    if ((rdx_12 & 0x10) == 0)
                                        goto label_14019a29f
                                    
                                    goto label_14019cdc5
                                
                            label_14019a292:
                                zmm1 = _mm256_add_epi64(arg12, arg5)
                                
                                if ((rdx_12 & 0x10) != 0)
                                label_14019cdc5:
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 4)
                                    arg12 = var_740_2
                                    
                                    if ((rdx_12 & 0x20) != 0)
                                    label_14019cde2:
                                        uint32_t rax_425 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_425, 5)
                                        
                                        if ((rdx_12 & 0x40) == 0)
                                            goto label_14019a2ba
                                        
                                        goto label_14019cdf3
                                else
                                label_14019a29f:
                                    arg12 = var_740_2
                                    
                                    if ((rdx_12 & 0x20) != 0)
                                        goto label_14019cde2
                                
                                if ((rdx_12 & 0x40) != 0)
                                label_14019cdf3:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    zmm0[0].o = arg6[0].o & data_142fc92e0
                                    
                                    if (temp0_1589.b s< 0)
                                    label_14019ce16:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        uint32_t rax_429 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_429, 7)
                                else
                                label_14019a2ba:
                                    zmm0[0].o = arg6[0].o & data_142fc92e0
                                    
                                    if (temp0_1589.b s< 0)
                                        goto label_14019ce16
                                
                                zmm1 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                zmm0[0].o = zmm2[0].o & data_142fc92e0
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            else
                                arg6 = _mm256_add_epi32(arg14, arg14)
                                zmm1 = _mm256_add_epi64(zmm2, _mm256_cvtepi32_epi64(arg6[0].o))
                                char rdx_11 = temp0_1589.b
                                
                                if ((rdx_11 & 1) == 0)
                                    if ((rdx_11 & 2) != 0)
                                        goto label_14019c995
                                    
                                    goto label_140199764
                                
                                arg5[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                                
                                if ((rdx_11 & 2) != 0)
                                label_14019c995:
                                    int64_t rax_364 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_364, 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((rdx_11 & 4) == 0)
                                        goto label_140199773
                                    
                                    goto label_14019c9af
                                
                            label_140199764:
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                
                                if ((rdx_11 & 4) == 0)
                                label_140199773:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rdx_11 & 8) != 0)
                                        goto label_14019c9cd
                                    
                                    goto label_140199781
                                
                            label_14019c9af:
                                arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg7[0].q, 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rdx_11 & 8) != 0)
                                label_14019c9cd:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    int64_t rax_366 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_366, 3)
                                    zmm1 = _mm256_add_epi64(arg12, arg6)
                                    
                                    if ((rdx_11 & 0x10) == 0)
                                        goto label_14019978e
                                    
                                    goto label_14019c9f0
                                
                            label_140199781:
                                zmm1 = _mm256_add_epi64(arg12, arg6)
                                
                                if ((rdx_11 & 0x10) == 0)
                                label_14019978e:
                                    
                                    if ((rdx_11 & 0x20) != 0)
                                        goto label_14019c9fe
                                    
                                    goto label_140199797
                                
                            label_14019c9f0:
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm1[0].q, 4)
                                
                                if ((rdx_11 & 0x20) != 0)
                                label_14019c9fe:
                                    int64_t rax_368 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_368, 5)
                                    
                                    if ((rdx_11 & 0x40) == 0)
                                        goto label_1401997a0
                                    
                                    goto label_14019ca12
                                
                            label_140199797:
                                
                                if ((rdx_11 & 0x40) != 0)
                                label_14019ca12:
                                    arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg6[0].q, 6)
                                    
                                    if (temp0_1589.b s< 0)
                                    label_14019ca2a:
                                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        int64_t rax_370 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_370, 7)
                                else
                                label_1401997a0:
                                    
                                    if (temp0_1589.b s< 0)
                                        goto label_14019ca2a
                                
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
                                                goto label_140199824
                                            
                                            goto label_140199909
                                        
                                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, 
                                            *zmm1[0].q, 0)
                                        
                                        if ((temp0_1647 & 2) != 0)
                                        label_140199824:
                                            uint16_t* rax_237 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *rax_237, 1)
                                            arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                            
                                            if ((temp0_1647 & 4) == 0)
                                                goto label_140199919
                                            
                                            goto label_14019983f
                                        
                                    label_140199909:
                                        arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_1647 & 4) == 0)
                                        label_140199919:
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_1647 & 8) != 0)
                                                goto label_14019985e
                                            
                                            goto label_140199928
                                        
                                    label_14019983f:
                                        arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, 
                                            *arg6[0].q, 2)
                                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                        
                                        if ((temp0_1647 & 8) != 0)
                                        label_14019985e:
                                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            uint16_t* rax_239 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *rax_239, 3)
                                            zmm1 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_1647 & 0x10) == 0)
                                                goto label_140199936
                                            
                                            goto label_140199882
                                        
                                    label_140199928:
                                        zmm1 = _mm256_add_epi64(arg12, arg5)
                                        
                                        if ((temp0_1647 & 0x10) == 0)
                                        label_140199936:
                                            
                                            if ((temp0_1647 & 0x20) != 0)
                                                goto label_140199891
                                            
                                            goto label_140199940
                                        
                                    label_140199882:
                                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, 
                                            *zmm1[0].q, 4)
                                        
                                        if ((temp0_1647 & 0x20) != 0)
                                        label_140199891:
                                            uint16_t* rax_241 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *rax_241, 5)
                                            
                                            if ((temp0_1647 & 0x40) == 0)
                                                goto label_14019994a
                                            
                                            goto label_1401998a6
                                        
                                    label_140199940:
                                        
                                        if ((temp0_1647 & 0x40) != 0)
                                        label_1401998a6:
                                            arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                arg11[0].o, *arg5[0].q, 6)
                                            
                                            if (temp0_1647 s< 0)
                                            label_1401998bf:
                                                zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                uint16_t* rax_243 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg11[0].o, *rax_243, 7)
                                        else
                                        label_14019994a:
                                            
                                            if (temp0_1647 s< 0)
                                                goto label_1401998bf
                                        
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
                                                goto label_140199a04
                                            
                                            goto label_140199ae5
                                        
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                            *zmm1[0].q, 0)
                                        
                                        if ((temp0_1684 & 2) != 0)
                                        label_140199a04:
                                            int64_t rax_247 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *rax_247, 1)
                                            arg5[0].o = _mm256_extracti128_si256(arg13, 1)
                                            
                                            if ((temp0_1684 & 4) == 0)
                                                goto label_140199af5
                                            
                                            goto label_140199a1f
                                        
                                    label_140199ae5:
                                        arg5[0].o = _mm256_extracti128_si256(arg13, 1)
                                        
                                        if ((temp0_1684 & 4) == 0)
                                        label_140199af5:
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_1684 & 8) != 0)
                                                goto label_140199a3e
                                            
                                            goto label_140199b04
                                        
                                    label_140199a1f:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                            *zmm0[0].q, 2)
                                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                        
                                        if ((temp0_1684 & 8) != 0)
                                        label_140199a3e:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            int64_t rax_249 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *rax_249, 3)
                                            zmm1 = _mm256_add_epi64(arg12, arg5)
                                            
                                            if ((temp0_1684 & 0x10) == 0)
                                                goto label_140199b12
                                            
                                            goto label_140199a62
                                        
                                    label_140199b04:
                                        zmm1 = _mm256_add_epi64(arg12, arg5)
                                        
                                        if ((temp0_1684 & 0x10) == 0)
                                        label_140199b12:
                                            
                                            if ((temp0_1684 & 0x20) != 0)
                                                goto label_140199a71
                                            
                                            goto label_140199b1c
                                        
                                    label_140199a62:
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                            *zmm1[0].q, 4)
                                        
                                        if ((temp0_1684 & 0x20) != 0)
                                        label_140199a71:
                                            uint16_t* rax_251 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *rax_251, 5)
                                            
                                            if ((temp0_1684 & 0x40) == 0)
                                                goto label_140199b26
                                            
                                            goto label_140199a86
                                        
                                    label_140199b1c:
                                        
                                        if ((temp0_1684 & 0x40) != 0)
                                        label_140199a86:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                                *zmm0[0].q, 6)
                                            
                                            if (temp0_1684 s< 0)
                                            label_140199a9f:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                uint16_t* rax_253 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *rax_253, 7)
                                        else
                                        label_140199b26:
                                            
                                            if (temp0_1684 s< 0)
                                                goto label_140199a9f
                                        
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
                                        goto label_14019ca5a
                                    
                                    goto label_140199be1
                                
                                int64_t rax_371 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_371, 1)
                                arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                
                                if ((rdx_11 & 4) != 0)
                                label_14019ca5a:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdx_11 & 8) == 0)
                                        goto label_140199bef
                                    
                                    goto label_14019ca78
                                
                            label_140199be1:
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((rdx_11 & 8) == 0)
                                label_140199bef:
                                    zmm1 = _mm256_add_epi64(arg12, arg5)
                                    
                                    if ((rdx_11 & 0x10) != 0)
                                        goto label_14019ca9b
                                    
                                    goto label_140199bfc
                                
                            label_14019ca78:
                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                int64_t rax_373 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_373, 3)
                                zmm1 = _mm256_add_epi64(arg12, arg5)
                                
                                if ((rdx_11 & 0x10) != 0)
                                label_14019ca9b:
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 4)
                                    
                                    if ((rdx_11 & 0x20) == 0)
                                        goto label_140199c05
                                    
                                    goto label_14019caa9
                                
                            label_140199bfc:
                                
                                if ((rdx_11 & 0x20) == 0)
                                label_140199c05:
                                    
                                    if ((rdx_11 & 0x40) != 0)
                                        goto label_14019cabd
                                    
                                    goto label_140199c0e
                                
                            label_14019caa9:
                                int64_t rax_375 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_375, 5)
                                
                                if ((rdx_11 & 0x40) == 0)
                                label_140199c0e:
                                    
                                    if (temp0_1589.b s< 0)
                                    label_14019cad5:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        uint16_t* rax_377 =
                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_377, 7)
                                else
                                label_14019cabd:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1589.b s< 0)
                                        goto label_14019cad5
                                
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
                                        goto label_14019cafe
                                    
                                    goto label_140199c79
                                
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                                
                                if ((rdx_11 & 2) != 0)
                                label_14019cafe:
                                    int64_t rax_379 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_379, 1)
                                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                    
                                    if ((rdx_11 & 4) == 0)
                                        goto label_140199c88
                                    
                                    goto label_14019cb18
                                
                            label_140199c79:
                                arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                
                                if ((rdx_11 & 4) == 0)
                                label_140199c88:
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdx_11 & 8) != 0)
                                        goto label_14019cb36
                                    
                                    goto label_140199c96
                                
                            label_14019cb18:
                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((rdx_11 & 8) != 0)
                                label_14019cb36:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    int64_t rax_381 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_381, 3)
                                    zmm1 = _mm256_add_epi64(arg12, arg5)
                                    
                                    if ((rdx_11 & 0x10) == 0)
                                        goto label_140199ca3
                                    
                                    goto label_14019cb59
                                
                            label_140199c96:
                                zmm1 = _mm256_add_epi64(arg12, arg5)
                                
                                if ((rdx_11 & 0x10) == 0)
                                label_140199ca3:
                                    arg12 = var_740_2
                                    
                                    if ((rdx_11 & 0x20) != 0)
                                        goto label_14019cb70
                                    
                                    goto label_140199cb5
                                
                            label_14019cb59:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 4)
                                arg12 = var_740_2
                                
                                if ((rdx_11 & 0x20) != 0)
                                label_14019cb70:
                                    int64_t rax_383 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_383, 5)
                                    
                                    if ((rdx_11 & 0x40) == 0)
                                        goto label_140199cbe
                                    
                                    goto label_14019cb84
                                
                            label_140199cb5:
                                
                                if ((rdx_11 & 0x40) != 0)
                                label_14019cb84:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1589.b s< 0)
                                    label_14019cb9c:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        int64_t rax_385 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_385, 7)
                                else
                                label_140199cbe:
                                    
                                    if (temp0_1589.b s< 0)
                                        goto label_14019cb9c
                                
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
                            goto label_14019b4f4
                        
                        goto label_14019a57c
                    
                    arg5[0].o = __vpbroadcastw_xmmdq_memw(*arg16[0].q)
                    
                    if ((temp0_1889 & 2) != 0)
                    label_14019b4f4:
                        int64_t rax_320 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_320, 1)
                        
                        if ((temp0_1889 & 4) == 0)
                            goto label_14019a585
                        
                        goto label_14019b508
                    
                label_14019a57c:
                    
                    if ((temp0_1889 & 4) == 0)
                    label_14019a585:
                        
                        if ((temp0_1889 & 8) != 0)
                            goto label_14019b521
                        
                        goto label_14019a58e
                    
                label_14019b508:
                    zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 2)
                    
                    if ((temp0_1889 & 8) != 0)
                    label_14019b521:
                        zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                        int64_t rax_322 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_322, 3)
                        zmm0 = _mm256_cvtepu16_epi32(zmm1[0].o)
                        
                        if ((temp0_1889 & 0x10) == 0)
                            goto label_14019a59c
                        
                        goto label_14019b545
                    
                label_14019a58e:
                    zmm0 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    int64_t rax_298
                    
                    if ((temp0_1889 & 0x10) != 0)
                    label_14019b545:
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg7[0].q, 4)
                        zmm0 = _mm256_slli_epi32(zmm0, 0x1f)
                        
                        if ((temp0_1889 & 0x20) != 0)
                            rax_298 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_298, 5)
                    else
                    label_14019a59c:
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
                            goto label_14019b570
                        
                        goto label_14019a68b
                    
                    arg5[0].o = __vpbroadcastw_xmmdq_memw(*arg16[0].q)
                    
                    if ((temp0_1915 & 2) != 0)
                    label_14019b570:
                        int64_t rax_325 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_325, 1)
                        
                        if ((temp0_1915 & 4) == 0)
                            goto label_14019a694
                        
                        goto label_14019b584
                    
                label_14019a68b:
                    
                    if ((temp0_1915 & 4) == 0)
                    label_14019a694:
                        
                        if ((temp0_1915 & 8) != 0)
                            goto label_14019b59d
                        
                        goto label_14019a69d
                    
                label_14019b584:
                    zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 2)
                    
                    if ((temp0_1915 & 8) != 0)
                    label_14019b59d:
                        zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                        int64_t rax_327 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_327, 3)
                        
                        if ((temp0_1915 & 0x10) == 0)
                            goto label_14019a6a6
                        
                        goto label_14019b5bc
                    
                label_14019a69d:
                    
                    if ((temp0_1915 & 0x10) == 0)
                    label_14019a6a6:
                        
                        if ((temp0_1915 & 0x20) != 0)
                            goto label_14019b5ca
                        
                        goto label_14019a6af
                    
                label_14019b5bc:
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg7[0].q, 4)
                    
                    if ((temp0_1915 & 0x20) != 0)
                    label_14019b5ca:
                        int64_t rax_329 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_329, 5)
                        
                        if ((temp0_1915 & 0x40) == 0)
                            goto label_14019a6b8
                        
                        goto label_14019b5de
                    
                label_14019a6af:
                    
                    if ((temp0_1915 & 0x40) != 0)
                    label_14019b5de:
                        zmm0[0].o = _mm256_extracti128_si256(arg7, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 6)
                        
                        if (temp0_1915 s< 0)
                        label_14019b5f6:
                            zmm0[0].o = _mm256_extracti128_si256(arg7, 1)
                            int64_t rax_331 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_331, 7)
                    else
                    label_14019a6b8:
                        
                        if (temp0_1915 s< 0)
                            goto label_14019b5f6
                    
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
                                goto label_14019c861
                            
                            goto label_14019b67d
                        
                        arg5[0].o = __vpbroadcastw_xmmdq_memw(*arg17[0])
                        float var_760_2[0x8]
                        
                        if ((temp0_2376 & 2) != 0)
                        label_14019c861:
                            int64_t rax_351 = __vpextrq_gpr64q_xmmdq_immb(arg17[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_351, 1)
                            var_760_2 = zmm2
                            
                            if ((temp0_2376 & 4) == 0)
                                goto label_14019b68c
                            
                            goto label_14019c87e
                        
                    label_14019b67d:
                        var_760_2 = zmm2
                        
                        if ((temp0_2376 & 4) == 0)
                        label_14019b68c:
                            
                            if ((temp0_2376 & 8) != 0)
                                goto label_14019c897
                            
                            goto label_14019b695
                        
                    label_14019c87e:
                        zmm2[0].o = _mm256_extracti128_si256(arg17, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm2[0].q, 2)
                        
                        if ((temp0_2376 & 8) != 0)
                        label_14019c897:
                            zmm2[0].o = _mm256_extracti128_si256(arg17, 1)
                            int64_t rax_353 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_353, 3)
                            zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                            
                            if ((temp0_2376 & 0x10) == 0)
                                goto label_14019b6a3
                            
                            goto label_14019c8bb
                        
                    label_14019b695:
                        zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                        int64_t rax_332
                        
                        if ((temp0_2376 & 0x10) != 0)
                        label_14019c8bb:
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg14[0].q, 4)
                            zmm1 = _mm256_slli_epi32(zmm1, 0x1f)
                            
                            if ((temp0_2376 & 0x20) != 0)
                                rax_332 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_332, 5)
                        else
                        label_14019b6a3:
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
                                goto label_14019c8e6
                            
                            goto label_14019b7c8
                        
                        arg5[0].o = __vpbroadcastw_xmmdq_memw(*arg17[0])
                        
                        if ((temp0_2407 & 2) != 0)
                        label_14019c8e6:
                            int64_t rax_356 = __vpextrq_gpr64q_xmmdq_immb(arg17[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_356, 1)
                            
                            if ((temp0_2407 & 4) == 0)
                                goto label_14019b7d1
                            
                            goto label_14019c8fa
                        
                    label_14019b7c8:
                        
                        if ((temp0_2407 & 4) == 0)
                        label_14019b7d1:
                            
                            if ((temp0_2407 & 8) != 0)
                                goto label_14019c913
                            
                            goto label_14019b7da
                        
                    label_14019c8fa:
                        zmm0[0].o = _mm256_extracti128_si256(arg17, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 2)
                        
                        if ((temp0_2407 & 8) != 0)
                        label_14019c913:
                            zmm0[0].o = _mm256_extracti128_si256(arg17, 1)
                            int64_t rax_358 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_358, 3)
                            
                            if ((temp0_2407 & 0x10) == 0)
                                goto label_14019b7e3
                            
                            goto label_14019c932
                        
                    label_14019b7da:
                        
                        if ((temp0_2407 & 0x10) == 0)
                        label_14019b7e3:
                            
                            if ((temp0_2407 & 0x20) != 0)
                                goto label_14019c940
                            
                            goto label_14019b7ec
                        
                    label_14019c932:
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg14[0].q, 4)
                        
                        if ((temp0_2407 & 0x20) != 0)
                        label_14019c940:
                            int64_t rax_360 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_360, 5)
                            
                            if ((temp0_2407 & 0x40) == 0)
                                goto label_14019b7f5
                            
                            goto label_14019c954
                        
                    label_14019b7ec:
                        
                        if ((temp0_2407 & 0x40) != 0)
                        label_14019c954:
                            zmm0[0].o = _mm256_extracti128_si256(arg14, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 6)
                            
                            if (temp0_2407 s< 0)
                            label_14019c96c:
                                zmm0[0].o = _mm256_extracti128_si256(arg14, 1)
                                int64_t rax_362 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_362, 7)
                        else
                        label_14019b7f5:
                            
                            if (temp0_2407 s< 0)
                                goto label_14019c96c
                        
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
                                        goto label_1401962a1
                                    
                                    goto label_140195f3d
                                
                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                    zx.d(*arg5[0].q), 0)
                                
                                if ((r15_2 & 2) != 0)
                                label_1401962a1:
                                    uint16_t rax_84[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, rax_84, 1)
                                    arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    
                                    if ((r15_2 & 4) == 0)
                                        goto label_140195f4d
                                    
                                    goto label_1401962b9
                                
                            label_140195f3d:
                                arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                
                                if ((r15_2 & 4) == 0)
                                label_140195f4d:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((r15_2 & 8) != 0)
                                        goto label_1401962db
                                    
                                    goto label_140195f5c
                                
                            label_1401962b9:
                                arg7[0].o = _mm256_extracti128_si256(arg5, 1)
                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                    zx.d(*arg7[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((r15_2 & 8) != 0)
                                label_1401962db:
                                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                    uint16_t rax_88[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, rax_88, 3)
                                    arg5 = _mm256_add_epi64(zmm1, arg6)
                                    
                                    if ((r15_2 & 0x10) == 0)
                                        goto label_140195f6a
                                    
                                    goto label_140196305
                                
                            label_140195f5c:
                                arg5 = _mm256_add_epi64(zmm1, arg6)
                                
                                if ((r15_2 & 0x10) == 0)
                                label_140195f6a:
                                    
                                    if ((r15_2 & 0x20) != 0)
                                        goto label_14019631a
                                    
                                    goto label_140195f74
                                
                            label_140196305:
                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                    zx.d(*arg5[0].q), 4)
                                
                                if ((r15_2 & 0x20) != 0)
                                label_14019631a:
                                    uint16_t rax_92[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, rax_92, 5)
                                    
                                    if ((r15_2 & 0x40) == 0)
                                        goto label_140195f7e
                                    
                                    goto label_14019632c
                                
                            label_140195f74:
                                
                                if ((r15_2 & 0x40) != 0)
                                label_14019632c:
                                    arg6[0].o = _mm256_extracti128_si256(arg5, 1)
                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                        zx.d(*arg6[0].q), 6)
                                    
                                    if (temp0_165.b s< 0)
                                    label_140196348:
                                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                        uint16_t rax_96[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        arg9[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, rax_96, 7)
                                else
                                label_140195f7e:
                                    
                                    if (temp0_165.b s< 0)
                                        goto label_140196348
                                
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
                                                    goto label_140196022
                                                
                                                goto label_140196129
                                            
                                            arg7[0].o = _mm256_extracti128_si256(arg15, 1)
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, zx.d(*arg7[0].q), 2)
                                            arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                            
                                            if ((temp0_259 & 8) != 0)
                                            label_140196022:
                                                arg7[0].o = _mm256_extracti128_si256(arg15, 1)
                                                uint16_t rax_59[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, rax_59, 3)
                                                arg15 = _mm256_add_epi64(zmm1, arg6)
                                                
                                                if ((temp0_259 & 0x10) == 0)
                                                    goto label_140196137
                                                
                                                goto label_14019604c
                                            
                                        label_140196129:
                                            arg15 = _mm256_add_epi64(zmm1, arg6)
                                            
                                            if ((temp0_259 & 0x10) == 0)
                                            label_140196137:
                                                
                                                if ((temp0_259 & 0x20) != 0)
                                                    goto label_140196061
                                                
                                                goto label_140196141
                                            
                                        label_14019604c:
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, zx.d(*arg15[0].q), 4)
                                            
                                            if ((temp0_259 & 0x20) != 0)
                                            label_140196061:
                                                uint16_t rax_63[0x2] = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, rax_63, 5)
                                                
                                                if ((temp0_259 & 0x40) == 0)
                                                    goto label_14019614b
                                                
                                                goto label_140196073
                                            
                                        label_140196141:
                                            
                                            if ((temp0_259 & 0x40) != 0)
                                            label_140196073:
                                                arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, zx.d(*arg6[0].q), 6)
                                                
                                                if (temp0_259 s< 0)
                                                label_14019608f:
                                                    arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                                    uint16_t rax_67[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_67, 7)
                                            else
                                            label_14019614b:
                                                
                                                if (temp0_259 s< 0)
                                                    goto label_14019608f
                                            
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
                                                goto label_14019694d
                                            
                                            goto label_140196a32
                                        
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*arg8[0].q), 0)
                                        
                                        if ((temp0_416 & 2) != 0)
                                        label_14019694d:
                                            uint32_t rax_128 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_128, 1)
                                            arg9[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            
                                            if ((temp0_416 & 4) == 0)
                                                goto label_140196a42
                                            
                                            goto label_140196965
                                        
                                    label_140196a32:
                                        arg9[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        
                                        if ((temp0_416 & 4) == 0)
                                        label_140196a42:
                                            arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                            
                                            if ((temp0_416 & 8) != 0)
                                                goto label_140196987
                                            
                                            goto label_140196a51
                                        
                                    label_140196965:
                                        arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*arg7[0].q), 2)
                                        arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                        
                                        if ((temp0_416 & 8) != 0)
                                        label_140196987:
                                            arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                            uint32_t rax_132 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_132, 3)
                                            arg8 = __vpaddq_ymmqq_ymmqq_memqq(arg9, var_920_1)
                                            
                                            if ((temp0_416 & 0x10) == 0)
                                                goto label_140196a64
                                            
                                            goto label_1401969b6
                                        
                                    label_140196a51:
                                        arg8 = __vpaddq_ymmqq_ymmqq_memqq(arg9, var_920_1)
                                        
                                        if ((temp0_416 & 0x10) == 0)
                                        label_140196a64:
                                            
                                            if ((temp0_416 & 0x20) != 0)
                                                goto label_1401969cb
                                            
                                            goto label_140196a6e
                                        
                                    label_1401969b6:
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*arg8[0].q), 4)
                                        
                                        if ((temp0_416 & 0x20) != 0)
                                        label_1401969cb:
                                            uint32_t rax_136 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_136, 5)
                                            
                                            if ((temp0_416 & 0x40) == 0)
                                                goto label_140196a78
                                            
                                            goto label_1401969dd
                                        
                                    label_140196a6e:
                                        
                                        if ((temp0_416 & 0x40) != 0)
                                        label_1401969dd:
                                            arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, zx.d(*arg7[0].q), 6)
                                            
                                            if (temp0_416 s< 0)
                                            label_1401969f9:
                                                arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                                uint32_t rax_140 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, rax_140, 7)
                                        else
                                        label_140196a78:
                                            
                                            if (temp0_416 s< 0)
                                                goto label_1401969f9
                                        
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
                                        goto label_1401954c7
                                    
                                    goto label_140196b68
                                
                                uint16_t rax_8[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_8, 1)
                                zmm2[0].o = _mm256_extracti128_si256(arg16, 1)
                                
                                if ((r15_2 & 4) != 0)
                                label_1401954c7:
                                    arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*arg5[0].q), 2)
                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                    
                                    if ((r15_2 & 8) == 0)
                                        goto label_140196b77
                                    
                                    goto label_1401954e9
                                
                            label_140196b68:
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                
                                if ((r15_2 & 8) == 0)
                                label_140196b77:
                                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_920_1)
                                    
                                    if ((r15_2 & 0x10) != 0)
                                        goto label_140195518
                                    
                                    goto label_140196b8a
                                
                            label_1401954e9:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                uint16_t rax_12[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_12, 3)
                                zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_920_1)
                                
                                if ((r15_2 & 0x10) != 0)
                                label_140195518:
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm0[0].q), 4)
                                    
                                    if ((r15_2 & 0x20) == 0)
                                        goto label_140196b94
                                    
                                    goto label_14019552d
                                
                            label_140196b8a:
                                
                                if ((r15_2 & 0x20) == 0)
                                label_140196b94:
                                    
                                    if ((r15_2 & 0x40) != 0)
                                        goto label_14019553f
                                    
                                    goto label_140196b9e
                                
                            label_14019552d:
                                uint16_t rax_16[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_16, 5)
                                
                                if ((r15_2 & 0x40) == 0)
                                label_140196b9e:
                                    
                                    if (temp0_165.b s< 0)
                                    label_14019555b:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        uint16_t rax_20[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_20, 7)
                                else
                                label_14019553f:
                                    zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm2[0].q), 6)
                                    
                                    if (temp0_165.b s< 0)
                                        goto label_14019555b
                                
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
                                        goto label_140195591
                                    
                                    goto label_140196c03
                                
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 0)
                                
                                if ((r15_2 & 2) != 0)
                                label_140195591:
                                    uint32_t rax_24 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_24, 1)
                                    zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                    
                                    if ((r15_2 & 4) == 0)
                                        goto label_140196c13
                                    
                                    goto label_1401955a9
                                
                            label_140196c03:
                                zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                
                                if ((r15_2 & 4) == 0)
                                label_140196c13:
                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                    
                                    if ((r15_2 & 8) != 0)
                                        goto label_1401955cb
                                    
                                    goto label_140196c22
                                
                            label_1401955a9:
                                arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*arg5[0].q), 2)
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                
                                if ((r15_2 & 8) != 0)
                                label_1401955cb:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint32_t rax_28 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_28, 3)
                                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_920_1)
                                    
                                    if ((r15_2 & 0x10) == 0)
                                        goto label_140196c35
                                    
                                    goto label_1401955fa
                                
                            label_140196c22:
                                zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_920_1)
                                
                                if ((r15_2 & 0x10) == 0)
                                label_140196c35:
                                    
                                    if ((r15_2 & 0x20) != 0)
                                        goto label_14019560f
                                    
                                    goto label_140196c3f
                                
                            label_1401955fa:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 4)
                                
                                if ((r15_2 & 0x20) == 0)
                                label_140196c3f:
                                    
                                    if ((r15_2 & 0x40) != 0)
                                    label_140196c45:
                                        zmm2[0].o = zmm1[0].o
                                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        zmm1[0].o = zmm2[0].o
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                            zx.d(*zmm1[0].q), 6)
                                else
                                label_14019560f:
                                    uint32_t rax_32 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_32, 5)
                                    
                                    if ((r15_2 & 0x40) != 0)
                                        goto label_140196c45
                                
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
                                label_140196cc4:
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
                                        goto label_1401961d3
                                    
                                    goto label_140195c89
                                
                                arg8[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg5[0].q, 0)
                                
                                if ((rsi_4 & 2) != 0)
                                label_1401961d3:
                                    uint16_t* rax_74 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_74, 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((rsi_4 & 4) == 0)
                                        goto label_140195c99
                                    
                                    goto label_1401961ee
                                
                            label_140195c89:
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                
                                if ((rsi_4 & 4) == 0)
                                label_140195c99:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rsi_4 & 8) != 0)
                                        goto label_14019620d
                                    
                                    goto label_140195ca8
                                
                            label_1401961ee:
                                arg7[0].o = _mm256_extracti128_si256(arg5, 1)
                                arg8[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg7[0].q, 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rsi_4 & 8) != 0)
                                label_14019620d:
                                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                    uint16_t* rax_76 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_76, 3)
                                    arg5 = _mm256_add_epi64(zmm1, arg6)
                                    
                                    if ((rsi_4 & 0x10) == 0)
                                        goto label_140195cb6
                                    
                                    goto label_140196231
                                
                            label_140195ca8:
                                arg5 = _mm256_add_epi64(zmm1, arg6)
                                
                                if ((rsi_4 & 0x10) == 0)
                                label_140195cb6:
                                    
                                    if ((rsi_4 & 0x20) != 0)
                                        goto label_140196240
                                    
                                    goto label_140195cc0
                                
                            label_140196231:
                                arg8[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg5[0].q, 4)
                                
                                if ((rsi_4 & 0x20) != 0)
                                label_140196240:
                                    uint16_t* rax_78 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_78, 5)
                                    
                                    if ((rsi_4 & 0x40) == 0)
                                        goto label_140195cca
                                    
                                    goto label_140196255
                                
                            label_140195cc0:
                                
                                if ((rsi_4 & 0x40) != 0)
                                label_140196255:
                                    arg6[0].o = _mm256_extracti128_si256(arg5, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg6[0].q, 6)
                                    
                                    if (temp0_165.b s< 0)
                                    label_14019626e:
                                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                                        uint16_t* rax_80 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_80, 7)
                                else
                                label_140195cca:
                                    
                                    if (temp0_165.b s< 0)
                                        goto label_14019626e
                                
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
                                                    goto label_140195d5e
                                                
                                                goto label_140195e50
                                            
                                            arg7[0].o = _mm256_extracti128_si256(arg15, 1)
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                                *arg7[0].q, 2)
                                            arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                            
                                            if ((temp0_216 & 8) != 0)
                                            label_140195d5e:
                                                arg7[0].o = _mm256_extracti128_si256(arg15, 1)
                                                uint16_t* rax_47 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg9[0].o, *rax_47, 3)
                                                arg15 = _mm256_add_epi64(zmm1, arg6)
                                                
                                                if ((temp0_216 & 0x10) == 0)
                                                    goto label_140195e5d
                                                
                                                goto label_140195d81
                                            
                                        label_140195e50:
                                            arg15 = _mm256_add_epi64(zmm1, arg6)
                                            
                                            if ((temp0_216 & 0x10) == 0)
                                            label_140195e5d:
                                                
                                                if ((temp0_216 & 0x20) != 0)
                                                    goto label_140195d8f
                                                
                                                goto label_140195e66
                                            
                                        label_140195d81:
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                                *arg15[0].q, 4)
                                            
                                            if ((temp0_216 & 0x20) != 0)
                                            label_140195d8f:
                                                uint16_t* rax_49 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg9[0].o, *rax_49, 5)
                                                
                                                if ((temp0_216 & 0x40) == 0)
                                                    goto label_140195e6f
                                                
                                                goto label_140195da3
                                            
                                        label_140195e66:
                                            
                                            if ((temp0_216 & 0x40) != 0)
                                            label_140195da3:
                                                arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg9[0].o, *arg6[0].q, 6)
                                                
                                                if (temp0_216 s< 0)
                                                label_140195dbb:
                                                    arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                                    uint16_t* rax_51 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg9[0].o, *rax_51, 7)
                                            else
                                            label_140195e6f:
                                                
                                                if (temp0_216 s< 0)
                                                    goto label_140195dbb
                                            
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
                                                goto label_1401963f3
                                            
                                            goto label_1401964c4
                                        
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg8[0].q, 0)
                                        
                                        if ((temp0_329 & 2) != 0)
                                        label_1401963f3:
                                            int64_t rax_99 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_99, 1)
                                            arg9[0].o = _mm256_extracti128_si256(arg12, 1)
                                            
                                            if ((temp0_329 & 4) == 0)
                                                goto label_1401964d3
                                            
                                            goto label_14019640d
                                        
                                    label_1401964c4:
                                        arg9[0].o = _mm256_extracti128_si256(arg12, 1)
                                        
                                        if ((temp0_329 & 4) == 0)
                                        label_1401964d3:
                                            arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                            
                                            if ((temp0_329 & 8) != 0)
                                                goto label_14019642b
                                            
                                            goto label_1401964e1
                                        
                                    label_14019640d:
                                        arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg7[0].q, 2)
                                        arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                        
                                        if ((temp0_329 & 8) != 0)
                                        label_14019642b:
                                            arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                            int64_t rax_101 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_101, 3)
                                            arg8 = _mm256_add_epi64(arg10, arg9)
                                            
                                            if ((temp0_329 & 0x10) == 0)
                                                goto label_1401964ee
                                            
                                            goto label_14019644e
                                        
                                    label_1401964e1:
                                        arg8 = _mm256_add_epi64(arg10, arg9)
                                        
                                        if ((temp0_329 & 0x10) == 0)
                                        label_1401964ee:
                                            
                                            if ((temp0_329 & 0x20) != 0)
                                                goto label_14019645c
                                            
                                            goto label_1401964f7
                                        
                                    label_14019644e:
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg8[0].q, 4)
                                        
                                        if ((temp0_329 & 0x20) != 0)
                                        label_14019645c:
                                            int64_t rax_103 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_103, 5)
                                            
                                            if ((temp0_329 & 0x40) == 0)
                                                goto label_140196500
                                            
                                            goto label_140196470
                                        
                                    label_1401964f7:
                                        
                                        if ((temp0_329 & 0x40) != 0)
                                        label_140196470:
                                            arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *arg7[0].q, 6)
                                            
                                            if (temp0_329 s< 0)
                                            label_140196488:
                                                arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                                int64_t rax_105 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_105, 7)
                                        else
                                        label_140196500:
                                            
                                            if (temp0_329 s< 0)
                                                goto label_140196488
                                        
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
                                        goto label_140196739
                                    
                                    goto label_1401965ed
                                
                                uint16_t* rax_109 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_109, 1)
                                arg10 = var_720_1
                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                int128_t var_420
                                
                                if ((rsi_4 & 4) != 0)
                                label_140196739:
                                    var_720_1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *var_720_1[0].q, 2)
                                    var_720_1[0].o = var_420
                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                    
                                    if ((rsi_4 & 8) == 0)
                                        goto label_140196605
                                    
                                    goto label_140196761
                                
                            label_1401965ed:
                                var_720_1[0].o = var_420
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                
                                if ((rsi_4 & 8) == 0)
                                label_140196605:
                                    zmm0 = _mm256_add_epi64(zmm1, zmm2)
                                    
                                    if ((rsi_4 & 0x10) != 0)
                                        goto label_140196785
                                    
                                    goto label_140196613
                                
                            label_140196761:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                uint16_t* rax_111 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_111, 3)
                                zmm0 = _mm256_add_epi64(zmm1, zmm2)
                                
                                if ((rsi_4 & 0x10) != 0)
                                label_140196785:
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 4)
                                    
                                    if ((rsi_4 & 0x20) == 0)
                                        goto label_14019661d
                                    
                                    goto label_140196794
                                
                            label_140196613:
                                
                                if ((rsi_4 & 0x20) == 0)
                                label_14019661d:
                                    
                                    if ((rsi_4 & 0x40) != 0)
                                        goto label_1401967a9
                                    
                                    goto label_140196627
                                
                            label_140196794:
                                uint16_t* rax_113 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_113, 5)
                                
                                if ((rsi_4 & 0x40) == 0)
                                label_140196627:
                                    
                                    if (temp0_165.b s< 0)
                                    label_1401967c2:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        uint16_t* rax_115 =
                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_115, 7)
                                else
                                label_1401967a9:
                                    zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm2[0].q, 6)
                                    
                                    if (temp0_165.b s< 0)
                                        goto label_1401967c2
                                
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
                                        goto label_1401967ec
                                    
                                    goto label_140196687
                                
                                var_720_1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(var_720_1[0].o, *zmm0[0].q, 0)
                                
                                if ((rsi_4 & 2) != 0)
                                label_1401967ec:
                                    int64_t rax_117 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    var_720_1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_720_1[0].o, *rax_117, 1)
                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    
                                    if ((rsi_4 & 4) == 0)
                                        goto label_140196697
                                    
                                    goto label_14019680b
                                
                            label_140196687:
                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                
                                if ((rsi_4 & 4) == 0)
                                label_140196697:
                                    arg7 = var_900_1
                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                    
                                    if ((rsi_4 & 8) != 0)
                                        goto label_14019683f
                                    
                                    goto label_1401966af
                                
                            label_14019680b:
                                zmm1[0].o = var_720_1[0].o
                                var_720_1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                var_720_1[0].o = zmm1[0].o
                                var_720_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_720_1[0].o, 
                                    *var_720_1[0].q, 2)
                                arg7 = var_900_1
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                
                                if ((rsi_4 & 8) != 0)
                                label_14019683f:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    int64_t rax_119 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    var_720_1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(var_720_1[0].o, *rax_119, 3)
                                    zmm0 = _mm256_add_epi64(zmm1, zmm2)
                                    
                                    if ((rsi_4 & 0x10) == 0)
                                        goto label_1401966bd
                                    
                                    goto label_140196863
                                
                            label_1401966af:
                                zmm0 = _mm256_add_epi64(zmm1, zmm2)
                                
                                if ((rsi_4 & 0x10) != 0)
                                label_140196863:
                                    var_720_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        var_720_1[0].o, *zmm0[0].q, 4)
                                    
                                    if ((rsi_4 & 0x20) != 0)
                                    label_140196872:
                                        int64_t rax_121 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        var_720_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            var_720_1[0].o, *rax_121, 5)
                                        
                                        if ((rsi_4 & 0x40) == 0)
                                            goto label_1401966d4
                                        
                                        goto label_140196887
                                else
                                label_1401966bd:
                                    
                                    if ((rsi_4 & 0x20) != 0)
                                        goto label_140196872
                                
                                if ((rsi_4 & 0x40) != 0)
                                label_140196887:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    var_720_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        var_720_1[0].o, *zmm1[0].q, 6)
                                    var_9c0_1 = arg12
                                    
                                    if (temp0_165.b s< 0)
                                    label_1401968a9:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_123 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        var_720_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            var_720_1[0].o, *rax_123, 7)
                                else
                                label_1401966d4:
                                    var_9c0_1 = arg12
                                    
                                    if (temp0_165.b s< 0)
                                        goto label_1401968a9
                                
                                var_400 = arg6[0].o
                                zmm0 = _mm256_cvtepu16_epi32(arg6[0].o)
                                var_420 = var_720_1[0].o
                                zmm2 = _mm256_cvtepu16_epi32(var_720_1[0].o)
                                arg5 = _mm256_xor_ps(arg7, arg15)
                                arg6[0].o = zx.o(0)
                                
                                if (arg20 != 1)
                                    goto label_140196cc4
                            
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
                            goto label_1401970ad
                        
                        goto label_140196f60
                    
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg8[0].q, 0)
                    
                    if ((temp0_519 & 2) != 0)
                    label_1401970ad:
                        int64_t rax_155 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_155, 1)
                        
                        if ((temp0_519 & 4) == 0)
                            goto label_140196f6a
                        
                        goto label_1401970c2
                    
                label_140196f60:
                    
                    if ((temp0_519 & 4) == 0)
                    label_140196f6a:
                        
                        if ((temp0_519 & 8) != 0)
                            goto label_1401970dc
                        
                        goto label_140196f74
                    
                label_1401970c2:
                    arg9[0].o = _mm256_extracti128_si256(arg8, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg9[0].q, 2)
                    
                    if ((temp0_519 & 8) != 0)
                    label_1401970dc:
                        arg9[0].o = _mm256_extracti128_si256(arg8, 1)
                        int64_t rax_157 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_157, 3)
                        zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                        
                        if ((temp0_519 & 0x10) == 0)
                            goto label_140196f83
                        
                        goto label_140197101
                    
                label_140196f74:
                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                    
                    if ((temp0_519 & 0x10) == 0)
                    label_140196f83:
                        zmm2 = _mm256_slli_epi32(zmm2, 0x1f)
                        
                        if ((temp0_519 & 0x20) != 0)
                            goto label_140197115
                        
                        goto label_140196f92
                    
                label_140197101:
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg6[0].q, 4)
                    zmm2 = _mm256_slli_epi32(zmm2, 0x1f)
                    
                    if ((temp0_519 & 0x20) == 0)
                    label_140196f92:
                        arg15 = __vpbroadcastq_ymmqq_memq(2)
                        arg9 = _mm256_srai_epi32(zmm2, 0x1f)
                        
                        if ((temp0_519 & 0x40) != 0)
                            zmm2[0].o = _mm256_extracti128_si256(arg6, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm2[0].q, 6)
                    else
                    label_140197115:
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
                            goto label_140197e9e
                        
                        goto label_140197187
                    
                    zmm1[0].o = _mm256_extracti128_si256(arg8, 1)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm1[0].q, 2)
                    
                    if ((temp0_544 & 8) != 0)
                    label_140197e9e:
                        zmm1[0].o = _mm256_extracti128_si256(arg8, 1)
                        uint16_t* rax_181 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_181, 3)
                        
                        if ((temp0_544 & 0x10) == 0)
                            goto label_140197191
                        
                        goto label_140197ebe
                    
                label_140197187:
                    
                    if ((temp0_544 & 0x10) == 0)
                    label_140197191:
                        
                        if ((temp0_544 & 0x20) != 0)
                            goto label_140197ecd
                        
                        goto label_14019719b
                    
                label_140197ebe:
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg6[0].q, 4)
                    
                    if ((temp0_544 & 0x20) != 0)
                    label_140197ecd:
                        uint16_t* rax_183 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_183, 5)
                        
                        if ((temp0_544 & 0x40) == 0)
                            goto label_1401971a5
                        
                        goto label_140197ee2
                    
                label_14019719b:
                    
                    if ((temp0_544 & 0x40) != 0)
                    label_140197ee2:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm1[0].q, 6)
                        
                        if (temp0_544 s< 0)
                        label_140197efa:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint16_t* rax_185 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_185, 7)
                    else
                    label_1401971a5:
                        
                        if (temp0_544 s< 0)
                            goto label_140197efa
                    
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
                                goto label_1401980dc
                            
                            goto label_140197faa
                        
                        arg6[0].o = arg7[0].o
                        arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                        arg7[0].o = arg6[0].o
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg7[0].q, 2)
                        
                        if ((temp0_968 & 8) != 0)
                        label_1401980dc:
                            arg6[0].o = arg7[0].o
                            arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                            uint16_t* rax_191 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                            arg7[0].o = arg6[0].o
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_191, 3)
                            zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            
                            if ((temp0_968 & 0x10) == 0)
                                goto label_140197fb9
                            
                            goto label_140198109
                        
                    label_140197faa:
                        zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                        
                        if ((temp0_968 & 0x10) == 0)
                        label_140197fb9:
                            zmm0 = _mm256_slli_epi32(zmm0, 0x1f)
                            
                            if ((temp0_968 & 0x20) != 0)
                                goto label_14019811d
                            
                            goto label_140197fc8
                        
                    label_140198109:
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg15[0].q, 4)
                        zmm0 = _mm256_slli_epi32(zmm0, 0x1f)
                        
                        if ((temp0_968 & 0x20) == 0)
                        label_140197fc8:
                            arg17 = __vpbroadcastq_ymmqq_memq(2)
                            arg9 = _mm256_srai_epi32(zmm0, 0x1f)
                            
                            if ((temp0_968 & 0x40) != 0)
                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0].q, 6)
                        else
                        label_14019811d:
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
                                goto label_140195437
                            
                            goto label_14019817d
                        
                        zmm0[0].o = _mm256_extracti128_si256(arg8, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                        
                        if ((temp0_994 & 8) != 0)
                        label_140195437:
                            zmm0[0].o = _mm256_extracti128_si256(arg8, 1)
                            int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_2, 3)
                            
                            if ((temp0_994 & 0x10) == 0)
                                goto label_140198187
                            
                            goto label_140195457
                        
                    label_14019817d:
                        
                        if ((temp0_994 & 0x10) == 0)
                        label_140198187:
                            
                            if ((temp0_994 & 0x20) != 0)
                                goto label_140195466
                            
                            goto label_140198191
                        
                    label_140195457:
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg15[0].q, 4)
                        
                        if ((temp0_994 & 0x20) != 0)
                        label_140195466:
                            int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_4, 5)
                            
                            if ((temp0_994 & 0x40) == 0)
                                goto label_14019819b
                            
                            goto label_14019547b
                        
                    label_140198191:
                        
                        if ((temp0_994 & 0x40) != 0)
                        label_14019547b:
                            zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                            
                            if (temp0_994 s< 0)
                            label_140195493:
                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                int64_t rax_6 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_6, 7)
                        else
                        label_14019819b:
                            
                            if (temp0_994 s< 0)
                                goto label_140195493
                        
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
        goto label_1401990de
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
