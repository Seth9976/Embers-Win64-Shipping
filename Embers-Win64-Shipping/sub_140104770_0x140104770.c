// 函数: sub_140104770
// 地址: 0x140104770
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
int64_t r12 = sx.q(arg20)
int32_t rbx_1 = *(&data_1434422b0 + (r12 << 2)) * *(&data_143442290 + (r12 << 2))
int32_t r10_4 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
int32_t rcx_36
int32_t rbx_2
float zmm0[0x8]
float zmm3[0x8]
float zmm4[0x8]

if (r10_4 s<= 0)
    rbx_2 = 0
    rcx_36 = arg21
    
    if (0 s< rcx_36)
    label_1401054ae:
        zmm0[0].o = zx.o(rbx_2)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        arg5[0].o = zx.o(rcx_36)
        arg17 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(arg5[0]), zmm0)
        zmm0 = _mm256_slli_epi32(zmm0, 3)
        arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
        int128_t temp0_345
        int32_t temp1_25
        temp0_345, temp1_25 = _mm256_i32gather_epi32(arg16, *(arg2 + zmm0[0].q), arg17)
        arg16 = temp0_345
        zmm3 = temp1_25
        arg6 = __vpbroadcastd_ymmqq_memd(4)
        zmm3[0].o = zx.o(0)
        int128_t temp0_347
        int32_t temp1_26
        temp0_347, temp1_26 = _mm256_i32gather_epi32(zmm3, *(arg2 + (zmm0 | arg6)[0].q), arg17)
        zmm0 = _mm256_slli_epi32(temp0_347, 4)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int128_t temp0_350
        int32_t temp1_27
        temp0_350, temp1_27 = _mm256_i32gather_epi32(arg7, *(arg3 + zmm0[0].q), arg17)
        arg7 = temp0_350
        zmm0[0].o = zx.o(0)
        int128_t temp0_351
        int32_t temp1_28
        temp0_351, temp1_28 = _mm256_i32gather_epi32(zmm0, *(arg3 + (zmm0 | arg6)[0].q), arg17)
        zmm0 = temp0_351
        zmm4 = temp1_28
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        arg5 = __vpbroadcastd_ymmqq_memd(2)
        int32_t var_400_2[0x8] = arg5
        zmm3 = _mm256_cmpgt_epi32(arg5, zmm0) & arg17
        zmm4[0].o = _mm256_extracti128_si256(zmm3, 1)
        arg8[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
        zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        char temp0_358 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
        zmm3[0].o = zx.o(0)
        
        if (temp0_358 == 0)
            goto label_14010557d
        
        char temp0_359 = _mm256_movemask_ps(arg17)
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        arg10[0].o = zx.o(0)
        arg5[0].o = zx.o(0)
        
        if (temp0_359 != temp0_358)
            zmm3 = _mm256_cvtepi16_epi32(arg8[0].o)
        label_14010557d:
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            zmm3 ^= arg8
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            arg5[0].o = arg18
            bool cond:2_1 = arg9[0].o f>= arg5[0]
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            arg10[0].o = zx.o(0)
            
            if (not(cond:2_1))
                arg10 = _mm256_add_epi32(zmm0, arg8)
                arg5[0].o = arg18
                
                if (arg5[0].o f>= 1f)
                    arg8 = zmm3 & arg17
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    arg9 = _mm256_blendv_ps(arg11, arg10, arg8)
                    arg10 = arg9
                else
                    arg5[0].o = arg18
                    arg13 =
                        _mm256_mul_ps(_mm256_broadcastss_ps(arg5[0].o), _mm256_cvtepi32_ps(arg10))
                    arg8 = zmm3 & arg17
                    arg14 = _mm256_round_ps(arg13, 9)
                    arg9 = _mm256_min_epi32(arg10, _mm256_cvttps_epi32(arg14))
                    arg12[0].o = zx.o(0)
                    arg9 = _mm256_blendv_ps(arg12, arg9, arg8)
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    
                    if (arg19 != 1)
                        arg11 = _mm256_sub_ps(arg13, arg14)
                    
                    arg13 = _mm256_sub_epi32(arg9, _mm256_cmpeq_epi32(arg13, arg13))
                    arg10 = _mm256_blendv_ps(arg12, _mm256_min_epi32(arg13, arg10), arg8)
            
            arg8[0].o = zx.o(0)
            arg5 = _mm256_blendv_ps(arg8, arg11, zmm3)
        
        int32_t rcx_38
        rcx_38.b = r12.d == 3
        arg8[0].o = zx.o(neg.d(rcx_38))
        arg8 = _mm256_broadcastd_epi32(arg8[0])
        zmm0 = _mm256_cmpgt_epi32(zmm0, __vpbroadcastd_ymmqq_memd(1)) & arg8
        arg11 = _mm256_broadcast_ss(3.36311631e-44f)
        arg8[0].o = zx.o(0)
        zmm4 = _mm256_blendv_ps(arg8, arg11, zmm0)
        zmm3[0].o = zx.o(rbx_1)
        arg11 = _mm256_broadcastd_epi32(zmm3[0])
        uint64_t rcx_40 = zx.q(r12.d)
        float var_4e0_1[0x8]
        float var_4c0_1[0x8]
        float var_4a0_1[0x8]
        
        if (r12.d u> 6)
        label_140105a91:
            var_4e0_1 = _mm256_maskstore_ps(arg17, arg8)
            var_4c0_1 = _mm256_maskstore_ps(arg17, arg8)
            var_4a0_1 = _mm256_maskstore_ps(arg17, arg8)
        else
            arg15 = _mm256_mullo_epi32(arg9, arg11)
            
            switch (rcx_40)
                case 0, 1
                    zmm3 = _mm256_add_epi32(_mm256_add_epi32(arg7, zmm4), arg15)
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                    arg12[0].o = zx.o(0)
                    int128_t temp0_392
                    int32_t temp1_29
                    temp0_392, temp1_29 = _mm256_i32gather_ps(arg12, *(arg4 + zmm3[0].q), arg17)
                    arg12 = temp0_392
                    arg13 = _mm256_add_epi32(zmm3, arg6)
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    int128_t temp0_395
                    int32_t temp1_30
                    temp0_395, temp1_30 = _mm256_i32gather_ps(arg14, *(arg4 + arg13[0].q), arg17)
                    arg14 = temp0_395
                    arg15 = temp1_30
                    zmm3 = _mm256_add_epi32(zmm3, __vpbroadcastd_ymmqq_memd(8))
                    int128_t temp0_398
                    int32_t temp1_31
                    temp0_398, temp1_31 = _mm256_i32gather_ps(arg8, *(arg4 + zmm3[0].q), arg17)
                    arg8 = temp0_398
                    arg13 = temp1_31
                    var_4e0_1 = _mm256_maskstore_ps(arg17, arg12)
                    var_4c0_1 = _mm256_maskstore_ps(arg17, arg14)
                    var_4a0_1 = _mm256_maskstore_ps(arg17, arg8)
                case 2
                    arg13 = _mm256_add_epi32(_mm256_add_epi32(arg7, zmm4), arg15)
                    zmm0 = arg17 & arg13
                    int64_t r8_6 = sx.q(zmm0[0])
                    int64_t r10_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int32_t temp0_404 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                    int64_t r11_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    int64_t r15_8 = sx.q(zmm0[0])
                    int64_t rbx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int32_t temp0_408 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                    int64_t rdi_36 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = zx.o(*(arg4 + r8_6))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_11), 1)
                    zmm0[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(temp0_404)), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_8), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_8), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_8), 5)
                    zmm0[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(temp0_408)), 6)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_36), 7)
                    zmm0 = arg17 & __vpaddd_ymmqq_ymmqq_memqq(arg13, var_400_2)
                    int64_t r8_7 = sx.q(zmm0[0])
                    int64_t r10_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t r11_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t r14_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    int64_t r15_9 = sx.q(zmm0[0])
                    int64_t rbx_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t rdi_39 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int32_t temp0_424 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                    zmm0[0].o = zx.o(*(arg4 + r8_7))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_12), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_9), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_8), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_9), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_11), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_39), 6)
                    arg14[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(temp0_424)), 7)
                    zmm0 = arg17 & _mm256_add_epi32(arg13, arg6)
                    float rdx_8 = zmm0[0]
                    int64_t r8_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t r10_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t rsi_28 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    float rbx_13 = zmm0[0]
                    int64_t rdi_42 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t r14_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t r15_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = zx.o(*(arg4 + sx.q(rdx_8)))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_8), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_13), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_28), 3)
                    zmm0[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rbx_13)), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_42), 5)
                    zmm3 = _mm256_cvtepu16_epi32(arg12[0].o)
                    arg13 = zmm4
                    zmm4 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    zmm3 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm3, zmm4))
                    arg8 = _mm256_broadcast_ss(32767f)
                    zmm3 = _mm256_div_ps(zmm3, arg8)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_9), 6)
                    arg12 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg14[0].o), 
                            zmm4)), 
                        arg8)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_10), 7)
                    zmm0 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                            zmm4)), 
                        arg8)
                    zmm4 = _mm256_broadcast_ss(128f)
                    zmm3 = _mm256_mul_ps(zmm3, zmm4)
                    arg8 = _mm256_mul_ps(arg12, zmm4)
                    zmm0 = _mm256_mul_ps(zmm0, zmm4)
                    zmm4 = arg13
                    var_4e0_1 = _mm256_maskstore_ps(arg17, zmm3)
                    var_4c0_1 = _mm256_maskstore_ps(arg17, arg8)
                    var_4a0_1 = _mm256_maskstore_ps(arg17, zmm0)
                case 3
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    int128_t temp0_468
                    int32_t temp1_32
                    temp0_468, temp1_32 = _mm256_i32gather_ps(arg14, *(arg4 + arg7[0].q), arg17)
                    zmm3 = _mm256_add_epi32(arg7, arg6)
                    arg12[0].o = zx.o(0)
                    int128_t temp0_470
                    int32_t temp1_33
                    temp0_470, temp1_33 = _mm256_i32gather_ps(arg12, *(arg4 + zmm3[0].q), arg17)
                    arg12 = temp0_470
                    zmm3 = _mm256_add_epi32(arg7, __vpbroadcastd_ymmqq_memd(8))
                    arg13[0].o = zx.o(0)
                    int128_t temp0_473
                    int32_t temp1_34
                    temp0_473, temp1_34 = _mm256_i32gather_ps(arg13, *(arg4 + zmm3[0].q), arg17)
                    arg13 = temp0_473
                    zmm3 = _mm256_add_epi32(arg7, __vpbroadcastd_ymmqq_memd(0xc))
                    arg5[0].o = zx.o(0)
                    int128_t temp0_476
                    int32_t temp1_35
                    temp0_476, temp1_35 = _mm256_i32gather_ps(arg5, *(arg4 + zmm3[0].q), arg17)
                    zmm3 = _mm256_add_epi32(arg7, __vpbroadcastd_ymmqq_memd(0x10))
                    arg6[0].o = zx.o(0)
                    int128_t temp0_479
                    int32_t temp1_36
                    temp0_479, temp1_36 = _mm256_i32gather_ps(arg6, *(arg4 + zmm3[0].q), arg17)
                    zmm3[0].o = zx.o(0)
                    arg8 = _mm256_add_epi32(arg7, __vpbroadcastd_ymmqq_memd(0x14))
                    zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    int128_t temp0_483
                    int32_t temp1_37
                    temp0_483, temp1_37 = _mm256_i32gather_ps(zmm4, *(arg4 + arg8[0].q), arg17)
                    int128_t temp0_486
                    int32_t temp1_38
                    temp0_486, temp1_38 = _mm256_i32gather_epi32(zmm3, 
                        *(arg4 +
                            _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg7, zmm4), arg15)[0].q), 
                        arg17)
                    zmm3 = temp0_486
                    zmm0 = _mm256_srli_epi32(zmm3, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg8 = _mm256_fmadd_ps(
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                zmm3 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f)), 
                        temp0_476, temp0_468)
                    arg14 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg14))
                    arg15 = _mm256_broadcast_ss(1023f)
                    zmm0 = _mm256_div_ps(zmm0, arg15)
                    zmm3 = _mm256_srli_epi32(zmm3, 0x15)
                    zmm0 = _mm256_fmadd_ps(zmm0, temp0_479, arg12)
                    zmm3 = _mm256_fmadd_ps(
                        _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm3, arg14)), arg15), 
                        temp0_483, arg13)
                    var_4e0_1 = _mm256_maskstore_ps(arg17, arg8)
                    var_4c0_1 = _mm256_maskstore_ps(arg17, zmm0)
                    var_4a0_1 = _mm256_maskstore_ps(arg17, zmm3)
                case 4, 5
                    goto label_140105a91
                case 6
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    var_4e0_1 = _mm256_maskstore_ps(arg17, zmm0)
                    var_4c0_1 = _mm256_maskstore_ps(arg17, zmm0)
                    var_4a0_1 = _mm256_maskstore_ps(arg17, zmm0)
        
        zmm0 = _mm256_cmpeq_epi32(arg9, arg10)
        arg9 = zmm0 & not.32(arg17)
        zmm0[0].o = _mm256_extracti128_si256(arg9, 1)
        arg8[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
            float var_3e0_1[0x8]
            int32_t var_3c0_1[0x8]
            uint32_t var_3a0_1[0x8]
            
            if (r12.d u> 6)
            label_140105b61:
                arg14 = arg5
                zmm0[0].o = zx.o(0)
                var_3e0_1 = _mm256_maskstore_ps(arg9, zmm0)
                var_3c0_1 = _mm256_maskstore_ps(arg9, zmm0)
                var_3a0_1 = _mm256_maskstore_ps(arg9, zmm0)
            else
                arg11 = _mm256_mullo_epi32(arg10, arg11)
                
                switch (rcx_40)
                    case 0, 1
                        arg14 = arg5
                        zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg7, zmm4), arg11)
                        arg5[0].o = zx.o(0)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        int128_t temp0_526
                        int32_t temp1_39
                        temp0_526, temp1_39 = _mm256_i32gather_ps(zmm3, *(arg4 + zmm0[0].q), arg9)
                        arg6 = _mm256_add_epi32(zmm0, arg6)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int128_t temp0_529
                        int32_t temp1_40
                        temp0_529, temp1_40 = _mm256_i32gather_ps(arg7, *(arg4 + arg6[0].q), arg9)
                        int128_t temp0_532
                        int32_t temp1_41
                        temp0_532, temp1_41 = _mm256_i32gather_ps(arg5, 
                            *(arg4 + _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))[0].q), 
                            arg9)
                        var_3e0_1 = _mm256_maskstore_ps(arg9, temp0_526)
                        var_3c0_1 = _mm256_maskstore_ps(arg9, temp0_529)
                        var_3a0_1 = _mm256_maskstore_ps(arg9, temp0_532)
                    case 2
                        arg14 = arg5
                        zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg7, zmm4), arg11)
                        arg7 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg8[0].o), 0x1f), 0x1f)
                        arg5 = arg7 & zmm0
                        int64_t r8_9 = sx.q(arg5[0])
                        int64_t r10_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int32_t temp0_542 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                        int64_t r11_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        int64_t rsi_30 = sx.q(arg5[0])
                        int64_t rcx_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int32_t temp0_546 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                        int64_t rdi_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = zx.o(*(arg4 + r8_9))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r10_14), 1)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + sx.q(temp0_542)), 2)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r11_11), 3)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rsi_30), 4)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rcx_45), 5)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + sx.q(temp0_546)), 6)
                        arg10[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rdi_45), 7)
                        arg5 = arg7 & __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_400_2)
                        int64_t r8_10 = sx.q(arg5[0])
                        int64_t r10_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int64_t r11_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        int64_t r14_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        int64_t rsi_32 = sx.q(arg5[0])
                        int64_t rcx_48 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int64_t rdx_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        int32_t temp0_562 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
                        arg5[0].o = zx.o(*(arg4 + r8_10))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r10_15), 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r11_12), 2)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r14_11), 3)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rsi_32), 4)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rcx_48), 5)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rdx_18), 6)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + sx.q(temp0_562)), 7)
                        zmm0 = arg7 & _mm256_add_epi32(zmm0, arg6)
                        float rcx_50 = zmm0[0]
                        int64_t r8_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r10_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t rdi_49 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        float rsi_33 = zmm0[0]
                        int64_t rdx_21 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r11_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t rbx_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_50)))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_11), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_16), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_49), 3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rsi_33)), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_21), 5)
                        arg5 = _mm256_cvtepu16_epi32(arg10[0].o)
                        arg6 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, arg6))
                        zmm3 = _mm256_broadcast_ss(32767f)
                        arg5 = _mm256_div_ps(arg5, zmm3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_13), 6)
                        zmm4 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg8[0].o), 
                                arg6)), 
                            zmm3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_22), 7)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                arg6)), 
                            zmm3)
                        arg6 = _mm256_broadcast_ss(128f)
                        arg5 = _mm256_mul_ps(arg5, arg6)
                        zmm3 = _mm256_mul_ps(zmm4, arg6)
                        zmm0 = _mm256_mul_ps(zmm0, arg6)
                        var_3e0_1 = _mm256_maskstore_ps(arg9, arg5)
                        var_3c0_1 = _mm256_maskstore_ps(arg9, zmm3)
                        var_3a0_1 = _mm256_maskstore_ps(arg9, zmm0)
                    case 3
                        arg14 = arg5
                        arg8[0].o = zx.o(0)
                        int128_t temp0_606
                        int32_t temp1_42
                        temp0_606, temp1_42 = _mm256_i32gather_ps(arg8, *(arg4 + arg7[0].q), arg9)
                        arg8 = temp0_606
                        zmm0 = _mm256_add_epi32(arg7, arg6)
                        arg15 = zmm4
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        int128_t temp0_609
                        int32_t temp1_43
                        temp0_609, temp1_43 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm0[0].q), arg9)
                        zmm0 = _mm256_add_epi32(arg7, __vpbroadcastd_ymmqq_memd(8))
                        arg10[0].o = zx.o(0)
                        int128_t temp0_612
                        int32_t temp1_44
                        temp0_612, temp1_44 = _mm256_i32gather_ps(arg10, *(arg4 + zmm0[0].q), arg9)
                        arg10 = temp0_612
                        zmm0 = _mm256_add_epi32(arg7, __vpbroadcastd_ymmqq_memd(0xc))
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        int128_t temp0_616
                        int32_t temp1_45
                        temp0_616, temp1_45 = _mm256_i32gather_ps(arg12, *(arg4 + zmm0[0].q), arg9)
                        arg12 = temp0_616
                        arg5 = temp1_45
                        zmm0 = _mm256_add_epi32(arg7, __vpbroadcastd_ymmqq_memd(0x10))
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        int128_t temp0_620
                        int32_t temp1_46
                        temp0_620, temp1_46 = _mm256_i32gather_ps(arg5, *(arg4 + zmm0[0].q), arg9)
                        zmm0[0].o = zx.o(0)
                        arg6 = _mm256_add_epi32(arg7, __vpbroadcastd_ymmqq_memd(0x14))
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        int128_t temp0_624
                        int32_t temp1_47
                        temp0_624, temp1_47 = _mm256_i32gather_ps(zmm3, *(arg4 + arg6[0].q), arg9)
                        int128_t temp0_627
                        int32_t temp1_48
                        temp0_627, temp1_48 = _mm256_i32gather_epi32(zmm0, 
                            *(arg4 + _mm256_add_epi32(_mm256_add_epi32(arg7, arg15), arg11)[0].q), 
                            arg9)
                        zmm0 = temp0_627
                        arg6 = _mm256_srli_epi32(zmm0, 0x15)
                        arg7 = _mm256_srli_epi32(zmm0, 0xa)
                        arg11 = __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                zmm0 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg7 &= arg11
                        arg11 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg7 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, arg11))
                        arg13 = _mm256_broadcast_ss(1023f)
                        arg7 = _mm256_div_ps(arg7, arg13)
                        zmm0 = _mm256_fmadd_ps(zmm0, arg12, arg8)
                        arg7 = _mm256_fmadd_ps(arg7, temp0_620, temp0_609)
                        arg5 = _mm256_fmadd_ps(
                            _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg11)), 
                                arg13), 
                            temp0_624, arg10)
                        var_3e0_1 = _mm256_maskstore_ps(arg9, zmm0)
                        var_3c0_1 = _mm256_maskstore_ps(arg9, arg7)
                        var_3a0_1 = _mm256_maskstore_ps(arg9, arg5)
                    case 4, 5, 6
                        goto label_140105b61
            
            zmm3 = var_4e0_1
            zmm4 = var_4c0_1
            arg7 = var_4a0_1
            zmm0 = _mm256_sub_ps(var_3e0_1, zmm3)
            arg5 = _mm256_sub_ps(var_3c0_1, zmm4)
            arg6 = _mm256_sub_ps(var_3a0_1, arg7)
            zmm0 = _mm256_fmadd_ps(zmm0, arg14, zmm3)
            arg5 = _mm256_fmadd_ps(arg5, arg14, zmm4)
            arg6 = _mm256_fmadd_ps(arg6, arg14, arg7)
            var_4e0_1 = _mm256_maskstore_ps(arg9, zmm0)
            var_4c0_1 = _mm256_maskstore_ps(arg9, arg5)
            var_4a0_1 = _mm256_maskstore_ps(arg9, arg6)
        
        zmm0[0].o = var_4e0_1[0].o
        arg11[0].o = var_4e0_1[4].o
        zmm4[0].o = var_4c0_1[0].o
        arg7[0].o = var_4c0_1[4].o
        arg8[0].o = var_4a0_1[0].o
        int128_t var_490
        arg9[0].o = var_490
        arg10[0].o = zx.o(0)
        arg5[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg8[0].o, zx.o(0))
        arg6[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg8[0].o, 0x28)
        int128_t var_240 = zmm3[0].o
        zmm3[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg8[0].o, zx.o(0))
        arg5[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
        int128_t var_230_1 = arg5[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg8[0].o, 0xa8)
        int128_t var_220_1 = arg5[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
        int128_t var_210_1 = zmm0[0].o
        zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg9[0].o, zx.o(0))
        arg5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg7[0].o)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg9[0].o, 0x28)
        int128_t var_200_1 = arg6[0].o
        arg6[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg9[0].o, zx.o(0))
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        int128_t var_1f0_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg7[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg9[0].o, 0xa8)
        int128_t var_1e0_1 = arg5[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        int128_t var_1d0_1 = zmm0[0].o
        uint64_t i = zx.q(_mm256_movemask_ps(arg17))
        
        do
            uint64_t rcx_54 = _tzcnt_u64(i)
            float var_120[0x8] = arg16
            zmm0[0].o = (&var_240)[rcx_54]
            *(arg1 + sx.q(var_120[zx.q(rcx_54.d) & 7]) * 0x30 + 0x10) = zmm0[0].o
            i &= rol.q(-2, rcx_54.b)
        while (i != 0)
else
    zmm0[0].o = arg18
    zmm0 = _mm256_broadcastss_ps(zmm0[0].o)
    float var_180_1[0x8] = zmm0
    int32_t rcx_1
    rcx_1.b = r12.d == 3
    zmm0[0].o = zx.o(neg.d(rcx_1))
    arg12 = _mm256_broadcastd_epi32(zmm0[0])
    zmm0[0].o = zx.o(rbx_1)
    int32_t var_380_1[0x8] = _mm256_broadcastd_epi32(zmm0[0])
    rbx_2 = 0
    arg8 = _mm256_cmpeq_epi32(arg8, arg8)
    float var_500_1[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
    int32_t var_420_1[0x8] = _mm256_broadcast_ss(2.80259693e-45f)
    float var_140_1[0x8] = _mm256_broadcast_ss(1.40129846e-45f)
    zmm0 = _mm256_broadcast_ss(3.36311631e-44f)
    float var_160_1[0x8] = zmm0
    int64_t var_508_1 = r12
    int64_t var_510_1 = arg3
    int32_t var_518_1 = r10_4
    int32_t var_300_1[0x8] = arg12
    
    do
        zmm0[0].o = zx.o(rbx_2)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_broadcastd_epi32(zmm0[0]), 3), 
            data_143442140)
        arg10[0].o = zx.o(0)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        int128_t temp0_13
        int32_t temp1_1
        temp0_13, temp1_1 = _mm256_i32gather_epi32(arg10, *(arg2 + zmm0[0].q), arg5)
        arg10 = temp0_13
        arg5 = temp1_1
        zmm3 = var_500_1
        arg5[0].o = zx.o(0)
        arg6 = _mm256_cmpeq_epi32(arg6, arg6)
        int128_t temp0_15
        int32_t temp1_2
        temp0_15, temp1_2 = _mm256_i32gather_epi32(arg5, *(arg2 + (zmm0 | zmm3)[0].q), arg6)
        arg5 = temp0_15
        arg6 = temp1_2
        zmm0 = _mm256_slli_epi32(arg5, 4)
        arg15[0].o = zx.o(0)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        int128_t temp0_18
        int32_t temp1_3
        temp0_18, temp1_3 = _mm256_i32gather_epi32(arg15, *(arg3 + zmm0[0].q), arg5)
        arg15 = temp0_18
        zmm0[0].o = zx.o(0)
        arg6 = _mm256_cmpeq_epi32(arg6, arg6)
        int128_t temp0_20
        int32_t temp1_4
        temp0_20, temp1_4 = _mm256_i32gather_epi32(zmm0, *(arg3 + (zmm0 | zmm3)[0].q), arg6)
        zmm0 = temp0_20
        arg6 = temp1_4
        arg5 = _mm256_cmpgt_epi32(var_420_1, zmm0)
        char temp0_22 = _mm256_movemask_ps(arg5)
        
        if (temp0_22 == 0)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        label_140104978:
            zmm3[0].o = arg18
            bool cond:4_1 = zx.o(0) f>= zmm3[0]
            arg6 = _mm256_xor_ps(arg5, arg8)
            
            if (cond:4_1)
                arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                arg11 = _mm256_blendv_ps(arg11, arg8, arg6)
                arg9 = _mm256_blendv_ps(arg9, arg8, arg6)
                arg16 = _mm256_blendv_ps(arg16, arg8, arg6)
            else
                arg5[0].o = arg18
                bool cond:3_1 = arg5[0].o f>= 1f
                arg5 = _mm256_add_epi32(zmm0, arg8)
                
                if (cond:3_1)
                    arg11 = _mm256_blendv_ps(arg11, arg5, arg6)
                    arg9 = _mm256_blendv_ps(arg9, arg5, arg6)
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    arg16 = _mm256_blendv_ps(arg16, arg8, arg6)
                else
                    zmm4 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg5), var_180_1)
                    arg7 = _mm256_round_ps(zmm4, 9)
                    zmm3 = _mm256_min_epi32(arg5, _mm256_cvttps_epi32(arg7))
                    arg11 = _mm256_blendv_ps(arg11, zmm3, arg6)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    
                    if (arg19 != 1)
                        zmm3 = _mm256_sub_ps(zmm4, arg7)
                    
                    arg5 = _mm256_min_epi32(_mm256_sub_epi32(arg11, arg8), arg5)
                    arg9 = _mm256_blendv_ps(arg9, arg5, arg6)
                    arg16 = _mm256_blendv_ps(arg16, zmm3, arg6)
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        else
            arg11 = _mm256_andnot_ps(arg5, arg11)
            arg9 = _mm256_andnot_ps(arg5, arg9)
            arg16 = _mm256_andnot_ps(arg5, arg16)
            
            if (temp0_22 != 0xff)
                goto label_140104978
            
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        
        zmm0 = __vpcmpgtd_ymmqq_ymmqq_memqq(zmm0, var_140_1) & arg12
        zmm4 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg8, var_160_1, zmm0)
        uint64_t r13_1 = zx.q(r12.d)
        float var_400_1[0x8] = arg9
        uint32_t var_480_1[0x8]
        uint32_t var_460_1[0x8]
        float var_440_1[0x8]
        
        if (r12.d u> 6)
        label_140104ab0:
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            var_440_1 = arg14
            var_460_1 = arg14
            var_480_1 = arg14
            arg13[0].o = zx.o(0)
            arg6[0].o = zx.o(0)
        else
            arg6 = __vpmulld_ymmqq_ymmqq_memqq(arg11, var_380_1)
            
            switch (r13_1)
                case 0, 1
                    zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg15, zmm4), arg6)
                    arg6[0].o = zx.o(0)
                    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                    int128_t temp0_55
                    int32_t temp1_5
                    temp0_55, temp1_5 = _mm256_i32gather_ps(arg6, *(arg4 + zmm0[0].q), arg5)
                    arg6 = temp0_55
                    arg5 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_500_1)
                    arg13[0].o = zx.o(0)
                    zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                    int128_t temp0_58
                    int32_t temp1_6
                    temp0_58, temp1_6 = _mm256_i32gather_ps(arg13, *(arg4 + arg5[0].q), zmm3)
                    arg13 = temp0_58
                    zmm3 = temp1_6
                    arg5 = __vpbroadcastd_ymmqq_memd(8)
                    zmm0 = _mm256_add_epi32(zmm0, arg5)
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                    int128_t temp0_63
                    int32_t temp1_7
                    temp0_63, temp1_7 = _mm256_i32gather_ps(arg14, *(arg4 + zmm0[0].q), arg5)
                    arg14 = temp0_63
                    arg5 = temp1_7
                case 2
                    zmm0 = _mm256_add_epi32(arg15, zmm4)
                    arg6 = _mm256_add_epi32(zmm0, arg6)
                    uint32_t rsi_3 = arg6[0]
                    int64_t r15_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int64_t r10_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                    float r11_1 = zmm0[0]
                    int64_t r11_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t rdi_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t rsi_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = zx.o(*(arg4 + sx.q(rsi_3)))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_1), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_5), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r12_2), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(r11_1)), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_2), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_4), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_5), 7)
                    arg5 = __vpaddd_ymmqq_ymmqq_memqq(arg6, var_420_1)
                    int32_t rcx_6 = arg5[0]
                    int64_t r8_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                    int64_t r10_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                    int64_t r14_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                    arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                    int32_t rsi_7 = arg5[0]
                    int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                    int64_t rdi_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                    int64_t rcx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                    arg5[0].o = zx.o(*(arg4 + sx.q(rcx_6)))
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r8_1), 1)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r10_6), 2)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r14_2), 3)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + sx.q(rsi_7)), 4)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r15_2), 5)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rdi_8), 6)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rcx_9), 7)
                    arg6 = __vpaddd_ymmqq_ymmqq_memqq(arg6, var_500_1)
                    uint32_t rcx_10 = arg6[0]
                    int64_t r8_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int64_t r10_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int64_t r14_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    uint32_t rsi_10 = arg6[0]
                    int64_t rcx_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int64_t r15_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int64_t r12_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = zx.o(*(arg4 + sx.q(rcx_10)))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r8_2), 1)
                    arg3 = var_510_1
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r10_7), 2)
                    r10_4 = var_518_1
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r14_3), 3)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(rsi_10)), 4)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rcx_12), 5)
                    zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    zmm3 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, zmm3))
                    arg7 = _mm256_broadcast_ss(32767f)
                    zmm0 = _mm256_div_ps(zmm0, arg7)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r15_3), 6)
                    arg5 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 
                            zmm3)), 
                        arg7)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r12_4), 7)
                    r12 = var_508_1
                    zmm3 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 
                            zmm3)), 
                        arg7)
                    arg7 = _mm256_broadcast_ss(128f)
                    arg6 = _mm256_mul_ps(zmm0, arg7)
                    arg13 = _mm256_mul_ps(arg5, arg7)
                    arg14 = _mm256_mul_ps(zmm3, arg7)
                case 3
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    zmm0 = _mm256_cmpeq_epi32(zmm0, zmm0)
                    int128_t temp0_131
                    int32_t temp1_8
                    temp0_131, temp1_8 = _mm256_i32gather_ps(arg9, *(arg4 + arg15[0].q), zmm0)
                    zmm0 = temp1_8
                    arg5 = __vpaddd_ymmqq_ymmqq_memqq(arg15, var_500_1)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                    int128_t temp0_135
                    int32_t temp1_9
                    temp0_135, temp1_9 = _mm256_i32gather_ps(zmm0, *(arg4 + arg5[0].q), zmm3)
                    zmm0 = temp0_135
                    zmm3 = temp1_9
                    arg5 = _mm256_add_epi32(arg15, __vpbroadcastd_ymmqq_memd(8))
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                    int128_t temp0_140
                    int32_t temp1_10
                    temp0_140, temp1_10 = _mm256_i32gather_ps(arg7, *(arg4 + arg5[0].q), zmm3)
                    zmm3 = temp1_10
                    arg5 = _mm256_add_epi32(arg15, __vpbroadcastd_ymmqq_memd(0xc))
                    arg12[0].o = zx.o(0)
                    zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                    int128_t temp0_144
                    int32_t temp1_11
                    temp0_144, temp1_11 = _mm256_i32gather_ps(arg12, *(arg4 + arg5[0].q), zmm3)
                    zmm3 = temp1_11
                    arg5 = _mm256_add_epi32(arg15, __vpbroadcastd_ymmqq_memd(0x10))
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    int128_t temp0_149
                    int32_t temp1_12
                    temp0_149, temp1_12 = _mm256_i32gather_ps(zmm3, *(arg4 + arg5[0].q), arg13)
                    zmm3 = temp0_149
                    arg13 = temp1_12
                    arg5 = _mm256_add_epi32(arg15, __vpbroadcastd_ymmqq_memd(0x14))
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    int128_t temp0_154
                    int32_t temp1_13
                    temp0_154, temp1_13 = _mm256_i32gather_ps(arg8, *(arg4 + arg5[0].q), arg13)
                    arg8 = temp0_154
                    arg13 = temp1_13
                    arg5 = _mm256_add_epi32(_mm256_add_epi32(arg15, zmm4), arg6)
                    arg6[0].o = zx.o(0)
                    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
                    int128_t temp0_158
                    int32_t temp1_14
                    temp0_158, temp1_14 = _mm256_i32gather_epi32(arg6, *(arg4 + arg5[0].q), arg13)
                    arg6 = temp0_158
                    arg5 = _mm256_srli_epi32(arg6, 0x15)
                    arg13 = _mm256_srli_epi32(arg6, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg6 = _mm256_fmadd_ps(
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                arg6 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f)), 
                        temp0_144, temp0_131)
                    arg9 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg12 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg13, arg9))
                    arg14 = _mm256_broadcast_ss(1023f)
                    arg13 = _mm256_div_ps(arg12, arg14)
                    arg5 = _mm256_add_epi32(arg5, arg9)
                    arg9 = var_400_1
                    arg12 = var_300_1
                    arg5 = _mm256_cvtepi32_ps(arg5)
                    arg14 = _mm256_div_ps(arg5, arg14)
                    arg13 = _mm256_fmadd_ps(arg13, zmm3, zmm0)
                    arg14 = _mm256_fmadd_ps(arg14, arg8, temp0_140)
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                case 4, 5, 6
                    goto label_140104ab0
            
            var_480_1 = arg6
            var_460_1 = arg13
            var_440_1 = arg14
        
        arg7 = _mm256_cmpeq_epi32(arg11, arg9)
        zmm0 = _mm256_cmpeq_epi32(zmm0, zmm0)
        arg17 = arg7 ^ zmm0
        
        if (_mm256_movemask_ps(arg17) != 0)
            float var_360_1[0x8]
            int32_t var_340_1[0x8]
            float var_320_1[0x8]
            
            if (r12.d u> 6)
            label_140104f00:
                var_360_1 = _mm256_maskstore_ps(arg17, arg8)
                var_340_1 = _mm256_maskstore_ps(arg17, arg8)
                var_320_1 = _mm256_maskstore_ps(arg17, arg8)
            else
                zmm3 = __vpmulld_ymmqq_ymmqq_memqq(arg9, var_380_1)
                
                switch (r13_1)
                    case 0, 1
                        arg5 = _mm256_add_epi32(_mm256_add_epi32(arg15, zmm4), zmm3)
                        zmm3[0].o = zx.o(0)
                        int128_t temp0_186
                        int32_t temp1_15
                        temp0_186, temp1_15 = _mm256_i32gather_ps(zmm3, *(arg4 + arg5[0].q), arg17)
                        zmm4 = __vpaddd_ymmqq_ymmqq_memqq(arg5, var_500_1)
                        arg7[0].o = zx.o(0)
                        int128_t temp0_188
                        int32_t temp1_16
                        temp0_188, temp1_16 = _mm256_i32gather_ps(arg7, *(arg4 + zmm4[0].q), arg17)
                        arg7 = temp0_188
                        zmm4 = __vpbroadcastd_ymmqq_memd(8)
                        arg5 = _mm256_add_epi32(arg5, zmm4)
                        zmm4[0].o = zx.o(0)
                        int128_t temp0_191
                        int32_t temp1_17
                        temp0_191, temp1_17 = _mm256_i32gather_ps(zmm4, *(arg4 + arg5[0].q), arg17)
                        zmm4 = temp0_191
                        arg8 = temp1_17
                        var_360_1 = _mm256_maskstore_ps(arg17, temp0_186)
                        var_340_1 = _mm256_maskstore_ps(arg17, arg7)
                        var_320_1 = _mm256_maskstore_ps(arg17, zmm4)
                    case 2
                        zmm4 = _mm256_add_epi32(_mm256_add_epi32(arg15, zmm4), zmm3)
                        zmm0 = arg7 & not.32(zmm4)
                        int64_t r8_3 = sx.q(zmm0[0])
                        int64_t r10_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_201 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t r11_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t r15_4 = sx.q(zmm0[0])
                        int64_t r12_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_205 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t rdi_17 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(arg4 + r8_3))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_8), 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(temp0_201)), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_5), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_4), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r12_5), 5)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(temp0_205)), 6)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_17), 7)
                        zmm0 = arg7 & not.32(__vpaddd_ymmqq_ymmqq_memqq(zmm4, var_420_1))
                        int64_t r8_4 = sx.q(zmm0[0])
                        int64_t r10_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r11_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t r14_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t r15_5 = sx.q(zmm0[0])
                        int64_t r12_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t rcx_23 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int32_t temp0_221 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                        zmm0[0].o = zx.o(*(arg4 + r8_4))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_9), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_6), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_5), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_5), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r12_6), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_23), 6)
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(temp0_221)), 7)
                        zmm0 = arg7 & not.32(__vpaddd_ymmqq_ymmqq_memqq(zmm4, var_500_1))
                        float rcx_25 = zmm0[0]
                        int64_t r8_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r10_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t r14_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        float rsi_19 = zmm0[0]
                        int64_t rcx_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r15_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t r12_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_25)))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_5), 1)
                        arg3 = var_510_1
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_10), 2)
                        r10_4 = var_518_1
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_6), 3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rsi_19)), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_27), 5)
                        arg5 = _mm256_cvtepu16_epi32(arg6[0].o)
                        arg6 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, arg6))
                        zmm4 = _mm256_broadcast_ss(32767f)
                        arg5 = _mm256_div_ps(arg5, zmm4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_6), 6)
                        zmm3 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm3[0].o), 
                                arg6)), 
                            zmm4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r12_7), 7)
                        r12 = var_508_1
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                arg6)), 
                            zmm4)
                        arg6 = _mm256_broadcast_ss(128f)
                        arg5 = _mm256_mul_ps(arg5, arg6)
                        zmm3 = _mm256_mul_ps(zmm3, arg6)
                        zmm0 = _mm256_mul_ps(zmm0, arg6)
                        var_360_1 = _mm256_maskstore_ps(arg17, arg5)
                        var_340_1 = _mm256_maskstore_ps(arg17, zmm3)
                        var_320_1 = _mm256_maskstore_ps(arg17, zmm0)
                        arg6 = var_480_1
                        arg13 = var_460_1
                        arg14 = var_440_1
                    case 3
                        zmm0[0].o = zx.o(0)
                        int128_t temp0_265
                        int32_t temp1_18
                        temp0_265, temp1_18 = _mm256_i32gather_ps(zmm0, *(arg4 + arg15[0].q), arg17)
                        zmm0 = temp0_265
                        float var_1a0_1[0x8] = zmm0
                        arg5 = __vpaddd_ymmqq_ymmqq_memqq(arg15, var_500_1)
                        arg7[0].o = zx.o(0)
                        int128_t temp0_267
                        int32_t temp1_19
                        temp0_267, temp1_19 = _mm256_i32gather_ps(arg7, *(arg4 + arg5[0].q), arg17)
                        arg7 = temp0_267
                        arg5 = _mm256_add_epi32(arg15, __vpbroadcastd_ymmqq_memd(8))
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        int128_t temp0_271
                        int32_t temp1_20
                        temp0_271, temp1_20 = _mm256_i32gather_ps(zmm0, *(arg4 + arg5[0].q), arg17)
                        float var_1c0_1[0x8] = temp0_271
                        arg5 = __vpbroadcastd_ymmqq_memd(0xc)
                        arg8 = _mm256_add_epi32(arg15, arg5)
                        arg5[0].o = zx.o(0)
                        int128_t temp0_274
                        int32_t temp1_21
                        temp0_274, temp1_21 = _mm256_i32gather_ps(arg5, *(arg4 + arg8[0].q), arg17)
                        zmm0 = _mm256_add_epi32(arg15, __vpbroadcastd_ymmqq_memd(0x10))
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int128_t temp0_278
                        int32_t temp1_22
                        temp0_278, temp1_22 = _mm256_i32gather_ps(arg8, *(arg4 + zmm0[0].q), arg17)
                        arg8 = temp0_278
                        arg9 = temp1_22
                        zmm0 = _mm256_add_epi32(arg15, __vpbroadcastd_ymmqq_memd(0x14))
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        int128_t temp0_282
                        int32_t temp1_23
                        temp0_282, temp1_23 = _mm256_i32gather_ps(arg9, *(arg4 + zmm0[0].q), arg17)
                        arg9 = temp0_282
                        zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg15, zmm4), zmm3)
                        zmm3[0].o = zx.o(0)
                        int128_t temp0_285
                        int32_t temp1_24
                        temp0_285, temp1_24 =
                            _mm256_i32gather_epi32(zmm3, *(arg4 + zmm0[0].q), arg17)
                        zmm3 = temp0_285
                        zmm0 = _mm256_srli_epi32(zmm3, 0x15)
                        zmm4 = _mm256_srli_epi32(zmm3, 0xa)
                        arg12 = __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm3 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                zmm3 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        zmm4 &= arg12
                        arg12 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm4 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm4, arg12))
                        arg15 = _mm256_broadcast_ss(1023f)
                        zmm4 = _mm256_div_ps(zmm4, arg15)
                        zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, temp0_274, var_1a0_1)
                        zmm4 = _mm256_fmadd_ps(zmm4, arg8, arg7)
                        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(
                            _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg12)), 
                                arg15), 
                            arg9, var_1c0_1)
                        arg12 = var_300_1
                        var_360_1 = _mm256_maskstore_ps(arg17, zmm3)
                        var_340_1 = _mm256_maskstore_ps(arg17, zmm4)
                        var_320_1 = _mm256_maskstore_ps(arg17, zmm0)
                    case 4, 5, 6
                        goto label_140104f00
            
            zmm0 = _mm256_sub_ps(var_360_1, arg6)
            arg5 = _mm256_sub_ps(var_340_1, arg13)
            zmm3 = _mm256_sub_ps(var_320_1, arg14)
            zmm0 = _mm256_fmadd_ps(zmm0, arg16, arg6)
            arg5 = _mm256_fmadd_ps(arg5, arg16, arg13)
            zmm3 = _mm256_fmadd_ps(zmm3, arg16, arg14)
            arg6 = _mm256_maskstore_ps(arg17, zmm0)
            arg13 = _mm256_maskstore_ps(arg17, arg5)
            arg14 = _mm256_maskstore_ps(arg17, zmm3)
        
        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
        arg5[0].o = _mm256_extracti128_si256(arg13, 1)
        zmm3[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        zmm4[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg9[0].o)
        arg7[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
        arg8[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg14[0].o, 0x28)
        int128_t var_2c0 = arg8[0].o
        arg8[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg9[0].o)
        zmm4[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
        int128_t var_2b0_1 = zmm4[0].o
        arg6[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg14[0].o, 0xa8)
        int128_t var_2a0_1 = zmm4[0].o
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
        int128_t var_290_1 = arg6[0].o
        arg6[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg9[0].o)
        zmm4[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x28)
        int128_t var_280_1 = arg7[0].o
        arg7[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg9[0].o)
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
        int128_t var_270_1 = arg6[0].o
        zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0xa8)
        int128_t var_260_1 = arg5[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
        int128_t var_250_1 = zmm0[0].o
        uint64_t i_1 = 0xff
        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
        
        do
            uint64_t rcx_29 = _tzcnt_u64(i_1)
            int64_t r15_7 = i_1 & not.q(1 << (rcx_29 u% 0x40))
            uint32_t var_2e0[0x8] = arg10
            zmm0[0].o = (&var_2c0)[rcx_29]
            *(arg1 + sx.q(var_2e0[zx.q(rcx_29.d) & 7]) * 0x30 + 0x10) = zmm0[0].o
            uint64_t rcx_34 = _tzcnt_u64(r15_7)
            zmm0[0].o = (&var_2c0)[rcx_34]
            *(arg1 + sx.q(var_2e0[zx.q(rcx_34.d) & 7]) * 0x30 + 0x10) = zmm0[0].o
            i_1 = r15_7 & rol.q(-2, rcx_34.b)
        while (i_1 != 0)
        
        rbx_2 += 8
        arg9 = var_400_1
    while (rbx_2 s< r10_4)
    
    rcx_36 = arg21
    
    if (rbx_2 s< rcx_36)
        goto label_1401054ae
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
