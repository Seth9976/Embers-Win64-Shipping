// 函数: sub_14008a430
// 地址: 0x14008a430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg14[0].o
int128_t var_68 = arg13[0].o
int128_t var_78 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t var_b8 = arg8[0].o
int128_t var_c8 = arg7[0].o
int128_t var_d8 = arg6[0].o
int128_t var_e8 = arg5[0].o
double zmm4[0x4]
zmm4[0].o = arg16
int32_t r11_4 = ((arg19 s>> 0x1f u>> 0x1d) + arg19) & 0xfffffff8
arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
uint32_t var_420[0x8] = arg11
uint32_t var_440[0x8] = arg11
uint32_t var_460[0x8] = arg11
int32_t r13
double zmm0[0x4]
int32_t zmm1[0x8]
float zmm2[0x8]
float zmm3[0x8]
int32_t zmm5[0x8]

if (r11_4 s<= 0)
    r13 = 0
else
    zmm0 = _mm256_broadcast_ss(arg3[3])
    float var_3e0_1[0x8] = zmm0
    zmm0[0].o = *arg3
    zmm1[0].o = arg3[1]
    zmm3[0].o = arg3[2]
    arg9 = _mm256_broadcast_ss(*arg2)
    float var_400_1[0x8] = _mm256_broadcast_ss(arg2[1])
    float var_220_1[0x8] = _mm256_broadcast_ss(arg2[2])
    double var_240_1[0x4] = _mm256_broadcast_ss(*arg1)
    double var_260_1[0x4] = _mm256_broadcast_ss(arg1[1])
    double var_280_1[0x4] = _mm256_broadcast_ss(arg1[2])
    zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0)
    float var_2a0_1[0x8] = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
    int32_t r12_1 = 0
    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
    zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    int32_t var_2c0_1[0x8] = zmm1
    zmm1[0].o = _mm_permute_ps(zmm3[0].o, 0)
    zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    int32_t var_2e0_1[0x8] = zmm1
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    double var_300_1[0x4] = zmm0
    r13 = 0
    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
    uint32_t var_3c0_1[0x8] = arg9
    
    do
        int64_t rax_1 = sx.q(r12_1)
        zmm0[0].o = *(arg15 + rax_1)
        zmm1[0].o = *(arg15 + rax_1 + 0x10)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        int64_t rbx_1 = sx.q(zmm0[0].d)
        int64_t r10_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int64_t rax_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        int64_t rdi_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        int64_t r14_1 = sx.q(zmm1[0])
        int64_t rsi_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        int64_t r15_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        int64_t rcx_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm0[0].o = *(arg4 + (r14_1 << 2))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + (rsi_3 << 2)), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + (r15_1 << 2)), 0x20)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + (rcx_3 << 2)), 0x30)
        zmm1[0].o = *(arg4 + (r14_1 << 2) + 4)
        zmm3[0].o = *(arg4 + (rbx_1 << 2))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (r10_1 << 2)), 0x10)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (rax_5 << 2)), 0x20)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (rdi_2 << 2)), 0x30)
        zmm4[0].o = *(arg4 + (rbx_1 << 2) + 4)
        zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + (rsi_3 << 2) + 4), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + (r15_1 << 2) + 4), 0x20)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + (rcx_3 << 2) + 4), 0x30)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (r10_1 << 2) + 4), 0x10)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (rax_5 << 2) + 4), 0x20)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg4 + (rdi_2 << 2) + 4), 0x30)
        zmm4[0].o = *(arg4 + (rbx_1 << 2) + 8)
        zmm5[0].o = *(arg4 + (r14_1 << 2) + 8)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rsi_3 << 2) + 8), 0x10)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (r15_1 << 2) + 8), 0x20)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rcx_3 << 2) + 8), 0x30)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (r10_1 << 2) + 8), 0x10)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rax_5 << 2) + 8), 0x20)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rdi_2 << 2) + 8), 0x30)
        zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
        zmm3 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
        double var_380_1[0x4] = zmm0
        int32_t var_360_1[0x8] = zmm1
        float var_340_1[0x8] = zmm3
        float var_320_1[0x8] = arg10
        float var_4e0_1[0x8] = var_3e0_1
        float var_4c0_1[0x8] = var_3e0_1
        float var_4a0_1[0x8] = var_3e0_1
        float var_480_1[0x8] = var_3e0_1
        arg12 = var_2c0_1
        zmm4 = _mm256_mul_ps(zmm3, arg12)
        zmm5 = _mm256_mul_ps(zmm0, var_2e0_1)
        arg5 = _mm256_mul_ps(zmm1, var_300_1)
        zmm1 = _mm256_sub_ps(zmm4, _mm256_mul_ps(zmm1, var_2e0_1))
        zmm3 = _mm256_sub_ps(zmm5, _mm256_mul_ps(zmm3, var_300_1))
        zmm0 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm0, arg12))
        zmm1 = _mm256_add_ps(zmm1, zmm1)
        zmm3 = _mm256_add_ps(zmm3, zmm3)
        zmm0 = _mm256_add_ps(zmm0, zmm0)
        zmm4 = _mm256_mul_ps(var_3e0_1, zmm1)
        zmm5 = _mm256_mul_ps(var_3e0_1, zmm3)
        zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, var_380_1)
        zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_360_1)
        arg5 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(var_3e0_1, zmm0), var_340_1)
        arg6 = _mm256_mul_ps(zmm0, arg12)
        arg7 = _mm256_mul_ps(zmm1, var_2e0_1)
        arg8 = _mm256_mul_ps(zmm3, var_300_1)
        zmm3 = _mm256_add_ps(zmm4, _mm256_sub_ps(arg6, _mm256_mul_ps(zmm3, var_2e0_1)))
        zmm0 = _mm256_add_ps(zmm5, _mm256_sub_ps(arg7, _mm256_mul_ps(zmm0, var_300_1)))
        zmm1 = _mm256_add_ps(arg5, _mm256_sub_ps(arg8, _mm256_mul_ps(zmm1, arg12)))
        zmm4 = _mm256_broadcast_ss(arg3[4])
        arg13 = _mm256_add_ps(zmm3, zmm4)
        arg14 = _mm256_add_ps(zmm0, _mm256_broadcast_ss(arg3[5]))
        arg6 = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg3[6]))
        zmm3 = _mm256_cmp_ps(arg13, arg9, 2)
        zmm0 = _mm256_cmp_ps(arg13, arg9, 6)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        uint32_t var_560[0x8]
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0xff)
            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        label_14008a94a:
            arg12 = var_560
            zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
            zmm1[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        else
            zmm0 = _mm256_and_ps(_mm256_cmp_ps(arg14, _mm256_broadcast_ss(arg2[1]), 2), zmm3)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            var_3e0_1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_3e0_1[0].o, var_3e0_1[0].o)
            zmm0[0].o = zmm3[0].o ^ var_3e0_1[0].o
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0xff)
                goto label_14008a94a
            
            zmm0 = _mm256_cmp_ps(arg6, _mm256_broadcast_ss(arg2[2]), 2)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm4[0].o = zmm0[0].o & zmm3[0].o
            zmm0[0].o = zmm4[0].o ^ var_3e0_1[0].o
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            char temp0_104 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
            zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm4[0])
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0x4e)
            zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
            arg5 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            
            if (temp0_104 == 0xff)
                arg12 = var_560
            else
                zmm2 = arg6
                arg6 = _mm256_broadcast_ss(*arg1)
                zmm0 = _mm256_cmp_ps(arg6, arg13, 6)
                zmm5 = _mm256_and_ps(zmm0, arg5)
                zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                
                if (_mm256_movemask_ps(zmm0) == 0xff)
                    zmm4 = _mm256_cmp_ps(arg6, arg13, 2)
                else
                    zmm0 = _mm256_cmp_ps(arg6, arg13, 2)
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    zmm1 = _mm256_cmp_ps(_mm256_broadcast_ss(arg1[1]), arg14, 2)
                    zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                    zmm0[0].o &= zmm4[0].o
                    zmm0[0].o &= zmm1[0].o
                    zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
                    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
                    zmm4 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                    zmm5 = _mm256_andnot_ps(zmm4, arg5)
                
                arg12 = var_560
                arg6 = zmm2
                zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                
                if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1)) != 0xff)
                    zmm0 = _mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), arg6, 2)
                    zmm1 = _mm256_and_ps(zmm4, arg5)
                    zmm4 = _mm256_and_ps(zmm0, zmm1)
                
                arg5 = _mm256_and_ps(zmm4, arg5)
        
        zmm3 = _mm256_sub_ps(arg13, arg9)
        arg7 = __vsubps_ymmqq_ymmqq_memqq(arg14, var_400_1)
        zmm5 = __vsubps_ymmqq_ymmqq_memqq(arg6, var_220_1)
        arg8 = _mm256_sub_ps(var_240_1, arg13)
        zmm4 = _mm256_sub_ps(var_260_1, arg14)
        zmm2 = _mm256_sub_ps(var_280_1, arg6)
        
        if (_mm256_movemask_ps(arg5) != 0)
            double var_520_1[0x4] = arg14
            uint32_t var_500_1[0x8] = arg11
            zmm1 = _mm256_max_ps(arg8, zmm3)
            arg10 = _mm256_max_ps(zmm4, arg7)
            arg9 = _mm256_max_ps(zmm2, zmm5)
            arg11 = _mm256_cmp_ps(arg10, zmm1, 1)
            arg12 = _mm256_and_ps(arg5, arg11)
            
            if (_mm256_movemask_ps(arg12) != 0)
                arg14 = arg7
                arg7 = arg8
                arg8 = arg13
                arg13 = zmm5
                zmm5 = zmm4
                zmm0 = _mm256_cmp_ps(arg9, zmm1, 1)
                zmm4 = _mm256_and_ps(arg12, zmm0)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    var_560 = _mm256_blendv_ps(var_560, zmm1, zmm4)
                
                zmm4 = zmm5
                zmm5 = arg13
                arg13 = arg8
                arg8 = arg7
                arg7 = arg14
                zmm0 = _mm256_andnot_ps(zmm0, arg12)
                
                if (_mm256_movemask_ps(zmm0) == 0)
                    arg12 = var_560
                else
                    arg12 = _mm256_blendv_ps(var_560, arg9, zmm0)
                
                arg6 = arg6
                zmm2 = zmm2
                arg11 = _mm256_andnot_ps(arg11, arg5)
                
                if (_mm256_movemask_ps(arg11) == 0)
                    goto label_14008aac2
                
                goto label_14008aaf7
            
            arg12 = var_560
            arg11 = _mm256_andnot_ps(arg11, arg5)
            
            if (_mm256_movemask_ps(arg11) != 0)
            label_14008aaf7:
                zmm0 = _mm256_cmp_ps(arg9, arg10, 1)
                zmm1 = _mm256_and_ps(arg11, zmm0)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    arg12 = _mm256_blendv_ps(arg12, arg10, zmm1)
                
                arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                zmm0 = _mm256_andnot_ps(zmm0, arg11)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    arg12 = _mm256_blendv_ps(arg12, arg9, zmm0)
                
                arg11 = var_500_1
                arg9 = var_3c0_1
            else
            label_14008aac2:
                arg11 = var_500_1
                arg9 = var_3c0_1
                arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            
            arg14 = var_520_1
        
        zmm0 = _mm256_cmp_ps(arg10, arg10, 0xf)
        arg5 = _mm256_xor_ps(arg5, zmm0)
        
        if (_mm256_movemask_ps(arg5) != 0)
            zmm0 = _mm256_cmp_ps(arg10, zmm3, 1)
            zmm1 = _mm256_and_ps(zmm0, arg5)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_4e0_1 = _mm256_maskstore_ps(zmm1, zmm3)
            
            zmm3 = _mm256_andnot_ps(zmm0, arg5)
            
            if (_mm256_movemask_ps(zmm3) != 0)
                zmm0 = _mm256_cmp_ps(arg10, arg8, 1)
                zmm1 = _mm256_and_ps(zmm3, zmm0)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    arg10 = arg9
                    arg9 = arg11
                    arg11 = arg7
                    arg7 = arg8
                    arg8 = arg13
                    arg13 = zmm5
                    zmm5 = zmm4
                    zmm4 = __vxorps_ymmqq_ymmqq_memqq(arg7, data_142fc9460)
                    arg7 = arg11
                    arg11 = arg9
                    arg9 = arg10
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    var_4e0_1 = _mm256_maskstore_ps(zmm1, zmm4)
                    zmm4 = zmm5
                    zmm5 = arg13
                    arg13 = arg8
                
                zmm0 = _mm256_andnot_ps(zmm0, zmm3)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_4e0_1 = _mm256_maskstore_ps(zmm0, arg10)
            
            zmm0 = _mm256_cmp_ps(arg10, arg7, 1)
            zmm1 = _mm256_and_ps(zmm0, arg5)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_4c0_1 = _mm256_maskstore_ps(zmm1, arg7)
            
            zmm3 = _mm256_andnot_ps(zmm0, arg5)
            
            if (_mm256_movemask_ps(zmm3) != 0)
                zmm0 = _mm256_cmp_ps(arg10, zmm4, 1)
                zmm1 = _mm256_and_ps(zmm3, zmm0)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_4c0_1 =
                        _mm256_maskstore_ps(zmm1, __vxorps_ymmqq_ymmqq_memqq(zmm4, data_142fc9460))
                
                zmm0 = _mm256_andnot_ps(zmm0, zmm3)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_4c0_1 = _mm256_maskstore_ps(zmm0, arg10)
            
            zmm0 = _mm256_cmp_ps(arg10, zmm5, 1)
            zmm1 = _mm256_and_ps(zmm0, arg5)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_4a0_1 = _mm256_maskstore_ps(zmm1, zmm5)
            
            zmm3 = _mm256_andnot_ps(zmm0, arg5)
            
            if (_mm256_movemask_ps(zmm3) != 0)
                zmm0 = _mm256_cmp_ps(arg10, zmm2, 1)
                zmm1 = _mm256_and_ps(zmm3, zmm0)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_4a0_1 =
                        _mm256_maskstore_ps(zmm1, __vxorps_ymmqq_ymmqq_memqq(zmm2, data_142fc9460))
                
                zmm0 = _mm256_andnot_ps(zmm0, zmm3)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_4a0_1 = _mm256_maskstore_ps(zmm0, arg10)
            
            zmm0 = var_4e0_1
            zmm1 = var_4c0_1
            zmm0 = _mm256_add_ps(
                _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(zmm0, zmm0), arg10), 
                    _mm256_mul_ps(zmm1, zmm1)), 
                _mm256_mul_ps(var_4a0_1, var_4a0_1))
            zmm1 = _mm256_rsqrt_ps(zmm0)
            zmm0 = _mm256_mul_ps(zmm1, _mm256_mul_ps(zmm0, zmm1))
            zmm0 = __vmulps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(zmm1, _mm256_sub_ps(data_142fc9480, zmm0)), data_142fc94a0)
            zmm1 = _mm256_rcp_ps(zmm0)
            zmm0 = _mm256_mul_ps(zmm1, zmm0)
            zmm0 = _mm256_mul_ps(zmm1, _mm256_sub_ps(data_142fc94c0, zmm0))
            arg12 = _mm256_blendv_ps(arg12, zmm0, arg5)
        
        zmm3 = __vsubps_ymmqq_ymmqq_memqq(arg12, var_2a0_1)
        zmm4 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm3, data_142fc94e0, 1)
        
        if (_mm256_movemask_ps(zmm4) != 0)
            zmm0 = _mm256_mul_ps(arg13, zmm3)
            zmm1 = _mm256_mul_ps(arg14, zmm3)
            zmm5 = _mm256_mul_ps(arg6, zmm3)
            zmm0 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_460)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_440)
            zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_420)
            var_460 = _mm256_maskstore_ps(zmm4, zmm0)
            var_440 = _mm256_maskstore_ps(zmm4, zmm1)
            var_420 = _mm256_maskstore_ps(zmm4, zmm5)
            zmm0 = _mm256_add_ps(arg11, zmm3)
            arg11 = _mm256_blendv_ps(arg11, zmm0, zmm4)
        
        var_560 = arg12
        r13 += 8
        r12_1 += 0x20
    while (r13 s< r11_4)

