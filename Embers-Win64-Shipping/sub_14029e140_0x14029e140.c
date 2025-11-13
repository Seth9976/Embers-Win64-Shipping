// 函数: sub_14029e140
// 地址: 0x14029e140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg15[0].o
int128_t var_68 = arg14[0].o
int128_t var_78 = arg13[0].o
int128_t var_98 = arg12[0].o
int128_t var_a8 = arg11[0].o
int128_t var_b8 = arg10[0].o
int128_t var_c8 = arg9[0].o
int128_t var_d8 = arg8[0].o
int128_t var_e8 = arg7[0].o
int64_t r15 = sx.q(arg20)
int32_t zmm12[0x8]
zmm12[0].o = arg18
int32_t r14 = arg17
uint16_t* r12 = arg16
int32_t rbx_1 = *(&data_143442e60 + (r15 << 2)) * *(&data_143442e40 + (r15 << 2))
int32_t r10_4 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
uint32_t var_400[0x8]
int32_t rcx_153
float r9
uint32_t zmm0[0x8]
uint32_t zmm1[0x8]
float zmm4[0x8]
int32_t zmm5[0x8]

if (r10_4 s<= 0)
    r9 = 0f
    rcx_153 = arg21
    
    if (0 s< rcx_153)
    label_1402a0266:
        zmm0[0].o = zx.o(r9)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(rcx_153)
        arg11 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
        arg5 = _mm256_slli_epi32(zmm0, 3)
        arg13[0].o = zx.o(0)
        uint32_t temp0_646[0x8]
        int32_t temp1_25
        temp0_646, temp1_25 = _mm256_i32gather_epi32(arg13, *(arg2 + arg5[0].q), arg11)
        arg13 = temp0_646
        arg6 = temp1_25
        zmm1 = __vpbroadcastd_ymmqq_memd(4)
        arg5 |= zmm1
        arg6[0].o = zx.o(0)
        uint32_t temp0_648[0x8]
        int32_t temp1_26
        temp0_648, temp1_26 = _mm256_i32gather_epi32(arg6, *(arg2 + arg5[0].q), arg11)
        zmm4 = temp1_26
        arg5[0].o = zx.o(arg4)
        int32_t temp0_651[0x8] =
            _mm256_mullo_epi32(temp0_648, _mm256_broadcastd_epi32(_mm256_slli_epi32(arg5, 2)[0]))
        arg10[0].o = zx.o(0)
        arg8[0].o = zx.o(0)
        uint32_t temp0_652[0x8]
        int32_t temp1_27
        temp0_652, temp1_27 = _mm256_i32gather_epi32(arg8, *(arg3 + temp0_651[0].q), arg11)
        arg8 = temp0_652
        int32_t temp0_653[0x8] = _mm256_add_epi32(temp0_651, zmm1)
        arg15[0].o = zx.o(0)
        uint32_t temp0_654[0x8]
        int32_t temp1_28
        temp0_654, temp1_28 = _mm256_i32gather_epi32(arg15, *(arg3 + temp0_653[0].q), arg11)
        arg15 = temp0_654
        arg6 = temp1_28
        temp0_653[0].o = zx.o(rbx_1)
        arg9 = _mm256_broadcastd_epi32(temp0_653[0])
        arg14 = __vpbroadcastd_ymmqq_memd(2)
        temp0_653[0].o = zx.o(0)
        int32_t rcx_155
        rcx_155.b = zx.o(0) f>= zmm12[0]
        temp0_653[0].o = zx.o(neg.d(rcx_155))
        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        temp0_653[0].o ^= arg6[0].o
        arg5 = _mm256_broadcastd_epi32(temp0_653[0])
        arg6 = _mm256_cmpgt_epi32(arg14, arg15) & not.32(arg5)
        zmm0 = arg6 & arg11
        int32_t temp0_660 = _mm256_movemask_ps(zmm0)
        int32_t var_760_3[0x8] = arg8
        
        if (temp0_660 == 0)
            zmm12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm12[0].o, zmm12[0].o)
            arg12[0].o = zx.o(0)
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        else
            arg5 = _mm256_cmpeq_epi32(arg5, arg5)
            arg12 = _mm256_add_epi32(arg15, arg5)
            
            if (zmm12[0].o f>= 1f)
                zmm12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm12[0].o, zmm12[0].o)
                arg12 = _mm256_blendv_ps(zmm12, arg12, zmm0)
                zmm0 = arg12
            else
                uint32_t var_5c0_2[0x8] = arg6
                zmm5 = arg9
                arg9 = zmm1
                float var_740_1[0x8] = arg11
                arg5[0].o = zx.o(r12)
                arg6 = _mm256_cvtepi32_epi64(arg8[0].o)
                zmm4[0].o = _mm256_extracti128_si256(arg8, 1)
                zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                int32_t var_6e0_1[0x8] = zmm5
                int32_t temp0_666[0x8] = _mm256_mullo_epi32(arg15, zmm5)
                arg7[0].o = _mm256_extracti128_si256(temp0_666, 1)
                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                zmm5 = _mm256_cvtepi32_epi64(temp0_666[0].o)
                arg8[0].o = 3
                arg5[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
                arg5 = _mm256_broadcastq_epi64(arg5[0].q)
                zmm4 = _mm256_add_epi64(_mm256_add_epi64(arg5, zmm4), arg7)
                arg5 = _mm256_add_epi64(_mm256_add_epi64(arg5, arg6), zmm5)
                arg6 = __vpbroadcastq_ymmqq_memq(-4)
                arg11 = zmm4 & arg6
                zmm1[0].o = zmm12[0].o
                zmm12 = arg5 & arg6
                int32_t rbx_26 = r14 - 2
                arg5 = _mm256_broadcastss_ps(zmm1[0].o)
                arg6 = _mm256_cvtepi32_ps(arg12)
                arg5 = _mm256_mul_ps(arg5, arg6)
                arg6[0].o = arg13[0].o
                arg6[0] = float.s(r14 - 1)
                arg7[0].o = arg6[0].o f* zmm1[0]
                int32_t rdx_18 = int.d(arg7[0]) s>> 0x1f
                int32_t rdx_19 = rdx_18 & not.d(rdx_18)
                
                if (rbx_26 s> rdx_19)
                    rbx_26 = rdx_19
                
                int32_t temp0_680[0x8] = _mm256_cvttps_epi32(arg5)
                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                int32_t temp0_683[0x8] = _mm256_min_epi32(_mm256_max_epi32(temp0_680, arg6), arg12)
                zmm1 = arg12
                uint32_t var_660_1[0x8] = arg9
                uint32_t var_500_2[0x8] = arg14
                uint32_t var_700_1[0x8] = arg15
                var_400[0].o = arg7[0].o
                int32_t temp0_959[0x8]
                
                if (r14 s< 0x100)
                    arg5 = _mm256_cvtepi32_epi64(temp0_683[0].o)
                    arg6 = _mm256_add_epi64(zmm12, arg5)
                    char rsi_22 = temp0_660.b
                    
                    if ((rsi_22 & 1) == 0)
                        if ((rsi_22 & 2) != 0)
                            goto label_1402a1176
                        
                        goto label_1402a0a5d
                    
                    arg5[0].o = __vpbroadcastb_xmmdq_memb(*arg6[0].q)
                    
                    if ((rsi_22 & 2) != 0)
                    label_1402a1176:
                        uint32_t rdx_102 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdx_102, 1)
                        zmm4[0].o = _mm256_extracti128_si256(temp0_683, 1)
                        
                        if ((rsi_22 & 4) == 0)
                            goto label_1402a0a6d
                        
                        goto label_1402a118e
                    
                label_1402a0a5d:
                    zmm4[0].o = _mm256_extracti128_si256(temp0_683, 1)
                    
                    if ((rsi_22 & 4) == 0)
                    label_1402a0a6d:
                        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                        
                        if ((rsi_22 & 8) != 0)
                            goto label_1402a11b0
                        
                        goto label_1402a0a7c
                    
                label_1402a118e:
                    zmm5[0].o = _mm256_extracti128_si256(arg6, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*zmm5[0].q), 2)
                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                    
                    if ((rsi_22 & 8) != 0)
                    label_1402a11b0:
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        uint32_t rdx_106 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdx_106, 3)
                        arg6 = _mm256_add_epi64(arg11, zmm4)
                        
                        if ((rsi_22 & 0x10) == 0)
                            goto label_1402a0a8a
                        
                        goto label_1402a11da
                    
                label_1402a0a7c:
                    arg6 = _mm256_add_epi64(arg11, zmm4)
                    
                    if ((rsi_22 & 0x10) == 0)
                    label_1402a0a8a:
                        
                        if ((rsi_22 & 0x20) != 0)
                            goto label_1402a11ef
                        
                        goto label_1402a0a94
                    
                label_1402a11da:
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*arg6[0].q), 4)
                    
                    if ((rsi_22 & 0x20) != 0)
                    label_1402a11ef:
                        uint32_t rdx_110 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdx_110, 5)
                        
                        if ((rsi_22 & 0x40) == 0)
                            goto label_1402a0a9e
                        
                        goto label_1402a1201
                    
                label_1402a0a94:
                    
                    if ((rsi_22 & 0x40) != 0)
                    label_1402a1201:
                        zmm4[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*zmm4[0].q), 6)
                        
                        if (temp0_660.b s< 0)
                        label_1402a121c:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint32_t rdx_114 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdx_114, 7)
                    else
                    label_1402a0a9e:
                        
                        if (temp0_660.b s< 0)
                            goto label_1402a121c
                    
                    arg5[0].o &= data_142fc92e0
                    arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                    arg6[0].o = zx.o(rbx_26)
                    arg10 = _mm256_broadcastd_epi32(arg6[0])
                    int32_t temp0_802[0x8] = _mm256_cmpgt_epi32(arg5, arg10)
                    uint32_t var_420_2[0x8] = temp0_802 ^ _mm256_cmpeq_epi32(arg6, arg6)
                    arg15 = temp0_683
                    
                    if (_mm256_movemask_ps(temp0_802 & not.32(zmm0)) != 0)
                        arg14 = temp0_683
                        arg15 = _mm256_blendv_ps(arg14, arg12, var_420_2)
                        zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                        arg6 = _mm256_sub_epi32(arg14, zmm5)
                        zmm4 = _mm256_cmpgt_epi32(arg6, arg12) ^ zmm5
                        zmm5 = temp0_802 & not.32(zmm4)
                        arg8 = zmm0 & zmm5
                        int32_t i = _mm256_movemask_ps(arg8)
                        
                        if (i != 0)
                            arg7[0].o = data_142fc92e0
                            uint32_t temp0_810[0x8] = _mm256_cmpeq_epi32(arg9, arg9)
                            
                            do
                                zmm4 = arg6
                                arg6 = _mm256_add_epi64(zmm12, _mm256_cvtepi32_epi64(zmm4[0].o))
                                char temp0_828 = _mm256_movemask_ps(arg8)
                                
                                if ((temp0_828 & 1) == 0)
                                    if ((temp0_828 & 2) != 0)
                                        goto label_1402a0b5d
                                    
                                    goto label_1402a0c45
                                
                                temp0_802[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(temp0_802[0].o, 
                                    zx.d(*arg6[0].q), 0)
                                
                                if ((temp0_828 & 2) != 0)
                                label_1402a0b5d:
                                    uint32_t rdx_45 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                    temp0_802[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(temp0_802[0].o, rdx_45, 1)
                                    arg8[0].o = _mm256_extracti128_si256(zmm4, 1)
                                    
                                    if ((temp0_828 & 4) == 0)
                                        goto label_1402a0c55
                                    
                                    goto label_1402a0b75
                                
                            label_1402a0c45:
                                arg8[0].o = _mm256_extracti128_si256(zmm4, 1)
                                
                                if ((temp0_828 & 4) == 0)
                                label_1402a0c55:
                                    arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                    
                                    if ((temp0_828 & 8) != 0)
                                        goto label_1402a0b97
                                    
                                    goto label_1402a0c64
                                
                            label_1402a0b75:
                                arg12[0].o = _mm256_extracti128_si256(arg6, 1)
                                temp0_802[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(temp0_802[0].o, 
                                    zx.d(*arg12[0]), 2)
                                arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                
                                if ((temp0_828 & 8) != 0)
                                label_1402a0b97:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    uint32_t rdx_49 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                    temp0_802[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(temp0_802[0].o, rdx_49, 3)
                                    arg6 = _mm256_add_epi64(arg11, arg8)
                                    
                                    if ((temp0_828 & 0x10) == 0)
                                        goto label_1402a0c72
                                    
                                    goto label_1402a0bc1
                                
                            label_1402a0c64:
                                arg6 = _mm256_add_epi64(arg11, arg8)
                                
                                if ((temp0_828 & 0x10) == 0)
                                label_1402a0c72:
                                    
                                    if ((temp0_828 & 0x20) != 0)
                                        goto label_1402a0bd6
                                    
                                    goto label_1402a0c7c
                                
                            label_1402a0bc1:
                                temp0_802[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(temp0_802[0].o, 
                                    zx.d(*arg6[0].q), 4)
                                
                                if ((temp0_828 & 0x20) != 0)
                                label_1402a0bd6:
                                    uint32_t rdx_53 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                    temp0_802[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(temp0_802[0].o, rdx_53, 5)
                                    
                                    if ((temp0_828 & 0x40) == 0)
                                        goto label_1402a0c86
                                    
                                    goto label_1402a0be8
                                
                            label_1402a0c7c:
                                
                                if ((temp0_828 & 0x40) != 0)
                                label_1402a0be8:
                                    arg8[0].o = _mm256_extracti128_si256(arg6, 1)
                                    temp0_802[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                        temp0_802[0].o, zx.d(*arg8[0].q), 6)
                                    
                                    if (temp0_828 s< 0)
                                    label_1402a0c04:
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        uint32_t rdx_57 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                        temp0_802[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                            temp0_802[0].o, rdx_57, 7)
                                else
                                label_1402a0c86:
                                    
                                    if (temp0_828 s< 0)
                                        goto label_1402a0c04
                                
                                arg6[0].o = temp0_802[0].o & arg7[0].o
                                arg6 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg6[0].o), arg10)
                                    & zmm5
                                arg8[0].o = zx.o(0)
                                
                                if (_mm256_movemask_ps(arg6 & zmm0) != i)
                                    arg8 = arg6 ^ zmm5
                                
                                arg15 = _mm256_blendv_ps(arg15, arg14, arg6)
                                arg6 = _mm256_sub_epi32(zmm4, temp0_810)
                                arg12 = zmm1
                                zmm5 = _mm256_cmpgt_epi32(arg6, zmm1) & not.32(arg8)
                                arg8 = zmm5 & zmm0
                                i = _mm256_movemask_ps(arg8)
                                arg14 = zmm4
                            while (i != 0)
                    
                    arg6 = var_420_2
                    arg5 = _mm256_andnot_ps(arg6, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) == 0)
                        arg8 = var_760_3
                        arg9 = var_6e0_1
                        arg10[0].o = zx.o(0)
                    else
                        arg5 = __vxorps_ymmqq_ymmqq_memqq(arg6, data_142fc9420)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        arg15 = _mm256_blendv_ps(arg15, arg6, arg5)
                        zmm4 = _mm256_cmpeq_epi32(zmm4, zmm4)
                        arg7 = __vpaddd_ymmqq_ymmqq_memqq(zmm4, temp0_683)
                        arg6 = _mm256_cmpgt_epi32(arg7, arg6)
                        arg9 = arg6 & arg5
                        arg8 = arg9 & zmm0
                        int32_t i_1 = _mm256_movemask_ps(arg8)
                        
                        if (i_1 != 0)
                            arg12[0].o = data_142fc92e0
                            
                            do
                                arg6 = _mm256_add_epi64(zmm12, _mm256_cvtepi32_epi64(arg7[0].o))
                                char temp0_865 = _mm256_movemask_ps(arg8)
                                
                                if ((temp0_865 & 1) == 0)
                                    if ((temp0_865 & 2) != 0)
                                        goto label_1402a0d5d
                                    
                                    goto label_1402a0e41
                                
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*arg6[0].q), 0)
                                
                                if ((temp0_865 & 2) != 0)
                                label_1402a0d5d:
                                    uint32_t rdx_63 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdx_63, 1)
                                    arg8[0].o = _mm256_extracti128_si256(arg7, 1)
                                    
                                    if ((temp0_865 & 4) == 0)
                                        goto label_1402a0e51
                                    
                                    goto label_1402a0d75
                                
                            label_1402a0e41:
                                arg8[0].o = _mm256_extracti128_si256(arg7, 1)
                                
                                if ((temp0_865 & 4) == 0)
                                label_1402a0e51:
                                    arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                    
                                    if ((temp0_865 & 8) != 0)
                                        goto label_1402a0d97
                                    
                                    goto label_1402a0e60
                                
                            label_1402a0d75:
                                zmm5[0].o = _mm256_extracti128_si256(arg6, 1)
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*zmm5[0].q), 2)
                                arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                
                                if ((temp0_865 & 8) != 0)
                                label_1402a0d97:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    uint32_t rdx_67 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdx_67, 3)
                                    arg6 = _mm256_add_epi64(arg11, arg8)
                                    
                                    if ((temp0_865 & 0x10) == 0)
                                        goto label_1402a0e6e
                                    
                                    goto label_1402a0dc1
                                
                            label_1402a0e60:
                                arg6 = _mm256_add_epi64(arg11, arg8)
                                
                                if ((temp0_865 & 0x10) == 0)
                                label_1402a0e6e:
                                    
                                    if ((temp0_865 & 0x20) != 0)
                                        goto label_1402a0dd6
                                    
                                    goto label_1402a0e78
                                
                            label_1402a0dc1:
                                arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                    zx.d(*arg6[0].q), 4)
                                
                                if ((temp0_865 & 0x20) != 0)
                                label_1402a0dd6:
                                    uint32_t rdx_71 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                    arg5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdx_71, 5)
                                    
                                    if ((temp0_865 & 0x40) == 0)
                                        goto label_1402a0e82
                                    
                                    goto label_1402a0de8
                                
                            label_1402a0e78:
                                
                                if ((temp0_865 & 0x40) != 0)
                                label_1402a0de8:
                                    zmm5[0].o = _mm256_extracti128_si256(arg6, 1)
                                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, 
                                        zx.d(*zmm5[0].q), 6)
                                    
                                    if (temp0_865 s< 0)
                                    label_1402a0e04:
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        uint32_t rdx_75 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                        arg5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdx_75, 7)
                                else
                                label_1402a0e82:
                                    
                                    if (temp0_865 s< 0)
                                        goto label_1402a0e04
                                
                                arg6[0].o = arg5[0].o & arg12[0].o
                                arg6 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg6[0].o), arg10)
                                arg8 = arg6 & not.32(arg9)
                                arg6[0].o = zx.o(0)
                                zmm5 = arg8 & zmm0
                                int32_t temp0_871 = _mm256_movemask_ps(zmm5)
                                arg14[0].o = zx.o(0)
                                
                                if (temp0_871 != i_1)
                                    arg14 = arg8 ^ arg9
                                
                                arg15 = _mm256_blendv_ps(arg15, arg7, arg8)
                                arg7 = _mm256_add_epi32(arg7, zmm4)
                                arg6 = _mm256_cmpgt_epi32(arg7, arg6)
                                arg9 = arg6 & arg14
                                arg8 = arg9 & zmm0
                                i_1 = _mm256_movemask_ps(arg8)
                            while (i_1 != 0)
                        
                        arg8 = var_760_3
                        arg9 = var_6e0_1
                        arg10[0].o = zx.o(0)
                        arg12 = zmm1
                    
                    zmm1 = var_660_1
                    arg5[0].o = zx.o(0)
                    arg5 = _mm256_blendv_ps(arg5, arg15, zmm0)
                    zmm5 = arg5
                    arg5 = _mm256_add_epi64(zmm12, _mm256_cvtepi32_epi64(arg5[0].o))
                    
                    if ((rsi_22 & 1) == 0)
                        arg14 = var_500_2
                        arg15 = var_700_1
                        
                        if ((rsi_22 & 2) != 0)
                            goto label_1402a1ef7
                        
                        goto label_1402a128b
                    
                    arg7[0].o = __vpbroadcastb_xmmdq_memb(*arg5[0].q)
                    arg14 = var_500_2
                    arg15 = var_700_1
                    
                    if ((rsi_22 & 2) != 0)
                    label_1402a1ef7:
                        uint32_t rdx_139 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdx_139, 1)
                        arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                        
                        if ((rsi_22 & 4) == 0)
                            goto label_1402a129b
                        
                        goto label_1402a1f0f
                    
                label_1402a128b:
                    arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    
                    if ((rsi_22 & 4) == 0)
                    label_1402a129b:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((rsi_22 & 8) != 0)
                            goto label_1402a1f31
                        
                        goto label_1402a12aa
                    
                label_1402a1f0f:
                    zmm4[0].o = _mm256_extracti128_si256(arg5, 1)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm4[0].q), 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((rsi_22 & 8) != 0)
                    label_1402a1f31:
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        uint32_t rdx_143 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdx_143, 3)
                        arg5 = _mm256_add_epi64(arg11, arg6)
                        
                        if ((rsi_22 & 0x10) == 0)
                            goto label_1402a12b8
                        
                        goto label_1402a1f5b
                    
                label_1402a12aa:
                    arg5 = _mm256_add_epi64(arg11, arg6)
                    
                    if ((rsi_22 & 0x10) == 0)
                    label_1402a12b8:
                        
                        if ((rsi_22 & 0x20) != 0)
                            goto label_1402a1f70
                        
                        goto label_1402a12c2
                    
                label_1402a1f5b:
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*arg5[0].q), 4)
                    
                    if ((rsi_22 & 0x20) != 0)
                    label_1402a1f70:
                        uint32_t rdx_147 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdx_147, 5)
                        
                        if ((rsi_22 & 0x40) == 0)
                            goto label_1402a12cc
                        
                        goto label_1402a1f82
                    
                label_1402a12c2:
                    
                    if ((rsi_22 & 0x40) != 0)
                    label_1402a1f82:
                        arg6[0].o = _mm256_extracti128_si256(arg5, 1)
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*arg6[0].q), 6)
                        
                        if (temp0_660.b s< 0)
                        label_1402a1f9d:
                            arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                            uint32_t rdx_151 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdx_151, 7)
                    else
                    label_1402a12cc:
                        
                        if (temp0_660.b s< 0)
                            goto label_1402a1f9d
                    
                    int32_t temp0_944[0x8] = _mm256_sub_epi32(zmm5, _mm256_cmpeq_epi32(arg5, arg5))
                    arg6[0].o = zx.o(0)
                    arg6 = _mm256_blendv_ps(arg6, temp0_944, zmm0)
                    arg5 = _mm256_cmpgt_epi32(arg6, arg12) & zmm0
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg12, arg5)
                    
                    arg12 = zmm5
                    zmm0 = arg6
                    arg5 = _mm256_cvtepi32_epi64(zmm0[0].o)
                    arg6 = _mm256_add_epi64(zmm12, arg5)
                    
                    if ((rsi_22 & 1) == 0)
                        if ((rsi_22 & 2) != 0)
                            goto label_1402a1fd0
                        
                        goto label_1402a1322
                    
                    arg5[0].o = __vpbroadcastb_xmmdq_memb(*arg6[0].q)
                    
                    if ((rsi_22 & 2) != 0)
                    label_1402a1fd0:
                        uint32_t rdx_154 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdx_154, 1)
                        zmm4[0].o = _mm256_extracti128_si256(zmm0, 1)
                        
                        if ((rsi_22 & 4) == 0)
                            goto label_1402a1332
                        
                        goto label_1402a1fe8
                    
                label_1402a1322:
                    zmm4[0].o = _mm256_extracti128_si256(zmm0, 1)
                    
                    if ((rsi_22 & 4) == 0)
                    label_1402a1332:
                        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                        
                        if ((rsi_22 & 8) != 0)
                            goto label_1402a200a
                        
                        goto label_1402a1341
                    
                label_1402a1fe8:
                    zmm5[0].o = _mm256_extracti128_si256(arg6, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*zmm5[0].q), 2)
                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                    
                    if ((rsi_22 & 8) != 0)
                    label_1402a200a:
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        uint32_t rdx_158 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdx_158, 3)
                        arg6 = _mm256_add_epi64(arg11, zmm4)
                        
                        if ((rsi_22 & 0x10) == 0)
                            goto label_1402a134f
                        
                        goto label_1402a2034
                    
                label_1402a1341:
                    arg6 = _mm256_add_epi64(arg11, zmm4)
                    
                    if ((rsi_22 & 0x10) != 0)
                    label_1402a2034:
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*arg6[0].q), 4)
                        arg11 = var_740_1
                        
                        if ((rsi_22 & 0x20) != 0)
                        label_1402a204f:
                            uint32_t rdx_162 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rdx_162, 5)
                            
                            if ((rsi_22 & 0x40) == 0)
                                goto label_1402a1369
                            
                            goto label_1402a2061
                    else
                    label_1402a134f:
                        arg11 = var_740_1
                        
                        if ((rsi_22 & 0x20) != 0)
                            goto label_1402a204f
                    
                    if ((rsi_22 & 0x40) != 0)
                    label_1402a2061:
                        zmm4[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, zx.d(*zmm4[0].q), 6)
                        zmm4[0].o = arg7[0].o & data_142fc92e0
                        zmm12 = zmm0
                        
                        if (temp0_660.b s< 0)
                        label_1402a2088:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint32_t rcx_178 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg5[0].o, rcx_178, 7)
                    else
                    label_1402a1369:
                        zmm4[0].o = arg7[0].o & data_142fc92e0
                        zmm12 = zmm0
                        
                        if (temp0_660.b s< 0)
                            goto label_1402a2088
                    
                    zmm0 = var_5c0_2
                    arg6 = _mm256_cvtepu16_epi32(zmm4[0].o)
                    arg5[0].o &= data_142fc92e0
                    arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                    zmm4[0].o = zx.o(0)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    
                    if (arg19 != 1)
                        temp0_959 = _mm256_max_epi32(_mm256_sub_epi32(arg5, arg6), 
                            __vpbroadcastd_ymmqq_memd(1))
                        zmm5 = _mm256_div_ps(
                            _mm256_sub_ps(_mm256_broadcast_ss(var_400[0]), 
                                _mm256_cvtepi32_ps(arg6)), 
                            _mm256_cvtepi32_ps(temp0_959))
                else
                    zmm4 = _mm256_add_epi32(temp0_683, temp0_683)
                    arg5 = _mm256_cvtepi32_epi64(zmm4[0].o)
                    arg6 = _mm256_add_epi64(zmm12, arg5)
                    char rsi_21 = temp0_660.b
                    
                    if ((rsi_21 & 1) == 0)
                        if ((rsi_21 & 2) != 0)
                            goto label_1402a0f0c
                        
                        goto label_1402a0484
                    
                    arg5[0].o = __vpbroadcastw_xmmdq_memw(*arg6[0].q)
                    
                    if ((rsi_21 & 2) != 0)
                    label_1402a0f0c:
                        int64_t rdx_78 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rdx_78, 1)
                        zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                        
                        if ((rsi_21 & 4) == 0)
                            goto label_1402a0494
                        
                        goto label_1402a0f27
                    
                label_1402a0484:
                    zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                    
                    if ((rsi_21 & 4) == 0)
                    label_1402a0494:
                        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                        
                        if ((rsi_21 & 8) != 0)
                            goto label_1402a0f46
                        
                        goto label_1402a04a3
                    
                label_1402a0f27:
                    zmm5[0].o = _mm256_extracti128_si256(arg6, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm5[0].q, 2)
                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                    
                    if ((rsi_21 & 8) != 0)
                    label_1402a0f46:
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t rdx_80 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rdx_80, 3)
                        arg6 = _mm256_add_epi64(arg11, zmm4)
                        
                        if ((rsi_21 & 0x10) == 0)
                            goto label_1402a04b1
                        
                        goto label_1402a0f6a
                    
                label_1402a04a3:
                    arg6 = _mm256_add_epi64(arg11, zmm4)
                    
                    if ((rsi_21 & 0x10) == 0)
                    label_1402a04b1:
                        
                        if ((rsi_21 & 0x20) != 0)
                            goto label_1402a0f79
                        
                        goto label_1402a04bb
                    
                label_1402a0f6a:
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg6[0].q, 4)
                    
                    if ((rsi_21 & 0x20) != 0)
                    label_1402a0f79:
                        int64_t rdx_82 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rdx_82, 5)
                        
                        if ((rsi_21 & 0x40) == 0)
                            goto label_1402a04c5
                        
                        goto label_1402a0f8e
                    
                label_1402a04bb:
                    
                    if ((rsi_21 & 0x40) != 0)
                    label_1402a0f8e:
                        zmm4[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm4[0].q, 6)
                        
                        if (temp0_660.b s< 0)
                        label_1402a0fa6:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            int64_t rdx_84 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rdx_84, 7)
                    else
                    label_1402a04c5:
                        
                        if (temp0_660.b s< 0)
                            goto label_1402a0fa6
                    
                    arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                    arg6[0].o = zx.o(rbx_26)
                    uint32_t temp0_691[0x8] = _mm256_broadcastd_epi32(arg6[0])
                    int32_t temp0_692[0x8] = _mm256_cmpgt_epi32(arg5, temp0_691)
                    arg12 = temp0_692 ^ _mm256_cmpeq_epi32(arg6, arg6)
                    arg6 = temp0_692 & not.32(zmm0)
                    arg10 = temp0_683
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        arg14 = temp0_683
                        arg10 = _mm256_blendv_ps(arg14, zmm1, arg12)
                        zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                        arg6 = _mm256_sub_epi32(arg14, zmm5)
                        zmm4 = _mm256_cmpgt_epi32(arg6, zmm1) ^ zmm5
                        zmm5 = temp0_692 & not.32(zmm4)
                        arg7 = zmm0 & zmm5
                        int32_t i_2 = _mm256_movemask_ps(arg7)
                        
                        if (i_2 != 0)
                            arg5 = _mm256_cmpeq_epi32(temp0_692, temp0_692)
                            
                            do
                                arg9 = arg6
                                int32_t temp0_716[0x8] = _mm256_add_epi32(arg6, arg6)
                                arg6 =
                                    _mm256_add_epi64(zmm12, _mm256_cvtepi32_epi64(temp0_716[0].o))
                                char temp0_719 = _mm256_movemask_ps(arg7)
                                
                                if ((temp0_719 & 1) == 0)
                                    if ((temp0_719 & 2) != 0)
                                        goto label_1402a0554
                                    
                                    goto label_1402a0639
                                
                                zmm4[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg6[0].q, 0)
                                
                                if ((temp0_719 & 2) != 0)
                                label_1402a0554:
                                    int64_t rdx_22 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rdx_22, 1)
                                    arg7[0].o = _mm256_extracti128_si256(temp0_716, 1)
                                    
                                    if ((temp0_719 & 4) == 0)
                                        goto label_1402a0649
                                    
                                    goto label_1402a056f
                                
                            label_1402a0639:
                                arg7[0].o = _mm256_extracti128_si256(temp0_716, 1)
                                
                                if ((temp0_719 & 4) == 0)
                                label_1402a0649:
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_719 & 8) != 0)
                                        goto label_1402a058e
                                    
                                    goto label_1402a0658
                                
                            label_1402a056f:
                                temp0_716[0].o = _mm256_extracti128_si256(arg6, 1)
                                zmm4[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *temp0_716[0].q, 2)
                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                
                                if ((temp0_719 & 8) != 0)
                                label_1402a058e:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    int64_t rdx_24 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rdx_24, 3)
                                    arg6 = _mm256_add_epi64(arg11, arg7)
                                    
                                    if ((temp0_719 & 0x10) == 0)
                                        goto label_1402a0666
                                    
                                    goto label_1402a05b2
                                
                            label_1402a0658:
                                arg6 = _mm256_add_epi64(arg11, arg7)
                                
                                if ((temp0_719 & 0x10) == 0)
                                label_1402a0666:
                                    
                                    if ((temp0_719 & 0x20) != 0)
                                        goto label_1402a05c1
                                    
                                    goto label_1402a0670
                                
                            label_1402a05b2:
                                zmm4[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg6[0].q, 4)
                                
                                if ((temp0_719 & 0x20) != 0)
                                label_1402a05c1:
                                    int64_t rdx_26 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rdx_26, 5)
                                    
                                    if ((temp0_719 & 0x40) == 0)
                                        goto label_1402a067a
                                    
                                    goto label_1402a05d6
                                
                            label_1402a0670:
                                
                                if ((temp0_719 & 0x40) != 0)
                                label_1402a05d6:
                                    arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg7[0].q, 6)
                                    
                                    if (temp0_719 s< 0)
                                    label_1402a05ef:
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        int64_t rdx_28 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rdx_28, 7)
                                else
                                label_1402a067a:
                                    
                                    if (temp0_719 s< 0)
                                        goto label_1402a05ef
                                
                                arg6 =
                                    _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm4[0].o), temp0_691)
                                    & zmm5
                                arg7[0].o = zx.o(0)
                                
                                if (_mm256_movemask_ps(arg6 & zmm0) != i_2)
                                    arg7 = arg6 ^ zmm5
                                
                                arg10 = _mm256_blendv_ps(arg10, arg14, arg6)
                                arg6 = _mm256_sub_epi32(arg9, arg5)
                                zmm5 = _mm256_cmpgt_epi32(arg6, zmm1) & not.32(arg7)
                                arg7 = zmm5 & zmm0
                                i_2 = _mm256_movemask_ps(arg7)
                                arg14 = arg9
                            while (i_2 != 0)
                    
                    arg5 = _mm256_andnot_ps(arg12, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        int32_t temp0_732[0x8] = __vxorps_ymmqq_ymmqq_memqq(arg12, data_142fc9420)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        arg10 = _mm256_blendv_ps(arg10, arg6, temp0_732)
                        uint32_t temp0_735[0x8] = _mm256_cmpeq_epi32(arg14, arg14)
                        zmm5 = __vpaddd_ymmqq_ymmqq_memqq(temp0_735, temp0_683)
                        arg5 = _mm256_cmpgt_epi32(zmm5, arg6) & temp0_732
                        arg8 = arg5 & zmm0
                        
                        for (int32_t i_3 = _mm256_movemask_ps(arg8); i_3 != 0; 
                                i_3 = _mm256_movemask_ps(arg8))
                            arg9 = _mm256_add_epi32(zmm5, zmm5)
                            arg6 = _mm256_add_epi64(zmm12, _mm256_cvtepi32_epi64(arg9[0].o))
                            char temp0_757 = _mm256_movemask_ps(arg8)
                            
                            if ((temp0_757 & 1) == 0)
                                if ((temp0_757 & 2) != 0)
                                    goto label_1402a0734
                                
                                goto label_1402a0815
                            
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg6[0].q, 0)
                            
                            if ((temp0_757 & 2) != 0)
                            label_1402a0734:
                                int64_t rdx_32 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdx_32, 1)
                                arg8[0].o = _mm256_extracti128_si256(arg9, 1)
                                
                                if ((temp0_757 & 4) == 0)
                                    goto label_1402a0825
                                
                                goto label_1402a074f
                            
                        label_1402a0815:
                            arg8[0].o = _mm256_extracti128_si256(arg9, 1)
                            
                            if ((temp0_757 & 4) == 0)
                            label_1402a0825:
                                arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                
                                if ((temp0_757 & 8) != 0)
                                    goto label_1402a076e
                                
                                goto label_1402a0834
                            
                        label_1402a074f:
                            zmm4[0].o = _mm256_extracti128_si256(arg6, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm4[0].q, 2)
                            arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                            
                            if ((temp0_757 & 8) != 0)
                            label_1402a076e:
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                int64_t rdx_34 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdx_34, 3)
                                arg6 = _mm256_add_epi64(arg11, arg8)
                                
                                if ((temp0_757 & 0x10) == 0)
                                    goto label_1402a0842
                                
                                goto label_1402a0792
                            
                        label_1402a0834:
                            arg6 = _mm256_add_epi64(arg11, arg8)
                            
                            if ((temp0_757 & 0x10) == 0)
                            label_1402a0842:
                                
                                if ((temp0_757 & 0x20) != 0)
                                    goto label_1402a07a1
                                
                                goto label_1402a084c
                            
                        label_1402a0792:
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg6[0].q, 4)
                            
                            if ((temp0_757 & 0x20) != 0)
                            label_1402a07a1:
                                int64_t rdx_36 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdx_36, 5)
                                
                                if ((temp0_757 & 0x40) == 0)
                                    goto label_1402a0856
                                
                                goto label_1402a07b6
                            
                        label_1402a084c:
                            
                            if ((temp0_757 & 0x40) != 0)
                            label_1402a07b6:
                                zmm4[0].o = _mm256_extracti128_si256(arg6, 1)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm4[0].q, 6)
                                
                                if (temp0_757 s< 0)
                                label_1402a07cf:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    int64_t rdx_38 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdx_38, 7)
                            else
                            label_1402a0856:
                                
                                if (temp0_757 s< 0)
                                    goto label_1402a07cf
                            
                            arg6 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg7[0].o), temp0_691)
                            arg8 = arg6 & not.32(arg5)
                            arg6[0].o = zx.o(0)
                            zmm4 = arg8 & zmm0
                            int32_t temp0_763 = _mm256_movemask_ps(zmm4)
                            arg9[0].o = zx.o(0)
                            
                            if (temp0_763 != i_3)
                                arg9 = arg8 ^ arg5
                            
                            arg10 = _mm256_blendv_ps(arg10, zmm5, arg8)
                            zmm5 = _mm256_add_epi32(zmm5, temp0_735)
                            arg5 = _mm256_cmpgt_epi32(zmm5, arg6) & arg9
                            arg8 = arg5 & zmm0
                    
                    arg8 = var_760_3
                    arg9 = var_6e0_1
                    arg15 = var_700_1
                    arg5[0].o = zx.o(0)
                    arg12 = _mm256_blendv_ps(arg5, arg10, zmm0)
                    arg6 = _mm256_add_epi32(arg12, arg12)
                    arg5 = _mm256_add_epi64(zmm12, _mm256_cvtepi32_epi64(arg6[0].o))
                    
                    if ((rsi_21 & 1) == 0)
                        arg14 = var_500_2
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        
                        if ((rsi_21 & 2) != 0)
                            goto label_1402a0fde
                        
                        goto label_1402a08f8
                    
                    arg7[0].o = __vpbroadcastw_xmmdq_memw(*arg5[0].q)
                    arg14 = var_500_2
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    
                    if ((rsi_21 & 2) != 0)
                    label_1402a0fde:
                        int64_t rdx_86 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdx_86, 1)
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        
                        if ((rsi_21 & 4) == 0)
                            goto label_1402a0908
                        
                        goto label_1402a0ff9
                    
                label_1402a08f8:
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    
                    if ((rsi_21 & 4) == 0)
                    label_1402a0908:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((rsi_21 & 8) != 0)
                            goto label_1402a1018
                        
                        goto label_1402a0917
                    
                label_1402a0ff9:
                    zmm4[0].o = _mm256_extracti128_si256(arg5, 1)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm4[0].q, 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((rsi_21 & 8) != 0)
                    label_1402a1018:
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        int64_t rdx_88 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdx_88, 3)
                        arg5 = _mm256_add_epi64(arg11, arg6)
                        
                        if ((rsi_21 & 0x10) == 0)
                            goto label_1402a0925
                        
                        goto label_1402a103c
                    
                label_1402a0917:
                    arg5 = _mm256_add_epi64(arg11, arg6)
                    
                    if ((rsi_21 & 0x10) == 0)
                    label_1402a0925:
                        
                        if ((rsi_21 & 0x20) != 0)
                            goto label_1402a104b
                        
                        goto label_1402a092f
                    
                label_1402a103c:
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg5[0].q, 4)
                    
                    if ((rsi_21 & 0x20) != 0)
                    label_1402a104b:
                        int64_t rdx_90 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdx_90, 5)
                        
                        if ((rsi_21 & 0x40) == 0)
                            goto label_1402a0939
                        
                        goto label_1402a1060
                    
                label_1402a092f:
                    
                    if ((rsi_21 & 0x40) != 0)
                    label_1402a1060:
                        arg6[0].o = _mm256_extracti128_si256(arg5, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg6[0].q, 6)
                        
                        if (temp0_660.b s< 0)
                        label_1402a1078:
                            arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                            int64_t rdx_92 = __vpextrq_gpr64q_xmmdq_immb(arg5[0].o, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdx_92, 7)
                    else
                    label_1402a0939:
                        
                        if (temp0_660.b s< 0)
                            goto label_1402a1078
                    
                    int32_t temp0_777[0x8] = _mm256_sub_epi32(arg12, _mm256_cmpeq_epi32(arg5, arg5))
                    arg6[0].o = zx.o(0)
                    arg6 = _mm256_blendv_ps(arg6, temp0_777, zmm0)
                    arg5 = _mm256_cmpgt_epi32(arg6, zmm1) & zmm0
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg6 = _mm256_blendv_ps(arg6, zmm1, arg5)
                    
                    zmm1 = var_660_1
                    zmm0 = arg6
                    zmm4 = _mm256_add_epi32(arg6, arg6)
                    arg5 = _mm256_cvtepi32_epi64(zmm4[0].o)
                    arg6 = _mm256_add_epi64(zmm12, arg5)
                    
                    if ((rsi_21 & 1) == 0)
                        if ((rsi_21 & 2) != 0)
                            goto label_1402a10a2
                        
                        goto label_1402a0997
                    
                    arg5[0].o = __vpbroadcastw_xmmdq_memw(*arg6[0].q)
                    
                    if ((rsi_21 & 2) != 0)
                    label_1402a10a2:
                        int64_t rdx_94 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rdx_94, 1)
                        zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                        
                        if ((rsi_21 & 4) == 0)
                            goto label_1402a09a7
                        
                        goto label_1402a10bd
                    
                label_1402a0997:
                    zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                    
                    if ((rsi_21 & 4) == 0)
                    label_1402a09a7:
                        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                        
                        if ((rsi_21 & 8) != 0)
                            goto label_1402a10dc
                        
                        goto label_1402a09b6
                    
                label_1402a10bd:
                    zmm5[0].o = _mm256_extracti128_si256(arg6, 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm5[0].q, 2)
                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                    
                    if ((rsi_21 & 8) != 0)
                    label_1402a10dc:
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t rdx_96 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rdx_96, 3)
                        arg6 = _mm256_add_epi64(arg11, zmm4)
                        
                        if ((rsi_21 & 0x10) == 0)
                            goto label_1402a09c4
                        
                        goto label_1402a1100
                    
                label_1402a09b6:
                    arg6 = _mm256_add_epi64(arg11, zmm4)
                    
                    if ((rsi_21 & 0x10) != 0)
                    label_1402a1100:
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *arg6[0].q, 4)
                        arg11 = var_740_1
                        
                        if ((rsi_21 & 0x20) != 0)
                        label_1402a1115:
                            int64_t rdx_98 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rdx_98, 5)
                            
                            if ((rsi_21 & 0x40) == 0)
                                goto label_1402a09de
                            
                            goto label_1402a112a
                    else
                    label_1402a09c4:
                        arg11 = var_740_1
                        
                        if ((rsi_21 & 0x20) != 0)
                            goto label_1402a1115
                    
                    if ((rsi_21 & 0x40) != 0)
                    label_1402a112a:
                        zmm4[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *zmm4[0].q, 6)
                        zmm12 = zmm0
                        
                        if (temp0_660.b s< 0)
                        label_1402a1146:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            int64_t rcx_158 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *rcx_158, 7)
                    else
                    label_1402a09de:
                        zmm12 = zmm0
                        
                        if (temp0_660.b s< 0)
                            goto label_1402a1146
                    
                    arg6 = _mm256_cvtepu16_epi32(arg7[0].o)
                    arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                    zmm0 = var_5c0_2
                    zmm4[0].o = zx.o(0)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    
                    if (arg19 != 1)
                        temp0_959 = _mm256_max_epi32(_mm256_sub_epi32(arg5, arg6), 
                            __vpbroadcastd_ymmqq_memd(1))
                        zmm5 = _mm256_div_ps(
                            _mm256_sub_ps(_mm256_broadcast_ss(var_400[0]), 
                                _mm256_cvtepi32_ps(arg6)), 
                            _mm256_cvtepi32_ps(temp0_959))
                arg5 = _mm256_blendv_ps(zmm4, zmm5, zmm0)
                zmm0 = zmm12
                zmm12 = arg5
        
        int32_t rcx_159
        rcx_159.b = r15.d == 3
        arg5[0].o = zx.o(neg.d(rcx_159))
        arg5 = _mm256_broadcastd_epi32(arg5[0])
        arg5 &= _mm256_cmpgt_epi32(arg15, __vpbroadcastd_ymmqq_memd(1))
        arg6 = _mm256_broadcast_ss(3.36311631e-44f)
        arg15 = _mm256_blendv_ps(arg10, arg6, arg5)
        uint64_t rcx_161 = zx.q(r15.d)
        float var_620_1[0x8]
        float var_600_1[0x8]
        float var_5e0_1[0x8]
        
        if (r15.d u> 6)
        label_1402a149d:
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            var_620_1 = _mm256_maskstore_ps(arg11, arg5)
            var_600_1 = _mm256_maskstore_ps(arg11, arg5)
            var_5e0_1 = _mm256_maskstore_ps(arg11, arg5)
        else
            zmm5 = _mm256_mullo_epi32(arg12, arg9)
            
            switch (rcx_161)
                case 0, 1
                    int32_t temp0_973[0x8] = _mm256_add_epi32(_mm256_add_epi32(arg8, arg15), zmm5)
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    zmm4[0].o = zx.o(0)
                    float temp0_975[0x8]
                    int32_t temp1_29
                    temp0_975, temp1_29 = _mm256_i32gather_ps(zmm4, *(r12 + temp0_973[0].q), arg11)
                    zmm4 = temp0_975
                    int32_t temp0_976[0x8] = _mm256_add_epi32(temp0_973, zmm1)
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    float temp0_978[0x8]
                    int32_t temp1_30
                    temp0_978, temp1_30 = _mm256_i32gather_ps(arg8, *(r12 + temp0_976[0].q), arg11)
                    arg10 = temp1_30
                    float temp0_981[0x8]
                    int32_t temp1_31
                    temp0_981, temp1_31 = _mm256_i32gather_ps(arg6, 
                        *(r12 + _mm256_add_epi32(temp0_973, __vpbroadcastd_ymmqq_memd(8))[0].q), 
                        arg11)
                    arg6 = temp0_981
                    zmm5 = temp1_31
                    var_620_1 = _mm256_maskstore_ps(arg11, zmm4)
                    var_600_1 = _mm256_maskstore_ps(arg11, temp0_978)
                    var_5e0_1 = _mm256_maskstore_ps(arg11, arg6)
                case 2
                    zmm4 = _mm256_add_epi32(_mm256_add_epi32(arg8, arg15), zmm5)
                    arg5 = arg11 & zmm4
                    int64_t r8_6 = sx.q(arg5[0])
                    int64_t r9_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                    int32_t temp0_991 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                    int64_t r10_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                    int64_t r14_2 = sx.q(arg5[0])
                    int64_t rbx_31 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                    int32_t temp0_995 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                    int64_t rdi_44 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                    arg5[0].o = zx.o(*(r12 + r8_6))
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r12 + r9_7), 1)
                    arg5[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r12 + sx.q(temp0_991)), 2)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r12 + r10_11), 3)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r12 + r14_2), 4)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r12 + rbx_31), 5)
                    arg5[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r12 + sx.q(temp0_995)), 6)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(r12 + rdi_44), 7)
                    arg6 = arg11 & _mm256_add_epi32(zmm4, arg14)
                    int64_t r8_7 = sx.q(arg6[0])
                    int64_t r9_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int64_t r10_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int64_t r11_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    int64_t r14_3 = sx.q(arg6[0])
                    int64_t rbx_34 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int64_t rdi_47 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int32_t temp0_1011 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
                    arg6[0].o = zx.o(*(r12 + r8_7))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r9_8), 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r10_12), 2)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r11_5), 3)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r14_3), 4)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rbx_34), 5)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rdi_47), 6)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + sx.q(temp0_1011)), 7)
                    zmm4 = arg11 & _mm256_add_epi32(zmm4, zmm1)
                    float rdx_123 = zmm4[0]
                    int64_t r8_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                    int64_t r9_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                    int64_t rsi_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                    zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                    float rbx_36 = zmm4[0]
                    int64_t rdi_50 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                    int64_t r11_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                    int64_t r14_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                    zmm4[0].o = zx.o(*(r12 + sx.q(rdx_123)))
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + r8_8), 1)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + r9_9), 2)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + rsi_29), 3)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + sx.q(rbx_36)), 4)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + rdi_50), 5)
                    arg5 = _mm256_cvtepu16_epi32(arg5[0].o)
                    zmm5 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, zmm5))
                    arg8 = _mm256_broadcast_ss(32767f)
                    arg5 = _mm256_div_ps(arg5, arg8)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + r11_6), 6)
                    arg6 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 
                            zmm5)), 
                        arg8)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + r14_4), 7)
                    float temp0_1047[0x8] = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm4[0].o), 
                            zmm5)), 
                        arg8)
                    zmm5 = _mm256_broadcast_ss(128f)
                    arg5 = _mm256_mul_ps(arg5, zmm5)
                    arg6 = _mm256_mul_ps(arg6, zmm5)
                    zmm4 = _mm256_mul_ps(temp0_1047, zmm5)
                    var_620_1 = _mm256_maskstore_ps(arg11, arg5)
                    var_600_1 = _mm256_maskstore_ps(arg11, arg6)
                    var_5e0_1 = _mm256_maskstore_ps(arg11, zmm4)
                case 3
                    zmm4[0].o = zx.o(0)
                    float temp0_1055[0x8]
                    int32_t temp1_32
                    temp0_1055, temp1_32 = _mm256_i32gather_ps(zmm4, *(r12 + arg8[0].q), arg11)
                    arg5 = temp1_32
                    arg6 = _mm256_add_epi32(arg8, zmm1)
                    uint32_t var_6e0_2[0x8] = arg9
                    arg9 = arg14
                    arg14 = arg8
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    float temp0_1058[0x8]
                    int32_t temp1_33
                    temp0_1058, temp1_33 = _mm256_i32gather_ps(arg5, *(r12 + arg6[0].q), arg11)
                    uint32_t temp0_1059[0x8] = __vpbroadcastd_ymmqq_memd(8)
                    int32_t temp0_1060[0x8] = _mm256_add_epi32(arg14, temp0_1059)
                    temp0_1059[0].o = zx.o(0)
                    float temp0_1061[0x8]
                    int32_t temp1_34
                    temp0_1061, temp1_34 =
                        _mm256_i32gather_ps(temp0_1059, *(r12 + temp0_1060[0].q), arg11)
                    arg6 = temp0_1061
                    int32_t temp0_1063[0x8] =
                        _mm256_add_epi32(arg14, __vpbroadcastd_ymmqq_memd(0xc))
                    uint32_t var_660_2[0x8] = zmm1
                    zmm1 = arg11
                    arg11[0].o = zx.o(0)
                    float temp0_1064[0x8]
                    int32_t temp1_35
                    temp0_1064, temp1_35 =
                        _mm256_i32gather_ps(arg11, *(r12 + temp0_1063[0].q), arg11)
                    int32_t temp0_1066[0x8] =
                        _mm256_add_epi32(arg14, __vpbroadcastd_ymmqq_memd(0x10))
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    float temp0_1068[0x8]
                    int32_t temp1_36
                    temp0_1068, temp1_36 =
                        _mm256_i32gather_ps(arg12, *(r12 + temp0_1066[0].q), zmm1)
                    temp0_1066[0].o = zx.o(0)
                    arg10 = _mm256_add_epi32(arg14, __vpbroadcastd_ymmqq_memd(0x14))
                    arg7 = zmm12
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    float temp0_1072[0x8]
                    int32_t temp1_37
                    temp0_1072, temp1_37 = _mm256_i32gather_ps(zmm0, *(r12 + arg10[0].q), zmm1)
                    arg10 = _mm256_add_epi32(arg14, arg15)
                    arg14 = arg9
                    arg9 = var_6e0_2
                    uint32_t temp0_1075[0x8]
                    int32_t temp1_38
                    temp0_1075, temp1_38 = _mm256_i32gather_epi32(temp0_1066, 
                        *(r12 + _mm256_add_epi32(arg10, zmm5)[0].q), zmm1)
                    arg8 = temp0_1075
                    zmm5 = _mm256_srli_epi32(arg8, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    zmm12 = arg7
                    arg10 = _mm256_fmadd_ps(
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                arg8 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f)), 
                        temp0_1064, temp0_1055)
                    zmm4 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm5 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm5, zmm4))
                    float temp0_1088[0x8] = _mm256_broadcast_ss(1023f)
                    zmm5 = _mm256_div_ps(zmm5, temp0_1088)
                    arg8 = _mm256_srli_epi32(arg8, 0x15)
                    zmm5 = _mm256_fmadd_ps(zmm5, temp0_1068, temp0_1058)
                    arg11 = zmm1
                    zmm1 = var_660_2
                    arg5 = _mm256_fmadd_ps(
                        _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(arg8, zmm4)), 
                            temp0_1088), 
                        temp0_1072, arg6)
                    var_620_1 = _mm256_maskstore_ps(arg11, arg10)
                    var_600_1 = _mm256_maskstore_ps(arg11, zmm5)
                    var_5e0_1 = _mm256_maskstore_ps(arg11, arg5)
                case 4, 5, 6
                    goto label_1402a149d
        
        arg5 = _mm256_cmpeq_epi32(arg12, zmm0)
        arg8 = arg5 & not.32(arg11)
        arg5[0].o = _mm256_extracti128_si256(arg8, 1)
        arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            float var_4e0_1[0x8]
            float var_4c0_1[0x8]
            float var_4a0_1[0x8]
            
            if (r15.d u> 6)
            label_1402a1928:
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                var_4e0_1 = _mm256_maskstore_ps(arg8, zmm0)
                var_4c0_1 = _mm256_maskstore_ps(arg8, zmm0)
                var_4a0_1 = _mm256_maskstore_ps(arg8, zmm0)
            else
                int32_t temp0_1104[0x8] = _mm256_mullo_epi32(zmm0, arg9)
                
                switch (rcx_161)
                    case 0, 1
                        zmm0 = _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg15, var_760_3), 
                            temp0_1104)
                        zmm1[0].o = zx.o(0)
                        arg6[0].o = zx.o(0)
                        float temp0_1107[0x8]
                        int32_t temp1_39
                        temp0_1107, temp1_39 = _mm256_i32gather_ps(arg6, *(r12 + zmm0[0].q), arg8)
                        int32_t temp0_1108[0x8] = _mm256_add_epi32(zmm0, zmm1)
                        temp0_1104[0].o = zx.o(0)
                        float temp0_1109[0x8]
                        int32_t temp1_40
                        temp0_1109, temp1_40 =
                            _mm256_i32gather_ps(temp0_1104, *(r12 + temp0_1108[0].q), arg8)
                        float temp0_1112[0x8]
                        int32_t temp1_41
                        temp0_1112, temp1_41 = _mm256_i32gather_ps(zmm1, 
                            *(r12 + _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))[0].q), 
                            arg8)
                        var_4e0_1 = _mm256_maskstore_ps(arg8, temp0_1107)
                        var_4c0_1 = _mm256_maskstore_ps(arg8, temp0_1109)
                        var_4a0_1 = _mm256_maskstore_ps(arg8, temp0_1112)
                    case 2
                        int32_t temp0_1119[0x8] = _mm256_add_epi32(
                            __vpaddd_ymmqq_ymmqq_memqq(arg15, var_760_3), temp0_1104)
                        arg6 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
                        zmm0 = arg6 & temp0_1119
                        int64_t r8_9 = sx.q(zmm0[0])
                        int64_t r9_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_1124 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t r10_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rsi_31 = sx.q(zmm0[0])
                        int64_t rcx_166 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_1128 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t rdi_53 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(r12 + r8_9))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r9_10), 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + sx.q(temp0_1124)), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r10_14), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rsi_31), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rcx_166), 5)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + sx.q(temp0_1128)), 6)
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rdi_53), 7)
                        zmm0 = arg6 & _mm256_add_epi32(temp0_1119, arg14)
                        int64_t r8_10 = sx.q(zmm0[0])
                        int64_t r9_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r10_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t r11_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rsi_33 = sx.q(zmm0[0])
                        int64_t rcx_169 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t rdx_133 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int32_t temp0_1144 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o = zx.o(*(r12 + r8_10))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r9_11), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r10_15), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r11_8), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rsi_33), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rcx_169), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rdx_133), 6)
                        temp0_1104[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + sx.q(temp0_1144)), 7)
                        zmm0 = arg6 & _mm256_add_epi32(temp0_1119, zmm1)
                        uint32_t rcx_171 = zmm0[0]
                        int64_t r8_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r9_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t rdi_57 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        uint32_t rsi_34 = zmm0[0]
                        int64_t rdx_136 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r10_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t rbx_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(r12 + sx.q(rcx_171)))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r8_11), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r9_12), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rdi_57), 3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + sx.q(rsi_34)), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rdx_136), 5)
                        uint32_t temp0_1165[0x8] = _mm256_cvtepu16_epi32(zmm4[0].o)
                        arg5 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(temp0_1165, arg5))
                        arg6 = _mm256_broadcast_ss(32767f)
                        zmm1 = _mm256_div_ps(zmm1, arg6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r10_16), 6)
                        float temp0_1175[0x8] = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                _mm256_cvtepu16_epi32(temp0_1104[0].o), arg5)), 
                            arg6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rbx_45), 7)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                arg5)), 
                            arg6)
                        arg5 = _mm256_broadcast_ss(128f)
                        zmm1 = _mm256_mul_ps(zmm1, arg5)
                        arg6 = _mm256_mul_ps(temp0_1175, arg5)
                        zmm0 = _mm256_mul_ps(zmm0, arg5)
                        var_4e0_1 = _mm256_maskstore_ps(arg8, zmm1)
                        var_4c0_1 = _mm256_maskstore_ps(arg8, arg6)
                        var_4a0_1 = _mm256_maskstore_ps(arg8, zmm0)
                    case 3
                        arg5[0].o = zx.o(0)
                        arg9 = var_760_3
                        float temp0_1188[0x8]
                        int32_t temp1_42
                        temp0_1188, temp1_42 = _mm256_i32gather_ps(arg5, *(r12 + arg9[0].q), arg8)
                        zmm0 = _mm256_add_epi32(arg9, zmm1)
                        arg6[0].o = zx.o(0)
                        float temp0_1190[0x8]
                        int32_t temp1_43
                        temp0_1190, temp1_43 = _mm256_i32gather_ps(arg6, *(r12 + zmm0[0].q), arg8)
                        zmm0 = _mm256_add_epi32(arg9, __vpbroadcastd_ymmqq_memd(8))
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        float temp0_1194[0x8]
                        int32_t temp1_44
                        temp0_1194, temp1_44 = _mm256_i32gather_ps(zmm4, *(r12 + zmm0[0].q), arg8)
                        zmm0 = _mm256_add_epi32(arg9, __vpbroadcastd_ymmqq_memd(0xc))
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        float temp0_1198[0x8]
                        int32_t temp1_45
                        temp0_1198, temp1_45 = _mm256_i32gather_ps(arg10, *(r12 + zmm0[0].q), arg8)
                        arg10 = temp0_1198
                        zmm1 = temp1_45
                        zmm0 = _mm256_add_epi32(arg9, __vpbroadcastd_ymmqq_memd(0x10))
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float var_740_3[0x8] = arg11
                        float temp0_1202[0x8]
                        int32_t temp1_46
                        temp0_1202, temp1_46 = _mm256_i32gather_ps(zmm1, *(r12 + zmm0[0].q), arg8)
                        zmm0[0].o = zx.o(0)
                        arg11 = _mm256_add_epi32(arg9, __vpbroadcastd_ymmqq_memd(0x14))
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        arg14 = zmm12
                        float temp0_1206[0x8]
                        int32_t temp1_47
                        temp0_1206, temp1_47 = _mm256_i32gather_ps(arg12, *(r12 + arg11[0].q), arg8)
                        arg12 = temp0_1206
                        uint32_t temp0_1209[0x8]
                        int32_t temp1_48
                        temp0_1209, temp1_48 = _mm256_i32gather_epi32(zmm0, 
                            *(r12 +
                                _mm256_add_epi32(_mm256_add_epi32(arg9, arg15), temp0_1104)[0].q), 
                            arg8)
                        zmm5 = _mm256_srli_epi32(temp0_1209, 0x15)
                        arg7 = _mm256_srli_epi32(temp0_1209, 0xa)
                        arg11 = __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                temp0_1209 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg7 &= arg11
                        arg11 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        float temp0_1221[0x8] = _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, arg11))
                        zmm12 = _mm256_broadcast_ss(1023f)
                        float temp0_1223[0x8] = _mm256_div_ps(temp0_1221, zmm12)
                        zmm0 = _mm256_fmadd_ps(zmm0, arg10, temp0_1188)
                        arg7 = _mm256_fmadd_ps(temp0_1223, temp0_1202, temp0_1190)
                        zmm1 = _mm256_add_epi32(zmm5, arg11)
                        arg11 = var_740_3
                        zmm1 = _mm256_div_ps(_mm256_cvtepi32_ps(zmm1), zmm12)
                        zmm12 = arg14
                        zmm1 = _mm256_fmadd_ps(zmm1, arg12, temp0_1194)
                        var_4e0_1 = _mm256_maskstore_ps(arg8, zmm0)
                        var_4c0_1 = _mm256_maskstore_ps(arg8, arg7)
                        var_4a0_1 = _mm256_maskstore_ps(arg8, zmm1)
                    case 4, 5, 6
                        goto label_1402a1928
            
            arg6 = var_620_1
            zmm4 = var_600_1
            zmm5 = var_5e0_1
            zmm0 = _mm256_sub_ps(var_4e0_1, arg6)
            zmm1 = _mm256_sub_ps(var_4c0_1, zmm4)
            arg5 = _mm256_sub_ps(var_4a0_1, zmm5)
            zmm0 = _mm256_fmadd_ps(zmm0, zmm12, arg6)
            zmm1 = _mm256_fmadd_ps(zmm1, zmm12, zmm4)
            arg5 = _mm256_fmadd_ps(arg5, zmm12, zmm5)
            var_620_1 = _mm256_maskstore_ps(arg8, zmm0)
            var_600_1 = _mm256_maskstore_ps(arg8, zmm1)
            var_5e0_1 = _mm256_maskstore_ps(arg8, arg5)
        
        arg5[0].o = var_620_1[0].o
        arg10[0].o = var_620_1[4].o
        zmm4[0].o = var_600_1[0].o
        zmm5[0].o = var_600_1[4].o
        arg7[0].o = var_5e0_1[0].o
        arg8[0].o = var_5e0_1[4].o
        arg9[0].o = zx.o(0)
        zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg7[0].o, 0x28)
        int128_t var_2a0 = arg6[0].o
        arg6[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_290_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg7[0].o, 0xa8)
        int128_t var_280_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        int128_t var_270_1 = zmm0[0].o
        zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg8[0].o, 0x28)
        int128_t var_260_1 = arg5[0].o
        arg5[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_250_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm5[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg8[0].o, 0xa8)
        int128_t var_240_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        int128_t var_230_1 = zmm0[0].o
        uint64_t i_4 = zx.q(_mm256_movemask_ps(arg11))
        
        do
            uint64_t rcx_175 = _tzcnt_u64(i_4)
            float var_120[0x8] = arg13
            zmm0[0].o = (&var_2a0)[rcx_175]
            *(arg1 + sx.q(var_120[zx.q(rcx_175.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            i_4 &= rol.q(-2, rcx_175.b)
        while (i_4 != 0)
else
    zmm0[0].o = zx.o(arg4)
    uint32_t temp0_2[0x8] = _mm256_broadcastd_epi32(_mm256_slli_epi32(zmm0, 2)[0])
    temp0_2[0].o = zx.o(r12)
    zmm1[0].o = zx.o(rbx_1)
    uint32_t temp0_3[0x8] = _mm256_broadcastd_epi32(zmm1[0])
    temp0_3[0].o = 3
    temp0_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(temp0_2[0].o, temp0_3[0].o)
    zmm0 = _mm256_broadcastq_epi64(temp0_2[0].q)
    uint32_t var_1c0_1[0x8] = zmm0
    zmm0[0].o = zx.o(0)
    int32_t rsi_1
    rsi_1.b = zx.o(0) f>= zmm12[0]
    zmm0[0].o = zx.o(neg.d(rsi_1))
    uint32_t temp0_6[0x8] = _mm256_broadcastd_epi32(zmm0[0])
    int32_t rsi_3 = r14 - 2
    temp0_6[0].o = arg5[0].o
    temp0_6[0] = float.s(r14 - 1)
    temp0_6[0].o = temp0_6[0].o f* zmm12[0]
    int32_t rcx_1 = int.d(temp0_6[0])
    int32_t rcx_2 = rcx_1 & not.d(rcx_1 s>> 0x1f)
    
    if (rsi_3 s> rcx_2)
        rsi_3 = rcx_2
    
    zmm1 = _mm256_broadcastss_ps(zmm12[0].o)
    uint32_t var_1e0_1[0x8] = zmm1
    zmm1[0].o = zx.o(rsi_3)
    arg8 = _mm256_broadcastd_epi32(zmm1[0])
    zmm0 = _mm256_broadcastss_ps(temp0_6[0].o)
    uint32_t var_220_1[0x8] = zmm0
    int32_t rcx_3
    rcx_3.b = r15.d == 3
    zmm0[0].o = zx.o(neg.d(rcx_3))
    uint32_t temp0_10[0x8] = _mm256_broadcastd_epi32(zmm0[0])
    r9 = 0f
    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
    uint32_t var_6a0_1[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
    uint32_t var_200_1[0x8] = _mm256_broadcast_sd(-nan.0)
    uint32_t var_5c0_1[0x8] = _mm256_broadcast_ss(2.80259693e-45f)
    var_400 = _mm256_broadcast_ss(1.40129846e-45f)
    zmm0 = _mm256_broadcast_ss(3.36311631e-44f)
    uint32_t var_1a0_1[0x8] = zmm0
    int64_t var_668_1 = arg3
    int64_t var_670_1 = arg2
    int32_t var_704_1 = r10_4
    int32_t var_160_1[0x8] = arg8
    
    do
        zmm0[0].o = zx.o(r9)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_broadcastd_epi32(zmm0[0]), 3), 
            data_143442140)
        arg15[0].o = zx.o(0)
        uint32_t temp0_47[0x8] = _mm256_cmpeq_epi32(zmm1, zmm1)
        uint32_t temp0_48[0x8]
        int32_t temp1_1
        temp0_48, temp1_1 = _mm256_i32gather_epi32(arg15, *(arg2 + zmm0[0].q), temp0_47)
        arg15 = temp0_48
        zmm1 = temp1_1
        zmm4 = var_6a0_1
        zmm1[0].o = zx.o(0)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        uint32_t temp0_50[0x8]
        int32_t temp1_2
        temp0_50, temp1_2 = _mm256_i32gather_epi32(zmm1, *(arg2 + (zmm0 | zmm4)[0].q), arg5)
        zmm0 = __vpmulld_ymmqq_ymmqq_memqq(temp0_50, temp0_2)
        zmm5[0].o = zx.o(0)
        uint32_t temp0_52[0x8] = _mm256_cmpeq_epi32(temp0_50, temp0_50)
        uint32_t temp0_53[0x8]
        int32_t temp1_3
        temp0_53, temp1_3 = _mm256_i32gather_epi32(zmm5, *(arg3 + zmm0[0].q), temp0_52)
        zmm5 = temp0_53
        zmm1 = temp1_3
        zmm0 = _mm256_add_epi32(zmm0, zmm4)
        arg10[0].o = zx.o(0)
        uint32_t temp0_55[0x8] = _mm256_cmpeq_epi32(zmm1, zmm1)
        uint32_t temp0_56[0x8]
        int32_t temp1_4
        temp0_56, temp1_4 = _mm256_i32gather_epi32(arg10, *(arg3 + zmm0[0].q), temp0_55)
        arg10 = temp0_56
        zmm1 = temp1_4
        zmm0 = _mm256_cmpgt_epi32(var_5c0_1, arg10) | temp0_6
        uint32_t var_6e0[0x8]
        
        if (_mm256_movemask_ps(zmm0) != 0)
            arg13 = _mm256_blendv_ps(arg13, arg11, zmm0)
            zmm1 = _mm256_blendv_ps(var_6e0, arg11, zmm0)
            var_6e0 = zmm1
        
        arg5 = zmm0 ^ arg6
        int32_t temp0_61 = _mm256_movemask_ps(arg5)
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        float var_740[0x8]
        int32_t var_640[0x8]
        
        if (temp0_61 == 0)
            arg8 = var_6e0
        else
            zmm0 = _mm256_add_epi32(arg10, arg6)
            
            if (zmm12[0].o f>= 1f)
                arg13 = _mm256_blendv_ps(arg13, zmm0, arg5)
                arg8 = _mm256_blendv_ps(var_6e0, zmm0, arg5)
            else
                zmm1[0].o = _mm256_extracti128_si256(zmm5, 1)
                zmm4 = __vpmulld_ymmqq_ymmqq_memqq(arg10, temp0_3)
                var_640 = zmm5
                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                uint32_t var_760_1[0x8] = zmm0
                arg7[0].o = _mm256_extracti128_si256(zmm4, 1)
                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                zmm1 = _mm256_add_epi64(_mm256_add_epi64(var_1c0_1, zmm1), arg7)
                arg7 = var_760_1
                zmm4 = _mm256_add_epi64(_mm256_add_epi64(var_1c0_1, zmm5), zmm4)
                arg12 = zmm1 & var_200_1
                zmm5 = zmm4 & var_200_1
                zmm12 = _mm256_min_epi32(
                    _mm256_max_epi32(
                        _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg7), 
                            var_1e0_1)), 
                        arg11), 
                    arg7)
                var_740 = arg13
                uint32_t var_520_1[0x8] = arg10
                int32_t var_440_1[0x8] = zmm12
                
                if (r14 s< 0x100)
                    zmm1 = _mm256_add_epi64(zmm5, _mm256_cvtepi32_epi64(zmm12[0].o))
                    char r12_1 = temp0_61.b
                    int128_t var_380
                    arg11[0].o = var_380
                    
                    if ((r12_1 & 1) == 0)
                        arg6 = _mm256_cmpeq_epi32(var_200_1, var_200_1)
                        
                        if ((r12_1 & 2) != 0)
                            goto label_14029f094
                        
                        goto label_14029e977
                    
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, zx.d(*zmm1[0].q), 0)
                    arg6 = _mm256_cmpeq_epi32(var_200_1, var_200_1)
                    
                    if ((r12_1 & 2) != 0)
                    label_14029f094:
                        uint32_t rcx_89 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, rcx_89, 1)
                        zmm4[0].o = _mm256_extracti128_si256(zmm12, 1)
                        
                        if ((r12_1 & 4) == 0)
                            goto label_14029e987
                        
                        goto label_14029f0ac
                    
                label_14029e977:
                    zmm4[0].o = _mm256_extracti128_si256(zmm12, 1)
                    
                    if ((r12_1 & 4) == 0)
                    label_14029e987:
                        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                        
                        if ((r12_1 & 8) != 0)
                            goto label_14029f0d3
                        
                        goto label_14029e996
                    
                label_14029f0ac:
                    arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                    char* rcx_90 = arg7[0].q
                    arg7 = var_760_1
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, zx.d(*rcx_90), 2)
                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                    
                    if ((r12_1 & 8) != 0)
                    label_14029f0d3:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        uint32_t rcx_93 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, rcx_93, 3)
                        zmm1 = _mm256_add_epi64(arg12, zmm4)
                        
                        if ((r12_1 & 0x10) == 0)
                            goto label_14029e9a4
                        
                        goto label_14029f0fd
                    
                label_14029e996:
                    zmm1 = _mm256_add_epi64(arg12, zmm4)
                    
                    if ((r12_1 & 0x10) == 0)
                    label_14029e9a4:
                        
                        if ((r12_1 & 0x20) != 0)
                            goto label_14029f112
                        
                        goto label_14029e9ae
                    
                label_14029f0fd:
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, zx.d(*zmm1[0].q), 4)
                    
                    if ((r12_1 & 0x20) != 0)
                    label_14029f112:
                        uint32_t rcx_97 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, rcx_97, 5)
                        
                        if ((r12_1 & 0x40) == 0)
                            goto label_14029e9b8
                        
                        goto label_14029f124
                    
                label_14029e9ae:
                    
                    if ((r12_1 & 0x40) != 0)
                    label_14029f124:
                        zmm4[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg11[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, zx.d(*zmm4[0].q), 6)
                        
                        if (temp0_61.b s< 0)
                        label_14029f140:
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            uint32_t rcx_101 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg11[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg11[0].o, rcx_101, 7)
                    else
                    label_14029e9b8:
                        
                        if (temp0_61.b s< 0)
                            goto label_14029f140
                    
                    zmm1[0].o = arg11[0].o & data_142fc92e0
                    zmm1 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), arg8)
                    zmm0 = zmm1 ^ arg6
                    zmm4 = zmm1 & not.32(arg5)
                    bool cond:9_1 = _mm256_movemask_ps(zmm4) == 0
                    var_380 = arg11[0].o
                    
                    if (cond:9_1)
                    label_14029ebdb:
                        
                        if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg5)) == 0)
                            arg11[0].o = zx.o(0)
                        else
                        label_14029ebe7:
                            zmm4 = _mm256_xor_ps(zmm0, arg6)
                            arg11[0].o = zx.o(0)
                            zmm12 = _mm256_blendv_ps(zmm12, arg11, zmm4)
                            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(arg6, var_440_1)
                            arg13 = _mm256_cmpgt_epi32(zmm1, arg11) & zmm4
                            arg7 = arg13 & arg5
                            int32_t i_5 = _mm256_movemask_ps(arg7)
                            
                            if (i_5 != 0)
                                do
                                    zmm4 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                    arg10 = _mm256_add_epi64(zmm5, zmm4)
                                    char temp0_187 = _mm256_movemask_ps(arg7)
                                    int128_t var_660
                                    uint32_t rcx_72
                                    
                                    if ((temp0_187 & 1) != 0)
                                        zmm0[0].o = var_660
                                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                            zx.d(*arg10[0].q), 0)
                                        
                                        if ((temp0_187 & 2) != 0)
                                            rcx_72 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm0[0].o, rcx_72, 1)
                                    else
                                        zmm0[0].o = var_660
                                        
                                        if ((temp0_187 & 2) != 0)
                                            rcx_72 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm0[0].o, rcx_72, 1)
                                    zmm4[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    
                                    if ((temp0_187 & 4) == 0)
                                        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                        
                                        if ((temp0_187 & 8) != 0)
                                            goto label_14029ec41
                                        
                                        goto label_14029ed46
                                    
                                    arg7[0].o = _mm256_extracti128_si256(arg10, 1)
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*arg7[0].q), 2)
                                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                    
                                    if ((temp0_187 & 8) != 0)
                                    label_14029ec41:
                                        arg7[0].o = _mm256_extracti128_si256(arg10, 1)
                                        uint32_t rcx_60 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_60, 3)
                                        arg10 = _mm256_add_epi64(arg12, zmm4)
                                        
                                        if ((temp0_187 & 0x10) == 0)
                                            goto label_14029ed53
                                        
                                        goto label_14029ec6a
                                    
                                label_14029ed46:
                                    arg10 = _mm256_add_epi64(arg12, zmm4)
                                    
                                    if ((temp0_187 & 0x10) == 0)
                                    label_14029ed53:
                                        
                                        if ((temp0_187 & 0x20) != 0)
                                            goto label_14029ec7e
                                        
                                        goto label_14029ed5c
                                    
                                label_14029ec6a:
                                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                        zx.d(*arg10[0].q), 4)
                                    
                                    if ((temp0_187 & 0x20) != 0)
                                    label_14029ec7e:
                                        uint32_t rcx_64 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_64, 5)
                                        
                                        if ((temp0_187 & 0x40) == 0)
                                            goto label_14029ed65
                                        
                                        goto label_14029ec8f
                                    
                                label_14029ed5c:
                                    
                                    if ((temp0_187 & 0x40) != 0)
                                    label_14029ec8f:
                                        zmm4[0].o = _mm256_extracti128_si256(arg10, 1)
                                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, 
                                            zx.d(*zmm4[0].q), 6)
                                        
                                        if (temp0_187 s< 0)
                                        label_14029ecaa:
                                            zmm4[0].o = _mm256_extracti128_si256(arg10, 1)
                                            uint32_t rcx_68 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1))
                                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm0[0].o, rcx_68, 7)
                                    else
                                    label_14029ed65:
                                        
                                        if (temp0_187 s< 0)
                                            goto label_14029ecaa
                                    
                                    var_660 = zmm0[0].o
                                    zmm4[0].o = zmm0[0].o & data_142fc92e0
                                    zmm4 =
                                        _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm4[0].o), arg8)
                                    arg7 = zmm4 & not.32(arg13)
                                    zmm4[0].o = zx.o(0)
                                    arg10 = arg7 & arg5
                                    int32_t temp0_195 = _mm256_movemask_ps(arg10)
                                    arg10[0].o = zx.o(0)
                                    
                                    if (temp0_195 != i_5)
                                        arg10 = arg7 ^ arg13
                                    
                                    zmm12 = _mm256_blendv_ps(zmm12, zmm1, arg7)
                                    zmm1 = _mm256_add_epi32(zmm1, arg6)
                                    zmm4 = _mm256_cmpgt_epi32(zmm1, zmm4)
                                    arg13 = zmm4 & arg10
                                    arg7 = arg13 & arg5
                                    i_5 = _mm256_movemask_ps(arg7)
                                while (i_5 != 0)
                    else
                        int64_t var_360_1[0x4] = arg12
                        arg12 = zmm12
                        zmm12 = _mm256_blendv_ps(zmm12, arg7, zmm0)
                        arg10 = _mm256_sub_epi32(arg12, arg6)
                        zmm4 = _mm256_cmpgt_epi32(arg10, arg7) ^ arg6
                        arg13 = zmm1 & not.32(zmm4)
                        arg7 = arg13 & arg5
                        int32_t i_6 = _mm256_movemask_ps(arg7)
                        
                        if (i_6 != 0)
                            zmm1 = arg12
                            arg12 = var_360_1
                            
                            do
                                arg11 = arg10
                                zmm4 = _mm256_cvtepi32_epi64(arg11[0].o)
                                arg10 = _mm256_add_epi64(zmm5, zmm4)
                                char temp0_155 = _mm256_movemask_ps(arg7)
                                
                                if ((temp0_155 & 1) == 0)
                                    if ((temp0_155 & 2) != 0)
                                        goto label_14029ea6c
                                    
                                    goto label_14029eb44
                                
                                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                    zx.d(*arg10[0].q), 0)
                                
                                if ((temp0_155 & 2) != 0)
                                label_14029ea6c:
                                    uint16_t rcx_42[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rcx_42, 1)
                                    zmm4[0].o = _mm256_extracti128_si256(arg11, 1)
                                    
                                    if ((temp0_155 & 4) == 0)
                                        goto label_14029eb53
                                    
                                    goto label_14029ea83
                                
                            label_14029eb44:
                                zmm4[0].o = _mm256_extracti128_si256(arg11, 1)
                                
                                if ((temp0_155 & 4) == 0)
                                label_14029eb53:
                                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                    
                                    if ((temp0_155 & 8) != 0)
                                        goto label_14029eaa4
                                    
                                    goto label_14029eb61
                                
                            label_14029ea83:
                                arg7[0].o = _mm256_extracti128_si256(arg10, 1)
                                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                    zx.d(*arg7[0].q), 2)
                                zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                
                                if ((temp0_155 & 8) != 0)
                                label_14029eaa4:
                                    arg7[0].o = _mm256_extracti128_si256(arg10, 1)
                                    uint16_t rcx_46[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rcx_46, 3)
                                    arg10 = _mm256_add_epi64(arg12, zmm4)
                                    
                                    if ((temp0_155 & 0x10) == 0)
                                        goto label_14029eb6e
                                    
                                    goto label_14029eacd
                                
                            label_14029eb61:
                                arg10 = _mm256_add_epi64(arg12, zmm4)
                                
                                if ((temp0_155 & 0x10) == 0)
                                label_14029eb6e:
                                    
                                    if ((temp0_155 & 0x20) != 0)
                                        goto label_14029eae1
                                    
                                    goto label_14029eb77
                                
                            label_14029eacd:
                                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                    zx.d(*arg10[0].q), 4)
                                
                                if ((temp0_155 & 0x20) != 0)
                                label_14029eae1:
                                    uint16_t rcx_50[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1))
                                    arg14[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rcx_50, 5)
                                    
                                    if ((temp0_155 & 0x40) == 0)
                                        goto label_14029eb80
                                    
                                    goto label_14029eaf2
                                
                            label_14029eb77:
                                
                                if ((temp0_155 & 0x40) != 0)
                                label_14029eaf2:
                                    zmm4[0].o = _mm256_extracti128_si256(arg10, 1)
                                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, 
                                        zx.d(*zmm4[0].q), 6)
                                    
                                    if (temp0_155 s< 0)
                                    label_14029eb09:
                                        zmm4[0].o = _mm256_extracti128_si256(arg10, 1)
                                        uint16_t rcx_54[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1))
                                        arg14[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rcx_54, 7)
                                else
                                label_14029eb80:
                                    
                                    if (temp0_155 s< 0)
                                        goto label_14029eb09
                                
                                zmm4[0].o = arg14[0].o & data_142fc92e0
                                zmm4 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm4[0].o), arg8)
                                arg7 = zmm4 & arg13
                                zmm4[0].o = zx.o(0)
                                
                                if (_mm256_movemask_ps(arg7 & arg5) != i_6)
                                    zmm4 = arg7 ^ arg13
                                
                                zmm12 = _mm256_blendv_ps(zmm12, zmm1, arg7)
                                arg10 = _mm256_sub_epi32(arg11, arg6)
                                arg13 =
                                    __vpcmpgtd_ymmqq_ymmqq_memqq(arg10, var_760_1) & not.32(zmm4)
                                arg7 = arg13 & arg5
                                i_6 = _mm256_movemask_ps(arg7)
                                zmm1 = arg11
                            while (i_6 != 0)
                            
                            goto label_14029ebdb
                        
                        arg12 = var_360_1
                        
                        if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg5)) != 0)
                            goto label_14029ebe7
                        
                        arg11[0].o = zx.o(0)
                    
                    int128_t var_590
                    zmm0[0].o = var_590
                    arg13 = _mm256_blendv_ps(var_740, zmm12, arg5)
                    zmm1 = _mm256_add_epi64(zmm5, _mm256_cvtepi32_epi64(arg13[0].o))
                    
                    if ((r12_1 & 1) == 0)
                        zmm12[0].o = arg18
                        arg10 = var_520_1
                        
                        if ((r12_1 & 2) != 0)
                            goto label_14029e3a1
                        
                        goto label_14029f553
                    
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 0)
                    zmm12[0].o = arg18
                    arg10 = var_520_1
                    
                    if ((r12_1 & 2) != 0)
                    label_14029e3a1:
                        uint32_t rcx_8 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_8, 1)
                        zmm4[0].o = _mm256_extracti128_si256(arg13, 1)
                        
                        if ((r12_1 & 4) == 0)
                            goto label_14029f563
                        
                        goto label_14029e3b9
                    
                label_14029f553:
                    zmm4[0].o = _mm256_extracti128_si256(arg13, 1)
                    
                    if ((r12_1 & 4) == 0)
                    label_14029f563:
                        arg7 = var_760_1
                        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                        
                        if ((r12_1 & 8) != 0)
                            goto label_14029e3e0
                        
                        goto label_14029f577
                    
                label_14029e3b9:
                    arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg7[0].q), 2)
                    arg7 = var_760_1
                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                    
                    if ((r12_1 & 8) != 0)
                    label_14029e3e0:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        uint32_t rcx_12 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_12, 3)
                        zmm1 = _mm256_add_epi64(arg12, zmm4)
                        
                        if ((r12_1 & 0x10) == 0)
                            goto label_14029f585
                        
                        goto label_14029e40a
                    
                label_14029f577:
                    zmm1 = _mm256_add_epi64(arg12, zmm4)
                    
                    if ((r12_1 & 0x10) != 0)
                    label_14029e40a:
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 4)
                        
                        if ((r12_1 & 0x20) != 0)
                        label_14029e41f:
                            uint32_t rcx_16 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_16, 5)
                            
                            if ((r12_1 & 0x40) == 0)
                                goto label_14029f599
                            
                            goto label_14029e431
                    else
                    label_14029f585:
                        
                        if ((r12_1 & 0x20) != 0)
                            goto label_14029e41f
                    
                    int128_t var_470
                    
                    if ((r12_1 & 0x40) != 0)
                    label_14029e431:
                        zmm4[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm4[0].q), 6)
                        zmm4[0].o = var_470
                        
                        if (temp0_61.b s< 0)
                        label_14029e456:
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            uint32_t rcx_20 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_20, 7)
                    else
                    label_14029f599:
                        zmm4[0].o = var_470
                        
                        if (temp0_61.b s< 0)
                            goto label_14029e456
                    
                    arg8 = _mm256_blendv_ps(var_6e0, _mm256_sub_epi32(arg13, arg6), arg5)
                    zmm1 = _mm256_cmpgt_epi32(arg8, arg7) & arg5
                    bool cond:15_1 = _mm256_movemask_ps(zmm1) == 0
                    var_590 = zmm0[0].o
                    
                    if (not(cond:15_1))
                        arg8 = _mm256_blendv_ps(arg8, arg7, zmm1)
                    
                    zmm0 = _mm256_add_epi64(zmm5, _mm256_cvtepi32_epi64(arg8[0].o))
                    
                    if ((r12_1 & 1) == 0)
                        if ((r12_1 & 2) != 0)
                            goto label_14029e48c
                        
                        goto label_14029f5f1
                    
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*zmm0[0].q), 0)
                    
                    if ((r12_1 & 2) != 0)
                    label_14029e48c:
                        uint32_t rcx_24 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rcx_24, 1)
                        zmm1[0].o = _mm256_extracti128_si256(arg8, 1)
                        
                        if ((r12_1 & 4) == 0)
                            goto label_14029f601
                        
                        goto label_14029e4a4
                    
                label_14029f5f1:
                    zmm1[0].o = _mm256_extracti128_si256(arg8, 1)
                    
                    if ((r12_1 & 4) == 0)
                    label_14029f601:
                        zmm5 = var_640
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((r12_1 & 8) != 0)
                            goto label_14029e4d7
                        
                        goto label_14029f619
                    
                label_14029e4a4:
                    zmm5[0].o = zmm4[0].o
                    zmm4[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm4[0].o = zmm5[0].o
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, zx.d(*zmm4[0].q), 2)
                    zmm5 = var_640
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((r12_1 & 8) != 0)
                    label_14029e4d7:
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        uint32_t rcx_28 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rcx_28, 3)
                        zmm0 = _mm256_add_epi64(arg12, zmm1)
                        
                        if ((r12_1 & 0x10) == 0)
                            goto label_14029f627
                        
                        goto label_14029e501
                    
                label_14029f619:
                    zmm0 = _mm256_add_epi64(arg12, zmm1)
                    
                    if ((r12_1 & 0x10) == 0)
                    label_14029f627:
                        
                        if ((r12_1 & 0x20) != 0)
                            goto label_14029e516
                        
                        goto label_14029f631
                    
                label_14029e501:
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*zmm0[0].q), 4)
                    
                    if ((r12_1 & 0x20) == 0)
                    label_14029f631:
                        
                        if ((r12_1 & 0x40) != 0)
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            zmm4[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*zmm1[0].q), 6)
                    else
                    label_14029e516:
                        uint32_t rcx_32 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rcx_32, 5)
                        
                        if ((r12_1 & 0x40) != 0)
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            zmm4[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*zmm1[0].q), 6)
                    
                    r12 = arg16
                    zmm1[0].o = var_590
                    zmm1[0].o &= data_142fc92e0
                    
                    if (temp0_61.b s< 0)
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        uint16_t rcx_124[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rcx_124, 7)
                    
                    zmm0 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    var_470 = zmm4[0].o
                    zmm1[0].o = zmm4[0].o & data_142fc92e0
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    zmm4[0].o = zx.o(0)
                    
                    if (arg19 != 1)
                    label_14029f6a7:
                        zmm1 = __vpmaxsd_ymmqq_ymmqq_memqq(_mm256_sub_epi32(zmm1, zmm0), var_400)
                        zmm0 = _mm256_sub_ps(var_220_1, _mm256_cvtepi32_ps(zmm0))
                        arg6 = _mm256_cmpeq_epi32(var_220_1, var_220_1)
                        zmm4 = _mm256_div_ps(zmm0, _mm256_cvtepi32_ps(zmm1))
                else
                    arg7 = _mm256_add_epi32(zmm12, zmm12)
                    zmm1 = _mm256_add_epi64(zmm5, _mm256_cvtepi32_epi64(arg7[0].o))
                    char rsi_4 = temp0_61.b
                    int128_t var_370
                    zmm0[0].o = var_370
                    
                    if ((rsi_4 & 1) == 0)
                        arg6 = _mm256_cmpeq_epi32(var_200_1, var_200_1)
                        
                        if ((rsi_4 & 2) != 0)
                            goto label_14029efbd
                        
                        goto label_14029e6d9
                    
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 0)
                    arg6 = _mm256_cmpeq_epi32(var_200_1, var_200_1)
                    
                    if ((rsi_4 & 2) != 0)
                    label_14029efbd:
                        int64_t rcx_79 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_79, 1)
                        zmm4[0].o = _mm256_extracti128_si256(arg7, 1)
                        
                        if ((rsi_4 & 4) == 0)
                            goto label_14029e6e9
                        
                        goto label_14029efd8
                    
                label_14029e6d9:
                    zmm4[0].o = _mm256_extracti128_si256(arg7, 1)
                    
                    if ((rsi_4 & 4) == 0)
                    label_14029e6e9:
                        arg7 = var_760_1
                        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                        
                        if ((rsi_4 & 8) != 0)
                            goto label_14029effc
                        
                        goto label_14029e6fd
                    
                label_14029efd8:
                    arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg7[0].q, 2)
                    arg7 = var_760_1
                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                    
                    if ((rsi_4 & 8) != 0)
                    label_14029effc:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        int64_t rcx_81 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_81, 3)
                        zmm1 = _mm256_add_epi64(arg12, zmm4)
                        
                        if ((rsi_4 & 0x10) == 0)
                            goto label_14029e70b
                        
                        goto label_14029f020
                    
                label_14029e6fd:
                    zmm1 = _mm256_add_epi64(arg12, zmm4)
                    
                    if ((rsi_4 & 0x10) == 0)
                    label_14029e70b:
                        
                        if ((rsi_4 & 0x20) != 0)
                            goto label_14029f02f
                        
                        goto label_14029e715
                    
                label_14029f020:
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 4)
                    
                    if ((rsi_4 & 0x20) != 0)
                    label_14029f02f:
                        int64_t rcx_83 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_83, 5)
                        
                        if ((rsi_4 & 0x40) == 0)
                            goto label_14029e71f
                        
                        goto label_14029f044
                    
                label_14029e715:
                    
                    if ((rsi_4 & 0x40) != 0)
                    label_14029f044:
                        zmm4[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm4[0].q, 6)
                        
                        if (temp0_61.b s< 0)
                        label_14029f05d:
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            int64_t rcx_85 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_85, 7)
                    else
                    label_14029e71f:
                        
                        if (temp0_61.b s< 0)
                            goto label_14029f05d
                    
                    zmm1 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), arg8)
                    arg11 = zmm1 ^ arg6
                    bool cond:10_1 = _mm256_movemask_ps(zmm1 & not.32(arg5)) == 0
                    var_370 = zmm0[0].o
                    float var_460_1[0x8] = arg11
                    int32_t i_7
                    
                    if (not(cond:10_1))
                        zmm4 = arg11
                        arg11 = zmm12
                        zmm12 = _mm256_blendv_ps(zmm12, arg7, zmm4)
                        arg10 = _mm256_sub_epi32(arg11, arg6)
                        arg13 = zmm1 & not.32(_mm256_cmpgt_epi32(arg10, arg7) ^ arg6)
                        arg7 = arg13 & arg5
                        i_7 = _mm256_movemask_ps(arg7)
                    
                    int128_t var_5a0
                    
                    if (cond:10_1 || i_7 == 0)
                        zmm0[0].o = var_5a0
                    else
                        zmm0[0].o = var_5a0
                        
                        do
                            zmm1 = arg10
                            zmm4 = _mm256_add_epi32(arg10, arg10)
                            arg10 = _mm256_add_epi64(zmm5, _mm256_cvtepi32_epi64(zmm4[0].o))
                            char temp0_112 = _mm256_movemask_ps(arg7)
                            
                            if ((temp0_112 & 1) == 0)
                                if ((temp0_112 & 2) != 0)
                                    goto label_14029e7b3
                                
                                goto label_14029e889
                            
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg10[0].q, 0)
                            
                            if ((temp0_112 & 2) != 0)
                            label_14029e7b3:
                                int64_t rdi_4 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rdi_4, 1)
                                zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                                
                                if ((temp0_112 & 4) == 0)
                                    goto label_14029e898
                                
                                goto label_14029e7cd
                            
                        label_14029e889:
                            zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                            
                            if ((temp0_112 & 4) == 0)
                            label_14029e898:
                                zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                
                                if ((temp0_112 & 8) != 0)
                                    goto label_14029e7eb
                                
                                goto label_14029e8a6
                            
                        label_14029e7cd:
                            arg7[0].o = _mm256_extracti128_si256(arg10, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg7[0].q, 2)
                            zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                            
                            if ((temp0_112 & 8) != 0)
                            label_14029e7eb:
                                arg7[0].o = _mm256_extracti128_si256(arg10, 1)
                                int64_t rdi_6 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rdi_6, 3)
                                arg10 = _mm256_add_epi64(arg12, zmm4)
                                
                                if ((temp0_112 & 0x10) == 0)
                                    goto label_14029e8b3
                                
                                goto label_14029e80e
                            
                        label_14029e8a6:
                            arg10 = _mm256_add_epi64(arg12, zmm4)
                            
                            if ((temp0_112 & 0x10) == 0)
                            label_14029e8b3:
                                
                                if ((temp0_112 & 0x20) != 0)
                                    goto label_14029e81c
                                
                                goto label_14029e8bc
                            
                        label_14029e80e:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg10[0].q, 4)
                            
                            if ((temp0_112 & 0x20) != 0)
                            label_14029e81c:
                                int64_t rdi_8 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rdi_8, 5)
                                
                                if ((temp0_112 & 0x40) == 0)
                                    goto label_14029e8c5
                                
                                goto label_14029e830
                            
                        label_14029e8bc:
                            
                            if ((temp0_112 & 0x40) != 0)
                            label_14029e830:
                                zmm4[0].o = _mm256_extracti128_si256(arg10, 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm4[0].q, 6)
                                
                                if (temp0_112 s< 0)
                                label_14029e848:
                                    zmm4[0].o = _mm256_extracti128_si256(arg10, 1)
                                    int64_t rcx_35 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_35, 7)
                            else
                            label_14029e8c5:
                                
                                if (temp0_112 s< 0)
                                    goto label_14029e848
                            
                            zmm4 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), arg8)
                            arg7 = zmm4 & arg13
                            zmm4[0].o = zx.o(0)
                            
                            if (_mm256_movemask_ps(arg7 & arg5) != i_7)
                                zmm4 = arg7 ^ arg13
                            
                            zmm12 = _mm256_blendv_ps(zmm12, arg11, arg7)
                            arg10 = _mm256_sub_epi32(zmm1, arg6)
                            arg13 = __vpcmpgtd_ymmqq_ymmqq_memqq(arg10, var_760_1) & not.32(zmm4)
                            arg7 = arg13 & arg5
                            i_7 = _mm256_movemask_ps(arg7)
                            arg11 = zmm1
                        while (i_7 != 0)
                    
                    if (_mm256_movemask_ps(_mm256_andnot_ps(var_460_1, arg5)) == 0)
                        arg11[0].o = zx.o(0)
                    else
                        zmm4 = _mm256_xor_ps(var_460_1, arg6)
                        arg11[0].o = zx.o(0)
                        zmm12 = _mm256_blendv_ps(zmm12, arg11, zmm4)
                        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(arg6, var_440_1)
                        arg13 = _mm256_cmpgt_epi32(zmm1, arg11) & zmm4
                        arg7 = arg13 & arg5
                        int32_t i_8 = _mm256_movemask_ps(arg7)
                        
                        if (i_8 != 0)
                            do
                                zmm4 = _mm256_add_epi32(zmm1, zmm1)
                                arg10 = _mm256_add_epi64(zmm5, _mm256_cvtepi32_epi64(zmm4[0].o))
                                char temp0_225 = _mm256_movemask_ps(arg7)
                                
                                if ((temp0_225 & 1) == 0)
                                    if ((temp0_225 & 2) != 0)
                                        goto label_14029ee43
                                    
                                    goto label_14029ef14
                                
                                arg9[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg10[0].q, 0)
                                
                                if ((temp0_225 & 2) != 0)
                                label_14029ee43:
                                    uint16_t* rdi_11 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rdi_11, 1)
                                    zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                                    
                                    if ((temp0_225 & 4) == 0)
                                        goto label_14029ef23
                                    
                                    goto label_14029ee5d
                                
                            label_14029ef14:
                                zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                                
                                if ((temp0_225 & 4) == 0)
                                label_14029ef23:
                                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                    
                                    if ((temp0_225 & 8) != 0)
                                        goto label_14029ee7b
                                    
                                    goto label_14029ef31
                                
                            label_14029ee5d:
                                arg7[0].o = _mm256_extracti128_si256(arg10, 1)
                                arg9[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg7[0].q, 2)
                                zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                
                                if ((temp0_225 & 8) != 0)
                                label_14029ee7b:
                                    arg7[0].o = _mm256_extracti128_si256(arg10, 1)
                                    uint16_t* rdi_13 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rdi_13, 3)
                                    arg10 = _mm256_add_epi64(arg12, zmm4)
                                    
                                    if ((temp0_225 & 0x10) == 0)
                                        goto label_14029ef3e
                                    
                                    goto label_14029ee9e
                                
                            label_14029ef31:
                                arg10 = _mm256_add_epi64(arg12, zmm4)
                                
                                if ((temp0_225 & 0x10) == 0)
                                label_14029ef3e:
                                    
                                    if ((temp0_225 & 0x20) != 0)
                                        goto label_14029eeac
                                    
                                    goto label_14029ef47
                                
                            label_14029ee9e:
                                arg9[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg10[0].q, 4)
                                
                                if ((temp0_225 & 0x20) != 0)
                                label_14029eeac:
                                    uint16_t* rdi_15 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rdi_15, 5)
                                    
                                    if ((temp0_225 & 0x40) == 0)
                                        goto label_14029ef50
                                    
                                    goto label_14029eec0
                                
                            label_14029ef47:
                                
                                if ((temp0_225 & 0x40) != 0)
                                label_14029eec0:
                                    zmm4[0].o = _mm256_extracti128_si256(arg10, 1)
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm4[0].q, 6)
                                    
                                    if (temp0_225 s< 0)
                                    label_14029eed8:
                                        zmm4[0].o = _mm256_extracti128_si256(arg10, 1)
                                        uint16_t* rcx_75 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                        arg9[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rcx_75, 7)
                                else
                                label_14029ef50:
                                    
                                    if (temp0_225 s< 0)
                                        goto label_14029eed8
                                
                                zmm4 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg9[0].o), arg8)
                                arg7 = zmm4 & not.32(arg13)
                                zmm4[0].o = zx.o(0)
                                arg10 = arg7 & arg5
                                int32_t temp0_231 = _mm256_movemask_ps(arg10)
                                arg10[0].o = zx.o(0)
                                
                                if (temp0_231 != i_8)
                                    arg10 = arg7 ^ arg13
                                
                                zmm12 = _mm256_blendv_ps(zmm12, zmm1, arg7)
                                zmm1 = _mm256_add_epi32(zmm1, arg6)
                                arg13 = _mm256_cmpgt_epi32(zmm1, zmm4) & arg10
                                arg7 = arg13 & arg5
                                i_8 = _mm256_movemask_ps(arg7)
                            while (i_8 != 0)
                    
                    arg13 = _mm256_blendv_ps(var_740, zmm12, arg5)
                    zmm4 = _mm256_add_epi32(arg13, arg13)
                    zmm1 = _mm256_add_epi64(zmm5, _mm256_cvtepi32_epi64(zmm4[0].o))
                    
                    if ((rsi_4 & 1) == 0)
                        zmm12[0].o = arg18
                        arg10 = var_520_1
                        
                        if ((rsi_4 & 2) != 0)
                            goto label_14029f2f7
                        
                        goto label_14029f1a6
                    
                    uint16_t var_700[0x8]
                    arg7[0].o = var_700
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm1[0].q, 0)
                    var_700 = arg7[0].o
                    zmm12[0].o = arg18
                    arg10 = var_520_1
                    
                    if ((rsi_4 & 2) != 0)
                    label_14029f2f7:
                        int64_t rcx_104 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg7[0].o = var_700
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rcx_104, 1)
                        var_700 = arg7[0].o
                        zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                        
                        if ((rsi_4 & 4) == 0)
                            goto label_14029f1b6
                        
                        goto label_14029f31e
                    
                label_14029f1a6:
                    zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                    
                    if ((rsi_4 & 4) == 0)
                    label_14029f1b6:
                        arg7 = var_760_1
                        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                        
                        if ((rsi_4 & 8) != 0)
                            goto label_14029f34e
                        
                        goto label_14029f1ca
                    
                label_14029f31e:
                    arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg7[0].o = var_700
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg7[0].q, 2)
                    var_700 = arg7[0].o
                    arg7 = var_760_1
                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                    
                    if ((rsi_4 & 8) != 0)
                    label_14029f34e:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        int64_t rcx_106 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = var_700
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rcx_106, 3)
                        var_700 = zmm1[0].o
                        zmm1 = _mm256_add_epi64(arg12, zmm4)
                        
                        if ((rsi_4 & 0x10) == 0)
                            goto label_14029f1d8
                        
                        goto label_14029f37e
                    
                label_14029f1ca:
                    zmm1 = _mm256_add_epi64(arg12, zmm4)
                    
                    if ((rsi_4 & 0x10) != 0)
                    label_14029f37e:
                        zmm4[0].o = var_700
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm1[0].q, 4)
                        var_700 = zmm4[0].o
                        
                        if ((rsi_4 & 0x20) != 0)
                        label_14029f399:
                            int64_t rcx_108 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm4[0].o = var_700
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_108, 5)
                            var_700 = zmm4[0].o
                            
                            if ((rsi_4 & 0x40) == 0)
                                goto label_14029f1ec
                            
                            goto label_14029f3ba
                    else
                    label_14029f1d8:
                        
                        if ((rsi_4 & 0x20) != 0)
                            goto label_14029f399
                    
                    int128_t var_480
                    
                    if ((rsi_4 & 0x40) != 0)
                    label_14029f3ba:
                        zmm4[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm4[0].o = var_700
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm4[0].q, 6)
                        var_700 = zmm4[0].o
                        zmm4[0].o = var_480
                        
                        if (temp0_61.b s< 0)
                        label_14029f3e8:
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            int64_t rcx_110 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = var_700
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rcx_110, 7)
                            var_700 = zmm1[0].o
                    else
                    label_14029f1ec:
                        zmm4[0].o = var_480
                        
                        if (temp0_61.b s< 0)
                            goto label_14029f3e8
                    
                    arg8 = _mm256_blendv_ps(var_6e0, _mm256_sub_epi32(arg13, arg6), arg5)
                    zmm1 = _mm256_cmpgt_epi32(arg8, arg7) & arg5
                    bool cond:16_1 = _mm256_movemask_ps(zmm1) == 0
                    var_5a0 = zmm0[0].o
                    
                    if (not(cond:16_1))
                        arg8 = _mm256_blendv_ps(arg8, arg7, zmm1)
                    
                    zmm1 = _mm256_add_epi32(arg8, arg8)
                    zmm0 = _mm256_add_epi64(zmm5, _mm256_cvtepi32_epi64(zmm1[0].o))
                    
                    if ((rsi_4 & 1) == 0)
                        if ((rsi_4 & 2) != 0)
                            goto label_14029f41e
                        
                        goto label_14029f248
                    
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0].q, 0)
                    
                    if ((rsi_4 & 2) != 0)
                    label_14029f41e:
                        int64_t rcx_112 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_112, 1)
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((rsi_4 & 4) == 0)
                            goto label_14029f258
                        
                        goto label_14029f439
                    
                label_14029f248:
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    
                    if ((rsi_4 & 4) == 0)
                    label_14029f258:
                        zmm5 = var_640
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rsi_4 & 8) != 0)
                            goto label_14029f469
                        
                        goto label_14029f270
                    
                label_14029f439:
                    zmm5[0].o = zmm4[0].o
                    zmm4[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm4[0].o = zmm5[0].o
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm4[0].q, 2)
                    zmm5 = var_640
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rsi_4 & 8) != 0)
                    label_14029f469:
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rcx_114 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_114, 3)
                        zmm0 = _mm256_add_epi64(arg12, zmm1)
                        
                        if ((rsi_4 & 0x10) == 0)
                            goto label_14029f27e
                        
                        goto label_14029f48d
                    
                label_14029f270:
                    zmm0 = _mm256_add_epi64(arg12, zmm1)
                    
                    if ((rsi_4 & 0x10) == 0)
                    label_14029f27e:
                        
                        if ((rsi_4 & 0x20) != 0)
                            goto label_14029f49c
                        
                        goto label_14029f288
                    
                label_14029f48d:
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm0[0].q, 4)
                    
                    if ((rsi_4 & 0x20) != 0)
                    label_14029f49c:
                        uint16_t* rcx_116 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_116, 5)
                        
                        if ((rsi_4 & 0x40) == 0)
                            goto label_14029f292
                        
                        goto label_14029f4b1
                    
                label_14029f288:
                    
                    if ((rsi_4 & 0x40) != 0)
                    label_14029f4b1:
                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm1[0].q, 6)
                        
                        if (temp0_61.b s< 0)
                        label_14029f4ca:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rcx_118 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_118, 7)
                    else
                    label_14029f292:
                        
                        if (temp0_61.b s< 0)
                            goto label_14029f4ca
                    
                    zmm0 = __vpmovzxwd_ymmqq_memdq(var_700)
                    var_480 = zmm4[0].o
                    zmm1 = _mm256_cvtepu16_epi32(zmm4[0].o)
                    zmm4[0].o = zx.o(0)
                    
                    if (arg19 != 1)
                        goto label_14029f6a7
                
                zmm1 = _mm256_blendv_ps(arg11, zmm4, arg5)
        
        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg11, var_1a0_1, 
            __vpcmpgtd_ymmqq_ymmqq_memqq(arg10, var_400) & temp0_10)
        uint64_t r11_1 = zx.q(r15.d)
        uint32_t var_760_2[0x8] = zmm1
        int32_t var_580_1[0x8]
        float var_560_1[0x8]
        int64_t var_540_1[0x4]
        
        if (r15.d u> 6)
        label_14029f770:
            arg12[0].o = zx.o(0)
            var_540_1 = arg12
            var_560_1 = arg12
            var_580_1 = arg12
            zmm4[0].o = zx.o(0)
            arg5[0].o = zx.o(0)
        else
            arg5 = __vpmulld_ymmqq_ymmqq_memqq(arg13, temp0_3)
            
            switch (r11_1)
                case 0, 1
                    zmm1 = _mm256_add_epi32(_mm256_add_epi32(zmm5, zmm0), arg5)
                    arg5[0].o = zx.o(0)
                    zmm4 = _mm256_cmpeq_epi32(zmm4, zmm4)
                    float temp0_356[0x8]
                    int32_t temp1_5
                    temp0_356, temp1_5 = _mm256_i32gather_ps(arg5, *(r12 + zmm1[0].q), zmm4)
                    arg5 = temp0_356
                    zmm4 = temp1_5
                    arg7 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, var_6a0_1)
                    zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    uint32_t temp0_359[0x8] = _mm256_cmpeq_epi32(arg10, arg10)
                    float temp0_360[0x8]
                    int32_t temp1_6
                    temp0_360, temp1_6 = _mm256_i32gather_ps(zmm4, *(r12 + arg7[0].q), temp0_359)
                    zmm4 = temp0_360
                    arg7 = __vpbroadcastd_ymmqq_memd(8)
                    zmm1 = _mm256_add_epi32(zmm1, arg7)
                    arg12[0].o = zx.o(0)
                    arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                    float temp0_364[0x8]
                    int32_t temp1_7
                    temp0_364, temp1_7 = _mm256_i32gather_ps(arg12, *(r12 + zmm1[0].q), arg7)
                    arg12 = temp0_364
                    arg7 = temp1_7
                case 2
                    zmm1 = _mm256_add_epi32(zmm5, zmm0)
                    int32_t temp0_366[0x8] = _mm256_add_epi32(zmm1, arg5)
                    int32_t rsi_7 = temp0_366[0]
                    int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_366[0].o, 1))
                    int64_t r13_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_366[0].o, 2))
                    int64_t r8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_366[0].o, 3))
                    zmm1[0].o = _mm256_extracti128_si256(temp0_366, 1)
                    uint32_t rbx_5 = zmm1[0]
                    int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    var_740[0] = r9
                    int64_t rcx_125 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int64_t rsi_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = zx.o(*(arg16 + sx.q(rsi_7)))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg16 + r12_2), 1)
                    r12 = arg16
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r13_2), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r8), 3)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(rbx_5)), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r15_2), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rcx_125), 6)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rsi_9), 7)
                    zmm4 = __vpaddd_ymmqq_ymmqq_memqq(temp0_366, var_5c0_1)
                    float rcx_126 = zmm4[0]
                    int64_t r8_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                    int64_t r9_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                    int64_t r15_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                    zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                    float rdx_2 = zmm4[0]
                    int64_t rbx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
                    int64_t rdi_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
                    int64_t rcx_128 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
                    zmm4[0].o = zx.o(*(r12 + sx.q(rcx_126)))
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + r8_1), 1)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + r9_2), 2)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + r15_3), 3)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + sx.q(rdx_2)), 4)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + rbx_9), 5)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + rdi_22), 6)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *(r12 + rcx_128), 7)
                    int32_t temp0_396[0x8] = __vpaddd_ymmqq_ymmqq_memqq(temp0_366, var_6a0_1)
                    int32_t rcx_129 = temp0_396[0]
                    int64_t r8_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_396[0].o, 1))
                    int64_t r9_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_396[0].o, 2))
                    int64_t rdi_24 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_396[0].o, 3))
                    temp0_396[0].o = _mm256_extracti128_si256(temp0_396, 1)
                    int32_t rsi_12 = temp0_396[0]
                    int64_t rdx_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_396[0].o, 1))
                    int64_t r10_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_396[0].o, 2))
                    int64_t rbx_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_396[0].o, 3))
                    temp0_396[0].o = zx.o(*(r12 + sx.q(rcx_129)))
                    temp0_396[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_396[0].o, *(r12 + r8_2), 1)
                    r14 = arg17
                    temp0_396[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_396[0].o, *(r12 + r9_3), 2)
                    r9 = var_740[0]
                    arg3 = var_668_1
                    temp0_396[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_396[0].o, *(r12 + rdi_24), 3)
                    temp0_396[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_396[0].o, *(r12 + sx.q(rsi_12)), 4)
                    temp0_396[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_396[0].o, *(r12 + rdx_6), 5)
                    uint32_t temp0_409[0x8] = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg10 = zmm0
                    zmm0 = arg8
                    arg8 = zmm5
                    zmm5 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(temp0_409, zmm5))
                    float temp0_413[0x8] = _mm256_broadcast_ss(32767f)
                    zmm1 = _mm256_div_ps(zmm1, temp0_413)
                    temp0_396[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_396[0].o, *(r12 + r10_7), 6)
                    r10_4 = var_704_1
                    arg2 = var_670_1
                    float temp0_419[0x8] = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm4[0].o), 
                            zmm5)), 
                        temp0_413)
                    temp0_396[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_396[0].o, *(r12 + rbx_13), 7)
                    zmm5 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(temp0_396[0].o), 
                            zmm5)), 
                        temp0_413)
                    arg7 = _mm256_broadcast_ss(128f)
                    arg5 = _mm256_mul_ps(zmm1, arg7)
                    zmm4 = _mm256_mul_ps(temp0_419, arg7)
                    arg12 = _mm256_mul_ps(zmm5, arg7)
                    zmm5 = arg8
                    arg8 = zmm0
                    zmm0 = arg10
                case 3
                    zmm4[0].o = zx.o(0)
                    uint32_t temp0_429[0x8] = _mm256_cmpeq_epi32(zmm1, zmm1)
                    float temp0_430[0x8]
                    int32_t temp1_8
                    temp0_430, temp1_8 = _mm256_i32gather_ps(zmm4, *(r12 + zmm5[0].q), temp0_429)
                    zmm1 = temp1_8
                    arg7 = __vpaddd_ymmqq_ymmqq_memqq(zmm5, var_6a0_1)
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    uint32_t temp0_433[0x8] = _mm256_cmpeq_epi32(arg10, arg10)
                    float temp0_434[0x8]
                    int32_t temp1_9
                    temp0_434, temp1_9 = _mm256_i32gather_ps(zmm1, *(r12 + arg7[0].q), temp0_433)
                    zmm1 = temp0_434
                    arg10 = temp1_9
                    arg7 = _mm256_add_epi32(zmm5, __vpbroadcastd_ymmqq_memd(8))
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                    float temp0_439[0x8]
                    int32_t temp1_10
                    temp0_439, temp1_10 = _mm256_i32gather_ps(arg10, *(r12 + arg7[0].q), arg11)
                    arg11 = temp1_10
                    arg7 = _mm256_add_epi32(zmm5, __vpbroadcastd_ymmqq_memd(0xc))
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                    float temp0_444[0x8]
                    int32_t temp1_11
                    temp0_444, temp1_11 = _mm256_i32gather_ps(arg11, *(r12 + arg7[0].q), arg12)
                    arg7 = __vpbroadcastd_ymmqq_memd(0x10)
                    arg12 = _mm256_add_epi32(zmm5, arg7)
                    arg7[0].o = zx.o(0)
                    zmm12 = _mm256_cmpeq_epi32(zmm12, zmm12)
                    float temp0_448[0x8]
                    int32_t temp1_12
                    temp0_448, temp1_12 = _mm256_i32gather_ps(arg7, *(r12 + arg12[0]), zmm12)
                    arg7 = temp0_448
                    zmm12 = temp1_12
                    arg12 = _mm256_add_epi32(zmm5, __vpbroadcastd_ymmqq_memd(0x14))
                    zmm12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm12[0].o, zmm12[0].o)
                    var_740 = arg13
                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    float temp0_453[0x8]
                    int32_t temp1_13
                    temp0_453, temp1_13 = _mm256_i32gather_ps(zmm12, *(r12 + arg12[0]), arg13)
                    zmm12 = temp0_453
                    arg13 = temp1_13
                    arg12 = _mm256_add_epi32(zmm5, zmm0)
                    int32_t temp0_455[0x8] = _mm256_add_epi32(arg12, arg5)
                    arg12[0].o = zx.o(0)
                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    uint32_t temp0_457[0x8]
                    int32_t temp1_14
                    temp0_457, temp1_14 =
                        _mm256_i32gather_epi32(arg12, *(r12 + temp0_455[0].q), arg13)
                    arg12 = temp0_457
                    arg13 = _mm256_srli_epi32(arg12, 0x15)
                    arg5 = _mm256_srli_epi32(arg12, 0xa)
                    var_640[0].o = arg9[0].o
                    arg9[0].o = arg14[0].o
                    arg14 = zmm0
                    zmm0 = arg8
                    arg8 = zmm5
                    zmm5 = arg5 & __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg5 = _mm256_fmadd_ps(
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                arg12 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f)), 
                        temp0_444, temp0_430)
                    arg11 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    float temp0_470[0x8] = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm5, arg11))
                    zmm5 = _mm256_broadcast_ss(1023f)
                    float temp0_472[0x8] = _mm256_div_ps(temp0_470, zmm5)
                    arg11 = _mm256_add_epi32(arg13, arg11)
                    arg13 = var_740
                    arg12 = _mm256_div_ps(_mm256_cvtepi32_ps(arg11), zmm5)
                    zmm5 = arg8
                    arg8 = zmm0
                    zmm0 = arg14
                    arg14[0].o = arg9[0].o
                    arg9[0].o = var_640[0].o
                    zmm4 = _mm256_fmadd_ps(temp0_472, arg7, zmm1)
                    arg12 = _mm256_fmadd_ps(arg12, zmm12, temp0_439)
                    zmm12[0].o = arg18
                case 4, 5, 6
                    goto label_14029f770
            
            var_580_1 = arg5
            var_560_1 = zmm4
            var_540_1 = arg12
        
        arg11 = _mm256_cmpeq_epi32(arg13, arg8)
        arg10 = arg11 ^ arg6
        var_6e0 = arg8
        
        if (_mm256_movemask_ps(arg10) == 0)
            arg11[0].o = zx.o(0)
        else
            var_740 = arg13
            float var_3e0_1[0x8]
            float var_3c0_1[0x8]
            float var_3a0_1[0x8]
            
            if (r15.d u> 6)
            label_14029fc60:
                arg11[0].o = zx.o(0)
                var_3e0_1 = _mm256_maskstore_ps(arg10, arg11)
                var_3c0_1 = _mm256_maskstore_ps(arg10, arg11)
                var_3a0_1 = _mm256_maskstore_ps(arg10, arg11)
            else
                arg13 = __vpmulld_ymmqq_ymmqq_memqq(arg8, temp0_3)
                
                switch (r11_1)
                    case 0, 1
                        zmm0 = _mm256_add_epi32(_mm256_add_epi32(zmm5, zmm0), arg13)
                        arg6[0].o = zx.o(0)
                        float temp0_483[0x8]
                        int32_t temp1_15
                        temp0_483, temp1_15 = _mm256_i32gather_ps(arg6, *(r12 + zmm0[0].q), arg10)
                        int32_t temp0_484[0x8] = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_6a0_1)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        float temp0_486[0x8]
                        int32_t temp1_16
                        temp0_486, temp1_16 =
                            _mm256_i32gather_ps(arg7, *(r12 + temp0_484[0].q), arg10)
                        arg7 = temp0_486
                        zmm5 = __vpbroadcastd_ymmqq_memd(8)
                        zmm0 = _mm256_add_epi32(zmm0, zmm5)
                        zmm5[0].o = zx.o(0)
                        float temp0_489[0x8]
                        int32_t temp1_17
                        temp0_489, temp1_17 = _mm256_i32gather_ps(zmm5, *(r12 + zmm0[0].q), arg10)
                        arg8 = temp1_17
                        var_3e0_1 = _mm256_maskstore_ps(arg10, temp0_483)
                        var_3c0_1 = _mm256_maskstore_ps(arg10, arg7)
                        var_3a0_1 = _mm256_maskstore_ps(arg10, temp0_489)
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    case 2
                        int32_t temp0_497[0x8] =
                            _mm256_add_epi32(_mm256_add_epi32(zmm5, zmm0), arg13)
                        zmm0 = arg11 & not.32(temp0_497)
                        int64_t r8_3 = sx.q(zmm0[0])
                        int64_t r9_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_499 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t r10_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rsi_15 = sx.q(zmm0[0])
                        int64_t rcx_137 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_503 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t rdi_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(r12 + r8_3))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r9_4), 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + sx.q(temp0_499)), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r10_8), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rsi_15), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rcx_137), 5)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + sx.q(temp0_503)), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rdi_27), 7)
                        zmm1 = arg11 & not.32(__vpaddd_ymmqq_ymmqq_memqq(temp0_497, var_5c0_1))
                        int64_t r8_4 = sx.q(zmm1[0])
                        int64_t r9_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        int64_t r10_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        int64_t r11_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        int64_t rsi_17 = sx.q(zmm1[0])
                        int64_t rcx_140 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        int64_t rdx_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        int32_t temp0_519 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                        zmm1[0].o = zx.o(*(r12 + r8_4))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r9_5), 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r10_9), 2)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r11_3), 3)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rsi_17), 4)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rcx_140), 5)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rdx_12), 6)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(temp0_519)), 7)
                        zmm1 = arg11 & not.32(__vpaddd_ymmqq_ymmqq_memqq(temp0_497, var_6a0_1))
                        uint32_t rcx_142 = zmm1[0]
                        int64_t r8_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        int64_t r9_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        int64_t rdi_31 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        uint32_t rsi_18 = zmm1[0]
                        int64_t rdx_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        int64_t r10_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                        int64_t rbx_21 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = zx.o(*(r12 + sx.q(rcx_142)))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r8_5), 1)
                        r14 = arg17
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r9_6), 2)
                        arg3 = var_668_1
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rdi_31), 3)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(rsi_18)), 4)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rdx_15), 5)
                        uint32_t temp0_540[0x8] = _mm256_cvtepu16_epi32(zmm0[0].o)
                        arg5 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(temp0_540, arg5))
                        arg6 = _mm256_broadcast_ss(32767f)
                        zmm0 = _mm256_div_ps(zmm0, arg6)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r10_10), 6)
                        r10_4 = var_704_1
                        arg2 = var_670_1
                        float temp0_550[0x8] = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm4[0].o), 
                                arg5)), 
                            arg6)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rbx_21), 7)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                arg5)), 
                            arg6)
                        arg5 = _mm256_broadcast_ss(128f)
                        zmm0 = _mm256_mul_ps(zmm0, arg5)
                        arg6 = _mm256_mul_ps(temp0_550, arg5)
                        zmm1 = _mm256_mul_ps(zmm1, arg5)
                        var_3e0_1 = _mm256_maskstore_ps(arg10, zmm0)
                        var_3c0_1 = _mm256_maskstore_ps(arg10, arg6)
                        var_3a0_1 = _mm256_maskstore_ps(arg10, zmm1)
                        arg5 = var_580_1
                        zmm4 = var_560_1
                        arg12 = var_540_1
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    case 3
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_564[0x8]
                        int32_t temp1_18
                        temp0_564, temp1_18 = _mm256_i32gather_ps(zmm1, *(r12 + zmm5[0].q), arg10)
                        arg6 = __vpaddd_ymmqq_ymmqq_memqq(zmm5, var_6a0_1)
                        arg11[0].o = zx.o(0)
                        var_640[0].o = arg14[0].o
                        arg14 = zmm0
                        zmm0 = zmm5
                        float temp0_566[0x8]
                        int32_t temp1_19
                        temp0_566, temp1_19 = _mm256_i32gather_ps(arg11, *(r12 + arg6[0].q), arg10)
                        arg11 = temp0_566
                        arg6 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))
                        zmm12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm12[0].o, zmm12[0].o)
                        float temp0_570[0x8]
                        int32_t temp1_20
                        temp0_570, temp1_20 = _mm256_i32gather_ps(zmm12, *(r12 + arg6[0].q), arg10)
                        zmm12 = temp0_570
                        arg6 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(0xc))
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        float temp0_574[0x8]
                        int32_t temp1_21
                        temp0_574, temp1_21 = _mm256_i32gather_ps(arg7, *(r12 + arg6[0].q), arg10)
                        arg7 = temp0_574
                        zmm5 = temp1_21
                        arg6 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(0x10))
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        float temp0_578[0x8]
                        int32_t temp1_22
                        temp0_578, temp1_22 = _mm256_i32gather_ps(zmm5, *(r12 + arg6[0].q), arg10)
                        arg8 = temp1_22
                        arg6 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(0x14))
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_582[0x8]
                        int32_t temp1_23
                        temp0_582, temp1_23 = _mm256_i32gather_ps(arg8, *(r12 + arg6[0].q), arg10)
                        arg8 = temp0_582
                        zmm1 = temp1_23
                        zmm0 = _mm256_add_epi32(zmm0, arg14)
                        arg14[0].o = var_640[0].o
                        zmm0 = _mm256_add_epi32(zmm0, arg13)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        uint32_t temp0_586[0x8]
                        int32_t temp1_24
                        temp0_586, temp1_24 =
                            _mm256_i32gather_epi32(zmm1, *(r12 + zmm0[0].q), arg10)
                        uint32_t temp0_587[0x8] = _mm256_srli_epi32(temp0_586, 0x15)
                        uint32_t temp0_588[0x8] = _mm256_srli_epi32(temp0_586, 0xa)
                        arg13 = __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                temp0_586 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        uint32_t temp0_596[0x8] = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(temp0_588 & arg13, temp0_596))
                        float temp0_599[0x8] = _mm256_broadcast_ss(1023f)
                        zmm1 = _mm256_div_ps(zmm1, temp0_599)
                        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, arg7, temp0_564)
                        zmm1 = _mm256_fmadd_ps(zmm1, temp0_578, arg11)
                        arg6 = _mm256_fmadd_ps(
                            _mm256_div_ps(
                                _mm256_cvtepi32_ps(__vpaddd_ymmqq_ymmqq_memqq(temp0_596, 
                                    temp0_587)), 
                                temp0_599), 
                            arg8, zmm12)
                        zmm12[0].o = arg18
                        var_3e0_1 = _mm256_maskstore_ps(arg10, zmm0)
                        var_3c0_1 = _mm256_maskstore_ps(arg10, zmm1)
                        var_3a0_1 = _mm256_maskstore_ps(arg10, arg6)
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    case 4, 5, 6
                        goto label_14029fc60
            
            arg13 = var_740
            zmm5 = var_760_2
            zmm0 = _mm256_sub_ps(var_3e0_1, arg5)
            zmm1 = _mm256_sub_ps(var_3c0_1, zmm4)
            arg6 = _mm256_sub_ps(var_3a0_1, arg12)
            zmm0 = _mm256_fmadd_ps(zmm0, zmm5, arg5)
            zmm1 = _mm256_fmadd_ps(zmm1, zmm5, zmm4)
            arg6 = _mm256_fmadd_ps(arg6, zmm5, arg12)
            arg5 = _mm256_maskstore_ps(arg10, zmm0)
            zmm4 = _mm256_maskstore_ps(arg10, zmm1)
            arg12 = _mm256_maskstore_ps(arg10, arg6)
        
        zmm0[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        zmm5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
        arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg10[0].o)
        arg6[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
        arg8[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg12[0].o, 0x28)
        int128_t var_320 = arg8[0].o
        arg8[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg10[0].o)
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
        int128_t var_310_1 = arg6[0].o
        arg5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg12[0].o, 0xa8)
        int128_t var_300_1 = arg6[0].o
        arg5[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
        int128_t var_2f0_1 = arg5[0].o
        arg5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
        arg6[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm5[0].o, 0x28)
        int128_t var_2e0_1 = zmm4[0].o
        zmm4[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
        arg5[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
        int128_t var_2d0_1 = arg5[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 0xa8)
        int128_t var_2c0_1 = zmm1[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        int128_t var_2b0_1 = zmm0[0].o
        uint64_t rcx_151
        int64_t rsi_20
        
        for (uint64_t i_9 = 0xff; i_9 != 0; i_9 = rsi_20 & rol.q(-2, rcx_151.b))
            uint64_t rcx_146 = _tzcnt_u64(i_9)
            rsi_20 = i_9 & not.q(1 << (rcx_146 u% 0x40))
            uint32_t var_340[0x8] = arg15
            zmm0[0].o = (&var_320)[rcx_146]
            *(arg1 + sx.q(var_340[zx.q(rcx_146.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            rcx_151 = _tzcnt_u64(rsi_20)
            zmm0[0].o = (&var_320)[rcx_151]
            *(arg1 + sx.q(var_340[zx.q(rcx_151.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
        
        r9 += 8
        arg8 = var_160_1
        arg6 = _mm256_cmpeq_epi32(arg6, arg6)
    while (r9 s< r10_4)
    
    rcx_153 = arg21
    
    if (r9 s< rcx_153)
        goto label_1402a0266
arg7[0].o = var_e8
arg8[0].o = var_d8
arg9[0].o = var_c8
arg10[0].o = var_b8
arg11[0].o = var_a8
arg12[0].o = var_98
arg13[0].o = var_78
arg14[0].o = var_68
arg15[0].o = var_58
_mm256_zeroupper()
return arg1
