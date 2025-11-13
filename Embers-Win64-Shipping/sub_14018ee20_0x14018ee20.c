// 函数: sub_14018ee20
// 地址: 0x14018ee20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x8]

do
    zmm1[0].o = _mm256_extracti128_si256(arg18, 1)
    arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*zmm1[0].q), 2)
    arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
    
    if ((arg5 & 8) == 0)
        goto label_14018ef46
    
label_14018ee41:
    zmm1[0].o = _mm256_extracti128_si256(arg18, 1)
    uint32_t rax_4 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
    arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rax_4, 3)
    arg18 = _mm256_add_epi64(arg22, arg13)
    
    if ((arg5 & 0x10) != 0)
        goto label_14018ee6a
    
label_14018ef53:
    
    if ((arg5 & 0x20) != 0)
        goto label_14018ee7e
    
label_14018ef5c:
    
    if ((arg5 & 0x40) != 0)
        goto label_14018ee8f
    
label_14018ef65:
    
    if (arg5 s>= 0)
        goto label_14018ef6d
    
label_14018eeaa:
    zmm1[0].o = _mm256_extracti128_si256(arg18, 1)
    uint32_t rax_12 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
    arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rax_12, 7)
label_14018ef6d:
    int128_t arg_600 = arg3[0].o
    zmm1[0].o = arg3[0].o & data_142fc92e0
    arg18 = __vpcmpgtd_ymmqq_ymmqq_memqq(_mm256_cvtepu16_epi32(zmm1[0].o), arg43) & not.32(arg16)
    arg13[0].o = zx.o(0)
    int32_t temp0_22 = _mm256_movemask_ps(arg18 & arg21)
    float zmm10[0x8]
    zmm10[0].o = zx.o(0)
    
    if (temp0_22 != arg7)
        zmm10 = arg18 ^ arg16
    
    arg15 = _mm256_blendv_ps(arg15, arg12, arg18)
    arg12 = _mm256_add_epi32(arg12, arg20)
    arg16 = _mm256_cmpgt_epi32(arg12, arg13) & zmm10
    zmm10 = arg16 & arg21
    arg7 = _mm256_movemask_ps(zmm10)
    
    if (arg7 == 0)
    label_14018efd0:
        float temp0_27[0x8] = _mm256_blendv_ps(arg19, arg15, arg21)
        arg12 = _mm256_add_epi64(arg14, _mm256_cvtepi32_epi64(temp0_27[0].o))
        
        if ((arg8 & 1) != 0)
            arg3[0].o = arg66
            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*arg12[0].q), 0)
        else
            arg3[0].o = arg66
        
        arg16 = arg17
        arg17 = arg26
        arg18 = arg35
        arg19 = arg25
        zmm10 = arg32
        float zmm11[0x8]
        
        if ((arg8 & 2) == 0)
            zmm11 = temp0_27
            arg13[0].o = _mm256_extracti128_si256(temp0_27, 1)
            
            if ((arg8 & 4) != 0)
                goto label_14018f110
            
            goto label_14018f04c
        
        uint32_t rax_22 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
        arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rax_22, 1)
        zmm11 = temp0_27
        arg13[0].o = _mm256_extracti128_si256(temp0_27, 1)
        
        if ((arg8 & 4) != 0)
        label_14018f110:
            temp0_27[0].o = _mm256_extracti128_si256(arg12, 1)
            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*temp0_27[0].q), 2)
            arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
            
            if ((arg8 & 8) == 0)
                goto label_14018f05b
            
            goto label_14018f132
        
    label_14018f04c:
        arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
        
        if ((arg8 & 8) == 0)
        label_14018f05b:
            arg12 = _mm256_add_epi64(arg22, arg13)
            
            if ((arg8 & 0x10) != 0)
                goto label_14018f15c
            
            goto label_14018f069
        
    label_14018f132:
        arg12[0].o = _mm256_extracti128_si256(arg12, 1)
        uint32_t rax_26 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
        arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rax_26, 3)
        arg12 = _mm256_add_epi64(arg22, arg13)
        
        if ((arg8 & 0x10) != 0)
        label_14018f15c:
            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*arg12[0].q), 4)
            arg13 = zmm11
            
            if ((arg8 & 0x20) == 0)
                goto label_14018f077
            
            goto label_14018f175
        
    label_14018f069:
        arg13 = zmm11
        
        if ((arg8 & 0x20) == 0)
        label_14018f077:
            
            if ((arg8 & 0x40) != 0)
                goto label_14018f187
            
            goto label_14018f081
        
    label_14018f175:
        uint32_t rax_30 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
        arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rax_30, 5)
        
        if ((arg8 & 0x40) == 0)
        label_14018f081:
            
            if (arg1.b s< 0)
            label_14018f1a2:
                arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                uint32_t rax_34 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rax_34, 7)
        else
        label_14018f187:
            temp0_27[0].o = _mm256_extracti128_si256(arg12, 1)
            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*temp0_27[0].q), 6)
            
            if (arg1.b s< 0)
                goto label_14018f1a2
        
        zmm1 = _mm256_blendv_ps(arg36, _mm256_sub_epi32(arg13, arg20), arg21)
        arg12 = _mm256_cmpgt_epi32(zmm1, arg33) & arg21
        
        if (_mm256_movemask_ps(arg12) != 0)
            zmm1 = _mm256_blendv_ps(zmm1, arg33, arg12)
        
        arg21 = arg23
        arg12 = _mm256_add_epi64(arg14, _mm256_cvtepi32_epi64(zmm1[0].o))
        uint32_t rax_38
        
        if ((arg8 & 1) != 0)
            arg14[0].o = arg64
            arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*arg12[0].q), 0)
            
            if ((arg8 & 2) != 0)
                rax_38 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_38, 1)
        else
            arg14[0].o = arg64
            
            if ((arg8 & 2) != 0)
                rax_38 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_38, 1)
        arg33[0].o = _mm256_extracti128_si256(zmm1, 1)
        float arg_60[0x8] = zmm1
        
        if ((arg8 & 4) == 0)
            arg13 = _mm256_cvtepi32_epi64(arg33[0].o)
            
            if ((arg8 & 8) != 0)
                goto label_14018f2cf
            
            goto label_14018f20a
        
        zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
        arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*zmm1[0].q), 2)
        arg13 = _mm256_cvtepi32_epi64(arg33[0].o)
        
        if ((arg8 & 8) != 0)
        label_14018f2cf:
            arg12[0].o = _mm256_extracti128_si256(arg12, 1)
            uint32_t rax_46 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
            arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_46, 3)
            arg12 = _mm256_add_epi64(arg22, arg13)
            
            if ((arg8 & 0x10) == 0)
                goto label_14018f218
            
            goto label_14018f2f9
        
    label_14018f20a:
        arg12 = _mm256_add_epi64(arg22, arg13)
        
        if ((arg8 & 0x10) == 0)
        label_14018f218:
            arg22[0].o = zx.o(0)
            
            if ((arg8 & 0x20) != 0)
                goto label_14018f313
            
            goto label_14018f227
        
    label_14018f2f9:
        arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*arg12[0].q), 4)
        arg22[0].o = zx.o(0)
        
        if ((arg8 & 0x20) == 0)
        label_14018f227:
            
            if ((arg8 & 0x40) != 0)
                zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*zmm1[0].q), 6)
        else
        label_14018f313:
            uint32_t rax_50 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
            arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_50, 5)
            
            if ((arg8 & 0x40) != 0)
                zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, zx.d(*zmm1[0].q), 6)
        
        uint16_t* r12 = arg9
        arg13[0].o = arg3[0].o & data_142fc92e0
        
        if (arg1.b s< 0)
            arg12[0].o = _mm256_extracti128_si256(arg12, 1)
            uint32_t rax_42 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
            arg14[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg14[0].o, rax_42, 7)
        
        arg66 = arg3[0].o
        arg12 = _mm256_cvtepu16_epi32(arg13[0].o)
        arg64 = arg14[0].o
        zmm1[0].o = arg14[0].o & data_142fc92e0
        arg14 = _mm256_cvtepu16_epi32(zmm1[0].o)
        arg15 = _mm256_xor_ps(arg27, arg20)
        arg13[0].o = zx.o(0)
        
        if (*(arg6 + 0x980) != 1)
        label_14018f797:
            zmm1 = __vpmaxsd_ymmqq_ymmqq_memqq(_mm256_sub_epi32(arg14, arg12), arg31)
            arg13 = _mm256_div_ps(_mm256_sub_ps(arg79, _mm256_cvtepi32_ps(arg12)), 
                _mm256_cvtepi32_ps(zmm1))
            goto label_14018f7ba
        
    label_14018f7ba:
        arg12 = _mm256_blendv_ps(arg22, arg13, arg15)
        arg14 = arg40
        arg15 = arg31
        arg13 = zmm11
    label_14018f7d6:
        arg16 = _mm256_blendv_ps(arg16, arg12, zmm10)
        uint32_t arg_1e0[0x8] = arg16
    label_14018f7e5:
        zmm1 = __return_addr.32
        arg12[0].o = _mm256_extracti128_si256(zmm1, 1)
        arg3 = _mm256_cvtepi32_epi64(arg12[0].o)
        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
        int64_t arg_460[0x4] = arg13
        arg12 = __vpmulld_ymmqq_ymmqq_memqq(arg13, arg44)
        arg13[0].o = _mm256_extracti128_si256(arg12, 1)
        int64_t temp0_161[0x4] = _mm256_cvtepi32_epi64(arg13[0].o)
        arg12 = _mm256_cvtepi32_epi64(arg12[0].o)
        arg36 = zmm1
        float arg_260[0x8] = arg12
        arg12 = _mm256_add_epi64(arg12, zmm1)
        arg31 = arg3
        arg32 = temp0_161
        arg13 = _mm256_add_epi64(temp0_161, arg3)
        zmm1 = _mm256_add_epi64(arg13, arg18)
        arg27 = zmm1
        zmm11 = _mm256_add_epi64(arg12, arg14)
        zmm10 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg15, arg37)
        arg12 = arg21 & not.32(zmm10)
        arg13[0].o = _mm256_extracti128_si256(arg12, 1)
        arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
        arg13[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg13[0].o) != 0)
            arg14 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg22, arg55)
            arg13[0].o = _mm256_extracti128_si256(arg14, 1)
            arg13[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg14[0].o, arg13[0].o)
            arg13[0].o &= arg12[0].o
            arg15[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
            arg15[0].o = __vpsraw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
            arg15[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg15[0].o) != 0)
                arg15 = _mm256_srai_epi32(
                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 0x1f)
                int64_t temp0_182[0x4] = __vpaddq_ymmqq_ymmqq_memqq(arg31, arg29)
                arg18 = __vpaddq_ymmqq_ymmqq_memqq(arg36, arg34)
                arg20 = __vpbroadcastq_ymmqq_memq(4)
                arg18 = __vpaddq_ymmqq_ymmqq_memqq(arg18, arg_260)
                int64_t temp0_186[0x4] = __vpaddq_ymmqq_ymmqq_memqq(temp0_182, arg32)
                arg22 = _mm256_add_epi64(temp0_186, arg20)
                int64_t temp0_188[0x4] = _mm256_add_epi64(arg18, arg20)
                arg21[0].o = _mm256_extracti128_si256(arg15, 1)
                arg3[0].o = zx.o(0)
                arg17[0].o = arg15[0].o
                float temp0_190[0x4]
                int32_t temp1_1
                temp0_190, temp1_1 = _mm256_i64gather_ps(zx.o(0), *(r12 + temp0_188[0]), arg17[0].o)
                arg3[0].o = temp0_190
                arg17[0].o = temp1_1
                arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                arg36[0].o = arg21[0].o
                float temp0_192[0x4]
                int32_t temp1_2
                temp0_192, temp1_2 = _mm256_i64gather_ps(arg17[0].o, *(r12 + arg22[0]), arg36[0].o)
                arg17[0].o = temp0_192
                arg36[0].o = temp1_2
                zmm1 = __vpbroadcastq_ymmqq_memq(8)
                int64_t temp0_194[0x4] = _mm256_add_epi64(temp0_186, zmm1)
                zmm1 = _mm256_add_epi64(arg18, zmm1)
                arg22[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg22[0].o, arg22[0].o)
                arg16[0].o = arg15[0].o
                float temp0_197[0x4]
                int32_t temp1_3
                temp0_197, temp1_3 = _mm256_i64gather_ps(arg22[0].o, *(r12 + zmm1[0].q), arg16[0].o)
                arg22[0].o = temp0_197
                arg16[0].o = temp1_3
                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                arg16[0].o = arg21[0].o
                float temp0_199[0x4]
                int32_t temp1_4
                temp0_199, temp1_4 =
                    _mm256_i64gather_ps(zmm1[0].o, *(r12 + temp0_194[0]), arg16[0].o)
                zmm1[0].o = temp0_199
                arg16[0].o = temp1_4
                arg16 = __vpbroadcastq_ymmqq_memq(0xc)
                arg18 = _mm256_add_epi64(arg18, arg16)
                temp0_194[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_194[0].o, temp0_194[0].o)
                arg19[0].o = arg15[0].o
                float temp0_203[0x4]
                int32_t temp1_5
                temp0_203, temp1_5 =
                    _mm256_i64gather_ps(temp0_194[0].o, *(r12 + arg18[0].q), arg19[0].o)
                temp0_194[0].o = temp0_203
                arg19[0].o = temp1_5
                arg19 = arg25
                arg18 = arg35
                int64_t temp0_204[0x4] = _mm256_add_epi64(temp0_186, arg16)
                arg16[0].o = zx.o(0)
                float temp0_205[0x4]
                int32_t temp1_6
                temp0_205, temp1_6 = _mm256_i64gather_ps(zx.o(0), *(r12 + temp0_204[0]), arg21[0].o)
                arg16[0].o = temp0_205
                arg21[0].o = temp1_6
                arg21 = arg23
                arg3 = _mm256_insertf128_ps(arg3, arg17[0].o, 1)
                arg17 = arg26
                zmm1 = _mm256_insertf128_ps(arg22, zmm1[0].o, 1)
                arg22[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg22[0].o, arg22[0].o)
                arg13 = _mm256_insertf128_ps(temp0_194, arg16[0].o, 1)
                arg20 = _mm256_cmpeq_epi32(temp0_194, temp0_194)
                arg59 = _mm256_maskstore_ps(arg15, arg3)
                *arg4 = _mm256_maskstore_ps(arg15, zmm1)
                arg4[1] = _mm256_maskstore_ps(arg15, arg13)
            
            arg13 = arg14 ^ arg20
            arg14[0].o = _mm256_extracti128_si256(arg13, 1)
            arg13[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
            arg14[0].o = arg12[0].o & arg13[0].o
            arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
            arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                arg12 = _mm256_srai_epi32(
                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg14[0].o), 0x1f), 0x1f)
                arg18 = _mm256_srai_epi32(_mm256_slli_epi32(arg24, 0x1f), 0x1f)
                arg22 = arg18 & arg12
                arg20 = zmm11
                arg21 = zmm11
                arg15 = arg27
                
                if (_mm256_movemask_ps(arg22) != 0)
                    zmm1 = __vpbroadcastq_ymmqq_memq(4)
                    arg19 = _mm256_permutevar8x32_ps(data_143442920, arg22)
                    arg13 = _mm256_permutevar8x32_ps(data_143442940, arg22)
                    arg15 = _mm256_add_epi64(
                        __vpaddq_ymmqq_ymmqq_memqq(__vpaddq_ymmqq_ymmqq_memqq(arg36, arg34), 
                            arg_260), 
                        zmm1)
                    arg16[0].o = _mm256_extractf128_ps(arg22[0].o, 1)
                    arg17[0].o = zx.o(0)
                    float temp0_233[0x4]
                    int32_t temp1_7
                    temp0_233, temp1_7 =
                        _mm256_i64gather_ps(zx.o(0), *(r12 + arg15[0].q), arg22[0].o)
                    arg17[0].o = temp0_233
                    arg22[0].o = temp1_7
                    arg3 = arg31
                    arg15 = _mm256_add_epi64(
                        __vpaddq_ymmqq_ymmqq_memqq(__vpaddq_ymmqq_ymmqq_memqq(arg3, arg29), arg32), 
                        zmm1)
                    arg3[0].o = zx.o(0)
                    float temp0_237[0x4]
                    int32_t temp1_8
                    temp0_237, temp1_8 =
                        _mm256_i64gather_ps(zx.o(0), *(r12 + arg15[0].q), arg16[0].o)
                    arg3[0].o = temp0_237
                    arg16[0].o = temp1_8
                    arg20 = _mm256_blendv_ps(arg21, _mm256_add_epi64(arg21, zmm1), arg19)
                    arg19 = arg25
                    arg15 = _mm256_blendv_ps(arg27, _mm256_add_epi64(arg27, zmm1), arg13)
                    arg13 = _mm256_insertf128_ps(arg17, arg3[0].o, 1)
                    arg17 = arg26
                
                arg22[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg22[0].o, arg22[0].o)
                arg59 = _mm256_maskstore_ps(arg12, _mm256_blendv_ps(arg22, arg13, arg18))
                zmm1 = __vpbroadcastd_ymmqq_memd(2)
                arg18 = zmm1 & arg24
                zmm1 = _mm256_cmpeq_epi32(arg18, zmm1)
                arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
                arg13[0].o = arg14[0].o & zmm1[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    zmm1 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 0x1f)
                    arg3 = _mm256_permutevar8x32_epi32(data_143442920, zmm1)
                    arg13 = _mm256_permutevar8x32_epi32(data_143442940, zmm1)
                    arg16[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg17[0].o = zx.o(0)
                    float temp0_260[0x4]
                    int32_t temp1_9
                    temp0_260, temp1_9 = _mm256_i64gather_ps(zx.o(0), *arg20[0], zmm1[0].o)
                    arg17[0].o = temp0_260
                    zmm1[0].o = temp1_9
                    zmm1 = __vpbroadcastq_ymmqq_memq(4)
                    arg20 = _mm256_blendv_ps(arg20, _mm256_add_epi64(arg20, zmm1), arg3)
                    arg19 = arg25
                    arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                    float temp0_265[0x4]
                    int32_t temp1_10
                    temp0_265, temp1_10 = _mm256_i64gather_ps(arg3[0].o, *arg15[0].q, arg16[0].o)
                    arg3[0].o = temp0_265
                    arg16[0].o = temp1_10
                    arg15 = _mm256_blendv_ps(arg15, _mm256_add_epi64(arg15, zmm1), arg13)
                    arg13 = _mm256_insertf128_ps(arg17, arg3[0].o, 1)
                    arg17 = arg26
                
                zmm11 = arg21
                arg21 = arg23
                *arg4 = _mm256_maskstore_ps(arg12, _mm256_cmpeq_epi32(arg18, arg22) & not.32(arg13))
                arg18 = arg30 & arg24
                zmm1 = _mm256_cmpeq_epi32(arg18, arg30)
                arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
                arg13[0].o = arg14[0].o & zmm1[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    zmm1 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 0x1f)
                    arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg13[0].o = zx.o(0)
                    float temp0_282[0x4]
                    int32_t temp1_11
                    temp0_282, temp1_11 = _mm256_i64gather_ps(zx.o(0), *arg20[0], zmm1[0].o)
                    arg13[0].o = temp0_282
                    zmm1[0].o = temp1_11
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    float temp0_284[0x4]
                    int32_t temp1_12
                    temp0_284, temp1_12 = _mm256_i64gather_ps(zmm1[0].o, *arg15[0].q, arg3[0].o)
                    zmm1[0].o = temp0_284
                    arg3[0].o = temp1_12
                    arg14 = _mm256_insertf128_ps(arg13, zmm1[0].o, 1)
                
                zmm1 = _mm256_cmpeq_epi32(arg18, arg22) & not.32(arg14)
                arg4[1] = _mm256_maskstore_ps(arg12, zmm1)
                arg20 = _mm256_cmpeq_epi32(arg20, arg20)
                arg18 = arg35
        
        arg12 = zmm10 ^ arg20
        arg13[0].o = _mm256_extracti128_si256(arg12, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
        arg33[0].o = zmm1[0].o
        arg12 = arg21 & not.32(arg12)
        arg13[0].o = _mm256_extracti128_si256(arg12, 1)
        arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
        arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        bool cond:1_1 = __vpmovmskb_gpr32d_xmmdq(arg12[0].o) == 0
        float arg_860[0x8] = zmm10
        int64_t arg_300[0x4]
        int64_t arg_320[0x4]
        int64_t arg_340[0x4]
        int64_t arg_360[0x4]
        int64_t arg_380[0x4]
        int64_t arg_3a0[0x4]
        bool cond:2_1
        
        if (not(cond:1_1))
            arg12[0].o = __vpackssdw_xmmdq_xmmdq_memdq(arg19[0].o, arg54)
            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                arg_3a0 = arg22
                arg_380 = arg22
                arg_360 = arg22
                arg_340 = arg22
                arg_320 = arg22
                arg_300 = arg22
                arg15 = arg17 & _mm256_srai_epi32(_mm256_slli_epi32(arg24, 0x1f), 0x1f)
                arg21 = arg18
                arg18 = arg15 & arg28
                arg12 = arg40
                zmm10 = arg12
                arg14 = arg21
                
                if (_mm256_movemask_ps(arg18) != 0)
                    zmm1 = __vpbroadcastq_ymmqq_memq(4)
                    zmm10 = _mm256_add_epi64(arg21, zmm1)
                    arg3 = _mm256_add_epi64(arg12, zmm1)
                    arg13 = data_143442920
                    arg19 = _mm256_permutevar8x32_ps(arg13, arg18)
                    arg3 = _mm256_blendv_ps(arg12, arg3, arg19)
                    arg13[0].o = _mm256_extractf128_ps(arg18[0], 1)
                    arg16[0].o = arg18[0]
                    arg17[0].o = zx.o(0)
                    float temp0_307[0x4]
                    int32_t temp1_13
                    temp0_307, temp1_13 = _mm256_i64gather_ps(zx.o(0), *arg12[0].q, arg16[0].o)
                    arg17[0].o = temp0_307
                    arg16[0].o = temp1_13
                    arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                    arg14[0].o = arg13[0].o
                    float temp0_309[0x4]
                    int32_t temp1_14
                    temp0_309, temp1_14 = _mm256_i64gather_ps(arg16[0].o, *arg21[0].q, arg14[0].o)
                    arg16[0].o = temp0_309
                    arg14[0].o = temp1_14
                    float temp0_310[0x8] = _mm256_permutevar8x32_ps(data_143442940, arg18)
                    arg20 = _mm256_blendv_ps(arg21, zmm10, temp0_310)
                    arg12 = _mm256_insertf128_ps(arg17, arg16[0].o, 1)
                    arg17 = arg26
                    arg_360 = _mm256_maskstore_ps(arg15, arg12)
                    arg12 = _mm256_add_epi64(arg3, zmm1)
                    zmm10 = _mm256_blendv_ps(arg3, arg12, arg19)
                    arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                    float temp0_317[0x4]
                    int32_t temp1_15
                    temp0_317, temp1_15 = _mm256_i64gather_ps(arg16[0].o, *arg3[0].q, arg18[0])
                    arg16[0].o = temp0_317
                    arg18[0] = temp1_15
                    arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                    float temp0_319[0x4]
                    int32_t temp1_16
                    temp0_319, temp1_16 = _mm256_i64gather_ps(arg3[0].o, *arg20[0], arg13[0].o)
                    arg3[0].o = temp0_319
                    arg13[0].o = temp1_16
                    arg14 = _mm256_blendv_ps(arg20, _mm256_add_epi64(arg20, zmm1), temp0_310)
                    arg20 = _mm256_cmpeq_epi32(arg20, arg20)
                    arg_300 = _mm256_maskstore_ps(arg15, _mm256_insertf128_ps(arg16, arg3[0].o, 1))
                
                zmm1 = __vpbroadcastd_ymmqq_memd(2)
                arg3 = zmm1 & arg24
                arg15 = _mm256_cmpeq_epi32(arg3, zmm1) & arg17
                arg21 = arg23
                zmm1 = arg21 & not.32(arg15)
                arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                arg13[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    arg19 = arg25
                    arg12 = arg30
                else
                    zmm1 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 0x1f)
                    arg3 = __vpbroadcastq_ymmqq_memq(4)
                    arg18 = _mm256_add_epi64(arg14, arg3)
                    arg16 = _mm256_add_epi64(zmm10, arg3)
                    arg13 = data_143442920
                    arg20 = _mm256_permutevar8x32_epi32(arg13, zmm1)
                    arg16 = _mm256_blendv_ps(zmm10, arg16, arg20)
                    arg13[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg19[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg19[0].o, arg19[0].o)
                    arg17[0].o = zmm1[0].o
                    float temp0_341[0x4]
                    int32_t temp1_17
                    temp0_341, temp1_17 = _mm256_i64gather_ps(arg19[0].o, *zmm10[0].q, arg17[0].o)
                    arg19[0].o = temp0_341
                    arg17[0].o = temp1_17
                    arg12[0].o = arg13[0].o
                    arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                    float temp0_343[0x4]
                    int32_t temp1_18
                    temp0_343, temp1_18 = _mm256_i64gather_ps(arg17[0].o, *arg14[0].q, arg12[0].o)
                    arg17[0].o = temp0_343
                    arg12[0].o = temp1_18
                    uint32_t temp0_344[0x8] = _mm256_permutevar8x32_epi32(data_143442940, zmm1)
                    float temp0_345[0x8] = _mm256_blendv_ps(arg14, arg18, temp0_344)
                    arg_380 = _mm256_maskstore_ps(arg15, _mm256_insertf128_ps(arg19, arg17[0].o, 1))
                    zmm10 = _mm256_blendv_ps(arg16, _mm256_add_epi64(arg16, arg3), arg20)
                    arg20 = _mm256_cmpeq_epi32(arg20, arg20)
                    arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                    float temp0_352[0x4]
                    int32_t temp1_19
                    temp0_352, temp1_19 = _mm256_i64gather_ps(arg17[0].o, *arg16[0].q, zmm1[0].o)
                    arg17[0].o = temp0_352
                    zmm1[0].o = temp1_19
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    float temp0_354[0x4]
                    int32_t temp1_20
                    temp0_354, temp1_20 =
                        _mm256_i64gather_ps(zmm1[0].o, *temp0_345[0].q, arg13[0].o)
                    zmm1[0].o = temp0_354
                    arg13[0].o = temp1_20
                    arg3 = _mm256_add_epi64(temp0_345, arg3)
                    arg14 = _mm256_blendv_ps(temp0_345, arg3, temp0_344)
                    arg21 = arg23
                    arg12 = arg30
                    zmm1 = _mm256_insertf128_ps(arg17, zmm1[0].o, 1)
                    arg17 = arg26
                    arg_320 = _mm256_maskstore_ps(arg15, zmm1)
                    arg19 = arg25
                
                arg15 = _mm256_cmpeq_epi32(arg12 & arg24, arg12) & arg17
                zmm1 = arg21 & not.32(arg15)
                arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                arg13[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    zmm1 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 0x1f)
                    arg3 = __vpbroadcastq_ymmqq_memq(4)
                    arg13 = _mm256_add_epi64(arg14, arg3)
                    arg3 = _mm256_add_epi64(zmm10, arg3)
                    uint32_t temp0_370[0x8] = _mm256_permutevar8x32_epi32(data_143442920, zmm1)
                    arg18 = _mm256_blendv_ps(zmm10, arg3, temp0_370)
                    temp0_370[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg17[0].o = zx.o(0)
                    arg3[0].o = zmm1[0].o
                    float temp0_373[0x4]
                    int32_t temp1_21
                    temp0_373, temp1_21 = _mm256_i64gather_ps(zx.o(0), *zmm10[0].q, arg3[0].o)
                    arg17[0].o = temp0_373
                    arg3[0].o = temp1_21
                    arg12[0].o = zx.o(0)
                    arg3[0].o = temp0_370[0].o
                    float temp0_374[0x4]
                    int32_t temp1_22
                    temp0_374, temp1_22 = _mm256_i64gather_ps(zx.o(0), *arg14[0].q, arg3[0].o)
                    arg12[0].o = temp0_374
                    arg3[0].o = temp1_22
                    arg3 = _mm256_blendv_ps(arg14, arg13, 
                        _mm256_permutevar8x32_epi32(data_143442940, zmm1))
                    arg12 = _mm256_insertf128_ps(arg17, arg12[0].o, 1)
                    arg17 = arg26
                    arg_3a0 = _mm256_maskstore_ps(arg15, arg12)
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    float temp0_380[0x4]
                    int32_t temp1_23
                    temp0_380, temp1_23 = _mm256_i64gather_ps(arg12[0].o, *arg18[0].q, zmm1[0].o)
                    arg12[0].o = temp0_380
                    zmm1[0].o = temp1_23
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    float temp0_382[0x4]
                    int32_t temp1_24
                    temp0_382, temp1_24 = _mm256_i64gather_ps(zmm1[0].o, *arg3[0].q, temp0_370[0].o)
                    zmm1[0].o = temp0_382
                    temp0_370[0].o = temp1_24
                    arg_340 = _mm256_maskstore_ps(arg15, _mm256_insertf128_ps(arg12, zmm1[0].o, 1))
                
                arg12 = __vpaddq_ymmqq_ymmqq_memqq(arg31, arg29)
                zmm1 = __vpaddq_ymmqq_ymmqq_memqq(arg36, arg34)
                arg3 = __vpbroadcastq_ymmqq_memq(4)
                zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, arg_260)
                arg12 = __vpaddq_ymmqq_ymmqq_memqq(arg12, arg32)
                zmm1 = _mm256_add_epi64(zmm1, arg3)
                arg13[0].o = arg19[0].o
                arg14[0].o = zx.o(0)
                uint32_t temp0_391[0x4]
                int32_t temp1_25
                temp0_391, temp1_25 =
                    _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm1[0].q), arg13[0].o)
                arg14[0].o = temp0_391
                arg13[0].o = temp1_25
                arg12 = _mm256_add_epi64(arg12, arg3)
                zmm1[0].o = zx.o(0)
                arg3[0].o = arg54
                uint32_t temp0_393[0x4]
                int32_t temp1_26
                temp0_393, temp1_26 =
                    _mm256_i64gather_epi32(zx.o(0), *(r12 + arg12[0].q), arg3[0].o)
                zmm1[0].o = temp0_393
                arg3[0].o = temp1_26
                arg12 = _mm256_inserti128_si256(arg14, zmm1[0].o, 1)
                zmm1 = _mm256_srli_epi32(arg12, 0x15)
                arg3 = _mm256_srli_epi32(arg12, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                arg14 = arg_320
                arg15 = arg_340
                arg13 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg_300, 
                    _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(
                            arg12 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                            __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                        _mm256_broadcast_ss(511f)), 
                    arg_360)
                arg12 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                arg3 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg3, arg12))
                arg16 = _mm256_broadcast_ss(1023f)
                arg3 = _mm256_div_ps(arg3, arg16)
                float temp0_412[0x8] =
                    _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg12)), arg16)
                arg3 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg3, arg14, arg_380)
                arg12 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_412, arg15, arg_3a0)
                arg59 = _mm256_maskstore_ps(arg19, arg13)
                *arg4 = _mm256_maskstore_ps(arg19, arg3)
                arg4[1] = _mm256_maskstore_ps(arg19, arg12)
                arg18 = arg35
            
            arg12[0].o = _mm256_extracti128_si256(arg17, 1)
            arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg17[0].o, arg12[0].o)
            arg13[0].o = _mm256_extracti128_si256(arg28, 1)
            arg28[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg28[0].o, arg13[0].o)
            arg15[0].o = arg12[0].o ^ arg33[0].o
            arg12[0].o = arg15[0].o & arg28[0].o
            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            cond:2_1 = __vpmovmskb_gpr32d_xmmdq(arg12[0].o) == 0
            arg19 = arg27
        
        if (cond:1_1 || cond:2_1)
            zmm10 = arg28
            arg21 = arg30
        else
            arg18 = __vpbroadcastd_ymmqq_memd(2)
            zmm1 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg18, arg37)
            arg14 = arg21 & not.32(zmm1)
            arg12[0].o = _mm256_extracti128_si256(arg14, 1)
            arg20[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg14[0].o, arg12[0].o)
            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg20[0].o, arg12[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) == 0)
                arg20 = _mm256_cmpeq_epi32(arg20, arg20)
                zmm10 = arg28
                arg18 = arg35
            else
                arg22 = _mm256_srai_epi32(_mm256_slli_epi32(arg24, 0x1f), 0x1f)
                arg12 = arg22 & arg14
                
                if (_mm256_movemask_ps(arg12) == 0)
                    arg19[0].o = zx.o(0)
                else
                    arg12 = __vpbroadcastq_ymmqq_memq(2)
                    arg3 = _mm256_add_epi64(zmm11, arg12)
                    arg16 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg20[0].o), 0x1f), 0x1f) & arg22
                    uint32_t temp0_438[0x8] = _mm256_permutevar8x32_epi32(data_143442920, arg16)
                    zmm11 = _mm256_blendv_ps(zmm11, arg3, temp0_438)
                    arg12 = _mm256_add_epi64(arg19, arg12)
                    arg3 = _mm256_permutevar8x32_epi32(data_143442940, arg16)
                    arg27 = _mm256_blendv_ps(arg19, arg12, arg3)
                    arg12 = __vpaddq_ymmqq_ymmqq_memqq(__vpaddq_ymmqq_ymmqq_memqq(arg36, arg34), 
                        arg_260)
                    arg16 =
                        __vpaddq_ymmqq_ymmqq_memqq(__vpaddq_ymmqq_ymmqq_memqq(arg31, arg29), arg32)
                    arg19 = __vpbroadcastq_ymmqq_memq(4)
                    arg16 = _mm256_add_epi64(arg16, arg19)
                    arg12 = _mm256_add_epi64(arg12, arg19)
                    arg19[0].o = zx.o(0)
                    float temp0_450[0x8] = _mm256_blendv_ps(arg19, arg12, temp0_438)
                    arg3 = _mm256_blendv_ps(arg19, arg16, arg3)
                    int64_t r8_1 = __vpextrq_gpr64q_xmmdq_immb(temp0_450[0].o, 1)
                    int64_t rcx = temp0_450[0].q
                    temp0_450[0].o = _mm256_extracti128_si256(temp0_450, 1)
                    int64_t r10_1 = __vpextrq_gpr64q_xmmdq_immb(temp0_450[0].o, 1)
                    int64_t rdi = temp0_450[0].q
                    int64_t rsi_2 = arg3[0].q
                    int64_t r11_1 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                    temp0_450[0].o = _mm256_extracti128_si256(arg3, 1)
                    int64_t rbx = temp0_450[0].q
                    int64_t rax_86 = __vpextrq_gpr64q_xmmdq_immb(temp0_450[0].o, 1)
                    temp0_450[0].o = zx.o(*(r12 + rcx))
                    temp0_450[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_450[0].o, *(r12 + r8_1), 1)
                    temp0_450[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_450[0].o, *(r12 + rdi), 2)
                    temp0_450[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_450[0].o, *(r12 + r10_1), 3)
                    temp0_450[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_450[0].o, *(r12 + rsi_2), 4)
                    temp0_450[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_450[0].o, *(r12 + r11_1), 5)
                    temp0_450[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_450[0].o, *(r12 + rbx), 6)
                    temp0_450[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_450[0].o, *(r12 + rax_86), 7)
                    arg12 = _mm256_cvtepu16_epi32(temp0_450[0].o)
                    arg3 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                    arg12 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg12, arg3))
                
                arg59 = _mm256_maskstore_ps(arg14, _mm256_blendv_ps(arg19, arg12, arg22))
                zmm10 = arg18 & arg24
                arg12 = _mm256_cmpeq_epi32(zmm10, arg18)
                arg3[0].o = _mm256_extracti128_si256(arg12, 1)
                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg3[0].o)
                arg12[0].o &= arg20[0].o
                arg3[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                arg3[0].o = __vpsraw_xmmdq_xmmdq_immb(arg3[0].o, 0xf)
                arg3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
                char temp0_591 = __vpmovmskb_gpr32d_xmmdq(arg3[0].o)
                arg22[0].o = zx.o(0)
                
                if (temp0_591 == 0)
                    arg17 = arg26
                    arg18 = arg35
                    arg19 = arg27
                else
                    int64_t rax_104
                    
                    if ((temp0_591 & 1) != 0)
                        arg16[0].o = arg70
                        arg16[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16[0].o, *zmm11[0].q, 0)
                        
                        if ((temp0_591 & 2) != 0)
                            rax_104 = __vpextrq_gpr64q_xmmdq_immb(zmm11[0].o, 1)
                            arg16[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16[0].o, *rax_104, 1)
                    else
                        arg16[0].o = arg70
                        
                        if ((temp0_591 & 2) != 0)
                            rax_104 = __vpextrq_gpr64q_xmmdq_immb(zmm11[0].o, 1)
                            arg16[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16[0].o, *rax_104, 1)
                    arg17 = arg26
                    arg19 = arg27
                    
                    if ((temp0_591 & 4) == 0)
                        if ((temp0_591 & 8) != 0)
                            goto label_140191102
                        
                        goto label_140190f9b
                    
                    arg3[0].o = _mm256_extracti128_si256(zmm11, 1)
                    arg16[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16[0].o, *arg3[0].q, 2)
                    
                    if ((temp0_591 & 8) == 0)
                    label_140190f9b:
                        arg12 = _mm256_cvtepu16_epi32(arg12[0].o)
                        
                        if ((temp0_591 & 0x10) != 0)
                            arg16[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16[0].o, *arg19[0].q, 4)
                    else
                    label_140191102:
                        arg3[0].o = _mm256_extracti128_si256(zmm11, 1)
                        int64_t rax_110 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                        arg16[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16[0].o, *rax_110, 3)
                        arg12 = _mm256_cvtepu16_epi32(arg12[0].o)
                        
                        if ((temp0_591 & 0x10) != 0)
                            arg16[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16[0].o, *arg19[0].q, 4)
                    
                    arg12 = _mm256_slli_epi32(arg12, 0x1f)
                    arg25[0].o = arg15[0].o
                    arg15 = zmm1
                    zmm1 = zmm11
                    
                    if ((temp0_591 & 0x20) != 0)
                        int64_t rax_106 = __vpextrq_gpr64q_xmmdq_immb(arg19[0].o, 1)
                        arg16[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16[0].o, *rax_106, 5)
                    
                    zmm11 = __vpbroadcastq_ymmqq_memq(2)
                    arg18 = _mm256_srai_epi32(arg12, 0x1f)
                    
                    if ((temp0_591 & 0x40) != 0)
                        arg12[0].o = _mm256_extracti128_si256(arg19, 1)
                        arg16[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16[0].o, *arg12[0].q, 6)
                    
                    arg12 = _mm256_add_epi64(arg19, zmm11)
                    zmm11 = _mm256_add_epi64(zmm1, zmm11)
                    arg22 = _mm256_permutevar8x32_epi32(data_143442920, arg18)
                    arg3 = data_143442940
                    arg18 = _mm256_permutevar8x32_epi32(arg3, arg18)
                    
                    if (temp0_591 s< 0)
                        arg3[0].o = _mm256_extracti128_si256(arg19, 1)
                        int64_t rax_108 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                        arg16[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16[0].o, *rax_108, 7)
                    
                    zmm11 = _mm256_blendv_ps(zmm1, zmm11, arg22)
                    arg19 = _mm256_blendv_ps(arg19, arg12, arg18)
                    arg70 = arg16[0].o
                    arg12 = _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg16[0].o), 
                        __vpbroadcastd_ymmqq_memd(0xffffff01)))
                    arg22[0].o = zx.o(0)
                    arg18 = arg35
                    zmm1 = arg15
                    arg15[0].o = arg25[0].o
                
                arg3 = _mm256_cmpeq_epi32(zmm10, arg22)
                *arg4 = _mm256_maskstore_ps(arg14, arg3 & not.32(arg12))
                zmm10 = arg30 & arg24
                arg12 = _mm256_cmpeq_epi32(zmm10, arg30)
                arg3[0].o = _mm256_extracti128_si256(arg12, 1)
                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg3[0].o)
                arg12[0].o &= arg20[0].o
                arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                char temp0_829 = __vpmovmskb_gpr32d_xmmdq(arg12[0].o)
                
                if (temp0_829 == 0)
                    arg20 = _mm256_cmpeq_epi32(arg20, arg20)
                else
                    int64_t rax_112
                    
                    if ((temp0_829 & 1) != 0)
                        arg3[0].o = arg69
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm11[0].q, 0)
                        
                        if ((temp0_829 & 2) != 0)
                            rax_112 = __vpextrq_gpr64q_xmmdq_immb(zmm11[0].o, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_112, 1)
                    else
                        arg3[0].o = arg69
                        
                        if ((temp0_829 & 2) != 0)
                            rax_112 = __vpextrq_gpr64q_xmmdq_immb(zmm11[0].o, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_112, 1)
                    arg20 = _mm256_cmpeq_epi32(arg20, arg20)
                    
                    if ((temp0_829 & 4) == 0)
                        if ((temp0_829 & 8) != 0)
                            goto label_14019128d
                        
                        goto label_140191164
                    
                    arg12[0].o = _mm256_extracti128_si256(zmm11, 1)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg12[0].q, 2)
                    
                    if ((temp0_829 & 8) != 0)
                    label_14019128d:
                        arg12[0].o = _mm256_extracti128_si256(zmm11, 1)
                        int64_t rax_117 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_117, 3)
                        
                        if ((temp0_829 & 0x10) == 0)
                            goto label_14019116e
                        
                        goto label_1401912ad
                    
                label_140191164:
                    
                    if ((temp0_829 & 0x10) == 0)
                    label_14019116e:
                        
                        if ((temp0_829 & 0x20) != 0)
                            goto label_1401912bc
                        
                        goto label_140191178
                    
                label_1401912ad:
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg19[0].q, 4)
                    
                    if ((temp0_829 & 0x20) != 0)
                    label_1401912bc:
                        int64_t rax_119 = __vpextrq_gpr64q_xmmdq_immb(arg19[0].o, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_119, 5)
                        
                        if ((temp0_829 & 0x40) == 0)
                            goto label_140191182
                        
                        goto label_1401912d1
                    
                label_140191178:
                    
                    if ((temp0_829 & 0x40) != 0)
                    label_1401912d1:
                        arg12[0].o = _mm256_extracti128_si256(arg19, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg12[0].q, 6)
                        
                        if (temp0_829 s< 0)
                        label_1401912e9:
                            arg12[0].o = _mm256_extracti128_si256(arg19, 1)
                            int64_t rax_121 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_121, 7)
                    else
                    label_140191182:
                        
                        if (temp0_829 s< 0)
                            goto label_1401912e9
                    
                    arg69 = arg3[0].o
                    arg12 = _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg3[0].o), 
                        __vpbroadcastd_ymmqq_memd(0xffffff01)))
                
                arg3 = _mm256_cmpeq_epi32(zmm10, arg22)
                arg12 = arg3 & not.32(arg12)
                arg4[1] = _mm256_maskstore_ps(arg14, arg12)
                zmm10 = arg28
            
            arg12[0].o = _mm256_extracti128_si256(zmm1, 1)
            arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm10[0].o, arg13[0].o)
            arg12[0].o ^= arg15[0].o
            arg12[0].o &= zmm1[0].o
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                arg21 = arg30
            else
                zmm1 = __vpbroadcastd_ymmqq_memd(6)
                arg13 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm1, arg37)
                arg14 = arg21 & not.32(arg13)
                zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    arg59 = _mm256_maskstore_ps(arg14, arg22)
                    *arg4 = _mm256_maskstore_ps(arg14, arg22)
                    arg4[1] = _mm256_maskstore_ps(arg14, arg22)
                
                zmm1 = arg13 ^ arg20
                arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
                arg12[0].o &= zmm1[0].o
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                arg21 = arg30
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    arg12 = _mm256_cvtepi16_epi32(arg12[0].o)
                    arg59 = _mm256_maskstore_ps(arg12, arg22)
                    *arg4 = _mm256_maskstore_ps(arg12, arg22)
                    arg4[1] = _mm256_maskstore_ps(arg12, arg22)
        
        zmm1 = arg_60
        arg12 = _mm256_cmpeq_epi32(arg_460, zmm1)
        arg3 = arg12 & not.32(zmm10)
        arg12[0].o = _mm256_extracti128_si256(arg3, 1)
        arg19[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
        arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg19[0].o, arg12[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
            arg23 = arg3
            arg3 = arg_860
            arg12[0].o = _mm256_extracti128_si256(arg3, 1)
            arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
            int32_t temp0_472[0x8] = __vpmulld_ymmqq_ymmqq_memqq(zmm1, arg44)
            zmm1[0].o = _mm256_extracti128_si256(temp0_472, 1)
            zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
            arg3 = _mm256_cvtepi32_epi64(temp0_472[0].o)
            arg27 = arg3
            arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg3, arg36)
            arg_60 = zmm1
            arg14 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, arg31)
            arg32 = _mm256_add_epi64(arg14, arg18)
            zmm1 = __vpaddq_ymmqq_ymmqq_memqq(arg3, arg40)
            arg25 = zmm1
            arg12[0].o &= arg19[0].o
            arg3[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
            arg3[0].o = __vpsraw_xmmdq_xmmdq_immb(arg3[0].o, 0xf)
            arg3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg3[0].o) != 0)
                arg14 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg22, arg55)
                arg3[0].o = _mm256_extracti128_si256(arg14, 1)
                arg3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg14[0].o, arg3[0].o)
                arg15[0].o = arg12[0].o & arg3[0].o
                arg3[0].o = __vpsllw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
                arg3[0].o = __vpsraw_xmmdq_xmmdq_immb(arg3[0].o, 0xf)
                arg3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(arg3[0].o) != 0)
                    arg15 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 0x1f)
                    arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg31, arg29)
                    arg16 = __vpaddq_ymmqq_ymmqq_memqq(arg36, arg34)
                    zmm10 = __vpbroadcastq_ymmqq_memq(4)
                    arg16 = __vpaddq_ymmqq_ymmqq_memqq(arg16, arg27)
                    arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg3, arg_60)
                    int64_t temp0_499[0x4] = _mm256_add_epi64(arg3, zmm10)
                    zmm10 = _mm256_add_epi64(arg16, zmm10)
                    arg22[0].o = _mm256_extracti128_si256(arg15, 1)
                    arg21[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg21[0].o, arg21[0].o)
                    arg18[0] = arg15[0].o
                    float temp0_503[0x4]
                    int32_t temp1_27
                    temp0_503, temp1_27 =
                        _mm256_i64gather_ps(arg21[0].o, *(r12 + zmm10[0].q), arg18[0])
                    arg21[0].o = temp0_503
                    arg18[0] = temp1_27
                    arg13[0].o = zx.o(0)
                    arg36[0].o = arg22[0].o
                    float temp0_504[0x4]
                    int32_t temp1_28
                    temp0_504, temp1_28 =
                        _mm256_i64gather_ps(arg13[0].o, *(r12 + temp0_499[0]), arg36[0].o)
                    arg13[0].o = temp0_504
                    arg36[0].o = temp1_28
                    zmm1 = __vpbroadcastq_ymmqq_memq(8)
                    arg18 = _mm256_add_epi64(arg3, zmm1)
                    zmm1 = _mm256_add_epi64(arg16, zmm1)
                    zmm10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm10[0].o)
                    arg17[0].o = arg15[0].o
                    float temp0_509[0x4]
                    int32_t temp1_29
                    temp0_509, temp1_29 =
                        _mm256_i64gather_ps(zmm10[0].o, *(r12 + zmm1[0].q), arg17[0].o)
                    zmm10[0].o = temp0_509
                    arg17[0].o = temp1_29
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg17[0].o = arg22[0].o
                    float temp0_511[0x4]
                    int32_t temp1_30
                    temp0_511, temp1_30 =
                        _mm256_i64gather_ps(zmm1[0].o, *(r12 + arg18[0].q), arg17[0].o)
                    zmm1[0].o = temp0_511
                    arg17[0].o = temp1_30
                    arg17 = __vpbroadcastq_ymmqq_memq(0xc)
                    int64_t temp0_513[0x4] = _mm256_add_epi64(arg16, arg17)
                    arg18[0] = __vxorps_xmmdq_xmmdq_xmmdq(arg18[0], arg18[0])
                    arg16[0].o = arg15[0].o
                    float temp0_515[0x4]
                    int32_t temp1_31
                    temp0_515, temp1_31 =
                        _mm256_i64gather_ps(arg18[0], *(r12 + temp0_513[0]), arg16[0].o)
                    arg18[0] = temp0_515
                    arg16[0].o = temp1_31
                    arg20 = _mm256_cmpeq_epi32(temp0_513, temp0_513)
                    arg3 = _mm256_add_epi64(arg3, arg17)
                    arg17 = arg26
                    arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                    float temp0_519[0x4]
                    int32_t temp1_32
                    temp0_519, temp1_32 =
                        _mm256_i64gather_ps(arg16[0].o, *(r12 + arg3[0].q), arg22[0].o)
                    arg16[0].o = temp0_519
                    arg22[0].o = temp1_32
                    arg22[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg22[0].o, arg22[0].o)
                    arg3 = _mm256_insertf128_ps(arg21, arg13[0].o, 1)
                    arg21 = arg30
                    zmm1 = _mm256_insertf128_ps(zmm10, zmm1[0].o, 1)
                    zmm10 = arg28
                    arg13 = _mm256_insertf128_ps(arg18, arg16[0].o, 1)
                    arg18 = arg35
                    arg74 = _mm256_maskstore_ps(arg15, arg3)
                    arg75 = _mm256_maskstore_ps(arg15, zmm1)
                    arg76 = _mm256_maskstore_ps(arg15, arg13)
                
                arg3 = arg14 ^ arg20
                arg14[0].o = _mm256_extracti128_si256(arg3, 1)
                arg3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg14[0].o)
                arg14[0].o = arg12[0].o & arg3[0].o
                arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                    arg_260[0].o = arg19[0].o
                    arg12 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg14[0].o), 0x1f), 0x1f)
                    arg20 = _mm256_srai_epi32(_mm256_slli_epi32(arg24, 0x1f), 0x1f)
                    arg21 = arg20 & arg12
                    zmm10 = arg25
                    arg19 = zmm10
                    arg15 = arg32
                    
                    if (_mm256_movemask_ps(arg21) != 0)
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg18 = _mm256_permutevar8x32_ps(data_143442920, arg21)
                        arg13 = _mm256_permutevar8x32_ps(data_143442940, arg21)
                        arg15 = _mm256_add_epi64(
                            __vpaddq_ymmqq_ymmqq_memqq(__vpaddq_ymmqq_ymmqq_memqq(arg36, arg34), 
                                arg27), 
                            zmm1)
                        arg16[0].o = _mm256_extractf128_ps(arg21[0].o, 1)
                        arg17[0].o = zx.o(0)
                        float temp0_546[0x4]
                        int32_t temp1_33
                        temp0_546, temp1_33 =
                            _mm256_i64gather_ps(zx.o(0), *(r12 + arg15[0].q), arg21[0].o)
                        arg17[0].o = temp0_546
                        arg21[0].o = temp1_33
                        arg3 = arg31
                        arg15 = _mm256_add_epi64(
                            __vpaddq_ymmqq_ymmqq_memqq(__vpaddq_ymmqq_ymmqq_memqq(arg3, arg29), 
                                arg_60), 
                            zmm1)
                        arg3[0].o = zx.o(0)
                        float temp0_550[0x4]
                        int32_t temp1_34
                        temp0_550, temp1_34 =
                            _mm256_i64gather_ps(zx.o(0), *(r12 + arg15[0].q), arg16[0].o)
                        arg3[0].o = temp0_550
                        arg16[0].o = temp1_34
                        arg19 = _mm256_blendv_ps(zmm10, _mm256_add_epi64(zmm10, zmm1), arg18)
                        arg18 = arg35
                        arg15 = _mm256_blendv_ps(arg32, _mm256_add_epi64(arg32, zmm1), arg13)
                        arg16 = _mm256_insertf128_ps(arg17, arg3[0].o, 1)
                        arg17 = arg26
                    
                    arg74 = _mm256_maskstore_ps(arg12, _mm256_blendv_ps(arg22, arg16, arg20))
                    zmm1 = __vpbroadcastd_ymmqq_memd(2)
                    arg20 = zmm1 & arg24
                    zmm1 = _mm256_cmpeq_epi32(arg20, zmm1)
                    arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
                    arg16[0].o = arg14[0].o & zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg16[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    arg21 = arg30
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg16[0].o), 0x1f), 0x1f)
                        arg3 = _mm256_permutevar8x32_epi32(data_143442920, zmm1)
                        arg13 = _mm256_permutevar8x32_epi32(data_143442940, zmm1)
                        arg16[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg17[0].o = zx.o(0)
                        float temp0_572[0x4]
                        int32_t temp1_35
                        temp0_572, temp1_35 = _mm256_i64gather_ps(zx.o(0), *arg19[0].q, zmm1[0].o)
                        arg17[0].o = temp0_572
                        zmm1[0].o = temp1_35
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg19 = _mm256_blendv_ps(arg19, _mm256_add_epi64(arg19, zmm1), arg3)
                        arg18 = arg35
                        arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                        float temp0_577[0x4]
                        int32_t temp1_36
                        temp0_577, temp1_36 =
                            _mm256_i64gather_ps(arg3[0].o, *arg15[0].q, arg16[0].o)
                        arg3[0].o = temp0_577
                        arg16[0].o = temp1_36
                        arg15 = _mm256_blendv_ps(arg15, _mm256_add_epi64(arg15, zmm1), arg13)
                        arg16 = _mm256_insertf128_ps(arg17, arg3[0].o, 1)
                        arg17 = arg26
                    
                    arg75 =
                        _mm256_maskstore_ps(arg12, _mm256_cmpeq_epi32(arg20, arg22) & not.32(arg16))
                    arg20 = arg21 & arg24
                    zmm1 = _mm256_cmpeq_epi32(arg20, arg21)
                    arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
                    arg14[0].o &= zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg14[0].o), 0x1f), 0x1f)
                        arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        float temp0_606[0x4]
                        int32_t temp1_37
                        temp0_606, temp1_37 =
                            _mm256_i64gather_ps(arg13[0].o, *arg19[0].q, zmm1[0].o)
                        arg13[0].o = temp0_606
                        zmm1[0].o = temp1_37
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        float temp0_608[0x4]
                        int32_t temp1_38
                        temp0_608, temp1_38 = _mm256_i64gather_ps(zmm1[0].o, *arg15[0].q, arg3[0].o)
                        zmm1[0].o = temp0_608
                        arg3[0].o = temp1_38
                        arg16 = _mm256_insertf128_ps(arg13, zmm1[0].o, 1)
                    
                    zmm1 = _mm256_cmpeq_epi32(arg20, arg22) & not.32(arg16)
                    arg76 = _mm256_maskstore_ps(arg12, zmm1)
                    arg20 = _mm256_cmpeq_epi32(arg20, arg20)
                    zmm10 = arg28
                    arg19[0].o = arg_260[0].o
            
            arg12[0].o = arg19[0].o & arg33[0].o
            arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
            arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) == 0)
                zmm11 = arg53
            else
                arg20[0].o = _mm256_extracti128_si256(arg17, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg17[0].o, arg20[0].o)
                arg14[0].o = arg19[0].o & zmm1[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                    uint32_t temp0_623[0x8] = _mm256_cvtepu16_epi32(arg14[0].o)
                    arg_3a0 = arg22
                    arg_380 = arg22
                    arg_360 = arg22
                    arg_340 = arg22
                    arg_320 = arg22
                    arg_300 = arg22
                    arg12 = arg24
                    arg15 = arg17 & _mm256_srai_epi32(_mm256_slli_epi32(arg12, 0x1f), 0x1f)
                    zmm10 = arg15 & arg23
                    
                    if (_mm256_movemask_ps(zmm10) != 0)
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg3 = _mm256_add_epi64(arg18, zmm1)
                        int64_t temp0_629[0x4] = _mm256_add_epi64(arg40, zmm1)
                        arg12 = data_143442920
                        arg16 = _mm256_permutevar8x32_ps(arg12, zmm10)
                        arg13 = _mm256_blendv_ps(arg40, temp0_629, arg16)
                        arg17[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
                        zmm11 = arg18
                        arg18[0] = zx.o(0)
                        arg12[0].o = zmm10[0].o
                        float temp0_633[0x4]
                        int32_t temp1_39
                        temp0_633, temp1_39 = _mm256_i64gather_ps(zx.o(0), *arg40[0].q, arg12[0].o)
                        arg18[0] = temp0_633
                        arg12[0].o = temp1_39
                        arg12[0].o = arg17[0].o
                        arg40[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg40[0].o, arg40[0].o)
                        float temp0_635[0x4]
                        int32_t temp1_40
                        temp0_635, temp1_40 =
                            _mm256_i64gather_ps(arg40[0].o, *zmm11[0].q, arg12[0].o)
                        arg40[0].o = temp0_635
                        arg12[0].o = temp1_40
                        float temp0_636[0x8] = _mm256_permutevar8x32_ps(data_143442940, zmm10)
                        arg3 = _mm256_blendv_ps(zmm11, arg3, temp0_636)
                        arg_360 =
                            _mm256_maskstore_ps(arg15, _mm256_insertf128_ps(arg18, arg40[0].o, 1))
                        arg14 = _mm256_blendv_ps(arg13, _mm256_add_epi64(arg13, zmm1), arg16)
                        arg40 = arg14
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                        float temp0_643[0x4]
                        int32_t temp1_41
                        temp0_643, temp1_41 = _mm256_i64gather_ps(arg14[0].o, *arg13[0], zmm10[0].o)
                        arg14[0].o = temp0_643
                        zmm10[0].o = temp1_41
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        float temp0_645[0x4]
                        int32_t temp1_42
                        temp0_645, temp1_42 =
                            _mm256_i64gather_ps(arg13[0].o, *arg3[0].q, arg17[0].o)
                        arg13[0].o = temp0_645
                        arg17[0].o = temp1_42
                        arg17 = arg26
                        arg18 = _mm256_blendv_ps(arg3, _mm256_add_epi64(arg3, zmm1), temp0_636)
                        arg12 = _mm256_insertf128_ps(arg14, arg13[0].o, 1)
                        arg_300 = _mm256_maskstore_ps(arg15, arg12)
                    
                    zmm10 = _mm256_slli_epi32(temp0_623, 0x1f)
                    zmm1 = __vpbroadcastd_ymmqq_memd(2)
                    zmm1 = _mm256_cmpeq_epi32(zmm1 & arg24, zmm1)
                    arg15 = zmm1 & arg17
                    zmm1[0].o = _mm256_extracti128_si256(arg15, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
                    arg16[0].o = arg19[0].o & zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg16[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        arg12 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg16[0].o), 0x1f), 0x1f)
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg21 = _mm256_add_epi64(arg18, zmm1)
                        arg17 = arg40
                        int64_t temp0_664[0x4] = _mm256_add_epi64(arg17, zmm1)
                        arg3 = data_143442920
                        arg16 = _mm256_permutevar8x32_epi32(arg3, arg12)
                        arg13 = _mm256_blendv_ps(arg17, temp0_664, arg16)
                        arg3[0].o = _mm256_extracti128_si256(arg12, 1)
                        zmm11 = arg18
                        arg18[0] = __vxorps_xmmdq_xmmdq_xmmdq(arg18[0], arg18[0])
                        arg14[0].o = arg12[0].o
                        float temp0_669[0x4]
                        int32_t temp1_43
                        temp0_669, temp1_43 = _mm256_i64gather_ps(arg18[0], *arg17[0].q, arg14[0].o)
                        arg18[0] = temp0_669
                        arg14[0].o = temp1_43
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                        arg17[0].o = arg3[0].o
                        float temp0_671[0x4]
                        int32_t temp1_44
                        temp0_671, temp1_44 =
                            _mm256_i64gather_ps(arg14[0].o, *zmm11[0].q, arg17[0].o)
                        arg14[0].o = temp0_671
                        arg17[0].o = temp1_44
                        uint32_t temp0_672[0x8] = _mm256_permutevar8x32_epi32(data_143442940, arg12)
                        arg21 = _mm256_blendv_ps(zmm11, arg21, temp0_672)
                        arg_380 =
                            _mm256_maskstore_ps(arg15, _mm256_insertf128_ps(arg18, arg14[0].o, 1))
                        float temp0_677[0x8] =
                            _mm256_blendv_ps(arg13, _mm256_add_epi64(arg13, zmm1), arg16)
                        arg40 = temp0_677
                        temp0_677[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_677[0].o, temp0_677[0].o)
                        float temp0_679[0x4]
                        int32_t temp1_45
                        temp0_679, temp1_45 =
                            _mm256_i64gather_ps(temp0_677[0].o, *arg13[0], arg12[0].o)
                        temp0_677[0].o = temp0_679
                        arg12[0].o = temp1_45
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        float temp0_681[0x4]
                        int32_t temp1_46
                        temp0_681, temp1_46 =
                            _mm256_i64gather_ps(arg12[0].o, *arg21[0].q, arg3[0].o)
                        arg12[0].o = temp0_681
                        arg3[0].o = temp1_46
                        arg18 = _mm256_blendv_ps(arg21, _mm256_add_epi64(arg21, zmm1), temp0_672)
                        arg17 = arg26
                        arg_320 = _mm256_maskstore_ps(arg15, 
                            _mm256_insertf128_ps(temp0_677, arg12[0].o, 1))
                    
                    arg21 = arg30
                    arg14 = _mm256_srai_epi32(zmm10, 0x1f)
                    arg12 = _mm256_cmpeq_epi32(arg21 & arg24, arg21)
                    arg15 = arg12 & arg17
                    arg12[0].o = _mm256_extracti128_si256(arg15, 1)
                    arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
                    arg16[0].o = arg19[0].o & arg12[0].o
                    arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg16[0].o, 0xf)
                    arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                    arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                        arg12 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg16[0].o), 0x1f), 0x1f)
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg3 = _mm256_add_epi64(arg18, zmm1)
                        zmm1 = _mm256_add_epi64(arg40, zmm1)
                        arg13 = _mm256_permutevar8x32_epi32(data_143442920, arg12)
                        zmm11 = arg18
                        arg18 = _mm256_blendv_ps(arg40, zmm1, arg13)
                        zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                        arg16[0].o = zx.o(0)
                        arg17[0].o = arg12[0].o
                        float temp0_703[0x4]
                        int32_t temp1_47
                        temp0_703, temp1_47 = _mm256_i64gather_ps(zx.o(0), *arg40[0].q, arg17[0].o)
                        arg16[0].o = temp0_703
                        arg17[0].o = temp1_47
                        arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                        arg13[0].o = zmm1[0].o
                        float temp0_705[0x4]
                        int32_t temp1_48
                        temp0_705, temp1_48 =
                            _mm256_i64gather_ps(arg17[0].o, *zmm11[0].q, arg13[0].o)
                        arg17[0].o = temp0_705
                        arg13[0].o = temp1_48
                        arg3 = _mm256_blendv_ps(zmm11, arg3, 
                            _mm256_permutevar8x32_epi32(data_143442940, arg12))
                        arg13 = _mm256_insertf128_ps(arg16, arg17[0].o, 1)
                        arg_3a0 = _mm256_maskstore_ps(arg15, arg13)
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        float temp0_711[0x4]
                        int32_t temp1_49
                        temp0_711, temp1_49 =
                            _mm256_i64gather_ps(arg13[0].o, *arg18[0].q, arg12[0].o)
                        arg13[0].o = temp0_711
                        arg12[0].o = temp1_49
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        float temp0_713[0x4]
                        int32_t temp1_50
                        temp0_713, temp1_50 = _mm256_i64gather_ps(arg12[0].o, *arg3[0].q, zmm1[0].o)
                        arg12[0].o = temp0_713
                        zmm1[0].o = temp1_50
                        arg_340 =
                            _mm256_maskstore_ps(arg15, _mm256_insertf128_ps(arg13, arg12[0].o, 1))
                    
                    arg12 = __vpaddq_ymmqq_ymmqq_memqq(arg31, arg29)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(arg36, arg34)
                    arg3 = __vpbroadcastq_ymmqq_memq(4)
                    zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, arg27)
                    arg12 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg12, arg_60), arg3)
                    zmm1 = _mm256_add_epi64(zmm1, arg3)
                    arg3[0].o = zx.o(0)
                    arg13[0].o = arg14[0].o
                    uint32_t temp0_723[0x4]
                    int32_t temp1_51
                    temp0_723, temp1_51 =
                        _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm1[0].q), arg13[0].o)
                    arg3[0].o = temp0_723
                    arg13[0].o = temp1_51
                    zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                    arg13[0].o = zx.o(0)
                    uint32_t temp0_725[0x4]
                    int32_t temp1_52
                    temp0_725, temp1_52 =
                        _mm256_i64gather_epi32(zx.o(0), *(r12 + arg12[0].q), zmm1[0].o)
                    arg13[0].o = temp0_725
                    zmm1[0].o = temp1_52
                    arg12 = _mm256_inserti128_si256(arg3, arg13[0].o, 1)
                    zmm1 = _mm256_srli_epi32(arg12, 0x15)
                    arg3 = _mm256_srli_epi32(arg12, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg15 = arg_320
                    arg13 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg_300, 
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                arg12 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f)), 
                        arg_360)
                    arg12 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg3 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg3, arg12))
                    arg17 = _mm256_broadcast_ss(1023f)
                    arg3 = _mm256_div_ps(arg3, arg17)
                    float temp0_744[0x8] =
                        _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg12)), arg17)
                    arg3 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg3, arg15, arg_380)
                    arg12 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_744, arg_340, arg_3a0)
                    arg74 = _mm256_maskstore_ps(arg14, arg13)
                    arg75 = _mm256_maskstore_ps(arg14, arg3)
                    arg76 = _mm256_maskstore_ps(arg14, arg12)
                    zmm10 = arg28
                    arg17 = arg26
                
                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg17[0].o, arg20[0].o)
                arg12[0].o ^= arg33[0].o
                zmm1[0].o = arg19[0].o & arg12[0].o
                zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                    arg20 = _mm256_cmpeq_epi32(arg20, arg20)
                    zmm11 = arg53
                else
                    uint32_t temp0_755[0x8] = __vpbroadcastd_ymmqq_memd(2)
                    arg20 = __vpcmpeqd_ymmqq_ymmqq_memqq(temp0_755, arg37)
                    arg17[0].o = _mm256_extracti128_si256(arg20, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg20[0].o, arg17[0].o)
                    arg15[0].o = arg19[0].o & zmm1[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                        arg21 = arg30
                        zmm11 = arg53
                    else
                        zmm10 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 0x1f)
                        arg14 = _mm256_srai_epi32(_mm256_slli_epi32(arg24, 0x1f), 0x1f)
                        arg16 = arg14 & zmm10
                        bool cond:5_1 = _mm256_movemask_ps(arg16) == 0
                        arg26[0].o = arg17[0].o
                        
                        if (not(cond:5_1))
                            zmm1 = __vpbroadcastq_ymmqq_memq(2)
                            arg3 = arg32
                            int64_t temp0_770[0x4] = _mm256_add_epi64(arg3, zmm1)
                            arg18 = arg25
                            zmm1 = _mm256_add_epi64(arg18, zmm1)
                            arg17 = _mm256_permutevar8x32_ps(data_143442920, arg16)
                            arg25 = _mm256_blendv_ps(arg18, zmm1, arg17)
                            float temp0_774[0x8] = _mm256_permutevar8x32_ps(data_143442940, arg16)
                            arg32 = _mm256_blendv_ps(arg3, temp0_770, temp0_774)
                            int64_t temp0_776[0x4] = __vpaddq_ymmqq_ymmqq_memqq(arg31, arg29)
                            arg3 = arg36
                            arg16 = __vpaddq_ymmqq_ymmqq_memqq(arg3, arg34)
                            arg18 = __vpbroadcastq_ymmqq_memq(4)
                            arg16 = __vpaddq_ymmqq_ymmqq_memqq(arg16, arg27)
                            int64_t temp0_781[0x4] = _mm256_add_epi64(
                                __vpaddq_ymmqq_ymmqq_memqq(temp0_776, arg_60), arg18)
                            arg16 = _mm256_blendv_ps(arg22, _mm256_add_epi64(arg16, arg18), arg17)
                            float temp0_784[0x8] = _mm256_blendv_ps(arg22, temp0_781, temp0_774)
                            int64_t r8_2 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                            int64_t rcx_4 = arg16[0].q
                            temp0_781[0].o = _mm256_extracti128_si256(arg16, 1)
                            int64_t r10_2 = __vpextrq_gpr64q_xmmdq_immb(temp0_781[0].o, 1)
                            int64_t rdi_1 = temp0_781[0]
                            int64_t rsi_4 = temp0_784[0].q
                            int64_t r11_2 = __vpextrq_gpr64q_xmmdq_immb(temp0_784[0].o, 1)
                            temp0_784[0].o = _mm256_extracti128_si256(temp0_784, 1)
                            int64_t rbx_1 = temp0_784[0].q
                            int64_t rax_102 = __vpextrq_gpr64q_xmmdq_immb(temp0_784[0].o, 1)
                            temp0_784[0].o = zx.o(*(r12 + rcx_4))
                            temp0_784[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_784[0].o, *(r12 + r8_2), 1)
                            temp0_784[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_784[0].o, *(r12 + rdi_1), 2)
                            temp0_784[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_784[0].o, *(r12 + r10_2), 3)
                            temp0_784[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_784[0].o, *(r12 + rsi_4), 4)
                            temp0_784[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_784[0].o, *(r12 + r11_2), 5)
                            temp0_784[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_784[0].o, *(r12 + rbx_1), 6)
                            temp0_784[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_784[0].o, *(r12 + rax_102), 7)
                            zmm1 = _mm256_cvtepu16_epi32(temp0_784[0].o)
                            arg13 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                            arg16 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg13))
                        
                        zmm11 = arg53
                        arg74 = _mm256_maskstore_ps(zmm10, _mm256_blendv_ps(arg22, arg16, arg14))
                        arg16 = temp0_755 & arg24
                        zmm1 = _mm256_cmpeq_epi32(arg16, temp0_755)
                        arg13[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                        arg14[0].o = arg15[0].o & zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        char temp0_885 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                        
                        if (temp0_885 == 0)
                            arg21 = arg30
                            arg18 = arg32
                        else
                            int64_t rax_123
                            
                            if ((temp0_885 & 1) != 0)
                                arg3 = arg25
                                arg13[0].o = arg68
                                arg13[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *arg3[0].q, 0)
                                
                                if ((temp0_885 & 2) != 0)
                                    rax_123 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                    arg13[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_123, 1)
                            else
                                arg13[0].o = arg68
                                arg3 = arg25
                                
                                if ((temp0_885 & 2) != 0)
                                    rax_123 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                    arg13[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_123, 1)
                            arg18 = arg32
                            
                            if ((temp0_885 & 4) == 0)
                                if ((temp0_885 & 8) != 0)
                                    goto label_140191537
                                
                                goto label_1401913cb
                            
                            zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                            arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *zmm1[0].q, 2)
                            
                            if ((temp0_885 & 8) != 0)
                            label_140191537:
                                zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                                int64_t rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                arg13[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_127, 3)
                                arg14 = _mm256_cvtepu16_epi32(arg14[0].o)
                                
                                if ((temp0_885 & 0x10) == 0)
                                    goto label_1401913da
                                
                                goto label_14019155c
                            
                        label_1401913cb:
                            arg14 = _mm256_cvtepu16_epi32(arg14[0].o)
                            
                            if ((temp0_885 & 0x10) == 0)
                            label_1401913da:
                                arg14 = _mm256_slli_epi32(arg14, 0x1f)
                                arg17 = zmm11
                                
                                if ((temp0_885 & 0x20) != 0)
                                    goto label_140191574
                                
                                goto label_1401913ed
                            
                        label_14019155c:
                            arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *arg18[0].q, 4)
                            arg14 = _mm256_slli_epi32(arg14, 0x1f)
                            arg17 = zmm11
                            
                            if ((temp0_885 & 0x20) == 0)
                            label_1401913ed:
                                arg21 = __vpbroadcastq_ymmqq_memq(2)
                                zmm11 = _mm256_srai_epi32(arg14, 0x1f)
                                
                                if ((temp0_885 & 0x40) != 0)
                                    zmm1[0].o = _mm256_extracti128_si256(arg18, 1)
                                    arg13[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *zmm1[0].q, 6)
                            else
                            label_140191574:
                                int64_t rax_129 = __vpextrq_gpr64q_xmmdq_immb(arg18[0], 1)
                                arg13[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *rax_129, 5)
                                arg21 = __vpbroadcastq_ymmqq_memq(2)
                                zmm11 = _mm256_srai_epi32(arg14, 0x1f)
                                
                                if ((temp0_885 & 0x40) != 0)
                                    zmm1[0].o = _mm256_extracti128_si256(arg18, 1)
                                    arg13[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *zmm1[0].q, 6)
                            
                            arg3[0].o = arg13[0].o
                            arg14 = _mm256_add_epi64(arg18, arg21)
                            arg21 = __vpaddq_ymmqq_ymmqq_memqq(arg21, arg25)
                            zmm1 = _mm256_permutevar8x32_epi32(data_143442920, zmm11)
                            arg13 = data_143442940
                            zmm11 = _mm256_permutevar8x32_epi32(arg13, zmm11)
                            
                            if (temp0_885 s< 0)
                                arg13[0].o = _mm256_extracti128_si256(arg18, 1)
                                int64_t rax_125 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_125, 7)
                            
                            arg25 = _mm256_blendv_ps(arg25, arg21, zmm1)
                            arg18 = _mm256_blendv_ps(arg18, arg14, zmm11)
                            arg68 = arg3[0].o
                            zmm1 = _mm256_cvtepu16_epi32(arg3[0].o)
                            arg13 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                            arg14 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg13))
                            arg21 = arg30
                            zmm11 = arg17
                        
                        arg75 = _mm256_maskstore_ps(zmm10, 
                            _mm256_cmpeq_epi32(arg16, arg22) & not.32(arg14))
                        arg16 = arg21 & arg24
                        zmm1 = _mm256_cmpeq_epi32(arg16, arg21)
                        arg13[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                        zmm1[0].o &= arg15[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        char temp0_914 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                        
                        if (temp0_914 == 0)
                            arg17[0].o = arg26[0].o
                        else
                            int64_t rax_131
                            
                            if ((temp0_914 & 1) != 0)
                                arg13 = arg25
                                arg3[0].o = arg67
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg13[0], 0)
                                
                                if ((temp0_914 & 2) != 0)
                                    rax_131 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                    arg3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_131, 1)
                            else
                                arg3[0].o = arg67
                                arg13 = arg25
                                
                                if ((temp0_914 & 2) != 0)
                                    rax_131 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                    arg3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_131, 1)
                            
                            if ((temp0_914 & 4) == 0)
                                if ((temp0_914 & 8) != 0)
                                    goto label_14018dea3
                                
                                goto label_1401915dd
                            
                            zmm1[0].o = _mm256_extracti128_si256(arg13, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 2)
                            
                            if ((temp0_914 & 8) != 0)
                            label_14018dea3:
                                zmm1[0].o = _mm256_extracti128_si256(arg13, 1)
                                int64_t rax_358 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_358, 3)
                                
                                if ((temp0_914 & 0x10) == 0)
                                    goto label_1401915e7
                                
                                goto label_14018dec3
                            
                        label_1401915dd:
                            
                            if ((temp0_914 & 0x10) == 0)
                            label_1401915e7:
                                
                                if ((temp0_914 & 0x20) != 0)
                                    goto label_14018ded2
                                
                                goto label_1401915f1
                            
                        label_14018dec3:
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg18[0].q, 4)
                            
                            if ((temp0_914 & 0x20) != 0)
                            label_14018ded2:
                                int64_t rax_360 = __vpextrq_gpr64q_xmmdq_immb(arg18[0], 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_360, 5)
                                
                                if ((temp0_914 & 0x40) == 0)
                                    goto label_1401915fb
                                
                                goto label_14018dee7
                            
                        label_1401915f1:
                            
                            if ((temp0_914 & 0x40) != 0)
                            label_14018dee7:
                                zmm1[0].o = _mm256_extracti128_si256(arg18, 1)
                                arg3[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 6)
                                
                                if (temp0_914 s< 0)
                                label_14018deff:
                                    zmm1[0].o = _mm256_extracti128_si256(arg18, 1)
                                    int64_t rax_362 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_362, 7)
                            else
                            label_1401915fb:
                                
                                if (temp0_914 s< 0)
                                    goto label_14018deff
                            
                            arg17[0].o = arg26[0].o
                            arg67 = arg3[0].o
                            arg14 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                                _mm256_cvtepu16_epi32(arg3[0].o), 
                                __vpbroadcastd_ymmqq_memd(0xffffff01)))
                        
                        zmm1 = _mm256_cmpeq_epi32(arg16, arg22) & not.32(arg14)
                        arg76 = _mm256_maskstore_ps(zmm10, zmm1)
                        zmm10 = arg28
                    
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg20[0].o, arg17[0].o)
                    arg12[0].o ^= zmm1[0].o
                    arg12[0].o &= arg19[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
                        arg20 = _mm256_cmpeq_epi32(arg20, arg20)
                    else
                        zmm1 = __vpbroadcastd_ymmqq_memd(6)
                        arg14 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm1, arg37)
                        zmm1[0].o = _mm256_extracti128_si256(arg14, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                        arg15[0].o = arg19[0].o & zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm1 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 0x1f)
                            arg74 = _mm256_maskstore_ps(zmm1, arg22)
                            arg75 = _mm256_maskstore_ps(zmm1, arg22)
                            arg76 = _mm256_maskstore_ps(zmm1, arg22)
                        
                        arg20 = _mm256_cmpeq_epi32(arg20, arg20)
                        zmm1 = arg14 ^ arg20
                        arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
                        arg12[0].o &= zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            arg12 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg12[0].o), 0x1f), 0x1f)
                            arg74 = _mm256_maskstore_ps(arg12, arg22)
                            arg75 = _mm256_maskstore_ps(arg12, arg22)
                            arg76 = _mm256_maskstore_ps(arg12, arg22)
            
            arg13 = arg59
            arg14 = arg60.32
            arg15 = arg62.32
            float temp0_966[0x8] = _mm256_sub_ps(arg74, arg13)
            float temp0_967[0x8] = _mm256_sub_ps(arg75, arg14)
            arg3 = _mm256_sub_ps(arg76, arg15)
            arg16 = arg_1e0
            float temp0_969[0x8] = _mm256_fmadd_ps(temp0_966, arg16, arg13)
            zmm1 = _mm256_fmadd_ps(temp0_967, arg16, arg14)
            arg3 = _mm256_fmadd_ps(arg3, arg16, arg15)
            arg13 = arg23
            arg59 = _mm256_maskstore_ps(arg13, temp0_969)
            *arg4 = _mm256_maskstore_ps(arg13, zmm1)
            arg4[1] = _mm256_maskstore_ps(arg13, arg3)
            arg12 = zmm10 ^ arg20
            
            if (_mm256_movemask_ps(arg12) == 0)
                goto label_1401917d7
            
            goto label_1401917c2
        
        zmm11 = arg53
        arg12 = zmm10 ^ arg20
        
        if (_mm256_movemask_ps(arg12) != 0)
        label_1401917c2:
            arg59 = _mm256_maskstore_ps(arg12, arg22)
            *arg4 = _mm256_maskstore_ps(arg12, arg22)
            arg4[1] = _mm256_maskstore_ps(arg12, arg22)
            goto label_1401917d7
        
    label_1401917d7:
        arg12[0].o = arg59[0].o
        arg18[0] = arg59[4].o
        arg13[0].o = arg60
        arg14[0].o = arg61
        arg15[0].o = arg62
        arg16[0].o = arg63
        arg19[0].o = zx.o(0)
        arg17[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg19[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
        arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg15[0].o, 0x28)
        int128_t arg_700 = arg3[0].o
        arg3[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg15[0].o, arg19[0].o)
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg17[0].o)
        int128_t arg_710 = zmm1[0].o
        arg12[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg12[0].o, arg15[0].o, 0xa8)
        int128_t arg_720 = zmm1[0].o
        arg12[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg3[0].o)
        int128_t arg_730 = arg12[0].o
        arg12[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg19[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg18[0], arg14[0].o)
        arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg16[0].o, 0x28)
        int128_t arg_740 = arg3[0].o
        arg3[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg16[0].o, arg19[0].o)
        arg12[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
        int128_t arg_750 = arg12[0].o
        arg12[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg18[0], arg14[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg12[0].o, arg16[0].o, 0xa8)
        int128_t arg_760 = zmm1[0].o
        arg12[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg3[0].o)
        int128_t arg_770 = arg12[0].o
        uint64_t rsi_8 = 0xff
    label_1401918b2:
        uint64_t rax_136 = _tzcnt_u64(rsi_8)
        int64_t rsi_9 = rsi_8 & not.q(1 << (rax_136 u% 0x40))
        uint32_t zmm15[0x8]
        uint32_t arg_6e0[0x8] = zmm15
        arg12[0].o = (&arg_700)[rax_136]
        *(arg11 + sx.q(arg_6e0[zx.q(rax_136.d) & 7]) * 0x30 + 0x20) = arg12[0].o
        uint64_t rcx_14 = _tzcnt_u64(rsi_9)
        arg12[0].o = (&arg_700)[rcx_14]
        *(arg11 + sx.q(arg_6e0[zx.q(rcx_14.d) & 7]) * 0x30 + 0x20) = arg12[0].o
        rsi_8 = rsi_9 & rol.q(-2, rcx_14.b)
        
        if (rsi_8 != 0)
            goto label_1401918b2
        
        arg10 += 8
        
        if (arg10 s>= arg39)
            uint64_t result = zx.q(*(arg6 + 0x988))
            
            if (arg10 s< result.d)
                arg12[0].o = zx.o(arg10)
                arg12 =
                    __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(arg12[0]), data_142fc93a0)
                zmm1[0].o = zx.o(result.d)
                arg15 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), arg12)
                arg3 = _mm256_slli_epi32(arg12, 3)
                zmm15[0].o = zx.o(0)
                uint32_t temp0_1000[0x8]
                int32_t temp1_53
                temp0_1000, temp1_53 = _mm256_i32gather_epi32(zmm15, *(arg45 + arg3[0].q), arg15)
                zmm15 = temp0_1000
                zmm1 = __vpbroadcastd_ymmqq_memd(4)
                arg3 |= zmm1
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                uint32_t temp0_1003[0x8]
                int32_t temp1_54
                temp0_1003, temp1_54 = _mm256_i32gather_epi32(arg14, *(arg45 + arg3[0].q), arg15)
                arg3[0].o = zx.o(arg38)
                arg3 = _mm256_broadcastd_epi32(_mm256_slli_epi32(arg3, 2)[0])
                arg13 = _mm256_mullo_epi32(temp0_1003, arg3)
                arg20[0].o = zx.o(0)
                arg3[0].o = zx.o(0)
                uint32_t temp0_1007[0x8]
                int32_t temp1_55
                temp0_1007, temp1_55 = _mm256_i32gather_epi32(arg3, *(arg46 + arg13[0]), arg15)
                arg3 = temp0_1007
                arg14 = temp1_55
                arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                arg12 = _mm256_cmpeq_epi32(arg3, arg16)
                arg36 = arg15
                arg40 = arg12
                arg17 = arg12 & not.32(arg15)
                arg13[0].o = _mm256_extracti128_si256(arg17, 1)
                arg22[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg17[0].o, arg13[0].o)
                arg13[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg22[0].o, arg12[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(arg13[0].o) != 0)
                    arg14[0].o = zx.o(r12)
                    arg13[0].o = _mm256_extracti128_si256(arg3, 1)
                    arg21[0].o = zx.o(0)
                    uint32_t temp0_1015[0x8]
                    int32_t temp1_56
                    temp0_1015, temp1_56 = _mm256_i32gather_epi32(arg21, *(r12 + arg3[0].q), arg17)
                    arg21 = temp0_1015
                    arg15 = temp1_56
                    arg15[0].o = 4
                    arg14[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg14[0].o, arg15[0].o)
                    arg12 = _mm256_srli_epi32(arg21, 0x1c)
                    arg15 = _mm256_slli_epi32(arg12, 2)
                    arg19[0].o = zx.o(0)
                    arg54.32 = arg17
                    uint32_t temp0_1019[0x8]
                    int32_t temp1_57
                    temp0_1019, temp1_57 =
                        _mm256_i32gather_epi32(arg19, *(&data_143442960 + arg15[0].q), arg17)
                    uint32_t temp0_1020[0x8] = _mm256_srli_epi32(arg21, 0x18)
                    zmm10 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg22[0].o), 0x1f), 0x1f)
                    arg15 =
                        (temp0_1020 & __vpbroadcastd_ymmqq_memd(7)) | _mm256_slli_epi32(arg12, 3)
                    uint32_t temp0_1026[0x8] = __vpbroadcastd_ymmqq_memd(3)
                    arg15 &= zmm10
                    uint64_t r8_3 = zx.q(arg15[0])
                    uint64_t r9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 1))
                    uint64_t r10_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 2))
                    uint64_t r11_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 3))
                    arg15[0].o = _mm256_extracti128_si256(arg15, 1)
                    uint64_t rsi_10 = zx.q(arg15[0])
                    uint64_t rax_148 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 1))
                    uint64_t rdx = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 2))
                    uint64_t rbx_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg15[0].o, 3))
                    arg15[0].o = zx.o(*(r8_3 + &data_143442980))
                    arg15[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(arg15[0].o, *(r9 + &data_143442980), 1)
                    arg15[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(arg15[0].o, *(r10_3 + &data_143442980), 2)
                    arg15[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(arg15[0].o, *(r11_3 + &data_143442980), 3)
                    arg15[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(arg15[0].o, *(rsi_10 + &data_143442980), 4)
                    arg15[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(arg15[0].o, *(rax_148 + &data_143442980), 5)
                    arg15[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(arg15[0].o, *(rdx + &data_143442980), 6)
                    arg15[0].o =
                        __vpinsrb_xmmdq_xmmdq_memb_immb(arg15[0].o, *(rbx_3 + &data_143442980), 7)
                    zmm11 = _mm256_cvtepu8_epi32(arg15[0].q)
                    arg35 = arg12
                    arg12 = _mm256_cmpeq_epi32(arg12, temp0_1026)
                    arg15[0].o = _mm256_extracti128_si256(arg12, 1)
                    arg43[0].o = arg15[0].o
                    arg15[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg15[0].o)
                    arg30 = arg12
                    arg16 ^= arg12
                    temp0_1026[0].o = _mm256_extracti128_si256(arg16, 1)
                    arg16[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg16[0].o, temp0_1026[0].o)
                    temp0_1026[0].o = arg16[0].o & arg22[0].o
                    arg16[0].o = __vpsllw_xmmdq_xmmdq_immb(temp0_1026[0].o, 0xf)
                    arg16[0].o = __vpsraw_xmmdq_xmmdq_immb(arg16[0].o, 0xf)
                    arg16[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg16[0].o, arg12[0].o)
                    char temp0_1050 = __vpmovmskb_gpr32d_xmmdq(arg16[0].o)
                    arg16[0].o = zx.o(0)
                    
                    if (temp0_1050 != 0)
                        arg16 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(temp0_1026[0].o), 0x1f), 0x1f)
                            & zmm11
                    
                    arg26 = _mm256_cvtepi32_epi64(arg3[0].o)
                    arg12 = _mm256_cvtepi32_epi64(arg13[0].o)
                    arg37 = arg12
                    arg3 = _mm256_broadcastq_epi64(arg14[0].q)
                    arg18 = arg21 & data_143442840
                    arg13 = zmm10 & temp0_1019
                    arg14[0].o = arg22[0].o & arg15[0].o
                    arg15[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                    arg15[0].o = __vpsraw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
                    arg15[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
                    char temp0_1060 = __vpmovmskb_gpr32d_xmmdq(arg15[0].o)
                    arg19 = _mm256_broadcast_ss(1.40129846e-45f)
                    int32_t rdi_3 = *(arg6 + 0x968)
                    
                    if (temp0_1060 == 0)
                        arg14[0].o = zx.o(0)
                    else
                        arg15 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg14[0].o), 0x1f)
                        arg14 = _mm256_blendv_ps(arg20, zmm11, arg15)
                        arg16 = _mm256_blendv_ps(arg16, arg19, arg15)
                    
                    arg12 = _mm256_mullo_epi32(arg16, arg13)
                    arg25 = arg12
                    zmm10 = _mm256_madd_epi16(arg14, zmm10 & zmm1)
                    zmm11 = __vpaddq_ymmqq_ymmqq_memqq(arg3, arg37)
                    arg17 = __vpaddq_ymmqq_ymmqq_memqq(arg3, arg26)
                    zmm1 = _mm256_cmpgt_epi32(arg18, arg19)
                    arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
                    zmm1[0].o &= arg22[0].o
                    arg3[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    arg3[0].o = __vpsraw_xmmdq_xmmdq_immb(arg3[0].o, 0xf)
                    arg3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
                    arg24 = arg21
                    arg44 = arg17
                    arg34 = zmm11
                    
                    if (__vpmovmskb_gpr32d_xmmdq(arg3[0].o) == 0)
                        zmm11[0].o = zx.o(0)
                        arg12[0].o = zx.o(0)
                        arg27 = arg12
                    else
                        arg12 = arg21 & __vpbroadcastd_ymmqq_memd(0x8000000)
                        arg3[0].o = zx.o(0)
                        arg3 = _mm256_cmpeq_epi32(arg12, arg3)
                        arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                        arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
                        arg13[0].o = zmm1[0].o & arg12[0].o
                        arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
                        arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                        arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) == 0)
                            arg12[0].o = zx.o(0)
                            __builtin_memset(&__return_addr, 0, 0x10)
                            arg15[0].o = zx.o(0)
                            arg16[0].o = zx.o(0)
                            arg12[0].o = zx.o(0)
                            arg27 = arg12
                            arg20[0].o = zx.o(0)
                        else
                            arg14[0].o = zx.o(0)
                            arg12[0].o = zx.o(0)
                            arg15[0].o = zx.o(*(arg6 + 0x978))
                            
                            if (zx.o(0) f>= arg15[0])
                                arg12[0].o = zx.o(0)
                                __builtin_memset(&__return_addr, 0, 0x10)
                                arg15[0].o = zx.o(0)
                                arg16[0].o = zx.o(0)
                                arg12[0].o = zx.o(0)
                                arg27 = arg12
                            else
                                arg16 = _mm256_add_epi32(arg18, _mm256_cmpeq_epi32(arg12, arg12))
                                
                                if (arg15[0].o f>= 1f)
                                    arg12 = _mm256_srai_epi32(
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 
                                        0x1f) & arg16
                                    arg15 = arg12
                                    arg16 = arg12
                                    __return_addr.32 = arg12
                                    arg27 = arg12
                                else
                                    arg20 = arg19
                                    arg19 = _mm256_mul_ps(_mm256_broadcastd_epi32(arg15[0]), 
                                        _mm256_cvtepi32_ps(arg16))
                                    float temp0_1090[0x8] = _mm256_round_ps(arg19, 9)
                                    arg12 = _mm256_min_epi32(arg16, _mm256_cvttps_epi32(temp0_1090))
                                    arg14 =
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f)
                                    arg15 = _mm256_srai_epi32(arg14, 0x1f)
                                    arg12 &= arg15
                                    __return_addr.32 = arg12
                                    arg14[0].o = zx.o(0)
                                    
                                    if (*(arg6 + 0x980) != 1)
                                        arg14 = _mm256_sub_ps(arg19, temp0_1090)
                                    
                                    arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                                    arg19 = __return_addr.32
                                    arg16 = arg15
                                        & _mm256_min_epi32(_mm256_sub_epi32(arg19, arg12), arg16)
                                    arg15 = arg19
                                    arg27 = arg16
                                    arg19 = arg20
                                    zmm10 = zmm10
                                    arg18 = arg18
                            
                            arg20 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 0x1f)
                                & arg14
                        
                        arg14 = _mm256_cmpeq_epi32(arg14, arg14)
                        arg12 = arg3 ^ arg14
                        arg3[0].o = _mm256_extracti128_si256(arg12, 1)
                        arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg3[0].o)
                        zmm1[0].o &= arg12[0].o
                        arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                        arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) == 0)
                            zmm11 = arg15
                        else
                            arg23 = arg16
                            arg3 = arg18
                            arg12 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f)
                            arg33 = arg12
                            zmm1 = _mm256_srai_epi32(arg12, 0x1f)
                            arg28 = arg18
                            arg12 = _mm256_cmpeq_epi32(arg18, _mm256_min_epu32(arg18, arg19))
                            arg3[0].o = zx.o(0)
                            arg13[0].o = *(arg6 + 0x978)
                            int32_t rax_154
                            rax_154.b = arg3[0].o f>= arg13[0].d
                            arg3[0].o = zx.o(neg.d(rax_154))
                            arg16 = arg12 | _mm256_broadcastd_epi32(arg3[0])
                            arg3 = arg16 & zmm1
                            
                            if (_mm256_movemask_ps(arg3) == 0)
                                arg12 = arg27
                            else
                                arg12[0].o = zx.o(0)
                                arg15 = _mm256_blendv_ps(__return_addr.32, arg12, arg3)
                                arg13 = _mm256_blendv_ps(arg23, arg12, arg3)
                                __return_addr.32 = arg15
                                arg23 = arg13
                                arg12 = arg13
                            
                            arg13 = arg16 & not.32(zmm1)
                            int32_t temp0_1122 = _mm256_movemask_ps(arg13)
                            zmm1[0].o = zx.o(0)
                            
                            if (temp0_1122 == 0)
                                arg27 = arg12
                                zmm11 = arg15
                                arg17 = arg33
                            else
                                arg_60 = arg16
                                arg3 = arg28
                                arg18 = _mm256_add_epi32(arg3, arg14)
                                arg16[0].o = *(arg6 + 0x978)
                                
                                if (arg16[0].o f>= 1f)
                                    zmm11 = _mm256_blendv_ps(__return_addr.32, arg18, arg13)
                                    arg27 = _mm256_blendv_ps(arg23, arg18, arg13)
                                    arg17 = arg33
                                else
                                    arg12[0].o = _mm256_extracti128_si256(zmm10, 1)
                                    arg12 = _mm256_cvtepu32_epi64(arg12[0].o)
                                    zmm1 = _mm256_cvtepu32_epi64(zmm10[0].o)
                                    int32_t temp0_1127[0x8] =
                                        __vpmulld_ymmqq_ymmqq_memqq(arg3, arg25)
                                    arg14[0].o = _mm256_extracti128_si256(temp0_1127, 1)
                                    zmm1 = _mm256_add_epi64(arg17, zmm1)
                                    arg12 = _mm256_add_epi64(zmm11, arg12)
                                    arg15 = __vpbroadcastq_ymmqq_memq(3)
                                    arg3 = _mm256_cvtepi32_epi64(temp0_1127[0].o)
                                    arg14 = _mm256_cvtepi32_epi64(arg14[0].o)
                                    zmm1 = _mm256_add_epi64(arg3, _mm256_add_epi64(zmm1, arg15))
                                    arg12 = _mm256_add_epi64(arg14, _mm256_add_epi64(arg12, arg15))
                                    arg3 = __vpbroadcastq_ymmqq_memq(-4)
                                    arg29 = arg12 & arg3
                                    arg14 = zmm1 & arg3
                                    int32_t rbx_4 = rdi_3 - 2
                                    float temp0_1139[0x8] = _mm256_broadcastss_ps(arg16[0].o)
                                    float temp0_1140[0x8] = _mm256_cvtepi32_ps(arg18)
                                    float temp0_1141[0x8] = _mm256_mul_ps(temp0_1139, temp0_1140)
                                    temp0_1140[0].o = arg21[0].o
                                    temp0_1140[0] = float.s(rdi_3 - 1)
                                    arg17[0].o = temp0_1140[0].o f* arg16[0]
                                    int32_t rax_158 = int.d(arg17[0])
                                    int32_t rax_159 = rax_158 & not.d(rax_158 s>> 0x1f)
                                    
                                    if (rbx_4 s> rax_159)
                                        rbx_4 = rax_159
                                    
                                    arg12 = _mm256_cvttps_epi32(temp0_1141)
                                    temp0_1140[0].o =
                                        __vxorps_xmmdq_xmmdq_xmmdq(temp0_1140[0].o, temp0_1140[0].o)
                                    arg27 = arg18
                                    arg18 =
                                        _mm256_min_epi32(_mm256_max_epi32(arg12, temp0_1140), arg18)
                                    arg31 = arg20
                                    arg53[0].o = arg22[0].o
                                    arg55 = arg19
                                    arg32 = zmm10
                                    arg_260[0].o = arg17[0].o
                                    
                                    if (rdi_3 s< 0x100)
                                        arg12 = _mm256_cvtepi32_epi64(arg18[0])
                                        arg3 = _mm256_add_epi64(arg14, arg12)
                                        char rdx_4 = temp0_1122.b
                                        
                                        if ((rdx_4 & 1) == 0)
                                            if ((rdx_4 & 2) != 0)
                                                goto label_140195031
                                            
                                            goto label_140192618
                                        
                                        temp0_1140[0].o = __vpbroadcastb_xmmdq_memb(*arg3[0].q)
                                        
                                        if ((rdx_4 & 2) != 0)
                                        label_140195031:
                                            uint32_t rax_315 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                                            temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                temp0_1140[0].o, rax_315, 1)
                                            arg15[0].o = _mm256_extracti128_si256(arg18, 1)
                                            
                                            if ((rdx_4 & 4) == 0)
                                                goto label_140192627
                                            
                                            goto label_140195048
                                        
                                    label_140192618:
                                        arg15[0].o = _mm256_extracti128_si256(arg18, 1)
                                        
                                        if ((rdx_4 & 4) == 0)
                                        label_140192627:
                                            arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                            
                                            if ((rdx_4 & 8) != 0)
                                                goto label_140195069
                                            
                                            goto label_140192635
                                        
                                    label_140195048:
                                        arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                        temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                            temp0_1140[0].o, zx.d(*arg12[0].q), 2)
                                        arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                        
                                        if ((rdx_4 & 8) != 0)
                                        label_140195069:
                                            arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                            uint32_t rax_319 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                            temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                temp0_1140[0].o, rax_319, 3)
                                            arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                            
                                            if ((rdx_4 & 0x10) == 0)
                                                goto label_140192647
                                            
                                            goto label_140195097
                                        
                                    label_140192635:
                                        arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                        
                                        if ((rdx_4 & 0x10) == 0)
                                        label_140192647:
                                            
                                            if ((rdx_4 & 0x20) != 0)
                                                goto label_1401950ab
                                            
                                            goto label_140192650
                                        
                                    label_140195097:
                                        temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                            temp0_1140[0].o, zx.d(*arg3[0].q), 4)
                                        
                                        if ((rdx_4 & 0x20) != 0)
                                        label_1401950ab:
                                            uint32_t rax_323 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                                            temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                temp0_1140[0].o, rax_323, 5)
                                            
                                            if ((rdx_4 & 0x40) == 0)
                                                goto label_140192659
                                            
                                            goto label_1401950bc
                                        
                                    label_140192650:
                                        
                                        if ((rdx_4 & 0x40) != 0)
                                        label_1401950bc:
                                            arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                            temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                temp0_1140[0].o, zx.d(*arg12[0].q), 6)
                                            
                                            if (temp0_1122.b s< 0)
                                            label_1401950d7:
                                                arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                                uint32_t rax_327 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                                temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    temp0_1140[0].o, rax_327, 7)
                                        else
                                        label_140192659:
                                            
                                            if (temp0_1122.b s< 0)
                                                goto label_1401950d7
                                        
                                        arg12[0].o = temp0_1140[0].o & data_142fc92e0
                                        arg12 = _mm256_cvtepu16_epi32(arg12[0].o)
                                        temp0_1140[0].o = zx.o(rbx_4)
                                        float temp0_1258[0x8] =
                                            _mm256_broadcastd_epi32(temp0_1140[0])
                                        zmm1 = _mm256_cmpgt_epi32(arg12, temp0_1258)
                                        arg17 = _mm256_cmpeq_epi32(arg17, arg17)
                                        arg21 = zmm1 ^ arg17
                                        arg19 = arg18
                                        
                                        if (_mm256_movemask_ps(zmm1 & not.32(arg13)) != 0)
                                            arg19 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg18, 
                                                arg27, arg21)
                                            arg22 = _mm256_sub_epi32(arg18, arg17)
                                            arg20 = zmm1 & not.32(_mm256_cmpgt_epi32(arg28, arg22))
                                            arg16 = arg13 & arg20
                                            int32_t i = _mm256_movemask_ps(arg16)
                                            
                                            if (i != 0)
                                                zmm1 = arg18
                                                
                                                do
                                                    zmm10 = arg22
                                                    arg12 = _mm256_cvtepi32_epi64(zmm10[0].o)
                                                    int64_t temp0_1282[0x4] =
                                                        _mm256_add_epi64(arg14, arg12)
                                                    char temp0_1283 = _mm256_movemask_ps(arg16)
                                                    
                                                    if ((temp0_1283 & 1) == 0)
                                                        if ((temp0_1283 & 2) != 0)
                                                            goto label_1401926f1
                                                        
                                                        goto label_1401927e6
                                                    
                                                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg3[0].o, zx.d(*temp0_1282[0]), 0)
                                                    
                                                    if ((temp0_1283 & 2) != 0)
                                                    label_1401926f1:
                                                        uint32_t rax_186 = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(
                                                            temp0_1282[0].o, 1))
                                                        arg3[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            arg3[0].o, rax_186, 1)
                                                        arg15[0].o =
                                                            _mm256_extracti128_si256(zmm10, 1)
                                                        
                                                        if ((temp0_1283 & 4) == 0)
                                                            goto label_1401927f6
                                                        
                                                        goto label_140192709
                                                    
                                                label_1401927e6:
                                                    arg15[0].o = _mm256_extracti128_si256(zmm10, 1)
                                                    
                                                    if ((temp0_1283 & 4) == 0)
                                                    label_1401927f6:
                                                        arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                                        
                                                        if ((temp0_1283 & 8) != 0)
                                                            goto label_14019272b
                                                        
                                                        goto label_140192805
                                                    
                                                label_140192709:
                                                    arg12[0].o =
                                                        _mm256_extracti128_si256(temp0_1282, 1)
                                                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg3[0].o, zx.d(*arg12[0].q), 2)
                                                    arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                                    
                                                    if ((temp0_1283 & 8) != 0)
                                                    label_14019272b:
                                                        arg12[0].o =
                                                            _mm256_extracti128_si256(temp0_1282, 1)
                                                        uint32_t rax_190 = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 
                                                            1))
                                                        arg3[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            arg3[0].o, rax_190, 3)
                                                        arg22 =
                                                            __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                                        
                                                        if ((temp0_1283 & 0x10) == 0)
                                                            goto label_140192818
                                                        
                                                        goto label_14019275a
                                                    
                                                label_140192805:
                                                    arg22 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                                    
                                                    if ((temp0_1283 & 0x10) == 0)
                                                    label_140192818:
                                                        
                                                        if ((temp0_1283 & 0x20) != 0)
                                                            goto label_14019276f
                                                        
                                                        goto label_140192822
                                                    
                                                label_14019275a:
                                                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg3[0].o, zx.d(*arg22[0]), 4)
                                                    
                                                    if ((temp0_1283 & 0x20) != 0)
                                                    label_14019276f:
                                                        uint32_t rax_194 = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(arg22[0].o, 
                                                            1))
                                                        arg3[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            arg3[0].o, rax_194, 5)
                                                        
                                                        if ((temp0_1283 & 0x40) == 0)
                                                            goto label_14019282c
                                                        
                                                        goto label_140192781
                                                    
                                                label_140192822:
                                                    
                                                    if ((temp0_1283 & 0x40) != 0)
                                                    label_140192781:
                                                        arg12[0].o =
                                                            _mm256_extracti128_si256(arg22, 1)
                                                        arg3[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            arg3[0].o, zx.d(*arg12[0].q), 6)
                                                        
                                                        if (temp0_1283 s< 0)
                                                        label_14019279d:
                                                            arg12[0].o =
                                                                _mm256_extracti128_si256(arg22, 1)
                                                            uint32_t rax_198 = zx.d(*
                                                                __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 
                                                                1))
                                                            arg3[0].o =
                                                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                                arg3[0].o, rax_198, 7)
                                                    else
                                                    label_14019282c:
                                                        
                                                        if (temp0_1283 s< 0)
                                                            goto label_14019279d
                                                    
                                                    arg12[0].o = arg3[0].o & data_142fc92e0
                                                    arg16 = _mm256_cmpgt_epi32(
                                                        _mm256_cvtepu16_epi32(arg12[0].o), 
                                                        temp0_1258) & arg20
                                                    arg15[0].o = zx.o(0)
                                                    
                                                    if (_mm256_movemask_ps(arg16 & arg13) != i)
                                                        arg15 = arg16 ^ arg20
                                                    
                                                    arg19 = _mm256_blendv_ps(arg19, zmm1, arg16)
                                                    arg22 = __vpsubd_ymmqq_ymmqq_memqq(zmm10, 
                                                        data_142fc9420)
                                                    arg20 = _mm256_cmpgt_epi32(arg28, arg22) & arg15
                                                    arg16 = arg20 & arg13
                                                    i = _mm256_movemask_ps(arg16)
                                                    zmm1 = zmm10
                                                while (i != 0)
                                        
                                        if (_mm256_movemask_ps(_mm256_andnot_ps(arg21, arg13)) != 0)
                                            arg12 = arg21 ^ arg17
                                            arg15[0].o = zx.o(0)
                                            arg19 = _mm256_blendv_ps(arg19, arg15, arg12)
                                            zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
                                            arg3 = _mm256_add_epi32(arg18, zmm1)
                                            arg15 = _mm256_cmpgt_epi32(arg3, arg15)
                                            arg22 = arg15 & arg12
                                            arg16 = arg22 & arg13
                                            int32_t i_1 = _mm256_movemask_ps(arg16)
                                            
                                            if (i_1 != 0)
                                                arg18[0] = data_142fc92e0
                                                
                                                do
                                                    arg12 = _mm256_cvtepi32_epi64(arg3[0].o)
                                                    int64_t temp0_1317[0x4] =
                                                        _mm256_add_epi64(arg14, arg12)
                                                    char temp0_1318 = _mm256_movemask_ps(arg16)
                                                    
                                                    if ((temp0_1318 & 1) == 0)
                                                        if ((temp0_1318 & 2) != 0)
                                                            goto label_1401928fd
                                                        
                                                        goto label_1401929e1
                                                    
                                                    zmm10[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm10[0].o, zx.d(*temp0_1317[0]), 0)
                                                    
                                                    if ((temp0_1318 & 2) != 0)
                                                    label_1401928fd:
                                                        uint32_t rax_204 = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(
                                                            temp0_1317[0].o, 1))
                                                        zmm10[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            zmm10[0].o, rax_204, 1)
                                                        arg15[0].o =
                                                            _mm256_extracti128_si256(arg3, 1)
                                                        
                                                        if ((temp0_1318 & 4) == 0)
                                                            goto label_1401929f1
                                                        
                                                        goto label_140192915
                                                    
                                                label_1401929e1:
                                                    arg15[0].o = _mm256_extracti128_si256(arg3, 1)
                                                    
                                                    if ((temp0_1318 & 4) == 0)
                                                    label_1401929f1:
                                                        arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                                        
                                                        if ((temp0_1318 & 8) != 0)
                                                            goto label_140192937
                                                        
                                                        goto label_140192a00
                                                    
                                                label_140192915:
                                                    arg12[0].o =
                                                        _mm256_extracti128_si256(temp0_1317, 1)
                                                    zmm10[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm10[0].o, zx.d(*arg12[0].q), 2)
                                                    arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                                    
                                                    if ((temp0_1318 & 8) != 0)
                                                    label_140192937:
                                                        arg12[0].o =
                                                            _mm256_extracti128_si256(temp0_1317, 1)
                                                        uint32_t rax_208 = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 
                                                            1))
                                                        zmm10[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            zmm10[0].o, rax_208, 3)
                                                        arg20 =
                                                            __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                                        
                                                        if ((temp0_1318 & 0x10) == 0)
                                                            goto label_140192a13
                                                        
                                                        goto label_140192966
                                                    
                                                label_140192a00:
                                                    arg20 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                                    
                                                    if ((temp0_1318 & 0x10) == 0)
                                                    label_140192a13:
                                                        
                                                        if ((temp0_1318 & 0x20) != 0)
                                                            goto label_14019297b
                                                        
                                                        goto label_140192a1d
                                                    
                                                label_140192966:
                                                    zmm10[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm10[0].o, zx.d(*arg20[0]), 4)
                                                    
                                                    if ((temp0_1318 & 0x20) != 0)
                                                    label_14019297b:
                                                        uint32_t rax_212 = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(arg20[0].o, 
                                                            1))
                                                        zmm10[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            zmm10[0].o, rax_212, 5)
                                                        
                                                        if ((temp0_1318 & 0x40) == 0)
                                                            goto label_140192a27
                                                        
                                                        goto label_14019298d
                                                    
                                                label_140192a1d:
                                                    
                                                    if ((temp0_1318 & 0x40) != 0)
                                                    label_14019298d:
                                                        arg12[0].o =
                                                            _mm256_extracti128_si256(arg20, 1)
                                                        zmm10[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            zmm10[0].o, zx.d(*arg12[0].q), 6)
                                                        
                                                        if (temp0_1318 s< 0)
                                                        label_1401929a9:
                                                            arg12[0].o =
                                                                _mm256_extracti128_si256(arg20, 1)
                                                            uint16_t rax_216[0x2] = zx.d(*
                                                                __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 
                                                                1))
                                                            zmm10[0].o =
                                                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                                zmm10[0].o, rax_216, 7)
                                                    else
                                                    label_140192a27:
                                                        
                                                        if (temp0_1318 s< 0)
                                                            goto label_1401929a9
                                                    
                                                    arg12[0].o = zmm10[0].o & arg18[0]
                                                    arg16 = _mm256_cmpgt_epi32(
                                                        _mm256_cvtepu16_epi32(arg12[0].o), 
                                                        temp0_1258) & not.32(arg22)
                                                    arg15[0].o = zx.o(0)
                                                    int32_t temp0_1324 =
                                                        _mm256_movemask_ps(arg16 & arg13)
                                                    arg17[0].o = zx.o(0)
                                                    
                                                    if (temp0_1324 != i_1)
                                                        arg17 = arg16 ^ arg22
                                                    
                                                    arg19 = _mm256_blendv_ps(arg19, arg3, arg16)
                                                    arg3 = _mm256_add_epi32(arg3, zmm1)
                                                    arg22 = _mm256_cmpgt_epi32(arg3, arg15) & arg17
                                                    arg16 = arg22 & arg13
                                                    i_1 = _mm256_movemask_ps(arg16)
                                                while (i_1 != 0)
                                        
                                        arg16 = arg_60
                                        zmm11 = _mm256_blendv_ps(__return_addr.32, arg19, arg13)
                                        arg12 = _mm256_cvtepi32_epi64(zmm11[0].o)
                                        arg3 = _mm256_add_epi64(arg14, arg12)
                                        
                                        if ((rdx_4 & 1) != 0)
                                            zmm1[0].o = __vpbroadcastb_xmmdq_memb(*arg3[0].q)
                                        
                                        arg20 = arg31
                                        arg22[0].o = arg53[0].o
                                        arg19 = arg55
                                        zmm10 = arg32
                                        
                                        if ((rdx_4 & 2) == 0)
                                            arg21 = arg24
                                            arg15[0].o = _mm256_extracti128_si256(zmm11, 1)
                                            
                                            if ((rdx_4 & 4) != 0)
                                                goto label_140195113
                                            
                                            goto label_140192aea
                                        
                                        uint32_t rax_329 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_329, 1)
                                        arg21 = arg24
                                        arg15[0].o = _mm256_extracti128_si256(zmm11, 1)
                                        
                                        if ((rdx_4 & 4) != 0)
                                        label_140195113:
                                            arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, zx.d(*arg12[0].q), 2)
                                            arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                            
                                            if ((rdx_4 & 8) == 0)
                                                goto label_140192af8
                                            
                                            goto label_140195134
                                        
                                    label_140192aea:
                                        arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                        
                                        if ((rdx_4 & 8) == 0)
                                        label_140192af8:
                                            arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                            
                                            if ((rdx_4 & 0x10) != 0)
                                                goto label_140195162
                                            
                                            goto label_140192b0a
                                        
                                    label_140195134:
                                        arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                        uint32_t rax_333 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_333, 3)
                                        arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                        
                                        if ((rdx_4 & 0x10) != 0)
                                        label_140195162:
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, zx.d(*arg3[0].q), 4)
                                            
                                            if ((rdx_4 & 0x20) == 0)
                                                goto label_140192b13
                                            
                                            goto label_140195176
                                        
                                    label_140192b0a:
                                        
                                        if ((rdx_4 & 0x20) == 0)
                                        label_140192b13:
                                            
                                            if ((rdx_4 & 0x40) != 0)
                                                goto label_140195187
                                            
                                            goto label_140192b1c
                                        
                                    label_140195176:
                                        uint32_t rax_337 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_337, 5)
                                        
                                        if ((rdx_4 & 0x40) == 0)
                                        label_140192b1c:
                                            
                                            if (temp0_1122.b s< 0)
                                            label_1401951a2:
                                                arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                                uint32_t rax_341 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, rax_341, 7)
                                        else
                                        label_140195187:
                                            arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, zx.d(*arg12[0].q), 6)
                                            
                                            if (temp0_1122.b s< 0)
                                                goto label_1401951a2
                                        
                                        arg15 = _mm256_blendv_ps(arg23, 
                                            _mm256_sub_epi32(zmm11, 
                                                _mm256_cmpeq_epi32(arg12, arg12)), 
                                            arg13)
                                        arg3 = _mm256_cmpgt_epi32(arg28, arg15) & not.32(arg13)
                                        
                                        if (_mm256_movemask_ps(arg3) != 0)
                                            arg15 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg15, 
                                                arg27, arg3)
                                        
                                        arg17 = arg33
                                        arg27 = arg15
                                        int64_t temp0_1343[0x4] = _mm256_add_epi64(arg14, 
                                            _mm256_cvtepi32_epi64(arg15[0].o))
                                        
                                        if ((rdx_4 & 1) == 0)
                                            if ((rdx_4 & 2) != 0)
                                                goto label_1401951d4
                                            
                                            goto label_140192b89
                                        
                                        arg3[0].o = __vpbroadcastb_xmmdq_memb(*temp0_1343[0])
                                        
                                        if ((rdx_4 & 2) != 0)
                                        label_1401951d4:
                                            uint32_t rax_344 = zx.d(
                                                *__vpextrq_gpr64q_xmmdq_immb(temp0_1343[0].o, 1))
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg3[0].o, rax_344, 1)
                                            arg12 = arg27
                                            arg14[0].o = _mm256_extracti128_si256(arg12, 1)
                                            
                                            if ((rdx_4 & 4) == 0)
                                                goto label_140192ba1
                                            
                                            goto label_1401951f4
                                        
                                    label_140192b89:
                                        arg12 = arg27
                                        arg14[0].o = _mm256_extracti128_si256(arg12, 1)
                                        
                                        if ((rdx_4 & 4) == 0)
                                        label_140192ba1:
                                            arg14 = _mm256_cvtepi32_epi64(arg14[0].o)
                                            
                                            if ((rdx_4 & 8) != 0)
                                                goto label_140195215
                                            
                                            goto label_140192baf
                                        
                                    label_1401951f4:
                                        arg12[0].o = _mm256_extracti128_si256(temp0_1343, 1)
                                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, 
                                            zx.d(*arg12[0].q), 2)
                                        arg14 = _mm256_cvtepi32_epi64(arg14[0].o)
                                        
                                        if ((rdx_4 & 8) != 0)
                                        label_140195215:
                                            arg12[0].o = _mm256_extracti128_si256(temp0_1343, 1)
                                            uint32_t rax_348 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg3[0].o, rax_348, 3)
                                            arg13 = __vpaddq_ymmqq_ymmqq_memqq(arg14, arg29)
                                            
                                            if ((rdx_4 & 0x10) == 0)
                                                goto label_140192bc1
                                            
                                            goto label_140195243
                                        
                                    label_140192baf:
                                        arg13 = __vpaddq_ymmqq_ymmqq_memqq(arg14, arg29)
                                        
                                        if ((rdx_4 & 0x10) != 0)
                                        label_140195243:
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg3[0].o, zx.d(*arg13[0]), 4)
                                            
                                            if ((rdx_4 & 0x20) != 0)
                                            label_140195257:
                                                uint32_t rax_352 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg3[0].o, rax_352, 5)
                                                
                                                if ((rdx_4 & 0x40) == 0)
                                                    goto label_140192bd3
                                                
                                                goto label_140195268
                                        else
                                        label_140192bc1:
                                            
                                            if ((rdx_4 & 0x20) != 0)
                                                goto label_140195257
                                        
                                        if ((rdx_4 & 0x40) != 0)
                                        label_140195268:
                                            arg12[0].o = _mm256_extracti128_si256(arg13, 1)
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg3[0].o, zx.d(*arg12[0].q), 6)
                                            zmm1[0].o &= data_142fc92e0
                                            
                                            if (temp0_1122.b s< 0)
                                            label_14019528b:
                                                arg12[0].o = _mm256_extracti128_si256(arg13, 1)
                                                uint32_t rax_356 = zx.d(
                                                    *__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg3[0].o, rax_356, 7)
                                        else
                                        label_140192bd3:
                                            zmm1[0].o &= data_142fc92e0
                                            
                                            if (temp0_1122.b s< 0)
                                                goto label_14019528b
                                        
                                        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                                        zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                        arg12[0].o = arg3[0].o & data_142fc92e0
                                        arg3 = _mm256_cvtepu16_epi32(arg12[0].o)
                                    else
                                        arg16 = _mm256_add_epi32(arg18, arg18)
                                        arg12 = _mm256_cvtepi32_epi64(arg16[0].o)
                                        arg3 = _mm256_add_epi64(arg14, arg12)
                                        char rdx_3 = temp0_1122.b
                                        
                                        if ((rdx_3 & 1) == 0)
                                            if ((rdx_3 & 2) != 0)
                                                goto label_140194df5
                                            
                                            goto label_14019201b
                                        
                                        temp0_1140[0].o = __vpbroadcastw_xmmdq_memw(*arg3[0].q)
                                        
                                        if ((rdx_3 & 2) != 0)
                                        label_140194df5:
                                            int64_t rax_291 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                            temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                temp0_1140[0].o, *rax_291, 1)
                                            arg15[0].o = _mm256_extracti128_si256(arg16, 1)
                                            
                                            if ((rdx_3 & 4) == 0)
                                                goto label_14019202a
                                            
                                            goto label_140194e0f
                                        
                                    label_14019201b:
                                        arg15[0].o = _mm256_extracti128_si256(arg16, 1)
                                        
                                        if ((rdx_3 & 4) == 0)
                                        label_14019202a:
                                            arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                            
                                            if ((rdx_3 & 8) != 0)
                                                goto label_140194e2d
                                            
                                            goto label_140192038
                                        
                                    label_140194e0f:
                                        arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                        temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            temp0_1140[0].o, *arg12[0].q, 2)
                                        arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                        
                                        if ((rdx_3 & 8) != 0)
                                        label_140194e2d:
                                            arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                            int64_t rax_293 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                            temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                temp0_1140[0].o, *rax_293, 3)
                                            arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                            
                                            if ((rdx_3 & 0x10) == 0)
                                                goto label_14019204a
                                            
                                            goto label_140194e55
                                        
                                    label_140192038:
                                        arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                        
                                        if ((rdx_3 & 0x10) == 0)
                                        label_14019204a:
                                            
                                            if ((rdx_3 & 0x20) != 0)
                                                goto label_140194e63
                                            
                                            goto label_140192053
                                        
                                    label_140194e55:
                                        temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            temp0_1140[0].o, *arg3[0].q, 4)
                                        
                                        if ((rdx_3 & 0x20) != 0)
                                        label_140194e63:
                                            int64_t rax_295 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                            temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                temp0_1140[0].o, *rax_295, 5)
                                            
                                            if ((rdx_3 & 0x40) == 0)
                                                goto label_14019205c
                                            
                                            goto label_140194e77
                                        
                                    label_140192053:
                                        
                                        if ((rdx_3 & 0x40) != 0)
                                        label_140194e77:
                                            arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                            temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                temp0_1140[0].o, *arg12[0].q, 6)
                                            
                                            if (temp0_1122.b s< 0)
                                            label_140194e8f:
                                                arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                                int64_t rax_297 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                                temp0_1140[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    temp0_1140[0].o, *rax_297, 7)
                                        else
                                        label_14019205c:
                                            
                                            if (temp0_1122.b s< 0)
                                                goto label_140194e8f
                                        
                                        arg12 = _mm256_cvtepu16_epi32(temp0_1140[0].o)
                                        temp0_1140[0].o = zx.o(rbx_4)
                                        zmm11 = _mm256_broadcastd_epi32(temp0_1140[0])
                                        zmm1 = _mm256_cmpgt_epi32(arg12, zmm11)
                                        arg17 = zmm1 ^ _mm256_cmpeq_epi32(arg12, arg12)
                                        arg19 = arg18
                                        
                                        if (_mm256_movemask_ps(zmm1 & not.32(arg13)) != 0)
                                            arg19 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg18, 
                                                arg27, arg17)
                                            arg3 = __vpsubd_ymmqq_ymmqq_memqq(arg18, data_142fc9420)
                                            zmm10 = zmm1 & not.32(_mm256_cmpgt_epi32(arg28, arg3))
                                            arg16 = arg13 & zmm10
                                            int32_t i_2 = _mm256_movemask_ps(arg16)
                                            
                                            if (i_2 != 0)
                                                arg22 = arg18
                                                
                                                do
                                                    arg20 = arg3
                                                    arg21 = _mm256_add_epi32(arg3, arg3)
                                                    arg12 = _mm256_cvtepi32_epi64(arg21[0].o)
                                                    arg3 = _mm256_add_epi64(arg14, arg12)
                                                    char temp0_1179 = _mm256_movemask_ps(arg16)
                                                    
                                                    if ((temp0_1179 & 1) == 0)
                                                        if ((temp0_1179 & 2) != 0)
                                                            goto label_1401920e7
                                                        
                                                        goto label_1401921c9
                                                    
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *arg3[0].q, 0)
                                                    
                                                    if ((temp0_1179 & 2) != 0)
                                                    label_1401920e7:
                                                        int64_t rax_162 =
                                                            __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 
                                                            1)
                                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            zmm1[0].o, *rax_162, 1)
                                                        arg15[0].o =
                                                            _mm256_extracti128_si256(arg21, 1)
                                                        
                                                        if ((temp0_1179 & 4) == 0)
                                                            goto label_1401921d9
                                                        
                                                        goto label_140192102
                                                    
                                                label_1401921c9:
                                                    arg15[0].o = _mm256_extracti128_si256(arg21, 1)
                                                    
                                                    if ((temp0_1179 & 4) == 0)
                                                    label_1401921d9:
                                                        arg21 = arg24
                                                        arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                                        
                                                        if ((temp0_1179 & 8) != 0)
                                                            goto label_140192127
                                                        
                                                        goto label_1401921ee
                                                    
                                                label_140192102:
                                                    arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *arg12[0].q, 2)
                                                    arg21 = arg24
                                                    arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                                    
                                                    if ((temp0_1179 & 8) != 0)
                                                    label_140192127:
                                                        arg12[0].o =
                                                            _mm256_extracti128_si256(arg3, 1)
                                                        int64_t rax_164 =
                                                            __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 
                                                            1)
                                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            zmm1[0].o, *rax_164, 3)
                                                        arg3 =
                                                            __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                                        
                                                        if ((temp0_1179 & 0x10) == 0)
                                                            goto label_140192201
                                                        
                                                        goto label_140192150
                                                    
                                                label_1401921ee:
                                                    arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                                    
                                                    if ((temp0_1179 & 0x10) == 0)
                                                    label_140192201:
                                                        
                                                        if ((temp0_1179 & 0x20) != 0)
                                                            goto label_14019215f
                                                        
                                                        goto label_14019220b
                                                    
                                                label_140192150:
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *arg3[0].q, 4)
                                                    
                                                    if ((temp0_1179 & 0x20) != 0)
                                                    label_14019215f:
                                                        int64_t rax_166 =
                                                            __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 
                                                            1)
                                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            zmm1[0].o, *rax_166, 5)
                                                        
                                                        if ((temp0_1179 & 0x40) == 0)
                                                            goto label_140192215
                                                        
                                                        goto label_140192174
                                                    
                                                label_14019220b:
                                                    
                                                    if ((temp0_1179 & 0x40) != 0)
                                                    label_140192174:
                                                        arg12[0].o =
                                                            _mm256_extracti128_si256(arg3, 1)
                                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            zmm1[0].o, *arg12[0].q, 6)
                                                        
                                                        if (temp0_1179 s< 0)
                                                        label_14019218d:
                                                            arg12[0].o =
                                                                _mm256_extracti128_si256(arg3, 1)
                                                            int64_t rax_168 =
                                                                __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 
                                                                1)
                                                            zmm1[0].o =
                                                                __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                                zmm1[0].o, *rax_168, 7)
                                                    else
                                                    label_140192215:
                                                        
                                                        if (temp0_1179 s< 0)
                                                            goto label_14019218d
                                                    
                                                    arg3 = _mm256_cmpgt_epi32(
                                                        _mm256_cvtepu16_epi32(zmm1[0].o), zmm11) & zmm10
                                                    arg15[0].o = zx.o(0)
                                                    
                                                    if (_mm256_movemask_ps(arg3 & arg13) != i_2)
                                                        arg15 = arg3 ^ zmm10
                                                    
                                                    arg19 = _mm256_blendv_ps(arg19, arg22, arg3)
                                                    arg3 = __vpsubd_ymmqq_ymmqq_memqq(arg20, 
                                                        data_142fc9420)
                                                    zmm10 = _mm256_cmpgt_epi32(arg28, arg3) & arg15
                                                    arg16 = zmm10 & arg13
                                                    i_2 = _mm256_movemask_ps(arg16)
                                                    arg22 = arg20
                                                while (i_2 != 0)
                                        
                                        if (_mm256_movemask_ps(_mm256_andnot_ps(arg17, arg13)) != 0)
                                            arg12 =
                                                __vxorps_ymmqq_ymmqq_memqq(arg17, data_142fc9420)
                                            zmm1[0].o = zx.o(0)
                                            arg19 = _mm256_blendv_ps(arg19, zmm1, arg12)
                                            arg20 = _mm256_cmpeq_epi32(arg20, arg20)
                                            arg3 = _mm256_add_epi32(arg18, arg20)
                                            zmm1 = _mm256_cmpgt_epi32(arg3, zmm1)
                                            zmm10 = zmm1 & arg12
                                            arg16 = zmm10 & arg13
                                            
                                            for (int32_t i_3 = _mm256_movemask_ps(arg16); i_3 != 0; 
                                                    i_3 = _mm256_movemask_ps(arg16))
                                                arg21 = _mm256_add_epi32(arg3, arg3)
                                                arg12 = _mm256_cvtepi32_epi64(arg21[0].o)
                                                int64_t temp0_1215[0x4] =
                                                    _mm256_add_epi64(arg14, arg12)
                                                char temp0_1216 = _mm256_movemask_ps(arg16)
                                                
                                                if ((temp0_1216 & 1) == 0)
                                                    if ((temp0_1216 & 2) != 0)
                                                        goto label_1401922d3
                                                    
                                                    goto label_1401923b5
                                                
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *temp0_1215[0], 0)
                                                
                                                if ((temp0_1216 & 2) != 0)
                                                label_1401922d3:
                                                    int64_t rax_172 = __vpextrq_gpr64q_xmmdq_immb(
                                                        temp0_1215[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_172, 1)
                                                    arg15[0].o = _mm256_extracti128_si256(arg21, 1)
                                                    
                                                    if ((temp0_1216 & 4) == 0)
                                                        goto label_1401923c5
                                                    
                                                    goto label_1401922ee
                                                
                                            label_1401923b5:
                                                arg15[0].o = _mm256_extracti128_si256(arg21, 1)
                                                
                                                if ((temp0_1216 & 4) == 0)
                                                label_1401923c5:
                                                    arg21 = arg24
                                                    arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                                    
                                                    if ((temp0_1216 & 8) != 0)
                                                        goto label_140192313
                                                    
                                                    goto label_1401923da
                                                
                                            label_1401922ee:
                                                arg12[0].o = _mm256_extracti128_si256(temp0_1215, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *arg12[0].q, 2)
                                                arg21 = arg24
                                                arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                                
                                                if ((temp0_1216 & 8) != 0)
                                                label_140192313:
                                                    arg12[0].o =
                                                        _mm256_extracti128_si256(temp0_1215, 1)
                                                    int64_t rax_174 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_174, 3)
                                                    arg22 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                                    
                                                    if ((temp0_1216 & 0x10) == 0)
                                                        goto label_1401923ed
                                                    
                                                    goto label_14019233c
                                                
                                            label_1401923da:
                                                arg22 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                                
                                                if ((temp0_1216 & 0x10) == 0)
                                                label_1401923ed:
                                                    
                                                    if ((temp0_1216 & 0x20) != 0)
                                                        goto label_14019234b
                                                    
                                                    goto label_1401923f7
                                                
                                            label_14019233c:
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *arg22[0], 4)
                                                
                                                if ((temp0_1216 & 0x20) != 0)
                                                label_14019234b:
                                                    int64_t rax_176 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg22[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_176, 5)
                                                    
                                                    if ((temp0_1216 & 0x40) == 0)
                                                        goto label_140192401
                                                    
                                                    goto label_140192360
                                                
                                            label_1401923f7:
                                                
                                                if ((temp0_1216 & 0x40) != 0)
                                                label_140192360:
                                                    arg12[0].o = _mm256_extracti128_si256(arg22, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *arg12[0].q, 6)
                                                    
                                                    if (temp0_1216 s< 0)
                                                    label_140192379:
                                                        arg12[0].o =
                                                            _mm256_extracti128_si256(arg22, 1)
                                                        int64_t rax_178 =
                                                            __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 
                                                            1)
                                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            zmm1[0].o, *rax_178, 7)
                                                else
                                                label_140192401:
                                                    
                                                    if (temp0_1216 s< 0)
                                                        goto label_140192379
                                                
                                                arg16 = _mm256_cmpgt_epi32(
                                                    _mm256_cvtepu16_epi32(zmm1[0].o), zmm11)
                                                    & not.32(zmm10)
                                                arg15[0].o = zx.o(0)
                                                int32_t temp0_1222 =
                                                    _mm256_movemask_ps(arg16 & arg13)
                                                arg17[0].o = zx.o(0)
                                                
                                                if (temp0_1222 != i_3)
                                                    arg17 = arg16 ^ zmm10
                                                
                                                arg19 = _mm256_blendv_ps(arg19, arg3, arg16)
                                                arg3 = _mm256_add_epi32(arg3, arg20)
                                                zmm10 = _mm256_cmpgt_epi32(arg3, arg15) & arg17
                                                arg16 = zmm10 & arg13
                                        
                                        arg16 = arg_60
                                        zmm11 = _mm256_blendv_ps(__return_addr.32, arg19, arg13)
                                        arg15 = _mm256_add_epi32(zmm11, zmm11)
                                        arg12 = _mm256_cvtepi32_epi64(arg15[0].o)
                                        arg3 = _mm256_add_epi64(arg14, arg12)
                                        
                                        if ((rdx_3 & 1) != 0)
                                            zmm1[0].o = __vpbroadcastw_xmmdq_memw(*arg3[0].q)
                                        
                                        arg20 = arg31
                                        arg22[0].o = arg53[0].o
                                        arg19 = arg55
                                        zmm10 = arg32
                                        
                                        if ((rdx_3 & 2) == 0)
                                            arg15[0].o = _mm256_extracti128_si256(arg15, 1)
                                            
                                            if ((rdx_3 & 4) != 0)
                                                goto label_140194ebf
                                            
                                            goto label_1401924bf
                                        
                                        int64_t rax_298 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_298, 1)
                                        arg15[0].o = _mm256_extracti128_si256(arg15, 1)
                                        
                                        if ((rdx_3 & 4) != 0)
                                        label_140194ebf:
                                            arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *arg12[0].q, 2)
                                            arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                            
                                            if ((rdx_3 & 8) == 0)
                                                goto label_1401924cd
                                            
                                            goto label_140194edd
                                        
                                    label_1401924bf:
                                        arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
                                        
                                        if ((rdx_3 & 8) == 0)
                                        label_1401924cd:
                                            arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                            
                                            if ((rdx_3 & 0x10) != 0)
                                                goto label_140194f05
                                            
                                            goto label_1401924df
                                        
                                    label_140194edd:
                                        arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                        int64_t rax_300 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_300, 3)
                                        arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg29)
                                        
                                        if ((rdx_3 & 0x10) != 0)
                                        label_140194f05:
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *arg3[0].q, 4)
                                            
                                            if ((rdx_3 & 0x20) == 0)
                                                goto label_1401924e8
                                            
                                            goto label_140194f13
                                        
                                    label_1401924df:
                                        
                                        if ((rdx_3 & 0x20) == 0)
                                        label_1401924e8:
                                            
                                            if ((rdx_3 & 0x40) != 0)
                                                goto label_140194f27
                                            
                                            goto label_1401924f1
                                        
                                    label_140194f13:
                                        int64_t rax_302 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_302, 5)
                                        
                                        if ((rdx_3 & 0x40) == 0)
                                        label_1401924f1:
                                            
                                            if (temp0_1122.b s< 0)
                                            label_140194f3f:
                                                arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                                int64_t rax_304 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_304, 7)
                                        else
                                        label_140194f27:
                                            arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *arg12[0].q, 6)
                                            
                                            if (temp0_1122.b s< 0)
                                                goto label_140194f3f
                                        
                                        arg15 = _mm256_blendv_ps(arg23, 
                                            _mm256_sub_epi32(zmm11, 
                                                _mm256_cmpeq_epi32(arg12, arg12)), 
                                            arg13)
                                        arg3 = _mm256_cmpgt_epi32(arg28, arg15) & not.32(arg13)
                                        
                                        if (_mm256_movemask_ps(arg3) != 0)
                                            arg15 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg15, 
                                                arg27, arg3)
                                        
                                        arg17 = arg33
                                        arg27 = arg15
                                        arg15 = _mm256_add_epi32(arg15, arg15)
                                        arg12 = _mm256_cvtepi32_epi64(arg15[0].o)
                                        int64_t temp0_1243[0x4] = _mm256_add_epi64(arg14, arg12)
                                        
                                        if ((rdx_3 & 1) == 0)
                                            if ((rdx_3 & 2) != 0)
                                                goto label_140194f68
                                            
                                            goto label_140192562
                                        
                                        arg3[0].o = __vpbroadcastw_xmmdq_memw(*temp0_1243[0])
                                        
                                        if ((rdx_3 & 2) != 0)
                                        label_140194f68:
                                            int64_t rax_306 =
                                                __vpextrq_gpr64q_xmmdq_immb(temp0_1243[0].o, 1)
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                                *rax_306, 1)
                                            arg14[0].o = _mm256_extracti128_si256(arg15, 1)
                                            
                                            if ((rdx_3 & 4) == 0)
                                                goto label_140192571
                                            
                                            goto label_140194f82
                                        
                                    label_140192562:
                                        arg14[0].o = _mm256_extracti128_si256(arg15, 1)
                                        
                                        if ((rdx_3 & 4) == 0)
                                        label_140192571:
                                            arg14 = _mm256_cvtepi32_epi64(arg14[0].o)
                                            
                                            if ((rdx_3 & 8) != 0)
                                                goto label_140194fa0
                                            
                                            goto label_14019257f
                                        
                                    label_140194f82:
                                        arg12[0].o = _mm256_extracti128_si256(temp0_1243, 1)
                                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                            *arg12[0].q, 2)
                                        arg14 = _mm256_cvtepi32_epi64(arg14[0].o)
                                        
                                        if ((rdx_3 & 8) != 0)
                                        label_140194fa0:
                                            arg12[0].o = _mm256_extracti128_si256(temp0_1243, 1)
                                            int64_t rax_308 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                                *rax_308, 3)
                                            arg13 = __vpaddq_ymmqq_ymmqq_memqq(arg14, arg29)
                                            
                                            if ((rdx_3 & 0x10) == 0)
                                                goto label_140192591
                                            
                                            goto label_140194fc8
                                        
                                    label_14019257f:
                                        arg13 = __vpaddq_ymmqq_ymmqq_memqq(arg14, arg29)
                                        
                                        if ((rdx_3 & 0x10) == 0)
                                        label_140192591:
                                            
                                            if ((rdx_3 & 0x20) != 0)
                                                goto label_140194fd6
                                            
                                            goto label_14019259a
                                        
                                    label_140194fc8:
                                        arg3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg13[0], 4)
                                        
                                        if ((rdx_3 & 0x20) != 0)
                                        label_140194fd6:
                                            int64_t rax_310 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                                *rax_310, 5)
                                            
                                            if ((rdx_3 & 0x40) == 0)
                                                goto label_1401925a3
                                            
                                            goto label_140194fea
                                        
                                    label_14019259a:
                                        
                                        if ((rdx_3 & 0x40) != 0)
                                        label_140194fea:
                                            arg12[0].o = _mm256_extracti128_si256(arg13, 1)
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                                *arg12[0].q, 6)
                                            
                                            if (temp0_1122.b s< 0)
                                            label_140195002:
                                                arg12[0].o = _mm256_extracti128_si256(arg13, 1)
                                                int64_t rax_312 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg3[0].o, *rax_312, 7)
                                        else
                                        label_1401925a3:
                                            
                                            if (temp0_1122.b s< 0)
                                                goto label_140195002
                                        
                                        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                                        zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                        arg3 = _mm256_cvtepu16_epi32(arg3[0].o)
                                    
                                    arg14[0].o = zx.o(0)
                                    arg15[0].o = zx.o(0)
                                    
                                    if (*(arg6 + 0x980) != 1)
                                        arg12 =
                                            _mm256_max_epi32(_mm256_sub_epi32(arg3, zmm1), arg19)
                                        arg3 = _mm256_broadcast_ss(arg_260[0])
                                        arg15 = _mm256_div_ps(
                                            _mm256_sub_ps(arg3, _mm256_cvtepi32_ps(zmm1)), 
                                            _mm256_cvtepi32_ps(arg12))
                                    
                                    zmm1 = _mm256_blendv_ps(arg14, arg15, arg16 ^ arg13)
                            
                            arg20 = _mm256_blendv_ps(arg20, zmm1, arg17)
                    
                    zmm1[0].o = _mm256_extracti128_si256(zmm10, 1)
                    arg12 = _mm256_cvtepu32_epi64(zmm1[0].o)
                    arg13 = _mm256_cvtepu32_epi64(zmm10[0].o)
                    zmm1 = __vpmulld_ymmqq_ymmqq_memqq(zmm11, arg25)
                    arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                    zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                    arg28 = arg13
                    arg_260 = zmm1
                    zmm1 = _mm256_add_epi64(zmm1, arg13)
                    arg29 = arg12
                    arg32 = arg3
                    arg3 = _mm256_add_epi64(arg3, arg12)
                    arg23 = __vpaddq_ymmqq_ymmqq_memqq(arg3, arg34)
                    __return_addr.32 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, arg44)
                    arg12 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg19, arg35)
                    zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                    arg_60 = arg12
                    arg55[0].o = zmm1[0].o
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                    zmm1[0].o &= arg22[0].o
                    arg3[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    arg3[0].o = __vpsraw_xmmdq_xmmdq_immb(arg3[0].o, 0xf)
                    arg3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
                    arg31 = arg20
                    
                    if (__vpmovmskb_gpr32d_xmmdq(arg3[0].o) != 0)
                        arg3 = arg21 & __vpbroadcastd_ymmqq_memd(0x7000000)
                        arg13[0].o = zx.o(0)
                        uint32_t temp0_1378[0x8] = _mm256_cmpeq_epi32(arg3, arg13)
                        arg13[0].o = _mm256_extracti128_si256(temp0_1378, 1)
                        arg13[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_1378[0].o, arg13[0].o)
                        arg13[0].o &= zmm1[0].o
                        arg15[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
                        arg15[0].o = __vpsraw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
                        arg15[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg15[0].o, arg12[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(arg15[0].o) != 0)
                            arg13 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 0x1f)
                            arg15 = __vpaddq_ymmqq_ymmqq_memqq(arg29, arg37)
                            arg16 = __vpaddq_ymmqq_ymmqq_memqq(arg28, arg26)
                            arg17 = __vpbroadcastq_ymmqq_memq(4)
                            arg16 = __vpaddq_ymmqq_ymmqq_memqq(arg16, arg_260)
                            arg15 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg32)
                            arg18 = _mm256_add_epi64(arg15, arg17)
                            arg17 = _mm256_add_epi64(arg16, arg17)
                            arg28[0].o = _mm256_extracti128_si256(arg13, 1)
                            arg14[0].o = arg13[0].o
                            arg19[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg19[0].o, arg19[0].o)
                            float temp0_1397[0x4]
                            int32_t temp1_58
                            temp0_1397, temp1_58 =
                                _mm256_i64gather_ps(arg19[0].o, *(r12 + arg17[0].q), arg14[0].o)
                            arg19[0].o = temp0_1397
                            arg14[0].o = temp1_58
                            arg14[0].o = arg28[0].o
                            arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                            float temp0_1399[0x4]
                            int32_t temp1_59
                            temp0_1399, temp1_59 =
                                _mm256_i64gather_ps(arg17[0].o, *(r12 + arg18[0].q), arg14[0].o)
                            arg17[0].o = temp0_1399
                            arg14[0].o = temp1_59
                            arg14 = __vpbroadcastq_ymmqq_memq(8)
                            arg18 = _mm256_add_epi64(arg15, arg14)
                            zmm10 = _mm256_add_epi64(arg16, arg14)
                            arg14[0].o = arg13[0].o
                            arg20[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg20[0].o, arg20[0].o)
                            float temp0_1404[0x4]
                            int32_t temp1_60
                            temp0_1404, temp1_60 =
                                _mm256_i64gather_ps(arg20[0].o, *(r12 + zmm10[0].q), arg14[0].o)
                            arg20[0].o = temp0_1404
                            arg14[0].o = temp1_60
                            arg14[0].o = arg28[0].o
                            arg3[0].o = zx.o(0)
                            float temp0_1405[0x4]
                            int32_t temp1_61
                            temp0_1405, temp1_61 =
                                _mm256_i64gather_ps(zx.o(0), *(r12 + arg18[0].q), arg14[0].o)
                            arg3[0].o = temp0_1405
                            arg14[0].o = temp1_61
                            arg14 = __vpbroadcastq_ymmqq_memq(0xc)
                            arg18 = _mm256_add_epi64(arg16, arg14)
                            arg16[0].o = arg13[0].o
                            zmm10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm10[0].o)
                            float temp0_1409[0x4]
                            int32_t temp1_62
                            temp0_1409, temp1_62 =
                                _mm256_i64gather_ps(zmm10[0].o, *(r12 + arg18[0].q), arg16[0].o)
                            zmm10[0].o = temp0_1409
                            arg16[0].o = temp1_62
                            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                            arg14 = _mm256_add_epi64(arg15, arg14)
                            float temp0_1412[0x4]
                            int32_t temp1_63
                            temp0_1412, temp1_63 =
                                _mm256_i64gather_ps(arg16[0].o, *(r12 + arg14[0].q), arg28[0].o)
                            arg16[0].o = temp0_1412
                            arg28[0].o = temp1_63
                            arg12 = _mm256_insertf128_ps(arg19, arg17[0].o, 1)
                            arg3 = _mm256_insertf128_ps(arg20, arg3[0].o, 1)
                            arg20 = arg31
                            arg14 = _mm256_insertf128_ps(zmm10, arg16[0].o, 1)
                            arg47.32 = _mm256_maskstore_ps(arg13, arg12)
                            arg49.32 = _mm256_maskstore_ps(arg13, arg3)
                            arg51.32 = _mm256_maskstore_ps(arg13, arg14)
                        
                        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                        arg3 = temp0_1378 ^ arg13
                        arg13[0].o = _mm256_extracti128_si256(arg3, 1)
                        arg3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg13[0].o)
                        arg3[0].o &= zmm1[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg3[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        arg21 = arg24
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            zmm10 = _mm256_srai_epi32(
                                _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg3[0].o), 0x1f), 0x1f)
                            arg18 = _mm256_srai_epi32(_mm256_slli_epi32(temp0_1020, 0x1f), 0x1f)
                            arg15 = arg18 & zmm10
                            
                            if (_mm256_movemask_ps(arg15) == 0)
                                arg13 = __return_addr.32
                                arg16 = arg23
                            else
                                arg12 = __vpbroadcastq_ymmqq_memq(4)
                                zmm1 = __return_addr.32
                                arg13 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, arg12), 
                                    _mm256_permutevar8x32_ps(data_143442920, arg15))
                                arg14 = _mm256_permutevar8x32_ps(data_143442940, arg15)
                                arg16 = __vpaddq_ymmqq_ymmqq_memqq(arg29, arg37)
                                arg17 = __vpaddq_ymmqq_ymmqq_memqq(
                                    __vpaddq_ymmqq_ymmqq_memqq(arg28, arg26), arg_260)
                                arg16 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg16, arg32), 
                                    arg12)
                                arg17 = _mm256_add_epi64(arg17, arg12)
                                arg28[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
                                arg19[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg19[0].o, arg19[0].o)
                                float temp0_1445[0x4]
                                int32_t temp1_64
                                temp0_1445, temp1_64 =
                                    _mm256_i64gather_ps(arg19[0].o, *(r12 + arg17[0].q), arg15[0].o)
                                arg19[0].o = temp0_1445
                                arg15[0].o = temp1_64
                                arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                                float temp0_1447[0x4]
                                int32_t temp1_65
                                temp0_1447, temp1_65 =
                                    _mm256_i64gather_ps(arg15[0].o, *(r12 + arg16[0].q), arg28[0].o)
                                arg15[0].o = temp0_1447
                                arg28[0].o = temp1_65
                                zmm1 = arg23
                                arg16 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, arg12), arg14)
                                arg15 = _mm256_insertf128_ps(arg19, arg15[0].o, 1)
                            
                            arg19[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg19[0].o, arg19[0].o)
                            arg47.32 =
                                _mm256_maskstore_ps(zmm10, _mm256_blendv_ps(arg19, arg15, arg18))
                            arg12 = __vpbroadcastd_ymmqq_memd(0x2000000)
                            arg18 = arg21 & arg12
                            arg12 = _mm256_cmpeq_epi32(arg18, arg12)
                            zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                            arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                            arg15[0].o = arg3[0].o & arg12[0].o
                            arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
                            arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                arg12 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 
                                    0x1f)
                                zmm1 = _mm256_permutevar8x32_epi32(data_143442920, arg12)
                                arg14 = _mm256_permutevar8x32_epi32(data_143442940, arg12)
                                arg15[0].o = _mm256_extracti128_si256(arg12, 1)
                                arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                                float temp0_1469[0x4]
                                int32_t temp1_66
                                temp0_1469, temp1_66 =
                                    _mm256_i64gather_ps(arg17[0].o, *arg13[0], arg12[0].o)
                                arg17[0].o = temp0_1469
                                arg12[0].o = temp1_66
                                arg12 = __vpbroadcastq_ymmqq_memq(4)
                                arg13 =
                                    _mm256_blendv_ps(arg13, _mm256_add_epi64(arg13, arg12), zmm1)
                                arg20 = arg31
                                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                float temp0_1474[0x4]
                                int32_t temp1_67
                                temp0_1474, temp1_67 =
                                    _mm256_i64gather_ps(zmm1[0].o, *arg16[0].q, arg15[0].o)
                                zmm1[0].o = temp0_1474
                                arg15[0].o = temp1_67
                                arg16 =
                                    _mm256_blendv_ps(arg16, _mm256_add_epi64(arg16, arg12), arg14)
                                arg15 = _mm256_insertf128_ps(arg17, zmm1[0].o, 1)
                            
                            arg49.32 = _mm256_maskstore_ps(zmm10, 
                                _mm256_cmpeq_epi32(arg18, arg19) & not.32(arg15))
                            arg12 = __vpbroadcastd_ymmqq_memd(0x4000000)
                            arg18 = arg21 & arg12
                            arg12 = _mm256_cmpeq_epi32(arg18, arg12)
                            zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                            arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                            arg3[0].o &= arg12[0].o
                            arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg3[0].o, 0xf)
                            arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                arg12 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg3[0].o), 0x1f), 0x1f)
                                zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                                arg3[0].o = zx.o(0)
                                float temp0_1492[0x4]
                                int32_t temp1_68
                                temp0_1492, temp1_68 =
                                    _mm256_i64gather_ps(zx.o(0), *arg13[0], arg12[0].o)
                                arg3[0].o = temp0_1492
                                arg12[0].o = temp1_68
                                arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                float temp0_1494[0x4]
                                int32_t temp1_69
                                temp0_1494, temp1_69 =
                                    _mm256_i64gather_ps(arg12[0].o, *arg16[0].q, zmm1[0].o)
                                arg12[0].o = temp0_1494
                                zmm1[0].o = temp1_69
                                arg3 = _mm256_insertf128_ps(arg3, arg12[0].o, 1)
                            
                            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            arg12 = _mm256_cmpeq_epi32(arg18, arg12) & not.32(arg3)
                            arg51.32 = _mm256_maskstore_ps(zmm10, arg12)
                    
                    arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                    zmm1 = arg15 ^ arg_60
                    arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
                    arg33[0].o = arg12[0].o
                    zmm1[0].o = arg22[0].o & arg12[0].o
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                        arg3 = arg30
                        arg12[0].o = __vpackssdw_xmmdq_xmmdq_memdq(arg3[0].o, arg43[0].o)
                        zmm1[0].o = arg12[0].o & arg22[0].o
                        arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                        arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        arg_460 = zmm11
                        
                        if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                            zmm11[0].o = arg22[0].o
                            arg20 = _mm256_cvtepu16_epi32(zmm1[0].o)
                            arg12[0].o = zx.o(0)
                            arg_3a0 = arg12
                            arg_380 = arg12
                            arg_360 = arg12
                            arg_340 = arg12
                            arg_320 = arg12
                            arg_300 = arg12
                            arg16 =
                                arg3 & _mm256_srai_epi32(_mm256_slli_epi32(temp0_1020, 0x1f), 0x1f)
                            arg18 = arg16 & arg54.32
                            arg13 = arg44
                            zmm1 = arg13
                            arg22 = arg34
                            arg3 = arg22
                            
                            if (_mm256_movemask_ps(arg18) != 0)
                                arg12 = __vpbroadcastq_ymmqq_memq(4)
                                zmm1 = _mm256_add_epi64(arg13, arg12)
                                arg3 = _mm256_permutevar8x32_ps(data_143442920, arg18)
                                float temp0_1518[0x8] = _mm256_blendv_ps(arg13, zmm1, arg3)
                                zmm1 = _mm256_add_epi64(arg22, arg12)
                                arg19 = data_143442940
                                arg17[0].o = _mm256_extractf128_ps(arg18[0], 1)
                                arg15[0].o = arg18[0]
                                zmm10[0].o = zx.o(0)
                                float temp0_1521[0x4]
                                int32_t temp1_70
                                temp0_1521, temp1_70 =
                                    _mm256_i64gather_ps(zmm10[0].o, *arg13[0], arg15[0].o)
                                zmm10[0].o = temp0_1521
                                arg15[0].o = temp1_70
                                arg15[0].o = arg17[0].o
                                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                                float temp0_1523[0x4]
                                int32_t temp1_71
                                temp0_1523, temp1_71 =
                                    _mm256_i64gather_ps(arg13[0].o, *arg22[0], arg15[0].o)
                                arg13[0].o = temp0_1523
                                arg15[0].o = temp1_71
                                arg15 = _mm256_permutevar8x32_ps(arg19, arg18)
                                arg19 = _mm256_blendv_ps(arg22, zmm1, arg15)
                                arg_360 = _mm256_maskstore_ps(arg16, 
                                    _mm256_insertf128_ps(zmm10, arg13[0].o, 1))
                                zmm1 = _mm256_blendv_ps(temp0_1518, 
                                    _mm256_add_epi64(temp0_1518, arg12), arg3)
                                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                                float temp0_1531[0x4]
                                int32_t temp1_72
                                temp0_1531, temp1_72 =
                                    _mm256_i64gather_ps(arg13[0].o, *temp0_1518[0].q, arg18[0])
                                arg13[0].o = temp0_1531
                                arg18[0] = temp1_72
                                temp0_1518[0].o =
                                    __vxorps_xmmdq_xmmdq_xmmdq(temp0_1518[0].o, temp0_1518[0].o)
                                float temp0_1533[0x4]
                                int32_t temp1_73
                                temp0_1533, temp1_73 =
                                    _mm256_i64gather_ps(temp0_1518[0].o, *arg19[0].q, arg17[0].o)
                                temp0_1518[0].o = temp0_1533
                                arg17[0].o = temp1_73
                                arg3 =
                                    _mm256_blendv_ps(arg19, _mm256_add_epi64(arg19, arg12), arg15)
                                arg_300 = _mm256_maskstore_ps(arg16, 
                                    _mm256_insertf128_ps(arg13, temp0_1518[0].o, 1))
                            
                            zmm10 = _mm256_slli_epi32(arg20, 0x1f)
                            arg12 = __vpbroadcastd_ymmqq_memd(0x2000000)
                            arg12 = _mm256_cmpeq_epi32(arg21 & arg12, arg12)
                            arg13 = arg12 & arg30
                            arg12[0].o = _mm256_extracti128_si256(arg13, 1)
                            arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                            arg22[0].o = zmm11[0].o
                            arg15[0].o = arg12[0].o & zmm11[0].o
                            arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
                            arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                arg12 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 
                                    0x1f)
                                arg14 = __vpbroadcastq_ymmqq_memq(4)
                                arg15 = _mm256_add_epi64(zmm1, arg14)
                                arg17 = data_143442920
                                uint32_t temp0_1552[0x8] = _mm256_permutevar8x32_epi32(arg17, arg12)
                                arg15 = _mm256_blendv_ps(zmm1, arg15, temp0_1552)
                                arg18 = _mm256_add_epi64(arg3, arg14)
                                arg19 = data_143442940
                                arg16[0].o = _mm256_extracti128_si256(arg12, 1)
                                arg20[0].o = zx.o(0)
                                arg17[0].o = arg12[0].o
                                float temp0_1556[0x4]
                                int32_t temp1_74
                                temp0_1556, temp1_74 =
                                    _mm256_i64gather_ps(zx.o(0), *zmm1[0].q, arg17[0].o)
                                arg20[0].o = temp0_1556
                                arg17[0].o = temp1_74
                                zmm1[0].o = arg16[0].o
                                arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                                float temp0_1558[0x4]
                                int32_t temp1_75
                                temp0_1558, temp1_75 =
                                    _mm256_i64gather_ps(arg17[0].o, *arg3[0].q, zmm1[0].o)
                                arg17[0].o = temp0_1558
                                zmm1[0].o = temp1_75
                                arg19 = _mm256_permutevar8x32_epi32(arg19, arg12)
                                arg3 = _mm256_blendv_ps(arg3, arg18, arg19)
                                arg_380 = _mm256_maskstore_ps(arg13, 
                                    _mm256_insertf128_ps(arg20, arg17[0].o, 1))
                                zmm1 = _mm256_blendv_ps(arg15, _mm256_add_epi64(arg15, arg14), 
                                    temp0_1552)
                                arg21 = arg24
                                arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                                float temp0_1566[0x4]
                                int32_t temp1_76
                                temp0_1566, temp1_76 =
                                    _mm256_i64gather_ps(arg17[0].o, *arg15[0].q, arg12[0].o)
                                arg17[0].o = temp0_1566
                                arg12[0].o = temp1_76
                                arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                float temp0_1568[0x4]
                                int32_t temp1_77
                                temp0_1568, temp1_77 =
                                    _mm256_i64gather_ps(arg12[0].o, *arg3[0].q, arg16[0].o)
                                arg12[0].o = temp0_1568
                                arg16[0].o = temp1_77
                                arg3 = _mm256_blendv_ps(arg3, _mm256_add_epi64(arg3, arg14), arg19)
                                arg_320 = _mm256_maskstore_ps(arg13, 
                                    _mm256_insertf128_ps(arg17, arg12[0].o, 1))
                            
                            arg20 = arg31
                            zmm11 = arg_460
                            arg16 = _mm256_srai_epi32(zmm10, 0x1f)
                            arg12 = __vpbroadcastd_ymmqq_memd(0x4000000)
                            arg12 = _mm256_cmpeq_epi32(arg21 & arg12, arg12)
                            arg13 = arg12 & arg30
                            arg12[0].o = _mm256_extracti128_si256(arg13, 1)
                            arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
                            arg15[0].o = arg12[0].o & arg22[0].o
                            arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
                            arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                arg12 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 
                                    0x1f)
                                arg14 = __vpbroadcastq_ymmqq_memq(4)
                                arg15 = _mm256_add_epi64(zmm1, arg14)
                                uint32_t temp0_1587[0x8] =
                                    _mm256_permutevar8x32_epi32(data_143442920, arg12)
                                float temp0_1588[0x8] = _mm256_blendv_ps(zmm1, arg15, temp0_1587)
                                arg14 = _mm256_add_epi64(arg3, arg14)
                                arg18 = data_143442940
                                temp0_1587[0].o = _mm256_extracti128_si256(arg12, 1)
                                arg19[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg19[0].o, arg19[0].o)
                                arg15[0].o = arg12[0].o
                                float temp0_1592[0x4]
                                int32_t temp1_78
                                temp0_1592, temp1_78 =
                                    _mm256_i64gather_ps(arg19[0].o, *zmm1[0].q, arg15[0].o)
                                arg19[0].o = temp0_1592
                                arg15[0].o = temp1_78
                                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                arg15[0].o = temp0_1587[0].o
                                float temp0_1594[0x4]
                                int32_t temp1_79
                                temp0_1594, temp1_79 =
                                    _mm256_i64gather_ps(zmm1[0].o, *arg3[0].q, arg15[0].o)
                                zmm1[0].o = temp0_1594
                                arg15[0].o = temp1_79
                                arg3 = _mm256_blendv_ps(arg3, arg14, 
                                    _mm256_permutevar8x32_epi32(arg18, arg12))
                                zmm1 = _mm256_insertf128_ps(arg19, zmm1[0].o, 1)
                                arg_3a0 = _mm256_maskstore_ps(arg13, zmm1)
                                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                float temp0_1600[0x4]
                                int32_t temp1_80
                                temp0_1600, temp1_80 =
                                    _mm256_i64gather_ps(zmm1[0].o, *temp0_1588[0].q, arg12[0].o)
                                zmm1[0].o = temp0_1600
                                arg12[0].o = temp1_80
                                arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                float temp0_1602[0x4]
                                int32_t temp1_81
                                temp0_1602, temp1_81 =
                                    _mm256_i64gather_ps(arg12[0].o, *arg3[0].q, temp0_1587[0].o)
                                arg12[0].o = temp0_1602
                                temp0_1587[0].o = temp1_81
                                arg_340 = _mm256_maskstore_ps(arg13, 
                                    _mm256_insertf128_ps(zmm1, arg12[0].o, 1))
                            
                            arg12 = __vpaddq_ymmqq_ymmqq_memqq(arg29, arg37)
                            zmm1 = __vpaddq_ymmqq_ymmqq_memqq(arg28, arg26)
                            arg3 = __vpbroadcastq_ymmqq_memq(4)
                            zmm1 = __vpaddq_ymmqq_ymmqq_memqq(zmm1, arg_260)
                            arg12 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg12, arg32), arg3)
                            zmm1 = _mm256_add_epi64(zmm1, arg3)
                            arg3[0].o = arg16[0].o
                            arg13[0].o = zx.o(0)
                            uint32_t temp0_1612[0x4]
                            int32_t temp1_82
                            temp0_1612, temp1_82 =
                                _mm256_i64gather_epi32(zx.o(0), *(r12 + zmm1[0].q), arg3[0].o)
                            arg13[0].o = temp0_1612
                            arg3[0].o = temp1_82
                            zmm1[0].o = _mm256_extracti128_si256(arg16, 1)
                            arg3[0].o = zx.o(0)
                            uint32_t temp0_1614[0x4]
                            int32_t temp1_83
                            temp0_1614, temp1_83 =
                                _mm256_i64gather_epi32(zx.o(0), *(r12 + arg12[0].q), zmm1[0].o)
                            arg3[0].o = temp0_1614
                            zmm1[0].o = temp1_83
                            arg12 = _mm256_inserti128_si256(arg13, arg3[0].o, 1)
                            zmm1 = _mm256_srli_epi32(arg12, 0x15)
                            arg3 = _mm256_srli_epi32(arg12, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                            arg14 = arg_320
                            arg15 = arg_340
                            arg13 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg_300, 
                                _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(
                                        arg12 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                        __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                    _mm256_broadcast_ss(511f)), 
                                arg_360)
                            arg12 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            arg3 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg3, arg12))
                            arg17 = _mm256_broadcast_ss(1023f)
                            arg3 = _mm256_div_ps(arg3, arg17)
                            float temp0_1633[0x8] = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg12)), arg17)
                            arg3 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg3, arg14, arg_380)
                            arg12 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_1633, arg15, arg_3a0)
                            arg47.32 = _mm256_maskstore_ps(arg16, arg13)
                            arg49.32 = _mm256_maskstore_ps(arg16, arg3)
                            arg51.32 = _mm256_maskstore_ps(arg16, arg12)
                            arg3 = arg30
                            arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                        
                        arg12[0].o = __vpackssdw_xmmdq_xmmdq_memdq(arg3[0].o, arg43[0].o)
                        arg3[0].o = arg12[0].o ^ arg33[0].o
                        arg12[0].o = arg3[0].o & arg22[0].o
                        arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                        arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                        arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                            arg12 = __vpbroadcastd_ymmqq_memd(2)
                            arg17 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg12, arg35)
                            arg14[0].o = _mm256_extracti128_si256(arg17, 1)
                            arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg17[0].o, arg14[0].o)
                            zmm1[0].o = arg12[0].o & arg22[0].o
                            arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                arg54 = arg14[0].o
                                arg16 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f), 0x1f)
                                arg13 = _mm256_srai_epi32(_mm256_slli_epi32(temp0_1020, 0x1f), 0x1f)
                                arg15 = arg13 & arg16
                                int32_t temp0_1658 = _mm256_movemask_ps(arg15)
                                arg20[0].o = arg22[0].o
                                
                                if (temp0_1658 != 0)
                                    arg12 = __vpbroadcastq_ymmqq_memq(2)
                                    arg19 = arg23
                                    arg14 = _mm256_add_epi64(arg19, arg12)
                                    zmm10 = __return_addr.32
                                    arg12 = _mm256_add_epi64(zmm10, arg12)
                                    arg18 = _mm256_permutevar8x32_ps(data_143442920, arg15)
                                    __return_addr.32 = _mm256_blendv_ps(zmm10, arg12, arg18)
                                    float temp0_1664[0x8] =
                                        _mm256_permutevar8x32_ps(data_143442940, arg15)
                                    arg23 = _mm256_blendv_ps(arg19, arg14, temp0_1664)
                                    arg14 = __vpaddq_ymmqq_ymmqq_memqq(arg29, arg37)
                                    arg15 = __vpaddq_ymmqq_ymmqq_memqq(arg28, arg26)
                                    arg19 = __vpbroadcastq_ymmqq_memq(4)
                                    arg15 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg_260)
                                    arg14 = _mm256_add_epi64(
                                        __vpaddq_ymmqq_ymmqq_memqq(arg14, arg32), arg19)
                                    arg15 = _mm256_add_epi64(arg15, arg19)
                                    arg19[0].o = zx.o(0)
                                    float temp0_1673[0x8] = _mm256_blendv_ps(arg19, arg15, arg18)
                                    float temp0_1674[0x8] =
                                        _mm256_blendv_ps(arg19, arg14, temp0_1664)
                                    int64_t r8_4 = __vpextrq_gpr64q_xmmdq_immb(temp0_1673[0].o, 1)
                                    int64_t rcx_17 = temp0_1673[0].q
                                    arg14[0].o = _mm256_extracti128_si256(temp0_1673, 1)
                                    int64_t r9_1 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                    int64_t rbx_5 = arg14[0].q
                                    int64_t rdi_8 = temp0_1674[0].q
                                    int64_t rsi_11 = __vpextrq_gpr64q_xmmdq_immb(temp0_1674[0].o, 1)
                                    temp0_1674[0].o = _mm256_extracti128_si256(temp0_1674, 1)
                                    int64_t rax_234 = temp0_1674[0].q
                                    int64_t rdx_5 = __vpextrq_gpr64q_xmmdq_immb(temp0_1674[0].o, 1)
                                    temp0_1674[0].o = zx.o(*(r12 + rcx_17))
                                    temp0_1674[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1674[0].o, *(r12 + r8_4), 1)
                                    temp0_1674[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1674[0].o, *(r12 + rbx_5), 2)
                                    temp0_1674[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1674[0].o, *(r12 + r9_1), 3)
                                    temp0_1674[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1674[0].o, *(r12 + rdi_8), 4)
                                    temp0_1674[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1674[0].o, *(r12 + rsi_11), 5)
                                    temp0_1674[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1674[0].o, *(r12 + rax_234), 6)
                                    temp0_1674[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_1674[0].o, *(r12 + rdx_5), 7)
                                    arg12 = _mm256_cvtepu16_epi32(temp0_1674[0].o)
                                    arg14 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                    arg15 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg12, arg14))
                                
                                arg19[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg19[0].o, arg19[0].o)
                                arg47.32 = _mm256_maskstore_ps(arg16, 
                                    _mm256_blendv_ps(arg19, arg15, arg13))
                                arg12 = __vpbroadcastd_ymmqq_memd(0x2000000)
                                arg22 = arg21 & arg12
                                arg12 = _mm256_cmpeq_epi32(arg22, arg12)
                                arg13[0].o = _mm256_extracti128_si256(arg12, 1)
                                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
                                arg13[0].o = zmm1[0].o & arg12[0].o
                                arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
                                arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                char temp0_1698 = __vpmovmskb_gpr32d_xmmdq(arg12[0].o)
                                
                                if (temp0_1698 == 0)
                                    arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                                    arg14[0].o = arg54
                                else
                                    if ((temp0_1698 & 1) == 0)
                                        if ((temp0_1698 & 2) != 0)
                                            goto label_1401945d5
                                        
                                        goto label_1401937d4
                                    
                                    zmm11[0].o = __vpbroadcastw_xmmdq_memw(*__return_addr.32[0].q)
                                    
                                    if ((temp0_1698 & 2) != 0)
                                    label_1401945d5:
                                        uint16_t* rax_258 =
                                            __vpextrq_gpr64q_xmmdq_immb(__return_addr.32[0].o, 1)
                                        zmm11[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm11[0].o, *rax_258, 1)
                                        
                                        if ((temp0_1698 & 4) == 0)
                                            goto label_1401937dd
                                        
                                        goto label_1401945e9
                                    
                                label_1401937d4:
                                    
                                    if ((temp0_1698 & 4) == 0)
                                    label_1401937dd:
                                        
                                        if ((temp0_1698 & 8) != 0)
                                            goto label_140194607
                                        
                                        goto label_1401937e6
                                    
                                label_1401945e9:
                                    arg12 = __return_addr.32
                                    arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                                    zmm11[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm11[0].o, *arg12[0].q, 2)
                                    
                                    if ((temp0_1698 & 8) != 0)
                                    label_140194607:
                                        arg12 = __return_addr.32
                                        arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                                        uint16_t* rax_260 =
                                            __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm11[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm11[0].o, *rax_260, 3)
                                        arg13 = _mm256_cvtepu16_epi32(arg13[0].o)
                                        
                                        if ((temp0_1698 & 0x10) == 0)
                                            goto label_1401937f4
                                        
                                        goto label_140194636
                                    
                                label_1401937e6:
                                    arg13 = _mm256_cvtepu16_epi32(arg13[0].o)
                                    int64_t rax_235
                                    
                                    if ((temp0_1698 & 0x10) != 0)
                                    label_140194636:
                                        zmm11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm11[0].o, 
                                            *arg23[0].q, 4)
                                        arg13 = _mm256_slli_epi32(arg13, 0x1f)
                                        
                                        if ((temp0_1698 & 0x20) != 0)
                                            rax_235 = __vpextrq_gpr64q_xmmdq_immb(arg23[0].o, 1)
                                            zmm11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                zmm11[0].o, *rax_235, 5)
                                    else
                                    label_1401937f4:
                                        arg13 = _mm256_slli_epi32(arg13, 0x1f)
                                        
                                        if ((temp0_1698 & 0x20) != 0)
                                            rax_235 = __vpextrq_gpr64q_xmmdq_immb(arg23[0].o, 1)
                                            zmm11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                zmm11[0].o, *rax_235, 5)
                                    arg13 = _mm256_srai_epi32(arg13, 0x1f)
                                    arg15 = __vpbroadcastq_ymmqq_memq(2)
                                    zmm10 = data_143442920
                                    arg19 = data_143442940
                                    
                                    if ((temp0_1698 & 0x40) != 0)
                                        arg12 = arg23
                                        arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                                        zmm11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm11[0].o, 
                                            *arg12[0].q, 6)
                                    
                                    arg18 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg23)
                                    arg15 = __vpaddq_ymmqq_ymmqq_memqq(arg15, __return_addr.32)
                                    zmm10 = _mm256_permutevar8x32_epi32(zmm10, arg13)
                                    arg13 = _mm256_permutevar8x32_epi32(arg19, arg13)
                                    
                                    if (temp0_1698 s< 0)
                                        arg12 = arg23
                                        arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                                        int64_t rax_237 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm11[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm11[0].o, *rax_237, 7)
                                    
                                    arg14[0].o = arg54
                                    arg19[0].o = zx.o(0)
                                    __return_addr.32 =
                                        _mm256_blendv_ps(__return_addr.32, arg15, zmm10)
                                    arg23 = _mm256_blendv_ps(arg23, arg18, arg13)
                                    arg13 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                                        _mm256_cvtepu16_epi32(zmm11[0].o), 
                                        __vpbroadcastd_ymmqq_memd(0xffffff01)))
                                    arg15 = _mm256_cmpeq_epi32(arg15, arg15)
                                
                                arg49.32 = _mm256_maskstore_ps(arg16, 
                                    _mm256_cmpeq_epi32(arg22, arg19) & not.32(arg13))
                                arg12 = __vpbroadcastd_ymmqq_memd(0x4000000)
                                zmm11 = arg21 & arg12
                                arg12 = _mm256_cmpeq_epi32(zmm11, arg12)
                                arg13[0].o = _mm256_extracti128_si256(arg12, 1)
                                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
                                arg12[0].o &= zmm1[0].o
                                arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                char temp0_1729 = __vpmovmskb_gpr32d_xmmdq(arg12[0].o)
                                
                                if (temp0_1729 == 0)
                                    arg22[0].o = arg20[0].o
                                    arg20 = arg31
                                else
                                    arg22[0].o = arg20[0].o
                                    
                                    if ((temp0_1729 & 1) == 0)
                                        arg20 = arg31
                                        
                                        if ((temp0_1729 & 2) != 0)
                                            goto label_140194674
                                        
                                        goto label_14019393f
                                    
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*__return_addr.32[0].q)
                                    arg20 = arg31
                                    
                                    if ((temp0_1729 & 2) != 0)
                                    label_140194674:
                                        int64_t rax_263 =
                                            __vpextrq_gpr64q_xmmdq_immb(__return_addr.32[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_263, 1)
                                        
                                        if ((temp0_1729 & 4) == 0)
                                            goto label_140193948
                                        
                                        goto label_140194688
                                    
                                label_14019393f:
                                    
                                    if ((temp0_1729 & 4) == 0)
                                    label_140193948:
                                        
                                        if ((temp0_1729 & 8) != 0)
                                            goto label_1401946a6
                                        
                                        goto label_140193951
                                    
                                label_140194688:
                                    arg12 = __return_addr.32
                                    arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg12[0].q, 2)
                                    
                                    if ((temp0_1729 & 8) != 0)
                                    label_1401946a6:
                                        arg12 = __return_addr.32
                                        arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                                        int64_t rax_265 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_265, 3)
                                        
                                        if ((temp0_1729 & 0x10) == 0)
                                            goto label_14019395a
                                        
                                        goto label_1401946d0
                                    
                                label_140193951:
                                    
                                    if ((temp0_1729 & 0x10) == 0)
                                    label_14019395a:
                                        
                                        if ((temp0_1729 & 0x20) != 0)
                                            goto label_1401946e4
                                        
                                        goto label_140193963
                                    
                                label_1401946d0:
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg23[0].q, 4)
                                    
                                    if ((temp0_1729 & 0x20) != 0)
                                    label_1401946e4:
                                        int64_t rax_267 = __vpextrq_gpr64q_xmmdq_immb(arg23[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_267, 5)
                                        
                                        if ((temp0_1729 & 0x40) == 0)
                                            goto label_14019396c
                                        
                                        goto label_1401946f8
                                    
                                label_140193963:
                                    
                                    if ((temp0_1729 & 0x40) != 0)
                                    label_1401946f8:
                                        arg12 = arg23
                                        arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg12[0].q, 6)
                                        
                                        if (temp0_1729 s< 0)
                                        label_140194716:
                                            arg12 = arg23
                                            arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                                            int64_t rax_269 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_269, 7)
                                    else
                                    label_14019396c:
                                        
                                        if (temp0_1729 s< 0)
                                            goto label_140194716
                                    
                                    arg12 = _mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                        __vpbroadcastd_ymmqq_memd(0xffffff01))
                                    zmm1 = _mm256_cvtepi32_ps(arg12)
                                
                                arg12[0].o = zx.o(0)
                                arg12 = _mm256_cmpeq_epi32(zmm11, arg12) & not.32(zmm1)
                                arg51.32 = _mm256_maskstore_ps(arg16, arg12)
                                zmm11 = arg_460
                            
                            arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg17[0].o, arg14[0].o)
                            arg12[0].o ^= arg3[0].o
                            zmm1[0].o = arg12[0].o & arg22[0].o
                            arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                arg12 = __vpbroadcastd_ymmqq_memd(6)
                                arg3 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg12, arg35)
                                arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
                                arg13[0].o = arg12[0].o & arg22[0].o
                                arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
                                arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                    arg12 = _mm256_srai_epi32(
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 
                                        0x1f)
                                    arg13[0].o = zx.o(0)
                                    arg47.32 = _mm256_maskstore_ps(arg12, arg13)
                                    arg49.32 = _mm256_maskstore_ps(arg12, arg13)
                                    arg51.32 = _mm256_maskstore_ps(arg12, arg13)
                                
                                arg12 = arg3 ^ _mm256_cmpeq_epi32(arg12, arg12)
                                arg3[0].o = _mm256_extracti128_si256(arg12, 1)
                                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg3[0].o)
                                zmm1[0].o &= arg12[0].o
                                arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                    arg12 = _mm256_srai_epi32(
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f), 
                                        0x1f)
                                    zmm1[0].o = zx.o(0)
                                    arg47.32 = _mm256_maskstore_ps(arg12, zmm1)
                                    arg49.32 = _mm256_maskstore_ps(arg12, zmm1)
                                    arg51.32 = _mm256_maskstore_ps(arg12, zmm1)
                    
                    arg3 = arg27
                    arg12 = _mm256_cmpeq_epi32(zmm11, arg3) ^ arg15
                    zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                    arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                    arg22[0].o &= arg12[0].o
                    arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg22[0].o, 0xf)
                    arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                    arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    
                    if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                        zmm10 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg22[0].o), 0x1f)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_memdq(arg_60[0].o, arg55[0].o)
                        arg12 = __vpmulld_ymmqq_ymmqq_memqq(arg3, arg25)
                        arg3[0].o = _mm256_extracti128_si256(arg12, 1)
                        arg13 = _mm256_cvtepi32_epi64(arg3[0].o)
                        arg12 = _mm256_cvtepi32_epi64(arg12[0].o)
                        arg23 = arg12
                        arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg12, arg28)
                        arg25 = arg13
                        arg_60 = __vpaddq_ymmqq_ymmqq_memqq(
                            __vpaddq_ymmqq_ymmqq_memqq(arg13, arg29), arg34)
                        zmm11 = arg44
                        arg12 = _mm256_add_epi64(arg3, zmm11)
                        __return_addr.32 = arg12
                        zmm1[0].o &= arg22[0].o
                        arg3[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        arg3[0].o = __vpsraw_xmmdq_xmmdq_immb(arg3[0].o, 0xf)
                        arg3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(arg3[0].o) != 0)
                            arg3 = arg21 & __vpbroadcastd_ymmqq_memd(0x7000000)
                            arg13[0].o = zx.o(0)
                            arg20 = _mm256_cmpeq_epi32(arg3, arg13)
                            arg13[0].o = _mm256_extracti128_si256(arg20, 1)
                            arg13[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg20[0].o, arg13[0].o)
                            arg13[0].o &= zmm1[0].o
                            arg14[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
                            arg14[0].o = __vpsraw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                            arg14[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg14[0].o, arg12[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(arg14[0].o) != 0)
                                arg13 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 
                                    0x1f)
                                arg14 = __vpaddq_ymmqq_ymmqq_memqq(arg29, arg37)
                                arg15 = __vpaddq_ymmqq_ymmqq_memqq(arg28, arg26)
                                arg18 = __vpbroadcastq_ymmqq_memq(4)
                                arg15 = __vpaddq_ymmqq_ymmqq_memqq(arg15, arg23)
                                arg14 = __vpaddq_ymmqq_ymmqq_memqq(arg14, arg25)
                                arg19 = _mm256_add_epi64(arg14, arg18)
                                arg18 = _mm256_add_epi64(arg15, arg18)
                                arg28[0].o = _mm256_extracti128_si256(arg13, 1)
                                arg16[0].o = arg13[0].o
                                arg21[0].o = zx.o(0)
                                float temp0_1809[0x4]
                                int32_t temp1_84
                                temp0_1809, temp1_84 =
                                    _mm256_i64gather_ps(arg21[0].o, *(r12 + arg18[0].q), arg16[0].o)
                                arg21[0].o = temp0_1809
                                arg16[0].o = temp1_84
                                arg16[0].o = arg28[0].o
                                arg17[0].o = zx.o(0)
                                float temp0_1810[0x4]
                                int32_t temp1_85
                                temp0_1810, temp1_85 =
                                    _mm256_i64gather_ps(arg17[0].o, *(r12 + arg19[0].q), arg16[0].o)
                                arg17[0].o = temp0_1810
                                arg16[0].o = temp1_85
                                arg16 = __vpbroadcastq_ymmqq_memq(8)
                                arg18 = _mm256_add_epi64(arg14, arg16)
                                arg19 = _mm256_add_epi64(arg15, arg16)
                                arg16[0].o = arg13[0].o
                                zmm11[0].o = zx.o(0)
                                float temp0_1814[0x4]
                                int32_t temp1_86
                                temp0_1814, temp1_86 =
                                    _mm256_i64gather_ps(zx.o(0), *(r12 + arg19[0].q), arg16[0].o)
                                zmm11[0].o = temp0_1814
                                arg16[0].o = temp1_86
                                arg16[0].o = arg28[0].o
                                arg3[0].o = zx.o(0)
                                float temp0_1815[0x4]
                                int32_t temp1_87
                                temp0_1815, temp1_87 =
                                    _mm256_i64gather_ps(zx.o(0), *(r12 + arg18[0].q), arg16[0].o)
                                arg3[0].o = temp0_1815
                                arg16[0].o = temp1_87
                                arg16 = __vpbroadcastq_ymmqq_memq(0xc)
                                arg18 = _mm256_add_epi64(arg15, arg16)
                                arg15[0].o = arg13[0].o
                                arg19[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg19[0].o, arg19[0].o)
                                float temp0_1819[0x4]
                                int32_t temp1_88
                                temp0_1819, temp1_88 =
                                    _mm256_i64gather_ps(arg19[0].o, *(r12 + arg18[0].q), arg15[0].o)
                                arg19[0].o = temp0_1819
                                arg15[0].o = temp1_88
                                arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                                arg14 = _mm256_add_epi64(arg14, arg16)
                                float temp0_1822[0x4]
                                int32_t temp1_89
                                temp0_1822, temp1_89 =
                                    _mm256_i64gather_ps(arg15[0].o, *(r12 + arg14[0].q), arg28[0].o)
                                arg15[0].o = temp0_1822
                                arg28[0].o = temp1_89
                                arg12 = _mm256_insertf128_ps(arg21, arg17[0].o, 1)
                                arg3 = _mm256_insertf128_ps(zmm11, arg3[0].o, 1)
                                zmm11 = arg44
                                arg14 = _mm256_insertf128_ps(arg19, arg15[0].o, 1)
                                arg56 = _mm256_maskstore_ps(arg13, arg12)
                                arg57 = _mm256_maskstore_ps(arg13, arg3)
                                arg58 = _mm256_maskstore_ps(arg13, arg14)
                            
                            arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                            arg3 = arg20 ^ arg13
                            arg13[0].o = _mm256_extracti128_si256(arg3, 1)
                            arg3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg13[0].o)
                            arg3[0].o &= zmm1[0].o
                            zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg3[0].o, 0xf)
                            zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                            arg20 = arg31
                            
                            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                                arg18 = _mm256_srai_epi32(
                                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg3[0].o), 0x1f), 0x1f)
                                arg14 = _mm256_srai_epi32(_mm256_slli_epi32(temp0_1020, 0x1f), 0x1f)
                                arg13 = arg14 & arg18
                                
                                if (_mm256_movemask_ps(arg13) == 0)
                                    arg19 = __return_addr.32
                                    arg21 = arg_60
                                else
                                    arg12 = __vpbroadcastq_ymmqq_memq(4)
                                    zmm1 = __return_addr.32
                                    arg19 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, arg12), 
                                        _mm256_permutevar8x32_ps(data_143442920, arg13))
                                    float temp0_1846[0x8] =
                                        _mm256_permutevar8x32_ps(data_143442940, arg13)
                                    arg16 = __vpaddq_ymmqq_ymmqq_memqq(arg29, arg37)
                                    arg17 = __vpaddq_ymmqq_ymmqq_memqq(
                                        __vpaddq_ymmqq_ymmqq_memqq(arg28, arg26), arg23)
                                    arg16 = _mm256_add_epi64(
                                        __vpaddq_ymmqq_ymmqq_memqq(arg16, arg25), arg12)
                                    arg17 = _mm256_add_epi64(arg17, arg12)
                                    arg28[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                    zmm11[0].o = zx.o(0)
                                    float temp0_1854[0x4]
                                    int32_t temp1_90
                                    temp0_1854, temp1_90 = _mm256_i64gather_ps(zmm11[0].o, 
                                        *(r12 + arg17[0].q), arg13[0].o)
                                    zmm11[0].o = temp0_1854
                                    arg13[0].o = temp1_90
                                    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                                    float temp0_1856[0x4]
                                    int32_t temp1_91
                                    temp0_1856, temp1_91 = _mm256_i64gather_ps(arg13[0].o, 
                                        *(r12 + arg16[0].q), arg28[0].o)
                                    arg13[0].o = temp0_1856
                                    arg28[0].o = temp1_91
                                    zmm1 = arg_60
                                    arg21 = _mm256_blendv_ps(zmm1, _mm256_add_epi64(zmm1, arg12), 
                                        temp0_1846)
                                    arg15 = _mm256_insertf128_ps(zmm11, arg13[0].o, 1)
                                
                                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                                arg56 = _mm256_maskstore_ps(arg18, 
                                    _mm256_blendv_ps(arg13, arg15, arg14))
                                arg12 = __vpbroadcastd_ymmqq_memd(0x2000000)
                                arg14 = arg12 & arg24
                                arg12 = _mm256_cmpeq_epi32(arg14, arg12)
                                zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                                arg15[0].o = arg3[0].o & arg12[0].o
                                arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
                                arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                    arg12 = _mm256_srai_epi32(
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 
                                        0x1f)
                                    zmm1 = _mm256_permutevar8x32_epi32(data_143442920, arg12)
                                    arg15 = _mm256_permutevar8x32_epi32(data_143442940, arg12)
                                    arg16[0].o = _mm256_extracti128_si256(arg12, 1)
                                    arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
                                    float temp0_1878[0x4]
                                    int32_t temp1_92
                                    temp0_1878, temp1_92 =
                                        _mm256_i64gather_ps(arg17[0].o, *arg19[0].q, arg12[0].o)
                                    arg17[0].o = temp0_1878
                                    arg12[0].o = temp1_92
                                    arg12 = __vpbroadcastq_ymmqq_memq(4)
                                    arg19 = _mm256_blendv_ps(arg19, _mm256_add_epi64(arg19, arg12), 
                                        zmm1)
                                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                    float temp0_1883[0x4]
                                    int32_t temp1_93
                                    temp0_1883, temp1_93 =
                                        _mm256_i64gather_ps(zmm1[0].o, *arg21[0].q, arg16[0].o)
                                    zmm1[0].o = temp0_1883
                                    arg16[0].o = temp1_93
                                    arg21 = _mm256_blendv_ps(arg21, _mm256_add_epi64(arg21, arg12), 
                                        arg15)
                                    arg15 = _mm256_insertf128_ps(arg17, zmm1[0].o, 1)
                                
                                zmm11 = arg44
                                arg57 = _mm256_maskstore_ps(arg18, 
                                    _mm256_cmpeq_epi32(arg14, arg13) & not.32(arg15))
                                arg12 = __vpbroadcastd_ymmqq_memd(0x4000000)
                                arg13 = arg12 & arg24
                                arg12 = _mm256_cmpeq_epi32(arg13, arg12)
                                zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
                                arg3[0].o &= arg12[0].o
                                arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg3[0].o, 0xf)
                                arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                    arg12 = _mm256_srai_epi32(
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg3[0].o), 0x1f), 
                                        0x1f)
                                    zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                                    arg3[0].o = zx.o(0)
                                    float temp0_1901[0x4]
                                    int32_t temp1_94
                                    temp0_1901, temp1_94 =
                                        _mm256_i64gather_ps(zx.o(0), *arg19[0].q, arg12[0].o)
                                    arg3[0].o = temp0_1901
                                    arg12[0].o = temp1_94
                                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                    float temp0_1903[0x4]
                                    int32_t temp1_95
                                    temp0_1903, temp1_95 =
                                        _mm256_i64gather_ps(arg12[0].o, *arg21[0].q, zmm1[0].o)
                                    arg12[0].o = temp0_1903
                                    zmm1[0].o = temp1_95
                                    arg3 = _mm256_insertf128_ps(arg3, arg12[0].o, 1)
                                
                                arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                arg12 = _mm256_cmpeq_epi32(arg13, arg12) & not.32(arg3)
                                arg58 = _mm256_maskstore_ps(arg18, arg12)
                        
                        arg21 = _mm256_srai_epi32(zmm10, 0x1f)
                        zmm1[0].o = arg22[0].o & arg33[0].o
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                        
                        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                            arg3 = arg30
                            arg12[0].o = __vpackssdw_xmmdq_xmmdq_memdq(arg3[0].o, arg43[0].o)
                            zmm1[0].o = arg22[0].o & arg12[0].o
                            arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                            arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                zmm10 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                arg12[0].o = zx.o(0)
                                arg_3a0 = arg12
                                arg_380 = arg12
                                arg_360 = arg12
                                arg_340 = arg12
                                arg_320 = arg12
                                arg_300 = arg12
                                arg3 &= _mm256_srai_epi32(_mm256_slli_epi32(temp0_1020, 0x1f), 0x1f)
                                arg13 = arg3 & arg21
                                
                                if (_mm256_movemask_ps(arg13) != 0)
                                    arg12 = __vpbroadcastq_ymmqq_memq(4)
                                    arg14 = _mm256_add_epi64(zmm11, arg12)
                                    float temp0_1924[0x8] =
                                        _mm256_permutevar8x32_ps(data_143442920, arg13)
                                    arg14 = _mm256_blendv_ps(zmm11, arg14, temp0_1924)
                                    arg16 = zmm11
                                    zmm11 = _mm256_add_epi64(arg34, arg12)
                                    arg18 = data_143442940
                                    arg17[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                                    arg19[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg19[0].o, arg19[0].o)
                                    zmm1[0].o = arg13[0].o
                                    float temp0_1929[0x4]
                                    int32_t temp1_96
                                    temp0_1929, temp1_96 =
                                        _mm256_i64gather_ps(arg19[0].o, *arg16[0].q, zmm1[0].o)
                                    arg19[0].o = temp0_1929
                                    zmm1[0].o = temp1_96
                                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                    arg16[0].o = arg17[0].o
                                    float temp0_1931[0x4]
                                    int32_t temp1_97
                                    temp0_1931, temp1_97 =
                                        _mm256_i64gather_ps(zmm1[0].o, *arg34[0], arg16[0].o)
                                    zmm1[0].o = temp0_1931
                                    arg16[0].o = temp1_97
                                    arg16 = _mm256_permutevar8x32_ps(arg18, arg13)
                                    arg18 = _mm256_blendv_ps(arg34, zmm11, arg16)
                                    arg_360 = _mm256_maskstore_ps(arg3, 
                                        _mm256_insertf128_ps(arg19, zmm1[0].o, 1))
                                    zmm1 = _mm256_add_epi64(arg14, arg12)
                                    zmm11 = _mm256_blendv_ps(arg14, zmm1, temp0_1924)
                                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                    float temp0_1939[0x4]
                                    int32_t temp1_98
                                    temp0_1939, temp1_98 =
                                        _mm256_i64gather_ps(zmm1[0].o, *arg14[0].q, arg13[0].o)
                                    zmm1[0].o = temp0_1939
                                    arg13[0].o = temp1_98
                                    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                                    float temp0_1941[0x4]
                                    int32_t temp1_99
                                    temp0_1941, temp1_99 =
                                        _mm256_i64gather_ps(arg13[0].o, *arg18[0].q, arg17[0].o)
                                    arg13[0].o = temp0_1941
                                    arg17[0].o = temp1_99
                                    arg34 = _mm256_blendv_ps(arg18, _mm256_add_epi64(arg18, arg12), 
                                        arg16)
                                    arg_300 = _mm256_maskstore_ps(arg3, 
                                        _mm256_insertf128_ps(zmm1, arg13[0].o, 1))
                                
                                arg19 = _mm256_slli_epi32(zmm10, 0x1f)
                                arg12 = __vpbroadcastd_ymmqq_memd(0x2000000)
                                arg12 = _mm256_cmpeq_epi32(arg12 & arg24, arg12)
                                arg3 = arg12 & arg30
                                arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
                                arg13[0].o = arg22[0].o & arg12[0].o
                                arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
                                arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                    arg12 = _mm256_srai_epi32(
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 
                                        0x1f)
                                    arg13 = __vpbroadcastq_ymmqq_memq(4)
                                    arg14 = _mm256_add_epi64(zmm11, arg13)
                                    arg15 = _mm256_permutevar8x32_epi32(data_143442920, arg12)
                                    arg14 = _mm256_blendv_ps(zmm11, arg14, arg15)
                                    arg16 = zmm11
                                    zmm11 = _mm256_add_epi64(arg34, arg13)
                                    arg18 = data_143442940
                                    arg17[0].o = _mm256_extracti128_si256(arg12, 1)
                                    zmm1[0].o = arg12[0].o
                                    zmm10[0].o = zx.o(0)
                                    float temp0_1964[0x4]
                                    int32_t temp1_100
                                    temp0_1964, temp1_100 =
                                        _mm256_i64gather_ps(zx.o(0), *arg16[0].q, zmm1[0].o)
                                    zmm10[0].o = temp0_1964
                                    zmm1[0].o = temp1_100
                                    zmm1[0].o = arg17[0].o
                                    arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                                    float temp0_1966[0x4]
                                    int32_t temp1_101
                                    temp0_1966, temp1_101 =
                                        _mm256_i64gather_ps(arg16[0].o, *arg34[0], zmm1[0].o)
                                    arg16[0].o = temp0_1966
                                    zmm1[0].o = temp1_101
                                    zmm1 = _mm256_permutevar8x32_epi32(arg18, arg12)
                                    arg18 = _mm256_blendv_ps(arg34, zmm11, zmm1)
                                    arg_380 = _mm256_maskstore_ps(arg3, 
                                        _mm256_insertf128_ps(zmm10, arg16[0].o, 1))
                                    arg16 = _mm256_add_epi64(arg14, arg13)
                                    zmm11 = _mm256_blendv_ps(arg14, arg16, arg15)
                                    arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                                    float temp0_1974[0x4]
                                    int32_t temp1_102
                                    temp0_1974, temp1_102 =
                                        _mm256_i64gather_ps(arg15[0].o, *arg14[0].q, arg12[0].o)
                                    arg15[0].o = temp0_1974
                                    arg12[0].o = temp1_102
                                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                    float temp0_1976[0x4]
                                    int32_t temp1_103
                                    temp0_1976, temp1_103 =
                                        _mm256_i64gather_ps(arg12[0].o, *arg18[0].q, arg17[0].o)
                                    arg12[0].o = temp0_1976
                                    arg17[0].o = temp1_103
                                    arg13 = _mm256_add_epi64(arg18, arg13)
                                    arg34 = _mm256_blendv_ps(arg18, arg13, zmm1)
                                    arg_320 = _mm256_maskstore_ps(arg3, 
                                        _mm256_insertf128_ps(arg15, arg12[0].o, 1))
                                
                                arg20 = arg31
                                zmm1 = _mm256_srai_epi32(arg19, 0x1f)
                                arg12 = __vpbroadcastd_ymmqq_memd(0x4000000)
                                arg12 = _mm256_cmpeq_epi32(arg12 & arg24, arg12)
                                arg3 = arg12 & arg30
                                arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
                                arg13[0].o = arg22[0].o & arg12[0].o
                                arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
                                arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                    arg12 = _mm256_srai_epi32(
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 0x1f), 
                                        0x1f)
                                    arg13 = __vpbroadcastq_ymmqq_memq(4)
                                    arg14 = _mm256_add_epi64(zmm11, arg13)
                                    arg15 = _mm256_permutevar8x32_epi32(data_143442920, arg12)
                                    arg14 = _mm256_blendv_ps(zmm11, arg14, arg15)
                                    zmm10 = arg34
                                    int64_t temp0_1997[0x4] = _mm256_add_epi64(zmm10, arg13)
                                    arg19 = data_143442940
                                    arg16[0].o = _mm256_extracti128_si256(arg12, 1)
                                    arg17[0].o = arg12[0].o
                                    arg18[0] = __vxorps_xmmdq_xmmdq_xmmdq(arg18[0], arg18[0])
                                    float temp0_2000[0x4]
                                    int32_t temp1_104
                                    temp0_2000, temp1_104 =
                                        _mm256_i64gather_ps(arg18[0], *zmm11[0].q, arg17[0].o)
                                    arg18[0] = temp0_2000
                                    arg17[0].o = temp1_104
                                    arg17[0].o = arg16[0].o
                                    arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                                    float temp0_2002[0x4]
                                    int32_t temp1_105
                                    temp0_2002, temp1_105 =
                                        _mm256_i64gather_ps(arg15[0].o, *zmm10[0].q, arg17[0].o)
                                    arg15[0].o = temp0_2002
                                    arg17[0].o = temp1_105
                                    arg13 = _mm256_blendv_ps(zmm10, temp0_1997, 
                                        _mm256_permutevar8x32_epi32(arg19, arg12))
                                    arg15 = _mm256_insertf128_ps(arg18, arg15[0].o, 1)
                                    arg_3a0 = _mm256_maskstore_ps(arg3, arg15)
                                    arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                                    float temp0_2008[0x4]
                                    int32_t temp1_106
                                    temp0_2008, temp1_106 =
                                        _mm256_i64gather_ps(arg15[0].o, *arg14[0].q, arg12[0].o)
                                    arg15[0].o = temp0_2008
                                    arg12[0].o = temp1_106
                                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                    float temp0_2010[0x4]
                                    int32_t temp1_107
                                    temp0_2010, temp1_107 =
                                        _mm256_i64gather_ps(arg12[0].o, *arg13[0], arg16[0].o)
                                    arg12[0].o = temp0_2010
                                    arg16[0].o = temp1_107
                                    arg_340 = _mm256_maskstore_ps(arg3, 
                                        _mm256_insertf128_ps(arg15, arg12[0].o, 1))
                                
                                arg12 = __vpaddq_ymmqq_ymmqq_memqq(arg29, arg37)
                                arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg28, arg26)
                                arg13 = __vpbroadcastq_ymmqq_memq(4)
                                arg3 = __vpaddq_ymmqq_ymmqq_memqq(arg3, arg23)
                                arg12 = _mm256_add_epi64(__vpaddq_ymmqq_ymmqq_memqq(arg12, arg25), 
                                    arg13)
                                arg3 = _mm256_add_epi64(arg3, arg13)
                                arg13[0].o = zx.o(0)
                                arg14[0].o = zmm1[0].o
                                uint32_t temp0_2020[0x4]
                                int32_t temp1_108
                                temp0_2020, temp1_108 =
                                    _mm256_i64gather_epi32(zx.o(0), *(r12 + arg3[0].q), arg14[0].o)
                                arg13[0].o = temp0_2020
                                arg14[0].o = temp1_108
                                arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
                                arg14[0].o = zx.o(0)
                                uint32_t temp0_2022[0x4]
                                int32_t temp1_109
                                temp0_2022, temp1_109 =
                                    _mm256_i64gather_epi32(zx.o(0), *(r12 + arg12[0].q), arg3[0].o)
                                arg14[0].o = temp0_2022
                                arg3[0].o = temp1_109
                                arg12 = _mm256_inserti128_si256(arg13, arg14[0].o, 1)
                                arg3 = _mm256_srli_epi32(arg12, 0x15)
                                arg13 =
                                    _mm256_srli_epi32(arg12, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                                arg15 = arg_320
                                arg16 = arg_340
                                float temp0_2033[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(arg_300, 
                                    _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_add_epi32(
                                            arg12 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                            __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                        _mm256_broadcast_ss(511f)), 
                                    arg_360)
                                arg12 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                arg13 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg13, arg12))
                                arg17 = _mm256_broadcast_ss(1023f)
                                arg13 = _mm256_div_ps(arg13, arg17)
                                float temp0_2041[0x8] = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(arg3, arg12)), arg17)
                                arg13 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg13, arg15, arg_380)
                                arg12 = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_2041, arg16, arg_3a0)
                                arg56 = _mm256_maskstore_ps(zmm1, temp0_2033)
                                arg57 = _mm256_maskstore_ps(zmm1, arg13)
                                arg58 = _mm256_maskstore_ps(zmm1, arg12)
                                arg3 = arg30
                            
                            arg12[0].o = __vpackssdw_xmmdq_xmmdq_memdq(arg3[0].o, arg43[0].o)
                            arg19[0].o = arg12[0].o ^ arg33[0].o
                            arg12[0].o = arg22[0].o & arg19[0].o
                            arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                            arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                            arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            
                            if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                arg12 = __vpbroadcastd_ymmqq_memd(2)
                                arg18 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg12, arg35)
                                arg13[0].o = _mm256_extracti128_si256(arg18, 1)
                                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg18[0], arg13[0].o)
                                zmm1[0].o = arg22[0].o & arg12[0].o
                                arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                    arg12 = _mm256_srai_epi32(
                                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 0x1f), 
                                        0x1f)
                                    int32_t temp0_2064[0x8] =
                                        _mm256_srai_epi32(_mm256_slli_epi32(temp0_1020, 0x1f), 0x1f)
                                    arg14 = temp0_2064 & arg12
                                    bool cond:19_1 = _mm256_movemask_ps(arg14) == 0
                                    arg30[0].o = arg13[0].o
                                    arg34 = arg18
                                    
                                    if (cond:19_1)
                                        zmm11 = arg_60
                                    else
                                        arg15 = __vpbroadcastq_ymmqq_memq(2)
                                        arg16 = _mm256_add_epi64(arg_60, arg15)
                                        arg18 = __return_addr.32
                                        arg15 = _mm256_add_epi64(arg18, arg15)
                                        arg17 = _mm256_permutevar8x32_ps(data_143442920, arg14)
                                        __return_addr.32 = _mm256_blendv_ps(arg18, arg15, arg17)
                                        float temp0_2071[0x8] =
                                            _mm256_permutevar8x32_ps(data_143442940, arg14)
                                        zmm11 = _mm256_blendv_ps(arg_60, arg16, temp0_2071)
                                        arg15 = __vpaddq_ymmqq_ymmqq_memqq(arg29, arg37)
                                        arg16 = __vpaddq_ymmqq_ymmqq_memqq(arg28, arg26)
                                        arg18 = __vpbroadcastq_ymmqq_memq(4)
                                        arg16 = __vpaddq_ymmqq_ymmqq_memqq(arg16, arg23)
                                        arg15 = _mm256_add_epi64(
                                            __vpaddq_ymmqq_ymmqq_memqq(arg15, arg25), arg18)
                                        arg16 = _mm256_add_epi64(arg16, arg18)
                                        arg18[0] = zx.o(0)
                                        arg16 = _mm256_blendv_ps(arg18, arg16, arg17)
                                        float temp0_2081[0x8] =
                                            _mm256_blendv_ps(arg18, arg15, temp0_2071)
                                        int64_t r8_5 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                                        int64_t rcx_19 = arg16[0].q
                                        arg15[0].o = _mm256_extracti128_si256(arg16, 1)
                                        int64_t r9_2 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                        int64_t rbx_8 = arg15[0].q
                                        int64_t rdi_9 = temp0_2081[0].q
                                        int64_t rsi_12 =
                                            __vpextrq_gpr64q_xmmdq_immb(temp0_2081[0].o, 1)
                                        temp0_2081[0].o = _mm256_extracti128_si256(temp0_2081, 1)
                                        int64_t rax_256 = temp0_2081[0].q
                                        int64_t rdx_8 =
                                            __vpextrq_gpr64q_xmmdq_immb(temp0_2081[0].o, 1)
                                        temp0_2081[0].o = zx.o(*(r12 + rcx_19))
                                        temp0_2081[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            temp0_2081[0].o, *(r12 + r8_5), 1)
                                        temp0_2081[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            temp0_2081[0].o, *(r12 + rbx_8), 2)
                                        temp0_2081[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            temp0_2081[0].o, *(r12 + r9_2), 3)
                                        temp0_2081[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            temp0_2081[0].o, *(r12 + rdi_9), 4)
                                        temp0_2081[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            temp0_2081[0].o, *(r12 + rsi_12), 5)
                                        temp0_2081[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            temp0_2081[0].o, *(r12 + rax_256), 6)
                                        temp0_2081[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            temp0_2081[0].o, *(r12 + rdx_8), 7)
                                        arg14 = _mm256_cvtepu16_epi32(temp0_2081[0].o)
                                        arg15 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                        arg14 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg14, arg15))
                                    
                                    arg15[0].o = zx.o(0)
                                    arg56 = _mm256_maskstore_ps(arg12, 
                                        _mm256_blendv_ps(arg15, arg14, temp0_2064))
                                    arg3 = __vpbroadcastd_ymmqq_memd(0x2000000)
                                    zmm10 = arg3 & arg24
                                    arg3 = _mm256_cmpeq_epi32(zmm10, arg3)
                                    arg14[0].o = _mm256_extracti128_si256(arg3, 1)
                                    arg3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg14[0].o)
                                    arg14[0].o = zmm1[0].o & arg3[0].o
                                    arg3[0].o = __vpsllw_xmmdq_xmmdq_immb(arg14[0].o, 0xf)
                                    arg3[0].o = __vpsraw_xmmdq_xmmdq_immb(arg3[0].o, 0xf)
                                    arg3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
                                    char temp0_2125 = __vpmovmskb_gpr32d_xmmdq(arg3[0].o)
                                    
                                    if (temp0_2125 == 0)
                                        arg13[0].o = arg30[0].o
                                        arg18 = arg34
                                    else
                                        if ((temp0_2125 & 1) == 0)
                                            if ((temp0_2125 & 2) != 0)
                                                goto label_140194cac
                                            
                                            goto label_1401947a4
                                        
                                        arg3 = __return_addr.32
                                        arg3[0].o = __vpbroadcastw_xmmdq_memw(*arg3[0].q)
                                        
                                        if ((temp0_2125 & 2) != 0)
                                        label_140194cac:
                                            int64_t rax_278 = __vpextrq_gpr64q_xmmdq_immb(
                                                __return_addr.32[0].o, 1)
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                                *rax_278, 1)
                                            
                                            if ((temp0_2125 & 4) == 0)
                                                goto label_1401947ad
                                            
                                            goto label_140194cc0
                                        
                                    label_1401947a4:
                                        
                                        if ((temp0_2125 & 4) == 0)
                                        label_1401947ad:
                                            
                                            if ((temp0_2125 & 8) != 0)
                                                goto label_140194cde
                                            
                                            goto label_1401947b6
                                        
                                    label_140194cc0:
                                        arg15 = __return_addr.32
                                        arg15[0].o = _mm256_extracti128_si256(arg15, 1)
                                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                            *arg15[0].q, 2)
                                        
                                        if ((temp0_2125 & 8) != 0)
                                        label_140194cde:
                                            arg15 = __return_addr.32
                                            arg15[0].o = _mm256_extracti128_si256(arg15, 1)
                                            int64_t rax_280 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                                *rax_280, 3)
                                            arg14 = _mm256_cvtepu16_epi32(arg14[0].o)
                                            
                                            if ((temp0_2125 & 0x10) == 0)
                                                goto label_1401947c4
                                            
                                            goto label_140194d07
                                        
                                    label_1401947b6:
                                        arg14 = _mm256_cvtepu16_epi32(arg14[0].o)
                                        int64_t rax_270
                                        
                                        if ((temp0_2125 & 0x10) != 0)
                                        label_140194d07:
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                                *zmm11[0].q, 4)
                                            arg14 = _mm256_slli_epi32(arg14, 0x1f)
                                            
                                            if ((temp0_2125 & 0x20) != 0)
                                                rax_270 = __vpextrq_gpr64q_xmmdq_immb(zmm11[0].o, 1)
                                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg3[0].o, *rax_270, 5)
                                        else
                                        label_1401947c4:
                                            arg14 = _mm256_slli_epi32(arg14, 0x1f)
                                            
                                            if ((temp0_2125 & 0x20) != 0)
                                                rax_270 = __vpextrq_gpr64q_xmmdq_immb(zmm11[0].o, 1)
                                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg3[0].o, *rax_270, 5)
                                        arg14 = _mm256_srai_epi32(arg14, 0x1f)
                                        arg15 = __vpbroadcastq_ymmqq_memq(2)
                                        arg20 = data_143442920
                                        arg18 = data_143442940
                                        
                                        if ((temp0_2125 & 0x40) != 0)
                                            arg16[0].o = _mm256_extracti128_si256(zmm11, 1)
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                                *arg16[0].q, 6)
                                        
                                        arg17 = zmm11
                                        zmm11 = _mm256_add_epi64(zmm11, arg15)
                                        arg15 = __vpaddq_ymmqq_ymmqq_memqq(arg15, __return_addr.32)
                                        arg20 = _mm256_permutevar8x32_epi32(arg20, arg14)
                                        arg14 = _mm256_permutevar8x32_epi32(arg18, arg14)
                                        
                                        if (temp0_2125 s< 0)
                                            arg16[0].o = _mm256_extracti128_si256(arg17, 1)
                                            int64_t rax_272 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                                *rax_272, 7)
                                        
                                        arg13[0].o = arg30[0].o
                                        arg18 = arg34
                                        arg16 = _mm256_blendv_ps(__return_addr.32, arg15, arg20)
                                        __return_addr.32 = arg16
                                        arg17 = _mm256_blendv_ps(arg17, zmm11, arg14)
                                        arg3 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                                            _mm256_cvtepu16_epi32(arg3[0].o), 
                                            __vpbroadcastd_ymmqq_memd(0xffffff01)))
                                        arg20 = arg31
                                        zmm11 = arg17
                                        arg15[0].o =
                                            __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                                    
                                    arg14 = _mm256_cmpeq_epi32(zmm10, arg15)
                                    arg57 = _mm256_maskstore_ps(arg12, arg14 & not.32(arg3))
                                    arg3 = __vpbroadcastd_ymmqq_memd(0x4000000)
                                    arg15 = arg3 & arg24
                                    arg3 = _mm256_cmpeq_epi32(arg15, arg3)
                                    arg14[0].o = _mm256_extracti128_si256(arg3, 1)
                                    arg3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg14[0].o)
                                    zmm1[0].o &= arg3[0].o
                                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                                    char temp0_2155 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                                    
                                    if (temp0_2155 != 0)
                                        if ((temp0_2155 & 1) == 0)
                                            if ((temp0_2155 & 2) != 0)
                                                goto label_140194d37
                                            
                                            goto label_1401948fc
                                        
                                        zmm1 = __return_addr.32
                                        zmm1[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                                        
                                        if ((temp0_2155 & 2) != 0)
                                        label_140194d37:
                                            arg3 = __return_addr.32
                                            int64_t rax_283 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_283, 1)
                                            
                                            if ((temp0_2155 & 4) == 0)
                                                goto label_140194905
                                            
                                            goto label_140194d50
                                        
                                    label_1401948fc:
                                        
                                        if ((temp0_2155 & 4) == 0)
                                        label_140194905:
                                            
                                            if ((temp0_2155 & 8) != 0)
                                                goto label_140194d6e
                                            
                                            goto label_14019490e
                                        
                                    label_140194d50:
                                        arg3 = __return_addr.32
                                        arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *arg3[0].q, 2)
                                        
                                        if ((temp0_2155 & 8) != 0)
                                        label_140194d6e:
                                            arg3 = __return_addr.32
                                            arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                                            int64_t rax_285 =
                                                __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_285, 3)
                                            
                                            if ((temp0_2155 & 0x10) == 0)
                                                goto label_140194917
                                            
                                            goto label_140194d92
                                        
                                    label_14019490e:
                                        
                                        if ((temp0_2155 & 0x10) == 0)
                                        label_140194917:
                                            
                                            if ((temp0_2155 & 0x20) != 0)
                                                goto label_140194da0
                                            
                                            goto label_140194920
                                        
                                    label_140194d92:
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *zmm11[0].q, 4)
                                        
                                        if ((temp0_2155 & 0x20) != 0)
                                        label_140194da0:
                                            int64_t rax_287 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm11[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_287, 5)
                                            
                                            if ((temp0_2155 & 0x40) == 0)
                                                goto label_140194929
                                            
                                            goto label_140194db4
                                        
                                    label_140194920:
                                        
                                        if ((temp0_2155 & 0x40) != 0)
                                        label_140194db4:
                                            arg3[0].o = _mm256_extracti128_si256(zmm11, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *arg3[0].q, 6)
                                            
                                            if (temp0_2155 s< 0)
                                            label_140194dcc:
                                                arg3[0].o = _mm256_extracti128_si256(zmm11, 1)
                                                int64_t rax_289 =
                                                    __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *rax_289, 7)
                                        else
                                        label_140194929:
                                            
                                            if (temp0_2155 s< 0)
                                                goto label_140194dcc
                                        
                                        zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                        arg3 = __vpbroadcastd_ymmqq_memd(0xffffff01)
                                        zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg3))
                                    
                                    arg3[0].o = zx.o(0)
                                    zmm1 = _mm256_cmpeq_epi32(arg15, arg3) & not.32(zmm1)
                                    arg58 = _mm256_maskstore_ps(arg12, zmm1)
                                
                                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg18[0], arg13[0].o)
                                arg12[0].o ^= arg19[0].o
                                zmm1[0].o = arg22[0].o & arg12[0].o
                                arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                
                                if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                    arg12 = __vpbroadcastd_ymmqq_memd(6)
                                    arg3 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg12, arg35)
                                    arg12[0].o = _mm256_extracti128_si256(arg3, 1)
                                    arg12[0].o =
                                        __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg12[0].o)
                                    arg13[0].o = arg22[0].o & arg12[0].o
                                    arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(arg13[0].o, 0xf)
                                    arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                    arg12[0].o =
                                        __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                    
                                    if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                        arg12 = _mm256_srai_epi32(
                                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg13[0].o), 
                                                0x1f), 
                                            0x1f)
                                        arg13[0].o = zx.o(0)
                                        arg56 = _mm256_maskstore_ps(arg12, arg13)
                                        arg57 = _mm256_maskstore_ps(arg12, arg13)
                                        arg58 = _mm256_maskstore_ps(arg12, arg13)
                                    
                                    arg12 = arg3 ^ _mm256_cmpeq_epi32(arg12, arg12)
                                    arg3[0].o = _mm256_extracti128_si256(arg12, 1)
                                    arg12[0].o =
                                        __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg3[0].o)
                                    zmm1[0].o &= arg12[0].o
                                    arg12[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
                                    arg12[0].o = __vpsraw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
                                    arg12[0].o =
                                        __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                                    
                                    if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                                        arg12 = _mm256_srai_epi32(
                                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                                                0x1f), 
                                            0x1f)
                                        zmm1[0].o = zx.o(0)
                                        arg56 = _mm256_maskstore_ps(arg12, zmm1)
                                        arg57 = _mm256_maskstore_ps(arg12, zmm1)
                                        arg58 = _mm256_maskstore_ps(arg12, zmm1)
                        
                        arg13 = arg47.32
                        arg14 = arg49.32
                        arg15 = arg51.32
                        float temp0_2194[0x8] = _mm256_sub_ps(arg56, arg13)
                        float temp0_2195[0x8] = _mm256_sub_ps(arg57, arg14)
                        arg3 = _mm256_sub_ps(arg58, arg15)
                        arg12 = _mm256_fmadd_ps(temp0_2194, arg20, arg13)
                        float temp0_2198[0x8] = _mm256_fmadd_ps(temp0_2195, arg20, arg14)
                        arg3 = _mm256_fmadd_ps(arg3, arg20, arg15)
                        arg47.32 = _mm256_maskstore_ps(arg21, arg12)
                        arg49.32 = _mm256_maskstore_ps(arg21, temp0_2198)
                        arg51.32 = _mm256_maskstore_ps(arg21, arg3)
                
                zmm10 = arg36
                zmm1 = zmm10 & arg40
                arg12[0].o = _mm256_extracti128_si256(zmm1, 1)
                arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                arg12[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(arg12[0].o) != 0)
                    arg12[0].o = zx.o(0)
                    arg47.32 = _mm256_maskstore_ps(zmm1, arg12)
                    arg49.32 = _mm256_maskstore_ps(zmm1, arg12)
                    arg51.32 = _mm256_maskstore_ps(zmm1, arg12)
                
                zmm1[0].o = arg47
                arg19[0].o = arg48
                arg13[0].o = arg49
                arg14[0].o = arg50
                arg15[0].o = arg51
                arg16[0].o = arg52
                arg18[0] = __vxorps_xmmdq_xmmdq_xmmdq(arg18[0], arg18[0])
                arg12[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg18[0])
                arg17[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg17[0].o, arg15[0].o, 0x28)
                int128_t arg_780 = arg3[0].o
                arg3[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg18[0])
                arg12[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg12[0].o)
                int128_t arg_790 = arg12[0].o
                arg12[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg12[0].o, arg15[0].o, 0xa8)
                int128_t arg_7a0 = zmm1[0].o
                arg12[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg3[0].o)
                int128_t arg_7b0 = arg12[0].o
                arg12[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg18[0])
                zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg19[0].o, arg14[0].o)
                arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg16[0].o, 0x28)
                int128_t arg_7c0 = arg3[0].o
                arg3[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg18[0])
                arg12[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
                int128_t arg_7d0 = arg12[0].o
                arg12[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg19[0].o, arg14[0].o)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg12[0].o, arg16[0].o, 0xa8)
                int128_t arg_7e0 = zmm1[0].o
                arg12[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg3[0].o)
                int128_t arg_7f0 = arg12[0].o
                uint64_t i_4 = zx.q(_mm256_movemask_ps(zmm10))
                
                do
                    uint64_t rcx_22 = _tzcnt_u64(i_4)
                    result = rol.q(-2, rcx_22.b)
                    uint32_t arg_8a0[0x8] = zmm15
                    arg12[0].o = (&arg_780)[rcx_22]
                    *(arg11 + sx.q(arg_8a0[zx.q(rcx_22.d) & 7]) * 0x30 + 0x20) = arg12[0].o
                    i_4 &= result
                while (i_4 != 0)
            
            arg16[0].o = *(arg6 + 0x850)
            arg17[0].o = *(arg6 + 0x860)
            arg18[0] = *(arg6 + 0x870)
            arg19[0].o = *(arg6 + 0x880)
            zmm10[0].o = *(arg6 + 0x890)
            zmm11[0].o = *(arg6 + 0x8a0)
            arg20[0].o = *(arg6 + 0x8b0)
            arg21[0].o = *(arg6 + 0x8c0)
            arg22[0].o = *(arg6 + 0x8d0)
            zmm15[0].o = *(arg6 + 0x8e0)
            *(arg6 + 0x8f8)
            *(arg6 + 0x900)
            *(arg6 + 0x908)
            *(arg6 + 0x910)
            *(arg6 + 0x918)
            *(arg6 + 0x920)
            *(arg6 + 0x928)
            *(arg6 + 0x930)
            _mm256_zeroupper()
            return result
        
        arg12[0].o = zx.o(arg10)
        arg12 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_broadcastd_epi32(arg12[0]), 3), 
            data_143442140)
        zmm15[0].o = zx.o(0)
        arg3 = _mm256_cmpeq_epi32(arg3, arg3)
        uint32_t temp0_2364[0x8]
        int32_t temp1_110
        temp0_2364, temp1_110 = _mm256_i32gather_epi32(zmm15, *(arg45 + arg12[0].q), arg3)
        zmm15 = temp0_2364
        arg3 = temp1_110
        arg12 |= arg21
        arg3[0].o = zx.o(0)
        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
        uint32_t temp0_2366[0x8]
        int32_t temp1_111
        temp0_2366, temp1_111 = _mm256_i32gather_epi32(arg3, *(arg45 + arg12[0].q), arg13)
        arg13 = temp1_111
        arg3 = __vpmulld_ymmqq_ymmqq_memqq(temp0_2366, arg82)
        arg12[0].o = zx.o(0)
        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
        uint32_t temp0_2369[0x8]
        int32_t temp1_112
        temp0_2369, temp1_112 = _mm256_i32gather_epi32(arg12, *(arg46 + arg3[0].q), arg13)
        arg12 = temp0_2369
        arg13 = temp1_112
        arg21 = _mm256_cmpeq_epi32(arg12, arg20)
        zmm10 = arg21 ^ arg20
        
        if (_mm256_movemask_ps(zmm10) == 0)
            arg21 = arg30
            arg12 = zmm10 ^ arg20
            
            if (_mm256_movemask_ps(arg12) == 0)
                goto label_1401917d7
            
            goto label_1401917c2
        
        arg13[0].o = _mm256_extracti128_si256(arg12, 1)
        zmm1[0].o = zx.o(0)
        arg9 = r12
        uint32_t temp0_2373[0x8]
        int32_t temp1_113
        temp0_2373, temp1_113 = _mm256_i32gather_epi32(zmm1, *(r12 + arg12[0].q), zmm10)
        zmm1 = temp0_2373
        arg3[0].o = zx.o(0)
        arg_1e0 = arg3
        arg14 = zmm1 & data_143442840
        arg15 = _mm256_srli_epi32(zmm1, 0x18)
        arg16 = arg15 & __vpbroadcastd_ymmqq_memd(0xf)
        arg17 = _mm256_blendv_ps(arg37, _mm256_srli_epi32(zmm1, 0x1c), zmm10)
        zmm1 = _mm256_slli_epi32(arg17, 2)
        arg15[0].o = zx.o(0)
        uint32_t temp0_2379[0x8]
        int32_t temp1_114
        temp0_2379, temp1_114 = _mm256_i32gather_epi32(arg15, *(&data_143442960 + zmm1[0].q), zmm10)
        arg3 = _mm256_blendv_ps(arg24, arg16, zmm10)
        arg24 = arg3
        int32_t temp0_2382[0x8] = _mm256_and_ps(arg3, _mm256_broadcast_ss(9.80908925e-45f))
        zmm1 = _mm256_slli_epi32(arg17, 3)
        arg16 = __vpbroadcastd_ymmqq_memd(3)
        arg55 = temp0_2382
        zmm1 = arg21 & not.32(_mm256_or_ps(temp0_2382, zmm1))
        int64_t r12_2 = sx.q(zmm1[0])
        int64_t r11_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        int64_t rdi_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        int64_t rbx_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
        int64_t rax_372 = sx.q(zmm1[0])
        int64_t rcx_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        int64_t r8_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        int32_t temp0_2392 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = zx.o(*(r12_2 + &data_143442980))
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(r11_4 + &data_143442980), 1)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(rdi_12 + &data_143442980), 2)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(rbx_18 + &data_143442980), 3)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(rax_372 + &data_143442980), 4)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(rcx_27 + &data_143442980), 5)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(r8_7 + &data_143442980), 6)
        zmm1[0].o =
            __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, *(sx.q(temp0_2392) + &data_143442980), 7)
        arg18 = _mm256_cvtepu8_epi32(zmm1[0].q)
        arg37 = arg17
        arg17 = _mm256_cmpeq_epi32(arg17, arg16)
        arg19 = arg17 & not.32(zmm10)
        zmm1[0].o = _mm256_extracti128_si256(arg19, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg19[0].o, zmm1[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
        char temp0_2405 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
        arg16[0].o = zx.o(0)
        
        if (temp0_2405 != 0)
            arg16 = arg19 & arg18
        
        arg34 = _mm256_cvtepi32_epi64(arg12[0].o)
        arg29 = _mm256_cvtepi32_epi64(arg13[0].o)
        zmm11 = _mm256_blendv_ps(zmm11, arg14, zmm10)
        arg12 = arg21 & not.32(temp0_2379)
        arg19 = arg21 & not.32(arg17)
        zmm1[0].o = _mm256_extracti128_si256(arg19, 1)
        arg54 = zmm1[0].o
        arg13[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg19[0].o, zmm1[0].o)
        arg13[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
        char temp0_2412 = __vpmovmskb_gpr32d_xmmdq(arg13[0].o)
        arg15 = _mm256_broadcast_ss(1.40129846e-45f)
        
        if (temp0_2412 == 0)
            arg13[0].o = zx.o(0)
        else
            arg13 = arg19 & arg18
            arg16 = _mm256_blendv_ps(arg16, arg15, arg19)
        
        r12 = arg9
        arg13 = _mm256_madd_epi16(arg13, arg21 & not.32(arg30))
        arg12 = _mm256_mullo_epi32(arg16, arg12)
        arg18 = __vpaddq_ymmqq_ymmqq_memqq(arg81, arg29)
        arg3 = _mm256_blendv_ps(arg44, arg12, zmm10)
        arg44 = arg3
        __return_addr.32 = _mm256_blendv_ps(__return_addr.32, arg13, zmm10)
        arg14 = __vpaddq_ymmqq_ymmqq_memqq(arg81, arg34)
        arg12 = arg21 & not.32(_mm256_cmpgt_epi32(zmm11, arg15))
        arg13[0].o = _mm256_extracti128_si256(arg12, 1)
        arg12[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
        arg13[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        arg28 = zmm10
        arg26 = arg17
        arg40 = arg14
        arg35 = arg18
        arg23 = arg21
        arg25 = arg19
        arg53 = zmm11
        
        if (__vpmovmskb_gpr32d_xmmdq(arg13[0].o) == 0)
            arg13[0].o = zx.o(0)
            arg12[0].o = zx.o(0)
            arg_60 = arg12
            goto label_14018f7e5
        
        arg31 = arg15
        arg14 = __vpbroadcastd_ymmqq_memd(8) & arg24
        arg19[0].o = zx.o(0)
        zmm1 = _mm256_cmpeq_epi32(arg14, arg19)
        arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
        arg15[0].o = zmm1[0].o & arg12[0].o
        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
            arg13[0].o = zx.o(0)
            zmm10[0].o = zx.o(0)
            zmm1[0].o = zx.o(0)
            arg_60 = zmm1
            arg16[0].o = zx.o(0)
        else
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            zmm1[0].o = zx.o(*(arg6 + 0x978))
            arg3[0].o = zx.o(0)
            
            if (zx.o(0) f>= zmm1[0])
                arg19[0].o = zx.o(0)
                arg13[0].o = zx.o(0)
                zmm10[0].o = zx.o(0)
                zmm1[0].o = zx.o(0)
                arg_60 = zmm1
            else
                bool cond:10_1 = zmm1[0].o f>= 1f
                arg18 = _mm256_add_epi32(zmm11, arg20)
                
                if (cond:10_1)
                    arg19 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 0x1f) & arg18
                    arg13 = arg19
                    zmm10 = arg19
                    arg_60 = arg19
                else
                    float temp0_2438[0x8] =
                        __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg18), arg78)
                    float temp0_2439[0x8] = _mm256_round_ps(temp0_2438, 9)
                    zmm1 = _mm256_min_epi32(arg18, _mm256_cvttps_epi32(temp0_2439))
                    arg3 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f)
                    arg13 = _mm256_srai_epi32(arg3, 0x1f)
                    arg19 = arg13 & zmm1
                    arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                    
                    if (*(arg6 + 0x980) != 1)
                        arg16 = _mm256_sub_ps(temp0_2438, temp0_2439)
                    
                    zmm10 = arg13 & _mm256_min_epi32(_mm256_sub_epi32(arg19, arg20), arg18)
                    arg13 = arg19
                    arg_60 = zmm10
                    zmm11 = zmm11
                    arg17 = arg26
                
                arg18 = arg35
            
            arg16 &=
                _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(arg15[0].o), 0x1f), 0x1f)
        
        arg15 = arg31
        zmm1 = _mm256_cmpeq_epi32(arg14, arg22) ^ arg20
        arg3[0].o = _mm256_extracti128_si256(zmm1, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
        arg12[0].o &= zmm1[0].o
        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg12[0].o, 0xf)
        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 0xf)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0)
            arg_1e0 = arg16
            arg14 = arg40
            arg19 = arg25
            goto label_14018f7e5
        
        arg36 = zmm10
        arg3 = arg13
        zmm10 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg12[0].o), 0x1f)
        arg12 = _mm256_srai_epi32(zmm10, 0x1f)
        zmm1 = _mm256_cmpgt_epi32(__vpbroadcastd_ymmqq_memd(2), zmm11) | arg80
        arg13 = zmm1 & arg12
        
        if (_mm256_movemask_ps(arg13) == 0)
            arg14 = arg40
            arg13 = arg3
        else
            arg19 = _mm256_blendv_ps(arg19, arg22, arg13)
            arg3 = _mm256_blendv_ps(arg36, arg22, arg13)
            arg13 = arg19
            arg36 = arg3
            arg_60 = arg3
            arg14 = arg40
        
        arg21 = zmm1 & not.32(arg12)
        arg1 = _mm256_movemask_ps(arg21)
        arg12[0].o = zx.o(0)
        
        if (arg1 == 0)
            arg21 = arg23
            arg19 = arg25
            goto label_14018f7d6
        
        arg_1e0 = arg16
        arg16 = zmm10
        arg27 = zmm1
        zmm10 = _mm256_add_epi32(zmm11, arg20)
        zmm1[0].o = *(arg6 + 0x978)
        
        if (zmm1[0].o f>= 1f)
            arg13 = _mm256_blendv_ps(arg19, zmm10, arg21)
            arg_60 = _mm256_blendv_ps(arg36, zmm10, arg21)
            arg21 = arg23
            arg19 = arg25
            zmm10 = arg16
            arg16 = arg_1e0
            goto label_14018f7d6
        
        arg3 = __return_addr.32
        arg12[0].o = _mm256_extracti128_si256(arg3, 1)
        arg12 = _mm256_cvtepi32_epi64(arg12[0].o)
        zmm1 = __vpmulld_ymmqq_ymmqq_memqq(zmm11, arg44)
        arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
        arg13[0].o = _mm256_extracti128_si256(zmm1, 1)
        arg3 = _mm256_add_epi64(arg14, arg3)
        arg12 = _mm256_add_epi64(arg18, arg12)
        arg14 = __vpbroadcastq_ymmqq_memq(3)
        zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
        arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
        zmm1 = _mm256_add_epi64(zmm1, _mm256_add_epi64(arg3, arg14))
        arg12 = _mm256_add_epi64(arg13, _mm256_add_epi64(arg12, arg14))
        arg3 = __vpbroadcastq_ymmqq_memq(-4)
        arg13[0].o = zx.o(0)
        arg22 = arg12 & arg3
        arg14 = zmm1 & arg3
        arg33 = zmm10
        zmm10 = _mm256_min_epi32(
            _mm256_max_epi32(
                _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm10), arg78)), 
                arg13), 
            zmm10)
        arg32 = arg16
        arg_60 = zmm10
        
        if (*(arg6 + 0x968) s>= 0x100)
            arg15 = _mm256_add_epi32(zmm10, zmm10)
            arg12 = _mm256_add_epi64(arg14, _mm256_cvtepi32_epi64(arg15[0].o))
            char rdi_13 = arg1.b
            
            if ((rdi_13 & 1) == 0)
                arg16 = arg_1e0
                
                if ((rdi_13 & 2) != 0)
                    goto label_14018e9c9
                
                goto label_14018e64f
            
            zmm1[0].o = arg42
            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg12[0].q, 0)
            arg42 = zmm1[0].o
            arg16 = arg_1e0
            
            if ((rdi_13 & 2) != 0)
            label_14018e9c9:
                int64_t rax_400 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                zmm1[0].o = arg42
                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_400, 1)
                arg42 = zmm1[0].o
                arg13[0].o = _mm256_extracti128_si256(arg15, 1)
                
                if ((rdi_13 & 4) == 0)
                    goto label_14018e65f
                
                goto label_14018e9f6
            
        label_14018e64f:
            arg13[0].o = _mm256_extracti128_si256(arg15, 1)
            
            if ((rdi_13 & 4) != 0)
            label_14018e9f6:
                zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                arg3[0].o = arg42
                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 2)
                arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
                
                if ((rdi_13 & 8) != 0)
                label_14018ea1a:
                    arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                    int64_t rax_402 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_402, 3)
            else
            label_14018e65f:
                arg3[0].o = arg42
                arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
                
                if ((rdi_13 & 8) != 0)
                    goto label_14018ea1a
            
            arg12 = _mm256_add_epi64(arg22, arg13)
            
            if ((rdi_13 & 0x10) == 0)
                if ((rdi_13 & 0x20) != 0)
                    goto label_14018ed83
                
                goto label_14018ea43
            
            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg12[0].q, 4)
            
            if ((rdi_13 & 0x20) != 0)
            label_14018ed83:
                int64_t rax_430 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_430, 5)
                
                if ((rdi_13 & 0x40) == 0)
                    goto label_14018ea4d
                
                goto label_14018ed98
            
        label_14018ea43:
            
            if ((rdi_13 & 0x40) != 0)
            label_14018ed98:
                zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 6)
                
                if (arg1.b s< 0)
                label_14018edb0:
                    arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                    int64_t rax_432 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_432, 7)
            else
            label_14018ea4d:
                
                if (arg1.b s< 0)
                    goto label_14018edb0
            
            arg13 = __vpcmpgtd_ymmqq_ymmqq_memqq(_mm256_cvtepu16_epi32(arg3[0].o), arg43)
            arg15 = arg13 ^ arg20
            bool cond:24_1 = _mm256_movemask_ps(arg13 & not.32(arg21)) == 0
            arg42 = arg3[0].o
            arg_1e0 = arg15
            
            if (cond:24_1)
                arg17 = arg16
                arg12 = zmm10
            else
                zmm1 = arg33
                arg12 = _mm256_blendv_ps(zmm10, zmm1, arg15)
                arg3 = _mm256_cmpeq_epi32(arg3, arg3)
                arg20 = _mm256_sub_epi32(zmm10, arg3)
                arg18 = arg13 & not.32(_mm256_cmpgt_epi32(arg20, zmm1) ^ arg3)
                arg15 = arg21 & arg18
                int32_t i_5 = _mm256_movemask_ps(arg15)
                arg17 = arg16
                
                if (i_5 != 0)
                    zmm11 = zmm10
                    
                    do
                        zmm10 = arg20
                        arg16 = _mm256_add_epi32(arg20, arg20)
                        zmm1 = _mm256_cvtepi32_epi64(arg16[0].o)
                        int64_t temp0_2571[0x4] = _mm256_add_epi64(arg14, zmm1)
                        char temp0_2572 = _mm256_movemask_ps(arg15)
                        int64_t rax_411
                        
                        if ((temp0_2572 & 1) != 0)
                            arg3[0].o = arg73
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *temp0_2571[0], 0)
                            
                            if ((temp0_2572 & 2) != 0)
                                rax_411 = __vpextrq_gpr64q_xmmdq_immb(temp0_2571[0].o, 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_411, 1)
                        else
                            arg3[0].o = arg73
                            
                            if ((temp0_2572 & 2) != 0)
                                rax_411 = __vpextrq_gpr64q_xmmdq_immb(temp0_2571[0].o, 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_411, 1)
                        arg13[0].o = _mm256_extracti128_si256(arg16, 1)
                        
                        if ((temp0_2572 & 4) == 0)
                            arg16 = arg33
                            arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
                            
                            if ((temp0_2572 & 8) != 0)
                                goto label_14018eaf8
                            
                            goto label_14018ebec
                        
                        zmm1[0].o = _mm256_extracti128_si256(temp0_2571, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 2)
                        arg16 = arg33
                        arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
                        
                        if ((temp0_2572 & 8) != 0)
                        label_14018eaf8:
                            zmm1[0].o = _mm256_extracti128_si256(temp0_2571, 1)
                            int64_t rax_405 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_405, 3)
                            arg20 = _mm256_add_epi64(arg22, arg13)
                            
                            if ((temp0_2572 & 0x10) == 0)
                                goto label_14018ebfa
                            
                            goto label_14018eb1c
                        
                    label_14018ebec:
                        arg20 = _mm256_add_epi64(arg22, arg13)
                        
                        if ((temp0_2572 & 0x10) == 0)
                        label_14018ebfa:
                            
                            if ((temp0_2572 & 0x20) != 0)
                                goto label_14018eb2b
                            
                            goto label_14018ec04
                        
                    label_14018eb1c:
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg20[0], 4)
                        
                        if ((temp0_2572 & 0x20) != 0)
                        label_14018eb2b:
                            int64_t rax_407 = __vpextrq_gpr64q_xmmdq_immb(arg20[0].o, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_407, 5)
                            
                            if ((temp0_2572 & 0x40) == 0)
                                goto label_14018ec0e
                            
                            goto label_14018eb40
                        
                    label_14018ec04:
                        
                        if ((temp0_2572 & 0x40) != 0)
                        label_14018eb40:
                            zmm1[0].o = _mm256_extracti128_si256(arg20, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 6)
                            
                            if (temp0_2572 s< 0)
                            label_14018eb59:
                                zmm1[0].o = _mm256_extracti128_si256(arg20, 1)
                                int64_t rax_409 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_409, 7)
                        else
                        label_14018ec0e:
                            
                            if (temp0_2572 s< 0)
                                goto label_14018eb59
                        
                        arg73 = arg3[0].o
                        arg15 =
                            __vpcmpgtd_ymmqq_ymmqq_memqq(_mm256_cvtepu16_epi32(arg3[0].o), arg43)
                            & arg18
                        arg13[0].o = zx.o(0)
                        zmm1 = arg15 & arg21
                        
                        if (_mm256_movemask_ps(zmm1) != i_5)
                            arg13 = arg15 ^ arg18
                        
                        arg12 = _mm256_blendv_ps(arg12, zmm11, arg15)
                        arg20 = _mm256_sub_epi32(zmm10, _mm256_cmpeq_epi32(zmm1, zmm1))
                        arg18 = _mm256_cmpgt_epi32(arg20, arg16) & not.32(arg13)
                        arg15 = arg18 & arg21
                        i_5 = _mm256_movemask_ps(arg15)
                        zmm11 = zmm10
                    while (i_5 != 0)
            
            arg3 = arg_1e0
            zmm1 = _mm256_andnot_ps(arg3, arg21)
            int32_t temp0_76 = _mm256_movemask_ps(zmm1)
            arg20 = _mm256_cmpeq_epi32(arg20, arg20)
            
            if (temp0_76 != 0)
                zmm1 = _mm256_xor_ps(arg3, arg20)
                arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                arg12 = _mm256_blendv_ps(arg12, arg3, zmm1)
                arg15 = __vpaddd_ymmqq_ymmqq_memqq(arg20, arg_60)
                arg3 = _mm256_cmpgt_epi32(arg15, arg3)
                arg16 = arg3 & zmm1
                zmm10 = arg16 & arg21
                int32_t i_6 = _mm256_movemask_ps(zmm10)
                
                if (i_6 != 0)
                    do
                        float temp0_96[0x8] = _mm256_add_epi32(arg15, arg15)
                        zmm1 = _mm256_cvtepi32_epi64(temp0_96[0].o)
                        arg18 = _mm256_add_epi64(arg14, zmm1)
                        char temp0_99 = _mm256_movemask_ps(zmm10)
                        int64_t rax_59
                        
                        if ((temp0_99 & 1) != 0)
                            arg3[0].o = arg72
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg18[0].q, 0)
                            
                            if ((temp0_99 & 2) != 0)
                                rax_59 = __vpextrq_gpr64q_xmmdq_immb(arg18[0], 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_59, 1)
                        else
                            arg3[0].o = arg72
                            
                            if ((temp0_99 & 2) != 0)
                                rax_59 = __vpextrq_gpr64q_xmmdq_immb(arg18[0], 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_59, 1)
                        arg13[0].o = _mm256_extracti128_si256(temp0_96, 1)
                        
                        if ((temp0_99 & 4) == 0)
                            arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
                            
                            if ((temp0_99 & 8) != 0)
                                goto label_14018f3af
                            
                            goto label_14018f4a3
                        
                        zmm1[0].o = _mm256_extracti128_si256(arg18, 1)
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 2)
                        arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
                        
                        if ((temp0_99 & 8) != 0)
                        label_14018f3af:
                            zmm1[0].o = _mm256_extracti128_si256(arg18, 1)
                            int64_t rax_53 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_53, 3)
                            arg18 = _mm256_add_epi64(arg22, arg13)
                            
                            if ((temp0_99 & 0x10) == 0)
                                goto label_14018f4b1
                            
                            goto label_14018f3d3
                        
                    label_14018f4a3:
                        arg18 = _mm256_add_epi64(arg22, arg13)
                        
                        if ((temp0_99 & 0x10) == 0)
                        label_14018f4b1:
                            
                            if ((temp0_99 & 0x20) != 0)
                                goto label_14018f3e2
                            
                            goto label_14018f4bb
                        
                    label_14018f3d3:
                        arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg18[0].q, 4)
                        
                        if ((temp0_99 & 0x20) != 0)
                        label_14018f3e2:
                            int64_t rax_55 = __vpextrq_gpr64q_xmmdq_immb(arg18[0], 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_55, 5)
                            
                            if ((temp0_99 & 0x40) == 0)
                                goto label_14018f4c5
                            
                            goto label_14018f3f7
                        
                    label_14018f4bb:
                        
                        if ((temp0_99 & 0x40) != 0)
                        label_14018f3f7:
                            zmm1[0].o = _mm256_extracti128_si256(arg18, 1)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 6)
                            
                            if (temp0_99 s< 0)
                            label_14018f410:
                                zmm1[0].o = _mm256_extracti128_si256(arg18, 1)
                                int64_t rax_57 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_57, 7)
                        else
                        label_14018f4c5:
                            
                            if (temp0_99 s< 0)
                                goto label_14018f410
                        
                        arg72 = arg3[0].o
                        arg18 =
                            __vpcmpgtd_ymmqq_ymmqq_memqq(_mm256_cvtepu16_epi32(arg3[0].o), arg43)
                            & not.32(arg16)
                        arg13[0].o = zx.o(0)
                        int32_t temp0_107 = _mm256_movemask_ps(arg18 & arg21)
                        zmm10[0].o = zx.o(0)
                        
                        if (temp0_107 != i_6)
                            zmm10 = arg18 ^ arg16
                        
                        arg12 = _mm256_blendv_ps(arg12, arg15, arg18)
                        arg15 = _mm256_add_epi32(arg15, arg20)
                        zmm1 = _mm256_cmpgt_epi32(arg15, arg13)
                        arg16 = zmm1 & zmm10
                        zmm10 = arg16 & arg21
                        i_6 = _mm256_movemask_ps(zmm10)
                    while (i_6 != 0)
            
            zmm11 = _mm256_blendv_ps(arg19, arg12, arg21)
            arg15 = _mm256_add_epi32(zmm11, zmm11)
            arg12 = _mm256_add_epi64(arg14, _mm256_cvtepi32_epi64(arg15[0].o))
            
            if ((rdi_13 & 1) != 0)
                zmm1[0].o = arg41
                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg12[0].q, 0)
                arg41 = zmm1[0].o
            
            arg16 = arg17
            arg17 = arg26
            arg18 = arg35
            arg19 = arg25
            zmm10 = arg32
            
            if ((rdi_13 & 2) != 0)
                int64_t rax_62 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                zmm1[0].o = arg41
                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_62, 1)
                arg41 = zmm1[0].o
            
            arg13[0].o = _mm256_extracti128_si256(arg15, 1)
            
            if ((rdi_13 & 4) != 0)
                zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                arg3[0].o = arg41
                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 2)
                arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
                
                if ((rdi_13 & 8) != 0)
                label_14018f5f0:
                    arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                    int64_t rax_64 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_64, 3)
            else
                arg3[0].o = arg41
                arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
                
                if ((rdi_13 & 8) != 0)
                    goto label_14018f5f0
            
            arg12 = _mm256_add_epi64(arg22, arg13)
            
            if ((rdi_13 & 0x10) == 0)
                arg13 = zmm11
                
                if ((rdi_13 & 0x20) != 0)
                    goto label_14018f6a1
                
                goto label_14018f619
            
            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *arg12[0].q, 4)
            arg13 = zmm11
            
            if ((rdi_13 & 0x20) != 0)
            label_14018f6a1:
                int64_t rax_67 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_67, 5)
                
                if ((rdi_13 & 0x40) == 0)
                    goto label_14018f623
                
                goto label_14018f6b6
            
        label_14018f619:
            
            if ((rdi_13 & 0x40) != 0)
            label_14018f6b6:
                zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *zmm1[0].q, 6)
                
                if (arg1.b s< 0)
                label_14018f6ce:
                    arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                    int64_t rax_69 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *rax_69, 7)
            else
            label_14018f623:
                
                if (arg1.b s< 0)
                    goto label_14018f6ce
            
            zmm1 = _mm256_blendv_ps(arg36, _mm256_sub_epi32(arg13, arg20), arg21)
            arg12 = _mm256_cmpgt_epi32(zmm1, arg33) & arg21
            
            if (_mm256_movemask_ps(arg12) != 0)
                zmm1 = _mm256_blendv_ps(zmm1, arg33, arg12)
            
            arg21 = arg23
            arg15 = _mm256_add_epi32(zmm1, zmm1)
            arg12 = _mm256_add_epi64(arg14, _mm256_cvtepi32_epi64(arg15[0].o))
            int64_t rax_71
            
            if ((rdi_13 & 1) != 0)
                arg14[0].o = arg65
                arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *arg12[0].q, 0)
                
                if ((rdi_13 & 2) != 0)
                    rax_71 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_71, 1)
            else
                arg14[0].o = arg65
                
                if ((rdi_13 & 2) != 0)
                    rax_71 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_71, 1)
            arg33[0].o = _mm256_extracti128_si256(arg15, 1)
            arg_60 = zmm1
            
            if ((rdi_13 & 4) == 0)
                arg13 = _mm256_cvtepi32_epi64(arg33[0].o)
                
                if ((rdi_13 & 8) != 0)
                    goto label_14018df34
                
                goto label_14018f72d
            
            zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
            arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm1[0].q, 2)
            arg13 = _mm256_cvtepi32_epi64(arg33[0].o)
            
            if ((rdi_13 & 8) != 0)
            label_14018df34:
                arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                int64_t rax_364 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_364, 3)
                arg12 = _mm256_add_epi64(arg22, arg13)
                
                if ((rdi_13 & 0x10) == 0)
                    goto label_14018f73b
                
                goto label_14018df58
            
        label_14018f72d:
            arg12 = _mm256_add_epi64(arg22, arg13)
            
            if ((rdi_13 & 0x10) != 0)
            label_14018df58:
                arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *arg12[0].q, 4)
                arg22[0].o = zx.o(0)
                
                if ((rdi_13 & 0x20) != 0)
                label_14018df6c:
                    int64_t rax_366 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_366, 5)
                    
                    if ((rdi_13 & 0x40) == 0)
                        goto label_14018f754
                    
                    goto label_14018df81
            else
            label_14018f73b:
                arg22[0].o = zx.o(0)
                
                if ((rdi_13 & 0x20) != 0)
                    goto label_14018df6c
            
            if ((rdi_13 & 0x40) != 0)
            label_14018df81:
                zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm1[0].q, 6)
                zmm1 = arg27
                
                if (arg1.b s< 0)
                label_14018dfa2:
                    arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                    int64_t rax_368 = __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_368, 7)
            else
            label_14018f754:
                zmm1 = arg27
                
                if (arg1.b s< 0)
                    goto label_14018dfa2
            
            arg41 = arg3[0].o
            arg12 = _mm256_cvtepu16_epi32(arg3[0].o)
            arg65 = arg14[0].o
            arg14 = _mm256_cvtepu16_epi32(arg14[0].o)
            arg15 = _mm256_xor_ps(zmm1, arg20)
            arg13[0].o = zx.o(0)
            
            if (*(arg6 + 0x980) == 1)
                goto label_14018f7ba
            
            goto label_14018f797
        
        arg12 = _mm256_add_epi64(arg14, _mm256_cvtepi32_epi64(zmm10[0].o))
        arg8 = arg1.b
        zmm1[0].o = arg77
        
        if ((arg8 & 1) == 0)
            arg17 = arg_1e0
            
            if ((arg8 & 2) != 0)
                goto label_14018eca0
            
            goto label_14018e702
        
        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg12[0].q), 0)
        arg17 = arg_1e0
        
        if ((arg8 & 2) != 0)
        label_14018eca0:
            uint32_t rax_416 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_416, 1)
            arg15[0].o = _mm256_extracti128_si256(zmm10, 1)
            
            if ((arg8 & 4) == 0)
                goto label_14018e712
            
            goto label_14018ecb8
        
    label_14018e702:
        arg15[0].o = _mm256_extracti128_si256(zmm10, 1)
        
        if ((arg8 & 4) == 0)
        label_14018e712:
            arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
            
            if ((arg8 & 8) != 0)
                goto label_14018ece2
            
            goto label_14018e721
        
    label_14018ecb8:
        arg3[0].o = zmm1[0].o
        zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
        zmm1[0].o = arg3[0].o
        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*zmm1[0].q), 2)
        arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
        
        if ((arg8 & 8) != 0)
        label_14018ece2:
            arg12[0].o = _mm256_extracti128_si256(arg12, 1)
            uint32_t rax_420 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_420, 3)
            arg12 = _mm256_add_epi64(arg22, arg15)
            
            if ((arg8 & 0x10) == 0)
                goto label_14018e72f
            
            goto label_14018ed0c
        
    label_14018e721:
        arg12 = _mm256_add_epi64(arg22, arg15)
        
        if ((arg8 & 0x10) == 0)
        label_14018e72f:
            
            if ((arg8 & 0x20) != 0)
                goto label_14018ed21
            
            goto label_14018e739
        
    label_14018ed0c:
        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg12[0].q), 4)
        
        if ((arg8 & 0x20) != 0)
        label_14018ed21:
            uint32_t rax_424 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_424, 5)
            
            if ((arg8 & 0x40) == 0)
                goto label_14018e743
            
            goto label_14018ed33
        
    label_14018e739:
        
        if ((arg8 & 0x40) != 0)
        label_14018ed33:
            arg3[0].o = zmm1[0].o
            zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
            zmm1[0].o = arg3[0].o
            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*zmm1[0].q), 6)
            
            if (arg1.b s< 0)
            label_14018ed56:
                arg12[0].o = _mm256_extracti128_si256(arg12, 1)
                uint32_t rax_428 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_428, 7)
        else
        label_14018e743:
            
            if (arg1.b s< 0)
                goto label_14018ed56
        
        arg77 = zmm1[0].o
        arg12[0].o = zmm1[0].o & data_142fc92e0
        arg12 = __vpcmpgtd_ymmqq_ymmqq_memqq(_mm256_cvtepu16_epi32(arg12[0].o), arg43)
        arg16 = arg12 ^ arg20
        
        if (_mm256_movemask_ps(arg12 & not.32(arg21)) == 0)
            arg15 = zmm10
        else
            zmm1 = arg33
            arg15 = _mm256_blendv_ps(zmm10, zmm1, arg16)
            arg3 = _mm256_cmpeq_epi32(arg3, arg3)
            arg20 = _mm256_sub_epi32(zmm10, arg3)
            arg18 = arg12 & not.32(_mm256_cmpgt_epi32(arg20, zmm1) ^ arg3)
            arg12 = arg21 & arg18
            int32_t rdi_14 = _mm256_movemask_ps(arg12)
            
            if (rdi_14 != 0)
                zmm11 = zmm10
            label_14018e890:
                zmm10 = arg20
                zmm1 = _mm256_cvtepi32_epi64(zmm10[0].o)
                int64_t temp0_2525[0x4] = _mm256_add_epi64(arg14, zmm1)
                char temp0_2526 = _mm256_movemask_ps(arg12)
                uint32_t rax_397
                
                if ((temp0_2526 & 1) != 0)
                    zmm1[0].o = arg71
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*temp0_2525[0]), 0)
                    
                    if ((temp0_2526 & 2) != 0)
                        rax_397 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(temp0_2525[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_397, 1)
                else
                    zmm1[0].o = arg71
                    
                    if ((temp0_2526 & 2) != 0)
                        rax_397 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(temp0_2525[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_397, 1)
                arg12[0].o = _mm256_extracti128_si256(zmm10, 1)
                
                if ((temp0_2526 & 4) == 0)
                    arg12 = _mm256_cvtepi32_epi64(arg12[0].o)
                    
                    if ((temp0_2526 & 8) != 0)
                        goto label_14018e7f9
                    
                    goto label_14018e906
                
                arg3[0].o = zmm1[0].o
                zmm1[0].o = _mm256_extracti128_si256(temp0_2525, 1)
                zmm1[0].o = arg3[0].o
                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*zmm1[0].q), 2)
                arg12 = _mm256_cvtepi32_epi64(arg12[0].o)
                
                if ((temp0_2526 & 8) != 0)
                label_14018e7f9:
                    arg3[0].o = zmm1[0].o
                    zmm1[0].o = _mm256_extracti128_si256(temp0_2525, 1)
                    int64_t rax_384 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = arg3[0].o
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*rax_384), 3)
                    arg20 = _mm256_add_epi64(arg22, arg12)
                    
                    if ((temp0_2526 & 0x10) == 0)
                        goto label_14018e913
                    
                    goto label_14018e82a
                
            label_14018e906:
                arg20 = _mm256_add_epi64(arg22, arg12)
                
                if ((temp0_2526 & 0x10) == 0)
                label_14018e913:
                    
                    if ((temp0_2526 & 0x20) != 0)
                        goto label_14018e83e
                    
                    goto label_14018e91c
                
            label_14018e82a:
                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg20[0]), 4)
                
                if ((temp0_2526 & 0x20) != 0)
                label_14018e83e:
                    uint32_t rax_389 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg20[0].o, 1))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_389, 5)
                    
                    if ((temp0_2526 & 0x40) == 0)
                        goto label_14018e925
                    
                    goto label_14018e84f
                
            label_14018e91c:
                
                if ((temp0_2526 & 0x40) != 0)
                label_14018e84f:
                    arg12[0].o = _mm256_extracti128_si256(arg20, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg12[0].q), 6)
                    
                    if (temp0_2526 s< 0)
                    label_14018e86a:
                        arg12[0].o = _mm256_extracti128_si256(arg20, 1)
                        uint32_t rax_393 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_393, 7)
                else
                label_14018e925:
                    
                    if (temp0_2526 s< 0)
                        goto label_14018e86a
                
                arg71 = zmm1[0].o
                arg12[0].o = zmm1[0].o & data_142fc92e0
                arg12 = __vpcmpgtd_ymmqq_ymmqq_memqq(_mm256_cvtepu16_epi32(arg12[0].o), arg43)
                arg13 = arg12 & arg18
                arg12[0].o = zx.o(0)
                zmm1 = arg13 & arg21
                
                if (_mm256_movemask_ps(zmm1) != rdi_14)
                    arg12 = arg13 ^ arg18
                
                arg15 = _mm256_blendv_ps(arg15, zmm11, arg13)
                arg20 = _mm256_sub_epi32(zmm10, _mm256_cmpeq_epi32(zmm1, zmm1))
                arg18 = _mm256_cmpgt_epi32(arg20, arg33) & not.32(arg12)
                arg12 = arg18 & arg21
                rdi_14 = _mm256_movemask_ps(arg12)
                zmm11 = zmm10
                
                if (rdi_14 != 0)
                    goto label_14018e890
        
        zmm1 = arg16
        int32_t temp0_2608 = _mm256_movemask_ps(_mm256_andnot_ps(zmm1, arg21))
        arg20 = _mm256_cmpeq_epi32(arg20, arg20)
        
        if (temp0_2608 == 0)
            goto label_14018efd0
        
        zmm1 = _mm256_xor_ps(zmm1, arg20)
        arg3[0].o = zx.o(0)
        arg15 = _mm256_blendv_ps(arg15, arg3, zmm1)
        arg12 = __vpaddd_ymmqq_ymmqq_memqq(arg20, arg_60)
        arg3 = _mm256_cmpgt_epi32(arg12, arg3)
        arg16 = arg3 & zmm1
        zmm10 = arg16 & arg21
        arg7 = _mm256_movemask_ps(zmm10)
        
        if (arg7 == 0)
            goto label_14018efd0
    
    zmm1 = _mm256_cvtepi32_epi64(arg12[0].o)
    arg18 = _mm256_add_epi64(arg14, zmm1)
    arg5 = _mm256_movemask_ps(zmm10)
    uint32_t rax_16
    
    if ((arg5 & 1) != 0)
        arg3[0].o = arg_600
        arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*arg18[0].q), 0)
        
        if ((arg5 & 2) != 0)
            rax_16 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg18[0], 1))
            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rax_16, 1)
    else
        arg3[0].o = arg_600
        
        if ((arg5 & 2) != 0)
            rax_16 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg18[0], 1))
            arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rax_16, 1)
    arg13[0].o = _mm256_extracti128_si256(arg12, 1)
while ((arg5 & 4) != 0)

arg13 = _mm256_cvtepi32_epi64(arg13[0].o)

if ((arg5 & 8) != 0)
    goto label_14018ee41

label_14018ef46:
arg18 = _mm256_add_epi64(arg22, arg13)

if ((arg5 & 0x10) == 0)
    goto label_14018ef53

label_14018ee6a:
arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*arg18[0].q), 4)

if ((arg5 & 0x20) == 0)
    goto label_14018ef5c

label_14018ee7e:
uint32_t rax_8 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg18[0], 1))
arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rax_8, 5)

if ((arg5 & 0x40) == 0)
    goto label_14018ef65

label_14018ee8f:
zmm1[0].o = _mm256_extracti128_si256(arg18, 1)
arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, zx.d(*zmm1[0].q), 6)

if (arg5 s>= 0)
    goto label_14018ef6d

goto label_14018eeaa
