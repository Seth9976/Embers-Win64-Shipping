// 函数: sub_140107bc0
// 地址: 0x140107bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg16[0].o
int128_t var_78 = arg15[0].o
int128_t var_88 = arg14[0].o
int128_t var_98 = arg13[0].o
int128_t var_a8 = arg12[0].o
int128_t var_b8 = arg11[0].o
int128_t var_c8 = arg10[0].o
int128_t var_d8 = arg9[0].o
int128_t var_e8 = arg8[0].o
int64_t rdi = sx.q(arg19)
float zmm14[0x8]
zmm14[0].o = zx.o(arg17)
int32_t rbx_1 = *(&data_143442270 + (rdi << 2)) * *(&data_143442250 + (rdi << 2))
int32_t rbx_2 = 0
int32_t var_728 = rdi.d
int32_t rcx = 0x18

if (rdi != 3)
    rcx = 0

int32_t r10_4 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
int32_t zmm0[0x8]
float zmm2[0x8]
float zmm4[0x8]

if (r10_4 s> 0)
    zmm0 = _mm256_broadcastd_epi32(zmm14[0])
    float var_2c0_1[0x8] = zmm0
    zmm0[0].o = zx.o(rcx)
    zmm0 = _mm256_broadcastd_epi32(zmm0[0])
    int32_t var_720_1[0x8] = zmm0
    zmm0[0].o = zx.o(rbx_1)
    int32_t var_600_1[0x8] = _mm256_broadcastd_epi32(zmm0[0])
    rbx_2 = 0
    arg10 = _mm256_cmpeq_epi32(arg10, arg10)
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    arg9 = __vpbroadcastd_ymmqq_memd(4)
    arg11 = __vpbroadcastd_ymmqq_memd(8)
    int32_t var_6e0_1[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
    zmm0 = _mm256_broadcast_ss(1.40129846e-45f)
    int32_t var_480_1[0x8] = zmm0
    int64_t var_608_1 = arg2
    int32_t var_72c_1 = r10_4
    float var_6c0_1[0x8] = arg9
    float var_5e0_1[0x8] = arg11
    
    do
        zmm0[0].o = zx.o(rbx_2)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_broadcastd_epi32(zmm0[0]), 3), 
            data_143442140)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        arg14[0].o = zx.o(0)
        int32_t temp0_14
        int32_t temp1_1
        temp0_14, temp1_1 = _mm256_i32gather_epi32(arg14, *(arg2 + zmm0[0].q), arg5)
        arg14 = temp0_14
        arg5 = temp1_1
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        zmm2[0].o = zx.o(0)
        int32_t temp0_16
        int32_t temp1_2
        temp0_16, temp1_2 = _mm256_i32gather_epi32(zmm2, *(arg2 + (zmm0 | arg9)[0].q), arg5)
        zmm2 = temp0_16
        zmm0 = _mm256_slli_epi32(zmm2, 4)
        arg5 = zmm0 | arg11
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        arg13[0].o = zx.o(0)
        int32_t temp0_19
        int32_t temp1_3
        temp0_19, temp1_3 = _mm256_i32gather_epi32(arg13, *(arg3 + arg5[0].q), zmm2)
        arg13 = temp0_19
        zmm2 = temp1_3
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        zmm4[0].o = zx.o(0)
        int32_t temp0_21
        int32_t temp1_4
        temp0_21, temp1_4 = _mm256_i32gather_epi32(zmm4, *(arg3 + (zmm0 | var_6e0_1)[0].q), arg5)
        zmm4 = temp0_21
        arg5 = temp1_4
        zmm0 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm4, var_480_1)
        int32_t var_520[0x8]
        float var_500[0x8]
        float var_4e0[0x8]
        float var_4c0[0x8]
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm2[0].o = zx.o(0)
            int32_t temp0_24
            int32_t temp1_5
            temp0_24, temp1_5 = _mm256_i32gather_ps(zmm2, *(arg4 + arg13[0].q), zmm0)
            zmm2 = temp0_24
            arg5 = _mm256_add_epi32(arg13, arg9)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            int32_t temp0_27
            int32_t temp1_6
            temp0_27, temp1_6 = _mm256_i32gather_ps(arg7, *(arg4 + arg5[0].q), zmm0)
            arg7 = temp0_27
            arg5 = _mm256_add_epi32(arg13, arg11)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            int32_t temp0_30
            int32_t temp1_7
            temp0_30, temp1_7 = _mm256_i32gather_ps(arg8, *(arg4 + arg5[0].q), zmm0)
            arg8 = temp0_30
            arg5 = _mm256_fnmadd_ps(
                _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm2, zmm2), arg7, 
                    arg7), 
                arg8, arg8)
            arg6 = _mm256_cmp_ps(arg12, arg5, 1)
            arg5 = _mm256_and_ps(arg6, _mm256_sqrt_ps(arg5))
            var_520 = _mm256_maskstore_ps(zmm0, zmm2)
            var_500 = _mm256_maskstore_ps(zmm0, arg7)
            var_4e0 = _mm256_maskstore_ps(zmm0, arg8)
            var_4c0 = _mm256_maskstore_ps(zmm0, arg5)
        
        zmm0 ^= arg10
        int32_t temp0_42 = _mm256_movemask_ps(zmm0)
        
        if (temp0_42 != 0)
            arg5 = __vpbroadcastd_ymmqq_memd(2)
            int32_t var_4a0_1[0x8] = arg5
            zmm2 = _mm256_cmpgt_epi32(arg5, zmm4)
            arg7 = zmm2 & zmm0
            int32_t temp0_45 = _mm256_movemask_ps(arg7)
            int32_t var_700[0x8]
            
            if (temp0_45 != 0)
                arg16 = _mm256_blendv_ps(arg16, arg12, arg7)
                arg15 = _mm256_blendv_ps(arg15, arg12, arg7)
                arg5 = zmm2 & not.32(var_700)
                var_700 = arg5
                
                if (temp0_42 == temp0_45)
                    goto label_140107fb1
                
                zmm2 = arg7 ^ arg10
                
                if (zx.o(0) f>= zmm14[0])
                    goto label_140107f78
                
                goto label_140107ea7
            
            arg7[0].o = zx.o(0)
            zmm2 = arg7 ^ arg10
            uint64_t rsi_1
            
            if (zx.o(0) f< zmm14[0])
            label_140107ea7:
                bool cond:4_1 = zmm14[0].o f>= 1f
                arg6 = _mm256_add_epi32(zmm4, arg10)
                
                if (cond:4_1)
                    zmm4 = _mm256_xor_ps(arg7, zmm0)
                    arg16 = _mm256_blendv_ps(arg16, arg6, zmm4)
                    arg15 = _mm256_blendv_ps(arg15, arg6, zmm4)
                    goto label_140107fa0
                
                arg11 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg6), var_2c0_1)
                zmm4 = _mm256_xor_ps(arg7, zmm0)
                arg12 = _mm256_round_ps(arg11, 9)
                arg7 = _mm256_min_epi32(arg6, _mm256_cvttps_epi32(arg12))
                arg16 = _mm256_blendv_ps(arg16, arg7, zmm4)
                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                
                if (arg18 != 1)
                    arg7 = _mm256_sub_ps(arg11, arg12)
                
                arg8 = _mm256_sub_epi32(arg16, arg10)
                arg6 = _mm256_min_epi32(arg8, arg6)
                arg15 = _mm256_blendv_ps(arg15, arg6, zmm4)
                arg5 = _mm256_blendv_ps(var_700, arg7, zmm2)
                var_700 = arg5
                arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                arg11 = var_5e0_1
                rsi_1 = zx.q(var_728)
                
                if (var_728 u<= 5)
                    goto label_140107fbc
                
                goto label_140107f33
            
        label_140107f78:
            arg6 = _mm256_xor_ps(arg7, zmm0)
            arg16 = _mm256_blendv_ps(arg16, arg12, arg6)
            arg15 = _mm256_blendv_ps(arg15, arg12, arg6)
        label_140107fa0:
            arg5 = _mm256_blendv_ps(var_700, arg12, zmm2)
            var_700 = arg5
        label_140107fb1:
            rsi_1 = zx.q(var_728)
            
            if (var_728 u> 5)
            label_140107f33:
                var_520 = _mm256_maskstore_ps(zmm0, arg12)
                var_500 = _mm256_maskstore_ps(zmm0, arg12)
                var_4e0 = _mm256_maskstore_ps(zmm0, arg12)
                var_4c0 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
            else
            label_140107fbc:
                arg6 = __vpmulld_ymmqq_ymmqq_memqq(arg16, var_600_1)
                
                switch (rsi_1)
                    case 0
                        zmm2 = _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg13, var_720_1), arg6)
                        zmm4[0].o = zx.o(0)
                        int32_t temp0_77
                        int32_t temp1_8
                        temp0_77, temp1_8 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm2[0].q), zmm0)
                        zmm4 = temp0_77
                        arg6 = _mm256_add_epi32(zmm2, arg9)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int32_t temp0_80
                        int32_t temp1_9
                        temp0_80, temp1_9 = _mm256_i32gather_ps(arg8, *(arg4 + arg6[0].q), zmm0)
                        arg8 = temp0_80
                        arg6 = _mm256_add_epi32(zmm2, arg11)
                        arg9[0].o = zx.o(0)
                        int32_t temp0_82
                        int32_t temp1_10
                        temp0_82, temp1_10 = _mm256_i32gather_ps(arg9, *(arg4 + arg6[0].q), zmm0)
                        arg7 = temp1_10
                        zmm2 = __vpaddd_ymmqq_ymmqq_memqq(zmm2, var_6e0_1)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int32_t temp0_85
                        int32_t temp1_11
                        temp0_85, temp1_11 = _mm256_i32gather_ps(arg7, *(arg4 + zmm2[0].q), zmm0)
                        arg7 = temp0_85
                        arg6 = temp1_11
                        var_520 = _mm256_maskstore_ps(zmm0, zmm4)
                        var_500 = _mm256_maskstore_ps(zmm0, arg8)
                        var_4e0 = _mm256_maskstore_ps(zmm0, temp0_82)
                        arg9 = var_6c0_1
                        var_4c0 = _mm256_maskstore_ps(zmm0, arg7)
                    case 1
                        zmm2 = _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg13, var_720_1), arg6)
                        zmm4[0].o = zx.o(0)
                        int32_t temp0_91
                        int32_t temp1_12
                        temp0_91, temp1_12 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm2[0].q), zmm0)
                        zmm4 = temp0_91
                        arg6 = _mm256_add_epi32(zmm2, arg9)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int32_t temp0_94
                        int32_t temp1_13
                        temp0_94, temp1_13 = _mm256_i32gather_ps(arg8, *(arg4 + arg6[0].q), zmm0)
                        arg8 = temp0_94
                        arg7 = temp1_13
                        zmm2 = _mm256_add_epi32(zmm2, arg11)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int32_t temp0_97
                        int32_t temp1_14
                        temp0_97, temp1_14 = _mm256_i32gather_ps(arg7, *(arg4 + zmm2[0].q), zmm0)
                        arg7 = temp0_97
                        zmm2 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm4, zmm4), 
                                arg8, arg8), 
                            arg7, arg7)
                        arg6 = _mm256_cmp_ps(arg12, zmm2, 1)
                        zmm2 = _mm256_and_ps(arg6, _mm256_sqrt_ps(zmm2))
                        var_520 = _mm256_maskstore_ps(zmm0, zmm4)
                        var_500 = _mm256_maskstore_ps(zmm0, arg8)
                        var_4e0 = _mm256_maskstore_ps(zmm0, arg7)
                        var_4c0 = _mm256_maskstore_ps(zmm0, zmm2)
                    case 2
                        arg7 = _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg13, var_720_1), arg6)
                        zmm2 = _mm256_blendv_ps(arg12, arg7, zmm0)
                        float rdi_4 = zmm2[0]
                        int64_t rsi_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        int64_t rcx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                        int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                        float r13_1 = zmm2[0]
                        int64_t r10_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                        int64_t r14_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        zmm2[0].o = zx.o(*(arg4 + sx.q(rdi_4)))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rsi_3), 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rcx_8), 2)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r15_2), 3)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + sx.q(r13_1)), 4)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r10_6), 5)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r12_2), 6)
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r14_2), 7)
                        zmm2 = _mm256_blendv_ps(arg12, __vpaddd_ymmqq_ymmqq_memqq(arg7, var_4a0_1), 
                            zmm0)
                        float rcx_9 = zmm2[0]
                        int64_t r10_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        int64_t r14_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                        int64_t r12_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                        float rsi_5 = zmm2[0]
                        int64_t r13_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        int64_t rdi_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                        int64_t rcx_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        zmm2[0].o = zx.o(*(arg4 + sx.q(rcx_9)))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r10_7), 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r14_3), 2)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r12_3), 3)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + sx.q(rsi_5)), 4)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r13_3), 5)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rdi_10), 6)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rcx_12), 7)
                        arg6 = _mm256_blendv_ps(arg12, _mm256_add_epi32(arg7, arg9), zmm0)
                        int64_t r13_4 = sx.q(arg6[0])
                        int64_t r10_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        int32_t temp0_144 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                        int64_t r14_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t rcx_15 = sx.q(arg6[0])
                        int64_t rdi_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        int32_t temp0_148 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                        int64_t r12_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = zx.o(*(arg4 + r13_4))
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r10_8), 1)
                        r10_4 = var_72c_1
                        arg2 = var_608_1
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(temp0_144)), 2)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r14_4), 3)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rcx_15), 4)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdi_13), 5)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(temp0_148)), 6)
                        zmm4 = _mm256_cvtepu16_epi32(zmm4[0].o)
                        arg7 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        zmm4 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm4, arg7))
                        arg8 = _mm256_broadcast_ss(32767f)
                        zmm4 = _mm256_div_ps(zmm4, arg8)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r12_4), 7)
                        zmm2 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 
                                arg7)), 
                            arg8)
                        arg6 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 
                                arg7)), 
                            arg8)
                        arg7 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm4, zmm4), 
                                zmm2, zmm2), 
                            arg6, arg6)
                        arg8 = _mm256_cmp_ps(arg12, arg7, 1)
                        arg7 = _mm256_and_ps(arg8, _mm256_sqrt_ps(arg7))
                        var_520 = _mm256_maskstore_ps(zmm0, zmm4)
                        var_500 = _mm256_maskstore_ps(zmm0, zmm2)
                        var_4e0 = _mm256_maskstore_ps(zmm0, arg6)
                        var_4c0 = _mm256_maskstore_ps(zmm0, arg7)
                    case 3
                        zmm4[0].o = zx.o(0)
                        int32_t temp0_181
                        int32_t temp1_15
                        temp0_181, temp1_15 = _mm256_i32gather_ps(zmm4, *(arg4 + arg13[0].q), zmm0)
                        zmm2 = _mm256_add_epi32(arg13, arg9)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int32_t temp0_184
                        int32_t temp1_16
                        temp0_184, temp1_16 = _mm256_i32gather_ps(arg7, *(arg4 + zmm2[0].q), zmm0)
                        arg7 = temp0_184
                        arg8 = _mm256_add_epi32(arg13, arg11)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        int32_t temp0_187
                        int32_t temp1_17
                        temp0_187, temp1_17 = _mm256_i32gather_ps(zmm2, *(arg4 + arg8[0].q), zmm0)
                        arg8 = __vpaddd_ymmqq_ymmqq_memqq(arg13, var_6e0_1)
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        int32_t temp0_190
                        int32_t temp1_18
                        temp0_190, temp1_18 = _mm256_i32gather_ps(arg12, *(arg4 + arg8[0].q), zmm0)
                        arg12 = temp0_190
                        arg8 = _mm256_add_epi32(arg13, __vpbroadcastd_ymmqq_memd(0x10))
                        arg11[0].o = zx.o(0)
                        int32_t temp0_193
                        int32_t temp1_19
                        temp0_193, temp1_19 = _mm256_i32gather_ps(arg11, *(arg4 + arg8[0].q), zmm0)
                        arg8 = _mm256_add_epi32(arg13, __vpbroadcastd_ymmqq_memd(0x14))
                        arg10[0].o = zx.o(0)
                        int32_t temp0_196
                        int32_t temp1_20
                        temp0_196, temp1_20 = _mm256_i32gather_ps(arg10, *(arg4 + arg8[0].q), zmm0)
                        arg10 = temp0_196
                        arg9 = temp1_20
                        arg6 = _mm256_add_epi32(_mm256_add_epi32(arg13, var_720_1), arg6)
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        int32_t temp0_200
                        int32_t temp1_21
                        temp0_200, temp1_21 =
                            _mm256_i32gather_epi32(arg9, *(arg4 + arg6[0].q), zmm0)
                        arg9 = temp0_200
                        arg6 = _mm256_srli_epi32(arg9, 0x15)
                        arg5 = arg16
                        arg16 = arg15
                        arg8 = _mm256_srli_epi32(arg9, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg15 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg15))
                        arg8 = _mm256_add_epi32(arg8, arg15)
                        arg15 = _mm256_broadcast_ss(1023f)
                        arg6 = _mm256_div_ps(arg6, arg15)
                        arg8 = _mm256_div_ps(_mm256_cvtepi32_ps(arg8), arg15)
                        arg9 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                arg9 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg15 = arg16
                        arg16 = arg5
                        arg6 = _mm256_fmadd_ps(arg6, arg12, temp0_181)
                        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                        arg8 = _mm256_fmadd_ps(arg8, temp0_193, arg7)
                        arg11 = var_5e0_1
                        arg9 = _mm256_fmadd_ps(arg9, arg10, temp0_187)
                        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                        zmm2 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), 
                                arg8, arg8), 
                            arg9, arg9)
                        zmm4 = _mm256_cmp_ps(arg12, zmm2, 1)
                        zmm2 = _mm256_and_ps(zmm4, _mm256_sqrt_ps(zmm2))
                        var_520 = _mm256_maskstore_ps(zmm0, arg6)
                        var_500 = _mm256_maskstore_ps(zmm0, arg8)
                        var_4e0 = _mm256_maskstore_ps(zmm0, arg9)
                        arg9 = var_6c0_1
                        var_4c0 = _mm256_maskstore_ps(zmm0, zmm2)
                    case 4
                        zmm2 = _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg13, var_720_1), arg6)
                        zmm4[0].o = zx.o(0)
                        int32_t temp0_236
                        int32_t temp1_22
                        temp0_236, temp1_22 =
                            _mm256_i32gather_epi32(zmm4, *(arg4 + zmm2[0].q), zmm0)
                        zmm4 = temp0_236
                        zmm2 = _mm256_srli_epi32(zmm4, 0x15)
                        arg6 = _mm256_srli_epi32(zmm4, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm4 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                        arg7 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg7))
                        arg8 = _mm256_broadcast_ss(1023f)
                        zmm2 = _mm256_div_ps(zmm2, arg8)
                        arg6 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg7)), arg8)
                        zmm4 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(zmm4, 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                    label_140108646:
                        arg7 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm2, zmm2), 
                                arg6, arg6), 
                            zmm4, zmm4)
                        arg8 = _mm256_cmp_ps(arg12, arg7, 1)
                        arg7 = _mm256_and_ps(arg8, _mm256_sqrt_ps(arg7))
                        var_520 = _mm256_maskstore_ps(zmm0, zmm2)
                        var_500 = _mm256_maskstore_ps(zmm0, arg6)
                        var_4e0 = _mm256_maskstore_ps(zmm0, zmm4)
                        var_4c0 = _mm256_maskstore_ps(zmm0, arg7)
                    case 5
                        zmm2 = _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg13, var_720_1), arg6)
                        zmm4[0].o = zx.o(0)
                        int32_t temp0_256
                        int32_t temp1_23
                        temp0_256, temp1_23 =
                            _mm256_i32gather_epi32(zmm4, *(arg4 + zmm2[0].q), zmm0)
                        zmm4 = temp0_256
                        zmm2 = _mm256_srli_epi32(zmm4, 0x15)
                        arg6 = _mm256_srli_epi32(zmm4, 0xa)
                        arg7 = _mm256_srli_epi32(zmm4, 5)
                        arg8 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                        arg9 = __vpbroadcastd_ymmqq_memd(0x400)
                        arg10 = __vpbroadcastd_ymmqq_memd(0x380)
                        arg11 = __vpbroadcastd_ymmqq_memd(0x3d80)
                        zmm2 = (arg7 & arg8) | (zmm2 & arg9) | _mm256_add_epi32(zmm2 & arg10, arg11)
                        arg7 = (_mm256_slli_epi32(zmm4, 6) & arg8) | (arg6 & arg9)
                        arg6 &= arg10
                        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                        arg6 = _mm256_add_epi32(arg6, arg11)
                        arg11 = var_5e0_1
                        arg6 |= arg7
                        arg7 = zmm4 & __vpbroadcastd_ymmqq_memd(0x1c0)
                        arg9 = var_6c0_1
                        zmm4 = (_mm256_slli_epi32(zmm4, 0x11) & __vpbroadcastd_ymmqq_memd(0x7e0000))
                            | (zmm4 & __vpbroadcastd_ymmqq_memd(0x200))
                            | _mm256_add_epi32(arg7, __vpbroadcastd_ymmqq_memd(0x1ec0))
                        goto label_140108646
            
            zmm2 = _mm256_cmpeq_epi32(arg16, arg15)
            zmm0 = zmm2 & not.32(zmm0)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                float var_460_1[0x8]
                int32_t var_440_1[0x8]
                float var_420_1[0x8]
                uint32_t var_400_1[0x8]
                
                if (var_728 u> 5)
                    var_460_1 = _mm256_maskstore_ps(zmm0, arg12)
                    var_440_1 = _mm256_maskstore_ps(zmm0, arg12)
                    var_420_1 = _mm256_maskstore_ps(zmm0, arg12)
                    var_400_1 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
                else
                    zmm2 = __vpmulld_ymmqq_ymmqq_memqq(arg15, var_600_1)
                    
                    switch (rsi_1)
                        case 0
                            arg5 =
                                _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg13, var_720_1), zmm2)
                            zmm2[0].o = zx.o(0)
                            int32_t temp0_290
                            int32_t temp1_24
                            temp0_290, temp1_24 =
                                _mm256_i32gather_ps(zmm2, *(arg4 + arg5[0].q), zmm0)
                            arg6 = _mm256_add_epi32(arg5, arg9)
                            zmm4[0].o = zx.o(0)
                            int32_t temp0_292
                            int32_t temp1_25
                            temp0_292, temp1_25 =
                                _mm256_i32gather_ps(zmm4, *(arg4 + arg6[0].q), zmm0)
                            arg7 = temp1_25
                            arg6 = _mm256_add_epi32(arg5, arg11)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int32_t temp0_295
                            int32_t temp1_26
                            temp0_295, temp1_26 =
                                _mm256_i32gather_ps(arg7, *(arg4 + arg6[0].q), zmm0)
                            arg5 = __vpaddd_ymmqq_ymmqq_memqq(arg5, var_6e0_1)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int32_t temp0_298
                            int32_t temp1_27
                            temp0_298, temp1_27 =
                                _mm256_i32gather_ps(arg6, *(arg4 + arg5[0].q), zmm0)
                            var_460_1 = _mm256_maskstore_ps(zmm0, temp0_290)
                            var_440_1 = _mm256_maskstore_ps(zmm0, temp0_292)
                            var_420_1 = _mm256_maskstore_ps(zmm0, temp0_295)
                            var_400_1 = _mm256_maskstore_ps(zmm0, temp0_298)
                        case 1
                            arg5 =
                                _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg13, var_720_1), zmm2)
                            zmm2[0].o = zx.o(0)
                            int32_t temp0_309
                            int32_t temp1_28
                            temp0_309, temp1_28 =
                                _mm256_i32gather_ps(zmm2, *(arg4 + arg5[0].q), zmm0)
                            zmm2 = temp0_309
                            arg6 = _mm256_add_epi32(arg5, arg9)
                            zmm4[0].o = zx.o(0)
                            int32_t temp0_311
                            int32_t temp1_29
                            temp0_311, temp1_29 =
                                _mm256_i32gather_ps(zmm4, *(arg4 + arg6[0].q), zmm0)
                            zmm4 = temp0_311
                            arg5 = _mm256_add_epi32(arg5, arg11)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int32_t temp0_314
                            int32_t temp1_30
                            temp0_314, temp1_30 =
                                _mm256_i32gather_ps(arg6, *(arg4 + arg5[0].q), zmm0)
                            arg6 = temp0_314
                            arg5 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm2, zmm2), zmm4, 
                                    zmm4), 
                                arg6, arg6)
                            arg5 =
                                _mm256_and_ps(_mm256_cmp_ps(arg12, arg5, 1), _mm256_sqrt_ps(arg5))
                            var_460_1 = _mm256_maskstore_ps(zmm0, zmm2)
                            var_440_1 = _mm256_maskstore_ps(zmm0, zmm4)
                            var_420_1 = _mm256_maskstore_ps(zmm0, arg6)
                            var_400_1 = _mm256_maskstore_ps(zmm0, arg5)
                        case 2
                            arg7 =
                                _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg13, var_720_1), zmm2)
                            zmm2 = _mm256_blendv_ps(arg12, arg7, zmm0)
                            float rcx_19 = zmm2[0]
                            int64_t r13_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                            int64_t r10_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                            int64_t r14_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                            float rdx_4 = zmm2[0]
                            int64_t r15_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                            int64_t rcx_21 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                            int64_t rsi_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                            zmm2[0].o = zx.o(*(arg4 + sx.q(rcx_19)))
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r13_5), 1)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r10_9), 2)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r14_5), 3)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + sx.q(rdx_4)), 4)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r15_5), 5)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rcx_21), 6)
                            zmm4[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rsi_12), 7)
                            arg5 = _mm256_blendv_ps(arg12, 
                                __vpaddd_ymmqq_ymmqq_memqq(arg7, var_4a0_1), zmm0)
                            int32_t rcx_22 = arg5[0]
                            int64_t r13_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                            int64_t r10_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                            int64_t r14_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                            arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                            int32_t rdx_7 = arg5[0]
                            int64_t r15_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                            int64_t rcx_24 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                            int64_t rsi_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                            arg5[0].o = zx.o(*(arg4 + sx.q(rcx_22)))
                            arg5[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r13_6), 1)
                            arg5[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r10_10), 2)
                            arg5[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r14_6), 3)
                            arg5[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + sx.q(rdx_7)), 4)
                            arg5[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r15_6), 5)
                            arg5[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rcx_24), 6)
                            arg5[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rsi_15), 7)
                            zmm2 = _mm256_blendv_ps(arg12, _mm256_add_epi32(arg7, arg9), zmm0)
                            int64_t r13_7 = sx.q(zmm2[0])
                            int64_t r10_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                            int32_t temp0_361 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                            int64_t r11_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                            int64_t rcx_27 = sx.q(zmm2[0])
                            int64_t r12_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                            int32_t temp0_365 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                            int64_t r15_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                            zmm2[0].o = zx.o(*(arg4 + r13_7))
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r10_11), 1)
                            r10_4 = var_72c_1
                            arg2 = var_608_1
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                *(arg4 + sx.q(temp0_361)), 2)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r11_4), 3)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rcx_27), 4)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r12_5), 5)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                *(arg4 + sx.q(temp0_365)), 6)
                            arg6 = _mm256_cvtepu16_epi32(zmm4[0].o)
                            zmm4 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                            arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, zmm4))
                            arg7 = _mm256_broadcast_ss(32767f)
                            arg6 = _mm256_div_ps(arg6, arg7)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r15_7), 7)
                            arg5 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg5[0].o), zmm4)), 
                                arg7)
                            zmm2 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(zmm2[0].o), zmm4)), 
                                arg7)
                            zmm4 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), arg5, 
                                    arg5), 
                                zmm2, zmm2)
                            zmm4 =
                                _mm256_and_ps(_mm256_cmp_ps(arg12, zmm4, 1), _mm256_sqrt_ps(zmm4))
                            var_460_1 = _mm256_maskstore_ps(zmm0, arg6)
                            var_440_1 = _mm256_maskstore_ps(zmm0, arg5)
                            var_420_1 = _mm256_maskstore_ps(zmm0, zmm2)
                            var_400_1 = _mm256_maskstore_ps(zmm0, zmm4)
                        case 3
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            int32_t temp0_399
                            int32_t temp1_31
                            temp0_399, temp1_31 =
                                _mm256_i32gather_ps(arg5, *(arg4 + arg13[0].q), zmm0)
                            arg6 = _mm256_add_epi32(arg13, arg9)
                            zmm4[0].o = zx.o(0)
                            int32_t temp0_401
                            int32_t temp1_32
                            temp0_401, temp1_32 =
                                _mm256_i32gather_ps(zmm4, *(arg4 + arg6[0].q), zmm0)
                            arg7 = temp1_32
                            arg6 = _mm256_add_epi32(arg13, arg11)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int32_t temp0_404
                            int32_t temp1_33
                            temp0_404, temp1_33 =
                                _mm256_i32gather_ps(arg7, *(arg4 + arg6[0].q), zmm0)
                            arg8 = __vpaddd_ymmqq_ymmqq_memqq(arg13, var_6e0_1)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int32_t temp0_407
                            int32_t temp1_34
                            temp0_407, temp1_34 =
                                _mm256_i32gather_ps(arg6, *(arg4 + arg8[0].q), zmm0)
                            arg8 = _mm256_add_epi32(arg13, __vpbroadcastd_ymmqq_memd(0x10))
                            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            int32_t temp0_411
                            int32_t temp1_35
                            temp0_411, temp1_35 =
                                _mm256_i32gather_ps(arg12, *(arg4 + arg8[0].q), zmm0)
                            arg12 = temp0_411
                            arg9 = temp1_35
                            arg8 = _mm256_add_epi32(arg13, __vpbroadcastd_ymmqq_memd(0x14))
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            int32_t temp0_415
                            int32_t temp1_36
                            temp0_415, temp1_36 =
                                _mm256_i32gather_ps(arg9, *(arg4 + arg8[0].q), zmm0)
                            arg10 = temp1_36
                            zmm2 =
                                _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg13, var_720_1), zmm2)
                            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            int32_t temp0_419
                            int32_t temp1_37
                            temp0_419, temp1_37 =
                                _mm256_i32gather_epi32(arg10, *(arg4 + zmm2[0].q), zmm0)
                            arg10 = temp0_419
                            zmm2 = _mm256_srli_epi32(arg10, 0x15)
                            arg8 = _mm256_srli_epi32(arg10, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                            arg11 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg11))
                            arg8 = _mm256_add_epi32(arg8, arg11)
                            arg11 = _mm256_broadcast_ss(1023f)
                            zmm2 = _mm256_div_ps(zmm2, arg11)
                            arg8 = _mm256_div_ps(_mm256_cvtepi32_ps(arg8), arg11)
                            arg10 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    arg10 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                    __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                _mm256_broadcast_ss(511f))
                            zmm2 = _mm256_fmadd_ps(zmm2, temp0_407, temp0_399)
                            arg8 = _mm256_fmadd_ps(arg8, arg12, temp0_401)
                            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                            arg10 = _mm256_fmadd_ps(arg10, temp0_415, temp0_404)
                            arg5 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm2, zmm2), arg8, 
                                    arg8), 
                                arg10, arg10)
                            arg5 =
                                _mm256_and_ps(_mm256_cmp_ps(arg12, arg5, 1), _mm256_sqrt_ps(arg5))
                            var_460_1 = _mm256_maskstore_ps(zmm0, zmm2)
                            var_440_1 = _mm256_maskstore_ps(zmm0, arg8)
                            var_420_1 = _mm256_maskstore_ps(zmm0, arg10)
                            var_400_1 = _mm256_maskstore_ps(zmm0, arg5)
                        case 4
                            arg5 =
                                _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg13, var_720_1), zmm2)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int32_t temp0_455
                            int32_t temp1_38
                            temp0_455, temp1_38 =
                                _mm256_i32gather_epi32(arg6, *(arg4 + arg5[0].q), zmm0)
                            arg6 = temp0_455
                            arg5 = _mm256_srli_epi32(arg6, 0x15)
                            zmm2 = _mm256_srli_epi32(arg6, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                            arg6 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                            zmm4 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, zmm4))
                            arg7 = _mm256_broadcast_ss(1023f)
                            arg5 = _mm256_div_ps(arg5, arg7)
                            zmm2 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, zmm4)), 
                                arg7)
                            arg6 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, 
                                    __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                                _mm256_broadcast_ss(511f))
                        label_140108ce0:
                            zmm4 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg5, arg5), zmm2, 
                                    zmm2), 
                                arg6, arg6)
                            zmm4 =
                                _mm256_and_ps(_mm256_cmp_ps(arg12, zmm4, 1), _mm256_sqrt_ps(zmm4))
                            var_460_1 = _mm256_maskstore_ps(zmm0, arg5)
                            var_440_1 = _mm256_maskstore_ps(zmm0, zmm2)
                            var_420_1 = _mm256_maskstore_ps(zmm0, arg6)
                            var_400_1 = _mm256_maskstore_ps(zmm0, zmm4)
                        case 5
                            arg5 =
                                _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg13, var_720_1), zmm2)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int32_t temp0_476
                            int32_t temp1_39
                            temp0_476, temp1_39 =
                                _mm256_i32gather_epi32(arg6, *(arg4 + arg5[0].q), zmm0)
                            arg6 = temp0_476
                            arg5 = _mm256_srli_epi32(arg6, 0x15)
                            zmm2 = _mm256_srli_epi32(arg6, 0xa)
                            zmm4 = _mm256_srli_epi32(arg6, 5)
                            arg7 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                            arg8 = __vpbroadcastd_ymmqq_memd(0x400)
                            arg9 = __vpbroadcastd_ymmqq_memd(0x380)
                            arg10 = __vpbroadcastd_ymmqq_memd(0x3d80)
                            arg5 =
                                (zmm4 & arg7) | (arg5 & arg8) | _mm256_add_epi32(arg5 & arg9, arg10)
                            zmm2 = (_mm256_slli_epi32(arg6, 6) & arg7) | (zmm2 & arg8)
                                | _mm256_add_epi32(zmm2 & arg9, arg10)
                            zmm4 = arg6 & __vpbroadcastd_ymmqq_memd(0x1c0)
                            arg6 = (_mm256_slli_epi32(arg6, 0x11)
                                & __vpbroadcastd_ymmqq_memd(0x7e0000))
                                | (arg6 & __vpbroadcastd_ymmqq_memd(0x200))
                                | _mm256_add_epi32(zmm4, __vpbroadcastd_ymmqq_memd(0x1ec0))
                            goto label_140108ce0
                
                arg11 = _mm256_cmp_ps(arg12, 
                    _mm256_fmadd_ps(
                        _mm256_fmadd_ps(
                            _mm256_fmadd_ps(_mm256_mul_ps(var_500, var_440_1), var_520, var_460_1), 
                            var_4e0, var_420_1), 
                        var_4c0, var_400_1), 
                    2)
                arg12 = _mm256_broadcast_ss(1f)
                arg11 = _mm256_blendv_ps(_mm256_broadcast_ss(-1f), arg12, arg11)
                arg13 = var_700
                arg11 = _mm256_mul_ps(_mm256_sub_ps(arg12, arg13), arg11)
                arg5 = _mm256_mul_ps(arg11, var_520)
                zmm2 = _mm256_mul_ps(arg11, var_500)
                arg6 = _mm256_mul_ps(arg11, var_4e0)
                zmm4 = _mm256_mul_ps(arg11, var_4c0)
                arg5 = _mm256_fmadd_ps(arg5, arg13, var_460_1)
                zmm2 = _mm256_fmadd_ps(zmm2, arg13, var_440_1)
                arg6 = _mm256_fmadd_ps(arg6, arg13, var_420_1)
                zmm4 = _mm256_fmadd_ps(zmm4, arg13, var_400_1)
                int32_t var_200_1[0x8] = arg5
                float var_1e0_1[0x8] = zmm2
                float var_1c0_1[0x8] = arg6
                float var_1a0_1[0x8] = zmm4
                arg7 = _mm256_mul_ps(arg6, arg6)
                arg8 = _mm256_mul_ps(zmm4, zmm4)
                arg7 = _mm256_add_ps(_mm256_fmadd_ps(arg7, arg5, arg5), 
                    _mm256_fmadd_ps(arg8, zmm2, zmm2))
                arg8 = _mm256_broadcast_ss(9.99999994e-09f)
                arg9 = _mm256_cmp_ps(arg8, arg7, 6)
                arg8 = _mm256_cmp_ps(arg8, arg7, 2)
                arg10 = _mm256_broadcast_ss(0.5f)
                arg11 = _mm256_mul_ps(arg7, arg10)
                arg7 = _mm256_rsqrt_ps(arg7)
                arg12 = _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(arg7, arg7), arg11, arg10), 
                    arg7, arg7)
                arg7 = _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(arg12, arg12), arg11, arg10), 
                    arg12, arg12)
                arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                arg5 = _mm256_mul_ps(arg7, arg5)
                zmm2 = _mm256_mul_ps(arg7, zmm2)
                arg6 = _mm256_mul_ps(arg7, arg6)
                zmm4 = _mm256_mul_ps(arg7, zmm4)
                arg5 = _mm256_and_ps(arg5, arg8)
                zmm2 = _mm256_and_ps(zmm2, arg8)
                arg6 = _mm256_and_ps(arg6, arg8)
                arg7 = _mm256_and_ps(arg9, _mm256_broadcast_ss(1f))
                zmm4 = _mm256_or_ps(_mm256_and_ps(zmm4, arg8), arg7)
                var_520 = _mm256_maskstore_ps(zmm0, arg5)
                var_500 = _mm256_maskstore_ps(zmm0, zmm2)
                var_4e0 = _mm256_maskstore_ps(zmm0, arg6)
                var_4c0 = _mm256_maskstore_ps(zmm0, zmm4)
                arg10 = _mm256_cmpeq_epi32(arg10, arg10)
        
        zmm0[0].o = var_520[0].o
        arg11[0].o = var_520[4].o
        zmm2[0].o = var_500[0].o
        arg6[0].o = var_500[4].o
        zmm4[0].o = var_4e0[0].o
        arg7[0].o = var_4e0[4].o
        arg8[0].o = var_4c0[0].o
        arg9[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg8[0].o)
        zmm4[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg8[0].o)
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        arg5[0].o = arg8[0].q | arg9[0].q << 0x40
        int128_t var_3c0 = arg5[0].o
        arg5[0].o = var_4c0[4].o
        arg8[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
        int128_t var_3b0_1 = arg8[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm2[0].o = zmm0[0].q | zmm4[0].q << 0x40
        int128_t var_3a0_1 = zmm2[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        int128_t var_390_1 = zmm0[0].o
        zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
        zmm2[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
        zmm4[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        int128_t var_380_1 = zmm4[0].o
        arg5[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        int128_t var_370_1 = zmm0[0].o
        zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg6[0].o)
        zmm2[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        int128_t var_360_1 = zmm2[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        int128_t var_350_1 = zmm0[0].o
        uint64_t rcx_34
        int64_t r11_5
        
        for (uint64_t i = 0xff; i != 0; i = r11_5 & rol.q(-2, rcx_34.b))
            uint64_t rcx_29 = _tzcnt_u64(i)
            r11_5 = i & not.q(1 << (rcx_29 u% 0x40))
            uint32_t var_3e0[0x8] = arg14
            zmm0[0].o = (&var_3c0)[rcx_29]
            arg1[sx.q(var_3e0[zx.q(rcx_29.d) & 7]) * 3] = zmm0[0].o
            rcx_34 = _tzcnt_u64(r11_5)
            zmm0[0].o = (&var_3c0)[rcx_34]
            arg1[sx.q(var_3e0[zx.q(rcx_34.d) & 7]) * 3] = zmm0[0].o
        
        rbx_2 += 8
        arg9 = var_6c0_1
        arg11 = var_5e0_1
    while (rbx_2 s< r10_4)

if (rbx_2 s< arg20)
    zmm0[0].o = zx.o(rbx_2)
    zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
    arg5[0].o = zx.o(arg20)
    arg16 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(arg5[0]), zmm0)
    zmm0 = _mm256_slli_epi32(zmm0, 3)
    arg14[0].o = zx.o(0)
    int32_t temp0_575
    int32_t temp1_40
    temp0_575, temp1_40 = _mm256_i32gather_epi32(arg14, *(arg2 + zmm0[0].q), arg16)
    arg14 = temp0_575
    zmm4 = __vpbroadcastd_ymmqq_memd(4)
    arg7[0].o = zx.o(0)
    int32_t temp0_577
    int32_t temp1_41
    temp0_577, temp1_41 = _mm256_i32gather_epi32(arg7, *(arg2 + (zmm0 | zmm4)[0].q), arg16)
    zmm0 = _mm256_slli_epi32(temp0_577, 4)
    arg15 = __vpbroadcastd_ymmqq_memd(8)
    arg6 = zmm0 | arg15
    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
    int32_t temp0_581
    int32_t temp1_42
    temp0_581, temp1_42 = _mm256_i32gather_epi32(arg8, *(arg3 + arg6[0].q), arg16)
    arg8 = temp0_581
    arg6[0].o = zx.o(0)
    arg5 = __vpbroadcastd_ymmqq_memd(0xc)
    int32_t var_5e0_2[0x8] = arg5
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    int32_t temp0_584
    int32_t temp1_43
    temp0_584, temp1_43 = _mm256_i32gather_epi32(arg12, *(arg3 + (zmm0 | arg5)[0].q), arg16)
    arg12 = temp0_584
    arg9 = temp1_43
    zmm0 = _mm256_cmpeq_epi32(arg12, __vpbroadcastd_ymmqq_memd(1))
    arg10 = zmm0 & arg16
    arg9[0].o = _mm256_extracti128_si256(arg10, 1)
    arg9[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, arg9[0].o)
    arg9[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
    int32_t var_6a0[0x8]
    float var_680[0x8]
    float var_660[0x8]
    float var_640[0x8]
    
    if (__vpmovmskb_gpr32d_xmmdq(arg9[0].o) != 0)
        zmm2[0].o = zx.o(0)
        int32_t temp0_591
        int32_t temp1_44
        temp0_591, temp1_44 = _mm256_i32gather_ps(zmm2, *(arg4 + arg8[0].q), arg10)
        zmm2 = temp0_591
        arg5 = _mm256_add_epi32(arg8, zmm4)
        arg11[0].o = zx.o(0)
        int32_t temp0_593
        int32_t temp1_45
        temp0_593, temp1_45 = _mm256_i32gather_ps(arg11, *(arg4 + arg5[0].q), arg10)
        arg11 = temp0_593
        arg5 = _mm256_add_epi32(arg8, arg15)
        arg13[0].o = zx.o(0)
        int32_t temp0_595
        int32_t temp1_46
        temp0_595, temp1_46 = _mm256_i32gather_ps(arg13, *(arg4 + arg5[0].q), arg10)
        arg13 = temp0_595
        arg9 = temp1_46
        arg5 = _mm256_fnmadd_ps(
            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm2, zmm2), arg11, arg11), 
            arg13, arg13)
        arg6 = _mm256_cmp_ps(arg6, arg5, 1)
        arg5 = _mm256_and_ps(arg6, _mm256_sqrt_ps(arg5))
        var_6a0 = _mm256_maskstore_ps(arg10, zmm2)
        var_680 = _mm256_maskstore_ps(arg10, arg11)
        var_660 = _mm256_maskstore_ps(arg10, arg13)
        var_640 = _mm256_maskstore_ps(arg10, arg5)
    
    arg7 = zmm0 & not.32(arg16)
    arg5[0].o = _mm256_extracti128_si256(arg7, 1)
    arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
    char temp0_610 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
    
    if (temp0_610 != 0)
        uint32_t var_6e0_2[0x8] = arg15
        zmm0[0].o = zmm14[0].o
        arg13 = __vpbroadcastd_ymmqq_memd(2)
        arg5 = _mm256_cmpgt_epi32(arg13, arg12)
        zmm2[0].o = _mm256_extracti128_si256(arg5, 1)
        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
        arg9[0].o = arg6[0].o & arg5[0].o
        arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(arg9[0].o, 0xf)
        arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        char temp0_618 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
        arg15[0].o = zx.o(0)
        arg10[0].o = zx.o(0)
        
        if (temp0_618 == 0)
            goto label_1401091e9
        
        arg5[0].o = zx.o(0)
        int32_t var_700_1[0x8] = arg5
        arg10[0].o = zx.o(0)
        zmm14[0].o = zx.o(0)
        
        if (temp0_610 != temp0_618)
            arg5 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg9[0].o), 0x1f)
            arg10 = _mm256_srai_epi32(arg5, 0x1f)
        label_1401091e9:
            arg9 = _mm256_cmpeq_epi32(arg9, arg9)
            arg11 = arg10 ^ arg9
            arg5[0].o = zx.o(0)
            arg5[0].o = zx.o(0)
            var_700_1 = arg5
            arg10[0].o = zx.o(0)
            
            if (not(arg5[0].o f>= zmm0[0]))
                arg10 = _mm256_add_epi32(arg12, arg9)
                
                if (zmm0[0].o f>= 1f)
                    arg15[0].o = zx.o(0)
                    arg10 = _mm256_blendv_ps(arg15, arg10, arg11 & arg7)
                    var_700_1 = arg10
                else
                    arg12 = arg13
                    arg5 = _mm256_broadcastd_epi32(zmm0[0])
                    zmm2 = _mm256_cvtepi32_ps(arg10)
                    arg13 = _mm256_mul_ps(arg5, zmm2)
                    arg9 = arg11 & arg7
                    zmm14 = _mm256_round_ps(arg13, 9)
                    arg5 = _mm256_min_epi32(arg10, _mm256_cvttps_epi32(zmm14))
                    zmm0[0].o = zx.o(0)
                    var_700_1 = _mm256_blendv_ps(zmm0, arg5, arg9)
                    arg15[0].o = zx.o(0)
                    
                    if (arg18 != 1)
                        arg15 = _mm256_sub_ps(arg13, zmm14)
                    
                    zmm2 = _mm256_min_epi32(
                        _mm256_sub_epi32(var_700_1, _mm256_cmpeq_epi32(zmm2, zmm2)), arg10)
                    arg10 = _mm256_blendv_ps(zmm0, zmm2, arg9)
                    arg13 = arg12
            
            zmm2[0].o = zx.o(0)
            zmm14 = _mm256_blendv_ps(zmm2, arg15, arg11)
        
        zmm2[0].o = zx.o(rcx)
        arg5 = _mm256_broadcastd_epi32(zmm2[0])
        zmm2[0].o = zx.o(rbx_1)
        zmm0 = _mm256_broadcastd_epi32(zmm2[0])
        uint64_t r8_1 = zx.q(var_728)
        int32_t var_600_2[0x8] = arg5
        int32_t var_480_2[0x8] = zmm0
        
        if (var_728 u> 5)
            zmm0[0].o = zx.o(0)
            var_6a0 = _mm256_maskstore_ps(arg7, zmm0)
            var_680 = _mm256_maskstore_ps(arg7, zmm0)
            var_660 = _mm256_maskstore_ps(arg7, zmm0)
            var_640 = _mm256_maskstore_ps(arg7, _mm256_broadcast_ss(1f))
            arg15 = var_6e0_2
        else
            uint32_t var_6c0_2[0x8] = arg10
            arg10 = __vpmulld_ymmqq_ymmqq_memqq(zmm0, var_700_1)
            
            switch (r8_1)
                case 0
                    zmm2 = _mm256_add_epi32(_mm256_add_epi32(arg8, arg5), arg10)
                    arg9[0].o = zx.o(0)
                    int32_t temp0_643
                    int32_t temp1_47
                    temp0_643, temp1_47 = _mm256_i32gather_ps(arg9, *(arg4 + zmm2[0].q), arg7)
                    arg9 = temp0_643
                    arg10 = _mm256_add_epi32(zmm2, zmm4)
                    arg11[0].o = zx.o(0)
                    int32_t temp0_645
                    int32_t temp1_48
                    temp0_645, temp1_48 = _mm256_i32gather_ps(arg11, *(arg4 + arg10[0].q), arg7)
                    arg11 = temp0_645
                    arg12 = temp1_48
                    arg15 = var_6e0_2
                    arg10 = _mm256_add_epi32(zmm2, arg15)
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    int32_t temp0_648
                    int32_t temp1_49
                    temp0_648, temp1_49 = _mm256_i32gather_ps(arg12, *(arg4 + arg10[0].q), arg7)
                    arg12 = temp0_648
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    zmm2 = __vpaddd_ymmqq_ymmqq_memqq(zmm2, var_5e0_2)
                    int32_t temp0_651
                    int32_t temp1_50
                    temp0_651, temp1_50 = _mm256_i32gather_ps(arg10, *(arg4 + zmm2[0].q), arg7)
                    var_6a0 = _mm256_maskstore_ps(arg7, arg9)
                    var_680 = _mm256_maskstore_ps(arg7, arg11)
                    var_660 = _mm256_maskstore_ps(arg7, arg12)
                    var_640 = _mm256_maskstore_ps(arg7, temp0_651)
                case 1
                    zmm2 = _mm256_add_epi32(_mm256_add_epi32(arg8, arg5), arg10)
                    arg9[0].o = zx.o(0)
                    int32_t temp0_663
                    int32_t temp1_51
                    temp0_663, temp1_51 = _mm256_i32gather_ps(arg9, *(arg4 + zmm2[0].q), arg7)
                    arg9 = temp0_663
                    arg10 = _mm256_add_epi32(zmm2, zmm4)
                    arg11[0].o = zx.o(0)
                    int32_t temp0_665
                    int32_t temp1_52
                    temp0_665, temp1_52 = _mm256_i32gather_ps(arg11, *(arg4 + arg10[0].q), arg7)
                    arg11 = temp0_665
                    arg15 = var_6e0_2
                    zmm2 = _mm256_add_epi32(zmm2, arg15)
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    int32_t temp0_668
                    int32_t temp1_53
                    temp0_668, temp1_53 = _mm256_i32gather_ps(arg10, *(arg4 + zmm2[0].q), arg7)
                    arg10 = temp0_668
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    arg12 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg9, arg9), 
                            arg11, arg11), 
                        arg10, arg10)
                    zmm2 = _mm256_cmp_ps(zmm2, arg12, 1)
                    arg12 = _mm256_sqrt_ps(arg12)
                    zmm2 = _mm256_and_ps(zmm2, arg12)
                    var_6a0 = _mm256_maskstore_ps(arg7, arg9)
                    var_680 = _mm256_maskstore_ps(arg7, arg11)
                    var_660 = _mm256_maskstore_ps(arg7, arg10)
                    var_640 = _mm256_maskstore_ps(arg7, zmm2)
                case 2
                    zmm0 = zmm14
                    zmm14 = _mm256_add_epi32(_mm256_add_epi32(arg8, arg5), arg10)
                    zmm2 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
                    arg9 = zmm2 & zmm14
                    int64_t r10_12 = sx.q(arg9[0])
                    int64_t r11_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                    int32_t temp0_686 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
                    int64_t r14_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                    arg9[0].o = _mm256_extracti128_si256(arg9, 1)
                    int64_t rcx_43 = sx.q(arg9[0])
                    int64_t rdx_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                    int32_t temp0_690 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2)
                    int64_t rsi_26 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                    arg9[0].o = zx.o(*(arg4 + r10_12))
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + r11_6), 1)
                    arg9[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + sx.q(temp0_686)), 2)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + r14_8), 3)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + rcx_43), 4)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + rdx_14), 5)
                    arg9[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + sx.q(temp0_690)), 6)
                    arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + rsi_26), 7)
                    arg9 = zmm2 & _mm256_add_epi32(zmm14, arg13)
                    int64_t r10_13 = sx.q(arg9[0])
                    int64_t r11_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                    int64_t r14_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                    int64_t r15_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                    arg9[0].o = _mm256_extracti128_si256(arg9, 1)
                    int64_t rsi_28 = sx.q(arg9[0])
                    int64_t rcx_46 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                    int64_t rdx_17 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                    int32_t temp0_706 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3)
                    arg9[0].o = zx.o(*(arg4 + r10_13))
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + r11_7), 1)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + r14_9), 2)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + r15_9), 3)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + rsi_28), 4)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + rcx_46), 5)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + rdx_17), 6)
                    arg10[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + sx.q(temp0_706)), 7)
                    arg9 = _mm256_add_epi32(zmm14, zmm4)
                    zmm14 = zmm0
                    zmm2 &= arg9
                    float rcx_48 = zmm2[0]
                    int64_t r10_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                    int64_t r11_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                    int64_t rdi_32 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                    float rsi_29 = zmm2[0]
                    int64_t rdx_20 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                    int64_t r14_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
                    int64_t rbx_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                    zmm2[0].o = zx.o(*(arg4 + sx.q(rcx_48)))
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r10_14), 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r11_8), 2)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rdi_32), 3)
                    zmm2[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + sx.q(rsi_29)), 4)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rdx_20), 5)
                    arg9 = _mm256_cvtepu16_epi32(arg5[0].o)
                    arg11 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    arg9 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg9, arg11))
                    arg12 = _mm256_broadcast_ss(32767f)
                    arg9 = _mm256_div_ps(arg9, arg12)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r14_10), 6)
                    arg10 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg10[0].o), 
                            arg11)), 
                        arg12)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rbx_13), 7)
                    zmm2 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 
                            arg11)), 
                        arg12)
                    arg11 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg9, arg9), 
                            arg10, arg10), 
                        zmm2, zmm2)
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    arg12 = _mm256_cmp_ps(arg12, arg11, 1)
                    arg11 = _mm256_and_ps(arg12, _mm256_sqrt_ps(arg11))
                    var_6a0 = _mm256_maskstore_ps(arg7, arg9)
                    var_680 = _mm256_maskstore_ps(arg7, arg10)
                    var_660 = _mm256_maskstore_ps(arg7, zmm2)
                    var_640 = _mm256_maskstore_ps(arg7, arg11)
                    arg15 = var_6e0_2
                case 3
                    arg12[0].o = zx.o(0)
                    int32_t temp0_755
                    int32_t temp1_54
                    temp0_755, temp1_54 = _mm256_i32gather_ps(arg12, *(arg4 + arg8[0].q), arg7)
                    zmm2 = _mm256_add_epi32(arg8, zmm4)
                    zmm14[0].o = zx.o(0)
                    int32_t temp0_757
                    int32_t temp1_55
                    temp0_757, temp1_55 = _mm256_i32gather_ps(zmm14, *(arg4 + zmm2[0].q), arg7)
                    arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg8, var_6e0_2)
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    int32_t temp0_760
                    int32_t temp1_56
                    temp0_760, temp1_56 = _mm256_i32gather_ps(zmm2, *(arg4 + arg9[0].q), arg7)
                    zmm2 = temp0_760
                    arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg8, var_5e0_2)
                    arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                    int32_t temp0_763
                    int32_t temp1_57
                    temp0_763, temp1_57 = _mm256_i32gather_ps(arg15, *(arg4 + arg9[0].q), arg7)
                    arg11 = temp1_57
                    arg9 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x10))
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    int32_t temp0_767
                    int32_t temp1_58
                    temp0_767, temp1_58 = _mm256_i32gather_ps(arg11, *(arg4 + arg9[0].q), arg7)
                    arg11 = temp0_767
                    zmm0 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x14))
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    float var_720_2[0x8] = zmm4
                    int32_t temp0_771
                    int32_t temp1_59
                    temp0_771, temp1_59 = _mm256_i32gather_ps(arg9, *(arg4 + zmm0[0].q), arg7)
                    zmm4 = temp1_59
                    zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg8, arg5), arg10)
                    zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    int32_t temp0_775
                    int32_t temp1_60
                    temp0_775, temp1_60 = _mm256_i32gather_epi32(zmm4, *(arg4 + zmm0[0].q), arg7)
                    zmm4 = temp0_775
                    zmm0 = _mm256_srli_epi32(zmm4, 0x15)
                    arg10 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg10))
                    arg5 = arg13
                    arg13 = _mm256_broadcast_ss(1023f)
                    zmm0 = _mm256_fmadd_ps(_mm256_div_ps(zmm0, arg13), temp0_763, temp0_755)
                    arg15 = var_6e0_2
                    arg10 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(
                            _mm256_srli_epi32(zmm4, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff), 
                            arg10)), 
                        arg13)
                    arg13 = arg5
                    zmm4 = _mm256_cvtepi32_ps(_mm256_add_epi32(
                        zmm4 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                        __vpbroadcastd_ymmqq_memd(0xfffffe01)))
                    arg12 = _mm256_broadcast_ss(511f)
                    zmm4 = _mm256_div_ps(zmm4, arg12)
                    arg10 = _mm256_fmadd_ps(arg10, arg11, temp0_757)
                    zmm4 = _mm256_fmadd_ps(zmm4, temp0_771, zmm2)
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    arg9 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm0, zmm0), 
                            arg10, arg10), 
                        zmm4, zmm4)
                    zmm2 = _mm256_cmp_ps(zmm2, arg9, 1)
                    arg9 = _mm256_sqrt_ps(arg9)
                    zmm2 = _mm256_and_ps(zmm2, arg9)
                    var_6a0 = _mm256_maskstore_ps(arg7, zmm0)
                    var_680 = _mm256_maskstore_ps(arg7, arg10)
                    var_660 = _mm256_maskstore_ps(arg7, zmm4)
                    zmm4 = var_720_2
                    var_640 = _mm256_maskstore_ps(arg7, zmm2)
                case 4
                    zmm2 = _mm256_add_epi32(_mm256_add_epi32(arg8, arg5), arg10)
                    arg9[0].o = zx.o(0)
                    int32_t temp0_810
                    int32_t temp1_61
                    temp0_810, temp1_61 = _mm256_i32gather_epi32(arg9, *(arg4 + zmm2[0].q), arg7)
                    arg9 = temp0_810
                    zmm2[0].o = zx.o(0)
                    arg10 = _mm256_srli_epi32(arg9, 0x15)
                    arg11 = _mm256_srli_epi32(arg9, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg9 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                    arg12 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg10 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg10, arg12))
                    zmm0 = zmm14
                    zmm14 = _mm256_broadcast_ss(1023f)
                    arg10 = _mm256_div_ps(arg10, zmm14)
                    arg11 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(arg11, arg12)), zmm14)
                    zmm14 = zmm0
                    arg9 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(arg9, 
                            __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                        _mm256_broadcast_ss(511f))
                    arg12 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg10, arg10), 
                            arg11, arg11), 
                        arg9, arg9)
                    zmm2 = _mm256_cmp_ps(zmm2, arg12, 1)
                    arg12 = _mm256_sqrt_ps(arg12)
                    zmm2 = _mm256_and_ps(zmm2, arg12)
                    var_6a0 = _mm256_maskstore_ps(arg7, arg10)
                    var_680 = _mm256_maskstore_ps(arg7, arg11)
                    var_660 = _mm256_maskstore_ps(arg7, arg9)
                    var_640 = _mm256_maskstore_ps(arg7, zmm2)
                    arg15 = var_6e0_2
                case 5
                    zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg8, arg5), arg10)
                    arg5[0].o = zx.o(0)
                    float var_720_3[0x8] = zmm4
                    zmm4[0].o = zx.o(0)
                    int32_t temp0_841
                    int32_t temp1_62
                    temp0_841, temp1_62 = _mm256_i32gather_epi32(zmm4, *(arg4 + zmm0[0].q), arg7)
                    zmm4 = temp0_841
                    zmm0 = _mm256_srli_epi32(zmm4, 0x15)
                    zmm2 = _mm256_srli_epi32(zmm4, 0xa)
                    arg9 = _mm256_srli_epi32(zmm4, 5)
                    arg11 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                    arg12 = __vpbroadcastd_ymmqq_memd(0x400)
                    arg10 = arg13
                    arg13 = __vpbroadcastd_ymmqq_memd(0x380)
                    arg15 = __vpbroadcastd_ymmqq_memd(0x3d80)
                    zmm0 = (arg9 & arg11) | (zmm0 & arg12) | _mm256_add_epi32(zmm0 & arg13, arg15)
                    arg9 = (_mm256_slli_epi32(zmm4, 6) & arg11) | (zmm2 & arg12)
                    zmm2 &= arg13
                    arg13 = arg10
                    zmm2 = arg9 | _mm256_add_epi32(zmm2, arg15)
                    arg9 = zmm4 & __vpbroadcastd_ymmqq_memd(0x1c0)
                    arg11 = _mm256_slli_epi32(zmm4, 0x11) & __vpbroadcastd_ymmqq_memd(0x7e0000)
                    arg12 = __vpbroadcastd_ymmqq_memd(0x200)
                    zmm4 = arg11 | (zmm4 & arg12)
                    arg11 = __vpbroadcastd_ymmqq_memd(0x1ec0)
                    zmm4 |= _mm256_add_epi32(arg9, arg11)
                    arg9 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm0, zmm0), 
                            zmm2, zmm2), 
                        zmm4, zmm4)
                    arg9 = _mm256_and_ps(_mm256_cmp_ps(arg5, arg9, 1), _mm256_sqrt_ps(arg9))
                    var_6a0 = _mm256_maskstore_ps(arg7, zmm0)
                    var_680 = _mm256_maskstore_ps(arg7, zmm2)
                    var_660 = _mm256_maskstore_ps(arg7, zmm4)
                    zmm4 = var_720_3
                    var_640 = _mm256_maskstore_ps(arg7, arg9)
                    arg15 = var_6e0_2
            
            arg10 = var_6c0_2
        
        zmm0 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg10, var_700_1)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        zmm0 ^= arg5
        arg5[0].o = _mm256_extracti128_si256(zmm0, 1)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        zmm0[0].o &= arg6[0].o
        arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
        arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            zmm0 =
                _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
            float var_5c0_1[0x8]
            int32_t var_5a0_1[0x8]
            float var_580_1[0x8]
            uint32_t var_560_1[0x8]
            
            if (var_728 u> 5)
                arg5[0].o = zx.o(0)
                var_5c0_1 = _mm256_maskstore_ps(zmm0, arg5)
                var_5a0_1 = _mm256_maskstore_ps(zmm0, arg5)
                var_580_1 = _mm256_maskstore_ps(zmm0, arg5)
                var_560_1 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
            else
                arg10 = __vpmulld_ymmqq_ymmqq_memqq(arg10, var_480_2)
                
                switch (r8_1)
                    case 0
                        arg5 = _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg8, var_600_2), arg10)
                        zmm2[0].o = zx.o(0)
                        int32_t temp0_883
                        int32_t temp1_63
                        temp0_883, temp1_63 = _mm256_i32gather_ps(zmm2, *(arg4 + arg5[0].q), zmm0)
                        arg6 = _mm256_add_epi32(arg5, zmm4)
                        zmm4[0].o = zx.o(0)
                        int32_t temp0_885
                        int32_t temp1_64
                        temp0_885, temp1_64 = _mm256_i32gather_ps(zmm4, *(arg4 + arg6[0].q), zmm0)
                        arg7 = temp1_64
                        arg6 = _mm256_add_epi32(arg5, arg15)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int32_t temp0_888
                        int32_t temp1_65
                        temp0_888, temp1_65 = _mm256_i32gather_ps(arg7, *(arg4 + arg6[0].q), zmm0)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        int32_t temp0_891
                        int32_t temp1_66
                        temp0_891, temp1_66 = _mm256_i32gather_ps(arg6, 
                            *(arg4 + __vpaddd_ymmqq_ymmqq_memqq(arg5, var_5e0_2)[0].q), zmm0)
                        var_5c0_1 = _mm256_maskstore_ps(zmm0, temp0_883)
                        var_5a0_1 = _mm256_maskstore_ps(zmm0, temp0_885)
                        var_580_1 = _mm256_maskstore_ps(zmm0, temp0_888)
                        var_560_1 = _mm256_maskstore_ps(zmm0, temp0_891)
                    case 1
                        arg5 = _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg8, var_600_2), arg10)
                        zmm2[0].o = zx.o(0)
                        int32_t temp0_901
                        int32_t temp1_67
                        temp0_901, temp1_67 = _mm256_i32gather_ps(zmm2, *(arg4 + arg5[0].q), zmm0)
                        zmm2 = temp0_901
                        arg6 = _mm256_add_epi32(arg5, zmm4)
                        zmm4[0].o = zx.o(0)
                        int32_t temp0_903
                        int32_t temp1_68
                        temp0_903, temp1_68 = _mm256_i32gather_ps(zmm4, *(arg4 + arg6[0].q), zmm0)
                        zmm4 = temp0_903
                        arg5 = _mm256_add_epi32(arg5, arg15)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        int32_t temp0_906
                        int32_t temp1_69
                        temp0_906, temp1_69 = _mm256_i32gather_ps(arg6, *(arg4 + arg5[0].q), zmm0)
                        arg6 = temp0_906
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg7 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm2, zmm2), 
                                zmm4, zmm4), 
                            arg6, arg6)
                        arg5 = _mm256_and_ps(_mm256_cmp_ps(arg5, arg7, 1), _mm256_sqrt_ps(arg7))
                        var_5c0_1 = _mm256_maskstore_ps(zmm0, zmm2)
                        var_5a0_1 = _mm256_maskstore_ps(zmm0, zmm4)
                        var_580_1 = _mm256_maskstore_ps(zmm0, arg6)
                        var_560_1 = _mm256_maskstore_ps(zmm0, arg5)
                    case 2
                        arg7 = _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg8, var_600_2), arg10)
                        arg5 = zmm0 & arg7
                        int64_t r8_2 = sx.q(arg5[0])
                        int64_t r10_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int32_t temp0_921 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                        int64_t r11_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        int64_t rsi_32 = sx.q(arg5[0])
                        int64_t rcx_54 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int32_t temp0_925 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                        int64_t rdi_35 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = zx.o(*(arg4 + r8_2))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r10_15), 1)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + sx.q(temp0_921)), 2)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r11_9), 3)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rsi_32), 4)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rcx_54), 5)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + sx.q(temp0_925)), 6)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rdi_35), 7)
                        arg5 = zmm0 & _mm256_add_epi32(arg7, arg13)
                        int64_t r8_3 = sx.q(arg5[0])
                        int64_t r10_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int64_t r11_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        int64_t r14_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        int64_t rsi_34 = sx.q(arg5[0])
                        int64_t rcx_57 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int64_t rdx_28 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        int32_t temp0_941 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
                        arg5[0].o = zx.o(*(arg4 + r8_3))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r10_16), 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r11_10), 2)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r14_12), 3)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rsi_34), 4)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rcx_57), 5)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rdx_28), 6)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + sx.q(temp0_941)), 7)
                        arg5 = zmm0 & _mm256_add_epi32(arg7, zmm4)
                        int32_t rcx_59 = arg5[0]
                        int64_t r8_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int64_t r10_17 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        int64_t rdi_39 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        int32_t rsi_35 = arg5[0]
                        int64_t rdx_31 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int64_t r11_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        int64_t rbx_21 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = zx.o(*(arg4 + sx.q(rcx_59)))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r8_4), 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r10_17), 2)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rdi_39), 3)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + sx.q(rsi_35)), 4)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rdx_31), 5)
                        zmm2 = _mm256_cvtepu16_epi32(arg6[0].o)
                        arg6 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg6))
                        zmm4 = _mm256_broadcast_ss(32767f)
                        zmm2 = _mm256_div_ps(zmm2, zmm4)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + r11_11), 6)
                        arg7 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg8[0].o), 
                                arg6)), 
                            zmm4)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg4 + rbx_21), 7)
                        arg5 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 
                                arg6)), 
                            zmm4)
                        arg6 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), zmm2, zmm2), 
                                arg7, arg7), 
                            arg5, arg5)
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        arg6 = _mm256_and_ps(_mm256_cmp_ps(zmm4, arg6, 1), _mm256_sqrt_ps(arg6))
                        var_5c0_1 = _mm256_maskstore_ps(zmm0, zmm2)
                        var_5a0_1 = _mm256_maskstore_ps(zmm0, arg7)
                        var_580_1 = _mm256_maskstore_ps(zmm0, arg5)
                        var_560_1 = _mm256_maskstore_ps(zmm0, arg6)
                    case 3
                        arg6[0].o = zx.o(0)
                        int32_t temp0_989
                        int32_t temp1_70
                        temp0_989, temp1_70 = _mm256_i32gather_ps(arg6, *(arg4 + arg8[0].q), zmm0)
                        arg5 = _mm256_add_epi32(arg8, zmm4)
                        zmm4[0].o = zx.o(0)
                        int32_t temp0_991
                        int32_t temp1_71
                        temp0_991, temp1_71 = _mm256_i32gather_ps(zmm4, *(arg4 + arg5[0].q), zmm0)
                        arg5 = _mm256_add_epi32(arg8, arg15)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int32_t temp0_994
                        int32_t temp1_72
                        temp0_994, temp1_72 = _mm256_i32gather_ps(arg7, *(arg4 + arg5[0].q), zmm0)
                        arg5 = __vpaddd_ymmqq_ymmqq_memqq(arg8, var_5e0_2)
                        arg9[0].o = zx.o(0)
                        int32_t temp0_996
                        int32_t temp1_73
                        temp0_996, temp1_73 = _mm256_i32gather_ps(arg9, *(arg4 + arg5[0].q), zmm0)
                        arg5 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x10))
                        arg11[0].o = zx.o(0)
                        int32_t temp0_999
                        int32_t temp1_74
                        temp0_999, temp1_74 = _mm256_i32gather_ps(arg11, *(arg4 + arg5[0].q), zmm0)
                        zmm2 = temp1_74
                        arg5 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x14))
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        int32_t temp0_1003
                        int32_t temp1_75
                        temp0_1003, temp1_75 = _mm256_i32gather_ps(zmm2, *(arg4 + arg5[0].q), zmm0)
                        arg5 = _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg8, var_600_2), arg10)
                        arg8[0].o = zx.o(0)
                        int32_t temp0_1006
                        int32_t temp1_76
                        temp0_1006, temp1_76 =
                            _mm256_i32gather_epi32(arg8, *(arg4 + arg5[0].q), zmm0)
                        arg8 = temp0_1006
                        arg5[0].o = zx.o(0)
                        arg10 = _mm256_srli_epi32(arg8, 0x15)
                        arg12 = _mm256_srli_epi32(arg8, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg13 = __vpbroadcastd_ymmqq_memd(0x3ff)
                        arg15 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg10 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg10, arg15))
                        arg12 = _mm256_add_epi32(arg12, arg15)
                        arg15 = _mm256_broadcast_ss(1023f)
                        arg10 = _mm256_div_ps(arg10, arg15)
                        arg12 = _mm256_div_ps(_mm256_cvtepi32_ps(arg12), arg15)
                        arg8 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(arg8 & arg13, 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg10 = _mm256_fmadd_ps(arg10, temp0_996, temp0_989)
                        arg12 = _mm256_fmadd_ps(arg12, temp0_999, temp0_991)
                        arg8 = _mm256_fmadd_ps(arg8, temp0_1003, temp0_994)
                        zmm2 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg10, arg10), arg12, 
                                arg12), 
                            arg8, arg8)
                        arg5 = _mm256_and_ps(_mm256_cmp_ps(arg5, zmm2, 1), _mm256_sqrt_ps(zmm2))
                        var_5c0_1 = _mm256_maskstore_ps(zmm0, arg10)
                        var_5a0_1 = _mm256_maskstore_ps(zmm0, arg12)
                        var_580_1 = _mm256_maskstore_ps(zmm0, arg8)
                        var_560_1 = _mm256_maskstore_ps(zmm0, arg5)
                    case 4
                        arg5 = _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg8, var_600_2), arg10)
                        zmm2[0].o = zx.o(0)
                        int32_t temp0_1039
                        int32_t temp1_77
                        temp0_1039, temp1_77 =
                            _mm256_i32gather_epi32(zmm2, *(arg4 + arg5[0].q), zmm0)
                        zmm2 = temp0_1039
                        arg5[0].o = zx.o(0)
                        arg6 = _mm256_srli_epi32(zmm2, 0x15)
                        zmm4 = _mm256_srli_epi32(zmm2, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                        zmm2 &= __vpbroadcastd_ymmqq_memd(0x3ff)
                        arg7 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg7))
                        arg8 = _mm256_broadcast_ss(1023f)
                        arg6 = _mm256_div_ps(arg6, arg8)
                        zmm4 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm4, arg7)), arg8)
                        zmm2 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg7 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg6, arg6), 
                                zmm4, zmm4), 
                            zmm2, zmm2)
                        arg5 = _mm256_and_ps(_mm256_cmp_ps(arg5, arg7, 1), _mm256_sqrt_ps(arg7))
                        var_5c0_1 = _mm256_maskstore_ps(zmm0, arg6)
                        var_5a0_1 = _mm256_maskstore_ps(zmm0, zmm4)
                        var_580_1 = _mm256_maskstore_ps(zmm0, zmm2)
                        var_560_1 = _mm256_maskstore_ps(zmm0, arg5)
                    case 5
                        arg5 = _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg8, var_600_2), arg10)
                        arg6[0].o = zx.o(0)
                        zmm4[0].o = zx.o(0)
                        int32_t temp0_1070
                        int32_t temp1_78
                        temp0_1070, temp1_78 =
                            _mm256_i32gather_epi32(zmm4, *(arg4 + arg5[0].q), zmm0)
                        zmm4 = temp0_1070
                        arg5 = _mm256_srli_epi32(zmm4, 0x15)
                        zmm2 = _mm256_srli_epi32(zmm4, 0xa)
                        arg7 = _mm256_srli_epi32(zmm4, 5)
                        arg8 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                        arg9 = __vpbroadcastd_ymmqq_memd(0x400)
                        arg10 = __vpbroadcastd_ymmqq_memd(0x380)
                        arg11 = __vpbroadcastd_ymmqq_memd(0x3d80)
                        arg5 = (arg7 & arg8) | (arg5 & arg9) | _mm256_add_epi32(arg5 & arg10, arg11)
                        zmm2 = (_mm256_slli_epi32(zmm4, 6) & arg8) | (zmm2 & arg9)
                            | _mm256_add_epi32(zmm2 & arg10, arg11)
                        arg7 = zmm4 & __vpbroadcastd_ymmqq_memd(0x1c0)
                        zmm4 = (_mm256_slli_epi32(zmm4, 0x11) & __vpbroadcastd_ymmqq_memd(0x7e0000))
                            | (zmm4 & __vpbroadcastd_ymmqq_memd(0x200))
                            | _mm256_add_epi32(arg7, __vpbroadcastd_ymmqq_memd(0x1ec0))
                        arg7 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(1f), arg5, arg5), 
                                zmm2, zmm2), 
                            zmm4, zmm4)
                        arg6 = _mm256_and_ps(_mm256_cmp_ps(arg6, arg7, 1), _mm256_sqrt_ps(arg7))
                        var_5c0_1 = _mm256_maskstore_ps(zmm0, arg5)
                        var_5a0_1 = _mm256_maskstore_ps(zmm0, zmm2)
                        var_580_1 = _mm256_maskstore_ps(zmm0, zmm4)
                        var_560_1 = _mm256_maskstore_ps(zmm0, arg6)
            
            arg10 = var_560_1
            arg11 = _mm256_fmadd_ps(
                _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_mul_ps(var_680, var_5a0_1), var_6a0, var_5c0_1), 
                    var_660, var_580_1), 
                var_640, arg10)
            arg12[0].o = zx.o(0)
            arg11 = _mm256_cmp_ps(arg12, arg11, 2)
            arg12 = _mm256_broadcast_ss(1f)
            arg13 = _mm256_broadcast_ss(-1f)
            arg11 = _mm256_blendv_ps(arg13, arg12, arg11)
            arg12 = _mm256_sub_ps(arg12, zmm14)
            arg11 = _mm256_mul_ps(arg12, arg11)
            arg5 = _mm256_mul_ps(arg11, var_6a0)
            zmm2 = _mm256_mul_ps(arg11, var_680)
            arg6 = _mm256_mul_ps(arg11, var_660)
            zmm4 = _mm256_mul_ps(arg11, var_640)
            arg5 = _mm256_fmadd_ps(arg5, zmm14, var_5c0_1)
            zmm2 = _mm256_fmadd_ps(zmm2, zmm14, var_5a0_1)
            arg6 = _mm256_fmadd_ps(arg6, zmm14, var_580_1)
            zmm4 = _mm256_fmadd_ps(zmm4, zmm14, arg10)
            int32_t var_280_1[0x8] = arg5
            float var_260_1[0x8] = zmm2
            float var_240_1[0x8] = arg6
            float var_220_1[0x8] = zmm4
            arg6 = _mm256_mul_ps(arg6, arg6)
            zmm4 = _mm256_mul_ps(zmm4, zmm4)
            arg5 =
                _mm256_add_ps(_mm256_fmadd_ps(arg6, arg5, arg5), _mm256_fmadd_ps(zmm4, zmm2, zmm2))
            zmm2 = _mm256_broadcast_ss(0.5f)
            arg6 = _mm256_mul_ps(arg5, zmm2)
            float var_180_1[0x8] = arg6
            float var_160_1[0x8] = arg6
            float var_140_1[0x8] = arg6
            float var_120_1[0x8] = arg6
            zmm4 = _mm256_broadcast_ss(9.99999994e-09f)
            arg7 = _mm256_rsqrt_ps(arg5)
            arg8 = _mm256_cmp_ps(zmm4, arg5, 6)
            arg9 =
                _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(arg7, arg7), arg6, zmm2), arg7, arg7)
            arg7 = _mm256_fnmadd_ps(_mm256_mul_ps(arg9, arg9), arg6, zmm2)
            zmm2 = _mm256_fmadd_ps(arg9, arg7, arg9)
            arg7 = _mm256_fmadd_ps(arg7, arg9, arg9)
            arg6 = __vmulps_ymmqq_ymmqq_memqq(arg7, var_280_1)
            arg9 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_260_1)
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_240_1)
            arg7 = __vmulps_ymmqq_ymmqq_memqq(arg7, var_220_1)
            arg5 = _mm256_cmp_ps(zmm4, arg5, 2)
            arg6 = _mm256_and_ps(arg6, arg5)
            zmm4 = _mm256_and_ps(arg9, arg5)
            zmm2 = _mm256_and_ps(zmm2, arg5)
            arg9 = _mm256_broadcast_ss(1f)
            arg8 = _mm256_and_ps(arg8, arg9)
            arg5 = _mm256_or_ps(_mm256_and_ps(arg7, arg5), arg8)
            var_6a0 = _mm256_maskstore_ps(zmm0, arg6)
            var_680 = _mm256_maskstore_ps(zmm0, zmm4)
            var_660 = _mm256_maskstore_ps(zmm0, zmm2)
            var_640 = _mm256_maskstore_ps(zmm0, arg5)
    
    zmm0[0].o = var_6a0[0].o
    arg10[0].o = var_6a0[4].o
    zmm4[0].o = var_680[0].o
    arg7[0].o = var_680[4].o
    arg8[0].o = var_660[0].o
    arg9[0].o = var_660[4].o
    zmm2[0].o = var_640[0].o
    arg5[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
    zmm2[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
    arg8[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
    arg6[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
    int128_t var_340 = arg6[0].o
    arg6[0].o = var_640[4].o
    arg5[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
    int128_t var_330_1 = arg5[0].o
    zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
    arg5[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
    int128_t var_320_1 = arg5[0].o
    zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
    int128_t var_310_1 = zmm0[0].o
    zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
    arg5[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg7[0].o)
    zmm2[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
    int128_t var_300_1 = zmm2[0].o
    zmm2[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
    zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
    int128_t var_2f0_1 = zmm0[0].o
    zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg7[0].o)
    arg5[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
    int128_t var_2e0_1 = arg5[0].o
    zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
    int128_t var_2d0_1 = zmm0[0].o
    uint64_t i_1 = zx.q(_mm256_movemask_ps(arg16))
    
    do
        uint64_t rcx_63 = _tzcnt_u64(i_1)
        uint32_t var_2a0[0x8] = arg14
        zmm0[0].o = (&var_340)[rcx_63]
        arg1[sx.q(var_2a0[zx.q(rcx_63.d) & 7]) * 3] = zmm0[0].o
        i_1 &= rol.q(-2, rcx_63.b)
    while (i_1 != 0)

arg8[0].o = var_e8
arg9[0].o = var_d8
arg10[0].o = var_c8
arg11[0].o = var_b8
arg12[0].o = var_a8
arg13[0].o = var_98
arg14[0].o = var_88
arg15[0].o = var_78
arg16[0].o = var_58
_mm256_zeroupper()
return arg1
