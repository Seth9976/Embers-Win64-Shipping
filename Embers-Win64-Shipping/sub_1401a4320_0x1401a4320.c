// 函数: sub_1401a4320
// 地址: 0x1401a4320
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
int32_t zmm2[0x8]
zmm2[0].o = arg19
uint16_t* r12 = arg17
int32_t rdx_4 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
uint64_t result
int128_t var_840
uint32_t var_760[0x8]
float var_700[0x8]
float var_580[0x8]
int32_t var_520[0x8]
int32_t r14
uint32_t zmm0[0x8]
float zmm1[0x8]
uint32_t zmm5[0x8]

if (rdx_4 s<= 0)
    r14 = 0
    result = zx.q(arg21)
    
    if (0 s< result.d)
    label_1401a7f90:
        zmm0[0].o = zx.o(r14)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(result.d)
        zmm5 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
        zmm2 = _mm256_slli_epi32(zmm0, 3)
        arg16[0].o = zx.o(0)
        uint32_t temp0_1289[0x8]
        int32_t temp1_58
        temp0_1289, temp1_58 = _mm256_i32gather_epi32(arg16, *(arg2 + zmm2[0].q), zmm5)
        arg16 = temp0_1289
        zmm1 = __vpbroadcastd_ymmqq_memd(4)
        zmm2 |= zmm1
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        uint32_t temp0_1292[0x8]
        int32_t temp1_59
        temp0_1292, temp1_59 = _mm256_i32gather_epi32(arg6, *(arg2 + zmm2[0].q), zmm5)
        zmm2[0].o = zx.o(arg4)
        zmm2 = _mm256_broadcastd_epi32(_mm256_slli_epi32(zmm2, 2)[0])
        arg5 = _mm256_mullo_epi32(temp0_1292, zmm2)
        arg13[0].o = zx.o(0)
        zmm2[0].o = zx.o(0)
        uint32_t temp0_1296[0x8]
        int32_t temp1_60
        temp0_1296, temp1_60 = _mm256_i32gather_epi32(zmm2, *(arg3 + arg5[0].q), zmm5)
        zmm2 = temp0_1296
        arg6 = temp1_60
        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
        zmm0 = _mm256_cmpeq_epi32(zmm2, arg7)
        uint32_t var_7c0_3[0x8] = zmm5
        uint32_t var_740_2[0x8] = zmm0
        arg8 = zmm0 & not.32(zmm5)
        arg5[0].o = _mm256_extracti128_si256(arg8, 1)
        arg15[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm0[0].o)
        int128_t var_5e0
        int128_t var_5c0
        int128_t var_5a0
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            arg6[0].o = zx.o(r12)
            arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
            arg14[0].o = zx.o(0)
            uint32_t temp0_1304[0x8]
            int32_t temp1_61
            temp0_1304, temp1_61 = _mm256_i32gather_epi32(arg14, *(r12 + zmm2[0].q), arg8)
            arg14 = temp0_1304
            zmm5 = temp1_61
            zmm5[0].o = 4
            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
            uint32_t temp0_1306[0x8] = _mm256_srli_epi32(arg14, 0x1c)
            uint32_t temp0_1307[0x8] = _mm256_slli_epi32(temp0_1306, 2)
            arg10[0].o = zx.o(0)
            float var_540_1[0x8] = arg8
            uint32_t temp0_1308[0x8]
            int32_t temp1_62
            temp0_1308, temp1_62 =
                _mm256_i32gather_epi32(arg10, *(&data_143442960 + temp0_1307[0].q), arg8)
            arg8 = _mm256_srli_epi32(arg14, 0x18)
            arg11 =
                _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 0x1f)
            float var_7e0_5[0x8] = arg8
            zmm5 = (arg8 & __vpbroadcastd_ymmqq_memd(7)) | _mm256_slli_epi32(temp0_1306, 3)
            arg8 = __vpbroadcastd_ymmqq_memd(3)
            zmm5 &= arg11
            uint64_t r8_4 = zx.q(zmm5[0])
            uint64_t r9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t r10_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t r11_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
            uint64_t rsi_12 = zx.q(zmm5[0])
            uint64_t rax_225 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t rdx_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t rbx_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = zx.o(*(r8_4 + &data_143442980))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r9 + &data_143442980), 1)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r10_4 + &data_143442980), 2)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r11_4 + &data_143442980), 3)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rsi_12 + &data_143442980), 4)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_225 + &data_143442980), 5)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rdx_5 + &data_143442980), 6)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_11 + &data_143442980), 7)
            float temp0_1330[0x8] = _mm256_cvtepu8_epi32(zmm5[0].q)
            uint32_t temp0_1331[0x8] = _mm256_cmpeq_epi32(temp0_1306, arg8)
            zmm5[0].o = _mm256_extracti128_si256(temp0_1331, 1)
            var_700[0].o = zmm5[0].o
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1331[0].o, zmm5[0].o)
            arg7 ^= temp0_1331
            arg8[0].o = _mm256_extracti128_si256(arg7, 1)
            arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
            arg8[0].o = arg7[0].o & arg15[0].o
            arg7[0].o = __vpsllw_xmmdq_xmmdq_immb(arg8[0].o, 0xf)
            arg7[0].o = __vpsraw_xmmdq_xmmdq_immb(arg7[0].o, 0xf)
            arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_1331[0].o)
            char temp0_1339 = __vpmovmskb_gpr32d_xmmdq(arg7[0].o)
            arg7[0].o = zx.o(0)
            
            if (temp0_1339 != 0)
                arg7 = _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(arg8[0].o), 0x1f), 
                    0x1f) & temp0_1330
            
            uint32_t var_920_2[0x8] = _mm256_cvtepi32_epi64(zmm2[0].o)
            zmm0 = _mm256_cvtepi32_epi64(arg5[0].o)
            int64_t var_7a0_1[0x4] = zmm0
            zmm2 = _mm256_broadcastq_epi64(arg6[0].q)
            arg9 = arg14 & data_143442840
            arg5 = arg11 & temp0_1308
            arg6[0].o = arg15[0].o & zmm5[0].o
            zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
            zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            char temp0_1349 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o)
            arg10 = _mm256_broadcast_ss(1.40129846e-45f)
            
            if (temp0_1349 == 0)
                arg6[0].o = zx.o(0)
            else
                zmm5 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f)
                arg6 = _mm256_blendv_ps(arg13, temp0_1330, zmm5)
                arg7 = _mm256_blendv_ps(arg7, arg10, zmm5)
            
            zmm0 = _mm256_mullo_epi32(arg7, arg5)
            int32_t var_940_3[0x8] = zmm0
            arg11 = _mm256_madd_epi16(arg6, arg11 & zmm1)
            arg12 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_7a0_1)
            arg8 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_920_2)
            zmm1 = _mm256_cmpgt_epi32(arg9, arg10)
            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm1[0].o &= arg15[0].o
            zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            uint32_t var_980_1[0x8] = arg14
            float var_6e0_1[0x8] = arg8
            float var_820_2[0x8] = arg12
            int32_t var_900_4[0x8]
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) == 0)
                arg12[0].o = zx.o(0)
                zmm0[0].o = zx.o(0)
                var_900_4 = zmm0
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
                uint32_t var_9c0_1[0x8]
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    zmm0[0].o = zx.o(0)
                    var_9c0_1 = zmm0
                    zmm5[0].o = zx.o(0)
                    arg7[0].o = zx.o(0)
                    zmm0[0].o = zx.o(0)
                    var_900_4 = zmm0
                    arg13[0].o = zx.o(0)
                else
                    arg6[0].o = zx.o(0)
                    zmm0[0].o = zx.o(0)
                    zmm5[0].o = zx.o(arg19)
                    
                    if (zx.o(0) f>= zmm5[0])
                        zmm0[0].o = zx.o(0)
                        var_9c0_1 = zmm0
                        zmm5[0].o = zx.o(0)
                        arg7[0].o = zx.o(0)
                        zmm0[0].o = zx.o(0)
                        var_900_4 = zmm0
                    else
                        int32_t temp0_1375[0x8] =
                            _mm256_add_epi32(arg9, _mm256_cmpeq_epi32(zmm0, zmm0))
                        
                        if (zmm5[0].o f>= 1f)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                                & temp0_1375
                            zmm5 = zmm0
                            arg7 = zmm0
                            var_9c0_1 = zmm0
                            var_900_4 = zmm0
                        else
                            arg13 = arg10
                            arg10 = _mm256_mul_ps(_mm256_broadcastd_epi32(zmm5[0]), 
                                _mm256_cvtepi32_ps(temp0_1375))
                            float temp0_1379[0x8] = _mm256_round_ps(arg10, 9)
                            zmm0 = _mm256_min_epi32(temp0_1375, _mm256_cvttps_epi32(temp0_1379))
                            arg6 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f)
                            zmm5 = _mm256_srai_epi32(arg6, 0x1f)
                            zmm0 &= zmm5
                            var_9c0_1 = zmm0
                            arg6[0].o = zx.o(0)
                            
                            if (arg20 != 1)
                                arg6 = _mm256_sub_ps(arg10, temp0_1379)
                            
                            arg10 = var_9c0_1
                            arg7 = zmm5 & _mm256_min_epi32(
                                _mm256_sub_epi32(arg10, _mm256_cmpeq_epi32(zmm0, zmm0)), temp0_1375)
                            zmm5 = arg10
                            var_900_4 = arg7
                            arg10 = arg13
                            arg11 = arg11
                            arg9 = arg9
                    
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
                    arg12 = zmm5
                else
                    int32_t var_9a0_3[0x8] = arg7
                    zmm2 = arg9
                    uint32_t temp0_1403[0x8] =
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f)
                    var_840.32 = temp0_1403
                    zmm1 = _mm256_srai_epi32(temp0_1403, 0x1f)
                    float var_8e0_3[0x8] = arg9
                    uint32_t temp0_1406[0x8] =
                        _mm256_cmpeq_epi32(arg9, _mm256_min_epu32(arg9, arg10))
                    zmm2[0].o = zx.o(0)
                    arg5[0].o = arg19
                    int32_t rax_231
                    rax_231.b = zmm2[0].o f>= arg5[0]
                    zmm2[0].o = zx.o(neg.d(rax_231))
                    arg7 = temp0_1406 | _mm256_broadcastd_epi32(zmm2[0])
                    zmm2 = arg7 & zmm1
                    
                    if (_mm256_movemask_ps(zmm2) == 0)
                        zmm0 = var_900_4
                    else
                        temp0_1406[0].o = zx.o(0)
                        zmm5 = _mm256_blendv_ps(var_9c0_1, temp0_1406, zmm2)
                        float temp0_1410[0x8] = _mm256_blendv_ps(var_9a0_3, temp0_1406, zmm2)
                        var_9c0_1 = zmm5
                        var_9a0_3 = temp0_1410
                        zmm0 = temp0_1410
                    
                    arg5 = arg7 & not.32(zmm1)
                    int32_t temp0_1411 = _mm256_movemask_ps(arg5)
                    zmm1[0].o = zx.o(0)
                    
                    if (temp0_1411 == 0)
                        var_900_4 = zmm0
                        arg12 = zmm5
                        arg8 = var_840.32
                    else
                        int32_t var_960_4[0x8] = arg7
                        zmm2 = var_8e0_3
                        arg9 = _mm256_add_epi32(zmm2, arg6)
                        arg7[0].o = arg19
                        
                        if (arg7[0].o f>= 1f)
                            arg12 = _mm256_blendv_ps(var_9c0_1, arg9, arg5)
                            var_900_4 = _mm256_blendv_ps(var_9a0_3, arg9, arg5)
                            arg8 = var_840.32
                        else
                            zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                            zmm0 = _mm256_cvtepu32_epi64(zmm0[0].o)
                            zmm1 = _mm256_cvtepu32_epi64(arg11[0].o)
                            int32_t temp0_1416[0x8] = __vpmulld_ymmqq_ymmqq_memqq(zmm2, var_940_3)
                            arg6[0].o = _mm256_extracti128_si256(temp0_1416, 1)
                            zmm1 = _mm256_add_epi64(arg8, zmm1)
                            zmm0 = _mm256_add_epi64(arg12, zmm0)
                            zmm5 = __vpbroadcastq_ymmqq_memq(3)
                            zmm2 = _mm256_cvtepi32_epi64(temp0_1416[0].o)
                            arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                            zmm1 = _mm256_add_epi64(zmm2, _mm256_add_epi64(zmm1, zmm5))
                            zmm0 = _mm256_add_epi64(arg6, _mm256_add_epi64(zmm0, zmm5))
                            zmm2 = __vpbroadcastq_ymmqq_memq(-4)
                            uint32_t var_8c0_2[0x8] = zmm0 & zmm2
                            arg6 = zmm1 & zmm2
                            int32_t rbx_12 = arg18 - 2
                            zmm0 = _mm256_broadcastss_ps(arg7[0].o)
                            float temp0_1429[0x8] = _mm256_cvtepi32_ps(arg9)
                            zmm0 = _mm256_mul_ps(zmm0, temp0_1429)
                            temp0_1429[0].o = arg14[0].o
                            temp0_1429[0] = float.s(arg18 - 1)
                            arg8[0].o = temp0_1429[0].o f* arg7[0]
                            int32_t rax_235 = int.d(arg8[0])
                            int32_t rax_236 = rax_235 & not.d(rax_235 s>> 0x1f)
                            
                            if (rbx_12 s> rax_236)
                                rbx_12 = rax_236
                            
                            zmm0 = _mm256_cvttps_epi32(zmm0)
                            temp0_1429[0].o =
                                __vxorps_xmmdq_xmmdq_xmmdq(temp0_1429[0].o, temp0_1429[0].o)
                            float var_900_5[0x8] = arg9
                            arg9 = _mm256_min_epi32(_mm256_max_epi32(zmm0, temp0_1429), arg9)
                            uint32_t var_880_3[0x8] = arg13
                            var_580[0].o = arg15[0].o
                            var_520 = arg10
                            float var_860_4[0x8] = arg11
                            var_760[0].o = arg8[0].o
                            
                            if (arg18 s< 0x100)
                                zmm0 = _mm256_cvtepi32_epi64(arg9[0].o)
                                zmm2 = _mm256_add_epi64(arg6, zmm0)
                                char rdx_9 = temp0_1411.b
                                
                                if ((rdx_9 & 1) == 0)
                                    if ((rdx_9 & 2) != 0)
                                        goto label_1401ab661
                                    
                                    goto label_1401a8c48
                                
                                temp0_1429[0].o = __vpbroadcastb_xmmdq_memb(*zmm2[0].q)
                                
                                if ((rdx_9 & 2) != 0)
                                label_1401ab661:
                                    uint32_t rax_392 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                    temp0_1429[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                        temp0_1429[0].o, rax_392, 1)
                                    zmm5[0].o = _mm256_extracti128_si256(arg9, 1)
                                    
                                    if ((rdx_9 & 4) == 0)
                                        goto label_1401a8c57
                                    
                                    goto label_1401ab678
                                
                            label_1401a8c48:
                                zmm5[0].o = _mm256_extracti128_si256(arg9, 1)
                                
                                if ((rdx_9 & 4) == 0)
                                label_1401a8c57:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_9 & 8) != 0)
                                        goto label_1401ab699
                                    
                                    goto label_1401a8c65
                                
                            label_1401ab678:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                temp0_1429[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                    temp0_1429[0].o, zx.d(*zmm0[0].q), 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_9 & 8) != 0)
                                label_1401ab699:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    uint32_t rax_396 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    temp0_1429[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                        temp0_1429[0].o, rax_396, 3)
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                    
                                    if ((rdx_9 & 0x10) == 0)
                                        goto label_1401a8c77
                                    
                                    goto label_1401ab6c7
                                
                            label_1401a8c65:
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                
                                if ((rdx_9 & 0x10) == 0)
                                label_1401a8c77:
                                    
                                    if ((rdx_9 & 0x20) != 0)
                                        goto label_1401ab6db
                                    
                                    goto label_1401a8c80
                                
                            label_1401ab6c7:
                                temp0_1429[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                    temp0_1429[0].o, zx.d(*zmm2[0].q), 4)
                                
                                if ((rdx_9 & 0x20) != 0)
                                label_1401ab6db:
                                    uint32_t rax_400 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                    temp0_1429[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                        temp0_1429[0].o, rax_400, 5)
                                    
                                    if ((rdx_9 & 0x40) == 0)
                                        goto label_1401a8c89
                                    
                                    goto label_1401ab6ec
                                
                            label_1401a8c80:
                                
                                if ((rdx_9 & 0x40) != 0)
                                label_1401ab6ec:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    temp0_1429[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                        temp0_1429[0].o, zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1411.b s< 0)
                                    label_1401ab707:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint32_t rax_404 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        temp0_1429[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                            temp0_1429[0].o, rax_404, 7)
                                else
                                label_1401a8c89:
                                    
                                    if (temp0_1411.b s< 0)
                                        goto label_1401ab707
                                
                                zmm0[0].o = temp0_1429[0].o & data_142fc92e0
                                uint32_t temp0_1546[0x8] = _mm256_cvtepu16_epi32(zmm0[0].o)
                                temp0_1429[0].o = zx.o(rbx_12)
                                float temp0_1547[0x8] = _mm256_broadcastd_epi32(temp0_1429[0])
                                zmm1 = _mm256_cmpgt_epi32(temp0_1546, temp0_1547)
                                arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                                arg14 = zmm1 ^ arg8
                                arg10 = arg9
                                
                                if (_mm256_movemask_ps(zmm1 & not.32(arg5)) != 0)
                                    arg10 =
                                        __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg9, var_900_5, arg14)
                                    arg15 = _mm256_sub_epi32(arg9, arg8)
                                    arg13 = zmm1 & not.32(_mm256_cmpgt_epi32(var_8e0_3, arg15))
                                    arg7 = arg5 & arg13
                                    int32_t i = _mm256_movemask_ps(arg7)
                                    
                                    if (i != 0)
                                        zmm1 = arg9
                                        
                                        do
                                            arg11 = arg15
                                            zmm0 = _mm256_cvtepi32_epi64(arg11[0].o)
                                            arg15 = _mm256_add_epi64(arg6, zmm0)
                                            char temp0_1572 = _mm256_movemask_ps(arg7)
                                            
                                            if ((temp0_1572 & 1) == 0)
                                                if ((temp0_1572 & 2) != 0)
                                                    goto label_1401a8d21
                                                
                                                goto label_1401a8e16
                                            
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg15[0].q), 0)
                                            
                                            if ((temp0_1572 & 2) != 0)
                                            label_1401a8d21:
                                                uint32_t rax_263 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_263, 1)
                                                zmm5[0].o = _mm256_extracti128_si256(arg11, 1)
                                                
                                                if ((temp0_1572 & 4) == 0)
                                                    goto label_1401a8e26
                                                
                                                goto label_1401a8d39
                                            
                                        label_1401a8e16:
                                            zmm5[0].o = _mm256_extracti128_si256(arg11, 1)
                                            
                                            if ((temp0_1572 & 4) == 0)
                                            label_1401a8e26:
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1572 & 8) != 0)
                                                    goto label_1401a8d5b
                                                
                                                goto label_1401a8e35
                                            
                                        label_1401a8d39:
                                            zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm0[0].q), 2)
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1572 & 8) != 0)
                                            label_1401a8d5b:
                                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                uint32_t rax_267 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_267, 3)
                                                arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                                
                                                if ((temp0_1572 & 0x10) == 0)
                                                    goto label_1401a8e48
                                                
                                                goto label_1401a8d8a
                                            
                                        label_1401a8e35:
                                            arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                            
                                            if ((temp0_1572 & 0x10) == 0)
                                            label_1401a8e48:
                                                
                                                if ((temp0_1572 & 0x20) != 0)
                                                    goto label_1401a8d9f
                                                
                                                goto label_1401a8e52
                                            
                                        label_1401a8d8a:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg15[0].q), 4)
                                            
                                            if ((temp0_1572 & 0x20) != 0)
                                            label_1401a8d9f:
                                                uint32_t rax_271 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_271, 5)
                                                
                                                if ((temp0_1572 & 0x40) == 0)
                                                    goto label_1401a8e5c
                                                
                                                goto label_1401a8db1
                                            
                                        label_1401a8e52:
                                            
                                            if ((temp0_1572 & 0x40) != 0)
                                            label_1401a8db1:
                                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*zmm0[0].q), 6)
                                                
                                                if (temp0_1572 s< 0)
                                                label_1401a8dcd:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                    uint32_t rax_275 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_275, 7)
                                            else
                                            label_1401a8e5c:
                                                
                                                if (temp0_1572 s< 0)
                                                    goto label_1401a8dcd
                                            
                                            zmm0[0].o = zmm2[0].o & data_142fc92e0
                                            arg7 = _mm256_cmpgt_epi32(
                                                _mm256_cvtepu16_epi32(zmm0[0].o), temp0_1547) & arg13
                                            zmm5[0].o = zx.o(0)
                                            
                                            if (_mm256_movemask_ps(arg7 & arg5) != i)
                                                zmm5 = arg7 ^ arg13
                                            
                                            arg10 = _mm256_blendv_ps(arg10, zmm1, arg7)
                                            arg15 =
                                                __vpsubd_ymmqq_ymmqq_memqq(arg11, data_142fc9420)
                                            arg13 = _mm256_cmpgt_epi32(var_8e0_3, arg15) & zmm5
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
                                            char temp0_1607 = _mm256_movemask_ps(arg7)
                                            
                                            if ((temp0_1607 & 1) == 0)
                                                if ((temp0_1607 & 2) != 0)
                                                    goto label_1401a8f2d
                                                
                                                goto label_1401a9011
                                            
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*arg13[0].q), 0)
                                            
                                            if ((temp0_1607 & 2) != 0)
                                            label_1401a8f2d:
                                                uint32_t rax_281 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_281, 1)
                                                zmm5[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                
                                                if ((temp0_1607 & 4) == 0)
                                                    goto label_1401a9021
                                                
                                                goto label_1401a8f45
                                            
                                        label_1401a9011:
                                            zmm5[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            
                                            if ((temp0_1607 & 4) == 0)
                                            label_1401a9021:
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1607 & 8) != 0)
                                                    goto label_1401a8f67
                                                
                                                goto label_1401a9030
                                            
                                        label_1401a8f45:
                                            zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*zmm0[0].q), 2)
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1607 & 8) != 0)
                                            label_1401a8f67:
                                                zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                uint32_t rax_285 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_285, 3)
                                                arg13 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                                
                                                if ((temp0_1607 & 0x10) == 0)
                                                    goto label_1401a9043
                                                
                                                goto label_1401a8f96
                                            
                                        label_1401a9030:
                                            arg13 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                            
                                            if ((temp0_1607 & 0x10) == 0)
                                            label_1401a9043:
                                                
                                                if ((temp0_1607 & 0x20) != 0)
                                                    goto label_1401a8fab
                                                
                                                goto label_1401a904d
                                            
                                        label_1401a8f96:
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*arg13[0].q), 4)
                                            
                                            if ((temp0_1607 & 0x20) != 0)
                                            label_1401a8fab:
                                                uint32_t rax_289 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_289, 5)
                                                
                                                if ((temp0_1607 & 0x40) == 0)
                                                    goto label_1401a9057
                                                
                                                goto label_1401a8fbd
                                            
                                        label_1401a904d:
                                            
                                            if ((temp0_1607 & 0x40) != 0)
                                            label_1401a8fbd:
                                                zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, zx.d(*zmm0[0].q), 6)
                                                
                                                if (temp0_1607 s< 0)
                                                label_1401a8fd9:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    uint32_t rax_293 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg11[0].o, rax_293, 7)
                                            else
                                            label_1401a9057:
                                                
                                                if (temp0_1607 s< 0)
                                                    goto label_1401a8fd9
                                            
                                            zmm0[0].o = arg11[0].o & arg9[0].o
                                            arg7 = _mm256_cmpgt_epi32(
                                                _mm256_cvtepu16_epi32(zmm0[0].o), temp0_1547)
                                                & not.32(arg15)
                                            zmm5[0].o = zx.o(0)
                                            int32_t temp0_1613 = _mm256_movemask_ps(arg7 & arg5)
                                            arg8[0].o = zx.o(0)
                                            
                                            if (temp0_1613 != i_1)
                                                arg8 = arg7 ^ arg15
                                            
                                            arg10 = _mm256_blendv_ps(arg10, zmm2, arg7)
                                            zmm2 = _mm256_add_epi32(zmm2, zmm1)
                                            arg15 = _mm256_cmpgt_epi32(zmm2, zmm5) & arg8
                                            arg7 = arg15 & arg5
                                            i_1 = _mm256_movemask_ps(arg7)
                                        while (i_1 != 0)
                                
                                arg7 = var_960_4
                                arg12 = _mm256_blendv_ps(var_9c0_1, arg10, arg5)
                                zmm0 = _mm256_cvtepi32_epi64(arg12[0].o)
                                zmm2 = _mm256_add_epi64(arg6, zmm0)
                                
                                if ((rdx_9 & 1) != 0)
                                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*zmm2[0].q)
                                
                                arg13 = var_880_3
                                arg15[0].o = var_580[0].o
                                arg10 = var_520
                                arg11 = var_860_4
                                
                                if ((rdx_9 & 2) == 0)
                                    arg14 = var_980_1
                                    zmm5[0].o = _mm256_extracti128_si256(arg12, 1)
                                    
                                    if ((rdx_9 & 4) != 0)
                                        goto label_1401ab743
                                    
                                    goto label_1401a911a
                                
                                uint32_t rax_406 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_406, 1)
                                arg14 = var_980_1
                                zmm5[0].o = _mm256_extracti128_si256(arg12, 1)
                                
                                if ((rdx_9 & 4) != 0)
                                label_1401ab743:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 2)
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_9 & 8) == 0)
                                        goto label_1401a9128
                                    
                                    goto label_1401ab764
                                
                            label_1401a911a:
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_9 & 8) == 0)
                                label_1401a9128:
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                    
                                    if ((rdx_9 & 0x10) != 0)
                                        goto label_1401ab792
                                    
                                    goto label_1401a913a
                                
                            label_1401ab764:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                uint32_t rax_410 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_410, 3)
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                
                                if ((rdx_9 & 0x10) != 0)
                                label_1401ab792:
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm2[0].q), 4)
                                    
                                    if ((rdx_9 & 0x20) == 0)
                                        goto label_1401a9143
                                    
                                    goto label_1401ab7a6
                                
                            label_1401a913a:
                                
                                if ((rdx_9 & 0x20) == 0)
                                label_1401a9143:
                                    
                                    if ((rdx_9 & 0x40) != 0)
                                        goto label_1401ab7b7
                                    
                                    goto label_1401a914c
                                
                            label_1401ab7a6:
                                uint32_t rax_414 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_414, 5)
                                
                                if ((rdx_9 & 0x40) == 0)
                                label_1401a914c:
                                    
                                    if (temp0_1411.b s< 0)
                                    label_1401ab7d2:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint32_t rax_418 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_418, 7)
                                else
                                label_1401ab7b7:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1411.b s< 0)
                                        goto label_1401ab7d2
                                
                                zmm5 = _mm256_blendv_ps(var_9a0_3, 
                                    _mm256_sub_epi32(arg12, _mm256_cmpeq_epi32(zmm0, zmm0)), arg5)
                                zmm2 = _mm256_cmpgt_epi32(var_8e0_3, zmm5) & not.32(arg5)
                                
                                if (_mm256_movemask_ps(zmm2) != 0)
                                    zmm5 =
                                        __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm5, var_900_5, zmm2)
                                
                                arg8 = var_840.32
                                var_900_4 = zmm5
                                arg5 = _mm256_add_epi64(arg6, _mm256_cvtepi32_epi64(zmm5[0].o))
                                
                                if ((rdx_9 & 1) == 0)
                                    if ((rdx_9 & 2) != 0)
                                        goto label_1401ab804
                                    
                                    goto label_1401a91b9
                                
                                zmm2[0].o = __vpbroadcastb_xmmdq_memb(*arg5[0].q)
                                
                                if ((rdx_9 & 2) != 0)
                                label_1401ab804:
                                    uint32_t rax_421 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_421, 1)
                                    zmm0 = var_900_4
                                    arg6[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    
                                    if ((rdx_9 & 4) == 0)
                                        goto label_1401a91d1
                                    
                                    goto label_1401ab824
                                
                            label_1401a91b9:
                                zmm0 = var_900_4
                                arg6[0].o = _mm256_extracti128_si256(zmm0, 1)
                                
                                if ((rdx_9 & 4) == 0)
                                label_1401a91d1:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rdx_9 & 8) != 0)
                                        goto label_1401ab845
                                    
                                    goto label_1401a91df
                                
                            label_1401ab824:
                                zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rdx_9 & 8) != 0)
                                label_1401ab845:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    uint32_t rax_425 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_425, 3)
                                    arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8c0_2)
                                    
                                    if ((rdx_9 & 0x10) == 0)
                                        goto label_1401a91f1
                                    
                                    goto label_1401ab873
                                
                            label_1401a91df:
                                arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8c0_2)
                                
                                if ((rdx_9 & 0x10) != 0)
                                label_1401ab873:
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*arg5[0].q), 4)
                                    
                                    if ((rdx_9 & 0x20) != 0)
                                    label_1401ab887:
                                        uint32_t rax_429 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_429, 5)
                                        
                                        if ((rdx_9 & 0x40) == 0)
                                            goto label_1401a9203
                                        
                                        goto label_1401ab898
                                else
                                label_1401a91f1:
                                    
                                    if ((rdx_9 & 0x20) != 0)
                                        goto label_1401ab887
                                
                                if ((rdx_9 & 0x40) != 0)
                                label_1401ab898:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    zmm1[0].o &= data_142fc92e0
                                    
                                    if (temp0_1411.b s< 0)
                                    label_1401ab8bb:
                                        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                        uint32_t rax_433 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_433, 7)
                                else
                                label_1401a9203:
                                    zmm1[0].o &= data_142fc92e0
                                    
                                    if (temp0_1411.b s< 0)
                                        goto label_1401ab8bb
                                
                                arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm0[0].o = zmm2[0].o & data_142fc92e0
                                zmm2 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            else
                                int32_t temp0_1435[0x8] = _mm256_add_epi32(arg9, arg9)
                                zmm0 = _mm256_cvtepi32_epi64(temp0_1435[0].o)
                                zmm2 = _mm256_add_epi64(arg6, zmm0)
                                char rdx_8 = temp0_1411.b
                                
                                if ((rdx_8 & 1) == 0)
                                    if ((rdx_8 & 2) != 0)
                                        goto label_1401ab425
                                    
                                    goto label_1401a864b
                                
                                temp0_1429[0].o = __vpbroadcastw_xmmdq_memw(*zmm2[0].q)
                                
                                if ((rdx_8 & 2) != 0)
                                label_1401ab425:
                                    int64_t rax_368 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    temp0_1429[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1429[0].o, *rax_368, 1)
                                    zmm5[0].o = _mm256_extracti128_si256(temp0_1435, 1)
                                    
                                    if ((rdx_8 & 4) == 0)
                                        goto label_1401a865a
                                    
                                    goto label_1401ab43f
                                
                            label_1401a864b:
                                zmm5[0].o = _mm256_extracti128_si256(temp0_1435, 1)
                                
                                if ((rdx_8 & 4) == 0)
                                label_1401a865a:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_8 & 8) != 0)
                                        goto label_1401ab45d
                                    
                                    goto label_1401a8668
                                
                            label_1401ab43f:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                temp0_1429[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1429[0].o, *zmm0[0].q, 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_8 & 8) != 0)
                                label_1401ab45d:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    int64_t rax_370 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    temp0_1429[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1429[0].o, *rax_370, 3)
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                    
                                    if ((rdx_8 & 0x10) == 0)
                                        goto label_1401a867a
                                    
                                    goto label_1401ab485
                                
                            label_1401a8668:
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                
                                if ((rdx_8 & 0x10) == 0)
                                label_1401a867a:
                                    
                                    if ((rdx_8 & 0x20) != 0)
                                        goto label_1401ab493
                                    
                                    goto label_1401a8683
                                
                            label_1401ab485:
                                temp0_1429[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1429[0].o, *zmm2[0].q, 4)
                                
                                if ((rdx_8 & 0x20) != 0)
                                label_1401ab493:
                                    int64_t rax_372 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    temp0_1429[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1429[0].o, *rax_372, 5)
                                    
                                    if ((rdx_8 & 0x40) == 0)
                                        goto label_1401a868c
                                    
                                    goto label_1401ab4a7
                                
                            label_1401a8683:
                                
                                if ((rdx_8 & 0x40) != 0)
                                label_1401ab4a7:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    temp0_1429[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1429[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1411.b s< 0)
                                    label_1401ab4bf:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_374 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        temp0_1429[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            temp0_1429[0].o, *rax_374, 7)
                                else
                                label_1401a868c:
                                    
                                    if (temp0_1411.b s< 0)
                                        goto label_1401ab4bf
                                
                                uint32_t temp0_1441[0x8] = _mm256_cvtepu16_epi32(temp0_1429[0].o)
                                temp0_1429[0].o = zx.o(rbx_12)
                                float temp0_1442[0x8] = _mm256_broadcastd_epi32(temp0_1429[0])
                                zmm1 = _mm256_cmpgt_epi32(temp0_1441, temp0_1442)
                                arg8 = zmm1 ^ _mm256_cmpeq_epi32(temp0_1441, temp0_1441)
                                arg10 = arg9
                                
                                if (_mm256_movemask_ps(zmm1 & not.32(arg5)) != 0)
                                    arg10 =
                                        __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg9, var_900_5, arg8)
                                    zmm2 = __vpsubd_ymmqq_ymmqq_memqq(arg9, data_142fc9420)
                                    arg11 = zmm1 & not.32(_mm256_cmpgt_epi32(var_8e0_3, zmm2))
                                    arg7 = arg5 & arg11
                                    int32_t i_2 = _mm256_movemask_ps(arg7)
                                    
                                    if (i_2 != 0)
                                        arg15 = arg9
                                        
                                        do
                                            arg13 = zmm2
                                            arg14 = _mm256_add_epi32(zmm2, zmm2)
                                            zmm0 = _mm256_cvtepi32_epi64(arg14[0].o)
                                            zmm2 = _mm256_add_epi64(arg6, zmm0)
                                            char temp0_1468 = _mm256_movemask_ps(arg7)
                                            
                                            if ((temp0_1468 & 1) == 0)
                                                if ((temp0_1468 & 2) != 0)
                                                    goto label_1401a8717
                                                
                                                goto label_1401a87f9
                                            
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm2[0].q, 0)
                                            
                                            if ((temp0_1468 & 2) != 0)
                                            label_1401a8717:
                                                int64_t rax_239 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_239, 1)
                                                zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                                
                                                if ((temp0_1468 & 4) == 0)
                                                    goto label_1401a8809
                                                
                                                goto label_1401a8732
                                            
                                        label_1401a87f9:
                                            zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                            
                                            if ((temp0_1468 & 4) == 0)
                                            label_1401a8809:
                                                arg14 = var_980_1
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1468 & 8) != 0)
                                                    goto label_1401a8757
                                                
                                                goto label_1401a881e
                                            
                                        label_1401a8732:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm0[0].q, 2)
                                            arg14 = var_980_1
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1468 & 8) != 0)
                                            label_1401a8757:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                int64_t rax_241 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_241, 3)
                                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                                
                                                if ((temp0_1468 & 0x10) == 0)
                                                    goto label_1401a8831
                                                
                                                goto label_1401a8780
                                            
                                        label_1401a881e:
                                            zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                            
                                            if ((temp0_1468 & 0x10) == 0)
                                            label_1401a8831:
                                                
                                                if ((temp0_1468 & 0x20) != 0)
                                                    goto label_1401a878f
                                                
                                                goto label_1401a883b
                                            
                                        label_1401a8780:
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm2[0].q, 4)
                                            
                                            if ((temp0_1468 & 0x20) != 0)
                                            label_1401a878f:
                                                int64_t rax_243 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_243, 5)
                                                
                                                if ((temp0_1468 & 0x40) == 0)
                                                    goto label_1401a8845
                                                
                                                goto label_1401a87a4
                                            
                                        label_1401a883b:
                                            
                                            if ((temp0_1468 & 0x40) != 0)
                                            label_1401a87a4:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *zmm0[0].q, 6)
                                                
                                                if (temp0_1468 s< 0)
                                                label_1401a87bd:
                                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    int64_t rax_245 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_245, 7)
                                            else
                                            label_1401a8845:
                                                
                                                if (temp0_1468 s< 0)
                                                    goto label_1401a87bd
                                            
                                            zmm2 = _mm256_cmpgt_epi32(
                                                _mm256_cvtepu16_epi32(zmm1[0].o), temp0_1442) & arg11
                                            zmm5[0].o = zx.o(0)
                                            
                                            if (_mm256_movemask_ps(zmm2 & arg5) != i_2)
                                                zmm5 = zmm2 ^ arg11
                                            
                                            arg10 = _mm256_blendv_ps(arg10, arg15, zmm2)
                                            zmm2 = __vpsubd_ymmqq_ymmqq_memqq(arg13, data_142fc9420)
                                            arg11 = _mm256_cmpgt_epi32(var_8e0_3, zmm2) & zmm5
                                            arg7 = arg11 & arg5
                                            i_2 = _mm256_movemask_ps(arg7)
                                            arg15 = arg13
                                        while (i_2 != 0)
                                
                                if (_mm256_movemask_ps(_mm256_andnot_ps(arg8, arg5)) != 0)
                                    zmm0 = __vxorps_ymmqq_ymmqq_memqq(arg8, data_142fc9420)
                                    zmm1[0].o = zx.o(0)
                                    arg10 = _mm256_blendv_ps(arg10, zmm1, zmm0)
                                    uint32_t temp0_1483[0x8] = _mm256_cmpeq_epi32(arg13, arg13)
                                    zmm2 = _mm256_add_epi32(arg9, temp0_1483)
                                    zmm1 = _mm256_cmpgt_epi32(zmm2, zmm1)
                                    arg11 = zmm1 & zmm0
                                    arg7 = arg11 & arg5
                                    
                                    for (int32_t i_3 = _mm256_movemask_ps(arg7); i_3 != 0; 
                                            i_3 = _mm256_movemask_ps(arg7))
                                        arg14 = _mm256_add_epi32(zmm2, zmm2)
                                        zmm0 = _mm256_cvtepi32_epi64(arg14[0].o)
                                        arg15 = _mm256_add_epi64(arg6, zmm0)
                                        char temp0_1505 = _mm256_movemask_ps(arg7)
                                        
                                        if ((temp0_1505 & 1) == 0)
                                            if ((temp0_1505 & 2) != 0)
                                                goto label_1401a8903
                                            
                                            goto label_1401a89e5
                                        
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg15[0].q, 0)
                                        
                                        if ((temp0_1505 & 2) != 0)
                                        label_1401a8903:
                                            int64_t rax_249 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_249, 1)
                                            zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                            
                                            if ((temp0_1505 & 4) == 0)
                                                goto label_1401a89f5
                                            
                                            goto label_1401a891e
                                        
                                    label_1401a89e5:
                                        zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                        
                                        if ((temp0_1505 & 4) == 0)
                                        label_1401a89f5:
                                            arg14 = var_980_1
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1505 & 8) != 0)
                                                goto label_1401a8943
                                            
                                            goto label_1401a8a0a
                                        
                                    label_1401a891e:
                                        zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *zmm0[0].q, 2)
                                        arg14 = var_980_1
                                        zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                        
                                        if ((temp0_1505 & 8) != 0)
                                        label_1401a8943:
                                            zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                            int64_t rax_251 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_251, 3)
                                            arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                            
                                            if ((temp0_1505 & 0x10) == 0)
                                                goto label_1401a8a1d
                                            
                                            goto label_1401a896c
                                        
                                    label_1401a8a0a:
                                        arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                        
                                        if ((temp0_1505 & 0x10) == 0)
                                        label_1401a8a1d:
                                            
                                            if ((temp0_1505 & 0x20) != 0)
                                                goto label_1401a897b
                                            
                                            goto label_1401a8a27
                                        
                                    label_1401a896c:
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg15[0].q, 4)
                                        
                                        if ((temp0_1505 & 0x20) != 0)
                                        label_1401a897b:
                                            int64_t rax_253 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_253, 5)
                                            
                                            if ((temp0_1505 & 0x40) == 0)
                                                goto label_1401a8a31
                                            
                                            goto label_1401a8990
                                        
                                    label_1401a8a27:
                                        
                                        if ((temp0_1505 & 0x40) != 0)
                                        label_1401a8990:
                                            zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm0[0].q, 6)
                                            
                                            if (temp0_1505 s< 0)
                                            label_1401a89a9:
                                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                int64_t rax_255 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_255, 7)
                                        else
                                        label_1401a8a31:
                                            
                                            if (temp0_1505 s< 0)
                                                goto label_1401a89a9
                                        
                                        arg7 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                            temp0_1442) & not.32(arg11)
                                        zmm5[0].o = zx.o(0)
                                        int32_t temp0_1511 = _mm256_movemask_ps(arg7 & arg5)
                                        arg8[0].o = zx.o(0)
                                        
                                        if (temp0_1511 != i_3)
                                            arg8 = arg7 ^ arg11
                                        
                                        arg10 = _mm256_blendv_ps(arg10, zmm2, arg7)
                                        zmm2 = _mm256_add_epi32(zmm2, temp0_1483)
                                        arg11 = _mm256_cmpgt_epi32(zmm2, zmm5) & arg8
                                        arg7 = arg11 & arg5
                                
                                arg7 = var_960_4
                                arg12 = _mm256_blendv_ps(var_9c0_1, arg10, arg5)
                                zmm5 = _mm256_add_epi32(arg12, arg12)
                                zmm0 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                zmm2 = _mm256_add_epi64(arg6, zmm0)
                                
                                if ((rdx_8 & 1) != 0)
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*zmm2[0].q)
                                
                                arg13 = var_880_3
                                arg15[0].o = var_580[0].o
                                arg10 = var_520
                                arg11 = var_860_4
                                
                                if ((rdx_8 & 2) == 0)
                                    zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    
                                    if ((rdx_8 & 4) != 0)
                                        goto label_1401ab4ef
                                    
                                    goto label_1401a8aef
                                
                                int64_t rax_375 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_375, 1)
                                zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                
                                if ((rdx_8 & 4) != 0)
                                label_1401ab4ef:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_8 & 8) == 0)
                                        goto label_1401a8afd
                                    
                                    goto label_1401ab50d
                                
                            label_1401a8aef:
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_8 & 8) == 0)
                                label_1401a8afd:
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                    
                                    if ((rdx_8 & 0x10) != 0)
                                        goto label_1401ab535
                                    
                                    goto label_1401a8b0f
                                
                            label_1401ab50d:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                int64_t rax_377 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_377, 3)
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                
                                if ((rdx_8 & 0x10) != 0)
                                label_1401ab535:
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 4)
                                    
                                    if ((rdx_8 & 0x20) == 0)
                                        goto label_1401a8b18
                                    
                                    goto label_1401ab543
                                
                            label_1401a8b0f:
                                
                                if ((rdx_8 & 0x20) == 0)
                                label_1401a8b18:
                                    
                                    if ((rdx_8 & 0x40) != 0)
                                        goto label_1401ab557
                                    
                                    goto label_1401a8b21
                                
                            label_1401ab543:
                                int64_t rax_379 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_379, 5)
                                
                                if ((rdx_8 & 0x40) == 0)
                                label_1401a8b21:
                                    
                                    if (temp0_1411.b s< 0)
                                    label_1401ab56f:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_381 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_381, 7)
                                else
                                label_1401ab557:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1411.b s< 0)
                                        goto label_1401ab56f
                                
                                zmm5 = _mm256_blendv_ps(var_9a0_3, 
                                    _mm256_sub_epi32(arg12, _mm256_cmpeq_epi32(zmm0, zmm0)), arg5)
                                zmm2 = _mm256_cmpgt_epi32(var_8e0_3, zmm5) & not.32(arg5)
                                
                                if (_mm256_movemask_ps(zmm2) != 0)
                                    zmm5 =
                                        __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm5, var_900_5, zmm2)
                                
                                arg8 = var_840.32
                                var_900_4 = zmm5
                                zmm5 = _mm256_add_epi32(zmm5, zmm5)
                                zmm0 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                arg5 = _mm256_add_epi64(arg6, zmm0)
                                
                                if ((rdx_8 & 1) == 0)
                                    if ((rdx_8 & 2) != 0)
                                        goto label_1401ab598
                                    
                                    goto label_1401a8b92
                                
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*arg5[0].q)
                                
                                if ((rdx_8 & 2) != 0)
                                label_1401ab598:
                                    int64_t rax_383 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_383, 1)
                                    arg6[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    
                                    if ((rdx_8 & 4) == 0)
                                        goto label_1401a8ba1
                                    
                                    goto label_1401ab5b2
                                
                            label_1401a8b92:
                                arg6[0].o = _mm256_extracti128_si256(zmm5, 1)
                                
                                if ((rdx_8 & 4) == 0)
                                label_1401a8ba1:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rdx_8 & 8) != 0)
                                        goto label_1401ab5d0
                                    
                                    goto label_1401a8baf
                                
                            label_1401ab5b2:
                                zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rdx_8 & 8) != 0)
                                label_1401ab5d0:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    int64_t rax_385 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_385, 3)
                                    arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8c0_2)
                                    
                                    if ((rdx_8 & 0x10) == 0)
                                        goto label_1401a8bc1
                                    
                                    goto label_1401ab5f8
                                
                            label_1401a8baf:
                                arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8c0_2)
                                
                                if ((rdx_8 & 0x10) == 0)
                                label_1401a8bc1:
                                    
                                    if ((rdx_8 & 0x20) != 0)
                                        goto label_1401ab606
                                    
                                    goto label_1401a8bca
                                
                            label_1401ab5f8:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 4)
                                
                                if ((rdx_8 & 0x20) != 0)
                                label_1401ab606:
                                    int64_t rax_387 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_387, 5)
                                    
                                    if ((rdx_8 & 0x40) == 0)
                                        goto label_1401a8bd3
                                    
                                    goto label_1401ab61a
                                
                            label_1401a8bca:
                                
                                if ((rdx_8 & 0x40) != 0)
                                label_1401ab61a:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1411.b s< 0)
                                    label_1401ab632:
                                        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                        int64_t rax_389 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_389, 7)
                                else
                                label_1401a8bd3:
                                    
                                    if (temp0_1411.b s< 0)
                                        goto label_1401ab632
                                
                                arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                            
                            arg6[0].o = zx.o(0)
                            zmm5[0].o = zx.o(0)
                            
                            if (arg20 != 1)
                                zmm0 = _mm256_max_epi32(_mm256_sub_epi32(zmm2, zmm1), arg10)
                                zmm2 = _mm256_broadcast_ss(var_760[0])
                                zmm5 = _mm256_div_ps(_mm256_sub_ps(zmm2, _mm256_cvtepi32_ps(zmm1)), 
                                    _mm256_cvtepi32_ps(zmm0))
                            
                            zmm1 = _mm256_blendv_ps(arg6, zmm5, arg7 ^ arg5)
                    
                    arg13 = _mm256_blendv_ps(arg13, zmm1, arg8)
            
            zmm1[0].o = _mm256_extracti128_si256(arg11, 1)
            zmm0 = _mm256_cvtepu32_epi64(zmm1[0].o)
            arg5 = _mm256_cvtepu32_epi64(arg11[0].o)
            zmm1 = __vpmulld_ymmqq_ymmqq_memqq(arg12, var_940_3)
            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
            float var_8e0_4[0x8] = arg5
            float var_760_1[0x8] = zmm1
            zmm1 = _mm256_add_epi64(zmm1, arg5)
            uint32_t var_8c0_3[0x8] = zmm0
            int32_t var_860_5[0x8] = zmm2
            zmm2 = _mm256_add_epi64(zmm2, zmm0)
            uint32_t var_9a0_4[0x8] = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_820_2)
            uint32_t var_9c0_2[0x8] = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_6e0_1)
            zmm0 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg10, temp0_1306)
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            uint32_t var_960_5[0x8] = zmm0
            var_520[0].o = zmm1[0].o
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o &= arg15[0].o
            zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            uint32_t var_880_4[0x8] = arg13
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm2 = arg14 & __vpbroadcastd_ymmqq_memd(0x7000000)
                arg5[0].o = zx.o(0)
                uint32_t temp0_1667[0x8] = _mm256_cmpeq_epi32(zmm2, arg5)
                arg5[0].o = _mm256_extracti128_si256(temp0_1667, 1)
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1667[0].o, arg5[0].o)
                arg5[0].o &= zmm1[0].o
                zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                    arg5 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                    zmm5 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                    zmm0 = var_8e0_4
                    arg7 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_920_2)
                    arg8 = __vpbroadcastq_ymmqq_memq(4)
                    arg7 = __vpaddq_ymmqq_ymmqq_memqq(arg7, var_760_1)
                    zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_860_5)
                    arg9 = _mm256_add_epi64(zmm5, arg8)
                    arg8 = _mm256_add_epi64(arg7, arg8)
                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                    arg6[0].o = arg5[0].o
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    float temp0_1686[0x4]
                    int32_t temp1_63
                    temp0_1686, temp1_63 =
                        _mm256_i64gather_ps(arg10[0].o, *(r12 + arg8[0].q), arg6[0].o)
                    arg10[0].o = temp0_1686
                    arg6[0].o = temp1_63
                    arg6[0].o = zmm0[0].o
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    float temp0_1688[0x4]
                    int32_t temp1_64
                    temp0_1688, temp1_64 =
                        _mm256_i64gather_ps(arg8[0].o, *(r12 + arg9[0].q), arg6[0].o)
                    arg8[0].o = temp0_1688
                    arg6[0].o = temp1_64
                    arg6 = __vpbroadcastq_ymmqq_memq(8)
                    arg9 = _mm256_add_epi64(zmm5, arg6)
                    arg11 = _mm256_add_epi64(arg7, arg6)
                    arg6[0].o = arg5[0].o
                    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                    float temp0_1693[0x4]
                    int32_t temp1_65
                    temp0_1693, temp1_65 =
                        _mm256_i64gather_ps(arg13[0].o, *(r12 + arg11[0].q), arg6[0].o)
                    arg13[0].o = temp0_1693
                    arg6[0].o = temp1_65
                    arg6[0].o = zmm0[0].o
                    zmm2[0].o = zx.o(0)
                    float temp0_1694[0x4]
                    int32_t temp1_66
                    temp0_1694, temp1_66 =
                        _mm256_i64gather_ps(zx.o(0), *(r12 + arg9[0].q), arg6[0].o)
                    zmm2[0].o = temp0_1694
                    arg6[0].o = temp1_66
                    arg6 = __vpbroadcastq_ymmqq_memq(0xc)
                    arg9 = _mm256_add_epi64(arg7, arg6)
                    arg7[0].o = arg5[0].o
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    float temp0_1698[0x4]
                    int32_t temp1_67
                    temp0_1698, temp1_67 =
                        _mm256_i64gather_ps(arg11[0].o, *(r12 + arg9[0].q), arg7[0].o)
                    arg11[0].o = temp0_1698
                    arg7[0].o = temp1_67
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    arg6 = _mm256_add_epi64(zmm5, arg6)
                    float temp0_1701[0x4]
                    int32_t temp1_68
                    temp0_1701, temp1_68 =
                        _mm256_i64gather_ps(arg7[0].o, *(r12 + arg6[0].q), zmm0[0].o)
                    arg7[0].o = temp0_1701
                    zmm0[0].o = temp1_68
                    zmm0 = _mm256_insertf128_ps(arg10, arg8[0].o, 1)
                    zmm2 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                    arg13 = var_880_4
                    arg6 = _mm256_insertf128_ps(arg11, arg7[0].o, 1)
                    var_5e0.32 = _mm256_maskstore_ps(arg5, zmm0)
                    var_5c0.32 = _mm256_maskstore_ps(arg5, zmm2)
                    var_5a0.32 = _mm256_maskstore_ps(arg5, arg6)
                
                arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                zmm2 = temp0_1667 ^ arg5
                arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                zmm2[0].o &= zmm1[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                arg14 = var_980_1
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    arg11 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f), 0x1f)
                    arg9 = _mm256_srai_epi32(_mm256_slli_epi32(var_7e0_5, 0x1f), 0x1f)
                    zmm5 = arg9 & arg11
                    
                    if (_mm256_movemask_ps(zmm5) == 0)
                        arg5 = var_9c0_2
                        arg7 = var_9a0_4
                    else
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        zmm1 = var_9c0_2
                        arg5 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, zmm0), 
                            _mm256_permutevar8x32_ps(data_143442920, zmm5))
                        arg6 = _mm256_permutevar8x32_ps(data_143442940, zmm5)
                        arg7 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                        arg8 = __vpaddq_ymmqq_ymmqq_memqq(
                            __vpaddq_ymmqq_ymmqq_memqq(var_8e0_4, var_920_2), var_760_1)
                        arg7 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg7, var_860_5), zmm0)
                        arg8 = _mm256_add_epi64(arg8, zmm0)
                        var_8e0_4[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        float temp0_1734[0x4]
                        int32_t temp1_69
                        temp0_1734, temp1_69 =
                            _mm256_i64gather_ps(arg10[0].o, *(r12 + arg8[0].q), zmm5[0].o)
                        arg10[0].o = temp0_1734
                        zmm5[0].o = temp1_69
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        float temp0_1736[0x4]
                        int32_t temp1_70
                        temp0_1736, temp1_70 =
                            _mm256_i64gather_ps(zmm5[0].o, *(r12 + arg7[0].q), var_8e0_4[0].o)
                        zmm5[0].o = temp0_1736
                        var_8e0_4[0].o = temp1_70
                        zmm1 = var_9a0_4
                        arg7 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, zmm0), arg6)
                        zmm5 = _mm256_insertf128_ps(arg10, zmm5[0].o, 1)
                    
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    var_5e0.32 = _mm256_maskstore_ps(arg11, _mm256_blendv_ps(arg10, zmm5, arg9))
                    uint32_t temp0_1743[0x8] = __vpbroadcastd_ymmqq_memd(0x2000000)
                    arg9 = arg14 & temp0_1743
                    uint32_t temp0_1744[0x8] = _mm256_cmpeq_epi32(arg9, temp0_1743)
                    zmm1[0].o = _mm256_extracti128_si256(temp0_1744, 1)
                    temp0_1744[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1744[0].o, zmm1[0].o)
                    zmm5[0].o = zmm2[0].o & temp0_1744[0].o
                    temp0_1744[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                    temp0_1744[0].o = __vpsraw_xmmdq_xmmdq_immb(temp0_1744[0].o, 0xf)
                    temp0_1744[0].o =
                        __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1744[0].o, temp0_1744[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(temp0_1744[0].o) != 0)
                        zmm0 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                        zmm1 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                        arg6 = _mm256_permutevar8x32_epi32(data_143442940, zmm0)
                        zmm5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_1758[0x4]
                        int32_t temp1_71
                        temp0_1758, temp1_71 = _mm256_i64gather_ps(arg8[0].o, *arg5[0].q, zmm0[0].o)
                        arg8[0].o = temp0_1758
                        zmm0[0].o = temp1_71
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        arg5 = _mm256_blendv_ps(arg5, _mm256_add_epi64(arg5, zmm0), zmm1)
                        arg13 = var_880_4
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_1763[0x4]
                        int32_t temp1_72
                        temp0_1763, temp1_72 = _mm256_i64gather_ps(zmm1[0].o, *arg7[0].q, zmm5[0].o)
                        zmm1[0].o = temp0_1763
                        zmm5[0].o = temp1_72
                        arg7 = _mm256_blendv_ps(arg7, _mm256_add_epi64(arg7, zmm0), arg6)
                        zmm5 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                    
                    var_5c0.32 =
                        _mm256_maskstore_ps(arg11, _mm256_cmpeq_epi32(arg9, arg10) & not.32(zmm5))
                    uint32_t temp0_1769[0x8] = __vpbroadcastd_ymmqq_memd(0x4000000)
                    arg9 = arg14 & temp0_1769
                    zmm0 = _mm256_cmpeq_epi32(arg9, temp0_1769)
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
                        float temp0_1781[0x4]
                        int32_t temp1_73
                        temp0_1781, temp1_73 = _mm256_i64gather_ps(zx.o(0), *arg5[0].q, zmm0[0].o)
                        zmm2[0].o = temp0_1781
                        zmm0[0].o = temp1_73
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        float temp0_1783[0x4]
                        int32_t temp1_74
                        temp0_1783, temp1_74 = _mm256_i64gather_ps(zmm0[0].o, *arg7[0].q, zmm1[0].o)
                        zmm0[0].o = temp0_1783
                        zmm1[0].o = temp1_74
                        zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                    
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm0 = _mm256_cmpeq_epi32(arg9, zmm0) & not.32(zmm2)
                    var_5a0.32 = _mm256_maskstore_ps(arg11, zmm0)
            
            zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
            zmm1 = zmm5 ^ var_960_5
            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            int128_t var_840_1 = zmm0[0].o
            zmm1[0].o = arg15[0].o & zmm0[0].o
            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm2 = temp0_1331
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_700[0].o)
                zmm1[0].o = zmm0[0].o & arg15[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                float var_560_2[0x8] = arg12
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    arg12[0].o = arg15[0].o
                    uint32_t temp0_1800[0x8] = _mm256_cvtepu16_epi32(zmm1[0].o)
                    zmm0[0].o = zx.o(0)
                    uint32_t var_620_3[0x8] = zmm0
                    uint32_t var_640_3[0x8] = zmm0
                    uint32_t var_660_3[0x8] = zmm0
                    uint32_t var_680_3[0x8] = zmm0
                    uint32_t var_6a0_3[0x8] = zmm0
                    uint32_t var_6c0_3[0x8] = zmm0
                    arg7 = zmm2 & _mm256_srai_epi32(_mm256_slli_epi32(var_7e0_5, 0x1f), 0x1f)
                    arg9 = arg7 & var_540_1
                    zmm1 = var_6e0_1
                    arg15 = var_820_2
                    zmm2 = arg15
                    
                    if (_mm256_movemask_ps(arg9) != 0)
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        zmm1 = _mm256_add_epi64(var_6e0_1, zmm0)
                        zmm2 = _mm256_permutevar8x32_ps(data_143442920, arg9)
                        float temp0_1807[0x8] = _mm256_blendv_ps(var_6e0_1, zmm1, zmm2)
                        zmm1 = _mm256_add_epi64(arg15, zmm0)
                        arg10 = data_143442940
                        arg8[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        zmm5[0].o = arg9[0].o
                        arg11[0].o = zx.o(0)
                        float temp0_1810[0x4]
                        int32_t temp1_75
                        temp0_1810, temp1_75 =
                            _mm256_i64gather_ps(arg11[0].o, *var_6e0_1[0].q, zmm5[0].o)
                        arg11[0].o = temp0_1810
                        zmm5[0].o = temp1_75
                        zmm5[0].o = arg8[0].o
                        var_6e0_1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_6e0_1[0].o, var_6e0_1[0].o)
                        float temp0_1812[0x4]
                        int32_t temp1_76
                        temp0_1812, temp1_76 =
                            _mm256_i64gather_ps(var_6e0_1[0].o, *arg15[0].q, zmm5[0].o)
                        var_6e0_1[0].o = temp0_1812
                        zmm5[0].o = temp1_76
                        zmm5 = _mm256_permutevar8x32_ps(arg10, arg9)
                        arg10 = _mm256_blendv_ps(arg15, zmm1, zmm5)
                        var_660_3 = _mm256_maskstore_ps(arg7, 
                            _mm256_insertf128_ps(arg11, var_6e0_1[0].o, 1))
                        zmm1 =
                            _mm256_blendv_ps(temp0_1807, _mm256_add_epi64(temp0_1807, zmm0), zmm2)
                        var_6e0_1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_6e0_1[0].o, var_6e0_1[0].o)
                        float temp0_1820[0x4]
                        int32_t temp1_77
                        temp0_1820, temp1_77 =
                            _mm256_i64gather_ps(var_6e0_1[0].o, *temp0_1807[0].q, arg9[0].o)
                        var_6e0_1[0].o = temp0_1820
                        arg9[0].o = temp1_77
                        temp0_1807[0].o =
                            __vxorps_xmmdq_xmmdq_xmmdq(temp0_1807[0].o, temp0_1807[0].o)
                        float temp0_1822[0x4]
                        int32_t temp1_78
                        temp0_1822, temp1_78 =
                            _mm256_i64gather_ps(temp0_1807[0].o, *arg10[0].q, arg8[0].o)
                        temp0_1807[0].o = temp0_1822
                        arg8[0].o = temp1_78
                        zmm2 = _mm256_blendv_ps(arg10, _mm256_add_epi64(arg10, zmm0), zmm5)
                        var_6c0_3 = _mm256_maskstore_ps(arg7, 
                            _mm256_insertf128_ps(var_6e0_1, temp0_1807[0].o, 1))
                    
                    arg11 = _mm256_slli_epi32(temp0_1800, 0x1f)
                    uint32_t temp0_1828[0x8] = __vpbroadcastd_ymmqq_memd(0x2000000)
                    uint32_t temp0_1829[0x8] = _mm256_cmpeq_epi32(arg14 & temp0_1828, temp0_1828)
                    arg5 = temp0_1829 & temp0_1331
                    temp0_1829[0].o = _mm256_extracti128_si256(arg5, 1)
                    temp0_1829[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1829[0].o)
                    arg15[0].o = arg12[0].o
                    zmm5[0].o = temp0_1829[0].o & arg12[0].o
                    temp0_1829[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                    temp0_1829[0].o = __vpsraw_xmmdq_xmmdq_immb(temp0_1829[0].o, 0xf)
                    temp0_1829[0].o =
                        __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1829[0].o, temp0_1829[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(temp0_1829[0].o) != 0)
                        zmm0 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                        arg6 = __vpbroadcastq_ymmqq_memq(4)
                        zmm5 = _mm256_add_epi64(zmm1, arg6)
                        arg8 = data_143442920
                        uint32_t temp0_1841[0x8] = _mm256_permutevar8x32_epi32(arg8, zmm0)
                        zmm5 = _mm256_blendv_ps(zmm1, zmm5, temp0_1841)
                        arg9 = _mm256_add_epi64(zmm2, arg6)
                        arg10 = data_143442940
                        arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                        temp0_1800[0].o = zx.o(0)
                        arg8[0].o = zmm0[0].o
                        float temp0_1845[0x4]
                        int32_t temp1_79
                        temp0_1845, temp1_79 = _mm256_i64gather_ps(zx.o(0), *zmm1[0].q, arg8[0].o)
                        temp0_1800[0].o = temp0_1845
                        arg8[0].o = temp1_79
                        zmm1[0].o = arg7[0].o
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_1847[0x4]
                        int32_t temp1_80
                        temp0_1847, temp1_80 = _mm256_i64gather_ps(arg8[0].o, *zmm2[0].q, zmm1[0].o)
                        arg8[0].o = temp0_1847
                        zmm1[0].o = temp1_80
                        arg10 = _mm256_permutevar8x32_epi32(arg10, zmm0)
                        zmm2 = _mm256_blendv_ps(zmm2, arg9, arg10)
                        var_640_3 = _mm256_maskstore_ps(arg5, 
                            _mm256_insertf128_ps(temp0_1800, arg8[0].o, 1))
                        zmm1 = _mm256_blendv_ps(zmm5, _mm256_add_epi64(zmm5, arg6), temp0_1841)
                        arg14 = var_980_1
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_1855[0x4]
                        int32_t temp1_81
                        temp0_1855, temp1_81 = _mm256_i64gather_ps(arg8[0].o, *zmm5[0].q, zmm0[0].o)
                        arg8[0].o = temp0_1855
                        zmm0[0].o = temp1_81
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        float temp0_1857[0x4]
                        int32_t temp1_82
                        temp0_1857, temp1_82 = _mm256_i64gather_ps(zmm0[0].o, *zmm2[0].q, arg7[0].o)
                        zmm0[0].o = temp0_1857
                        arg7[0].o = temp1_82
                        zmm2 = _mm256_blendv_ps(zmm2, _mm256_add_epi64(zmm2, arg6), arg10)
                        var_6a0_3 =
                            _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(arg8, zmm0[0].o, 1))
                    
                    arg13 = var_880_4
                    arg12 = var_560_2
                    arg7 = _mm256_srai_epi32(arg11, 0x1f)
                    uint32_t temp0_1863[0x8] = __vpbroadcastd_ymmqq_memd(0x4000000)
                    uint32_t temp0_1864[0x8] = _mm256_cmpeq_epi32(arg14 & temp0_1863, temp0_1863)
                    arg5 = temp0_1864 & temp0_1331
                    temp0_1864[0].o = _mm256_extracti128_si256(arg5, 1)
                    temp0_1864[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1864[0].o)
                    zmm5[0].o = temp0_1864[0].o & arg15[0].o
                    temp0_1864[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                    temp0_1864[0].o = __vpsraw_xmmdq_xmmdq_immb(temp0_1864[0].o, 0xf)
                    temp0_1864[0].o =
                        __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1864[0].o, temp0_1864[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(temp0_1864[0].o) != 0)
                        zmm0 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                        arg6 = __vpbroadcastq_ymmqq_memq(4)
                        zmm5 = _mm256_add_epi64(zmm1, arg6)
                        arg8 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                        float temp0_1877[0x8] = _mm256_blendv_ps(zmm1, zmm5, arg8)
                        arg6 = _mm256_add_epi64(zmm2, arg6)
                        arg9 = data_143442940
                        arg8[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        zmm5[0].o = zmm0[0].o
                        float temp0_1881[0x4]
                        int32_t temp1_83
                        temp0_1881, temp1_83 =
                            _mm256_i64gather_ps(arg10[0].o, *zmm1[0].q, zmm5[0].o)
                        arg10[0].o = temp0_1881
                        zmm5[0].o = temp1_83
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        zmm5[0].o = arg8[0].o
                        float temp0_1883[0x4]
                        int32_t temp1_84
                        temp0_1883, temp1_84 = _mm256_i64gather_ps(zmm1[0].o, *zmm2[0].q, zmm5[0].o)
                        zmm1[0].o = temp0_1883
                        zmm5[0].o = temp1_84
                        zmm2 = _mm256_blendv_ps(zmm2, arg6, _mm256_permutevar8x32_epi32(arg9, zmm0))
                        zmm1 = _mm256_insertf128_ps(arg10, zmm1[0].o, 1)
                        var_620_3 = _mm256_maskstore_ps(arg5, zmm1)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_1889[0x4]
                        int32_t temp1_85
                        temp0_1889, temp1_85 =
                            _mm256_i64gather_ps(zmm1[0].o, *temp0_1877[0].q, zmm0[0].o)
                        zmm1[0].o = temp0_1889
                        zmm0[0].o = temp1_85
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        float temp0_1891[0x4]
                        int32_t temp1_86
                        temp0_1891, temp1_86 = _mm256_i64gather_ps(zmm0[0].o, *zmm2[0].q, arg8[0].o)
                        zmm0[0].o = temp0_1891
                        arg8[0].o = temp1_86
                        var_680_3 =
                            _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
                    
                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_4, var_920_2)
                    zmm2 = __vpbroadcastq_ymmqq_memq(4)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_760_1)
                    zmm0 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(zmm0, var_860_5), zmm2)
                    zmm1 = _mm256_add_epi64(zmm1, zmm2)
                    zmm2[0].o = arg7[0].o
                    arg5[0].o = zx.o(0)
                    uint32_t temp0_1901[0x4]
                    int32_t temp1_87
                    temp0_1901, temp1_87 =
                        _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm1[0].q), zmm2[0].o)
                    arg5[0].o = temp0_1901
                    zmm2[0].o = temp1_87
                    zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                    zmm2[0].o = zx.o(0)
                    uint32_t temp0_1903[0x4]
                    int32_t temp1_88
                    temp0_1903, temp1_88 =
                        _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm0[0].q), zmm1[0].o)
                    zmm2[0].o = temp0_1903
                    zmm1[0].o = temp1_88
                    zmm0 = _mm256_inserti128_si256(arg5, zmm2[0].o, 1)
                    zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                    zmm2 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg6 = var_6a0_3
                    arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_6c0_3, 
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                zmm0 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f)), 
                        var_660_3)
                    uint32_t temp0_1915[0x8] = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, temp0_1915))
                    arg8 = _mm256_broadcast_ss(1023f)
                    zmm2 = _mm256_div_ps(zmm2, arg8)
                    zmm0 =
                        _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, temp0_1915)), arg8)
                    zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg6, var_640_3)
                    zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, var_680_3, var_620_3)
                    var_5e0.32 = _mm256_maskstore_ps(arg7, arg5)
                    var_5c0.32 = _mm256_maskstore_ps(arg7, zmm2)
                    var_5a0.32 = _mm256_maskstore_ps(arg7, zmm0)
                    zmm2 = temp0_1331
                    zmm5 = _mm256_cmpeq_epi32(var_680_3, var_680_3)
                
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_700[0].o)
                zmm2[0].o = zmm0[0].o ^ var_840_1
                zmm0[0].o = zmm2[0].o & arg15[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    zmm0 = __vpbroadcastd_ymmqq_memd(2)
                    arg8 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, temp0_1306)
                    arg6[0].o = _mm256_extracti128_si256(arg8, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
                    zmm1[0].o = zmm0[0].o & arg15[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        var_540_1[0].o = arg6[0].o
                        arg7 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f), 0x1f)
                        arg5 = _mm256_srai_epi32(_mm256_slli_epi32(var_7e0_5, 0x1f), 0x1f)
                        zmm5 = arg5 & arg7
                        int32_t temp0_1947 = _mm256_movemask_ps(zmm5)
                        arg13[0].o = arg15[0].o
                        
                        if (temp0_1947 != 0)
                            zmm0 = __vpbroadcastq_ymmqq_memq(2)
                            arg10 = var_9a0_4
                            arg6 = _mm256_add_epi64(arg10, zmm0)
                            arg11 = var_9c0_2
                            zmm0 = _mm256_add_epi64(arg11, zmm0)
                            arg9 = _mm256_permutevar8x32_ps(data_143442920, zmm5)
                            var_9c0_2 = _mm256_blendv_ps(arg11, zmm0, arg9)
                            zmm0 = _mm256_permutevar8x32_ps(data_143442940, zmm5)
                            var_9a0_4 = _mm256_blendv_ps(arg10, arg6, zmm0)
                            arg6 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                            zmm5 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_4, var_920_2)
                            arg10 = __vpbroadcastq_ymmqq_memq(4)
                            zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_760_1)
                            arg6 =
                                _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg6, var_860_5), arg10)
                            zmm5 = _mm256_add_epi64(zmm5, arg10)
                            arg10[0].o = zx.o(0)
                            zmm5 = _mm256_blendv_ps(arg10, zmm5, arg9)
                            zmm0 = _mm256_blendv_ps(arg10, arg6, zmm0)
                            int64_t r8_5 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                            int64_t rcx_28 = zmm5[0].q
                            arg6[0].o = _mm256_extracti128_si256(zmm5, 1)
                            int64_t r9_1 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            int64_t rbx_13 = arg6[0].q
                            int64_t rdi_13 = zmm0[0].q
                            int64_t rsi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rax_311 = zmm0[0].q
                            int64_t rdx_10 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = zx.o(*(r12 + rcx_28))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r8_5), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rbx_13), 2)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r9_1), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rdi_13), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rsi_13), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rax_311), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rdx_10), 7)
                            uint32_t temp0_1973[0x8] = _mm256_cvtepu16_epi32(zmm0[0].o)
                            arg6 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                            zmm5 = _mm256_cvtepi32_ps(_mm256_add_epi32(temp0_1973, arg6))
                        
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        var_5e0.32 = _mm256_maskstore_ps(arg7, _mm256_blendv_ps(arg10, zmm5, arg5))
                        uint32_t temp0_1980[0x8] = __vpbroadcastd_ymmqq_memd(0x2000000)
                        arg15 = arg14 & temp0_1980
                        uint32_t temp0_1981[0x8] = _mm256_cmpeq_epi32(arg15, temp0_1980)
                        arg5[0].o = _mm256_extracti128_si256(temp0_1981, 1)
                        temp0_1981[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1981[0].o, arg5[0].o)
                        arg5[0].o = zmm1[0].o & temp0_1981[0].o
                        temp0_1981[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        temp0_1981[0].o = __vpsraw_xmmdq_xmmdq_immb(temp0_1981[0].o, 0xf)
                        temp0_1981[0].o =
                            __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1981[0].o, temp0_1981[0].o)
                        char temp0_1987 = __vpmovmskb_gpr32d_xmmdq(temp0_1981[0].o)
                        
                        if (temp0_1987 == 0)
                            zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                            arg6[0].o = var_540_1[0].o
                        else
                            if ((temp0_1987 & 1) == 0)
                                if ((temp0_1987 & 2) != 0)
                                    goto label_1401aac05
                                
                                goto label_1401a9e04
                            
                            arg12[0].o = __vpbroadcastw_xmmdq_memw(*var_9c0_2[0].q)
                            
                            if ((temp0_1987 & 2) != 0)
                            label_1401aac05:
                                uint16_t* rax_335 = __vpextrq_gpr64q_xmmdq_immb(var_9c0_2[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_335, 1)
                                
                                if ((temp0_1987 & 4) == 0)
                                    goto label_1401a9e0d
                                
                                goto label_1401aac1e
                            
                        label_1401a9e04:
                            
                            if ((temp0_1987 & 4) == 0)
                            label_1401a9e0d:
                                
                                if ((temp0_1987 & 8) != 0)
                                    goto label_1401aac3c
                                
                                goto label_1401a9e16
                            
                        label_1401aac1e:
                            var_9c0_2[0].o = _mm256_extracti128_si256(var_9c0_2, 1)
                            arg12[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *var_9c0_2[0].q, 2)
                            
                            if ((temp0_1987 & 8) != 0)
                            label_1401aac3c:
                                var_9c0_2[0].o = _mm256_extracti128_si256(var_9c0_2, 1)
                                uint16_t* rax_337 = __vpextrq_gpr64q_xmmdq_immb(var_9c0_2[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_337, 3)
                                arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                                
                                if ((temp0_1987 & 0x10) == 0)
                                    goto label_1401a9e24
                                
                                goto label_1401aac66
                            
                        label_1401a9e16:
                            arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                            uint16_t* rax_312
                            
                            if ((temp0_1987 & 0x10) != 0)
                            label_1401aac66:
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *var_9a0_4[0].q, 4)
                                arg5 = _mm256_slli_epi32(arg5, 0x1f)
                                
                                if ((temp0_1987 & 0x20) != 0)
                                    rax_312 = __vpextrq_gpr64q_xmmdq_immb(var_9a0_4[0].o, 1)
                                    arg12[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_312, 5)
                            else
                            label_1401a9e24:
                                arg5 = _mm256_slli_epi32(arg5, 0x1f)
                                
                                if ((temp0_1987 & 0x20) != 0)
                                    rax_312 = __vpextrq_gpr64q_xmmdq_immb(var_9a0_4[0].o, 1)
                                    arg12[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_312, 5)
                            arg5 = _mm256_srai_epi32(arg5, 0x1f)
                            zmm5 = __vpbroadcastq_ymmqq_memq(2)
                            arg11 = data_143442920
                            arg10 = data_143442940
                            
                            if ((temp0_1987 & 0x40) != 0)
                                var_9a0_4[0].o = _mm256_extracti128_si256(var_9a0_4, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *var_9a0_4[0].q, 6)
                            
                            arg9 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_9a0_4)
                            zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_9c0_2)
                            arg11 = _mm256_permutevar8x32_epi32(arg11, arg5)
                            arg5 = _mm256_permutevar8x32_epi32(arg10, arg5)
                            
                            if (temp0_1987 s< 0)
                                var_9a0_4[0].o = _mm256_extracti128_si256(var_9a0_4, 1)
                                uint16_t* rax_314 = __vpextrq_gpr64q_xmmdq_immb(var_9a0_4[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_314, 7)
                            
                            arg6[0].o = var_540_1[0].o
                            arg10[0].o = zx.o(0)
                            var_9c0_2 = _mm256_blendv_ps(var_9c0_2, zmm5, arg11)
                            var_9a0_4 = _mm256_blendv_ps(var_9a0_4, arg9, arg5)
                            arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                                _mm256_cvtepu16_epi32(arg12[0].o), 
                                __vpbroadcastd_ymmqq_memd(0xffffff01)))
                            zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                        
                        var_5c0.32 = _mm256_maskstore_ps(arg7, 
                            _mm256_cmpeq_epi32(arg15, arg10) & not.32(arg5))
                        uint32_t temp0_2011[0x8] = __vpbroadcastd_ymmqq_memd(0x4000000)
                        arg12 = arg14 & temp0_2011
                        zmm0 = _mm256_cmpeq_epi32(arg12, temp0_2011)
                        arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        zmm0[0].o &= zmm1[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_2018 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_2018 == 0)
                            arg15[0].o = arg13[0].o
                            arg13 = var_880_4
                        else
                            arg15[0].o = arg13[0].o
                            
                            if ((temp0_2018 & 1) == 0)
                                arg13 = var_880_4
                                
                                if ((temp0_2018 & 2) != 0)
                                    goto label_1401aaca4
                                
                                goto label_1401a9f6f
                            
                            zmm1[0].o = __vpbroadcastw_xmmdq_memw(*var_9c0_2[0].q)
                            arg13 = var_880_4
                            
                            if ((temp0_2018 & 2) != 0)
                            label_1401aaca4:
                                int64_t rax_340 = __vpextrq_gpr64q_xmmdq_immb(var_9c0_2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_340, 1)
                                
                                if ((temp0_2018 & 4) == 0)
                                    goto label_1401a9f78
                                
                                goto label_1401aacbd
                            
                        label_1401a9f6f:
                            
                            if ((temp0_2018 & 4) == 0)
                            label_1401a9f78:
                                
                                if ((temp0_2018 & 8) != 0)
                                    goto label_1401aacdb
                                
                                goto label_1401a9f81
                            
                        label_1401aacbd:
                            var_9c0_2[0].o = _mm256_extracti128_si256(var_9c0_2, 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *var_9c0_2[0].q, 2)
                            
                            if ((temp0_2018 & 8) != 0)
                            label_1401aacdb:
                                var_9c0_2[0].o = _mm256_extracti128_si256(var_9c0_2, 1)
                                int64_t rax_342 = __vpextrq_gpr64q_xmmdq_immb(var_9c0_2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_342, 3)
                                
                                if ((temp0_2018 & 0x10) == 0)
                                    goto label_1401a9f8a
                                
                                goto label_1401aad00
                            
                        label_1401a9f81:
                            
                            if ((temp0_2018 & 0x10) == 0)
                            label_1401a9f8a:
                                
                                if ((temp0_2018 & 0x20) != 0)
                                    goto label_1401aad14
                                
                                goto label_1401a9f93
                            
                        label_1401aad00:
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *var_9a0_4[0].q, 4)
                            
                            if ((temp0_2018 & 0x20) != 0)
                            label_1401aad14:
                                int64_t rax_344 = __vpextrq_gpr64q_xmmdq_immb(var_9a0_4[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_344, 5)
                                
                                if ((temp0_2018 & 0x40) == 0)
                                    goto label_1401a9f9c
                                
                                goto label_1401aad2e
                            
                        label_1401a9f93:
                            
                            if ((temp0_2018 & 0x40) != 0)
                            label_1401aad2e:
                                var_9a0_4[0].o = _mm256_extracti128_si256(var_9a0_4, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *var_9a0_4[0].q, 6)
                                
                                if (temp0_2018 s< 0)
                                label_1401aad4c:
                                    var_9a0_4[0].o = _mm256_extracti128_si256(var_9a0_4, 1)
                                    int64_t rax_346 = __vpextrq_gpr64q_xmmdq_immb(var_9a0_4[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_346, 7)
                            else
                            label_1401a9f9c:
                                
                                if (temp0_2018 s< 0)
                                    goto label_1401aad4c
                            
                            zmm0 = _mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                __vpbroadcastd_ymmqq_memd(0xffffff01))
                            zmm1 = _mm256_cvtepi32_ps(zmm0)
                        
                        zmm0[0].o = zx.o(0)
                        zmm0 = _mm256_cmpeq_epi32(arg12, zmm0) & not.32(zmm1)
                        var_5a0.32 = _mm256_maskstore_ps(arg7, zmm0)
                        arg12 = var_560_2
                    
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
                    zmm0[0].o ^= zmm2[0].o
                    zmm1[0].o = zmm0[0].o & arg15[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0 = __vpbroadcastd_ymmqq_memd(6)
                        zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, temp0_1306)
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
                            var_5e0.32 = _mm256_maskstore_ps(zmm0, arg5)
                            var_5c0.32 = _mm256_maskstore_ps(zmm0, arg5)
                            var_5a0.32 = _mm256_maskstore_ps(zmm0, arg5)
                        
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
                            var_5e0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_5c0.32 = _mm256_maskstore_ps(zmm0, zmm1)
                            var_5a0.32 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm2 = var_900_4
            zmm0 = _mm256_cmpeq_epi32(arg12, zmm2) ^ zmm5
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            arg15[0].o &= zmm0[0].o
            zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
            zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                arg11 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_memdq(var_960_5[0].o, var_520[0].o)
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm2, var_940_3)
                zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                arg5 = _mm256_cvtepi32_epi64(zmm2[0].o)
                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                uint32_t var_9a0_5[0x8] = zmm0
                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_8e0_4)
                float var_940_4[0x8] = arg5
                float var_960_6[0x8] = __vpaddq_ymmqq_ymmqq_memqq(
                    __vpaddq_ymmqq_ymmqq_memqq(arg5, var_8c0_3), var_820_2)
                arg12 = var_6e0_1
                zmm0 = _mm256_add_epi64(zmm2, arg12)
                uint32_t var_9c0_3[0x8] = zmm0
                zmm1[0].o &= arg15[0].o
                zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                float var_500[0x8]
                float var_4e0[0x8]
                float var_4c0[0x8]
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                    zmm2 = arg14 & __vpbroadcastd_ymmqq_memd(0x7000000)
                    arg5[0].o = zx.o(0)
                    uint32_t temp0_2080[0x8] = _mm256_cmpeq_epi32(zmm2, arg5)
                    arg5[0].o = _mm256_extracti128_si256(temp0_2080, 1)
                    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_2080[0].o, arg5[0].o)
                    arg5[0].o &= zmm1[0].o
                    arg6[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                    arg6[0].o = __vpsraw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                    arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
                        arg5 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                        arg6 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                        zmm0 = var_8e0_4
                        zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_920_2)
                        arg9 = __vpbroadcastq_ymmqq_memq(4)
                        zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_9a0_5)
                        arg6 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_940_4)
                        arg10 = _mm256_add_epi64(arg6, arg9)
                        arg9 = _mm256_add_epi64(zmm5, arg9)
                        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                        arg7[0].o = arg5[0].o
                        arg14[0].o = zx.o(0)
                        float temp0_2098[0x4]
                        int32_t temp1_89
                        temp0_2098, temp1_89 =
                            _mm256_i64gather_ps(arg14[0].o, *(r12 + arg9[0].q), arg7[0].o)
                        arg14[0].o = temp0_2098
                        arg7[0].o = temp1_89
                        arg7[0].o = zmm0[0].o
                        arg8[0].o = zx.o(0)
                        float temp0_2099[0x4]
                        int32_t temp1_90
                        temp0_2099, temp1_90 =
                            _mm256_i64gather_ps(arg8[0].o, *(r12 + arg10[0].q), arg7[0].o)
                        arg8[0].o = temp0_2099
                        arg7[0].o = temp1_90
                        arg7 = __vpbroadcastq_ymmqq_memq(8)
                        arg9 = _mm256_add_epi64(arg6, arg7)
                        arg10 = _mm256_add_epi64(zmm5, arg7)
                        arg7[0].o = arg5[0].o
                        arg12[0].o = zx.o(0)
                        float temp0_2103[0x4]
                        int32_t temp1_91
                        temp0_2103, temp1_91 =
                            _mm256_i64gather_ps(zx.o(0), *(r12 + arg10[0].q), arg7[0].o)
                        arg12[0].o = temp0_2103
                        arg7[0].o = temp1_91
                        arg7[0].o = zmm0[0].o
                        zmm2[0].o = zx.o(0)
                        float temp0_2104[0x4]
                        int32_t temp1_92
                        temp0_2104, temp1_92 =
                            _mm256_i64gather_ps(zx.o(0), *(r12 + arg9[0].q), arg7[0].o)
                        zmm2[0].o = temp0_2104
                        arg7[0].o = temp1_92
                        arg7 = __vpbroadcastq_ymmqq_memq(0xc)
                        arg9 = _mm256_add_epi64(zmm5, arg7)
                        zmm5[0].o = arg5[0].o
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        float temp0_2108[0x4]
                        int32_t temp1_93
                        temp0_2108, temp1_93 =
                            _mm256_i64gather_ps(arg10[0].o, *(r12 + arg9[0].q), zmm5[0].o)
                        arg10[0].o = temp0_2108
                        zmm5[0].o = temp1_93
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        arg6 = _mm256_add_epi64(arg6, arg7)
                        float temp0_2111[0x4]
                        int32_t temp1_94
                        temp0_2111, temp1_94 =
                            _mm256_i64gather_ps(zmm5[0].o, *(r12 + arg6[0].q), zmm0[0].o)
                        zmm5[0].o = temp0_2111
                        zmm0[0].o = temp1_94
                        zmm0 = _mm256_insertf128_ps(arg14, arg8[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                        arg12 = var_6e0_1
                        arg6 = _mm256_insertf128_ps(arg10, zmm5[0].o, 1)
                        var_500 = _mm256_maskstore_ps(arg5, zmm0)
                        var_4e0 = _mm256_maskstore_ps(arg5, zmm2)
                        var_4c0 = _mm256_maskstore_ps(arg5, arg6)
                    
                    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                    zmm2 = temp0_2080 ^ arg5
                    arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
                    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
                    zmm2[0].o &= zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    arg13 = var_880_4
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        arg9 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f), 0x1f)
                        arg6 = _mm256_srai_epi32(_mm256_slli_epi32(var_7e0_5, 0x1f), 0x1f)
                        arg5 = arg6 & arg9
                        
                        if (_mm256_movemask_ps(arg5) == 0)
                            arg10 = var_9c0_3
                            arg14 = var_960_6
                        else
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            zmm1 = var_9c0_3
                            arg10 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, zmm0), 
                                _mm256_permutevar8x32_ps(data_143442920, arg5))
                            zmm5 = _mm256_permutevar8x32_ps(data_143442940, arg5)
                            arg7 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                            arg8 = __vpaddq_ymmqq_ymmqq_memqq(
                                __vpaddq_ymmqq_ymmqq_memqq(var_8e0_4, var_920_2), var_9a0_5)
                            arg7 =
                                _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg7, var_940_4), zmm0)
                            arg8 = _mm256_add_epi64(arg8, zmm0)
                            var_8e0_4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg12[0].o = zx.o(0)
                            float temp0_2143[0x4]
                            int32_t temp1_95
                            temp0_2143, temp1_95 =
                                _mm256_i64gather_ps(arg12[0].o, *(r12 + arg8[0].q), arg5[0].o)
                            arg12[0].o = temp0_2143
                            arg5[0].o = temp1_95
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_2145[0x4]
                            int32_t temp1_96
                            temp0_2145, temp1_96 =
                                _mm256_i64gather_ps(arg5[0].o, *(r12 + arg7[0].q), var_8e0_4[0].o)
                            arg5[0].o = temp0_2145
                            var_8e0_4[0].o = temp1_96
                            zmm1 = var_960_6
                            arg14 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, zmm0), zmm5)
                            zmm5 = _mm256_insertf128_ps(arg12, arg5[0].o, 1)
                        
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        var_500 = _mm256_maskstore_ps(arg9, _mm256_blendv_ps(arg5, zmm5, arg6))
                        uint32_t temp0_2152[0x8] = __vpbroadcastd_ymmqq_memd(0x2000000)
                        arg6 = temp0_2152 & var_980_1
                        uint32_t temp0_2153[0x8] = _mm256_cmpeq_epi32(arg6, temp0_2152)
                        zmm1[0].o = _mm256_extracti128_si256(temp0_2153, 1)
                        temp0_2153[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_2153[0].o, zmm1[0].o)
                        zmm5[0].o = zmm2[0].o & temp0_2153[0].o
                        temp0_2153[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                        temp0_2153[0].o = __vpsraw_xmmdq_xmmdq_immb(temp0_2153[0].o, 0xf)
                        temp0_2153[0].o =
                            __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_2153[0].o, temp0_2153[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(temp0_2153[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                            zmm1 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                            uint32_t temp0_2164[0x8] =
                                _mm256_permutevar8x32_epi32(data_143442940, zmm0)
                            arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            float temp0_2167[0x4]
                            int32_t temp1_97
                            temp0_2167, temp1_97 =
                                _mm256_i64gather_ps(arg8[0].o, *arg10[0].q, zmm0[0].o)
                            arg8[0].o = temp0_2167
                            zmm0[0].o = temp1_97
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            arg10 = _mm256_blendv_ps(arg10, _mm256_add_epi64(arg10, zmm0), zmm1)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            float temp0_2172[0x4]
                            int32_t temp1_98
                            temp0_2172, temp1_98 =
                                _mm256_i64gather_ps(zmm1[0].o, *arg14[0].q, arg7[0].o)
                            zmm1[0].o = temp0_2172
                            arg7[0].o = temp1_98
                            arg14 =
                                _mm256_blendv_ps(arg14, _mm256_add_epi64(arg14, zmm0), temp0_2164)
                            zmm5 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                        
                        arg12 = var_6e0_1
                        var_4e0 =
                            _mm256_maskstore_ps(arg9, _mm256_cmpeq_epi32(arg6, arg5) & not.32(zmm5))
                        uint32_t temp0_2178[0x8] = __vpbroadcastd_ymmqq_memd(0x4000000)
                        arg5 = temp0_2178 & var_980_1
                        zmm0 = _mm256_cmpeq_epi32(arg5, temp0_2178)
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
                            float temp0_2190[0x4]
                            int32_t temp1_99
                            temp0_2190, temp1_99 =
                                _mm256_i64gather_ps(zx.o(0), *arg10[0].q, zmm0[0].o)
                            zmm2[0].o = temp0_2190
                            zmm0[0].o = temp1_99
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_2192[0x4]
                            int32_t temp1_100
                            temp0_2192, temp1_100 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg14[0].q, zmm1[0].o)
                            zmm0[0].o = temp0_2192
                            zmm1[0].o = temp1_100
                            zmm2 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                        
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        zmm0 = _mm256_cmpeq_epi32(arg5, zmm0) & not.32(zmm2)
                        var_4c0 = _mm256_maskstore_ps(arg9, zmm0)
                
                arg14 = _mm256_srai_epi32(arg11, 0x1f)
                zmm1[0].o = arg15[0].o & var_840_1
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    zmm2 = temp0_1331
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_700[0].o)
                    zmm1[0].o = arg15[0].o & zmm0[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        arg11 = _mm256_cvtepu16_epi32(zmm1[0].o)
                        zmm0[0].o = zx.o(0)
                        uint32_t var_620_4[0x8] = zmm0
                        uint32_t var_640_4[0x8] = zmm0
                        uint32_t var_660_4[0x8] = zmm0
                        uint32_t var_680_4[0x8] = zmm0
                        uint32_t var_6a0_4[0x8] = zmm0
                        uint32_t var_6c0_4[0x8] = zmm0
                        zmm2 &= _mm256_srai_epi32(_mm256_slli_epi32(var_7e0_5, 0x1f), 0x1f)
                        arg5 = zmm2 & arg14
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            arg6 = _mm256_add_epi64(arg12, zmm0)
                            zmm5 = _mm256_permutevar8x32_ps(data_143442920, arg5)
                            arg6 = _mm256_blendv_ps(arg12, arg6, zmm5)
                            arg7 = arg12
                            arg13 = var_820_2
                            float temp0_2215[0x8] = _mm256_add_epi64(arg13, zmm0)
                            arg9 = data_143442940
                            arg8[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            zmm1[0].o = arg5[0].o
                            float temp0_2218[0x4]
                            int32_t temp1_101
                            temp0_2218, temp1_101 =
                                _mm256_i64gather_ps(arg10[0].o, *arg7[0].q, zmm1[0].o)
                            arg10[0].o = temp0_2218
                            zmm1[0].o = temp1_101
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            arg7[0].o = arg8[0].o
                            float temp0_2220[0x4]
                            int32_t temp1_102
                            temp0_2220, temp1_102 =
                                _mm256_i64gather_ps(zmm1[0].o, *arg13[0].q, arg7[0].o)
                            zmm1[0].o = temp0_2220
                            arg7[0].o = temp1_102
                            arg7 = _mm256_permutevar8x32_ps(arg9, arg5)
                            arg9 = _mm256_blendv_ps(arg13, temp0_2215, arg7)
                            var_660_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(arg10, zmm1[0].o, 1))
                            zmm1 = _mm256_add_epi64(arg6, zmm0)
                            arg12 = _mm256_blendv_ps(arg6, zmm1, zmm5)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            float temp0_2228[0x4]
                            int32_t temp1_103
                            temp0_2228, temp1_103 =
                                _mm256_i64gather_ps(zmm1[0].o, *arg6[0].q, arg5[0].o)
                            zmm1[0].o = temp0_2228
                            arg5[0].o = temp1_103
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_2230[0x4]
                            int32_t temp1_104
                            temp0_2230, temp1_104 =
                                _mm256_i64gather_ps(arg5[0].o, *arg9[0].q, arg8[0].o)
                            arg5[0].o = temp0_2230
                            arg8[0].o = temp1_104
                            var_820_2 = _mm256_blendv_ps(arg9, _mm256_add_epi64(arg9, zmm0), arg7)
                            var_6c0_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm1, arg5[0].o, 1))
                        
                        arg10 = _mm256_slli_epi32(arg11, 0x1f)
                        uint32_t temp0_2236[0x8] = __vpbroadcastd_ymmqq_memd(0x2000000)
                        uint32_t temp0_2237[0x8] =
                            _mm256_cmpeq_epi32(temp0_2236 & var_980_1, temp0_2236)
                        zmm2 = temp0_2237 & temp0_1331
                        temp0_2237[0].o = _mm256_extracti128_si256(zmm2, 1)
                        temp0_2237[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_2237[0].o)
                        arg5[0].o = arg15[0].o & temp0_2237[0].o
                        temp0_2237[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        temp0_2237[0].o = __vpsraw_xmmdq_xmmdq_immb(temp0_2237[0].o, 0xf)
                        temp0_2237[0].o =
                            __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_2237[0].o, temp0_2237[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(temp0_2237[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                            arg5 = __vpbroadcastq_ymmqq_memq(4)
                            arg6 = _mm256_add_epi64(arg12, arg5)
                            uint32_t temp0_2249[0x8] =
                                _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                            arg6 = _mm256_blendv_ps(arg12, arg6, temp0_2249)
                            arg7 = arg12
                            arg13 = var_820_2
                            float temp0_2251[0x8] = _mm256_add_epi64(arg13, arg5)
                            arg9 = data_143442940
                            arg8[0].o = _mm256_extracti128_si256(zmm0, 1)
                            zmm1[0].o = zmm0[0].o
                            arg11[0].o = zx.o(0)
                            float temp0_2253[0x4]
                            int32_t temp1_105
                            temp0_2253, temp1_105 =
                                _mm256_i64gather_ps(zx.o(0), *arg7[0].q, zmm1[0].o)
                            arg11[0].o = temp0_2253
                            zmm1[0].o = temp1_105
                            zmm1[0].o = arg8[0].o
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            float temp0_2255[0x4]
                            int32_t temp1_106
                            temp0_2255, temp1_106 =
                                _mm256_i64gather_ps(arg7[0].o, *arg13[0].q, zmm1[0].o)
                            arg7[0].o = temp0_2255
                            zmm1[0].o = temp1_106
                            zmm1 = _mm256_permutevar8x32_epi32(arg9, zmm0)
                            arg9 = _mm256_blendv_ps(arg13, temp0_2251, zmm1)
                            var_640_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(arg11, arg7[0].o, 1))
                            arg7 = _mm256_add_epi64(arg6, arg5)
                            arg12 = _mm256_blendv_ps(arg6, arg7, temp0_2249)
                            temp0_2249[0].o =
                                __vxorps_xmmdq_xmmdq_xmmdq(temp0_2249[0].o, temp0_2249[0].o)
                            float temp0_2263[0x4]
                            int32_t temp1_107
                            temp0_2263, temp1_107 =
                                _mm256_i64gather_ps(temp0_2249[0].o, *arg6[0].q, zmm0[0].o)
                            temp0_2249[0].o = temp0_2263
                            zmm0[0].o = temp1_107
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_2265[0x4]
                            int32_t temp1_108
                            temp0_2265, temp1_108 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg9[0].q, arg8[0].o)
                            zmm0[0].o = temp0_2265
                            arg8[0].o = temp1_108
                            arg5 = _mm256_add_epi64(arg9, arg5)
                            var_820_2 = _mm256_blendv_ps(arg9, arg5, zmm1)
                            var_6a0_4 = _mm256_maskstore_ps(zmm2, 
                                _mm256_insertf128_ps(temp0_2249, zmm0[0].o, 1))
                        
                        arg13 = var_880_4
                        zmm1 = _mm256_srai_epi32(arg10, 0x1f)
                        uint32_t temp0_2271[0x8] = __vpbroadcastd_ymmqq_memd(0x4000000)
                        uint32_t temp0_2272[0x8] =
                            _mm256_cmpeq_epi32(temp0_2271 & var_980_1, temp0_2271)
                        zmm2 = temp0_2272 & temp0_1331
                        temp0_2272[0].o = _mm256_extracti128_si256(zmm2, 1)
                        temp0_2272[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_2272[0].o)
                        arg5[0].o = arg15[0].o & temp0_2272[0].o
                        temp0_2272[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        temp0_2272[0].o = __vpsraw_xmmdq_xmmdq_immb(temp0_2272[0].o, 0xf)
                        temp0_2272[0].o =
                            __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_2272[0].o, temp0_2272[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(temp0_2272[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                            arg5 = __vpbroadcastq_ymmqq_memq(4)
                            arg6 = _mm256_add_epi64(arg12, arg5)
                            uint32_t temp0_2284[0x8] =
                                _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                            arg6 = _mm256_blendv_ps(arg12, arg6, temp0_2284)
                            arg5 = _mm256_add_epi64(var_820_2, arg5)
                            arg10 = data_143442940
                            arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg8[0].o = zmm0[0].o
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            float temp0_2289[0x4]
                            int32_t temp1_109
                            temp0_2289, temp1_109 =
                                _mm256_i64gather_ps(arg9[0].o, *arg12[0].q, arg8[0].o)
                            arg9[0].o = temp0_2289
                            arg8[0].o = temp1_109
                            arg8[0].o = arg7[0].o
                            temp0_2284[0].o =
                                __vxorps_xmmdq_xmmdq_xmmdq(temp0_2284[0].o, temp0_2284[0].o)
                            float temp0_2291[0x4]
                            int32_t temp1_110
                            temp0_2291, temp1_110 =
                                _mm256_i64gather_ps(temp0_2284[0].o, *var_820_2[0].q, arg8[0].o)
                            temp0_2284[0].o = temp0_2291
                            arg8[0].o = temp1_110
                            float temp0_2293[0x8] = _mm256_blendv_ps(var_820_2, arg5, 
                                _mm256_permutevar8x32_epi32(arg10, zmm0))
                            zmm5 = _mm256_insertf128_ps(arg9, temp0_2284[0].o, 1)
                            var_620_4 = _mm256_maskstore_ps(zmm2, zmm5)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            float temp0_2297[0x4]
                            int32_t temp1_111
                            temp0_2297, temp1_111 =
                                _mm256_i64gather_ps(zmm5[0].o, *arg6[0].q, zmm0[0].o)
                            zmm5[0].o = temp0_2297
                            zmm0[0].o = temp1_111
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_2299[0x4]
                            int32_t temp1_112
                            temp0_2299, temp1_112 =
                                _mm256_i64gather_ps(zmm0[0].o, *temp0_2293[0].q, arg7[0].o)
                            zmm0[0].o = temp0_2299
                            arg7[0].o = temp1_112
                            var_680_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm5, zmm0[0].o, 1))
                        
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                        zmm2 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_4, var_920_2)
                        arg5 = __vpbroadcastq_ymmqq_memq(4)
                        zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_9a0_5)
                        zmm0 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(zmm0, var_940_4), arg5)
                        zmm2 = _mm256_add_epi64(zmm2, arg5)
                        arg5[0].o = zx.o(0)
                        arg6[0].o = zmm1[0].o
                        uint32_t temp0_2309[0x4]
                        int32_t temp1_113
                        temp0_2309, temp1_113 =
                            _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm2[0].q), arg6[0].o)
                        arg5[0].o = temp0_2309
                        arg6[0].o = temp1_113
                        zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg6[0].o = zx.o(0)
                        uint32_t temp0_2311[0x4]
                        int32_t temp1_114
                        temp0_2311, temp1_114 =
                            _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm0[0].q), zmm2[0].o)
                        arg6[0].o = temp0_2311
                        zmm2[0].o = temp1_114
                        zmm0 = _mm256_inserti128_si256(arg5, arg6[0].o, 1)
                        zmm2 = _mm256_srli_epi32(zmm0, 0x15)
                        arg5 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm5 = var_6a0_4
                        arg7 = var_680_4
                        float temp0_2322[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(var_6c0_4, 
                            _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    zmm0 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                    __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                _mm256_broadcast_ss(511f)), 
                            var_660_4)
                        uint32_t temp0_2323[0x8] = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        float temp0_2325[0x8] =
                            _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, temp0_2323))
                        arg8 = _mm256_broadcast_ss(1023f)
                        float temp0_2327[0x8] = _mm256_div_ps(temp0_2325, arg8)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, temp0_2323)), arg8)
                        arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_2327, zmm5, var_640_4)
                        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, arg7, var_620_4)
                        var_500 = _mm256_maskstore_ps(zmm1, temp0_2322)
                        var_4e0 = _mm256_maskstore_ps(zmm1, arg5)
                        var_4c0 = _mm256_maskstore_ps(zmm1, zmm0)
                        zmm2 = temp0_1331
                    
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_700[0].o)
                    arg10[0].o = zmm0[0].o ^ var_840_1
                    zmm0[0].o = arg15[0].o & arg10[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0 = __vpbroadcastd_ymmqq_memd(2)
                        arg9 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, temp0_1306)
                        arg5[0].o = _mm256_extracti128_si256(arg9, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                        zmm1[0].o = arg15[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f), 0x1f)
                            int32_t temp0_2353[0x8] =
                                _mm256_srai_epi32(_mm256_slli_epi32(var_7e0_5, 0x1f), 0x1f)
                            arg6 = temp0_2353 & zmm0
                            bool cond:16_1 = _mm256_movemask_ps(arg6) == 0
                            temp0_1331[0].o = arg5[0].o
                            float var_820_3[0x8] = arg9
                            
                            if (cond:16_1)
                                arg12 = var_960_6
                            else
                                zmm5 = __vpbroadcastq_ymmqq_memq(2)
                                arg7 = _mm256_add_epi64(var_960_6, zmm5)
                                arg9 = var_9c0_3
                                zmm5 = _mm256_add_epi64(arg9, zmm5)
                                arg8 = _mm256_permutevar8x32_ps(data_143442920, arg6)
                                var_9c0_3 = _mm256_blendv_ps(arg9, zmm5, arg8)
                                float temp0_2360[0x8] =
                                    _mm256_permutevar8x32_ps(data_143442940, arg6)
                                arg12 = _mm256_blendv_ps(var_960_6, arg7, temp0_2360)
                                zmm5 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                                arg7 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_4, var_920_2)
                                arg9 = __vpbroadcastq_ymmqq_memq(4)
                                arg7 = __vpaddq_ymmqq_ymmqq_memqq(arg7, var_9a0_5)
                                zmm5 = _mm256_add_epi64(
                                    __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_940_4), arg9)
                                arg7 = _mm256_add_epi64(arg7, arg9)
                                arg9[0].o = zx.o(0)
                                arg7 = _mm256_blendv_ps(arg9, arg7, arg8)
                                float temp0_2370[0x8] = _mm256_blendv_ps(arg9, zmm5, temp0_2360)
                                int64_t r8_6 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                int64_t rcx_30 = arg7[0].q
                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                int64_t r9_2 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                int64_t rbx_16 = zmm5[0].q
                                int64_t rdi_14 = temp0_2370[0].q
                                int64_t rsi_14 = __vpextrq_gpr64q_xmmdq_immb(temp0_2370[0].o, 1)
                                temp0_2370[0].o = _mm256_extracti128_si256(temp0_2370, 1)
                                int64_t rax_333 = temp0_2370[0].q
                                int64_t rdx_13 = __vpextrq_gpr64q_xmmdq_immb(temp0_2370[0].o, 1)
                                temp0_2370[0].o = zx.o(*(r12 + rcx_30))
                                temp0_2370[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2370[0].o, 
                                    *(r12 + r8_6), 1)
                                temp0_2370[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2370[0].o, 
                                    *(r12 + rbx_16), 2)
                                temp0_2370[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2370[0].o, 
                                    *(r12 + r9_2), 3)
                                temp0_2370[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2370[0].o, 
                                    *(r12 + rdi_14), 4)
                                temp0_2370[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2370[0].o, 
                                    *(r12 + rsi_14), 5)
                                temp0_2370[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2370[0].o, 
                                    *(r12 + rax_333), 6)
                                temp0_2370[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2370[0].o, 
                                    *(r12 + rdx_13), 7)
                                arg6 = _mm256_cvtepu16_epi32(temp0_2370[0].o)
                                zmm5 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, zmm5))
                            
                            zmm5[0].o = zx.o(0)
                            var_500 =
                                _mm256_maskstore_ps(zmm0, _mm256_blendv_ps(zmm5, arg6, temp0_2353))
                            zmm2 = __vpbroadcastd_ymmqq_memd(0x2000000)
                            arg11 = zmm2 & var_980_1
                            zmm2 = _mm256_cmpeq_epi32(arg11, zmm2)
                            arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                            arg6[0].o = zmm1[0].o & zmm2[0].o
                            zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                            zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            char temp0_2414 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
                            
                            if (temp0_2414 == 0)
                                arg5[0].o = temp0_1331[0].o
                                arg9 = var_820_3
                            else
                                if ((temp0_2414 & 1) == 0)
                                    if ((temp0_2414 & 2) != 0)
                                        goto label_1401ab2dc
                                    
                                    goto label_1401aadd4
                                
                                zmm2 = var_9c0_3
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*zmm2[0].q)
                                
                                if ((temp0_2414 & 2) != 0)
                                label_1401ab2dc:
                                    int64_t rax_355 = __vpextrq_gpr64q_xmmdq_immb(var_9c0_3[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_355, 1)
                                    
                                    if ((temp0_2414 & 4) == 0)
                                        goto label_1401aaddd
                                    
                                    goto label_1401ab2f5
                                
                            label_1401aadd4:
                                
                                if ((temp0_2414 & 4) == 0)
                                label_1401aaddd:
                                    
                                    if ((temp0_2414 & 8) != 0)
                                        goto label_1401ab313
                                    
                                    goto label_1401aade6
                                
                            label_1401ab2f5:
                                var_9c0_3[0].o = _mm256_extracti128_si256(var_9c0_3, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *var_9c0_3[0].q, 2)
                                
                                if ((temp0_2414 & 8) != 0)
                                label_1401ab313:
                                    var_9c0_3[0].o = _mm256_extracti128_si256(var_9c0_3, 1)
                                    int64_t rax_357 = __vpextrq_gpr64q_xmmdq_immb(var_9c0_3[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_357, 3)
                                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                    
                                    if ((temp0_2414 & 0x10) == 0)
                                        goto label_1401aadf4
                                    
                                    goto label_1401ab337
                                
                            label_1401aade6:
                                arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                int64_t rax_347
                                
                                if ((temp0_2414 & 0x10) != 0)
                                label_1401ab337:
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg12[0].q, 4)
                                    arg6 = _mm256_slli_epi32(arg6, 0x1f)
                                    
                                    if ((temp0_2414 & 0x20) != 0)
                                        rax_347 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_347, 5)
                                else
                                label_1401aadf4:
                                    arg6 = _mm256_slli_epi32(arg6, 0x1f)
                                    
                                    if ((temp0_2414 & 0x20) != 0)
                                        rax_347 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_347, 5)
                                arg6 = _mm256_srai_epi32(arg6, 0x1f)
                                zmm5 = __vpbroadcastq_ymmqq_memq(2)
                                arg13 = data_143442920
                                arg9 = data_143442940
                                
                                if ((temp0_2414 & 0x40) != 0)
                                    arg7[0].o = _mm256_extracti128_si256(arg12, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg7[0].q, 6)
                                
                                arg8 = arg12
                                arg12 = _mm256_add_epi64(arg12, zmm5)
                                zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_9c0_3)
                                uint32_t temp0_2424[0x8] = _mm256_permutevar8x32_epi32(arg13, arg6)
                                arg6 = _mm256_permutevar8x32_epi32(arg9, arg6)
                                
                                if (temp0_2414 s< 0)
                                    arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                    int64_t rax_349 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_349, 7)
                                
                                arg5[0].o = temp0_1331[0].o
                                arg9 = var_820_3
                                arg7 = _mm256_blendv_ps(var_9c0_3, zmm5, temp0_2424)
                                var_9c0_3 = arg7
                                arg8 = _mm256_blendv_ps(arg8, arg12, arg6)
                                zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(zmm2[0].o), 
                                    __vpbroadcastd_ymmqq_memd(0xffffff01)))
                                arg13 = var_880_4
                                arg12 = arg8
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            
                            arg6 = _mm256_cmpeq_epi32(arg11, zmm5)
                            var_4e0 = _mm256_maskstore_ps(zmm0, arg6 & not.32(zmm2))
                            zmm2 = __vpbroadcastd_ymmqq_memd(0x4000000)
                            zmm5 = zmm2 & var_980_1
                            zmm2 = _mm256_cmpeq_epi32(zmm5, zmm2)
                            arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                            zmm1[0].o &= zmm2[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            char temp0_2444 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_2444 != 0)
                                if ((temp0_2444 & 1) == 0)
                                    if ((temp0_2444 & 2) != 0)
                                        goto label_1401ab367
                                    
                                    goto label_1401aaf2c
                                
                                zmm1 = var_9c0_3
                                zmm1[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                                
                                if ((temp0_2444 & 2) != 0)
                                label_1401ab367:
                                    zmm2 = var_9c0_3
                                    int64_t rax_360 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_360, 1)
                                    
                                    if ((temp0_2444 & 4) == 0)
                                        goto label_1401aaf35
                                    
                                    goto label_1401ab380
                                
                            label_1401aaf2c:
                                
                                if ((temp0_2444 & 4) == 0)
                                label_1401aaf35:
                                    
                                    if ((temp0_2444 & 8) != 0)
                                        goto label_1401ab39e
                                    
                                    goto label_1401aaf3e
                                
                            label_1401ab380:
                                zmm2 = var_9c0_3
                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 2)
                                
                                if ((temp0_2444 & 8) != 0)
                                label_1401ab39e:
                                    zmm2 = var_9c0_3
                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    int64_t rax_362 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_362, 3)
                                    
                                    if ((temp0_2444 & 0x10) == 0)
                                        goto label_1401aaf47
                                    
                                    goto label_1401ab3c2
                                
                            label_1401aaf3e:
                                
                                if ((temp0_2444 & 0x10) == 0)
                                label_1401aaf47:
                                    
                                    if ((temp0_2444 & 0x20) != 0)
                                        goto label_1401ab3d0
                                    
                                    goto label_1401aaf50
                                
                            label_1401ab3c2:
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg12[0].q, 4)
                                
                                if ((temp0_2444 & 0x20) != 0)
                                label_1401ab3d0:
                                    int64_t rax_364 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_364, 5)
                                    
                                    if ((temp0_2444 & 0x40) == 0)
                                        goto label_1401aaf59
                                    
                                    goto label_1401ab3e4
                                
                            label_1401aaf50:
                                
                                if ((temp0_2444 & 0x40) != 0)
                                label_1401ab3e4:
                                    zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 6)
                                    
                                    if (temp0_2444 s< 0)
                                    label_1401ab3fc:
                                        zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                        int64_t rax_366 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_366, 7)
                                else
                                label_1401aaf59:
                                    
                                    if (temp0_2444 s< 0)
                                        goto label_1401ab3fc
                                
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm2 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm2))
                            
                            zmm2[0].o = zx.o(0)
                            zmm1 = _mm256_cmpeq_epi32(zmm5, zmm2) & not.32(zmm1)
                            var_4c0 = _mm256_maskstore_ps(zmm0, zmm1)
                        
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
                        zmm0[0].o ^= arg10[0].o
                        zmm1[0].o = arg15[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = __vpbroadcastd_ymmqq_memd(6)
                            zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, temp0_1306)
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
                                var_500 = _mm256_maskstore_ps(zmm0, arg5)
                                var_4e0 = _mm256_maskstore_ps(zmm0, arg5)
                                var_4c0 = _mm256_maskstore_ps(zmm0, arg5)
                            
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
                                var_500 = _mm256_maskstore_ps(zmm0, zmm1)
                                var_4e0 = _mm256_maskstore_ps(zmm0, zmm1)
                                var_4c0 = _mm256_maskstore_ps(zmm0, zmm1)
                
                arg5 = var_5e0.32
                arg6 = var_5c0.32
                zmm5 = var_5a0.32
                zmm0 = _mm256_sub_ps(var_500, arg5)
                float temp0_2484[0x8] = _mm256_sub_ps(var_4e0, arg6)
                zmm2 = _mm256_sub_ps(var_4c0, zmm5)
                zmm0 = _mm256_fmadd_ps(zmm0, arg13, arg5)
                float temp0_2487[0x8] = _mm256_fmadd_ps(temp0_2484, arg13, arg6)
                zmm2 = _mm256_fmadd_ps(zmm2, arg13, zmm5)
                var_5e0.32 = _mm256_maskstore_ps(arg14, zmm0)
                var_5c0.32 = _mm256_maskstore_ps(arg14, temp0_2487)
                var_5a0.32 = _mm256_maskstore_ps(arg14, zmm2)
        
        arg11 = var_7c0_3
        zmm1 = arg11 & var_740_2
        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
            zmm0[0].o = zx.o(0)
            var_5e0.32 = _mm256_maskstore_ps(zmm1, zmm0)
            var_5c0.32 = _mm256_maskstore_ps(zmm1, zmm0)
            var_5a0.32 = _mm256_maskstore_ps(zmm1, zmm0)
        
        zmm1[0].o = var_5e0
        int128_t var_5d0
        arg10[0].o = var_5d0
        arg5[0].o = var_5c0
        int128_t var_5b0
        arg6[0].o = var_5b0
        zmm5[0].o = var_5a0
        int128_t var_590
        arg7[0].o = var_590
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, zmm5[0].o, 0x28)
        int128_t var_240 = zmm2[0].o
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        int128_t var_230_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 0xa8)
        int128_t var_220_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        int128_t var_210_1 = zmm0[0].o
        zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg7[0].o, 0x28)
        int128_t var_200_1 = zmm2[0].o
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_1f0_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg7[0].o, 0xa8)
        int128_t var_1e0_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        int128_t var_1d0_1 = zmm0[0].o
        uint64_t i_4 = zx.q(_mm256_movemask_ps(arg11))
        
        do
            uint64_t rcx_33 = _tzcnt_u64(i_4)
            result = rol.q(-2, rcx_33.b)
            uint32_t var_120[0x8] = arg16
            zmm0[0].o = (&var_240)[rcx_33]
            *(arg1 + sx.q(var_120[zx.q(rcx_33.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            i_4 &= result
        while (i_4 != 0)
else
    zmm0[0].o = zx.o(arg4)
    uint32_t temp0_2[0x8] = _mm256_broadcastd_epi32(_mm256_slli_epi32(zmm0, 2)[0])
    temp0_2[0].o = zx.o(r12)
    zmm1[0].o = 4
    temp0_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(temp0_2[0].o, zmm1[0].o)
    uint32_t var_180_1[0x8] = _mm256_broadcastq_epi64(temp0_2[0].q)
    zmm0 = _mm256_broadcastss_ps(zmm2[0].o)
    uint32_t var_300_1[0x8] = zmm0
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    int32_t rbx_1
    rbx_1.b = zmm0[0].o f>= zmm2[0]
    zmm0[0].o = zx.o(neg.d(rbx_1))
    uint32_t temp0_7[0x8] = _mm256_broadcastd_epi32(zmm0[0])
    int32_t rbx_3 = arg18 - 2
    temp0_7[0].o = arg5[0].o
    temp0_7[0] = float.s(arg18 - 1)
    temp0_7[0].o = temp0_7[0].o f* zmm2[0]
    int32_t rcx_3 = int.d(temp0_7[0]) s>> 0x1f
    int32_t rcx_4 = rcx_3 & not.d(rcx_3)
    
    if (rbx_3 s> rcx_4)
        rbx_3 = rcx_4
    
    zmm1[0].o = zx.o(rbx_3)
    zmm1 = _mm256_broadcastd_epi32(zmm1[0])
    var_700 = zmm1
    zmm0 = _mm256_broadcastss_ps(temp0_7[0].o)
    uint32_t var_1c0_1[0x8] = zmm0
    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
    arg15[0].o = zx.o(0)
    arg14 = __vpbroadcastd_ymmqq_memd(4)
    r14 = 0
    uint32_t var_8a0_1[0x8] = arg14
    
    do
        zmm0[0].o = zx.o(r14)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_broadcastd_epi32(zmm0[0]), 3), 
            data_143442140)
        arg16[0].o = zx.o(0)
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        uint32_t temp0_38[0x8]
        int32_t temp1_1
        temp0_38, temp1_1 = _mm256_i32gather_epi32(arg16, *(arg2 + zmm0[0].q), zmm2)
        arg16 = temp0_38
        zmm2 = temp1_1
        zmm0 |= arg14
        zmm2[0].o = zx.o(0)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        uint32_t temp0_40[0x8]
        int32_t temp1_2
        temp0_40, temp1_2 = _mm256_i32gather_epi32(zmm2, *(arg2 + zmm0[0].q), arg5)
        arg5 = temp1_2
        zmm2 = __vpmulld_ymmqq_ymmqq_memqq(temp0_40, temp0_2)
        zmm0[0].o = zx.o(0)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        uint32_t temp0_43[0x8]
        int32_t temp1_3
        temp0_43, temp1_3 = _mm256_i32gather_epi32(zmm0, *(arg3 + zmm2[0].q), arg5)
        arg5 = temp1_3
        arg14 = _mm256_cmpeq_epi32(temp0_43, arg13)
        arg11 = arg14 ^ arg13
        float var_4a0[0x8]
        float var_480[0x8]
        float var_460[0x8]
        
        if (_mm256_movemask_ps(arg11) == 0)
            arg14 = var_8a0_1
            zmm0 = arg11 ^ arg13
            
            if (_mm256_movemask_ps(zmm0) != 0)
            label_1401a7df2:
                var_4a0 = _mm256_maskstore_ps(zmm0, arg15)
                var_480 = _mm256_maskstore_ps(zmm0, arg15)
                var_460 = _mm256_maskstore_ps(zmm0, arg15)
        else
            arg5[0].o = _mm256_extracti128_si256(temp0_43, 1)
            zmm1[0].o = zx.o(0)
            uint16_t* r13_1 = r12
            uint32_t temp0_47[0x8]
            int32_t temp1_4
            temp0_47, temp1_4 = _mm256_i32gather_epi32(zmm1, *(r12 + temp0_43[0].q), arg11)
            zmm1 = temp0_47
            zmm2[0].o = zx.o(0)
            int32_t var_7e0_1[0x8] = zmm2
            arg6 = zmm1 & data_143442840
            uint32_t temp0_48[0x8] = _mm256_srli_epi32(zmm1, 0x18)
            arg7 = temp0_48 & __vpbroadcastd_ymmqq_memd(0xf)
            float var_7a0[0x8]
            float temp0_51[0x8] = _mm256_blendv_ps(var_7a0, _mm256_srli_epi32(zmm1, 0x1c), arg11)
            zmm1 = _mm256_slli_epi32(temp0_51, 2)
            temp0_48[0].o = zx.o(0)
            uint32_t temp0_53[0x8]
            int32_t temp1_5
            temp0_53, temp1_5 =
                _mm256_i32gather_epi32(temp0_48, *(&data_143442960 + zmm1[0].q), arg11)
            int32_t var_980[0x8]
            zmm2 = _mm256_blendv_ps(var_980, arg7, arg11)
            var_980 = zmm2
            int32_t temp0_56[0x8] = _mm256_and_ps(zmm2, _mm256_broadcast_ss(9.80908925e-45f))
            zmm1 = _mm256_slli_epi32(temp0_51, 3)
            arg7 = __vpbroadcastd_ymmqq_memd(3)
            var_520 = temp0_56
            zmm1 = arg14 & not.32(_mm256_or_ps(temp0_56, zmm1))
            int64_t r12_1 = sx.q(zmm1[0])
            int64_t r11_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            int64_t rdi_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            int64_t rbx_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
            int64_t rax_16 = sx.q(zmm1[0])
            int64_t rcx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            int64_t r8_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            int32_t temp0_66 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = zx.o(*(r12_1 + &data_143442980))
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(r11_1 + &data_143442980), 1)
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(rdi_3 + &data_143442980), 2)
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(rbx_5 + &data_143442980), 3)
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(rax_16 + &data_143442980), 4)
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(rcx_8 + &data_143442980), 5)
            zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(r8_1 + &data_143442980), 6)
            zmm1[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(sx.q(temp0_66) + &data_143442980), 7)
            arg9 = _mm256_cvtepu8_epi32(zmm1[0].q)
            var_7a0 = temp0_51
            arg8 = _mm256_cmpeq_epi32(temp0_51, arg7)
            arg10 = arg8 & not.32(arg11)
            zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_43[0].o)
            char temp0_79 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            arg7[0].o = zx.o(0)
            
            if (temp0_79 != 0)
                arg7 = arg10 & arg9
            
            uint32_t var_820_1[0x8] = _mm256_cvtepi32_epi64(temp0_43[0].o)
            uint32_t var_8c0_1[0x8] = _mm256_cvtepi32_epi64(arg5[0].o)
            arg12 = _mm256_blendv_ps(arg12, arg6, arg11)
            zmm0 = arg14 & not.32(temp0_53)
            arg10 = arg14 & not.32(arg8)
            zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
            int32_t var_540[0x4] = zmm1[0].o
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            char temp0_86 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
            zmm5 = _mm256_broadcast_ss(1.40129846e-45f)
            
            if (temp0_86 == 0)
                arg5[0].o = zx.o(0)
            else
                arg5 = arg10 & arg9
                arg7 = _mm256_blendv_ps(arg7, zmm5, arg10)
            
            r12 = r13_1
            arg5 = _mm256_madd_epi16(arg5, arg14 & not.32(var_8a0_1))
            zmm0 = _mm256_mullo_epi32(arg7, zmm0)
            zmm1 = var_180_1
            arg9 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_8c0_1)
            int32_t var_6e0[0x8]
            zmm2 = _mm256_blendv_ps(var_6e0, zmm0, arg11)
            var_6e0 = zmm2
            uint32_t var_9c0[0x8] = _mm256_blendv_ps(var_9c0, arg5, arg11)
            arg6 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_820_1)
            zmm0 = arg14 & not.32(_mm256_cmpgt_epi32(arg12, zmm5))
            arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            float var_8e0_1[0x8] = arg11
            float var_920_1[0x8] = arg8
            float var_740_1[0x8] = arg6
            float var_800_1[0x8] = arg9
            uint32_t var_9a0_1[0x8] = arg14
            int32_t var_940_1[0x8] = arg10
            var_580 = arg12
            float var_960_1[0x8]
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) == 0)
                arg5[0].o = zx.o(0)
                zmm0[0].o = zx.o(0)
                var_960_1 = zmm0
            else
                uint32_t var_880_1[0x8] = zmm5
                arg6 = __vpbroadcastd_ymmqq_memd(8) & var_980
                arg10[0].o = zx.o(0)
                zmm1 = _mm256_cmpeq_epi32(arg6, arg10)
                zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                zmm5[0].o = zmm1[0].o & zmm0[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    arg5[0].o = zx.o(0)
                    arg11[0].o = zx.o(0)
                    zmm1[0].o = zx.o(0)
                    var_960_1 = zmm1
                    arg7[0].o = zx.o(0)
                else
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    zmm1[0].o = zx.o(arg19)
                    zmm2[0].o = zx.o(0)
                    
                    if (zx.o(0) f>= zmm1[0])
                        arg10[0].o = zx.o(0)
                        arg5[0].o = zx.o(0)
                        arg11[0].o = zx.o(0)
                        zmm1[0].o = zx.o(0)
                        var_960_1 = zmm1
                    else
                        bool cond:6_1 = zmm1[0].o f>= 1f
                        arg9 = _mm256_add_epi32(arg12, arg13)
                        
                        if (cond:6_1)
                            arg10 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f) & arg9
                            arg5 = arg10
                            arg11 = arg10
                            var_960_1 = arg10
                        else
                            float temp0_112[0x8] =
                                __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg9), var_300_1)
                            float temp0_113[0x8] = _mm256_round_ps(temp0_112, 9)
                            zmm1 = _mm256_min_epi32(arg9, _mm256_cvttps_epi32(temp0_113))
                            zmm2 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f)
                            arg5 = _mm256_srai_epi32(zmm2, 0x1f)
                            arg10 = arg5 & zmm1
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            
                            if (arg20 != 1)
                                arg7 = _mm256_sub_ps(temp0_112, temp0_113)
                            
                            arg11 = arg5 & _mm256_min_epi32(_mm256_sub_epi32(arg10, arg13), arg9)
                            arg5 = arg10
                            var_960_1 = arg11
                            arg12 = arg12
                            arg8 = var_920_1
                        
                        arg9 = var_800_1
                    
                    arg7 &= _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                
                zmm5 = var_880_1
                zmm1 = _mm256_cmpeq_epi32(arg6, arg15) ^ arg13
                zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                zmm0[0].o &= zmm1[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    var_7e0_1 = arg7
                    arg6 = var_740_1
                    arg10 = var_940_1
                else
                    float var_7c0_1[0x8] = arg11
                    zmm2 = arg5
                    arg11 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f)
                    zmm0 = _mm256_srai_epi32(arg11, 0x1f)
                    zmm1 = _mm256_cmpgt_epi32(__vpbroadcastd_ymmqq_memd(2), arg12) | temp0_7
                    arg5 = zmm1 & zmm0
                    
                    if (_mm256_movemask_ps(arg5) == 0)
                        arg6 = var_740_1
                        arg5 = zmm2
                    else
                        arg10 = _mm256_blendv_ps(arg10, arg15, arg5)
                        zmm2 = _mm256_blendv_ps(var_7c0_1, arg15, arg5)
                        arg5 = arg10
                        var_7c0_1 = zmm2
                        var_960_1 = zmm2
                        arg6 = var_740_1
                    
                    arg14 = zmm1 & not.32(zmm0)
                    int32_t temp0_144 = _mm256_movemask_ps(arg14)
                    zmm0[0].o = zx.o(0)
                    
                    if (temp0_144 == 0)
                        arg14 = var_9a0_1
                        arg10 = var_940_1
                    else
                        int32_t var_7e0_2[0x8] = arg7
                        arg7 = arg11
                        float var_900_1[0x8] = zmm1
                        arg11 = _mm256_add_epi32(arg12, arg13)
                        zmm1[0].o = arg19
                        
                        if (zmm1[0].o f>= 1f)
                            arg5 = _mm256_blendv_ps(arg10, arg11, arg14)
                            var_960_1 = _mm256_blendv_ps(var_7c0_1, arg11, arg14)
                            arg14 = var_9a0_1
                            arg10 = var_940_1
                            arg11 = arg7
                            arg7 = var_7e0_2
                        else
                            zmm2 = var_9c0
                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                            zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                            zmm1 = __vpmulld_ymmqq_ymmqq_memqq(arg12, var_6e0)
                            zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                            arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                            zmm2 = _mm256_add_epi64(arg6, zmm2)
                            zmm0 = _mm256_add_epi64(arg9, zmm0)
                            arg6 = __vpbroadcastq_ymmqq_memq(3)
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                            zmm1 = _mm256_add_epi64(zmm1, _mm256_add_epi64(zmm2, arg6))
                            zmm0 = _mm256_add_epi64(arg5, _mm256_add_epi64(zmm0, arg6))
                            zmm2 = __vpbroadcastq_ymmqq_memq(-4)
                            arg5[0].o = zx.o(0)
                            arg15 = zmm0 & zmm2
                            arg6 = zmm1 & zmm2
                            var_840.32 = arg11
                            arg11 = _mm256_min_epi32(
                                _mm256_max_epi32(
                                    _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepi32_ps(arg11), var_300_1)), 
                                    arg5), 
                                arg11)
                            int32_t var_860_1[0x8] = arg7
                            float var_960_2[0x8] = arg11
                            
                            if (arg18 s< 0x100)
                                zmm0 = _mm256_add_epi64(arg6, _mm256_cvtepi32_epi64(arg11[0].o))
                                char r12_2 = temp0_144.b
                                int128_t var_310
                                zmm1[0].o = var_310
                                
                                if ((r12_2 & 1) == 0)
                                    arg8 = var_7e0_2
                                    
                                    if ((r12_2 & 2) != 0)
                                        goto label_1401a52d0
                                    
                                    goto label_1401a4d32
                                
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 0)
                                arg8 = var_7e0_2
                                
                                if ((r12_2 & 2) != 0)
                                label_1401a52d0:
                                    uint32_t rax_60 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_60, 1)
                                    zmm5[0].o = _mm256_extracti128_si256(arg11, 1)
                                    
                                    if ((r12_2 & 4) == 0)
                                        goto label_1401a4d42
                                    
                                    goto label_1401a52e8
                                
                            label_1401a4d32:
                                zmm5[0].o = _mm256_extracti128_si256(arg11, 1)
                                
                                if ((r12_2 & 4) == 0)
                                label_1401a4d42:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((r12_2 & 8) != 0)
                                        goto label_1401a5312
                                    
                                    goto label_1401a4d51
                                
                            label_1401a52e8:
                                zmm2[0].o = zmm1[0].o
                                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                zmm1[0].o = zmm2[0].o
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm1[0].q), 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((r12_2 & 8) != 0)
                                label_1401a5312:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint32_t rax_64 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_64, 3)
                                    zmm0 = _mm256_add_epi64(arg15, zmm5)
                                    
                                    if ((r12_2 & 0x10) == 0)
                                        goto label_1401a4d5f
                                    
                                    goto label_1401a533c
                                
                            label_1401a4d51:
                                zmm0 = _mm256_add_epi64(arg15, zmm5)
                                
                                if ((r12_2 & 0x10) == 0)
                                label_1401a4d5f:
                                    
                                    if ((r12_2 & 0x20) != 0)
                                        goto label_1401a5351
                                    
                                    goto label_1401a4d69
                                
                            label_1401a533c:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 4)
                                
                                if ((r12_2 & 0x20) != 0)
                                label_1401a5351:
                                    uint32_t rax_68 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_68, 5)
                                    
                                    if ((r12_2 & 0x40) == 0)
                                        goto label_1401a4d73
                                    
                                    goto label_1401a5363
                                
                            label_1401a4d69:
                                
                                if ((r12_2 & 0x40) != 0)
                                label_1401a5363:
                                    zmm2[0].o = zmm1[0].o
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm1[0].o = zmm2[0].o
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_144.b s< 0)
                                    label_1401a5386:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        uint32_t rax_72 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_72, 7)
                                else
                                label_1401a4d73:
                                    
                                    if (temp0_144.b s< 0)
                                        goto label_1401a5386
                                
                                var_310 = zmm1[0].o
                                zmm0[0].o = zmm1[0].o & data_142fc92e0
                                zmm0 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepu16_epi32(zmm0[0].o), var_700)
                                arg7 = zmm0 ^ arg13
                                
                                if (_mm256_movemask_ps(zmm0 & not.32(arg14)) == 0)
                                    zmm5 = arg11
                                else
                                    zmm1 = var_840.32
                                    zmm5 = _mm256_blendv_ps(arg11, zmm1, arg7)
                                    zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
                                    arg13 = _mm256_sub_epi32(arg11, zmm2)
                                    arg9 = zmm0 & not.32(_mm256_cmpgt_epi32(arg13, zmm1) ^ zmm2)
                                    zmm0 = arg14 & arg9
                                    int32_t i_5 = _mm256_movemask_ps(zmm0)
                                    
                                    if (i_5 != 0)
                                        arg12 = arg11
                                        
                                        do
                                            arg11 = arg13
                                            zmm1 = _mm256_cvtepi32_epi64(arg11[0].o)
                                            arg13 = _mm256_add_epi64(arg6, zmm1)
                                            char temp0_200 = _mm256_movemask_ps(zmm0)
                                            int128_t var_3b0
                                            uint32_t rax_41
                                            
                                            if ((temp0_200 & 1) != 0)
                                                zmm1[0].o = var_3b0
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, zx.d(*arg13[0].q), 0)
                                                
                                                if ((temp0_200 & 2) != 0)
                                                    rax_41 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, rax_41, 1)
                                            else
                                                zmm1[0].o = var_3b0
                                                
                                                if ((temp0_200 & 2) != 0)
                                                    rax_41 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, rax_41, 1)
                                            zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                                            
                                            if ((temp0_200 & 4) == 0)
                                                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                                
                                                if ((temp0_200 & 8) != 0)
                                                    goto label_1401a4e29
                                                
                                                goto label_1401a4f36
                                            
                                            zmm2[0].o = zmm1[0].o
                                            zmm1[0].o = _mm256_extracti128_si256(arg13, 1)
                                            zmm1[0].o = zmm2[0].o
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm1[0].q), 2)
                                            zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                            
                                            if ((temp0_200 & 8) != 0)
                                            label_1401a4e29:
                                                zmm2[0].o = zmm1[0].o
                                                zmm1[0].o = _mm256_extracti128_si256(arg13, 1)
                                                int64_t rax_28 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                zmm1[0].o = zmm2[0].o
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*rax_28), 3)
                                                arg13 = _mm256_add_epi64(arg15, zmm0)
                                                
                                                if ((temp0_200 & 0x10) == 0)
                                                    goto label_1401a4f43
                                                
                                                goto label_1401a4e5a
                                            
                                        label_1401a4f36:
                                            arg13 = _mm256_add_epi64(arg15, zmm0)
                                            
                                            if ((temp0_200 & 0x10) == 0)
                                            label_1401a4f43:
                                                
                                                if ((temp0_200 & 0x20) != 0)
                                                    goto label_1401a4e6e
                                                
                                                goto label_1401a4f4c
                                            
                                        label_1401a4e5a:
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, zx.d(*arg13[0].q), 4)
                                            
                                            if ((temp0_200 & 0x20) != 0)
                                            label_1401a4e6e:
                                                uint32_t rax_33 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, rax_33, 5)
                                                
                                                if ((temp0_200 & 0x40) == 0)
                                                    goto label_1401a4f55
                                                
                                                goto label_1401a4e7f
                                            
                                        label_1401a4f4c:
                                            
                                            if ((temp0_200 & 0x40) != 0)
                                            label_1401a4e7f:
                                                zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, zx.d(*zmm0[0].q), 6)
                                                
                                                if (temp0_200 s< 0)
                                                label_1401a4e9a:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    uint32_t rax_37 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, rax_37, 7)
                                            else
                                            label_1401a4f55:
                                                
                                                if (temp0_200 s< 0)
                                                    goto label_1401a4e9a
                                            
                                            var_3b0 = zmm1[0].o
                                            zmm0[0].o = zmm1[0].o & data_142fc92e0
                                            zmm0 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                                _mm256_cvtepu16_epi32(zmm0[0].o), var_700)
                                            arg5 = zmm0 & arg9
                                            zmm0[0].o = zx.o(0)
                                            zmm1 = arg5 & arg14
                                            
                                            if (_mm256_movemask_ps(zmm1) != i_5)
                                                zmm0 = arg5 ^ arg9
                                            
                                            zmm5 = _mm256_blendv_ps(zmm5, arg12, arg5)
                                            arg13 = _mm256_sub_epi32(arg11, 
                                                _mm256_cmpeq_epi32(zmm1, zmm1))
                                            arg9 =
                                                _mm256_cmpgt_epi32(arg13, var_840.32) & not.32(zmm0)
                                            zmm0 = arg9 & arg14
                                            i_5 = _mm256_movemask_ps(zmm0)
                                            arg12 = arg11
                                        while (i_5 != 0)
                                
                                zmm1 = arg7
                                int32_t temp0_282 =
                                    _mm256_movemask_ps(_mm256_andnot_ps(zmm1, arg14))
                                arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                                
                                if (temp0_282 != 0)
                                    zmm1 = _mm256_xor_ps(zmm1, arg13)
                                    zmm2[0].o = zx.o(0)
                                    zmm5 = _mm256_blendv_ps(zmm5, zmm2, zmm1)
                                    zmm0 = __vpaddd_ymmqq_ymmqq_memqq(arg13, var_960_2)
                                    zmm2 = _mm256_cmpgt_epi32(zmm0, zmm2)
                                    arg7 = zmm2 & zmm1
                                    arg11 = arg7 & arg14
                                    int32_t i_6 = _mm256_movemask_ps(arg11)
                                    
                                    if (i_6 != 0)
                                        do
                                            zmm1 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                            float temp0_302[0x8] = _mm256_add_epi64(arg6, zmm1)
                                            char temp0_303 = _mm256_movemask_ps(arg11)
                                            int128_t var_3c0
                                            uint32_t rax_93
                                            
                                            if ((temp0_303 & 1) != 0)
                                                zmm2[0].o = var_3c0
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*temp0_302[0].q), 0)
                                                
                                                if ((temp0_303 & 2) != 0)
                                                    rax_93 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(
                                                        temp0_302[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_93, 1)
                                            else
                                                zmm2[0].o = var_3c0
                                                
                                                if ((temp0_303 & 2) != 0)
                                                    rax_93 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(
                                                        temp0_302[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_93, 1)
                                            arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                                            
                                            if ((temp0_303 & 4) == 0)
                                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                                
                                                if ((temp0_303 & 8) != 0)
                                                    goto label_1401a5471
                                                
                                                goto label_1401a5576
                                            
                                            zmm1[0].o = _mm256_extracti128_si256(temp0_302, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm1[0].q), 2)
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_303 & 8) != 0)
                                            label_1401a5471:
                                                zmm1[0].o = _mm256_extracti128_si256(temp0_302, 1)
                                                uint32_t rax_81 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_81, 3)
                                                arg9 = _mm256_add_epi64(arg15, arg5)
                                                
                                                if ((temp0_303 & 0x10) == 0)
                                                    goto label_1401a5583
                                                
                                                goto label_1401a549a
                                            
                                        label_1401a5576:
                                            arg9 = _mm256_add_epi64(arg15, arg5)
                                            
                                            if ((temp0_303 & 0x10) == 0)
                                            label_1401a5583:
                                                
                                                if ((temp0_303 & 0x20) != 0)
                                                    goto label_1401a54ae
                                                
                                                goto label_1401a558c
                                            
                                        label_1401a549a:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg9[0].q), 4)
                                            
                                            if ((temp0_303 & 0x20) != 0)
                                            label_1401a54ae:
                                                uint32_t rax_85 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_85, 5)
                                                
                                                if ((temp0_303 & 0x40) == 0)
                                                    goto label_1401a5595
                                                
                                                goto label_1401a54bf
                                            
                                        label_1401a558c:
                                            
                                            if ((temp0_303 & 0x40) != 0)
                                            label_1401a54bf:
                                                zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*zmm1[0].q), 6)
                                                
                                                if (temp0_303 s< 0)
                                                label_1401a54da:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                                    uint32_t rax_89 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_89, 7)
                                            else
                                            label_1401a5595:
                                                
                                                if (temp0_303 s< 0)
                                                    goto label_1401a54da
                                            
                                            var_3c0 = zmm2[0].o
                                            zmm1[0].o = zmm2[0].o & data_142fc92e0
                                            arg9 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                                _mm256_cvtepu16_epi32(zmm1[0].o), var_700)
                                                & not.32(arg7)
                                            arg5[0].o = zx.o(0)
                                            int32_t temp0_311 = _mm256_movemask_ps(arg9 & arg14)
                                            arg11[0].o = zx.o(0)
                                            
                                            if (temp0_311 != i_6)
                                                arg11 = arg9 ^ arg7
                                            
                                            zmm5 = _mm256_blendv_ps(zmm5, zmm0, arg9)
                                            zmm0 = _mm256_add_epi32(zmm0, arg13)
                                            arg7 = _mm256_cmpgt_epi32(zmm0, arg5) & arg11
                                            arg11 = arg7 & arg14
                                            i_6 = _mm256_movemask_ps(arg11)
                                        while (i_6 != 0)
                                
                                float temp0_316[0x8] = _mm256_blendv_ps(arg10, zmm5, arg14)
                                zmm0 = _mm256_add_epi64(arg6, _mm256_cvtepi32_epi64(temp0_316[0].o))
                                int128_t var_410
                                
                                if ((r12_2 & 1) != 0)
                                    zmm2[0].o = var_410
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0].q), 0)
                                else
                                    zmm2[0].o = var_410
                                
                                arg7 = arg8
                                arg8 = var_920_1
                                arg9 = var_800_1
                                arg10 = var_940_1
                                arg11 = var_860_1
                                
                                if ((r12_2 & 2) == 0)
                                    arg12 = temp0_316
                                    arg5[0].o = _mm256_extracti128_si256(temp0_316, 1)
                                    
                                    if ((r12_2 & 4) != 0)
                                        goto label_1401a5740
                                    
                                    goto label_1401a567c
                                
                                uint32_t rax_99 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_99, 1)
                                arg12 = temp0_316
                                arg5[0].o = _mm256_extracti128_si256(temp0_316, 1)
                                
                                if ((r12_2 & 4) != 0)
                                label_1401a5740:
                                    temp0_316[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*temp0_316[0].q), 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((r12_2 & 8) == 0)
                                        goto label_1401a568b
                                    
                                    goto label_1401a5762
                                
                            label_1401a567c:
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((r12_2 & 8) == 0)
                                label_1401a568b:
                                    zmm0 = _mm256_add_epi64(arg15, arg5)
                                    
                                    if ((r12_2 & 0x10) != 0)
                                        goto label_1401a578c
                                    
                                    goto label_1401a5699
                                
                            label_1401a5762:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                uint32_t rax_103 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_103, 3)
                                zmm0 = _mm256_add_epi64(arg15, arg5)
                                
                                if ((r12_2 & 0x10) != 0)
                                label_1401a578c:
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0].q), 4)
                                    arg5 = arg12
                                    
                                    if ((r12_2 & 0x20) == 0)
                                        goto label_1401a56a7
                                    
                                    goto label_1401a57a5
                                
                            label_1401a5699:
                                arg5 = arg12
                                
                                if ((r12_2 & 0x20) == 0)
                                label_1401a56a7:
                                    
                                    if ((r12_2 & 0x40) != 0)
                                        goto label_1401a57b7
                                    
                                    goto label_1401a56b1
                                
                            label_1401a57a5:
                                uint32_t rax_107 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_107, 5)
                                
                                if ((r12_2 & 0x40) == 0)
                                label_1401a56b1:
                                    
                                    if (temp0_144.b s< 0)
                                    label_1401a57d2:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        uint32_t rax_111 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_111, 7)
                                else
                                label_1401a57b7:
                                    temp0_316[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*temp0_316[0].q), 6)
                                    
                                    if (temp0_144.b s< 0)
                                        goto label_1401a57d2
                                
                                zmm1 = _mm256_blendv_ps(var_7c0_1, _mm256_sub_epi32(arg5, arg13), 
                                    arg14)
                                arg5 = var_840.32
                                zmm0 = _mm256_cmpgt_epi32(zmm1, arg5) & arg14
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    zmm1 = _mm256_blendv_ps(zmm1, arg5, zmm0)
                                
                                arg14 = var_9a0_1
                                zmm0 = _mm256_add_epi64(arg6, _mm256_cvtepi32_epi64(zmm1[0].o))
                                int128_t var_430
                                uint32_t rax_115
                                
                                if ((r12_2 & 1) != 0)
                                    arg6[0].o = var_430
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm0[0].q), 0)
                                    
                                    if ((r12_2 & 2) != 0)
                                        rax_115 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_115, 1)
                                else
                                    arg6[0].o = var_430
                                    
                                    if ((r12_2 & 2) != 0)
                                        rax_115 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_115, 1)
                                arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                var_960_1 = zmm1
                                
                                if ((r12_2 & 4) == 0)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((r12_2 & 8) != 0)
                                        goto label_1401a58ff
                                    
                                    goto label_1401a583a
                                
                                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*zmm1[0].q), 2)
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((r12_2 & 8) != 0)
                                label_1401a58ff:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint32_t rax_123 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_123, 3)
                                    zmm0 = _mm256_add_epi64(arg15, arg5)
                                    
                                    if ((r12_2 & 0x10) == 0)
                                        goto label_1401a5848
                                    
                                    goto label_1401a5929
                                
                            label_1401a583a:
                                zmm0 = _mm256_add_epi64(arg15, arg5)
                                
                                if ((r12_2 & 0x10) == 0)
                                label_1401a5848:
                                    arg15[0].o = zx.o(0)
                                    
                                    if ((r12_2 & 0x20) != 0)
                                        goto label_1401a5943
                                    
                                    goto label_1401a5857
                                
                            label_1401a5929:
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*zmm0[0].q), 4)
                                arg15[0].o = zx.o(0)
                                
                                if ((r12_2 & 0x20) == 0)
                                label_1401a5857:
                                    
                                    if ((r12_2 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*zmm1[0].q), 6)
                                else
                                label_1401a5943:
                                    uint32_t rax_127 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_127, 5)
                                    
                                    if ((r12_2 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*zmm1[0].q), 6)
                                
                                r12 = r13_1
                                arg5[0].o = zmm2[0].o & data_142fc92e0
                                
                                if (temp0_144.b s< 0)
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint16_t rax_119[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_119, 7)
                                
                                var_410 = zmm2[0].o
                                zmm0 = _mm256_cvtepu16_epi32(arg5[0].o)
                                var_430 = arg6[0].o
                                zmm1[0].o = arg6[0].o & data_142fc92e0
                                arg6 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm5 = _mm256_xor_ps(var_900_1, arg13)
                                arg5[0].o = zx.o(0)
                                
                                if (arg20 != 1)
                                    zmm1 = __vpmaxsd_ymmqq_ymmqq_memqq(
                                        _mm256_sub_epi32(arg6, zmm0), var_880_1)
                                    arg5 = _mm256_div_ps(
                                        _mm256_sub_ps(var_1c0_1, _mm256_cvtepi32_ps(zmm0)), 
                                        _mm256_cvtepi32_ps(zmm1))
                            else
                                zmm5 = _mm256_add_epi32(arg11, arg11)
                                zmm0 = _mm256_add_epi64(arg6, _mm256_cvtepi32_epi64(zmm5[0].o))
                                char rdi_4 = temp0_144.b
                                
                                if ((rdi_4 & 1) == 0)
                                    arg7 = var_7e0_2
                                    
                                    if ((rdi_4 & 2) != 0)
                                        goto label_1401a4ff9
                                    
                                    goto label_1401a4c7f
                                
                                int128_t var_710
                                zmm1[0].o = var_710
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 0)
                                var_710 = zmm1[0].o
                                arg7 = var_7e0_2
                                
                                if ((rdi_4 & 2) != 0)
                                label_1401a4ff9:
                                    int64_t rax_44 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o = var_710
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_44, 1)
                                    var_710 = zmm1[0].o
                                    arg5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    
                                    if ((rdi_4 & 4) == 0)
                                        goto label_1401a4c8f
                                    
                                    goto label_1401a5026
                                
                            label_1401a4c7f:
                                arg5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                
                                if ((rdi_4 & 4) != 0)
                                label_1401a5026:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm2[0].o = var_710
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                    label_1401a504a:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_46 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_46, 3)
                                else
                                label_1401a4c8f:
                                    zmm2[0].o = var_710
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                        goto label_1401a504a
                                
                                zmm0 = _mm256_add_epi64(arg15, arg5)
                                
                                if ((rdi_4 & 0x10) == 0)
                                    if ((rdi_4 & 0x20) != 0)
                                        goto label_1401a53b3
                                    
                                    goto label_1401a5073
                                
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 4)
                                
                                if ((rdi_4 & 0x20) != 0)
                                label_1401a53b3:
                                    int64_t rax_74 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_74, 5)
                                    
                                    if ((rdi_4 & 0x40) == 0)
                                        goto label_1401a507d
                                    
                                    goto label_1401a53c8
                                
                            label_1401a5073:
                                
                                if ((rdi_4 & 0x40) != 0)
                                label_1401a53c8:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_144.b s< 0)
                                    label_1401a53e0:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_76 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_76, 7)
                                else
                                label_1401a507d:
                                    
                                    if (temp0_144.b s< 0)
                                        goto label_1401a53e0
                                
                                arg5 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepu16_epi32(zmm2[0].o), var_700)
                                zmm5 = arg5 ^ arg13
                                bool cond:24_1 = _mm256_movemask_ps(arg5 & not.32(arg14)) == 0
                                var_710 = zmm2[0].o
                                uint32_t var_7e0_4[0x8] = zmm5
                                
                                if (cond:24_1)
                                    arg8 = arg7
                                    zmm0 = arg11
                                else
                                    zmm1 = var_840.32
                                    zmm0 = _mm256_blendv_ps(arg11, zmm1, zmm5)
                                    zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
                                    arg13 = _mm256_sub_epi32(arg11, zmm2)
                                    arg9 = arg5 & not.32(_mm256_cmpgt_epi32(arg13, zmm1) ^ zmm2)
                                    zmm5 = arg14 & arg9
                                    int32_t i_7 = _mm256_movemask_ps(zmm5)
                                    arg8 = arg7
                                    
                                    if (i_7 != 0)
                                        arg12 = arg11
                                        
                                        do
                                            arg11 = arg13
                                            int32_t temp0_243[0x8] = _mm256_add_epi32(arg13, arg13)
                                            zmm1 = _mm256_cvtepi32_epi64(temp0_243[0].o)
                                            arg13 = _mm256_add_epi64(arg6, zmm1)
                                            char temp0_246 = _mm256_movemask_ps(zmm5)
                                            int128_t var_390
                                            int64_t rax_55
                                            
                                            if ((temp0_246 & 1) != 0)
                                                zmm2[0].o = var_390
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *arg13[0].q, 0)
                                                
                                                if ((temp0_246 & 2) != 0)
                                                    rax_55 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_55, 1)
                                            else
                                                zmm2[0].o = var_390
                                                
                                                if ((temp0_246 & 2) != 0)
                                                    rax_55 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_55, 1)
                                            arg5[0].o = _mm256_extracti128_si256(temp0_243, 1)
                                            
                                            if ((temp0_246 & 4) == 0)
                                                arg7 = var_840.32
                                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                                
                                                if ((temp0_246 & 8) != 0)
                                                    goto label_1401a5128
                                                
                                                goto label_1401a521c
                                            
                                            zmm1[0].o = _mm256_extracti128_si256(arg13, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *zmm1[0].q, 2)
                                            arg7 = var_840.32
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_246 & 8) != 0)
                                            label_1401a5128:
                                                zmm1[0].o = _mm256_extracti128_si256(arg13, 1)
                                                int64_t rax_49 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_49, 3)
                                                arg13 = _mm256_add_epi64(arg15, arg5)
                                                
                                                if ((temp0_246 & 0x10) == 0)
                                                    goto label_1401a522a
                                                
                                                goto label_1401a514c
                                            
                                        label_1401a521c:
                                            arg13 = _mm256_add_epi64(arg15, arg5)
                                            
                                            if ((temp0_246 & 0x10) == 0)
                                            label_1401a522a:
                                                
                                                if ((temp0_246 & 0x20) != 0)
                                                    goto label_1401a515b
                                                
                                                goto label_1401a5234
                                            
                                        label_1401a514c:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg13[0].q, 4)
                                            
                                            if ((temp0_246 & 0x20) != 0)
                                            label_1401a515b:
                                                int64_t rax_51 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_51, 5)
                                                
                                                if ((temp0_246 & 0x40) == 0)
                                                    goto label_1401a523e
                                                
                                                goto label_1401a5170
                                            
                                        label_1401a5234:
                                            
                                            if ((temp0_246 & 0x40) != 0)
                                            label_1401a5170:
                                                zmm1[0].o = _mm256_extracti128_si256(arg13, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *zmm1[0].q, 6)
                                                
                                                if (temp0_246 s< 0)
                                                label_1401a5189:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    int64_t rax_53 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_53, 7)
                                            else
                                            label_1401a523e:
                                                
                                                if (temp0_246 s< 0)
                                                    goto label_1401a5189
                                            
                                            var_390 = zmm2[0].o
                                            zmm5 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                                _mm256_cvtepu16_epi32(zmm2[0].o), var_700) & arg9
                                            arg5[0].o = zx.o(0)
                                            zmm1 = zmm5 & arg14
                                            
                                            if (_mm256_movemask_ps(zmm1) != i_7)
                                                arg5 = zmm5 ^ arg9
                                            
                                            zmm0 = _mm256_blendv_ps(zmm0, arg12, zmm5)
                                            arg13 = _mm256_sub_epi32(arg11, 
                                                _mm256_cmpeq_epi32(zmm1, zmm1))
                                            arg9 = _mm256_cmpgt_epi32(arg13, arg7) & not.32(arg5)
                                            zmm5 = arg9 & arg14
                                            i_7 = _mm256_movemask_ps(zmm5)
                                            arg12 = arg11
                                        while (i_7 != 0)
                                
                                zmm2 = var_7e0_4
                                zmm1 = _mm256_andnot_ps(zmm2, arg14)
                                int32_t temp0_365 = _mm256_movemask_ps(zmm1)
                                arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                                
                                if (temp0_365 != 0)
                                    zmm1 = _mm256_xor_ps(zmm2, arg13)
                                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                    zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
                                    zmm5 = __vpaddd_ymmqq_ymmqq_memqq(arg13, var_960_2)
                                    zmm2 = _mm256_cmpgt_epi32(zmm5, zmm2)
                                    arg7 = zmm2 & zmm1
                                    arg11 = arg7 & arg14
                                    int32_t i_8 = _mm256_movemask_ps(arg11)
                                    
                                    if (i_8 != 0)
                                        do
                                            float temp0_385[0x8] = _mm256_add_epi32(zmm5, zmm5)
                                            zmm1 = _mm256_cvtepi32_epi64(temp0_385[0].o)
                                            float temp0_387[0x8] = _mm256_add_epi64(arg6, zmm1)
                                            char temp0_388 = _mm256_movemask_ps(arg11)
                                            int128_t var_3a0
                                            int64_t rax_136
                                            
                                            if ((temp0_388 & 1) != 0)
                                                zmm2[0].o = var_3a0
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *temp0_387[0].q, 0)
                                                
                                                if ((temp0_388 & 2) != 0)
                                                    rax_136 = __vpextrq_gpr64q_xmmdq_immb(
                                                        temp0_387[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_136, 1)
                                            else
                                                zmm2[0].o = var_3a0
                                                
                                                if ((temp0_388 & 2) != 0)
                                                    rax_136 = __vpextrq_gpr64q_xmmdq_immb(
                                                        temp0_387[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_136, 1)
                                            arg5[0].o = _mm256_extracti128_si256(temp0_385, 1)
                                            
                                            if ((temp0_388 & 4) == 0)
                                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                                
                                                if ((temp0_388 & 8) != 0)
                                                    goto label_1401a59df
                                                
                                                goto label_1401a5ad3
                                            
                                            zmm1[0].o = _mm256_extracti128_si256(temp0_387, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *zmm1[0].q, 2)
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_388 & 8) != 0)
                                            label_1401a59df:
                                                zmm1[0].o = _mm256_extracti128_si256(temp0_387, 1)
                                                int64_t rax_130 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_130, 3)
                                                arg9 = _mm256_add_epi64(arg15, arg5)
                                                
                                                if ((temp0_388 & 0x10) == 0)
                                                    goto label_1401a5ae1
                                                
                                                goto label_1401a5a03
                                            
                                        label_1401a5ad3:
                                            arg9 = _mm256_add_epi64(arg15, arg5)
                                            
                                            if ((temp0_388 & 0x10) == 0)
                                            label_1401a5ae1:
                                                
                                                if ((temp0_388 & 0x20) != 0)
                                                    goto label_1401a5a12
                                                
                                                goto label_1401a5aeb
                                            
                                        label_1401a5a03:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg9[0].q, 4)
                                            
                                            if ((temp0_388 & 0x20) != 0)
                                            label_1401a5a12:
                                                int64_t rax_132 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_132, 5)
                                                
                                                if ((temp0_388 & 0x40) == 0)
                                                    goto label_1401a5af5
                                                
                                                goto label_1401a5a27
                                            
                                        label_1401a5aeb:
                                            
                                            if ((temp0_388 & 0x40) != 0)
                                            label_1401a5a27:
                                                zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *zmm1[0].q, 6)
                                                
                                                if (temp0_388 s< 0)
                                                label_1401a5a40:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                                    int64_t rax_134 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_134, 7)
                                            else
                                            label_1401a5af5:
                                                
                                                if (temp0_388 s< 0)
                                                    goto label_1401a5a40
                                            
                                            var_3a0 = zmm2[0].o
                                            arg9 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                                _mm256_cvtepu16_epi32(zmm2[0].o), var_700)
                                                & not.32(arg7)
                                            arg5[0].o = zx.o(0)
                                            int32_t temp0_396 = _mm256_movemask_ps(arg9 & arg14)
                                            arg11[0].o = zx.o(0)
                                            
                                            if (temp0_396 != i_8)
                                                arg11 = arg9 ^ arg7
                                            
                                            zmm0 = _mm256_blendv_ps(zmm0, zmm5, arg9)
                                            zmm5 = _mm256_add_epi32(zmm5, arg13)
                                            zmm1 = _mm256_cmpgt_epi32(zmm5, arg5)
                                            arg7 = zmm1 & arg11
                                            arg11 = arg7 & arg14
                                            i_8 = _mm256_movemask_ps(arg11)
                                        while (i_8 != 0)
                                
                                arg12 = _mm256_blendv_ps(arg10, zmm0, arg14)
                                zmm5 = _mm256_add_epi32(arg12, arg12)
                                zmm0 = _mm256_add_epi64(arg6, _mm256_cvtepi32_epi64(zmm5[0].o))
                                int128_t var_720
                                
                                if ((rdi_4 & 1) != 0)
                                    zmm1[0].o = var_720
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 0)
                                    var_720 = zmm1[0].o
                                
                                arg7 = arg8
                                arg8 = var_920_1
                                arg9 = var_800_1
                                arg10 = var_940_1
                                arg11 = var_860_1
                                
                                if ((rdi_4 & 2) != 0)
                                    int64_t rax_139 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o = var_720
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_139, 1)
                                    var_720 = zmm1[0].o
                                
                                arg5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                
                                if ((rdi_4 & 4) != 0)
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm2[0].o = var_720
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                    label_1401a5c20:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_141 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_141, 3)
                                else
                                    zmm2[0].o = var_720
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                        goto label_1401a5c20
                                
                                zmm0 = _mm256_add_epi64(arg15, arg5)
                                
                                if ((rdi_4 & 0x10) == 0)
                                    arg5 = arg12
                                    
                                    if ((rdi_4 & 0x20) != 0)
                                        goto label_1401a5cd1
                                    
                                    goto label_1401a5c49
                                
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 4)
                                arg5 = arg12
                                
                                if ((rdi_4 & 0x20) != 0)
                                label_1401a5cd1:
                                    int64_t rax_144 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_144, 5)
                                    
                                    if ((rdi_4 & 0x40) == 0)
                                        goto label_1401a5c53
                                    
                                    goto label_1401a5ce6
                                
                            label_1401a5c49:
                                
                                if ((rdi_4 & 0x40) != 0)
                                label_1401a5ce6:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_144.b s< 0)
                                    label_1401a5cfe:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_146 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_146, 7)
                                else
                                label_1401a5c53:
                                    
                                    if (temp0_144.b s< 0)
                                        goto label_1401a5cfe
                                
                                zmm1 = _mm256_blendv_ps(var_7c0_1, _mm256_sub_epi32(arg5, arg13), 
                                    arg14)
                                arg5 = var_840.32
                                zmm0 = _mm256_cmpgt_epi32(zmm1, arg5) & arg14
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    zmm1 = _mm256_blendv_ps(zmm1, arg5, zmm0)
                                
                                arg14 = var_9a0_1
                                zmm5 = _mm256_add_epi32(zmm1, zmm1)
                                zmm0 = _mm256_add_epi64(arg6, _mm256_cvtepi32_epi64(zmm5[0].o))
                                int128_t var_420
                                int64_t rax_148
                                
                                if ((rdi_4 & 1) != 0)
                                    arg6[0].o = var_420
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 0)
                                    
                                    if ((rdi_4 & 2) != 0)
                                        rax_148 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_148, 1)
                                else
                                    arg6[0].o = var_420
                                    
                                    if ((rdi_4 & 2) != 0)
                                        rax_148 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_148, 1)
                                arg5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                var_960_1 = zmm1
                                
                                if ((rdi_4 & 4) == 0)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                        goto label_1401a4564
                                    
                                    goto label_1401a5d5d
                                
                                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 2)
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((rdi_4 & 8) != 0)
                                label_1401a4564:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    int64_t rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_8, 3)
                                    zmm0 = _mm256_add_epi64(arg15, arg5)
                                    
                                    if ((rdi_4 & 0x10) == 0)
                                        goto label_1401a5d6b
                                    
                                    goto label_1401a4588
                                
                            label_1401a5d5d:
                                zmm0 = _mm256_add_epi64(arg15, arg5)
                                
                                if ((rdi_4 & 0x10) != 0)
                                label_1401a4588:
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 4)
                                    arg15[0].o = zx.o(0)
                                    
                                    if ((rdi_4 & 0x20) != 0)
                                    label_1401a459c:
                                        int64_t rax_10 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_10, 5)
                                        
                                        if ((rdi_4 & 0x40) == 0)
                                            goto label_1401a5d84
                                        
                                        goto label_1401a45b1
                                else
                                label_1401a5d6b:
                                    arg15[0].o = zx.o(0)
                                    
                                    if ((rdi_4 & 0x20) != 0)
                                        goto label_1401a459c
                                
                                if ((rdi_4 & 0x40) != 0)
                                label_1401a45b1:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 6)
                                    zmm1 = var_900_1
                                    
                                    if (temp0_144.b s< 0)
                                    label_1401a45d2:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_12, 7)
                                else
                                label_1401a5d84:
                                    zmm1 = var_900_1
                                    
                                    if (temp0_144.b s< 0)
                                        goto label_1401a45d2
                                
                                var_720 = zmm2[0].o
                                zmm0 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                var_420 = arg6[0].o
                                arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                zmm5 = _mm256_xor_ps(zmm1, arg13)
                                arg5[0].o = zx.o(0)
                                
                                if (arg20 != 1)
                                    zmm1 = __vpmaxsd_ymmqq_ymmqq_memqq(
                                        _mm256_sub_epi32(arg6, zmm0), var_880_1)
                                    arg5 = _mm256_div_ps(
                                        _mm256_sub_ps(var_1c0_1, _mm256_cvtepi32_ps(zmm0)), 
                                        _mm256_cvtepi32_ps(zmm1))
                            
                            zmm0 = _mm256_blendv_ps(arg15, arg5, zmm5)
                            arg6 = var_740_1
                            zmm5 = var_880_1
                            arg5 = arg12
                    
                    arg7 = _mm256_blendv_ps(arg7, zmm0, arg11)
                    var_7e0_1 = arg7
            
            zmm1 = var_9c0
            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm2 = _mm256_cvtepi32_epi64(zmm0[0].o)
            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
            float var_560_1[0x8] = arg5
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg5, var_6e0)
            arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
            zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
            float var_7c0_2[0x8] = zmm1
            var_760 = zmm0
            zmm0 = _mm256_add_epi64(zmm0, zmm1)
            int32_t var_880_2[0x8] = zmm2
            float var_860_2[0x8] = arg5
            arg5 = _mm256_add_epi64(arg5, zmm2)
            zmm1 = _mm256_add_epi64(arg5, arg9)
            float var_900_2[0x8] = zmm1
            arg12 = _mm256_add_epi64(zmm0, arg6)
            arg11 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm5, var_7a0)
            zmm0 = arg14 & not.32(arg11)
            arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                arg6 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg15, var_520)
                arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                arg5[0].o &= zmm0[0].o
                zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                    zmm5 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                    arg5 = __vpaddq_ymmqq_ymmqq_memqq(var_880_2, var_8c0_1)
                    arg9 = __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_820_1)
                    arg13 = __vpbroadcastq_ymmqq_memq(4)
                    arg9 = __vpaddq_ymmqq_ymmqq_memqq(arg9, var_760)
                    arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg5, var_860_2)
                    arg15 = _mm256_add_epi64(arg5, arg13)
                    arg13 = _mm256_add_epi64(arg9, arg13)
                    arg14[0].o = _mm256_extracti128_si256(zmm5, 1)
                    zmm2[0].o = zx.o(0)
                    arg8[0].o = zmm5[0].o
                    float temp0_479[0x4]
                    int32_t temp1_6
                    temp0_479, temp1_6 =
                        _mm256_i64gather_ps(zx.o(0), *(r12 + arg13[0].q), arg8[0].o)
                    zmm2[0].o = temp0_479
                    arg8[0].o = temp1_6
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    var_7c0_2[0].o = arg14[0].o
                    float temp0_481[0x4]
                    int32_t temp1_7
                    temp0_481, temp1_7 =
                        _mm256_i64gather_ps(arg8[0].o, *(r12 + arg15[0].q), var_7c0_2[0].o)
                    arg8[0].o = temp0_481
                    var_7c0_2[0].o = temp1_7
                    zmm1 = __vpbroadcastq_ymmqq_memq(8)
                    arg13 = _mm256_add_epi64(arg5, zmm1)
                    zmm1 = _mm256_add_epi64(arg9, zmm1)
                    arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                    arg7[0].o = zmm5[0].o
                    float temp0_486[0x4]
                    int32_t temp1_8
                    temp0_486, temp1_8 =
                        _mm256_i64gather_ps(arg15[0].o, *(r12 + zmm1[0].q), arg7[0].o)
                    arg15[0].o = temp0_486
                    arg7[0].o = temp1_8
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg7[0].o = arg14[0].o
                    float temp0_488[0x4]
                    int32_t temp1_9
                    temp0_488, temp1_9 =
                        _mm256_i64gather_ps(zmm1[0].o, *(r12 + arg13[0].q), arg7[0].o)
                    zmm1[0].o = temp0_488
                    arg7[0].o = temp1_9
                    arg7 = __vpbroadcastq_ymmqq_memq(0xc)
                    arg9 = _mm256_add_epi64(arg9, arg7)
                    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                    arg10[0].o = zmm5[0].o
                    float temp0_492[0x4]
                    int32_t temp1_10
                    temp0_492, temp1_10 =
                        _mm256_i64gather_ps(arg13[0].o, *(r12 + arg9[0].q), arg10[0].o)
                    arg13[0].o = temp0_492
                    arg10[0].o = temp1_10
                    arg10 = var_940_1
                    arg9 = var_800_1
                    arg5 = _mm256_add_epi64(arg5, arg7)
                    arg7[0].o = zx.o(0)
                    float temp0_494[0x4]
                    int32_t temp1_11
                    temp0_494, temp1_11 =
                        _mm256_i64gather_ps(zx.o(0), *(r12 + arg5[0].q), arg14[0].o)
                    arg7[0].o = temp0_494
                    arg14[0].o = temp1_11
                    arg14 = var_9a0_1
                    zmm2 = _mm256_insertf128_ps(zmm2, arg8[0].o, 1)
                    arg8 = var_920_1
                    zmm1 = _mm256_insertf128_ps(arg15, zmm1[0].o, 1)
                    arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                    arg5 = _mm256_insertf128_ps(arg13, arg7[0].o, 1)
                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    var_4a0 = _mm256_maskstore_ps(zmm5, zmm2)
                    var_480 = _mm256_maskstore_ps(zmm5, zmm1)
                    var_460 = _mm256_maskstore_ps(zmm5, arg5)
                
                arg5 = arg6 ^ arg13
                arg6[0].o = _mm256_extracti128_si256(arg5, 1)
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                arg6[0].o = zmm0[0].o & arg5[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    zmm0 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
                    arg9 = _mm256_srai_epi32(_mm256_slli_epi32(var_980, 0x1f), 0x1f)
                    arg15 = arg9 & zmm0
                    arg13 = arg12
                    arg14 = arg12
                    zmm5 = var_900_2
                    
                    if (_mm256_movemask_ps(arg15) != 0)
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg10 = _mm256_permutevar8x32_ps(data_143442920, arg15)
                        float temp0_517[0x8] = _mm256_permutevar8x32_ps(data_143442940, arg15)
                        zmm5 = _mm256_add_epi64(
                            __vpaddq_ymmqq_ymmqq_memqq(
                                __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_820_1), var_760), 
                            zmm1)
                        arg7[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg8[0].o = zx.o(0)
                        float temp0_522[0x4]
                        int32_t temp1_12
                        temp0_522, temp1_12 =
                            _mm256_i64gather_ps(arg8[0].o, *(r12 + zmm5[0].q), arg15[0].o)
                        arg8[0].o = temp0_522
                        arg15[0].o = temp1_12
                        zmm2 = var_880_2
                        zmm5 = _mm256_add_epi64(
                            __vpaddq_ymmqq_ymmqq_memqq(__vpaddq_ymmqq_ymmqq_memqq(zmm2, var_8c0_1), 
                                var_860_2), 
                            zmm1)
                        zmm2[0].o = zx.o(0)
                        float temp0_526[0x4]
                        int32_t temp1_13
                        temp0_526, temp1_13 =
                            _mm256_i64gather_ps(zx.o(0), *(r12 + zmm5[0].q), arg7[0].o)
                        zmm2[0].o = temp0_526
                        arg7[0].o = temp1_13
                        arg13 = _mm256_blendv_ps(arg14, _mm256_add_epi64(arg14, zmm1), arg10)
                        arg10 = var_940_1
                        zmm5 = _mm256_blendv_ps(var_900_2, _mm256_add_epi64(var_900_2, zmm1), 
                            temp0_517)
                        arg5 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                        arg8 = var_920_1
                    
                    arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                    var_4a0 = _mm256_maskstore_ps(zmm0, _mm256_blendv_ps(arg15, arg5, arg9))
                    zmm1 = __vpbroadcastd_ymmqq_memd(2)
                    arg9 = zmm1 & var_980
                    zmm1 = _mm256_cmpeq_epi32(arg9, zmm1)
                    zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    arg5[0].o = arg6[0].o & zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                        zmm2 = _mm256_permutevar8x32_epi32(data_143442920, zmm1)
                        arg5 = _mm256_permutevar8x32_epi32(data_143442940, zmm1)
                        arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg8[0].o = zx.o(0)
                        float temp0_549[0x4]
                        int32_t temp1_14
                        temp0_549, temp1_14 = _mm256_i64gather_ps(arg8[0].o, *arg13[0].q, zmm1[0].o)
                        arg8[0].o = temp0_549
                        zmm1[0].o = temp1_14
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg13 = _mm256_blendv_ps(arg13, _mm256_add_epi64(arg13, zmm1), zmm2)
                        arg10 = var_940_1
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        float temp0_554[0x4]
                        int32_t temp1_15
                        temp0_554, temp1_15 = _mm256_i64gather_ps(zmm2[0].o, *zmm5[0].q, arg7[0].o)
                        zmm2[0].o = temp0_554
                        arg7[0].o = temp1_15
                        zmm5 = _mm256_blendv_ps(zmm5, _mm256_add_epi64(zmm5, zmm1), arg5)
                        arg5 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                        arg8 = var_920_1
                    
                    arg12 = arg14
                    arg14 = var_9a0_1
                    var_480 =
                        _mm256_maskstore_ps(zmm0, _mm256_cmpeq_epi32(arg9, arg15) & not.32(arg5))
                    zmm1 = var_8a0_1
                    arg9 = zmm1 & var_980
                    zmm1 = _mm256_cmpeq_epi32(arg9, zmm1)
                    zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    arg5[0].o = arg6[0].o & zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                        zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg5[0].o = zx.o(0)
                        float temp0_571[0x4]
                        int32_t temp1_16
                        temp0_571, temp1_16 = _mm256_i64gather_ps(zx.o(0), *arg13[0].q, zmm1[0].o)
                        arg5[0].o = temp0_571
                        zmm1[0].o = temp1_16
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_573[0x4]
                        int32_t temp1_17
                        temp0_573, temp1_17 = _mm256_i64gather_ps(zmm1[0].o, *zmm5[0].q, zmm2[0].o)
                        zmm1[0].o = temp0_573
                        zmm2[0].o = temp1_17
                        arg6 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                    
                    zmm1 = _mm256_cmpeq_epi32(arg9, arg15) & not.32(arg6)
                    var_460 = _mm256_maskstore_ps(zmm0, zmm1)
                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    arg9 = var_800_1
            
            zmm0 = arg11 ^ arg13
            arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            var_840 = zmm1[0].o
            zmm0 = arg14 & not.32(zmm0)
            arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            bool cond:5_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            float var_160_1[0x8] = arg11
            bool cond:9_1
            
            if (not(cond:5_1))
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(arg10[0].o, var_540)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    float var_620_1[0x8] = arg15
                    float var_640_1[0x8] = arg15
                    float var_660_1[0x8] = arg15
                    float var_680_1[0x8] = arg15
                    float var_6a0_1[0x8] = arg15
                    float var_6c0_1[0x8] = arg15
                    zmm5 = arg8 & _mm256_srai_epi32(_mm256_slli_epi32(var_980, 0x1f), 0x1f)
                    arg14 = arg9
                    arg9 = zmm5 & var_8e0_1
                    zmm0 = var_740_1
                    arg11 = zmm0
                    arg6 = arg14
                    
                    if (_mm256_movemask_ps(arg9) != 0)
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg11 = _mm256_add_epi64(arg14, zmm1)
                        zmm2 = _mm256_add_epi64(zmm0, zmm1)
                        arg5 = data_143442920
                        arg10 = _mm256_permutevar8x32_ps(arg5, arg9)
                        zmm2 = _mm256_blendv_ps(zmm0, zmm2, arg10)
                        arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                        arg7[0].o = arg9[0].o
                        arg8[0].o = zx.o(0)
                        float temp0_596[0x4]
                        int32_t temp1_18
                        temp0_596, temp1_18 = _mm256_i64gather_ps(arg8[0].o, *zmm0[0].q, arg7[0].o)
                        arg8[0].o = temp0_596
                        arg7[0].o = temp1_18
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg6[0].o = arg5[0].o
                        float temp0_598[0x4]
                        int32_t temp1_19
                        temp0_598, temp1_19 = _mm256_i64gather_ps(arg7[0].o, *arg14[0].q, arg6[0].o)
                        arg7[0].o = temp0_598
                        arg6[0].o = temp1_19
                        float temp0_599[0x8] = _mm256_permutevar8x32_ps(data_143442940, arg9)
                        arg13 = _mm256_blendv_ps(arg14, arg11, temp0_599)
                        zmm0 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                        arg8 = var_920_1
                        var_660_1 = _mm256_maskstore_ps(zmm5, zmm0)
                        zmm0 = _mm256_add_epi64(zmm2, zmm1)
                        arg11 = _mm256_blendv_ps(zmm2, zmm0, arg10)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        float temp0_606[0x4]
                        int32_t temp1_20
                        temp0_606, temp1_20 = _mm256_i64gather_ps(arg7[0].o, *zmm2[0].q, arg9[0].o)
                        arg7[0].o = temp0_606
                        arg9[0].o = temp1_20
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        float temp0_608[0x4]
                        int32_t temp1_21
                        temp0_608, temp1_21 = _mm256_i64gather_ps(zmm2[0].o, *arg13[0].q, arg5[0].o)
                        zmm2[0].o = temp0_608
                        arg5[0].o = temp1_21
                        arg6 = _mm256_blendv_ps(arg13, _mm256_add_epi64(arg13, zmm1), temp0_599)
                        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                        var_6c0_1 =
                            _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(arg7, zmm2[0].o, 1))
                    
                    zmm1 = __vpbroadcastd_ymmqq_memd(2)
                    zmm2 = zmm1 & var_980
                    zmm5 = _mm256_cmpeq_epi32(zmm2, zmm1) & arg8
                    arg14 = var_9a0_1
                    zmm1 = arg14 & not.32(zmm5)
                    zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                        arg10 = var_940_1
                        zmm0 = var_8a0_1
                    else
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                        zmm2 = __vpbroadcastq_ymmqq_memq(4)
                        arg9 = _mm256_add_epi64(arg6, zmm2)
                        arg7 = _mm256_add_epi64(arg11, zmm2)
                        arg5 = data_143442920
                        uint32_t temp0_626[0x8] = _mm256_permutevar8x32_epi32(arg5, zmm1)
                        arg7 = _mm256_blendv_ps(arg11, arg7, temp0_626)
                        arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        arg8[0].o = zmm1[0].o
                        float temp0_630[0x4]
                        int32_t temp1_22
                        temp0_630, temp1_22 =
                            _mm256_i64gather_ps(arg10[0].o, *arg11[0].q, arg8[0].o)
                        arg10[0].o = temp0_630
                        arg8[0].o = temp1_22
                        zmm0[0].o = arg5[0].o
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_632[0x4]
                        int32_t temp1_23
                        temp0_632, temp1_23 = _mm256_i64gather_ps(arg8[0].o, *arg6[0].q, zmm0[0].o)
                        arg8[0].o = temp0_632
                        zmm0[0].o = temp1_23
                        uint32_t temp0_633[0x8] = _mm256_permutevar8x32_epi32(data_143442940, zmm1)
                        float temp0_634[0x8] = _mm256_blendv_ps(arg6, arg9, temp0_633)
                        var_640_1 =
                            _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(arg10, arg8[0].o, 1))
                        arg11 = _mm256_blendv_ps(arg7, _mm256_add_epi64(arg7, zmm2), temp0_626)
                        arg13 = _mm256_cmpeq_epi32(temp0_626, temp0_626)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_641[0x4]
                        int32_t temp1_24
                        temp0_641, temp1_24 = _mm256_i64gather_ps(arg8[0].o, *arg7[0].q, zmm1[0].o)
                        arg8[0].o = temp0_641
                        zmm1[0].o = temp1_24
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_643[0x4]
                        int32_t temp1_25
                        temp0_643, temp1_25 =
                            _mm256_i64gather_ps(zmm1[0].o, *temp0_634[0].q, arg5[0].o)
                        zmm1[0].o = temp0_643
                        arg5[0].o = temp1_25
                        zmm2 = _mm256_add_epi64(temp0_634, zmm2)
                        arg6 = _mm256_blendv_ps(temp0_634, zmm2, temp0_633)
                        arg14 = var_9a0_1
                        zmm0 = var_8a0_1
                        zmm1 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                        arg8 = var_920_1
                        var_6a0_1 = _mm256_maskstore_ps(zmm5, zmm1)
                        arg10 = var_940_1
                    
                    zmm5 = _mm256_cmpeq_epi32(zmm0 & var_980, zmm0) & arg8
                    zmm1 = arg14 & not.32(zmm5)
                    zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                        zmm2 = __vpbroadcastq_ymmqq_memq(4)
                        arg5 = _mm256_add_epi64(arg6, zmm2)
                        zmm2 = _mm256_add_epi64(arg11, zmm2)
                        arg7 = _mm256_permutevar8x32_epi32(data_143442920, zmm1)
                        float temp0_660[0x8] = _mm256_blendv_ps(arg11, zmm2, arg7)
                        arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg8[0].o = zx.o(0)
                        zmm2[0].o = zmm1[0].o
                        float temp0_662[0x4]
                        int32_t temp1_26
                        temp0_662, temp1_26 = _mm256_i64gather_ps(arg8[0].o, *arg11[0].q, zmm2[0].o)
                        arg8[0].o = temp0_662
                        zmm2[0].o = temp1_26
                        zmm0[0].o = zx.o(0)
                        zmm2[0].o = arg7[0].o
                        float temp0_663[0x4]
                        int32_t temp1_27
                        temp0_663, temp1_27 = _mm256_i64gather_ps(zmm0[0].o, *arg6[0].q, zmm2[0].o)
                        zmm0[0].o = temp0_663
                        zmm2[0].o = temp1_27
                        zmm2 = _mm256_blendv_ps(arg6, arg5, 
                            _mm256_permutevar8x32_epi32(data_143442940, zmm1))
                        zmm0 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                        arg8 = var_920_1
                        var_620_1 = _mm256_maskstore_ps(zmm5, zmm0)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        float temp0_669[0x4]
                        int32_t temp1_28
                        temp0_669, temp1_28 =
                            _mm256_i64gather_ps(zmm0[0].o, *temp0_660[0].q, zmm1[0].o)
                        zmm0[0].o = temp0_669
                        zmm1[0].o = temp1_28
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_671[0x4]
                        int32_t temp1_29
                        temp0_671, temp1_29 = _mm256_i64gather_ps(zmm1[0].o, *zmm2[0].q, arg7[0].o)
                        zmm1[0].o = temp0_671
                        arg7[0].o = temp1_29
                        var_680_1 =
                            _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                    
                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_880_2, var_8c0_1)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_820_1)
                    zmm2 = __vpbroadcastq_ymmqq_memq(4)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_760)
                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_860_2)
                    zmm1 = _mm256_add_epi64(zmm1, zmm2)
                    arg5[0].o = arg10[0].o
                    arg6[0].o = zx.o(0)
                    uint32_t temp0_680[0x4]
                    int32_t temp1_30
                    temp0_680, temp1_30 =
                        _mm256_i64gather_epi32(arg6[0].o, *(r12 + zmm1[0].q), arg5[0].o)
                    arg6[0].o = temp0_680
                    arg5[0].o = temp1_30
                    zmm0 = _mm256_add_epi64(zmm0, zmm2)
                    zmm1[0].o = zx.o(0)
                    zmm2[0].o = var_540
                    uint32_t temp0_682[0x4]
                    int32_t temp1_31
                    temp0_682, temp1_31 =
                        _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm0[0].q), zmm2[0].o)
                    zmm1[0].o = temp0_682
                    zmm2[0].o = temp1_31
                    zmm0 = _mm256_inserti128_si256(arg6, zmm1[0].o, 1)
                    zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                    zmm2 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg6 = var_6a0_1
                    zmm5 = var_680_1
                    arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_6c0_1, 
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                zmm0 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f)), 
                        var_660_1)
                    uint32_t temp0_694[0x8] = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, temp0_694))
                    arg7 = _mm256_broadcast_ss(1023f)
                    zmm2 = _mm256_div_ps(zmm2, arg7)
                    zmm0 =
                        _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, temp0_694)), arg7)
                    zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg6, var_640_1)
                    zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, zmm5, var_620_1)
                    var_4a0 = _mm256_maskstore_ps(arg10, arg5)
                    var_480 = _mm256_maskstore_ps(arg10, zmm2)
                    var_460 = _mm256_maskstore_ps(arg10, zmm0)
                    arg9 = var_800_1
                
                zmm0[0].o = _mm256_extracti128_si256(arg8, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                arg5[0].o = _mm256_extracti128_si256(var_8e0_1, 1)
                var_8e0_1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_8e0_1[0].o, arg5[0].o)
                zmm5[0].o = zmm0[0].o ^ var_840
                zmm0[0].o = zmm5[0].o & var_8e0_1[0].o
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                cond:9_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
                arg10 = var_900_2
            
            if (cond:5_1 || cond:9_1)
                arg11 = var_8e0_1
                arg14 = var_8a0_1
            else
                arg9 = __vpbroadcastd_ymmqq_memd(2)
                zmm1 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg9, var_7a0)
                arg6 = arg14 & not.32(zmm1)
                zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                arg13[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    arg11 = var_8e0_1
                    arg9 = var_800_1
                else
                    arg15 = _mm256_srai_epi32(_mm256_slli_epi32(var_980, 0x1f), 0x1f)
                    zmm0 = arg15 & arg6
                    
                    if (_mm256_movemask_ps(zmm0) == 0)
                        arg10[0].o = zx.o(0)
                    else
                        zmm0 = __vpbroadcastq_ymmqq_memq(2)
                        zmm2 = _mm256_add_epi64(arg12, zmm0)
                        arg7 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 0x1f) & arg15
                        arg8 = _mm256_permutevar8x32_epi32(data_143442920, arg7)
                        arg12 = _mm256_blendv_ps(arg12, zmm2, arg8)
                        zmm0 = _mm256_add_epi64(arg10, zmm0)
                        zmm2 = _mm256_permutevar8x32_epi32(data_143442940, arg7)
                        var_900_2 = _mm256_blendv_ps(arg10, zmm0, zmm2)
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(
                            __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_820_1), var_760)
                        arg7 = __vpaddq_ymmqq_ymmqq_memqq(
                            __vpaddq_ymmqq_ymmqq_memqq(var_880_2, var_8c0_1), var_860_2)
                        arg10 = __vpbroadcastq_ymmqq_memq(4)
                        arg7 = _mm256_add_epi64(arg7, arg10)
                        zmm0 = _mm256_add_epi64(zmm0, arg10)
                        arg10[0].o = zx.o(0)
                        zmm0 = _mm256_blendv_ps(arg10, zmm0, arg8)
                        zmm2 = _mm256_blendv_ps(arg10, arg7, zmm2)
                        int64_t r8_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rcx_11 = zmm0[0].q
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t r10_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        int64_t rdi_5 = zmm0[0].q
                        int64_t rsi_5 = zmm2[0].q
                        int64_t r11_2 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                        int64_t rbx_8 = zmm0[0].q
                        int64_t rax_163 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = zx.o(*(r12 + rcx_11))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r8_2), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rdi_5), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r10_2), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rsi_5), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r11_2), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rbx_8), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rax_163), 7)
                        uint32_t temp0_750[0x8] = _mm256_cvtepu16_epi32(zmm0[0].o)
                        zmm2 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(temp0_750, zmm2))
                    
                    var_4a0 = _mm256_maskstore_ps(arg6, _mm256_blendv_ps(arg10, zmm0, arg15))
                    arg11 = arg9 & var_980
                    zmm0 = _mm256_cmpeq_epi32(arg11, arg9)
                    zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm0[0].o &= arg13[0].o
                    zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    char temp0_880 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
                    arg15[0].o = zx.o(0)
                    
                    if (temp0_880 == 0)
                        arg8 = var_920_1
                        arg9 = var_800_1
                        arg10 = var_900_2
                    else
                        int128_t var_3d0
                        int64_t rax_181
                        
                        if ((temp0_880 & 1) != 0)
                            arg7[0].o = var_3d0
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg12[0].q, 0)
                            
                            if ((temp0_880 & 2) != 0)
                                rax_181 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_181, 1)
                        else
                            arg7[0].o = var_3d0
                            
                            if ((temp0_880 & 2) != 0)
                                rax_181 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_181, 1)
                        arg8 = var_920_1
                        arg10 = var_900_2
                        
                        if ((temp0_880 & 4) == 0)
                            if ((temp0_880 & 8) != 0)
                                goto label_1401a7732
                            
                            goto label_1401a75cb
                        
                        zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm2[0].q, 2)
                        
                        if ((temp0_880 & 8) == 0)
                        label_1401a75cb:
                            zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            
                            if ((temp0_880 & 0x10) != 0)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg10[0].q, 4)
                        else
                        label_1401a7732:
                            zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                            int64_t rax_187 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_187, 3)
                            zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            
                            if ((temp0_880 & 0x10) != 0)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg10[0].q, 4)
                        
                        uint32_t temp0_1092[0x8] = _mm256_slli_epi32(zmm0, 0x1f)
                        var_940_1[0].o = zmm5[0].o
                        zmm5 = zmm1
                        zmm1 = arg12
                        
                        if ((temp0_880 & 0x20) != 0)
                            int64_t rax_183 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_183, 5)
                        
                        arg12 = __vpbroadcastq_ymmqq_memq(2)
                        arg9 = _mm256_srai_epi32(temp0_1092, 0x1f)
                        
                        if ((temp0_880 & 0x40) != 0)
                            temp0_1092[0].o = _mm256_extracti128_si256(arg10, 1)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *temp0_1092[0].q, 6)
                        
                        zmm0 = _mm256_add_epi64(arg10, arg12)
                        arg12 = _mm256_add_epi64(zmm1, arg12)
                        arg15 = _mm256_permutevar8x32_epi32(data_143442920, arg9)
                        zmm2 = data_143442940
                        arg9 = _mm256_permutevar8x32_epi32(zmm2, arg9)
                        
                        if (temp0_880 s< 0)
                            zmm2[0].o = _mm256_extracti128_si256(arg10, 1)
                            int64_t rax_185 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_185, 7)
                        
                        arg12 = _mm256_blendv_ps(zmm1, arg12, arg15)
                        arg10 = _mm256_blendv_ps(arg10, zmm0, arg9)
                        var_3d0 = arg7[0].o
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                            _mm256_cvtepu16_epi32(arg7[0].o), 
                            __vpbroadcastd_ymmqq_memd(0xffffff01)))
                        arg15[0].o = zx.o(0)
                        arg9 = var_800_1
                        zmm1 = zmm5
                        zmm5[0].o = var_940_1[0].o
                    
                    zmm2 = _mm256_cmpeq_epi32(arg11, arg15)
                    var_480 = _mm256_maskstore_ps(arg6, zmm2 & not.32(zmm0))
                    arg11 = var_8a0_1 & var_980
                    zmm0 = _mm256_cmpeq_epi32(arg11, var_8a0_1)
                    zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm0[0].o &= arg13[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_1118 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_1118 == 0)
                        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    else
                        int128_t var_3e0
                        int64_t rax_189
                        
                        if ((temp0_1118 & 1) != 0)
                            zmm2[0].o = var_3e0
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg12[0].q, 0)
                            
                            if ((temp0_1118 & 2) != 0)
                                rax_189 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_189, 1)
                        else
                            zmm2[0].o = var_3e0
                            
                            if ((temp0_1118 & 2) != 0)
                                rax_189 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_189, 1)
                        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                        
                        if ((temp0_1118 & 4) == 0)
                            if ((temp0_1118 & 8) != 0)
                                goto label_1401a78bd
                            
                            goto label_1401a7794
                        
                        zmm0[0].o = _mm256_extracti128_si256(arg12, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                        
                        if ((temp0_1118 & 8) != 0)
                        label_1401a78bd:
                            zmm0[0].o = _mm256_extracti128_si256(arg12, 1)
                            int64_t rax_194 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_194, 3)
                            
                            if ((temp0_1118 & 0x10) == 0)
                                goto label_1401a779e
                            
                            goto label_1401a78dd
                        
                    label_1401a7794:
                        
                        if ((temp0_1118 & 0x10) == 0)
                        label_1401a779e:
                            
                            if ((temp0_1118 & 0x20) != 0)
                                goto label_1401a78ec
                            
                            goto label_1401a77a8
                        
                    label_1401a78dd:
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 4)
                        
                        if ((temp0_1118 & 0x20) != 0)
                        label_1401a78ec:
                            int64_t rax_196 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_196, 5)
                            
                            if ((temp0_1118 & 0x40) == 0)
                                goto label_1401a77b2
                            
                            goto label_1401a7901
                        
                    label_1401a77a8:
                        
                        if ((temp0_1118 & 0x40) != 0)
                        label_1401a7901:
                            zmm0[0].o = _mm256_extracti128_si256(arg10, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                            
                            if (temp0_1118 s< 0)
                            label_1401a7919:
                                zmm0[0].o = _mm256_extracti128_si256(arg10, 1)
                                int64_t rax_198 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_198, 7)
                        else
                        label_1401a77b2:
                            
                            if (temp0_1118 s< 0)
                                goto label_1401a7919
                        
                        var_3e0 = zmm2[0].o
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                            _mm256_cvtepu16_epi32(zmm2[0].o), 
                            __vpbroadcastd_ymmqq_memd(0xffffff01)))
                    
                    zmm2 = _mm256_cmpeq_epi32(arg11, arg15)
                    zmm0 = zmm2 & not.32(zmm0)
                    var_460 = _mm256_maskstore_ps(arg6, zmm0)
                    arg11 = var_8e0_1
                
                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, arg5[0].o)
                zmm0[0].o ^= zmm5[0].o
                zmm0[0].o &= zmm1[0].o
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    arg14 = var_8a0_1
                else
                    zmm1 = __vpbroadcastd_ymmqq_memd(6)
                    arg5 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm1, var_7a0)
                    arg6 = arg14 & not.32(arg5)
                    zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        var_4a0 = _mm256_maskstore_ps(arg6, arg15)
                        var_480 = _mm256_maskstore_ps(arg6, arg15)
                        var_460 = _mm256_maskstore_ps(arg6, arg15)
                    
                    zmm1 = arg5 ^ arg13
                    zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                    zmm0[0].o &= zmm1[0].o
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg14 = var_8a0_1
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm0 = _mm256_cvtepi16_epi32(zmm0[0].o)
                        var_4a0 = _mm256_maskstore_ps(zmm0, arg15)
                        var_480 = _mm256_maskstore_ps(zmm0, arg15)
                        var_460 = _mm256_maskstore_ps(zmm0, arg15)
            
            zmm1 = var_960_1
            zmm0 = _mm256_cmpeq_epi32(var_560_1, zmm1)
            zmm2 = zmm0 & not.32(arg11)
            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
            arg10[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                arg12 = var_580
                zmm0 = arg11 ^ arg13
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    goto label_1401a7df2
            else
                int32_t var_9a0_2[0x8] = zmm2
                zmm2 = var_160_1
                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                int32_t temp0_761[0x8] = __vpmulld_ymmqq_ymmqq_memqq(zmm1, var_6e0)
                zmm1[0].o = _mm256_extracti128_si256(temp0_761, 1)
                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                zmm2 = _mm256_cvtepi32_epi64(temp0_761[0].o)
                int32_t var_900_3[0x8] = zmm2
                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_7c0_2)
                float var_960_3[0x8] = zmm1
                arg6 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_880_2)
                float var_860_3[0x8] = _mm256_add_epi64(arg6, arg9)
                zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_740_1)
                float var_940_2[0x8] = zmm1
                zmm0[0].o &= arg10[0].o
                zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                float var_380[0x8]
                float var_360[0x8]
                float var_340[0x8]
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                    arg6 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg15, var_520)
                    zmm2[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                    zmm5[0].o = zmm0[0].o & zmm2[0].o
                    zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                    zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                        zmm5 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                        zmm2 = __vpaddq_ymmqq_ymmqq_memqq(var_880_2, var_8c0_1)
                        arg7 = __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_820_1)
                        arg11 = __vpbroadcastq_ymmqq_memq(4)
                        arg7 = __vpaddq_ymmqq_ymmqq_memqq(arg7, var_900_3)
                        zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_960_3)
                        arg13 = _mm256_add_epi64(zmm2, arg11)
                        arg11 = _mm256_add_epi64(arg7, arg11)
                        arg15[0].o = _mm256_extracti128_si256(zmm5, 1)
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                        arg9[0].o = zmm5[0].o
                        float temp0_792[0x4]
                        int32_t temp1_32
                        temp0_792, temp1_32 =
                            _mm256_i64gather_ps(arg14[0].o, *(r12 + arg11[0].q), arg9[0].o)
                        arg14[0].o = temp0_792
                        arg9[0].o = temp1_32
                        arg5[0].o = zx.o(0)
                        var_7c0_2[0].o = arg15[0].o
                        float temp0_793[0x4]
                        int32_t temp1_33
                        temp0_793, temp1_33 =
                            _mm256_i64gather_ps(arg5[0].o, *(r12 + arg13[0].q), var_7c0_2[0].o)
                        arg5[0].o = temp0_793
                        var_7c0_2[0].o = temp1_33
                        zmm1 = __vpbroadcastq_ymmqq_memq(8)
                        arg9 = _mm256_add_epi64(zmm2, zmm1)
                        zmm1 = _mm256_add_epi64(arg7, zmm1)
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        arg8[0].o = zmm5[0].o
                        float temp0_798[0x4]
                        int32_t temp1_34
                        temp0_798, temp1_34 =
                            _mm256_i64gather_ps(arg11[0].o, *(r12 + zmm1[0].q), arg8[0].o)
                        arg11[0].o = temp0_798
                        arg8[0].o = temp1_34
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg8[0].o = arg15[0].o
                        float temp0_800[0x4]
                        int32_t temp1_35
                        temp0_800, temp1_35 =
                            _mm256_i64gather_ps(zmm1[0].o, *(r12 + arg9[0].q), arg8[0].o)
                        zmm1[0].o = temp0_800
                        arg8[0].o = temp1_35
                        arg8 = __vpbroadcastq_ymmqq_memq(0xc)
                        arg13 = _mm256_add_epi64(arg7, arg8)
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        arg7[0].o = zmm5[0].o
                        float temp0_804[0x4]
                        int32_t temp1_36
                        temp0_804, temp1_36 =
                            _mm256_i64gather_ps(arg9[0].o, *(r12 + arg13[0].q), arg7[0].o)
                        arg9[0].o = temp0_804
                        arg7[0].o = temp1_36
                        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                        zmm2 = _mm256_add_epi64(zmm2, arg8)
                        arg8 = var_920_1
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        float temp0_808[0x4]
                        int32_t temp1_37
                        temp0_808, temp1_37 =
                            _mm256_i64gather_ps(arg7[0].o, *(r12 + zmm2[0].q), arg15[0].o)
                        arg7[0].o = temp0_808
                        arg15[0].o = temp1_37
                        arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                        zmm2 = _mm256_insertf128_ps(arg14, arg5[0].o, 1)
                        arg14 = var_8a0_1
                        zmm1 = _mm256_insertf128_ps(arg11, zmm1[0].o, 1)
                        arg11 = var_8e0_1
                        arg5 = _mm256_insertf128_ps(arg9, arg7[0].o, 1)
                        arg9 = var_800_1
                        var_380 = _mm256_maskstore_ps(zmm5, zmm2)
                        var_360 = _mm256_maskstore_ps(zmm5, zmm1)
                        var_340 = _mm256_maskstore_ps(zmm5, arg5)
                    
                    zmm2 = arg6 ^ arg13
                    arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                    arg6[0].o = zmm0[0].o & zmm2[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        var_760[0].o = arg10[0].o
                        zmm0 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
                        arg13 = _mm256_srai_epi32(_mm256_slli_epi32(var_980, 0x1f), 0x1f)
                        arg14 = arg13 & zmm0
                        arg10 = var_940_2
                        zmm5 = var_860_3
                        
                        if (_mm256_movemask_ps(arg14) != 0)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            float temp0_829[0x8] = _mm256_permutevar8x32_ps(data_143442920, arg14)
                            arg5 = _mm256_permutevar8x32_ps(data_143442940, arg14)
                            zmm5 = _mm256_add_epi64(
                                __vpaddq_ymmqq_ymmqq_memqq(
                                    __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_820_1), var_900_3), 
                                zmm1)
                            arg7[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            arg8[0].o = zx.o(0)
                            float temp0_835[0x4]
                            int32_t temp1_38
                            temp0_835, temp1_38 =
                                _mm256_i64gather_ps(arg8[0].o, *(r12 + zmm5[0].q), arg14[0].o)
                            arg8[0].o = temp0_835
                            arg14[0].o = temp1_38
                            zmm2 = var_880_2
                            zmm5 = _mm256_add_epi64(
                                __vpaddq_ymmqq_ymmqq_memqq(
                                    __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_8c0_1), var_960_3), 
                                zmm1)
                            zmm2[0].o = zx.o(0)
                            float temp0_839[0x4]
                            int32_t temp1_39
                            temp0_839, temp1_39 =
                                _mm256_i64gather_ps(zx.o(0), *(r12 + zmm5[0].q), arg7[0].o)
                            zmm2[0].o = temp0_839
                            arg7[0].o = temp1_39
                            arg10 = _mm256_blendv_ps(var_940_2, _mm256_add_epi64(var_940_2, zmm1), 
                                temp0_829)
                            arg9 = var_800_1
                            zmm5 =
                                _mm256_blendv_ps(var_860_3, _mm256_add_epi64(var_860_3, zmm1), arg5)
                            arg7 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                            arg8 = var_920_1
                        
                        var_380 = _mm256_maskstore_ps(zmm0, _mm256_blendv_ps(arg15, arg7, arg13))
                        zmm1 = __vpbroadcastd_ymmqq_memd(2)
                        arg13 = zmm1 & var_980
                        zmm1 = _mm256_cmpeq_epi32(arg13, zmm1)
                        zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        arg7[0].o = arg6[0].o & zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg7[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        arg14 = var_8a0_1
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg7[0].o), 0x1f), 0x1f)
                            zmm2 = _mm256_permutevar8x32_epi32(data_143442920, zmm1)
                            arg5 = _mm256_permutevar8x32_epi32(data_143442940, zmm1)
                            arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                            arg8[0].o = zx.o(0)
                            float temp0_861[0x4]
                            int32_t temp1_40
                            temp0_861, temp1_40 =
                                _mm256_i64gather_ps(arg8[0].o, *arg10[0].q, zmm1[0].o)
                            arg8[0].o = temp0_861
                            zmm1[0].o = temp1_40
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            arg10 = _mm256_blendv_ps(arg10, _mm256_add_epi64(arg10, zmm1), zmm2)
                            arg9 = var_800_1
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            float temp0_866[0x4]
                            int32_t temp1_41
                            temp0_866, temp1_41 =
                                _mm256_i64gather_ps(zmm2[0].o, *zmm5[0].q, arg7[0].o)
                            zmm2[0].o = temp0_866
                            arg7[0].o = temp1_41
                            zmm5 = _mm256_blendv_ps(zmm5, _mm256_add_epi64(zmm5, zmm1), arg5)
                            arg7 = _mm256_insertf128_ps(arg8, zmm2[0].o, 1)
                            arg8 = var_920_1
                        
                        var_360 = _mm256_maskstore_ps(zmm0, 
                            _mm256_cmpeq_epi32(arg13, arg15) & not.32(arg7))
                        arg13 = arg14 & var_980
                        zmm1 = _mm256_cmpeq_epi32(arg13, arg14)
                        zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                        arg6[0].o &= zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
                            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_895[0x4]
                            int32_t temp1_42
                            temp0_895, temp1_42 =
                                _mm256_i64gather_ps(arg5[0].o, *arg10[0].q, zmm1[0].o)
                            arg5[0].o = temp0_895
                            zmm1[0].o = temp1_42
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            float temp0_897[0x4]
                            int32_t temp1_43
                            temp0_897, temp1_43 =
                                _mm256_i64gather_ps(zmm1[0].o, *zmm5[0].q, zmm2[0].o)
                            zmm1[0].o = temp0_897
                            zmm2[0].o = temp1_43
                            arg7 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
                        
                        zmm1 = _mm256_cmpeq_epi32(arg13, arg15) & not.32(arg7)
                        var_340 = _mm256_maskstore_ps(zmm0, zmm1)
                        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                        arg11 = var_8e0_1
                        arg10[0].o = var_760[0].o
                
                zmm0[0].o = arg10[0].o & var_840
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0)
                    arg12 = var_580
                else
                    arg13[0].o = _mm256_extracti128_si256(arg8, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, arg13[0].o)
                    arg6[0].o = arg10[0].o & zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        uint32_t temp0_912[0x8] = _mm256_cvtepu16_epi32(arg6[0].o)
                        float var_620_2[0x8] = arg15
                        float var_640_2[0x8] = arg15
                        float var_660_2[0x8] = arg15
                        float var_680_2[0x8] = arg15
                        float var_6a0_2[0x8] = arg15
                        float var_6c0_2[0x8] = arg15
                        zmm0 = var_980
                        zmm5 = arg8 & _mm256_srai_epi32(_mm256_slli_epi32(zmm0, 0x1f), 0x1f)
                        arg11 = zmm5 & var_9a0_2
                        
                        if (_mm256_movemask_ps(arg11) != 0)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            zmm2 = _mm256_add_epi64(arg9, zmm1)
                            arg5 = _mm256_add_epi64(var_740_1, zmm1)
                            zmm0 = data_143442920
                            arg7 = _mm256_permutevar8x32_ps(zmm0, arg11)
                            arg5 = _mm256_blendv_ps(var_740_1, arg5, arg7)
                            arg8[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            arg9[0].o = zx.o(0)
                            zmm0[0].o = arg11[0].o
                            float temp0_922[0x4]
                            int32_t temp1_44
                            temp0_922, temp1_44 =
                                _mm256_i64gather_ps(arg9[0].o, *var_740_1[0].q, zmm0[0].o)
                            arg9[0].o = temp0_922
                            zmm0[0].o = temp1_44
                            zmm0[0].o = arg8[0].o
                            var_740_1[0].o =
                                __vxorps_xmmdq_xmmdq_xmmdq(var_740_1[0].o, var_740_1[0].o)
                            float temp0_924[0x4]
                            int32_t temp1_45
                            temp0_924, temp1_45 =
                                _mm256_i64gather_ps(var_740_1[0].o, *arg9[0].q, zmm0[0].o)
                            var_740_1[0].o = temp0_924
                            zmm0[0].o = temp1_45
                            zmm0 = _mm256_permutevar8x32_ps(data_143442940, arg11)
                            zmm2 = _mm256_blendv_ps(arg9, zmm2, zmm0)
                            var_660_2 = _mm256_maskstore_ps(zmm5, 
                                _mm256_insertf128_ps(arg9, var_740_1[0].o, 1))
                            arg6 = _mm256_blendv_ps(arg5, _mm256_add_epi64(arg5, zmm1), arg7)
                            var_740_1 = arg6
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            float temp0_932[0x4]
                            int32_t temp1_46
                            temp0_932, temp1_46 =
                                _mm256_i64gather_ps(arg6[0].o, *arg5[0].q, arg11[0].o)
                            arg6[0].o = temp0_932
                            arg11[0].o = temp1_46
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_934[0x4]
                            int32_t temp1_47
                            temp0_934, temp1_47 =
                                _mm256_i64gather_ps(arg5[0].o, *zmm2[0].q, arg8[0].o)
                            arg5[0].o = temp0_934
                            arg8[0].o = temp1_47
                            arg8 = var_920_1
                            arg9 = _mm256_blendv_ps(zmm2, _mm256_add_epi64(zmm2, zmm1), zmm0)
                            zmm0 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                            var_6c0_2 = _mm256_maskstore_ps(zmm5, zmm0)
                        
                        arg11 = _mm256_slli_epi32(temp0_912, 0x1f)
                        zmm1 = __vpbroadcastd_ymmqq_memd(2)
                        zmm1 = _mm256_cmpeq_epi32(zmm1 & var_980, zmm1)
                        zmm5 = zmm1 & arg8
                        zmm1[0].o = _mm256_extracti128_si256(zmm5, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                        arg7[0].o = arg10[0].o & zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg7[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg7[0].o), 0x1f), 0x1f)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            arg14 = _mm256_add_epi64(arg9, zmm1)
                            arg5 = _mm256_add_epi64(var_740_1, zmm1)
                            zmm2 = data_143442920
                            arg7 = _mm256_permutevar8x32_epi32(zmm2, zmm0)
                            arg5 = _mm256_blendv_ps(var_740_1, arg5, arg7)
                            zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            arg6[0].o = zmm0[0].o
                            float temp0_958[0x4]
                            int32_t temp1_48
                            temp0_958, temp1_48 =
                                _mm256_i64gather_ps(arg9[0].o, *var_740_1[0].q, arg6[0].o)
                            arg9[0].o = temp0_958
                            arg6[0].o = temp1_48
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            var_740_1[0].o = zmm2[0].o
                            float temp0_960[0x4]
                            int32_t temp1_49
                            temp0_960, temp1_49 =
                                _mm256_i64gather_ps(arg6[0].o, *arg9[0].q, var_740_1[0].o)
                            arg6[0].o = temp0_960
                            var_740_1[0].o = temp1_49
                            arg8 = _mm256_permutevar8x32_epi32(data_143442940, zmm0)
                            arg14 = _mm256_blendv_ps(arg9, arg14, arg8)
                            var_640_2 =
                                _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(arg9, arg6[0].o, 1))
                            float temp0_966[0x8] =
                                _mm256_blendv_ps(arg5, _mm256_add_epi64(arg5, zmm1), arg7)
                            var_740_1 = temp0_966
                            temp0_966[0].o =
                                __vxorps_xmmdq_xmmdq_xmmdq(temp0_966[0].o, temp0_966[0].o)
                            float temp0_968[0x4]
                            int32_t temp1_50
                            temp0_968, temp1_50 =
                                _mm256_i64gather_ps(temp0_966[0].o, *arg5[0].q, zmm0[0].o)
                            temp0_966[0].o = temp0_968
                            zmm0[0].o = temp1_50
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_970[0x4]
                            int32_t temp1_51
                            temp0_970, temp1_51 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg14[0].q, zmm2[0].o)
                            zmm0[0].o = temp0_970
                            zmm2[0].o = temp1_51
                            arg9 = _mm256_blendv_ps(arg14, _mm256_add_epi64(arg14, zmm1), arg8)
                            arg8 = var_920_1
                            var_6a0_2 = _mm256_maskstore_ps(zmm5, 
                                _mm256_insertf128_ps(temp0_966, zmm0[0].o, 1))
                        
                        arg14 = var_8a0_1
                        arg6 = _mm256_srai_epi32(arg11, 0x1f)
                        uint32_t temp0_976[0x8] = _mm256_cmpeq_epi32(arg14 & var_980, arg14)
                        zmm5 = temp0_976 & arg8
                        temp0_976[0].o = _mm256_extracti128_si256(zmm5, 1)
                        temp0_976[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_976[0].o)
                        arg7[0].o = arg10[0].o & temp0_976[0].o
                        temp0_976[0].o = __vpsllw_xmmdq_xmmdq_immb(arg7[0].o, 0xf)
                        temp0_976[0].o = __vpsraw_xmmdq_xmmdq_immb(temp0_976[0].o, 0xf)
                        temp0_976[0].o =
                            __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_976[0].o, temp0_976[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(temp0_976[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg7[0].o), 0x1f), 0x1f)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            zmm2 = _mm256_add_epi64(arg9, zmm1)
                            zmm1 = _mm256_add_epi64(var_740_1, zmm1)
                            arg5 = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                            arg12 = arg9
                            arg9 = _mm256_blendv_ps(var_740_1, zmm1, arg5)
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg7[0].o = zx.o(0)
                            arg8[0].o = zmm0[0].o
                            float temp0_992[0x4]
                            int32_t temp1_52
                            temp0_992, temp1_52 =
                                _mm256_i64gather_ps(zx.o(0), *var_740_1[0].q, arg8[0].o)
                            arg7[0].o = temp0_992
                            arg8[0].o = temp1_52
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            arg5[0].o = zmm1[0].o
                            float temp0_994[0x4]
                            int32_t temp1_53
                            temp0_994, temp1_53 =
                                _mm256_i64gather_ps(arg8[0].o, *arg12[0].q, arg5[0].o)
                            arg8[0].o = temp0_994
                            arg5[0].o = temp1_53
                            zmm2 = _mm256_blendv_ps(arg12, zmm2, 
                                _mm256_permutevar8x32_epi32(data_143442940, zmm0))
                            arg5 = _mm256_insertf128_ps(arg7, arg8[0].o, 1)
                            var_620_2 = _mm256_maskstore_ps(zmm5, arg5)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_1000[0x4]
                            int32_t temp1_54
                            temp0_1000, temp1_54 =
                                _mm256_i64gather_ps(arg5[0].o, *arg9[0].q, zmm0[0].o)
                            arg5[0].o = temp0_1000
                            zmm0[0].o = temp1_54
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_1002[0x4]
                            int32_t temp1_55
                            temp0_1002, temp1_55 =
                                _mm256_i64gather_ps(zmm0[0].o, *zmm2[0].q, zmm1[0].o)
                            zmm0[0].o = temp0_1002
                            zmm1[0].o = temp1_55
                            var_680_2 =
                                _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(arg5, zmm0[0].o, 1))
                        
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_880_2, var_8c0_1)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_820_1)
                        zmm2 = __vpbroadcastq_ymmqq_memq(4)
                        zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_900_3)
                        zmm0 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(zmm0, var_960_3), zmm2)
                        zmm1 = _mm256_add_epi64(zmm1, zmm2)
                        zmm2[0].o = zx.o(0)
                        arg5[0].o = arg6[0].o
                        uint32_t temp0_1012[0x4]
                        int32_t temp1_56
                        temp0_1012, temp1_56 =
                            _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm1[0].q), arg5[0].o)
                        zmm2[0].o = temp0_1012
                        arg5[0].o = temp1_56
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg5[0].o = zx.o(0)
                        uint32_t temp0_1014[0x4]
                        int32_t temp1_57
                        temp0_1014, temp1_57 =
                            _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm0[0].q), zmm1[0].o)
                        arg5[0].o = temp0_1014
                        zmm1[0].o = temp1_57
                        zmm0 = _mm256_inserti128_si256(zmm2, arg5[0].o, 1)
                        zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                        zmm2 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm5 = var_6a0_2
                        arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_6c0_2, 
                            _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    zmm0 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                    __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                _mm256_broadcast_ss(511f)), 
                            var_660_2)
                        uint32_t temp0_1026[0x8] = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, temp0_1026))
                        float temp0_1029[0x8] = _mm256_broadcast_ss(1023f)
                        zmm2 = _mm256_div_ps(zmm2, temp0_1029)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, temp0_1026)), temp0_1029)
                        zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, zmm5, var_640_2)
                        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, var_680_2, var_620_2)
                        var_380 = _mm256_maskstore_ps(arg6, arg5)
                        var_360 = _mm256_maskstore_ps(arg6, zmm2)
                        var_340 = _mm256_maskstore_ps(arg6, zmm0)
                        arg11 = var_8e0_1
                        arg8 = var_920_1
                    
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, arg13[0].o)
                    zmm0[0].o ^= var_840
                    zmm1[0].o = arg10[0].o & zmm0[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                        arg12 = var_580
                    else
                        uint32_t temp0_1044[0x8] = __vpbroadcastd_ymmqq_memd(2)
                        uint32_t temp0_1045[0x8] = __vpcmpeqd_ymmqq_ymmqq_memqq(temp0_1044, var_7a0)
                        arg8[0].o = _mm256_extracti128_si256(temp0_1045, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1045[0].o, arg8[0].o)
                        zmm5[0].o = arg10[0].o & zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                            arg14 = var_8a0_1
                            arg12 = var_580
                        else
                            arg11 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                            arg6 = _mm256_srai_epi32(_mm256_slli_epi32(var_980, 0x1f), 0x1f)
                            arg7 = arg6 & arg11
                            bool cond:18_1 = _mm256_movemask_ps(arg7) == 0
                            var_920_1[0].o = arg8[0].o
                            
                            if (not(cond:18_1))
                                zmm1 = __vpbroadcastq_ymmqq_memq(2)
                                zmm2 = var_860_3
                                arg5 = _mm256_add_epi64(zmm2, zmm1)
                                zmm1 = _mm256_add_epi64(var_940_2, zmm1)
                                arg8 = _mm256_permutevar8x32_ps(data_143442920, arg7)
                                var_940_2 = _mm256_blendv_ps(var_940_2, zmm1, arg8)
                                float temp0_1063[0x8] =
                                    _mm256_permutevar8x32_ps(data_143442940, arg7)
                                var_860_3 = _mm256_blendv_ps(zmm2, arg5, temp0_1063)
                                arg5 = __vpaddq_ymmqq_ymmqq_memqq(var_880_2, var_8c0_1)
                                zmm2 = var_7c0_2
                                arg7 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_820_1)
                                arg9 = __vpbroadcastq_ymmqq_memq(4)
                                arg7 = __vpaddq_ymmqq_ymmqq_memqq(arg7, var_900_3)
                                arg5 = _mm256_add_epi64(
                                    __vpaddq_ymmqq_ymmqq_memqq(arg5, var_960_3), arg9)
                                arg7 = _mm256_blendv_ps(arg15, _mm256_add_epi64(arg7, arg9), arg8)
                                float temp0_1073[0x8] = _mm256_blendv_ps(arg15, arg5, temp0_1063)
                                int64_t r8_3 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                int64_t rcx_15 = arg7[0].q
                                arg5[0].o = _mm256_extracti128_si256(arg7, 1)
                                int64_t r10_3 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                int64_t rdi_6 = arg5[0].q
                                int64_t rsi_7 = temp0_1073[0].q
                                int64_t r11_3 = __vpextrq_gpr64q_xmmdq_immb(temp0_1073[0].o, 1)
                                temp0_1073[0].o = _mm256_extracti128_si256(temp0_1073, 1)
                                int64_t rbx_9 = temp0_1073[0].q
                                int64_t rax_179 = __vpextrq_gpr64q_xmmdq_immb(temp0_1073[0].o, 1)
                                temp0_1073[0].o = zx.o(*(r12 + rcx_15))
                                temp0_1073[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1073[0].o, 
                                    *(r12 + r8_3), 1)
                                temp0_1073[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1073[0].o, 
                                    *(r12 + rdi_6), 2)
                                temp0_1073[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1073[0].o, 
                                    *(r12 + r10_3), 3)
                                temp0_1073[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1073[0].o, 
                                    *(r12 + rsi_7), 4)
                                temp0_1073[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1073[0].o, 
                                    *(r12 + r11_3), 5)
                                temp0_1073[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1073[0].o, 
                                    *(r12 + rbx_9), 6)
                                temp0_1073[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1073[0].o, 
                                    *(r12 + rax_179), 7)
                                zmm1 = _mm256_cvtepu16_epi32(temp0_1073[0].o)
                                arg5 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                arg7 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg5))
                            
                            arg12 = var_580
                            var_380 =
                                _mm256_maskstore_ps(arg11, _mm256_blendv_ps(arg15, arg7, arg6))
                            arg7 = temp0_1044 & var_980
                            zmm1 = _mm256_cmpeq_epi32(arg7, temp0_1044)
                            arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            arg6[0].o = zmm5[0].o & zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            char temp0_1174 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_1174 == 0)
                                arg14 = var_8a0_1
                                arg9 = var_860_3
                            else
                                int128_t var_3f0
                                int64_t rax_200
                                
                                if ((temp0_1174 & 1) != 0)
                                    zmm2 = var_940_2
                                    arg5[0].o = var_3f0
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm2[0].q, 0)
                                    
                                    if ((temp0_1174 & 2) != 0)
                                        rax_200 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_200, 1)
                                else
                                    arg5[0].o = var_3f0
                                    zmm2 = var_940_2
                                    
                                    if ((temp0_1174 & 2) != 0)
                                        rax_200 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_200, 1)
                                
                                if ((temp0_1174 & 4) == 0)
                                    if ((temp0_1174 & 8) != 0)
                                        goto label_1401a7b67
                                    
                                    goto label_1401a79fb
                                
                                zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm1[0].q, 2)
                                
                                if ((temp0_1174 & 8) != 0)
                                label_1401a7b67:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    int64_t rax_204 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_204, 3)
                                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                    
                                    if ((temp0_1174 & 0x10) == 0)
                                        goto label_1401a7a0a
                                    
                                    goto label_1401a7b8c
                                
                            label_1401a79fb:
                                arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                
                                if ((temp0_1174 & 0x10) == 0)
                                label_1401a7a0a:
                                    arg6 = _mm256_slli_epi32(arg6, 0x1f)
                                    arg8 = arg12
                                    
                                    if ((temp0_1174 & 0x20) != 0)
                                        goto label_1401a7ba4
                                    
                                    goto label_1401a7a1d
                                
                            label_1401a7b8c:
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *var_860_3[0].q, 4)
                                arg6 = _mm256_slli_epi32(arg6, 0x1f)
                                arg8 = arg12
                                
                                if ((temp0_1174 & 0x20) == 0)
                                label_1401a7a1d:
                                    arg14 = __vpbroadcastq_ymmqq_memq(2)
                                    arg12 = _mm256_srai_epi32(arg6, 0x1f)
                                    
                                    if ((temp0_1174 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(var_860_3, 1)
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                                            *zmm1[0].q, 6)
                                else
                                label_1401a7ba4:
                                    int64_t rax_206 = __vpextrq_gpr64q_xmmdq_immb(var_860_3[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_206, 5)
                                    arg14 = __vpbroadcastq_ymmqq_memq(2)
                                    arg12 = _mm256_srai_epi32(arg6, 0x1f)
                                    
                                    if ((temp0_1174 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(var_860_3, 1)
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                                            *zmm1[0].q, 6)
                                
                                zmm2[0].o = arg5[0].o
                                arg6 = _mm256_add_epi64(var_860_3, arg14)
                                arg14 = __vpaddq_ymmqq_ymmqq_memqq(arg14, var_940_2)
                                zmm1 = _mm256_permutevar8x32_epi32(data_143442920, arg12)
                                arg5 = data_143442940
                                arg12 = _mm256_permutevar8x32_epi32(arg5, arg12)
                                
                                if (temp0_1174 s< 0)
                                    arg5[0].o = _mm256_extracti128_si256(var_860_3, 1)
                                    int64_t rax_202 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_202, 7)
                                
                                var_940_2 = _mm256_blendv_ps(var_940_2, arg14, zmm1)
                                arg9 = _mm256_blendv_ps(var_860_3, arg6, arg12)
                                var_3f0 = zmm2[0].o
                                zmm1 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                arg5 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg5))
                                arg14 = var_8a0_1
                                arg12 = arg8
                            
                            var_360 = _mm256_maskstore_ps(arg11, 
                                _mm256_cmpeq_epi32(arg7, arg15) & not.32(arg6))
                            arg7 = arg14 & var_980
                            zmm1 = _mm256_cmpeq_epi32(arg7, arg14)
                            arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            zmm1[0].o &= zmm5[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            char temp0_1203 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_1203 == 0)
                                arg8[0].o = var_920_1[0].o
                            else
                                int128_t var_400
                                int64_t rax_208
                                
                                if ((temp0_1203 & 1) != 0)
                                    arg5 = var_940_2
                                    zmm2[0].o = var_400
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0].q, 0)
                                    
                                    if ((temp0_1203 & 2) != 0)
                                        rax_208 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_208, 1)
                                else
                                    zmm2[0].o = var_400
                                    arg5 = var_940_2
                                    
                                    if ((temp0_1203 & 2) != 0)
                                        rax_208 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_208, 1)
                                
                                if ((temp0_1203 & 4) == 0)
                                    if ((temp0_1203 & 8) != 0)
                                        goto label_1401a44d3
                                    
                                    goto label_1401a7c0d
                                
                                zmm1[0].o = _mm256_extracti128_si256(arg5, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 2)
                                
                                if ((temp0_1203 & 8) != 0)
                                label_1401a44d3:
                                    zmm1[0].o = _mm256_extracti128_si256(arg5, 1)
                                    int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_2, 3)
                                    
                                    if ((temp0_1203 & 0x10) == 0)
                                        goto label_1401a7c17
                                    
                                    goto label_1401a44f3
                                
                            label_1401a7c0d:
                                
                                if ((temp0_1203 & 0x10) == 0)
                                label_1401a7c17:
                                    
                                    if ((temp0_1203 & 0x20) != 0)
                                        goto label_1401a4502
                                    
                                    goto label_1401a7c21
                                
                            label_1401a44f3:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg9[0].q, 4)
                                
                                if ((temp0_1203 & 0x20) != 0)
                                label_1401a4502:
                                    int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_4, 5)
                                    
                                    if ((temp0_1203 & 0x40) == 0)
                                        goto label_1401a7c2b
                                    
                                    goto label_1401a4517
                                
                            label_1401a7c21:
                                
                                if ((temp0_1203 & 0x40) != 0)
                                label_1401a4517:
                                    zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_1203 s< 0)
                                    label_1401a452f:
                                        zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                        int64_t rax_6 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_6, 7)
                                else
                                label_1401a7c2b:
                                    
                                    if (temp0_1203 s< 0)
                                        goto label_1401a452f
                                
                                arg8[0].o = var_920_1[0].o
                                var_400 = zmm2[0].o
                                arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(zmm2[0].o), 
                                    __vpbroadcastd_ymmqq_memd(0xffffff01)))
                            
                            zmm1 = _mm256_cmpeq_epi32(arg7, arg15) & not.32(arg6)
                            var_340 = _mm256_maskstore_ps(arg11, zmm1)
                            arg11 = var_8e0_1
                        
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1045[0].o, arg8[0].o)
                        zmm0[0].o ^= zmm1[0].o
                        zmm0[0].o &= arg10[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                            arg13 = _mm256_cmpeq_epi32(temp0_1045, temp0_1045)
                        else
                            zmm1 = __vpbroadcastd_ymmqq_memd(6)
                            arg6 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm1, var_7a0)
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                            zmm5[0].o = arg10[0].o & zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm1 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                                var_380 = _mm256_maskstore_ps(zmm1, arg15)
                                var_360 = _mm256_maskstore_ps(zmm1, arg15)
                                var_340 = _mm256_maskstore_ps(zmm1, arg15)
                            
                            arg13 = _mm256_cmpeq_epi32(temp0_1045, temp0_1045)
                            zmm1 = arg6 ^ arg13
                            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                            zmm0[0].o &= zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                zmm0 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                                var_380 = _mm256_maskstore_ps(zmm0, arg15)
                                var_360 = _mm256_maskstore_ps(zmm0, arg15)
                                var_340 = _mm256_maskstore_ps(zmm0, arg15)
                
                arg6 = var_480
                zmm5 = var_460
                zmm0 = _mm256_sub_ps(var_380, var_4a0)
                float temp0_1256[0x8] = _mm256_sub_ps(var_360, arg6)
                zmm2 = _mm256_sub_ps(var_340, zmm5)
                arg7 = var_7e0_1
                zmm0 = _mm256_fmadd_ps(zmm0, arg7, var_4a0)
                zmm1 = _mm256_fmadd_ps(temp0_1256, arg7, arg6)
                zmm2 = _mm256_fmadd_ps(zmm2, arg7, zmm5)
                arg5 = var_9a0_2
                var_4a0 = _mm256_maskstore_ps(arg5, zmm0)
                var_480 = _mm256_maskstore_ps(arg5, zmm1)
                var_460 = _mm256_maskstore_ps(arg5, zmm2)
                zmm0 = arg11 ^ arg13
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    goto label_1401a7df2
        
        zmm0[0].o = var_4a0[0].o
        arg9[0].o = var_4a0[4].o
        arg5[0].o = var_480[0].o
        arg6[0].o = var_480[4].o
        zmm5[0].o = var_460[0].o
        arg7[0].o = var_460[4].o
        arg10[0].o = zx.o(0)
        arg8[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0x28)
        int128_t var_2c0 = zmm2[0].o
        zmm2[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
        int128_t var_2b0_1 = zmm1[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 0xa8)
        int128_t var_2a0_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        int128_t var_290_1 = zmm0[0].o
        zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg10[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg7[0].o, 0x28)
        int128_t var_280_1 = zmm2[0].o
        zmm2[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg10[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_270_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg7[0].o, 0xa8)
        int128_t var_260_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        int128_t var_250_1 = zmm0[0].o
        uint64_t rcx_25
        int64_t rsi_11
        
        for (uint64_t i_9 = 0xff; i_9 != 0; i_9 = rsi_11 & rol.q(-2, rcx_25.b))
            uint64_t rax_213 = _tzcnt_u64(i_9)
            rsi_11 = i_9 & not.q(1 << (rax_213 u% 0x40))
            uint32_t var_2e0[0x8] = arg16
            zmm0[0].o = (&var_2c0)[rax_213]
            *(arg1 + sx.q(var_2e0[zx.q(rax_213.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            rcx_25 = _tzcnt_u64(rsi_11)
            zmm0[0].o = (&var_2c0)[rcx_25]
            *(arg1 + sx.q(var_2e0[zx.q(rcx_25.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
        
        r14 += 8
    while (r14 s< rdx_4)
    
    result = zx.q(arg21)
    
    if (r14 s< result.d)
        goto label_1401a7f90
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
