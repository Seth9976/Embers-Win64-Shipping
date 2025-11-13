// 函数: sub_14029a22c
// 地址: 0x14029a22c
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
int64_t r12 = sx.q(arg21)
int32_t rbx_1 = *(&data_143442e60 + (r12 << 2)) * *(&data_143442e40 + (r12 << 2))
int32_t r11_4 = ((arg22 s>> 0x1f u>> 0x1d) + arg22) & 0xfffffff8
uint32_t var_4c0[0x8]
int32_t rcx_155
float r14
uint32_t zmm0[0x8]
uint32_t zmm1[0x8]
float zmm3[0x8]

if (r11_4 s<= 0)
    r14 = 0f
    rcx_155 = arg22
    
    if (0 s< rcx_155)
    label_14029c303:
        zmm0[0].o = zx.o(r14)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(rcx_155)
        arg12 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
        arg5 = _mm256_slli_epi32(zmm0, 3)
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        int32_t temp0_639
        int32_t temp1_25
        temp0_639, temp1_25 = _mm256_i32gather_epi32(arg14, *(arg2 + arg5[0].q), arg12)
        arg14 = temp0_639
        zmm3 = temp1_25
        arg9[0].o = zx.o(0)
        zmm1 = __vpbroadcastd_ymmqq_memd(4)
        zmm3[0].o = zx.o(0)
        int32_t temp0_641
        int32_t temp1_26
        temp0_641, temp1_26 = _mm256_i32gather_epi32(zmm3, *(arg2 + (arg5 | zmm1)[0].q), arg12)
        arg5 = _mm256_slli_epi32(temp0_641, 4)
        arg16[0].o = zx.o(0)
        int32_t temp0_643
        int32_t temp1_27
        temp0_643, temp1_27 = _mm256_i32gather_epi32(arg16, *(arg3 + arg5[0].q), arg12)
        arg16 = temp0_643
        arg5 |= zmm1
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        int32_t temp0_645
        int32_t temp1_28
        temp0_645, temp1_28 = _mm256_i32gather_epi32(arg8, *(arg3 + arg5[0].q), arg12)
        arg8 = temp0_645
        zmm3 = temp1_28
        arg5[0].o = zx.o(rbx_1)
        arg11 = _mm256_broadcastd_epi32(arg5[0])
        arg6 = __vpbroadcastd_ymmqq_memd(2)
        arg5[0].o = zx.o(0)
        zmm0[0].o = zx.o(arg19)
        int32_t rcx_157
        rcx_157.b = zx.o(0) f>= zmm0[0]
        arg5[0].o = zx.o(neg.d(rcx_157))
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        arg5[0].o ^= zmm3[0].o
        arg5 = _mm256_broadcastd_epi32(arg5[0])
        float var_700_3[0x8] = arg6
        zmm3 = _mm256_cmpgt_epi32(arg6, arg8) & not.32(arg5)
        arg15 = zmm3 & arg12
        int32_t temp0_651 = _mm256_movemask_ps(arg15)
        
        if (temp0_651 == 0)
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            arg17[0].o = zx.o(0)
        else
            arg5 = _mm256_cmpeq_epi32(arg5, arg5)
            arg13 = _mm256_add_epi32(arg8, arg5)
            zmm0[0].o = zx.o(arg19)
            
            if (zmm0[0].o f>= 1f)
                arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                arg13 = _mm256_blendv_ps(arg10, arg13, arg15)
                arg17 = arg13
            else
                float var_740_1[0x8] = zmm3
                arg10 = zmm1
                int64_t var_660_1[0x4] = arg12
                arg5[0].o = zx.o(arg4)
                zmm3 = _mm256_cvtepi32_epi64(arg16[0].o)
                arg6[0].o = _mm256_extracti128_si256(arg16, 1)
                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                int64_t var_720_1[0x4] = arg8
                arg7 = _mm256_mullo_epi32(arg8, arg11)
                arg8[0].o = _mm256_extracti128_si256(arg7, 1)
                arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                arg9[0].o = 3
                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
                arg5 = _mm256_broadcastq_epi64(arg5[0].q)
                arg6 = _mm256_add_epi64(_mm256_add_epi64(arg5, arg6), arg8)
                arg5 = _mm256_add_epi64(_mm256_add_epi64(arg5, zmm3), arg7)
                zmm3 = __vpbroadcastq_ymmqq_memq(-4)
                arg12 = arg6 & zmm3
                zmm0 = arg5 & zmm3
                int32_t rbx_29 = arg18 - 2
                zmm1[0].o = arg19
                arg5 = _mm256_broadcastss_ps(zmm1[0].o)
                zmm3 = _mm256_cvtepi32_ps(arg13)
                arg5 = _mm256_mul_ps(arg5, zmm3)
                arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                zmm3[0].o = arg17[0].o
                zmm3[0] = float.s(arg18 - 1)
                arg8[0].o = zmm3[0].o f* zmm1[0]
                int32_t rdx_17 = int.d(arg8[0].d) s>> 0x1f
                int32_t rdx_18 = rdx_17 & not.d(rdx_17)
                
                if (rbx_29 s> rdx_18)
                    rbx_29 = rdx_18
                
                arg5 = _mm256_cvttps_epi32(arg5)
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                arg9 = _mm256_min_epi32(_mm256_max_epi32(arg5, zmm3), arg13)
                zmm1 = arg13
                int32_t var_640_1[0x8] = arg9
                int32_t var_6e0_1[0x8] = arg16
                int32_t var_6a0_2[0x8] = arg10
                int32_t var_680_3[0x8] = arg11
                var_4c0[0].o = arg8[0].o
                
                if (arg18 s< 0x100)
                    arg5 = _mm256_cvtepi32_epi64(arg9[0].o)
                    zmm3 = _mm256_add_epi64(zmm0, arg5)
                    char rdx_20 = temp0_651.b
                    
                    if ((rdx_20 & 1) == 0)
                        if ((rdx_20 & 2) != 0)
                            goto label_14029d1fc
                        
                        goto label_14029caec
                    
                    arg5[0].o = __vpbroadcastb_xmmdq_memb(*zmm3[0].q)
                    
                    if ((rdx_20 & 2) != 0)
                    label_14029d1fc:
                        uint32_t rdi_62 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdi_62, 1)
                        arg6[0].o = _mm256_extracti128_si256(arg9, 1)
                        
                        if ((rdx_20 & 4) == 0)
                            goto label_14029cafb
                        
                        goto label_14029d213
                    
                label_14029caec:
                    arg6[0].o = _mm256_extracti128_si256(arg9, 1)
                    
                    if ((rdx_20 & 4) == 0)
                    label_14029cafb:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((rdx_20 & 8) != 0)
                            goto label_14029d234
                        
                        goto label_14029cb09
                    
                label_14029d213:
                    arg7[0].o = _mm256_extracti128_si256(zmm3, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*arg7[0].q), 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((rdx_20 & 8) != 0)
                    label_14029d234:
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        uint32_t rdi_66 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdi_66, 3)
                        zmm3 = _mm256_add_epi64(arg12, arg6)
                        
                        if ((rdx_20 & 0x10) == 0)
                            goto label_14029cb16
                        
                        goto label_14029d25d
                    
                label_14029cb09:
                    zmm3 = _mm256_add_epi64(arg12, arg6)
                    
                    if ((rdx_20 & 0x10) == 0)
                    label_14029cb16:
                        
                        if ((rdx_20 & 0x20) != 0)
                            goto label_14029d271
                        
                        goto label_14029cb1f
                    
                label_14029d25d:
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*zmm3[0].q), 4)
                    
                    if ((rdx_20 & 0x20) != 0)
                    label_14029d271:
                        uint32_t rdi_70 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdi_70, 5)
                        
                        if ((rdx_20 & 0x40) == 0)
                            goto label_14029cb28
                        
                        goto label_14029d282
                    
                label_14029cb1f:
                    
                    if ((rdx_20 & 0x40) != 0)
                    label_14029d282:
                        arg6[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*arg6[0].q), 6)
                        
                        if (temp0_651.b s< 0)
                        label_14029d29d:
                            zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                            uint32_t rdi_74 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdi_74, 7)
                    else
                    label_14029cb28:
                        
                        if (temp0_651.b s< 0)
                            goto label_14029d29d
                    
                    arg5[0].o &= data_142fc92e0
                    arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                    zmm3[0].o = zx.o(rbx_29)
                    arg11 = _mm256_broadcastd_epi32(zmm3[0])
                    arg5 = _mm256_cmpgt_epi32(arg5, arg11)
                    float var_4e0_2[0x8] = arg5 ^ _mm256_cmpeq_epi32(zmm3, zmm3)
                    arg17 = arg9
                    
                    if (_mm256_movemask_ps(arg5 & not.32(arg15)) != 0)
                        arg16 = var_640_1
                        arg17 = _mm256_blendv_ps(arg16, arg13, var_4e0_2)
                        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                        zmm3 = _mm256_sub_epi32(arg16, arg7)
                        arg6 = _mm256_cmpgt_epi32(zmm3, arg13) ^ arg7
                        arg7 = arg5 & not.32(arg6)
                        arg9 = arg15 & arg7
                        int32_t i = _mm256_movemask_ps(arg9)
                        
                        if (i != 0)
                            arg8[0].o = data_142fc92e0
                            arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                            
                            do
                                arg6 = zmm3
                                zmm3 = _mm256_add_epi64(zmm0, _mm256_cvtepi32_epi64(arg6[0].o))
                                char temp0_819 = _mm256_movemask_ps(arg9)
                                
                                if ((temp0_819 & 1) == 0)
                                    if ((temp0_819 & 2) != 0)
                                        goto label_14029cbdd
                                    
                                    goto label_14029ccc5
                                
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm3[0].q), 0)
                                
                                if ((temp0_819 & 2) != 0)
                                label_14029cbdd:
                                    uint32_t rsi_36 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rsi_36, 1)
                                    arg9[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_819 & 4) == 0)
                                        goto label_14029ccd5
                                    
                                    goto label_14029cbf5
                                
                            label_14029ccc5:
                                arg9[0].o = _mm256_extracti128_si256(arg6, 1)
                                
                                if ((temp0_819 & 4) == 0)
                                label_14029ccd5:
                                    arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                    
                                    if ((temp0_819 & 8) != 0)
                                        goto label_14029cc17
                                    
                                    goto label_14029cce4
                                
                            label_14029cbf5:
                                arg13[0].o = _mm256_extracti128_si256(zmm3, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*arg13[0].q), 2)
                                arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                
                                if ((temp0_819 & 8) != 0)
                                label_14029cc17:
                                    zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    uint32_t rsi_40 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rsi_40, 3)
                                    zmm3 = _mm256_add_epi64(arg12, arg9)
                                    
                                    if ((temp0_819 & 0x10) == 0)
                                        goto label_14029ccf2
                                    
                                    goto label_14029cc41
                                
                            label_14029cce4:
                                zmm3 = _mm256_add_epi64(arg12, arg9)
                                
                                if ((temp0_819 & 0x10) == 0)
                                label_14029ccf2:
                                    
                                    if ((temp0_819 & 0x20) != 0)
                                        goto label_14029cc56
                                    
                                    goto label_14029ccfc
                                
                            label_14029cc41:
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm3[0].q), 4)
                                
                                if ((temp0_819 & 0x20) != 0)
                                label_14029cc56:
                                    uint32_t rsi_44 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rsi_44, 5)
                                    
                                    if ((temp0_819 & 0x40) == 0)
                                        goto label_14029cd06
                                    
                                    goto label_14029cc68
                                
                            label_14029ccfc:
                                
                                if ((temp0_819 & 0x40) != 0)
                                label_14029cc68:
                                    arg9[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*arg9[0].q), 6)
                                    
                                    if (temp0_819 s< 0)
                                    label_14029cc84:
                                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                                        uint32_t rdi_45 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdi_45, 7)
                                else
                                label_14029cd06:
                                    
                                    if (temp0_819 s< 0)
                                        goto label_14029cc84
                                
                                zmm3[0].o = arg5[0].o & arg8[0].o
                                zmm3 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm3[0].o), arg11)
                                    & arg7
                                arg9[0].o = zx.o(0)
                                
                                if (_mm256_movemask_ps(zmm3 & arg15) != i)
                                    arg9 = zmm3 ^ arg7
                                
                                arg17 = _mm256_blendv_ps(arg17, arg16, zmm3)
                                zmm3 = _mm256_sub_epi32(arg6, arg10)
                                arg13 = zmm1
                                arg7 = _mm256_cmpgt_epi32(zmm3, zmm1) & not.32(arg9)
                                arg9 = arg7 & arg15
                                i = _mm256_movemask_ps(arg9)
                                arg16 = arg6
                            while (i != 0)
                    
                    zmm3 = var_4e0_2
                    arg5 = _mm256_andnot_ps(zmm3, arg15)
                    
                    if (_mm256_movemask_ps(arg5) == 0)
                        arg11 = var_680_3
                        arg9[0].o = zx.o(0)
                        arg10 = var_740_1
                    else
                        arg5 = __vxorps_ymmqq_ymmqq_memqq(zmm3, data_142fc9420)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        arg17 = _mm256_blendv_ps(arg17, zmm3, arg5)
                        arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                        arg8 = __vpaddd_ymmqq_ymmqq_memqq(arg6, var_640_1)
                        zmm3 = _mm256_cmpgt_epi32(arg8, zmm3)
                        arg10 = zmm3 & arg5
                        arg9 = arg10 & arg15
                        int32_t i_1 = _mm256_movemask_ps(arg9)
                        
                        if (i_1 != 0)
                            arg13[0].o = data_142fc92e0
                            
                            do
                                zmm3 = _mm256_add_epi64(zmm0, _mm256_cvtepi32_epi64(arg8[0].o))
                                char temp0_856 = _mm256_movemask_ps(arg9)
                                
                                if ((temp0_856 & 1) == 0)
                                    if ((temp0_856 & 2) != 0)
                                        goto label_14029cded
                                    
                                    goto label_14029ced1
                                
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm3[0].q), 0)
                                
                                if ((temp0_856 & 2) != 0)
                                label_14029cded:
                                    uint32_t rsi_50 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rsi_50, 1)
                                    arg9[0].o = _mm256_extracti128_si256(arg8, 1)
                                    
                                    if ((temp0_856 & 4) == 0)
                                        goto label_14029cee1
                                    
                                    goto label_14029ce05
                                
                            label_14029ced1:
                                arg9[0].o = _mm256_extracti128_si256(arg8, 1)
                                
                                if ((temp0_856 & 4) == 0)
                                label_14029cee1:
                                    arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                    
                                    if ((temp0_856 & 8) != 0)
                                        goto label_14029ce27
                                    
                                    goto label_14029cef0
                                
                            label_14029ce05:
                                arg7[0].o = _mm256_extracti128_si256(zmm3, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*arg7[0].q), 2)
                                arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                
                                if ((temp0_856 & 8) != 0)
                                label_14029ce27:
                                    zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    uint32_t rsi_54 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rsi_54, 3)
                                    zmm3 = _mm256_add_epi64(arg12, arg9)
                                    
                                    if ((temp0_856 & 0x10) == 0)
                                        goto label_14029cefe
                                    
                                    goto label_14029ce51
                                
                            label_14029cef0:
                                zmm3 = _mm256_add_epi64(arg12, arg9)
                                
                                if ((temp0_856 & 0x10) == 0)
                                label_14029cefe:
                                    
                                    if ((temp0_856 & 0x20) != 0)
                                        goto label_14029ce66
                                    
                                    goto label_14029cf08
                                
                            label_14029ce51:
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm3[0].q), 4)
                                
                                if ((temp0_856 & 0x20) != 0)
                                label_14029ce66:
                                    uint32_t rsi_58 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rsi_58, 5)
                                    
                                    if ((temp0_856 & 0x40) == 0)
                                        goto label_14029cf12
                                    
                                    goto label_14029ce78
                                
                            label_14029cf08:
                                
                                if ((temp0_856 & 0x40) != 0)
                                label_14029ce78:
                                    arg7[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*arg7[0].q), 6)
                                    
                                    if (temp0_856 s< 0)
                                    label_14029ce94:
                                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                                        uint32_t rdi_49 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdi_49, 7)
                                else
                                label_14029cf12:
                                    
                                    if (temp0_856 s< 0)
                                        goto label_14029ce94
                                
                                zmm3[0].o = arg5[0].o & arg13[0].o
                                zmm3 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm3[0].o), arg11)
                                arg9 = zmm3 & not.32(arg10)
                                zmm3[0].o = zx.o(0)
                                arg7 = arg9 & arg15
                                int32_t temp0_862 = _mm256_movemask_ps(arg7)
                                arg16[0].o = zx.o(0)
                                
                                if (temp0_862 != i_1)
                                    arg16 = arg9 ^ arg10
                                
                                arg17 = _mm256_blendv_ps(arg17, arg8, arg9)
                                arg8 = _mm256_add_epi32(arg8, arg6)
                                zmm3 = _mm256_cmpgt_epi32(arg8, zmm3)
                                arg10 = zmm3 & arg16
                                arg9 = arg10 & arg15
                                i_1 = _mm256_movemask_ps(arg9)
                            while (i_1 != 0)
                        
                        arg11 = var_680_3
                        arg9[0].o = zx.o(0)
                        arg10 = var_740_1
                        arg13 = zmm1
                    
                    zmm1 = var_6a0_2
                    arg5[0].o = zx.o(0)
                    arg5 = _mm256_blendv_ps(arg5, arg17, arg15)
                    arg7 = arg5
                    arg5 = _mm256_add_epi64(zmm0, _mm256_cvtepi32_epi64(arg5[0].o))
                    
                    if ((rdx_20 & 1) == 0)
                        arg16 = var_6e0_1
                        
                        if ((rdx_20 & 2) != 0)
                            goto label_14029df30
                        
                        goto label_14029d304
                    
                    arg8[0].o = __vpbroadcastb_xmmdq_memb(*arg5[0].q)
                    arg16 = var_6e0_1
                    
                    if ((rdx_20 & 2) != 0)
                    label_14029df30:
                        uint16_t rbx_72[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rbx_72, 1)
                        zmm3[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                        
                        if ((rdx_20 & 4) == 0)
                            goto label_14029d313
                        
                        goto label_14029df47
                    
                label_14029d304:
                    zmm3[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
                    
                    if ((rdx_20 & 4) == 0)
                    label_14029d313:
                        zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
                        
                        if ((rdx_20 & 8) != 0)
                            goto label_14029df68
                        
                        goto label_14029d321
                    
                label_14029df47:
                    arg6[0].o = _mm256_extracti128_si256(arg5, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*arg6[0].q), 2)
                    zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
                    
                    if ((rdx_20 & 8) != 0)
                    label_14029df68:
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        uint16_t rbx_76[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rbx_76, 3)
                        arg5 = _mm256_add_epi64(arg12, zmm3)
                        
                        if ((rdx_20 & 0x10) == 0)
                            goto label_14029d32e
                        
                        goto label_14029df91
                    
                label_14029d321:
                    arg5 = _mm256_add_epi64(arg12, zmm3)
                    
                    if ((rdx_20 & 0x10) == 0)
                    label_14029d32e:
                        
                        if ((rdx_20 & 0x20) != 0)
                            goto label_14029dfa5
                        
                        goto label_14029d337
                    
                label_14029df91:
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*arg5[0].q), 4)
                    
                    if ((rdx_20 & 0x20) != 0)
                    label_14029dfa5:
                        uint16_t rbx_80[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rbx_80, 5)
                        
                        if ((rdx_20 & 0x40) == 0)
                            goto label_14029d340
                        
                        goto label_14029dfb6
                    
                label_14029d337:
                    
                    if ((rdx_20 & 0x40) != 0)
                    label_14029dfb6:
                        zmm3[0].o = _mm256_extracti128_si256(arg5, 1)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm3[0].q), 6)
                        
                        if (temp0_651.b s< 0)
                        label_14029dfd1:
                            arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                            uint16_t rbx_84[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rbx_84, 7)
                    else
                    label_14029d340:
                        
                        if (temp0_651.b s< 0)
                            goto label_14029dfd1
                    
                    arg5 = _mm256_sub_epi32(arg7, _mm256_cmpeq_epi32(arg5, arg5))
                    zmm3[0].o = zx.o(0)
                    arg17 = _mm256_blendv_ps(zmm3, arg5, arg15)
                    arg5 = _mm256_cmpgt_epi32(arg17, arg13) & arg15
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg17 = _mm256_blendv_ps(arg17, arg13, arg5)
                    
                    arg13 = arg7
                    arg5 = _mm256_cvtepi32_epi64(arg17[0].o)
                    zmm3 = _mm256_add_epi64(zmm0, arg5)
                    
                    if ((rdx_20 & 1) == 0)
                        if ((rdx_20 & 2) != 0)
                            goto label_14029e003
                        
                        goto label_14029d391
                    
                    arg5[0].o = __vpbroadcastb_xmmdq_memb(*zmm3[0].q)
                    
                    if ((rdx_20 & 2) != 0)
                    label_14029e003:
                        uint32_t rbx_87 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rbx_87, 1)
                        arg6[0].o = _mm256_extracti128_si256(arg17, 1)
                        
                        if ((rdx_20 & 4) == 0)
                            goto label_14029d3a0
                        
                        goto label_14029e01a
                    
                label_14029d391:
                    arg6[0].o = _mm256_extracti128_si256(arg17, 1)
                    
                    if ((rdx_20 & 4) == 0)
                    label_14029d3a0:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((rdx_20 & 8) != 0)
                            goto label_14029e03b
                        
                        goto label_14029d3ae
                    
                label_14029e01a:
                    arg7[0].o = _mm256_extracti128_si256(zmm3, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*arg7[0].q), 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((rdx_20 & 8) != 0)
                    label_14029e03b:
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        uint32_t rbx_91 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rbx_91, 3)
                        zmm3 = _mm256_add_epi64(arg12, arg6)
                        
                        if ((rdx_20 & 0x10) == 0)
                            goto label_14029d3bb
                        
                        goto label_14029e064
                    
                label_14029d3ae:
                    zmm3 = _mm256_add_epi64(arg12, arg6)
                    
                    if ((rdx_20 & 0x10) != 0)
                    label_14029e064:
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*zmm3[0].q), 4)
                        arg12 = var_660_1
                        
                        if ((rdx_20 & 0x20) != 0)
                        label_14029e081:
                            uint32_t rbx_95 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rbx_95, 5)
                            
                            if ((rdx_20 & 0x40) == 0)
                                goto label_14029d3d6
                            
                            goto label_14029e092
                    else
                    label_14029d3bb:
                        arg12 = var_660_1
                        
                        if ((rdx_20 & 0x20) != 0)
                            goto label_14029e081
                    
                    if ((rdx_20 & 0x40) != 0)
                    label_14029e092:
                        arg6[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*arg6[0].q), 6)
                        arg6[0].o = arg8[0].o & data_142fc92e0
                        
                        if (temp0_651.b s< 0)
                        label_14029e0b5:
                            zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                            uint32_t rcx_180 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rcx_180, 7)
                    else
                    label_14029d3d6:
                        arg6[0].o = arg8[0].o & data_142fc92e0
                        
                        if (temp0_651.b s< 0)
                            goto label_14029e0b5
                    
                    arg8 = var_720_1
                    zmm3 = _mm256_cvtepu16_epi32(arg6[0].o)
                    arg5[0].o &= data_142fc92e0
                    arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                    arg6[0].o = zx.o(0)
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    
                    if (arg20 != 1)
                    label_14029d41c:
                        arg5 = _mm256_max_epi32(_mm256_sub_epi32(arg5, zmm3), 
                            __vpbroadcastd_ymmqq_memd(1))
                        zmm3 =
                            _mm256_sub_ps(_mm256_broadcast_ss(var_4c0[0]), _mm256_cvtepi32_ps(zmm3))
                        arg5 = _mm256_cvtepi32_ps(arg5)
                        arg7 = _mm256_div_ps(zmm3, arg5)
                else
                    arg6 = _mm256_add_epi32(arg9, arg9)
                    arg5 = _mm256_cvtepi32_epi64(arg6[0].o)
                    zmm3 = _mm256_add_epi64(zmm0, arg5)
                    char rdx_19 = temp0_651.b
                    
                    if ((rdx_19 & 1) == 0)
                        if ((rdx_19 & 2) != 0)
                            goto label_14029cf9d
                        
                        goto label_14029c526
                    
                    arg5[0].o = __vpbroadcastw_xmmdq_memw(*zmm3[0].q)
                    
                    if ((rdx_19 & 2) != 0)
                    label_14029cf9d:
                        int64_t rdi_53 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rdi_53, 1)
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        
                        if ((rdx_19 & 4) == 0)
                            goto label_14029c535
                        
                        goto label_14029cfb7
                    
                label_14029c526:
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    
                    if ((rdx_19 & 4) == 0)
                    label_14029c535:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((rdx_19 & 8) != 0)
                            goto label_14029cfd5
                        
                        goto label_14029c543
                    
                label_14029cfb7:
                    arg7[0].o = _mm256_extracti128_si256(zmm3, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg7[0].q, 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((rdx_19 & 8) != 0)
                    label_14029cfd5:
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        int64_t rdi_55 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rdi_55, 3)
                        zmm3 = _mm256_add_epi64(arg12, arg6)
                        
                        if ((rdx_19 & 0x10) == 0)
                            goto label_14029c550
                        
                        goto label_14029cff8
                    
                label_14029c543:
                    zmm3 = _mm256_add_epi64(arg12, arg6)
                    
                    if ((rdx_19 & 0x10) == 0)
                    label_14029c550:
                        
                        if ((rdx_19 & 0x20) != 0)
                            goto label_14029d006
                        
                        goto label_14029c559
                    
                label_14029cff8:
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm3[0].q, 4)
                    
                    if ((rdx_19 & 0x20) != 0)
                    label_14029d006:
                        int64_t rdi_57 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rdi_57, 5)
                        
                        if ((rdx_19 & 0x40) == 0)
                            goto label_14029c562
                        
                        goto label_14029d01a
                    
                label_14029c559:
                    
                    if ((rdx_19 & 0x40) != 0)
                    label_14029d01a:
                        arg6[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg6[0].q, 6)
                        
                        if (temp0_651.b s< 0)
                        label_14029d032:
                            zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                            int64_t rdi_59 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rdi_59, 7)
                    else
                    label_14029c562:
                        
                        if (temp0_651.b s< 0)
                            goto label_14029d032
                    
                    arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                    zmm3[0].o = zx.o(rbx_29)
                    arg17 = _mm256_broadcastd_epi32(zmm3[0])
                    arg5 = _mm256_cmpgt_epi32(arg5, arg17)
                    arg13 = arg5 ^ _mm256_cmpeq_epi32(zmm3, zmm3)
                    zmm3 = arg5 & not.32(arg15)
                    arg11 = arg9
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        arg16 = var_640_1
                        arg11 = _mm256_blendv_ps(arg16, zmm1, arg13)
                        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                        zmm3 = _mm256_sub_epi32(arg16, arg7)
                        arg6 = _mm256_cmpgt_epi32(zmm3, zmm1) ^ arg7
                        arg7 = arg5 & not.32(arg6)
                        arg8 = arg15 & arg7
                        int32_t i_2 = _mm256_movemask_ps(arg8)
                        
                        if (i_2 != 0)
                            arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                            
                            do
                                arg10 = zmm3
                                arg9 = _mm256_add_epi32(zmm3, zmm3)
                                zmm3 = _mm256_add_epi64(zmm0, _mm256_cvtepi32_epi64(arg9[0].o))
                                char temp0_711 = _mm256_movemask_ps(arg8)
                                
                                if ((temp0_711 & 1) == 0)
                                    if ((temp0_711 & 2) != 0)
                                        goto label_14029c5f4
                                    
                                    goto label_14029c6d9
                                
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm3[0].q, 0)
                                
                                if ((temp0_711 & 2) != 0)
                                label_14029c5f4:
                                    int64_t rsi_20 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rsi_20, 1)
                                    arg8[0].o = _mm256_extracti128_si256(arg9, 1)
                                    
                                    if ((temp0_711 & 4) == 0)
                                        goto label_14029c6e9
                                    
                                    goto label_14029c60f
                                
                            label_14029c6d9:
                                arg8[0].o = _mm256_extracti128_si256(arg9, 1)
                                
                                if ((temp0_711 & 4) == 0)
                                label_14029c6e9:
                                    arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                    
                                    if ((temp0_711 & 8) != 0)
                                        goto label_14029c62e
                                    
                                    goto label_14029c6f8
                                
                            label_14029c60f:
                                arg9[0].o = _mm256_extracti128_si256(zmm3, 1)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg9[0].q, 2)
                                arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                
                                if ((temp0_711 & 8) != 0)
                                label_14029c62e:
                                    zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    int64_t rsi_22 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rsi_22, 3)
                                    zmm3 = _mm256_add_epi64(arg12, arg8)
                                    
                                    if ((temp0_711 & 0x10) == 0)
                                        goto label_14029c706
                                    
                                    goto label_14029c652
                                
                            label_14029c6f8:
                                zmm3 = _mm256_add_epi64(arg12, arg8)
                                
                                if ((temp0_711 & 0x10) == 0)
                                label_14029c706:
                                    
                                    if ((temp0_711 & 0x20) != 0)
                                        goto label_14029c661
                                    
                                    goto label_14029c710
                                
                            label_14029c652:
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm3[0].q, 4)
                                
                                if ((temp0_711 & 0x20) != 0)
                                label_14029c661:
                                    int64_t rsi_24 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rsi_24, 5)
                                    
                                    if ((temp0_711 & 0x40) == 0)
                                        goto label_14029c71a
                                    
                                    goto label_14029c676
                                
                            label_14029c710:
                                
                                if ((temp0_711 & 0x40) != 0)
                                label_14029c676:
                                    arg8[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg8[0], 6)
                                    
                                    if (temp0_711 s< 0)
                                    label_14029c68f:
                                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                                        int64_t rdi_38 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rdi_38, 7)
                                else
                                label_14029c71a:
                                    
                                    if (temp0_711 s< 0)
                                        goto label_14029c68f
                                
                                zmm3 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg6[0].o), arg17)
                                    & arg7
                                arg8[0].o = zx.o(0)
                                arg9 = zmm3 & arg15
                                
                                if (_mm256_movemask_ps(arg9) != i_2)
                                    arg8 = zmm3 ^ arg7
                                
                                arg11 = _mm256_blendv_ps(arg11, arg16, zmm3)
                                zmm3 = _mm256_sub_epi32(arg10, arg5)
                                arg7 = _mm256_cmpgt_epi32(zmm3, zmm1) & not.32(arg8)
                                arg8 = arg7 & arg15
                                i_2 = _mm256_movemask_ps(arg8)
                                arg16 = arg10
                            while (i_2 != 0)
                    
                    arg5 = _mm256_andnot_ps(arg13, arg15)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5 = __vxorps_ymmqq_ymmqq_memqq(arg13, data_142fc9420)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        arg11 = _mm256_blendv_ps(arg11, zmm3, arg5)
                        arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                        arg7 = __vpaddd_ymmqq_ymmqq_memqq(arg16, var_640_1)
                        arg5 &= _mm256_cmpgt_epi32(arg7, zmm3)
                        arg9 = arg5 & arg15
                        
                        for (int32_t i_3 = _mm256_movemask_ps(arg9); i_3 != 0; 
                                i_3 = _mm256_movemask_ps(arg9))
                            arg10 = _mm256_add_epi32(arg7, arg7)
                            zmm3 = _mm256_add_epi64(zmm0, _mm256_cvtepi32_epi64(arg10[0].o))
                            char temp0_749 = _mm256_movemask_ps(arg9)
                            
                            if ((temp0_749 & 1) == 0)
                                if ((temp0_749 & 2) != 0)
                                    goto label_14029c7d4
                                
                                goto label_14029c8b5
                            
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm3[0].q, 0)
                            
                            if ((temp0_749 & 2) != 0)
                            label_14029c7d4:
                                uint16_t* rsi_27 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rsi_27, 1)
                                arg9[0].o = _mm256_extracti128_si256(arg10, 1)
                                
                                if ((temp0_749 & 4) == 0)
                                    goto label_14029c8c5
                                
                                goto label_14029c7ef
                            
                        label_14029c8b5:
                            arg9[0].o = _mm256_extracti128_si256(arg10, 1)
                            
                            if ((temp0_749 & 4) == 0)
                            label_14029c8c5:
                                arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                                
                                if ((temp0_749 & 8) != 0)
                                    goto label_14029c80e
                                
                                goto label_14029c8d4
                            
                        label_14029c7ef:
                            arg6[0].o = _mm256_extracti128_si256(zmm3, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg6[0].q, 2)
                            arg9 = _mm256_cvtepi32_epi64(arg9[0].o)
                            
                            if ((temp0_749 & 8) != 0)
                            label_14029c80e:
                                zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                                uint16_t* rsi_29 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rsi_29, 3)
                                zmm3 = _mm256_add_epi64(arg12, arg9)
                                
                                if ((temp0_749 & 0x10) == 0)
                                    goto label_14029c8e2
                                
                                goto label_14029c832
                            
                        label_14029c8d4:
                            zmm3 = _mm256_add_epi64(arg12, arg9)
                            
                            if ((temp0_749 & 0x10) == 0)
                            label_14029c8e2:
                                
                                if ((temp0_749 & 0x20) != 0)
                                    goto label_14029c841
                                
                                goto label_14029c8ec
                            
                        label_14029c832:
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm3[0].q, 4)
                            
                            if ((temp0_749 & 0x20) != 0)
                            label_14029c841:
                                uint16_t* rsi_31 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rsi_31, 5)
                                
                                if ((temp0_749 & 0x40) == 0)
                                    goto label_14029c8f6
                                
                                goto label_14029c856
                            
                        label_14029c8ec:
                            
                            if ((temp0_749 & 0x40) != 0)
                            label_14029c856:
                                arg6[0].o = _mm256_extracti128_si256(zmm3, 1)
                                arg8[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg6[0].q, 6)
                                
                                if (temp0_749 s< 0)
                                label_14029c86f:
                                    zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    uint16_t* rdi_41 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rdi_41, 7)
                            else
                            label_14029c8f6:
                                
                                if (temp0_749 s< 0)
                                    goto label_14029c86f
                            
                            zmm3 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg8[0].o), arg17)
                            arg9 = zmm3 & not.32(arg5)
                            zmm3[0].o = zx.o(0)
                            arg6 = arg9 & arg15
                            int32_t temp0_755 = _mm256_movemask_ps(arg6)
                            arg10[0].o = zx.o(0)
                            
                            if (temp0_755 != i_3)
                                arg10 = arg9 ^ arg5
                            
                            arg11 = _mm256_blendv_ps(arg11, arg7, arg9)
                            arg7 = _mm256_add_epi32(arg7, arg16)
                            arg5 = _mm256_cmpgt_epi32(arg7, zmm3) & arg10
                            arg9 = arg5 & arg15
                    
                    arg9[0].o = zx.o(0)
                    arg10 = var_740_1
                    arg5[0].o = zx.o(0)
                    arg5 = _mm256_blendv_ps(arg5, arg11, arg15)
                    arg6 = arg5
                    zmm3 = _mm256_add_epi32(arg5, arg5)
                    arg5 = _mm256_add_epi64(zmm0, _mm256_cvtepi32_epi64(zmm3[0].o))
                    
                    if ((rdx_19 & 1) == 0)
                        arg16 = var_6e0_1
                        arg11 = var_680_3
                        
                        if ((rdx_19 & 2) != 0)
                            goto label_14029d06d
                        
                        goto label_14029c995
                    
                    arg8[0].o = __vpbroadcastw_xmmdq_memw(*arg5[0].q)
                    arg16 = var_6e0_1
                    arg11 = var_680_3
                    
                    if ((rdx_19 & 2) != 0)
                    label_14029d06d:
                        uint16_t* rbx_36 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rbx_36, 1)
                        arg13 = arg6
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        
                        if ((rdx_19 & 4) == 0)
                            goto label_14029c9a8
                        
                        goto label_14029d08b
                    
                label_14029c995:
                    arg13 = arg6
                    zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                    
                    if ((rdx_19 & 4) == 0)
                    label_14029c9a8:
                        zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
                        
                        if ((rdx_19 & 8) != 0)
                            goto label_14029d0a9
                        
                        goto label_14029c9b6
                    
                label_14029d08b:
                    arg6[0].o = _mm256_extracti128_si256(arg5, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg6[0].q, 2)
                    zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
                    
                    if ((rdx_19 & 8) != 0)
                    label_14029d0a9:
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        uint16_t* rbx_38 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rbx_38, 3)
                        arg5 = _mm256_add_epi64(arg12, zmm3)
                        
                        if ((rdx_19 & 0x10) == 0)
                            goto label_14029c9c3
                        
                        goto label_14029d0cc
                    
                label_14029c9b6:
                    arg5 = _mm256_add_epi64(arg12, zmm3)
                    
                    if ((rdx_19 & 0x10) == 0)
                    label_14029c9c3:
                        
                        if ((rdx_19 & 0x20) != 0)
                            goto label_14029d0da
                        
                        goto label_14029c9cc
                    
                label_14029d0cc:
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg5[0].q, 4)
                    
                    if ((rdx_19 & 0x20) != 0)
                    label_14029d0da:
                        uint16_t* rbx_40 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rbx_40, 5)
                        
                        if ((rdx_19 & 0x40) == 0)
                            goto label_14029c9d5
                        
                        goto label_14029d0ee
                    
                label_14029c9cc:
                    
                    if ((rdx_19 & 0x40) != 0)
                    label_14029d0ee:
                        zmm3[0].o = _mm256_extracti128_si256(arg5, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm3[0].q, 6)
                        
                        if (temp0_651.b s< 0)
                        label_14029d106:
                            arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                            uint16_t* rbx_42 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rbx_42, 7)
                    else
                    label_14029c9d5:
                        
                        if (temp0_651.b s< 0)
                            goto label_14029d106
                    
                    arg5 = _mm256_sub_epi32(arg13, _mm256_cmpeq_epi32(arg5, arg5))
                    zmm3[0].o = zx.o(0)
                    arg17 = _mm256_blendv_ps(zmm3, arg5, arg15)
                    arg5 = _mm256_cmpgt_epi32(arg17, zmm1) & arg15
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg17 = _mm256_blendv_ps(arg17, zmm1, arg5)
                    
                    zmm1 = var_6a0_2
                    arg6 = _mm256_add_epi32(arg17, arg17)
                    arg5 = _mm256_cvtepi32_epi64(arg6[0].o)
                    zmm3 = _mm256_add_epi64(zmm0, arg5)
                    
                    if ((rdx_19 & 1) == 0)
                        if ((rdx_19 & 2) != 0)
                            goto label_14029d12f
                        
                        goto label_14029ca2f
                    
                    arg5[0].o = __vpbroadcastw_xmmdq_memw(*zmm3[0].q)
                    
                    if ((rdx_19 & 2) != 0)
                    label_14029d12f:
                        int64_t rbx_44 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rbx_44, 1)
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        
                        if ((rdx_19 & 4) == 0)
                            goto label_14029ca3e
                        
                        goto label_14029d149
                    
                label_14029ca2f:
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    
                    if ((rdx_19 & 4) == 0)
                    label_14029ca3e:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((rdx_19 & 8) != 0)
                            goto label_14029d167
                        
                        goto label_14029ca4c
                    
                label_14029d149:
                    arg7[0].o = _mm256_extracti128_si256(zmm3, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg7[0].q, 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((rdx_19 & 8) != 0)
                    label_14029d167:
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        int64_t rbx_46 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rbx_46, 3)
                        zmm3 = _mm256_add_epi64(arg12, arg6)
                        
                        if ((rdx_19 & 0x10) == 0)
                            goto label_14029ca59
                        
                        goto label_14029d18a
                    
                label_14029ca4c:
                    zmm3 = _mm256_add_epi64(arg12, arg6)
                    
                    if ((rdx_19 & 0x10) == 0)
                    label_14029ca59:
                        arg12 = var_660_1
                        
                        if ((rdx_19 & 0x20) != 0)
                            goto label_14029d1a1
                        
                        goto label_14029ca6b
                    
                label_14029d18a:
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm3[0].q, 4)
                    arg12 = var_660_1
                    
                    if ((rdx_19 & 0x20) != 0)
                    label_14029d1a1:
                        int64_t rbx_48 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rbx_48, 5)
                        
                        if ((rdx_19 & 0x40) == 0)
                            goto label_14029ca74
                        
                        goto label_14029d1b5
                    
                label_14029ca6b:
                    
                    if ((rdx_19 & 0x40) != 0)
                    label_14029d1b5:
                        arg6[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg6[0].q, 6)
                        
                        if (temp0_651.b s< 0)
                        label_14029d1cd:
                            zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                            int64_t rcx_160 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rcx_160, 7)
                    else
                    label_14029ca74:
                        
                        if (temp0_651.b s< 0)
                            goto label_14029d1cd
                    
                    zmm3 = _mm256_cvtepu16_epi32(arg8[0].o)
                    arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                    arg8 = var_720_1
                    arg6[0].o = zx.o(0)
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    
                    if (arg20 != 1)
                        goto label_14029d41c
                
                arg10 = _mm256_blendv_ps(arg6, arg7, arg10)
        
        int32_t rcx_161
        rcx_161.b = r12.d == 3
        arg5[0].o = zx.o(neg.d(rcx_161))
        arg5 = _mm256_broadcastd_epi32(arg5[0])
        arg5 &= _mm256_cmpgt_epi32(arg8, __vpbroadcastd_ymmqq_memd(1))
        zmm3 = _mm256_broadcast_ss(3.36311631e-44f)
        arg8 = _mm256_blendv_ps(arg9, zmm3, arg5)
        uint64_t rcx_163 = zx.q(r12.d)
        float var_600_1[0x8]
        float var_5e0_1[0x8]
        float var_5c0_1[0x8]
        
        if (r12.d u> 6)
        label_14029d506:
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            var_600_1 = _mm256_maskstore_ps(arg12, arg5)
            var_5e0_1 = _mm256_maskstore_ps(arg12, arg5)
            var_5c0_1 = _mm256_maskstore_ps(arg12, arg5)
        else
            arg7 = _mm256_mullo_epi32(arg13, arg11)
            
            switch (rcx_163)
                case 0, 1
                    arg5 = _mm256_add_epi32(_mm256_add_epi32(arg16, arg8), arg7)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    arg6[0].o = zx.o(0)
                    int32_t temp0_965
                    int32_t temp1_29
                    temp0_965, temp1_29 = _mm256_i32gather_ps(arg6, *(arg4 + arg5[0].q), arg12)
                    arg6 = temp0_965
                    arg7 = _mm256_add_epi32(arg5, zmm1)
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    zmm0 = arg11
                    int32_t temp0_968
                    int32_t temp1_30
                    temp0_968, temp1_30 = _mm256_i32gather_ps(arg9, *(arg4 + arg7[0].q), arg12)
                    arg11 = zmm0
                    int32_t temp0_971
                    int32_t temp1_31
                    temp0_971, temp1_31 = _mm256_i32gather_ps(zmm3, 
                        *(arg4 + _mm256_add_epi32(arg5, __vpbroadcastd_ymmqq_memd(8))[0].q), arg12)
                    zmm3 = temp0_971
                    arg7 = temp1_31
                    var_600_1 = _mm256_maskstore_ps(arg12, arg6)
                    var_5e0_1 = _mm256_maskstore_ps(arg12, temp0_968)
                    var_5c0_1 = _mm256_maskstore_ps(arg12, zmm3)
                case 2
                    arg6 = _mm256_add_epi32(_mm256_add_epi32(arg16, arg8), arg7)
                    arg5 = arg12 & arg6
                    int64_t r8_6 = sx.q(arg5[0])
                    int64_t r15_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                    int32_t temp0_981 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                    int64_t r10_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                    int64_t r14_6 = sx.q(arg5[0])
                    int64_t rbx_54 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                    int32_t temp0_985 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                    int64_t rdi_77 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                    arg5[0].o = zx.o(*(arg4 + r8_6))
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r15_6), 1)
                    arg5[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + sx.q(temp0_981)), 2)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r10_5), 3)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r14_6), 4)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rbx_54), 5)
                    arg5[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + sx.q(temp0_985)), 6)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rdi_77), 7)
                    zmm3 = arg12 & __vpaddd_ymmqq_ymmqq_memqq(arg6, var_700_3)
                    int64_t r8_7 = sx.q(zmm3[0])
                    int64_t r15_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    int64_t r10_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    int64_t r11_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                    int64_t r14_7 = sx.q(zmm3[0])
                    int64_t rbx_57 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    int64_t rdi_80 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    int32_t temp0_1001 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
                    zmm3[0].o = zx.o(*(arg4 + r8_7))
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r15_7), 1)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r10_6), 2)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r11_13), 3)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r14_7), 4)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + rbx_57), 5)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + rdi_80), 6)
                    zmm3[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + sx.q(temp0_1001)), 7)
                    arg6 = arg12 & _mm256_add_epi32(arg6, zmm1)
                    float rdx_29 = arg6[0]
                    int64_t r8_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int64_t r15_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int64_t rsi_67 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    float rbx_59 = arg6[0]
                    int64_t rdi_83 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int64_t r11_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int64_t r14_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = zx.o(*(arg4 + sx.q(rdx_29)))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r8_8), 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r15_8), 2)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rsi_67), 3)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(rbx_59)), 4)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdi_83), 5)
                    arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                    arg7 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, arg7))
                    arg9 = _mm256_broadcast_ss(32767f)
                    arg5 = _mm256_div_ps(arg5, arg9)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r11_14), 6)
                    zmm3 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm3[0].o), 
                            arg7)), 
                        arg9)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r14_8), 7)
                    arg6 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 
                            arg7)), 
                        arg9)
                    arg7 = _mm256_broadcast_ss(128f)
                    arg5 = _mm256_mul_ps(arg5, arg7)
                    zmm3 = _mm256_mul_ps(zmm3, arg7)
                    arg6 = _mm256_mul_ps(arg6, arg7)
                    var_600_1 = _mm256_maskstore_ps(arg12, arg5)
                    var_5e0_1 = _mm256_maskstore_ps(arg12, zmm3)
                    var_5c0_1 = _mm256_maskstore_ps(arg12, arg6)
                case 3
                    arg6[0].o = zx.o(0)
                    int32_t temp0_1045
                    int32_t temp1_32
                    temp0_1045, temp1_32 = _mm256_i32gather_ps(arg6, *(arg4 + arg16[0].q), arg12)
                    arg5 = temp1_32
                    zmm3 = _mm256_add_epi32(arg16, zmm1)
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    int32_t temp0_1048
                    int32_t temp1_33
                    temp0_1048, temp1_33 = _mm256_i32gather_ps(arg5, *(arg4 + zmm3[0].q), arg12)
                    zmm3 = __vpbroadcastd_ymmqq_memd(8)
                    arg9 = _mm256_add_epi32(arg16, zmm3)
                    zmm3[0].o = zx.o(0)
                    int32_t var_680_4[0x8] = arg11
                    int32_t temp0_1051
                    int32_t temp1_34
                    temp0_1051, temp1_34 = _mm256_i32gather_ps(zmm3, *(arg4 + arg9[0].q), arg12)
                    zmm3 = temp0_1051
                    arg11 = temp1_34
                    arg9 = _mm256_add_epi32(arg16, __vpbroadcastd_ymmqq_memd(0xc))
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    uint32_t var_6a0_3[0x8] = zmm1
                    zmm1 = arg12
                    int32_t temp0_1055
                    int32_t temp1_35
                    temp0_1055, temp1_35 = _mm256_i32gather_ps(arg11, *(arg4 + arg9[0].q), arg12)
                    arg12 = temp1_35
                    arg9 = _mm256_add_epi32(arg16, __vpbroadcastd_ymmqq_memd(0x10))
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    uint32_t var_640_2[0x8] = arg13
                    int32_t temp0_1059
                    int32_t temp1_36
                    temp0_1059, temp1_36 = _mm256_i32gather_ps(arg12, *(arg4 + arg9[0].q), zmm1)
                    arg9[0].o = zx.o(0)
                    arg13 = _mm256_add_epi32(arg16, __vpbroadcastd_ymmqq_memd(0x14))
                    zmm0[0].o = zx.o(0)
                    int32_t temp0_1062
                    int32_t temp1_37
                    temp0_1062, temp1_37 = _mm256_i32gather_ps(zmm0, *(arg4 + arg13[0].q), zmm1)
                    zmm0 = temp0_1062
                    int32_t temp0_1065
                    int32_t temp1_38
                    temp0_1065, temp1_38 = _mm256_i32gather_epi32(arg9, 
                        *(arg4 + _mm256_add_epi32(_mm256_add_epi32(arg16, arg8), arg7)[0].q), zmm1)
                    arg9 = temp0_1065
                    arg7 = _mm256_srli_epi32(arg9, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg13 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                        arg9 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                        __vpbroadcastd_ymmqq_memd(0xfffffe01)))
                    arg15 = _mm256_broadcast_ss(511f)
                    arg13 = _mm256_fmadd_ps(_mm256_div_ps(arg13, arg15), temp0_1055, temp0_1045)
                    arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg7 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, arg6))
                    arg11 = _mm256_broadcast_ss(1023f)
                    arg7 = _mm256_div_ps(arg7, arg11)
                    arg9 = _mm256_srli_epi32(arg9, 0x15)
                    arg7 = _mm256_fmadd_ps(arg7, temp0_1059, temp0_1048)
                    arg12 = zmm1
                    zmm1 = var_6a0_3
                    arg5 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(arg9, arg6)), arg11)
                    arg11 = var_680_4
                    arg5 = _mm256_fmadd_ps(arg5, zmm0, zmm3)
                    var_600_1 = _mm256_maskstore_ps(arg12, arg13)
                    arg13 = var_640_2
                    var_5e0_1 = _mm256_maskstore_ps(arg12, arg7)
                    var_5c0_1 = _mm256_maskstore_ps(arg12, arg5)
                case 4, 5, 6
                    goto label_14029d506
        
        arg5 = _mm256_cmpeq_epi32(arg13, arg17)
        arg9 = arg5 & not.32(arg12)
        arg5[0].o = _mm256_extracti128_si256(arg9, 1)
        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0].o, arg5[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            uint32_t var_4a0_1[0x8]
            uint32_t var_480_1[0x8]
            float var_460_1[0x8]
            
            if (r12.d u> 6)
            label_14029d969:
                zmm0[0].o = zx.o(0)
                var_4a0_1 = _mm256_maskstore_ps(arg9, zmm0)
                var_480_1 = _mm256_maskstore_ps(arg9, zmm0)
                var_460_1 = _mm256_maskstore_ps(arg9, zmm0)
            else
                arg7 = _mm256_mullo_epi32(arg17, arg11)
                
                switch (rcx_163)
                    case 0, 1
                        zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg16, arg8), arg7)
                        arg6 = zmm1
                        zmm1[0].o = zx.o(0)
                        arg5[0].o = zx.o(0)
                        int32_t temp0_1097
                        int32_t temp1_39
                        temp0_1097, temp1_39 = _mm256_i32gather_ps(arg5, *(arg4 + zmm0[0].q), arg9)
                        zmm3 = _mm256_add_epi32(zmm0, arg6)
                        arg6[0].o = zx.o(0)
                        int32_t temp0_1099
                        int32_t temp1_40
                        temp0_1099, temp1_40 = _mm256_i32gather_ps(arg6, *(arg4 + zmm3[0].q), arg9)
                        int32_t temp0_1102
                        int32_t temp1_41
                        temp0_1102, temp1_41 = _mm256_i32gather_ps(zmm1, 
                            *(arg4 + _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))[0].q), 
                            arg9)
                        var_4a0_1 = _mm256_maskstore_ps(arg9, temp0_1097)
                        var_480_1 = _mm256_maskstore_ps(arg9, temp0_1099)
                        var_460_1 = _mm256_maskstore_ps(arg9, temp0_1102)
                    case 2
                        arg5 = _mm256_add_epi32(_mm256_add_epi32(arg16, arg8), arg7)
                        zmm3 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm3[0].o), 0x1f), 0x1f)
                        zmm0 = zmm3 & arg5
                        int64_t r8_9 = sx.q(zmm0[0])
                        int64_t r14_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_1113 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t r10_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rsi_69 = sx.q(zmm0[0])
                        int64_t rcx_168 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_1117 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t rdi_86 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(arg4 + r8_9))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_9), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                            *(arg4 + sx.q(temp0_1113)), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_8), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_69), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_168), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                            *(arg4 + sx.q(temp0_1117)), 6)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_86), 7)
                        zmm0 = zmm3 & __vpaddd_ymmqq_ymmqq_memqq(arg5, var_700_3)
                        int64_t r8_10 = sx.q(zmm0[0])
                        int64_t r14_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r10_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t r11_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rsi_71 = sx.q(zmm0[0])
                        int64_t rcx_171 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t rdx_39 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int32_t temp0_1133 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o = zx.o(*(arg4 + r8_10))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_10), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_9), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_16), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_71), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_171), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_39), 6)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                            *(arg4 + sx.q(temp0_1133)), 7)
                        zmm0 = zmm3 & _mm256_add_epi32(arg5, zmm1)
                        uint32_t rcx_173 = zmm0[0]
                        int64_t r8_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r11_17 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t rdi_90 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        uint32_t rsi_72 = zmm0[0]
                        int64_t rdx_42 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r10_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t rbx_68 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_173)))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_11), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_17), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_90), 3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rsi_72)), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_42), 5)
                        zmm1 = _mm256_cvtepu16_epi32(arg6[0].o)
                        arg5 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg5))
                        zmm3 = _mm256_broadcast_ss(32767f)
                        zmm1 = _mm256_div_ps(zmm1, zmm3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_10), 6)
                        arg6 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg7[0].o), 
                                arg5)), 
                            zmm3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_68), 7)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                arg5)), 
                            zmm3)
                        arg5 = _mm256_broadcast_ss(128f)
                        zmm1 = _mm256_mul_ps(zmm1, arg5)
                        zmm3 = _mm256_mul_ps(arg6, arg5)
                        zmm0 = _mm256_mul_ps(zmm0, arg5)
                        var_4a0_1 = _mm256_maskstore_ps(arg9, zmm1)
                        var_480_1 = _mm256_maskstore_ps(arg9, zmm3)
                        var_460_1 = _mm256_maskstore_ps(arg9, zmm0)
                    case 3
                        arg5[0].o = zx.o(0)
                        int32_t temp0_1177
                        int32_t temp1_42
                        temp0_1177, temp1_42 = _mm256_i32gather_ps(arg5, *(arg4 + arg16[0].q), arg9)
                        zmm0 = _mm256_add_epi32(arg16, zmm1)
                        zmm3[0].o = zx.o(0)
                        int32_t temp0_1179
                        int32_t temp1_43
                        temp0_1179, temp1_43 = _mm256_i32gather_ps(zmm3, *(arg4 + zmm0[0].q), arg9)
                        zmm0 = _mm256_add_epi32(arg16, __vpbroadcastd_ymmqq_memd(8))
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        int32_t temp0_1183
                        int32_t temp1_44
                        temp0_1183, temp1_44 = _mm256_i32gather_ps(arg6, *(arg4 + zmm0[0].q), arg9)
                        zmm0 = _mm256_add_epi32(arg16, __vpbroadcastd_ymmqq_memd(0xc))
                        arg11[0].o = zx.o(0)
                        int32_t temp0_1186
                        int32_t temp1_45
                        temp0_1186, temp1_45 = _mm256_i32gather_ps(arg11, *(arg4 + zmm0[0].q), arg9)
                        arg11 = temp0_1186
                        zmm1 = temp1_45
                        zmm0 = _mm256_add_epi32(arg16, __vpbroadcastd_ymmqq_memd(0x10))
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg17 = arg16
                        arg16 = arg12
                        int32_t temp0_1190
                        int32_t temp1_46
                        temp0_1190, temp1_46 = _mm256_i32gather_ps(zmm1, *(arg4 + zmm0[0].q), arg9)
                        zmm0[0].o = zx.o(0)
                        arg12 = _mm256_add_epi32(arg17, __vpbroadcastd_ymmqq_memd(0x14))
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        int32_t temp0_1194
                        int32_t temp1_47
                        temp0_1194, temp1_47 = _mm256_i32gather_ps(arg13, *(arg4 + arg12[0]), arg9)
                        arg13 = temp0_1194
                        int32_t temp0_1197
                        int32_t temp1_48
                        temp0_1197, temp1_48 = _mm256_i32gather_epi32(zmm0, 
                            *(arg4 + _mm256_add_epi32(_mm256_add_epi32(arg17, arg8), arg7)[0].q), 
                            arg9)
                        zmm0 = temp0_1197
                        arg7 = _mm256_srli_epi32(zmm0, 0x15)
                        arg8 = _mm256_srli_epi32(zmm0, 0xa)
                        arg12 = __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                zmm0 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg8 &= arg12
                        arg12 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg8 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg8, arg12))
                        arg15 = _mm256_broadcast_ss(1023f)
                        arg8 = _mm256_div_ps(arg8, arg15)
                        zmm0 = _mm256_fmadd_ps(zmm0, arg11, temp0_1177)
                        arg8 = _mm256_fmadd_ps(arg8, temp0_1190, temp0_1179)
                        zmm1 = _mm256_add_epi32(arg7, arg12)
                        arg12 = arg16
                        zmm1 = _mm256_fmadd_ps(_mm256_div_ps(_mm256_cvtepi32_ps(zmm1), arg15), 
                            arg13, temp0_1183)
                        var_4a0_1 = _mm256_maskstore_ps(arg9, zmm0)
                        var_480_1 = _mm256_maskstore_ps(arg9, arg8)
                        var_460_1 = _mm256_maskstore_ps(arg9, zmm1)
                    case 4, 5, 6
                        goto label_14029d969
            
            zmm3 = var_600_1
            arg6 = var_5e0_1
            arg7 = var_5c0_1
            zmm0 = _mm256_sub_ps(var_4a0_1, zmm3)
            zmm1 = _mm256_sub_ps(var_480_1, arg6)
            arg5 = _mm256_sub_ps(var_460_1, arg7)
            zmm0 = _mm256_fmadd_ps(zmm0, arg10, zmm3)
            zmm1 = _mm256_fmadd_ps(zmm1, arg10, arg6)
            arg5 = _mm256_fmadd_ps(arg5, arg10, arg7)
            var_600_1 = _mm256_maskstore_ps(arg9, zmm0)
            var_5e0_1 = _mm256_maskstore_ps(arg9, zmm1)
            var_5c0_1 = _mm256_maskstore_ps(arg9, arg5)
        
        arg5[0].o = var_600_1[0].o
        arg11[0].o = var_600_1[4].o
        arg6[0].o = var_5e0_1[0].o
        arg7[0].o = var_5e0_1[4].o
        arg8[0].o = var_5c0_1[0].o
        arg9[0].o = var_5c0_1[4].o
        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
        zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg10[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg8[0].o, 0x28)
        int128_t var_280 = zmm3[0].o
        zmm3[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg10[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_270_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg8[0].o, 0xa8)
        int128_t var_260_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
        int128_t var_250_1 = zmm0[0].o
        zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg7[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg9[0].o, 0x28)
        int128_t var_240_1 = arg5[0].o
        arg5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_230_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg7[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg9[0].o, 0xa8)
        int128_t var_220_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        int128_t var_210_1 = zmm0[0].o
        uint64_t i_4 = zx.q(_mm256_movemask_ps(arg12))
        
        do
            uint64_t rcx_177 = _tzcnt_u64(i_4)
            float var_120[0x8] = arg14
            zmm0[0].o = (&var_280)[rcx_177]
            *(arg1 + sx.q(var_120[zx.q(rcx_177.d) & 7]) * 0x30 + 0x10) = zmm0[0].o
            i_4 &= rol.q(-2, rcx_177.b)
        while (i_4 != 0)
else
    zmm0[0].o = zx.o(arg4)
    zmm1[0].o = zx.o(rbx_1)
    arg11 = _mm256_broadcastd_epi32(zmm1[0])
    zmm1[0].o = 3
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm0 = _mm256_broadcastq_epi64(zmm0[0].q)
    int64_t var_1a0_1[0x4] = zmm0
    zmm0[0].o = zx.o(0)
    zmm1[0].o = arg19
    int32_t rbx_2
    rbx_2.b = zx.o(0) f>= zmm1[0]
    zmm0[0].o = zx.o(neg.d(rbx_2))
    zmm0 = _mm256_broadcastd_epi32(zmm0[0])
    uint32_t var_140_1[0x8] = zmm0
    int32_t rbx_4 = arg18 - 2
    zmm0[0].o = arg5[0].o
    zmm0[0] = float.s(arg18 - 1)
    zmm0[0].o = zmm0[0].o f* zmm1[0]
    int32_t rcx_3 = int.d(zmm0[0]) s>> 0x1f
    int32_t rcx_4 = rcx_3 & not.d(rcx_3)
    
    if (rbx_4 s> rcx_4)
        rbx_4 = rcx_4
    
    zmm1 = _mm256_broadcastss_ps(zmm1[0].o)
    float var_1c0_1[0x8] = zmm1
    zmm1[0].o = zx.o(rbx_4)
    arg16 = _mm256_broadcastd_epi32(zmm1[0])
    zmm0 = _mm256_broadcastss_ps(zmm0[0].o)
    float var_200_1[0x8] = zmm0
    int32_t rcx_5
    rcx_5.b = r12.d == 3
    zmm0[0].o = zx.o(neg.d(rcx_5))
    uint32_t var_160_1[0x8] = _mm256_broadcastd_epi32(zmm0[0])
    r14 = 0f
    float var_6a0_1[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
    float var_1e0_1[0x8] = _mm256_broadcast_sd(-nan.0)
    var_4c0 = _mm256_broadcast_ss(2.80259693e-45f)
    int32_t var_4e0_1[0x8] = _mm256_broadcast_ss(1.40129846e-45f)
    zmm0 = _mm256_broadcast_ss(3.36311631e-44f)
    float var_180_1[0x8] = zmm0
    arg9[0].o = data_142fc92e0
    int64_t var_608_1 = arg3
    int64_t var_610_1 = arg2
    int32_t var_744_1 = r11_4
    int32_t var_520_1[0x8] = arg11
    int32_t var_340_1[0x8] = arg16
    
    do
        zmm0[0].o = zx.o(r14)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_broadcastd_epi32(zmm0[0]), 3), 
            data_143442140)
        arg17[0].o = zx.o(0)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        int32_t temp0_48
        int32_t temp1_1
        temp0_48, temp1_1 = _mm256_i32gather_epi32(arg17, *(arg2 + zmm0[0].q), zmm1)
        arg17 = temp0_48
        zmm1 = temp1_1
        zmm3 = var_6a0_1
        zmm1[0].o = zx.o(0)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        int32_t temp0_50
        int32_t temp1_2
        temp0_50, temp1_2 = _mm256_i32gather_epi32(zmm1, *(arg2 + (zmm0 | zmm3)[0].q), arg5)
        zmm1 = temp0_50
        arg5 = temp1_2
        zmm0 = _mm256_slli_epi32(zmm1, 4)
        arg10[0].o = zx.o(0)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        int32_t temp0_53
        int32_t temp1_3
        temp0_53, temp1_3 = _mm256_i32gather_epi32(arg10, *(arg3 + zmm0[0].q), zmm1)
        arg10 = temp0_53
        zmm1 = temp1_3
        arg13[0].o = zx.o(0)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        int32_t temp0_55
        int32_t temp1_4
        temp0_55, temp1_4 = _mm256_i32gather_epi32(arg13, *(arg3 + (zmm0 | zmm3)[0].q), zmm1)
        arg13 = temp0_55
        zmm1 = temp1_4
        zmm0 = _mm256_cmpgt_epi32(var_4c0, arg13) | var_140_1
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm1[0].o = zx.o(0)
            arg14 = _mm256_blendv_ps(arg14, zmm1, zmm0)
            arg7 = _mm256_blendv_ps(arg7, zmm1, zmm0)
        
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        zmm1 = zmm0 ^ arg5
        int32_t temp0_61 = _mm256_movemask_ps(zmm1)
        zmm3[0].o = zx.o(0)
        float var_6e0[0x8]
        int128_t var_660
        int128_t var_640
        
        if (temp0_61 == 0)
            var_640 = arg6[0].o
            arg9[0].o = var_660
        else
            arg8 = _mm256_add_epi32(arg13, arg5)
            zmm0[0].o = arg19
            
            if (zmm0[0].o f>= 1f)
                var_640 = arg6[0].o
                arg14 = _mm256_blendv_ps(arg14, arg8, zmm1)
                arg7 = _mm256_blendv_ps(arg7, arg8, zmm1)
                arg9[0].o = var_660
            else
                float var_680_1[0x8] = arg7
                zmm0[0].o = _mm256_extracti128_si256(arg10, 1)
                arg5 = _mm256_mullo_epi32(arg13, arg11)
                int32_t var_500_1[0x8] = arg10
                zmm3 = _mm256_cvtepi32_epi64(arg10[0].o)
                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                arg7[0].o = _mm256_extracti128_si256(arg5, 1)
                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                int64_t var_700_1[0x4] = arg8
                zmm0 = _mm256_add_epi64(_mm256_add_epi64(var_1a0_1, zmm0), arg7)
                arg8 = var_700_1
                arg5 = _mm256_add_epi64(_mm256_add_epi64(var_1a0_1, zmm3), arg5)
                zmm3 = var_1e0_1
                arg12 = zmm0 & zmm3
                arg10 = arg5 & zmm3
                arg11 = _mm256_min_epi32(
                    __vpmaxsd_ymmqq_ymmqq_memqq(
                        _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg8), 
                            var_1c0_1)), 
                        data_142fc9440), 
                    arg8)
                var_6e0 = arg14
                uint32_t var_420_1[0x8] = arg13
                int32_t var_360_1[0x8] = arg11
                
                if (arg18 s< 0x100)
                    zmm0 = _mm256_cvtepi32_epi64(arg11[0].o)
                    arg5 = _mm256_add_epi64(arg10, zmm0)
                    char r15_1 = temp0_61.b
                    int128_t var_380
                    arg8[0].o = var_380
                    
                    if ((r15_1 & 1) == 0)
                        if ((r15_1 & 2) != 0)
                            goto label_14029ae19
                        
                        goto label_14029aaec
                    
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*arg5[0].q), 0)
                    
                    if ((r15_1 & 2) != 0)
                    label_14029ae19:
                        uint16_t rcx_74[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_74, 1)
                        zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                        
                        if ((r15_1 & 4) == 0)
                            goto label_14029aafc
                        
                        goto label_14029ae31
                    
                label_14029aaec:
                    zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                    
                    if ((r15_1 & 4) == 0)
                    label_14029aafc:
                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                        
                        if ((r15_1 & 8) != 0)
                            goto label_14029ae53
                        
                        goto label_14029ab0b
                    
                label_14029ae31:
                    zmm3[0].o = _mm256_extracti128_si256(arg5, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm3[0].q), 2)
                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                    
                    if ((r15_1 & 8) != 0)
                    label_14029ae53:
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        uint16_t rcx_78[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_78, 3)
                        zmm0 = _mm256_add_epi64(arg12, zmm0)
                        
                        if ((r15_1 & 0x10) == 0)
                            goto label_14029ab19
                        
                        goto label_14029ae7d
                    
                label_14029ab0b:
                    zmm0 = _mm256_add_epi64(arg12, zmm0)
                    
                    if ((r15_1 & 0x10) == 0)
                    label_14029ab19:
                        
                        if ((r15_1 & 0x20) != 0)
                            goto label_14029ae92
                        
                        goto label_14029ab23
                    
                label_14029ae7d:
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm0[0].q), 4)
                    
                    if ((r15_1 & 0x20) != 0)
                    label_14029ae92:
                        uint16_t rcx_82[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_82, 5)
                        
                        if ((r15_1 & 0x40) == 0)
                            goto label_14029ab2d
                        
                        goto label_14029aea4
                    
                label_14029ab23:
                    
                    if ((r15_1 & 0x40) != 0)
                    label_14029aea4:
                        arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*arg5[0].q), 6)
                        
                        if (temp0_61.b s< 0)
                        label_14029aec0:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            uint16_t rcx_86[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_86, 7)
                    else
                    label_14029ab2d:
                        
                        if (temp0_61.b s< 0)
                            goto label_14029aec0
                    
                    zmm0[0].o = arg8[0].o & arg9[0].o
                    arg5 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), arg16)
                    arg14 = _mm256_cmpeq_epi32(arg14, arg14)
                    arg7 = arg5 ^ arg14
                    bool cond:8_1 = _mm256_movemask_ps(arg5 & not.32(zmm1)) == 0
                    var_380 = arg8[0].o
                    float var_3a0_2[0x8] = arg7
                    
                    if (cond:8_1)
                        arg13 = arg11
                    else
                        zmm3 = var_700_1
                        arg13 = _mm256_blendv_ps(arg11, zmm3, arg7)
                        zmm0 = _mm256_sub_epi32(arg11, arg14)
                        zmm3 = _mm256_cmpgt_epi32(zmm0, zmm3) ^ arg14
                        arg5 &= not.32(zmm3)
                        arg7 = arg5 & zmm1
                        int32_t i_5 = _mm256_movemask_ps(arg7)
                        
                        if (i_5 != 0)
                            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                            arg14 = arg11
                            
                            do
                                arg11 = zmm0
                                zmm0 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(arg11[0].o))
                                char temp0_156 = _mm256_movemask_ps(arg7)
                                
                                if ((temp0_156 & 1) == 0)
                                    if ((temp0_156 & 2) != 0)
                                        goto label_14029abcc
                                    
                                    goto label_14029aca3
                                
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*zmm0[0].q), 0)
                                
                                if ((temp0_156 & 2) != 0)
                                label_14029abcc:
                                    uint16_t rcx_49[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rcx_49, 1)
                                    zmm3[0].o = _mm256_extracti128_si256(arg11, 1)
                                    
                                    if ((temp0_156 & 4) == 0)
                                        goto label_14029acb2
                                    
                                    goto label_14029abe3
                                
                            label_14029aca3:
                                zmm3[0].o = _mm256_extracti128_si256(arg11, 1)
                                
                                if ((temp0_156 & 4) == 0)
                                label_14029acb2:
                                    zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
                                    
                                    if ((temp0_156 & 8) != 0)
                                        goto label_14029ac04
                                    
                                    goto label_14029acc0
                                
                            label_14029abe3:
                                arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*arg7[0].q), 2)
                                zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
                                
                                if ((temp0_156 & 8) != 0)
                                label_14029ac04:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint16_t rcx_53[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rcx_53, 3)
                                    zmm0 = _mm256_add_epi64(arg12, zmm3)
                                    
                                    if ((temp0_156 & 0x10) == 0)
                                        goto label_14029accd
                                    
                                    goto label_14029ac2d
                                
                            label_14029acc0:
                                zmm0 = _mm256_add_epi64(arg12, zmm3)
                                
                                if ((temp0_156 & 0x10) == 0)
                                label_14029accd:
                                    
                                    if ((temp0_156 & 0x20) != 0)
                                        goto label_14029ac41
                                    
                                    goto label_14029acd6
                                
                            label_14029ac2d:
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*zmm0[0].q), 4)
                                
                                if ((temp0_156 & 0x20) != 0)
                                label_14029ac41:
                                    uint16_t rcx_57[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rcx_57, 5)
                                    
                                    if ((temp0_156 & 0x40) == 0)
                                        goto label_14029acdf
                                    
                                    goto label_14029ac52
                                
                            label_14029acd6:
                                
                                if ((temp0_156 & 0x40) != 0)
                                label_14029ac52:
                                    zmm3[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm3[0].q), 6)
                                    
                                    if (temp0_156 s< 0)
                                    label_14029ac69:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        uint16_t rcx_61[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rcx_61, 7)
                                else
                                label_14029acdf:
                                    
                                    if (temp0_156 s< 0)
                                        goto label_14029ac69
                                
                                zmm0[0].o = arg6[0].o & arg9[0].o
                                zmm0 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), arg16)
                                    & arg5
                                zmm3[0].o = zx.o(0)
                                
                                if (_mm256_movemask_ps(zmm0 & zmm1) != i_5)
                                    zmm3 = zmm0 ^ arg5
                                
                                arg13 = _mm256_blendv_ps(arg13, arg14, zmm0)
                                zmm0 = _mm256_sub_epi32(arg11, arg8)
                                arg5 = __vpcmpgtd_ymmqq_ymmqq_memqq(zmm0, var_700_1) & not.32(zmm3)
                                arg7 = arg5 & zmm1
                                i_5 = _mm256_movemask_ps(arg7)
                                arg14 = arg11
                            while (i_5 != 0)
                    
                    arg5 = var_3a0_2
                    bool cond:14_1 = _mm256_movemask_ps(_mm256_andnot_ps(arg5, zmm1)) == 0
                    var_640 = arg6[0].o
                    int128_t var_590
                    
                    if (cond:14_1)
                        arg7 = var_680_1
                        arg14 = var_6e0
                        arg6[0].o = var_590
                    else
                        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                        zmm0 = _mm256_xor_ps(arg5, arg8)
                        zmm3[0].o = zx.o(0)
                        arg13 = _mm256_blendv_ps(arg13, zmm3, zmm0)
                        arg5 = __vpaddd_ymmqq_ymmqq_memqq(arg8, var_360_1)
                        zmm3 = _mm256_cmpgt_epi32(arg5, zmm3)
                        arg14 = zmm3 & zmm0
                        arg7 = arg14 & zmm1
                        int32_t i_6 = _mm256_movemask_ps(arg7)
                        
                        if (i_6 == 0)
                            arg6[0].o = var_590
                        else
                            arg6[0].o = var_590
                            
                            do
                                zmm0 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(arg5[0].o))
                                char temp0_309 = _mm256_movemask_ps(arg7)
                                
                                if ((temp0_309 & 1) == 0)
                                    if ((temp0_309 & 2) != 0)
                                        goto label_14029b4ac
                                    
                                    goto label_14029b57f
                                
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*zmm0[0].q), 0)
                                
                                if ((temp0_309 & 2) != 0)
                                label_14029b4ac:
                                    uint16_t rcx_112[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rcx_112, 1)
                                    zmm3[0].o = _mm256_extracti128_si256(arg5, 1)
                                    
                                    if ((temp0_309 & 4) == 0)
                                        goto label_14029b58e
                                    
                                    goto label_14029b4c3
                                
                            label_14029b57f:
                                zmm3[0].o = _mm256_extracti128_si256(arg5, 1)
                                
                                if ((temp0_309 & 4) == 0)
                                label_14029b58e:
                                    zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
                                    
                                    if ((temp0_309 & 8) != 0)
                                        goto label_14029b4e4
                                    
                                    goto label_14029b59c
                                
                            label_14029b4c3:
                                arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*arg7[0].q), 2)
                                zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
                                
                                if ((temp0_309 & 8) != 0)
                                label_14029b4e4:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint16_t rcx_116[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rcx_116, 3)
                                    zmm0 = _mm256_add_epi64(arg12, zmm3)
                                    
                                    if ((temp0_309 & 0x10) == 0)
                                        goto label_14029b5a9
                                    
                                    goto label_14029b50d
                                
                            label_14029b59c:
                                zmm0 = _mm256_add_epi64(arg12, zmm3)
                                
                                if ((temp0_309 & 0x10) == 0)
                                label_14029b5a9:
                                    
                                    if ((temp0_309 & 0x20) != 0)
                                        goto label_14029b521
                                    
                                    goto label_14029b5b2
                                
                            label_14029b50d:
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*zmm0[0].q), 4)
                                
                                if ((temp0_309 & 0x20) != 0)
                                label_14029b521:
                                    uint16_t rcx_120[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rcx_120, 5)
                                    
                                    if ((temp0_309 & 0x40) == 0)
                                        goto label_14029b5bb
                                    
                                    goto label_14029b532
                                
                            label_14029b5b2:
                                
                                if ((temp0_309 & 0x40) != 0)
                                label_14029b532:
                                    zmm3[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*zmm3[0].q), 6)
                                    
                                    if (temp0_309 s< 0)
                                    label_14029b549:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        uint16_t rcx_124[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rcx_124, 7)
                                else
                                label_14029b5bb:
                                    
                                    if (temp0_309 s< 0)
                                        goto label_14029b549
                                
                                zmm0[0].o = arg6[0].o & arg9[0].o
                                zmm0 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), arg16)
                                zmm3 = zmm0 & not.32(arg14)
                                zmm0[0].o = zx.o(0)
                                arg7 = zmm3 & zmm1
                                int32_t temp0_315 = _mm256_movemask_ps(arg7)
                                arg7[0].o = zx.o(0)
                                
                                if (temp0_315 != i_6)
                                    arg7 = zmm3 ^ arg14
                                
                                arg13 = _mm256_blendv_ps(arg13, arg5, zmm3)
                                arg5 = _mm256_add_epi32(arg5, arg8)
                                arg14 = _mm256_cmpgt_epi32(arg5, zmm0) & arg7
                                arg7 = arg14 & zmm1
                                i_6 = _mm256_movemask_ps(arg7)
                            while (i_6 != 0)
                        
                        arg7 = var_680_1
                        arg14 = var_6e0
                    
                    arg8 = var_700_1
                    arg14 = _mm256_blendv_ps(arg14, arg13, zmm1)
                    zmm0 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(arg14[0].o))
                    var_590 = arg6[0].o
                    
                    if ((r15_1 & 1) == 0)
                        arg11 = var_520_1
                        arg13 = var_420_1
                        
                        if ((r15_1 & 2) != 0)
                            goto label_14029a47a
                        
                        goto label_14029b68b
                    
                    int128_t var_720
                    arg5[0].o = var_720
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*zmm0[0].q), 0)
                    var_720 = arg5[0].o
                    arg11 = var_520_1
                    arg13 = var_420_1
                    
                    if ((r15_1 & 2) != 0)
                    label_14029a47a:
                        uint32_t rcx_10 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        arg5[0].o = var_720
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rcx_10, 1)
                        var_720 = arg5[0].o
                        arg5[0].o = _mm256_extracti128_si256(arg14, 1)
                        
                        if ((r15_1 & 4) == 0)
                            goto label_14029b69b
                        
                        goto label_14029a49e
                    
                label_14029b68b:
                    arg5[0].o = _mm256_extracti128_si256(arg14, 1)
                    
                    if ((r15_1 & 4) == 0)
                    label_14029b69b:
                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                        
                        if ((r15_1 & 8) != 0)
                            goto label_14029a4cc
                        
                        goto label_14029b6aa
                    
                label_14029a49e:
                    zmm3[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm3[0].o = var_720
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*zmm3[0].q), 2)
                    var_720 = zmm3[0].o
                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                    
                    if ((r15_1 & 8) != 0)
                    label_14029a4cc:
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        uint32_t rcx_14 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm0[0].o = var_720
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_14, 3)
                        var_720 = zmm0[0].o
                        zmm0 = _mm256_add_epi64(arg12, arg5)
                        
                        if ((r15_1 & 0x10) == 0)
                            goto label_14029b6b8
                        
                        goto label_14029a502
                    
                label_14029b6aa:
                    zmm0 = _mm256_add_epi64(arg12, arg5)
                    
                    if ((r15_1 & 0x10) == 0)
                    label_14029b6b8:
                        
                        if ((r15_1 & 0x20) != 0)
                            goto label_14029a523
                        
                        goto label_14029b6c2
                    
                label_14029a502:
                    arg5[0].o = var_720
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*zmm0[0].q), 4)
                    var_720 = arg5[0].o
                    
                    if ((r15_1 & 0x20) != 0)
                    label_14029a523:
                        uint32_t rcx_18 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        arg5[0].o = var_720
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rcx_18, 5)
                        var_720 = arg5[0].o
                        
                        if ((r15_1 & 0x40) == 0)
                            goto label_14029b6cc
                        
                        goto label_14029a541
                    
                label_14029b6c2:
                    
                    if ((r15_1 & 0x40) != 0)
                    label_14029a541:
                        arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg5[0].o = var_720
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*arg5[0].q), 6)
                        var_720 = arg5[0].o
                        
                        if (temp0_61.b s< 0)
                        label_14029a569:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            uint32_t rcx_22 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm0[0].o = var_720
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_22, 7)
                            var_720 = zmm0[0].o
                    else
                    label_14029b6cc:
                        
                        if (temp0_61.b s< 0)
                            goto label_14029a569
                    
                    arg7 = _mm256_blendv_ps(arg7, 
                        __vpsubd_ymmqq_ymmqq_memqq(arg14, data_142fc9420), zmm1)
                    zmm0 = _mm256_cmpgt_epi32(arg7, arg8) & zmm1
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        arg7 = _mm256_blendv_ps(arg7, arg8, zmm0)
                    
                    int128_t var_430
                    arg6[0].o = var_430
                    zmm0 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(arg7[0].o))
                    
                    if ((r15_1 & 1) == 0)
                        arg10 = var_500_1
                        
                        if ((r15_1 & 2) != 0)
                            goto label_14029a5b4
                        
                        goto label_14029b728
                    
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm0[0].q), 0)
                    arg10 = var_500_1
                    
                    if ((r15_1 & 2) != 0)
                    label_14029a5b4:
                        uint16_t rcx_26[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rcx_26, 1)
                        arg5[0].o = _mm256_extracti128_si256(arg7, 1)
                        
                        if ((r15_1 & 4) == 0)
                            goto label_14029b738
                        
                        goto label_14029a5cc
                    
                label_14029b728:
                    arg5[0].o = _mm256_extracti128_si256(arg7, 1)
                    
                    if ((r15_1 & 4) == 0)
                    label_14029b738:
                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                        
                        if ((r15_1 & 8) != 0)
                            goto label_14029a5ee
                        
                        goto label_14029b747
                    
                label_14029a5cc:
                    zmm3[0].o = _mm256_extracti128_si256(zmm0, 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm3[0].q), 2)
                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                    
                    if ((r15_1 & 8) != 0)
                    label_14029a5ee:
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        uint16_t rcx_30[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rcx_30, 3)
                        zmm0 = _mm256_add_epi64(arg12, arg5)
                        
                        if ((r15_1 & 0x10) == 0)
                            goto label_14029b755
                        
                        goto label_14029a618
                    
                label_14029b747:
                    zmm0 = _mm256_add_epi64(arg12, arg5)
                    
                    if ((r15_1 & 0x10) != 0)
                    label_14029a618:
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*zmm0[0].q), 4)
                        
                        if ((r15_1 & 0x20) != 0)
                        label_14029a62d:
                            uint16_t rcx_34[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rcx_34, 5)
                            
                            if ((r15_1 & 0x40) == 0)
                                goto label_14029b770
                            
                            goto label_14029a63f
                    else
                    label_14029b755:
                        
                        if ((r15_1 & 0x20) != 0)
                            goto label_14029a62d
                    
                    if ((r15_1 & 0x40) != 0)
                    label_14029a63f:
                        arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, zx.d(*arg5[0].q), 6)
                        arg5[0].o = arg9[0].o & var_720
                        
                        if (temp0_61.b s< 0)
                        label_14029a668:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            uint16_t rcx_38[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rcx_38, 7)
                    else
                    label_14029b770:
                        arg5[0].o = arg9[0].o & var_720
                        
                        if (temp0_61.b s< 0)
                            goto label_14029a668
                    
                    arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                    var_430 = arg6[0].o
                    zmm0[0].o = arg6[0].o & arg9[0].o
                    arg6 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    arg9[0].o = var_660
                    zmm0[0].o = zx.o(0)
                    
                    if (arg20 != 1)
                    label_14029b7b0:
                        zmm0 = __vpmaxsd_ymmqq_ymmqq_memqq(_mm256_sub_epi32(arg6, arg5), var_4e0_1)
                        arg5 = _mm256_sub_ps(var_200_1, _mm256_cvtepi32_ps(arg5))
                        zmm0 = _mm256_div_ps(arg5, _mm256_cvtepi32_ps(zmm0))
                else
                    arg5 = _mm256_add_epi32(arg11, arg11)
                    zmm0 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(arg5[0].o))
                    char rsi_1 = temp0_61.b
                    arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                    int128_t var_370
                    arg9[0].o = var_370
                    
                    if ((rsi_1 & 1) == 0)
                        if ((rsi_1 & 2) != 0)
                            goto label_14029ad4b
                        
                        goto label_14029a845
                    
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm0[0].q, 0)
                    
                    if ((rsi_1 & 2) != 0)
                    label_14029ad4b:
                        uint16_t* rcx_64 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rcx_64, 1)
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        
                        if ((rsi_1 & 4) == 0)
                            goto label_14029a855
                        
                        goto label_14029ad66
                    
                label_14029a845:
                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                    
                    if ((rsi_1 & 4) == 0)
                    label_14029a855:
                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                        
                        if ((rsi_1 & 8) != 0)
                            goto label_14029ad85
                        
                        goto label_14029a864
                    
                label_14029ad66:
                    zmm3[0].o = _mm256_extracti128_si256(zmm0, 1)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm3[0].q, 2)
                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                    
                    if ((rsi_1 & 8) != 0)
                    label_14029ad85:
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        uint16_t* rcx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rcx_66, 3)
                        zmm0 = _mm256_add_epi64(arg12, arg5)
                        
                        if ((rsi_1 & 0x10) == 0)
                            goto label_14029a872
                        
                        goto label_14029ada9
                    
                label_14029a864:
                    zmm0 = _mm256_add_epi64(arg12, arg5)
                    
                    if ((rsi_1 & 0x10) == 0)
                    label_14029a872:
                        
                        if ((rsi_1 & 0x20) != 0)
                            goto label_14029adb8
                        
                        goto label_14029a87c
                    
                label_14029ada9:
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm0[0].q, 4)
                    
                    if ((rsi_1 & 0x20) != 0)
                    label_14029adb8:
                        uint16_t* rcx_68 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rcx_68, 5)
                        
                        if ((rsi_1 & 0x40) == 0)
                            goto label_14029a886
                        
                        goto label_14029adcd
                    
                label_14029a87c:
                    
                    if ((rsi_1 & 0x40) != 0)
                    label_14029adcd:
                        arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg5[0].q, 6)
                        
                        if (temp0_61.b s< 0)
                        label_14029ade6:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            uint16_t* rcx_70 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rcx_70, 7)
                    else
                    label_14029a886:
                        
                        if (temp0_61.b s< 0)
                            goto label_14029ade6
                    
                    arg5 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg9[0].o), arg16)
                    zmm3 = arg5 ^ arg7
                    bool cond:9_1 = _mm256_movemask_ps(arg5 & not.32(zmm1)) == 0
                    var_370 = arg9[0].o
                    float var_3a0_1[0x8] = zmm3
                    
                    if (cond:9_1)
                        arg13 = arg11
                        arg9[0].o = var_660
                    else
                        arg13 = _mm256_blendv_ps(arg11, arg8, zmm3)
                        zmm0 = _mm256_sub_epi32(arg11, arg7)
                        zmm3 = _mm256_cmpgt_epi32(zmm0, arg8) ^ arg7
                        arg5 &= not.32(zmm3)
                        arg7 = arg5 & zmm1
                        int32_t i_7 = _mm256_movemask_ps(arg7)
                        
                        if (i_7 == 0)
                            arg9[0].o = var_660
                        else
                            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                            arg14 = arg11
                            arg9[0].o = var_660
                            
                            do
                                arg11 = zmm0
                                zmm3 = _mm256_add_epi32(zmm0, zmm0)
                                zmm0 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(zmm3[0].o))
                                char temp0_112 = _mm256_movemask_ps(arg7)
                                
                                if ((temp0_112 & 1) == 0)
                                    if ((temp0_112 & 2) != 0)
                                        goto label_14029a913
                                    
                                    goto label_14029a9e7
                                
                                arg9[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm0[0].q, 0)
                                
                                if ((temp0_112 & 2) != 0)
                                label_14029a913:
                                    uint16_t* rdi_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rdi_4, 1)
                                    zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    
                                    if ((temp0_112 & 4) == 0)
                                        goto label_14029a9f6
                                    
                                    goto label_14029a92d
                                
                            label_14029a9e7:
                                zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                                
                                if ((temp0_112 & 4) == 0)
                                label_14029a9f6:
                                    zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
                                    
                                    if ((temp0_112 & 8) != 0)
                                        goto label_14029a94b
                                    
                                    goto label_14029aa04
                                
                            label_14029a92d:
                                arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg9[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg7[0].q, 2)
                                zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
                                
                                if ((temp0_112 & 8) != 0)
                                label_14029a94b:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint16_t* rdi_6 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rdi_6, 3)
                                    zmm0 = _mm256_add_epi64(arg12, zmm3)
                                    
                                    if ((temp0_112 & 0x10) == 0)
                                        goto label_14029aa11
                                    
                                    goto label_14029a96e
                                
                            label_14029aa04:
                                zmm0 = _mm256_add_epi64(arg12, zmm3)
                                
                                if ((temp0_112 & 0x10) == 0)
                                label_14029aa11:
                                    
                                    if ((temp0_112 & 0x20) != 0)
                                        goto label_14029a97c
                                    
                                    goto label_14029aa1a
                                
                            label_14029a96e:
                                arg9[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm0[0].q, 4)
                                
                                if ((temp0_112 & 0x20) != 0)
                                label_14029a97c:
                                    uint16_t* rdi_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rdi_8, 5)
                                    
                                    if ((temp0_112 & 0x40) == 0)
                                        goto label_14029aa23
                                    
                                    goto label_14029a990
                                
                            label_14029aa1a:
                                
                                if ((temp0_112 & 0x40) != 0)
                                label_14029a990:
                                    zmm3[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm3[0].q, 6)
                                    
                                    if (temp0_112 s< 0)
                                    label_14029a9a8:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        uint16_t* rcx_42 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg9[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rcx_42, 7)
                                else
                                label_14029aa23:
                                    
                                    if (temp0_112 s< 0)
                                        goto label_14029a9a8
                                
                                zmm0 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg9[0].o), arg16)
                                    & arg5
                                zmm3[0].o = zx.o(0)
                                
                                if (_mm256_movemask_ps(zmm0 & zmm1) != i_7)
                                    zmm3 = zmm0 ^ arg5
                                
                                arg13 = _mm256_blendv_ps(arg13, arg14, zmm0)
                                zmm0 = _mm256_sub_epi32(arg11, arg8)
                                arg5 = __vpcmpgtd_ymmqq_ymmqq_memqq(zmm0, var_700_1) & not.32(zmm3)
                                arg7 = arg5 & zmm1
                                i_7 = _mm256_movemask_ps(arg7)
                                arg14 = arg11
                            while (i_7 != 0)
                    
                    if (_mm256_movemask_ps(_mm256_andnot_ps(var_3a0_1, zmm1)) != 0)
                        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                        zmm0 = _mm256_xor_ps(var_3a0_1, arg8)
                        zmm3[0].o = zx.o(0)
                        arg13 = _mm256_blendv_ps(arg13, zmm3, zmm0)
                        arg5 = __vpaddd_ymmqq_ymmqq_memqq(arg8, var_360_1)
                        zmm3 = _mm256_cmpgt_epi32(arg5, zmm3)
                        arg14 = zmm3 & zmm0
                        arg7 = arg14 & zmm1
                        int32_t i_8 = _mm256_movemask_ps(arg7)
                        
                        if (i_8 != 0)
                            do
                                zmm3 = _mm256_add_epi32(arg5, arg5)
                                zmm0 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(zmm3[0].o))
                                char temp0_223 = _mm256_movemask_ps(arg7)
                                
                                if ((temp0_223 & 1) == 0)
                                    if ((temp0_223 & 2) != 0)
                                        goto label_14029af53
                                    
                                    goto label_14029b023
                                
                                arg15[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *zmm0[0].q, 0)
                                
                                if ((temp0_223 & 2) != 0)
                                label_14029af53:
                                    uint16_t* rdi_11 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg15[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rdi_11, 1)
                                    zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    
                                    if ((temp0_223 & 4) == 0)
                                        goto label_14029b032
                                    
                                    goto label_14029af6d
                                
                            label_14029b023:
                                zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                                
                                if ((temp0_223 & 4) == 0)
                                label_14029b032:
                                    zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
                                    
                                    if ((temp0_223 & 8) != 0)
                                        goto label_14029af8b
                                    
                                    goto label_14029b040
                                
                            label_14029af6d:
                                arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                                arg15[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg7[0].q, 2)
                                zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
                                
                                if ((temp0_223 & 8) != 0)
                                label_14029af8b:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    uint16_t* rdi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg15[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rdi_13, 3)
                                    zmm0 = _mm256_add_epi64(arg12, zmm3)
                                    
                                    if ((temp0_223 & 0x10) == 0)
                                        goto label_14029b04d
                                    
                                    goto label_14029afae
                                
                            label_14029b040:
                                zmm0 = _mm256_add_epi64(arg12, zmm3)
                                
                                if ((temp0_223 & 0x10) == 0)
                                label_14029b04d:
                                    
                                    if ((temp0_223 & 0x20) != 0)
                                        goto label_14029afbc
                                    
                                    goto label_14029b056
                                
                            label_14029afae:
                                arg15[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *zmm0[0].q, 4)
                                
                                if ((temp0_223 & 0x20) != 0)
                                label_14029afbc:
                                    uint16_t* rdi_15 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg15[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rdi_15, 5)
                                    
                                    if ((temp0_223 & 0x40) == 0)
                                        goto label_14029b05f
                                    
                                    goto label_14029afd0
                                
                            label_14029b056:
                                
                                if ((temp0_223 & 0x40) != 0)
                                label_14029afd0:
                                    zmm3[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    arg15[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *zmm3[0].q, 6)
                                    
                                    if (temp0_223 s< 0)
                                    label_14029afe4:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                        uint16_t* rcx_88 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg15[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rcx_88, 7)
                                else
                                label_14029b05f:
                                    
                                    if (temp0_223 s< 0)
                                        goto label_14029afe4
                                
                                zmm0 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg15[0].o), arg16)
                                zmm3 = zmm0 & not.32(arg14)
                                zmm0[0].o = zx.o(0)
                                arg7 = zmm3 & zmm1
                                int32_t temp0_229 = _mm256_movemask_ps(arg7)
                                arg7[0].o = zx.o(0)
                                
                                if (temp0_229 != i_8)
                                    arg7 = zmm3 ^ arg14
                                
                                arg13 = _mm256_blendv_ps(arg13, arg5, zmm3)
                                arg5 = _mm256_add_epi32(arg5, arg8)
                                arg14 = _mm256_cmpgt_epi32(arg5, zmm0) & arg7
                                arg7 = arg14 & zmm1
                                i_8 = _mm256_movemask_ps(arg7)
                            while (i_8 != 0)
                    
                    arg8 = var_700_1
                    arg14 = _mm256_blendv_ps(var_6e0, arg13, zmm1)
                    arg5 = _mm256_add_epi32(arg14, arg14)
                    zmm0 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(arg5[0].o))
                    
                    if ((rsi_1 & 1) == 0)
                        arg11 = var_520_1
                        arg13 = var_420_1
                        
                        if ((rsi_1 & 2) != 0)
                            goto label_14029b250
                        
                        goto label_14029b0ff
                    
                    uint16_t var_740[0x8]
                    zmm3[0].o = var_740
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm0[0].q, 0)
                    var_740 = zmm3[0].o
                    arg11 = var_520_1
                    arg13 = var_420_1
                    
                    if ((rsi_1 & 2) != 0)
                    label_14029b250:
                        int64_t rcx_93 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm3[0].o = var_740
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rcx_93, 1)
                        var_740 = zmm3[0].o
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        
                        if ((rsi_1 & 4) == 0)
                            goto label_14029b10f
                        
                        goto label_14029b277
                    
                label_14029b0ff:
                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                    
                    if ((rsi_1 & 4) == 0)
                    label_14029b10f:
                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                        
                        if ((rsi_1 & 8) != 0)
                            goto label_14029b2a2
                        
                        goto label_14029b11e
                    
                label_14029b277:
                    zmm3[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm3[0].o = var_740
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm3[0].q, 2)
                    var_740 = zmm3[0].o
                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                    
                    if ((rsi_1 & 8) != 0)
                    label_14029b2a2:
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rcx_95 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = var_740
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_95, 3)
                        var_740 = zmm0[0].o
                        zmm0 = _mm256_add_epi64(arg12, arg5)
                        
                        if ((rsi_1 & 0x10) == 0)
                            goto label_14029b12c
                        
                        goto label_14029b2d2
                    
                label_14029b11e:
                    zmm0 = _mm256_add_epi64(arg12, arg5)
                    
                    if ((rsi_1 & 0x10) == 0)
                    label_14029b12c:
                        
                        if ((rsi_1 & 0x20) != 0)
                            goto label_14029b2ed
                        
                        goto label_14029b136
                    
                label_14029b2d2:
                    arg5[0].o = var_740
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm0[0].q, 4)
                    var_740 = arg5[0].o
                    
                    if ((rsi_1 & 0x20) != 0)
                    label_14029b2ed:
                        int64_t rcx_97 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg5[0].o = var_740
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rcx_97, 5)
                        var_740 = arg5[0].o
                        
                        if ((rsi_1 & 0x40) == 0)
                            goto label_14029b140
                        
                        goto label_14029b30e
                    
                label_14029b136:
                    
                    if ((rsi_1 & 0x40) != 0)
                    label_14029b30e:
                        arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg5[0].o = var_740
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg5[0].q, 6)
                        var_740 = arg5[0].o
                        
                        if (temp0_61.b s< 0)
                        label_14029b333:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rcx_99 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = var_740
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_99, 7)
                            var_740 = zmm0[0].o
                    else
                    label_14029b140:
                        
                        if (temp0_61.b s< 0)
                            goto label_14029b333
                    
                    arg7 = _mm256_blendv_ps(var_680_1, 
                        __vpsubd_ymmqq_ymmqq_memqq(arg14, data_142fc9420), zmm1)
                    zmm0 = _mm256_cmpgt_epi32(arg7, arg8) & zmm1
                    bool cond:16_1 = _mm256_movemask_ps(zmm0) == 0
                    var_640 = arg6[0].o
                    
                    if (not(cond:16_1))
                        arg7 = _mm256_blendv_ps(arg7, arg8, zmm0)
                    
                    int128_t var_440
                    arg6[0].o = var_440
                    arg5 = _mm256_add_epi32(arg7, arg7)
                    zmm0 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(arg5[0].o))
                    
                    if ((rsi_1 & 1) == 0)
                        arg10 = var_500_1
                        
                        if ((rsi_1 & 2) != 0)
                            goto label_14029b372
                        
                        goto label_14029b1a9
                    
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 0)
                    arg10 = var_500_1
                    
                    if ((rsi_1 & 2) != 0)
                    label_14029b372:
                        int64_t rcx_101 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rcx_101, 1)
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        
                        if ((rsi_1 & 4) == 0)
                            goto label_14029b1b9
                        
                        goto label_14029b38d
                    
                label_14029b1a9:
                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                    
                    if ((rsi_1 & 4) == 0)
                    label_14029b1b9:
                        arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                        
                        if ((rsi_1 & 8) != 0)
                            goto label_14029b3ac
                        
                        goto label_14029b1c8
                    
                label_14029b38d:
                    zmm3[0].o = _mm256_extracti128_si256(zmm0, 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm3[0].q, 2)
                    arg5 = _mm256_cvtepi32_epi64(arg5[0].o)
                    
                    if ((rsi_1 & 8) != 0)
                    label_14029b3ac:
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rcx_103 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rcx_103, 3)
                        zmm0 = _mm256_add_epi64(arg12, arg5)
                        
                        if ((rsi_1 & 0x10) == 0)
                            goto label_14029b1d6
                        
                        goto label_14029b3d0
                    
                label_14029b1c8:
                    zmm0 = _mm256_add_epi64(arg12, arg5)
                    
                    if ((rsi_1 & 0x10) == 0)
                    label_14029b1d6:
                        
                        if ((rsi_1 & 0x20) != 0)
                            goto label_14029b3df
                        
                        goto label_14029b1e0
                    
                label_14029b3d0:
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 4)
                    
                    if ((rsi_1 & 0x20) != 0)
                    label_14029b3df:
                        int64_t rcx_105 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rcx_105, 5)
                        
                        if ((rsi_1 & 0x40) == 0)
                            goto label_14029b1ea
                        
                        goto label_14029b3f4
                    
                label_14029b1e0:
                    
                    if ((rsi_1 & 0x40) != 0)
                    label_14029b3f4:
                        arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg5[0].q, 6)
                        
                        if (temp0_61.b s< 0)
                        label_14029b40d:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rcx_107 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rcx_107, 7)
                    else
                    label_14029b1ea:
                        
                        if (temp0_61.b s< 0)
                            goto label_14029b40d
                    
                    arg5 = __vpmovzxwd_ymmqq_memdq(var_740)
                    var_440 = arg6[0].o
                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                    zmm0[0].o = zx.o(0)
                    
                    if (arg20 != 1)
                        goto label_14029b7b0
                
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                zmm3 = _mm256_blendv_ps(arg5, zmm0, zmm1)
        
        zmm0 = __vpcmpgtd_ymmqq_ymmqq_memqq(arg13, var_4e0_1) & var_160_1
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm1 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm1, var_180_1, zmm0)
        uint64_t r10_1 = zx.q(r12.d)
        float var_680_2[0x8] = arg7
        float var_700_2[0x8] = zmm3
        float var_580_1[0x8]
        int64_t var_560_1[0x4]
        uint32_t var_540_1[0x8]
        
        if (r12.d u> 6)
        label_14029b880:
            arg13[0].o = zx.o(0)
            var_540_1 = arg13
            var_560_1 = arg13
            var_580_1 = arg13
            arg12[0].o = zx.o(0)
            arg6[0].o = zx.o(0)
        else
            arg6 = _mm256_mullo_epi32(arg14, arg11)
            
            switch (r10_1)
                case 0, 1
                    zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg10, zmm1), arg6)
                    arg6[0].o = zx.o(0)
                    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                    int32_t temp0_353
                    int32_t temp1_5
                    temp0_353, temp1_5 = _mm256_i32gather_ps(arg6, *(arg4 + zmm0[0].q), arg5)
                    arg6 = temp0_353
                    arg5 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_6a0_1)
                    arg12[0].o = zx.o(0)
                    zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                    int32_t temp0_356
                    int32_t temp1_6
                    temp0_356, temp1_6 = _mm256_i32gather_ps(arg12, *(arg4 + arg5[0].q), zmm3)
                    arg12 = temp0_356
                    zmm3 = temp1_6
                    arg5 = __vpbroadcastd_ymmqq_memd(8)
                    zmm0 = _mm256_add_epi32(zmm0, arg5)
                    arg13[0].o = zx.o(0)
                    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                    int32_t temp0_360
                    int32_t temp1_7
                    temp0_360, temp1_7 = _mm256_i32gather_ps(arg13, *(arg4 + zmm0[0].q), arg5)
                    arg13 = temp0_360
                case 2
                    zmm0 = _mm256_add_epi32(arg10, zmm1)
                    zmm3 = _mm256_add_epi32(zmm0, arg6)
                    float rsi_4 = zmm3[0]
                    int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    int64_t r13_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    int64_t r8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                    uint32_t rbx_8 = zmm0[0]
                    int64_t r11_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    var_6e0[0] = r14
                    int64_t rcx_127 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t rsi_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = zx.o(*(arg4 + sx.q(rsi_4)))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_2), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r13_2), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rbx_8)), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_6), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_127), 6)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_6), 7)
                    zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, var_4c0)
                    uint32_t rcx_128 = zmm0[0]
                    int64_t r8_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t r11_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t r15_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    uint32_t rdx_1 = zmm0[0]
                    int64_t rbx_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t rdi_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t rcx_130 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_128)))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_1), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_7), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_3), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rdx_1)), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_12), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_22), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_130), 7)
                    zmm3 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, var_6a0_1)
                    float rcx_131 = zmm3[0]
                    int64_t r8_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    int64_t r11_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    int64_t r15_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                    float rsi_9 = zmm3[0]
                    int64_t rdi_24 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    int64_t r14_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    int64_t rbx_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    zmm3[0].o = zx.o(*(arg4 + sx.q(rcx_131)))
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r8_2), 1)
                    arg3 = var_608_1
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r11_8), 2)
                    r11_4 = var_744_1
                    arg2 = var_610_1
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r15_4), 3)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + sx.q(rsi_9)), 4)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + rdi_24), 5)
                    arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                    arg6 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, arg6))
                    arg7 = _mm256_broadcast_ss(32767f)
                    arg5 = _mm256_div_ps(arg5, arg7)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r14_3), 6)
                    r14 = var_6e0[0]
                    zmm0 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                            arg6)), 
                        arg7)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + rbx_16), 7)
                    zmm3 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm3[0].o), 
                            arg6)), 
                        arg7)
                    arg7 = _mm256_broadcast_ss(128f)
                    arg6 = _mm256_mul_ps(arg5, arg7)
                    arg12 = _mm256_mul_ps(zmm0, arg7)
                    arg13 = _mm256_mul_ps(zmm3, arg7)
                    arg7 = var_680_2
                case 3
                    zmm3[0].o = zx.o(0)
                    zmm0 = _mm256_cmpeq_epi32(zmm0, zmm0)
                    int32_t temp0_426
                    int32_t temp1_8
                    temp0_426, temp1_8 = _mm256_i32gather_ps(zmm3, *(arg4 + arg10[0].q), zmm0)
                    zmm0 = temp1_8
                    arg5 = __vpaddd_ymmqq_ymmqq_memqq(arg10, var_6a0_1)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                    int32_t temp0_430
                    int32_t temp1_9
                    temp0_430, temp1_9 = _mm256_i32gather_ps(zmm0, *(arg4 + arg5[0].q), arg7)
                    zmm0 = temp0_430
                    arg5 = __vpbroadcastd_ymmqq_memd(8)
                    arg7 = _mm256_add_epi32(arg10, arg5)
                    arg5[0].o = zx.o(0)
                    arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                    int32_t temp0_434
                    int32_t temp1_10
                    temp0_434, temp1_10 = _mm256_i32gather_ps(arg5, *(arg4 + arg7[0].q), arg11)
                    arg11 = temp1_10
                    arg7 = _mm256_add_epi32(arg10, __vpbroadcastd_ymmqq_memd(0xc))
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                    int32_t temp0_439
                    int32_t temp1_11
                    temp0_439, temp1_11 = _mm256_i32gather_ps(arg11, *(arg4 + arg7[0].q), arg12)
                    arg7 = __vpbroadcastd_ymmqq_memd(0x10)
                    arg12 = _mm256_add_epi32(arg10, arg7)
                    arg7[0].o = zx.o(0)
                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    int32_t temp0_443
                    int32_t temp1_12
                    temp0_443, temp1_12 = _mm256_i32gather_ps(arg7, *(arg4 + arg12[0]), arg13)
                    arg13 = temp1_12
                    arg12 = _mm256_add_epi32(arg10, __vpbroadcastd_ymmqq_memd(0x14))
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    int32_t temp0_448
                    int32_t temp1_13
                    temp0_448, temp1_13 = _mm256_i32gather_ps(arg14, *(arg4 + arg12[0]), arg13)
                    arg13 = temp1_13
                    arg12 = _mm256_add_epi32(arg10, zmm1)
                    arg6 = _mm256_add_epi32(arg12, arg6)
                    arg12[0].o = zx.o(0)
                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    int32_t temp0_452
                    int32_t temp1_14
                    temp0_452, temp1_14 = _mm256_i32gather_epi32(arg12, *(arg4 + arg6[0].q), arg13)
                    arg12 = temp0_452
                    arg13 = _mm256_srli_epi32(arg12, 0x15)
                    arg8 = _mm256_srli_epi32(arg12, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg6 = _mm256_fmadd_ps(
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                arg12 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f)), 
                        temp0_439, temp0_426)
                    zmm3 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg8 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg8, zmm3))
                    arg11 = _mm256_broadcast_ss(1023f)
                    arg12 = _mm256_div_ps(arg8, arg11)
                    zmm3 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg13, zmm3))
                    arg13 = _mm256_div_ps(zmm3, arg11)
                    arg11 = var_520_1
                    arg12 = _mm256_fmadd_ps(arg12, temp0_443, zmm0)
                    arg7 = var_680_2
                    arg13 = _mm256_fmadd_ps(arg13, temp0_448, temp0_434)
                case 4, 5, 6
                    goto label_14029b880
            
            var_580_1 = arg6
            var_560_1 = arg12
            var_540_1 = arg13
        
        arg5 = _mm256_cmpeq_epi32(arg14, arg7)
        arg16 = arg5 ^ data_142fc9420
        bool cond:6_1 = _mm256_movemask_ps(arg16) == 0
        var_660 = arg9[0].o
        
        if (not(cond:6_1))
            var_6e0 = arg14
            uint32_t var_400_1[0x8]
            uint32_t var_3e0_1[0x8]
            float var_3c0_1[0x8]
            
            if (r12.d u> 6)
            label_14029bd10:
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                var_400_1 = _mm256_maskstore_ps(arg16, zmm0)
                var_3e0_1 = _mm256_maskstore_ps(arg16, zmm0)
                var_3c0_1 = _mm256_maskstore_ps(arg16, zmm0)
            else
                arg14 = _mm256_mullo_epi32(arg7, arg11)
                
                switch (r10_1)
                    case 0, 1
                        zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg10, zmm1), arg14)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        int32_t temp0_479
                        int32_t temp1_15
                        temp0_479, temp1_15 = _mm256_i32gather_ps(zmm1, *(arg4 + zmm0[0].q), arg16)
                        arg5 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_6a0_1)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int32_t temp0_482
                        int32_t temp1_16
                        temp0_482, temp1_16 = _mm256_i32gather_ps(arg7, *(arg4 + arg5[0].q), arg16)
                        arg7 = temp0_482
                        arg5 = __vpbroadcastd_ymmqq_memd(8)
                        zmm0 = _mm256_add_epi32(zmm0, arg5)
                        arg5[0].o = zx.o(0)
                        int32_t temp0_485
                        int32_t temp1_17
                        temp0_485, temp1_17 = _mm256_i32gather_ps(arg5, *(arg4 + zmm0[0].q), arg16)
                        arg8 = temp1_17
                        var_400_1 = _mm256_maskstore_ps(arg16, temp0_479)
                        var_3e0_1 = _mm256_maskstore_ps(arg16, arg7)
                        var_3c0_1 = _mm256_maskstore_ps(arg16, temp0_485)
                    case 2
                        zmm1 = _mm256_add_epi32(_mm256_add_epi32(arg10, zmm1), arg14)
                        zmm0 = arg5 & not.32(zmm1)
                        int64_t r8_3 = sx.q(zmm0[0])
                        int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_495 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t r11_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rsi_12 = sx.q(zmm0[0])
                        int64_t rcx_139 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_499 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t rdi_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(arg4 + r8_3))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_2), 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(temp0_495)), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_9), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_12), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_139), 5)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(temp0_499)), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_27), 7)
                        zmm3 = arg5 & not.32(__vpaddd_ymmqq_ymmqq_memqq(zmm1, var_4c0))
                        int64_t r8_4 = sx.q(zmm3[0])
                        int64_t r10_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                        int64_t r11_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                        int64_t r14_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        int64_t rsi_14 = sx.q(zmm3[0])
                        int64_t rcx_142 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                        int64_t rdx_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                        int32_t temp0_515 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
                        zmm3[0].o = zx.o(*(arg4 + r8_4))
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r10_3), 1)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r11_10), 2)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r14_5), 3)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + rsi_14), 4)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + rcx_142), 5)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + rdx_10), 6)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + sx.q(temp0_515)), 7)
                        zmm1 = arg5 & not.32(__vpaddd_ymmqq_ymmqq_memqq(zmm1, var_6a0_1))
                        uint32_t rcx_144 = zmm1[0]
                        int64_t r8_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        int64_t r10_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        int64_t rdi_31 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        uint32_t rsi_15 = zmm1[0]
                        int64_t rdx_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        int64_t r11_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        int64_t rbx_24 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = zx.o(*(arg4 + sx.q(rcx_144)))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r8_5), 1)
                        arg3 = var_608_1
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r10_4), 2)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdi_31), 3)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + sx.q(rsi_15)), 4)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdx_13), 5)
                        zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                        arg5 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg5))
                        zmm3 = _mm256_broadcast_ss(32767f)
                        zmm0 = _mm256_div_ps(zmm0, zmm3)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r11_11), 6)
                        r11_4 = var_744_1
                        arg2 = var_610_1
                        arg6 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 
                                arg5)), 
                            zmm3)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rbx_24), 7)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                arg5)), 
                            zmm3)
                        arg5 = _mm256_broadcast_ss(128f)
                        zmm0 = _mm256_mul_ps(zmm0, arg5)
                        zmm3 = _mm256_mul_ps(arg6, arg5)
                        zmm1 = _mm256_mul_ps(zmm1, arg5)
                        var_400_1 = _mm256_maskstore_ps(arg16, zmm0)
                        var_3e0_1 = _mm256_maskstore_ps(arg16, zmm3)
                        var_3c0_1 = _mm256_maskstore_ps(arg16, zmm1)
                        arg6 = var_580_1
                        arg12 = var_560_1
                        arg13 = var_540_1
                    case 3
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        int32_t temp0_560
                        int32_t temp1_18
                        temp0_560, temp1_18 = _mm256_i32gather_ps(zmm0, *(arg4 + arg10[0].q), arg16)
                        zmm0 = temp0_560
                        arg5 = temp1_18
                        arg7 = __vpaddd_ymmqq_ymmqq_memqq(arg10, var_6a0_1)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        int32_t temp0_563
                        int32_t temp1_19
                        temp0_563, temp1_19 = _mm256_i32gather_ps(arg5, *(arg4 + arg7[0].q), arg16)
                        arg7 = _mm256_add_epi32(arg10, __vpbroadcastd_ymmqq_memd(8))
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        int32_t temp0_567
                        int32_t temp1_20
                        temp0_567, temp1_20 = _mm256_i32gather_ps(zmm0, *(arg4 + arg7[0].q), arg16)
                        arg7 = __vpbroadcastd_ymmqq_memd(0xc)
                        arg8 = _mm256_add_epi32(arg10, arg7)
                        arg7[0].o = zx.o(0)
                        int32_t temp0_570
                        int32_t temp1_21
                        temp0_570, temp1_21 = _mm256_i32gather_ps(arg7, *(arg4 + arg8[0]), arg16)
                        arg7 = temp0_570
                        zmm3 = _mm256_add_epi32(arg10, __vpbroadcastd_ymmqq_memd(0x10))
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int32_t temp0_574
                        int32_t temp1_22
                        temp0_574, temp1_22 = _mm256_i32gather_ps(arg8, *(arg4 + zmm3[0].q), arg16)
                        arg8 = temp0_574
                        arg11 = temp1_22
                        zmm3 = _mm256_add_epi32(arg10, __vpbroadcastd_ymmqq_memd(0x14))
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        int32_t temp0_578
                        int32_t temp1_23
                        temp0_578, temp1_23 = _mm256_i32gather_ps(arg11, *(arg4 + zmm3[0].q), arg16)
                        zmm1 = _mm256_add_epi32(_mm256_add_epi32(arg10, zmm1), arg14)
                        zmm3[0].o = zx.o(0)
                        int32_t temp0_581
                        int32_t temp1_24
                        temp0_581, temp1_24 =
                            _mm256_i32gather_epi32(zmm3, *(arg4 + zmm1[0].q), arg16)
                        zmm3 = temp0_581
                        arg9 = _mm256_srli_epi32(zmm3, 0x15)
                        arg10 = _mm256_srli_epi32(zmm3, 0xa)
                        arg14 = __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                zmm3 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        zmm3 = arg10 & arg14
                        arg10 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm3 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm3, arg10))
                        arg14 = _mm256_broadcast_ss(1023f)
                        zmm3 = _mm256_div_ps(zmm3, arg14)
                        zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm1, arg7, zmm0)
                        zmm3 = _mm256_fmadd_ps(zmm3, arg8, temp0_563)
                        arg5 = _mm256_fmadd_ps(
                            _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(arg9, arg10)), 
                                arg14), 
                            temp0_578, temp0_567)
                        arg11 = var_520_1
                        var_400_1 = _mm256_maskstore_ps(arg16, zmm1)
                        var_3e0_1 = _mm256_maskstore_ps(arg16, zmm3)
                        var_3c0_1 = _mm256_maskstore_ps(arg16, arg5)
                    case 4, 5, 6
                        goto label_14029bd10
            
            arg14 = var_6e0
            zmm3 = var_700_2
            zmm0 = _mm256_sub_ps(var_400_1, arg6)
            zmm1 = _mm256_sub_ps(var_3e0_1, arg12)
            arg5 = _mm256_sub_ps(var_3c0_1, arg13)
            zmm0 = _mm256_fmadd_ps(zmm0, zmm3, arg6)
            zmm1 = _mm256_fmadd_ps(zmm1, zmm3, arg12)
            arg5 = _mm256_fmadd_ps(arg5, zmm3, arg13)
            arg6 = _mm256_maskstore_ps(arg16, zmm0)
            arg12 = _mm256_maskstore_ps(arg16, zmm1)
            arg13 = _mm256_maskstore_ps(arg16, arg5)
        
        arg16 = var_340_1
        zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
        arg9[0].o = zx.o(0)
        zmm3[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg13[0].o, zx.o(0))
        arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
        arg8[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg13[0].o, 0x28)
        int128_t var_300 = arg8[0].o
        arg8[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg13[0].o, zx.o(0))
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
        int128_t var_2f0_1 = zmm3[0].o
        zmm3[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg13[0].o, 0xa8)
        int128_t var_2e0_1 = arg6[0].o
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
        int128_t var_2d0_1 = zmm3[0].o
        zmm3[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
        arg6[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        arg7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg5[0].o, 0x28)
        int128_t var_2c0_1 = arg7[0].o
        arg7[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg5[0].o, zx.o(0))
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
        int128_t var_2b0_1 = zmm3[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 0xa8)
        int128_t var_2a0_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
        int128_t var_290_1 = zmm0[0].o
        uint64_t rcx_153
        int64_t rsi_17
        
        for (uint64_t i_9 = 0xff; i_9 != 0; i_9 = rsi_17 & rol.q(-2, rcx_153.b))
            uint64_t rcx_148 = _tzcnt_u64(i_9)
            rsi_17 = i_9 & not.q(1 << (rcx_148 u% 0x40))
            uint32_t var_320[0x8] = arg17
            zmm0[0].o = (&var_300)[rcx_148]
            *(arg1 + sx.q(var_320[zx.q(rcx_148.d) & 7]) * 0x30 + 0x10) = zmm0[0].o
            rcx_153 = _tzcnt_u64(rsi_17)
            zmm0[0].o = (&var_300)[rcx_153]
            *(arg1 + sx.q(var_320[zx.q(rcx_153.d) & 7]) * 0x30 + 0x10) = zmm0[0].o
        
        r14 += 8
        arg9[0].o = data_142fc92e0
        arg7 = var_680_2
        arg6[0].o = var_640
    while (r14 s< r11_4)
    
    rcx_155 = arg22
    
    if (r14 s< rcx_155)
        goto label_14029c303
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
return arg1
