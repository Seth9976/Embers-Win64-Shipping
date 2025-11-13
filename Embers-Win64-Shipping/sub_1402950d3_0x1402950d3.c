// 函数: sub_1402950d3
// 地址: 0x1402950d3
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_8 = *arg1
int32_t temp0 = divs.dp.d(arg2:arg4, arg5.d)
int32_t temp1 = mods.dp.d(arg2:arg4, arg5.d)
int64_t var_10 = *arg1
int64_t var_18 = *arg1
int128_t* result
int64_t rdx_3
int64_t rbp
int64_t r8
uint16_t* r9
int32_t zmm4[0x8]
uint32_t zmm5[0x8]
result, rdx_3, r8, r9, zmm4, zmm5 = (*(rbp + 0x41))(arg6, 
    zx.q(mods.dp.d((mods.dp.d(temp1:temp0, arg5.d)):(divs.dp.d(temp1:temp0, arg5.d)), arg5.d)))
int64_t var_20 = arg5
int64_t var_48 = arg5
int128_t var_68 = arg16[0].o
int128_t var_78 = arg15[0].o
int128_t var_88 = arg14[0].o
int128_t var_98 = arg13[0].o
int128_t var_a8 = arg12[0].o
int128_t var_b8 = arg11[0].o
int128_t var_c8 = arg10[0].o
int128_t var_d8 = arg9[0].o
int128_t var_e8 = arg8[0].o
int128_t var_f8 = arg7[0].o
int64_t rdi = sx.q(arg20)
int32_t rbx_1 = *(&data_143442e20 + (rdi << 2)) * *(&data_143442e00 + (rdi << 2))
int32_t r11 = 0
int32_t var_a08 = rdi.d
int32_t rcx = 0x18

if (rdi != 3)
    rcx = 0

int32_t r13_4 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
int32_t var_860[0x8]
float var_520[0x8]
float zmm1[0x8]
uint32_t zmm3[0x8]

