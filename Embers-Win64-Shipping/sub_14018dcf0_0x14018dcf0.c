// 函数: sub_14018dcf0
// 地址: 0x14018dcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg16[0].o
int128_t var_68 = arg15[0].o
int128_t var_78 = arg14[0].o
int128_t var_88 = arg13[0].o
int128_t var_98 = arg12[0].o
int128_t var_a8 = arg11[0].o
int128_t var_b8 = arg10[0].o
uint128_t var_c8 = arg9[0]
int128_t var_d8 = arg8[0].o
int128_t var_e8 = arg7[0].o
int32_t zmm2[0x8]
zmm2[0].o = arg19
uint16_t* r12 = arg17
int32_t rdx_4 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
uint64_t result
int32_t var_940[0x8]
int128_t var_840
float var_760[0x8]
float var_700[0x8]
float var_580[0x8]
int32_t var_520[0x8]
int32_t r14
float zmm0[0x8]
float zmm1[0x8]
float zmm5[0x8]

if (rdx_4 s<= 0)
    r14 = 0
    result = zx.q(arg21)
    
    if (0 s< result.d)
    label_140191960:
        zmm0[0].o = zx.o(r14)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(result.d)
        zmm5 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
        zmm2 = _mm256_slli_epi32(zmm0, 3)
        arg16[0].o = zx.o(0)
        uint32_t temp0_1286[0x8]
        int32_t temp1_58
        temp0_1286, temp1_58 = _mm256_i32gather_epi32(arg16, *(arg2 + zmm2[0].q), zmm5)
        arg16 = temp0_1286
        zmm1 = __vpbroadcastd_ymmqq_memd(4)
        zmm2 |= zmm1
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        uint32_t temp0_1289[0x8]
        int32_t temp1_59
        temp0_1289, temp1_59 = _mm256_i32gather_epi32(arg6, *(arg2 + zmm2[0].q), zmm5)
        zmm2[0].o = zx.o(arg4)
        zmm2 = _mm256_broadcastd_epi32(_mm256_slli_epi32(zmm2, 2)[0])
        arg5 = _mm256_mullo_epi32(temp0_1289, zmm2)
        arg13[0].o = zx.o(0)
        zmm2[0].o = zx.o(0)
        uint32_t temp0_1293[0x8]
        int32_t temp1_60
        temp0_1293, temp1_60 = _mm256_i32gather_epi32(zmm2, *(arg3 + arg5[0]), zmm5)
        zmm2 = temp0_1293
        arg6 = temp1_60
        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
        zmm0 = _mm256_cmpeq_epi32(zmm2, arg7)
        float var_7c0_3[0x8] = zmm5
        float var_740_2[0x8] = zmm0
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
            uint32_t temp0_1301[0x8]
            int32_t temp1_61
            temp0_1301, temp1_61 = _mm256_i32gather_epi32(arg14, *(r12 + zmm2[0].q), arg8)
            arg14 = temp0_1301
            zmm5 = temp1_61
            zmm5[0].o = 4
            arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
            zmm0 = _mm256_srli_epi32(arg14, 0x1c)
            zmm5 = _mm256_slli_epi32(zmm0, 2)
            arg10[0].o = zx.o(0)
            uint32_t var_540_1[0x8] = arg8
            uint32_t temp0_1305[0x8]
            int32_t temp1_62
            temp0_1305, temp1_62 =
                _mm256_i32gather_epi32(arg10, *(&data_143442960 + zmm5[0].q), arg8)
            uint32_t temp0_1306[0x8] = _mm256_srli_epi32(arg14, 0x18)
            arg11 =
                _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 0x1f)
            zmm5 = (temp0_1306 & __vpbroadcastd_ymmqq_memd(7)) | _mm256_slli_epi32(zmm0, 3)
            uint32_t temp0_1312[0x8] = __vpbroadcastd_ymmqq_memd(3)
            zmm5 &= arg11
            uint64_t r8_5 = zx.q(zmm5[0])
            uint64_t r9_2 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t r10_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t r11_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
            uint64_t rsi_12 = zx.q(zmm5[0])
            uint64_t rax_224 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t rdx_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t rbx_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = zx.o(*(r8_5 + &data_143442980))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r9_2 + &data_143442980), 1)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r10_5 + &data_143442980), 2)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r11_5 + &data_143442980), 3)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rsi_12 + &data_143442980), 4)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_224 + &data_143442980), 5)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rdx_6 + &data_143442980), 6)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_11 + &data_143442980), 7)
            float temp0_1327[0x8] = _mm256_cvtepu8_epi32(zmm5[0].q)
            float var_800_2[0x8] = zmm0
            zmm0 = _mm256_cmpeq_epi32(zmm0, temp0_1312)
            zmm5[0].o = _mm256_extracti128_si256(zmm0, 1)
            var_700[0].o = zmm5[0].o
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
            float var_8a0_2[0x8] = zmm0
            arg7 ^= zmm0
            temp0_1312[0].o = _mm256_extracti128_si256(arg7, 1)
            arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_1312[0].o)
            temp0_1312[0].o = arg7[0].o & arg15[0].o
            arg7[0].o = __vpsllw_xmmdq_xmmdq_immb(temp0_1312[0].o, 0xf)
            arg7[0].o = __vpsraw_xmmdq_xmmdq_immb(arg7[0].o, 0xf)
            arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
            char temp0_1336 = __vpmovmskb_gpr32d_xmmdq(arg7[0].o)
            arg7[0].o = zx.o(0)
            
            if (temp0_1336 != 0)
                arg7 = _mm256_srai_epi32(
                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(temp0_1312[0].o), 0x1f), 0x1f) & temp0_1327
            
            float var_920_2[0x8] = _mm256_cvtepi32_epi64(zmm2[0].o)
            zmm0 = _mm256_cvtepi32_epi64(arg5[0].o)
            int64_t var_7a0_1[0x4] = zmm0
            zmm2 = _mm256_broadcastq_epi64(arg6[0].q)
            arg9 = arg14 & data_143442840
            arg5 = arg11 & temp0_1305
            arg6[0].o = arg15[0].o & zmm5[0].o
            zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
            zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            char temp0_1346 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o)
            arg10 = _mm256_broadcast_ss(1.40129846e-45f)
            
            if (temp0_1346 == 0)
                arg6[0].o = zx.o(0)
            else
                zmm5 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f)
                arg6 = _mm256_blendv_ps(arg13, temp0_1327, zmm5)
                arg7 = _mm256_blendv_ps(arg7, arg10, zmm5)
            
            zmm0 = _mm256_mullo_epi32(arg7, arg5)
            var_940 = zmm0
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
            uint32_t var_900_4[0x8]
            
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
                float var_9c0_1[0x8]
                
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
                        arg7 = _mm256_add_epi32(arg9, _mm256_cmpeq_epi32(zmm0, zmm0))
                        
                        if (zmm5[0].o f>= 1f)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f) & arg7
                            zmm5 = zmm0
                            arg7 = zmm0
                            var_9c0_1 = zmm0
                            var_900_4 = zmm0
                        else
                            arg13 = arg10
                            arg10 = _mm256_mul_ps(_mm256_broadcastd_epi32(zmm5[0]), 
                                _mm256_cvtepi32_ps(arg7))
                            float temp0_1376[0x8] = _mm256_round_ps(arg10, 9)
                            zmm0 = _mm256_min_epi32(arg7, _mm256_cvttps_epi32(temp0_1376))
                            arg6 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f)
                            zmm5 = _mm256_srai_epi32(arg6, 0x1f)
                            zmm0 &= zmm5
                            var_9c0_1 = zmm0
                            arg6[0].o = zx.o(0)
                            
                            if (arg20 != 1)
                                arg6 = _mm256_sub_ps(arg10, temp0_1376)
                            
                            arg10 = var_9c0_1
                            arg7 = zmm5 & _mm256_min_epi32(
                                _mm256_sub_epi32(arg10, _mm256_cmpeq_epi32(zmm0, zmm0)), arg7)
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
                    uint32_t var_9a0_3[0x8] = arg7
                    zmm2 = arg9
                    zmm0 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f)
                    var_840.32 = zmm0
                    zmm1 = _mm256_srai_epi32(zmm0, 0x1f)
                    uint128_t var_8e0_3[0x2] = arg9
                    zmm0 = _mm256_cmpeq_epi32(arg9, _mm256_min_epu32(arg9, arg10))
                    zmm2[0].o = zx.o(0)
                    arg5[0].o = arg19
                    int32_t rax_230
                    rax_230.b = zmm2[0].o f>= arg5[0].d
                    zmm2[0].o = zx.o(neg.d(rax_230))
                    arg7 = zmm0 | _mm256_broadcastd_epi32(zmm2[0])
                    zmm2 = arg7 & zmm1
                    
                    if (_mm256_movemask_ps(zmm2) == 0)
                        zmm0 = var_900_4
                    else
                        zmm0[0].o = zx.o(0)
                        zmm5 = _mm256_blendv_ps(var_9c0_1, zmm0, zmm2)
                        arg5 = _mm256_blendv_ps(var_9a0_3, zmm0, zmm2)
                        var_9c0_1 = zmm5
                        var_9a0_3 = arg5
                        zmm0 = arg5
                    
                    arg5 = arg7 & not.32(zmm1)
                    int32_t temp0_1408 = _mm256_movemask_ps(arg5)
                    zmm1[0].o = zx.o(0)
                    
                    if (temp0_1408 == 0)
                        var_900_4 = zmm0
                        arg12 = zmm5
                        arg8 = var_840.32
                    else
                        uint32_t var_960_4[0x8] = arg7
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
                            int32_t temp0_1413[0x8] = __vpmulld_ymmqq_ymmqq_memqq(zmm2, var_940)
                            arg6[0].o = _mm256_extracti128_si256(temp0_1413, 1)
                            zmm1 = _mm256_add_epi64(arg8, zmm1)
                            zmm0 = _mm256_add_epi64(arg12, zmm0)
                            zmm5 = __vpbroadcastq_ymmqq_memq(3)
                            zmm2 = _mm256_cvtepi32_epi64(temp0_1413[0].o)
                            arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                            zmm1 = _mm256_add_epi64(zmm2, _mm256_add_epi64(zmm1, zmm5))
                            zmm0 = _mm256_add_epi64(arg6, _mm256_add_epi64(zmm0, zmm5))
                            zmm2 = __vpbroadcastq_ymmqq_memq(-4)
                            float var_8c0_2[0x8] = zmm0 & zmm2
                            arg6 = zmm1 & zmm2
                            int32_t rbx_12 = arg18 - 2
                            float temp0_1425[0x8] = _mm256_broadcastss_ps(arg7[0].o)
                            float temp0_1426[0x8] = _mm256_cvtepi32_ps(arg9)
                            float temp0_1427[0x8] = _mm256_mul_ps(temp0_1425, temp0_1426)
                            temp0_1426[0].o = arg14[0].o
                            temp0_1426[0] = float.s(arg18 - 1)
                            arg8[0].o = temp0_1426[0].o f* arg7[0]
                            int32_t rax_234 = int.d(arg8[0])
                            int32_t rax_235 = rax_234 & not.d(rax_234 s>> 0x1f)
                            
                            if (rbx_12 s> rax_235)
                                rbx_12 = rax_235
                            
                            zmm0 = _mm256_cvttps_epi32(temp0_1427)
                            temp0_1426[0].o =
                                __vxorps_xmmdq_xmmdq_xmmdq(temp0_1426[0].o, temp0_1426[0].o)
                            uint128_t var_900_5[0x2] = arg9
                            arg9 = _mm256_min_epi32(_mm256_max_epi32(zmm0, temp0_1426), arg9)
                            int64_t var_880_3[0x4] = arg13
                            var_580[0].o = arg15[0].o
                            var_520 = arg10
                            float var_860_4[0x8] = arg11
                            var_760[0].o = arg8[0].o
                            
                            if (arg18 s< 0x100)
                                zmm0 = _mm256_cvtepi32_epi64(arg9[0])
                                zmm2 = _mm256_add_epi64(arg6, zmm0)
                                char rdx_10 = temp0_1408.b
                                
                                if ((rdx_10 & 1) == 0)
                                    if ((rdx_10 & 2) != 0)
                                        goto label_140195031
                                    
                                    goto label_140192618
                                
                                temp0_1426[0].o = __vpbroadcastb_xmmdq_memb(*zmm2[0].q)
                                
                                if ((rdx_10 & 2) != 0)
                                label_140195031:
                                    uint32_t rax_391 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                    temp0_1426[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                        temp0_1426[0].o, rax_391, 1)
                                    zmm5[0].o = _mm256_extracti128_si256(arg9, 1)
                                    
                                    if ((rdx_10 & 4) == 0)
                                        goto label_140192627
                                    
                                    goto label_140195048
                                
                            label_140192618:
                                zmm5[0].o = _mm256_extracti128_si256(arg9, 1)
                                
                                if ((rdx_10 & 4) == 0)
                                label_140192627:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_10 & 8) != 0)
                                        goto label_140195069
                                    
                                    goto label_140192635
                                
                            label_140195048:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                temp0_1426[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                    temp0_1426[0].o, zx.d(*zmm0[0].q), 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_10 & 8) != 0)
                                label_140195069:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    uint32_t rax_395 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    temp0_1426[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                        temp0_1426[0].o, rax_395, 3)
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                    
                                    if ((rdx_10 & 0x10) == 0)
                                        goto label_140192647
                                    
                                    goto label_140195097
                                
                            label_140192635:
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                
                                if ((rdx_10 & 0x10) == 0)
                                label_140192647:
                                    
                                    if ((rdx_10 & 0x20) != 0)
                                        goto label_1401950ab
                                    
                                    goto label_140192650
                                
                            label_140195097:
                                temp0_1426[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                    temp0_1426[0].o, zx.d(*zmm2[0].q), 4)
                                
                                if ((rdx_10 & 0x20) != 0)
                                label_1401950ab:
                                    uint32_t rax_399 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                    temp0_1426[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                        temp0_1426[0].o, rax_399, 5)
                                    
                                    if ((rdx_10 & 0x40) == 0)
                                        goto label_140192659
                                    
                                    goto label_1401950bc
                                
                            label_140192650:
                                
                                if ((rdx_10 & 0x40) != 0)
                                label_1401950bc:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    temp0_1426[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                        temp0_1426[0].o, zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1408.b s< 0)
                                    label_1401950d7:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint16_t rax_403[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        temp0_1426[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                            temp0_1426[0].o, rax_403, 7)
                                else
                                label_140192659:
                                    
                                    if (temp0_1408.b s< 0)
                                        goto label_1401950d7
                                
                                zmm0[0].o = temp0_1426[0].o & data_142fc92e0
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                temp0_1426[0].o = zx.o(rbx_12)
                                float temp0_1544[0x8] = _mm256_broadcastd_epi32(temp0_1426[0])
                                zmm1 = _mm256_cmpgt_epi32(zmm0, temp0_1544)
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
                                            int64_t temp0_1568[0x4] = _mm256_add_epi64(arg6, zmm0)
                                            char temp0_1569 = _mm256_movemask_ps(arg7)
                                            
                                            if ((temp0_1569 & 1) == 0)
                                                if ((temp0_1569 & 2) != 0)
                                                    goto label_1401926f1
                                                
                                                goto label_1401927e6
                                            
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*temp0_1568[0]), 0)
                                            
                                            if ((temp0_1569 & 2) != 0)
                                            label_1401926f1:
                                                uint32_t rax_262 = zx.d(*
                                                    __vpextrq_gpr64q_xmmdq_immb(temp0_1568[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_262, 1)
                                                zmm5[0].o = _mm256_extracti128_si256(arg11, 1)
                                                
                                                if ((temp0_1569 & 4) == 0)
                                                    goto label_1401927f6
                                                
                                                goto label_140192709
                                            
                                        label_1401927e6:
                                            zmm5[0].o = _mm256_extracti128_si256(arg11, 1)
                                            
                                            if ((temp0_1569 & 4) == 0)
                                            label_1401927f6:
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1569 & 8) != 0)
                                                    goto label_14019272b
                                                
                                                goto label_140192805
                                            
                                        label_140192709:
                                            zmm0[0].o = _mm256_extracti128_si256(temp0_1568, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm0[0].q), 2)
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1569 & 8) != 0)
                                            label_14019272b:
                                                zmm0[0].o = _mm256_extracti128_si256(temp0_1568, 1)
                                                uint32_t rax_266 =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_266, 3)
                                                arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                                
                                                if ((temp0_1569 & 0x10) == 0)
                                                    goto label_140192818
                                                
                                                goto label_14019275a
                                            
                                        label_140192805:
                                            arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                            
                                            if ((temp0_1569 & 0x10) == 0)
                                            label_140192818:
                                                
                                                if ((temp0_1569 & 0x20) != 0)
                                                    goto label_14019276f
                                                
                                                goto label_140192822
                                            
                                        label_14019275a:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*arg15[0]), 4)
                                            
                                            if ((temp0_1569 & 0x20) != 0)
                                            label_14019276f:
                                                uint32_t rax_270 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1))
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, rax_270, 5)
                                                
                                                if ((temp0_1569 & 0x40) == 0)
                                                    goto label_14019282c
                                                
                                                goto label_140192781
                                            
                                        label_140192822:
                                            
                                            if ((temp0_1569 & 0x40) != 0)
                                            label_140192781:
                                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*zmm0[0].q), 6)
                                                
                                                if (temp0_1569 s< 0)
                                                label_14019279d:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                    uint32_t rax_274 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_274, 7)
                                            else
                                            label_14019282c:
                                                
                                                if (temp0_1569 s< 0)
                                                    goto label_14019279d
                                            
                                            zmm0[0].o = zmm2[0].o & data_142fc92e0
                                            arg7 = _mm256_cmpgt_epi32(
                                                _mm256_cvtepu16_epi32(zmm0[0].o), temp0_1544) & arg13
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
                                        arg9[0] = data_142fc92e0
                                        
                                        do
                                            zmm0 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                            int64_t temp0_1603[0x4] = _mm256_add_epi64(arg6, zmm0)
                                            char temp0_1604 = _mm256_movemask_ps(arg7)
                                            
                                            if ((temp0_1604 & 1) == 0)
                                                if ((temp0_1604 & 2) != 0)
                                                    goto label_1401928fd
                                                
                                                goto label_1401929e1
                                            
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*temp0_1603[0]), 0)
                                            
                                            if ((temp0_1604 & 2) != 0)
                                            label_1401928fd:
                                                uint16_t rax_280[0x2] = zx.d(*
                                                    __vpextrq_gpr64q_xmmdq_immb(temp0_1603[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_280, 1)
                                                zmm5[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                
                                                if ((temp0_1604 & 4) == 0)
                                                    goto label_1401929f1
                                                
                                                goto label_140192915
                                            
                                        label_1401929e1:
                                            zmm5[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            
                                            if ((temp0_1604 & 4) == 0)
                                            label_1401929f1:
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1604 & 8) != 0)
                                                    goto label_140192937
                                                
                                                goto label_140192a00
                                            
                                        label_140192915:
                                            zmm0[0].o = _mm256_extracti128_si256(temp0_1603, 1)
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*zmm0[0].q), 2)
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1604 & 8) != 0)
                                            label_140192937:
                                                zmm0[0].o = _mm256_extracti128_si256(temp0_1603, 1)
                                                uint16_t rax_284[0x2] =
                                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_284, 3)
                                                arg13 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                                
                                                if ((temp0_1604 & 0x10) == 0)
                                                    goto label_140192a13
                                                
                                                goto label_140192966
                                            
                                        label_140192a00:
                                            arg13 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                            
                                            if ((temp0_1604 & 0x10) == 0)
                                            label_140192a13:
                                                
                                                if ((temp0_1604 & 0x20) != 0)
                                                    goto label_14019297b
                                                
                                                goto label_140192a1d
                                            
                                        label_140192966:
                                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg11[0].o, zx.d(*arg13[0]), 4)
                                            
                                            if ((temp0_1604 & 0x20) != 0)
                                            label_14019297b:
                                                uint16_t rax_288[0x2] = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, rax_288, 5)
                                                
                                                if ((temp0_1604 & 0x40) == 0)
                                                    goto label_140192a27
                                                
                                                goto label_14019298d
                                            
                                        label_140192a1d:
                                            
                                            if ((temp0_1604 & 0x40) != 0)
                                            label_14019298d:
                                                zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg11[0].o, zx.d(*zmm0[0].q), 6)
                                                
                                                if (temp0_1604 s< 0)
                                                label_1401929a9:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    uint16_t rax_292[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg11[0].o, rax_292, 7)
                                            else
                                            label_140192a27:
                                                
                                                if (temp0_1604 s< 0)
                                                    goto label_1401929a9
                                            
                                            zmm0[0].o = arg11[0].o & arg9[0]
                                            arg7 = _mm256_cmpgt_epi32(
                                                _mm256_cvtepu16_epi32(zmm0[0].o), temp0_1544)
                                                & not.32(arg15)
                                            zmm5[0].o = zx.o(0)
                                            int32_t temp0_1610 = _mm256_movemask_ps(arg7 & arg5)
                                            arg8[0].o = zx.o(0)
                                            
                                            if (temp0_1610 != i_1)
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
                                
                                if ((rdx_10 & 1) != 0)
                                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*zmm2[0].q)
                                
                                arg13 = var_880_3
                                arg15[0].o = var_580[0].o
                                arg10 = var_520
                                arg11 = var_860_4
                                
                                if ((rdx_10 & 2) == 0)
                                    arg14 = var_980_1
                                    zmm5[0].o = _mm256_extracti128_si256(arg12, 1)
                                    
                                    if ((rdx_10 & 4) != 0)
                                        goto label_140195113
                                    
                                    goto label_140192aea
                                
                                uint16_t rax_405[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_405, 1)
                                arg14 = var_980_1
                                zmm5[0].o = _mm256_extracti128_si256(arg12, 1)
                                
                                if ((rdx_10 & 4) != 0)
                                label_140195113:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 2)
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_10 & 8) == 0)
                                        goto label_140192af8
                                    
                                    goto label_140195134
                                
                            label_140192aea:
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_10 & 8) == 0)
                                label_140192af8:
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                    
                                    if ((rdx_10 & 0x10) != 0)
                                        goto label_140195162
                                    
                                    goto label_140192b0a
                                
                            label_140195134:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                uint16_t rax_409[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_409, 3)
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                
                                if ((rdx_10 & 0x10) != 0)
                                label_140195162:
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm2[0].q), 4)
                                    
                                    if ((rdx_10 & 0x20) == 0)
                                        goto label_140192b13
                                    
                                    goto label_140195176
                                
                            label_140192b0a:
                                
                                if ((rdx_10 & 0x20) == 0)
                                label_140192b13:
                                    
                                    if ((rdx_10 & 0x40) != 0)
                                        goto label_140195187
                                    
                                    goto label_140192b1c
                                
                            label_140195176:
                                uint16_t rax_413[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_413, 5)
                                
                                if ((rdx_10 & 0x40) == 0)
                                label_140192b1c:
                                    
                                    if (temp0_1408.b s< 0)
                                    label_1401951a2:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint16_t rax_417[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_417, 7)
                                else
                                label_140195187:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1408.b s< 0)
                                        goto label_1401951a2
                                
                                zmm5 = _mm256_blendv_ps(var_9a0_3, 
                                    _mm256_sub_epi32(arg12, _mm256_cmpeq_epi32(zmm0, zmm0)), arg5)
                                zmm2 = _mm256_cmpgt_epi32(var_8e0_3, zmm5) & not.32(arg5)
                                
                                if (_mm256_movemask_ps(zmm2) != 0)
                                    zmm5 =
                                        __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm5, var_900_5, zmm2)
                                
                                arg8 = var_840.32
                                var_900_4 = zmm5
                                int64_t temp0_1629[0x4] =
                                    _mm256_add_epi64(arg6, _mm256_cvtepi32_epi64(zmm5[0].o))
                                
                                if ((rdx_10 & 1) == 0)
                                    if ((rdx_10 & 2) != 0)
                                        goto label_1401951d4
                                    
                                    goto label_140192b89
                                
                                zmm2[0].o = __vpbroadcastb_xmmdq_memb(*temp0_1629[0])
                                
                                if ((rdx_10 & 2) != 0)
                                label_1401951d4:
                                    uint32_t rax_420 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(temp0_1629[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_420, 1)
                                    zmm0 = var_900_4
                                    arg6[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    
                                    if ((rdx_10 & 4) == 0)
                                        goto label_140192ba1
                                    
                                    goto label_1401951f4
                                
                            label_140192b89:
                                zmm0 = var_900_4
                                arg6[0].o = _mm256_extracti128_si256(zmm0, 1)
                                
                                if ((rdx_10 & 4) == 0)
                                label_140192ba1:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rdx_10 & 8) != 0)
                                        goto label_140195215
                                    
                                    goto label_140192baf
                                
                            label_1401951f4:
                                zmm0[0].o = _mm256_extracti128_si256(temp0_1629, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rdx_10 & 8) != 0)
                                label_140195215:
                                    zmm0[0].o = _mm256_extracti128_si256(temp0_1629, 1)
                                    uint32_t rax_424 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_424, 3)
                                    arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8c0_2)
                                    
                                    if ((rdx_10 & 0x10) == 0)
                                        goto label_140192bc1
                                    
                                    goto label_140195243
                                
                            label_140192baf:
                                arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8c0_2)
                                
                                if ((rdx_10 & 0x10) != 0)
                                label_140195243:
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*arg5[0]), 4)
                                    
                                    if ((rdx_10 & 0x20) != 0)
                                    label_140195257:
                                        uint32_t rax_428 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_428, 5)
                                        
                                        if ((rdx_10 & 0x40) == 0)
                                            goto label_140192bd3
                                        
                                        goto label_140195268
                                else
                                label_140192bc1:
                                    
                                    if ((rdx_10 & 0x20) != 0)
                                        goto label_140195257
                                
                                if ((rdx_10 & 0x40) != 0)
                                label_140195268:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    zmm1[0].o &= data_142fc92e0
                                    
                                    if (temp0_1408.b s< 0)
                                    label_14019528b:
                                        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                        uint32_t rax_432 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_432, 7)
                                else
                                label_140192bd3:
                                    zmm1[0].o &= data_142fc92e0
                                    
                                    if (temp0_1408.b s< 0)
                                        goto label_14019528b
                                
                                arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm0[0].o = zmm2[0].o & data_142fc92e0
                                zmm2 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            else
                                arg7 = _mm256_add_epi32(arg9, arg9)
                                zmm0 = _mm256_cvtepi32_epi64(arg7[0].o)
                                zmm2 = _mm256_add_epi64(arg6, zmm0)
                                char rdx_9 = temp0_1408.b
                                
                                if ((rdx_9 & 1) == 0)
                                    if ((rdx_9 & 2) != 0)
                                        goto label_140194df5
                                    
                                    goto label_14019201b
                                
                                temp0_1426[0].o = __vpbroadcastw_xmmdq_memw(*zmm2[0].q)
                                
                                if ((rdx_9 & 2) != 0)
                                label_140194df5:
                                    int64_t rax_367 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    temp0_1426[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1426[0].o, *rax_367, 1)
                                    zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                    
                                    if ((rdx_9 & 4) == 0)
                                        goto label_14019202a
                                    
                                    goto label_140194e0f
                                
                            label_14019201b:
                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                
                                if ((rdx_9 & 4) == 0)
                                label_14019202a:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_9 & 8) != 0)
                                        goto label_140194e2d
                                    
                                    goto label_140192038
                                
                            label_140194e0f:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                temp0_1426[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1426[0].o, *zmm0[0].q, 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_9 & 8) != 0)
                                label_140194e2d:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    int64_t rax_369 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    temp0_1426[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1426[0].o, *rax_369, 3)
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                    
                                    if ((rdx_9 & 0x10) == 0)
                                        goto label_14019204a
                                    
                                    goto label_140194e55
                                
                            label_140192038:
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                
                                if ((rdx_9 & 0x10) == 0)
                                label_14019204a:
                                    
                                    if ((rdx_9 & 0x20) != 0)
                                        goto label_140194e63
                                    
                                    goto label_140192053
                                
                            label_140194e55:
                                temp0_1426[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1426[0].o, *zmm2[0].q, 4)
                                
                                if ((rdx_9 & 0x20) != 0)
                                label_140194e63:
                                    int64_t rax_371 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    temp0_1426[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1426[0].o, *rax_371, 5)
                                    
                                    if ((rdx_9 & 0x40) == 0)
                                        goto label_14019205c
                                    
                                    goto label_140194e77
                                
                            label_140192053:
                                
                                if ((rdx_9 & 0x40) != 0)
                                label_140194e77:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    temp0_1426[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1426[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1408.b s< 0)
                                    label_140194e8f:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        int64_t rax_373 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        temp0_1426[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            temp0_1426[0].o, *rax_373, 7)
                                else
                                label_14019205c:
                                    
                                    if (temp0_1408.b s< 0)
                                        goto label_140194e8f
                                
                                zmm0 = _mm256_cvtepu16_epi32(temp0_1426[0].o)
                                temp0_1426[0].o = zx.o(rbx_12)
                                float temp0_1439[0x8] = _mm256_broadcastd_epi32(temp0_1426[0])
                                zmm1 = _mm256_cmpgt_epi32(zmm0, temp0_1439)
                                arg8 = zmm1 ^ _mm256_cmpeq_epi32(zmm0, zmm0)
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
                                            char temp0_1465 = _mm256_movemask_ps(arg7)
                                            
                                            if ((temp0_1465 & 1) == 0)
                                                if ((temp0_1465 & 2) != 0)
                                                    goto label_1401920e7
                                                
                                                goto label_1401921c9
                                            
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm2[0].q, 0)
                                            
                                            if ((temp0_1465 & 2) != 0)
                                            label_1401920e7:
                                                int64_t rax_238 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_238, 1)
                                                zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                                
                                                if ((temp0_1465 & 4) == 0)
                                                    goto label_1401921d9
                                                
                                                goto label_140192102
                                            
                                        label_1401921c9:
                                            zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                            
                                            if ((temp0_1465 & 4) == 0)
                                            label_1401921d9:
                                                arg14 = var_980_1
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1465 & 8) != 0)
                                                    goto label_140192127
                                                
                                                goto label_1401921ee
                                            
                                        label_140192102:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm0[0].q, 2)
                                            arg14 = var_980_1
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1465 & 8) != 0)
                                            label_140192127:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                int64_t rax_240 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_240, 3)
                                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                                
                                                if ((temp0_1465 & 0x10) == 0)
                                                    goto label_140192201
                                                
                                                goto label_140192150
                                            
                                        label_1401921ee:
                                            zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                            
                                            if ((temp0_1465 & 0x10) == 0)
                                            label_140192201:
                                                
                                                if ((temp0_1465 & 0x20) != 0)
                                                    goto label_14019215f
                                                
                                                goto label_14019220b
                                            
                                        label_140192150:
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm2[0].q, 4)
                                            
                                            if ((temp0_1465 & 0x20) != 0)
                                            label_14019215f:
                                                uint16_t* rax_242 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_242, 5)
                                                
                                                if ((temp0_1465 & 0x40) == 0)
                                                    goto label_140192215
                                                
                                                goto label_140192174
                                            
                                        label_14019220b:
                                            
                                            if ((temp0_1465 & 0x40) != 0)
                                            label_140192174:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *zmm0[0].q, 6)
                                                
                                                if (temp0_1465 s< 0)
                                                label_14019218d:
                                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    uint16_t* rax_244 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_244, 7)
                                            else
                                            label_140192215:
                                                
                                                if (temp0_1465 s< 0)
                                                    goto label_14019218d
                                            
                                            zmm2 = _mm256_cmpgt_epi32(
                                                _mm256_cvtepu16_epi32(zmm1[0].o), temp0_1439) & arg11
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
                                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                                    zmm2 = _mm256_add_epi32(arg9, arg13)
                                    zmm1 = _mm256_cmpgt_epi32(zmm2, zmm1)
                                    arg11 = zmm1 & zmm0
                                    arg7 = arg11 & arg5
                                    
                                    for (int32_t i_3 = _mm256_movemask_ps(arg7); i_3 != 0; 
                                            i_3 = _mm256_movemask_ps(arg7))
                                        arg14 = _mm256_add_epi32(zmm2, zmm2)
                                        zmm0 = _mm256_cvtepi32_epi64(arg14[0].o)
                                        int64_t temp0_1501[0x4] = _mm256_add_epi64(arg6, zmm0)
                                        char temp0_1502 = _mm256_movemask_ps(arg7)
                                        
                                        if ((temp0_1502 & 1) == 0)
                                            if ((temp0_1502 & 2) != 0)
                                                goto label_1401922d3
                                            
                                            goto label_1401923b5
                                        
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *temp0_1501[0], 0)
                                        
                                        if ((temp0_1502 & 2) != 0)
                                        label_1401922d3:
                                            int64_t rax_248 =
                                                __vpextrq_gpr64q_xmmdq_immb(temp0_1501[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_248, 1)
                                            zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                            
                                            if ((temp0_1502 & 4) == 0)
                                                goto label_1401923c5
                                            
                                            goto label_1401922ee
                                        
                                    label_1401923b5:
                                        zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                        
                                        if ((temp0_1502 & 4) == 0)
                                        label_1401923c5:
                                            arg14 = var_980_1
                                            zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                            
                                            if ((temp0_1502 & 8) != 0)
                                                goto label_140192313
                                            
                                            goto label_1401923da
                                        
                                    label_1401922ee:
                                        zmm0[0].o = _mm256_extracti128_si256(temp0_1501, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *zmm0[0].q, 2)
                                        arg14 = var_980_1
                                        zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                        
                                        if ((temp0_1502 & 8) != 0)
                                        label_140192313:
                                            zmm0[0].o = _mm256_extracti128_si256(temp0_1501, 1)
                                            int64_t rax_250 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_250, 3)
                                            arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                            
                                            if ((temp0_1502 & 0x10) == 0)
                                                goto label_1401923ed
                                            
                                            goto label_14019233c
                                        
                                    label_1401923da:
                                        arg15 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                        
                                        if ((temp0_1502 & 0x10) == 0)
                                        label_1401923ed:
                                            
                                            if ((temp0_1502 & 0x20) != 0)
                                                goto label_14019234b
                                            
                                            goto label_1401923f7
                                        
                                    label_14019233c:
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg15[0], 4)
                                        
                                        if ((temp0_1502 & 0x20) != 0)
                                        label_14019234b:
                                            uint16_t* rax_252 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_252, 5)
                                            
                                            if ((temp0_1502 & 0x40) == 0)
                                                goto label_140192401
                                            
                                            goto label_140192360
                                        
                                    label_1401923f7:
                                        
                                        if ((temp0_1502 & 0x40) != 0)
                                        label_140192360:
                                            zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *zmm0[0].q, 6)
                                            
                                            if (temp0_1502 s< 0)
                                            label_140192379:
                                                zmm0[0].o = _mm256_extracti128_si256(arg15, 1)
                                                uint16_t* rax_254 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_254, 7)
                                        else
                                        label_140192401:
                                            
                                            if (temp0_1502 s< 0)
                                                goto label_140192379
                                        
                                        arg7 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                            temp0_1439) & not.32(arg11)
                                        zmm5[0].o = zx.o(0)
                                        int32_t temp0_1508 = _mm256_movemask_ps(arg7 & arg5)
                                        arg8[0].o = zx.o(0)
                                        
                                        if (temp0_1508 != i_3)
                                            arg8 = arg7 ^ arg11
                                        
                                        arg10 = _mm256_blendv_ps(arg10, zmm2, arg7)
                                        zmm2 = _mm256_add_epi32(zmm2, arg13)
                                        arg11 = _mm256_cmpgt_epi32(zmm2, zmm5) & arg8
                                        arg7 = arg11 & arg5
                                
                                arg7 = var_960_4
                                arg12 = _mm256_blendv_ps(var_9c0_1, arg10, arg5)
                                zmm5 = _mm256_add_epi32(arg12, arg12)
                                zmm0 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                zmm2 = _mm256_add_epi64(arg6, zmm0)
                                
                                if ((rdx_9 & 1) != 0)
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*zmm2[0].q)
                                
                                arg13 = var_880_3
                                arg15[0].o = var_580[0].o
                                arg10 = var_520
                                arg11 = var_860_4
                                
                                if ((rdx_9 & 2) == 0)
                                    zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    
                                    if ((rdx_9 & 4) != 0)
                                        goto label_140194ebf
                                    
                                    goto label_1401924bf
                                
                                int64_t rax_374 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_374, 1)
                                zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                
                                if ((rdx_9 & 4) != 0)
                                label_140194ebf:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((rdx_9 & 8) == 0)
                                        goto label_1401924cd
                                    
                                    goto label_140194edd
                                
                            label_1401924bf:
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((rdx_9 & 8) == 0)
                                label_1401924cd:
                                    zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                    
                                    if ((rdx_9 & 0x10) != 0)
                                        goto label_140194f05
                                    
                                    goto label_1401924df
                                
                            label_140194edd:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                int64_t rax_376 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_376, 3)
                                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_8c0_2)
                                
                                if ((rdx_9 & 0x10) != 0)
                                label_140194f05:
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 4)
                                    
                                    if ((rdx_9 & 0x20) == 0)
                                        goto label_1401924e8
                                    
                                    goto label_140194f13
                                
                            label_1401924df:
                                
                                if ((rdx_9 & 0x20) == 0)
                                label_1401924e8:
                                    
                                    if ((rdx_9 & 0x40) != 0)
                                        goto label_140194f27
                                    
                                    goto label_1401924f1
                                
                            label_140194f13:
                                int64_t rax_378 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_378, 5)
                                
                                if ((rdx_9 & 0x40) == 0)
                                label_1401924f1:
                                    
                                    if (temp0_1408.b s< 0)
                                    label_140194f3f:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint16_t* rax_380 =
                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_380, 7)
                                else
                                label_140194f27:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1408.b s< 0)
                                        goto label_140194f3f
                                
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
                                int64_t temp0_1529[0x4] = _mm256_add_epi64(arg6, zmm0)
                                
                                if ((rdx_9 & 1) == 0)
                                    if ((rdx_9 & 2) != 0)
                                        goto label_140194f68
                                    
                                    goto label_140192562
                                
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*temp0_1529[0])
                                
                                if ((rdx_9 & 2) != 0)
                                label_140194f68:
                                    int64_t rax_382 =
                                        __vpextrq_gpr64q_xmmdq_immb(temp0_1529[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_382, 1)
                                    arg6[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    
                                    if ((rdx_9 & 4) == 0)
                                        goto label_140192571
                                    
                                    goto label_140194f82
                                
                            label_140192562:
                                arg6[0].o = _mm256_extracti128_si256(zmm5, 1)
                                
                                if ((rdx_9 & 4) == 0)
                                label_140192571:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((rdx_9 & 8) != 0)
                                        goto label_140194fa0
                                    
                                    goto label_14019257f
                                
                            label_140194f82:
                                zmm0[0].o = _mm256_extracti128_si256(temp0_1529, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((rdx_9 & 8) != 0)
                                label_140194fa0:
                                    zmm0[0].o = _mm256_extracti128_si256(temp0_1529, 1)
                                    int64_t rax_384 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_384, 3)
                                    arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8c0_2)
                                    
                                    if ((rdx_9 & 0x10) == 0)
                                        goto label_140192591
                                    
                                    goto label_140194fc8
                                
                            label_14019257f:
                                arg5 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_8c0_2)
                                
                                if ((rdx_9 & 0x10) == 0)
                                label_140192591:
                                    
                                    if ((rdx_9 & 0x20) != 0)
                                        goto label_140194fd6
                                    
                                    goto label_14019259a
                                
                            label_140194fc8:
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0], 4)
                                
                                if ((rdx_9 & 0x20) != 0)
                                label_140194fd6:
                                    int64_t rax_386 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_386, 5)
                                    
                                    if ((rdx_9 & 0x40) == 0)
                                        goto label_1401925a3
                                    
                                    goto label_140194fea
                                
                            label_14019259a:
                                
                                if ((rdx_9 & 0x40) != 0)
                                label_140194fea:
                                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1408.b s< 0)
                                    label_140195002:
                                        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                                        int64_t rax_388 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_388, 7)
                                else
                                label_1401925a3:
                                    
                                    if (temp0_1408.b s< 0)
                                        goto label_140195002
                                
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
            zmm1 = __vpmulld_ymmqq_ymmqq_memqq(arg12, var_940)
            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
            int64_t var_8e0_4[0x4] = arg5
            float var_760_1[0x8] = zmm1
            zmm1 = _mm256_add_epi64(zmm1, arg5)
            float var_8c0_3[0x8] = zmm0
            int32_t var_860_5[0x8] = zmm2
            zmm2 = _mm256_add_epi64(zmm2, zmm0)
            float var_9a0_4[0x8] = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_820_2)
            float var_9c0_2[0x8] = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_6e0_1)
            zmm0 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg10, var_800_2)
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            float var_960_5[0x8] = zmm0
            var_520[0].o = zmm1[0].o
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o &= arg15[0].o
            zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
            zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            int64_t var_880_4[0x4] = arg13
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm2 = arg14 & __vpbroadcastd_ymmqq_memd(0x7000000)
                arg5[0].o = zx.o(0)
                uint32_t temp0_1664[0x8] = _mm256_cmpeq_epi32(zmm2, arg5)
                arg5[0].o = _mm256_extracti128_si256(temp0_1664, 1)
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1664[0].o, arg5[0].o)
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
                    float temp0_1683[0x4]
                    int32_t temp1_63
                    temp0_1683, temp1_63 =
                        _mm256_i64gather_ps(arg10[0].o, *(r12 + arg8[0].q), arg6[0].o)
                    arg10[0].o = temp0_1683
                    arg6[0].o = temp1_63
                    arg6[0].o = zmm0[0].o
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    float temp0_1685[0x4]
                    int32_t temp1_64
                    temp0_1685, temp1_64 =
                        _mm256_i64gather_ps(arg8[0].o, *(r12 + arg9[0].q), arg6[0].o)
                    arg8[0].o = temp0_1685
                    arg6[0].o = temp1_64
                    arg6 = __vpbroadcastq_ymmqq_memq(8)
                    arg9 = _mm256_add_epi64(zmm5, arg6)
                    arg11 = _mm256_add_epi64(arg7, arg6)
                    arg6[0].o = arg5[0].o
                    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                    float temp0_1690[0x4]
                    int32_t temp1_65
                    temp0_1690, temp1_65 =
                        _mm256_i64gather_ps(arg13[0].o, *(r12 + arg11[0].q), arg6[0].o)
                    arg13[0].o = temp0_1690
                    arg6[0].o = temp1_65
                    arg6[0].o = zmm0[0].o
                    zmm2[0].o = zx.o(0)
                    float temp0_1691[0x4]
                    int32_t temp1_66
                    temp0_1691, temp1_66 =
                        _mm256_i64gather_ps(zx.o(0), *(r12 + arg9[0].q), arg6[0].o)
                    zmm2[0].o = temp0_1691
                    arg6[0].o = temp1_66
                    arg6 = __vpbroadcastq_ymmqq_memq(0xc)
                    arg9 = _mm256_add_epi64(arg7, arg6)
                    arg7[0].o = arg5[0].o
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    float temp0_1695[0x4]
                    int32_t temp1_67
                    temp0_1695, temp1_67 =
                        _mm256_i64gather_ps(arg11[0].o, *(r12 + arg9[0].q), arg7[0].o)
                    arg11[0].o = temp0_1695
                    arg7[0].o = temp1_67
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    arg6 = _mm256_add_epi64(zmm5, arg6)
                    float temp0_1698[0x4]
                    int32_t temp1_68
                    temp0_1698, temp1_68 =
                        _mm256_i64gather_ps(arg7[0].o, *(r12 + arg6[0].q), zmm0[0].o)
                    arg7[0].o = temp0_1698
                    zmm0[0].o = temp1_68
                    zmm0 = _mm256_insertf128_ps(arg10, arg8[0].o, 1)
                    zmm2 = _mm256_insertf128_ps(arg13, zmm2[0].o, 1)
                    arg13 = var_880_4
                    arg6 = _mm256_insertf128_ps(arg11, arg7[0].o, 1)
                    var_5e0.32 = _mm256_maskstore_ps(arg5, zmm0)
                    var_5c0.32 = _mm256_maskstore_ps(arg5, zmm2)
                    var_5a0.32 = _mm256_maskstore_ps(arg5, arg6)
                
                arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                zmm2 = temp0_1664 ^ arg5
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
                    arg9 = _mm256_srai_epi32(_mm256_slli_epi32(temp0_1306, 0x1f), 0x1f)
                    zmm5 = arg9 & arg11
                    
                    if (_mm256_movemask_ps(zmm5) == 0)
                        arg5 = var_9c0_2
                        arg7 = var_9a0_4
                    else
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        arg5 = _mm256_blendv_ps(var_9c0_2, _mm256_add_epi64(var_9c0_2, zmm0), 
                            _mm256_permutevar8x32_ps(data_143442920, zmm5))
                        arg6 = _mm256_permutevar8x32_ps(data_143442940, zmm5)
                        arg7 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                        zmm1 = var_8e0_4
                        arg8 = __vpaddq_ymmqq_ymmqq_memqq(
                            __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_920_2), var_760_1)
                        arg7 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg7, var_860_5), zmm0)
                        arg8 = _mm256_add_epi64(arg8, zmm0)
                        zmm1[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        float temp0_1731[0x4]
                        int32_t temp1_69
                        temp0_1731, temp1_69 =
                            _mm256_i64gather_ps(arg10[0].o, *(r12 + arg8[0].q), zmm5[0].o)
                        arg10[0].o = temp0_1731
                        zmm5[0].o = temp1_69
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        float temp0_1733[0x4]
                        int32_t temp1_70
                        temp0_1733, temp1_70 =
                            _mm256_i64gather_ps(zmm5[0].o, *(r12 + arg7[0].q), zmm1[0].o)
                        zmm5[0].o = temp0_1733
                        zmm1[0].o = temp1_70
                        zmm1 = var_9a0_4
                        arg7 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, zmm0), arg6)
                        zmm5 = _mm256_insertf128_ps(arg10, zmm5[0].o, 1)
                    
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    var_5e0.32 = _mm256_maskstore_ps(arg11, _mm256_blendv_ps(arg10, zmm5, arg9))
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
                        float temp0_1755[0x4]
                        int32_t temp1_71
                        temp0_1755, temp1_71 = _mm256_i64gather_ps(arg8[0].o, *arg5[0], zmm0[0].o)
                        arg8[0].o = temp0_1755
                        zmm0[0].o = temp1_71
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        arg5 = _mm256_blendv_ps(arg5, _mm256_add_epi64(arg5, zmm0), zmm1)
                        arg13 = var_880_4
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_1760[0x4]
                        int32_t temp1_72
                        temp0_1760, temp1_72 = _mm256_i64gather_ps(zmm1[0].o, *arg7[0].q, zmm5[0].o)
                        zmm1[0].o = temp0_1760
                        zmm5[0].o = temp1_72
                        arg7 = _mm256_blendv_ps(arg7, _mm256_add_epi64(arg7, zmm0), arg6)
                        zmm5 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                    
                    var_5c0.32 =
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
                        float temp0_1778[0x4]
                        int32_t temp1_73
                        temp0_1778, temp1_73 = _mm256_i64gather_ps(zx.o(0), *arg5[0], zmm0[0].o)
                        zmm2[0].o = temp0_1778
                        zmm0[0].o = temp1_73
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        float temp0_1780[0x4]
                        int32_t temp1_74
                        temp0_1780, temp1_74 = _mm256_i64gather_ps(zmm0[0].o, *arg7[0].q, zmm1[0].o)
                        zmm0[0].o = temp0_1780
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
                zmm2 = var_8a0_2
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_700[0].o)
                zmm1[0].o = zmm0[0].o & arg15[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                float var_560_2[0x8] = arg12
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    arg12[0].o = arg15[0].o
                    arg13 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    zmm0[0].o = zx.o(0)
                    float var_620_3[0x8] = zmm0
                    float var_640_3[0x8] = zmm0
                    float var_660_3[0x8] = zmm0
                    float var_680_3[0x8] = zmm0
                    float var_6a0_3[0x8] = zmm0
                    float var_6c0_3[0x8] = zmm0
                    arg7 = zmm2 & _mm256_srai_epi32(_mm256_slli_epi32(temp0_1306, 0x1f), 0x1f)
                    arg9 = arg7 & var_540_1
                    arg5 = var_6e0_1
                    zmm1 = arg5
                    arg15 = var_820_2
                    zmm2 = arg15
                    
                    if (_mm256_movemask_ps(arg9) != 0)
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        zmm1 = _mm256_add_epi64(arg5, zmm0)
                        zmm2 = _mm256_permutevar8x32_ps(data_143442920, arg9)
                        float temp0_1804[0x8] = _mm256_blendv_ps(arg5, zmm1, zmm2)
                        zmm1 = _mm256_add_epi64(arg15, zmm0)
                        arg10 = data_143442940
                        arg8[0].o = _mm256_extractf128_ps(arg9[0], 1)
                        zmm5[0].o = arg9[0]
                        arg11[0].o = zx.o(0)
                        float temp0_1807[0x4]
                        int32_t temp1_75
                        temp0_1807, temp1_75 = _mm256_i64gather_ps(arg11[0].o, *arg5[0], zmm5[0].o)
                        arg11[0].o = temp0_1807
                        zmm5[0].o = temp1_75
                        zmm5[0].o = arg8[0].o
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_1809[0x4]
                        int32_t temp1_76
                        temp0_1809, temp1_76 = _mm256_i64gather_ps(arg5[0].o, *arg15[0], zmm5[0].o)
                        arg5[0].o = temp0_1809
                        zmm5[0].o = temp1_76
                        zmm5 = _mm256_permutevar8x32_ps(arg10, arg9)
                        arg10 = _mm256_blendv_ps(arg15, zmm1, zmm5)
                        var_660_3 =
                            _mm256_maskstore_ps(arg7, _mm256_insertf128_ps(arg11, arg5[0].o, 1))
                        zmm1 =
                            _mm256_blendv_ps(temp0_1804, _mm256_add_epi64(temp0_1804, zmm0), zmm2)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_1817[0x4]
                        int32_t temp1_77
                        temp0_1817, temp1_77 =
                            _mm256_i64gather_ps(arg5[0].o, *temp0_1804[0].q, arg9[0])
                        arg5[0].o = temp0_1817
                        arg9[0] = temp1_77
                        temp0_1804[0].o =
                            __vxorps_xmmdq_xmmdq_xmmdq(temp0_1804[0].o, temp0_1804[0].o)
                        float temp0_1819[0x4]
                        int32_t temp1_78
                        temp0_1819, temp1_78 =
                            _mm256_i64gather_ps(temp0_1804[0].o, *arg10[0].q, arg8[0].o)
                        temp0_1804[0].o = temp0_1819
                        arg8[0].o = temp1_78
                        zmm2 = _mm256_blendv_ps(arg10, _mm256_add_epi64(arg10, zmm0), zmm5)
                        var_6c0_3 = _mm256_maskstore_ps(arg7, 
                            _mm256_insertf128_ps(arg5, temp0_1804[0].o, 1))
                    
                    arg11 = _mm256_slli_epi32(arg13, 0x1f)
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                    zmm0 = _mm256_cmpeq_epi32(arg14 & zmm0, zmm0)
                    arg5 = zmm0 & var_8a0_2
                    zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
                    arg15[0].o = arg12[0].o
                    zmm5[0].o = zmm0[0].o & arg12[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f), 0x1f)
                        arg6 = __vpbroadcastq_ymmqq_memq(4)
                        zmm5 = _mm256_add_epi64(zmm1, arg6)
                        arg8 = data_143442920
                        uint32_t temp0_1838[0x8] = _mm256_permutevar8x32_epi32(arg8, zmm0)
                        zmm5 = _mm256_blendv_ps(zmm1, zmm5, temp0_1838)
                        arg9 = _mm256_add_epi64(zmm2, arg6)
                        arg10 = data_143442940
                        arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg13[0].o = zx.o(0)
                        arg8[0].o = zmm0[0].o
                        float temp0_1842[0x4]
                        int32_t temp1_79
                        temp0_1842, temp1_79 = _mm256_i64gather_ps(zx.o(0), *zmm1[0].q, arg8[0].o)
                        arg13[0].o = temp0_1842
                        arg8[0].o = temp1_79
                        zmm1[0].o = arg7[0].o
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_1844[0x4]
                        int32_t temp1_80
                        temp0_1844, temp1_80 = _mm256_i64gather_ps(arg8[0].o, *zmm2[0].q, zmm1[0].o)
                        arg8[0].o = temp0_1844
                        zmm1[0].o = temp1_80
                        arg10 = _mm256_permutevar8x32_epi32(arg10, zmm0)
                        zmm2 = _mm256_blendv_ps(zmm2, arg9, arg10)
                        var_640_3 =
                            _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(arg13, arg8[0].o, 1))
                        zmm1 = _mm256_blendv_ps(zmm5, _mm256_add_epi64(zmm5, arg6), temp0_1838)
                        arg14 = var_980_1
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_1852[0x4]
                        int32_t temp1_81
                        temp0_1852, temp1_81 = _mm256_i64gather_ps(arg8[0].o, *zmm5[0].q, zmm0[0].o)
                        arg8[0].o = temp0_1852
                        zmm0[0].o = temp1_81
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        float temp0_1854[0x4]
                        int32_t temp1_82
                        temp0_1854, temp1_82 = _mm256_i64gather_ps(zmm0[0].o, *zmm2[0].q, arg7[0].o)
                        zmm0[0].o = temp0_1854
                        arg7[0].o = temp1_82
                        zmm2 = _mm256_blendv_ps(zmm2, _mm256_add_epi64(zmm2, arg6), arg10)
                        var_6a0_3 =
                            _mm256_maskstore_ps(arg5, _mm256_insertf128_ps(arg8, zmm0[0].o, 1))
                    
                    arg13 = var_880_4
                    arg12 = var_560_2
                    arg7 = _mm256_srai_epi32(arg11, 0x1f)
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                    zmm0 = _mm256_cmpeq_epi32(arg14 & zmm0, zmm0)
                    arg5 = zmm0 & var_8a0_2
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
                        uint32_t temp0_1873[0x8] = _mm256_permutevar8x32_epi32(data_143442920, zmm0)
                        float temp0_1874[0x8] = _mm256_blendv_ps(zmm1, zmm5, temp0_1873)
                        arg6 = _mm256_add_epi64(zmm2, arg6)
                        arg9 = data_143442940
                        temp0_1873[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        zmm5[0].o = zmm0[0].o
                        float temp0_1878[0x4]
                        int32_t temp1_83
                        temp0_1878, temp1_83 =
                            _mm256_i64gather_ps(arg10[0].o, *zmm1[0].q, zmm5[0].o)
                        arg10[0].o = temp0_1878
                        zmm5[0].o = temp1_83
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        zmm5[0].o = temp0_1873[0].o
                        float temp0_1880[0x4]
                        int32_t temp1_84
                        temp0_1880, temp1_84 = _mm256_i64gather_ps(zmm1[0].o, *zmm2[0].q, zmm5[0].o)
                        zmm1[0].o = temp0_1880
                        zmm5[0].o = temp1_84
                        zmm2 = _mm256_blendv_ps(zmm2, arg6, _mm256_permutevar8x32_epi32(arg9, zmm0))
                        zmm1 = _mm256_insertf128_ps(arg10, zmm1[0].o, 1)
                        var_620_3 = _mm256_maskstore_ps(arg5, zmm1)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_1886[0x4]
                        int32_t temp1_85
                        temp0_1886, temp1_85 =
                            _mm256_i64gather_ps(zmm1[0].o, *temp0_1874[0].q, zmm0[0].o)
                        zmm1[0].o = temp0_1886
                        zmm0[0].o = temp1_85
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        float temp0_1888[0x4]
                        int32_t temp1_86
                        temp0_1888, temp1_86 =
                            _mm256_i64gather_ps(zmm0[0].o, *zmm2[0].q, temp0_1873[0].o)
                        zmm0[0].o = temp0_1888
                        temp0_1873[0].o = temp1_86
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
                    uint32_t temp0_1898[0x4]
                    int32_t temp1_87
                    temp0_1898, temp1_87 =
                        _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm1[0].q), zmm2[0].o)
                    arg5[0].o = temp0_1898
                    zmm2[0].o = temp1_87
                    zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                    zmm2[0].o = zx.o(0)
                    uint32_t temp0_1900[0x4]
                    int32_t temp1_88
                    temp0_1900, temp1_88 =
                        _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm0[0].q), zmm1[0].o)
                    zmm2[0].o = temp0_1900
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
                    zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, zmm0))
                    arg8 = _mm256_broadcast_ss(1023f)
                    zmm2 = _mm256_div_ps(zmm2, arg8)
                    float temp0_1919[0x8] =
                        _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm0)), arg8)
                    zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg6, var_640_3)
                    zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_1919, var_680_3, var_620_3)
                    var_5e0.32 = _mm256_maskstore_ps(arg7, arg5)
                    var_5c0.32 = _mm256_maskstore_ps(arg7, zmm2)
                    var_5a0.32 = _mm256_maskstore_ps(arg7, zmm0)
                    zmm2 = var_8a0_2
                    zmm5 = _mm256_cmpeq_epi32(var_680_3, var_680_3)
                
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_700[0].o)
                zmm2[0].o = zmm0[0].o ^ var_840_1
                zmm0[0].o = zmm2[0].o & arg15[0].o
                zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                    zmm0 = __vpbroadcastd_ymmqq_memd(2)
                    arg8 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_800_2)
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
                        arg5 = _mm256_srai_epi32(_mm256_slli_epi32(temp0_1306, 0x1f), 0x1f)
                        zmm5 = arg5 & arg7
                        int32_t temp0_1944 = _mm256_movemask_ps(zmm5)
                        arg13[0].o = arg15[0].o
                        
                        if (temp0_1944 != 0)
                            zmm0 = __vpbroadcastq_ymmqq_memq(2)
                            arg10 = var_9a0_4
                            arg6 = _mm256_add_epi64(arg10, zmm0)
                            zmm0 = _mm256_add_epi64(var_9c0_2, zmm0)
                            arg9 = _mm256_permutevar8x32_ps(data_143442920, zmm5)
                            var_9c0_2 = _mm256_blendv_ps(var_9c0_2, zmm0, arg9)
                            float temp0_1950[0x8] = _mm256_permutevar8x32_ps(data_143442940, zmm5)
                            var_9a0_4 = _mm256_blendv_ps(arg10, arg6, temp0_1950)
                            arg6 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                            zmm5 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_4, var_920_2)
                            arg10 = __vpbroadcastq_ymmqq_memq(4)
                            zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_760_1)
                            arg6 =
                                _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg6, var_860_5), arg10)
                            zmm5 = _mm256_add_epi64(zmm5, arg10)
                            arg10[0].o = zx.o(0)
                            float temp0_1959[0x8] = _mm256_blendv_ps(arg10, zmm5, arg9)
                            float temp0_1960[0x8] = _mm256_blendv_ps(arg10, arg6, temp0_1950)
                            int64_t r8_6 = __vpextrq_gpr64q_xmmdq_immb(temp0_1959[0].o, 1)
                            int64_t rcx_29 = temp0_1959[0].q
                            arg6[0].o = _mm256_extracti128_si256(temp0_1959, 1)
                            int64_t r9_3 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            int64_t rbx_13 = arg6[0].q
                            int64_t rdi_13 = temp0_1960[0].q
                            int64_t rsi_13 = __vpextrq_gpr64q_xmmdq_immb(temp0_1960[0].o, 1)
                            temp0_1960[0].o = _mm256_extracti128_si256(temp0_1960, 1)
                            int64_t rax_310 = temp0_1960[0].q
                            int64_t rdx_11 = __vpextrq_gpr64q_xmmdq_immb(temp0_1960[0].o, 1)
                            temp0_1960[0].o = zx.o(*(r12 + rcx_29))
                            temp0_1960[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1960[0].o, *(r12 + r8_6), 1)
                            temp0_1960[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1960[0].o, *(r12 + rbx_13), 2)
                            temp0_1960[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1960[0].o, *(r12 + r9_3), 3)
                            temp0_1960[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1960[0].o, *(r12 + rdi_13), 4)
                            temp0_1960[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1960[0].o, *(r12 + rsi_13), 5)
                            temp0_1960[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1960[0].o, 
                                *(r12 + rax_310), 6)
                            temp0_1960[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1960[0].o, *(r12 + rdx_11), 7)
                            zmm0 = _mm256_cvtepu16_epi32(temp0_1960[0].o)
                            arg6 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                            zmm5 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg6))
                        
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        var_5e0.32 = _mm256_maskstore_ps(arg7, _mm256_blendv_ps(arg10, zmm5, arg5))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        arg15 = arg14 & zmm0
                        zmm0 = _mm256_cmpeq_epi32(arg15, zmm0)
                        arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        arg5[0].o = zmm1[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_1984 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_1984 == 0)
                            zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                            arg6[0].o = var_540_1[0].o
                        else
                            if ((temp0_1984 & 1) == 0)
                                if ((temp0_1984 & 2) != 0)
                                    goto label_1401945d5
                                
                                goto label_1401937d4
                            
                            arg12[0].o = __vpbroadcastw_xmmdq_memw(*var_9c0_2[0].q)
                            
                            if ((temp0_1984 & 2) != 0)
                            label_1401945d5:
                                uint16_t* rax_334 = __vpextrq_gpr64q_xmmdq_immb(var_9c0_2[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_334, 1)
                                
                                if ((temp0_1984 & 4) == 0)
                                    goto label_1401937dd
                                
                                goto label_1401945ee
                            
                        label_1401937d4:
                            
                            if ((temp0_1984 & 4) == 0)
                            label_1401937dd:
                                
                                if ((temp0_1984 & 8) != 0)
                                    goto label_14019460c
                                
                                goto label_1401937e6
                            
                        label_1401945ee:
                            var_9c0_2[0].o = _mm256_extracti128_si256(var_9c0_2, 1)
                            arg12[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *var_9c0_2[0].q, 2)
                            
                            if ((temp0_1984 & 8) != 0)
                            label_14019460c:
                                var_9c0_2[0].o = _mm256_extracti128_si256(var_9c0_2, 1)
                                uint16_t* rax_336 = __vpextrq_gpr64q_xmmdq_immb(var_9c0_2[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_336, 3)
                                arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                                
                                if ((temp0_1984 & 0x10) == 0)
                                    goto label_1401937f4
                                
                                goto label_140194636
                            
                        label_1401937e6:
                            arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                            uint16_t* rax_311
                            
                            if ((temp0_1984 & 0x10) != 0)
                            label_140194636:
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *var_9a0_4[0].q, 4)
                                arg5 = _mm256_slli_epi32(arg5, 0x1f)
                                
                                if ((temp0_1984 & 0x20) != 0)
                                    rax_311 = __vpextrq_gpr64q_xmmdq_immb(var_9a0_4[0].o, 1)
                                    arg12[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_311, 5)
                            else
                            label_1401937f4:
                                arg5 = _mm256_slli_epi32(arg5, 0x1f)
                                
                                if ((temp0_1984 & 0x20) != 0)
                                    rax_311 = __vpextrq_gpr64q_xmmdq_immb(var_9a0_4[0].o, 1)
                                    arg12[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_311, 5)
                            arg5 = _mm256_srai_epi32(arg5, 0x1f)
                            zmm5 = __vpbroadcastq_ymmqq_memq(2)
                            arg11 = data_143442920
                            arg10 = data_143442940
                            
                            if ((temp0_1984 & 0x40) != 0)
                                var_9a0_4[0].o = _mm256_extracti128_si256(var_9a0_4, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *var_9a0_4[0].q, 6)
                            
                            arg9 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_9a0_4)
                            zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_9c0_2)
                            arg11 = _mm256_permutevar8x32_epi32(arg11, arg5)
                            arg5 = _mm256_permutevar8x32_epi32(arg10, arg5)
                            
                            if (temp0_1984 s< 0)
                                var_9a0_4[0].o = _mm256_extracti128_si256(var_9a0_4, 1)
                                uint16_t* rax_313 = __vpextrq_gpr64q_xmmdq_immb(var_9a0_4[0].o, 1)
                                arg12[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *rax_313, 7)
                            
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
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                        arg12 = arg14 & zmm0
                        zmm0 = _mm256_cmpeq_epi32(arg12, zmm0)
                        arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                        zmm0[0].o &= zmm1[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        char temp0_2015 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                        
                        if (temp0_2015 == 0)
                            arg15[0].o = arg13[0].o
                            arg13 = var_880_4
                        else
                            arg15[0].o = arg13[0].o
                            
                            if ((temp0_2015 & 1) == 0)
                                arg13 = var_880_4
                                
                                if ((temp0_2015 & 2) != 0)
                                    goto label_140194674
                                
                                goto label_14019393f
                            
                            zmm1[0].o = __vpbroadcastw_xmmdq_memw(*var_9c0_2[0].q)
                            arg13 = var_880_4
                            
                            if ((temp0_2015 & 2) != 0)
                            label_140194674:
                                int64_t rax_339 = __vpextrq_gpr64q_xmmdq_immb(var_9c0_2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_339, 1)
                                
                                if ((temp0_2015 & 4) == 0)
                                    goto label_140193948
                                
                                goto label_14019468d
                            
                        label_14019393f:
                            
                            if ((temp0_2015 & 4) == 0)
                            label_140193948:
                                
                                if ((temp0_2015 & 8) != 0)
                                    goto label_1401946ab
                                
                                goto label_140193951
                            
                        label_14019468d:
                            var_9c0_2[0].o = _mm256_extracti128_si256(var_9c0_2, 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *var_9c0_2[0].q, 2)
                            
                            if ((temp0_2015 & 8) != 0)
                            label_1401946ab:
                                var_9c0_2[0].o = _mm256_extracti128_si256(var_9c0_2, 1)
                                int64_t rax_341 = __vpextrq_gpr64q_xmmdq_immb(var_9c0_2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_341, 3)
                                
                                if ((temp0_2015 & 0x10) == 0)
                                    goto label_14019395a
                                
                                goto label_1401946d0
                            
                        label_140193951:
                            
                            if ((temp0_2015 & 0x10) == 0)
                            label_14019395a:
                                
                                if ((temp0_2015 & 0x20) != 0)
                                    goto label_1401946e4
                                
                                goto label_140193963
                            
                        label_1401946d0:
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *var_9a0_4[0].q, 4)
                            
                            if ((temp0_2015 & 0x20) != 0)
                            label_1401946e4:
                                int64_t rax_343 = __vpextrq_gpr64q_xmmdq_immb(var_9a0_4[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_343, 5)
                                
                                if ((temp0_2015 & 0x40) == 0)
                                    goto label_14019396c
                                
                                goto label_1401946fe
                            
                        label_140193963:
                            
                            if ((temp0_2015 & 0x40) != 0)
                            label_1401946fe:
                                var_9a0_4[0].o = _mm256_extracti128_si256(var_9a0_4, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *var_9a0_4[0].q, 6)
                                
                                if (temp0_2015 s< 0)
                                label_14019471c:
                                    var_9a0_4[0].o = _mm256_extracti128_si256(var_9a0_4, 1)
                                    int64_t rax_345 = __vpextrq_gpr64q_xmmdq_immb(var_9a0_4[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_345, 7)
                            else
                            label_14019396c:
                                
                                if (temp0_2015 s< 0)
                                    goto label_14019471c
                            
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
                        zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_800_2)
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
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm2, var_940)
                zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                arg5 = _mm256_cvtepi32_epi64(zmm2[0].o)
                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                float var_9a0_5[0x8] = zmm0
                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_8e0_4)
                var_940 = arg5
                float var_960_6[0x8] = __vpaddq_ymmqq_ymmqq_memqq(
                    __vpaddq_ymmqq_ymmqq_memqq(arg5, var_8c0_3), var_820_2)
                arg12 = var_6e0_1
                zmm0 = _mm256_add_epi64(zmm2, arg12)
                float var_9c0_3[0x8] = zmm0
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
                        arg6 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                        zmm0 = var_8e0_4
                        zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, var_920_2)
                        arg9 = __vpbroadcastq_ymmqq_memq(4)
                        zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_9a0_5)
                        arg6 = __vpaddq_ymmqq_ymmqq_memqq(arg6, var_940)
                        arg10 = _mm256_add_epi64(arg6, arg9)
                        arg9 = _mm256_add_epi64(zmm5, arg9)
                        zmm0[0].o = _mm256_extracti128_si256(arg5, 1)
                        arg7[0].o = arg5[0].o
                        arg14[0].o = zx.o(0)
                        float temp0_2095[0x4]
                        int32_t temp1_89
                        temp0_2095, temp1_89 =
                            _mm256_i64gather_ps(arg14[0].o, *(r12 + arg9[0].q), arg7[0].o)
                        arg14[0].o = temp0_2095
                        arg7[0].o = temp1_89
                        arg7[0].o = zmm0[0].o
                        arg8[0].o = zx.o(0)
                        float temp0_2096[0x4]
                        int32_t temp1_90
                        temp0_2096, temp1_90 =
                            _mm256_i64gather_ps(arg8[0].o, *(r12 + arg10[0].q), arg7[0].o)
                        arg8[0].o = temp0_2096
                        arg7[0].o = temp1_90
                        arg7 = __vpbroadcastq_ymmqq_memq(8)
                        arg9 = _mm256_add_epi64(arg6, arg7)
                        arg10 = _mm256_add_epi64(zmm5, arg7)
                        arg7[0].o = arg5[0].o
                        arg12[0].o = zx.o(0)
                        float temp0_2100[0x4]
                        int32_t temp1_91
                        temp0_2100, temp1_91 =
                            _mm256_i64gather_ps(zx.o(0), *(r12 + arg10[0].q), arg7[0].o)
                        arg12[0].o = temp0_2100
                        arg7[0].o = temp1_91
                        arg7[0].o = zmm0[0].o
                        zmm2[0].o = zx.o(0)
                        float temp0_2101[0x4]
                        int32_t temp1_92
                        temp0_2101, temp1_92 =
                            _mm256_i64gather_ps(zx.o(0), *(r12 + arg9[0].q), arg7[0].o)
                        zmm2[0].o = temp0_2101
                        arg7[0].o = temp1_92
                        arg7 = __vpbroadcastq_ymmqq_memq(0xc)
                        arg9 = _mm256_add_epi64(zmm5, arg7)
                        zmm5[0].o = arg5[0].o
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        float temp0_2105[0x4]
                        int32_t temp1_93
                        temp0_2105, temp1_93 =
                            _mm256_i64gather_ps(arg10[0].o, *(r12 + arg9[0].q), zmm5[0].o)
                        arg10[0].o = temp0_2105
                        zmm5[0].o = temp1_93
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        arg6 = _mm256_add_epi64(arg6, arg7)
                        float temp0_2108[0x4]
                        int32_t temp1_94
                        temp0_2108, temp1_94 =
                            _mm256_i64gather_ps(zmm5[0].o, *(r12 + arg6[0].q), zmm0[0].o)
                        zmm5[0].o = temp0_2108
                        zmm0[0].o = temp1_94
                        zmm0 = _mm256_insertf128_ps(arg14, arg8[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg12, zmm2[0].o, 1)
                        arg12 = var_6e0_1
                        arg6 = _mm256_insertf128_ps(arg10, zmm5[0].o, 1)
                        var_500 = _mm256_maskstore_ps(arg5, zmm0)
                        var_4e0 = _mm256_maskstore_ps(arg5, zmm2)
                        var_4c0 = _mm256_maskstore_ps(arg5, arg6)
                    
                    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                    zmm2 = arg13 ^ arg5
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
                        arg6 = _mm256_srai_epi32(_mm256_slli_epi32(temp0_1306, 0x1f), 0x1f)
                        arg5 = arg6 & arg9
                        
                        if (_mm256_movemask_ps(arg5) == 0)
                            arg10 = var_9c0_3
                            arg14 = var_960_6
                        else
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            arg10 = _mm256_blendv_ps(var_9c0_3, _mm256_add_epi64(var_9c0_3, zmm0), 
                                _mm256_permutevar8x32_ps(data_143442920, arg5))
                            float temp0_2132[0x8] = _mm256_permutevar8x32_ps(data_143442940, arg5)
                            arg7 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                            zmm1 = var_8e0_4
                            arg8 = __vpaddq_ymmqq_ymmqq_memqq(
                                __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_920_2), var_9a0_5)
                            arg7 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg7, var_940), zmm0)
                            arg8 = _mm256_add_epi64(arg8, zmm0)
                            zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg12[0].o = zx.o(0)
                            float temp0_2140[0x4]
                            int32_t temp1_95
                            temp0_2140, temp1_95 =
                                _mm256_i64gather_ps(arg12[0].o, *(r12 + arg8[0].q), arg5[0].o)
                            arg12[0].o = temp0_2140
                            arg5[0].o = temp1_95
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_2142[0x4]
                            int32_t temp1_96
                            temp0_2142, temp1_96 =
                                _mm256_i64gather_ps(arg5[0].o, *(r12 + arg7[0].q), zmm1[0].o)
                            arg5[0].o = temp0_2142
                            zmm1[0].o = temp1_96
                            zmm1 = var_960_6
                            arg14 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, zmm0), temp0_2132)
                            zmm5 = _mm256_insertf128_ps(arg12, arg5[0].o, 1)
                        
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        var_500 = _mm256_maskstore_ps(arg9, _mm256_blendv_ps(arg5, zmm5, arg6))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        arg6 = zmm0 & var_980_1
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
                            float temp0_2164[0x4]
                            int32_t temp1_97
                            temp0_2164, temp1_97 =
                                _mm256_i64gather_ps(arg8[0].o, *arg10[0].q, zmm0[0].o)
                            arg8[0].o = temp0_2164
                            zmm0[0].o = temp1_97
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            arg10 = _mm256_blendv_ps(arg10, _mm256_add_epi64(arg10, zmm0), zmm1)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            float temp0_2169[0x4]
                            int32_t temp1_98
                            temp0_2169, temp1_98 =
                                _mm256_i64gather_ps(zmm1[0].o, *arg14[0].q, arg7[0].o)
                            zmm1[0].o = temp0_2169
                            arg7[0].o = temp1_98
                            arg14 = _mm256_blendv_ps(arg14, _mm256_add_epi64(arg14, zmm0), zmm5)
                            zmm5 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                        
                        arg12 = var_6e0_1
                        var_4e0 =
                            _mm256_maskstore_ps(arg9, _mm256_cmpeq_epi32(arg6, arg5) & not.32(zmm5))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                        arg5 = zmm0 & var_980_1
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
                            float temp0_2187[0x4]
                            int32_t temp1_99
                            temp0_2187, temp1_99 =
                                _mm256_i64gather_ps(zx.o(0), *arg10[0].q, zmm0[0].o)
                            zmm2[0].o = temp0_2187
                            zmm0[0].o = temp1_99
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_2189[0x4]
                            int32_t temp1_100
                            temp0_2189, temp1_100 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg14[0].q, zmm1[0].o)
                            zmm0[0].o = temp0_2189
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
                    zmm2 = var_8a0_2
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_700[0].o)
                    zmm1[0].o = arg15[0].o & zmm0[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        arg11 = _mm256_cvtepu16_epi32(zmm1[0].o)
                        zmm0[0].o = zx.o(0)
                        float var_620_4[0x8] = zmm0
                        float var_640_4[0x8] = zmm0
                        float var_660_4[0x8] = zmm0
                        float var_680_4[0x8] = zmm0
                        float var_6a0_4[0x8] = zmm0
                        float var_6c0_4[0x8] = zmm0
                        zmm2 &= _mm256_srai_epi32(_mm256_slli_epi32(temp0_1306, 0x1f), 0x1f)
                        arg5 = zmm2 & arg14
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            arg6 = _mm256_add_epi64(arg12, zmm0)
                            float temp0_2210[0x8] = _mm256_permutevar8x32_ps(data_143442920, arg5)
                            arg6 = _mm256_blendv_ps(arg12, arg6, temp0_2210)
                            arg7 = arg12
                            arg13 = var_820_2
                            float temp0_2212[0x8] = _mm256_add_epi64(arg13, zmm0)
                            arg9 = data_143442940
                            arg8[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            zmm1[0].o = arg5[0].o
                            float temp0_2215[0x4]
                            int32_t temp1_101
                            temp0_2215, temp1_101 =
                                _mm256_i64gather_ps(arg10[0].o, *arg7[0].q, zmm1[0].o)
                            arg10[0].o = temp0_2215
                            zmm1[0].o = temp1_101
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            arg7[0].o = arg8[0].o
                            float temp0_2217[0x4]
                            int32_t temp1_102
                            temp0_2217, temp1_102 =
                                _mm256_i64gather_ps(zmm1[0].o, *arg13[0], arg7[0].o)
                            zmm1[0].o = temp0_2217
                            arg7[0].o = temp1_102
                            arg7 = _mm256_permutevar8x32_ps(arg9, arg5)
                            arg9 = _mm256_blendv_ps(arg13, temp0_2212, arg7)
                            var_660_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(arg10, zmm1[0].o, 1))
                            zmm1 = _mm256_add_epi64(arg6, zmm0)
                            arg12 = _mm256_blendv_ps(arg6, zmm1, temp0_2210)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            float temp0_2225[0x4]
                            int32_t temp1_103
                            temp0_2225, temp1_103 =
                                _mm256_i64gather_ps(zmm1[0].o, *arg6[0].q, arg5[0].o)
                            zmm1[0].o = temp0_2225
                            arg5[0].o = temp1_103
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_2227[0x4]
                            int32_t temp1_104
                            temp0_2227, temp1_104 =
                                _mm256_i64gather_ps(arg5[0].o, *arg9[0].q, arg8[0].o)
                            arg5[0].o = temp0_2227
                            arg8[0].o = temp1_104
                            var_820_2 = _mm256_blendv_ps(arg9, _mm256_add_epi64(arg9, zmm0), arg7)
                            var_6c0_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm1, arg5[0].o, 1))
                        
                        arg10 = _mm256_slli_epi32(arg11, 0x1f)
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        zmm0 = _mm256_cmpeq_epi32(zmm0 & var_980_1, zmm0)
                        zmm2 = zmm0 & var_8a0_2
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
                            arg13 = var_820_2
                            float temp0_2248[0x8] = _mm256_add_epi64(arg13, arg5)
                            arg9 = data_143442940
                            arg8[0].o = _mm256_extracti128_si256(zmm0, 1)
                            zmm1[0].o = zmm0[0].o
                            arg11[0].o = zx.o(0)
                            float temp0_2250[0x4]
                            int32_t temp1_105
                            temp0_2250, temp1_105 =
                                _mm256_i64gather_ps(zx.o(0), *arg7[0].q, zmm1[0].o)
                            arg11[0].o = temp0_2250
                            zmm1[0].o = temp1_105
                            zmm1[0].o = arg8[0].o
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            float temp0_2252[0x4]
                            int32_t temp1_106
                            temp0_2252, temp1_106 =
                                _mm256_i64gather_ps(arg7[0].o, *arg13[0], zmm1[0].o)
                            arg7[0].o = temp0_2252
                            zmm1[0].o = temp1_106
                            zmm1 = _mm256_permutevar8x32_epi32(arg9, zmm0)
                            arg9 = _mm256_blendv_ps(arg13, temp0_2248, zmm1)
                            var_640_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(arg11, arg7[0].o, 1))
                            arg7 = _mm256_add_epi64(arg6, arg5)
                            arg12 = _mm256_blendv_ps(arg6, arg7, zmm5)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            float temp0_2260[0x4]
                            int32_t temp1_107
                            temp0_2260, temp1_107 =
                                _mm256_i64gather_ps(zmm5[0].o, *arg6[0].q, zmm0[0].o)
                            zmm5[0].o = temp0_2260
                            zmm0[0].o = temp1_107
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_2262[0x4]
                            int32_t temp1_108
                            temp0_2262, temp1_108 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg9[0].q, arg8[0].o)
                            zmm0[0].o = temp0_2262
                            arg8[0].o = temp1_108
                            arg5 = _mm256_add_epi64(arg9, arg5)
                            var_820_2 = _mm256_blendv_ps(arg9, arg5, zmm1)
                            var_6a0_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm5, zmm0[0].o, 1))
                        
                        arg13 = var_880_4
                        zmm1 = _mm256_srai_epi32(arg10, 0x1f)
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                        zmm0 = _mm256_cmpeq_epi32(zmm0 & var_980_1, zmm0)
                        zmm2 = zmm0 & var_8a0_2
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
                            int64_t temp0_2283[0x4] = _mm256_add_epi64(var_820_2, arg5)
                            arg10 = data_143442940
                            arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg8[0].o = zmm0[0].o
                            arg9[0] = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0], arg9[0])
                            float temp0_2286[0x4]
                            int32_t temp1_109
                            temp0_2286, temp1_109 =
                                _mm256_i64gather_ps(arg9[0], *arg12[0].q, arg8[0].o)
                            arg9[0] = temp0_2286
                            arg8[0].o = temp1_109
                            arg8[0].o = arg7[0].o
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            float temp0_2288[0x4]
                            int32_t temp1_110
                            temp0_2288, temp1_110 =
                                _mm256_i64gather_ps(zmm5[0].o, *var_820_2[0].q, arg8[0].o)
                            zmm5[0].o = temp0_2288
                            arg8[0].o = temp1_110
                            arg5 = _mm256_blendv_ps(var_820_2, temp0_2283, 
                                _mm256_permutevar8x32_epi32(arg10, zmm0))
                            zmm5 = _mm256_insertf128_ps(arg9, zmm5[0].o, 1)
                            var_620_4 = _mm256_maskstore_ps(zmm2, zmm5)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            float temp0_2294[0x4]
                            int32_t temp1_111
                            temp0_2294, temp1_111 =
                                _mm256_i64gather_ps(zmm5[0].o, *arg6[0].q, zmm0[0].o)
                            zmm5[0].o = temp0_2294
                            zmm0[0].o = temp1_111
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_2296[0x4]
                            int32_t temp1_112
                            temp0_2296, temp1_112 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg5[0], arg7[0].o)
                            zmm0[0].o = temp0_2296
                            arg7[0].o = temp1_112
                            var_680_4 =
                                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm5, zmm0[0].o, 1))
                        
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                        zmm2 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_4, var_920_2)
                        arg5 = __vpbroadcastq_ymmqq_memq(4)
                        zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_9a0_5)
                        zmm0 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(zmm0, var_940), arg5)
                        zmm2 = _mm256_add_epi64(zmm2, arg5)
                        arg5[0].o = zx.o(0)
                        arg6[0].o = zmm1[0].o
                        uint32_t temp0_2306[0x4]
                        int32_t temp1_113
                        temp0_2306, temp1_113 =
                            _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm2[0].q), arg6[0].o)
                        arg5[0].o = temp0_2306
                        arg6[0].o = temp1_113
                        zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg6[0].o = zx.o(0)
                        uint32_t temp0_2308[0x4]
                        int32_t temp1_114
                        temp0_2308, temp1_114 =
                            _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm0[0].q), zmm2[0].o)
                        arg6[0].o = temp0_2308
                        zmm2[0].o = temp1_114
                        zmm0 = _mm256_inserti128_si256(arg5, arg6[0].o, 1)
                        zmm2 = _mm256_srli_epi32(zmm0, 0x15)
                        arg5 = _mm256_srli_epi32(zmm0, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm5 = var_6a0_4
                        arg7 = var_680_4
                        float temp0_2319[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(var_6c0_4, 
                            _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    zmm0 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                    __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                _mm256_broadcast_ss(511f)), 
                            var_660_4)
                        zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, zmm0))
                        arg8 = _mm256_broadcast_ss(1023f)
                        arg5 = _mm256_div_ps(arg5, arg8)
                        float temp0_2327[0x8] =
                            _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, zmm0)), arg8)
                        arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg5, zmm5, var_640_4)
                        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_2327, arg7, var_620_4)
                        var_500 = _mm256_maskstore_ps(zmm1, temp0_2319)
                        var_4e0 = _mm256_maskstore_ps(zmm1, arg5)
                        var_4c0 = _mm256_maskstore_ps(zmm1, zmm0)
                        zmm2 = var_8a0_2
                    
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_memdq(zmm2[0].o, var_700[0].o)
                    arg10[0].o = zmm0[0].o ^ var_840_1
                    zmm0[0].o = arg15[0].o & arg10[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                        zmm0 = __vpbroadcastd_ymmqq_memd(2)
                        arg9 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_800_2)
                        arg5[0].o = _mm256_extracti128_si256(arg9, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0], arg5[0].o)
                        zmm1[0].o = arg15[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f), 0x1f)
                            int32_t temp0_2350[0x8] =
                                _mm256_srai_epi32(_mm256_slli_epi32(temp0_1306, 0x1f), 0x1f)
                            arg6 = temp0_2350 & zmm0
                            bool cond:16_1 = _mm256_movemask_ps(arg6) == 0
                            var_8a0_2[0].o = arg5[0].o
                            uint128_t var_820_3[0x2] = arg9
                            
                            if (cond:16_1)
                                arg12 = var_960_6
                            else
                                zmm5 = __vpbroadcastq_ymmqq_memq(2)
                                arg7 = _mm256_add_epi64(var_960_6, zmm5)
                                arg9 = var_9c0_3
                                zmm5 = _mm256_add_epi64(arg9, zmm5)
                                arg8 = _mm256_permutevar8x32_ps(data_143442920, arg6)
                                var_9c0_3 = _mm256_blendv_ps(arg9, zmm5, arg8)
                                float temp0_2357[0x8] =
                                    _mm256_permutevar8x32_ps(data_143442940, arg6)
                                arg12 = _mm256_blendv_ps(var_960_6, arg7, temp0_2357)
                                zmm5 = __vpaddq_ymmqq_ymmqq_memqq(var_8c0_3, var_7a0_1)
                                arg7 = __vpaddq_ymmqq_ymmqq_memqq(var_8e0_4, var_920_2)
                                arg9 = __vpbroadcastq_ymmqq_memq(4)
                                arg7 = __vpaddq_ymmqq_ymmqq_memqq(arg7, var_9a0_5)
                                zmm5 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(zmm5, var_940), 
                                    arg9)
                                arg7 = _mm256_add_epi64(arg7, arg9)
                                arg9[0] = zx.o(0)
                                arg7 = _mm256_blendv_ps(arg9, arg7, arg8)
                                float temp0_2367[0x8] = _mm256_blendv_ps(arg9, zmm5, temp0_2357)
                                int64_t r8_7 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                int64_t rcx_31 = arg7[0].q
                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                int64_t r9_4 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                int64_t rbx_16 = zmm5[0].q
                                int64_t rdi_14 = temp0_2367[0].q
                                int64_t rsi_14 = __vpextrq_gpr64q_xmmdq_immb(temp0_2367[0].o, 1)
                                temp0_2367[0].o = _mm256_extracti128_si256(temp0_2367, 1)
                                int64_t rax_332 = temp0_2367[0].q
                                int64_t rdx_14 = __vpextrq_gpr64q_xmmdq_immb(temp0_2367[0].o, 1)
                                temp0_2367[0].o = zx.o(*(r12 + rcx_31))
                                temp0_2367[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2367[0].o, 
                                    *(r12 + r8_7), 1)
                                temp0_2367[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2367[0].o, 
                                    *(r12 + rbx_16), 2)
                                temp0_2367[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2367[0].o, 
                                    *(r12 + r9_4), 3)
                                temp0_2367[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2367[0].o, 
                                    *(r12 + rdi_14), 4)
                                temp0_2367[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2367[0].o, 
                                    *(r12 + rsi_14), 5)
                                temp0_2367[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2367[0].o, 
                                    *(r12 + rax_332), 6)
                                temp0_2367[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_2367[0].o, 
                                    *(r12 + rdx_14), 7)
                                arg6 = _mm256_cvtepu16_epi32(temp0_2367[0].o)
                                zmm5 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, zmm5))
                            
                            zmm5[0].o = zx.o(0)
                            var_500 =
                                _mm256_maskstore_ps(zmm0, _mm256_blendv_ps(zmm5, arg6, temp0_2350))
                            zmm2 = __vpbroadcastd_ymmqq_memd(0x2000000)
                            arg11 = zmm2 & var_980_1
                            zmm2 = _mm256_cmpeq_epi32(arg11, zmm2)
                            arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
                            arg6[0].o = zmm1[0].o & zmm2[0].o
                            zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                            zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                            char temp0_2411 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
                            
                            if (temp0_2411 == 0)
                                arg5[0].o = var_8a0_2[0].o
                                arg9 = var_820_3
                            else
                                if ((temp0_2411 & 1) == 0)
                                    if ((temp0_2411 & 2) != 0)
                                        goto label_140194cac
                                    
                                    goto label_1401947a4
                                
                                zmm2 = var_9c0_3
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*zmm2[0].q)
                                
                                if ((temp0_2411 & 2) != 0)
                                label_140194cac:
                                    int64_t rax_354 = __vpextrq_gpr64q_xmmdq_immb(var_9c0_3[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_354, 1)
                                    
                                    if ((temp0_2411 & 4) == 0)
                                        goto label_1401947ad
                                    
                                    goto label_140194cc5
                                
                            label_1401947a4:
                                
                                if ((temp0_2411 & 4) == 0)
                                label_1401947ad:
                                    
                                    if ((temp0_2411 & 8) != 0)
                                        goto label_140194ce3
                                    
                                    goto label_1401947b6
                                
                            label_140194cc5:
                                var_9c0_3[0].o = _mm256_extracti128_si256(var_9c0_3, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *var_9c0_3[0].q, 2)
                                
                                if ((temp0_2411 & 8) != 0)
                                label_140194ce3:
                                    var_9c0_3[0].o = _mm256_extracti128_si256(var_9c0_3, 1)
                                    int64_t rax_356 = __vpextrq_gpr64q_xmmdq_immb(var_9c0_3[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_356, 3)
                                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                    
                                    if ((temp0_2411 & 0x10) == 0)
                                        goto label_1401947c4
                                    
                                    goto label_140194d07
                                
                            label_1401947b6:
                                arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                int64_t rax_346
                                
                                if ((temp0_2411 & 0x10) != 0)
                                label_140194d07:
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg12[0].q, 4)
                                    arg6 = _mm256_slli_epi32(arg6, 0x1f)
                                    
                                    if ((temp0_2411 & 0x20) != 0)
                                        rax_346 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_346, 5)
                                else
                                label_1401947c4:
                                    arg6 = _mm256_slli_epi32(arg6, 0x1f)
                                    
                                    if ((temp0_2411 & 0x20) != 0)
                                        rax_346 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_346, 5)
                                arg6 = _mm256_srai_epi32(arg6, 0x1f)
                                zmm5 = __vpbroadcastq_ymmqq_memq(2)
                                arg13 = data_143442920
                                arg9 = data_143442940
                                
                                if ((temp0_2411 & 0x40) != 0)
                                    arg7[0].o = _mm256_extracti128_si256(arg12, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg7[0].q, 6)
                                
                                arg8 = arg12
                                arg12 = _mm256_add_epi64(arg12, zmm5)
                                zmm5 = __vpaddq_ymmqq_ymmqq_memqq(zmm5, var_9c0_3)
                                arg13 = _mm256_permutevar8x32_epi32(arg13, arg6)
                                arg6 = _mm256_permutevar8x32_epi32(arg9, arg6)
                                
                                if (temp0_2411 s< 0)
                                    arg7[0].o = _mm256_extracti128_si256(arg8, 1)
                                    int64_t rax_348 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_348, 7)
                                
                                arg5[0].o = var_8a0_2[0].o
                                arg9 = var_820_3
                                arg7 = _mm256_blendv_ps(var_9c0_3, zmm5, arg13)
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
                            char temp0_2441 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_2441 != 0)
                                if ((temp0_2441 & 1) == 0)
                                    if ((temp0_2441 & 2) != 0)
                                        goto label_140194d37
                                    
                                    goto label_1401948fc
                                
                                zmm1 = var_9c0_3
                                zmm1[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                                
                                if ((temp0_2441 & 2) != 0)
                                label_140194d37:
                                    zmm2 = var_9c0_3
                                    int64_t rax_359 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_359, 1)
                                    
                                    if ((temp0_2441 & 4) == 0)
                                        goto label_140194905
                                    
                                    goto label_140194d50
                                
                            label_1401948fc:
                                
                                if ((temp0_2441 & 4) == 0)
                                label_140194905:
                                    
                                    if ((temp0_2441 & 8) != 0)
                                        goto label_140194d6e
                                    
                                    goto label_14019490e
                                
                            label_140194d50:
                                zmm2 = var_9c0_3
                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 2)
                                
                                if ((temp0_2441 & 8) != 0)
                                label_140194d6e:
                                    zmm2 = var_9c0_3
                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    int64_t rax_361 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_361, 3)
                                    
                                    if ((temp0_2441 & 0x10) == 0)
                                        goto label_140194917
                                    
                                    goto label_140194d92
                                
                            label_14019490e:
                                
                                if ((temp0_2441 & 0x10) == 0)
                                label_140194917:
                                    
                                    if ((temp0_2441 & 0x20) != 0)
                                        goto label_140194da0
                                    
                                    goto label_140194920
                                
                            label_140194d92:
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg12[0].q, 4)
                                
                                if ((temp0_2441 & 0x20) != 0)
                                label_140194da0:
                                    int64_t rax_363 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_363, 5)
                                    
                                    if ((temp0_2441 & 0x40) == 0)
                                        goto label_140194929
                                    
                                    goto label_140194db4
                                
                            label_140194920:
                                
                                if ((temp0_2441 & 0x40) != 0)
                                label_140194db4:
                                    zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 6)
                                    
                                    if (temp0_2441 s< 0)
                                    label_140194dcc:
                                        zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                        int64_t rax_365 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_365, 7)
                                else
                                label_140194929:
                                    
                                    if (temp0_2441 s< 0)
                                        goto label_140194dcc
                                
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm2 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm2))
                            
                            zmm2[0].o = zx.o(0)
                            zmm1 = _mm256_cmpeq_epi32(zmm5, zmm2) & not.32(zmm1)
                            var_4c0 = _mm256_maskstore_ps(zmm0, zmm1)
                        
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0], arg5[0].o)
                        zmm0[0].o ^= arg10[0].o
                        zmm1[0].o = arg15[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                            zmm0 = __vpbroadcastd_ymmqq_memd(6)
                            zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_800_2)
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
                float temp0_2480[0x8] = _mm256_sub_ps(var_500, arg5)
                float temp0_2481[0x8] = _mm256_sub_ps(var_4e0, arg6)
                zmm2 = _mm256_sub_ps(var_4c0, zmm5)
                zmm0 = _mm256_fmadd_ps(temp0_2480, arg13, arg5)
                float temp0_2484[0x8] = _mm256_fmadd_ps(temp0_2481, arg13, arg6)
                zmm2 = _mm256_fmadd_ps(zmm2, arg13, zmm5)
                var_5e0.32 = _mm256_maskstore_ps(arg14, zmm0)
                var_5c0.32 = _mm256_maskstore_ps(arg14, temp0_2484)
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
        arg9[0] = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0], arg9[0])
        zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0])
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, zmm5[0].o, 0x28)
        int128_t var_240 = zmm2[0].o
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0])
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        int128_t var_230_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 0xa8)
        int128_t var_220_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        int128_t var_210_1 = zmm0[0].o
        zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0])
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg7[0].o, 0x28)
        int128_t var_200_1 = zmm2[0].o
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0])
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_1f0_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg7[0].o, 0xa8)
        int128_t var_1e0_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        int128_t var_1d0_1 = zmm0[0].o
        uint64_t i_4 = zx.q(_mm256_movemask_ps(arg11))
        
        do
            uint64_t rcx_34 = _tzcnt_u64(i_4)
            result = rol.q(-2, rcx_34.b)
            uint32_t var_120[0x8] = arg16
            zmm0[0].o = (&var_240)[rcx_34]
            *(arg1 + sx.q(var_120[zx.q(rcx_34.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            i_4 &= result
        while (i_4 != 0)
else
    zmm0[0].o = zx.o(arg4)
    zmm0 = _mm256_broadcastd_epi32(_mm256_slli_epi32(zmm0, 2)[0])
    float var_140_1[0x8] = zmm0
    zmm0[0].o = zx.o(r12)
    zmm1[0].o = 4
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_180_1[0x8] = _mm256_broadcastq_epi64(zmm0[0].q)
    float temp0_5[0x8] = _mm256_broadcastss_ps(zmm2[0].o)
    temp0_5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_5[0].o, temp0_5[0].o)
    int32_t rbx_1
    rbx_1.b = temp0_5[0].o f>= zmm2[0]
    temp0_5[0].o = zx.o(neg.d(rbx_1))
    zmm0 = _mm256_broadcastd_epi32(temp0_5[0])
    float var_1a0_1[0x8] = zmm0
    int32_t rbx_3 = arg18 - 2
    zmm0[0].o = arg5[0].o
    zmm0[0] = float.s(arg18 - 1)
    zmm0[0].o = zmm0[0].o f* zmm2[0]
    int32_t rcx_3 = int.d(zmm0[0]) s>> 0x1f
    int32_t rcx_4 = rcx_3 & not.d(rcx_3)
    
    if (rbx_3 s> rcx_4)
        rbx_3 = rcx_4
    
    zmm1[0].o = zx.o(rbx_3)
    zmm1 = _mm256_broadcastd_epi32(zmm1[0])
    var_700 = zmm1
    zmm0 = _mm256_broadcastss_ps(zmm0[0].o)
    float var_1c0_1[0x8] = zmm0
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
        zmm2 = __vpmulld_ymmqq_ymmqq_memqq(temp0_40, var_140_1)
        zmm0[0].o = zx.o(0)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        uint32_t temp0_43[0x8]
        int32_t temp1_3
        temp0_43, temp1_3 = _mm256_i32gather_epi32(zmm0, *(arg3 + zmm2[0].q), arg5)
        zmm0 = temp0_43
        arg5 = temp1_3
        arg14 = _mm256_cmpeq_epi32(zmm0, arg13)
        arg11 = arg14 ^ arg13
        float var_4a0[0x8]
        float var_480[0x8]
        float var_460[0x8]
        
        if (_mm256_movemask_ps(arg11) == 0)
            arg14 = var_8a0_1
            zmm0 = arg11 ^ arg13
            
            if (_mm256_movemask_ps(zmm0) != 0)
            label_1401917c2:
                var_4a0 = _mm256_maskstore_ps(zmm0, arg15)
                var_480 = _mm256_maskstore_ps(zmm0, arg15)
                var_460 = _mm256_maskstore_ps(zmm0, arg15)
        else
            arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm1[0].o = zx.o(0)
            uint16_t* r13_1 = r12
            uint32_t temp0_47[0x8]
            int32_t temp1_4
            temp0_47, temp1_4 = _mm256_i32gather_epi32(zmm1, *(r12 + zmm0[0].q), arg11)
            zmm1 = temp0_47
            zmm2[0].o = zx.o(0)
            int32_t var_7e0_1[0x8] = zmm2
            arg6 = zmm1 & data_143442840
            zmm5 = _mm256_srli_epi32(zmm1, 0x18)
            arg7 = zmm5 & __vpbroadcastd_ymmqq_memd(0xf)
            uint32_t var_7a0[0x8]
            arg8 = _mm256_blendv_ps(var_7a0, _mm256_srli_epi32(zmm1, 0x1c), arg11)
            zmm1 = _mm256_slli_epi32(arg8, 2)
            zmm5[0].o = zx.o(0)
            uint32_t temp0_53[0x8]
            int32_t temp1_5
            temp0_53, temp1_5 = _mm256_i32gather_epi32(zmm5, *(&data_143442960 + zmm1[0].q), arg11)
            int32_t var_980[0x8]
            zmm2 = _mm256_blendv_ps(var_980, arg7, arg11)
            var_980 = zmm2
            int32_t temp0_56[0x8] = _mm256_and_ps(zmm2, _mm256_broadcast_ss(9.80908925e-45f))
            zmm1 = _mm256_slli_epi32(arg8, 3)
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
            var_7a0 = arg8
            arg8 = _mm256_cmpeq_epi32(arg8, arg7)
            arg10 = arg8 & not.32(arg11)
            zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            char temp0_79 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            arg7[0].o = zx.o(0)
            
            if (temp0_79 != 0)
                arg7 = arg10 & arg9
            
            float var_820_1[0x8] = _mm256_cvtepi32_epi64(zmm0[0].o)
            float var_8c0_1[0x8] = _mm256_cvtepi32_epi64(arg5[0].o)
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
            arg9 = __vpaddq_ymmqq_ymmqq_memqq(var_180_1, var_8c0_1)
            int32_t var_6e0[0x8]
            zmm2 = _mm256_blendv_ps(var_6e0, zmm0, arg11)
            var_6e0 = zmm2
            float var_9c0[0x8] = _mm256_blendv_ps(var_9c0, arg5, arg11)
            arg6 = __vpaddq_ymmqq_ymmqq_memqq(var_180_1, var_820_1)
            zmm0 = arg14 & not.32(_mm256_cmpgt_epi32(arg12, zmm5))
            arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            bool cond:3_1 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o) == 0
            float var_8e0_1[0x8] = arg11
            uint32_t var_920_1[0x8] = arg8
            float var_740_1[0x8] = arg6
            uint128_t var_800_1[0x2] = arg9
            uint32_t var_9a0_1[0x8] = arg14
            var_940 = arg10
            var_580 = arg12
            float var_960_1[0x8]
            
            if (cond:3_1)
                arg5[0].o = zx.o(0)
                zmm0[0].o = zx.o(0)
                var_960_1 = zmm0
            else
                float var_880_1[0x8] = zmm5
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
                                __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg9), temp0_5)
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
                    arg10 = var_940
                else
                    float var_7c0_1[0x8] = arg11
                    zmm2 = arg5
                    arg11 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f)
                    zmm0 = _mm256_srai_epi32(arg11, 0x1f)
                    zmm1 = _mm256_cmpgt_epi32(__vpbroadcastd_ymmqq_memd(2), arg12) | var_1a0_1
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
                        arg10 = var_940
                    else
                        uint32_t var_7e0_2[0x8] = arg7
                        arg7 = arg11
                        float var_900_1[0x8] = zmm1
                        arg11 = _mm256_add_epi32(arg12, arg13)
                        zmm1[0].o = arg19
                        
                        if (zmm1[0].o f>= 1f)
                            arg5 = _mm256_blendv_ps(arg10, arg11, arg14)
                            var_960_1 = _mm256_blendv_ps(var_7c0_1, arg11, arg14)
                            arg14 = var_9a0_1
                            arg10 = var_940
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
                                        _mm256_cvtepi32_ps(arg11), temp0_5)), 
                                    arg5), 
                                arg11)
                            uint32_t var_860_1[0x8] = arg7
                            float var_960_2[0x8] = arg11
                            
                            if (arg18 s< 0x100)
                                zmm0 = _mm256_add_epi64(arg6, _mm256_cvtepi32_epi64(arg11[0].o))
                                char r12_2 = temp0_144.b
                                int128_t var_310
                                zmm1[0].o = var_310
                                
                                if ((r12_2 & 1) == 0)
                                    arg8 = var_7e0_2
                                    
                                    if ((r12_2 & 2) != 0)
                                        goto label_14018eca0
                                    
                                    goto label_14018e702
                                
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 0)
                                arg8 = var_7e0_2
                                
                                if ((r12_2 & 2) != 0)
                                label_14018eca0:
                                    uint16_t rax_60[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_60, 1)
                                    zmm5[0].o = _mm256_extracti128_si256(arg11, 1)
                                    
                                    if ((r12_2 & 4) == 0)
                                        goto label_14018e712
                                    
                                    goto label_14018ecb8
                                
                            label_14018e702:
                                zmm5[0].o = _mm256_extracti128_si256(arg11, 1)
                                
                                if ((r12_2 & 4) == 0)
                                label_14018e712:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((r12_2 & 8) != 0)
                                        goto label_14018ece2
                                    
                                    goto label_14018e721
                                
                            label_14018ecb8:
                                zmm2[0].o = zmm1[0].o
                                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                zmm1[0].o = zmm2[0].o
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                    zx.d(*zmm1[0].q), 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((r12_2 & 8) != 0)
                                label_14018ece2:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint16_t rax_64[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_64, 3)
                                    zmm0 = _mm256_add_epi64(arg15, zmm5)
                                    
                                    if ((r12_2 & 0x10) == 0)
                                        goto label_14018e72f
                                    
                                    goto label_14018ed0c
                                
                            label_14018e721:
                                zmm0 = _mm256_add_epi64(arg15, zmm5)
                                
                                if ((r12_2 & 0x10) == 0)
                                label_14018e72f:
                                    
                                    if ((r12_2 & 0x20) != 0)
                                        goto label_14018ed21
                                    
                                    goto label_14018e739
                                
                            label_14018ed0c:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 4)
                                
                                if ((r12_2 & 0x20) != 0)
                                label_14018ed21:
                                    uint16_t rax_68[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_68, 5)
                                    
                                    if ((r12_2 & 0x40) == 0)
                                        goto label_14018e743
                                    
                                    goto label_14018ed33
                                
                            label_14018e739:
                                
                                if ((r12_2 & 0x40) != 0)
                                label_14018ed33:
                                    zmm2[0].o = zmm1[0].o
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm1[0].o = zmm2[0].o
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_144.b s< 0)
                                    label_14018ed56:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        uint16_t rax_72[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_72, 7)
                                else
                                label_14018e743:
                                    
                                    if (temp0_144.b s< 0)
                                        goto label_14018ed56
                                
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
                                            int64_t temp0_199[0x4] = _mm256_add_epi64(arg6, zmm1)
                                            char temp0_200 = _mm256_movemask_ps(zmm0)
                                            int128_t var_3b0
                                            uint16_t rax_41[0x2]
                                            
                                            if ((temp0_200 & 1) != 0)
                                                zmm1[0].o = var_3b0
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, zx.d(*temp0_199[0]), 0)
                                                
                                                if ((temp0_200 & 2) != 0)
                                                    rax_41 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(
                                                        temp0_199[0].o, 1))
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, rax_41, 1)
                                            else
                                                zmm1[0].o = var_3b0
                                                
                                                if ((temp0_200 & 2) != 0)
                                                    rax_41 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(
                                                        temp0_199[0].o, 1))
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, rax_41, 1)
                                            zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                                            
                                            if ((temp0_200 & 4) == 0)
                                                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                                
                                                if ((temp0_200 & 8) != 0)
                                                    goto label_14018e7f9
                                                
                                                goto label_14018e906
                                            
                                            zmm2[0].o = zmm1[0].o
                                            zmm1[0].o = _mm256_extracti128_si256(temp0_199, 1)
                                            zmm1[0].o = zmm2[0].o
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, zx.d(*zmm1[0].q), 2)
                                            zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                            
                                            if ((temp0_200 & 8) != 0)
                                            label_14018e7f9:
                                                zmm2[0].o = zmm1[0].o
                                                zmm1[0].o = _mm256_extracti128_si256(temp0_199, 1)
                                                int64_t rax_28 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                zmm1[0].o = zmm2[0].o
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*rax_28), 3)
                                                arg13 = _mm256_add_epi64(arg15, zmm0)
                                                
                                                if ((temp0_200 & 0x10) == 0)
                                                    goto label_14018e913
                                                
                                                goto label_14018e82a
                                            
                                        label_14018e906:
                                            arg13 = _mm256_add_epi64(arg15, zmm0)
                                            
                                            if ((temp0_200 & 0x10) == 0)
                                            label_14018e913:
                                                
                                                if ((temp0_200 & 0x20) != 0)
                                                    goto label_14018e83e
                                                
                                                goto label_14018e91c
                                            
                                        label_14018e82a:
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, zx.d(*arg13[0]), 4)
                                            
                                            if ((temp0_200 & 0x20) != 0)
                                            label_14018e83e:
                                                uint16_t rax_33[0x2] = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, rax_33, 5)
                                                
                                                if ((temp0_200 & 0x40) == 0)
                                                    goto label_14018e925
                                                
                                                goto label_14018e84f
                                            
                                        label_14018e91c:
                                            
                                            if ((temp0_200 & 0x40) != 0)
                                            label_14018e84f:
                                                zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, zx.d(*zmm0[0].q), 6)
                                                
                                                if (temp0_200 s< 0)
                                                label_14018e86a:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    uint16_t rax_37[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, rax_37, 7)
                                            else
                                            label_14018e925:
                                                
                                                if (temp0_200 s< 0)
                                                    goto label_14018e86a
                                            
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
                                            arg9 = _mm256_add_epi64(arg6, zmm1)
                                            char temp0_300 = _mm256_movemask_ps(arg11)
                                            int128_t var_3c0
                                            uint32_t rax_91
                                            
                                            if ((temp0_300 & 1) != 0)
                                                zmm2[0].o = var_3c0
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*arg9[0].q), 0)
                                                
                                                if ((temp0_300 & 2) != 0)
                                                    rax_91 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg9[0], 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_91, 1)
                                            else
                                                zmm2[0].o = var_3c0
                                                
                                                if ((temp0_300 & 2) != 0)
                                                    rax_91 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg9[0], 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_91, 1)
                                            arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                                            
                                            if ((temp0_300 & 4) != 0)
                                                return sub_14018ee20(temp0_144, &data_143442980, 
                                                    zmm2, &var_480, temp0_300, &var_940[2], i_6, 
                                                    r12_2, r13_1, r14, arg1, zmm0, arg5, arg6, 
                                                    zmm5, arg7, arg8, arg9, arg10, arg13, arg14, 
                                                    arg15) __tailcall
                                            
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_300 & 8) == 0)
                                                arg9 = _mm256_add_epi64(arg15, arg5)
                                                
                                                if ((temp0_300 & 0x10) != 0)
                                                    goto label_14018ee6a
                                                
                                                goto label_14018ef53
                                            
                                            zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                            uint32_t rax_79 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, rax_79, 3)
                                            arg9 = _mm256_add_epi64(arg15, arg5)
                                            
                                            if ((temp0_300 & 0x10) != 0)
                                            label_14018ee6a:
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*arg9[0].q), 4)
                                                
                                                if ((temp0_300 & 0x20) == 0)
                                                    goto label_14018ef5c
                                                
                                                goto label_14018ee7e
                                            
                                        label_14018ef53:
                                            
                                            if ((temp0_300 & 0x20) == 0)
                                            label_14018ef5c:
                                                
                                                if ((temp0_300 & 0x40) != 0)
                                                    goto label_14018ee8f
                                                
                                                goto label_14018ef65
                                            
                                        label_14018ee7e:
                                            uint32_t rax_83 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg9[0], 1))
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm2[0].o, rax_83, 5)
                                            
                                            if ((temp0_300 & 0x40) == 0)
                                            label_14018ef65:
                                                
                                                if (temp0_300 s< 0)
                                                label_14018eeaa:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                                    uint32_t rax_87 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm2[0].o, rax_87, 7)
                                            else
                                            label_14018ee8f:
                                                zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm2[0].o, zx.d(*zmm1[0].q), 6)
                                                
                                                if (temp0_300 s< 0)
                                                    goto label_14018eeaa
                                            
                                            var_3c0 = zmm2[0].o
                                            zmm1[0].o = zmm2[0].o & data_142fc92e0
                                            arg9 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                                _mm256_cvtepu16_epi32(zmm1[0].o), var_700)
                                                & not.32(arg7)
                                            arg5[0].o = zx.o(0)
                                            int32_t temp0_308 = _mm256_movemask_ps(arg9 & arg14)
                                            arg11[0].o = zx.o(0)
                                            
                                            if (temp0_308 != i_6)
                                                arg11 = arg9 ^ arg7
                                            
                                            zmm5 = _mm256_blendv_ps(zmm5, zmm0, arg9)
                                            zmm0 = _mm256_add_epi32(zmm0, arg13)
                                            arg7 = _mm256_cmpgt_epi32(zmm0, arg5) & arg11
                                            arg11 = arg7 & arg14
                                            i_6 = _mm256_movemask_ps(arg11)
                                        while (i_6 != 0)
                                
                                float temp0_313[0x8] = _mm256_blendv_ps(arg10, zmm5, arg14)
                                zmm0 = _mm256_add_epi64(arg6, _mm256_cvtepi32_epi64(temp0_313[0].o))
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
                                arg10 = var_940
                                arg11 = var_860_1
                                
                                if ((r12_2 & 2) == 0)
                                    arg12 = temp0_313
                                    arg5[0].o = _mm256_extracti128_si256(temp0_313, 1)
                                    
                                    if ((r12_2 & 4) != 0)
                                        goto label_14018f110
                                    
                                    goto label_14018f04c
                                
                                uint32_t rax_98 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_98, 1)
                                arg12 = temp0_313
                                arg5[0].o = _mm256_extracti128_si256(temp0_313, 1)
                                
                                if ((r12_2 & 4) != 0)
                                label_14018f110:
                                    temp0_313[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*temp0_313[0].q), 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((r12_2 & 8) == 0)
                                        goto label_14018f05b
                                    
                                    goto label_14018f132
                                
                            label_14018f04c:
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((r12_2 & 8) == 0)
                                label_14018f05b:
                                    zmm0 = _mm256_add_epi64(arg15, arg5)
                                    
                                    if ((r12_2 & 0x10) != 0)
                                        goto label_14018f15c
                                    
                                    goto label_14018f069
                                
                            label_14018f132:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                uint32_t rax_102 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_102, 3)
                                zmm0 = _mm256_add_epi64(arg15, arg5)
                                
                                if ((r12_2 & 0x10) != 0)
                                label_14018f15c:
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*zmm0[0].q), 4)
                                    arg5 = arg12
                                    
                                    if ((r12_2 & 0x20) == 0)
                                        goto label_14018f077
                                    
                                    goto label_14018f175
                                
                            label_14018f069:
                                arg5 = arg12
                                
                                if ((r12_2 & 0x20) == 0)
                                label_14018f077:
                                    
                                    if ((r12_2 & 0x40) != 0)
                                        goto label_14018f187
                                    
                                    goto label_14018f081
                                
                            label_14018f175:
                                uint32_t rax_106 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_106, 5)
                                
                                if ((r12_2 & 0x40) == 0)
                                label_14018f081:
                                    
                                    if (temp0_144.b s< 0)
                                    label_14018f1a2:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        uint32_t rax_110 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rax_110, 7)
                                else
                                label_14018f187:
                                    temp0_313[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, 
                                        zx.d(*temp0_313[0].q), 6)
                                    
                                    if (temp0_144.b s< 0)
                                        goto label_14018f1a2
                                
                                zmm1 = _mm256_blendv_ps(var_7c0_1, _mm256_sub_epi32(arg5, arg13), 
                                    arg14)
                                arg5 = var_840.32
                                zmm0 = _mm256_cmpgt_epi32(zmm1, arg5) & arg14
                                
                                if (_mm256_movemask_ps(zmm0) != 0)
                                    zmm1 = _mm256_blendv_ps(zmm1, arg5, zmm0)
                                
                                arg14 = var_9a0_1
                                zmm0 = _mm256_add_epi64(arg6, _mm256_cvtepi32_epi64(zmm1[0].o))
                                int128_t var_430
                                uint32_t rax_114
                                
                                if ((r12_2 & 1) != 0)
                                    arg6[0].o = var_430
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm0[0].q), 0)
                                    
                                    if ((r12_2 & 2) != 0)
                                        rax_114 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_114, 1)
                                else
                                    arg6[0].o = var_430
                                    
                                    if ((r12_2 & 2) != 0)
                                        rax_114 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_114, 1)
                                arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                var_960_1 = zmm1
                                
                                if ((r12_2 & 4) == 0)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((r12_2 & 8) != 0)
                                        goto label_14018f2cf
                                    
                                    goto label_14018f20a
                                
                                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*zmm1[0].q), 2)
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((r12_2 & 8) != 0)
                                label_14018f2cf:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint32_t rax_122 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_122, 3)
                                    zmm0 = _mm256_add_epi64(arg15, arg5)
                                    
                                    if ((r12_2 & 0x10) == 0)
                                        goto label_14018f218
                                    
                                    goto label_14018f2f9
                                
                            label_14018f20a:
                                zmm0 = _mm256_add_epi64(arg15, arg5)
                                
                                if ((r12_2 & 0x10) == 0)
                                label_14018f218:
                                    arg15[0].o = zx.o(0)
                                    
                                    if ((r12_2 & 0x20) != 0)
                                        goto label_14018f313
                                    
                                    goto label_14018f227
                                
                            label_14018f2f9:
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*zmm0[0].q), 4)
                                arg15[0].o = zx.o(0)
                                
                                if ((r12_2 & 0x20) == 0)
                                label_14018f227:
                                    
                                    if ((r12_2 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*zmm1[0].q), 6)
                                else
                                label_14018f313:
                                    uint32_t rax_126 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_126, 5)
                                    
                                    if ((r12_2 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                            zx.d(*zmm1[0].q), 6)
                                
                                r12 = r13_1
                                arg5[0].o = zmm2[0].o & data_142fc92e0
                                
                                if (temp0_144.b s< 0)
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint32_t rax_118 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rax_118, 7)
                                
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
                                        goto label_14018e9c9
                                    
                                    goto label_14018e64f
                                
                                int128_t var_710
                                zmm1[0].o = var_710
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 0)
                                var_710 = zmm1[0].o
                                arg7 = var_7e0_2
                                
                                if ((rdi_4 & 2) != 0)
                                label_14018e9c9:
                                    uint16_t* rax_44 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o = var_710
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_44, 1)
                                    var_710 = zmm1[0].o
                                    arg5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    
                                    if ((rdi_4 & 4) == 0)
                                        goto label_14018e65f
                                    
                                    goto label_14018e9f6
                                
                            label_14018e64f:
                                arg5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                
                                if ((rdi_4 & 4) != 0)
                                label_14018e9f6:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm2[0].o = var_710
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                    label_14018ea1a:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_46 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_46, 3)
                                else
                                label_14018e65f:
                                    zmm2[0].o = var_710
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                        goto label_14018ea1a
                                
                                zmm0 = _mm256_add_epi64(arg15, arg5)
                                
                                if ((rdi_4 & 0x10) == 0)
                                    if ((rdi_4 & 0x20) != 0)
                                        goto label_14018ed83
                                    
                                    goto label_14018ea43
                                
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 4)
                                
                                if ((rdi_4 & 0x20) != 0)
                                label_14018ed83:
                                    int64_t rax_74 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_74, 5)
                                    
                                    if ((rdi_4 & 0x40) == 0)
                                        goto label_14018ea4d
                                    
                                    goto label_14018ed98
                                
                            label_14018ea43:
                                
                                if ((rdi_4 & 0x40) != 0)
                                label_14018ed98:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_144.b s< 0)
                                    label_14018edb0:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_76 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_76, 7)
                                else
                                label_14018ea4d:
                                    
                                    if (temp0_144.b s< 0)
                                        goto label_14018edb0
                                
                                arg5 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                    _mm256_cvtepu16_epi32(zmm2[0].o), var_700)
                                zmm5 = arg5 ^ arg13
                                bool cond:24_1 = _mm256_movemask_ps(arg5 & not.32(arg14)) == 0
                                var_710 = zmm2[0].o
                                float var_7e0_4[0x8] = zmm5
                                
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
                                            arg7 = _mm256_add_epi32(arg13, arg13)
                                            zmm1 = _mm256_cvtepi32_epi64(arg7[0].o)
                                            int64_t temp0_245[0x4] = _mm256_add_epi64(arg6, zmm1)
                                            char temp0_246 = _mm256_movemask_ps(zmm5)
                                            int128_t var_390
                                            int64_t rax_55
                                            
                                            if ((temp0_246 & 1) != 0)
                                                zmm2[0].o = var_390
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *temp0_245[0], 0)
                                                
                                                if ((temp0_246 & 2) != 0)
                                                    rax_55 = __vpextrq_gpr64q_xmmdq_immb(
                                                        temp0_245[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_55, 1)
                                            else
                                                zmm2[0].o = var_390
                                                
                                                if ((temp0_246 & 2) != 0)
                                                    rax_55 = __vpextrq_gpr64q_xmmdq_immb(
                                                        temp0_245[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_55, 1)
                                            arg5[0].o = _mm256_extracti128_si256(arg7, 1)
                                            
                                            if ((temp0_246 & 4) == 0)
                                                arg7 = var_840.32
                                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                                
                                                if ((temp0_246 & 8) != 0)
                                                    goto label_14018eaf8
                                                
                                                goto label_14018ebec
                                            
                                            zmm1[0].o = _mm256_extracti128_si256(temp0_245, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *zmm1[0].q, 2)
                                            arg7 = var_840.32
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_246 & 8) != 0)
                                            label_14018eaf8:
                                                zmm1[0].o = _mm256_extracti128_si256(temp0_245, 1)
                                                int64_t rax_49 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_49, 3)
                                                arg13 = _mm256_add_epi64(arg15, arg5)
                                                
                                                if ((temp0_246 & 0x10) == 0)
                                                    goto label_14018ebfa
                                                
                                                goto label_14018eb1c
                                            
                                        label_14018ebec:
                                            arg13 = _mm256_add_epi64(arg15, arg5)
                                            
                                            if ((temp0_246 & 0x10) == 0)
                                            label_14018ebfa:
                                                
                                                if ((temp0_246 & 0x20) != 0)
                                                    goto label_14018eb2b
                                                
                                                goto label_14018ec04
                                            
                                        label_14018eb1c:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg13[0], 4)
                                            
                                            if ((temp0_246 & 0x20) != 0)
                                            label_14018eb2b:
                                                int64_t rax_51 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_51, 5)
                                                
                                                if ((temp0_246 & 0x40) == 0)
                                                    goto label_14018ec0e
                                                
                                                goto label_14018eb40
                                            
                                        label_14018ec04:
                                            
                                            if ((temp0_246 & 0x40) != 0)
                                            label_14018eb40:
                                                zmm1[0].o = _mm256_extracti128_si256(arg13, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *zmm1[0].q, 6)
                                                
                                                if (temp0_246 s< 0)
                                                label_14018eb59:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    int64_t rax_53 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_53, 7)
                                            else
                                            label_14018ec0e:
                                                
                                                if (temp0_246 s< 0)
                                                    goto label_14018eb59
                                            
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
                                int32_t temp0_362 = _mm256_movemask_ps(zmm1)
                                arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                                
                                if (temp0_362 != 0)
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
                                            float temp0_382[0x8] = _mm256_add_epi32(zmm5, zmm5)
                                            zmm1 = _mm256_cvtepi32_epi64(temp0_382[0].o)
                                            arg9 = _mm256_add_epi64(arg6, zmm1)
                                            char temp0_385 = _mm256_movemask_ps(arg11)
                                            int128_t var_3a0
                                            int64_t rax_135
                                            
                                            if ((temp0_385 & 1) != 0)
                                                zmm2[0].o = var_3a0
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *arg9[0].q, 0)
                                                
                                                if ((temp0_385 & 2) != 0)
                                                    rax_135 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg9[0], 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_135, 1)
                                            else
                                                zmm2[0].o = var_3a0
                                                
                                                if ((temp0_385 & 2) != 0)
                                                    rax_135 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg9[0], 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_135, 1)
                                            arg5[0].o = _mm256_extracti128_si256(temp0_382, 1)
                                            
                                            if ((temp0_385 & 4) == 0)
                                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                                
                                                if ((temp0_385 & 8) != 0)
                                                    goto label_14018f3af
                                                
                                                goto label_14018f4a3
                                            
                                            zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *zmm1[0].q, 2)
                                            arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                            
                                            if ((temp0_385 & 8) != 0)
                                            label_14018f3af:
                                                zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                                int64_t rax_129 =
                                                    __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_129, 3)
                                                arg9 = _mm256_add_epi64(arg15, arg5)
                                                
                                                if ((temp0_385 & 0x10) == 0)
                                                    goto label_14018f4b1
                                                
                                                goto label_14018f3d3
                                            
                                        label_14018f4a3:
                                            arg9 = _mm256_add_epi64(arg15, arg5)
                                            
                                            if ((temp0_385 & 0x10) == 0)
                                            label_14018f4b1:
                                                
                                                if ((temp0_385 & 0x20) != 0)
                                                    goto label_14018f3e2
                                                
                                                goto label_14018f4bb
                                            
                                        label_14018f3d3:
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *arg9[0].q, 4)
                                            
                                            if ((temp0_385 & 0x20) != 0)
                                            label_14018f3e2:
                                                int64_t rax_131 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg9[0], 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *rax_131, 5)
                                                
                                                if ((temp0_385 & 0x40) == 0)
                                                    goto label_14018f4c5
                                                
                                                goto label_14018f3f7
                                            
                                        label_14018f4bb:
                                            
                                            if ((temp0_385 & 0x40) != 0)
                                            label_14018f3f7:
                                                zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *zmm1[0].q, 6)
                                                
                                                if (temp0_385 s< 0)
                                                label_14018f410:
                                                    zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                                    int64_t rax_133 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_133, 7)
                                            else
                                            label_14018f4c5:
                                                
                                                if (temp0_385 s< 0)
                                                    goto label_14018f410
                                            
                                            var_3a0 = zmm2[0].o
                                            arg9 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                                _mm256_cvtepu16_epi32(zmm2[0].o), var_700)
                                                & not.32(arg7)
                                            arg5[0].o = zx.o(0)
                                            int32_t temp0_393 = _mm256_movemask_ps(arg9 & arg14)
                                            arg11[0].o = zx.o(0)
                                            
                                            if (temp0_393 != i_8)
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
                                arg10 = var_940
                                arg11 = var_860_1
                                
                                if ((rdi_4 & 2) != 0)
                                    int64_t rax_138 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o = var_720
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_138, 1)
                                    var_720 = zmm1[0].o
                                
                                arg5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                
                                if ((rdi_4 & 4) != 0)
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm2[0].o = var_720
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 2)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                    label_14018f5f0:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_140 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_140, 3)
                                else
                                    zmm2[0].o = var_720
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                        goto label_14018f5f0
                                
                                zmm0 = _mm256_add_epi64(arg15, arg5)
                                
                                if ((rdi_4 & 0x10) == 0)
                                    arg5 = arg12
                                    
                                    if ((rdi_4 & 0x20) != 0)
                                        goto label_14018f6a1
                                    
                                    goto label_14018f619
                                
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 4)
                                arg5 = arg12
                                
                                if ((rdi_4 & 0x20) != 0)
                                label_14018f6a1:
                                    int64_t rax_143 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_143, 5)
                                    
                                    if ((rdi_4 & 0x40) == 0)
                                        goto label_14018f623
                                    
                                    goto label_14018f6b6
                                
                            label_14018f619:
                                
                                if ((rdi_4 & 0x40) != 0)
                                label_14018f6b6:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_144.b s< 0)
                                    label_14018f6ce:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_145 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_145, 7)
                                else
                                label_14018f623:
                                    
                                    if (temp0_144.b s< 0)
                                        goto label_14018f6ce
                                
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
                                int64_t rax_147
                                
                                if ((rdi_4 & 1) != 0)
                                    arg6[0].o = var_420
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 0)
                                    
                                    if ((rdi_4 & 2) != 0)
                                        rax_147 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_147, 1)
                                else
                                    arg6[0].o = var_420
                                    
                                    if ((rdi_4 & 2) != 0)
                                        rax_147 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_147, 1)
                                arg5[0].o = _mm256_extracti128_si256(zmm5, 1)
                                var_960_1 = zmm1
                                
                                if ((rdi_4 & 4) == 0)
                                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                    
                                    if ((rdi_4 & 8) != 0)
                                        goto label_14018df34
                                    
                                    goto label_14018f72d
                                
                                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 2)
                                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                                
                                if ((rdi_4 & 8) != 0)
                                label_14018df34:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    int64_t rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_8, 3)
                                    zmm0 = _mm256_add_epi64(arg15, arg5)
                                    
                                    if ((rdi_4 & 0x10) == 0)
                                        goto label_14018f73b
                                    
                                    goto label_14018df58
                                
                            label_14018f72d:
                                zmm0 = _mm256_add_epi64(arg15, arg5)
                                
                                if ((rdi_4 & 0x10) != 0)
                                label_14018df58:
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 4)
                                    arg15[0].o = zx.o(0)
                                    
                                    if ((rdi_4 & 0x20) != 0)
                                    label_14018df6c:
                                        int64_t rax_10 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_10, 5)
                                        
                                        if ((rdi_4 & 0x40) == 0)
                                            goto label_14018f754
                                        
                                        goto label_14018df81
                                else
                                label_14018f73b:
                                    arg15[0].o = zx.o(0)
                                    
                                    if ((rdi_4 & 0x20) != 0)
                                        goto label_14018df6c
                                
                                if ((rdi_4 & 0x40) != 0)
                                label_14018df81:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 6)
                                    zmm1 = var_900_1
                                    
                                    if (temp0_144.b s< 0)
                                    label_14018dfa2:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        int64_t rax_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_12, 7)
                                else
                                label_14018f754:
                                    zmm1 = var_900_1
                                    
                                    if (temp0_144.b s< 0)
                                        goto label_14018dfa2
                                
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
            
            zmm0[0].o = _mm256_extracti128_si256(var_9c0, 1)
            zmm2 = _mm256_cvtepi32_epi64(zmm0[0].o)
            zmm1 = _mm256_cvtepi32_epi64(var_9c0[0].o)
            int64_t var_560_1[0x4] = arg5
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg5, var_6e0)
            arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
            int64_t temp0_447[0x4] = _mm256_cvtepi32_epi64(arg5[0].o)
            zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
            float var_7c0_2[0x8] = zmm1
            var_760 = zmm0
            zmm0 = _mm256_add_epi64(zmm0, zmm1)
            int32_t var_880_2[0x8] = zmm2
            arg5 = _mm256_add_epi64(temp0_447, zmm2)
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
                    int64_t temp0_468[0x4] = __vpaddq_ymmqq_ymmqq_memqq(var_880_2, var_8c0_1)
                    arg9 = __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_820_1)
                    arg13 = __vpbroadcastq_ymmqq_memq(4)
                    arg9 = __vpaddq_ymmqq_ymmqq_memqq(arg9, var_760)
                    int64_t temp0_472[0x4] = __vpaddq_ymmqq_ymmqq_memqq(temp0_468, temp0_447)
                    arg15 = _mm256_add_epi64(temp0_472, arg13)
                    int64_t temp0_474[0x4] = _mm256_add_epi64(arg9, arg13)
                    arg14[0].o = _mm256_extracti128_si256(zmm5, 1)
                    zmm2[0].o = zx.o(0)
                    arg8[0].o = zmm5[0].o
                    float temp0_476[0x4]
                    int32_t temp1_6
                    temp0_476, temp1_6 =
                        _mm256_i64gather_ps(zx.o(0), *(r12 + temp0_474[0]), arg8[0].o)
                    zmm2[0].o = temp0_476
                    arg8[0].o = temp1_6
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    var_7c0_2[0].o = arg14[0].o
                    float temp0_478[0x4]
                    int32_t temp1_7
                    temp0_478, temp1_7 =
                        _mm256_i64gather_ps(arg8[0].o, *(r12 + arg15[0]), var_7c0_2[0].o)
                    arg8[0].o = temp0_478
                    var_7c0_2[0].o = temp1_7
                    zmm1 = __vpbroadcastq_ymmqq_memq(8)
                    int64_t temp0_480[0x4] = _mm256_add_epi64(temp0_472, zmm1)
                    zmm1 = _mm256_add_epi64(arg9, zmm1)
                    arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                    arg7[0].o = zmm5[0].o
                    float temp0_483[0x4]
                    int32_t temp1_8
                    temp0_483, temp1_8 =
                        _mm256_i64gather_ps(arg15[0].o, *(r12 + zmm1[0].q), arg7[0].o)
                    arg15[0].o = temp0_483
                    arg7[0].o = temp1_8
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg7[0].o = arg14[0].o
                    float temp0_485[0x4]
                    int32_t temp1_9
                    temp0_485, temp1_9 =
                        _mm256_i64gather_ps(zmm1[0].o, *(r12 + temp0_480[0]), arg7[0].o)
                    zmm1[0].o = temp0_485
                    arg7[0].o = temp1_9
                    arg7 = __vpbroadcastq_ymmqq_memq(0xc)
                    arg9 = _mm256_add_epi64(arg9, arg7)
                    temp0_480[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_480[0].o, temp0_480[0].o)
                    arg10[0].o = zmm5[0].o
                    float temp0_489[0x4]
                    int32_t temp1_10
                    temp0_489, temp1_10 =
                        _mm256_i64gather_ps(temp0_480[0].o, *(r12 + arg9[0].q), arg10[0].o)
                    temp0_480[0].o = temp0_489
                    arg10[0].o = temp1_10
                    arg10 = var_940
                    arg9 = var_800_1
                    int64_t temp0_490[0x4] = _mm256_add_epi64(temp0_472, arg7)
                    arg7[0].o = zx.o(0)
                    float temp0_491[0x4]
                    int32_t temp1_11
                    temp0_491, temp1_11 =
                        _mm256_i64gather_ps(zx.o(0), *(r12 + temp0_490[0]), arg14[0].o)
                    arg7[0].o = temp0_491
                    arg14[0].o = temp1_11
                    arg14 = var_9a0_1
                    zmm2 = _mm256_insertf128_ps(zmm2, arg8[0].o, 1)
                    arg8 = var_920_1
                    zmm1 = _mm256_insertf128_ps(arg15, zmm1[0].o, 1)
                    arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                    arg5 = _mm256_insertf128_ps(temp0_480, arg7[0].o, 1)
                    arg13 = _mm256_cmpeq_epi32(temp0_480, temp0_480)
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
                        arg5 = _mm256_permutevar8x32_ps(data_143442940, arg15)
                        zmm5 = _mm256_add_epi64(
                            __vpaddq_ymmqq_ymmqq_memqq(
                                __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_820_1), var_760), 
                            zmm1)
                        arg7[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                        arg8[0].o = zx.o(0)
                        float temp0_519[0x4]
                        int32_t temp1_12
                        temp0_519, temp1_12 =
                            _mm256_i64gather_ps(arg8[0].o, *(r12 + zmm5[0].q), arg15[0].o)
                        arg8[0].o = temp0_519
                        arg15[0].o = temp1_12
                        zmm2 = var_880_2
                        zmm5 = _mm256_add_epi64(
                            __vpaddq_ymmqq_ymmqq_memqq(__vpaddq_ymmqq_ymmqq_memqq(zmm2, var_8c0_1), 
                                temp0_447), 
                            zmm1)
                        zmm2[0].o = zx.o(0)
                        float temp0_523[0x4]
                        int32_t temp1_13
                        temp0_523, temp1_13 =
                            _mm256_i64gather_ps(zx.o(0), *(r12 + zmm5[0].q), arg7[0].o)
                        zmm2[0].o = temp0_523
                        arg7[0].o = temp1_13
                        arg13 = _mm256_blendv_ps(arg14, _mm256_add_epi64(arg14, zmm1), arg10)
                        arg10 = var_940
                        zmm5 = _mm256_blendv_ps(var_900_2, _mm256_add_epi64(var_900_2, zmm1), arg5)
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
                        float temp0_546[0x4]
                        int32_t temp1_14
                        temp0_546, temp1_14 = _mm256_i64gather_ps(arg8[0].o, *arg13[0], zmm1[0].o)
                        arg8[0].o = temp0_546
                        zmm1[0].o = temp1_14
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg13 = _mm256_blendv_ps(arg13, _mm256_add_epi64(arg13, zmm1), zmm2)
                        arg10 = var_940
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        float temp0_551[0x4]
                        int32_t temp1_15
                        temp0_551, temp1_15 = _mm256_i64gather_ps(zmm2[0].o, *zmm5[0].q, arg7[0].o)
                        zmm2[0].o = temp0_551
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
                        float temp0_568[0x4]
                        int32_t temp1_16
                        temp0_568, temp1_16 = _mm256_i64gather_ps(zx.o(0), *arg13[0], zmm1[0].o)
                        arg5[0].o = temp0_568
                        zmm1[0].o = temp1_16
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_570[0x4]
                        int32_t temp1_17
                        temp0_570, temp1_17 = _mm256_i64gather_ps(zmm1[0].o, *zmm5[0].q, zmm2[0].o)
                        zmm1[0].o = temp0_570
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
                    int64_t var_620_1[0x4] = arg15
                    int64_t var_640_1[0x4] = arg15
                    int64_t var_660_1[0x4] = arg15
                    int64_t var_680_1[0x4] = arg15
                    int64_t var_6a0_1[0x4] = arg15
                    int64_t var_6c0_1[0x4] = arg15
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
                        arg5[0].o = _mm256_extractf128_ps(arg9[0], 1)
                        arg7[0].o = arg9[0]
                        arg8[0].o = zx.o(0)
                        float temp0_593[0x4]
                        int32_t temp1_18
                        temp0_593, temp1_18 = _mm256_i64gather_ps(arg8[0].o, *zmm0[0].q, arg7[0].o)
                        arg8[0].o = temp0_593
                        arg7[0].o = temp1_18
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        arg6[0].o = arg5[0].o
                        float temp0_595[0x4]
                        int32_t temp1_19
                        temp0_595, temp1_19 = _mm256_i64gather_ps(arg7[0].o, *arg14[0].q, arg6[0].o)
                        arg7[0].o = temp0_595
                        arg6[0].o = temp1_19
                        float temp0_596[0x8] = _mm256_permutevar8x32_ps(data_143442940, arg9)
                        arg13 = _mm256_blendv_ps(arg14, arg11, temp0_596)
                        zmm0 = _mm256_insertf128_ps(arg8, arg7[0].o, 1)
                        arg8 = var_920_1
                        var_660_1 = _mm256_maskstore_ps(zmm5, zmm0)
                        zmm0 = _mm256_add_epi64(zmm2, zmm1)
                        arg11 = _mm256_blendv_ps(zmm2, zmm0, arg10)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        float temp0_603[0x4]
                        int32_t temp1_20
                        temp0_603, temp1_20 = _mm256_i64gather_ps(arg7[0].o, *zmm2[0].q, arg9[0])
                        arg7[0].o = temp0_603
                        arg9[0] = temp1_20
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        float temp0_605[0x4]
                        int32_t temp1_21
                        temp0_605, temp1_21 = _mm256_i64gather_ps(zmm2[0].o, *arg13[0], arg5[0].o)
                        zmm2[0].o = temp0_605
                        arg5[0].o = temp1_21
                        arg6 = _mm256_blendv_ps(arg13, _mm256_add_epi64(arg13, zmm1), temp0_596)
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
                        arg10 = var_940
                        zmm0 = var_8a0_1
                    else
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 0x1f), 0x1f)
                        zmm2 = __vpbroadcastq_ymmqq_memq(4)
                        arg9 = _mm256_add_epi64(arg6, zmm2)
                        arg7 = _mm256_add_epi64(arg11, zmm2)
                        arg5 = data_143442920
                        arg13 = _mm256_permutevar8x32_epi32(arg5, zmm1)
                        arg7 = _mm256_blendv_ps(arg11, arg7, arg13)
                        arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        arg8[0].o = zmm1[0].o
                        float temp0_627[0x4]
                        int32_t temp1_22
                        temp0_627, temp1_22 =
                            _mm256_i64gather_ps(arg10[0].o, *arg11[0].q, arg8[0].o)
                        arg10[0].o = temp0_627
                        arg8[0].o = temp1_22
                        zmm0[0].o = arg5[0].o
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_629[0x4]
                        int32_t temp1_23
                        temp0_629, temp1_23 = _mm256_i64gather_ps(arg8[0].o, *arg6[0].q, zmm0[0].o)
                        arg8[0].o = temp0_629
                        zmm0[0].o = temp1_23
                        uint32_t temp0_630[0x8] = _mm256_permutevar8x32_epi32(data_143442940, zmm1)
                        float temp0_631[0x8] = _mm256_blendv_ps(arg6, arg9, temp0_630)
                        var_640_1 =
                            _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(arg10, arg8[0].o, 1))
                        arg11 = _mm256_blendv_ps(arg7, _mm256_add_epi64(arg7, zmm2), arg13)
                        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_638[0x4]
                        int32_t temp1_24
                        temp0_638, temp1_24 = _mm256_i64gather_ps(arg8[0].o, *arg7[0].q, zmm1[0].o)
                        arg8[0].o = temp0_638
                        zmm1[0].o = temp1_24
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_640[0x4]
                        int32_t temp1_25
                        temp0_640, temp1_25 =
                            _mm256_i64gather_ps(zmm1[0].o, *temp0_631[0].q, arg5[0].o)
                        zmm1[0].o = temp0_640
                        arg5[0].o = temp1_25
                        zmm2 = _mm256_add_epi64(temp0_631, zmm2)
                        arg6 = _mm256_blendv_ps(temp0_631, zmm2, temp0_630)
                        arg14 = var_9a0_1
                        zmm0 = var_8a0_1
                        zmm1 = _mm256_insertf128_ps(arg8, zmm1[0].o, 1)
                        arg8 = var_920_1
                        var_6a0_1 = _mm256_maskstore_ps(zmm5, zmm1)
                        arg10 = var_940
                    
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
                        uint32_t temp0_656[0x8] = _mm256_permutevar8x32_epi32(data_143442920, zmm1)
                        arg9 = _mm256_blendv_ps(arg11, zmm2, temp0_656)
                        temp0_656[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg8[0].o = zx.o(0)
                        zmm2[0].o = zmm1[0].o
                        float temp0_659[0x4]
                        int32_t temp1_26
                        temp0_659, temp1_26 = _mm256_i64gather_ps(arg8[0].o, *arg11[0].q, zmm2[0].o)
                        arg8[0].o = temp0_659
                        zmm2[0].o = temp1_26
                        zmm0[0].o = zx.o(0)
                        zmm2[0].o = temp0_656[0].o
                        float temp0_660[0x4]
                        int32_t temp1_27
                        temp0_660, temp1_27 = _mm256_i64gather_ps(zmm0[0].o, *arg6[0].q, zmm2[0].o)
                        zmm0[0].o = temp0_660
                        zmm2[0].o = temp1_27
                        zmm2 = _mm256_blendv_ps(arg6, arg5, 
                            _mm256_permutevar8x32_epi32(data_143442940, zmm1))
                        zmm0 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
                        arg8 = var_920_1
                        var_620_1 = _mm256_maskstore_ps(zmm5, zmm0)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        float temp0_666[0x4]
                        int32_t temp1_28
                        temp0_666, temp1_28 = _mm256_i64gather_ps(zmm0[0].o, *arg9[0].q, zmm1[0].o)
                        zmm0[0].o = temp0_666
                        zmm1[0].o = temp1_28
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_668[0x4]
                        int32_t temp1_29
                        temp0_668, temp1_29 =
                            _mm256_i64gather_ps(zmm1[0].o, *zmm2[0].q, temp0_656[0].o)
                        zmm1[0].o = temp0_668
                        temp0_656[0].o = temp1_29
                        var_680_1 =
                            _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                    
                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(var_880_2, var_8c0_1)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_820_1)
                    zmm2 = __vpbroadcastq_ymmqq_memq(4)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_760)
                    zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm0, temp0_447)
                    zmm1 = _mm256_add_epi64(zmm1, zmm2)
                    arg5[0].o = arg10[0].o
                    arg6[0].o = zx.o(0)
                    uint32_t temp0_677[0x4]
                    int32_t temp1_30
                    temp0_677, temp1_30 =
                        _mm256_i64gather_epi32(arg6[0].o, *(r12 + zmm1[0].q), arg5[0].o)
                    arg6[0].o = temp0_677
                    arg5[0].o = temp1_30
                    zmm0 = _mm256_add_epi64(zmm0, zmm2)
                    zmm1[0].o = zx.o(0)
                    zmm2[0].o = var_540
                    uint32_t temp0_679[0x4]
                    int32_t temp1_31
                    temp0_679, temp1_31 =
                        _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm0[0].q), zmm2[0].o)
                    zmm1[0].o = temp0_679
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
                    zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, zmm0))
                    arg7 = _mm256_broadcast_ss(1023f)
                    zmm2 = _mm256_div_ps(zmm2, arg7)
                    float temp0_698[0x8] =
                        _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm0)), arg7)
                    zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg6, var_640_1)
                    zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_698, zmm5, var_620_1)
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
                        uint32_t temp0_724[0x8] = _mm256_permutevar8x32_epi32(data_143442920, arg7)
                        arg12 = _mm256_blendv_ps(arg12, zmm2, temp0_724)
                        zmm0 = _mm256_add_epi64(arg10, zmm0)
                        zmm2 = _mm256_permutevar8x32_epi32(data_143442940, arg7)
                        var_900_2 = _mm256_blendv_ps(arg10, zmm0, zmm2)
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(
                            __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_820_1), var_760)
                        arg7 = __vpaddq_ymmqq_ymmqq_memqq(
                            __vpaddq_ymmqq_ymmqq_memqq(var_880_2, var_8c0_1), temp0_447)
                        arg10 = __vpbroadcastq_ymmqq_memq(4)
                        arg7 = _mm256_add_epi64(arg7, arg10)
                        zmm0 = _mm256_add_epi64(zmm0, arg10)
                        arg10[0].o = zx.o(0)
                        float temp0_736[0x8] = _mm256_blendv_ps(arg10, zmm0, temp0_724)
                        zmm2 = _mm256_blendv_ps(arg10, arg7, zmm2)
                        int64_t r8_3 = __vpextrq_gpr64q_xmmdq_immb(temp0_736[0].o, 1)
                        int64_t rcx_12 = temp0_736[0].q
                        temp0_736[0].o = _mm256_extracti128_si256(temp0_736, 1)
                        int64_t r10_3 = __vpextrq_gpr64q_xmmdq_immb(temp0_736[0].o, 1)
                        int64_t rdi_5 = temp0_736[0].q
                        int64_t rsi_5 = zmm2[0].q
                        int64_t r11_3 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        temp0_736[0].o = _mm256_extracti128_si256(zmm2, 1)
                        int64_t rbx_8 = temp0_736[0].q
                        int64_t rax_162 = __vpextrq_gpr64q_xmmdq_immb(temp0_736[0].o, 1)
                        temp0_736[0].o = zx.o(*(r12 + rcx_12))
                        temp0_736[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_736[0].o, *(r12 + r8_3), 1)
                        temp0_736[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_736[0].o, *(r12 + rdi_5), 2)
                        temp0_736[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_736[0].o, *(r12 + r10_3), 3)
                        temp0_736[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_736[0].o, *(r12 + rsi_5), 4)
                        temp0_736[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_736[0].o, *(r12 + r11_3), 5)
                        temp0_736[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_736[0].o, *(r12 + rbx_8), 6)
                        temp0_736[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_736[0].o, *(r12 + rax_162), 7)
                        zmm0 = _mm256_cvtepu16_epi32(temp0_736[0].o)
                        zmm2 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, zmm2))
                    
                    var_4a0 = _mm256_maskstore_ps(arg6, _mm256_blendv_ps(arg10, zmm0, arg15))
                    arg11 = arg9 & var_980
                    zmm0 = _mm256_cmpeq_epi32(arg11, arg9)
                    zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm0[0].o &= arg13[0].o
                    zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
                    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                    char temp0_877 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
                    arg15[0].o = zx.o(0)
                    
                    if (temp0_877 == 0)
                        arg8 = var_920_1
                        arg9 = var_800_1
                        arg10 = var_900_2
                    else
                        int128_t var_3d0
                        int64_t rax_180
                        
                        if ((temp0_877 & 1) != 0)
                            arg7[0].o = var_3d0
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg12[0].q, 0)
                            
                            if ((temp0_877 & 2) != 0)
                                rax_180 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_180, 1)
                        else
                            arg7[0].o = var_3d0
                            
                            if ((temp0_877 & 2) != 0)
                                rax_180 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_180, 1)
                        arg8 = var_920_1
                        arg10 = var_900_2
                        
                        if ((temp0_877 & 4) == 0)
                            if ((temp0_877 & 8) != 0)
                                goto label_140191102
                            
                            goto label_140190f9b
                        
                        zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm2[0].q, 2)
                        
                        if ((temp0_877 & 8) == 0)
                        label_140190f9b:
                            zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            
                            if ((temp0_877 & 0x10) != 0)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg10[0].q, 4)
                        else
                        label_140191102:
                            zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                            int64_t rax_186 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_186, 3)
                            zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            
                            if ((temp0_877 & 0x10) != 0)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg10[0].q, 4)
                        
                        zmm0 = _mm256_slli_epi32(zmm0, 0x1f)
                        var_940[0].o = zmm5[0].o
                        zmm5 = zmm1
                        zmm1 = arg12
                        
                        if ((temp0_877 & 0x20) != 0)
                            int64_t rax_182 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_182, 5)
                        
                        arg12 = __vpbroadcastq_ymmqq_memq(2)
                        arg9 = _mm256_srai_epi32(zmm0, 0x1f)
                        
                        if ((temp0_877 & 0x40) != 0)
                            zmm0[0].o = _mm256_extracti128_si256(arg10, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0].q, 6)
                        
                        zmm0 = _mm256_add_epi64(arg10, arg12)
                        arg12 = _mm256_add_epi64(zmm1, arg12)
                        arg15 = _mm256_permutevar8x32_epi32(data_143442920, arg9)
                        zmm2 = data_143442940
                        arg9 = _mm256_permutevar8x32_epi32(zmm2, arg9)
                        
                        if (temp0_877 s< 0)
                            zmm2[0].o = _mm256_extracti128_si256(arg10, 1)
                            int64_t rax_184 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_184, 7)
                        
                        arg12 = _mm256_blendv_ps(zmm1, arg12, arg15)
                        arg10 = _mm256_blendv_ps(arg10, zmm0, arg9)
                        var_3d0 = arg7[0].o
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                            _mm256_cvtepu16_epi32(arg7[0].o), 
                            __vpbroadcastd_ymmqq_memd(0xffffff01)))
                        arg15[0].o = zx.o(0)
                        arg9 = var_800_1
                        zmm1 = zmm5
                        zmm5[0].o = var_940[0].o
                    
                    zmm2 = _mm256_cmpeq_epi32(arg11, arg15)
                    var_480 = _mm256_maskstore_ps(arg6, zmm2 & not.32(zmm0))
                    zmm0 = var_8a0_1
                    arg11 = zmm0 & var_980
                    zmm0 = _mm256_cmpeq_epi32(arg11, zmm0)
                    zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                    zmm0[0].o &= arg13[0].o
                    zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    char temp0_1115 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                    
                    if (temp0_1115 == 0)
                        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    else
                        int128_t var_3e0
                        int64_t rax_188
                        
                        if ((temp0_1115 & 1) != 0)
                            zmm2[0].o = var_3e0
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg12[0].q, 0)
                            
                            if ((temp0_1115 & 2) != 0)
                                rax_188 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_188, 1)
                        else
                            zmm2[0].o = var_3e0
                            
                            if ((temp0_1115 & 2) != 0)
                                rax_188 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_188, 1)
                        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                        
                        if ((temp0_1115 & 4) == 0)
                            if ((temp0_1115 & 8) != 0)
                                goto label_14019128d
                            
                            goto label_140191164
                        
                        zmm0[0].o = _mm256_extracti128_si256(arg12, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                        
                        if ((temp0_1115 & 8) != 0)
                        label_14019128d:
                            zmm0[0].o = _mm256_extracti128_si256(arg12, 1)
                            int64_t rax_193 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_193, 3)
                            
                            if ((temp0_1115 & 0x10) == 0)
                                goto label_14019116e
                            
                            goto label_1401912ad
                        
                    label_140191164:
                        
                        if ((temp0_1115 & 0x10) == 0)
                        label_14019116e:
                            
                            if ((temp0_1115 & 0x20) != 0)
                                goto label_1401912bc
                            
                            goto label_140191178
                        
                    label_1401912ad:
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg10[0].q, 4)
                        
                        if ((temp0_1115 & 0x20) != 0)
                        label_1401912bc:
                            int64_t rax_195 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_195, 5)
                            
                            if ((temp0_1115 & 0x40) == 0)
                                goto label_140191182
                            
                            goto label_1401912d1
                        
                    label_140191178:
                        
                        if ((temp0_1115 & 0x40) != 0)
                        label_1401912d1:
                            zmm0[0].o = _mm256_extracti128_si256(arg10, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                            
                            if (temp0_1115 s< 0)
                            label_1401912e9:
                                zmm0[0].o = _mm256_extracti128_si256(arg10, 1)
                                int64_t rax_197 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_197, 7)
                        else
                        label_140191182:
                            
                            if (temp0_1115 s< 0)
                                goto label_1401912e9
                        
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
                    goto label_1401917c2
            else
                int32_t var_9a0_2[0x8] = zmm2
                zmm2 = var_160_1
                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                int32_t temp0_758[0x8] = __vpmulld_ymmqq_ymmqq_memqq(zmm1, var_6e0)
                zmm1[0].o = _mm256_extracti128_si256(temp0_758, 1)
                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                zmm2 = _mm256_cvtepi32_epi64(temp0_758[0].o)
                int32_t var_900_3[0x8] = zmm2
                zmm2 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_7c0_2)
                float var_960_3[0x8] = zmm1
                arg6 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_880_2)
                float var_860_3[0x8] = _mm256_add_epi64(arg6, arg9)
                zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_740_1)
                var_940 = zmm1
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
                        int64_t temp0_785[0x4] = _mm256_add_epi64(zmm2, arg11)
                        arg11 = _mm256_add_epi64(arg7, arg11)
                        arg15[0].o = _mm256_extracti128_si256(zmm5, 1)
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                        arg9[0] = zmm5[0].o
                        float temp0_789[0x4]
                        int32_t temp1_32
                        temp0_789, temp1_32 =
                            _mm256_i64gather_ps(arg14[0].o, *(r12 + arg11[0].q), arg9[0])
                        arg14[0].o = temp0_789
                        arg9[0] = temp1_32
                        arg5[0].o = zx.o(0)
                        var_7c0_2[0].o = arg15[0].o
                        float temp0_790[0x4]
                        int32_t temp1_33
                        temp0_790, temp1_33 =
                            _mm256_i64gather_ps(arg5[0].o, *(r12 + temp0_785[0]), var_7c0_2[0].o)
                        arg5[0].o = temp0_790
                        var_7c0_2[0].o = temp1_33
                        zmm1 = __vpbroadcastq_ymmqq_memq(8)
                        arg9 = _mm256_add_epi64(zmm2, zmm1)
                        zmm1 = _mm256_add_epi64(arg7, zmm1)
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        arg8[0].o = zmm5[0].o
                        float temp0_795[0x4]
                        int32_t temp1_34
                        temp0_795, temp1_34 =
                            _mm256_i64gather_ps(arg11[0].o, *(r12 + zmm1[0].q), arg8[0].o)
                        arg11[0].o = temp0_795
                        arg8[0].o = temp1_34
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg8[0].o = arg15[0].o
                        float temp0_797[0x4]
                        int32_t temp1_35
                        temp0_797, temp1_35 =
                            _mm256_i64gather_ps(zmm1[0].o, *(r12 + arg9[0].q), arg8[0].o)
                        zmm1[0].o = temp0_797
                        arg8[0].o = temp1_35
                        arg8 = __vpbroadcastq_ymmqq_memq(0xc)
                        int64_t temp0_799[0x4] = _mm256_add_epi64(arg7, arg8)
                        arg9[0] = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0], arg9[0])
                        arg7[0].o = zmm5[0].o
                        float temp0_801[0x4]
                        int32_t temp1_36
                        temp0_801, temp1_36 =
                            _mm256_i64gather_ps(arg9[0], *(r12 + temp0_799[0]), arg7[0].o)
                        arg9[0] = temp0_801
                        arg7[0].o = temp1_36
                        arg13 = _mm256_cmpeq_epi32(temp0_799, temp0_799)
                        zmm2 = _mm256_add_epi64(zmm2, arg8)
                        arg8 = var_920_1
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        float temp0_805[0x4]
                        int32_t temp1_37
                        temp0_805, temp1_37 =
                            _mm256_i64gather_ps(arg7[0].o, *(r12 + zmm2[0].q), arg15[0].o)
                        arg7[0].o = temp0_805
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
                        int32_t temp0_824 = _mm256_movemask_ps(arg14)
                        arg11 = var_940
                        arg10 = arg11
                        zmm5 = var_860_3
                        
                        if (temp0_824 != 0)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            arg9 = _mm256_permutevar8x32_ps(data_143442920, arg14)
                            arg5 = _mm256_permutevar8x32_ps(data_143442940, arg14)
                            zmm5 = _mm256_add_epi64(
                                __vpaddq_ymmqq_ymmqq_memqq(
                                    __vpaddq_ymmqq_ymmqq_memqq(var_7c0_2, var_820_1), var_900_3), 
                                zmm1)
                            arg7[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
                            arg8[0].o = zx.o(0)
                            float temp0_832[0x4]
                            int32_t temp1_38
                            temp0_832, temp1_38 =
                                _mm256_i64gather_ps(arg8[0].o, *(r12 + zmm5[0].q), arg14[0].o)
                            arg8[0].o = temp0_832
                            arg14[0].o = temp1_38
                            zmm2 = var_880_2
                            zmm5 = _mm256_add_epi64(
                                __vpaddq_ymmqq_ymmqq_memqq(
                                    __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_8c0_1), var_960_3), 
                                zmm1)
                            zmm2[0].o = zx.o(0)
                            float temp0_836[0x4]
                            int32_t temp1_39
                            temp0_836, temp1_39 =
                                _mm256_i64gather_ps(zx.o(0), *(r12 + zmm5[0].q), arg7[0].o)
                            zmm2[0].o = temp0_836
                            arg7[0].o = temp1_39
                            arg10 = _mm256_blendv_ps(arg11, _mm256_add_epi64(arg11, zmm1), arg9)
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
                            float temp0_858[0x4]
                            int32_t temp1_40
                            temp0_858, temp1_40 =
                                _mm256_i64gather_ps(arg8[0].o, *arg10[0].q, zmm1[0].o)
                            arg8[0].o = temp0_858
                            zmm1[0].o = temp1_40
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            arg10 = _mm256_blendv_ps(arg10, _mm256_add_epi64(arg10, zmm1), zmm2)
                            arg9 = var_800_1
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            float temp0_863[0x4]
                            int32_t temp1_41
                            temp0_863, temp1_41 =
                                _mm256_i64gather_ps(zmm2[0].o, *zmm5[0].q, arg7[0].o)
                            zmm2[0].o = temp0_863
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
                            float temp0_892[0x4]
                            int32_t temp1_42
                            temp0_892, temp1_42 =
                                _mm256_i64gather_ps(arg5[0].o, *arg10[0].q, zmm1[0].o)
                            arg5[0].o = temp0_892
                            zmm1[0].o = temp1_42
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            float temp0_894[0x4]
                            int32_t temp1_43
                            temp0_894, temp1_43 =
                                _mm256_i64gather_ps(zmm1[0].o, *zmm5[0].q, zmm2[0].o)
                            zmm1[0].o = temp0_894
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
                        uint32_t temp0_909[0x8] = _mm256_cvtepu16_epi32(arg6[0].o)
                        int64_t var_620_2[0x4] = arg15
                        int64_t var_640_2[0x4] = arg15
                        int64_t var_660_2[0x4] = arg15
                        int64_t var_680_2[0x4] = arg15
                        int64_t var_6a0_2[0x4] = arg15
                        int64_t var_6c0_2[0x4] = arg15
                        zmm0 = var_980
                        zmm5 = arg8 & _mm256_srai_epi32(_mm256_slli_epi32(zmm0, 0x1f), 0x1f)
                        arg11 = zmm5 & var_9a0_2
                        
                        if (_mm256_movemask_ps(arg11) != 0)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            zmm2 = _mm256_add_epi64(arg9, zmm1)
                            int64_t temp0_915[0x4] = _mm256_add_epi64(var_740_1, zmm1)
                            zmm0 = data_143442920
                            arg7 = _mm256_permutevar8x32_ps(zmm0, arg11)
                            arg5 = _mm256_blendv_ps(var_740_1, temp0_915, arg7)
                            arg8[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
                            arg12 = arg9
                            arg9[0] = zx.o(0)
                            zmm0[0].o = arg11[0].o
                            float temp0_919[0x4]
                            int32_t temp1_44
                            temp0_919, temp1_44 =
                                _mm256_i64gather_ps(arg9[0], *var_740_1[0].q, zmm0[0].o)
                            arg9[0] = temp0_919
                            zmm0[0].o = temp1_44
                            zmm0[0].o = arg8[0].o
                            var_740_1[0].o =
                                __vxorps_xmmdq_xmmdq_xmmdq(var_740_1[0].o, var_740_1[0].o)
                            float temp0_921[0x4]
                            int32_t temp1_45
                            temp0_921, temp1_45 =
                                _mm256_i64gather_ps(var_740_1[0].o, *arg12[0].q, zmm0[0].o)
                            var_740_1[0].o = temp0_921
                            zmm0[0].o = temp1_45
                            float temp0_922[0x8] = _mm256_permutevar8x32_ps(data_143442940, arg11)
                            zmm2 = _mm256_blendv_ps(arg12, zmm2, temp0_922)
                            var_660_2 = _mm256_maskstore_ps(zmm5, 
                                _mm256_insertf128_ps(arg9, var_740_1[0].o, 1))
                            arg6 = _mm256_blendv_ps(arg5, _mm256_add_epi64(arg5, zmm1), arg7)
                            var_740_1 = arg6
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            float temp0_929[0x4]
                            int32_t temp1_46
                            temp0_929, temp1_46 =
                                _mm256_i64gather_ps(arg6[0].o, *arg5[0], arg11[0].o)
                            arg6[0].o = temp0_929
                            arg11[0].o = temp1_46
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_931[0x4]
                            int32_t temp1_47
                            temp0_931, temp1_47 =
                                _mm256_i64gather_ps(arg5[0].o, *zmm2[0].q, arg8[0].o)
                            arg5[0].o = temp0_931
                            arg8[0].o = temp1_47
                            arg8 = var_920_1
                            arg9 = _mm256_blendv_ps(zmm2, _mm256_add_epi64(zmm2, zmm1), temp0_922)
                            zmm0 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
                            var_6c0_2 = _mm256_maskstore_ps(zmm5, zmm0)
                        
                        arg11 = _mm256_slli_epi32(temp0_909, 0x1f)
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
                            arg8 = var_740_1
                            int64_t temp0_950[0x4] = _mm256_add_epi64(arg8, zmm1)
                            zmm2 = data_143442920
                            arg7 = _mm256_permutevar8x32_epi32(zmm2, zmm0)
                            arg5 = _mm256_blendv_ps(arg8, temp0_950, arg7)
                            zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg12 = arg9
                            arg9[0] = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0], arg9[0])
                            arg6[0].o = zmm0[0].o
                            float temp0_955[0x4]
                            int32_t temp1_48
                            temp0_955, temp1_48 =
                                _mm256_i64gather_ps(arg9[0], *arg8[0].q, arg6[0].o)
                            arg9[0] = temp0_955
                            arg6[0].o = temp1_48
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            arg8[0].o = zmm2[0].o
                            float temp0_957[0x4]
                            int32_t temp1_49
                            temp0_957, temp1_49 =
                                _mm256_i64gather_ps(arg6[0].o, *arg12[0].q, arg8[0].o)
                            arg6[0].o = temp0_957
                            arg8[0].o = temp1_49
                            uint32_t temp0_958[0x8] =
                                _mm256_permutevar8x32_epi32(data_143442940, zmm0)
                            arg14 = _mm256_blendv_ps(arg12, arg14, temp0_958)
                            var_640_2 =
                                _mm256_maskstore_ps(zmm5, _mm256_insertf128_ps(arg9, arg6[0].o, 1))
                            float temp0_963[0x8] =
                                _mm256_blendv_ps(arg5, _mm256_add_epi64(arg5, zmm1), arg7)
                            var_740_1 = temp0_963
                            temp0_963[0].o =
                                __vxorps_xmmdq_xmmdq_xmmdq(temp0_963[0].o, temp0_963[0].o)
                            float temp0_965[0x4]
                            int32_t temp1_50
                            temp0_965, temp1_50 =
                                _mm256_i64gather_ps(temp0_963[0].o, *arg5[0], zmm0[0].o)
                            temp0_963[0].o = temp0_965
                            zmm0[0].o = temp1_50
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_967[0x4]
                            int32_t temp1_51
                            temp0_967, temp1_51 =
                                _mm256_i64gather_ps(zmm0[0].o, *arg14[0].q, zmm2[0].o)
                            zmm0[0].o = temp0_967
                            zmm2[0].o = temp1_51
                            arg9 = _mm256_blendv_ps(arg14, _mm256_add_epi64(arg14, zmm1), temp0_958)
                            arg8 = var_920_1
                            var_6a0_2 = _mm256_maskstore_ps(zmm5, 
                                _mm256_insertf128_ps(temp0_963, zmm0[0].o, 1))
                        
                        arg14 = var_8a0_1
                        arg6 = _mm256_srai_epi32(arg11, 0x1f)
                        zmm0 = _mm256_cmpeq_epi32(arg14 & var_980, arg14)
                        zmm5 = zmm0 & arg8
                        zmm0[0].o = _mm256_extracti128_si256(zmm5, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                        arg7[0].o = arg10[0].o & zmm0[0].o
                        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(arg7[0].o, 0xf)
                        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
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
                            float temp0_989[0x4]
                            int32_t temp1_52
                            temp0_989, temp1_52 =
                                _mm256_i64gather_ps(zx.o(0), *var_740_1[0].q, arg8[0].o)
                            arg7[0].o = temp0_989
                            arg8[0].o = temp1_52
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            arg5[0].o = zmm1[0].o
                            float temp0_991[0x4]
                            int32_t temp1_53
                            temp0_991, temp1_53 =
                                _mm256_i64gather_ps(arg8[0].o, *arg12[0].q, arg5[0].o)
                            arg8[0].o = temp0_991
                            arg5[0].o = temp1_53
                            zmm2 = _mm256_blendv_ps(arg12, zmm2, 
                                _mm256_permutevar8x32_epi32(data_143442940, zmm0))
                            arg5 = _mm256_insertf128_ps(arg7, arg8[0].o, 1)
                            var_620_2 = _mm256_maskstore_ps(zmm5, arg5)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            float temp0_997[0x4]
                            int32_t temp1_54
                            temp0_997, temp1_54 =
                                _mm256_i64gather_ps(arg5[0].o, *arg9[0].q, zmm0[0].o)
                            arg5[0].o = temp0_997
                            zmm0[0].o = temp1_54
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            float temp0_999[0x4]
                            int32_t temp1_55
                            temp0_999, temp1_55 =
                                _mm256_i64gather_ps(zmm0[0].o, *zmm2[0].q, zmm1[0].o)
                            zmm0[0].o = temp0_999
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
                        uint32_t temp0_1009[0x4]
                        int32_t temp1_56
                        temp0_1009, temp1_56 =
                            _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm1[0].q), arg5[0].o)
                        zmm2[0].o = temp0_1009
                        arg5[0].o = temp1_56
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg5[0].o = zx.o(0)
                        uint32_t temp0_1011[0x4]
                        int32_t temp1_57
                        temp0_1011, temp1_57 =
                            _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm0[0].q), zmm1[0].o)
                        arg5[0].o = temp0_1011
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
                        zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, zmm0))
                        arg8 = _mm256_broadcast_ss(1023f)
                        zmm2 = _mm256_div_ps(zmm2, arg8)
                        float temp0_1030[0x8] =
                            _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm0)), arg8)
                        zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, zmm5, var_640_2)
                        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_1030, var_680_2, var_620_2)
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
                        uint32_t temp0_1041[0x8] = __vpbroadcastd_ymmqq_memd(2)
                        arg13 = __vpcmpeqd_ymmqq_ymmqq_memqq(temp0_1041, var_7a0)
                        arg8[0].o = _mm256_extracti128_si256(arg13, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
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
                                int64_t temp0_1056[0x4] = _mm256_add_epi64(zmm2, zmm1)
                                arg9 = var_940
                                zmm1 = _mm256_add_epi64(arg9, zmm1)
                                arg8 = _mm256_permutevar8x32_ps(data_143442920, arg7)
                                var_940 = _mm256_blendv_ps(arg9, zmm1, arg8)
                                float temp0_1060[0x8] =
                                    _mm256_permutevar8x32_ps(data_143442940, arg7)
                                var_860_3 = _mm256_blendv_ps(zmm2, temp0_1056, temp0_1060)
                                int64_t temp0_1062[0x4] =
                                    __vpaddq_ymmqq_ymmqq_memqq(var_880_2, var_8c0_1)
                                zmm2 = var_7c0_2
                                arg7 = __vpaddq_ymmqq_ymmqq_memqq(zmm2, var_820_1)
                                arg9 = __vpbroadcastq_ymmqq_memq(4)
                                arg7 = __vpaddq_ymmqq_ymmqq_memqq(arg7, var_900_3)
                                int64_t temp0_1067[0x4] = _mm256_add_epi64(
                                    __vpaddq_ymmqq_ymmqq_memqq(temp0_1062, var_960_3), arg9)
                                arg7 = _mm256_blendv_ps(arg15, _mm256_add_epi64(arg7, arg9), arg8)
                                float temp0_1070[0x8] =
                                    _mm256_blendv_ps(arg15, temp0_1067, temp0_1060)
                                int64_t r8_4 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                int64_t rcx_16 = arg7[0].q
                                temp0_1067[0].o = _mm256_extracti128_si256(arg7, 1)
                                int64_t r10_4 = __vpextrq_gpr64q_xmmdq_immb(temp0_1067[0].o, 1)
                                int64_t rdi_6 = temp0_1067[0]
                                int64_t rsi_7 = temp0_1070[0].q
                                int64_t r11_4 = __vpextrq_gpr64q_xmmdq_immb(temp0_1070[0].o, 1)
                                temp0_1070[0].o = _mm256_extracti128_si256(temp0_1070, 1)
                                int64_t rbx_9 = temp0_1070[0].q
                                int64_t rax_178 = __vpextrq_gpr64q_xmmdq_immb(temp0_1070[0].o, 1)
                                temp0_1070[0].o = zx.o(*(r12 + rcx_16))
                                temp0_1070[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1070[0].o, 
                                    *(r12 + r8_4), 1)
                                temp0_1070[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1070[0].o, 
                                    *(r12 + rdi_6), 2)
                                temp0_1070[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1070[0].o, 
                                    *(r12 + r10_4), 3)
                                temp0_1070[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1070[0].o, 
                                    *(r12 + rsi_7), 4)
                                temp0_1070[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1070[0].o, 
                                    *(r12 + r11_4), 5)
                                temp0_1070[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1070[0].o, 
                                    *(r12 + rbx_9), 6)
                                temp0_1070[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_1070[0].o, 
                                    *(r12 + rax_178), 7)
                                zmm1 = _mm256_cvtepu16_epi32(temp0_1070[0].o)
                                arg5 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                arg7 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg5))
                            
                            arg12 = var_580
                            var_380 =
                                _mm256_maskstore_ps(arg11, _mm256_blendv_ps(arg15, arg7, arg6))
                            arg7 = temp0_1041 & var_980
                            zmm1 = _mm256_cmpeq_epi32(arg7, temp0_1041)
                            arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
                            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                            arg6[0].o = zmm5[0].o & zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                            char temp0_1171 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_1171 == 0)
                                arg14 = var_8a0_1
                                arg9 = var_860_3
                            else
                                int128_t var_3f0
                                int64_t rax_199
                                
                                if ((temp0_1171 & 1) != 0)
                                    zmm2 = var_940
                                    arg5[0].o = var_3f0
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm2[0].q, 0)
                                    
                                    if ((temp0_1171 & 2) != 0)
                                        rax_199 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_199, 1)
                                else
                                    arg5[0].o = var_3f0
                                    zmm2 = var_940
                                    
                                    if ((temp0_1171 & 2) != 0)
                                        rax_199 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_199, 1)
                                arg9 = var_860_3
                                
                                if ((temp0_1171 & 4) == 0)
                                    if ((temp0_1171 & 8) != 0)
                                        goto label_140191537
                                    
                                    goto label_1401913cb
                                
                                zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm1[0].q, 2)
                                
                                if ((temp0_1171 & 8) != 0)
                                label_140191537:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    int64_t rax_203 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_203, 3)
                                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                    
                                    if ((temp0_1171 & 0x10) == 0)
                                        goto label_1401913da
                                    
                                    goto label_14019155c
                                
                            label_1401913cb:
                                arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                
                                if ((temp0_1171 & 0x10) == 0)
                                label_1401913da:
                                    arg6 = _mm256_slli_epi32(arg6, 0x1f)
                                    arg8 = arg12
                                    
                                    if ((temp0_1171 & 0x20) != 0)
                                        goto label_140191574
                                    
                                    goto label_1401913ed
                                
                            label_14019155c:
                                arg5[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg9[0].q, 4)
                                arg6 = _mm256_slli_epi32(arg6, 0x1f)
                                arg8 = arg12
                                
                                if ((temp0_1171 & 0x20) == 0)
                                label_1401913ed:
                                    arg14 = __vpbroadcastq_ymmqq_memq(2)
                                    arg12 = _mm256_srai_epi32(arg6, 0x1f)
                                    
                                    if ((temp0_1171 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                                            *zmm1[0].q, 6)
                                else
                                label_140191574:
                                    int64_t rax_205 = __vpextrq_gpr64q_xmmdq_immb(arg9[0], 1)
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rax_205, 5)
                                    arg14 = __vpbroadcastq_ymmqq_memq(2)
                                    arg12 = _mm256_srai_epi32(arg6, 0x1f)
                                    
                                    if ((temp0_1171 & 0x40) != 0)
                                        zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                                            *zmm1[0].q, 6)
                                
                                zmm2[0].o = arg5[0].o
                                arg6 = _mm256_add_epi64(arg9, arg14)
                                arg14 = __vpaddq_ymmqq_ymmqq_memqq(arg14, var_940)
                                zmm1 = _mm256_permutevar8x32_epi32(data_143442920, arg12)
                                arg5 = data_143442940
                                arg12 = _mm256_permutevar8x32_epi32(arg5, arg12)
                                
                                if (temp0_1171 s< 0)
                                    arg5[0].o = _mm256_extracti128_si256(arg9, 1)
                                    int64_t rax_201 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_201, 7)
                                
                                var_940 = _mm256_blendv_ps(var_940, arg14, zmm1)
                                arg9 = _mm256_blendv_ps(arg9, arg6, arg12)
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
                            char temp0_1200 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                            
                            if (temp0_1200 == 0)
                                arg8[0].o = var_920_1[0].o
                            else
                                int128_t var_400
                                int64_t rax_207
                                
                                if ((temp0_1200 & 1) != 0)
                                    arg5 = var_940
                                    zmm2[0].o = var_400
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg5[0], 0)
                                    
                                    if ((temp0_1200 & 2) != 0)
                                        rax_207 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_207, 1)
                                else
                                    zmm2[0].o = var_400
                                    arg5 = var_940
                                    
                                    if ((temp0_1200 & 2) != 0)
                                        rax_207 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_207, 1)
                                
                                if ((temp0_1200 & 4) == 0)
                                    if ((temp0_1200 & 8) != 0)
                                        goto label_14018dea3
                                    
                                    goto label_1401915dd
                                
                                zmm1[0].o = _mm256_extracti128_si256(arg5, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 2)
                                
                                if ((temp0_1200 & 8) != 0)
                                label_14018dea3:
                                    zmm1[0].o = _mm256_extracti128_si256(arg5, 1)
                                    int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_2, 3)
                                    
                                    if ((temp0_1200 & 0x10) == 0)
                                        goto label_1401915e7
                                    
                                    goto label_14018dec3
                                
                            label_1401915dd:
                                
                                if ((temp0_1200 & 0x10) == 0)
                                label_1401915e7:
                                    
                                    if ((temp0_1200 & 0x20) != 0)
                                        goto label_14018ded2
                                    
                                    goto label_1401915f1
                                
                            label_14018dec3:
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg9[0].q, 4)
                                
                                if ((temp0_1200 & 0x20) != 0)
                                label_14018ded2:
                                    int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(arg9[0], 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_4, 5)
                                    
                                    if ((temp0_1200 & 0x40) == 0)
                                        goto label_1401915fb
                                    
                                    goto label_14018dee7
                                
                            label_1401915f1:
                                
                                if ((temp0_1200 & 0x40) != 0)
                                label_14018dee7:
                                    zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_1200 s< 0)
                                    label_14018deff:
                                        zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                        int64_t rax_6 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_6, 7)
                                else
                                label_1401915fb:
                                    
                                    if (temp0_1200 s< 0)
                                        goto label_14018deff
                                
                                arg8[0].o = var_920_1[0].o
                                var_400 = zmm2[0].o
                                arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(zmm2[0].o), 
                                    __vpbroadcastd_ymmqq_memd(0xffffff01)))
                            
                            zmm1 = _mm256_cmpeq_epi32(arg7, arg15) & not.32(arg6)
                            var_340 = _mm256_maskstore_ps(arg11, zmm1)
                            arg11 = var_8e0_1
                        
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
                        zmm0[0].o ^= zmm1[0].o
                        zmm0[0].o &= arg10[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                            arg13 = _mm256_cmpeq_epi32(arg13, arg13)
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
                            
                            arg13 = _mm256_cmpeq_epi32(arg13, arg13)
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
                
                arg5 = var_4a0
                arg6 = var_480
                zmm5 = var_460
                float temp0_1252[0x8] = _mm256_sub_ps(var_380, arg5)
                float temp0_1253[0x8] = _mm256_sub_ps(var_360, arg6)
                zmm2 = _mm256_sub_ps(var_340, zmm5)
                arg7 = var_7e0_1
                float temp0_1255[0x8] = _mm256_fmadd_ps(temp0_1252, arg7, arg5)
                zmm1 = _mm256_fmadd_ps(temp0_1253, arg7, arg6)
                zmm2 = _mm256_fmadd_ps(zmm2, arg7, zmm5)
                arg5 = var_9a0_2
                var_4a0 = _mm256_maskstore_ps(arg5, temp0_1255)
                var_480 = _mm256_maskstore_ps(arg5, zmm1)
                var_460 = _mm256_maskstore_ps(arg5, zmm2)
                zmm0 = arg11 ^ arg13
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    goto label_1401917c2
        
        zmm0[0].o = var_4a0[0].o
        arg9[0] = var_4a0[4].o
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
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg9[0], arg6[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg7[0].o, 0x28)
        int128_t var_280_1 = zmm2[0].o
        zmm2[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg10[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_270_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg9[0], arg6[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg7[0].o, 0xa8)
        int128_t var_260_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        int128_t var_250_1 = zmm0[0].o
        uint64_t rcx_26
        int64_t rsi_11
        
        for (uint64_t i_9 = 0xff; i_9 != 0; i_9 = rsi_11 & rol.q(-2, rcx_26.b))
            uint64_t rax_212 = _tzcnt_u64(i_9)
            rsi_11 = i_9 & not.q(1 << (rax_212 u% 0x40))
            uint32_t var_2e0[0x8] = arg16
            zmm0[0].o = (&var_2c0)[rax_212]
            *(arg1 + sx.q(var_2e0[zx.q(rax_212.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            rcx_26 = _tzcnt_u64(rsi_11)
            zmm0[0].o = (&var_2c0)[rcx_26]
            *(arg1 + sx.q(var_2e0[zx.q(rcx_26.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
        
        r14 += 8
    while (r14 s< rdx_4)
    
    result = zx.q(arg21)
    
    if (r14 s< result.d)
        goto label_140191960
arg7[0].o = var_e8
arg8[0].o = var_d8
arg9[0] = var_c8
arg10[0].o = var_b8
arg11[0].o = var_a8
arg12[0].o = var_98
arg13[0].o = var_88
arg14[0].o = var_78
arg15[0].o = var_68
arg16[0].o = var_58
_mm256_zeroupper()
return result