double* rcx_14 = arg18
int32_t* result = arg17

if (r13 s< arg19)
    uint32_t var_500_2[0x8] = arg11
    zmm0[0].o = zx.o(r13)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    arg10[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
    arg12[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
    zmm0[0].o = zx.o(arg19)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    double var_560_1[0x4] = zmm0
    arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
    arg11[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
    zmm2 = _mm256_insertf128_ps(arg11, arg14[0].o, 1)
    zmm0 = _mm256_maskload_ps(zmm2, *(arg15 + sx.q(r13 << 2)))
    zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
    zmm4 = _mm256_and_ps(zmm2, zmm0)
    int64_t r14_2 = sx.q(zmm4[0].d)
    int64_t rbx_3 = arg4 + (r14_2 << 2)
    int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
    int64_t r13_2 = arg4 + (r12_2 << 2)
    arg6[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
    int64_t r15_2 = sx.q(arg6[0])
    int64_t r10_2 = arg4 + (r15_2 << 2)
    int64_t rsi_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
    int64_t rdi_3 = arg4 + (rsi_4 << 2)
    arg7 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_142fc9520)
    zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
    zmm1[0].o = *(zx.q(zmm0[0].d) + r10_2)
    arg8 = __vandps_ymmqq_ymmqq_memqq(zmm2, data_142fc9540)
    zmm5[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
    zmm3[0].o = *(zx.q(zmm5[0]) + r10_2)
    int32_t temp0_282 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
    uint64_t rdx = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx + rdi_3), 0x10)
    uint64_t rdx_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_1 + rdi_3), 0x10)
    int64_t rcx_10 = sx.q(temp0_282)
    int64_t rdx_2 = arg4 + (rcx_10 << 2)
    uint64_t rdi_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_4 + rdx_2), 0x20)
    uint64_t rdi_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_5 + rdx_2), 0x20)
    int64_t rdx_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
    arg6[0].o = *(zx.q(arg7[0].d) + rbx_3)
    arg5[0].o = *(zx.q(arg8[0].d) + rbx_3)
    int64_t rbx_4 = arg4 + (rdx_4 << 2)
    uint64_t rdi_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdi_8 + rbx_4), 0x30)
    uint64_t rdi_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_9 + rbx_4), 0x30)
    int32_t temp0_296 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
    float* rdi_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdi_10 + r13_2), 0x10)
    uint64_t rdi_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rdi_11 + r13_2), 0x10)
    int64_t rbx_6 = sx.q(temp0_296)
    int64_t rdi_12 = arg4 + (rbx_6 << 2)
    uint64_t rax_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_38 + rdi_12), 0x20)
    uint64_t rax_39 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_39 + rdi_12), 0x20)
    arg5[0].o = *(arg4 + (r14_2 << 2))
    arg6[0].o = *(arg4 + (r15_2 << 2))
    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rsi_4 << 2)), 0x10)
    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rcx_10 << 2)), 0x20)
    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rdx_4 << 2)), 0x30)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + (r12_2 << 2)), 0x10)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + (rbx_6 << 2)), 0x20)
    int64_t rax_41 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + (rax_41 << 2)), 0x30)
    int64_t rax_42 = arg4 + (rax_41 << 2)
    uint64_t rcx_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_11 + rax_42), 0x30)
    uint64_t rcx_12 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_12 + rax_42), 0x30)
    arg9 = _mm256_insertf128_ps(arg10, arg12[0].o, 1)
    zmm4 = _mm256_insertf128_ps(zmm4, arg6[0].o, 1)
    zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
    zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
    double var_200_1[0x4] = zmm4
    float var_1e0_1[0x8] = zmm0
    int32_t var_1c0_1[0x8] = zmm1
    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
    float var_1a0_1[0x8] = zmm3
    zmm5 = _mm256_broadcast_ss(arg3[3])
    int32_t var_4e0_2[0x8] = zmm5
    int32_t var_4c0_2[0x8] = zmm5
    int32_t var_4a0_2[0x8] = zmm5
    int32_t var_480_2[0x8] = zmm5
    arg5 = _mm256_broadcast_ss(arg3[1])
    arg6 = _mm256_mul_ps(zmm1, arg5)
    arg7 = _mm256_broadcast_ss(arg3[2])
    arg8 = _mm256_mul_ps(zmm4, arg7)
    arg10 = _mm256_broadcast_ss(*arg3)
    arg7 = _mm256_mul_ps(zmm0, arg7)
    zmm0 = _mm256_mul_ps(zmm0, arg10)
    zmm3 = _mm256_mul_ps(zmm5, zmm3)
    arg6 = _mm256_sub_ps(arg6, arg7)
    zmm1 = _mm256_sub_ps(arg8, _mm256_mul_ps(zmm1, arg10))
    zmm0 = _mm256_sub_ps(zmm0, _mm256_mul_ps(zmm4, arg5))
    zmm3 = _mm256_sub_ps(zmm3, zmm3)
    zmm4 = _mm256_add_ps(arg6, arg6)
    zmm1 = _mm256_add_ps(zmm1, zmm1)
    zmm0 = _mm256_add_ps(zmm0, zmm0)
    zmm3 = _mm256_add_ps(zmm3, zmm3)
    double var_380_2[0x4] = zmm4
    int32_t var_360_2[0x8] = zmm1
    double var_340_2[0x4] = zmm0
    float var_320_2[0x8] = zmm3
    arg5 = _mm256_mul_ps(zmm5, zmm4)
    arg6 = _mm256_mul_ps(zmm5, zmm1)
    arg7 = _mm256_mul_ps(zmm5, zmm0)
    zmm3 = _mm256_mul_ps(zmm5, zmm3)
    zmm5 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_200_1)
    arg5 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_1e0_1)
    arg6 = __vaddps_ymmqq_ymmqq_memqq(arg7, var_1c0_1)
    int32_t var_180_1[0x8] = zmm5
    float var_160_1[0x8] = arg5
    uint32_t var_140_1[0x8] = arg6
    float var_120_1[0x8] = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_1a0_1)
    zmm3 = _mm256_broadcast_ss(arg3[1])
    arg7 = _mm256_mul_ps(zmm0, zmm3)
    arg8 = _mm256_broadcast_ss(arg3[2])
    arg7 = _mm256_sub_ps(arg7, _mm256_mul_ps(zmm1, arg8))
    arg10 = _mm256_broadcast_ss(*arg3)
    zmm1 = _mm256_mul_ps(zmm1, arg10)
    zmm0 = _mm256_mul_ps(zmm0, arg10)
    zmm0 = _mm256_sub_ps(_mm256_mul_ps(zmm4, arg8), zmm0)
    zmm1 = _mm256_sub_ps(zmm1, _mm256_mul_ps(zmm4, zmm3))
    zmm3 = _mm256_broadcast_ss(arg3[4])
    arg8 = _mm256_broadcast_ss(arg3[5])
    arg12 = _mm256_broadcast_ss(arg3[6])
    zmm4 = _mm256_add_ps(zmm5, arg7)
    zmm0 = _mm256_add_ps(arg5, zmm0)
    arg13 = _mm256_add_ps(arg6, zmm1)
    zmm4 = _mm256_add_ps(zmm4, zmm3)
    arg6 = _mm256_add_ps(zmm0, arg8)
    arg8 = _mm256_broadcast_ss(*arg2)
    arg7 = _mm256_broadcast_ss(arg2[1])
    arg10 = _mm256_broadcast_ss(arg2[2])
    zmm0 = _mm256_cmp_ps(zmm4, arg8, 6)
    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    zmm1[0].o &= arg14[0].o
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
    zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
    arg5 = _mm256_broadcast_ss(*arg1)
    zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
    arg11 = _mm256_broadcast_ss(arg1[1])
    char temp0_379 = _mm256_movemask_ps(zmm1)
    int32_t var_520_2[0x8] = _mm256_broadcast_ss(arg1[2])
    zmm1 = var_560_1
    zmm3 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    uint32_t var_560_2[0x8] = arg6
    uint32_t var_3e0_2[0x8] = arg9
    float var_400_2[0x8] = zmm3
    
    if (temp0_379 == 0xff)
        arg9 = _mm256_cmp_ps(zmm4, arg8, 2)
        arg14 = _mm256_and_ps(zmm0, zmm2)
    else
        zmm0 = _mm256_cmp_ps(zmm4, arg8, 2)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg9[0].o)
        zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
        zmm5 = _mm256_cmp_ps(arg6, arg7, 2)
        arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
        arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm3[0].o &= arg6[0].o
        zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
        zmm0[0].o &= zmm5[0].o
        zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0])
        arg9 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        arg14 = _mm256_andnot_ps(arg9, zmm2)
    
    zmm0 = _mm256_add_ps(arg13, arg12)
    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    zmm3[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
    zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
    zmm3 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
    rcx_14 = arg18
    
    if (_mm256_movemask_ps(zmm3) != 0xff)
        zmm5 = _mm256_cmp_ps(zmm0, arg10, 2)
        arg9 = _mm256_and_ps(zmm5, _mm256_and_ps(arg9, zmm2))
        arg14 = _mm256_xor_ps(arg9, zmm2)
    
    zmm3[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
    
    if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm3, zmm1[0].o, 1)) == 0xff)
        arg6 = var_560_2
    else
        arg9 = _mm256_and_ps(arg9, zmm2)
        arg12 = _mm256_cmp_ps(arg5, zmm4, 2)
        zmm1 = _mm256_and_ps(arg9, _mm256_cmp_ps(arg5, zmm4, 6))
        zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
        zmm3 = _mm256_insertf128_ps(arg6, zmm3[0].o, 1)
        
        if (_mm256_movemask_ps(zmm3) == 0xff)
            arg6 = var_560_2
        else
            arg6 = var_560_2
            zmm1 = _mm256_cmp_ps(arg11, arg6, 2)
            zmm3 = _mm256_and_ps(arg9, arg12)
            arg12 = _mm256_and_ps(zmm1, zmm3)
            zmm1 = _mm256_xor_ps(arg12, arg9)
        
        zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
        
        if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm1, zmm3[0].o, 1)) != 0xff)
            zmm1 = _mm256_cmp_ps(var_520_2, zmm0, 2)
            zmm3 = _mm256_and_ps(arg12, arg9)
            arg12 = _mm256_and_ps(zmm1, zmm3)
        
        arg9 = _mm256_and_ps(arg12, arg9)
    
    arg14 = _mm256_sub_ps(zmm4, arg8)
    arg12 = _mm256_sub_ps(arg6, arg7)
    arg7 = _mm256_sub_ps(zmm0, arg10)
    arg13 = _mm256_sub_ps(arg5, zmm4)
    arg8 = _mm256_sub_ps(arg11, arg6)
    arg6 = _mm256_sub_ps(var_520_2, zmm0)
    int32_t temp0_446 = _mm256_movemask_ps(_mm256_and_ps(arg9, zmm2))
    int32_t temp0_461
    
    if (temp0_446 != 0)
        arg5 = _mm256_max_ps(arg13, arg14)
        arg11 = _mm256_max_ps(arg8, arg12)
        arg10 = _mm256_max_ps(arg6, arg7)
        zmm1 = _mm256_cmp_ps(arg11, arg5, 1)
        zmm5 = _mm256_and_ps(arg9, zmm1)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm2)) != 0)
            zmm5 = _mm256_and_ps(_mm256_cmp_ps(arg10, arg5, 5), zmm5)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm2)) != 0)
                arg5 = _mm256_blendv_ps(arg5, arg10, zmm5)
        
        zmm1 = _mm256_andnot_ps(zmm1, arg9)
        zmm3 = _mm256_and_ps(zmm1, zmm2)
        temp0_461 = _mm256_movemask_ps(zmm3)
    
    if (temp0_446 == 0 || temp0_461 == 0)
        arg11 = var_500_2
        zmm1 = _mm256_andnot_ps(arg9, zmm2)
        
        if (_mm256_movemask_ps(zmm1) == 0)
            arg6 = var_3e0_2
            arg14 = var_400_2
        else
        label_14008b444:
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            arg9 = _mm256_xor_ps(arg9, _mm256_cmp_ps(zmm1, zmm1, 0xf))
            zmm1 = _mm256_cmp_ps(zmm1, arg14, 1)
            zmm5 = _mm256_and_ps(zmm1, arg9)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm2)) != 0)
                var_4e0_2 = _mm256_maskstore_ps(zmm5, arg14)
            
            zmm1 = _mm256_andnot_ps(zmm1, arg9)
            zmm3 = _mm256_and_ps(zmm1, zmm2)
            arg14 = var_400_2
            
            if (_mm256_movemask_ps(zmm3) != 0)
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                zmm5 = _mm256_cmp_ps(zmm3, arg13, 1)
                arg10 = _mm256_and_ps(zmm1, zmm5)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg10, zmm2)) != 0)
                    var_4e0_2 = _mm256_maskstore_ps(arg10, 
                        __vxorps_ymmqq_ymmqq_memqq(arg13, data_142fc9460))
                
                zmm1 = _mm256_andnot_ps(zmm5, zmm1)
                zmm3 = _mm256_and_ps(zmm1, zmm2)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    var_4e0_2 = _mm256_maskstore_ps(zmm1, zmm3)
            
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm1 = _mm256_cmp_ps(zmm1, arg12, 1)
            zmm5 = _mm256_and_ps(zmm1, arg9)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm2)) != 0)
                var_4c0_2 = _mm256_maskstore_ps(zmm5, arg12)
            
            zmm1 = _mm256_andnot_ps(zmm1, arg9)
            zmm3 = _mm256_and_ps(zmm1, zmm2)
            
            if (_mm256_movemask_ps(zmm3) != 0)
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                zmm5 = _mm256_cmp_ps(zmm3, arg8, 1)
                arg10 = _mm256_and_ps(zmm1, zmm5)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg10, zmm2)) != 0)
                    var_4c0_2 =
                        _mm256_maskstore_ps(arg10, __vxorps_ymmqq_ymmqq_memqq(arg8, data_142fc9460))
                
                zmm1 = _mm256_andnot_ps(zmm5, zmm1)
                zmm3 = _mm256_and_ps(zmm1, zmm2)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    var_4c0_2 = _mm256_maskstore_ps(zmm1, zmm3)
            
            arg8 = arg6
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm1 = _mm256_cmp_ps(zmm1, arg7, 1)
            zmm5 = _mm256_and_ps(zmm1, arg9)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm5, zmm2)) != 0)
                var_4a0_2 = _mm256_maskstore_ps(zmm5, arg7)
            
            zmm1 = _mm256_andnot_ps(zmm1, arg9)
            zmm3 = _mm256_and_ps(zmm1, zmm2)
            arg6 = var_3e0_2
            
            if (_mm256_movemask_ps(zmm3) != 0)
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                zmm5 = _mm256_cmp_ps(zmm3, arg8, 1)
                arg7 = _mm256_and_ps(zmm1, zmm5)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg7, zmm2)) != 0)
                    var_4a0_2 =
                        _mm256_maskstore_ps(arg7, __vxorps_ymmqq_ymmqq_memqq(arg8, data_142fc9460))
                
                zmm1 = _mm256_andnot_ps(zmm5, zmm1)
                zmm2 = _mm256_and_ps(zmm1, zmm2)
                
                if (_mm256_movemask_ps(zmm2) != 0)
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    var_4a0_2 = _mm256_maskstore_ps(zmm1, zmm2)
            
            zmm2 = var_4c0_2
            zmm3 = var_4a0_2
            zmm1 = _mm256_mul_ps(var_4e0_2, var_4e0_2)
            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            zmm1 = _mm256_add_ps(
                _mm256_add_ps(_mm256_add_ps(zmm1, zmm5), _mm256_mul_ps(zmm2, zmm2)), 
                _mm256_mul_ps(zmm3, zmm3))
            zmm2 = _mm256_rsqrt_ps(zmm1)
            zmm1 = _mm256_mul_ps(zmm2, _mm256_mul_ps(zmm1, zmm2))
            zmm1 = __vmulps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(zmm2, _mm256_sub_ps(data_142fc9480, zmm1)), data_142fc94a0)
            zmm2 = _mm256_rcp_ps(zmm1)
            zmm1 = _mm256_mul_ps(zmm2, zmm1)
            zmm3 = data_142fc94c0
            zmm1 = _mm256_mul_ps(zmm2, _mm256_sub_ps(zmm3, zmm1))
            arg5 = _mm256_blendv_ps(arg5, zmm1, arg9)
    else
        double var_520_3[0x4] = arg7
        arg7 = arg8
        arg8 = zmm0
        zmm0 = arg6
        zmm5 = _mm256_cmp_ps(arg10, arg11, 1)
        arg6 = _mm256_and_ps(zmm1, zmm5)
        
        if (_mm256_movemask_ps(_mm256_and_ps(arg6, zmm2)) != 0)
            arg5 = _mm256_blendv_ps(arg5, arg11, arg6)
        
        zmm1 = _mm256_andnot_ps(zmm5, zmm1)
        zmm3 = _mm256_and_ps(zmm1, zmm2)
        arg11 = var_500_2
        arg6 = zmm0
        
        if (_mm256_movemask_ps(zmm3) != 0)
            arg5 = _mm256_blendv_ps(arg5, arg10, zmm1)
        
        zmm0 = arg8
        arg8 = arg7
        arg7 = var_520_3
        zmm1 = _mm256_andnot_ps(arg9, zmm2)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            goto label_14008b444
        
        arg6 = var_3e0_2
        arg14 = var_400_2
    
    zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
    zmm2[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
    zmm1[0].o = arg16
    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
    zmm1 = _mm256_sub_ps(arg5, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
    arg5 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm1, data_142fc94e0, 1)
    arg6[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg6[0].o)
    zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    zmm2[0].o &= zmm5[0].o
    zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
    zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
        zmm3 = _mm256_insertf128_ps(arg6, zmm5[0].o, 1)
        zmm4 = _mm256_mul_ps(zmm4, zmm1)
        zmm5 = __vmulps_ymmqq_ymmqq_memqq(zmm1, var_560_2)
        zmm0 = _mm256_mul_ps(zmm0, zmm1)
        zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, var_460)
        zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_440)
        zmm0 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_420)
        zmm3 = _mm256_and_ps(arg5, zmm3)
        var_460 = _mm256_maskstore_ps(zmm3, zmm4)
        var_440 = _mm256_maskstore_ps(zmm3, zmm5)
        var_420 = _mm256_maskstore_ps(zmm3, zmm0)
        zmm0 = _mm256_add_ps(arg11, zmm1)
        zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0x4e)
        zmm2[0].o = __vpmovsxwd_xmmdq_xmmq(zmm2[0].q)
        arg11 = _mm256_blendv_ps(arg11, zmm0, _mm256_insertf128_ps(zmm1, zmm2[0].o, 1))
    
    result = arg17

zmm0 = var_460
zmm1 = var_440
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm2 = var_420
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm0[0].o = zmm0[0].o f+ zmm3[0]
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
zmm1[0].o = zmm1[0].o f+ zmm3[0]
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
zmm1[0].o = zmm2[0].o f+ zmm1[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
zmm1[0].o = __vmovsd_xmmdq_memq(*rcx_14)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, rcx_14[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
*rcx_14 = zmm0[0].d
*(rcx_14 + 4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
rcx_14[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0 = _mm256_hadd_ps(arg11, arg11)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm1[0]
zmm0[0].o = zmm0[0].o f+ *result
*result = zmm0[0].d
arg5[0].o = var_e8
arg6[0].o = var_d8
arg7[0].o = var_c8
arg8[0].o = var_b8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_78
arg13[0].o = var_68
arg14[0].o = var_58
_mm256_zeroupper()
return result
