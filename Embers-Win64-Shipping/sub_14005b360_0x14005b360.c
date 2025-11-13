// 函数: sub_14005b360
// 地址: 0x14005b360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg15[0].o
int128_t var_68 = arg14[0].o
int128_t var_78 = arg13[0].o
int128_t var_88 = arg12[0].o
int128_t var_98 = arg11[0].o
int128_t var_a8 = arg10[0].o
int128_t var_b8 = arg9[0].o
int128_t var_c8 = arg8[0].o
int128_t var_d8 = arg7[0].o
int128_t var_e8 = arg6[0].o
float zmm0[0x8] = *arg23
int32_t result = _mm256_movemask_ps(zmm0)
int32_t* rdi_2
uint32_t zmm1[0x8]
int256_t var_720
float zmm2[0x8]
float zmm3[0x8]
float zmm5[0x8]

if (result != 0xff)
    float var_1a0_1[0x8] = zmm0
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    float var_3a0_1[0x8] = arg5
    float var_3c0_1[0x8] = arg5
    float var_3e0_1[0x8] = arg5
    zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
    zmm2 = _mm256_broadcast_ss(0.5f)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
    float var_440_1[0x8] = zmm2
    zmm0 = _mm256_mul_ps(zmm0, zmm2)
    zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    uint32_t var_6b0_1 = zmm1[0]
    float temp0_318 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float temp0_319 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_6c0_1 = zmm0[0]
    float temp0_323 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_324 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t rbx_11 = ((arg22 s>> 0x1f u>> 0x1d) + arg22) & 0xfffffff8
    double* rsi_56
    int32_t rdx_1
    
    if (rbx_11 s<= 0)
        rdx_1 = 0
        rdi_2 = arg20
        rsi_56 = arg21
        
        if (0 s< arg22)
        label_14005d485:
            float var_580_4[0x8] = arg5
            zmm0[0].o = zx.o(rdx_1)
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
            zmm1[0].o = zx.o(arg22)
            uint32_t temp0_989[0x8] = _mm256_broadcastd_epi32(zmm1[0])
            zmm2 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(3))
            arg5 = _mm256_cmpgt_epi32(temp0_989, zmm0)
            temp0_989[0].o = zx.o(0)
            float temp0_993[0x8]
            int32_t temp1_34
            temp0_993, temp1_34 = _mm256_i32gather_ps(temp0_989, *(arg18 + (zmm2[0].q << 2)), arg5)
            zmm1 = temp0_993
            zmm3 = temp1_34
            zmm0 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(0xc))
            zmm2 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(4))
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            float temp0_999[0x8]
            int32_t temp1_35
            temp0_999, temp1_35 = _mm256_i32gather_ps(zmm3, *(arg18 + zmm2[0].q), arg5)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm5 = __vpbroadcastd_ymmqq_memd(8)
            zmm0 = _mm256_add_epi32(zmm0, zmm5)
            zmm5[0].o = zx.o(0)
            float temp0_1003[0x8]
            int32_t temp1_36
            temp0_1003, temp1_36 = _mm256_i32gather_ps(zmm5, *(arg18 + zmm0[0].q), arg5)
            uint32_t var_220_2[0x8] = zmm1
            float temp0_1004[0x8] = _mm256_broadcast_ss(arg17[3])
            float var_740_7[0x8] = temp0_1004
            float var_720_7[0x8] = temp0_1004
            float var_700_13[0x8] = temp0_1004
            float var_6e0_4[0x8] = temp0_1004
            float temp0_1005[0x8] = _mm256_broadcast_ss(arg17[1])
            float temp0_1006[0x8] = _mm256_broadcast_ss(arg17[2])
            float temp0_1007[0x8] = _mm256_broadcast_ss(*arg17)
            float temp0_1008[0x8] = _mm256_mul_ps(temp0_1004, zmm2)
            float temp0_1009[0x8] = _mm256_mul_ps(temp0_999, temp0_1006)
            uint32_t temp0_1010[0x8] = _mm256_mul_ps(temp0_1003, temp0_1007)
            arg11 = _mm256_mul_ps(zmm1, temp0_1005)
            float temp0_1012[0x8] = _mm256_fmsub_ps(temp0_1009, temp0_1005, temp0_1003)
            arg10 = _mm256_fmsub_ps(temp0_1010, temp0_1006, zmm1)
            arg11 = _mm256_fmsub_ps(arg11, temp0_1007, temp0_999)
            zmm1 = _mm256_sub_ps(temp0_1008, temp0_1008)
            float temp0_1016[0x8] = _mm256_add_ps(temp0_1012, temp0_1012)
            float temp0_1017[0x8] = _mm256_add_ps(arg10, arg10)
            float temp0_1018[0x8] = _mm256_add_ps(arg11, arg11)
            float temp0_1019[0x8] = _mm256_add_ps(zmm1, zmm1)
            float var_640_7[0x8] = temp0_1016
            float var_620_7[0x8] = temp0_1017
            float var_600_7[0x8] = temp0_1018
            float var_5e0_4[0x8] = temp0_1019
            float temp0_1020[0x8] = _mm256_fmadd_ps(var_220_2, temp0_1004, temp0_1016)
            float temp0_1021[0x8] = _mm256_fmadd_ps(temp0_999, temp0_1004, temp0_1017)
            zmm1 = _mm256_fmadd_ps(temp0_1003, temp0_1004, temp0_1018)
            float var_180_2[0x8] = temp0_1020
            float var_160_2[0x8] = temp0_1021
            uint32_t var_140_2[0x8] = zmm1
            float var_120_2[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_1019, temp0_1004, zmm2)
            float temp0_1024[0x8] = _mm256_broadcast_ss(arg17[1])
            uint32_t temp0_1025[0x8] = _mm256_broadcast_ss(arg17[2])
            float temp0_1026[0x8] = _mm256_broadcast_ss(*arg17)
            arg11 = _mm256_mul_ps(temp0_1017, temp0_1025)
            float temp0_1028[0x8] = _mm256_mul_ps(temp0_1018, temp0_1026)
            float temp0_1029[0x8] = _mm256_mul_ps(temp0_1016, temp0_1024)
            arg11 = _mm256_fmsub_ps(arg11, temp0_1018, temp0_1024)
            float temp0_1031[0x8] = _mm256_fmsub_ps(temp0_1028, temp0_1016, temp0_1025)
            float temp0_1032[0x8] = _mm256_add_ps(temp0_1020, arg11)
            float temp0_1033[0x8] = _mm256_add_ps(temp0_1021, temp0_1031)
            float temp0_1035[0x8] = _mm256_add_ps(temp0_1032, _mm256_broadcast_ss(arg17[4]))
            float temp0_1036[0x8] = _mm256_broadcast_ss(arg17[5])
            arg11 = _mm256_broadcast_ss(arg17[6])
            float temp0_1038[0x8] = _mm256_broadcast_ss(var_6b0_1)
            arg6 = _mm256_cmp_ps(temp0_1038, temp0_1035, 1)
            uint32_t var_560_4[0x8] = arg5
            uint32_t temp0_1040[0x8] = _mm256_and_ps(arg6, arg5)
            temp0_1035[0].o = _mm256_extractf128_ps(temp0_1040[0].o, 1)
            temp0_1035[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1040[0].o, temp0_1035[0].o)
            temp0_1035[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1035[0].o, temp0_1026[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_1035[0].o) != 0)
                var_740_7 = _mm256_maskstore_ps(arg6, temp0_1038)
            
            float temp0_1046[0x8] = _mm256_fmsub_ps(temp0_1026, temp0_1017, temp0_1029)
            float temp0_1047[0x8] = _mm256_add_ps(temp0_1033, temp0_1036)
            zmm3 = _mm256_andnot_ps(arg6, var_560_4)
            
            if (_mm256_movemask_ps(zmm3) != 0)
                zmm3 = _mm256_xor_ps(arg6, _mm256_cmpeq_epi32(zmm3, zmm3))
                arg6 = _mm256_broadcast_ss(var_6c0_1)
                float temp0_1053[0x8] = _mm256_cmp_ps(temp0_1035, arg6, 1)
                arg7 = _mm256_and_ps(temp0_1053, zmm3)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg7, var_560_4)) != 0)
                    var_740_7 = _mm256_maskstore_ps(arg7, arg6)
                
                zmm3 = _mm256_andnot_ps(temp0_1053, zmm3)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, var_560_4)) != 0)
                    var_740_7 = _mm256_maskstore_ps(zmm3, temp0_1035)
            
            zmm1 = _mm256_add_ps(zmm1, temp0_1046)
            zmm3 = _mm256_broadcast_ss(temp0_318)
            float temp0_1064[0x8] = _mm256_cmp_ps(zmm3, temp0_1047, 1)
            zmm5 = _mm256_and_ps(temp0_1064, var_560_4)
            arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_1064[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                var_720_7 = _mm256_maskstore_ps(temp0_1064, zmm3)
            
            float temp0_1071[0x8] = _mm256_add_ps(zmm1, arg11)
            zmm1 = _mm256_andnot_ps(temp0_1064, var_560_4)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm0 = temp0_1064 ^ _mm256_cmpeq_epi32(zmm1, zmm1)
                float temp0_1075[0x8] = _mm256_broadcast_ss(temp0_323)
                zmm1 = _mm256_cmp_ps(temp0_1047, temp0_1075, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, var_560_4)) != 0)
                    var_720_7 = _mm256_maskstore_ps(zmm3, temp0_1075)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, var_560_4)) != 0)
                    var_720_7 = _mm256_maskstore_ps(zmm0, temp0_1047)
            
            zmm1 = _mm256_broadcast_ss(temp0_319)
            float temp0_1086[0x8] = _mm256_cmp_ps(zmm1, temp0_1071, 1)
            zmm2 = _mm256_and_ps(temp0_1086, var_560_4)
            zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_1086[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                var_700_13 = _mm256_maskstore_ps(temp0_1086, zmm1)
            
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(temp0_1086, var_560_4)) != 0)
                zmm0 = temp0_1086 ^ zmm2
                float temp0_1096[0x8] = _mm256_broadcast_ss(temp0_324)
                zmm1 = _mm256_cmp_ps(temp0_1071, temp0_1096, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, var_560_4)) != 0)
                    var_700_13 = _mm256_maskstore_ps(zmm3, temp0_1096)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, var_560_4)) != 0)
                    var_700_13 = _mm256_maskstore_ps(zmm0, temp0_1071)
            
            arg11 = var_720_7
            float temp0_1106[0x8] = _mm256_broadcast_ss(*arg1)
            float temp0_1107[0x8] = _mm256_broadcast_ss(*(arg1 + 4))
            float temp0_1108[0x8] = _mm256_sub_ps(arg11, temp0_1107)
            float temp0_1109[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(temp0_1108, temp0_1109)
            float temp0_1111[0x8] = _mm256_sub_ps(var_740_7, temp0_1106)
            float temp0_1112[0x8] = _mm256_broadcast_ss(arg1[1].d)
            zmm2 = _mm256_cvttps_epi32(zmm1)
            zmm1 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm2), temp0_1109, temp0_1107)
            temp0_1107[0].o = __vmovsd_xmmdq_memq(*arg3)
            float temp0_1117[0x8] = _mm256_broadcast_ss(2f)
            temp0_1117[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_1107[0].o, temp0_1117[0].o)
            temp0_1107[0].o = __vmovshdup_xmmdq_xmmdq(temp0_1117[0].o)
            zmm3 = _mm256_broadcastsd_pd(temp0_1107[0].o)
            float var_460_4[0x8] = zmm3
            float temp0_1121[0x8] = _mm256_add_ps(zmm3, zmm1)
            float temp0_1122[0x8] = _mm256_cmp_ps(temp0_1121, arg11, 1)
            zmm1 = _mm256_and_ps(temp0_1122, var_560_4)
            zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            float temp0_1126[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_1127[0x8] = _mm256_div_ps(temp0_1111, temp0_1126)
            float temp0_1128[0x8] = _mm256_sub_ps(var_700_13, temp0_1112)
            float temp0_1129[0x8] = _mm256_broadcast_ss(arg3[1].d)
            float temp0_1130[0x8] = _mm256_div_ps(temp0_1128, temp0_1129)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1127[0].o)
            char temp0_1132 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            arg8 = _mm256_cvttps_epi32(temp0_1127)
            zmm3 = _mm256_cvttps_epi32(temp0_1130)
            float temp0_1136[0x8] =
                _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg8), temp0_1126, temp0_1106)
            arg12 = var_560_4
            arg10 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm3), temp0_1129, temp0_1112)
            zmm1 = _mm256_broadcastss_ps(temp0_1117[0].o)
            float temp0_1140[0x8] = _mm256_add_ps(zmm1, temp0_1136)
            temp0_1136[0].o = _mm_permute_ps(temp0_1117[0].o, 0xea)
            arg9 = _mm256_broadcastsd_pd(temp0_1136[0].o)
            float temp0_1143[0x8] = _mm256_cmp_ps(temp0_1140, var_740_7, 1)
            arg7 = __vpaddd_ymmqq_ymmqq_memqq(arg8, data_142fc9420)
            arg13 = _mm256_blendv_ps(arg7, arg8, temp0_1143)
            float var_740_8[0x8] = arg13
            float temp0_1146[0x8] = _mm256_cmp_ps(temp0_1121, arg11, 5)
            
            if (temp0_1132 != 0)
                arg8 = zmm2
            
            arg10 = _mm256_add_ps(arg9, arg10)
            arg5 = _mm256_and_ps(arg12, temp0_1146)
            temp0_1136[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            temp0_1136[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_1136[0].o)
            temp0_1136[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_1136[0].o, temp0_1136[0].o)
            bool cond:2_1 = __vpmovmskb_gpr32d_xmmdq(temp0_1136[0].o) == 0
            uint32_t temp0_1153[0x8] = _mm256_cmpeq_epi32(arg11, arg11)
            
            if (not(cond:2_1))
                arg7 = _mm256_add_epi32(zmm2, temp0_1153)
            
            float temp0_1155[0x8] = _mm256_blendv_ps(arg7, arg8, temp0_1122)
            float var_720_8[0x8] = temp0_1155
            float temp0_1156[0x8] = _mm256_cmp_ps(arg10, var_700_13, 5)
            float temp0_1157[0x8] = _mm256_cmp_ps(arg10, var_700_13, 1)
            zmm0 = _mm256_and_ps(temp0_1157, arg12)
            arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                arg8 = zmm3
            
            zmm0 = _mm256_and_ps(arg12, temp0_1156)
            arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                arg7 = _mm256_add_epi32(zmm3, temp0_1153)
            
            float temp0_1169[0x8] = _mm256_blendv_ps(arg7, arg8, temp0_1157)
            float temp0_1171[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg13), temp0_1126, temp0_1106)
            float temp0_1173[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_1155), 
                temp0_1109, temp0_1107)
            float temp0_1175[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_1169), 
                temp0_1129, temp0_1112)
            zmm1 = _mm256_add_ps(zmm1, temp0_1171)
            float temp0_1177[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_1173, var_460_4)
            float temp0_1178[0x8] = _mm256_add_ps(arg9, temp0_1175)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_740_7, zmm1), temp0_1126)
            arg7 = arg11
            float temp0_1182[0x8] = _mm256_div_ps(_mm256_sub_ps(arg7, temp0_1177), temp0_1109)
            uint32_t var_640_8[0x8] = zmm1
            float var_620_8[0x8] = temp0_1182
            float var_600_8[0x8] = _mm256_div_ps(_mm256_sub_ps(var_700_13, temp0_1178), temp0_1129)
            zmm0 = _mm256_cmpeq_epi32(arg13, temp0_1153)
            zmm1 = zmm0 & arg12
            temp0_1182[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1182[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(0)
                var_740_8 = _mm256_maskstore_ps(zmm0, zmm1)
                var_640_8 = _mm256_maskstore_ps(zmm0, zmm1)
                arg13 = var_740_8
            
            int32_t rax_40 = *arg4
            zmm0[0].o = zx.o(rax_40 - 1)
            zmm0 = _mm256_cmpeq_epi32(arg13, _mm256_broadcastd_epi32(zmm0[0]))
            zmm1 = zmm0 & arg12
            temp0_1182[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_1182[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(rax_40 - 2)
                var_740_8 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                zmm1 = _mm256_broadcast_ss(1f)
                var_640_8 = _mm256_maskstore_ps(zmm0, zmm1)
            
            float temp0_1202[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_740_7, temp0_1035)
            temp0_1182[0].o = zx.o(0)
            zmm3 = var_720_8
            uint32_t temp0_1204[0x8] = _mm256_cmpeq_epi32(zmm3, _mm256_cmpeq_epi32(zmm1, zmm1))
            zmm5 = temp0_1204 & arg12
            var_740_7[0].o = _mm256_extracti128_si256(zmm5, 1)
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_740_7[0].o)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_1202[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                zmm3[0].o = zx.o(0)
                var_720_8 = _mm256_maskstore_ps(temp0_1204, zmm3)
                var_620_8 = _mm256_maskstore_ps(temp0_1204, zmm3)
                zmm3 = var_720_8
            
            zmm1 = _mm256_sub_ps(arg7, temp0_1047)
            float temp0_1212[0x8] = _mm256_fmadd_ps(temp0_1202, temp0_1202, temp0_1182)
            int32_t rdx_9 = arg4[1]
            temp0_1182[0].o = zx.o(rdx_9 - 1)
            zmm2 = _mm256_cmpeq_epi32(zmm3, _mm256_broadcastd_epi32(temp0_1182[0]))
            zmm3 = zmm2 & arg12
            zmm5[0].o = _mm256_extracti128_si256(zmm3, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_1212[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                zmm3[0].o = zx.o(rdx_9 - 2)
                var_720_8 = _mm256_maskstore_ps(zmm2, _mm256_broadcastd_epi32(zmm3[0]))
                var_620_8 = _mm256_maskstore_ps(zmm2, _mm256_broadcast_ss(1f))
            
            float temp0_1223[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_700_13, temp0_1071)
            zmm1 = _mm256_fmadd_ps(zmm1, zmm1, temp0_1212)
            arg6 = temp0_1169
            zmm0 = _mm256_cmpeq_epi32(arg6, _mm256_cmpeq_epi32(temp0_1212, temp0_1212))
            zmm2 = zmm0 & arg12
            zmm5[0].o = _mm256_extracti128_si256(zmm2, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm2[0].o = zx.o(0)
                float temp0_1231[0x8] = _mm256_maskstore_ps(zmm0, zmm2)
                var_600_8 = _mm256_maskstore_ps(zmm0, zmm2)
                arg6 = temp0_1231
            
            float temp0_1233[0x8] = _mm256_fmadd_ps(temp0_1223, temp0_1223, zmm1)
            int32_t rdx_12 = arg4[2]
            zmm0[0].o = zx.o(rdx_12 - 1)
            zmm0 = _mm256_cmpeq_epi32(arg6, _mm256_broadcastd_epi32(zmm0[0]))
            zmm1 = zmm0 & arg12
            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(rdx_12 - 2)
                float temp0_1241[0x8] = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                var_600_8 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                arg6 = temp0_1241
            
            uint32_t temp0_1244[0x8] = __vpbroadcastd_ymmqq_memd(*(arg16 + 4))
            arg12 = _mm256_mullo_epi32(temp0_1244, var_740_8)
            zmm0 = _mm256_add_epi32(arg12, var_720_8)
            uint32_t temp0_1247[0x8] = __vpbroadcastd_ymmqq_memd(*(arg16 + 8))
            arg7 = _mm256_mullo_epi32(zmm0, temp0_1247)
            zmm0 = _mm256_add_epi32(arg7, arg6)
            int64_t rax_43 = *(arg16 + 0x10)
            zmm5 = _mm256_slli_epi32(zmm0, 2)
            arg9 = var_560_4
            zmm0[0].o = zx.o(0)
            float temp0_1251[0x8]
            int32_t temp1_37
            temp0_1251, temp1_37 = _mm256_i32gather_ps(zmm0, *(rax_43 + zmm5[0].q), arg9)
            uint32_t temp0_1252[0x8] = _mm256_cmpeq_epi32(temp0_1153, temp0_1153)
            arg13 = _mm256_mullo_epi32(temp0_1244, _mm256_sub_epi32(var_740_8, temp0_1252))
            zmm3 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, var_720_8), temp0_1247)
            uint32_t temp0_1258[0x8] = _mm256_slli_epi32(_mm256_add_epi32(zmm3, arg6), 2)
            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            float temp0_1260[0x8]
            int32_t temp1_38
            temp0_1260, temp1_38 = _mm256_i32gather_ps(zmm5, *(rax_43 + temp0_1258[0].q), arg9)
            zmm2 = var_640_8
            zmm1 = var_620_8
            arg14 = _mm256_sub_epi32(var_720_8, temp0_1252)
            arg12 = _mm256_mullo_epi32(_mm256_add_epi32(arg12, arg14), temp0_1247)
            arg8 = _mm256_add_epi32(arg12, arg6)
            arg15 = _mm256_slli_epi32(arg8, 2)
            arg8[0].o = zx.o(0)
            float temp0_1266[0x8]
            int32_t temp1_39
            temp0_1266, temp1_39 = _mm256_i32gather_ps(arg8, *(rax_43 + arg15[0].q), arg9)
            arg8 = temp0_1266
            arg5 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, arg14), temp0_1247)
            uint32_t temp0_1270[0x8] = _mm256_slli_epi32(_mm256_add_epi32(arg5, arg6), 2)
            arg14[0].o = zx.o(0)
            float temp0_1271[0x8]
            int32_t temp1_40
            temp0_1271, temp1_40 = _mm256_i32gather_ps(arg14, *(rax_43 + temp0_1270[0].q), arg9)
            arg14 = temp0_1271
            arg13 = temp1_40
            arg6 = _mm256_sub_epi32(arg6, temp0_1252)
            arg7 = _mm256_slli_epi32(_mm256_add_epi32(arg7, arg6), 2)
            temp0_1252[0].o = zx.o(0)
            float temp0_1275[0x8]
            int32_t temp1_41
            temp0_1275, temp1_41 = _mm256_i32gather_ps(temp0_1252, *(rax_43 + arg7[0].q), arg9)
            arg11 = temp0_1275
            arg10 = temp1_41
            arg7 = _mm256_slli_epi32(_mm256_add_epi32(zmm3, arg6), 2)
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            float temp0_1279[0x8]
            int32_t temp1_42
            temp0_1279, temp1_42 = _mm256_i32gather_ps(arg10, *(rax_43 + arg7[0].q), arg9)
            arg10 = temp0_1279
            arg7 = _mm256_slli_epi32(_mm256_add_epi32(arg12, arg6), 2)
            arg12[0].o = zx.o(0)
            float temp0_1282[0x8]
            int32_t temp1_43
            temp0_1282, temp1_43 = _mm256_i32gather_ps(arg12, *(rax_43 + arg7[0].q), arg9)
            arg12 = temp0_1282
            arg5 = _mm256_slli_epi32(_mm256_add_epi32(arg5, arg6), 2)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_1286[0x8]
            int32_t temp1_44
            temp0_1286, temp1_44 = _mm256_i32gather_ps(arg7, *(rax_43 + arg5[0].q), arg9)
            arg7 = temp0_1286
            float temp0_1288[0x8] =
                _mm256_fmadd_ps(_mm256_sub_ps(temp0_1260, temp0_1251), zmm2, temp0_1251)
            float temp0_1290[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg14, arg8), zmm2, arg8)
            float temp0_1292[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg10, arg11), zmm2, arg11)
            arg6 = _mm256_fmadd_ps(_mm256_sub_ps(arg7, arg12), zmm2, arg12)
            zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_1290, temp0_1288), zmm1, temp0_1288)
            zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(arg6, temp0_1292), zmm1, temp0_1292), 
                    zmm2), 
                zmm2, var_600_8)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm3 = temp0_1233
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm3, zmm1, 0xc), arg9)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                float temp0_1308[0x8] = _mm256_rsqrt_ps(zmm3)
                float temp0_1309[0x8] = _mm256_mul_ps(zmm3, temp0_1308)
                zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_1308, 
                        _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_1308, temp0_1309)), 
                    var_440_1)
                zmm3 = _mm256_rcp_ps(zmm2)
                float temp0_1316[0x8] =
                    _mm256_fmadd_ps(_mm256_fnmadd_ps(temp0_1117, zmm3, zmm2), zmm3, zmm0)
                zmm1 = _mm256_cvtepi16_epi32(zmm1[0].o)
                zmm0 = _mm256_blendv_ps(zmm0, temp0_1316, zmm1)
            
            arg5 = var_580_4
            zmm1[0].o = arg19
            zmm0 = _mm256_sub_ps(zmm0, _mm256_broadcastss_ps(zmm1[0].o))
            zmm1 =
                _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(-9.99999975e-05f), 1), arg9)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            result = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
            
            if (result.b != 0)
                zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_1035, zmm0, var_3e0_1)
                float temp0_1329[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_1047, zmm0, var_3c0_1)
                arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_1071, zmm0, var_3a0_1)
                var_3e0_1 = _mm256_maskstore_ps(zmm1, zmm3)
                var_3c0_1 = _mm256_maskstore_ps(zmm1, temp0_1329)
                var_3a0_1 = _mm256_maskstore_ps(zmm1, arg6)
                zmm0 = _mm256_add_ps(arg5, zmm0)
                arg5 = _mm256_blendv_ps(arg5, zmm0, _mm256_cvtepi16_epi32(zmm2[0].o))
    else
        float temp0_325[0x8] = _mm256_broadcast_ss(arg17[3])
        temp0_325[0].o = *arg17
        zmm1[0].o = arg17[1]
        zmm2[0].o = zx.o(arg17[2])
        result = &var_720
        float temp0_326[0x8] = _mm256_broadcast_ss(*arg1)
        arg14 = _mm256_broadcast_ss(*(arg1 + 4))
        float temp0_328[0x8] = _mm256_broadcast_ss(arg1[1].d)
        float temp0_329[0x8] = _mm256_broadcast_ss(*arg3)
        float temp0_330[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
        float temp0_331[0x8] = _mm256_broadcast_ss(arg3[1].d)
        temp0_331[0].o = __vmovsd_xmmdq_memq(*arg3)
        float temp0_333[0x8] = _mm256_broadcast_ss(2f)
        temp0_331[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_331[0].o, temp0_333[0].o)
        float temp0_335[0x8] = _mm256_broadcastss_ps(temp0_331[0].o)
        zmm5[0].o = __vmovshdup_xmmdq_xmmdq(temp0_331[0].o)
        arg5 = _mm256_broadcastsd_pd(zmm5[0].o)
        float var_520_2[0x8] = arg5
        temp0_331[0].o = _mm_permute_ps(temp0_331[0].o, 0xea)
        float var_540_2[0x8] = _mm256_broadcastsd_pd(temp0_331[0].o)
        float temp0_340[0x8] = _mm256_broadcast_ss(*(arg16 + 4))
        zmm3 = _mm256_broadcast_ss(*(arg16 + 8))
        float var_260_2[0x8] = zmm3
        int64_t r10_6 = *(arg16 + 0x10)
        rdx_1 = 0
        uint32_t var_280_2[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
        uint32_t temp0_343[0x8] = _mm256_broadcastd_epi32(zmm2[0])
        arg12 = _mm256_broadcastss_ps(temp0_325[0].o)
        temp0_325[0].o = arg19
        float temp0_345[0x8] = _mm256_broadcastss_ps(temp0_325[0].o)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int32_t var_2e0_2[0x4] = _mm256_broadcast_ss(1.68155816e-44f)[0].o
        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
        zmm0 = _mm256_broadcast_ss(-9.99999975e-05f)
        float var_300_2[0x8] = zmm0
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        float var_400_2[0x8] = arg14
        float var_420_2[0x8] = arg12
        
        do
            float var_580_2[0x8] = arg5
            zmm0[0].o = zx.o(rdx_1)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm0[0].o, var_2e0_2)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93c0)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            float temp0_356[0x8]
            int32_t temp1_12
            temp0_356, temp1_12 = _mm256_i32gather_ps(zmm3, *(arg18 + zmm1[0].q), zmm2)
            zmm2 = temp1_12
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93e0)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            float temp0_360[0x8]
            int32_t temp1_13
            temp0_360, temp1_13 = _mm256_i32gather_ps(zmm5, *(arg18 + zmm1[0].q), zmm2)
            zmm2 = temp1_13
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc9400)
            uint32_t temp0_362[0x8] = _mm256_cmpeq_epi32(zmm1, zmm1)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            float temp0_364[0x8]
            int32_t temp1_14
            temp0_364, temp1_14 = _mm256_i32gather_ps(zmm2, *(arg18 + zmm0[0].q), temp0_362)
            float var_5e0_2[0x8] = arg6
            float var_740_3[0x8] = temp0_325
            float var_720_3[0x8] = temp0_325
            float var_700_5[0x8] = temp0_325
            float var_6e0_2[0x8] = temp0_325
            float temp0_365[0x8] = _mm256_mul_ps(temp0_360, temp0_343)
            zmm1 = _mm256_mul_ps(temp0_364, arg12)
            float temp0_367[0x8] = _mm256_mul_ps(temp0_356, var_280_2)
            float temp0_368[0x8] = _mm256_fmsub_ps(temp0_364, var_280_2, temp0_365)
            float temp0_369[0x8] = _mm256_fmsub_ps(temp0_356, temp0_343, zmm1)
            float temp0_370[0x8] = _mm256_fmsub_ps(temp0_360, arg12, temp0_367)
            zmm1 = _mm256_add_ps(temp0_368, temp0_368)
            float temp0_372[0x8] = _mm256_add_ps(temp0_369, temp0_369)
            float temp0_373[0x8] = _mm256_add_ps(temp0_370, temp0_370)
            float temp0_374[0x8] = _mm256_fmadd_ps(temp0_356, temp0_325, zmm1)
            float temp0_375[0x8] = _mm256_fmadd_ps(temp0_360, temp0_325, temp0_372)
            float temp0_376[0x8] = _mm256_fmadd_ps(temp0_364, temp0_325, temp0_373)
            float temp0_377[0x8] = _mm256_mul_ps(temp0_372, temp0_343)
            float temp0_378[0x8] = _mm256_mul_ps(temp0_373, arg12)
            float temp0_379[0x8] = _mm256_mul_ps(zmm1, var_280_2)
            float temp0_381[0x8] =
                _mm256_add_ps(temp0_374, _mm256_fmsub_ps(temp0_373, var_280_2, temp0_377))
            zmm1 = _mm256_add_ps(temp0_375, _mm256_fmsub_ps(zmm1, temp0_343, temp0_378))
            float temp0_385[0x8] = _mm256_add_ps(temp0_381, _mm256_broadcast_ss(arg17[4]))
            float temp0_386[0x8] = _mm256_broadcast_ss(arg17[5])
            float temp0_387[0x8] = _mm256_broadcast_ss(arg17[6])
            float temp0_388[0x8] = _mm256_broadcast_ss(var_6b0_1)
            float temp0_389[0x8] = _mm256_cmp_ps(temp0_388, temp0_385, 1)
            
            if (_mm256_movemask_ps(temp0_389) != 0)
                var_740_3 = _mm256_maskstore_ps(temp0_389, temp0_388)
            
            float temp0_392[0x8] = _mm256_fmsub_ps(temp0_372, arg12, temp0_379)
            float temp0_393[0x8] = _mm256_add_ps(zmm1, temp0_386)
            zmm0 = _mm256_xor_ps(temp0_389, arg13)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_396[0x8] = _mm256_broadcast_ss(var_6c0_1)
                zmm1 = _mm256_cmp_ps(temp0_385, temp0_396, 1)
                arg7 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(arg7) != 0)
                    var_740_3 = _mm256_maskstore_ps(arg7, temp0_396)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_740_3 = _mm256_maskstore_ps(zmm0, temp0_385)
            
            float temp0_404[0x8] = _mm256_add_ps(temp0_376, temp0_392)
            float temp0_405[0x8] = _mm256_broadcast_ss(temp0_318)
            zmm1 = _mm256_cmp_ps(temp0_405, temp0_393, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_720_3 = _mm256_maskstore_ps(zmm1, temp0_405)
            
            float temp0_409[0x8] = _mm256_add_ps(temp0_404, temp0_387)
            zmm0 = _mm256_xor_ps(zmm1, arg13)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_412[0x8] = _mm256_broadcast_ss(temp0_323)
                zmm1 = _mm256_cmp_ps(temp0_393, temp0_412, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_720_3 = _mm256_maskstore_ps(zmm3, temp0_412)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_720_3 = _mm256_maskstore_ps(zmm0, temp0_393)
            
            zmm1 = _mm256_broadcast_ss(temp0_319)
            float temp0_421[0x8] = _mm256_cmp_ps(zmm1, temp0_409, 1)
            
            if (_mm256_movemask_ps(temp0_421) != 0)
                var_700_5 = _mm256_maskstore_ps(temp0_421, zmm1)
            
            arg10 = arg14
            zmm0 = _mm256_xor_ps(temp0_421, arg13)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_426[0x8] = _mm256_broadcast_ss(temp0_324)
                zmm1 = _mm256_cmp_ps(temp0_409, temp0_426, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_700_5 = _mm256_maskstore_ps(zmm3, temp0_426)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_700_5 = _mm256_maskstore_ps(zmm0, temp0_409)
            
            float temp0_435[0x8] = _mm256_div_ps(_mm256_sub_ps(var_740_3, temp0_326), temp0_329)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_720_3, arg10), temp0_330)
            float temp0_439[0x8] = _mm256_div_ps(_mm256_sub_ps(var_700_5, temp0_328), temp0_331)
            arg8 = _mm256_cvttps_epi32(temp0_435)
            zmm0 = _mm256_cvttps_epi32(zmm1)
            arg15 = _mm256_cvttps_epi32(temp0_439)
            zmm1 = _mm256_cvtepi32_ps(arg8)
            arg11 = _mm256_cvtepi32_ps(zmm0)
            float temp0_445[0x8] = _mm256_cvtepi32_ps(arg15)
            zmm1 = _mm256_fmadd_ps(zmm1, temp0_329, temp0_326)
            arg11 = _mm256_fmadd_ps(arg11, temp0_330, arg10)
            float temp0_448[0x8] = _mm256_fmadd_ps(temp0_445, temp0_331, temp0_328)
            zmm1 = _mm256_cmp_ps(__vaddps_ymmqq_ymmqq_memqq(zmm1, temp0_335), var_740_3, 1)
            arg13 = _mm256_cmpeq_epi32(temp0_331, temp0_331)
            arg9 = _mm256_add_epi32(arg8, arg13)
            zmm2 = _mm256_blendv_ps(arg9, arg8, zmm1)
            float var_740_4[0x8] = zmm2
            arg11 = __vaddps_ymmqq_ymmqq_memqq(arg11, var_520_2)
            zmm1 = _mm256_cmp_ps(arg11, var_720_3, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                arg8 = zmm0
            
            float temp0_457[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_448, var_540_2)
            arg11 = _mm256_cmp_ps(arg11, var_720_3, 5)
            temp0_330[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            temp0_328[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, temp0_330[0].o)
            temp0_328[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_328[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_328[0].o) != 0)
                arg9 = _mm256_add_epi32(zmm0, arg13)
            
            float temp0_464[0x8] = _mm256_blendv_ps(arg9, arg8, zmm1)
            float var_720_4[0x8] = temp0_464
            zmm1 = _mm256_cmp_ps(temp0_457, var_700_5, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                arg8 = arg15
            
            float temp0_467[0x8] = _mm256_cmp_ps(temp0_457, var_700_5, 5)
            temp0_328[0].o = _mm256_extractf128_ps(temp0_467[0].o, 1)
            temp0_467[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_467[0].o, temp0_328[0].o)
            temp0_467[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_467[0].o, temp0_464[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_467[0].o) != 0)
                arg9 = _mm256_add_epi32(arg15, arg13)
            
            float temp0_477[0x8] = _mm256_div_ps(
                _mm256_sub_ps(var_740_3, 
                    __vaddps_ymmqq_ymmqq_memqq(
                        __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), temp0_329, 
                            temp0_326), 
                        temp0_335)), 
                temp0_329)
            zmm1 = _mm256_blendv_ps(arg9, arg8, zmm1)
            float var_640_4[0x8] = temp0_477
            uint32_t var_700_6[0x8] = zmm1
            float temp0_479[0x8] = _mm256_cvtepi32_ps(temp0_464)
            zmm1 = _mm256_cvtepi32_ps(zmm1)
            float temp0_481[0x8] = _mm256_fmadd_ps(temp0_479, temp0_330, arg10)
            zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm1, temp0_331, temp0_328)
            float temp0_483[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_481, var_520_2)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_540_2)
            float temp0_486[0x8] = _mm256_div_ps(_mm256_sub_ps(var_720_3, temp0_483), temp0_330)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_700_5, zmm1), temp0_331)
            float var_620_4[0x8] = temp0_486
            uint32_t var_600_4[0x8] = zmm1
            zmm0 = _mm256_cmpeq_epi32(zmm2, arg13)
            bool cond:4_1 = _mm256_movemask_ps(zmm0) == 0
            temp0_331[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_331[0].o, temp0_331[0].o)
            
            if (not(cond:4_1))
                var_740_4 = _mm256_maskstore_ps(zmm0, temp0_331)
                var_640_4 = _mm256_maskstore_ps(zmm0, temp0_331)
                zmm2 = var_740_4
            
            int32_t rsi_46 = *arg4
            zmm0[0].o = zx.o(rsi_46 - 1)
            zmm0 = _mm256_cmpeq_epi32(zmm2, _mm256_broadcastd_epi32(zmm0[0]))
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rsi_46 - 2)
                var_740_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                var_640_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
            
            zmm1 = var_720_4
            zmm0 = _mm256_cmpeq_epi32(zmm1, arg13)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_720_4 = _mm256_maskstore_ps(zmm0, temp0_331)
                var_620_4 = _mm256_maskstore_ps(zmm0, temp0_331)
                zmm1 = var_720_4
            
            float temp0_505[0x8] = _mm256_sub_ps(var_740_3, temp0_385)
            int32_t rsi_49 = arg4[1]
            temp0_385[0].o = zx.o(rsi_49 - 1)
            zmm2 = _mm256_broadcastd_epi32(temp0_385[0])
            uint32_t temp0_507[0x8] = _mm256_cmpeq_epi32(zmm1, zmm2)
            
            if (_mm256_movemask_ps(temp0_507) != 0)
                zmm2[0].o = zx.o(rsi_49 - 2)
                var_720_4 = _mm256_maskstore_ps(temp0_507, _mm256_broadcastd_epi32(zmm2[0]))
                var_620_4 = _mm256_maskstore_ps(temp0_507, _mm256_broadcast_ss(1f))
            
            zmm1 = __vsubps_ymmqq_ymmqq_memqq(var_700_5, temp0_409)
            float temp0_514[0x8] = _mm256_sub_ps(var_720_3, temp0_393)
            float temp0_515[0x8] = _mm256_fmadd_ps(temp0_505, temp0_505, temp0_331)
            zmm2 = var_700_6
            zmm3 = _mm256_cmpeq_epi32(zmm2, arg13)
            
            if (_mm256_movemask_ps(zmm3) != 0)
                float temp0_518[0x8] = _mm256_maskstore_ps(zmm3, temp0_331)
                var_600_4 = _mm256_maskstore_ps(zmm3, temp0_331)
                zmm2 = temp0_518
            
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            uint32_t var_460_2[0x8] = zmm1
            zmm5 = _mm256_fmadd_ps(temp0_514, temp0_514, temp0_515)
            int32_t rsi_52 = arg4[2]
            temp0_515[0].o = zx.o(rsi_52 - 1)
            zmm0 = _mm256_cmpeq_epi32(zmm2, _mm256_broadcastd_epi32(temp0_515[0]))
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rsi_52 - 2)
                float temp0_526[0x8] = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                var_600_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                zmm2 = temp0_526
            
            zmm1 = var_740_4
            arg11 = _mm256_mullo_epi32(temp0_340, zmm1)
            arg15 = var_260_2
            zmm0 = _mm256_mullo_epi32(_mm256_add_epi32(arg11, var_720_4), arg15)
            zmm3 = _mm256_slli_epi32(_mm256_add_epi32(zmm0, zmm2), 2)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            var_740_3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_740_3[0].o, var_740_3[0].o)
            float temp0_536[0x8]
            int32_t temp1_15
            temp0_536, temp1_15 = _mm256_i32gather_ps(var_740_3, *(r10_6 + zmm3[0].q), arg8)
            arg7 = temp0_536
            arg8 = temp1_15
            arg12 = _mm256_mullo_epi32(temp0_340, _mm256_sub_epi32(zmm1, arg13))
            zmm3 = _mm256_mullo_epi32(_mm256_add_epi32(arg12, var_720_4), arg15)
            uint32_t temp0_542[0x8] = _mm256_slli_epi32(_mm256_add_epi32(zmm3, zmm2), 2)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            float temp0_545[0x8]
            int32_t temp1_16
            temp0_545, temp1_16 = _mm256_i32gather_ps(arg10, *(r10_6 + temp0_542[0].q), arg8)
            arg10 = temp0_545
            arg9 = var_640_4
            arg8 = var_620_4
            arg5 = _mm256_sub_epi32(var_720_4, arg13)
            arg11 = _mm256_mullo_epi32(_mm256_add_epi32(arg11, arg5), arg15)
            zmm1 = _mm256_add_epi32(arg11, zmm2)
            arg6 = _mm256_cmpeq_epi32(var_700_5, var_700_5)
            arg13 = _mm256_slli_epi32(zmm1, 2)
            arg14 = _mm256_cmpeq_epi32(temp0_326, temp0_326)
            zmm1[0].o = zx.o(0)
            float temp0_553[0x8]
            int32_t temp1_17
            temp0_553, temp1_17 = _mm256_i32gather_ps(zmm1, *(r10_6 + arg13[0].q), arg14)
            zmm1 = temp0_553
            arg14 = temp1_17
            arg5 = _mm256_mullo_epi32(_mm256_add_epi32(arg12, arg5), arg15)
            arg12 = _mm256_slli_epi32(_mm256_add_epi32(arg5, zmm2), 2)
            arg13 = _mm256_cmpeq_epi32(arg13, arg13)
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            float temp0_560[0x8]
            int32_t temp1_18
            temp0_560, temp1_18 = _mm256_i32gather_ps(arg14, *(r10_6 + arg12[0].q), arg13)
            arg13 = temp1_18
            zmm2 = _mm256_sub_epi32(zmm2, arg6)
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm0, zmm2), 2)
            arg12 = _mm256_cmpeq_epi32(arg12, arg12)
            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            float temp0_566[0x8]
            int32_t temp1_19
            temp0_566, temp1_19 = _mm256_i32gather_ps(arg13, *(r10_6 + zmm0[0].q), arg12)
            arg12 = temp1_19
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm3, zmm2), 2)
            zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            float temp0_571[0x8]
            int32_t temp1_20
            temp0_571, temp1_20 = _mm256_i32gather_ps(arg12, *(r10_6 + zmm0[0].q), zmm3)
            zmm3 = temp1_20
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(arg11, zmm2), 2)
            zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
            arg11[0].o = zx.o(0)
            float temp0_575[0x8]
            int32_t temp1_21
            temp0_575, temp1_21 = _mm256_i32gather_ps(arg11, *(r10_6 + zmm0[0].q), zmm3)
            arg11 = temp0_575
            zmm3 = temp1_21
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(arg5, zmm2), 2)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            float temp0_580[0x8]
            int32_t temp1_22
            temp0_580, temp1_22 = _mm256_i32gather_ps(zmm3, *(r10_6 + zmm0[0].q), zmm2)
            float temp0_582[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg10, arg7), arg9, arg7)
            float temp0_584[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(temp0_560, zmm1), arg9, zmm1)
            zmm1 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_571, temp0_566), arg9, temp0_566)
            float temp0_588[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(temp0_580, arg11), arg9, arg11)
            float temp0_590[0x8] =
                _mm256_fmadd_ps(_mm256_sub_ps(temp0_584, temp0_582), arg8, temp0_582)
            zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(temp0_588, zmm1), arg8, zmm1), 
                    temp0_590), 
                temp0_590, var_600_4)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_460_2)
            arg6[0].o = zx.o(0)
            zmm1 = _mm256_cmp_ps(zmm2, arg6, 0xc)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                float temp0_598[0x8] = _mm256_rsqrt_ps(zmm2)
                float temp0_599[0x8] = _mm256_mul_ps(zmm2, temp0_598)
                zmm5 = _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_598, temp0_599)
                float temp0_603[0x8] =
                    __vmulps_ymmqq_ymmqq_memqq(_mm256_mul_ps(temp0_598, zmm5), var_440_1)
                float temp0_604[0x8] = _mm256_rcp_ps(temp0_603)
                zmm2 = _mm256_fmadd_ps(
                    __vfnmadd213ps_ymmqq_ymmqq_memqq(temp0_603, temp0_604, temp0_333), temp0_604, 
                    zmm0)
                zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
            
            arg5 = var_580_2
            arg14 = var_400_2
            arg12 = var_420_2
            arg13 = _mm256_cmpeq_epi32(temp0_566, temp0_566)
            zmm3 = temp0_393
            zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm0, temp0_345)
            zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, var_300_2, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_385, zmm0, var_3e0_1)
                zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, zmm0, var_3c0_1)
                zmm5 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_409, zmm0, var_3a0_1)
                var_3e0_1 = _mm256_maskstore_ps(zmm1, zmm2)
                var_3c0_1 = _mm256_maskstore_ps(zmm1, zmm3)
                var_3a0_1 = _mm256_maskstore_ps(zmm1, zmm5)
                zmm0 = _mm256_add_ps(arg5, zmm0)
                arg5 = _mm256_blendv_ps(arg5, zmm0, zmm1)
            
            rdx_1 += 8
        while (rdx_1 s< rbx_11)
        
        rdi_2 = arg20
        rsi_56 = arg21
        
        if (rdx_1 s< arg22)
            goto label_14005d485
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm0 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_1a0_1)
    zmm1 = zmm0 & not.32(var_3e0_1)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    zmm2 = zmm0 & not.32(var_3c0_1)
    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    float temp0_1342[0x8] = _mm256_hadd_ps(zmm2, zmm2)
    zmm1[0].o = zmm1[0].o f+ zmm3[0]
    float temp0_1343[0x8] = _mm256_hadd_ps(temp0_1342, temp0_1342)
    zmm3[0].o = _mm256_extractf128_ps(temp0_1343[0].o, 1)
    temp0_1343[0].o = temp0_1343[0].o f+ zmm3[0]
    zmm3 = zmm0 & not.32(var_3a0_1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_1343[0].o, 0x10)
    float temp0_1346[0x8] = _mm256_hadd_ps(zmm3, zmm3)
    float temp0_1347[0x8] = _mm256_hadd_ps(temp0_1346, temp0_1346)
    zmm3[0].o = _mm256_extractf128_ps(temp0_1347[0].o, 1)
    temp0_1347[0].o = temp0_1347[0].o f+ zmm3[0]
    zmm3[0].o = __vmovsd_xmmdq_memq(*rsi_56)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, rsi_56[1].d, 0x20)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_1347[0].o, 0x20)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    *rsi_56 = zmm1[0]
    *(rsi_56 + 4) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    rsi_56[1].d = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm0 &= not.32(arg5)
    zmm0 = _mm256_hadd_ps(zmm0, zmm0)
