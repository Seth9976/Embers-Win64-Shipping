// 函数: sub_1402a2120
// 地址: 0x1402a2120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_10 = arg6
int256_t* var_18 = arg5
int128_t var_58 = arg19[0].o
int128_t var_68 = arg18[0].o
int128_t var_78 = arg17[0].o
int128_t var_88 = arg16[0].o
int128_t var_98 = arg15[0].o
int128_t var_a8 = arg14[0].o
int128_t var_b8 = arg13[0].o
int128_t var_c8 = arg12[0].o
int128_t var_d8 = arg11[0].o
int128_t var_e8 = arg10[0].o
int64_t rdi = sx.q(arg23)
uint64_t rbx_1 = zx.q(*(&data_143442e20 + (rdi << 2)) * *(&data_143442e00 + (rdi << 2)))
int32_t var_9ec = rbx_1.d
int32_t r11 = 0
int64_t var_9e8 = rdi
int32_t rcx = 0x18

if (rdi != 3)
    rcx = 0

int32_t r13_4 = ((arg24 s>> 0x1f u>> 0x1d) + arg24) & 0xfffffff8
int32_t var_9e0[0x8]
float var_9c0[0x8]
int32_t var_840[0x8]
float var_500[0x8]
float zmm0[0x8]
float zmm1[0x8]
uint32_t zmm3[0x8]