if (r13_4 s> 0)
    arg6[0].o = zx.o(r9)
    arg6 = _mm256_broadcastq_epi64(arg6[0].q)
    uint32_t var_2e0_1[0x8] = arg6
    arg6[0].o = zx.o(rcx)
    zmm1 = _mm256_broadcastd_epi32(arg6[0])
    int32_t var_720_1[0x8] = zmm1
    arg6[0].o = _mm_broadcastd_epi32(arg6[0])
    arg6 = _mm256_cvtepu32_epi64(arg6[0].o)
    var_520 = arg6
    arg6[0].o = zx.o(rbx_1)
    arg6 = _mm256_broadcastd_epi32(arg6[0])
    int32_t var_660_1[0x8] = arg6
    arg6[0].o = zx.o(0)
    zmm1[0].o = arg18
    int32_t rbx_2
    rbx_2.b = zx.o(0) f>= zmm1[0]
    arg6[0].o = zx.o(neg.d(rbx_2))
    float var_560_1[0x8] = _mm256_broadcastd_epi32(arg6[0])
    int32_t rbx_4 = arg17 - 2
    arg6 = _mm256_broadcastss_ps(zmm1[0].o)
    float var_300_1[0x8] = arg6
    arg6[0].o = arg3[0].o
    arg6[0] = float.s(arg17 - 1)
    arg6[0].o = arg6[0].o f* zmm1[0]
    int32_t rcx_6 = int.d(arg6[0]) s>> 0x1f
    int32_t rcx_7 = rcx_6 & not.d(rcx_6)
    
    if (rbx_4 s> rcx_7)
        rbx_4 = rcx_7
    
    zmm1[0].o = zx.o(rbx_4)
    arg9 = _mm256_broadcastd_epi32(zmm1[0])
    float var_340_1[0x8] = _mm256_broadcastss_ps(arg6[0].o)
    r11 = 0
    zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
    arg12 = __vpbroadcastd_ymmqq_memd(4)
    arg13 = __vpbroadcastd_ymmqq_memd(8)
    int32_t var_840_1[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
    arg6 = _mm256_broadcast_ss(1.40129846e-45f)
    uint32_t var_820_1[0x8] = arg6
    int64_t var_868_1 = r8
    int64_t var_870_1 = rdx_3
    var_860 = arg12
    int32_t var_a00_1[0x8] = arg13
    int32_t var_944_1 = r13_4
    int32_t var_9a0_1[0x8] = arg9
    
    do
        arg6[0].o = zx.o(r11)
        arg6 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_broadcastd_epi32(arg6[0]), 3), 
            data_143442140)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        arg10[0].o = zx.o(0)
        int32_t temp0_51
        int32_t temp1_3
        temp0_51, temp1_3 = _mm256_i32gather_epi32(arg10, *(rdx_3 + arg6[0].q), zmm1)
        arg10 = temp0_51
        zmm1 = temp1_3
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        arg3[0].o = zx.o(0)
        int32_t temp0_53
        int32_t temp1_4
        temp0_53, temp1_4 = _mm256_i32gather_epi32(arg3, *(rdx_3 + (arg6 | arg12)[0].q), zmm1)
        arg3 = temp0_53
        arg6 = _mm256_slli_epi32(arg3, 4)
        arg3 = _mm256_cmpeq_epi32(arg3, arg3)
        arg9[0].o = zx.o(0)
        int32_t temp0_56
        int32_t temp1_5
        temp0_56, temp1_5 = _mm256_i32gather_epi32(arg9, *(r8 + (arg6 | arg13)[0].q), arg3)
        arg9 = temp0_56
        arg3 = temp1_5
        arg3 = _mm256_cmpeq_epi32(arg3, arg3)
        arg6[0].o = zx.o(0)
        int32_t temp0_58
        int32_t temp1_6
        temp0_58, temp1_6 = _mm256_i32gather_epi32(arg6, *(r8 + (arg6 | var_840_1)[0].q), arg3)
        arg6 = temp0_58
        arg3 = temp1_6
        zmm1 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg6, var_820_1)
        float var_9c0[0x8]
        arg8 = var_9c0
        float var_640[0x8]
        float var_620[0x8]
        int32_t var_600[0x8]
        uint32_t var_5e0[0x8]
        
        if (_mm256_movemask_ps(zmm1) != 0)
            arg3[0].o = zx.o(0)
            int32_t temp0_61
            int32_t temp1_7
            temp0_61, temp1_7 = _mm256_i32gather_ps(arg3, *(r9 + arg9[0].q), zmm1)
            arg3 = temp0_61
            zmm3 = _mm256_add_epi32(arg9, arg12)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            int32_t temp0_64
            int32_t temp1_8
            temp0_64, temp1_8 = _mm256_i32gather_ps(zmm4, *(r9 + zmm3[0].q), zmm1)
            zmm4 = temp0_64
            zmm5 = temp1_8
            zmm3 = _mm256_add_epi32(arg9, arg13)
            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            int32_t temp0_67
            int32_t temp1_9
            temp0_67, temp1_9 = _mm256_i32gather_ps(zmm5, *(r9 + zmm3[0].q), zmm1)
            zmm5 = temp0_67
            arg7 = temp1_9
            zmm3 = _mm256_fnmadd_ps(
                _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg3, arg3), zmm4, 
                    zmm4), 
                zmm5, zmm5)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            arg7 = _mm256_cmp_ps(arg7, zmm3, 1)
            zmm3 = _mm256_and_ps(arg7, _mm256_sqrt_ps(zmm3))
            var_640 = _mm256_maskstore_ps(zmm1, arg3)
            var_620 = _mm256_maskstore_ps(zmm1, zmm4)
            var_600 = _mm256_maskstore_ps(zmm1, zmm5)
            zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
            var_5e0 = _mm256_maskstore_ps(zmm1, zmm3)
        
        arg15 = zmm1 ^ zmm5
        
        if (_mm256_movemask_ps(arg15) != 0)
            zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
            zmm3 = _mm256_cvtepi32_epi64(zmm1[0].o)
            zmm1 = _mm256_cvtepi32_epi64(arg9[0].o)
            arg11 = __vpbroadcastd_ymmqq_memd(2)
            zmm4 = _mm256_cmpgt_epi32(arg11, arg6) | var_560_1
            arg3 = zmm4 & arg15
            arg16 = arg12
            float var_9e0[0x8]
            
            if (_mm256_movemask_ps(arg3) == 0)
                arg7 = var_9e0
            else
                arg12[0].o = zx.o(0)
                arg8 = _mm256_blendv_ps(arg8, arg12, arg3)
                arg7 = _mm256_blendv_ps(var_9e0, arg12, arg3)
            
            arg3 = var_520
            arg14 = _mm256_add_epi64(zmm3, arg3)
            zmm1 = _mm256_add_epi64(zmm1, arg3)
            float var_940_1[0x8] = zmm1
            int32_t var_6a0_1[0x8] = zmm4
            arg13 = zmm4 & not.32(arg15)
            int32_t temp0_92 = _mm256_movemask_ps(arg13)
            float var_a40_1[0x8]
            
            if (temp0_92 == 0)
                arg6[0].o = zx.o(0)
                var_a40_1 = arg6
                arg13 = var_a00_1
                arg12 = arg16
            else
                zmm1[0].o = zx.o(0)
                var_a40_1 = zmm1
                arg12 = arg15
                arg15 = arg11
                arg11 = _mm256_add_epi32(arg6, zmm5)
                zmm1[0].o = arg18
                
                if (zmm1[0].o f>= 1f)
                    arg8 = _mm256_blendv_ps(arg8, arg11, arg13)
                    arg7 = _mm256_blendv_ps(arg7, arg11, arg13)
                    arg13 = var_a00_1
                    arg11 = arg15
                    arg15 = arg12
                    arg12 = arg16
                else
                    uint32_t var_580_1[0x8] = arg9
                    arg6 = __vpmulld_ymmqq_ymmqq_memqq(arg6, var_660_1)
                    zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                    arg3 = __vpaddq_ymmqq_ymmqq_memqq(var_2e0_1, var_940_1)
                    zmm3 = _mm256_add_epi64(arg14, var_2e0_1)
                    zmm4 = __vpbroadcastq_ymmqq_memq(3)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    arg6 = _mm256_add_epi64(arg6, _mm256_add_epi64(arg3, zmm4))
                    zmm1 = _mm256_add_epi64(zmm1, _mm256_add_epi64(zmm3, zmm4))
                    arg3 = __vpbroadcastq_ymmqq_memq(-4)
                    float var_6c0_1[0x8] = zmm1 & arg3
                    arg9 = arg6 & arg3
                    arg16 = _mm256_min_epi32(
                        __vpmaxsd_ymmqq_ymmqq_memqq(
                            _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                                _mm256_cvtepi32_ps(arg11), var_300_1)), 
                            data_142fc9440), 
                        arg11)
                    int32_t var_a40_2[0x8] = arg11
                    int32_t var_680_1[0x8] = arg16
                    float var_9e0_1[0x8] = arg7
                    float var_9c0_1[0x8] = arg8
                    float var_6e0_1[0x8] = arg15
                    int64_t var_700_1[0x4] = arg14
                    
                    if (arg17 s< 0x100)
                        arg6 = _mm256_add_epi64(arg9, _mm256_cvtepi32_epi64(arg16[0].o))
                        char r12_1 = temp0_92.b
                        int128_t var_540
                        arg16[0].o = var_540
                        
                        if ((r12_1 & 1) == 0)
                            arg15 = arg12
                            arg12 = var_6c0_1
                            
                            if ((r12_1 & 2) != 0)
                                goto label_140295e4a
                            
                            goto label_140295ac6
                        
                        arg16[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16[0].o, zx.d(*arg6[0].q), 0)
                        arg15 = arg12
                        arg12 = var_6c0_1
                        
                        if ((r12_1 & 2) != 0)
                        label_140295e4a:
                            uint16_t rcx_77[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            arg16[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16[0].o, rcx_77, 1)
                            zmm1 = var_680_1
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            
                            if ((r12_1 & 4) == 0)
                                goto label_140295adf
                            
                            goto label_140295e6b
                        
                    label_140295ac6:
                        zmm1 = var_680_1
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((r12_1 & 4) == 0)
                        label_140295adf:
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((r12_1 & 8) != 0)
                                goto label_140295e8d
                            
                            goto label_140295aee
                        
                    label_140295e6b:
                        arg3[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg16[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16[0].o, zx.d(*arg3[0].q), 2)
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((r12_1 & 8) != 0)
                        label_140295e8d:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint16_t rcx_81[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            arg16[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16[0].o, rcx_81, 3)
                            arg6 = _mm256_add_epi64(arg12, zmm1)
                            
                            if ((r12_1 & 0x10) == 0)
                                goto label_140295afc
                            
                            goto label_140295eb7
                        
                    label_140295aee:
                        arg6 = _mm256_add_epi64(arg12, zmm1)
                        
                        if ((r12_1 & 0x10) == 0)
                        label_140295afc:
                            
                            if ((r12_1 & 0x20) != 0)
                                goto label_140295ecc
                            
                            goto label_140295b06
                        
                    label_140295eb7:
                        arg16[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16[0].o, zx.d(*arg6[0].q), 4)
                        
                        if ((r12_1 & 0x20) != 0)
                        label_140295ecc:
                            uint16_t rcx_85[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            arg16[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16[0].o, rcx_85, 5)
                            
                            if ((r12_1 & 0x40) == 0)
                                goto label_140295b10
                            
                            goto label_140295ede
                        
                    label_140295b06:
                        
                        if ((r12_1 & 0x40) != 0)
                        label_140295ede:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            arg16[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16[0].o, zx.d(*zmm1[0].q), 6)
                            
                            if (temp0_92.b s< 0)
                            label_140295efa:
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                uint16_t rcx_89[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                arg16[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16[0].o, rcx_89, 7)
                        else
                        label_140295b10:
                            
                            if (temp0_92.b s< 0)
                                goto label_140295efa
                        
                        arg6[0].o = arg16[0].o & data_142fc92e0
                        arg6 = __vpcmpgtd_ymmqq_ymmqq_memqq(_mm256_cvtepu16_epi32(arg6[0].o), 
                            var_9a0_1)
                        arg11 = arg6 ^ zmm5
                        var_540.32 = arg11
                        
                        if (_mm256_movemask_ps(arg6 & not.32(arg13)) == 0)
                            zmm1 = var_680_1
                        else
                            arg3 = var_a40_2
                            zmm3 = var_680_1
                            zmm1 = _mm256_blendv_ps(zmm3, arg3, arg11)
                            arg8 = _mm256_sub_epi32(zmm3, zmm5)
                            arg11 = arg6 & not.32(_mm256_cmpgt_epi32(arg8, arg3) ^ zmm5)
                            arg14 = arg13 & arg11
                            int32_t i = _mm256_movemask_ps(arg14)
                            
                            if (i != 0)
                                arg6 = zmm3
                                
                                do
                                    arg7 = arg8
                                    arg3 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    arg8 = _mm256_add_epi64(arg9, arg3)
                                    char temp0_180 = _mm256_movemask_ps(arg14)
                                    int128_t var_980
                                    uint32_t rcx_64
                                    
                                    if ((temp0_180 & 1) != 0)
                                        zmm3[0].o = var_980
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                            zx.d(*arg8[0].q), 0)
                                        
                                        if ((temp0_180 & 2) != 0)
                                            rcx_64 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rcx_64, 1)
                                    else
                                        zmm3[0].o = var_980
                                        
                                        if ((temp0_180 & 2) != 0)
                                            rcx_64 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rcx_64, 1)
                                    arg3[0].o = _mm256_extracti128_si256(arg7, 1)
                                    
                                    if ((temp0_180 & 4) == 0)
                                        arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                                        
                                        if ((temp0_180 & 8) != 0)
                                            goto label_140295bb2
                                        
                                        goto label_140295cb9
                                    
                                    zmm4[0].o = _mm256_extracti128_si256(arg8, 1)
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*zmm4[0].q), 2)
                                    arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                                    
                                    if ((temp0_180 & 8) != 0)
                                    label_140295bb2:
                                        zmm4[0].o = _mm256_extracti128_si256(arg8, 1)
                                        uint16_t rcx_52[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_52, 3)
                                        arg8 = _mm256_add_epi64(arg12, arg3)
                                        
                                        if ((temp0_180 & 0x10) == 0)
                                            goto label_140295cc7
                                        
                                        goto label_140295bdc
                                    
                                label_140295cb9:
                                    arg8 = _mm256_add_epi64(arg12, arg3)
                                    
                                    if ((temp0_180 & 0x10) == 0)
                                    label_140295cc7:
                                        
                                        if ((temp0_180 & 0x20) != 0)
                                            goto label_140295bf1
                                        
                                        goto label_140295cd1
                                    
                                label_140295bdc:
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*arg8[0].q), 4)
                                    
                                    if ((temp0_180 & 0x20) != 0)
                                    label_140295bf1:
                                        uint32_t rcx_56 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_56, 5)
                                        
                                        if ((temp0_180 & 0x40) == 0)
                                            goto label_140295cdb
                                        
                                        goto label_140295c03
                                    
                                label_140295cd1:
                                    
                                    if ((temp0_180 & 0x40) != 0)
                                    label_140295c03:
                                        arg3[0].o = _mm256_extracti128_si256(arg8, 1)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                            zx.d(*arg3[0].q), 6)
                                        
                                        if (temp0_180 s< 0)
                                        label_140295c1f:
                                            arg3[0].o = _mm256_extracti128_si256(arg8, 1)
                                            uint16_t rcx_60[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rcx_60, 7)
                                    else
                                    label_140295cdb:
                                        
                                        if (temp0_180 s< 0)
                                            goto label_140295c1f
                                    
                                    var_980 = zmm3[0].o
                                    arg3[0].o = zmm3[0].o & data_142fc92e0
                                    arg3 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepu16_epi32(arg3[0].o), var_9a0_1)
                                    arg8 = arg3 & arg11
                                    arg3[0].o = zx.o(0)
                                    zmm4 = arg8 & arg13
                                    
                                    if (_mm256_movemask_ps(zmm4) != i)
                                        arg3 = arg8 ^ arg11
                                    
                                    zmm1 = _mm256_blendv_ps(zmm1, arg6, arg8)
                                    arg8 = _mm256_sub_epi32(arg7, zmm5)
                                    arg11 =
                                        __vpcmpgtd_ymmqq_ymmqq_memqq(arg8, var_a40_2) & not.32(arg3)
                                    arg14 = arg11 & arg13
                                    i = _mm256_movemask_ps(arg14)
                                    arg6 = arg7
                                while (i != 0)
                        
                        arg3 = var_540.32
                        
                        if (_mm256_movemask_ps(_mm256_andnot_ps(arg3, arg13)) != 0)
                            arg3 = _mm256_xor_ps(arg3, zmm5)
                            zmm3[0].o = zx.o(0)
                            zmm1 = _mm256_blendv_ps(zmm1, zmm3, arg3)
                            arg6 = __vpaddd_ymmqq_ymmqq_memqq(zmm5, var_680_1)
                            zmm4 = _mm256_cmpgt_epi32(arg6, zmm3)
                            arg7 = zmm4 & arg3
                            arg11 = arg7 & arg13
                            int32_t i_1 = _mm256_movemask_ps(arg11)
                            
                            if (i_1 != 0)
                                do
                                    arg3 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    arg8 = _mm256_add_epi64(arg9, arg3)
                                    char temp0_331 = _mm256_movemask_ps(arg11)
                                    int128_t var_7e0
                                    uint32_t rcx_127
                                    
                                    if ((temp0_331 & 1) != 0)
                                        zmm3[0].o = var_7e0
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                            zx.d(*arg8[0].q), 0)
                                        
                                        if ((temp0_331 & 2) != 0)
                                            rcx_127 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rcx_127, 1)
                                    else
                                        zmm3[0].o = var_7e0
                                        
                                        if ((temp0_331 & 2) != 0)
                                            rcx_127 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rcx_127, 1)
                                    arg3[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_331 & 4) == 0)
                                        arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                                        
                                        if ((temp0_331 & 8) != 0)
                                            goto label_1402964e2
                                        
                                        goto label_1402965e9
                                    
                                    zmm4[0].o = _mm256_extracti128_si256(arg8, 1)
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*zmm4[0].q), 2)
                                    arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                                    
                                    if ((temp0_331 & 8) != 0)
                                    label_1402964e2:
                                        zmm4[0].o = _mm256_extracti128_si256(arg8, 1)
                                        uint16_t rcx_115[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_115, 3)
                                        arg8 = _mm256_add_epi64(arg12, arg3)
                                        
                                        if ((temp0_331 & 0x10) == 0)
                                            goto label_1402965f7
                                        
                                        goto label_14029650c
                                    
                                label_1402965e9:
                                    arg8 = _mm256_add_epi64(arg12, arg3)
                                    
                                    if ((temp0_331 & 0x10) == 0)
                                    label_1402965f7:
                                        
                                        if ((temp0_331 & 0x20) != 0)
                                            goto label_140296521
                                        
                                        goto label_140296601
                                    
                                label_14029650c:
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*arg8[0].q), 4)
                                    
                                    if ((temp0_331 & 0x20) != 0)
                                    label_140296521:
                                        uint32_t rcx_119 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_119, 5)
                                        
                                        if ((temp0_331 & 0x40) == 0)
                                            goto label_14029660b
                                        
                                        goto label_140296533
                                    
                                label_140296601:
                                    
                                    if ((temp0_331 & 0x40) != 0)
                                    label_140296533:
                                        arg3[0].o = _mm256_extracti128_si256(arg8, 1)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                            zx.d(*arg3[0].q), 6)
                                        
                                        if (temp0_331 s< 0)
                                        label_14029654f:
                                            arg3[0].o = _mm256_extracti128_si256(arg8, 1)
                                            uint16_t rcx_123[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rcx_123, 7)
                                    else
                                    label_14029660b:
                                        
                                        if (temp0_331 s< 0)
                                            goto label_14029654f
                                    
                                    var_7e0 = zmm3[0].o
                                    arg3[0].o = zmm3[0].o & data_142fc92e0
                                    arg3 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepu16_epi32(arg3[0].o), var_9a0_1)
                                    arg8 = arg3 & not.32(arg7)
                                    arg3[0].o = zx.o(0)
                                    zmm4 = arg8 & arg13
                                    int32_t temp0_339 = _mm256_movemask_ps(zmm4)
                                    arg11[0].o = zx.o(0)
                                    
                                    if (temp0_339 != i_1)
                                        arg11 = arg8 ^ arg7
                                    
                                    zmm1 = _mm256_blendv_ps(zmm1, arg6, arg8)
                                    arg6 = _mm256_add_epi32(arg6, zmm5)
                                    arg3 = _mm256_cmpgt_epi32(arg6, arg3)
                                    arg7 = arg3 & arg11
                                    arg11 = arg7 & arg13
                                    i_1 = _mm256_movemask_ps(arg11)
                                while (i_1 != 0)
                        
                        int128_t var_730
                        arg3[0].o = var_730
                        arg8 = _mm256_blendv_ps(var_9c0_1, zmm1, arg13)
                        arg6 = _mm256_add_epi64(arg9, _mm256_cvtepi32_epi64(arg8[0].o))
                        
                        if ((r12_1 & 1) == 0)
                            arg11 = var_6e0_1
                            arg14 = var_700_1
                            
                            if ((r12_1 & 2) != 0)
                                goto label_14029532e
                            
                            goto label_1402966c3
                        
                        arg3[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*arg6[0].q), 0)
                        arg11 = var_6e0_1
                        arg14 = var_700_1
                        
                        if ((r12_1 & 2) != 0)
                        label_14029532e:
                            uint16_t rcx_11[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rcx_11, 1)
                            zmm1[0].o = _mm256_extracti128_si256(arg8, 1)
                            
                            if ((r12_1 & 4) == 0)
                                goto label_1402966d3
                            
                            goto label_140295346
                        
                    label_1402966c3:
                        zmm1[0].o = _mm256_extracti128_si256(arg8, 1)
                        int128_t var_5a0
                        
                        if ((r12_1 & 4) == 0)
                        label_1402966d3:
                            zmm3[0].o = var_5a0
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((r12_1 & 8) != 0)
                                goto label_140295379
                            
                            goto label_1402966eb
                        
                    label_140295346:
                        zmm3[0].o = arg3[0].o
                        arg3[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg3[0].o = zmm3[0].o
                        arg3[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*arg3[0].q), 2)
                        zmm3[0].o = var_5a0
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((r12_1 & 8) != 0)
                        label_140295379:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint16_t rcx_15[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rcx_15, 3)
                            arg6 = _mm256_add_epi64(arg12, zmm1)
                            
                            if ((r12_1 & 0x10) == 0)
                                goto label_1402966f9
                            
                            goto label_1402953a3
                        
                    label_1402966eb:
                        arg6 = _mm256_add_epi64(arg12, zmm1)
                        
                        if ((r12_1 & 0x10) != 0)
                        label_1402953a3:
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*arg6[0].q), 4)
                            
                            if ((r12_1 & 0x20) != 0)
                            label_1402953b8:
                                uint16_t rcx_19[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rcx_19, 5)
                                
                                if ((r12_1 & 0x40) == 0)
                                    goto label_14029670d
                                
                                goto label_1402953ca
                        else
                        label_1402966f9:
                            
                            if ((r12_1 & 0x20) != 0)
                                goto label_1402953b8
                        
                        if ((r12_1 & 0x40) != 0)
                        label_1402953ca:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*zmm1[0].q), 6)
                            zmm1 = var_a40_2
                            
                            if (temp0_92.b s< 0)
                            label_1402953eb:
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                uint16_t rcx_23[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rcx_23, 7)
                        else
                        label_14029670d:
                            zmm1 = var_a40_2
                            
                            if (temp0_92.b s< 0)
                                goto label_1402953eb
                        
                        arg7 = _mm256_blendv_ps(var_9e0_1, _mm256_sub_epi32(arg8, zmm5), arg13)
                        arg6 = _mm256_cmpgt_epi32(arg7, zmm1) & arg13
                        
                        if (_mm256_movemask_ps(arg6) != 0)
                            arg7 = _mm256_blendv_ps(arg7, zmm1, arg6)
                        
                        arg13 = var_a00_1
                        arg6 = _mm256_add_epi64(arg9, _mm256_cvtepi32_epi64(arg7[0].o))
                        
                        if ((r12_1 & 1) == 0)
                            arg12 = var_860
                            
                            if ((r12_1 & 2) != 0)
                                goto label_14029542a
                            
                            goto label_140296768
                        
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*arg6[0].q), 0)
                        arg12 = var_860
                        
                        if ((r12_1 & 2) != 0)
                        label_14029542a:
                            uint16_t rcx_27[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_27, 1)
                            zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                            var_730 = arg3[0].o
                            
                            if ((r12_1 & 4) == 0)
                                goto label_140296781
                            
                            goto label_14029544b
                        
                    label_140296768:
                        zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                        var_730 = arg3[0].o
                        
                        if ((r12_1 & 4) == 0)
                        label_140296781:
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((r12_1 & 8) != 0)
                                goto label_140295476
                            
                            goto label_140296790
                        
                    label_14029544b:
                        arg3[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg3[0].o = var_730
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*arg3[0].q), 2)
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((r12_1 & 8) != 0)
                        label_140295476:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint16_t rcx_31[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_31, 3)
                            arg6 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_6c0_1)
                            
                            if ((r12_1 & 0x10) == 0)
                                goto label_1402967a3
                            
                            goto label_1402954a5
                        
                    label_140296790:
                        arg6 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_6c0_1)
                        
                        if ((r12_1 & 0x10) != 0)
                        label_1402954a5:
                            zmm3[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*arg6[0].q), 4)
                            arg9 = var_580_1
                            
                            if ((r12_1 & 0x20) != 0)
                            label_1402954c3:
                                uint16_t rcx_35[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_35, 5)
                                
                                if ((r12_1 & 0x40) == 0)
                                    goto label_1402967c7
                                
                                goto label_1402954d5
                        else
                        label_1402967a3:
                            arg9 = var_580_1
                            
                            if ((r12_1 & 0x20) != 0)
                                goto label_1402954c3
                        
                        if ((r12_1 & 0x40) != 0)
                        label_1402954d5:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            zmm3[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*zmm1[0].q), 6)
                            zmm1[0].o = arg3[0].o & data_142fc92e0
                            
                            if (temp0_92.b s< 0)
                            label_140295500:
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                uint16_t rcx_39[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_39, 7)
                        else
                        label_1402967c7:
                            zmm1[0].o = arg3[0].o & data_142fc92e0
                            
                            if (temp0_92.b s< 0)
                                goto label_140295500
                        
                        var_540 = arg16[0].o
                        arg6 = _mm256_cvtepu16_epi32(zmm1[0].o)
                        var_5a0 = zmm3[0].o
                        zmm1[0].o = zmm3[0].o & data_142fc92e0
                        zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                        zmm3 = __vxorps_ymmqq_ymmqq_memqq(zmm5, var_6a0_1)
                        arg3[0].o = zx.o(0)
                        
                        if (arg19 != 1)
                        label_140296816:
                            zmm1 =
                                __vpmaxsd_ymmqq_ymmqq_memqq(_mm256_sub_epi32(zmm1, arg6), var_820_1)
                            arg6 = _mm256_sub_ps(var_340_1, _mm256_cvtepi32_ps(arg6))
                            zmm1 = _mm256_cvtepi32_ps(zmm1)
                            arg3 = _mm256_div_ps(arg6, zmm1)
                    else
                        zmm1 = _mm256_add_epi32(arg16, arg16)
                        arg6 = _mm256_add_epi64(arg9, _mm256_cvtepi32_epi64(zmm1[0].o))
                        char rsi_1 = temp0_92.b
                        int128_t var_4f0
                        zmm4[0].o = var_4f0
                        
                        if ((rsi_1 & 1) == 0)
                            arg15 = arg12
                            arg12 = var_6c0_1
                            
                            if ((rsi_1 & 2) != 0)
                                goto label_140295d6e
                            
                            goto label_140295802
                        
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg6[0].q, 0)
                        arg15 = arg12
                        arg12 = var_6c0_1
                        
                        if ((rsi_1 & 2) != 0)
                        label_140295d6e:
                            int64_t rcx_67 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_67, 1)
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            
                            if ((rsi_1 & 4) == 0)
                                goto label_140295812
                            
                            goto label_140295d89
                        
                    label_140295802:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((rsi_1 & 4) == 0)
                        label_140295812:
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((rsi_1 & 8) != 0)
                                goto label_140295da8
                            
                            goto label_140295821
                        
                    label_140295d89:
                        arg3[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg3[0].q, 2)
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rsi_1 & 8) != 0)
                        label_140295da8:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            int64_t rcx_69 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_69, 3)
                            arg6 = _mm256_add_epi64(arg12, zmm1)
                            
                            if ((rsi_1 & 0x10) == 0)
                                goto label_14029582f
                            
                            goto label_140295dcc
                        
                    label_140295821:
                        arg6 = _mm256_add_epi64(arg12, zmm1)
                        
                        if ((rsi_1 & 0x10) == 0)
                        label_14029582f:
                            
                            if ((rsi_1 & 0x20) != 0)
                                goto label_140295ddb
                            
                            goto label_140295839
                        
                    label_140295dcc:
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg6[0].q, 4)
                        
                        if ((rsi_1 & 0x20) != 0)
                        label_140295ddb:
                            int64_t rcx_71 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_71, 5)
                            
                            if ((rsi_1 & 0x40) == 0)
                                goto label_140295843
                            
                            goto label_140295df0
                        
                    label_140295839:
                        
                        if ((rsi_1 & 0x40) != 0)
                        label_140295df0:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm1[0].q, 6)
                            
                            if (temp0_92.b s< 0)
                            label_140295e09:
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                int64_t rcx_73 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_73, 7)
                        else
                        label_140295843:
                            
                            if (temp0_92.b s< 0)
                                goto label_140295e09
                        
                        arg6 = __vpcmpgtd_ymmqq_ymmqq_memqq(_mm256_cvtepu16_epi32(zmm4[0].o), 
                            var_9a0_1)
                        arg14 = arg6 ^ zmm5
                        bool cond:11_1 = _mm256_movemask_ps(arg6 & not.32(arg13)) == 0
                        var_4f0 = zmm4[0].o
                        int64_t var_320_1[0x4] = arg14
                        
                        if (cond:11_1)
                            zmm1 = arg16
                            arg16 = var_9a0_1
                        else
                            arg3 = var_a40_2
                            zmm1 = _mm256_blendv_ps(arg16, arg3, arg14)
                            arg8 = _mm256_sub_epi32(arg16, zmm5)
                            arg11 = arg6 & not.32(_mm256_cmpgt_epi32(arg8, arg3) ^ zmm5)
                            arg14 = arg13 & arg11
                            int32_t i_2 = _mm256_movemask_ps(arg14)
                            
                            if (i_2 == 0)
                                arg16 = var_9a0_1
                            else
                                arg6 = arg16
                                arg16 = var_9a0_1
                                
                                do
                                    zmm5 = arg16
                                    arg7 = arg8
                                    arg16 = _mm256_add_epi32(arg8, arg8)
                                    arg3 = _mm256_cvtepi32_epi64(arg16[0].o)
                                    arg8 = _mm256_add_epi64(arg9, arg3)
                                    char temp0_136 = _mm256_movemask_ps(arg14)
                                    int128_t var_920
                                    int64_t rbx_10
                                    
                                    if ((temp0_136 & 1) != 0)
                                        zmm3[0].o = var_920
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *arg8[0].q, 0)
                                        
                                        if ((temp0_136 & 2) != 0)
                                            rbx_10 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rbx_10, 1)
                                    else
                                        zmm3[0].o = var_920
                                        
                                        if ((temp0_136 & 2) != 0)
                                            rbx_10 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rbx_10, 1)
                                    arg3[0].o = _mm256_extracti128_si256(arg16, 1)
                                    
                                    if ((temp0_136 & 4) != 0)
                                        zmm4[0].o = _mm256_extracti128_si256(arg8, 1)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *zmm4[0].q, 2)
                                    
                                    arg16 = zmm5
                                    arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                                    zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
                                    
                                    if ((temp0_136 & 8) == 0)
                                        arg8 = _mm256_add_epi64(arg12, arg3)
                                        
                                        if ((temp0_136 & 0x10) != 0)
                                            goto label_1402958e3
                                        
                                        goto label_1402959d1
                                    
                                    zmm4[0].o = _mm256_extracti128_si256(arg8, 1)
                                    uint16_t* rbx_5 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rbx_5, 3)
                                    arg8 = _mm256_add_epi64(arg12, arg3)
                                    
                                    if ((temp0_136 & 0x10) != 0)
                                    label_1402958e3:
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *arg8[0].q, 4)
                                        
                                        if ((temp0_136 & 0x20) == 0)
                                            goto label_1402959da
                                        
                                        goto label_1402958f1
                                    
                                label_1402959d1:
                                    
                                    if ((temp0_136 & 0x20) == 0)
                                    label_1402959da:
                                        
                                        if ((temp0_136 & 0x40) != 0)
                                            goto label_140295905
                                        
                                        goto label_1402959e3
                                    
                                label_1402958f1:
                                    int64_t rbx_7 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rbx_7, 5)
                                    
                                    if ((temp0_136 & 0x40) == 0)
                                    label_1402959e3:
                                        
                                        if (temp0_136 s< 0)
                                        label_14029591d:
                                            arg3[0].o = _mm256_extracti128_si256(arg8, 1)
                                            uint16_t* rcx_45 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rcx_45, 7)
                                    else
                                    label_140295905:
                                        arg3[0].o = _mm256_extracti128_si256(arg8, 1)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *arg3[0].q, 6)
                                        
                                        if (temp0_136 s< 0)
                                            goto label_14029591d
                                    
                                    var_920 = zmm3[0].o
                                    arg3 =
                                        _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm3[0].o), arg16)
                                    arg8 = arg3 & arg11
                                    arg3[0].o = zx.o(0)
                                    zmm4 = arg8 & arg13
                                    
                                    if (_mm256_movemask_ps(zmm4) != i_2)
                                        arg3 = arg8 ^ arg11
                                    
                                    zmm1 = _mm256_blendv_ps(zmm1, arg6, arg8)
                                    arg8 = _mm256_sub_epi32(arg7, zmm5)
                                    arg11 =
                                        __vpcmpgtd_ymmqq_ymmqq_memqq(arg8, var_a40_2) & not.32(arg3)
                                    arg14 = arg11 & arg13
                                    i_2 = _mm256_movemask_ps(arg14)
                                    arg6 = arg7
                                while (i_2 != 0)
                        
                        arg3 = var_320_1
                        
                        if (_mm256_movemask_ps(_mm256_andnot_ps(arg3, arg13)) != 0)
                            arg3 = _mm256_xor_ps(arg3, zmm5)
                            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                            zmm1 = _mm256_blendv_ps(zmm1, zmm4, arg3)
                            arg6 = __vpaddd_ymmqq_ymmqq_memqq(zmm5, var_680_1)
                            zmm4 = _mm256_cmpgt_epi32(arg6, zmm4)
                            arg7 = zmm4 & arg3
                            arg11 = arg7 & arg13
                            int32_t i_3 = _mm256_movemask_ps(arg11)
                            
                            if (i_3 != 0)
                                do
                                    arg14 = _mm256_add_epi32(arg6, arg6)
                                    arg3 = _mm256_cvtepi32_epi64(arg14[0].o)
                                    arg8 = _mm256_add_epi64(arg9, arg3)
                                    char temp0_246 = _mm256_movemask_ps(arg11)
                                    int128_t var_800
                                    int64_t rbx_18
                                    
                                    if ((temp0_246 & 1) != 0)
                                        zmm3[0].o = var_800
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *arg8[0].q, 0)
                                        
                                        if ((temp0_246 & 2) != 0)
                                            rbx_18 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rbx_18, 1)
                                    else
                                        zmm3[0].o = var_800
                                        
                                        if ((temp0_246 & 2) != 0)
                                            rbx_18 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rbx_18, 1)
                                    arg3[0].o = _mm256_extracti128_si256(arg14, 1)
                                    
                                    if ((temp0_246 & 4) == 0)
                                        arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                                        
                                        if ((temp0_246 & 8) != 0)
                                            goto label_140295f8e
                                        
                                        goto label_140296080
                                    
                                    zmm4[0].o = _mm256_extracti128_si256(arg8, 1)
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm4[0].q, 2)
                                    arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                                    
                                    if ((temp0_246 & 8) != 0)
                                    label_140295f8e:
                                        zmm4[0].o = _mm256_extracti128_si256(arg8, 1)
                                        uint16_t* rbx_13 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rbx_13, 3)
                                        arg8 = _mm256_add_epi64(arg12, arg3)
                                        
                                        if ((temp0_246 & 0x10) == 0)
                                            goto label_14029608d
                                        
                                        goto label_140295fb1
                                    
                                label_140296080:
                                    arg8 = _mm256_add_epi64(arg12, arg3)
                                    
                                    if ((temp0_246 & 0x10) == 0)
                                    label_14029608d:
                                        
                                        if ((temp0_246 & 0x20) != 0)
                                            goto label_140295fbf
                                        
                                        goto label_140296096
                                    
                                label_140295fb1:
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *arg8[0].q, 4)
                                    
                                    if ((temp0_246 & 0x20) != 0)
                                    label_140295fbf:
                                        int64_t rbx_15 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rbx_15, 5)
                                        
                                        if ((temp0_246 & 0x40) == 0)
                                            goto label_14029609f
                                        
                                        goto label_140295fd3
                                    
                                label_140296096:
                                    
                                    if ((temp0_246 & 0x40) != 0)
                                    label_140295fd3:
                                        arg3[0].o = _mm256_extracti128_si256(arg8, 1)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *arg3[0].q, 6)
                                        
                                        if (temp0_246 s< 0)
                                        label_140295feb:
                                            arg3[0].o = _mm256_extracti128_si256(arg8, 1)
                                            uint16_t* rcx_91 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rcx_91, 7)
                                    else
                                    label_14029609f:
                                        
                                        if (temp0_246 s< 0)
                                            goto label_140295feb
                                    
                                    var_800 = zmm3[0].o
                                    arg3 =
                                        _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm3[0].o), arg16)
                                    arg8 = arg3 & not.32(arg7)
                                    arg3[0].o = zx.o(0)
                                    zmm4 = arg8 & arg13
                                    int32_t temp0_254 = _mm256_movemask_ps(zmm4)
                                    arg11[0].o = zx.o(0)
                                    
                                    if (temp0_254 != i_3)
                                        arg11 = arg8 ^ arg7
                                    
                                    zmm1 = _mm256_blendv_ps(zmm1, arg6, arg8)
                                    arg6 = _mm256_add_epi32(arg6, zmm5)
                                    arg3 = _mm256_cmpgt_epi32(arg6, arg3)
                                    arg7 = arg3 & arg11
                                    arg11 = arg7 & arg13
                                    i_3 = _mm256_movemask_ps(arg11)
                                while (i_3 != 0)
                        
                        int128_t var_5b0
                        arg3[0].o = var_5b0
                        arg8 = _mm256_blendv_ps(var_9c0_1, zmm1, arg13)
                        zmm1 = _mm256_add_epi32(arg8, arg8)
                        arg6 = _mm256_add_epi64(arg9, _mm256_cvtepi32_epi64(zmm1[0].o))
                        
                        if ((rsi_1 & 1) == 0)
                            arg11 = var_6e0_1
                            arg14 = var_700_1
                            
                            if ((rsi_1 & 2) != 0)
                                goto label_1402962b0
                            
                            goto label_14029614e
                        
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg6[0].q, 0)
                        arg11 = var_6e0_1
                        arg14 = var_700_1
                        
                        if ((rsi_1 & 2) != 0)
                        label_1402962b0:
                            int64_t rcx_96 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rcx_96, 1)
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            
                            if ((rsi_1 & 4) == 0)
                                goto label_14029615e
                            
                            goto label_1402962cb
                        
                    label_14029614e:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        int128_t var_590
                        
                        if ((rsi_1 & 4) == 0)
                        label_14029615e:
                            zmm3[0].o = var_590
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((rsi_1 & 8) != 0)
                                goto label_1402962fb
                            
                            goto label_140296176
                        
                    label_1402962cb:
                        zmm3[0].o = arg3[0].o
                        arg3[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg3[0].o = zmm3[0].o
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *arg3[0].q, 2)
                        zmm3[0].o = var_590
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rsi_1 & 8) != 0)
                        label_1402962fb:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            int64_t rcx_98 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rcx_98, 3)
                            arg6 = _mm256_add_epi64(arg12, zmm1)
                            
                            if ((rsi_1 & 0x10) == 0)
                                goto label_140296184
                            
                            goto label_14029631f
                        
                    label_140296176:
                        arg6 = _mm256_add_epi64(arg12, zmm1)
                        
                        if ((rsi_1 & 0x10) != 0)
                        label_14029631f:
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg6[0].q, 4)
                            
                            if ((rsi_1 & 0x20) != 0)
                            label_14029632e:
                                int64_t rcx_100 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rcx_100, 5)
                                
                                if ((rsi_1 & 0x40) == 0)
                                    goto label_140296198
                                
                                goto label_140296343
                        else
                        label_140296184:
                            
                            if ((rsi_1 & 0x20) != 0)
                                goto label_14029632e
                        
                        if ((rsi_1 & 0x40) != 0)
                        label_140296343:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 6)
                            zmm1 = var_a40_2
                            
                            if (temp0_92.b s< 0)
                            label_140296361:
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                int64_t rcx_102 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rcx_102, 7)
                        else
                        label_140296198:
                            zmm1 = var_a40_2
                            
                            if (temp0_92.b s< 0)
                                goto label_140296361
                        
                        arg7 = _mm256_blendv_ps(var_9e0_1, _mm256_sub_epi32(arg8, zmm5), arg13)
                        arg6 = _mm256_cmpgt_epi32(arg7, zmm1) & arg13
                        
                        if (_mm256_movemask_ps(arg6) != 0)
                            arg7 = _mm256_blendv_ps(arg7, zmm1, arg6)
                        
                        arg13 = var_a00_1
                        zmm1 = _mm256_add_epi32(arg7, arg7)
                        arg6 = _mm256_add_epi64(arg9, _mm256_cvtepi32_epi64(zmm1[0].o))
                        
                        if ((rsi_1 & 1) == 0)
                            arg12 = var_860
                            
                            if ((rsi_1 & 2) != 0)
                                goto label_140296394
                            
                            goto label_1402961f7
                        
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *arg6[0].q, 0)
                        arg12 = var_860
                        
                        if ((rsi_1 & 2) != 0)
                        label_140296394:
                            uint16_t* rcx_104 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rcx_104, 1)
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            
                            if ((rsi_1 & 4) == 0)
                                goto label_140296207
                            
                            goto label_1402963af
                        
                    label_1402961f7:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((rsi_1 & 4) == 0)
                        label_140296207:
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((rsi_1 & 8) != 0)
                                goto label_1402963de
                            
                            goto label_140296216
                        
                    label_1402963af:
                        zmm4[0].o = zmm3[0].o
                        zmm3[0].o = arg3[0].o
                        arg3[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg3[0].o = zmm3[0].o
                        zmm3[0].o = zmm4[0].o
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg3[0].q, 2)
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rsi_1 & 8) != 0)
                        label_1402963de:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint16_t* rcx_106 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rcx_106, 3)
                            arg6 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_6c0_1)
                            
                            if ((rsi_1 & 0x10) == 0)
                                goto label_140296229
                            
                            goto label_140296407
                        
                    label_140296216:
                        arg6 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_6c0_1)
                        
                        if ((rsi_1 & 0x10) == 0)
                        label_140296229:
                            arg9 = var_580_1
                            
                            if ((rsi_1 & 0x20) != 0)
                                goto label_14029641f
                            
                            goto label_14029623c
                        
                    label_140296407:
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *arg6[0].q, 4)
                        arg9 = var_580_1
                        
                        if ((rsi_1 & 0x20) != 0)
                        label_14029641f:
                            uint16_t* rcx_108 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rcx_108, 5)
                            
                            if ((rsi_1 & 0x40) == 0)
                                goto label_140296246
                            
                            goto label_140296434
                        
                    label_14029623c:
                        
                        if ((rsi_1 & 0x40) != 0)
                        label_140296434:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm1[0].q, 6)
                            
                            if (temp0_92.b s< 0)
                            label_14029644d:
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                int64_t rcx_110 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rcx_110, 7)
                        else
                        label_140296246:
                            
                            if (temp0_92.b s< 0)
                                goto label_14029644d
                        
                        var_5b0 = arg3[0].o
                        arg6 = _mm256_cvtepu16_epi32(arg3[0].o)
                        var_590 = zmm3[0].o
                        zmm1 = _mm256_cvtepu16_epi32(zmm3[0].o)
                        zmm3 = __vxorps_ymmqq_ymmqq_memqq(zmm5, var_6a0_1)
                        arg3[0].o = zx.o(0)
                        
                        if (arg19 != 1)
                            goto label_140296816
                    
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    arg6 = _mm256_blendv_ps(arg6, arg3, zmm3)
                    var_a40_1 = arg6
            
            uint64_t r15_2 = zx.q(var_a08)
            var_9e0 = arg7
            var_9c0 = arg8
            
            if (var_a08 u> 5)
                arg6[0].o = zx.o(0)
                var_640 = _mm256_maskstore_ps(arg15, arg6)
                var_620 = _mm256_maskstore_ps(arg15, arg6)
                var_600 = _mm256_maskstore_ps(arg15, arg6)
                var_5e0 = _mm256_maskstore_ps(arg15, _mm256_broadcast_ss(1f))
            else
                arg6 = __vpmulld_ymmqq_ymmqq_memqq(arg8, var_660_1)
                
                switch (r15_2)
                    case 0
                        zmm1 = data_143442de0
                        arg3 = zmm1
                        zmm1 = __vpermd_ymmqq_ymmqq_memqq(zmm1, var_940_1)
                        arg3 = _mm256_permutevar8x32_epi32(arg3, arg14)
                        arg6 = _mm256_add_epi32(arg6, _mm256_inserti128_si256(zmm1, arg3[0].o, 1))
                        arg3[0].o = zx.o(0)
                        int32_t temp0_376
                        int32_t temp1_10
                        temp0_376, temp1_10 = _mm256_i32gather_ps(arg3, *(r9 + arg6[0].q), arg15)
                        arg3 = temp0_376
                        zmm1 = _mm256_add_epi32(arg6, arg12)
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int32_t temp0_379
                        int32_t temp1_11
                        temp0_379, temp1_11 = _mm256_i32gather_ps(zmm5, *(r9 + zmm1[0].q), arg15)
                        zmm5 = temp0_379
                        zmm1 = _mm256_add_epi32(arg6, arg13)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int32_t temp0_382
                        int32_t temp1_12
                        temp0_382, temp1_12 = _mm256_i32gather_ps(arg7, *(r9 + zmm1[0].q), arg15)
                        zmm4 = temp1_12
                        arg6 = __vpaddd_ymmqq_ymmqq_memqq(arg6, var_840_1)
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        int32_t temp0_385
                        int32_t temp1_13
                        temp0_385, temp1_13 = _mm256_i32gather_ps(zmm4, *(r9 + arg6[0].q), arg15)
                        zmm4 = temp0_385
                        var_640 = _mm256_maskstore_ps(arg15, arg3)
                        var_620 = _mm256_maskstore_ps(arg15, zmm5)
                        var_600 = _mm256_maskstore_ps(arg15, temp0_382)
                        arg7 = var_9e0
                        var_5e0 = _mm256_maskstore_ps(arg15, zmm4)
                    case 1
                        zmm1 = data_143442de0
                        arg3 = zmm1
                        zmm1 = __vpermd_ymmqq_ymmqq_memqq(zmm1, var_940_1)
                        arg3 = _mm256_permutevar8x32_epi32(arg3, arg14)
                        arg6 = _mm256_add_epi32(arg6, _mm256_inserti128_si256(zmm1, arg3[0].o, 1))
                        arg3[0].o = zx.o(0)
                        int32_t temp0_397
                        int32_t temp1_14
                        temp0_397, temp1_14 = _mm256_i32gather_ps(arg3, *(r9 + arg6[0].q), arg15)
                        arg3 = temp0_397
                        zmm1 = _mm256_add_epi32(arg6, arg12)
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int32_t temp0_400
                        int32_t temp1_15
                        temp0_400, temp1_15 = _mm256_i32gather_ps(zmm5, *(r9 + zmm1[0].q), arg15)
                        zmm5 = temp0_400
                        zmm4 = temp1_15
                        arg6 = _mm256_add_epi32(arg6, arg13)
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        int32_t temp0_403
                        int32_t temp1_16
                        temp0_403, temp1_16 = _mm256_i32gather_ps(zmm4, *(r9 + arg6[0].q), arg15)
                        zmm4 = temp0_403
                        zmm1 = temp1_16
                        arg6 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg3, arg3), 
                                zmm5, zmm5), 
                            zmm4, zmm4)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        arg6 = _mm256_and_ps(_mm256_cmp_ps(zmm1, arg6, 1), _mm256_sqrt_ps(arg6))
                        var_640 = _mm256_maskstore_ps(arg15, arg3)
                        var_620 = _mm256_maskstore_ps(arg15, zmm5)
                        var_600 = _mm256_maskstore_ps(arg15, zmm4)
                        var_5e0 = _mm256_maskstore_ps(arg15, arg6)
                    case 2
                        zmm1 = data_143442de0
                        zmm1 = _mm256_add_epi32(arg6, 
                            _mm256_inserti128_si256(__vpermd_ymmqq_ymmqq_memqq(zmm1, var_940_1), 
                                _mm256_permutevar8x32_epi32(zmm1, arg14)[0].o, 1))
                        zmm3[0].o = zx.o(0)
                        arg6 = _mm256_blendv_ps(zmm3, zmm1, arg15)
                        float rsi_4 = arg6[0]
                        int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        int64_t rbx_20 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                        int64_t rcx_132 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        float rdi_6 = arg6[0]
                        int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        int64_t r13_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                        int64_t r14_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = zx.o(*(r9 + sx.q(rsi_4)))
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r12_2), 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rbx_20), 2)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rcx_132), 3)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + sx.q(rdi_6)), 4)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r10_2), 5)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r13_6), 6)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r14_2), 7)
                        arg3 = _mm256_blendv_ps(zmm3, _mm256_add_epi32(zmm1, arg11), arg15)
                        float rcx_133 = arg3[0]
                        int64_t r10_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1))
                        int64_t r14_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2))
                        int64_t r13_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3))
                        arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                        float rbx_22 = arg3[0]
                        int64_t r8_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1))
                        int64_t rcx_135 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2))
                        int64_t rsi_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3))
                        arg3[0].o = zx.o(*(r9 + sx.q(rcx_133)))
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r10_3), 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r14_3), 2)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r13_7), 3)
                        arg3[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + sx.q(rbx_22)), 4)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r8_1), 5)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + rcx_135), 6)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + rsi_9), 7)
                        zmm1 = _mm256_blendv_ps(zmm3, _mm256_add_epi32(zmm1, arg12), arg15)
                        int64_t r8_2 = sx.q(zmm1[0])
                        int64_t r10_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        int32_t temp0_454 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                        int64_t r14_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        int64_t r13_8 = sx.q(zmm1[0])
                        int64_t rcx_138 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        int32_t temp0_458 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                        int64_t r12_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = zx.o(*(r9 + r8_2))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + r10_4), 1)
                        rdx_3 = var_870_1
                        r8 = var_868_1
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + sx.q(temp0_454)), 2)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + r14_4), 3)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + r13_8), 4)
                        r13_4 = var_944_1
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + rcx_138), 5)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + sx.q(temp0_458)), 6)
                        arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                        arg3 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg3))
                        zmm4 = _mm256_broadcast_ss(32767f)
                        arg6 = _mm256_div_ps(arg6, zmm4)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + r12_4), 7)
                        zmm5 = _mm256_cvtepu16_epi32(arg7[0].o)
                        arg7 = var_9e0
                        zmm5 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm5, arg3)), zmm4)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                arg3)), 
                            zmm4)
                        arg3 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), 
                                zmm5, zmm5), 
                            zmm1, zmm1)
                        zmm4 = _mm256_cmp_ps(zmm3, arg3, 1)
                        arg3 = _mm256_and_ps(zmm4, _mm256_sqrt_ps(arg3))
                        var_640 = _mm256_maskstore_ps(arg15, arg6)
                        var_620 = _mm256_maskstore_ps(arg15, zmm5)
                        var_600 = _mm256_maskstore_ps(arg15, zmm1)
                        var_5e0 = _mm256_maskstore_ps(arg15, arg3)
                    case 3
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        int32_t temp0_493
                        int32_t temp1_17
                        temp0_493, temp1_17 = _mm256_i32gather_ps(zmm1, *(r9 + arg9[0].q), arg15)
                        arg3 = _mm256_add_epi32(arg9, arg12)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int32_t temp0_496
                        int32_t temp1_18
                        temp0_496, temp1_18 = _mm256_i32gather_ps(arg7, *(r9 + arg3[0].q), arg15)
                        arg3 = _mm256_add_epi32(arg9, arg13)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int32_t temp0_499
                        int32_t temp1_19
                        temp0_499, temp1_19 = _mm256_i32gather_ps(arg8, *(r9 + arg3[0].q), arg15)
                        arg3 = __vpaddd_ymmqq_ymmqq_memqq(arg9, var_840_1)
                        arg11[0].o = zx.o(0)
                        int32_t temp0_501
                        int32_t temp1_20
                        temp0_501, temp1_20 = _mm256_i32gather_ps(arg11, *(r9 + arg3[0].q), arg15)
                        arg3 = _mm256_add_epi32(arg9, __vpbroadcastd_ymmqq_memd(0x10))
                        arg12[0].o = zx.o(0)
                        int32_t temp0_504
                        int32_t temp1_21
                        temp0_504, temp1_21 = _mm256_i32gather_ps(arg12, *(r9 + arg3[0].q), arg15)
                        arg3 = _mm256_add_epi32(arg9, __vpbroadcastd_ymmqq_memd(0x14))
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int32_t temp0_508
                        int32_t temp1_22
                        temp0_508, temp1_22 = _mm256_i32gather_ps(zmm5, *(r9 + arg3[0].q), arg15)
                        arg3 = __vpaddd_ymmqq_ymmqq_memqq(arg9, var_720_1)
                        arg6 = _mm256_add_epi32(arg3, arg6)
                        arg3[0].o = zx.o(0)
                        int32_t temp0_511
                        int32_t temp1_23
                        temp0_511, temp1_23 = _mm256_i32gather_epi32(arg3, *(r9 + arg6[0].q), arg15)
                        arg3 = temp0_511
                        arg6 = _mm256_srli_epi32(arg3, 0x15)
                        zmm4 = _mm256_srli_epi32(arg3, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg13 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg13))
                        zmm4 = _mm256_add_epi32(zmm4, arg13)
                        arg13 = _mm256_broadcast_ss(1023f)
                        arg6 = _mm256_div_ps(arg6, arg13)
                        zmm4 = _mm256_div_ps(_mm256_cvtepi32_ps(zmm4), arg13)
                        arg3 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                arg3 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg13 = var_a00_1
                        arg6 = _mm256_fmadd_ps(arg6, temp0_501, temp0_493)
                        zmm4 = _mm256_fmadd_ps(zmm4, temp0_504, temp0_496)
                        zmm3[0].o = zx.o(0)
                        arg7 = var_9e0
                        arg12 = var_860
                        arg3 = _mm256_fmadd_ps(arg3, temp0_508, temp0_499)
                        arg8 = var_9c0
                        zmm1 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), 
                                zmm4, zmm4), 
                            arg3, arg3)
                        zmm5 = _mm256_cmp_ps(zmm3, zmm1, 1)
                        zmm1 = _mm256_and_ps(zmm5, _mm256_sqrt_ps(zmm1))
                        var_640 = _mm256_maskstore_ps(arg15, arg6)
                        var_620 = _mm256_maskstore_ps(arg15, zmm4)
                        var_600 = _mm256_maskstore_ps(arg15, arg3)
                        var_5e0 = _mm256_maskstore_ps(arg15, zmm1)
                    case 4
                        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(arg9, var_720_1)
                        arg6 = _mm256_add_epi32(zmm1, arg6)
                        zmm1[0].o = zx.o(0)
                        int32_t temp0_545
                        int32_t temp1_24
                        temp0_545, temp1_24 = _mm256_i32gather_epi32(zmm1, *(r9 + arg6[0].q), arg15)
                        zmm1 = temp0_545
                        arg6 = _mm256_srli_epi32(zmm1, 0x15)
                        arg3 = _mm256_srli_epi32(zmm1, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm1 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                        zmm4 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, zmm4))
                        zmm5 = _mm256_broadcast_ss(1023f)
                        arg6 = _mm256_div_ps(arg6, zmm5)
                        arg3 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(arg3, zmm4)), zmm5)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        zmm4 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), 
                                arg3, arg3), 
                            zmm1, zmm1)
                        zmm3[0].o = zx.o(0)
                        zmm5 = _mm256_cmp_ps(zmm3, zmm4, 1)
                    label_140296fd6:
                        zmm4 = _mm256_and_ps(zmm5, _mm256_sqrt_ps(zmm4))
                        var_640 = _mm256_maskstore_ps(arg15, arg6)
                        var_620 = _mm256_maskstore_ps(arg15, arg3)
                        var_600 = _mm256_maskstore_ps(arg15, zmm1)
                        var_5e0 = _mm256_maskstore_ps(arg15, zmm4)
                    case 5
                        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(arg9, var_720_1)
                        arg6 = _mm256_add_epi32(zmm1, arg6)
                        zmm1[0].o = zx.o(0)
                        int32_t temp0_570
                        int32_t temp1_25
                        temp0_570, temp1_25 = _mm256_i32gather_epi32(zmm1, *(r9 + arg6[0].q), arg15)
                        zmm1 = temp0_570
                        arg6 = _mm256_srli_epi32(zmm1, 0x15)
                        arg3 = _mm256_srli_epi32(zmm1, 0xa)
                        zmm4 = _mm256_srli_epi32(zmm1, 5)
                        zmm5 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                        arg7 = __vpbroadcastd_ymmqq_memd(0x400)
                        arg8 = __vpbroadcastd_ymmqq_memd(0x380)
                        arg16 = arg12
                        arg12 = arg14
                        arg14 = arg11
                        arg11 = __vpbroadcastd_ymmqq_memd(0x3d80)
                        arg6 = (zmm4 & zmm5) | (arg6 & arg7) | _mm256_add_epi32(arg6 & arg8, arg11)
                        zmm4 = (_mm256_slli_epi32(zmm1, 6) & zmm5) | (arg3 & arg7)
                        arg3 &= arg8
                        arg8 = var_9c0
                        arg3 = _mm256_add_epi32(arg3, arg11)
                        arg11 = arg14
                        arg14[0].o = zx.o(0)
                        arg3 |= zmm4
                        zmm4 = zmm1 & __vpbroadcastd_ymmqq_memd(0x1c0)
                        arg7 = var_9e0
                        zmm1 = (_mm256_slli_epi32(zmm1, 0x11) & __vpbroadcastd_ymmqq_memd(0x7e0000))
                            | (zmm1 & __vpbroadcastd_ymmqq_memd(0x200))
                            | _mm256_add_epi32(zmm4, __vpbroadcastd_ymmqq_memd(0x1ec0))
                        zmm4 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), 
                                arg3, arg3), 
                            zmm1, zmm1)
                        zmm5 = _mm256_cmp_ps(arg14, zmm4, 1)
                        arg14 = arg12
                        arg12 = arg16
                        goto label_140296fd6
            
            arg6 = _mm256_cmpeq_epi32(arg8, arg7)
            zmm1 = arg6 & not.32(arg15)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                int32_t var_4e0_1[0x8]
                int32_t var_4c0_1[0x8]
                int64_t var_4a0_1[0x4]
                float var_480_1[0x8]
                
                if (var_a08 u> 5)
                    arg6[0].o = zx.o(0)
                    var_4e0_1 = _mm256_maskstore_ps(zmm1, arg6)
                    var_4c0_1 = _mm256_maskstore_ps(zmm1, arg6)
                    var_4a0_1 = _mm256_maskstore_ps(zmm1, arg6)
                    var_480_1 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
                    arg16[0].o = zx.o(0)
                else
                    arg6 = __vpmulld_ymmqq_ymmqq_memqq(arg7, var_660_1)
                    
                    switch (r15_2)
                        case 0
                            arg3 = data_143442de0
                            arg3 = _mm256_inserti128_si256(
                                __vpermd_ymmqq_ymmqq_memqq(arg3, var_940_1), 
                                _mm256_permutevar8x32_epi32(arg3, arg14)[0].o, 1)
                            arg6 = _mm256_add_epi32(arg6, arg3)
                            arg3[0].o = zx.o(0)
                            int32_t temp0_605
                            int32_t temp1_26
                            temp0_605, temp1_26 = _mm256_i32gather_ps(arg3, *(r9 + arg6[0].q), zmm1)
                            zmm4 = _mm256_add_epi32(arg6, arg12)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int32_t temp0_608
                            int32_t temp1_27
                            temp0_608, temp1_27 = _mm256_i32gather_ps(zmm5, *(r9 + zmm4[0].q), zmm1)
                            arg7 = temp1_27
                            zmm4 = _mm256_add_epi32(arg6, arg13)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int32_t temp0_611
                            int32_t temp1_28
                            temp0_611, temp1_28 = _mm256_i32gather_ps(arg7, *(r9 + zmm4[0].q), zmm1)
                            arg6 = __vpaddd_ymmqq_ymmqq_memqq(arg6, var_840_1)
                            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                            int32_t temp0_614
                            int32_t temp1_29
                            temp0_614, temp1_29 = _mm256_i32gather_ps(zmm4, *(r9 + arg6[0].q), zmm1)
                            var_4e0_1 = _mm256_maskstore_ps(zmm1, temp0_605)
                            var_4c0_1 = _mm256_maskstore_ps(zmm1, temp0_608)
                            var_4a0_1 = _mm256_maskstore_ps(zmm1, temp0_611)
                            var_480_1 = _mm256_maskstore_ps(zmm1, temp0_614)
                            arg16[0].o = zx.o(0)
                        case 1
                            arg3 = data_143442de0
                            arg3 = _mm256_inserti128_si256(
                                __vpermd_ymmqq_ymmqq_memqq(arg3, var_940_1), 
                                _mm256_permutevar8x32_epi32(arg3, arg14)[0].o, 1)
                            arg6 = _mm256_add_epi32(arg6, arg3)
                            arg3[0].o = zx.o(0)
                            int32_t temp0_627
                            int32_t temp1_30
                            temp0_627, temp1_30 = _mm256_i32gather_ps(arg3, *(r9 + arg6[0].q), zmm1)
                            arg3 = temp0_627
                            zmm4 = _mm256_add_epi32(arg6, arg12)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int32_t temp0_630
                            int32_t temp1_31
                            temp0_630, temp1_31 = _mm256_i32gather_ps(zmm5, *(r9 + zmm4[0].q), zmm1)
                            zmm5 = temp0_630
                            arg6 = _mm256_add_epi32(arg6, arg13)
                            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                            int32_t temp0_633
                            int32_t temp1_32
                            temp0_633, temp1_32 = _mm256_i32gather_ps(zmm4, *(r9 + arg6[0].q), zmm1)
                            zmm4 = temp0_633
                            arg6 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg3, arg3), zmm5, 
                                    zmm5), 
                                zmm4, zmm4)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            arg6 = _mm256_and_ps(_mm256_cmp_ps(zmm3, arg6, 1), _mm256_sqrt_ps(arg6))
                            var_4e0_1 = _mm256_maskstore_ps(zmm1, arg3)
                            var_4c0_1 = _mm256_maskstore_ps(zmm1, zmm5)
                            var_4a0_1 = _mm256_maskstore_ps(zmm1, zmm4)
                            var_480_1 = _mm256_maskstore_ps(zmm1, arg6)
                            arg16[0].o = zx.o(0)
                        case 2
                            arg3 = data_143442de0
                            arg7 = _mm256_add_epi32(arg6, 
                                _mm256_inserti128_si256(
                                    __vpermd_ymmqq_ymmqq_memqq(arg3, var_940_1), 
                                    _mm256_permutevar8x32_epi32(arg3, arg14)[0].o, 1))
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            arg6 = _mm256_blendv_ps(zmm3, arg7, zmm1)
                            float rcx_142 = arg6[0]
                            int64_t r8_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                            int64_t r10_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                            int64_t r15_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            float rsi_13 = arg6[0]
                            int64_t rdx_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                            int64_t rbx_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                            int64_t rcx_144 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = zx.o(*(r9 + sx.q(rcx_142)))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r8_3), 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r10_5), 2)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r15_3), 3)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + sx.q(rsi_13)), 4)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rdx_7), 5)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rbx_29), 6)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rcx_144), 7)
                            arg3 = _mm256_blendv_ps(zmm3, _mm256_add_epi32(arg7, arg11), zmm1)
                            float rcx_145 = arg3[0]
                            int64_t r8_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1))
                            int64_t r10_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2))
                            int64_t r15_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3))
                            arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                            float rsi_15 = arg3[0]
                            int64_t rdx_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1))
                            int64_t rbx_32 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2))
                            int64_t rcx_147 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3))
                            arg3[0].o = zx.o(*(r9 + sx.q(rcx_145)))
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r8_4), 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r10_6), 2)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r15_4), 3)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + sx.q(rsi_15)), 4)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + rdx_10), 5)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + rbx_32), 6)
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + rcx_147), 7)
                            arg3 = _mm256_blendv_ps(zmm3, _mm256_add_epi32(arg7, arg12), zmm1)
                            int64_t r8_5 = sx.q(arg3[0])
                            int64_t r10_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1))
                            int32_t temp0_685 = __vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2)
                            int64_t r14_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3))
                            arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                            int64_t rsi_18 = sx.q(arg3[0])
                            int64_t rcx_150 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1))
                            int32_t temp0_689 = __vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2)
                            int64_t r15_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3))
                            arg3[0].o = zx.o(*(r9 + r8_5))
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r10_7), 1)
                            rdx_3 = var_870_1
                            r8 = var_868_1
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                *(r9 + sx.q(temp0_685)), 2)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r14_7), 3)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + rsi_18), 4)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + rcx_150), 5)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                *(r9 + sx.q(temp0_689)), 6)
                            arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                            zmm4 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                            arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, zmm4))
                            zmm5 = _mm256_broadcast_ss(32767f)
                            arg6 = _mm256_div_ps(arg6, zmm5)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r15_5), 7)
                            arg7 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg8[0].o), zmm4)), 
                                zmm5)
                            arg3 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg3[0].o), zmm4)), 
                                zmm5)
                            zmm4 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), arg7, 
                                    arg7), 
                                arg3, arg3)
                            zmm4 = _mm256_and_ps(_mm256_cmp_ps(zmm3, zmm4, 1), _mm256_sqrt_ps(zmm4))
                            var_4e0_1 = _mm256_maskstore_ps(zmm1, arg6)
                            var_4c0_1 = _mm256_maskstore_ps(zmm1, arg7)
                            var_4a0_1 = _mm256_maskstore_ps(zmm1, arg3)
                            var_480_1 = _mm256_maskstore_ps(zmm1, zmm4)
                            arg16[0].o = zx.o(0)
                        case 3
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int32_t temp0_724
                            int32_t temp1_33
                            temp0_724, temp1_33 = _mm256_i32gather_ps(arg7, *(r9 + arg9[0].q), zmm1)
                            arg3 = _mm256_add_epi32(arg9, arg12)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            int32_t temp0_727
                            int32_t temp1_34
                            temp0_727, temp1_34 = _mm256_i32gather_ps(arg8, *(r9 + arg3[0].q), zmm1)
                            arg3 = _mm256_add_epi32(arg9, arg13)
                            arg11[0].o = zx.o(0)
                            int32_t temp0_729
                            int32_t temp1_35
                            temp0_729, temp1_35 =
                                _mm256_i32gather_ps(arg11, *(r9 + arg3[0].q), zmm1)
                            arg3 = __vpaddd_ymmqq_ymmqq_memqq(arg9, var_840_1)
                            arg12[0].o = zx.o(0)
                            int32_t temp0_731
                            int32_t temp1_36
                            temp0_731, temp1_36 =
                                _mm256_i32gather_ps(arg12, *(r9 + arg3[0].q), zmm1)
                            arg3 = _mm256_add_epi32(arg9, __vpbroadcastd_ymmqq_memd(0x10))
                            arg13[0].o = zx.o(0)
                            int32_t temp0_734
                            int32_t temp1_37
                            temp0_734, temp1_37 =
                                _mm256_i32gather_ps(arg13, *(r9 + arg3[0].q), zmm1)
                            zmm4 = temp1_37
                            arg3 = _mm256_add_epi32(arg9, __vpbroadcastd_ymmqq_memd(0x14))
                            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                            int32_t temp0_738
                            int32_t temp1_38
                            temp0_738, temp1_38 = _mm256_i32gather_ps(zmm4, *(r9 + arg3[0].q), zmm1)
                            arg3 = __vpaddd_ymmqq_ymmqq_memqq(arg9, var_720_1)
                            arg6 = _mm256_add_epi32(arg3, arg6)
                            arg3[0].o = zx.o(0)
                            int32_t temp0_741
                            int32_t temp1_39
                            temp0_741, temp1_39 =
                                _mm256_i32gather_epi32(arg3, *(r9 + arg6[0].q), zmm1)
                            arg3 = temp0_741
                            arg6 = _mm256_srli_epi32(arg3, 0x15)
                            zmm5 = _mm256_srli_epi32(arg3, 0xa)
                            arg16[0].o = zx.o(0)
                            zmm5 &= __vpbroadcastd_ymmqq_memd(0x7ff)
                            arg14 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg14))
                            zmm5 = _mm256_add_epi32(zmm5, arg14)
                            arg14 = _mm256_broadcast_ss(1023f)
                            arg6 = _mm256_div_ps(arg6, arg14)
                            zmm5 = _mm256_div_ps(_mm256_cvtepi32_ps(zmm5), arg14)
                            arg3 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    arg3 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                    __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                _mm256_broadcast_ss(511f))
                            arg6 = _mm256_fmadd_ps(arg6, temp0_731, temp0_724)
                            zmm5 = _mm256_fmadd_ps(zmm5, temp0_734, temp0_727)
                            arg3 = _mm256_fmadd_ps(arg3, temp0_738, temp0_729)
                            zmm4 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), zmm5, 
                                    zmm5), 
                                arg3, arg3)
                            zmm4 =
                                _mm256_and_ps(_mm256_cmp_ps(arg16, zmm4, 1), _mm256_sqrt_ps(zmm4))
                            var_4e0_1 = _mm256_maskstore_ps(zmm1, arg6)
                            var_4c0_1 = _mm256_maskstore_ps(zmm1, zmm5)
                            var_4a0_1 = _mm256_maskstore_ps(zmm1, arg3)
                            var_480_1 = _mm256_maskstore_ps(zmm1, zmm4)
                        case 4
                            arg3 = __vpaddd_ymmqq_ymmqq_memqq(arg9, var_720_1)
                            arg6 = _mm256_add_epi32(arg3, arg6)
                            arg3[0].o = zx.o(0)
                            int32_t temp0_775
                            int32_t temp1_40
                            temp0_775, temp1_40 =
                                _mm256_i32gather_epi32(arg3, *(r9 + arg6[0].q), zmm1)
                            arg3 = temp0_775
                            arg6 = _mm256_srli_epi32(arg3, 0x15)
                            zmm4 = _mm256_srli_epi32(arg3, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                            arg3 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                            zmm5 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, zmm5))
                            arg7 = _mm256_broadcast_ss(1023f)
                            arg6 = _mm256_div_ps(arg6, arg7)
                            zmm4 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm4, zmm5)), 
                                arg7)
                            arg3 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(arg3, 
                                    __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                _mm256_broadcast_ss(511f))
                        label_1402976ee:
                            zmm5 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), zmm4, 
                                    zmm4), 
                                arg3, arg3)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            zmm5 = _mm256_and_ps(_mm256_cmp_ps(zmm3, zmm5, 1), _mm256_sqrt_ps(zmm5))
                            var_4e0_1 = _mm256_maskstore_ps(zmm1, arg6)
                            var_4c0_1 = _mm256_maskstore_ps(zmm1, zmm4)
                            var_4a0_1 = _mm256_maskstore_ps(zmm1, arg3)
                            var_480_1 = _mm256_maskstore_ps(zmm1, zmm5)
                            arg16[0].o = zx.o(0)
                        case 5
                            arg3 = __vpaddd_ymmqq_ymmqq_memqq(arg9, var_720_1)
                            arg6 = _mm256_add_epi32(arg3, arg6)
                            arg3[0].o = zx.o(0)
                            int32_t temp0_795
                            int32_t temp1_41
                            temp0_795, temp1_41 =
                                _mm256_i32gather_epi32(arg3, *(r9 + arg6[0].q), zmm1)
                            arg3 = temp0_795
                            arg6 = _mm256_srli_epi32(arg3, 0x15)
                            zmm4 = _mm256_srli_epi32(arg3, 0xa)
                            zmm5 = _mm256_srli_epi32(arg3, 5)
                            arg7 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                            arg8 = __vpbroadcastd_ymmqq_memd(0x400)
                            arg11 = __vpbroadcastd_ymmqq_memd(0x380)
                            arg12 = __vpbroadcastd_ymmqq_memd(0x3d80)
                            arg6 = (zmm5 & arg7) | (arg6 & arg8)
                                | _mm256_add_epi32(arg6 & arg11, arg12)
                            zmm4 = (_mm256_slli_epi32(arg3, 6) & arg7) | (zmm4 & arg8)
                                | _mm256_add_epi32(zmm4 & arg11, arg12)
                            zmm5 = arg3 & __vpbroadcastd_ymmqq_memd(0x1c0)
                            arg3 = (_mm256_slli_epi32(arg3, 0x11)
                                & __vpbroadcastd_ymmqq_memd(0x7e0000))
                                | (arg3 & __vpbroadcastd_ymmqq_memd(0x200))
                                | _mm256_add_epi32(zmm5, __vpbroadcastd_ymmqq_memd(0x1ec0))
                            goto label_1402976ee
                
                arg14 = var_4a0_1
                arg15 = var_480_1
                arg7 = _mm256_cmp_ps(arg16, 
                    _mm256_fmadd_ps(
                        _mm256_fmadd_ps(
                            _mm256_fmadd_ps(_mm256_mul_ps(var_620, var_4c0_1), var_640, var_4e0_1), 
                            var_600, arg14), 
                        var_5e0, arg15), 
                    2)
                arg8 = _mm256_broadcast_ss(1f)
                arg7 = _mm256_blendv_ps(_mm256_broadcast_ss(-1f), arg8, arg7)
                zmm3 = var_a40_1
                arg11 = _mm256_mul_ps(_mm256_sub_ps(arg8, zmm3), arg7)
                arg6 = _mm256_mul_ps(arg11, var_640)
                arg7 = _mm256_mul_ps(arg11, var_620)
                arg8 = _mm256_mul_ps(arg11, var_600)
                arg11 = _mm256_mul_ps(arg11, var_5e0)
                arg6 = _mm256_fmadd_ps(arg6, zmm3, var_4e0_1)
                arg7 = _mm256_fmadd_ps(arg7, zmm3, var_4c0_1)
                arg8 = _mm256_fmadd_ps(arg8, zmm3, arg14)
                arg11 = _mm256_fmadd_ps(arg11, zmm3, arg15)
                float var_220_1[0x8] = arg6
                float var_200_1[0x8] = arg7
                float var_1e0_1[0x8] = arg8
                int32_t var_1c0_1[0x8] = arg11
                arg3 = _mm256_mul_ps(arg8, arg8)
                zmm3 = _mm256_mul_ps(arg11, arg11)
                arg3 = _mm256_add_ps(_mm256_fmadd_ps(arg3, arg6, arg6), 
                    _mm256_fmadd_ps(zmm3, arg7, arg7))
                zmm3 = _mm256_broadcast_ss(9.99999994e-09f)
                zmm4 = _mm256_cmp_ps(zmm3, arg3, 6)
                zmm3 = _mm256_cmp_ps(zmm3, arg3, 2)
                zmm5 = _mm256_broadcast_ss(0.5f)
                arg12 = _mm256_mul_ps(arg3, zmm5)
                arg3 = _mm256_rsqrt_ps(arg3)
                arg13 = _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(arg3, arg3), arg12, zmm5), 
                    arg3, arg3)
                arg3 = _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(arg13, arg13), arg12, zmm5), 
                    arg13, arg13)
                arg6 = _mm256_mul_ps(arg3, arg6)
                zmm5 = _mm256_mul_ps(arg3, arg7)
                arg7 = _mm256_mul_ps(arg3, arg8)
                arg3 = _mm256_mul_ps(arg3, arg11)
                arg6 = _mm256_and_ps(arg6, zmm3)
                zmm5 = _mm256_and_ps(zmm5, zmm3)
                arg7 = _mm256_and_ps(arg7, zmm3)
                arg8 = _mm256_broadcast_ss(1f)
                zmm4 = _mm256_and_ps(zmm4, arg8)
                arg3 = _mm256_or_ps(_mm256_and_ps(arg3, zmm3), zmm4)
                var_640 = _mm256_maskstore_ps(zmm1, arg6)
                var_620 = _mm256_maskstore_ps(zmm1, zmm5)
                var_600 = _mm256_maskstore_ps(zmm1, arg7)
                var_5e0 = _mm256_maskstore_ps(zmm1, arg3)
                arg12 = var_860
                arg13 = var_a00_1
        
        arg6[0].o = var_640[0].o
        arg11[0].o = var_640[4].o
        arg3[0].o = var_620[0].o
        zmm3[0].o = var_620[4].o
        arg7[0].o = var_600[0].o
        arg8[0].o = var_600[4].o
        zmm5[0].o = var_5e0[0].o
        zmm4[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
        zmm5[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
        arg7[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg3[0].o)
        zmm1[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
        int128_t var_440 = zmm1[0].o
        zmm1[0].o = var_5e0[4].o
        zmm4[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
        int128_t var_430_1 = zmm4[0].o
        arg6[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg3[0].o)
        arg3[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
        int128_t var_420_1 = arg3[0].o
        arg6[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
        int128_t var_410_1 = arg6[0].o
        arg6[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
        arg3[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
        zmm4[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg3[0].o, arg6[0].o)
        int128_t var_400_1 = zmm4[0].o
        zmm1[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
        arg6[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg3[0].o, arg6[0].o)
        int128_t var_3f0_1 = arg6[0].o
        arg6[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
        arg3[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        int128_t var_3e0_1 = arg3[0].o
        arg6[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        int128_t var_3d0_1 = arg6[0].o
        uint64_t rcx_157
        int64_t rsi_19
        
        for (uint64_t i_4 = 0xff; i_4 != 0; i_4 = rsi_19 & rol.q(-2, rcx_157.b))
            uint64_t rcx_152 = _tzcnt_u64(i_4)
            rsi_19 = i_4 & not.q(1 << (rcx_152 u% 0x40))
            uint32_t var_460[0x8] = arg10
            arg6[0].o = (&var_440)[rcx_152]
            result[sx.q(var_460[zx.q(rcx_152.d) & 7]) * 3] = arg6[0].o
            rcx_157 = _tzcnt_u64(rsi_19)
            arg6[0].o = (&var_440)[rcx_157]
            result[sx.q(var_460[zx.q(rcx_157.d) & 7]) * 3] = arg6[0].o
        
        r11 += 8
        zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
    while (r11 s< r13_4)

if (r11 s< arg21)
    arg6[0].o = zx.o(r11)
    arg6 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(arg6[0]), data_142fc93a0)
    zmm1[0].o = zx.o(arg21)
    arg16 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), arg6)
    zmm1 = _mm256_slli_epi32(arg6, 3)
    arg12[0].o = zx.o(0)
    int32_t temp0_896
    int32_t temp1_42
    temp0_896, temp1_42 = _mm256_i32gather_epi32(arg12, *(rdx_3 + zmm1[0].q), arg16)
    arg12 = temp0_896
    arg13 = __vpbroadcastd_ymmqq_memd(4)
    zmm3[0].o = zx.o(0)
    int32_t temp0_898
    int32_t temp1_43
    temp0_898, temp1_43 = _mm256_i32gather_epi32(zmm3, *(rdx_3 + (zmm1 | arg13)[0].q), arg16)
    arg3 = _mm256_slli_epi32(temp0_898, 4)
    arg14 = __vpbroadcastd_ymmqq_memd(8)
    zmm1 = arg3 | arg14
    zmm5[0].o = zx.o(0)
    int32_t temp0_901
    int32_t temp1_44
    temp0_901, temp1_44 = _mm256_i32gather_epi32(zmm5, *(r8 + zmm1[0].q), arg16)
    zmm5 = temp0_901
    zmm1[0].o = zx.o(0)
    arg6 = __vpbroadcastd_ymmqq_memd(0xc)
    int32_t var_7e0_1[0x8] = arg6
    arg3[0].o = zx.o(0)
    int32_t temp0_903
    int32_t temp1_45
    temp0_903, temp1_45 = _mm256_i32gather_epi32(arg3, *(r8 + (arg3 | arg6)[0].q), arg16)
    arg3 = temp0_903
    arg11 = __vpbroadcastd_ymmqq_memd(1)
    zmm3 = _mm256_cmpeq_epi32(arg3, arg11)
    zmm4 = zmm3 & arg16
    arg7[0].o = _mm256_extracti128_si256(zmm4, 1)
    arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
    arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
    float var_900[0x8]
    float var_8e0[0x8]
    float var_8c0[0x8]
    uint32_t var_8a0[0x8]
    
    if (__vpmovmskb_gpr32d_xmmdq(arg7[0].o) != 0)
        arg7[0].o = zx.o(0)
        int32_t temp0_910
        int32_t temp1_46
        temp0_910, temp1_46 = _mm256_i32gather_ps(arg7, *(r9 + zmm5[0].q), zmm4)
        arg7 = temp0_910
        arg6 = _mm256_add_epi32(zmm5, arg13)
        arg9[0].o = zx.o(0)
        int32_t temp0_912
        int32_t temp1_47
        temp0_912, temp1_47 = _mm256_i32gather_ps(arg9, *(r9 + arg6[0].q), zmm4)
        arg9 = temp0_912
        arg6 = _mm256_add_epi32(zmm5, arg14)
        arg10[0].o = zx.o(0)
        int32_t temp0_914
        int32_t temp1_48
        temp0_914, temp1_48 = _mm256_i32gather_ps(arg10, *(r9 + arg6[0].q), zmm4)
        arg10 = temp0_914
        arg8 = temp1_48
        arg6 = _mm256_fnmadd_ps(
            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg7, arg7), arg9, arg9), 
            arg10, arg10)
        zmm1 = _mm256_cmp_ps(zmm1, arg6, 1)
        arg6 = _mm256_and_ps(zmm1, _mm256_sqrt_ps(arg6))
        var_900 = _mm256_maskstore_ps(zmm4, arg7)
        var_8e0 = _mm256_maskstore_ps(zmm4, arg9)
        var_8c0 = _mm256_maskstore_ps(zmm4, arg10)
        var_8a0 = _mm256_maskstore_ps(zmm4, arg6)
    
    int32_t var_800_1[0x8] = arg14
    arg6 = zmm3 & not.32(arg16)
    zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
    float var_9a0_2[0x8] = arg6
    arg15[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg15[0].o, arg6[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        zmm1[0].o = _mm256_extracti128_si256(zmm5, 1)
        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
        int64_t var_920_1[0x4] = zmm5
        zmm3 = _mm256_cvtepi32_epi64(zmm5[0].o)
        zmm4[0].o = zx.o(rcx)
        int128_t var_980_1 = zmm4[0].o
        zmm4[0].o = _mm_broadcastd_epi32(zmm4[0])
        zmm4 = _mm256_cvtepu32_epi64(zmm4[0].o)
        arg7[0].o = zx.o(rbx_1)
        arg10 = _mm256_broadcastd_epi32(arg7[0])
        float var_9c0_2[0x8] = _mm256_add_epi64(zmm1, zmm4)
        zmm4 = _mm256_add_epi64(zmm3, zmm4)
        arg8 = __vpbroadcastd_ymmqq_memd(2)
        zmm1[0].o = zx.o(0)
        zmm5[0].o = arg18
        int32_t rcx_164
        rcx_164.b = zx.o(0) f>= zmm5[0]
        zmm1[0].o = zx.o(neg.d(rcx_164))
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm1[0].o ^= zmm3[0].o
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        zmm3 = _mm256_cmpgt_epi32(arg8, arg3) & not.32(zmm1)
        arg14 = zmm3 & var_9a0_2
        int32_t temp0_942 = _mm256_movemask_ps(arg14)
        int32_t var_9e0_2[0x8] = zmm4
        float var_a40_4[0x8]
        
        if (temp0_942 == 0)
            zmm1[0].o = zx.o(0)
            var_a40_4 = zmm1
            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            arg11[0].o = zx.o(0)
            arg14 = var_920_1
            arg7[0].o = var_980_1
        else
            zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
            arg7 = _mm256_add_epi32(arg3, zmm1)
            
            if (zmm5[0].o f>= 1f)
                arg3[0].o = zx.o(0)
                zmm1[0].o = zx.o(0)
                var_a40_4 = zmm1
                zmm5 = _mm256_blendv_ps(arg3, arg7, arg14)
                arg11 = zmm5
                arg14 = var_920_1
                arg7[0].o = var_980_1
            else
                uint32_t var_660_2[0x8] = zmm3
                int32_t var_6a0_2[0x8] = arg16
                zmm1[0].o = zx.o(r9)
                zmm1 = _mm256_broadcastq_epi64(zmm1[0].q)
                uint32_t var_a00_2[0x8] = arg10
                arg3 = _mm256_mullo_epi32(arg3, arg10)
                zmm3 = _mm256_cvtepi32_epi64(arg3[0].o)
                arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                zmm4 = _mm256_add_epi64(zmm4, zmm1)
                zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_9c0_2)
                float var_a40_3[0x8] = arg7
                arg7 = __vpbroadcastq_ymmqq_memq(3)
                zmm3 = _mm256_add_epi64(zmm3, _mm256_add_epi64(zmm4, arg7))
                zmm4 = var_a40_3
                zmm1 = _mm256_add_epi64(arg3, _mm256_add_epi64(zmm1, arg7))
                arg3 = __vpbroadcastq_ymmqq_memq(-4)
                arg16 = zmm1 & arg3
                arg10 = zmm3 & arg3
                int32_t rbx_39 = arg17 - 2
                zmm1 = _mm256_broadcastss_ps(zmm5[0].o)
                arg3 = _mm256_cvtepi32_ps(zmm4)
                zmm1 = _mm256_mul_ps(zmm1, arg3)
                arg3[0].o = arg12[0].o
                arg3[0] = float.s(arg17 - 1)
                zmm5[0].o = arg3[0].o f* zmm5[0]
                int32_t rdx_16 = int.d(zmm5[0]) s>> 0x1f
                int32_t rdx_17 = rdx_16 & not.d(rdx_16)
                
                if (rbx_39 s> rdx_17)
                    rbx_39 = rdx_17
                
                zmm1 = _mm256_cvttps_epi32(zmm1)
                arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                arg6 = _mm256_min_epi32(_mm256_max_epi32(zmm1, arg3), zmm4)
                int32_t var_840_2[0x8] = arg13
                float var_940_2[0x8] = arg8
                var_860[0].o = arg15[0].o
                int32_t var_820_2[0x8] = arg11
                var_520[0].o = zmm5[0].o
                
                if (arg17 s< 0x100)
                    zmm1 = _mm256_cvtepi32_epi64(arg6[0].o)
                    zmm3 = _mm256_add_epi64(arg10, zmm1)
                    char rdx_19 = temp0_942.b
                    
                    if ((rdx_19 & 1) == 0)
                        if ((rdx_19 & 2) != 0)
                            goto label_140299f32
                        
                        goto label_14029833f
                    
                    arg3[0].o = __vpbroadcastb_xmmdq_memb(*zmm3[0].q)
                    
                    if ((rdx_19 & 2) != 0)
                    label_140299f32:
                        uint32_t rdi_69 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rdi_69, 1)
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        
                        if ((rdx_19 & 4) == 0)
                            goto label_14029834e
                        
                        goto label_140299f49
                    
                label_14029833f:
                    zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                    
                    if ((rdx_19 & 4) == 0)
                    label_14029834e:
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rdx_19 & 8) != 0)
                            goto label_140299f6a
                        
                        goto label_14029835c
                    
                label_140299f49:
                    zmm4[0].o = _mm256_extracti128_si256(zmm3, 1)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*zmm4[0].q), 2)
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rdx_19 & 8) != 0)
                    label_140299f6a:
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        uint32_t rdi_73 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rdi_73, 3)
                        zmm3 = _mm256_add_epi64(arg16, zmm1)
                        
                        if ((rdx_19 & 0x10) == 0)
                            goto label_140298369
                        
                        goto label_140299f93
                    
                label_14029835c:
                    zmm3 = _mm256_add_epi64(arg16, zmm1)
                    
                    if ((rdx_19 & 0x10) == 0)
                    label_140298369:
                        
                        if ((rdx_19 & 0x20) != 0)
                            goto label_140299fa7
                        
                        goto label_140298372
                    
                label_140299f93:
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*zmm3[0].q), 4)
                    
                    if ((rdx_19 & 0x20) != 0)
                    label_140299fa7:
                        uint32_t rdi_77 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rdi_77, 5)
                        
                        if ((rdx_19 & 0x40) == 0)
                            goto label_14029837b
                        
                        goto label_140299fb8
                    
                label_140298372:
                    
                    if ((rdx_19 & 0x40) != 0)
                    label_140299fb8:
                        zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg3[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*zmm1[0].q), 6)
                        
                        if (temp0_942.b s< 0)
                        label_140299fd3:
                            zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                            uint32_t rdi_81 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rdi_81, 7)
                    else
                    label_14029837b:
                        
                        if (temp0_942.b s< 0)
                            goto label_140299fd3
                    
                    zmm1[0].o = arg3[0].o & data_142fc92e0
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg3[0].o = zx.o(rbx_39)
                    zmm4 = _mm256_broadcastd_epi32(arg3[0])
                    zmm1 = _mm256_cmpgt_epi32(zmm1, zmm4)
                    float var_560_2[0x8] = zmm1 ^ _mm256_cmpeq_epi32(arg3, arg3)
                    arg15 = arg6
                    
                    if (_mm256_movemask_ps(zmm1 & not.32(arg14)) != 0)
                        zmm3 = var_560_2
                        arg15 = _mm256_blendv_ps(arg6, var_a40_3, zmm3)
                        zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                        arg9 = _mm256_sub_epi32(arg6, zmm3)
                        arg7 = zmm1 & not.32(_mm256_cmpgt_epi32(arg9, var_a40_3) ^ zmm3)
                        zmm1 = arg14 & arg7
                        int32_t i_5 = _mm256_movemask_ps(zmm1)
                        
                        if (i_5 != 0)
                            arg13[0].o = data_142fc92e0
                            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                            arg11 = arg6
                            
                            do
                                arg3 = arg9
                                zmm5 = _mm256_cvtepi32_epi64(arg3[0].o)
                                arg9 = _mm256_add_epi64(arg10, zmm5)
                                char temp0_1105 = _mm256_movemask_ps(zmm1)
                                
                                if ((temp0_1105 & 1) == 0)
                                    if ((temp0_1105 & 2) != 0)
                                        goto label_14029842d
                                    
                                    goto label_140298515
                                
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                    zx.d(*arg9[0].q), 0)
                                
                                if ((temp0_1105 & 2) != 0)
                                label_14029842d:
                                    uint32_t rsi_38 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1))
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rsi_38, 1)
                                    zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                                    
                                    if ((temp0_1105 & 4) == 0)
                                        goto label_140298525
                                    
                                    goto label_140298445
                                
                            label_140298515:
                                zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                                
                                if ((temp0_1105 & 4) == 0)
                                label_140298525:
                                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                    
                                    if ((temp0_1105 & 8) != 0)
                                        goto label_140298467
                                    
                                    goto label_140298534
                                
                            label_140298445:
                                zmm5[0].o = _mm256_extracti128_si256(arg9, 1)
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                    zx.d(*zmm5[0].q), 2)
                                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                
                                if ((temp0_1105 & 8) != 0)
                                label_140298467:
                                    zmm5[0].o = _mm256_extracti128_si256(arg9, 1)
                                    uint32_t rsi_42 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rsi_42, 3)
                                    arg9 = _mm256_add_epi64(arg16, zmm1)
                                    
                                    if ((temp0_1105 & 0x10) == 0)
                                        goto label_140298542
                                    
                                    goto label_140298491
                                
                            label_140298534:
                                arg9 = _mm256_add_epi64(arg16, zmm1)
                                
                                if ((temp0_1105 & 0x10) == 0)
                                label_140298542:
                                    
                                    if ((temp0_1105 & 0x20) != 0)
                                        goto label_1402984a6
                                    
                                    goto label_14029854c
                                
                            label_140298491:
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                    zx.d(*arg9[0].q), 4)
                                
                                if ((temp0_1105 & 0x20) != 0)
                                label_1402984a6:
                                    uint32_t rsi_46 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1))
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rsi_46, 5)
                                    
                                    if ((temp0_1105 & 0x40) == 0)
                                        goto label_140298556
                                    
                                    goto label_1402984b8
                                
                            label_14029854c:
                                
                                if ((temp0_1105 & 0x40) != 0)
                                label_1402984b8:
                                    zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_1105 s< 0)
                                    label_1402984d4:
                                        zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                        uint32_t rdi_33 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rdi_33, 7)
                                else
                                label_140298556:
                                    
                                    if (temp0_1105 s< 0)
                                        goto label_1402984d4
                                
                                zmm1[0].o = zmm3[0].o & arg13[0].o
                                zmm1 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), zmm4)
                                arg9 = zmm1 & arg7
                                zmm1[0].o = zx.o(0)
                                
                                if (_mm256_movemask_ps(arg9 & arg14) != i_5)
                                    zmm1 = arg9 ^ arg7
                                
                                arg15 = _mm256_blendv_ps(arg15, arg11, arg9)
                                arg9 = _mm256_sub_epi32(arg3, arg8)
                                zmm5 = __vpcmpgtd_ymmqq_ymmqq_memqq(arg9, var_a40_3)
                                arg7 = zmm5 & not.32(zmm1)
                                zmm1 = arg7 & arg14
                                i_5 = _mm256_movemask_ps(zmm1)
                                arg11 = arg3
                            while (i_5 != 0)
                    
                    zmm1 = _mm256_andnot_ps(var_560_2, arg14)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        zmm1 = __vxorps_ymmqq_ymmqq_memqq(var_560_2, data_142fc9420)
                        var_560_2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_560_2[0].o, var_560_2[0].o)
                        arg15 = _mm256_blendv_ps(arg15, var_560_2, zmm1)
                        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                        arg11 = _mm256_add_epi32(arg6, arg7)
                        arg13 = _mm256_cmpgt_epi32(arg11, var_560_2) & zmm1
                        zmm1 = arg13 & arg14
                        int32_t i_6 = _mm256_movemask_ps(zmm1)
                        
                        if (i_6 != 0)
                            arg8[0].o = data_142fc92e0
                            
                            do
                                arg3 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(arg11[0].o))
                                char temp0_1142 = _mm256_movemask_ps(zmm1)
                                
                                if ((temp0_1142 & 1) == 0)
                                    if ((temp0_1142 & 2) != 0)
                                        goto label_14029862d
                                    
                                    goto label_140298711
                                
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                    zx.d(*arg3[0].q), 0)
                                
                                if ((temp0_1142 & 2) != 0)
                                label_14029862d:
                                    uint32_t rsi_52 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rsi_52, 1)
                                    zmm1[0].o = _mm256_extracti128_si256(arg11, 1)
                                    
                                    if ((temp0_1142 & 4) == 0)
                                        goto label_140298721
                                    
                                    goto label_140298645
                                
                            label_140298711:
                                zmm1[0].o = _mm256_extracti128_si256(arg11, 1)
                                
                                if ((temp0_1142 & 4) == 0)
                                label_140298721:
                                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                    
                                    if ((temp0_1142 & 8) != 0)
                                        goto label_140298667
                                    
                                    goto label_140298730
                                
                            label_140298645:
                                zmm5[0].o = _mm256_extracti128_si256(arg3, 1)
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                    zx.d(*zmm5[0].q), 2)
                                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                
                                if ((temp0_1142 & 8) != 0)
                                label_140298667:
                                    arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                                    uint32_t rsi_56 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rsi_56, 3)
                                    arg3 = _mm256_add_epi64(arg16, zmm1)
                                    
                                    if ((temp0_1142 & 0x10) == 0)
                                        goto label_14029873e
                                    
                                    goto label_140298691
                                
                            label_140298730:
                                arg3 = _mm256_add_epi64(arg16, zmm1)
                                
                                if ((temp0_1142 & 0x10) == 0)
                                label_14029873e:
                                    
                                    if ((temp0_1142 & 0x20) != 0)
                                        goto label_1402986a6
                                    
                                    goto label_140298748
                                
                            label_140298691:
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                    zx.d(*arg3[0].q), 4)
                                
                                if ((temp0_1142 & 0x20) != 0)
                                label_1402986a6:
                                    uint32_t rsi_60 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rsi_60, 5)
                                    
                                    if ((temp0_1142 & 0x40) == 0)
                                        goto label_140298752
                                    
                                    goto label_1402986b8
                                
                            label_140298748:
                                
                                if ((temp0_1142 & 0x40) != 0)
                                label_1402986b8:
                                    zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_1142 s< 0)
                                    label_1402986d4:
                                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                                        uint32_t rdi_37 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rdi_37, 7)
                                else
                                label_140298752:
                                    
                                    if (temp0_1142 s< 0)
                                        goto label_1402986d4
                                
                                zmm1[0].o = zmm3[0].o & arg8[0].o
                                zmm1 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), zmm4)
                                arg3 = zmm1 & not.32(arg13)
                                zmm1[0].o = zx.o(0)
                                zmm5 = arg3 & arg14
                                int32_t temp0_1148 = _mm256_movemask_ps(zmm5)
                                arg9[0].o = zx.o(0)
                                
                                if (temp0_1148 != i_6)
                                    arg9 = arg3 ^ arg13
                                
                                arg15 = _mm256_blendv_ps(arg15, arg11, arg3)
                                arg11 = _mm256_add_epi32(arg11, arg7)
                                arg13 = _mm256_cmpgt_epi32(arg11, zmm1) & arg9
                                zmm1 = arg13 & arg14
                                i_6 = _mm256_movemask_ps(zmm1)
                            while (i_6 != 0)
                    
                    arg7[0].o = var_980_1
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm5 = _mm256_blendv_ps(zmm1, arg15, arg14)
                    zmm1 = _mm256_cvtepi32_epi64(zmm5[0].o)
                    arg3 = _mm256_add_epi64(arg10, zmm1)
                    
                    if ((rdx_19 & 1) != 0)
                        zmm4[0].o = __vpbroadcastb_xmmdq_memb(*arg3[0].q)
                    
                    arg13 = var_840_2
                    arg8 = var_940_2
                    arg15[0].o = var_860[0].o
                    arg6 = var_820_2
                    
                    if ((rdx_19 & 2) == 0)
                        zmm1[0].o = _mm256_extracti128_si256(zmm5, 1)
                        
                        if ((rdx_19 & 4) != 0)
                            goto label_14029a009
                        
                        goto label_140298813
                    
                    uint32_t rbx_82 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rbx_82, 1)
                    zmm1[0].o = _mm256_extracti128_si256(zmm5, 1)
                    
                    if ((rdx_19 & 4) != 0)
                    label_14029a009:
                        zmm3[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*zmm3[0].q), 2)
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rdx_19 & 8) == 0)
                            goto label_140298821
                        
                        goto label_14029a02a
                    
                label_140298813:
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rdx_19 & 8) == 0)
                    label_140298821:
                        arg3 = _mm256_add_epi64(arg16, zmm1)
                        
                        if ((rdx_19 & 0x10) != 0)
                            goto label_14029a053
                        
                        goto label_14029882e
                    
                label_14029a02a:
                    arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                    uint32_t rbx_86 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rbx_86, 3)
                    arg3 = _mm256_add_epi64(arg16, zmm1)
                    
                    if ((rdx_19 & 0x10) != 0)
                    label_14029a053:
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*arg3[0].q), 4)
                        
                        if ((rdx_19 & 0x20) == 0)
                            goto label_140298837
                        
                        goto label_14029a067
                    
                label_14029882e:
                    
                    if ((rdx_19 & 0x20) == 0)
                    label_140298837:
                        
                        if ((rdx_19 & 0x40) != 0)
                            goto label_14029a078
                        
                        goto label_140298840
                    
                label_14029a067:
                    uint32_t rbx_90 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rbx_90, 5)
                    
                    if ((rdx_19 & 0x40) == 0)
                    label_140298840:
                        
                        if (temp0_942.b s< 0)
                        label_14029a093:
                            zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                            uint32_t rbx_94 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rbx_94, 7)
                    else
                    label_14029a078:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*zmm1[0].q), 6)
                        
                        if (temp0_942.b s< 0)
                            goto label_14029a093
                    
                    zmm1 = _mm256_sub_epi32(zmm5, _mm256_cmpeq_epi32(zmm1, zmm1))
                    arg3[0].o = zx.o(0)
                    arg11 = _mm256_blendv_ps(arg3, zmm1, arg14)
                    arg3 = var_a40_3
                    zmm1 = _mm256_cmpgt_epi32(arg11, arg3) & arg14
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        arg11 = _mm256_blendv_ps(arg11, arg3, zmm1)
                    
                    arg14 = var_920_1
                    zmm1 = _mm256_cvtepi32_epi64(arg11[0].o)
                    zmm3 = _mm256_add_epi64(arg10, zmm1)
                    
                    if ((rdx_19 & 1) == 0)
                        arg10 = var_a00_2
                        
                        if ((rdx_19 & 2) != 0)
                            goto label_14029a0cb
                        
                        goto label_1402988a0
                    
                    arg3[0].o = __vpbroadcastb_xmmdq_memb(*zmm3[0].q)
                    arg10 = var_a00_2
                    
                    if ((rdx_19 & 2) != 0)
                    label_14029a0cb:
                        uint32_t rbx_97 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rbx_97, 1)
                        zmm1[0].o = _mm256_extracti128_si256(arg11, 1)
                        
                        if ((rdx_19 & 4) == 0)
                            goto label_1402988af
                        
                        goto label_14029a0e2
                    
                label_1402988a0:
                    zmm1[0].o = _mm256_extracti128_si256(arg11, 1)
                    
                    if ((rdx_19 & 4) == 0)
                    label_1402988af:
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rdx_19 & 8) != 0)
                            goto label_14029a139
                        
                        goto label_1402988bd
                    
                label_14029a0e2:
                    arg7 = arg6
                    arg6[0].o = arg15[0].o
                    arg15 = arg14
                    zmm5[0].o = _mm256_extracti128_si256(zmm3, 1)
                    arg15[0].o = arg6[0].o
                    arg6 = arg7
                    arg7[0].o = var_980_1
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*zmm5[0].q), 2)
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rdx_19 & 8) != 0)
                    label_14029a139:
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        uint32_t rbx_101 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rbx_101, 3)
                        zmm3 = _mm256_add_epi64(arg16, zmm1)
                        
                        if ((rdx_19 & 0x10) == 0)
                            goto label_1402988ca
                        
                        goto label_14029a162
                    
                label_1402988bd:
                    zmm3 = _mm256_add_epi64(arg16, zmm1)
                    
                    if ((rdx_19 & 0x10) != 0)
                    label_14029a162:
                        arg3[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*zmm3[0].q), 4)
                        arg16 = var_6a0_2
                        
                        if ((rdx_19 & 0x20) != 0)
                        label_14029a17f:
                            uint32_t rbx_105 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rbx_105, 5)
                            
                            if ((rdx_19 & 0x40) == 0)
                                goto label_1402988e5
                            
                            goto label_14029a190
                    else
                    label_1402988ca:
                        arg16 = var_6a0_2
                        
                        if ((rdx_19 & 0x20) != 0)
                            goto label_14029a17f
                    
                    if ((rdx_19 & 0x40) != 0)
                    label_14029a190:
                        zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg3[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*zmm1[0].q), 6)
                        zmm1[0].o = zmm4[0].o & data_142fc92e0
                        
                        if (temp0_942.b s< 0)
                        label_14029a1b3:
                            zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                            uint32_t rcx_193 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rcx_193, 7)
                    else
                    label_1402988e5:
                        zmm1[0].o = zmm4[0].o & data_142fc92e0
                        
                        if (temp0_942.b s< 0)
                            goto label_14029a1b3
                    
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg3[0].o &= data_142fc92e0
                else
                    zmm1 = _mm256_add_epi32(arg6, arg6)
                    arg3 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    zmm3 = _mm256_add_epi64(arg10, arg3)
                    char rdx_18 = temp0_942.b
                    
                    if ((rdx_18 & 1) == 0)
                        if ((rdx_18 & 2) != 0)
                            goto label_140299cc0
                        
                        goto label_140297d69
                    
                    arg3[0].o = __vpbroadcastw_xmmdq_memw(*zmm3[0].q)
                    
                    if ((rdx_18 & 2) != 0)
                    label_140299cc0:
                        int64_t rdi_60 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rdi_60, 1)
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((rdx_18 & 4) == 0)
                            goto label_140297d78
                        
                        goto label_140299cda
                    
                label_140297d69:
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    
                    if ((rdx_18 & 4) == 0)
                    label_140297d78:
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rdx_18 & 8) != 0)
                            goto label_140299cf8
                        
                        goto label_140297d86
                    
                label_140299cda:
                    zmm4[0].o = _mm256_extracti128_si256(zmm3, 1)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm4[0].q, 2)
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rdx_18 & 8) != 0)
                    label_140299cf8:
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        int64_t rdi_62 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rdi_62, 3)
                        zmm3 = _mm256_add_epi64(arg16, zmm1)
                        
                        if ((rdx_18 & 0x10) == 0)
                            goto label_140297d93
                        
                        goto label_140299d1b
                    
                label_140297d86:
                    zmm3 = _mm256_add_epi64(arg16, zmm1)
                    
                    if ((rdx_18 & 0x10) == 0)
                    label_140297d93:
                        
                        if ((rdx_18 & 0x20) != 0)
                            goto label_140299d29
                        
                        goto label_140297d9c
                    
                label_140299d1b:
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm3[0].q, 4)
                    
                    if ((rdx_18 & 0x20) != 0)
                    label_140299d29:
                        int64_t rdi_64 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rdi_64, 5)
                        
                        if ((rdx_18 & 0x40) == 0)
                            goto label_140297da5
                        
                        goto label_140299d3d
                    
                label_140297d9c:
                    
                    if ((rdx_18 & 0x40) != 0)
                    label_140299d3d:
                        zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 6)
                        
                        if (temp0_942.b s< 0)
                        label_140299d55:
                            zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                            int64_t rdi_66 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rdi_66, 7)
                    else
                    label_140297da5:
                        
                        if (temp0_942.b s< 0)
                            goto label_140299d55
                    
                    zmm1 = _mm256_cvtepu16_epi32(arg3[0].o)
                    arg3[0].o = zx.o(rbx_39)
                    arg15 = _mm256_broadcastd_epi32(arg3[0])
                    arg3 = _mm256_cmpgt_epi32(zmm1, arg15)
                    zmm5 = arg3 ^ _mm256_cmpeq_epi32(zmm1, zmm1)
                    zmm4 = arg6
                    
                    if (_mm256_movemask_ps(arg3 & not.32(arg14)) != 0)
                        zmm3 = var_a40_3
                        zmm4 = _mm256_blendv_ps(arg6, zmm3, zmm5)
                        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                        zmm1 = _mm256_sub_epi32(arg6, arg7)
                        zmm3 = _mm256_cmpgt_epi32(zmm1, zmm3) ^ arg7
                        arg8 = arg3 & not.32(zmm3)
                        arg7 = arg14 & arg8
                        int32_t i_7 = _mm256_movemask_ps(arg7)
                        
                        if (i_7 != 0)
                            zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                            arg13 = arg6
                            
                            do
                                arg11 = zmm1
                                zmm1 = _mm256_add_epi32(zmm1, zmm1)
                                arg9 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(zmm1[0].o))
                                char temp0_1000 = _mm256_movemask_ps(arg7)
                                
                                if ((temp0_1000 & 1) == 0)
                                    if ((temp0_1000 & 2) != 0)
                                        goto label_140297e34
                                    
                                    goto label_140297f1a
                                
                                arg3[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg9[0].q, 0)
                                
                                if ((temp0_1000 & 2) != 0)
                                label_140297e34:
                                    int64_t rsi_22 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    arg3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rsi_22, 1)
                                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    
                                    if ((temp0_1000 & 4) == 0)
                                        goto label_140297f2a
                                    
                                    goto label_140297e4f
                                
                            label_140297f1a:
                                zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                
                                if ((temp0_1000 & 4) == 0)
                                label_140297f2a:
                                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                    
                                    if ((temp0_1000 & 8) != 0)
                                        goto label_140297e6e
                                    
                                    goto label_140297f39
                                
                            label_140297e4f:
                                arg7[0].o = _mm256_extracti128_si256(arg9, 1)
                                arg3[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg7[0].q, 2)
                                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                
                                if ((temp0_1000 & 8) != 0)
                                label_140297e6e:
                                    arg7[0].o = _mm256_extracti128_si256(arg9, 1)
                                    int64_t rsi_24 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                    arg3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rsi_24, 3)
                                    arg9 = _mm256_add_epi64(arg16, zmm1)
                                    
                                    if ((temp0_1000 & 0x10) == 0)
                                        goto label_140297f47
                                    
                                    goto label_140297e92
                                
                            label_140297f39:
                                arg9 = _mm256_add_epi64(arg16, zmm1)
                                
                                if ((temp0_1000 & 0x10) == 0)
                                label_140297f47:
                                    
                                    if ((temp0_1000 & 0x20) != 0)
                                        goto label_140297ea1
                                    
                                    goto label_140297f51
                                
                            label_140297e92:
                                arg3[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg9[0].q, 4)
                                
                                if ((temp0_1000 & 0x20) != 0)
                                label_140297ea1:
                                    int64_t rsi_26 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                    arg3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rsi_26, 5)
                                    
                                    if ((temp0_1000 & 0x40) == 0)
                                        goto label_140297f5b
                                    
                                    goto label_140297eb6
                                
                            label_140297f51:
                                
                                if ((temp0_1000 & 0x40) != 0)
                                label_140297eb6:
                                    zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                    arg3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_1000 s< 0)
                                    label_140297ecf:
                                        zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                        int64_t rdi_26 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rdi_26, 7)
                                else
                                label_140297f5b:
                                    
                                    if (temp0_1000 s< 0)
                                        goto label_140297ecf
                                
                                zmm1 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg3[0].o), arg15)
                                    & arg8
                                arg7[0].o = zx.o(0)
                                
                                if (_mm256_movemask_ps(zmm1 & arg14) != i_7)
                                    arg7 = zmm1 ^ arg8
                                
                                zmm4 = _mm256_blendv_ps(zmm4, arg13, zmm1)
                                zmm1 = _mm256_sub_epi32(arg11, zmm3)
                                arg8 = __vpcmpgtd_ymmqq_ymmqq_memqq(zmm1, var_a40_3) & not.32(arg7)
                                arg7 = arg8 & arg14
                                i_7 = _mm256_movemask_ps(arg7)
                                arg13 = arg11
                            while (i_7 != 0)
                    
                    zmm1 = _mm256_andnot_ps(zmm5, arg14)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        zmm1 = __vxorps_ymmqq_ymmqq_memqq(zmm5, data_142fc9420)
                        arg3[0].o = zx.o(0)
                        zmm4 = _mm256_blendv_ps(zmm4, arg3, zmm1)
                        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                        arg8 = _mm256_add_epi32(arg6, arg7)
                        arg3 = _mm256_cmpgt_epi32(arg8, arg3)
                        zmm3 = arg3 & zmm1
                        zmm1 = zmm3 & arg14
                        
                        for (int32_t i_8 = _mm256_movemask_ps(zmm1); i_8 != 0; 
                                i_8 = _mm256_movemask_ps(zmm1))
                            arg11 = _mm256_add_epi32(arg8, arg8)
                            arg9 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(arg11[0].o))
                            char temp0_1037 = _mm256_movemask_ps(zmm1)
                            
                            if ((temp0_1037 & 1) == 0)
                                if ((temp0_1037 & 2) != 0)
                                    goto label_140298014
                                
                                goto label_1402980f6
                            
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg9[0].q, 0)
                            
                            if ((temp0_1037 & 2) != 0)
                            label_140298014:
                                int64_t rsi_29 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rsi_29, 1)
                                zmm1[0].o = _mm256_extracti128_si256(arg11, 1)
                                
                                if ((temp0_1037 & 4) == 0)
                                    goto label_140298106
                                
                                goto label_14029802f
                            
                        label_1402980f6:
                            zmm1[0].o = _mm256_extracti128_si256(arg11, 1)
                            
                            if ((temp0_1037 & 4) == 0)
                            label_140298106:
                                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                
                                if ((temp0_1037 & 8) != 0)
                                    goto label_14029804e
                                
                                goto label_140298115
                            
                        label_14029802f:
                            zmm5[0].o = _mm256_extracti128_si256(arg9, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm5[0].q, 2)
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((temp0_1037 & 8) != 0)
                            label_14029804e:
                                zmm5[0].o = _mm256_extracti128_si256(arg9, 1)
                                int64_t rsi_31 = __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rsi_31, 3)
                                arg9 = _mm256_add_epi64(arg16, zmm1)
                                
                                if ((temp0_1037 & 0x10) == 0)
                                    goto label_140298123
                                
                                goto label_140298072
                            
                        label_140298115:
                            arg9 = _mm256_add_epi64(arg16, zmm1)
                            
                            if ((temp0_1037 & 0x10) == 0)
                            label_140298123:
                                
                                if ((temp0_1037 & 0x20) != 0)
                                    goto label_140298081
                                
                                goto label_14029812d
                            
                        label_140298072:
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg9[0].q, 4)
                            
                            if ((temp0_1037 & 0x20) != 0)
                            label_140298081:
                                int64_t rsi_33 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rsi_33, 5)
                                
                                if ((temp0_1037 & 0x40) == 0)
                                    goto label_140298137
                                
                                goto label_140298096
                            
                        label_14029812d:
                            
                            if ((temp0_1037 & 0x40) != 0)
                            label_140298096:
                                zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                arg3[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 6)
                                
                                if (temp0_1037 s< 0)
                                label_1402980af:
                                    zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                                    int64_t rdi_29 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rdi_29, 7)
                            else
                            label_140298137:
                                
                                if (temp0_1037 s< 0)
                                    goto label_1402980af
                            
                            zmm1 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg3[0].o), arg15)
                            arg9 = zmm1 & not.32(zmm3)
                            zmm1[0].o = zx.o(0)
                            zmm5 = arg9 & arg14
                            int32_t temp0_1043 = _mm256_movemask_ps(zmm5)
                            arg11[0].o = zx.o(0)
                            
                            if (temp0_1043 != i_8)
                                arg11 = arg9 ^ zmm3
                            
                            zmm4 = _mm256_blendv_ps(zmm4, arg8, arg9)
                            arg8 = _mm256_add_epi32(arg8, arg7)
                            zmm3 = _mm256_cmpgt_epi32(arg8, zmm1) & arg11
                            zmm1 = zmm3 & arg14
                    
                    arg15[0].o = var_860[0].o
                    arg7[0].o = var_980_1
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm5 = _mm256_blendv_ps(zmm1, zmm4, arg14)
                    zmm1 = _mm256_add_epi32(zmm5, zmm5)
                    arg3 = _mm256_add_epi64(arg10, _mm256_cvtepi32_epi64(zmm1[0].o))
                    
                    if ((rdx_18 & 1) != 0)
                        zmm4[0].o = __vpbroadcastw_xmmdq_memw(*arg3[0].q)
                    
                    arg13 = var_840_2
                    arg8 = var_940_2
                    arg6 = var_820_2
                    
                    if ((rdx_18 & 2) == 0)
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((rdx_18 & 4) != 0)
                            goto label_140299d85
                        
                        goto label_1402981f7
                    
                    int64_t rbx_68 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rbx_68, 1)
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    
                    if ((rdx_18 & 4) != 0)
                    label_140299d85:
                        zmm3[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm3[0].q, 2)
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rdx_18 & 8) == 0)
                            goto label_140298205
                        
                        goto label_140299da3
                    
                label_1402981f7:
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rdx_18 & 8) == 0)
                    label_140298205:
                        arg3 = _mm256_add_epi64(arg16, zmm1)
                        
                        if ((rdx_18 & 0x10) != 0)
                            goto label_140299dc6
                        
                        goto label_140298212
                    
                label_140299da3:
                    arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                    int64_t rbx_70 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rbx_70, 3)
                    arg3 = _mm256_add_epi64(arg16, zmm1)
                    
                    if ((rdx_18 & 0x10) != 0)
                    label_140299dc6:
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg3[0].q, 4)
                        
                        if ((rdx_18 & 0x20) == 0)
                            goto label_14029821b
                        
                        goto label_140299dd4
                    
                label_140298212:
                    
                    if ((rdx_18 & 0x20) == 0)
                    label_14029821b:
                        
                        if ((rdx_18 & 0x40) != 0)
                            goto label_140299de8
                        
                        goto label_140298224
                    
                label_140299dd4:
                    int64_t rbx_72 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rbx_72, 5)
                    
                    if ((rdx_18 & 0x40) == 0)
                    label_140298224:
                        
                        if (temp0_942.b s< 0)
                        label_140299e00:
                            zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                            int64_t rbx_74 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rbx_74, 7)
                    else
                    label_140299de8:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm1[0].q, 6)
                        
                        if (temp0_942.b s< 0)
                            goto label_140299e00
                    
                    zmm1 = _mm256_sub_epi32(zmm5, _mm256_cmpeq_epi32(zmm1, zmm1))
                    arg3[0].o = zx.o(0)
                    arg11 = _mm256_blendv_ps(arg3, zmm1, arg14)
                    zmm1 = _mm256_cmpgt_epi32(arg11, var_a40_3) & arg14
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        arg11 = _mm256_blendv_ps(arg11, var_a40_3, zmm1)
                    
                    arg14 = var_920_1
                    zmm1 = _mm256_add_epi32(arg11, arg11)
                    arg3 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    zmm3 = _mm256_add_epi64(arg10, arg3)
                    
                    if ((rdx_18 & 1) == 0)
                        arg10 = var_a00_2
                        
                        if ((rdx_18 & 2) != 0)
                            goto label_140299e2f
                        
                        goto label_140298289
                    
                    arg3[0].o = __vpbroadcastw_xmmdq_memw(*zmm3[0].q)
                    arg10 = var_a00_2
                    
                    if ((rdx_18 & 2) != 0)
                    label_140299e2f:
                        int64_t rbx_76 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rbx_76, 1)
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((rdx_18 & 4) == 0)
                            goto label_140298298
                        
                        goto label_140299e49
                    
                label_140298289:
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    
                    if ((rdx_18 & 4) == 0)
                    label_140298298:
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rdx_18 & 8) != 0)
                            goto label_140299e9d
                        
                        goto label_1402982a6
                    
                label_140299e49:
                    arg7 = arg6
                    arg6[0].o = arg15[0].o
                    arg15 = arg14
                    zmm5[0].o = _mm256_extracti128_si256(zmm3, 1)
                    arg15[0].o = arg6[0].o
                    arg6 = arg7
                    arg7[0].o = var_980_1
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm5[0].q, 2)
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rdx_18 & 8) != 0)
                    label_140299e9d:
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        int64_t rbx_78 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rbx_78, 3)
                        zmm3 = _mm256_add_epi64(arg16, zmm1)
                        
                        if ((rdx_18 & 0x10) == 0)
                            goto label_1402982b3
                        
                        goto label_140299ec0
                    
                label_1402982a6:
                    zmm3 = _mm256_add_epi64(arg16, zmm1)
                    
                    if ((rdx_18 & 0x10) == 0)
                    label_1402982b3:
                        arg16 = var_6a0_2
                        
                        if ((rdx_18 & 0x20) != 0)
                            goto label_140299ed7
                        
                        goto label_1402982c5
                    
                label_140299ec0:
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm3[0].q, 4)
                    arg16 = var_6a0_2
                    
                    if ((rdx_18 & 0x20) != 0)
                    label_140299ed7:
                        int64_t rbx_80 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rbx_80, 5)
                        
                        if ((rdx_18 & 0x40) == 0)
                            goto label_1402982ce
                        
                        goto label_140299eeb
                    
                label_1402982c5:
                    
                    if ((rdx_18 & 0x40) != 0)
                    label_140299eeb:
                        zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 6)
                        
                        if (temp0_942.b s< 0)
                        label_140299f03:
                            zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                            int64_t rcx_191 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rcx_191, 7)
                    else
                    label_1402982ce:
                        
                        if (temp0_942.b s< 0)
                            goto label_140299f03
                    
                    zmm1 = _mm256_cvtepu16_epi32(zmm4[0].o)
                
                arg3 = _mm256_cvtepu16_epi32(arg3[0].o)
                zmm3[0].o = zx.o(0)
                zmm4[0].o = zx.o(0)
                
                if (arg19 != 1)
                    arg3 = _mm256_max_epi32(_mm256_sub_epi32(arg3, zmm1), arg6)
                    zmm1 = _mm256_sub_ps(_mm256_broadcast_ss(var_520[0]), _mm256_cvtepi32_ps(zmm1))
                    arg3 = _mm256_cvtepi32_ps(arg3)
                    zmm4 = _mm256_div_ps(zmm1, arg3)
                
                zmm1 = _mm256_blendv_ps(zmm3, zmm4, var_660_2)
                var_a40_4 = zmm1
                zmm4 = var_9e0_2
        
        arg9 = _mm256_broadcastd_epi32(arg7[0])
        uint64_t r8_6 = zx.q(var_a08)
        var_980_1.32 = arg9
        
        if (var_a08 u> 5)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            var_900 = _mm256_maskstore_ps(var_9a0_2, zmm1)
            var_8e0 = _mm256_maskstore_ps(var_9a0_2, zmm1)
            var_8c0 = _mm256_maskstore_ps(var_9a0_2, zmm1)
            zmm1 = _mm256_broadcast_ss(1f)
            var_8a0 = _mm256_maskstore_ps(var_9a0_2, zmm1)
        else
            arg3 = _mm256_mullo_epi32(zmm5, arg10)
            
            switch (r8_6)
                case 0
                    zmm1 = data_143442de0
                    zmm1 = _mm256_add_epi32(arg3, 
                        _mm256_inserti128_si256(_mm256_permutevar8x32_epi32(zmm1, zmm4), 
                            _mm256_permutevar8x32_epi32(zmm1, var_9c0_2)[0].o, 1))
                    arg3[0].o = zx.o(0)
                    uint32_t var_a00_3[0x8] = arg10
                    arg10 = arg13
                    arg13 = var_9a0_2
                    int32_t temp0_1188
                    int32_t temp1_49
                    temp0_1188, temp1_49 = _mm256_i32gather_ps(arg3, *(r9 + zmm1[0].q), arg13)
                    arg3 = temp0_1188
                    zmm3 = _mm256_add_epi32(zmm1, arg10)
                    zmm4[0].o = zx.o(0)
                    var_9c0_2[0].o = arg15[0].o
                    arg15 = arg14
                    arg9 = arg8
                    arg8 = arg11
                    arg11 = zmm5
                    int32_t temp0_1190
                    int32_t temp1_50
                    temp0_1190, temp1_50 = _mm256_i32gather_ps(zmm4, *(r9 + zmm3[0].q), arg13)
                    zmm4 = temp0_1190
                    zmm5 = temp1_50
                    zmm3 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, var_800_1)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    int32_t temp0_1193
                    int32_t temp1_51
                    temp0_1193, temp1_51 = _mm256_i32gather_ps(zmm5, *(r9 + zmm3[0].q), arg13)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, var_7e0_1)
                    int32_t temp0_1196
                    int32_t temp1_52
                    temp0_1196, temp1_52 = _mm256_i32gather_ps(zmm3, *(r9 + zmm1[0].q), arg13)
                    zmm3 = temp0_1196
                    arg7 = temp1_52
                    var_900 = _mm256_maskstore_ps(arg13, arg3)
                    var_8e0 = _mm256_maskstore_ps(arg13, zmm4)
                    var_8c0 = _mm256_maskstore_ps(arg13, temp0_1193)
                    zmm5 = arg11
                    arg11 = arg8
                    arg8 = arg9
                    arg15[0].o = var_9c0_2[0].o
                    var_8a0 = _mm256_maskstore_ps(arg13, zmm3)
                    arg13 = arg10
                    arg10 = var_a00_3
                case 1
                    zmm1 = data_143442de0
                    zmm1 = _mm256_add_epi32(arg3, 
                        _mm256_inserti128_si256(_mm256_permutevar8x32_epi32(zmm1, zmm4), 
                            __vpermd_ymmqq_ymmqq_memqq(zmm1, var_9c0_2)[0].o, 1))
                    arg3[0].o = zx.o(0)
                    int32_t temp0_1210
                    int32_t temp1_53
                    temp0_1210, temp1_53 = _mm256_i32gather_ps(arg3, *(r9 + zmm1[0].q), var_9a0_2)
                    arg3 = temp0_1210
                    zmm3 = _mm256_add_epi32(zmm1, arg13)
                    zmm4[0].o = zx.o(0)
                    arg7 = zmm5
                    int32_t temp0_1212
                    int32_t temp1_54
                    temp0_1212, temp1_54 = _mm256_i32gather_ps(zmm4, *(r9 + zmm3[0].q), var_9a0_2)
                    zmm4 = temp0_1212
                    zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, var_800_1)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    int32_t temp0_1215
                    int32_t temp1_55
                    temp0_1215, temp1_55 = _mm256_i32gather_ps(zmm3, *(r9 + zmm1[0].q), var_9a0_2)
                    zmm3 = temp0_1215
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm5 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg3, arg3), 
                            zmm4, zmm4), 
                        zmm3, zmm3)
                    zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm1, zmm5, 1), _mm256_sqrt_ps(zmm5))
                    zmm5 = arg7
                    var_900 = _mm256_maskstore_ps(var_9a0_2, arg3)
                    var_8e0 = _mm256_maskstore_ps(var_9a0_2, zmm4)
                    var_8c0 = _mm256_maskstore_ps(var_9a0_2, zmm3)
                    var_8a0 = _mm256_maskstore_ps(var_9a0_2, zmm1)
                case 2
                    zmm1 = data_143442de0
                    arg3 = _mm256_add_epi32(arg3, 
                        _mm256_inserti128_si256(_mm256_permutevar8x32_epi32(zmm1, zmm4), 
                            __vpermd_ymmqq_ymmqq_memqq(zmm1, var_9c0_2)[0].o, 1))
                    zmm3 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 0x1f)
                    zmm1 = zmm3 & arg3
                    int64_t r10_8 = sx.q(zmm1[0])
                    int64_t r11_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int32_t temp0_1235 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                    int64_t r14_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    int64_t rcx_169 = sx.q(zmm1[0])
                    int64_t rdx_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int32_t temp0_1239 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                    int64_t rsi_65 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = zx.o(*(r9 + r10_8))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + r11_1), 1)
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + sx.q(temp0_1235)), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + r14_8), 3)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + rcx_169), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + rdx_22), 5)
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + sx.q(temp0_1239)), 6)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + rsi_65), 7)
                    zmm1 = zmm3 & _mm256_add_epi32(arg3, arg8)
                    int64_t r10_9 = sx.q(zmm1[0])
                    int64_t r11_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int64_t r14_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int64_t r15_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    int64_t rsi_67 = sx.q(zmm1[0])
                    int64_t rcx_172 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int64_t rdx_25 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int32_t temp0_1255 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                    zmm1[0].o = zx.o(*(r9 + r10_9))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + r11_2), 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + r14_9), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + r15_7), 3)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + rsi_67), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + rcx_172), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + rdx_25), 6)
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r9 + sx.q(temp0_1255)), 7)
                    arg3 = zmm3 & _mm256_add_epi32(arg3, arg13)
                    float rcx_174 = arg3[0]
                    int64_t r10_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1))
                    int64_t r11_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2))
                    int64_t rdi_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3))
                    arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                    float rsi_68 = arg3[0]
                    int64_t rdx_28 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1))
                    int64_t r14_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2))
                    int64_t rbx_58 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3))
                    arg3[0].o = zx.o(*(r9 + sx.q(rcx_174)))
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r10_10), 1)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r11_3), 2)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + rdi_45), 3)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + sx.q(rsi_68)), 4)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + rdx_28), 5)
                    zmm3 = _mm256_cvtepu16_epi32(zmm4[0].o)
                    zmm4 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    zmm3 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm3, zmm4))
                    arg7 = zmm5
                    zmm5 = _mm256_broadcast_ss(32767f)
                    zmm3 = _mm256_div_ps(zmm3, zmm5)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + r14_10), 6)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                            zmm4)), 
                        zmm5)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r9 + rbx_58), 7)
                    arg3 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg3[0].o), 
                            zmm4)), 
                        zmm5)
                    zmm4 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm3, zmm3), 
                            zmm1, zmm1), 
                        arg3, arg3)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    zmm4 = _mm256_and_ps(_mm256_cmp_ps(zmm5, zmm4, 1), _mm256_sqrt_ps(zmm4))
                    zmm5 = arg7
                    var_900 = _mm256_maskstore_ps(var_9a0_2, zmm3)
                    var_8e0 = _mm256_maskstore_ps(var_9a0_2, zmm1)
                    var_8c0 = _mm256_maskstore_ps(var_9a0_2, arg3)
                    var_8a0 = _mm256_maskstore_ps(var_9a0_2, zmm4)
                case 3
                    arg7[0].o = zx.o(0)
                    int32_t temp0_1304
                    int32_t temp1_56
                    temp0_1304, temp1_56 = _mm256_i32gather_ps(arg7, *(r9 + arg14[0]), var_9a0_2)
                    zmm1 = _mm256_add_epi32(arg14, arg13)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    int32_t temp0_1307
                    int32_t temp1_57
                    temp0_1307, temp1_57 = _mm256_i32gather_ps(zmm3, *(r9 + zmm1[0].q), var_9a0_2)
                    zmm4 = temp1_57
                    zmm1 = __vpaddd_ymmqq_ymmqq_memqq(arg14, var_800_1)
                    zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    uint32_t var_a00_4[0x8] = zmm5
                    int32_t temp0_1310
                    int32_t temp1_58
                    temp0_1310, temp1_58 = _mm256_i32gather_ps(zmm4, *(r9 + zmm1[0].q), var_9a0_2)
                    zmm4 = temp0_1310
                    zmm5 = temp1_58
                    zmm1 = __vpaddd_ymmqq_ymmqq_memqq(arg14, var_7e0_1)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    float var_940_3[0x8] = arg8
                    int32_t temp0_1313
                    int32_t temp1_59
                    temp0_1313, temp1_59 = _mm256_i32gather_ps(zmm5, *(r9 + zmm1[0].q), var_9a0_2)
                    zmm1 = __vpbroadcastd_ymmqq_memd(0x10)
                    arg8 = _mm256_add_epi32(arg14, zmm1)
                    zmm1[0].o = zx.o(0)
                    arg11[0].o = arg15[0].o
                    arg15 = arg13
                    int32_t temp0_1316
                    int32_t temp1_60
                    temp0_1316, temp1_60 = _mm256_i32gather_ps(zmm1, *(r9 + arg8[0].q), var_9a0_2)
                    zmm1 = temp0_1316
                    arg13 = temp1_60
                    arg8 = _mm256_add_epi32(arg14, __vpbroadcastd_ymmqq_memd(0x14))
                    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                    int32_t temp0_1320
                    int32_t temp1_61
                    temp0_1320, temp1_61 = _mm256_i32gather_ps(arg13, *(r9 + arg8[0].q), var_9a0_2)
                    arg8 = __vpaddd_ymmqq_ymmqq_memqq(arg9, var_920_1)
                    arg3 = _mm256_add_epi32(arg8, arg3)
                    arg8[0].o = zx.o(0)
                    int32_t temp0_1323
                    int32_t temp1_62
                    temp0_1323, temp1_62 =
                        _mm256_i32gather_epi32(arg8, *(r9 + arg3[0].q), var_9a0_2)
                    arg8 = temp0_1323
                    arg3 = _mm256_srli_epi32(arg8, 0x15)
                    arg14 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg3 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg3, arg14))
                    arg9 = arg16
                    arg16 = _mm256_broadcast_ss(1023f)
                    arg3 = _mm256_fmadd_ps(_mm256_div_ps(arg3, arg16), temp0_1313, temp0_1304)
                    zmm5 = _mm256_add_epi32(
                        _mm256_srli_epi32(arg8, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff), arg14)
                    arg14 = var_920_1
                    zmm5 = _mm256_div_ps(_mm256_cvtepi32_ps(zmm5), arg16)
                    arg16 = arg9
                    arg7 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(
                            arg8 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                            __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                        _mm256_broadcast_ss(511f))
                    arg8 = var_940_3
                    zmm5 = _mm256_fmadd_ps(zmm5, zmm1, temp0_1307)
                    arg7 = _mm256_fmadd_ps(arg7, temp0_1320, zmm4)
                    arg13 = arg15
                    arg15[0].o = arg11[0].o
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm3 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg3, arg3), 
                            zmm5, zmm5), 
                        arg7, arg7)
                    zmm1 = _mm256_cmp_ps(zmm1, zmm3, 1)
                    zmm3 = _mm256_sqrt_ps(zmm3)
                    zmm1 = _mm256_and_ps(zmm1, zmm3)
                    var_900 = _mm256_maskstore_ps(var_9a0_2, arg3)
                    var_8e0 = _mm256_maskstore_ps(var_9a0_2, zmm5)
                    zmm5 = var_a00_4
                    var_8c0 = _mm256_maskstore_ps(var_9a0_2, arg7)
                    var_8a0 = _mm256_maskstore_ps(var_9a0_2, zmm1)
                case 4
                    zmm1 = _mm256_add_epi32(_mm256_add_epi32(arg14, arg9), arg3)
                    arg3[0].o = zx.o(0)
                    int32_t temp0_1357
                    int32_t temp1_63
                    temp0_1357, temp1_63 =
                        _mm256_i32gather_epi32(arg3, *(r9 + zmm1[0].q), var_9a0_2)
                    arg3 = temp0_1357
                    zmm1[0].o = zx.o(0)
                    zmm3 = _mm256_srli_epi32(arg3, 0x15)
                    zmm4 = _mm256_srli_epi32(arg3, 0xa)
                    arg13[0].o = arg15[0].o
                    arg15 = arg14
                    arg9 = arg8
                    arg8 = arg11
                    arg11 = zmm5
                    zmm4 &= __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg3 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                    zmm5 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm3 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm3, zmm5))
                    arg7 = _mm256_broadcast_ss(1023f)
                    zmm3 = _mm256_div_ps(zmm3, arg7)
                    zmm4 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm4, zmm5)), arg7)
                    arg3 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(arg3, 
                            __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                        _mm256_broadcast_ss(511f))
                    zmm5 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm3, zmm3), 
                            zmm4, zmm4), 
                        arg3, arg3)
                    zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm1, zmm5, 1), _mm256_sqrt_ps(zmm5))
                    zmm5 = arg11
                    arg11 = arg8
                    arg8 = arg9
                    arg15[0].o = arg13[0].o
                    var_900 = _mm256_maskstore_ps(var_9a0_2, zmm3)
                    var_8e0 = _mm256_maskstore_ps(var_9a0_2, zmm4)
                    var_8c0 = _mm256_maskstore_ps(var_9a0_2, arg3)
                    var_8a0 = _mm256_maskstore_ps(var_9a0_2, zmm1)
                case 5
                    zmm1 = _mm256_add_epi32(_mm256_add_epi32(arg14, arg9), arg3)
                    zmm4[0].o = zx.o(0)
                    int32_t temp0_1388
                    int32_t temp1_64
                    temp0_1388, temp1_64 =
                        _mm256_i32gather_epi32(zmm4, *(r9 + zmm1[0].q), var_9a0_2)
                    zmm4 = temp0_1388
                    zmm1 = _mm256_srli_epi32(zmm4, 0x15)
                    zmm3 = _mm256_srli_epi32(zmm4, 0xa)
                    uint32_t var_a00_5[0x8] = zmm5
                    zmm5 = _mm256_srli_epi32(zmm4, 5)
                    arg7 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                    arg3 = arg8
                    arg8 = __vpbroadcastd_ymmqq_memd(0x400)
                    arg9 = arg13
                    arg13 = __vpbroadcastd_ymmqq_memd(0x380)
                    arg14 = __vpbroadcastd_ymmqq_memd(0x3d80)
                    zmm1 = (zmm5 & arg7) | (zmm1 & arg8) | _mm256_add_epi32(zmm1 & arg13, arg14)
                    zmm5 = (_mm256_slli_epi32(zmm4, 6) & arg7) | (zmm3 & arg8)
                    zmm3 &= arg13
                    arg13 = arg9
                    zmm3 = _mm256_add_epi32(zmm3, arg14)
                    arg14 = var_920_1
                    zmm3 |= zmm5
                    zmm5 = zmm4 & __vpbroadcastd_ymmqq_memd(0x1c0)
                    arg8 = arg3
                    zmm4 = (_mm256_slli_epi32(zmm4, 0x11) & __vpbroadcastd_ymmqq_memd(0x7e0000))
                        | (zmm4 & __vpbroadcastd_ymmqq_memd(0x200))
                    arg7 = __vpbroadcastd_ymmqq_memd(0x1ec0)
                    zmm4 |= _mm256_add_epi32(zmm5, arg7)
                    zmm5 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm1, zmm1), 
                            zmm3, zmm3), 
                        zmm4, zmm4)
                    arg3[0].o = zx.o(0)
                    arg3 = _mm256_and_ps(_mm256_cmp_ps(arg3, zmm5, 1), _mm256_sqrt_ps(zmm5))
                    zmm5 = var_a00_5
                    var_900 = _mm256_maskstore_ps(var_9a0_2, zmm1)
                    var_8e0 = _mm256_maskstore_ps(var_9a0_2, zmm3)
                    var_8c0 = _mm256_maskstore_ps(var_9a0_2, zmm4)
                    var_8a0 = _mm256_maskstore_ps(var_9a0_2, arg3)
        
        arg6 = _mm256_cmpeq_epi32(zmm5, arg11)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        arg6 ^= zmm1
        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
        arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        zmm1[0].o = arg6[0].o & arg15[0].o
        arg6[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
        arg6[0].o = __vpsraw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
        arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
            arg6 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f)
            arg7 = _mm256_srai_epi32(arg6, 0x1f)
            int32_t var_7c0_1[0x8]
            uint32_t var_7a0_1[0x8]
            float var_780_1[0x8]
            uint32_t var_760_1[0x8]
            
            if (var_a08 u> 5)
                arg6[0].o = zx.o(0)
                var_7c0_1 = _mm256_maskstore_ps(arg7, arg6)
                var_7a0_1 = _mm256_maskstore_ps(arg7, arg6)
                var_780_1 = _mm256_maskstore_ps(arg7, arg6)
                var_760_1 = _mm256_maskstore_ps(arg7, _mm256_broadcast_ss(1f))
            else
                arg3 = _mm256_mullo_epi32(arg11, arg10)
                
                switch (r8_6)
                    case 0
                        arg6 = data_143442de0
                        zmm1 = __vpermd_ymmqq_ymmqq_memqq(arg6, var_9e0_2)
                        arg6 = _mm256_add_epi32(arg3, 
                            _mm256_inserti128_si256(zmm1, 
                                __vpermd_ymmqq_ymmqq_memqq(arg6, var_9c0_2)[0].o, 1))
                        zmm1[0].o = zx.o(0)
                        int32_t temp0_1432
                        int32_t temp1_65
                        temp0_1432, temp1_65 = _mm256_i32gather_ps(zmm1, *(r9 + arg6[0].q), arg7)
                        arg3 = _mm256_add_epi32(arg6, arg13)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        int32_t temp0_1435
                        int32_t temp1_66
                        temp0_1435, temp1_66 = _mm256_i32gather_ps(zmm3, *(r9 + arg3[0].q), arg7)
                        zmm4 = temp1_66
                        arg3 = __vpaddd_ymmqq_ymmqq_memqq(arg6, var_800_1)
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        int32_t temp0_1438
                        int32_t temp1_67
                        temp0_1438, temp1_67 = _mm256_i32gather_ps(zmm4, *(r9 + arg3[0].q), arg7)
                        arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                        int32_t temp0_1441
                        int32_t temp1_68
                        temp0_1441, temp1_68 = _mm256_i32gather_ps(arg3, 
                            *(r9 + __vpaddd_ymmqq_ymmqq_memqq(arg6, var_7e0_1)[0].q), arg7)
                        var_7c0_1 = _mm256_maskstore_ps(arg7, temp0_1432)
                        var_7a0_1 = _mm256_maskstore_ps(arg7, temp0_1435)
                        var_780_1 = _mm256_maskstore_ps(arg7, temp0_1438)
                        var_760_1 = _mm256_maskstore_ps(arg7, temp0_1441)
                    case 1
                        arg6 = data_143442de0
                        zmm1 = __vpermd_ymmqq_ymmqq_memqq(arg6, var_9e0_2)
                        arg6 = _mm256_add_epi32(arg3, 
                            _mm256_inserti128_si256(zmm1, 
                                __vpermd_ymmqq_ymmqq_memqq(arg6, var_9c0_2)[0].o, 1))
                        zmm1[0].o = zx.o(0)
                        int32_t temp0_1453
                        int32_t temp1_69
                        temp0_1453, temp1_69 = _mm256_i32gather_ps(zmm1, *(r9 + arg6[0].q), arg7)
                        zmm1 = temp0_1453
                        arg3 = _mm256_add_epi32(arg6, arg13)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        int32_t temp0_1456
                        int32_t temp1_70
                        temp0_1456, temp1_70 = _mm256_i32gather_ps(zmm3, *(r9 + arg3[0].q), arg7)
                        zmm3 = temp0_1456
                        arg6 = __vpaddd_ymmqq_ymmqq_memqq(arg6, var_800_1)
                        arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                        int32_t temp0_1459
                        int32_t temp1_71
                        temp0_1459, temp1_71 = _mm256_i32gather_ps(arg3, *(r9 + arg6[0].q), arg7)
                        arg3 = temp0_1459
                        arg6[0].o = zx.o(0)
                    label_14029980c:
                        zmm4 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm1, zmm1), 
                                zmm3, zmm3), 
                            arg3, arg3)
                        arg6 = _mm256_and_ps(_mm256_cmp_ps(arg6, zmm4, 1), _mm256_sqrt_ps(zmm4))
                        var_7c0_1 = _mm256_maskstore_ps(arg7, zmm1)
                        var_7a0_1 = _mm256_maskstore_ps(arg7, zmm3)
                        var_780_1 = _mm256_maskstore_ps(arg7, arg3)
                        var_760_1 = _mm256_maskstore_ps(arg7, arg6)
                    case 2
                        arg6 = data_143442de0
                        zmm1 = __vpermd_ymmqq_ymmqq_memqq(arg6, var_9e0_2)
                        zmm3 = _mm256_add_epi32(arg3, 
                            _mm256_inserti128_si256(zmm1, 
                                __vpermd_ymmqq_ymmqq_memqq(arg6, var_9c0_2)[0].o, 1))
                        arg6 = arg7 & zmm3
                        int64_t r8_7 = sx.q(arg6[0])
                        int64_t r10_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        int32_t temp0_1465 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                        int64_t r11_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t rsi_71 = sx.q(arg6[0])
                        int64_t rcx_180 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        int32_t temp0_1469 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                        int64_t rdi_48 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = zx.o(*(r9 + r8_7))
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r10_11), 1)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + sx.q(temp0_1465)), 2)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r11_4), 3)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rsi_71), 4)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rcx_180), 5)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + sx.q(temp0_1469)), 6)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rdi_48), 7)
                        arg6 = arg7 & _mm256_add_epi32(zmm3, arg8)
                        int64_t r8_8 = sx.q(arg6[0])
                        int64_t r10_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        int64_t r11_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                        int64_t r14_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t rsi_73 = sx.q(arg6[0])
                        int64_t rcx_183 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        int64_t rdx_36 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                        int32_t temp0_1485 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
                        arg6[0].o = zx.o(*(r9 + r8_8))
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r10_12), 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r11_5), 2)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r14_12), 3)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rsi_73), 4)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rcx_183), 5)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rdx_36), 6)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + sx.q(temp0_1485)), 7)
                        arg6 = arg7 & _mm256_add_epi32(zmm3, arg13)
                        float rcx_185 = arg6[0]
                        int64_t r8_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        int64_t r10_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                        int64_t rdi_52 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        float rsi_74 = arg6[0]
                        int64_t rdx_39 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        int64_t r11_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                        int64_t rbx_66 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = zx.o(*(r9 + sx.q(rcx_185)))
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r8_9), 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r10_13), 2)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rdi_52), 3)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + sx.q(rsi_74)), 4)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rdx_39), 5)
                        arg3 = _mm256_cvtepu16_epi32(arg3[0].o)
                        zmm3 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        arg3 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg3, zmm3))
                        zmm4 = _mm256_broadcast_ss(32767f)
                        arg3 = _mm256_div_ps(arg3, zmm4)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + r11_6), 6)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                zmm3)), 
                            zmm4)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r9 + rbx_66), 7)
                        arg6 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 
                                zmm3)), 
                            zmm4)
                        zmm3 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg3, arg3), 
                                zmm1, zmm1), 
                            arg6, arg6)
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        zmm3 = _mm256_and_ps(_mm256_cmp_ps(zmm4, zmm3, 1), _mm256_sqrt_ps(zmm3))
                        var_7c0_1 = _mm256_maskstore_ps(arg7, arg3)
                        var_7a0_1 = _mm256_maskstore_ps(arg7, zmm1)
                        var_780_1 = _mm256_maskstore_ps(arg7, arg6)
                        var_760_1 = _mm256_maskstore_ps(arg7, zmm3)
                    case 3
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        int32_t temp0_1535
                        int32_t temp1_72
                        temp0_1535, temp1_72 = _mm256_i32gather_ps(zmm3, *(r9 + arg14[0]), arg7)
                        arg6 = _mm256_add_epi32(arg14, arg13)
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        int32_t temp0_1538
                        int32_t temp1_73
                        temp0_1538, temp1_73 = _mm256_i32gather_ps(zmm4, *(r9 + arg6[0].q), arg7)
                        arg6 = __vpaddd_ymmqq_ymmqq_memqq(arg14, var_800_1)
                        arg8[0].o = zx.o(0)
                        int32_t temp0_1540
                        int32_t temp1_74
                        temp0_1540, temp1_74 = _mm256_i32gather_ps(arg8, *(r9 + arg6[0].q), arg7)
                        arg6 = __vpaddd_ymmqq_ymmqq_memqq(arg14, var_7e0_1)
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        int32_t temp0_1543
                        int32_t temp1_75
                        temp0_1543, temp1_75 = _mm256_i32gather_ps(arg11, *(r9 + arg6[0].q), arg7)
                        zmm1 = temp1_75
                        arg6 = _mm256_add_epi32(arg14, __vpbroadcastd_ymmqq_memd(0x10))
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        int32_t temp0_1547
                        int32_t temp1_76
                        temp0_1547, temp1_76 = _mm256_i32gather_ps(zmm1, *(r9 + arg6[0].q), arg7)
                        zmm5 = temp1_76
                        arg6 = _mm256_add_epi32(arg14, __vpbroadcastd_ymmqq_memd(0x14))
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int32_t temp0_1551
                        int32_t temp1_77
                        temp0_1551, temp1_77 = _mm256_i32gather_ps(zmm5, *(r9 + arg6[0].q), arg7)
                        arg6 =
                            _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg14, var_980_1.32), arg3)
                        arg3[0].o = zx.o(0)
                        int32_t temp0_1554
                        int32_t temp1_78
                        temp0_1554, temp1_78 = _mm256_i32gather_epi32(arg3, *(r9 + arg6[0].q), arg7)
                        arg3 = temp0_1554
                        arg6[0].o = zx.o(0)
                        arg9 = _mm256_srli_epi32(arg3, 0x15)
                        arg13 = _mm256_srli_epi32(arg3, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg14 = __vpbroadcastd_ymmqq_memd(0x3ff)
                        arg15 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg9 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg9, arg15))
                        arg13 = _mm256_add_epi32(arg13, arg15)
                        arg15 = _mm256_broadcast_ss(1023f)
                        arg9 = _mm256_div_ps(arg9, arg15)
                        arg13 = _mm256_div_ps(_mm256_cvtepi32_ps(arg13), arg15)
                        arg3 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(arg3 & arg14, 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg9 = _mm256_fmadd_ps(arg9, temp0_1543, temp0_1535)
                        arg13 = _mm256_fmadd_ps(arg13, temp0_1547, temp0_1538)
                        arg3 = _mm256_fmadd_ps(arg3, temp0_1551, temp0_1540)
                        zmm1 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg9, arg9), 
                                arg13, arg13), 
                            arg3, arg3)
                        arg6 = _mm256_and_ps(_mm256_cmp_ps(arg6, zmm1, 1), _mm256_sqrt_ps(zmm1))
                        var_7c0_1 = _mm256_maskstore_ps(arg7, arg9)
                        var_7a0_1 = _mm256_maskstore_ps(arg7, arg13)
                        var_780_1 = _mm256_maskstore_ps(arg7, arg3)
                        var_760_1 = _mm256_maskstore_ps(arg7, arg6)
                    case 4
                        arg6 =
                            _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg14, var_980_1.32), arg3)
                        arg3[0].o = zx.o(0)
                        int32_t temp0_1586
                        int32_t temp1_79
                        temp0_1586, temp1_79 = _mm256_i32gather_epi32(arg3, *(r9 + arg6[0].q), arg7)
                        arg3 = temp0_1586
                        arg6[0].o = zx.o(0)
                        zmm1 = _mm256_srli_epi32(arg3, 0x15)
                        zmm3 = _mm256_srli_epi32(arg3, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg3 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                        zmm4 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm4))
                        zmm5 = _mm256_broadcast_ss(1023f)
                        zmm1 = _mm256_div_ps(zmm1, zmm5)
                        zmm3 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm3, zmm4)), zmm5)
                        arg3 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(arg3, 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        goto label_14029980c
                    case 5
                        arg6 =
                            _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg14, var_980_1.32), arg3)
                        arg3[0].o = zx.o(0)
                        zmm3[0].o = zx.o(0)
                        int32_t temp0_1617
                        int32_t temp1_80
                        temp0_1617, temp1_80 = _mm256_i32gather_epi32(zmm3, *(r9 + arg6[0].q), arg7)
                        zmm3 = temp0_1617
                        arg6 = _mm256_srli_epi32(zmm3, 0x15)
                        zmm1 = _mm256_srli_epi32(zmm3, 0xa)
                        zmm4 = _mm256_srli_epi32(zmm3, 5)
                        zmm5 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                        arg8 = __vpbroadcastd_ymmqq_memd(0x400)
                        arg9 = __vpbroadcastd_ymmqq_memd(0x380)
                        arg11 = __vpbroadcastd_ymmqq_memd(0x3d80)
                        arg6 = (zmm4 & zmm5) | (arg6 & arg8) | _mm256_add_epi32(arg6 & arg9, arg11)
                        zmm1 = (_mm256_slli_epi32(zmm3, 6) & zmm5) | (zmm1 & arg8)
                            | _mm256_add_epi32(zmm1 & arg9, arg11)
                        zmm4 = zmm3 & __vpbroadcastd_ymmqq_memd(0x1c0)
                        zmm3 = (_mm256_slli_epi32(zmm3, 0x11) & __vpbroadcastd_ymmqq_memd(0x7e0000))
                            | (zmm3 & __vpbroadcastd_ymmqq_memd(0x200))
                            | _mm256_add_epi32(zmm4, __vpbroadcastd_ymmqq_memd(0x1ec0))
                        zmm4 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), 
                                zmm1, zmm1), 
                            zmm3, zmm3)
                        arg3 = _mm256_and_ps(_mm256_cmp_ps(arg3, zmm4, 1), _mm256_sqrt_ps(zmm4))
                        var_7c0_1 = _mm256_maskstore_ps(arg7, arg6)
                        var_7a0_1 = _mm256_maskstore_ps(arg7, zmm1)
                        var_780_1 = _mm256_maskstore_ps(arg7, zmm3)
                        var_760_1 = _mm256_maskstore_ps(arg7, arg3)
            
            arg10 = var_a40_4
            arg9 = var_760_1
            arg11 = _mm256_fmadd_ps(
                _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_mul_ps(var_8e0, var_7a0_1), var_900, var_7c0_1), 
                    var_8c0, var_780_1), 
                var_8a0, arg9)
            arg13[0].o = zx.o(0)
            arg11 = _mm256_cmp_ps(arg13, arg11, 2)
            arg13 = _mm256_broadcast_ss(1f)
            arg14 = _mm256_broadcast_ss(-1f)
            arg11 = _mm256_blendv_ps(arg14, arg13, arg11)
            arg13 = _mm256_sub_ps(arg13, arg10)
            arg11 = _mm256_mul_ps(arg13, arg11)
            arg6 = _mm256_mul_ps(arg11, var_900)
            zmm1 = _mm256_mul_ps(arg11, var_8e0)
            arg3 = _mm256_mul_ps(arg11, var_8c0)
            zmm3 = _mm256_mul_ps(arg11, var_8a0)
            arg6 = _mm256_fmadd_ps(arg6, arg10, var_7c0_1)
            zmm1 = _mm256_fmadd_ps(zmm1, arg10, var_7a0_1)
            arg3 = _mm256_fmadd_ps(arg3, arg10, var_780_1)
            zmm3 = _mm256_fmadd_ps(zmm3, arg10, arg9)
            float var_2a0_1[0x8] = arg6
            float var_280_1[0x8] = zmm1
            float var_260_1[0x8] = arg3
            uint32_t var_240_1[0x8] = zmm3
            arg3 = _mm256_mul_ps(arg3, arg3)
            zmm3 = _mm256_mul_ps(zmm3, zmm3)
            arg6 =
                _mm256_add_ps(_mm256_fmadd_ps(arg3, arg6, arg6), _mm256_fmadd_ps(zmm3, zmm1, zmm1))
            zmm1 = _mm256_broadcast_ss(0.5f)
            arg3 = _mm256_mul_ps(arg6, zmm1)
            float var_1a0_1[0x8] = arg3
            float var_180_1[0x8] = arg3
            float var_160_1[0x8] = arg3
            float var_140_1[0x8] = arg3
            zmm3 = _mm256_broadcast_ss(9.99999994e-09f)
            zmm4 = _mm256_rsqrt_ps(arg6)
            zmm5 = _mm256_cmp_ps(zmm3, arg6, 6)
            arg8 =
                _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(zmm4, zmm4), arg3, zmm1), zmm4, zmm4)
            zmm4 = _mm256_fnmadd_ps(_mm256_mul_ps(arg8, arg8), arg3, zmm1)
            zmm1 = _mm256_fmadd_ps(arg8, zmm4, arg8)
            zmm4 = _mm256_fmadd_ps(zmm4, arg8, arg8)
            arg3 = __vmulps_ymmqq_ymmqq_memqq(zmm4, var_2a0_1)
            arg8 = __vmulps_ymmqq_ymmqq_memqq(zmm1, var_280_1)
            zmm1 = __vmulps_ymmqq_ymmqq_memqq(zmm1, var_260_1)
            zmm4 = __vmulps_ymmqq_ymmqq_memqq(zmm4, var_240_1)
            arg6 = _mm256_cmp_ps(zmm3, arg6, 2)
            arg3 = _mm256_and_ps(arg3, arg6)
            zmm3 = _mm256_and_ps(arg8, arg6)
            zmm1 = _mm256_and_ps(zmm1, arg6)
            arg8 = _mm256_broadcast_ss(1f)
            zmm5 = _mm256_and_ps(zmm5, arg8)
            arg6 = _mm256_or_ps(_mm256_and_ps(zmm4, arg6), zmm5)
            var_900 = _mm256_maskstore_ps(arg7, arg3)
            var_8e0 = _mm256_maskstore_ps(arg7, zmm3)
            var_8c0 = _mm256_maskstore_ps(arg7, zmm1)
            var_8a0 = _mm256_maskstore_ps(arg7, arg6)
    
    zmm1[0].o = var_900[0].o
    arg9[0].o = var_900[4].o
    zmm3[0].o = var_8e0[0].o
    zmm4[0].o = var_8e0[4].o
    zmm5[0].o = var_8c0[0].o
    arg7[0].o = var_8c0[4].o
    arg8[0].o = var_8a0[0].o
    arg6[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg8[0].o)
    zmm5[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg8[0].o)
    arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    arg3[0].o = arg8[0].q | arg6[0].q << 0x40
    int128_t var_3c0 = arg3[0].o
    arg3[0].o = var_8a0[4].o
    arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
    int128_t var_3b0_1 = arg6[0].o
    arg6[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm1[0].o = arg6[0].q | zmm5[0].q << 0x40
    int128_t var_3a0_1 = zmm1[0].o
    arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
    int128_t var_390_1 = arg6[0].o
    arg6[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg3[0].o)
    zmm1[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
    zmm3[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
    int128_t var_380_1 = zmm3[0].o
    arg3[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg3[0].o)
    arg6[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
    int128_t var_370_1 = arg6[0].o
    arg6[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm4[0].o)
    zmm1[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg3[0].o)
    int128_t var_360_1 = zmm1[0].o
    arg6[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg3[0].o)
    int128_t var_350_1 = arg6[0].o
    uint64_t i_9 = zx.q(_mm256_movemask_ps(arg16))
    
    do
        uint64_t rcx_189 = _tzcnt_u64(i_9)
        int32_t var_2c0[0x8] = arg12
        arg6[0].o = (&var_3c0)[rcx_189]
        result[sx.q(var_2c0[zx.q(rcx_189.d) & 7]) * 3] = arg6[0].o
        i_9 &= rol.q(-2, rcx_189.b)
    while (i_9 != 0)

arg7[0].o = var_f8
arg8[0].o = var_e8
arg9[0].o = var_d8
arg10[0].o = var_c8
arg11[0].o = var_b8
arg12[0].o = var_a8
arg13[0].o = var_98
arg14[0].o = var_88
arg15[0].o = var_78
arg16[0].o = var_68
_mm256_zeroupper()
return result