else
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    float var_340_1[0x8] = arg5
    float var_360_1[0x8] = arg5
    float var_380_1[0x8] = arg5
    zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
    zmm2 = _mm256_broadcast_ss(0.5f)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
    float var_440[0x8] = zmm2
    zmm0 = _mm256_mul_ps(zmm0, zmm2)
    zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    uint32_t var_690_1 = zmm1[0]
    float temp0_9 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    float temp0_10 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_6a0_1 = zmm0[0]
    float temp0_14 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_15 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t r10_5 = ((arg22 s>> 0x1f u>> 0x1d) + arg22) & 0xfffffff8
    double* rsi_28
    int32_t rdx
    
    if (r10_5 s<= 0)
        rdx = 0
        rdi_2 = arg20
        rsi_28 = arg21
        
        if (0 s< arg22)
        label_14005c922:
            float var_580_3[0x8] = arg5
            zmm0[0].o = zx.o(rdx)
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
            zmm1[0].o = zx.o(arg22)
            uint32_t temp0_622[0x8] = _mm256_broadcastd_epi32(zmm1[0])
            zmm2 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(3))
            zmm3 = _mm256_cmpgt_epi32(temp0_622, zmm0)
            temp0_622[0].o = zx.o(0)
            float temp0_626[0x8]
            int32_t temp1_23
            temp0_626, temp1_23 = _mm256_i32gather_ps(temp0_622, *(arg18 + (zmm2[0].q << 2)), zmm3)
            zmm1 = temp0_626
            arg5 = temp1_23
            zmm0 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(0xc))
            zmm2 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(4))
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_632[0x8]
            int32_t temp1_24
            temp0_632, temp1_24 = _mm256_i32gather_ps(arg5, *(arg18 + zmm2[0].q), zmm3)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm5 = __vpbroadcastd_ymmqq_memd(8)
            zmm0 = _mm256_add_epi32(zmm0, zmm5)
            zmm5[0].o = zx.o(0)
            float temp0_636[0x8]
            int32_t temp1_25
            temp0_636, temp1_25 = _mm256_i32gather_ps(zmm5, *(arg18 + zmm0[0].q), zmm3)
            uint32_t var_220_1[0x8] = zmm1
            float temp0_637[0x8] = _mm256_broadcast_ss(arg17[3])
            float var_740_5[0x8] = temp0_637
            float var_720_5[0x8] = temp0_637
            float var_700_9[0x8] = temp0_637
            float var_6e0_3[0x8] = temp0_637
            float temp0_638[0x8] = _mm256_broadcast_ss(arg17[1])
            float temp0_639[0x8] = _mm256_broadcast_ss(arg17[2])
            float temp0_640[0x8] = _mm256_broadcast_ss(*arg17)
            float temp0_641[0x8] = _mm256_mul_ps(temp0_637, zmm2)
            float temp0_642[0x8] = _mm256_mul_ps(temp0_632, temp0_639)
            arg10 = _mm256_mul_ps(temp0_636, temp0_640)
            arg11 = _mm256_mul_ps(zmm1, temp0_638)
            float temp0_645[0x8] = _mm256_fmsub_ps(temp0_642, temp0_638, temp0_636)
            arg10 = _mm256_fmsub_ps(arg10, temp0_639, zmm1)
            arg11 = _mm256_fmsub_ps(arg11, temp0_640, temp0_632)
            zmm1 = _mm256_sub_ps(temp0_641, temp0_641)
            float temp0_649[0x8] = _mm256_add_ps(temp0_645, temp0_645)
            float temp0_650[0x8] = _mm256_add_ps(arg10, arg10)
            float temp0_651[0x8] = _mm256_add_ps(arg11, arg11)
            float temp0_652[0x8] = _mm256_add_ps(zmm1, zmm1)
            float var_640_5[0x8] = temp0_649
            float var_620_5[0x8] = temp0_650
            float var_600_5[0x8] = temp0_651
            float var_5e0_3[0x8] = temp0_652
            float temp0_653[0x8] = _mm256_fmadd_ps(var_220_1, temp0_637, temp0_649)
            float temp0_654[0x8] = _mm256_fmadd_ps(temp0_632, temp0_637, temp0_650)
            zmm1 = _mm256_fmadd_ps(temp0_636, temp0_637, temp0_651)
            float var_180_1[0x8] = temp0_653
            float var_160_1[0x8] = temp0_654
            uint32_t var_140_1[0x8] = zmm1
            float var_120_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_652, temp0_637, zmm2)
            float temp0_657[0x8] = _mm256_broadcast_ss(arg17[1])
            arg10 = _mm256_broadcast_ss(arg17[2])
            float temp0_659[0x8] = _mm256_broadcast_ss(*arg17)
            arg11 = _mm256_mul_ps(temp0_650, arg10)
            float temp0_661[0x8] = _mm256_mul_ps(temp0_651, temp0_659)
            float temp0_662[0x8] = _mm256_mul_ps(temp0_649, temp0_657)
            arg11 = _mm256_fmsub_ps(arg11, temp0_651, temp0_657)
            float temp0_664[0x8] = _mm256_fmsub_ps(temp0_661, temp0_649, arg10)
            float temp0_665[0x8] = _mm256_add_ps(temp0_653, arg11)
            float temp0_666[0x8] = _mm256_add_ps(temp0_654, temp0_664)
            float temp0_668[0x8] = _mm256_add_ps(temp0_665, _mm256_broadcast_ss(arg17[4]))
            float temp0_669[0x8] = _mm256_broadcast_ss(arg17[5])
            arg11 = _mm256_broadcast_ss(arg17[6])
            float temp0_671[0x8] = _mm256_broadcast_ss(var_690_1)
            arg6 = _mm256_cmp_ps(temp0_671, temp0_668, 1)
            float var_560_3[0x8] = zmm3
            uint32_t temp0_673[0x8] = _mm256_and_ps(arg6, zmm3)
            temp0_668[0].o = _mm256_extractf128_ps(temp0_673[0].o, 1)
            temp0_668[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_673[0].o, temp0_668[0].o)
            temp0_668[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_668[0].o, temp0_659[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_668[0].o) != 0)
                var_740_5 = _mm256_maskstore_ps(arg6, temp0_671)
            
            float temp0_679[0x8] = _mm256_fmsub_ps(temp0_659, temp0_650, temp0_662)
            float temp0_680[0x8] = _mm256_add_ps(temp0_666, temp0_669)
            arg5 = _mm256_andnot_ps(arg6, var_560_3)
            
            if (_mm256_movemask_ps(arg5) != 0)
                arg5 = _mm256_xor_ps(arg6, _mm256_cmpeq_epi32(arg5, arg5))
                arg6 = _mm256_broadcast_ss(var_6a0_1)
                float temp0_686[0x8] = _mm256_cmp_ps(temp0_668, arg6, 1)
                arg7 = _mm256_and_ps(temp0_686, arg5)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg7, var_560_3)) != 0)
                    var_740_5 = _mm256_maskstore_ps(arg7, arg6)
                
                arg5 = _mm256_andnot_ps(temp0_686, arg5)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, var_560_3)) != 0)
                    var_740_5 = _mm256_maskstore_ps(arg5, temp0_668)
            
            zmm1 = _mm256_add_ps(zmm1, temp0_679)
            float temp0_696[0x8] = _mm256_broadcast_ss(temp0_9)
            float temp0_697[0x8] = _mm256_cmp_ps(temp0_696, temp0_680, 1)
            zmm5 = _mm256_and_ps(temp0_697, var_560_3)
            arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_697[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                var_720_5 = _mm256_maskstore_ps(temp0_697, temp0_696)
            
            float temp0_704[0x8] = _mm256_add_ps(zmm1, arg11)
            zmm1 = _mm256_andnot_ps(temp0_697, var_560_3)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm0 = temp0_697 ^ _mm256_cmpeq_epi32(zmm1, zmm1)
                float temp0_708[0x8] = _mm256_broadcast_ss(temp0_14)
                zmm1 = _mm256_cmp_ps(temp0_680, temp0_708, 1)
                arg5 = _mm256_and_ps(zmm1, zmm0)
                zmm3 = _mm256_and_ps(arg5, var_560_3)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_720_5 = _mm256_maskstore_ps(arg5, temp0_708)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, var_560_3)) != 0)
                    var_720_5 = _mm256_maskstore_ps(zmm0, temp0_680)
            
            zmm1 = _mm256_broadcast_ss(temp0_10)
            float temp0_719[0x8] = _mm256_cmp_ps(zmm1, temp0_704, 1)
            zmm2 = _mm256_and_ps(temp0_719, var_560_3)
            zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_719[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                var_700_9 = _mm256_maskstore_ps(temp0_719, zmm1)
            
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(temp0_719, var_560_3)) != 0)
                zmm0 = temp0_719 ^ zmm2
                float temp0_729[0x8] = _mm256_broadcast_ss(temp0_15)
                zmm1 = _mm256_cmp_ps(temp0_704, temp0_729, 1)
                arg5 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, var_560_3)) != 0)
                    var_700_9 = _mm256_maskstore_ps(arg5, temp0_729)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, var_560_3)) != 0)
                    var_700_9 = _mm256_maskstore_ps(zmm0, temp0_704)
            
            arg11 = var_720_5
            float temp0_739[0x8] = _mm256_broadcast_ss(*arg1)
            float temp0_740[0x8] = _mm256_broadcast_ss(*(arg1 + 4))
            float temp0_741[0x8] = _mm256_sub_ps(arg11, temp0_740)
            float temp0_742[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(temp0_741, temp0_742)
            float temp0_744[0x8] = _mm256_sub_ps(var_740_5, temp0_739)
            float temp0_745[0x8] = _mm256_broadcast_ss(arg1[1].d)
            zmm2 = _mm256_cvttps_epi32(zmm1)
            zmm1 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm2), temp0_742, temp0_740)
            temp0_740[0].o = __vmovsd_xmmdq_memq(*arg3)
            float temp0_750[0x8] = _mm256_broadcast_ss(2f)
            temp0_740[0].o = __vdivps_xmmdq_xmmdq_xmmdq(temp0_740[0].o, temp0_750[0].o)
            temp0_750[0].o = __vmovshdup_xmmdq_xmmdq(temp0_740[0].o)
            arg5 = _mm256_broadcastsd_pd(temp0_750[0].o)
            float temp0_754[0x8] = _mm256_add_ps(arg5, zmm1)
            float temp0_755[0x8] = _mm256_cmp_ps(temp0_754, arg11, 1)
            zmm1 = _mm256_and_ps(temp0_755, var_560_3)
            arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            float temp0_759[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_760[0x8] = _mm256_div_ps(temp0_744, temp0_759)
            float temp0_761[0x8] = _mm256_sub_ps(var_700_9, temp0_745)
            float temp0_762[0x8] = _mm256_broadcast_ss(arg3[1].d)
            float temp0_763[0x8] = _mm256_div_ps(temp0_761, temp0_762)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_760[0].o)
            char temp0_765 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            arg8 = _mm256_cvttps_epi32(temp0_760)
            zmm5 = _mm256_cvttps_epi32(temp0_763)
            float temp0_769[0x8] = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg8), temp0_759, temp0_739)
            arg10 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm5), temp0_762, temp0_745)
            zmm1 = _mm256_broadcastss_ps(temp0_740[0].o)
            float temp0_773[0x8] = _mm256_add_ps(zmm1, temp0_769)
            temp0_769[0].o = _mm_permute_ps(temp0_740[0].o, 0xea)
            arg9 = _mm256_broadcastsd_pd(temp0_769[0].o)
            float temp0_776[0x8] = _mm256_cmp_ps(temp0_773, var_740_5, 1)
            arg7 = __vpaddd_ymmqq_ymmqq_memqq(arg8, data_142fc9420)
            arg13 = _mm256_blendv_ps(arg7, arg8, temp0_776)
            float var_740_6[0x8] = arg13
            float temp0_779[0x8] = _mm256_cmp_ps(temp0_754, arg11, 5)
            
            if (temp0_765 != 0)
                arg8 = zmm2
            
            arg10 = _mm256_add_ps(arg9, arg10)
            zmm3 = _mm256_and_ps(var_560_3, temp0_779)
            temp0_769[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            temp0_769[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_769[0].o)
            temp0_769[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_769[0].o, temp0_769[0].o)
            bool cond:3_1 = __vpmovmskb_gpr32d_xmmdq(temp0_769[0].o) == 0
            uint32_t temp0_786[0x8] = _mm256_cmpeq_epi32(arg11, arg11)
            
            if (not(cond:3_1))
                arg7 = _mm256_add_epi32(zmm2, temp0_786)
            
            float temp0_788[0x8] = _mm256_blendv_ps(arg7, arg8, temp0_755)
            float var_720_6[0x8] = temp0_788
            float temp0_789[0x8] = _mm256_cmp_ps(arg10, var_700_9, 5)
            float temp0_790[0x8] = _mm256_cmp_ps(arg10, var_700_9, 1)
            zmm0 = _mm256_and_ps(temp0_790, var_560_3)
            zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                arg8 = zmm5
            
            zmm0 = _mm256_and_ps(var_560_3, temp0_789)
            zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                arg7 = _mm256_add_epi32(zmm5, temp0_786)
            
            float temp0_802[0x8] = _mm256_blendv_ps(arg7, arg8, temp0_790)
            float temp0_804[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg13), temp0_759, temp0_739)
            float temp0_806[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_788), temp0_742, temp0_740)
            float temp0_808[0x8] =
                __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(temp0_802), temp0_762, temp0_745)
            zmm1 = _mm256_add_ps(zmm1, temp0_804)
            float temp0_810[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_806, arg5)
            float temp0_811[0x8] = _mm256_add_ps(arg9, temp0_808)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_740_5, zmm1), temp0_759)
            arg7 = arg11
            float temp0_815[0x8] = _mm256_div_ps(_mm256_sub_ps(arg7, temp0_810), temp0_742)
            uint32_t var_640_6[0x8] = zmm1
            float var_620_6[0x8] = temp0_815
            float var_600_6[0x8] = _mm256_div_ps(_mm256_sub_ps(var_700_9, temp0_811), temp0_762)
            zmm0 = _mm256_cmpeq_epi32(arg13, temp0_786)
            zmm1 = zmm0 & var_560_3
            temp0_815[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_815[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(0)
                var_740_6 = _mm256_maskstore_ps(zmm0, zmm1)
                var_640_6 = _mm256_maskstore_ps(zmm0, zmm1)
                arg13 = var_740_6
            
            int32_t rax_18 = *arg4
            zmm0[0].o = zx.o(rax_18 - 1)
            zmm0 = _mm256_cmpeq_epi32(arg13, _mm256_broadcastd_epi32(zmm0[0]))
            zmm1 = zmm0 & var_560_3
            temp0_815[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_815[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(rax_18 - 2)
                var_740_6 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                zmm1 = _mm256_broadcast_ss(1f)
                var_640_6 = _mm256_maskstore_ps(zmm0, zmm1)
            
            float temp0_835[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_740_5, temp0_668)
            temp0_815[0].o = zx.o(0)
            arg5 = var_720_6
            uint32_t temp0_837[0x8] = _mm256_cmpeq_epi32(arg5, _mm256_cmpeq_epi32(zmm1, zmm1))
            zmm5 = temp0_837 & var_560_3
            temp0_742[0].o = _mm256_extracti128_si256(zmm5, 1)
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_742[0].o)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_835[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                arg5[0].o = zx.o(0)
                var_720_6 = _mm256_maskstore_ps(temp0_837, arg5)
                var_620_6 = _mm256_maskstore_ps(temp0_837, arg5)
                arg5 = var_720_6
            
            zmm1 = _mm256_sub_ps(arg7, temp0_680)
            float temp0_845[0x8] = _mm256_fmadd_ps(temp0_835, temp0_835, temp0_815)
            int32_t rdx_3 = arg4[1]
            temp0_815[0].o = zx.o(rdx_3 - 1)
            zmm2 = _mm256_cmpeq_epi32(arg5, _mm256_broadcastd_epi32(temp0_815[0]))
            arg5 = zmm2 & var_560_3
            zmm5[0].o = _mm256_extracti128_si256(arg5, 1)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_845[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
                arg5[0].o = zx.o(rdx_3 - 2)
                var_720_6 = _mm256_maskstore_ps(zmm2, _mm256_broadcastd_epi32(arg5[0]))
                arg5 = _mm256_broadcast_ss(1f)
                var_620_6 = _mm256_maskstore_ps(zmm2, arg5)
            
            float temp0_856[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_700_9, temp0_704)
            zmm1 = _mm256_fmadd_ps(zmm1, zmm1, temp0_845)
            arg6 = temp0_802
            zmm0 = _mm256_cmpeq_epi32(arg6, _mm256_cmpeq_epi32(temp0_845, temp0_845))
            zmm2 = zmm0 & var_560_3
            arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm2[0].o = zx.o(0)
                float temp0_864[0x8] = _mm256_maskstore_ps(zmm0, zmm2)
                var_600_6 = _mm256_maskstore_ps(zmm0, zmm2)
                arg6 = temp0_864
            
            float temp0_866[0x8] = _mm256_fmadd_ps(temp0_856, temp0_856, zmm1)
            int32_t rdx_6 = arg4[2]
            zmm0[0].o = zx.o(rdx_6 - 1)
            zmm0 = _mm256_cmpeq_epi32(arg6, _mm256_broadcastd_epi32(zmm0[0]))
            zmm1 = zmm0 & var_560_3
            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = zx.o(rdx_6 - 2)
                float temp0_874[0x8] = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                var_600_6 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                arg6 = temp0_874
            
            uint32_t temp0_877[0x8] = __vpbroadcastd_ymmqq_memd(*(arg16 + 4))
            arg12 = _mm256_mullo_epi32(temp0_877, var_740_6)
            zmm0 = _mm256_add_epi32(arg12, var_720_6)
            uint32_t temp0_880[0x8] = __vpbroadcastd_ymmqq_memd(*(arg16 + 8))
            arg7 = _mm256_mullo_epi32(zmm0, temp0_880)
            zmm0 = _mm256_add_epi32(arg7, arg6)
            int64_t rax_21 = *(arg16 + 0x10)
            arg5 = _mm256_slli_epi32(zmm0, 2)
            arg9 = var_560_3
            zmm0[0].o = zx.o(0)
            float temp0_884[0x8]
            int32_t temp1_26
            temp0_884, temp1_26 = _mm256_i32gather_ps(zmm0, *(rax_21 + arg5[0].q), arg9)
            uint32_t temp0_885[0x8] = _mm256_cmpeq_epi32(temp0_786, temp0_786)
            arg13 = _mm256_mullo_epi32(temp0_877, _mm256_sub_epi32(var_740_6, temp0_885))
            zmm5 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, var_720_6), temp0_880)
            uint32_t temp0_891[0x8] = _mm256_slli_epi32(_mm256_add_epi32(zmm5, arg6), 2)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_893[0x8]
            int32_t temp1_27
            temp0_893, temp1_27 = _mm256_i32gather_ps(arg5, *(rax_21 + temp0_891[0].q), arg9)
            zmm2 = var_640_6
            zmm1 = var_620_6
            arg14 = _mm256_sub_epi32(var_720_6, temp0_885)
            arg12 = _mm256_mullo_epi32(_mm256_add_epi32(arg12, arg14), temp0_880)
            arg8 = _mm256_add_epi32(arg12, arg6)
            arg15 = _mm256_slli_epi32(arg8, 2)
            arg8[0].o = zx.o(0)
            float temp0_899[0x8]
            int32_t temp1_28
            temp0_899, temp1_28 = _mm256_i32gather_ps(arg8, *(rax_21 + arg15[0].q), arg9)
            arg8 = temp0_899
            zmm3 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, arg14), temp0_880)
            uint32_t temp0_903[0x8] = _mm256_slli_epi32(_mm256_add_epi32(zmm3, arg6), 2)
            arg14[0].o = zx.o(0)
            float temp0_904[0x8]
            int32_t temp1_29
            temp0_904, temp1_29 = _mm256_i32gather_ps(arg14, *(rax_21 + temp0_903[0].q), arg9)
            arg14 = temp0_904
            arg13 = temp1_29
            arg6 = _mm256_sub_epi32(arg6, temp0_885)
            arg7 = _mm256_slli_epi32(_mm256_add_epi32(arg7, arg6), 2)
            temp0_885[0].o = zx.o(0)
            float temp0_908[0x8]
            int32_t temp1_30
            temp0_908, temp1_30 = _mm256_i32gather_ps(temp0_885, *(rax_21 + arg7[0].q), arg9)
            arg11 = temp0_908
            arg10 = temp1_30
            arg7 = _mm256_slli_epi32(_mm256_add_epi32(zmm5, arg6), 2)
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            float temp0_912[0x8]
            int32_t temp1_31
            temp0_912, temp1_31 = _mm256_i32gather_ps(arg10, *(rax_21 + arg7[0].q), arg9)
            arg10 = temp0_912
            arg7 = _mm256_slli_epi32(_mm256_add_epi32(arg12, arg6), 2)
            arg12[0].o = zx.o(0)
            float temp0_915[0x8]
            int32_t temp1_32
            temp0_915, temp1_32 = _mm256_i32gather_ps(arg12, *(rax_21 + arg7[0].q), arg9)
            arg12 = temp0_915
            zmm3 = _mm256_slli_epi32(_mm256_add_epi32(zmm3, arg6), 2)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_919[0x8]
            int32_t temp1_33
            temp0_919, temp1_33 = _mm256_i32gather_ps(arg7, *(rax_21 + zmm3[0].q), arg9)
            arg7 = temp0_919
            float temp0_921[0x8] =
                _mm256_fmadd_ps(_mm256_sub_ps(temp0_893, temp0_884), zmm2, temp0_884)
            float temp0_923[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg14, arg8), zmm2, arg8)
            float temp0_925[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg10, arg11), zmm2, arg11)
            arg6 = _mm256_fmadd_ps(_mm256_sub_ps(arg7, arg12), zmm2, arg12)
            zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_923, temp0_921), zmm1, temp0_921)
            zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(arg6, temp0_925), zmm1, temp0_925), 
                    zmm2), 
                zmm2, var_600_6)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm3 = temp0_866
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm3, zmm1, 0xc), arg9)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                float temp0_941[0x8] = _mm256_rsqrt_ps(zmm3)
                float temp0_942[0x8] = _mm256_mul_ps(zmm3, temp0_941)
                zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_941, 
                        _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_941, temp0_942)), 
                    var_440)
                float temp0_947[0x8] = _mm256_rcp_ps(zmm2)
                zmm3 =
                    _mm256_fmadd_ps(_mm256_fnmadd_ps(temp0_750, temp0_947, zmm2), temp0_947, zmm0)
                zmm1 = _mm256_cvtepi16_epi32(zmm1[0].o)
                zmm0 = _mm256_blendv_ps(zmm0, zmm3, zmm1)
            
            arg5 = var_580_3
            zmm1[0].o = arg19
            float temp0_953[0x8] = _mm256_sub_ps(zmm0, _mm256_broadcastss_ps(zmm1[0].o))
            zmm1 = _mm256_and_ps(
                _mm256_cmp_ps(temp0_953, _mm256_broadcast_ss(-9.99999975e-05f), 1), arg9)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_953[0].o)
            result = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
            
            if (result.b != 0)
                zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_668, temp0_953, var_380_1)
                float temp0_962[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_680, temp0_953, var_360_1)
                arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_704, temp0_953, var_340_1)
                var_380_1 = _mm256_maskstore_ps(zmm1, zmm3)
                var_360_1 = _mm256_maskstore_ps(zmm1, temp0_962)
                var_340_1 = _mm256_maskstore_ps(zmm1, arg6)
                arg5 = _mm256_blendv_ps(arg5, _mm256_add_ps(arg5, temp0_953), 
                    _mm256_cvtepi16_epi32(zmm2[0].o))
    else
        float temp0_16[0x8] = _mm256_broadcast_ss(arg17[3])
        temp0_16[0].o = *arg17
        zmm1[0].o = arg17[1]
        zmm2[0].o = zx.o(arg17[2])
        result = &var_720
        arg12 = _mm256_broadcast_ss(*arg1)
        float temp0_18[0x8] = _mm256_broadcast_ss(*(arg1 + 4))
        float temp0_19[0x8] = _mm256_broadcast_ss(arg1[1].d)
        float temp0_20[0x8] = _mm256_broadcast_ss(*arg3)
        float temp0_21[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
        float temp0_22[0x8] = _mm256_broadcast_ss(arg3[1].d)
        arg5[0].o = __vmovsd_xmmdq_memq(*arg3)
        float temp0_24[0x8] = _mm256_broadcast_ss(2f)
        arg5[0].o = __vdivps_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_24[0].o)
        float temp0_26[0x8] = _mm256_broadcastss_ps(arg5[0].o)
        zmm5[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
        float var_520_1[0x8] = _mm256_broadcastsd_pd(zmm5[0].o)
        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xea)
        float var_540_1[0x8] = _mm256_broadcastsd_pd(arg5[0].o)
        float temp0_31[0x8] = _mm256_broadcast_ss(*(arg16 + 4))
        zmm3 = _mm256_broadcast_ss(*(arg16 + 8))
        float var_260_1[0x8] = zmm3
        int64_t rdi_1 = *(arg16 + 0x10)
        rdx = 0
        uint32_t var_280_1[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
        uint32_t temp0_34[0x8] = _mm256_broadcastd_epi32(zmm2[0])
        arg13 = _mm256_broadcastss_ps(temp0_16[0].o)
        temp0_16[0].o = arg19
        float temp0_36[0x8] = _mm256_broadcastss_ps(temp0_16[0].o)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        int32_t var_2e0_1[0x4] = _mm256_broadcast_ss(1.68155816e-44f)[0].o
        arg15 = _mm256_cmpeq_epi32(arg15, arg15)
        zmm0 = _mm256_broadcast_ss(-9.99999975e-05f)
        float var_300_1[0x8] = zmm0
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        float var_400_1[0x8] = arg12
        float var_420_1[0x8] = arg13
        
        do
            float var_580_1[0x8] = arg5
            zmm0[0].o = zx.o(rdx)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm0[0].o, var_2e0_1)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93c0)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_47[0x8]
            int32_t temp1_1
            temp0_47, temp1_1 = _mm256_i32gather_ps(arg5, *(arg18 + zmm1[0].q), zmm2)
            zmm2 = temp1_1
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93e0)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            float temp0_51[0x8]
            int32_t temp1_2
            temp0_51, temp1_2 = _mm256_i32gather_ps(zmm5, *(arg18 + zmm1[0].q), zmm2)
            zmm2 = temp1_2
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc9400)
            uint32_t temp0_53[0x8] = _mm256_cmpeq_epi32(zmm1, zmm1)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            float temp0_55[0x8]
            int32_t temp1_3
            temp0_55, temp1_3 = _mm256_i32gather_ps(zmm2, *(arg18 + zmm0[0].q), temp0_53)
            float var_5e0_1[0x8] = zmm3
            float var_740_1[0x8] = temp0_16
            float var_720_1[0x8] = temp0_16
            float var_700_1[0x8] = temp0_16
            float var_6e0_1[0x8] = temp0_16
            float temp0_56[0x8] = _mm256_mul_ps(temp0_51, temp0_34)
            zmm1 = _mm256_mul_ps(temp0_55, arg13)
            float temp0_58[0x8] = _mm256_mul_ps(temp0_47, var_280_1)
            float temp0_59[0x8] = _mm256_fmsub_ps(temp0_55, var_280_1, temp0_56)
            float temp0_60[0x8] = _mm256_fmsub_ps(temp0_47, temp0_34, zmm1)
            float temp0_61[0x8] = _mm256_fmsub_ps(temp0_51, arg13, temp0_58)
            float temp0_62[0x8] = _mm256_add_ps(temp0_59, temp0_59)
            zmm1 = _mm256_add_ps(temp0_60, temp0_60)
            float temp0_64[0x8] = _mm256_add_ps(temp0_61, temp0_61)
            float temp0_65[0x8] = _mm256_fmadd_ps(temp0_47, temp0_16, temp0_62)
            float temp0_66[0x8] = _mm256_fmadd_ps(temp0_51, temp0_16, zmm1)
            float temp0_67[0x8] = _mm256_fmadd_ps(temp0_55, temp0_16, temp0_64)
            float temp0_68[0x8] = _mm256_mul_ps(zmm1, temp0_34)
            float temp0_69[0x8] = _mm256_mul_ps(temp0_64, arg13)
            float temp0_70[0x8] = _mm256_mul_ps(temp0_62, var_280_1)
            float temp0_72[0x8] =
                _mm256_add_ps(temp0_65, _mm256_fmsub_ps(temp0_64, var_280_1, temp0_68))
            float temp0_74[0x8] =
                _mm256_add_ps(temp0_66, _mm256_fmsub_ps(temp0_62, temp0_34, temp0_69))
            float temp0_76[0x8] = _mm256_add_ps(temp0_72, _mm256_broadcast_ss(arg17[4]))
            float temp0_77[0x8] = _mm256_broadcast_ss(arg17[5])
            float temp0_78[0x8] = _mm256_broadcast_ss(arg17[6])
            float temp0_79[0x8] = _mm256_broadcast_ss(var_690_1)
            float temp0_80[0x8] = _mm256_cmp_ps(temp0_79, temp0_76, 1)
            
            if (_mm256_movemask_ps(temp0_80) != 0)
                var_740_1 = _mm256_maskstore_ps(temp0_80, temp0_79)
            
            zmm1 = _mm256_fmsub_ps(zmm1, arg13, temp0_70)
            float temp0_84[0x8] = _mm256_add_ps(temp0_74, temp0_77)
            zmm0 = _mm256_xor_ps(temp0_80, arg15)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_87[0x8] = _mm256_broadcast_ss(var_6a0_1)
                float temp0_88[0x8] = _mm256_cmp_ps(temp0_76, temp0_87, 1)
                arg7 = _mm256_and_ps(temp0_88, zmm0)
                
                if (_mm256_movemask_ps(arg7) != 0)
                    var_740_1 = _mm256_maskstore_ps(arg7, temp0_87)
                
                zmm0 = _mm256_andnot_ps(temp0_88, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_740_1 = _mm256_maskstore_ps(zmm0, temp0_76)
            
            float temp0_95[0x8] = _mm256_add_ps(temp0_67, zmm1)
            float temp0_96[0x8] = _mm256_broadcast_ss(temp0_9)
            zmm1 = _mm256_cmp_ps(temp0_96, temp0_84, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_720_1 = _mm256_maskstore_ps(zmm1, temp0_96)
            
            float temp0_100[0x8] = _mm256_add_ps(temp0_95, temp0_78)
            zmm0 = _mm256_xor_ps(zmm1, arg15)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_103[0x8] = _mm256_broadcast_ss(temp0_14)
                zmm1 = _mm256_cmp_ps(temp0_84, temp0_103, 1)
                arg5 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_720_1 = _mm256_maskstore_ps(arg5, temp0_103)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_720_1 = _mm256_maskstore_ps(zmm0, temp0_84)
            
            arg13 = arg12
            zmm1 = _mm256_broadcast_ss(temp0_10)
            float temp0_112[0x8] = _mm256_cmp_ps(zmm1, temp0_100, 1)
            
            if (_mm256_movemask_ps(temp0_112) != 0)
                var_700_1 = _mm256_maskstore_ps(temp0_112, zmm1)
            
            zmm0 = _mm256_xor_ps(temp0_112, arg15)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float temp0_117[0x8] = _mm256_broadcast_ss(temp0_15)
                zmm1 = _mm256_cmp_ps(temp0_100, temp0_117, 1)
                arg5 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_700_1 = _mm256_maskstore_ps(arg5, temp0_117)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_700_1 = _mm256_maskstore_ps(zmm0, temp0_100)
            
            float temp0_126[0x8] = _mm256_div_ps(_mm256_sub_ps(var_740_1, arg13), temp0_20)
            arg11 = temp0_21
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_720_1, temp0_18), arg11)
            float temp0_130[0x8] = _mm256_div_ps(_mm256_sub_ps(var_700_1, temp0_19), temp0_22)
            arg7 = _mm256_cvttps_epi32(temp0_126)
            zmm0 = _mm256_cvttps_epi32(zmm1)
            arg9 = _mm256_cvttps_epi32(temp0_130)
            zmm1 = _mm256_cvtepi32_ps(arg7)
            arg10 = _mm256_cvtepi32_ps(zmm0)
            float temp0_136[0x8] = _mm256_cvtepi32_ps(arg9)
            zmm1 = _mm256_fmadd_ps(zmm1, temp0_20, arg13)
            arg10 = _mm256_fmadd_ps(arg10, arg11, temp0_18)
            float temp0_139[0x8] = _mm256_fmadd_ps(temp0_136, temp0_22, temp0_19)
            zmm1 = _mm256_cmp_ps(__vaddps_ymmqq_ymmqq_memqq(zmm1, temp0_26), var_740_1, 1)
            arg8 = __vpaddd_ymmqq_ymmqq_memqq(arg7, data_142fc9420)
            zmm1 = _mm256_blendv_ps(arg8, arg7, zmm1)
            uint32_t var_740_2[0x8] = zmm1
            arg10 = __vaddps_ymmqq_ymmqq_memqq(arg10, var_520_1)
            float temp0_145[0x8] = _mm256_cmp_ps(arg10, var_720_1, 1)
            
            if (_mm256_movemask_ps(temp0_145) != 0)
                arg7 = zmm0
            
            float temp0_147[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_139, var_540_1)
            arg10 = _mm256_cmp_ps(arg10, var_720_1, 5)
            arg11[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            temp0_19[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
            temp0_19[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_19[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_19[0].o) != 0)
                arg8 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc9420)
            
            float temp0_154[0x8] = _mm256_blendv_ps(arg8, arg7, temp0_145)
            float var_720_2[0x8] = temp0_154
            float temp0_155[0x8] = _mm256_cmp_ps(temp0_147, var_700_1, 1)
            
            if (_mm256_movemask_ps(temp0_155) != 0)
                arg7 = arg9
            
            float temp0_157[0x8] = _mm256_cmp_ps(temp0_147, var_700_1, 5)
            temp0_19[0].o = _mm256_extractf128_ps(temp0_157[0].o, 1)
            temp0_157[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_157[0].o, temp0_19[0].o)
            temp0_157[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_157[0].o, temp0_154[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(temp0_157[0].o) != 0)
                arg8 = __vpaddd_ymmqq_ymmqq_memqq(arg9, data_142fc9420)
            
            float temp0_167[0x8] = _mm256_div_ps(
                _mm256_sub_ps(var_740_1, 
                    __vaddps_ymmqq_ymmqq_memqq(
                        _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm1), temp0_20, arg13), temp0_26)), 
                temp0_20)
            float temp0_168[0x8] = _mm256_blendv_ps(arg8, arg7, temp0_155)
            float var_640_2[0x8] = temp0_167
            float temp0_169[0x8] = _mm256_cvtepi32_ps(temp0_154)
            float temp0_170[0x8] = _mm256_cvtepi32_ps(temp0_168)
            float temp0_171[0x8] = _mm256_fmadd_ps(temp0_169, temp0_21, temp0_18)
            float temp0_172[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_170, temp0_22, temp0_19)
            float temp0_173[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_171, var_520_1)
            float temp0_174[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_172, var_540_1)
            float temp0_176[0x8] = _mm256_div_ps(_mm256_sub_ps(var_720_1, temp0_173), temp0_21)
            float temp0_178[0x8] = _mm256_div_ps(_mm256_sub_ps(var_700_1, temp0_174), temp0_22)
            float var_620_2[0x8] = temp0_176
            float var_600_2[0x8] = temp0_178
            arg15 = _mm256_cmpeq_epi32(temp0_155, temp0_155)
            zmm0 = _mm256_cmpeq_epi32(zmm1, arg15)
            bool cond:5_1 = _mm256_movemask_ps(zmm0) == 0
            temp0_21[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_21[0].o, temp0_21[0].o)
            
            if (not(cond:5_1))
                var_740_2 = _mm256_maskstore_ps(zmm0, temp0_21)
                var_640_2 = _mm256_maskstore_ps(zmm0, temp0_21)
                zmm1 = var_740_2
            
            int32_t rsi_18 = *arg4
            zmm0[0].o = zx.o(rsi_18 - 1)
            zmm0 = _mm256_cmpeq_epi32(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rsi_18 - 2)
                var_740_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                var_640_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
            
            zmm1 = var_720_2
            zmm0 = _mm256_cmpeq_epi32(zmm1, arg15)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_720_2 = _mm256_maskstore_ps(zmm0, temp0_21)
                var_620_2 = _mm256_maskstore_ps(zmm0, temp0_21)
                zmm1 = var_720_2
            
            float temp0_196[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_740_1, temp0_76)
            int32_t rsi_21 = arg4[1]
            temp0_178[0].o = zx.o(rsi_21 - 1)
            zmm2 = _mm256_broadcastd_epi32(temp0_178[0])
            uint32_t temp0_198[0x8] = _mm256_cmpeq_epi32(zmm1, zmm2)
            
            if (_mm256_movemask_ps(temp0_198) != 0)
                zmm2[0].o = zx.o(rsi_21 - 2)
                var_720_2 = _mm256_maskstore_ps(temp0_198, _mm256_broadcastd_epi32(zmm2[0]))
                var_620_2 = _mm256_maskstore_ps(temp0_198, _mm256_broadcast_ss(1f))
            
            float temp0_204[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_700_1, temp0_100)
            float temp0_205[0x8] = _mm256_sub_ps(var_720_1, temp0_84)
            float temp0_206[0x8] = _mm256_fmadd_ps(temp0_196, temp0_196, temp0_21)
            zmm1 = temp0_168
            zmm5 = _mm256_cmpeq_epi32(zmm1, arg15)
            
            if (_mm256_movemask_ps(zmm5) != 0)
                float temp0_209[0x8] = _mm256_maskstore_ps(zmm5, temp0_21)
                var_600_2 = _mm256_maskstore_ps(zmm5, temp0_21)
                zmm1 = temp0_209
            
            float temp0_211[0x8] = _mm256_mul_ps(temp0_204, temp0_204)
            float temp0_212[0x8] = _mm256_fmadd_ps(temp0_205, temp0_205, temp0_206)
            int32_t rsi_24 = arg4[2]
            temp0_206[0].o = zx.o(rsi_24 - 1)
            zmm0 = _mm256_cmpeq_epi32(zmm1, _mm256_broadcastd_epi32(temp0_206[0]))
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rsi_24 - 2)
                float temp0_217[0x8] = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                var_600_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                zmm1 = temp0_217
            
            zmm2 = var_740_2
            arg10 = _mm256_mullo_epi32(temp0_31, zmm2)
            arg14 = var_260_1
            zmm0 = _mm256_mullo_epi32(_mm256_add_epi32(arg10, var_720_2), arg14)
            arg6 = _mm256_add_epi32(zmm0, zmm1)
            arg7 = _mm256_slli_epi32(arg6, 2)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            arg6[0].o = zx.o(0)
            float temp0_226[0x8]
            int32_t temp1_4
            temp0_226, temp1_4 = _mm256_i32gather_ps(arg6, *(rdi_1 + arg7[0].q), arg8)
            arg6 = temp0_226
            arg8 = temp1_4
            arg11 = _mm256_mullo_epi32(temp0_31, _mm256_sub_epi32(zmm2, arg15))
            zmm2 = _mm256_mullo_epi32(_mm256_add_epi32(arg11, var_720_2), arg14)
            arg7 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm1), 2)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            temp0_31[0].o = zx.o(0)
            float temp0_234[0x8]
            int32_t temp1_5
            temp0_234, temp1_5 = _mm256_i32gather_ps(temp0_31, *(rdi_1 + arg7[0].q), arg8)
            arg9 = temp0_234
            arg8 = var_640_2
            arg7 = var_620_2
            zmm3 = _mm256_sub_epi32(var_720_2, arg15)
            arg10 = _mm256_mullo_epi32(_mm256_add_epi32(arg10, zmm3), arg14)
            zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
            arg15 = _mm256_add_epi32(arg10, zmm1)
            arg12 = _mm256_slli_epi32(arg15, 2)
            arg13 = _mm256_cmpeq_epi32(arg13, arg13)
            arg15[0].o = zx.o(0)
            float temp0_242[0x8]
            int32_t temp1_6
            temp0_242, temp1_6 = _mm256_i32gather_ps(arg15, *(rdi_1 + arg12[0].q), arg13)
            arg13 = temp1_6
            zmm3 = _mm256_mullo_epi32(_mm256_add_epi32(arg11, zmm3), arg14)
            uint32_t temp0_246[0x8] = _mm256_slli_epi32(_mm256_add_epi32(zmm3, zmm1), 2)
            arg12 = _mm256_cmpeq_epi32(arg12, arg12)
            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            float temp0_249[0x8]
            int32_t temp1_7
            temp0_249, temp1_7 = _mm256_i32gather_ps(arg13, *(rdi_1 + temp0_246[0].q), arg12)
            arg12 = temp1_7
            zmm1 = _mm256_sub_epi32(zmm1, zmm5)
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm0, zmm1), 2)
            uint32_t temp0_253[0x8] = _mm256_cmpeq_epi32(temp0_246, temp0_246)
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            float temp0_255[0x8]
            int32_t temp1_8
            temp0_255, temp1_8 = _mm256_i32gather_ps(arg12, *(rdi_1 + zmm0[0].q), temp0_253)
            arg11 = temp1_8
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm1), 2)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            float temp0_260[0x8]
            int32_t temp1_9
            temp0_260, temp1_9 = _mm256_i32gather_ps(arg11, *(rdi_1 + zmm0[0].q), zmm2)
            arg11 = temp0_260
            zmm2 = temp1_9
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm1), 2)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            arg10[0].o = zx.o(0)
            float temp0_264[0x8]
            int32_t temp1_10
            temp0_264, temp1_10 = _mm256_i32gather_ps(arg10, *(rdi_1 + zmm0[0].q), zmm2)
            arg10 = temp0_264
            zmm2 = temp1_10
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm3, zmm1), 2)
            uint32_t temp0_267[0x8] = _mm256_cmpeq_epi32(zmm1, zmm1)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            float temp0_269[0x8]
            int32_t temp1_11
            temp0_269, temp1_11 = _mm256_i32gather_ps(zmm2, *(rdi_1 + zmm0[0].q), temp0_267)
            float temp0_271[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(arg9, arg6), arg8, arg6)
            zmm1 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_249, temp0_242), arg8, temp0_242)
            zmm3 = _mm256_fmadd_ps(_mm256_sub_ps(arg11, temp0_255), arg8, temp0_255)
            float temp0_277[0x8] = _mm256_fmadd_ps(_mm256_sub_ps(temp0_269, arg10), arg8, arg10)
            zmm1 = _mm256_fmadd_ps(_mm256_sub_ps(zmm1, temp0_271), arg7, temp0_271)
            zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(temp0_277, zmm3), arg7, zmm3), zmm1), 
                zmm1, var_600_2)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(temp0_212, temp0_211)
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm1 = _mm256_cmp_ps(zmm2, zmm3, 0xc)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                float temp0_288[0x8] = _mm256_rsqrt_ps(zmm2)
                float temp0_289[0x8] = _mm256_mul_ps(zmm2, temp0_288)
                float temp0_293[0x8] = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(temp0_288, 
                        _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_288, temp0_289)), 
                    var_440)
                float temp0_294[0x8] = _mm256_rcp_ps(temp0_293)
                zmm2 = _mm256_fmadd_ps(
                    __vfnmadd213ps_ymmqq_ymmqq_memqq(temp0_293, temp0_294, temp0_24), temp0_294, 
                    zmm0)
                zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
            
            arg5 = var_580_1
            arg12 = var_400_1
            arg13 = var_420_1
            arg15 = _mm256_cmpeq_epi32(temp0_242, temp0_242)
            zmm5 = temp0_84
            zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm0, temp0_36)
            zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, var_300_1, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_76, zmm0, var_380_1)
                zmm5 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm5, zmm0, var_360_1)
                arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_100, zmm0, var_340_1)
                var_380_1 = _mm256_maskstore_ps(zmm1, zmm2)
                var_360_1 = _mm256_maskstore_ps(zmm1, zmm5)
                var_340_1 = _mm256_maskstore_ps(zmm1, arg7)
                zmm0 = _mm256_add_ps(arg5, zmm0)
                arg5 = _mm256_blendv_ps(arg5, zmm0, zmm1)
            
            rdx += 8
        while (rdx s< r10_5)
        
        rdi_2 = arg20
        rsi_28 = arg21
        
        if (rdx s< arg22)
            goto label_14005c922
    float temp0_970[0x8] = _mm256_hadd_ps(var_380_1, var_380_1)
    float temp0_971[0x8] = _mm256_hadd_ps(temp0_970, temp0_970)
    zmm1 = var_360_1
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    zmm3[0].o = _mm256_extractf128_ps(temp0_971[0].o, 1)
    temp0_971[0].o = temp0_971[0].o f+ zmm3[0]
    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o = zmm1[0].o f+ zmm3[0]
    temp0_971[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_971[0].o, zmm1[0].o, 0x10)
    zmm1 = _mm256_hadd_ps(var_340_1, var_340_1)
    zmm1 = _mm256_hadd_ps(zmm1, zmm1)
    var_340_1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o = zmm1[0].o f+ var_340_1[0]
    var_340_1[0].o = __vmovsd_xmmdq_memq(*rsi_28)
    var_340_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_340_1[0].o, rsi_28[1].d, 0x20)
    temp0_971[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_971[0].o, zmm1[0].o, 0x20)
    temp0_971[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_971[0].o, var_340_1[0].o)
    *rsi_28 = temp0_971[0]
    *(rsi_28 + 4) = __vextractps_memd_xmmdq_immb(temp0_971[0].o, 1)
    rsi_28[1].d = __vextractps_memd_xmmdq_immb(temp0_971[0].o, 2)
    zmm0 = _mm256_hadd_ps(arg5, arg5)
float temp0_1356[0x8] = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(temp0_1356[0].o, 1)
temp0_1356[0].o = temp0_1356[0].o f+ zmm1[0]
temp0_1356[0].o = temp0_1356[0].o f+ *rdi_2
*rdi_2 = temp0_1356[0]
arg6[0].o = var_e8
arg7[0].o = var_d8
arg8[0].o = var_c8
arg9[0].o = var_b8
arg10[0].o = var_a8
arg11[0].o = var_98
arg12[0].o = var_88
arg13[0].o = var_78
arg14[0].o = var_68
arg15[0].o = var_58
_mm256_zeroupper()
return result