if (r13_4 s> 0)
    zmm0[0].o = zx.o(arg4)
    zmm0 = _mm256_broadcastq_epi64(zmm0[0].q)
    uint32_t var_2c0_1[0x8] = zmm0
    zmm0[0].o = zx.o(rcx)
    zmm1 = _mm256_broadcastd_epi32(zmm0[0])
    int32_t var_700_1[0x8] = zmm1
    zmm0[0].o = _mm_broadcastd_epi32(zmm0[0])
    zmm0 = _mm256_cvtepu32_epi64(zmm0[0].o)
    var_500 = zmm0
    zmm0[0].o = zx.o(var_9ec)
    zmm0 = _mm256_broadcastd_epi32(zmm0[0])
    int32_t var_640_1[0x8] = zmm0
    zmm0[0].o = zx.o(0)
    zmm1[0].o = arg21
    int32_t rbx_2
    rbx_2.b = zx.o(0) f>= zmm1[0]
    zmm0[0].o = zx.o(neg.d(rbx_2))
    float var_540_1[0x8] = _mm256_broadcastd_epi32(zmm0[0])
    int32_t rbx_4 = arg20 - 2
    zmm0 = _mm256_broadcastss_ps(zmm1[0].o)
    float var_2e0_1[0x8] = zmm0
    zmm0[0].o = arg7[0].o
    zmm0[0] = float.s(arg20 - 1)
    zmm0[0].o = zmm0[0].o f* zmm1[0]
    int32_t rcx_6 = int.d(zmm0[0]) s>> 0x1f
    int32_t rcx_7 = rcx_6 & not.d(rcx_6)
    
    if (rbx_4 s> rcx_7)
        rbx_4 = rcx_7
    
    zmm1[0].o = zx.o(rbx_4)
    arg12 = _mm256_broadcastd_epi32(zmm1[0])
    float var_320_1[0x8] = _mm256_broadcastss_ps(zmm0[0].o)
    int32_t var_4a0[0x8]
    arg5 = &var_4a0
    r11 = 0
    arg9 = _mm256_cmpeq_epi32(arg9, arg9)
    arg15 = __vpbroadcastd_ymmqq_memd(4)
    arg16 = __vpbroadcastd_ymmqq_memd(8)
    int32_t var_820_1[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
    zmm0 = _mm256_broadcast_ss(1.40129846e-45f)
    uint32_t var_800_1[0x8] = zmm0
    int64_t var_848_1 = arg3
    int64_t var_850_1 = arg2
    var_840 = arg15
    var_9e0 = arg16
    int32_t var_924_1 = r13_4
    int32_t var_980_1[0x8] = arg12
    
    do
        zmm0[0].o = zx.o(r11)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_broadcastd_epi32(zmm0[0]), 3), 
            data_143442140)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        arg13[0].o = zx.o(0)
        int64_t temp0_49
        int32_t temp1_1
        temp0_49, temp1_1 = _mm256_i32gather_epi32(arg13, *(arg2 + zmm0[0].q), zmm1)
        arg13 = temp0_49
        zmm1 = temp1_1
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        arg7[0].o = zx.o(0)
        int64_t temp0_51
        int32_t temp1_2
        temp0_51, temp1_2 = _mm256_i32gather_epi32(arg7, *(arg2 + (zmm0 | arg15)[0].q), zmm1)
        arg7 = temp0_51
        zmm0 = _mm256_slli_epi32(arg7, 4)
        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
        arg12[0].o = zx.o(0)
        int64_t temp0_54
        int32_t temp1_3
        temp0_54, temp1_3 = _mm256_i32gather_epi32(arg12, *(arg3 + (zmm0 | arg16)[0].q), arg7)
        arg12 = temp0_54
        arg7 = temp1_3
        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
        zmm0[0].o = zx.o(0)
        int64_t temp0_56
        int32_t temp1_4
        temp0_56, temp1_4 = _mm256_i32gather_epi32(zmm0, *(arg3 + (zmm0 | var_820_1)[0].q), arg7)
        zmm0 = temp0_56
        arg7 = temp1_4
        zmm1 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_800_1)
        float var_9a0[0x8]
        arg11 = var_9a0
        float var_620[0x8]
        float var_600[0x8]
        int32_t var_5e0[0x8]
        uint32_t var_5c0[0x8]
        
        if (_mm256_movemask_ps(zmm1) != 0)
            arg7[0].o = zx.o(0)
            int64_t temp0_59
            int32_t temp1_5
            temp0_59, temp1_5 = _mm256_i32gather_ps(arg7, *(arg4 + arg12[0].q), zmm1)
            arg7 = temp0_59
            zmm3 = _mm256_add_epi32(arg12, arg15)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            int64_t temp0_62
            int32_t temp1_6
            temp0_62, temp1_6 = _mm256_i32gather_ps(arg8, *(arg4 + zmm3[0].q), zmm1)
            arg8 = temp0_62
            arg9 = temp1_6
            zmm3 = _mm256_add_epi32(arg12, arg16)
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            int64_t temp0_65
            int32_t temp1_7
            temp0_65, temp1_7 = _mm256_i32gather_ps(arg9, *(arg4 + zmm3[0].q), zmm1)
            arg9 = temp0_65
            arg10 = temp1_7
            zmm3 = _mm256_fnmadd_ps(
                _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg7, arg7), arg8, 
                    arg8), 
                arg9, arg9)
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            arg10 = _mm256_cmp_ps(arg10, zmm3, 1)
            zmm3 = _mm256_and_ps(arg10, _mm256_sqrt_ps(zmm3))
            var_620 = _mm256_maskstore_ps(zmm1, arg7)
            var_600 = _mm256_maskstore_ps(zmm1, arg8)
            var_5e0 = _mm256_maskstore_ps(zmm1, arg9)
            arg9 = _mm256_cmpeq_epi32(arg9, arg9)
            var_5c0 = _mm256_maskstore_ps(zmm1, zmm3)
        
        arg18 = zmm1 ^ arg9
        
        if (_mm256_movemask_ps(arg18) != 0)
            zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
            zmm3 = _mm256_cvtepi32_epi64(zmm1[0].o)
            zmm1 = _mm256_cvtepi32_epi64(arg12[0].o)
            arg14 = __vpbroadcastd_ymmqq_memd(2)
            arg8 = _mm256_cmpgt_epi32(arg14, zmm0) | var_540_1
            arg7 = arg8 & arg18
            arg19 = arg15
            
            if (_mm256_movemask_ps(arg7) == 0)
                arg10 = var_9c0
            else
                arg15[0].o = zx.o(0)
                arg11 = _mm256_blendv_ps(arg11, arg15, arg7)
                arg10 = _mm256_blendv_ps(var_9c0, arg15, arg7)
            
            arg7 = var_500
            arg17 = _mm256_add_epi64(zmm3, arg7)
            zmm1 = _mm256_add_epi64(zmm1, arg7)
            float var_920_1[0x8] = zmm1
            int32_t var_680_1[0x8] = arg8
            arg16 = arg8 & not.32(arg18)
            int32_t temp0_90 = _mm256_movemask_ps(arg16)
            float var_a20_1[0x8]
            
            if (temp0_90 == 0)
                zmm0[0].o = zx.o(0)
                var_a20_1 = zmm0
                arg16 = var_9e0
                arg15 = arg19
            else
                zmm1[0].o = zx.o(0)
                var_a20_1 = zmm1
                arg15 = arg18
                arg18 = arg14
                arg14 = _mm256_add_epi32(zmm0, arg9)
                zmm1[0].o = arg21
                
                if (zmm1[0].o f>= 1f)
                    arg11 = _mm256_blendv_ps(arg11, arg14, arg16)
                    arg10 = _mm256_blendv_ps(arg10, arg14, arg16)
                    arg16 = var_9e0
                    arg14 = arg18
                    arg18 = arg15
                    arg15 = arg19
                else
                    uint32_t var_560_1[0x8] = arg12
                    zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm0, var_640_1)
                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                    arg7 = __vpaddq_ymmqq_ymmqq_memqq(var_2c0_1, var_920_1)
                    zmm3 = _mm256_add_epi64(arg17, var_2c0_1)
                    arg8 = __vpbroadcastq_ymmqq_memq(3)
                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    zmm0 = _mm256_add_epi64(zmm0, _mm256_add_epi64(arg7, arg8))
                    zmm1 = _mm256_add_epi64(zmm1, _mm256_add_epi64(zmm3, arg8))
                    arg7 = __vpbroadcastq_ymmqq_memq(-4)
                    float var_6a0_1[0x8] = zmm1 & arg7
                    arg12 = zmm0 & arg7
                    arg19 = _mm256_min_epi32(
                        __vpmaxsd_ymmqq_ymmqq_memqq(
                            _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                                _mm256_cvtepi32_ps(arg14), var_2e0_1)), 
                            data_142fc9440), 
                        arg14)
                    int32_t var_a20_2[0x8] = arg14
                    int32_t var_660_1[0x8] = arg19
                    var_9c0 = arg10
                    float var_9a0_1[0x8] = arg11
                    float var_6c0_1[0x8] = arg18
                    int64_t var_6e0_1[0x4] = arg17
                    
                    if (arg20 s< 0x100)
                        zmm0 = _mm256_add_epi64(arg12, _mm256_cvtepi32_epi64(arg19[0].o))
                        char r12_1 = temp0_90.b
                        int128_t var_520
                        arg19[0].o = var_520
                        
                        if ((r12_1 & 1) == 0)
                            arg18 = arg15
                            arg15 = var_6a0_1
                            
                            if ((r12_1 & 2) != 0)
                                goto label_1402a2e8a
                            
                            goto label_1402a2b06
                        
                        arg19[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg19[0].o, zx.d(*zmm0[0].q), 0)
                        arg18 = arg15
                        arg15 = var_6a0_1
                        
                        if ((r12_1 & 2) != 0)
                        label_1402a2e8a:
                            uint16_t rcx_77[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg19[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg19[0].o, rcx_77, 1)
                            zmm1 = var_660_1
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            
                            if ((r12_1 & 4) == 0)
                                goto label_1402a2b1f
                            
                            goto label_1402a2eab
                        
                    label_1402a2b06:
                        zmm1 = var_660_1
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((r12_1 & 4) == 0)
                        label_1402a2b1f:
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((r12_1 & 8) != 0)
                                goto label_1402a2ecd
                            
                            goto label_1402a2b2e
                        
                    label_1402a2eab:
                        arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg19[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg19[0].o, zx.d(*arg7[0].q), 2)
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((r12_1 & 8) != 0)
                        label_1402a2ecd:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            uint16_t rcx_81[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg19[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg19[0].o, rcx_81, 3)
                            zmm0 = _mm256_add_epi64(arg15, zmm1)
                            
                            if ((r12_1 & 0x10) == 0)
                                goto label_1402a2b3c
                            
                            goto label_1402a2ef7
                        
                    label_1402a2b2e:
                        zmm0 = _mm256_add_epi64(arg15, zmm1)
                        
                        if ((r12_1 & 0x10) == 0)
                        label_1402a2b3c:
                            
                            if ((r12_1 & 0x20) != 0)
                                goto label_1402a2f0c
                            
                            goto label_1402a2b46
                        
                    label_1402a2ef7:
                        arg19[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg19[0].o, zx.d(*zmm0[0].q), 4)
                        
                        if ((r12_1 & 0x20) != 0)
                        label_1402a2f0c:
                            uint16_t rcx_85[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg19[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg19[0].o, rcx_85, 5)
                            
                            if ((r12_1 & 0x40) == 0)
                                goto label_1402a2b50
                            
                            goto label_1402a2f1e
                        
                    label_1402a2b46:
                        
                        if ((r12_1 & 0x40) != 0)
                        label_1402a2f1e:
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg19[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg19[0].o, zx.d(*zmm1[0].q), 6)
                            
                            if (temp0_90.b s< 0)
                            label_1402a2f3a:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                uint16_t rcx_89[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg19[0].o =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg19[0].o, rcx_89, 7)
                        else
                        label_1402a2b50:
                            
                            if (temp0_90.b s< 0)
                                goto label_1402a2f3a
                        
                        zmm0[0].o = arg19[0].o & data_142fc92e0
                        zmm0 = __vpcmpgtd_ymmqq_ymmqq_memqq(_mm256_cvtepu16_epi32(zmm0[0].o), 
                            var_980_1)
                        arg14 = zmm0 ^ arg9
                        var_520.32 = arg14
                        
                        if (_mm256_movemask_ps(zmm0 & not.32(arg16)) == 0)
                            zmm1 = var_660_1
                        else
                            arg7 = var_a20_2
                            zmm3 = var_660_1
                            zmm1 = _mm256_blendv_ps(zmm3, arg7, arg14)
                            arg11 = _mm256_sub_epi32(zmm3, arg9)
                            arg14 = zmm0 & not.32(_mm256_cmpgt_epi32(arg11, arg7) ^ arg9)
                            arg17 = arg16 & arg14
                            int32_t i = _mm256_movemask_ps(arg17)
                            
                            if (i != 0)
                                zmm0 = zmm3
                                
                                do
                                    arg10 = arg11
                                    arg7 = _mm256_cvtepi32_epi64(arg10[0].o)
                                    arg11 = _mm256_add_epi64(arg12, arg7)
                                    char temp0_178 = _mm256_movemask_ps(arg17)
                                    int128_t var_960
                                    uint32_t rcx_64
                                    
                                    if ((temp0_178 & 1) != 0)
                                        zmm3[0].o = var_960
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                            zx.d(*arg11[0].q), 0)
                                        
                                        if ((temp0_178 & 2) != 0)
                                            rcx_64 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rcx_64, 1)
                                    else
                                        zmm3[0].o = var_960
                                        
                                        if ((temp0_178 & 2) != 0)
                                            rcx_64 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rcx_64, 1)
                                    arg7[0].o = _mm256_extracti128_si256(arg10, 1)
                                    
                                    if ((temp0_178 & 4) == 0)
                                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                        
                                        if ((temp0_178 & 8) != 0)
                                            goto label_1402a2bf2
                                        
                                        goto label_1402a2cf9
                                    
                                    arg8[0].o = _mm256_extracti128_si256(arg11, 1)
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*arg8[0].q), 2)
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_178 & 8) != 0)
                                    label_1402a2bf2:
                                        arg8[0].o = _mm256_extracti128_si256(arg11, 1)
                                        uint16_t rcx_52[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_52, 3)
                                        arg11 = _mm256_add_epi64(arg15, arg7)
                                        
                                        if ((temp0_178 & 0x10) == 0)
                                            goto label_1402a2d07
                                        
                                        goto label_1402a2c1c
                                    
                                label_1402a2cf9:
                                    arg11 = _mm256_add_epi64(arg15, arg7)
                                    
                                    if ((temp0_178 & 0x10) == 0)
                                    label_1402a2d07:
                                        
                                        if ((temp0_178 & 0x20) != 0)
                                            goto label_1402a2c31
                                        
                                        goto label_1402a2d11
                                    
                                label_1402a2c1c:
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*arg11[0].q), 4)
                                    
                                    if ((temp0_178 & 0x20) != 0)
                                    label_1402a2c31:
                                        uint32_t rcx_56 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_56, 5)
                                        
                                        if ((temp0_178 & 0x40) == 0)
                                            goto label_1402a2d1b
                                        
                                        goto label_1402a2c43
                                    
                                label_1402a2d11:
                                    
                                    if ((temp0_178 & 0x40) != 0)
                                    label_1402a2c43:
                                        arg7[0].o = _mm256_extracti128_si256(arg11, 1)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                            zx.d(*arg7[0].q), 6)
                                        
                                        if (temp0_178 s< 0)
                                        label_1402a2c5f:
                                            arg7[0].o = _mm256_extracti128_si256(arg11, 1)
                                            uint16_t rcx_60[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rcx_60, 7)
                                    else
                                    label_1402a2d1b:
                                        
                                        if (temp0_178 s< 0)
                                            goto label_1402a2c5f
                                    
                                    var_960 = zmm3[0].o
                                    arg7[0].o = zmm3[0].o & data_142fc92e0
                                    arg7 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepu16_epi32(arg7[0].o), var_980_1)
                                    arg11 = arg7 & arg14
                                    arg7[0].o = zx.o(0)
                                    arg8 = arg11 & arg16
                                    
                                    if (_mm256_movemask_ps(arg8) != i)
                                        arg7 = arg11 ^ arg14
                                    
                                    zmm1 = _mm256_blendv_ps(zmm1, zmm0, arg11)
                                    arg11 = _mm256_sub_epi32(arg10, arg9)
                                    arg14 = __vpcmpgtd_ymmqq_ymmqq_memqq(arg11, var_a20_2)
                                        & not.32(arg7)
                                    arg17 = arg14 & arg16
                                    i = _mm256_movemask_ps(arg17)
                                    zmm0 = arg10
                                while (i != 0)
                        
                        arg7 = var_520.32
                        
                        if (_mm256_movemask_ps(_mm256_andnot_ps(arg7, arg16)) != 0)
                            arg7 = _mm256_xor_ps(arg7, arg9)
                            zmm3[0].o = zx.o(0)
                            zmm1 = _mm256_blendv_ps(zmm1, zmm3, arg7)
                            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(arg9, var_660_1)
                            arg8 = _mm256_cmpgt_epi32(zmm0, zmm3)
                            arg10 = arg8 & arg7
                            arg14 = arg10 & arg16
                            int32_t i_1 = _mm256_movemask_ps(arg14)
                            
                            if (i_1 != 0)
                                do
                                    arg7 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                    arg11 = _mm256_add_epi64(arg12, arg7)
                                    char temp0_329 = _mm256_movemask_ps(arg14)
                                    int128_t var_7c0
                                    uint32_t rcx_127
                                    
                                    if ((temp0_329 & 1) != 0)
                                        zmm3[0].o = var_7c0
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                            zx.d(*arg11[0].q), 0)
                                        
                                        if ((temp0_329 & 2) != 0)
                                            rcx_127 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rcx_127, 1)
                                    else
                                        zmm3[0].o = var_7c0
                                        
                                        if ((temp0_329 & 2) != 0)
                                            rcx_127 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rcx_127, 1)
                                    arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                                    
                                    if ((temp0_329 & 4) == 0)
                                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                        
                                        if ((temp0_329 & 8) != 0)
                                            goto label_1402a3522
                                        
                                        goto label_1402a3629
                                    
                                    arg8[0].o = _mm256_extracti128_si256(arg11, 1)
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*arg8[0].q), 2)
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_329 & 8) != 0)
                                    label_1402a3522:
                                        arg8[0].o = _mm256_extracti128_si256(arg11, 1)
                                        uint16_t rcx_115[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_115, 3)
                                        arg11 = _mm256_add_epi64(arg15, arg7)
                                        
                                        if ((temp0_329 & 0x10) == 0)
                                            goto label_1402a3637
                                        
                                        goto label_1402a354c
                                    
                                label_1402a3629:
                                    arg11 = _mm256_add_epi64(arg15, arg7)
                                    
                                    if ((temp0_329 & 0x10) == 0)
                                    label_1402a3637:
                                        
                                        if ((temp0_329 & 0x20) != 0)
                                            goto label_1402a3561
                                        
                                        goto label_1402a3641
                                    
                                label_1402a354c:
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*arg11[0].q), 4)
                                    
                                    if ((temp0_329 & 0x20) != 0)
                                    label_1402a3561:
                                        uint32_t rcx_119 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_119, 5)
                                        
                                        if ((temp0_329 & 0x40) == 0)
                                            goto label_1402a364b
                                        
                                        goto label_1402a3573
                                    
                                label_1402a3641:
                                    
                                    if ((temp0_329 & 0x40) != 0)
                                    label_1402a3573:
                                        arg7[0].o = _mm256_extracti128_si256(arg11, 1)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                            zx.d(*arg7[0].q), 6)
                                        
                                        if (temp0_329 s< 0)
                                        label_1402a358f:
                                            arg7[0].o = _mm256_extracti128_si256(arg11, 1)
                                            uint16_t rcx_123[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm3[0].o, rcx_123, 7)
                                    else
                                    label_1402a364b:
                                        
                                        if (temp0_329 s< 0)
                                            goto label_1402a358f
                                    
                                    var_7c0 = zmm3[0].o
                                    arg7[0].o = zmm3[0].o & data_142fc92e0
                                    arg7 = __vpcmpgtd_ymmqq_ymmqq_memqq(
                                        _mm256_cvtepu16_epi32(arg7[0].o), var_980_1)
                                    arg11 = arg7 & not.32(arg10)
                                    arg7[0].o = zx.o(0)
                                    arg8 = arg11 & arg16
                                    int32_t temp0_337 = _mm256_movemask_ps(arg8)
                                    arg14[0].o = zx.o(0)
                                    
                                    if (temp0_337 != i_1)
                                        arg14 = arg11 ^ arg10
                                    
                                    zmm1 = _mm256_blendv_ps(zmm1, zmm0, arg11)
                                    zmm0 = _mm256_add_epi32(zmm0, arg9)
                                    arg7 = _mm256_cmpgt_epi32(zmm0, arg7)
                                    arg10 = arg7 & arg14
                                    arg14 = arg10 & arg16
                                    i_1 = _mm256_movemask_ps(arg14)
                                while (i_1 != 0)
                        
                        arg10 = var_9c0
                        int128_t var_710
                        arg7[0].o = var_710
                        arg11 = _mm256_blendv_ps(var_9a0_1, zmm1, arg16)
                        zmm0 = _mm256_add_epi64(arg12, _mm256_cvtepi32_epi64(arg11[0].o))
                        
                        if ((r12_1 & 1) == 0)
                            arg14 = var_6c0_1
                            arg17 = var_6e0_1
                            
                            if ((r12_1 & 2) != 0)
                                goto label_1402a236e
                            
                            goto label_1402a3703
                        
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm0[0].q), 0)
                        arg14 = var_6c0_1
                        arg17 = var_6e0_1
                        
                        if ((r12_1 & 2) != 0)
                        label_1402a236e:
                            uint16_t rcx_11[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_11, 1)
                            zmm1[0].o = _mm256_extracti128_si256(arg11, 1)
                            
                            if ((r12_1 & 4) == 0)
                                goto label_1402a3713
                            
                            goto label_1402a2386
                        
                    label_1402a3703:
                        zmm1[0].o = _mm256_extracti128_si256(arg11, 1)
                        int128_t var_580
                        
                        if ((r12_1 & 4) == 0)
                        label_1402a3713:
                            zmm3[0].o = var_580
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((r12_1 & 8) != 0)
                                goto label_1402a23b9
                            
                            goto label_1402a372b
                        
                    label_1402a2386:
                        zmm3[0].o = arg7[0].o
                        arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg7[0].o = zmm3[0].o
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*arg7[0].q), 2)
                        zmm3[0].o = var_580
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((r12_1 & 8) != 0)
                        label_1402a23b9:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            uint16_t rcx_15[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_15, 3)
                            zmm0 = _mm256_add_epi64(arg15, zmm1)
                            
                            if ((r12_1 & 0x10) == 0)
                                goto label_1402a3739
                            
                            goto label_1402a23e3
                        
                    label_1402a372b:
                        zmm0 = _mm256_add_epi64(arg15, zmm1)
                        
                        if ((r12_1 & 0x10) != 0)
                        label_1402a23e3:
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm0[0].q), 4)
                            
                            if ((r12_1 & 0x20) != 0)
                            label_1402a23f8:
                                uint16_t rcx_19[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_19, 5)
                                
                                if ((r12_1 & 0x40) == 0)
                                    goto label_1402a374d
                                
                                goto label_1402a240a
                        else
                        label_1402a3739:
                            
                            if ((r12_1 & 0x20) != 0)
                                goto label_1402a23f8
                        
                        if ((r12_1 & 0x40) != 0)
                        label_1402a240a:
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm1[0].q), 6)
                            zmm1 = var_a20_2
                            
                            if (temp0_90.b s< 0)
                            label_1402a242b:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                uint16_t rcx_23[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_23, 7)
                        else
                        label_1402a374d:
                            zmm1 = var_a20_2
                            
                            if (temp0_90.b s< 0)
                                goto label_1402a242b
                        
                        arg10 = _mm256_blendv_ps(arg10, _mm256_sub_epi32(arg11, arg9), arg16)
                        zmm0 = _mm256_cmpgt_epi32(arg10, zmm1) & arg16
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            arg10 = _mm256_blendv_ps(arg10, zmm1, zmm0)
                        
                        arg16 = var_9e0
                        zmm0 = _mm256_add_epi64(arg12, _mm256_cvtepi32_epi64(arg10[0].o))
                        
                        if ((r12_1 & 1) == 0)
                            arg15 = var_840
                            
                            if ((r12_1 & 2) != 0)
                                goto label_1402a246a
                            
                            goto label_1402a37a8
                        
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*zmm0[0].q), 0)
                        arg15 = var_840
                        
                        if ((r12_1 & 2) != 0)
                        label_1402a246a:
                            uint16_t rcx_27[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_27, 1)
                            zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                            var_710 = arg7[0].o
                            
                            if ((r12_1 & 4) == 0)
                                goto label_1402a37c1
                            
                            goto label_1402a248b
                        
                    label_1402a37a8:
                        zmm1[0].o = _mm256_extracti128_si256(arg10, 1)
                        var_710 = arg7[0].o
                        
                        if ((r12_1 & 4) == 0)
                        label_1402a37c1:
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((r12_1 & 8) != 0)
                                goto label_1402a24b6
                            
                            goto label_1402a37d0
                        
                    label_1402a248b:
                        arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg7[0].o = var_710
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*arg7[0].q), 2)
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((r12_1 & 8) != 0)
                        label_1402a24b6:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            uint16_t rcx_31[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_31, 3)
                            zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_6a0_1)
                            
                            if ((r12_1 & 0x10) == 0)
                                goto label_1402a37e3
                            
                            goto label_1402a24e5
                        
                    label_1402a37d0:
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_6a0_1)
                        
                        if ((r12_1 & 0x10) != 0)
                        label_1402a24e5:
                            zmm3[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*zmm0[0].q), 4)
                            arg12 = var_560_1
                            
                            if ((r12_1 & 0x20) != 0)
                            label_1402a2503:
                                uint16_t rcx_35[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_35, 5)
                                
                                if ((r12_1 & 0x40) == 0)
                                    goto label_1402a3807
                                
                                goto label_1402a2515
                        else
                        label_1402a37e3:
                            arg12 = var_560_1
                            
                            if ((r12_1 & 0x20) != 0)
                                goto label_1402a2503
                        
                        if ((r12_1 & 0x40) != 0)
                        label_1402a2515:
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            zmm3[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*zmm1[0].q), 6)
                            zmm1[0].o = arg7[0].o & data_142fc92e0
                            
                            if (temp0_90.b s< 0)
                            label_1402a2540:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                uint16_t rcx_39[0x2] =
                                    zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rcx_39, 7)
                        else
                        label_1402a3807:
                            zmm1[0].o = arg7[0].o & data_142fc92e0
                            
                            if (temp0_90.b s< 0)
                                goto label_1402a2540
                        
                        var_520 = arg19[0].o
                        zmm0 = _mm256_cvtepu16_epi32(zmm1[0].o)
                        var_580 = zmm3[0].o
                        zmm1[0].o = zmm3[0].o & data_142fc92e0
                        zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                        zmm3 = __vxorps_ymmqq_ymmqq_memqq(arg9, var_680_1)
                        arg7[0].o = zx.o(0)
                        
                        if (arg22 != 1)
                        label_1402a3856:
                            zmm1 =
                                __vpmaxsd_ymmqq_ymmqq_memqq(_mm256_sub_epi32(zmm1, zmm0), var_800_1)
                            zmm0 = _mm256_sub_ps(var_320_1, _mm256_cvtepi32_ps(zmm0))
                            zmm1 = _mm256_cvtepi32_ps(zmm1)
                            arg7 = _mm256_div_ps(zmm0, zmm1)
                    else
                        zmm1 = _mm256_add_epi32(arg19, arg19)
                        zmm0 = _mm256_add_epi64(arg12, _mm256_cvtepi32_epi64(zmm1[0].o))
                        char rsi_1 = temp0_90.b
                        int128_t var_4d0
                        arg8[0].o = var_4d0
                        
                        if ((rsi_1 & 1) == 0)
                            arg18 = arg15
                            arg15 = var_6a0_1
                            
                            if ((rsi_1 & 2) != 0)
                                goto label_1402a2dae
                            
                            goto label_1402a2842
                        
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm0[0].q, 0)
                        arg18 = arg15
                        arg15 = var_6a0_1
                        
                        if ((rsi_1 & 2) != 0)
                        label_1402a2dae:
                            int64_t rcx_67 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_67, 1)
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            
                            if ((rsi_1 & 4) == 0)
                                goto label_1402a2852
                            
                            goto label_1402a2dc9
                        
                    label_1402a2842:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((rsi_1 & 4) == 0)
                        label_1402a2852:
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((rsi_1 & 8) != 0)
                                goto label_1402a2de8
                            
                            goto label_1402a2861
                        
                    label_1402a2dc9:
                        arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg7[0].q, 2)
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rsi_1 & 8) != 0)
                        label_1402a2de8:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rcx_69 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_69, 3)
                            zmm0 = _mm256_add_epi64(arg15, zmm1)
                            
                            if ((rsi_1 & 0x10) == 0)
                                goto label_1402a286f
                            
                            goto label_1402a2e0c
                        
                    label_1402a2861:
                        zmm0 = _mm256_add_epi64(arg15, zmm1)
                        
                        if ((rsi_1 & 0x10) == 0)
                        label_1402a286f:
                            
                            if ((rsi_1 & 0x20) != 0)
                                goto label_1402a2e1b
                            
                            goto label_1402a2879
                        
                    label_1402a2e0c:
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm0[0].q, 4)
                        
                        if ((rsi_1 & 0x20) != 0)
                        label_1402a2e1b:
                            int64_t rcx_71 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_71, 5)
                            
                            if ((rsi_1 & 0x40) == 0)
                                goto label_1402a2883
                            
                            goto label_1402a2e30
                        
                    label_1402a2879:
                        
                        if ((rsi_1 & 0x40) != 0)
                        label_1402a2e30:
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm1[0].q, 6)
                            
                            if (temp0_90.b s< 0)
                            label_1402a2e49:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                int64_t rcx_73 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_73, 7)
                        else
                        label_1402a2883:
                            
                            if (temp0_90.b s< 0)
                                goto label_1402a2e49
                        
                        zmm0 = __vpcmpgtd_ymmqq_ymmqq_memqq(_mm256_cvtepu16_epi32(arg8[0].o), 
                            var_980_1)
                        arg17 = zmm0 ^ arg9
                        bool cond:12_1 = _mm256_movemask_ps(zmm0 & not.32(arg16)) == 0
                        var_4d0 = arg8[0].o
                        int64_t var_300_1[0x4] = arg17
                        
                        if (cond:12_1)
                            zmm1 = arg19
                            arg19 = var_980_1
                        else
                            arg7 = var_a20_2
                            zmm1 = _mm256_blendv_ps(arg19, arg7, arg17)
                            arg11 = _mm256_sub_epi32(arg19, arg9)
                            arg14 = zmm0 & not.32(_mm256_cmpgt_epi32(arg11, arg7) ^ arg9)
                            arg17 = arg16 & arg14
                            int32_t i_2 = _mm256_movemask_ps(arg17)
                            
                            if (i_2 == 0)
                                arg19 = var_980_1
                            else
                                zmm0 = arg19
                                arg19 = var_980_1
                                
                                do
                                    arg9 = arg19
                                    arg10 = arg11
                                    arg19 = _mm256_add_epi32(arg11, arg11)
                                    arg7 = _mm256_cvtepi32_epi64(arg19[0].o)
                                    arg11 = _mm256_add_epi64(arg12, arg7)
                                    char temp0_134 = _mm256_movemask_ps(arg17)
                                    int128_t var_900
                                    int64_t rbx_10
                                    
                                    if ((temp0_134 & 1) != 0)
                                        zmm3[0].o = var_900
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *arg11[0].q, 0)
                                        
                                        if ((temp0_134 & 2) != 0)
                                            rbx_10 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rbx_10, 1)
                                    else
                                        zmm3[0].o = var_900
                                        
                                        if ((temp0_134 & 2) != 0)
                                            rbx_10 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rbx_10, 1)
                                    arg7[0].o = _mm256_extracti128_si256(arg19, 1)
                                    
                                    if ((temp0_134 & 4) != 0)
                                        arg8[0].o = _mm256_extracti128_si256(arg11, 1)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *arg8[0].q, 2)
                                    
                                    arg19 = arg9
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    arg9 = _mm256_cmpeq_epi32(arg9, arg9)
                                    
                                    if ((temp0_134 & 8) == 0)
                                        arg11 = _mm256_add_epi64(arg15, arg7)
                                        
                                        if ((temp0_134 & 0x10) != 0)
                                            goto label_1402a2923
                                        
                                        goto label_1402a2a11
                                    
                                    arg8[0].o = _mm256_extracti128_si256(arg11, 1)
                                    uint16_t* rbx_5 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rbx_5, 3)
                                    arg11 = _mm256_add_epi64(arg15, arg7)
                                    
                                    if ((temp0_134 & 0x10) != 0)
                                    label_1402a2923:
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *arg11[0].q, 4)
                                        
                                        if ((temp0_134 & 0x20) == 0)
                                            goto label_1402a2a1a
                                        
                                        goto label_1402a2931
                                    
                                label_1402a2a11:
                                    
                                    if ((temp0_134 & 0x20) == 0)
                                    label_1402a2a1a:
                                        
                                        if ((temp0_134 & 0x40) != 0)
                                            goto label_1402a2945
                                        
                                        goto label_1402a2a23
                                    
                                label_1402a2931:
                                    int64_t rbx_7 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rbx_7, 5)
                                    
                                    if ((temp0_134 & 0x40) == 0)
                                    label_1402a2a23:
                                        
                                        if (temp0_134 s< 0)
                                        label_1402a295d:
                                            arg7[0].o = _mm256_extracti128_si256(arg11, 1)
                                            uint16_t* rcx_45 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rcx_45, 7)
                                    else
                                    label_1402a2945:
                                        arg7[0].o = _mm256_extracti128_si256(arg11, 1)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *arg7[0].q, 6)
                                        
                                        if (temp0_134 s< 0)
                                            goto label_1402a295d
                                    
                                    var_900 = zmm3[0].o
                                    arg7 =
                                        _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm3[0].o), arg19)
                                    arg11 = arg7 & arg14
                                    arg7[0].o = zx.o(0)
                                    arg8 = arg11 & arg16
                                    
                                    if (_mm256_movemask_ps(arg8) != i_2)
                                        arg7 = arg11 ^ arg14
                                    
                                    zmm1 = _mm256_blendv_ps(zmm1, zmm0, arg11)
                                    arg11 = _mm256_sub_epi32(arg10, arg9)
                                    arg14 = __vpcmpgtd_ymmqq_ymmqq_memqq(arg11, var_a20_2)
                                        & not.32(arg7)
                                    arg17 = arg14 & arg16
                                    i_2 = _mm256_movemask_ps(arg17)
                                    zmm0 = arg10
                                while (i_2 != 0)
                        
                        arg7 = var_300_1
                        
                        if (_mm256_movemask_ps(_mm256_andnot_ps(arg7, arg16)) != 0)
                            arg7 = _mm256_xor_ps(arg7, arg9)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            zmm1 = _mm256_blendv_ps(zmm1, arg8, arg7)
                            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(arg9, var_660_1)
                            arg8 = _mm256_cmpgt_epi32(zmm0, arg8)
                            arg10 = arg8 & arg7
                            arg14 = arg10 & arg16
                            int32_t i_3 = _mm256_movemask_ps(arg14)
                            
                            if (i_3 != 0)
                                do
                                    arg17 = _mm256_add_epi32(zmm0, zmm0)
                                    arg7 = _mm256_cvtepi32_epi64(arg17[0].o)
                                    arg11 = _mm256_add_epi64(arg12, arg7)
                                    char temp0_244 = _mm256_movemask_ps(arg14)
                                    int128_t var_7e0
                                    int64_t rbx_18
                                    
                                    if ((temp0_244 & 1) != 0)
                                        zmm3[0].o = var_7e0
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *arg11[0].q, 0)
                                        
                                        if ((temp0_244 & 2) != 0)
                                            rbx_18 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rbx_18, 1)
                                    else
                                        zmm3[0].o = var_7e0
                                        
                                        if ((temp0_244 & 2) != 0)
                                            rbx_18 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rbx_18, 1)
                                    arg7[0].o = _mm256_extracti128_si256(arg17, 1)
                                    
                                    if ((temp0_244 & 4) == 0)
                                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                        
                                        if ((temp0_244 & 8) != 0)
                                            goto label_1402a2fce
                                        
                                        goto label_1402a30c0
                                    
                                    arg8[0].o = _mm256_extracti128_si256(arg11, 1)
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *arg8[0].q, 2)
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_244 & 8) != 0)
                                    label_1402a2fce:
                                        arg8[0].o = _mm256_extracti128_si256(arg11, 1)
                                        uint16_t* rbx_13 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rbx_13, 3)
                                        arg11 = _mm256_add_epi64(arg15, arg7)
                                        
                                        if ((temp0_244 & 0x10) == 0)
                                            goto label_1402a30cd
                                        
                                        goto label_1402a2ff1
                                    
                                label_1402a30c0:
                                    arg11 = _mm256_add_epi64(arg15, arg7)
                                    
                                    if ((temp0_244 & 0x10) == 0)
                                    label_1402a30cd:
                                        
                                        if ((temp0_244 & 0x20) != 0)
                                            goto label_1402a2fff
                                        
                                        goto label_1402a30d6
                                    
                                label_1402a2ff1:
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *arg11[0].q, 4)
                                    
                                    if ((temp0_244 & 0x20) != 0)
                                    label_1402a2fff:
                                        int64_t rbx_15 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rbx_15, 5)
                                        
                                        if ((temp0_244 & 0x40) == 0)
                                            goto label_1402a30df
                                        
                                        goto label_1402a3013
                                    
                                label_1402a30d6:
                                    
                                    if ((temp0_244 & 0x40) != 0)
                                    label_1402a3013:
                                        arg7[0].o = _mm256_extracti128_si256(arg11, 1)
                                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                            *arg7[0].q, 6)
                                        
                                        if (temp0_244 s< 0)
                                        label_1402a302b:
                                            arg7[0].o = _mm256_extracti128_si256(arg11, 1)
                                            uint16_t* rcx_91 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, 
                                                *rcx_91, 7)
                                    else
                                    label_1402a30df:
                                        
                                        if (temp0_244 s< 0)
                                            goto label_1402a302b
                                    
                                    var_7e0 = zmm3[0].o
                                    arg7 =
                                        _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm3[0].o), arg19)
                                    arg11 = arg7 & not.32(arg10)
                                    arg7[0].o = zx.o(0)
                                    arg8 = arg11 & arg16
                                    int32_t temp0_252 = _mm256_movemask_ps(arg8)
                                    arg14[0].o = zx.o(0)
                                    
                                    if (temp0_252 != i_3)
                                        arg14 = arg11 ^ arg10
                                    
                                    zmm1 = _mm256_blendv_ps(zmm1, zmm0, arg11)
                                    zmm0 = _mm256_add_epi32(zmm0, arg9)
                                    arg7 = _mm256_cmpgt_epi32(zmm0, arg7)
                                    arg10 = arg7 & arg14
                                    arg14 = arg10 & arg16
                                    i_3 = _mm256_movemask_ps(arg14)
                                while (i_3 != 0)
                        
                        arg10 = var_9c0
                        int128_t var_590
                        arg7[0].o = var_590
                        arg11 = _mm256_blendv_ps(var_9a0_1, zmm1, arg16)
                        zmm1 = _mm256_add_epi32(arg11, arg11)
                        zmm0 = _mm256_add_epi64(arg12, _mm256_cvtepi32_epi64(zmm1[0].o))
                        
                        if ((rsi_1 & 1) == 0)
                            arg14 = var_6c0_1
                            arg17 = var_6e0_1
                            
                            if ((rsi_1 & 2) != 0)
                                goto label_1402a32f0
                            
                            goto label_1402a318e
                        
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0].q, 0)
                        arg14 = var_6c0_1
                        arg17 = var_6e0_1
                        
                        if ((rsi_1 & 2) != 0)
                        label_1402a32f0:
                            uint16_t* rcx_96 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rcx_96, 1)
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            
                            if ((rsi_1 & 4) == 0)
                                goto label_1402a319e
                            
                            goto label_1402a330b
                        
                    label_1402a318e:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        int128_t var_570
                        
                        if ((rsi_1 & 4) == 0)
                        label_1402a319e:
                            zmm3[0].o = var_570
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((rsi_1 & 8) != 0)
                                goto label_1402a333b
                            
                            goto label_1402a31b6
                        
                    label_1402a330b:
                        zmm3[0].o = arg7[0].o
                        arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg7[0].o = zmm3[0].o
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *arg7[0].q, 2)
                        zmm3[0].o = var_570
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rsi_1 & 8) != 0)
                        label_1402a333b:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            uint16_t* rcx_98 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rcx_98, 3)
                            zmm0 = _mm256_add_epi64(arg15, zmm1)
                            
                            if ((rsi_1 & 0x10) == 0)
                                goto label_1402a31c4
                            
                            goto label_1402a335f
                        
                    label_1402a31b6:
                        zmm0 = _mm256_add_epi64(arg15, zmm1)
                        
                        if ((rsi_1 & 0x10) != 0)
                        label_1402a335f:
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0].q, 4)
                            
                            if ((rsi_1 & 0x20) != 0)
                            label_1402a336e:
                                uint16_t* rcx_100 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rcx_100, 5)
                                
                                if ((rsi_1 & 0x40) == 0)
                                    goto label_1402a31d8
                                
                                goto label_1402a3383
                        else
                        label_1402a31c4:
                            
                            if ((rsi_1 & 0x20) != 0)
                                goto label_1402a336e
                        
                        if ((rsi_1 & 0x40) != 0)
                        label_1402a3383:
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm1[0].q, 6)
                            zmm1 = var_a20_2
                            
                            if (temp0_90.b s< 0)
                            label_1402a33a1:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                uint16_t* rcx_102 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rcx_102, 7)
                        else
                        label_1402a31d8:
                            zmm1 = var_a20_2
                            
                            if (temp0_90.b s< 0)
                                goto label_1402a33a1
                        
                        arg10 = _mm256_blendv_ps(arg10, _mm256_sub_epi32(arg11, arg9), arg16)
                        zmm0 = _mm256_cmpgt_epi32(arg10, zmm1) & arg16
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            arg10 = _mm256_blendv_ps(arg10, zmm1, zmm0)
                        
                        arg16 = var_9e0
                        zmm1 = _mm256_add_epi32(arg10, arg10)
                        zmm0 = _mm256_add_epi64(arg12, _mm256_cvtepi32_epi64(zmm1[0].o))
                        
                        if ((rsi_1 & 1) == 0)
                            arg15 = var_840
                            
                            if ((rsi_1 & 2) != 0)
                                goto label_1402a33d4
                            
                            goto label_1402a3237
                        
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm0[0].q, 0)
                        arg15 = var_840
                        
                        if ((rsi_1 & 2) != 0)
                        label_1402a33d4:
                            uint16_t* rcx_104 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rcx_104, 1)
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            
                            if ((rsi_1 & 4) == 0)
                                goto label_1402a3247
                            
                            goto label_1402a33ef
                        
                    label_1402a3237:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((rsi_1 & 4) == 0)
                        label_1402a3247:
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((rsi_1 & 8) != 0)
                                goto label_1402a341e
                            
                            goto label_1402a3256
                        
                    label_1402a33ef:
                        arg8[0].o = zmm3[0].o
                        zmm3[0].o = arg7[0].o
                        arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                        arg7[0].o = zmm3[0].o
                        zmm3[0].o = arg8[0].o
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg7[0].q, 2)
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rsi_1 & 8) != 0)
                        label_1402a341e:
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            uint16_t* rcx_106 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rcx_106, 3)
                            zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_6a0_1)
                            
                            if ((rsi_1 & 0x10) == 0)
                                goto label_1402a3269
                            
                            goto label_1402a3447
                        
                    label_1402a3256:
                        zmm0 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_6a0_1)
                        
                        if ((rsi_1 & 0x10) == 0)
                        label_1402a3269:
                            arg12 = var_560_1
                            
                            if ((rsi_1 & 0x20) != 0)
                                goto label_1402a345f
                            
                            goto label_1402a327c
                        
                    label_1402a3447:
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm0[0].q, 4)
                        arg12 = var_560_1
                        
                        if ((rsi_1 & 0x20) != 0)
                        label_1402a345f:
                            uint16_t* rcx_108 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rcx_108, 5)
                            
                            if ((rsi_1 & 0x40) == 0)
                                goto label_1402a3286
                            
                            goto label_1402a3474
                        
                    label_1402a327c:
                        
                        if ((rsi_1 & 0x40) != 0)
                        label_1402a3474:
                            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *zmm1[0].q, 6)
                            
                            if (temp0_90.b s< 0)
                            label_1402a348d:
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                int64_t rcx_110 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *rcx_110, 7)
                        else
                        label_1402a3286:
                            
                            if (temp0_90.b s< 0)
                                goto label_1402a348d
                        
                        var_590 = arg7[0].o
                        zmm0 = _mm256_cvtepu16_epi32(arg7[0].o)
                        var_570 = zmm3[0].o
                        zmm1 = _mm256_cvtepu16_epi32(zmm3[0].o)
                        zmm3 = __vxorps_ymmqq_ymmqq_memqq(arg9, var_680_1)
                        arg7[0].o = zx.o(0)
                        
                        if (arg22 != 1)
                            goto label_1402a3856
                    
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm0 = _mm256_blendv_ps(zmm0, arg7, zmm3)
                    var_a20_1 = zmm0
            
            int32_t rcx_130 = var_9e8.d
            arg6 = zx.q(rcx_130)
            var_9c0 = arg10
            var_9a0 = arg11
            
            if (rcx_130 u> 5)
                zmm0[0].o = zx.o(0)
                var_620 = _mm256_maskstore_ps(arg18, zmm0)
                var_600 = _mm256_maskstore_ps(arg18, zmm0)
                var_5e0 = _mm256_maskstore_ps(arg18, zmm0)
                var_5c0 = _mm256_maskstore_ps(arg18, _mm256_broadcast_ss(1f))
            else
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg11, var_640_1)
                
                switch (arg6)
                    case 0
                        zmm1 = data_143442de0
                        arg7 = zmm1
                        zmm1 = __vpermd_ymmqq_ymmqq_memqq(zmm1, var_920_1)
                        arg7 = _mm256_permutevar8x32_epi32(arg7, arg17)
                        zmm0 = _mm256_add_epi32(zmm0, _mm256_inserti128_si256(zmm1, arg7[0].o, 1))
                        arg7[0].o = zx.o(0)
                        int64_t temp0_374
                        int32_t temp1_8
                        temp0_374, temp1_8 = _mm256_i32gather_ps(arg7, *(arg4 + zmm0[0].q), arg18)
                        arg7 = temp0_374
                        zmm1 = _mm256_add_epi32(zmm0, arg15)
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        int64_t temp0_377
                        int32_t temp1_9
                        temp0_377, temp1_9 = _mm256_i32gather_ps(arg9, *(arg4 + zmm1[0].q), arg18)
                        arg9 = temp0_377
                        zmm1 = _mm256_add_epi32(zmm0, arg16)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        int64_t temp0_380
                        int32_t temp1_10
                        temp0_380, temp1_10 = _mm256_i32gather_ps(arg10, *(arg4 + zmm1[0].q), arg18)
                        arg8 = temp1_10
                        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_820_1)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int64_t temp0_383
                        int32_t temp1_11
                        temp0_383, temp1_11 = _mm256_i32gather_ps(arg8, *(arg4 + zmm0[0].q), arg18)
                        arg8 = temp0_383
                        var_620 = _mm256_maskstore_ps(arg18, arg7)
                        var_600 = _mm256_maskstore_ps(arg18, arg9)
                        var_5e0 = _mm256_maskstore_ps(arg18, temp0_380)
                        arg10 = var_9c0
                        var_5c0 = _mm256_maskstore_ps(arg18, arg8)
                    case 1
                        zmm1 = data_143442de0
                        arg7 = zmm1
                        zmm1 = __vpermd_ymmqq_ymmqq_memqq(zmm1, var_920_1)
                        arg7 = _mm256_permutevar8x32_epi32(arg7, arg17)
                        zmm0 = _mm256_add_epi32(zmm0, _mm256_inserti128_si256(zmm1, arg7[0].o, 1))
                        arg7[0].o = zx.o(0)
                        int64_t temp0_395
                        int32_t temp1_12
                        temp0_395, temp1_12 = _mm256_i32gather_ps(arg7, *(arg4 + zmm0[0].q), arg18)
                        arg7 = temp0_395
                        zmm1 = _mm256_add_epi32(zmm0, arg15)
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        int64_t temp0_398
                        int32_t temp1_13
                        temp0_398, temp1_13 = _mm256_i32gather_ps(arg9, *(arg4 + zmm1[0].q), arg18)
                        arg9 = temp0_398
                        arg8 = temp1_13
                        zmm0 = _mm256_add_epi32(zmm0, arg16)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int64_t temp0_401
                        int32_t temp1_14
                        temp0_401, temp1_14 = _mm256_i32gather_ps(arg8, *(arg4 + zmm0[0].q), arg18)
                        arg8 = temp0_401
                        zmm1 = temp1_14
                        zmm0 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg7, arg7), 
                                arg9, arg9), 
                            arg8, arg8)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        zmm0 = _mm256_and_ps(_mm256_cmp_ps(zmm1, zmm0, 1), _mm256_sqrt_ps(zmm0))
                        var_620 = _mm256_maskstore_ps(arg18, arg7)
                        var_600 = _mm256_maskstore_ps(arg18, arg9)
                        var_5e0 = _mm256_maskstore_ps(arg18, arg8)
                        var_5c0 = _mm256_maskstore_ps(arg18, zmm0)
                    case 2
                        zmm1 = data_143442de0
                        zmm1 = _mm256_add_epi32(zmm0, 
                            _mm256_inserti128_si256(__vpermd_ymmqq_ymmqq_memqq(zmm1, var_920_1), 
                                _mm256_permutevar8x32_epi32(zmm1, arg17)[0].o, 1))
                        zmm3[0].o = zx.o(0)
                        zmm0 = _mm256_blendv_ps(zmm3, zmm1, arg18)
                        float rsi_4 = zmm0[0]
                        int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t rbx_20 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t rcx_132 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        float rdi_6 = zmm0[0]
                        int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r13_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t r14_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(arg4 + sx.q(rsi_4)))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r12_2), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_20), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_132), 3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rdi_6)), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_2), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r13_6), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_1), 7)
                        arg7 = _mm256_blendv_ps(zmm3, _mm256_add_epi32(zmm1, arg14), arg18)
                        float rcx_133 = arg7[0]
                        int64_t r10_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                        int64_t r14_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                        int64_t r13_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                        arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                        float rbx_22 = arg7[0]
                        int64_t r8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                        int64_t rcx_135 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                        int64_t rsi_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                        arg7[0].o = zx.o(*(arg4 + sx.q(rcx_133)))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r10_3), 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r14_2), 2)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r13_7), 3)
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + sx.q(rbx_22)), 4)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r8), 5)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rcx_135), 6)
                        arg10[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rsi_9), 7)
                        zmm1 = _mm256_blendv_ps(zmm3, _mm256_add_epi32(zmm1, arg15), arg18)
                        int64_t r8_1 = sx.q(zmm1[0])
                        int64_t r10_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        int32_t temp0_452 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                        int64_t r14_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        int64_t r13_8 = sx.q(zmm1[0])
                        int64_t rcx_138 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                        int32_t temp0_456 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                        int64_t r12_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                        zmm1[0].o = zx.o(*(arg4 + r8_1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r10_4), 1)
                        arg2 = var_850_1
                        arg3 = var_848_1
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + sx.q(temp0_452)), 2)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r14_3), 3)
                        arg5 = &var_4a0
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r13_8), 4)
                        r13_4 = var_924_1
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rcx_138), 5)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + sx.q(temp0_456)), 6)
                        zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                        arg7 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg7))
                        arg8 = _mm256_broadcast_ss(32767f)
                        zmm0 = _mm256_div_ps(zmm0, arg8)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r12_4), 7)
                        arg9 = _mm256_cvtepu16_epi32(arg10[0].o)
                        arg10 = var_9c0
                        arg9 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(arg9, arg7)), arg8)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                arg7)), 
                            arg8)
                        arg7 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm0, zmm0), 
                                arg9, arg9), 
                            zmm1, zmm1)
                        arg8 = _mm256_cmp_ps(zmm3, arg7, 1)
                        arg7 = _mm256_and_ps(arg8, _mm256_sqrt_ps(arg7))
                        var_620 = _mm256_maskstore_ps(arg18, zmm0)
                        var_600 = _mm256_maskstore_ps(arg18, arg9)
                        var_5e0 = _mm256_maskstore_ps(arg18, zmm1)
                        var_5c0 = _mm256_maskstore_ps(arg18, arg7)
                    case 3
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        int64_t temp0_491
                        int32_t temp1_15
                        temp0_491, temp1_15 = _mm256_i32gather_ps(zmm1, *(arg4 + arg12[0].q), arg18)
                        arg7 = _mm256_add_epi32(arg12, arg15)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        int64_t temp0_494
                        int32_t temp1_16
                        temp0_494, temp1_16 = _mm256_i32gather_ps(arg10, *(arg4 + arg7[0].q), arg18)
                        arg7 = _mm256_add_epi32(arg12, arg16)
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        int64_t temp0_497
                        int32_t temp1_17
                        temp0_497, temp1_17 = _mm256_i32gather_ps(arg11, *(arg4 + arg7[0].q), arg18)
                        arg7 = __vpaddd_ymmqq_ymmqq_memqq(arg12, var_820_1)
                        arg14[0].o = zx.o(0)
                        int64_t temp0_499
                        int32_t temp1_18
                        temp0_499, temp1_18 = _mm256_i32gather_ps(arg14, *(arg4 + arg7[0].q), arg18)
                        arg7 = _mm256_add_epi32(arg12, __vpbroadcastd_ymmqq_memd(0x10))
                        arg15[0].o = zx.o(0)
                        int64_t temp0_502
                        int32_t temp1_19
                        temp0_502, temp1_19 = _mm256_i32gather_ps(arg15, *(arg4 + arg7[0].q), arg18)
                        arg7 = _mm256_add_epi32(arg12, __vpbroadcastd_ymmqq_memd(0x14))
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        int64_t temp0_506
                        int32_t temp1_20
                        temp0_506, temp1_20 = _mm256_i32gather_ps(arg9, *(arg4 + arg7[0].q), arg18)
                        arg7 = __vpaddd_ymmqq_ymmqq_memqq(arg12, var_700_1)
                        zmm0 = _mm256_add_epi32(arg7, zmm0)
                        arg7[0].o = zx.o(0)
                        int64_t temp0_509
                        int32_t temp1_21
                        temp0_509, temp1_21 =
                            _mm256_i32gather_epi32(arg7, *(arg4 + zmm0[0].q), arg18)
                        arg7 = temp0_509
                        zmm0 = _mm256_srli_epi32(arg7, 0x15)
                        arg8 = _mm256_srli_epi32(arg7, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg16 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg16))
                        arg8 = _mm256_add_epi32(arg8, arg16)
                        arg16 = _mm256_broadcast_ss(1023f)
                        zmm0 = _mm256_div_ps(zmm0, arg16)
                        arg8 = _mm256_div_ps(_mm256_cvtepi32_ps(arg8), arg16)
                        arg7 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                arg7 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg16 = var_9e0
                        zmm0 = _mm256_fmadd_ps(zmm0, temp0_499, temp0_491)
                        arg8 = _mm256_fmadd_ps(arg8, temp0_502, temp0_494)
                        zmm3[0].o = zx.o(0)
                        arg10 = var_9c0
                        arg15 = var_840
                        arg7 = _mm256_fmadd_ps(arg7, temp0_506, temp0_497)
                        arg11 = var_9a0
                        zmm1 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm0, zmm0), 
                                arg8, arg8), 
                            arg7, arg7)
                        arg9 = _mm256_cmp_ps(zmm3, zmm1, 1)
                        zmm1 = _mm256_and_ps(arg9, _mm256_sqrt_ps(zmm1))
                        var_620 = _mm256_maskstore_ps(arg18, zmm0)
                        var_600 = _mm256_maskstore_ps(arg18, arg8)
                        var_5e0 = _mm256_maskstore_ps(arg18, arg7)
                        var_5c0 = _mm256_maskstore_ps(arg18, zmm1)
                    case 4
                        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(arg12, var_700_1)
                        zmm0 = _mm256_add_epi32(zmm1, zmm0)
                        zmm1[0].o = zx.o(0)
                        int64_t temp0_543
                        int32_t temp1_22
                        temp0_543, temp1_22 =
                            _mm256_i32gather_epi32(zmm1, *(arg4 + zmm0[0].q), arg18)
                        zmm1 = temp0_543
                        zmm0 = _mm256_srli_epi32(zmm1, 0x15)
                        arg7 = _mm256_srli_epi32(zmm1, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm1 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                        arg8 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg8))
                        arg9 = _mm256_broadcast_ss(1023f)
                        zmm0 = _mm256_div_ps(zmm0, arg9)
                        arg7 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(arg7, arg8)), arg9)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg8 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm0, zmm0), 
                                arg7, arg7), 
                            zmm1, zmm1)
                        zmm3[0].o = zx.o(0)
                        arg9 = _mm256_cmp_ps(zmm3, arg8, 1)
                    label_1402a4016:
                        arg8 = _mm256_and_ps(arg9, _mm256_sqrt_ps(arg8))
                        var_620 = _mm256_maskstore_ps(arg18, zmm0)
                        var_600 = _mm256_maskstore_ps(arg18, arg7)
                        var_5e0 = _mm256_maskstore_ps(arg18, zmm1)
                        var_5c0 = _mm256_maskstore_ps(arg18, arg8)
                    case 5
                        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(arg12, var_700_1)
                        zmm0 = _mm256_add_epi32(zmm1, zmm0)
                        zmm1[0].o = zx.o(0)
                        int64_t temp0_568
                        int32_t temp1_23
                        temp0_568, temp1_23 =
                            _mm256_i32gather_epi32(zmm1, *(arg4 + zmm0[0].q), arg18)
                        zmm1 = temp0_568
                        zmm0 = _mm256_srli_epi32(zmm1, 0x15)
                        arg7 = _mm256_srli_epi32(zmm1, 0xa)
                        arg8 = _mm256_srli_epi32(zmm1, 5)
                        arg9 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                        arg10 = __vpbroadcastd_ymmqq_memd(0x400)
                        arg11 = __vpbroadcastd_ymmqq_memd(0x380)
                        arg19 = arg15
                        arg15 = arg17
                        arg17 = arg14
                        arg14 = __vpbroadcastd_ymmqq_memd(0x3d80)
                        zmm0 =
                            (arg8 & arg9) | (zmm0 & arg10) | _mm256_add_epi32(zmm0 & arg11, arg14)
                        arg8 = (_mm256_slli_epi32(zmm1, 6) & arg9) | (arg7 & arg10)
                        arg7 &= arg11
                        arg11 = var_9a0
                        arg7 = _mm256_add_epi32(arg7, arg14)
                        arg14 = arg17
                        arg17[0].o = zx.o(0)
                        arg7 |= arg8
                        arg8 = zmm1 & __vpbroadcastd_ymmqq_memd(0x1c0)
                        arg9 = _mm256_slli_epi32(zmm1, 0x11) & __vpbroadcastd_ymmqq_memd(0x7e0000)
                        zmm1 &= __vpbroadcastd_ymmqq_memd(0x200)
                        arg10 = var_9c0
                        zmm1 =
                            arg9 | zmm1 | _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x1ec0))
                        arg8 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm0, zmm0), 
                                arg7, arg7), 
                            zmm1, zmm1)
                        arg9 = _mm256_cmp_ps(arg17, arg8, 1)
                        arg17 = arg15
                        arg15 = arg19
                        goto label_1402a4016
            
            zmm0 = _mm256_cmpeq_epi32(arg11, arg10)
            zmm1 = zmm0 & not.32(arg18)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                int32_t var_4c0_1[0x8]
                int64_t var_480_1[0x4]
                float var_460_1[0x8]
                
                if (var_9e8.d u> 5)
                    zmm0[0].o = zx.o(0)
                    var_4c0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                    var_4a0 = _mm256_maskstore_ps(zmm1, zmm0)
                    var_480_1 = _mm256_maskstore_ps(zmm1, zmm0)
                    var_460_1 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
                    arg19[0].o = zx.o(0)
                else
                    zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg10, var_640_1)
                    
                    switch (arg6)
                        case 0
                            arg7 = data_143442de0
                            arg7 = _mm256_inserti128_si256(
                                __vpermd_ymmqq_ymmqq_memqq(arg7, var_920_1), 
                                _mm256_permutevar8x32_epi32(arg7, arg17)[0].o, 1)
                            zmm0 = _mm256_add_epi32(zmm0, arg7)
                            arg7[0].o = zx.o(0)
                            int64_t temp0_603
                            int32_t temp1_24
                            temp0_603, temp1_24 =
                                _mm256_i32gather_ps(arg7, *(arg4 + zmm0[0].q), zmm1)
                            arg8 = _mm256_add_epi32(zmm0, arg15)
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            int64_t temp0_606
                            int32_t temp1_25
                            temp0_606, temp1_25 =
                                _mm256_i32gather_ps(arg9, *(arg4 + arg8[0].q), zmm1)
                            arg10 = temp1_25
                            arg8 = _mm256_add_epi32(zmm0, arg16)
                            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            int64_t temp0_609
                            int32_t temp1_26
                            temp0_609, temp1_26 =
                                _mm256_i32gather_ps(arg10, *(arg4 + arg8[0].q), zmm1)
                            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_820_1)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            int64_t temp0_612
                            int32_t temp1_27
                            temp0_612, temp1_27 =
                                _mm256_i32gather_ps(arg8, *(arg4 + zmm0[0].q), zmm1)
                            var_4c0_1 = _mm256_maskstore_ps(zmm1, temp0_603)
                            var_4a0 = _mm256_maskstore_ps(zmm1, temp0_606)
                            var_480_1 = _mm256_maskstore_ps(zmm1, temp0_609)
                            var_460_1 = _mm256_maskstore_ps(zmm1, temp0_612)
                            arg19[0].o = zx.o(0)
                        case 1
                            arg7 = data_143442de0
                            arg7 = _mm256_inserti128_si256(
                                __vpermd_ymmqq_ymmqq_memqq(arg7, var_920_1), 
                                _mm256_permutevar8x32_epi32(arg7, arg17)[0].o, 1)
                            zmm0 = _mm256_add_epi32(zmm0, arg7)
                            arg7[0].o = zx.o(0)
                            int64_t temp0_625
                            int32_t temp1_28
                            temp0_625, temp1_28 =
                                _mm256_i32gather_ps(arg7, *(arg4 + zmm0[0].q), zmm1)
                            arg7 = temp0_625
                            arg8 = _mm256_add_epi32(zmm0, arg15)
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            int64_t temp0_628
                            int32_t temp1_29
                            temp0_628, temp1_29 =
                                _mm256_i32gather_ps(arg9, *(arg4 + arg8[0].q), zmm1)
                            arg9 = temp0_628
                            zmm0 = _mm256_add_epi32(zmm0, arg16)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            int64_t temp0_631
                            int32_t temp1_30
                            temp0_631, temp1_30 =
                                _mm256_i32gather_ps(arg8, *(arg4 + zmm0[0].q), zmm1)
                            arg8 = temp0_631
                            zmm0 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg7, arg7), arg9, 
                                    arg9), 
                                arg8, arg8)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            zmm0 = _mm256_and_ps(_mm256_cmp_ps(zmm3, zmm0, 1), _mm256_sqrt_ps(zmm0))
                            var_4c0_1 = _mm256_maskstore_ps(zmm1, arg7)
                            var_4a0 = _mm256_maskstore_ps(zmm1, arg9)
                            var_480_1 = _mm256_maskstore_ps(zmm1, arg8)
                            var_460_1 = _mm256_maskstore_ps(zmm1, zmm0)
                            arg19[0].o = zx.o(0)
                        case 2
                            arg7 = data_143442de0
                            arg10 = _mm256_add_epi32(zmm0, 
                                _mm256_inserti128_si256(
                                    __vpermd_ymmqq_ymmqq_memqq(arg7, var_920_1), 
                                    _mm256_permutevar8x32_epi32(arg7, arg17)[0].o, 1))
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            zmm0 = _mm256_blendv_ps(zmm3, arg10, zmm1)
                            float rcx_142 = zmm0[0]
                            int64_t r8_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int64_t r10_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            int64_t r15_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            float rsi_13 = zmm0[0]
                            int64_t rdx_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int64_t rbx_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            int64_t rcx_144 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_142)))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_2), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_5), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_1), 3)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                *(arg4 + sx.q(rsi_13)), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_3), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_29), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_144), 7)
                            arg7 = _mm256_blendv_ps(zmm3, _mm256_add_epi32(arg10, arg14), zmm1)
                            float rcx_145 = arg7[0]
                            int64_t r8_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                            int64_t r10_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                            int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                            arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                            float rsi_15 = arg7[0]
                            int64_t rdx_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                            int64_t rbx_32 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                            int64_t rcx_147 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                            arg7[0].o = zx.o(*(arg4 + sx.q(rcx_145)))
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r8_3), 1)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r10_6), 2)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r15_2), 3)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                *(arg4 + sx.q(rsi_15)), 4)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rdx_6), 5)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rbx_32), 6)
                            arg11[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rcx_147), 7)
                            arg7 = _mm256_blendv_ps(zmm3, _mm256_add_epi32(arg10, arg15), zmm1)
                            int64_t r8_4 = sx.q(arg7[0])
                            int64_t r10_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                            int32_t temp0_683 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
                            int64_t r14_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                            arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                            int64_t rsi_18 = sx.q(arg7[0])
                            int64_t rcx_150 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                            int32_t temp0_687 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
                            arg6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                            arg7[0].o = zx.o(*(arg4 + r8_4))
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r10_7), 1)
                            arg2 = var_850_1
                            arg3 = var_848_1
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                *(arg4 + sx.q(temp0_683)), 2)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r14_6), 3)
                            arg5 = &var_4a0
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rsi_18), 4)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rcx_150), 5)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                *(arg4 + sx.q(temp0_687)), 6)
                            zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            arg8 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg8))
                            arg9 = _mm256_broadcast_ss(32767f)
                            zmm0 = _mm256_div_ps(zmm0, arg9)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + arg6), 7)
                            arg10 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg11[0].o), arg8)), 
                                arg9)
                            arg7 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg7[0].o), arg8)), 
                                arg9)
                            arg8 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm0, zmm0), arg10, 
                                    arg10), 
                                arg7, arg7)
                            arg8 = _mm256_and_ps(_mm256_cmp_ps(zmm3, arg8, 1), _mm256_sqrt_ps(arg8))
                            var_4c0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                            var_4a0 = _mm256_maskstore_ps(zmm1, arg10)
                            var_480_1 = _mm256_maskstore_ps(zmm1, arg7)
                            var_460_1 = _mm256_maskstore_ps(zmm1, arg8)
                            arg19[0].o = zx.o(0)
                        case 3
                            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            int64_t temp0_722
                            int32_t temp1_31
                            temp0_722, temp1_31 =
                                _mm256_i32gather_ps(arg10, *(arg4 + arg12[0].q), zmm1)
                            arg7 = _mm256_add_epi32(arg12, arg15)
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            int64_t temp0_725
                            int32_t temp1_32
                            temp0_725, temp1_32 =
                                _mm256_i32gather_ps(arg11, *(arg4 + arg7[0].q), zmm1)
                            arg7 = _mm256_add_epi32(arg12, arg16)
                            arg14[0].o = zx.o(0)
                            int64_t temp0_727
                            int32_t temp1_33
                            temp0_727, temp1_33 =
                                _mm256_i32gather_ps(arg14, *(arg4 + arg7[0].q), zmm1)
                            arg7 = __vpaddd_ymmqq_ymmqq_memqq(arg12, var_820_1)
                            arg15[0].o = zx.o(0)
                            int64_t temp0_729
                            int32_t temp1_34
                            temp0_729, temp1_34 =
                                _mm256_i32gather_ps(arg15, *(arg4 + arg7[0].q), zmm1)
                            arg7 = _mm256_add_epi32(arg12, __vpbroadcastd_ymmqq_memd(0x10))
                            arg16[0].o = zx.o(0)
                            int64_t temp0_732
                            int32_t temp1_35
                            temp0_732, temp1_35 =
                                _mm256_i32gather_ps(arg16, *(arg4 + arg7[0].q), zmm1)
                            arg8 = temp1_35
                            arg7 = _mm256_add_epi32(arg12, __vpbroadcastd_ymmqq_memd(0x14))
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            int64_t temp0_736
                            int32_t temp1_36
                            temp0_736, temp1_36 =
                                _mm256_i32gather_ps(arg8, *(arg4 + arg7[0].q), zmm1)
                            arg7 = __vpaddd_ymmqq_ymmqq_memqq(arg12, var_700_1)
                            zmm0 = _mm256_add_epi32(arg7, zmm0)
                            arg7[0].o = zx.o(0)
                            int64_t temp0_739
                            int32_t temp1_37
                            temp0_739, temp1_37 =
                                _mm256_i32gather_epi32(arg7, *(arg4 + zmm0[0].q), zmm1)
                            arg7 = temp0_739
                            zmm0 = _mm256_srli_epi32(arg7, 0x15)
                            arg9 = _mm256_srli_epi32(arg7, 0xa)
                            arg19[0].o = zx.o(0)
                            arg9 &= __vpbroadcastd_ymmqq_memd(0x7ff)
                            arg17 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg17))
                            arg9 = _mm256_add_epi32(arg9, arg17)
                            arg17 = _mm256_broadcast_ss(1023f)
                            zmm0 = _mm256_div_ps(zmm0, arg17)
                            arg9 = _mm256_div_ps(_mm256_cvtepi32_ps(arg9), arg17)
                            arg7 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    arg7 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                    __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                _mm256_broadcast_ss(511f))
                            zmm0 = _mm256_fmadd_ps(zmm0, temp0_729, temp0_722)
                            arg9 = _mm256_fmadd_ps(arg9, temp0_732, temp0_725)
                            arg7 = _mm256_fmadd_ps(arg7, temp0_736, temp0_727)
                            arg8 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm0, zmm0), arg9, 
                                    arg9), 
                                arg7, arg7)
                            arg8 =
                                _mm256_and_ps(_mm256_cmp_ps(arg19, arg8, 1), _mm256_sqrt_ps(arg8))
                            var_4c0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                            var_4a0 = _mm256_maskstore_ps(zmm1, arg9)
                            var_480_1 = _mm256_maskstore_ps(zmm1, arg7)
                            var_460_1 = _mm256_maskstore_ps(zmm1, arg8)
                        case 4
                            arg7 = __vpaddd_ymmqq_ymmqq_memqq(arg12, var_700_1)
                            zmm0 = _mm256_add_epi32(arg7, zmm0)
                            arg7[0].o = zx.o(0)
                            int64_t temp0_773
                            int32_t temp1_38
                            temp0_773, temp1_38 =
                                _mm256_i32gather_epi32(arg7, *(arg4 + zmm0[0].q), zmm1)
                            arg7 = temp0_773
                            zmm0 = _mm256_srli_epi32(arg7, 0x15)
                            arg8 = _mm256_srli_epi32(arg7, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                            arg7 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                            arg9 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg9))
                            arg10 = _mm256_broadcast_ss(1023f)
                            zmm0 = _mm256_div_ps(zmm0, arg10)
                            arg8 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(arg8, arg9)), 
                                arg10)
                            arg7 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, 
                                    __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                _mm256_broadcast_ss(511f))
                        label_1402a472e:
                            arg9 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm0, zmm0), arg8, 
                                    arg8), 
                                arg7, arg7)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            arg9 = _mm256_and_ps(_mm256_cmp_ps(zmm3, arg9, 1), _mm256_sqrt_ps(arg9))
                            var_4c0_1 = _mm256_maskstore_ps(zmm1, zmm0)
                            var_4a0 = _mm256_maskstore_ps(zmm1, arg8)
                            var_480_1 = _mm256_maskstore_ps(zmm1, arg7)
                            var_460_1 = _mm256_maskstore_ps(zmm1, arg9)
                            arg19[0].o = zx.o(0)
                        case 5
                            arg7 = __vpaddd_ymmqq_ymmqq_memqq(arg12, var_700_1)
                            zmm0 = _mm256_add_epi32(arg7, zmm0)
                            arg7[0].o = zx.o(0)
                            int64_t temp0_793
                            int32_t temp1_39
                            temp0_793, temp1_39 =
                                _mm256_i32gather_epi32(arg7, *(arg4 + zmm0[0].q), zmm1)
                            arg7 = temp0_793
                            zmm0 = _mm256_srli_epi32(arg7, 0x15)
                            arg8 = _mm256_srli_epi32(arg7, 0xa)
                            arg9 = _mm256_srli_epi32(arg7, 5)
                            arg10 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                            arg11 = __vpbroadcastd_ymmqq_memd(0x400)
                            arg14 = __vpbroadcastd_ymmqq_memd(0x380)
                            arg15 = __vpbroadcastd_ymmqq_memd(0x3d80)
                            zmm0 = (arg9 & arg10) | (zmm0 & arg11)
                                | _mm256_add_epi32(zmm0 & arg14, arg15)
                            arg8 = (_mm256_slli_epi32(arg7, 6) & arg10) | (arg8 & arg11)
                                | _mm256_add_epi32(arg8 & arg14, arg15)
                            arg9 = arg7 & __vpbroadcastd_ymmqq_memd(0x1c0)
                            arg7 = (_mm256_slli_epi32(arg7, 0x11)
                                & __vpbroadcastd_ymmqq_memd(0x7e0000))
                                | (arg7 & __vpbroadcastd_ymmqq_memd(0x200))
                                | _mm256_add_epi32(arg9, __vpbroadcastd_ymmqq_memd(0x1ec0))
                            goto label_1402a472e
                
                arg16 = var_4a0
                arg17 = var_480_1
                arg18 = var_460_1
                arg10 = _mm256_cmp_ps(arg19, 
                    _mm256_fmadd_ps(
                        _mm256_fmadd_ps(
                            _mm256_fmadd_ps(_mm256_mul_ps(var_600, arg16), var_620, var_4c0_1), 
                            var_5e0, arg17), 
                        var_5c0, arg18), 
                    2)
                arg11 = _mm256_broadcast_ss(1f)
                arg10 = _mm256_blendv_ps(_mm256_broadcast_ss(-1f), arg11, arg10)
                zmm3 = var_a20_1
                arg14 = _mm256_mul_ps(_mm256_sub_ps(arg11, zmm3), arg10)
                zmm0 = _mm256_mul_ps(arg14, var_620)
                arg10 = _mm256_mul_ps(arg14, var_600)
                arg11 = _mm256_mul_ps(arg14, var_5e0)
                arg14 = _mm256_mul_ps(arg14, var_5c0)
                zmm0 = _mm256_fmadd_ps(zmm0, zmm3, var_4c0_1)
                arg10 = _mm256_fmadd_ps(arg10, zmm3, arg16)
                arg11 = _mm256_fmadd_ps(arg11, zmm3, arg17)
                arg14 = _mm256_fmadd_ps(arg14, zmm3, arg18)
                float var_200_1[0x8] = zmm0
                float var_1e0_1[0x8] = arg10
                float var_1c0_1[0x8] = arg11
                int32_t var_1a0_1[0x8] = arg14
                arg7 = _mm256_mul_ps(arg11, arg11)
                zmm3 = _mm256_mul_ps(arg14, arg14)
                arg7 = _mm256_add_ps(_mm256_fmadd_ps(arg7, zmm0, zmm0), 
                    _mm256_fmadd_ps(zmm3, arg10, arg10))
                zmm3 = _mm256_broadcast_ss(9.99999994e-09f)
                arg8 = _mm256_cmp_ps(zmm3, arg7, 6)
                zmm3 = _mm256_cmp_ps(zmm3, arg7, 2)
                arg9 = _mm256_broadcast_ss(0.5f)
                arg15 = _mm256_mul_ps(arg7, arg9)
                arg7 = _mm256_rsqrt_ps(arg7)
                arg16 = _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(arg7, arg7), arg15, arg9), 
                    arg7, arg7)
                arg7 = _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(arg16, arg16), arg15, arg9), 
                    arg16, arg16)
                zmm0 = _mm256_mul_ps(arg7, zmm0)
                arg9 = _mm256_mul_ps(arg7, arg10)
                arg10 = _mm256_mul_ps(arg7, arg11)
                arg7 = _mm256_mul_ps(arg7, arg14)
                zmm0 = _mm256_and_ps(zmm0, zmm3)
                arg9 = _mm256_and_ps(arg9, zmm3)
                arg10 = _mm256_and_ps(arg10, zmm3)
                arg11 = _mm256_broadcast_ss(1f)
                arg8 = _mm256_and_ps(arg8, arg11)
                arg7 = _mm256_or_ps(_mm256_and_ps(arg7, zmm3), arg8)
                var_620 = _mm256_maskstore_ps(zmm1, zmm0)
                var_600 = _mm256_maskstore_ps(zmm1, arg9)
                var_5e0 = _mm256_maskstore_ps(zmm1, arg10)
                var_5c0 = _mm256_maskstore_ps(zmm1, arg7)
                arg15 = var_840
                arg16 = var_9e0
        
        zmm0[0].o = var_620[0].o
        arg14[0].o = var_620[4].o
        arg7[0].o = var_600[0].o
        zmm3[0].o = var_600[4].o
        arg10[0].o = var_5e0[0].o
        arg11[0].o = var_5e0[4].o
        arg9[0].o = var_5c0[0].o
        arg8[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg9[0].o)
        arg9[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg9[0].o)
        arg10[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
        zmm1[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg8[0].o)
        int128_t var_420 = zmm1[0].o
        zmm1[0].o = var_5c0[4].o
        arg8[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg8[0].o)
        int128_t var_410_1 = arg8[0].o
        zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
        arg7[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
        int128_t var_400_1 = arg7[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
        int128_t var_3f0_1 = zmm0[0].o
        zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
        arg7[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm3[0].o)
        arg8[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
        int128_t var_3e0_1 = arg8[0].o
        zmm1[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
        int128_t var_3d0_1 = zmm0[0].o
        zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm3[0].o)
        arg7[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        int128_t var_3c0_1 = arg7[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        int128_t var_3b0_1 = zmm0[0].o
        int64_t rsi_19
        
        for (uint64_t i_4 = 0xff; i_4 != 0; i_4 = rsi_19 & rbx_1)
            uint64_t rcx_152 = _tzcnt_u64(i_4)
            rsi_19 = i_4 & not.q(1 << (rcx_152 u% 0x40))
            uint32_t var_440[0x8] = arg13
            zmm0[0].o = (&var_420)[rcx_152]
            arg1[sx.q(var_440[zx.q(rcx_152.d) & 7]) * 3] = zmm0[0].o
            uint64_t rcx_157 = _tzcnt_u64(rsi_19)
            rbx_1 = rol.q(-2, rcx_157.b)
            rdi = sx.q(var_440[zx.q(rcx_157.d) & 7]) * 0x30
            zmm0[0].o = (&var_420)[rcx_157]
            *(arg1 + rdi) = zmm0[0].o
        
        r11 += 8
        arg9 = _mm256_cmpeq_epi32(arg9, arg9)
    while (r11 s< r13_4)

if (r11 s< arg24)
    zmm0[0].o = zx.o(r11)
    zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
    zmm1[0].o = zx.o(arg24)
    arg19 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
    zmm1 = _mm256_slli_epi32(zmm0, 3)
    arg15[0].o = zx.o(0)
    int64_t temp0_894
    int32_t temp1_40
    temp0_894, temp1_40 = _mm256_i32gather_epi32(arg15, *(arg2 + zmm1[0].q), arg19)
    arg15 = temp0_894
    arg16 = __vpbroadcastd_ymmqq_memd(4)
    zmm3[0].o = zx.o(0)
    int64_t temp0_896
    int32_t temp1_41
    temp0_896, temp1_41 = _mm256_i32gather_epi32(zmm3, *(arg2 + (zmm1 | arg16)[0].q), arg19)
    arg7 = _mm256_slli_epi32(temp0_896, 4)
    arg17 = __vpbroadcastd_ymmqq_memd(8)
    zmm1 = arg7 | arg17
    arg9[0].o = zx.o(0)
    int64_t temp0_899
    int32_t temp1_42
    temp0_899, temp1_42 = _mm256_i32gather_epi32(arg9, *(arg3 + zmm1[0].q), arg19)
    arg9 = temp0_899
    zmm1[0].o = zx.o(0)
    zmm0 = __vpbroadcastd_ymmqq_memd(0xc)
    int32_t var_7c0_1[0x8] = zmm0
    arg7[0].o = zx.o(0)
    int64_t temp0_901
    int32_t temp1_43
    temp0_901, temp1_43 = _mm256_i32gather_epi32(arg7, *(arg3 + (arg7 | zmm0)[0].q), arg19)
    arg7 = temp0_901
    arg14 = __vpbroadcastd_ymmqq_memd(1)
    zmm3 = _mm256_cmpeq_epi32(arg7, arg14)
    arg8 = zmm3 & arg19
    arg10[0].o = _mm256_extracti128_si256(arg8, 1)
    arg10[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, arg10[0].o)
    arg10[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
    float var_8e0[0x8]
    float var_8c0[0x8]
    float var_8a0[0x8]
    uint32_t var_880[0x8]
    
    if (__vpmovmskb_gpr32d_xmmdq(arg10[0].o) != 0)
        arg10[0].o = zx.o(0)
        int64_t temp0_908
        int32_t temp1_44
        temp0_908, temp1_44 = _mm256_i32gather_ps(arg10, *(arg4 + arg9[0].q), arg8)
        arg10 = temp0_908
        zmm0 = _mm256_add_epi32(arg9, arg16)
        arg12[0].o = zx.o(0)
        int64_t temp0_910
        int32_t temp1_45
        temp0_910, temp1_45 = _mm256_i32gather_ps(arg12, *(arg4 + zmm0[0].q), arg8)
        arg12 = temp0_910
        zmm0 = _mm256_add_epi32(arg9, arg17)
        arg13[0].o = zx.o(0)
        int64_t temp0_912
        int32_t temp1_46
        temp0_912, temp1_46 = _mm256_i32gather_ps(arg13, *(arg4 + zmm0[0].q), arg8)
        arg13 = temp0_912
        arg11 = temp1_46
        zmm0 = _mm256_fnmadd_ps(
            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg10, arg10), arg12, 
                arg12), 
            arg13, arg13)
        zmm1 = _mm256_cmp_ps(zmm1, zmm0, 1)
        zmm0 = _mm256_and_ps(zmm1, _mm256_sqrt_ps(zmm0))
        var_8e0 = _mm256_maskstore_ps(arg8, arg10)
        var_8c0 = _mm256_maskstore_ps(arg8, arg12)
        var_8a0 = _mm256_maskstore_ps(arg8, arg13)
        var_880 = _mm256_maskstore_ps(arg8, zmm0)
    
    int32_t var_7e0_1[0x8] = arg17
    zmm0 = zmm3 & not.32(arg19)
    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
    float var_980_2[0x8] = zmm0
    arg18[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg18[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
        int64_t var_900_1[0x4] = arg9
        zmm3 = _mm256_cvtepi32_epi64(arg9[0].o)
        arg8[0].o = zx.o(rcx)
        int128_t var_960_1 = arg8[0].o
        arg8[0].o = _mm_broadcastd_epi32(arg8[0])
        arg8 = _mm256_cvtepu32_epi64(arg8[0].o)
        arg10[0].o = zx.o(var_9ec)
        arg13 = _mm256_broadcastd_epi32(arg10[0])
        float var_9a0_2[0x8] = _mm256_add_epi64(zmm1, arg8)
        arg8 = _mm256_add_epi64(zmm3, arg8)
        arg11 = __vpbroadcastd_ymmqq_memd(2)
        zmm1[0].o = zx.o(0)
        arg9[0].o = arg21
        int32_t rcx_164
        rcx_164.b = zx.o(0) f>= arg9[0]
        zmm1[0].o = zx.o(neg.d(rcx_164))
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm1[0].o ^= zmm3[0].o
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        zmm3 = _mm256_cmpgt_epi32(arg11, arg7) & not.32(zmm1)
        arg17 = zmm3 & var_980_2
        int32_t temp0_940 = _mm256_movemask_ps(arg17)
        var_9c0 = arg8
        float var_a20_4[0x8]
        
        if (temp0_940 == 0)
            zmm1[0].o = zx.o(0)
            var_a20_4 = zmm1
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            arg14[0].o = zx.o(0)
            arg17 = var_900_1
            arg10[0].o = var_960_1
        else
            zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
            arg10 = _mm256_add_epi32(arg7, zmm1)
            
            if (arg9[0].o f>= 1f)
                arg7[0].o = zx.o(0)
                zmm1[0].o = zx.o(0)
                var_a20_4 = zmm1
                arg9 = _mm256_blendv_ps(arg7, arg10, arg17)
                arg14 = arg9
                arg17 = var_900_1
                arg10[0].o = var_960_1
            else
                uint32_t var_640_2[0x8] = zmm3
                int32_t var_680_2[0x8] = arg19
                zmm1[0].o = zx.o(arg4)
                zmm1 = _mm256_broadcastq_epi64(zmm1[0].q)
                var_9e0 = arg13
                arg7 = _mm256_mullo_epi32(arg7, arg13)
                zmm3 = _mm256_cvtepi32_epi64(arg7[0].o)
                arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                arg8 = _mm256_add_epi64(arg8, zmm1)
                zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, var_9a0_2)
                float var_a20_3[0x8] = arg10
                arg10 = __vpbroadcastq_ymmqq_memq(3)
                zmm3 = _mm256_add_epi64(zmm3, _mm256_add_epi64(arg8, arg10))
                arg8 = var_a20_3
                zmm1 = _mm256_add_epi64(arg7, _mm256_add_epi64(zmm1, arg10))
                arg7 = __vpbroadcastq_ymmqq_memq(-4)
                arg19 = zmm1 & arg7
                arg13 = zmm3 & arg7
                int32_t rbx_38 = arg20 - 2
                zmm1 = _mm256_broadcastss_ps(arg9[0].o)
                arg7 = _mm256_cvtepi32_ps(arg8)
                zmm1 = _mm256_mul_ps(zmm1, arg7)
                arg7[0].o = arg15[0].o
                arg7[0] = float.s(arg20 - 1)
                arg9[0].o = arg7[0].o f* arg9[0]
                rdi = zx.q(int.d(arg9[0]))
                int32_t rdx_12 = rdi.d s>> 0x1f
                int32_t rdx_13 = rdx_12 & not.d(rdx_12)
                
                if (rbx_38 s> rdx_13)
                    rbx_38 = rdx_13
                
                zmm1 = _mm256_cvttps_epi32(zmm1)
                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                zmm0 = _mm256_min_epi32(_mm256_max_epi32(zmm1, arg7), arg8)
                int32_t var_820_2[0x8] = arg16
                float var_920_2[0x8] = arg11
                var_840[0].o = arg18[0].o
                int32_t var_800_2[0x8] = arg14
                var_500[0].o = arg9[0].o
                
                if (arg20 s< 0x100)
                    zmm1 = _mm256_cvtepi32_epi64(zmm0[0].o)
                    zmm3 = _mm256_add_epi64(arg13, zmm1)
                    char rdx_15 = temp0_940.b
                    
                    if ((rdx_15 & 1) == 0)
                        if ((rdx_15 & 2) != 0)
                            goto label_1402a6f72
                        
                        goto label_1402a537f
                    
                    rdi = zmm3[0].q
                    arg7[0].o = __vpbroadcastb_xmmdq_memb(*rdi)
                    
                    if ((rdx_15 & 2) != 0)
                    label_1402a6f72:
                        rdi = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdi.d, 1)
                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                        
                        if ((rdx_15 & 4) == 0)
                            goto label_1402a538e
                        
                        goto label_1402a6f89
                    
                label_1402a537f:
                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                    
                    if ((rdx_15 & 4) == 0)
                    label_1402a538e:
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rdx_15 & 8) != 0)
                            goto label_1402a6faa
                        
                        goto label_1402a539c
                    
                label_1402a6f89:
                    arg8[0].o = _mm256_extracti128_si256(zmm3, 1)
                    rdi = zx.q(*arg8[0].q)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdi.d, 2)
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rdx_15 & 8) != 0)
                    label_1402a6faa:
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        rdi = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdi.d, 3)
                        zmm3 = _mm256_add_epi64(arg19, zmm1)
                        
                        if ((rdx_15 & 0x10) == 0)
                            goto label_1402a53a9
                        
                        goto label_1402a6fd0
                    
                label_1402a539c:
                    zmm3 = _mm256_add_epi64(arg19, zmm1)
                    
                    if ((rdx_15 & 0x10) == 0)
                    label_1402a53a9:
                        
                        if ((rdx_15 & 0x20) != 0)
                            goto label_1402a6fe7
                        
                        goto label_1402a53b2
                    
                label_1402a6fd0:
                    rdi = zx.q(*zmm3[0].q)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdi.d, 4)
                    
                    if ((rdx_15 & 0x20) != 0)
                    label_1402a6fe7:
                        rdi = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdi.d, 5)
                        
                        if ((rdx_15 & 0x40) == 0)
                            goto label_1402a53bb
                        
                        goto label_1402a6ff8
                    
                label_1402a53b2:
                    
                    if ((rdx_15 & 0x40) != 0)
                    label_1402a6ff8:
                        zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                        rdi = zx.q(*zmm1[0].q)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdi.d, 6)
                        
                        if (temp0_940.b s< 0)
                        label_1402a7013:
                            zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                            rdi = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdi.d, 7)
                    else
                    label_1402a53bb:
                        
                        if (temp0_940.b s< 0)
                            goto label_1402a7013
                    
                    zmm1[0].o = arg7[0].o & data_142fc92e0
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg7[0].o = zx.o(rbx_38)
                    arg8 = _mm256_broadcastd_epi32(arg7[0])
                    zmm1 = _mm256_cmpgt_epi32(zmm1, arg8)
                    float var_540_2[0x8] = zmm1 ^ _mm256_cmpeq_epi32(arg7, arg7)
                    arg18 = zmm0
                    
                    if (_mm256_movemask_ps(zmm1 & not.32(arg17)) != 0)
                        zmm3 = var_540_2
                        arg18 = _mm256_blendv_ps(zmm0, var_a20_3, zmm3)
                        zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                        arg12 = _mm256_sub_epi32(zmm0, zmm3)
                        arg10 = zmm1 & not.32(_mm256_cmpgt_epi32(arg12, var_a20_3) ^ zmm3)
                        zmm1 = arg17 & arg10
                        int32_t i_5 = _mm256_movemask_ps(zmm1)
                        
                        if (i_5 != 0)
                            arg16[0].o = data_142fc92e0
                            arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                            arg14 = zmm0
                            
                            do
                                arg7 = arg12
                                arg9 = _mm256_cvtepi32_epi64(arg7[0].o)
                                arg12 = _mm256_add_epi64(arg13, arg9)
                                char temp0_1103 = _mm256_movemask_ps(zmm1)
                                
                                if ((temp0_1103 & 1) == 0)
                                    if ((temp0_1103 & 2) != 0)
                                        goto label_1402a546d
                                    
                                    goto label_1402a5555
                                
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                    zx.d(*arg12[0].q), 0)
                                
                                if ((temp0_1103 & 2) != 0)
                                label_1402a546d:
                                    uint32_t rsi_38 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rsi_38, 1)
                                    zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                                    
                                    if ((temp0_1103 & 4) == 0)
                                        goto label_1402a5565
                                    
                                    goto label_1402a5485
                                
                            label_1402a5555:
                                zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                                
                                if ((temp0_1103 & 4) == 0)
                                label_1402a5565:
                                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                    
                                    if ((temp0_1103 & 8) != 0)
                                        goto label_1402a54a7
                                    
                                    goto label_1402a5574
                                
                            label_1402a5485:
                                arg9[0].o = _mm256_extracti128_si256(arg12, 1)
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                    zx.d(*arg9[0].q), 2)
                                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                
                                if ((temp0_1103 & 8) != 0)
                                label_1402a54a7:
                                    arg9[0].o = _mm256_extracti128_si256(arg12, 1)
                                    uint32_t rsi_42 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1))
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rsi_42, 3)
                                    arg12 = _mm256_add_epi64(arg19, zmm1)
                                    
                                    if ((temp0_1103 & 0x10) == 0)
                                        goto label_1402a5582
                                    
                                    goto label_1402a54d1
                                
                            label_1402a5574:
                                arg12 = _mm256_add_epi64(arg19, zmm1)
                                
                                if ((temp0_1103 & 0x10) == 0)
                                label_1402a5582:
                                    
                                    if ((temp0_1103 & 0x20) != 0)
                                        goto label_1402a54e6
                                    
                                    goto label_1402a558c
                                
                            label_1402a54d1:
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                    zx.d(*arg12[0].q), 4)
                                
                                if ((temp0_1103 & 0x20) != 0)
                                label_1402a54e6:
                                    uint32_t rsi_46 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rsi_46, 5)
                                    
                                    if ((temp0_1103 & 0x40) == 0)
                                        goto label_1402a5596
                                    
                                    goto label_1402a54f8
                                
                            label_1402a558c:
                                
                                if ((temp0_1103 & 0x40) != 0)
                                label_1402a54f8:
                                    zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_1103 s< 0)
                                    label_1402a5514:
                                        zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                                        uint16_t rdi_29[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rdi_29, 7)
                                else
                                label_1402a5596:
                                    
                                    if (temp0_1103 s< 0)
                                        goto label_1402a5514
                                
                                zmm1[0].o = zmm3[0].o & arg16[0].o
                                zmm1 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), arg8)
                                arg12 = zmm1 & arg10
                                zmm1[0].o = zx.o(0)
                                rdi = zx.q(_mm256_movemask_ps(arg12 & arg17))
                                
                                if (rdi.d != i_5)
                                    zmm1 = arg12 ^ arg10
                                
                                arg18 = _mm256_blendv_ps(arg18, arg14, arg12)
                                arg12 = _mm256_sub_epi32(arg7, arg11)
                                arg9 = __vpcmpgtd_ymmqq_ymmqq_memqq(arg12, var_a20_3)
                                arg10 = arg9 & not.32(zmm1)
                                zmm1 = arg10 & arg17
                                i_5 = _mm256_movemask_ps(zmm1)
                                arg14 = arg7
                            while (i_5 != 0)
                    
                    zmm1 = _mm256_andnot_ps(var_540_2, arg17)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        zmm1 = __vxorps_ymmqq_ymmqq_memqq(var_540_2, data_142fc9420)
                        var_540_2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_540_2[0].o, var_540_2[0].o)
                        arg18 = _mm256_blendv_ps(arg18, var_540_2, zmm1)
                        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                        arg14 = _mm256_add_epi32(zmm0, arg10)
                        arg16 = _mm256_cmpgt_epi32(arg14, var_540_2) & zmm1
                        zmm1 = arg16 & arg17
                        int32_t i_6 = _mm256_movemask_ps(zmm1)
                        
                        if (i_6 != 0)
                            arg11[0].o = data_142fc92e0
                            
                            do
                                arg7 = _mm256_add_epi64(arg13, _mm256_cvtepi32_epi64(arg14[0].o))
                                char temp0_1140 = _mm256_movemask_ps(zmm1)
                                
                                if ((temp0_1140 & 1) == 0)
                                    if ((temp0_1140 & 2) != 0)
                                        goto label_1402a566d
                                    
                                    goto label_1402a5751
                                
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                    zx.d(*arg7[0].q), 0)
                                
                                if ((temp0_1140 & 2) != 0)
                                label_1402a566d:
                                    uint32_t rsi_52 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rsi_52, 1)
                                    zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                                    
                                    if ((temp0_1140 & 4) == 0)
                                        goto label_1402a5761
                                    
                                    goto label_1402a5685
                                
                            label_1402a5751:
                                zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                                
                                if ((temp0_1140 & 4) == 0)
                                label_1402a5761:
                                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                    
                                    if ((temp0_1140 & 8) != 0)
                                        goto label_1402a56a7
                                    
                                    goto label_1402a5770
                                
                            label_1402a5685:
                                arg9[0].o = _mm256_extracti128_si256(arg7, 1)
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                    zx.d(*arg9[0].q), 2)
                                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                
                                if ((temp0_1140 & 8) != 0)
                                label_1402a56a7:
                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                    uint32_t rsi_56 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rsi_56, 3)
                                    arg7 = _mm256_add_epi64(arg19, zmm1)
                                    
                                    if ((temp0_1140 & 0x10) == 0)
                                        goto label_1402a577e
                                    
                                    goto label_1402a56d1
                                
                            label_1402a5770:
                                arg7 = _mm256_add_epi64(arg19, zmm1)
                                
                                if ((temp0_1140 & 0x10) == 0)
                                label_1402a577e:
                                    
                                    if ((temp0_1140 & 0x20) != 0)
                                        goto label_1402a56e6
                                    
                                    goto label_1402a5788
                                
                            label_1402a56d1:
                                zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                    zx.d(*arg7[0].q), 4)
                                
                                if ((temp0_1140 & 0x20) != 0)
                                label_1402a56e6:
                                    uint16_t rsi_60[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    zmm3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rsi_60, 5)
                                    
                                    if ((temp0_1140 & 0x40) == 0)
                                        goto label_1402a5792
                                    
                                    goto label_1402a56f8
                                
                            label_1402a5788:
                                
                                if ((temp0_1140 & 0x40) != 0)
                                label_1402a56f8:
                                    zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, 
                                        zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_1140 s< 0)
                                    label_1402a5714:
                                        zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                                        uint16_t rdi_32[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rdi_32, 7)
                                else
                                label_1402a5792:
                                    
                                    if (temp0_1140 s< 0)
                                        goto label_1402a5714
                                
                                zmm1[0].o = zmm3[0].o & arg11[0].o
                                zmm1 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), arg8)
                                arg7 = zmm1 & not.32(arg16)
                                zmm1[0].o = zx.o(0)
                                arg9 = arg7 & arg17
                                rdi = zx.q(_mm256_movemask_ps(arg9))
                                arg12[0].o = zx.o(0)
                                
                                if (rdi.d != i_6)
                                    arg12 = arg7 ^ arg16
                                
                                arg18 = _mm256_blendv_ps(arg18, arg14, arg7)
                                arg14 = _mm256_add_epi32(arg14, arg10)
                                arg16 = _mm256_cmpgt_epi32(arg14, zmm1) & arg12
                                zmm1 = arg16 & arg17
                                i_6 = _mm256_movemask_ps(zmm1)
                            while (i_6 != 0)
                    
                    arg10[0].o = var_960_1
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg9 = _mm256_blendv_ps(zmm1, arg18, arg17)
                    zmm1 = _mm256_cvtepi32_epi64(arg9[0].o)
                    arg7 = _mm256_add_epi64(arg13, zmm1)
                    
                    if ((rdx_15 & 1) != 0)
                        arg8[0].o = __vpbroadcastb_xmmdq_memb(*arg7[0].q)
                    
                    arg16 = var_820_2
                    arg11 = var_920_2
                    arg18[0].o = var_840[0].o
                    zmm0 = var_800_2
                    
                    if ((rdx_15 & 2) == 0)
                        zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                        
                        if ((rdx_15 & 4) != 0)
                            goto label_1402a7049
                        
                        goto label_1402a5853
                    
                    uint32_t rbx_71 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rbx_71, 1)
                    zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
                    
                    if ((rdx_15 & 4) != 0)
                    label_1402a7049:
                        zmm3[0].o = _mm256_extracti128_si256(arg7, 1)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm3[0].q), 2)
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rdx_15 & 8) == 0)
                            goto label_1402a5861
                        
                        goto label_1402a706a
                    
                label_1402a5853:
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rdx_15 & 8) == 0)
                    label_1402a5861:
                        arg7 = _mm256_add_epi64(arg19, zmm1)
                        
                        if ((rdx_15 & 0x10) != 0)
                            goto label_1402a7093
                        
                        goto label_1402a586e
                    
                label_1402a706a:
                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                    uint32_t rbx_75 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rbx_75, 3)
                    arg7 = _mm256_add_epi64(arg19, zmm1)
                    
                    if ((rdx_15 & 0x10) != 0)
                    label_1402a7093:
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*arg7[0].q), 4)
                        
                        if ((rdx_15 & 0x20) == 0)
                            goto label_1402a5877
                        
                        goto label_1402a70a7
                    
                label_1402a586e:
                    
                    if ((rdx_15 & 0x20) == 0)
                    label_1402a5877:
                        
                        if ((rdx_15 & 0x40) != 0)
                            goto label_1402a70b8
                        
                        goto label_1402a5880
                    
                label_1402a70a7:
                    uint32_t rbx_79 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rbx_79, 5)
                    
                    if ((rdx_15 & 0x40) == 0)
                    label_1402a5880:
                        
                        if (temp0_940.b s< 0)
                        label_1402a70d3:
                            zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                            uint32_t rbx_83 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rbx_83, 7)
                    else
                    label_1402a70b8:
                        zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm1[0].q), 6)
                        
                        if (temp0_940.b s< 0)
                            goto label_1402a70d3
                    
                    zmm1 = _mm256_sub_epi32(arg9, _mm256_cmpeq_epi32(zmm1, zmm1))
                    arg7[0].o = zx.o(0)
                    arg14 = _mm256_blendv_ps(arg7, zmm1, arg17)
                    arg7 = var_a20_3
                    zmm1 = _mm256_cmpgt_epi32(arg14, arg7) & arg17
                    rbx_1 = zx.q(_mm256_movemask_ps(zmm1))
                    
                    if (rbx_1.d != 0)
                        arg14 = _mm256_blendv_ps(arg14, arg7, zmm1)
                    
                    arg17 = var_900_1
                    zmm1 = _mm256_cvtepi32_epi64(arg14[0].o)
                    zmm3 = _mm256_add_epi64(arg13, zmm1)
                    
                    if ((rdx_15 & 1) == 0)
                        arg13 = var_9e0
                        
                        if ((rdx_15 & 2) != 0)
                            goto label_1402a710b
                        
                        goto label_1402a58e0
                    
                    rbx_1 = zmm3[0].q
                    arg7[0].o = __vpbroadcastb_xmmdq_memb(*rbx_1)
                    arg13 = var_9e0
                    
                    if ((rdx_15 & 2) != 0)
                    label_1402a710b:
                        rbx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rbx_1.d, 1)
                        zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                        
                        if ((rdx_15 & 4) == 0)
                            goto label_1402a58ef
                        
                        goto label_1402a7122
                    
                label_1402a58e0:
                    zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                    
                    if ((rdx_15 & 4) == 0)
                    label_1402a58ef:
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rdx_15 & 8) != 0)
                            goto label_1402a7179
                        
                        goto label_1402a58fd
                    
                label_1402a7122:
                    arg10 = zmm0
                    zmm0[0].o = arg18[0].o
                    arg18 = arg17
                    arg9[0].o = _mm256_extracti128_si256(zmm3, 1)
                    arg18[0].o = zmm0[0].o
                    zmm0 = arg10
                    arg10[0].o = var_960_1
                    rbx_1 = zx.q(*arg9[0].q)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rbx_1.d, 2)
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rdx_15 & 8) != 0)
                    label_1402a7179:
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        rbx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rbx_1.d, 3)
                        zmm3 = _mm256_add_epi64(arg19, zmm1)
                        
                        if ((rdx_15 & 0x10) == 0)
                            goto label_1402a590a
                        
                        goto label_1402a719f
                    
                label_1402a58fd:
                    zmm3 = _mm256_add_epi64(arg19, zmm1)
                    
                    if ((rdx_15 & 0x10) != 0)
                    label_1402a719f:
                        rbx_1 = zx.q(*zmm3[0].q)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rbx_1.d, 4)
                        arg19 = var_680_2
                        
                        if ((rdx_15 & 0x20) != 0)
                        label_1402a71bf:
                            rbx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rbx_1.d, 5)
                            
                            if ((rdx_15 & 0x40) == 0)
                                goto label_1402a5925
                            
                            goto label_1402a71d0
                    else
                    label_1402a590a:
                        arg19 = var_680_2
                        
                        if ((rdx_15 & 0x20) != 0)
                            goto label_1402a71bf
                    
                    if ((rdx_15 & 0x40) != 0)
                    label_1402a71d0:
                        zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm1[0].q), 6)
                        zmm1[0].o = arg8[0].o & data_142fc92e0
                        
                        if (temp0_940.b s< 0)
                        label_1402a71f3:
                            zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                            uint32_t rcx_193 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_193, 7)
                    else
                    label_1402a5925:
                        zmm1[0].o = arg8[0].o & data_142fc92e0
                        
                        if (temp0_940.b s< 0)
                            goto label_1402a71f3
                    
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg7[0].o &= data_142fc92e0
                else
                    zmm1 = _mm256_add_epi32(zmm0, zmm0)
                    arg7 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    zmm3 = _mm256_add_epi64(arg13, arg7)
                    char rdx_14 = temp0_940.b
                    
                    if ((rdx_14 & 1) == 0)
                        if ((rdx_14 & 2) != 0)
                            goto label_1402a6d00
                        
                        goto label_1402a4da9
                    
                    rdi = zmm3[0].q
                    arg7[0].o = __vpbroadcastw_xmmdq_memw(*rdi)
                    
                    if ((rdx_14 & 2) != 0)
                    label_1402a6d00:
                        rdi = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdi, 1)
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((rdx_14 & 4) == 0)
                            goto label_1402a4db8
                        
                        goto label_1402a6d1a
                    
                label_1402a4da9:
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    
                    if ((rdx_14 & 4) == 0)
                    label_1402a4db8:
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rdx_14 & 8) != 0)
                            goto label_1402a6d38
                        
                        goto label_1402a4dc6
                    
                label_1402a6d1a:
                    arg8[0].o = _mm256_extracti128_si256(zmm3, 1)
                    rdi = arg8[0].q
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdi, 2)
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rdx_14 & 8) != 0)
                    label_1402a6d38:
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        rdi = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdi, 3)
                        zmm3 = _mm256_add_epi64(arg19, zmm1)
                        
                        if ((rdx_14 & 0x10) == 0)
                            goto label_1402a4dd3
                        
                        goto label_1402a6d56
                    
                label_1402a4dc6:
                    zmm3 = _mm256_add_epi64(arg19, zmm1)
                    
                    if ((rdx_14 & 0x10) == 0)
                    label_1402a4dd3:
                        
                        if ((rdx_14 & 0x20) != 0)
                            goto label_1402a6d69
                        
                        goto label_1402a4ddc
                    
                label_1402a6d56:
                    rdi = zmm3[0].q
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdi, 4)
                    
                    if ((rdx_14 & 0x20) != 0)
                    label_1402a6d69:
                        rdi = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdi, 5)
                        
                        if ((rdx_14 & 0x40) == 0)
                            goto label_1402a4de5
                        
                        goto label_1402a6d7d
                    
                label_1402a4ddc:
                    
                    if ((rdx_14 & 0x40) != 0)
                    label_1402a6d7d:
                        zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                        rdi = zmm1[0].q
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdi, 6)
                        
                        if (temp0_940.b s< 0)
                        label_1402a6d95:
                            zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                            rdi = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdi, 7)
                    else
                    label_1402a4de5:
                        
                        if (temp0_940.b s< 0)
                            goto label_1402a6d95
                    
                    zmm1 = _mm256_cvtepu16_epi32(arg7[0].o)
                    arg7[0].o = zx.o(rbx_38)
                    arg18 = _mm256_broadcastd_epi32(arg7[0])
                    arg7 = _mm256_cmpgt_epi32(zmm1, arg18)
                    arg9 = arg7 ^ _mm256_cmpeq_epi32(zmm1, zmm1)
                    arg8 = zmm0
                    
                    if (_mm256_movemask_ps(arg7 & not.32(arg17)) != 0)
                        zmm3 = var_a20_3
                        arg8 = _mm256_blendv_ps(zmm0, zmm3, arg9)
                        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                        zmm1 = _mm256_sub_epi32(zmm0, arg10)
                        zmm3 = _mm256_cmpgt_epi32(zmm1, zmm3) ^ arg10
                        arg11 = arg7 & not.32(zmm3)
                        arg10 = arg17 & arg11
                        int32_t i_7 = _mm256_movemask_ps(arg10)
                        
                        if (i_7 != 0)
                            zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                            arg16 = zmm0
                            
                            do
                                arg14 = zmm1
                                zmm1 = _mm256_add_epi32(zmm1, zmm1)
                                arg12 = _mm256_add_epi64(arg13, _mm256_cvtepi32_epi64(zmm1[0].o))
                                char temp0_998 = _mm256_movemask_ps(arg10)
                                
                                if ((temp0_998 & 1) == 0)
                                    if ((temp0_998 & 2) != 0)
                                        goto label_1402a4e74
                                    
                                    goto label_1402a4f5a
                                
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg12[0].q, 0)
                                
                                if ((temp0_998 & 2) != 0)
                                label_1402a4e74:
                                    int64_t rsi_22 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rsi_22, 1)
                                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    
                                    if ((temp0_998 & 4) == 0)
                                        goto label_1402a4f6a
                                    
                                    goto label_1402a4e8f
                                
                            label_1402a4f5a:
                                zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                
                                if ((temp0_998 & 4) == 0)
                                label_1402a4f6a:
                                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                    
                                    if ((temp0_998 & 8) != 0)
                                        goto label_1402a4eae
                                    
                                    goto label_1402a4f79
                                
                            label_1402a4e8f:
                                arg10[0].o = _mm256_extracti128_si256(arg12, 1)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg10[0].q, 2)
                                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                
                                if ((temp0_998 & 8) != 0)
                                label_1402a4eae:
                                    arg10[0].o = _mm256_extracti128_si256(arg12, 1)
                                    int64_t rsi_24 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rsi_24, 3)
                                    arg12 = _mm256_add_epi64(arg19, zmm1)
                                    
                                    if ((temp0_998 & 0x10) == 0)
                                        goto label_1402a4f87
                                    
                                    goto label_1402a4ed2
                                
                            label_1402a4f79:
                                arg12 = _mm256_add_epi64(arg19, zmm1)
                                
                                if ((temp0_998 & 0x10) == 0)
                                label_1402a4f87:
                                    
                                    if ((temp0_998 & 0x20) != 0)
                                        goto label_1402a4ee1
                                    
                                    goto label_1402a4f91
                                
                            label_1402a4ed2:
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg12[0].q, 4)
                                
                                if ((temp0_998 & 0x20) != 0)
                                label_1402a4ee1:
                                    int64_t rsi_26 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rsi_26, 5)
                                    
                                    if ((temp0_998 & 0x40) == 0)
                                        goto label_1402a4f9b
                                    
                                    goto label_1402a4ef6
                                
                            label_1402a4f91:
                                
                                if ((temp0_998 & 0x40) != 0)
                                label_1402a4ef6:
                                    zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_998 s< 0)
                                    label_1402a4f0f:
                                        zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                                        int64_t rdi_24 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdi_24, 7)
                                else
                                label_1402a4f9b:
                                    
                                    if (temp0_998 s< 0)
                                        goto label_1402a4f0f
                                
                                zmm1 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg7[0].o), arg18)
                                    & arg11
                                arg10[0].o = zx.o(0)
                                rdi = zx.q(_mm256_movemask_ps(zmm1 & arg17))
                                
                                if (rdi.d != i_7)
                                    arg10 = zmm1 ^ arg11
                                
                                arg8 = _mm256_blendv_ps(arg8, arg16, zmm1)
                                zmm1 = _mm256_sub_epi32(arg14, zmm3)
                                arg11 =
                                    __vpcmpgtd_ymmqq_ymmqq_memqq(zmm1, var_a20_3) & not.32(arg10)
                                arg10 = arg11 & arg17
                                i_7 = _mm256_movemask_ps(arg10)
                                arg16 = arg14
                            while (i_7 != 0)
                    
                    zmm1 = _mm256_andnot_ps(arg9, arg17)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        zmm1 = __vxorps_ymmqq_ymmqq_memqq(arg9, data_142fc9420)
                        arg7[0].o = zx.o(0)
                        arg8 = _mm256_blendv_ps(arg8, arg7, zmm1)
                        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                        arg11 = _mm256_add_epi32(zmm0, arg10)
                        arg7 = _mm256_cmpgt_epi32(arg11, arg7)
                        zmm3 = arg7 & zmm1
                        zmm1 = zmm3 & arg17
                        
                        for (int32_t i_8 = _mm256_movemask_ps(zmm1); i_8 != 0; 
                                i_8 = _mm256_movemask_ps(zmm1))
                            arg14 = _mm256_add_epi32(arg11, arg11)
                            arg12 = _mm256_add_epi64(arg13, _mm256_cvtepi32_epi64(arg14[0].o))
                            char temp0_1035 = _mm256_movemask_ps(zmm1)
                            
                            if ((temp0_1035 & 1) == 0)
                                if ((temp0_1035 & 2) != 0)
                                    goto label_1402a5054
                                
                                goto label_1402a5136
                            
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg12[0].q, 0)
                            
                            if ((temp0_1035 & 2) != 0)
                            label_1402a5054:
                                int64_t rsi_29 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rsi_29, 1)
                                zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                                
                                if ((temp0_1035 & 4) == 0)
                                    goto label_1402a5146
                                
                                goto label_1402a506f
                            
                        label_1402a5136:
                            zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                            
                            if ((temp0_1035 & 4) == 0)
                            label_1402a5146:
                                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                
                                if ((temp0_1035 & 8) != 0)
                                    goto label_1402a508e
                                
                                goto label_1402a5155
                            
                        label_1402a506f:
                            arg9[0].o = _mm256_extracti128_si256(arg12, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg9[0].q, 2)
                            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                            
                            if ((temp0_1035 & 8) != 0)
                            label_1402a508e:
                                arg9[0].o = _mm256_extracti128_si256(arg12, 1)
                                int64_t rsi_31 = __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rsi_31, 3)
                                arg12 = _mm256_add_epi64(arg19, zmm1)
                                
                                if ((temp0_1035 & 0x10) == 0)
                                    goto label_1402a5163
                                
                                goto label_1402a50b2
                            
                        label_1402a5155:
                            arg12 = _mm256_add_epi64(arg19, zmm1)
                            
                            if ((temp0_1035 & 0x10) == 0)
                            label_1402a5163:
                                
                                if ((temp0_1035 & 0x20) != 0)
                                    goto label_1402a50c1
                                
                                goto label_1402a516d
                            
                        label_1402a50b2:
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *arg12[0].q, 4)
                            
                            if ((temp0_1035 & 0x20) != 0)
                            label_1402a50c1:
                                int64_t rsi_33 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rsi_33, 5)
                                
                                if ((temp0_1035 & 0x40) == 0)
                                    goto label_1402a5177
                                
                                goto label_1402a50d6
                            
                        label_1402a516d:
                            
                            if ((temp0_1035 & 0x40) != 0)
                            label_1402a50d6:
                                zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm1[0].q, 6)
                                
                                if (temp0_1035 s< 0)
                                label_1402a50ef:
                                    zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                                    int64_t rdi_26 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdi_26, 7)
                            else
                            label_1402a5177:
                                
                                if (temp0_1035 s< 0)
                                    goto label_1402a50ef
                            
                            zmm1 = _mm256_cmpgt_epi32(_mm256_cvtepu16_epi32(arg7[0].o), arg18)
                            arg12 = zmm1 & not.32(zmm3)
                            zmm1[0].o = zx.o(0)
                            arg9 = arg12 & arg17
                            rdi = zx.q(_mm256_movemask_ps(arg9))
                            arg14[0].o = zx.o(0)
                            
                            if (rdi.d != i_8)
                                arg14 = arg12 ^ zmm3
                            
                            arg8 = _mm256_blendv_ps(arg8, arg11, arg12)
                            arg11 = _mm256_add_epi32(arg11, arg10)
                            zmm3 = _mm256_cmpgt_epi32(arg11, zmm1) & arg14
                            zmm1 = zmm3 & arg17
                    
                    arg18[0].o = var_840[0].o
                    arg10[0].o = var_960_1
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg9 = _mm256_blendv_ps(zmm1, arg8, arg17)
                    zmm1 = _mm256_add_epi32(arg9, arg9)
                    arg7 = _mm256_add_epi64(arg13, _mm256_cvtepi32_epi64(zmm1[0].o))
                    
                    if ((rdx_14 & 1) != 0)
                        arg8[0].o = __vpbroadcastw_xmmdq_memw(*arg7[0].q)
                    
                    arg16 = var_820_2
                    arg11 = var_920_2
                    zmm0 = var_800_2
                    
                    if ((rdx_14 & 2) == 0)
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((rdx_14 & 4) != 0)
                            goto label_1402a6dc5
                        
                        goto label_1402a5237
                    
                    int64_t rbx_63 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rbx_63, 1)
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    
                    if ((rdx_14 & 4) != 0)
                    label_1402a6dc5:
                        zmm3[0].o = _mm256_extracti128_si256(arg7, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm3[0].q, 2)
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rdx_14 & 8) == 0)
                            goto label_1402a5245
                        
                        goto label_1402a6de3
                    
                label_1402a5237:
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rdx_14 & 8) == 0)
                    label_1402a5245:
                        arg7 = _mm256_add_epi64(arg19, zmm1)
                        
                        if ((rdx_14 & 0x10) != 0)
                            goto label_1402a6e06
                        
                        goto label_1402a5252
                    
                label_1402a6de3:
                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                    int64_t rbx_65 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rbx_65, 3)
                    arg7 = _mm256_add_epi64(arg19, zmm1)
                    
                    if ((rdx_14 & 0x10) != 0)
                    label_1402a6e06:
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg7[0].q, 4)
                        
                        if ((rdx_14 & 0x20) == 0)
                            goto label_1402a525b
                        
                        goto label_1402a6e14
                    
                label_1402a5252:
                    
                    if ((rdx_14 & 0x20) == 0)
                    label_1402a525b:
                        
                        if ((rdx_14 & 0x40) != 0)
                            goto label_1402a6e28
                        
                        goto label_1402a5264
                    
                label_1402a6e14:
                    int64_t rbx_67 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rbx_67, 5)
                    
                    if ((rdx_14 & 0x40) == 0)
                    label_1402a5264:
                        
                        if (temp0_940.b s< 0)
                        label_1402a6e40:
                            zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                            int64_t rbx_69 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rbx_69, 7)
                    else
                    label_1402a6e28:
                        zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm1[0].q, 6)
                        
                        if (temp0_940.b s< 0)
                            goto label_1402a6e40
                    
                    zmm1 = _mm256_sub_epi32(arg9, _mm256_cmpeq_epi32(zmm1, zmm1))
                    arg7[0].o = zx.o(0)
                    arg14 = _mm256_blendv_ps(arg7, zmm1, arg17)
                    zmm1 = _mm256_cmpgt_epi32(arg14, var_a20_3) & arg17
                    rbx_1 = zx.q(_mm256_movemask_ps(zmm1))
                    
                    if (rbx_1.d != 0)
                        arg14 = _mm256_blendv_ps(arg14, var_a20_3, zmm1)
                    
                    arg17 = var_900_1
                    zmm1 = _mm256_add_epi32(arg14, arg14)
                    arg7 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    zmm3 = _mm256_add_epi64(arg13, arg7)
                    
                    if ((rdx_14 & 1) == 0)
                        arg13 = var_9e0
                        
                        if ((rdx_14 & 2) != 0)
                            goto label_1402a6e6f
                        
                        goto label_1402a52c9
                    
                    rbx_1 = zmm3[0].q
                    arg7[0].o = __vpbroadcastw_xmmdq_memw(*rbx_1)
                    arg13 = var_9e0
                    
                    if ((rdx_14 & 2) != 0)
                    label_1402a6e6f:
                        rbx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rbx_1, 1)
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        
                        if ((rdx_14 & 4) == 0)
                            goto label_1402a52d8
                        
                        goto label_1402a6e89
                    
                label_1402a52c9:
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    
                    if ((rdx_14 & 4) == 0)
                    label_1402a52d8:
                        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                        
                        if ((rdx_14 & 8) != 0)
                            goto label_1402a6edd
                        
                        goto label_1402a52e6
                    
                label_1402a6e89:
                    arg10 = zmm0
                    zmm0[0].o = arg18[0].o
                    arg18 = arg17
                    arg9[0].o = _mm256_extracti128_si256(zmm3, 1)
                    rbx_1 = arg9[0].q
                    arg18[0].o = zmm0[0].o
                    zmm0 = arg10
                    arg10[0].o = var_960_1
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rbx_1, 2)
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    
                    if ((rdx_14 & 8) != 0)
                    label_1402a6edd:
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        rbx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rbx_1, 3)
                        zmm3 = _mm256_add_epi64(arg19, zmm1)
                        
                        if ((rdx_14 & 0x10) == 0)
                            goto label_1402a52f3
                        
                        goto label_1402a6efb
                    
                label_1402a52e6:
                    zmm3 = _mm256_add_epi64(arg19, zmm1)
                    
                    if ((rdx_14 & 0x10) == 0)
                    label_1402a52f3:
                        arg19 = var_680_2
                        
                        if ((rdx_14 & 0x20) != 0)
                            goto label_1402a6f17
                        
                        goto label_1402a5305
                    
                label_1402a6efb:
                    rbx_1 = zmm3[0].q
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rbx_1, 4)
                    arg19 = var_680_2
                    
                    if ((rdx_14 & 0x20) != 0)
                    label_1402a6f17:
                        rbx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rbx_1, 5)
                        
                        if ((rdx_14 & 0x40) == 0)
                            goto label_1402a530e
                        
                        goto label_1402a6f2b
                    
                label_1402a5305:
                    
                    if ((rdx_14 & 0x40) != 0)
                    label_1402a6f2b:
                        zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm1[0].q, 6)
                        
                        if (temp0_940.b s< 0)
                        label_1402a6f43:
                            zmm1[0].o = _mm256_extracti128_si256(zmm3, 1)
                            int64_t rcx_191 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rcx_191, 7)
                    else
                    label_1402a530e:
                        
                        if (temp0_940.b s< 0)
                            goto label_1402a6f43
                    
                    zmm1 = _mm256_cvtepu16_epi32(arg8[0].o)
                
                arg7 = _mm256_cvtepu16_epi32(arg7[0].o)
                zmm3[0].o = zx.o(0)
                arg8[0].o = zx.o(0)
                
                if (arg22 != 1)
                    arg7 = _mm256_max_epi32(_mm256_sub_epi32(arg7, zmm1), zmm0)
                    zmm1 = _mm256_sub_ps(_mm256_broadcast_ss(var_500[0]), _mm256_cvtepi32_ps(zmm1))
                    arg7 = _mm256_cvtepi32_ps(arg7)
                    arg8 = _mm256_div_ps(zmm1, arg7)
                
                zmm1 = _mm256_blendv_ps(zmm3, arg8, var_640_2)
                var_a20_4 = zmm1
                arg8 = var_9c0
        
        arg12 = _mm256_broadcastd_epi32(arg10[0])
        int32_t rcx_167 = var_9e8.d
        uint64_t r8_5 = zx.q(rcx_167)
        var_960_1.32 = arg12
        
        if (rcx_167 u> 5)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            var_8e0 = _mm256_maskstore_ps(var_980_2, zmm1)
            var_8c0 = _mm256_maskstore_ps(var_980_2, zmm1)
            var_8a0 = _mm256_maskstore_ps(var_980_2, zmm1)
            zmm1 = _mm256_broadcast_ss(1f)
            var_880 = _mm256_maskstore_ps(var_980_2, zmm1)
        else
            arg7 = _mm256_mullo_epi32(arg9, arg13)
            rbx_1 = sx.q(jump_table_1402a723c[r8_5]) + &jump_table_1402a723c
            
            switch (rbx_1)
                case 0x1402a59c9
                    zmm1 = data_143442de0
                    zmm1 = _mm256_add_epi32(arg7, 
                        _mm256_inserti128_si256(_mm256_permutevar8x32_epi32(zmm1, arg8), 
                            _mm256_permutevar8x32_epi32(zmm1, var_9a0_2)[0].o, 1))
                    arg7[0].o = zx.o(0)
                    var_9e0 = arg13
                    arg13 = arg16
                    arg16 = var_980_2
                    int64_t temp0_1186
                    int32_t temp1_47
                    temp0_1186, temp1_47 = _mm256_i32gather_ps(arg7, *(arg4 + zmm1[0].q), arg16)
                    arg7 = temp0_1186
                    zmm3 = _mm256_add_epi32(zmm1, arg13)
                    arg8[0].o = zx.o(0)
                    var_9a0_2[0].o = arg18[0].o
                    arg18 = arg17
                    arg12 = arg11
                    arg11 = arg14
                    arg14 = arg9
                    int64_t temp0_1188
                    int32_t temp1_48
                    temp0_1188, temp1_48 = _mm256_i32gather_ps(arg8, *(arg4 + zmm3[0].q), arg16)
                    arg8 = temp0_1188
                    arg9 = temp1_48
                    zmm3 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, var_7e0_1)
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    int64_t temp0_1191
                    int32_t temp1_49
                    temp0_1191, temp1_49 = _mm256_i32gather_ps(arg9, *(arg4 + zmm3[0].q), arg16)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, var_7c0_1)
                    int64_t temp0_1194
                    int32_t temp1_50
                    temp0_1194, temp1_50 = _mm256_i32gather_ps(zmm3, *(arg4 + zmm1[0].q), arg16)
                    zmm3 = temp0_1194
                    arg10 = temp1_50
                    var_8e0 = _mm256_maskstore_ps(arg16, arg7)
                    var_8c0 = _mm256_maskstore_ps(arg16, arg8)
                    var_8a0 = _mm256_maskstore_ps(arg16, temp0_1191)
                    arg9 = arg14
                    arg14 = arg11
                    arg11 = arg12
                    arg18[0].o = var_9a0_2[0].o
                    var_880 = _mm256_maskstore_ps(arg16, zmm3)
                    arg16 = arg13
                    arg13 = var_9e0
                case 0x1402a5ae7
                    zmm1 = data_143442de0
                    zmm1 = _mm256_add_epi32(arg7, 
                        _mm256_inserti128_si256(_mm256_permutevar8x32_epi32(zmm1, arg8), 
                            __vpermd_ymmqq_ymmqq_memqq(zmm1, var_9a0_2)[0].o, 1))
                    arg7[0].o = zx.o(0)
                    int64_t temp0_1208
                    int32_t temp1_51
                    temp0_1208, temp1_51 = _mm256_i32gather_ps(arg7, *(arg4 + zmm1[0].q), var_980_2)
                    arg7 = temp0_1208
                    zmm3 = _mm256_add_epi32(zmm1, arg16)
                    arg8[0].o = zx.o(0)
                    arg10 = arg9
                    int64_t temp0_1210
                    int32_t temp1_52
                    temp0_1210, temp1_52 = _mm256_i32gather_ps(arg8, *(arg4 + zmm3[0].q), var_980_2)
                    arg8 = temp0_1210
                    zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, var_7e0_1)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    int64_t temp0_1213
                    int32_t temp1_53
                    temp0_1213, temp1_53 = _mm256_i32gather_ps(zmm3, *(arg4 + zmm1[0].q), var_980_2)
                    zmm3 = temp0_1213
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg9 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg7, arg7), 
                            arg8, arg8), 
                        zmm3, zmm3)
                    zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm1, arg9, 1), _mm256_sqrt_ps(arg9))
                    arg9 = arg10
                    var_8e0 = _mm256_maskstore_ps(var_980_2, arg7)
                    var_8c0 = _mm256_maskstore_ps(var_980_2, arg8)
                    var_8a0 = _mm256_maskstore_ps(var_980_2, zmm3)
                    var_880 = _mm256_maskstore_ps(var_980_2, zmm1)
                case 0x1402a5b9d
                    zmm1 = data_143442de0
                    arg7 = _mm256_add_epi32(arg7, 
                        _mm256_inserti128_si256(_mm256_permutevar8x32_epi32(zmm1, arg8), 
                            __vpermd_ymmqq_ymmqq_memqq(zmm1, var_9a0_2)[0].o, 1))
                    zmm3 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg18[0].o), 0x1f), 0x1f)
                    zmm1 = zmm3 & arg7
                    int64_t r10_8 = sx.q(zmm1[0])
                    int64_t r11_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int32_t temp0_1233 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                    int64_t r14_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    int64_t rcx_169 = sx.q(zmm1[0])
                    int64_t rdx_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int32_t temp0_1237 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                    int64_t rsi_65 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = zx.o(*(arg4 + r10_8))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r11_1), 1)
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + sx.q(temp0_1233)), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r14_7), 3)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rcx_169), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdx_18), 5)
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + sx.q(temp0_1237)), 6)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rsi_65), 7)
                    zmm1 = zmm3 & _mm256_add_epi32(arg7, arg11)
                    int64_t r10_9 = sx.q(zmm1[0])
                    int64_t r11_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int64_t r14_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    arg6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    int64_t rsi_67 = sx.q(zmm1[0])
                    int64_t rcx_172 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int64_t rdx_21 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int32_t temp0_1253 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                    zmm1[0].o = zx.o(*(arg4 + r10_9))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r11_2), 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r14_8), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + arg6), 3)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rsi_67), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rcx_172), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdx_21), 6)
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + sx.q(temp0_1253)), 7)
                    arg7 = zmm3 & _mm256_add_epi32(arg7, arg16)
                    float rcx_174 = arg7[0]
                    int64_t r10_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                    int64_t r11_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                    rdi = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                    float rsi_68 = arg7[0]
                    int64_t rdx_24 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                    arg5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                    rbx_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                    arg7[0].o = zx.o(*(arg4 + sx.q(rcx_174)))
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r10_10), 1)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r11_3), 2)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rdi), 3)
                    arg7[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + sx.q(rsi_68)), 4)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rdx_24), 5)
                    zmm3 = _mm256_cvtepu16_epi32(arg8[0].o)
                    arg8 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    zmm3 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm3, arg8))
                    arg10 = arg9
                    arg9 = _mm256_broadcast_ss(32767f)
                    zmm3 = _mm256_div_ps(zmm3, arg9)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + arg5), 6)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                            arg8)), 
                        arg9)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rbx_1), 7)
                    arg7 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg7[0].o), 
                            arg8)), 
                        arg9)
                    arg8 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm3, zmm3), 
                            zmm1, zmm1), 
                        arg7, arg7)
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    arg8 = _mm256_and_ps(_mm256_cmp_ps(arg9, arg8, 1), _mm256_sqrt_ps(arg8))
                    arg9 = arg10
                    var_8e0 = _mm256_maskstore_ps(var_980_2, zmm3)
                    var_8c0 = _mm256_maskstore_ps(var_980_2, zmm1)
                    var_8a0 = _mm256_maskstore_ps(var_980_2, arg7)
                    var_880 = _mm256_maskstore_ps(var_980_2, arg8)
                case 0x1402a5e1a
                    arg10[0].o = zx.o(0)
                    int64_t temp0_1302
                    int32_t temp1_54
                    temp0_1302, temp1_54 = _mm256_i32gather_ps(arg10, *(arg4 + arg17[0]), var_980_2)
                    zmm1 = _mm256_add_epi32(arg17, arg16)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    int64_t temp0_1305
                    int32_t temp1_55
                    temp0_1305, temp1_55 = _mm256_i32gather_ps(zmm3, *(arg4 + zmm1[0].q), var_980_2)
                    arg8 = temp1_55
                    zmm1 = __vpaddd_ymmqq_ymmqq_memqq(arg17, var_7e0_1)
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    var_9e0 = arg9
                    int64_t temp0_1308
                    int32_t temp1_56
                    temp0_1308, temp1_56 = _mm256_i32gather_ps(arg8, *(arg4 + zmm1[0].q), var_980_2)
                    arg8 = temp0_1308
                    arg9 = temp1_56
                    zmm1 = __vpaddd_ymmqq_ymmqq_memqq(arg17, var_7c0_1)
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    float var_920_3[0x8] = arg11
                    int64_t temp0_1311
                    int32_t temp1_57
                    temp0_1311, temp1_57 = _mm256_i32gather_ps(arg9, *(arg4 + zmm1[0].q), var_980_2)
                    zmm1 = __vpbroadcastd_ymmqq_memd(0x10)
                    arg11 = _mm256_add_epi32(arg17, zmm1)
                    zmm1[0].o = zx.o(0)
                    arg14[0].o = arg18[0].o
                    arg18 = arg16
                    int64_t temp0_1314
                    int32_t temp1_58
                    temp0_1314, temp1_58 =
                        _mm256_i32gather_ps(zmm1, *(arg4 + arg11[0].q), var_980_2)
                    zmm1 = temp0_1314
                    arg16 = temp1_58
                    arg11 = _mm256_add_epi32(arg17, __vpbroadcastd_ymmqq_memd(0x14))
                    arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                    int64_t temp0_1318
                    int32_t temp1_59
                    temp0_1318, temp1_59 =
                        _mm256_i32gather_ps(arg16, *(arg4 + arg11[0].q), var_980_2)
                    arg11 = __vpaddd_ymmqq_ymmqq_memqq(arg12, var_900_1)
                    arg7 = _mm256_add_epi32(arg11, arg7)
                    arg11[0].o = zx.o(0)
                    int64_t temp0_1321
                    int32_t temp1_60
                    temp0_1321, temp1_60 =
                        _mm256_i32gather_epi32(arg11, *(arg4 + arg7[0].q), var_980_2)
                    arg11 = temp0_1321
                    arg7 = _mm256_srli_epi32(arg11, 0x15)
                    arg17 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg7 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, arg17))
                    arg12 = arg19
                    arg19 = _mm256_broadcast_ss(1023f)
                    arg7 = _mm256_fmadd_ps(_mm256_div_ps(arg7, arg19), temp0_1311, temp0_1302)
                    arg9 = _mm256_add_epi32(
                        _mm256_srli_epi32(arg11, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff), arg17)
                    arg17 = var_900_1
                    arg9 = _mm256_div_ps(_mm256_cvtepi32_ps(arg9), arg19)
                    arg19 = arg12
                    arg10 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(
                            arg11 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                            __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                        _mm256_broadcast_ss(511f))
                    arg11 = var_920_3
                    arg9 = _mm256_fmadd_ps(arg9, zmm1, temp0_1305)
                    arg10 = _mm256_fmadd_ps(arg10, temp0_1318, arg8)
                    arg16 = arg18
                    arg18[0].o = arg14[0].o
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    zmm3 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg7, arg7), 
                            arg9, arg9), 
                        arg10, arg10)
                    zmm1 = _mm256_cmp_ps(zmm1, zmm3, 1)
                    zmm3 = _mm256_sqrt_ps(zmm3)
                    zmm1 = _mm256_and_ps(zmm1, zmm3)
                    var_8e0 = _mm256_maskstore_ps(var_980_2, arg7)
                    var_8c0 = _mm256_maskstore_ps(var_980_2, arg9)
                    arg9 = var_9e0
                    var_8a0 = _mm256_maskstore_ps(var_980_2, arg10)
                    var_880 = _mm256_maskstore_ps(var_980_2, zmm1)
                case 0x1402a5fe6
                    zmm1 = _mm256_add_epi32(_mm256_add_epi32(arg17, arg12), arg7)
                    arg7[0].o = zx.o(0)
                    int64_t temp0_1355
                    int32_t temp1_61
                    temp0_1355, temp1_61 =
                        _mm256_i32gather_epi32(arg7, *(arg4 + zmm1[0].q), var_980_2)
                    arg7 = temp0_1355
                    zmm1[0].o = zx.o(0)
                    zmm3 = _mm256_srli_epi32(arg7, 0x15)
                    arg8 = _mm256_srli_epi32(arg7, 0xa)
                    arg16[0].o = arg18[0].o
                    arg18 = arg17
                    arg12 = arg11
                    arg11 = arg14
                    arg14 = arg9
                    arg8 &= __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg7 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                    arg9 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm3 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm3, arg9))
                    arg10 = _mm256_broadcast_ss(1023f)
                    zmm3 = _mm256_div_ps(zmm3, arg10)
                    arg8 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(arg8, arg9)), arg10)
                    arg7 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, 
                            __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                        _mm256_broadcast_ss(511f))
                    arg9 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm3, zmm3), 
                            arg8, arg8), 
                        arg7, arg7)
                    zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm1, arg9, 1), _mm256_sqrt_ps(arg9))
                    arg9 = arg14
                    arg14 = arg11
                    arg11 = arg12
                    arg18[0].o = arg16[0].o
                    var_8e0 = _mm256_maskstore_ps(var_980_2, zmm3)
                    var_8c0 = _mm256_maskstore_ps(var_980_2, arg8)
                    var_8a0 = _mm256_maskstore_ps(var_980_2, arg7)
                    var_880 = _mm256_maskstore_ps(var_980_2, zmm1)
                case 0x1402a6101
                    zmm1 = _mm256_add_epi32(_mm256_add_epi32(arg17, arg12), arg7)
                    arg8[0].o = zx.o(0)
                    int64_t temp0_1386
                    int32_t temp1_62
                    temp0_1386, temp1_62 =
                        _mm256_i32gather_epi32(arg8, *(arg4 + zmm1[0].q), var_980_2)
                    arg8 = temp0_1386
                    zmm1 = _mm256_srli_epi32(arg8, 0x15)
                    zmm3 = _mm256_srli_epi32(arg8, 0xa)
                    var_9e0 = arg9
                    arg9 = _mm256_srli_epi32(arg8, 5)
                    arg10 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                    arg7 = arg11
                    arg11 = __vpbroadcastd_ymmqq_memd(0x400)
                    arg12 = arg16
                    arg16 = __vpbroadcastd_ymmqq_memd(0x380)
                    arg17 = __vpbroadcastd_ymmqq_memd(0x3d80)
                    zmm1 = (arg9 & arg10) | (zmm1 & arg11) | _mm256_add_epi32(zmm1 & arg16, arg17)
                    arg9 = (_mm256_slli_epi32(arg8, 6) & arg10) | (zmm3 & arg11)
                    zmm3 &= arg16
                    arg16 = arg12
                    zmm3 = _mm256_add_epi32(zmm3, arg17)
                    arg17 = var_900_1
                    zmm3 |= arg9
                    arg9 = arg8 & __vpbroadcastd_ymmqq_memd(0x1c0)
                    arg11 = arg7
                    arg8 = (_mm256_slli_epi32(arg8, 0x11) & __vpbroadcastd_ymmqq_memd(0x7e0000))
                        | (arg8 & __vpbroadcastd_ymmqq_memd(0x200))
                    arg10 = __vpbroadcastd_ymmqq_memd(0x1ec0)
                    arg8 |= _mm256_add_epi32(arg9, arg10)
                    arg9 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm1, zmm1), 
                            zmm3, zmm3), 
                        arg8, arg8)
                    arg7[0].o = zx.o(0)
                    arg7 = _mm256_and_ps(_mm256_cmp_ps(arg7, arg9, 1), _mm256_sqrt_ps(arg9))
                    arg9 = var_9e0
                    var_8e0 = _mm256_maskstore_ps(var_980_2, zmm1)
                    var_8c0 = _mm256_maskstore_ps(var_980_2, zmm3)
                    var_8a0 = _mm256_maskstore_ps(var_980_2, arg8)
                    var_880 = _mm256_maskstore_ps(var_980_2, arg7)
        
        zmm0 = _mm256_cmpeq_epi32(arg9, arg14)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        zmm0 ^= zmm1
        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = zmm0[0].o & arg18[0].o
        zmm0[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
        zmm0[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
            zmm0 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f)
            arg10 = _mm256_srai_epi32(zmm0, 0x1f)
            int32_t var_7a0_1[0x8]
            uint32_t var_780_1[0x8]
            float var_760_1[0x8]
            uint32_t var_740_1[0x8]
            
            if (var_9e8.d u<= 5)
                arg7 = _mm256_mullo_epi32(arg14, arg13)
                void* rdx_26 = sx.q(jump_table_1402a7254[r8_5]) + &jump_table_1402a7254
                
                switch (rdx_26)
                    case 0x1402a62be
                        zmm0 = data_143442de0
                        zmm1 = __vpermd_ymmqq_ymmqq_memqq(zmm0, var_9c0)
                        zmm0 = _mm256_add_epi32(arg7, 
                            _mm256_inserti128_si256(zmm1, 
                                __vpermd_ymmqq_ymmqq_memqq(zmm0, var_9a0_2)[0].o, 1))
                        zmm1[0].o = zx.o(0)
                        int64_t temp0_1430
                        int32_t temp1_63
                        temp0_1430, temp1_63 = _mm256_i32gather_ps(zmm1, *(arg4 + zmm0[0].q), arg10)
                        arg7 = _mm256_add_epi32(zmm0, arg16)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        int64_t temp0_1433
                        int32_t temp1_64
                        temp0_1433, temp1_64 = _mm256_i32gather_ps(zmm3, *(arg4 + arg7[0].q), arg10)
                        arg8 = temp1_64
                        arg7 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_7e0_1)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int64_t temp0_1436
                        int32_t temp1_65
                        temp0_1436, temp1_65 = _mm256_i32gather_ps(arg8, *(arg4 + arg7[0].q), arg10)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t temp0_1439
                        int32_t temp1_66
                        temp0_1439, temp1_66 = _mm256_i32gather_ps(arg7, 
                            *(arg4 + __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_7c0_1)[0].q), arg10)
                        var_7a0_1 = _mm256_maskstore_ps(arg10, temp0_1430)
                        var_780_1 = _mm256_maskstore_ps(arg10, temp0_1433)
                        var_760_1 = _mm256_maskstore_ps(arg10, temp0_1436)
                        var_740_1 = _mm256_maskstore_ps(arg10, temp0_1439)
                        goto label_1402a69a5
                    case 0x1402a6383
                        zmm0 = data_143442de0
                        zmm1 = __vpermd_ymmqq_ymmqq_memqq(zmm0, var_9c0)
                        zmm0 = _mm256_add_epi32(arg7, 
                            _mm256_inserti128_si256(zmm1, 
                                __vpermd_ymmqq_ymmqq_memqq(zmm0, var_9a0_2)[0].o, 1))
                        zmm1[0].o = zx.o(0)
                        int64_t temp0_1451
                        int32_t temp1_67
                        temp0_1451, temp1_67 = _mm256_i32gather_ps(zmm1, *(arg4 + zmm0[0].q), arg10)
                        zmm1 = temp0_1451
                        arg7 = _mm256_add_epi32(zmm0, arg16)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        int64_t temp0_1454
                        int32_t temp1_68
                        temp0_1454, temp1_68 = _mm256_i32gather_ps(zmm3, *(arg4 + arg7[0].q), arg10)
                        zmm3 = temp0_1454
                        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_7e0_1)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t temp0_1457
                        int32_t temp1_69
                        temp0_1457, temp1_69 = _mm256_i32gather_ps(arg7, *(arg4 + zmm0[0].q), arg10)
                        arg7 = temp0_1457
                        zmm0[0].o = zx.o(0)
                    case 0x1402a63e7
                        zmm0 = data_143442de0
                        zmm1 = __vpermd_ymmqq_ymmqq_memqq(zmm0, var_9c0)
                        zmm3 = _mm256_add_epi32(arg7, 
                            _mm256_inserti128_si256(zmm1, 
                                __vpermd_ymmqq_ymmqq_memqq(zmm0, var_9a0_2)[0].o, 1))
                        zmm0 = arg10 & zmm3
                        int64_t r8_6 = sx.q(zmm0[0])
                        int64_t r10_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_1463 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t r11_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rsi_71 = sx.q(zmm0[0])
                        int64_t rcx_180 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_1467 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t rdi_41 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(arg4 + r8_6))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_11), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                            *(arg4 + sx.q(temp0_1463)), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_4), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_71), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_180), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                            *(arg4 + sx.q(temp0_1467)), 6)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_41), 7)
                        zmm0 = arg10 & _mm256_add_epi32(zmm3, arg11)
                        int64_t r8_7 = sx.q(zmm0[0])
                        int64_t r10_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r11_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t r14_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rsi_73 = sx.q(zmm0[0])
                        int64_t rcx_183 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t rdx_32 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int32_t temp0_1483 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o = zx.o(*(arg4 + r8_7))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_12), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_5), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_10), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_73), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_183), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_32), 6)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                            *(arg4 + sx.q(temp0_1483)), 7)
                        zmm0 = arg10 & _mm256_add_epi32(zmm3, arg16)
                        float rcx_185 = zmm0[0]
                        int64_t r8_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r10_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t rdi_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        float rsi_74 = zmm0[0]
                        int64_t rdx_35 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r11_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t rbx_61 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_185)))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_8), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_13), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_45), 3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rsi_74)), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_35), 5)
                        arg7 = _mm256_cvtepu16_epi32(arg7[0].o)
                        zmm3 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        arg7 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, zmm3))
                        arg8 = _mm256_broadcast_ss(32767f)
                        arg7 = _mm256_div_ps(arg7, arg8)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_6), 6)
                        zmm1 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                zmm3)), 
                            arg8)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_61), 7)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                zmm3)), 
                            arg8)
                        zmm3 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg7, arg7), 
                                zmm1, zmm1), 
                            zmm0, zmm0)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        zmm3 = _mm256_and_ps(_mm256_cmp_ps(arg8, zmm3, 1), _mm256_sqrt_ps(zmm3))
                        var_7a0_1 = _mm256_maskstore_ps(arg10, arg7)
                        var_780_1 = _mm256_maskstore_ps(arg10, zmm1)
                        var_760_1 = _mm256_maskstore_ps(arg10, zmm0)
                        var_740_1 = _mm256_maskstore_ps(arg10, zmm3)
                        goto label_1402a69a5
                    case 0x1402a6646
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        int64_t temp0_1533
                        int32_t temp1_70
                        temp0_1533, temp1_70 = _mm256_i32gather_ps(zmm3, *(arg4 + arg17[0]), arg10)
                        zmm0 = _mm256_add_epi32(arg17, arg16)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int64_t temp0_1536
                        int32_t temp1_71
                        temp0_1536, temp1_71 = _mm256_i32gather_ps(arg8, *(arg4 + zmm0[0].q), arg10)
                        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(arg17, var_7e0_1)
                        arg11[0].o = zx.o(0)
                        int64_t temp0_1538
                        int32_t temp1_72
                        temp0_1538, temp1_72 =
                            _mm256_i32gather_ps(arg11, *(arg4 + zmm0[0].q), arg10)
                        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(arg17, var_7c0_1)
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                        int64_t temp0_1541
                        int32_t temp1_73
                        temp0_1541, temp1_73 =
                            _mm256_i32gather_ps(arg14, *(arg4 + zmm0[0].q), arg10)
                        zmm1 = temp1_73
                        zmm0 = _mm256_add_epi32(arg17, __vpbroadcastd_ymmqq_memd(0x10))
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        int64_t temp0_1545
                        int32_t temp1_74
                        temp0_1545, temp1_74 = _mm256_i32gather_ps(zmm1, *(arg4 + zmm0[0].q), arg10)
                        arg9 = temp1_74
                        zmm0 = _mm256_add_epi32(arg17, __vpbroadcastd_ymmqq_memd(0x14))
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        int64_t temp0_1549
                        int32_t temp1_75
                        temp0_1549, temp1_75 = _mm256_i32gather_ps(arg9, *(arg4 + zmm0[0].q), arg10)
                        zmm0 =
                            _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg17, var_960_1.32), arg7)
                        arg7[0].o = zx.o(0)
                        int64_t temp0_1552
                        int32_t temp1_76
                        temp0_1552, temp1_76 =
                            _mm256_i32gather_epi32(arg7, *(arg4 + zmm0[0].q), arg10)
                        arg7 = temp0_1552
                        zmm0[0].o = zx.o(0)
                        arg12 = _mm256_srli_epi32(arg7, 0x15)
                        arg16 = _mm256_srli_epi32(arg7, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg17 = __vpbroadcastd_ymmqq_memd(0x3ff)
                        arg18 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg12 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg12, arg18))
                        arg16 = _mm256_add_epi32(arg16, arg18)
                        arg18 = _mm256_broadcast_ss(1023f)
                        arg12 = _mm256_div_ps(arg12, arg18)
                        arg16 = _mm256_div_ps(_mm256_cvtepi32_ps(arg16), arg18)
                        arg7 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(arg7 & arg17, 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg12 = _mm256_fmadd_ps(arg12, temp0_1541, temp0_1533)
                        arg16 = _mm256_fmadd_ps(arg16, temp0_1545, temp0_1536)
                        arg7 = _mm256_fmadd_ps(arg7, temp0_1549, temp0_1538)
                        zmm1 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg12, arg12), arg16, 
                                arg16), 
                            arg7, arg7)
                        zmm0 = _mm256_and_ps(_mm256_cmp_ps(zmm0, zmm1, 1), _mm256_sqrt_ps(zmm1))
                        var_7a0_1 = _mm256_maskstore_ps(arg10, arg12)
                        var_780_1 = _mm256_maskstore_ps(arg10, arg16)
                        var_760_1 = _mm256_maskstore_ps(arg10, arg7)
                        goto label_1402a687c
                    case 0x1402a67ae
                        zmm0 =
                            _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg17, var_960_1.32), arg7)
                        arg7[0].o = zx.o(0)
                        int64_t temp0_1584
                        int32_t temp1_77
                        temp0_1584, temp1_77 =
                            _mm256_i32gather_epi32(arg7, *(arg4 + zmm0[0].q), arg10)
                        arg7 = temp0_1584
                        zmm0[0].o = zx.o(0)
                        zmm1 = _mm256_srli_epi32(arg7, 0x15)
                        zmm3 = _mm256_srli_epi32(arg7, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg7 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                        arg8 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg8))
                        arg9 = _mm256_broadcast_ss(1023f)
                        zmm1 = _mm256_div_ps(zmm1, arg9)
                        zmm3 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm3, arg8)), arg9)
                        arg7 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                    case 0x1402a688b
                        zmm0 =
                            _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg17, var_960_1.32), arg7)
                        arg7[0].o = zx.o(0)
                        zmm3[0].o = zx.o(0)
                        int64_t temp0_1615
                        int32_t temp1_78
                        temp0_1615, temp1_78 =
                            _mm256_i32gather_epi32(zmm3, *(arg4 + zmm0[0].q), arg10)
                        zmm3 = temp0_1615
                        zmm0 = _mm256_srli_epi32(zmm3, 0x15)
                        zmm1 = _mm256_srli_epi32(zmm3, 0xa)
                        arg8 = _mm256_srli_epi32(zmm3, 5)
                        arg9 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                        arg11 = __vpbroadcastd_ymmqq_memd(0x400)
                        arg12 = __vpbroadcastd_ymmqq_memd(0x380)
                        arg14 = __vpbroadcastd_ymmqq_memd(0x3d80)
                        zmm0 =
                            (arg8 & arg9) | (zmm0 & arg11) | _mm256_add_epi32(zmm0 & arg12, arg14)
                        zmm1 = (_mm256_slli_epi32(zmm3, 6) & arg9) | (zmm1 & arg11)
                            | _mm256_add_epi32(zmm1 & arg12, arg14)
                        arg8 = zmm3 & __vpbroadcastd_ymmqq_memd(0x1c0)
                        zmm3 = (_mm256_slli_epi32(zmm3, 0x11) & __vpbroadcastd_ymmqq_memd(0x7e0000))
                            | (zmm3 & __vpbroadcastd_ymmqq_memd(0x200))
                            | _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x1ec0))
                        arg8 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm0, zmm0), 
                                zmm1, zmm1), 
                            zmm3, zmm3)
                        arg7 = _mm256_and_ps(_mm256_cmp_ps(arg7, arg8, 1), _mm256_sqrt_ps(arg8))
                        var_7a0_1 = _mm256_maskstore_ps(arg10, zmm0)
                        var_780_1 = _mm256_maskstore_ps(arg10, zmm1)
                        var_760_1 = _mm256_maskstore_ps(arg10, zmm3)
                        var_740_1 = _mm256_maskstore_ps(arg10, arg7)
                        goto label_1402a69a5
                    case 0x1406a9163
                        if (rdi.d == 0)
                            rdx_26 = zx.q(rbx_1.d)
                        
                        var_9c0[4].q = var_9e0[0].q
                        int32_t rax_2 = var_9e0[3]
                        var_9e0[0].q = rbx_1
                        var_9c0[6] = 0x402a7254
                        var_9c0[7] = rax_2
                        var_9e0[2].q = 0
                        
                        if (rdx_26.d + arg6.d + 0x402a7254 s> rax_2)
                            sub_1405947f0(&var_9c0[4], rdx_26.d + arg6.d + 0x402a7254)
                        
                        sub_140a20ba0(&var_9c0[4], *(arg5 + 0x2c8), arg6.d)
                        var_9c0[0].q = var_9c0[4].q
                        var_9c0[2] = var_9c0[6]
                        int64_t rcx_196 = var_9e0[0].q
                        var_8e0[0]
                        
                        if (rcx_196 != 0)
                            sub_140a74f90(rcx_196)
                        
                        int64_t* rsi_76 = var_980_2[4].q
                        
                        if (rsi_76 != 0)
                            rsi_76[1].d += rdi.d
                            
                            if (rsi_76[1].d == 1)
                                (**rsi_76)(rsi_76)
                                int32_t rax_9 = *(rsi_76 + 0xc)
                                *(rsi_76 + 0xc) += rdi.d
                                
                                if (rax_9 == 1)
                                    (*(*rsi_76 + 8))(rsi_76, 1)
                        
                        sub_140a464c0()
                        int16_t* const rdx_42 = &data_142d40450
                        
                        if (var_9c0[2] != 0)
                            rdx_42 = var_9c0[0].q
                        
                        char const (* r8_10)[0x4] = data_14399ea08
                        char rax_11 = (*(r8_10 + 0x48))(&data_14399ea08, rdx_42, r8_10)
                        var_8c0[6]
                        uint32_t rax_13
                        int64_t rcx_210
                        
                        if (rax_11 == 0)
                            var_9e8 = rbx_1
                            var_9e0[0].q = 0
                            sub_140a9fca0(&var_9c0[6], &var_9e8)
                            rax_13 = sub_140f8d4f0(*(arg5 + 0x288), &var_9c0[6])
                            int64_t* rbx_90 = var_9a0_2[0].q
                            
                            if (rbx_90 != 0)
                                rax_13 = rbx_90[1].d
                                rbx_90[1].d += rdi.d
                                
                                if (rax_13 == 1)
                                    rax_13 = (**rbx_90)(rbx_90)
                                    int32_t rdi_59 = *(rbx_90 + 0xc)
                                    *(rbx_90 + 0xc) += rdi.d
                                    
                                    if (rdi_59 == 1)
                                        rax_13 = (*(*rbx_90 + 8))(rbx_90, zx.q(rdi_59))
                            
                            rcx_210 = var_9e8
                        else
                            var_9e0[4].q = rbx_1
                            var_9e0[6].q = 0
                            sub_1405947f0(&var_9e0[4], 0x2d)
                            int32_t rax_12 = var_9e0[6] + 0x2d
                            var_9e0[6] = rax_12
                            
                            if (rax_12 s> var_9e0[7])
                                sub_140594770(&var_9e0[4])
                            
                            sub_1405a7220(var_9e0[4].q, 0x2d, 
                                "File already exists and will be overwritten!", 0x2d, 0x3f)
                            sub_140a9fca0(&var_9c0, &var_9e0[4])
                            rax_13 = sub_140f8d4f0(*(arg5 + 0x288), &var_9c0)
                            int64_t* rbx_89 = var_9c0[2].q
                            
                            if (rbx_89 != 0)
                                rax_13 = rbx_89[1].d
                                rbx_89[1].d += rdi.d
                                
                                if (rax_13 == 1)
                                    rax_13 = (**rbx_89)(rbx_89)
                                    int32_t rdi_58 = *(rbx_89 + 0xc)
                                    *(rbx_89 + 0xc) += rdi.d
                                    
                                    if (rdi_58 == 1)
                                        rax_13 = (*(*rbx_89 + 8))(rbx_89, zx.q(rdi_58))
                            
                            rcx_210 = var_9e0[4].q
                        
                        if (rcx_210 != 0)
                            rax_13 = sub_140a74f90(rcx_210)
                        
                        int64_t rcx_211 = var_9c0[0].q
                        var_8e0[2]
                        var_8a0[0]
                        var_8c0[4]
                        
                        if (rcx_211 != 0)
                            rax_13 = sub_140a74f90(rcx_211)
                        
                        var_8c0[0]
                        return rax_13
                
                arg8 = _mm256_fnmadd_ps(
                    _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm1, zmm1), zmm3, 
                        zmm3), 
                    arg7, arg7)
                zmm0 = _mm256_and_ps(_mm256_cmp_ps(zmm0, arg8, 1), _mm256_sqrt_ps(arg8))
                var_7a0_1 = _mm256_maskstore_ps(arg10, zmm1)
                var_780_1 = _mm256_maskstore_ps(arg10, zmm3)
                var_760_1 = _mm256_maskstore_ps(arg10, arg7)
                goto label_1402a687c
            
            zmm0[0].o = zx.o(0)
            var_7a0_1 = _mm256_maskstore_ps(arg10, zmm0)
            var_780_1 = _mm256_maskstore_ps(arg10, zmm0)
            var_760_1 = _mm256_maskstore_ps(arg10, zmm0)
            zmm0 = _mm256_broadcast_ss(1f)
        label_1402a687c:
            var_740_1 = _mm256_maskstore_ps(arg10, zmm0)
        label_1402a69a5:
            arg13 = var_a20_4
            arg12 = var_740_1
            arg14 = _mm256_fmadd_ps(
                _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_mul_ps(var_8c0, var_780_1), var_8e0, var_7a0_1), 
                    var_8a0, var_760_1), 
                var_880, arg12)
            arg16[0].o = zx.o(0)
            arg14 = _mm256_cmp_ps(arg16, arg14, 2)
            arg16 = _mm256_broadcast_ss(1f)
            arg17 = _mm256_broadcast_ss(-1f)
            arg14 = _mm256_blendv_ps(arg17, arg16, arg14)
            arg16 = _mm256_sub_ps(arg16, arg13)
            arg14 = _mm256_mul_ps(arg16, arg14)
            zmm0 = _mm256_mul_ps(arg14, var_8e0)
            zmm1 = _mm256_mul_ps(arg14, var_8c0)
            arg7 = _mm256_mul_ps(arg14, var_8a0)
            zmm3 = _mm256_mul_ps(arg14, var_880)
            zmm0 = _mm256_fmadd_ps(zmm0, arg13, var_7a0_1)
            zmm1 = _mm256_fmadd_ps(zmm1, arg13, var_780_1)
            arg7 = _mm256_fmadd_ps(arg7, arg13, var_760_1)
            zmm3 = _mm256_fmadd_ps(zmm3, arg13, arg12)
            float var_280_1[0x8] = zmm0
            float var_260_1[0x8] = zmm1
            float var_240_1[0x8] = arg7
            uint32_t var_220_1[0x8] = zmm3
            arg7 = _mm256_mul_ps(arg7, arg7)
            zmm3 = _mm256_mul_ps(zmm3, zmm3)
            zmm0 =
                _mm256_add_ps(_mm256_fmadd_ps(arg7, zmm0, zmm0), _mm256_fmadd_ps(zmm3, zmm1, zmm1))
            zmm1 = _mm256_broadcast_ss(0.5f)
            arg7 = _mm256_mul_ps(zmm0, zmm1)
            float var_180_1[0x8] = arg7
            float var_160_1[0x8] = arg7
            float var_140_1[0x8] = arg7
            float var_120_1[0x8] = arg7
            zmm3 = _mm256_broadcast_ss(9.99999994e-09f)
            arg8 = _mm256_rsqrt_ps(zmm0)
            arg9 = _mm256_cmp_ps(zmm3, zmm0, 6)
            arg11 =
                _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(arg8, arg8), arg7, zmm1), arg8, arg8)
            arg8 = _mm256_fnmadd_ps(_mm256_mul_ps(arg11, arg11), arg7, zmm1)
            zmm1 = _mm256_fmadd_ps(arg11, arg8, arg11)
            arg8 = _mm256_fmadd_ps(arg8, arg11, arg11)
            arg7 = __vmulps_ymmqq_ymmqq_memqq(arg8, var_280_1)
            arg11 = __vmulps_ymmqq_ymmqq_memqq(zmm1, var_260_1)
            zmm1 = __vmulps_ymmqq_ymmqq_memqq(zmm1, var_240_1)
            arg8 = __vmulps_ymmqq_ymmqq_memqq(arg8, var_220_1)
            zmm0 = _mm256_cmp_ps(zmm3, zmm0, 2)
            arg7 = _mm256_and_ps(arg7, zmm0)
            zmm3 = _mm256_and_ps(arg11, zmm0)
            zmm1 = _mm256_and_ps(zmm1, zmm0)
            arg11 = _mm256_broadcast_ss(1f)
            arg9 = _mm256_and_ps(arg9, arg11)
            zmm0 = _mm256_or_ps(_mm256_and_ps(arg8, zmm0), arg9)
            var_8e0 = _mm256_maskstore_ps(arg10, arg7)
            var_8c0 = _mm256_maskstore_ps(arg10, zmm3)
            var_8a0 = _mm256_maskstore_ps(arg10, zmm1)
            var_880 = _mm256_maskstore_ps(arg10, zmm0)
    
    zmm1[0].o = var_8e0[0].o
    arg12[0].o = var_8e0[4].o
    zmm3[0].o = var_8c0[0].o
    arg8[0].o = var_8c0[4].o
    arg9[0].o = var_8a0[0].o
    arg10[0].o = var_8a0[4].o
    arg11[0].o = var_880[0].o
    zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
    arg9[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
    arg11[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    arg7[0].o = arg11[0].q | zmm0[0].q << 0x40
    int128_t var_3a0 = arg7[0].o
    arg7[0].o = var_880[4].o
    zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
    int128_t var_390_1 = zmm0[0].o
    zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm1[0].o = zmm0[0].q | arg9[0].q << 0x40
    int128_t var_380_1 = zmm1[0].o
    zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
    int128_t var_370_1 = zmm0[0].o
    zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg7[0].o)
    zmm1[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg8[0].o)
    zmm3[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    int128_t var_360_1 = zmm3[0].o
    arg7[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg7[0].o)
    zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    int128_t var_350_1 = zmm0[0].o
    zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg12[0].o, arg8[0].o)
    zmm1[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
    int128_t var_340_1 = zmm1[0].o
    zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
    int128_t var_330_1 = zmm0[0].o
    uint64_t i_9 = zx.q(_mm256_movemask_ps(arg19))
    
    do
        uint64_t rcx_189 = _tzcnt_u64(i_9)
        int32_t var_2a0[0x8] = arg15
        zmm0[0].o = (&var_3a0)[rcx_189]
        arg1[sx.q(var_2a0[zx.q(rcx_189.d) & 7]) * 3] = zmm0[0].o
        i_9 &= rol.q(-2, rcx_189.b)
    while (i_9 != 0)

arg10[0].o = var_e8
arg11[0].o = var_d8
arg12[0].o = var_c8
arg13[0].o = var_b8
arg14[0].o = var_a8
arg15[0].o = var_98
arg16[0].o = var_88
arg17[0].o = var_78
arg18[0].o = var_68
arg19[0].o = var_58
_mm256_zeroupper()
return arg1
