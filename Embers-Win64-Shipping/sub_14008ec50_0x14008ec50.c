// 函数: sub_14008ec50
// 地址: 0x14008ec50
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
double zmm2[0x4]
zmm2[0].o = arg20
arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
float var_460[0x8] = arg5
float var_480[0x8] = arg5
float zmm0[0x8]
zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, data_142fc9560)
uint32_t zmm1[0x8]
zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
float var_740 = zmm1[0]
float temp0_7 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float var_4a0[0x8] = arg5
float temp0_8 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float var_750 = zmm0[0]
float temp0_12 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float temp0_13 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
int32_t rcx_4 = ((arg23 s>> 0x1f u>> 0x1d) + arg23) & 0xfffffff8
uint32_t var_6d0[0x4]
int32_t* var_670
int32_t rbx
double zmm3[0x4]
float zmm5[0x8]

if (rcx_4 s<= 0)
    rbx = 0
else
    zmm0[0].o = _mm_permute_ps(zmm2[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    float var_520_1[0x8] = zmm0
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    int32_t rax_1 = 0
    rbx = 0
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    var_670 = arg4
    
    do
        float var_4c0_1[0x8] = arg5
        int64_t rax_2 = sx.q(rax_1)
        int128_t* rcx_5 = arg19
        zmm0[0].o = *(rcx_5 + rax_2)
        zmm1[0].o = *(rcx_5 + rax_2 + 0x10)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        int64_t rdx = sx.q(zmm0[0])
        int64_t r8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int64_t r11_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        int64_t r10_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        int64_t rax_7 = sx.q(zmm1[0])
        int64_t rbx_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        int64_t rdi_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        int64_t rcx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm0[0].o = *(arg18 + (rax_7 << 2))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg18 + (rbx_2 << 2)), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg18 + (rdi_2 << 2)), 0x20)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg18 + (rcx_8 << 2)), 0x30)
        zmm1[0].o = *(arg18 + (rax_7 << 2) + 4)
        zmm2[0].o = *(arg18 + (rdx << 2))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg18 + (r8 << 2)), 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg18 + (r11_1 << 2)), 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg18 + (r10_1 << 2)), 0x30)
        zmm3[0].o = *(arg18 + (rdx << 2) + 4)
        zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg18 + (rbx_2 << 2) + 4), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg18 + (rdi_2 << 2) + 4), 0x20)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg18 + (rcx_8 << 2) + 4), 0x30)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg18 + (r8 << 2) + 4), 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg18 + (r11_1 << 2) + 4), 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg18 + (r10_1 << 2) + 4), 0x30)
        zmm3[0].o = *(arg18 + (rdx << 2) + 8)
        arg5[0].o = *(arg18 + (rax_7 << 2) + 8)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg18 + (rbx_2 << 2) + 8), 0x10)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg18 + (rdi_2 << 2) + 8), 0x20)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg18 + (rcx_8 << 2) + 8), 0x30)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg18 + (r8 << 2) + 8), 0x10)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg18 + (r11_1 << 2) + 8), 0x20)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg18 + (r10_1 << 2) + 8), 0x30)
        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm2 = _mm256_insertf128_ps(zmm3, arg5[0].o, 1)
        float var_640_1[0x8] = zmm0
        uint32_t var_620_1[0x8] = zmm1
        double var_600_1[0x4] = zmm2
        float var_5e0_1[0x8] = arg12
        zmm3 = _mm256_broadcast_ss(arg17[3])
        double var_720_1[0x4] = zmm3
        double var_700_1[0x4] = zmm3
        double var_6e0_1[0x4] = zmm3
        double var_6c0_1[0x4] = zmm3
        arg5 = _mm256_broadcast_ss(arg17[1])
        zmm5 = _mm256_mul_ps(zmm2, arg5)
        arg6 = _mm256_broadcast_ss(arg17[2])
        arg7 = _mm256_mul_ps(zmm0, arg6)
        arg8 = _mm256_broadcast_ss(*arg17)
        arg9 = _mm256_mul_ps(zmm1, arg8)
        zmm1 = _mm256_sub_ps(zmm5, _mm256_mul_ps(zmm1, arg6))
        zmm2 = _mm256_sub_ps(arg7, _mm256_mul_ps(zmm2, arg8))
        zmm0 = _mm256_sub_ps(arg9, _mm256_mul_ps(zmm0, arg5))
        zmm1 = _mm256_add_ps(zmm1, zmm1)
        zmm2 = _mm256_add_ps(zmm2, zmm2)
        zmm0 = _mm256_add_ps(zmm0, zmm0)
        zmm5 = _mm256_mul_ps(zmm3, zmm1)
        arg7 = _mm256_mul_ps(zmm3, zmm2)
        zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_640_1)
        arg7 = __vaddps_ymmqq_ymmqq_memqq(arg7, var_620_1)
        zmm3 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm3, zmm0), var_600_1)
        arg9 = _mm256_mul_ps(zmm0, arg5)
        arg10 = _mm256_mul_ps(zmm1, arg6)
        arg11 = _mm256_mul_ps(zmm2, arg8)
        zmm2 = _mm256_add_ps(zmm5, _mm256_sub_ps(arg9, _mm256_mul_ps(zmm2, arg6)))
        zmm0 = _mm256_add_ps(arg7, _mm256_sub_ps(arg10, _mm256_mul_ps(zmm0, arg8)))
        zmm1 = _mm256_add_ps(zmm3, _mm256_sub_ps(arg11, _mm256_mul_ps(zmm1, arg5)))
        zmm3 = _mm256_broadcast_ss(arg17[4])
        arg7 = _mm256_add_ps(zmm2, zmm3)
        arg6 = _mm256_add_ps(zmm0, _mm256_broadcast_ss(arg17[5]))
        zmm5 = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg17[6]))
        float var_260_1[0x8] = arg7
        float var_240_1[0x8] = arg6
        float var_220_1[0x8] = zmm5
        zmm0 = _mm256_broadcast_ss(var_740)
        zmm1 = _mm256_cmp_ps(zmm0, arg7, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_720_1 = _mm256_maskstore_ps(zmm1, zmm0)
        
        zmm0 = _mm256_cmp_ps(arg12, arg12, 0xf)
        zmm1 = _mm256_xor_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm3 = _mm256_broadcast_ss(var_750)
            zmm2 = _mm256_cmp_ps(arg7, zmm3, 1)
            arg5 = _mm256_and_ps(zmm2, zmm1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                var_720_1 = _mm256_maskstore_ps(arg5, zmm3)
            
            zmm1 = _mm256_andnot_ps(zmm2, zmm1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_720_1 = _mm256_maskstore_ps(zmm1, arg7)
        
        zmm2 = _mm256_broadcast_ss(temp0_7)
        zmm1 = _mm256_cmp_ps(zmm2, arg6, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_700_1 = _mm256_maskstore_ps(zmm1, zmm2)
        
        zmm1 = _mm256_xor_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm3 = _mm256_broadcast_ss(temp0_12)
            zmm2 = _mm256_cmp_ps(arg6, zmm3, 1)
            arg5 = _mm256_and_ps(zmm2, zmm1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                var_700_1 = _mm256_maskstore_ps(arg5, zmm3)
            
            zmm1 = _mm256_andnot_ps(zmm2, zmm1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_700_1 = _mm256_maskstore_ps(zmm1, arg6)
        
        zmm2 = _mm256_broadcast_ss(temp0_8)
        zmm1 = _mm256_cmp_ps(zmm2, zmm5, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_6e0_1 = _mm256_maskstore_ps(zmm1, zmm2)
        
        zmm0 = _mm256_xor_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm2 = _mm256_broadcast_ss(temp0_13)
            zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
            zmm3 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(zmm3) != 0)
                var_6e0_1 = _mm256_maskstore_ps(zmm3, zmm2)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_6e0_1 = _mm256_maskstore_ps(zmm0, zmm5)
        
        int32_t var_560[0x4]
        var_560.32 = arg7
        float var_660_1[0x8] = arg6
        float var_6a0_1[0x8] = zmm5
        zmm5 = var_700_1
        arg10 = _mm256_broadcast_ss(*arg1)
        zmm0 = _mm256_sub_ps(var_720_1, arg10)
        arg11 = _mm256_broadcast_ss(*(arg1 + 4))
        zmm1 = _mm256_sub_ps(zmm5, arg11)
        arg6 = _mm256_broadcast_ss(*arg3)
        zmm0 = _mm256_div_ps(zmm0, arg6)
        arg7 = _mm256_broadcast_ss(*(arg3 + 4))
        zmm1 = _mm256_div_ps(zmm1, arg7)
        arg9 = _mm256_broadcast_ss(arg1[1].d)
        int64_t var_4e0
        var_4e0.32 = var_6e0_1
        zmm2 = _mm256_sub_ps(var_6e0_1, arg9)
        arg5[0].o = arg3[1].d
        zmm3[0].o = _mm_permute_ps(arg5[0].o, 0)
        arg15 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
        zmm2 = _mm256_div_ps(zmm2, arg15)
        zmm3 = _mm256_cvttps_epi32(zmm0)
        arg13 = _mm256_cvttps_epi32(zmm1)
        arg8 = _mm256_cvttps_epi32(zmm2)
        zmm0 = _mm256_mul_ps(arg6, _mm256_cvtepi32_ps(zmm3))
        zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5[0].o, 0x20)
        zmm1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
        arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
        zmm1 = _mm256_mul_ps(arg7, _mm256_cvtepi32_ps(arg13))
        float var_580_1[0x8] = arg8
        arg8 = _mm256_mul_ps(arg15, _mm256_cvtepi32_ps(arg8))
        int64_t var_400
        var_400.32 = arg10
        zmm0 = _mm256_add_ps(zmm0, arg10)
        int64_t var_420
        var_420.32 = arg11
        arg12 = _mm256_add_ps(zmm1, arg11)
        int64_t var_440
        var_440.32 = arg9
        zmm1 = _mm256_add_ps(arg8, arg9)
        zmm2[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm2[0].o, data_142fc9580)
        arg8[0].o = _mm_permute_ps(zmm2[0].o, 0)
        arg10 = _mm256_insertf128_ps(arg8, arg8[0].o, 1)
        zmm0 = _mm256_add_ps(arg10, zmm0)
        arg8[0].o = _mm_permute_ps(zmm2[0].o, 0x55)
        arg11 = _mm256_insertf128_ps(arg8, arg8[0].o, 1)
        arg8 = _mm256_add_ps(arg11, arg12)
        zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xaa)
        arg12 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
        int64_t var_3e0
        var_3e0.32 = var_720_1
        zmm2 = _mm256_blendv_ps(arg5, zmm3, _mm256_cmp_ps(zmm0, var_720_1, 1))
        double var_720_2[0x4] = zmm2
        zmm0 = _mm256_cmp_ps(arg8, zmm5, 1)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm3 = arg13
        
        zmm1 = _mm256_add_ps(arg12, zmm1)
        int64_t var_3c0
        var_3c0.32 = zmm5
        arg8 = _mm256_cmp_ps(arg8, zmm5, 5)
        var_720_1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
        zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, var_720_1[0].o)
        zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
        bool cond:0_1 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o) == 0
        arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        
        if (not(cond:0_1))
            arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
            arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
        
        arg13 = _mm256_blendv_ps(arg5, zmm3, zmm0)
        double var_700_2[0x4] = arg13
        arg14 = var_4e0.32
        zmm0 = _mm256_cmp_ps(zmm1, arg14, 1)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm3 = var_580_1
        
        zmm1 = _mm256_cmp_ps(zmm1, arg14, 5)
        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm1[0].o = _mm256_extractf128_ps(var_580_1[0].o, 1)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
            var_580_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_580_1[0].o, arg8[0].o)
            arg5 = _mm256_insertf128_ps(var_580_1, zmm1[0].o, 1)
        
        zmm0 = _mm256_blendv_ps(arg5, zmm3, zmm0)
        zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg6, _mm256_cvtepi32_ps(zmm2)), var_400.32)
        zmm3 =
            __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg7, _mm256_cvtepi32_ps(arg13)), var_420.32)
        float var_6e0_2[0x8] = zmm0
        zmm0 =
            __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg15, _mm256_cvtepi32_ps(zmm0)), var_440.32)
        zmm1 = _mm256_add_ps(arg10, zmm1)
        zmm3 = _mm256_add_ps(arg11, zmm3)
        zmm0 = _mm256_add_ps(arg12, zmm0)
        arg9 = var_3e0.32
        zmm1 = _mm256_div_ps(_mm256_sub_ps(arg9, zmm1), arg6)
        arg5 = var_3c0.32
        zmm3 = _mm256_div_ps(_mm256_sub_ps(arg5, zmm3), arg7)
        zmm0 = _mm256_div_ps(_mm256_sub_ps(arg14, zmm0), arg15)
        uint32_t var_640_2[0x8] = zmm1
        double var_620_2[0x4] = zmm3
        float var_600_2[0x8] = zmm0
        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        bool cond:2_1 = _mm256_movemask_ps(zmm0) == 0
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        
        if (not(cond:2_1))
            var_720_2 = _mm256_maskstore_ps(zmm0, arg6)
            var_640_2 = _mm256_maskstore_ps(zmm0, arg6)
            zmm2 = var_720_2
        
        int32_t rax_27 = *arg4
        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm1[0].o = zx.o(rax_27 - 1)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm3 = var_560.32
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm1[0].o = zx.o(rax_27 - 2)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            var_720_2 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
            zmm1 = data_142fc95a0
            var_640_2 = _mm256_maskstore_ps(zmm0, zmm1)
        
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg8[0].o, var_700_2[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg8[0].o, var_700_2[2].o)
        zmm0 = _mm256_sub_ps(arg9, zmm3)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_700_2 = _mm256_maskstore_ps(zmm1, arg6)
            var_620_2 = _mm256_maskstore_ps(zmm1, arg6)
        
        zmm1 = __vsubps_ymmqq_ymmqq_memqq(arg5, var_660_1)
        zmm0 = _mm256_mul_ps(zmm0, zmm0)
        int32_t rax_30 = arg4[1]
        zmm3[0].o = _mm256_extractf128_ps(var_700_2[0].o, 1)
        arg5[0].o = zx.o(rax_30 - 1)
        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
        var_700_2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_700_2[0].o, arg5[0].o)
        zmm2 = _mm256_insertf128_ps(var_700_2, zmm3[0].o, 1)
        
        if (_mm256_movemask_ps(zmm2) != 0)
            zmm3[0].o = zx.o(rax_30 - 2)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            var_700_2 = _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
            var_620_2 = _mm256_maskstore_ps(zmm2, data_142fc95a0)
        
        zmm2 = _mm256_sub_ps(arg14, var_6a0_1)
        zmm1 = _mm256_mul_ps(zmm1, zmm1)
        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg8[0].o, var_6e0_2[0].o)
        var_6a0_1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg8[0].o, var_6d0)
        zmm3 = _mm256_add_ps(zmm0, arg6)
        zmm0 = _mm256_insertf128_ps(arg5, var_6a0_1[0].o, 1)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            var_6e0_2 = _mm256_maskstore_ps(zmm0, arg6)
            var_600_2 = _mm256_maskstore_ps(zmm0, arg6)
        
        arg11 = var_6e0_2
        zmm0 = _mm256_mul_ps(zmm2, zmm2)
        zmm1 = _mm256_add_ps(zmm3, zmm1)
        int32_t rax_33 = arg4[2]
        zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
        zmm3[0].o = zx.o(rax_33 - 1)
        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
        
        if (_mm256_movemask_ps(zmm2) != 0)
            zmm3[0].o = zx.o(rax_33 - 2)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            float var_6e0_3[0x8] =
                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
            zmm3 = data_142fc95a0
            var_600_2 = _mm256_maskstore_ps(zmm2, zmm3)
            arg11 = var_6e0_3
        
        zmm0 = _mm256_add_ps(zmm1, zmm0)
        float var_6a0_2[0x8] = zmm0
        zmm0[0].o = zx.o(*(arg16 + 4))
        arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm3[0].o = var_720_2[0].o
        arg10[0].o = var_720_2[2].o
        var_6a0_1[0].o = var_700_2[0].o
        arg6[0].o = var_700_2[2].o
        arg14[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, arg10[0].o)
        arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
        arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, var_6a0_1[0].o)
        arg15[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg6[0].o)
        zmm0[0].o = zx.o(*(arg16 + 8))
        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
        var_560 = zmm0[0].o
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
        var_660_1[0].o = zmm1[0].o
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
        arg9[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_289 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        int32_t temp0_290 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        uint32_t rdx_1 = zmm1[0]
        int32_t temp0_291 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
        float* r11_2 = *(arg16 + 0x10)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        int64_t r14_1 = sx.q(rdx_1)
        int64_t r15_1 = sx.q(temp0_289)
        int64_t rdx_2 = sx.q(temp0_290)
        int64_t rbx_4 = sx.q(zmm1[0])
        int64_t r12_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        int64_t r13_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        int32_t temp0_296 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = *(r11_2 + rbx_4)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + r12_1), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + r13_1), 0x20)
        int64_t r10_2 = sx.q(temp0_296)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + r10_2), 0x30)
        zmm2[0].o = *(r11_2 + r14_1)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_2 + r15_1), 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_2 + rdx_2), 0x20)
        int64_t r9 = sx.q(temp0_291)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_2 + r9), 0x30)
        arg13 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
        zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
        arg10[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
        arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
        arg15[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg7[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_315 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        int32_t temp0_316 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_317 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        uint32_t rdi_3 = zmm1[0]
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, var_6a0_1[0].o)
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_322 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        zmm2[0].o = *(r11_2 + sx.q(rdi_3))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_2 + sx.q(temp0_315)), 0x10)
        int32_t temp0_324 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_325 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        uint32_t rax_42 = zmm1[0]
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_2 + sx.q(temp0_316)), 0x20)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + sx.q(temp0_317)), 0x30)
        zmm2[0].o = *(r11_2 + sx.q(rax_42))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_2 + sx.q(temp0_322)), 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_2 + sx.q(temp0_324)), 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_2 + sx.q(temp0_325)), 0x30)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        var_6a0_1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_6a0_1[0].o, zmm0[0].o)
        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, var_6a0_1[0].o)
        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
        arg7[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
        arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg11[0].o)
        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 2)
        arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
        float rax_44 = arg7[0]
        int32_t temp0_342 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1)
        int32_t temp0_343 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
        int32_t temp0_344 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3)
        arg7[0].o = *(r11_2 + sx.q(rax_44))
        int32_t temp0_345 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
        zmm2 = _mm256_sub_ps(zmm2, arg13)
        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(r11_2 + sx.q(temp0_342)), 0x10)
        int32_t temp0_348 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(r11_2 + sx.q(temp0_343)), 0x20)
        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(r11_2 + sx.q(temp0_344)), 0x30)
        float rdx_9 = arg6[0]
        int32_t temp0_351 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
        arg12 = var_640_2
        zmm2 = _mm256_mul_ps(arg12, zmm2)
        arg6[0].o = *(r11_2 + sx.q(rdx_9))
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r11_2 + sx.q(temp0_345)), 0x10)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r11_2 + sx.q(temp0_348)), 0x20)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r11_2 + sx.q(temp0_351)), 0x30)
        arg13 = _mm256_add_ps(arg13, zmm2)
        arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, var_6a0_1[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg11[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
        int64_t rax_49 = sx.q(zmm2[0].d)
        int64_t rcx_25 = sx.q(zmm1[0])
        int32_t temp0_366 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        zmm3[0].o = *(r11_2 + rcx_25)
        int32_t temp0_367 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r11_2 + sx.q(temp0_366)), 0x10)
        int32_t temp0_369 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = *(r11_2 + rax_49)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r11_2 + sx.q(temp0_367)), 0x20)
        int64_t rax_52 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r11_2 + sx.q(temp0_369)), 0x30)
        int32_t temp0_373 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + rax_52), 0x10)
        int32_t temp0_375 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
        var_6a0_1[0].o = *(r11_2 + rbx_4 + 4)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + sx.q(temp0_373)), 0x20)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + sx.q(temp0_375)), 0x30)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
        arg7[0].o = *(r11_2 + r14_1 + 4)
        zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
        zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
        zmm1 = _mm256_mul_ps(arg12, _mm256_sub_ps(zmm1, arg6))
        arg8 = _mm256_add_ps(arg6, zmm1)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_6a0_1[0].o, *(r11_2 + r12_1 + 4), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + r13_1 + 4), 0x20)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + r10_2 + 4), 0x30)
        var_6a0_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(r11_2 + r15_1 + 4), 0x10)
        var_6a0_1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(var_6a0_1[0].o, *(r11_2 + rdx_2 + 4), 0x20)
        var_6a0_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_6a0_1[0].o, *(r11_2 + r9 + 4), 0x30)
        zmm5 = _mm256_insertf128_ps(var_6a0_1, zmm1[0].o, 1)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
        arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        uint32_t rax_56 = zmm1[0]
        int32_t temp0_395 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        int32_t temp0_396 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_397 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = *(r11_2 + sx.q(rax_56) + 4)
        int64_t rdx_15 = sx.q(arg6[0])
        int32_t temp0_398 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
        int32_t temp0_399 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
        int32_t temp0_400 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
        arg6[0].o = *(r11_2 + rdx_15 + 4)
        arg6[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r11_2 + sx.q(temp0_398) + 4), 0x10)
        arg6[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r11_2 + sx.q(temp0_399) + 4), 0x20)
        arg6[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r11_2 + sx.q(temp0_400) + 4), 0x30)
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + sx.q(temp0_395) + 4), 0x10)
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + sx.q(temp0_396) + 4), 0x20)
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + sx.q(temp0_397) + 4), 0x30)
        arg7 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_660_1[0].o)
        arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_560)
        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
        int64_t rax_61 = sx.q(zmm0[0])
        int32_t temp0_414 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_415 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_416 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = *(r11_2 + rax_61 + 4)
        float rax_62 = arg5[0]
        int32_t temp0_417 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
        int32_t temp0_418 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
        int32_t temp0_419 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
        arg5[0].o = *(r11_2 + sx.q(rax_62) + 4)
        arg5[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r11_2 + sx.q(temp0_417) + 4), 0x10)
        arg7 = _mm256_mul_ps(arg12, _mm256_sub_ps(arg7, zmm5))
        arg5[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r11_2 + sx.q(temp0_418) + 4), 0x20)
        arg5[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r11_2 + sx.q(temp0_419) + 4), 0x30)
        zmm0[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_2 + sx.q(temp0_414) + 4), 0x10)
        zmm0[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_2 + sx.q(temp0_415) + 4), 0x20)
        arg9[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r11_2 + sx.q(temp0_416) + 4), 0x30)
        zmm0 = _mm256_add_ps(zmm5, arg7)
        arg5 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
        int32_t temp0_434 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
        int64_t rcx_36 = sx.q(zmm1[0])
        int32_t temp0_435 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        int32_t temp0_436 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_437 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = *(r11_2 + rcx_36 + 4)
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + sx.q(temp0_435) + 4), 0x10)
        int32_t rcx_38 = zmm2[0].d
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + sx.q(temp0_436) + 4), 0x20)
        int32_t temp0_440 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r11_2 + sx.q(temp0_437) + 4), 0x30)
        int32_t temp0_442 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
        zmm2[0].o = *(r11_2 + sx.q(rcx_38) + 4)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_2 + sx.q(temp0_434) + 4), 0x10)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_2 + sx.q(temp0_440) + 4), 0x20)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_2 + sx.q(temp0_442) + 4), 0x30)
        zmm1 = _mm256_add_ps(arg5, 
            _mm256_mul_ps(arg12, _mm256_sub_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1), arg5)))
        zmm2 = var_620_2
        zmm3 = _mm256_add_ps(arg13, _mm256_mul_ps(_mm256_sub_ps(arg8, arg13), zmm2))
        zmm0 = _mm256_add_ps(zmm3, 
            __vmulps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(_mm256_add_ps(zmm0, _mm256_mul_ps(zmm2, _mm256_sub_ps(zmm1, zmm0))), 
                    zmm3), 
                var_600_2))
        zmm3 = var_6a0_2
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        zmm1 = _mm256_cmp_ps(zmm3, arg12, 0xc)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm2 = _mm256_rsqrt_ps(zmm3)
            zmm3 = _mm256_mul_ps(zmm2, _mm256_mul_ps(zmm3, zmm2))
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(zmm2, _mm256_sub_ps(data_142fc9480, zmm3)), data_142fc94a0)
            zmm3 = _mm256_rcp_ps(zmm2)
            zmm2 = _mm256_mul_ps(zmm3, zmm2)
            zmm2 = _mm256_add_ps(zmm0, _mm256_mul_ps(zmm3, _mm256_sub_ps(data_142fc94c0, zmm2)))
            zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
        
        arg4 = var_670
        zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm0, var_520_1)
        zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc94e0, 1)
        
        if (_mm256_movemask_ps(zmm1) == 0)
            arg5 = var_4c0_1
        else
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_260_1)
            zmm3 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_240_1)
            arg5 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_220_1)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_4a0)
            zmm3 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_480)
            arg5 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_460)
            var_4a0 = _mm256_maskstore_ps(zmm1, zmm2)
            var_480 = _mm256_maskstore_ps(zmm1, zmm3)
            var_460 = _mm256_maskstore_ps(zmm1, arg5)
            zmm0 = _mm256_add_ps(var_4c0_1, zmm0)
            arg5 = _mm256_blendv_ps(var_4c0_1, zmm0, zmm1)
        
        rbx += 8
        rax_1 += 0x20
    while (rbx s< rcx_4)

double* rcx_54 = arg22
int32_t* result = arg21

if (rbx s< arg23)
    float var_4c0_2[0x8] = arg5
    zmm0[0].o = zx.o(rbx)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
    arg11[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
    zmm2[0].o = zx.o(arg23)
    arg14[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
    arg13[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg11[0].o)
    uint32_t var_6a0_3[0x8] = zmm1
    arg12[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
    arg8 = _mm256_insertf128_ps(arg12, arg13[0].o, 1)
    zmm5 = _mm256_maskload_ps(arg8, *(arg19 + sx.q(rbx << 2)))
    arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
    zmm5 = _mm256_and_ps(arg8, _mm256_insertf128_ps(zmm5, arg6[0].o, 1))
    int64_t rax_75 = sx.q(zmm5[0])
    int64_t r8_4 = arg18 + (rax_75 << 2)
    arg6[0].o = *(arg18 + (rax_75 << 2))
    int64_t rcx_41 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
    int64_t r11_3 = arg18 + (rcx_41 << 2)
    int64_t rdx_23 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
    int64_t r14_2 = arg18 + (rdx_23 << 2)
    int64_t rax_78 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
    int64_t rbx_15 = arg18 + (rax_78 << 2)
    arg7[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    int64_t rdi_17 = sx.q(arg7[0])
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg18 + (rcx_41 << 2)), 0x10)
    int32_t temp0_508 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1)
    arg6[0].o = *(arg18 + (rdi_17 << 2))
    int64_t rcx_43 = sx.q(temp0_508)
    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg18 + (rcx_43 << 2)), 0x10)
    int64_t rdi_18 = arg18 + (rdi_17 << 2)
    int64_t r10_3 = arg18 + (rcx_43 << 2)
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg18 + (rdx_23 << 2)), 0x20)
    int32_t temp0_511 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
    arg15[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg18 + (rax_78 << 2)), 0x30)
    int64_t rcx_45 = sx.q(temp0_511)
    int64_t rax_79 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg18 + (rcx_45 << 2)), 0x20)
    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg18 + (rax_79 << 2)), 0x30)
    int64_t rdx_25 = arg18 + (rcx_45 << 2)
    int64_t rcx_46 = arg18 + (rax_79 << 2)
    arg7 = __vandps_ymmqq_ymmqq_memqq(arg8, data_142fc9520)
    arg9 = __vandps_ymmqq_ymmqq_memqq(arg8, data_142fc9540)
    zmm1[0].o = *(zx.q(arg9[0]) + r8_4)
    uint64_t rax_80 = zx.q(arg7[0])
    zmm0[0].o = *(rax_80 + r8_4)
    zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
    arg5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
    zmm3[0].o = *(zx.q(arg5[0]) + rdi_18)
    uint64_t rax_81 = zx.q(zmm2[0].d)
    int32_t var_730
    var_730.q = rax_81
    zmm5[0].o = *(rax_81 + rdi_18)
    uint64_t rdi_19 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_19 + r10_3), 0x10)
    uint64_t rax_82 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_82 + r10_3), 0x10)
    uint64_t rdi_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdi_20 + rdx_25), 0x20)
    uint64_t rax_83 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_83 + rdx_25), 0x20)
    uint64_t rdx_26 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_26 + rcx_46), 0x30)
    uint64_t rax_84 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_84 + rcx_46), 0x30)
    uint64_t rcx_47 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_47 + r11_3), 0x10)
    uint64_t rax_85 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_85 + r11_3), 0x10)
    uint64_t rcx_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_48 + r14_2), 0x20)
    uint64_t rax_86 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_86 + r14_2), 0x20)
    uint64_t rax_87 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_87 + rbx_15), 0x30)
    uint64_t rax_88 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
    int32_t var_728
    var_728.q = rax_88
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_88 + rbx_15), 0x30)
    arg5 = _mm256_insertf128_ps(arg15, arg6[0].o, 1)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
    zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
    float var_200_1[0x8] = arg5
    float var_1e0_1[0x8] = zmm0
    uint32_t var_1c0_1[0x8] = zmm1
    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
    zmm2 = _mm256_broadcast_ss(arg17[3])
    double var_720_3[0x4] = zmm2
    double var_700_3[0x4] = zmm2
    double var_6e0_4[0x4] = zmm2
    double var_6c0_2[0x4] = zmm2
    zmm3 = _mm256_broadcast_ss(arg17[1])
    zmm5 = _mm256_mul_ps(zmm1, zmm3)
    arg6 = _mm256_broadcast_ss(arg17[2])
    arg7 = _mm256_mul_ps(arg5, arg6)
    arg15 = _mm256_broadcast_ss(*arg17)
    arg6 = _mm256_mul_ps(zmm0, arg6)
    zmm0 = _mm256_mul_ps(zmm0, arg15)
    zmm5 = _mm256_sub_ps(zmm5, arg6)
    arg6 = _mm256_mul_ps(zmm2, arg9)
    zmm1 = _mm256_sub_ps(arg7, _mm256_mul_ps(zmm1, arg15))
    zmm0 = _mm256_sub_ps(zmm0, _mm256_mul_ps(arg5, zmm3))
    zmm3 = _mm256_sub_ps(arg6, arg6)
    arg5 = _mm256_add_ps(zmm5, zmm5)
    zmm1 = _mm256_add_ps(zmm1, zmm1)
    zmm0 = _mm256_add_ps(zmm0, zmm0)
    zmm3 = _mm256_add_ps(zmm3, zmm3)
    float var_640_3[0x8] = arg5
    uint32_t var_620_3[0x8] = zmm1
    float var_600_3[0x8] = zmm0
    double var_5e0_2[0x4] = zmm3
    zmm5 = _mm256_mul_ps(zmm2, arg5)
    arg6 = _mm256_mul_ps(zmm2, zmm1)
    arg7 = _mm256_mul_ps(zmm2, zmm0)
    zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_200_1)
    arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_1e0_1)
    arg7 = __vaddps_ymmqq_ymmqq_memqq(arg7, var_1c0_1)
    float var_180_1[0x8] = zmm5
    float var_160_1[0x8] = arg6
    float var_140_1[0x8] = arg7
    double var_120_1[0x4] = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm2, zmm3), arg9)
    zmm2 = _mm256_broadcast_ss(arg17[1])
    zmm3 = _mm256_mul_ps(zmm0, zmm2)
    arg15 = _mm256_broadcast_ss(arg17[2])
    zmm3 = _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm1, arg15))
    arg10 = _mm256_broadcast_ss(*arg17)
    zmm1 = _mm256_mul_ps(zmm1, arg10)
    zmm0 = _mm256_mul_ps(zmm0, arg10)
    zmm0 = _mm256_sub_ps(_mm256_mul_ps(arg5, arg15), zmm0)
    zmm1 = _mm256_sub_ps(zmm1, _mm256_mul_ps(arg5, zmm2))
    zmm2 = _mm256_add_ps(zmm5, zmm3)
    zmm0 = _mm256_add_ps(arg6, zmm0)
    zmm1 = _mm256_add_ps(arg7, zmm1)
    zmm3 = _mm256_broadcast_ss(arg17[4])
    arg15 = _mm256_add_ps(zmm2, zmm3)
    zmm2 = _mm256_broadcast_ss(arg17[5])
    arg10 = _mm256_add_ps(zmm0, zmm2)
    zmm0 = _mm256_broadcast_ss(arg17[6])
    arg7 = _mm256_add_ps(zmm1, zmm0)
    arg6 = _mm256_broadcast_ss(var_740)
    zmm5 = _mm256_cmp_ps(arg6, arg15, 1)
    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    zmm0[0].o &= arg13[0].o
    zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    float var_2c0_1[0x8] = arg15
    float var_2a0_1[0x8] = arg10
    float var_280_1[0x8] = arg7
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
        var_720_3 = _mm256_maskstore_ps(zmm5, arg6)
    
    arg6 = _mm256_insertf128_ps(var_6a0_3, arg11[0].o, 1)
    arg12 = _mm256_insertf128_ps(arg14, arg14[0].o, 1)
    zmm0 = _mm256_andnot_ps(zmm5, arg8)
    
    if (_mm256_movemask_ps(zmm0) != 0)
        zmm0 = _mm256_xor_ps(zmm5, _mm256_cmp_ps(arg9, arg9, 0xf))
        zmm2 = _mm256_broadcast_ss(var_750)
        zmm1 = _mm256_cmp_ps(arg15, zmm2, 1)
        zmm3 = _mm256_and_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg8)) != 0)
            var_720_3 = _mm256_maskstore_ps(zmm3, zmm2)
        
        zmm0 = _mm256_andnot_ps(zmm1, zmm0)
        zmm1 = _mm256_and_ps(zmm0, arg8)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_720_3 = _mm256_maskstore_ps(zmm0, arg15)
    
    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg6[0].o)
    zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
    zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm1 = _mm256_broadcast_ss(temp0_7)
    zmm0 = _mm256_cmp_ps(zmm1, arg10, 1)
    zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    zmm3[0].o &= zmm5[0].o
    zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        var_700_3 = _mm256_maskstore_ps(zmm0, zmm1)
    
    zmm1 = _mm256_andnot_ps(zmm0, arg8)
    
    if (_mm256_movemask_ps(zmm1) != 0)
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm0 = _mm256_xor_ps(zmm0, _mm256_cmp_ps(zmm1, zmm1, 0xf))
        zmm2 = _mm256_broadcast_ss(temp0_12)
        zmm1 = _mm256_cmp_ps(arg10, zmm2, 1)
        zmm3 = _mm256_and_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg8)) != 0)
            var_700_3 = _mm256_maskstore_ps(zmm3, zmm2)
        
        zmm0 = _mm256_andnot_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg8)) != 0)
            var_700_3 = _mm256_maskstore_ps(zmm0, arg10)
    
    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg6[0].o)
    zmm1 = _mm256_broadcast_ss(temp0_8)
    zmm0 = _mm256_cmp_ps(zmm1, arg7, 1)
    zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    zmm3[0].o &= zmm5[0].o
    zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        var_6e0_4 = _mm256_maskstore_ps(zmm0, zmm1)
    
    int128_t var_560_1 = zmm5[0].o
    zmm2[0].o = zx.o(0)
    
    if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg8)) != 0)
        zmm0 = _mm256_xor_ps(zmm0, _mm256_cmp_ps(zmm2, zmm2, 0xf))
        zmm2 = _mm256_broadcast_ss(temp0_13)
        zmm1 = _mm256_cmp_ps(arg7, zmm2, 1)
        zmm3 = _mm256_and_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg8)) != 0)
            var_6e0_4 = _mm256_maskstore_ps(zmm3, zmm2)
        
        zmm0 = _mm256_andnot_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg8)) != 0)
            var_6e0_4 = _mm256_maskstore_ps(zmm0, arg7)
    
    float var_520_2[0x8] = arg15
    int32_t var_500
    var_500.32 = arg10
    float var_580_2[0x8] = arg7
    arg11 = var_720_3
    arg10 = var_700_3
    arg8 = _mm256_broadcast_ss(*arg1)
    zmm0 = _mm256_sub_ps(arg11, arg8)
    arg5 = _mm256_broadcast_ss(*(arg1 + 4))
    zmm1 = _mm256_sub_ps(arg10, arg5)
    arg15 = _mm256_broadcast_ss(*arg3)
    zmm0 = _mm256_div_ps(zmm0, arg15)
    zmm3 = _mm256_broadcast_ss(*(arg3 + 4))
    zmm1 = _mm256_div_ps(zmm1, zmm3)
    zmm2[0].o = arg3[1].d
    arg9 = _mm256_cvttps_epi32(zmm0)
    zmm0 = _mm256_cvttps_epi32(zmm1)
    float var_3a0_1[0x8] = zmm0
    double var_300_1[0x4] = zmm3
    float var_340_1[0x8] = arg5
    zmm0 = _mm256_add_ps(_mm256_mul_ps(zmm3, _mm256_cvtepi32_ps(zmm0)), arg5)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x20)
    arg7[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9580)
    zmm1[0].o = _mm_permute_ps(arg7[0].o, 0x55)
    zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    uint32_t var_360_1[0x8] = zmm1
    zmm1 = _mm256_add_ps(zmm1, zmm0)
    zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
    zmm3 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
    arg13 = _mm256_cmp_ps(zmm1, arg10, 1)
    zmm0[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
    arg6[0].o = var_560_1
    zmm0[0].o &= arg6[0].o
    float var_660_2[0x8] = arg12
    arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg12[0].o, arg6[0].o)
    arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0)
    arg5 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
    zmm5 = _mm256_broadcast_ss(arg1[1].d)
    zmm2 = _mm256_div_ps(_mm256_sub_ps(var_6e0_4, zmm5), arg5)
    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    char temp0_705 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
    arg12 = _mm256_cvttps_epi32(zmm2)
    float var_2e0_1[0x8] = arg15
    zmm0 = _mm256_mul_ps(arg15, _mm256_cvtepi32_ps(arg9))
    zmm2 = _mm256_mul_ps(arg5, _mm256_cvtepi32_ps(arg12))
    float var_320_1[0x8] = arg8
    arg15 = _mm256_add_ps(zmm0, arg8)
    zmm0 = _mm256_add_ps(zmm2, zmm5)
    zmm2[0].o = _mm_permute_ps(arg7[0].o, 0)
    zmm2 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
    double var_380_1[0x4] = zmm2
    zmm2 = _mm256_add_ps(zmm2, arg15)
    arg7[0].o = _mm_permute_ps(arg7[0].o, 0xaa)
    double* var_5c0
    var_5c0.32 = arg11
    arg15 = _mm256_blendv_ps(zmm3, arg9, _mm256_cmp_ps(zmm2, arg11, 1))
    arg7 = _mm256_insertf128_ps(arg7, arg7[0].o, 1)
    float var_720_4[0x8] = arg15
    double* var_5a0
    var_5a0.32 = arg10
    zmm2 = _mm256_cmp_ps(zmm1, arg10, 5)
    
    if (temp0_705 != 0)
        arg9 = var_3a0_1
    
    zmm1 = _mm256_add_ps(arg7, zmm0)
    zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    zmm0[0].o &= arg6[0].o
    zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    bool cond:1_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
    arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
    
    if (not(cond:1_1))
        zmm2 = var_3a0_1
        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg11[0].o)
        zmm3 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
    
    arg8 = _mm256_blendv_ps(zmm3, arg9, arg13)
    float var_700_4[0x8] = arg8
    arg10 = var_6e0_4
    zmm0 = _mm256_cmp_ps(zmm1, arg10, 5)
    arg13 = _mm256_cmp_ps(zmm1, arg10, 1)
    zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
    zmm1[0].o &= arg6[0].o
    zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        arg9 = arg12
    
    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    zmm1[0].o &= arg6[0].o
    zmm0[0].o &= arg14[0].o
    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
        zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg11[0].o)
        zmm3 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
    
    zmm0 = _mm256_blendv_ps(zmm3, arg9, arg13)
    zmm3 = var_2e0_1
    zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm3, _mm256_cvtepi32_ps(arg15)), var_320_1)
    arg9 = var_300_1
    zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg9, _mm256_cvtepi32_ps(arg8)), var_340_1)
    float var_6e0_5[0x8] = zmm0
    zmm0 = _mm256_add_ps(_mm256_mul_ps(arg5, _mm256_cvtepi32_ps(zmm0)), zmm5)
    zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_380_1)
    zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_360_1)
    zmm0 = _mm256_add_ps(arg7, zmm0)
    arg8 = var_5c0.32
    zmm1 = _mm256_div_ps(_mm256_sub_ps(arg8, zmm1), zmm3)
    zmm5 = var_5a0.32
    zmm2 = _mm256_div_ps(_mm256_sub_ps(zmm5, zmm2), arg9)
    zmm0 = _mm256_div_ps(_mm256_sub_ps(arg10, zmm0), arg5)
    uint32_t var_640_4[0x8] = zmm1
    double var_620_4[0x4] = zmm2
    float var_600_4[0x8] = zmm0
    zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg11[0].o)
    zmm2[0].o = zmm0[0].o & arg6[0].o
    zmm3[0].o = zmm1[0].o & arg14[0].o
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    bool cond:3_1 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o) == 0
    arg7[0].o = arg6[0].o
    
    if (not(cond:3_1))
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm1[0].o = zx.o(0)
        var_720_4 = _mm256_maskstore_ps(zmm0, zmm1)
        var_640_4 = _mm256_maskstore_ps(zmm0, zmm1)
        arg15 = var_720_4
    
    zmm0 = __vsubps_ymmqq_ymmqq_memqq(arg8, var_520_2)
    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_660_2[0].o, arg6[0].o)
    int32_t rax_108 = *arg4
    zmm1[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
    zmm3[0].o = zx.o(rax_108 - 1)
    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm3[0].o)
    arg5[0].o = zmm1[0].o & arg7[0].o
    zmm2[0].o &= zmm3[0].o
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    arg5 = var_500.32
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
        zmm2[0].o = zx.o(rax_108 - 2)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        var_720_4 = _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(zmm2, zmm2[0].o, 1))
        zmm2 = data_142fc95a0
        var_640_4 = _mm256_maskstore_ps(zmm1, zmm2)
    
    zmm3 = _mm256_sub_ps(zmm5, arg5)
    zmm1 = _mm256_mul_ps(zmm0, zmm0)
    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_660_2[0].o, arg6[0].o)
    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg5[0].o, var_700_4[0].o)
    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg5[0].o, var_700_4[4].o)
    zmm5[0].o = arg5[0].o & arg7[0].o
    zmm2[0].o &= zmm0[0].o
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        zmm0 = _mm256_insertf128_ps(zmm0, arg5[0].o, 1)
        zmm2[0].o = zx.o(0)
        var_700_4 = _mm256_maskstore_ps(zmm0, zmm2)
        var_620_4 = _mm256_maskstore_ps(zmm0, zmm2)
    
    arg5 = var_700_4
    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
    zmm0 = __vsubps_ymmqq_ymmqq_memqq(arg10, var_580_2)
    zmm1 = _mm256_add_ps(zmm1, zmm2)
    zmm2 = _mm256_mul_ps(zmm3, zmm3)
    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_660_2[0].o, arg6[0].o)
    int32_t rbx_17 = arg4[1]
    zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    arg6[0].o = zx.o(rbx_17 - 1)
    arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
    arg6[0].o = zmm3[0].o & arg7[0].o
    zmm5[0].o &= arg5[0].o
    zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
    zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
        zmm3 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
        arg5[0].o = zx.o(rbx_17 - 2)
        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
        var_700_4 = _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(arg5, arg5[0].o, 1))
        arg5 = data_142fc95a0
        var_620_4 = _mm256_maskstore_ps(zmm3, arg5)
    
    zmm1 = _mm256_add_ps(zmm1, zmm2)
    zmm0 = _mm256_mul_ps(zmm0, zmm0)
    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_660_2[0].o, arg6[0].o)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_6e0_5[0].o)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_6d0)
    zmm5[0].o = zmm3[0].o & arg7[0].o
    arg5[0].o &= zmm2[0].o
    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
        zmm3[0].o = zx.o(0)
        var_6e0_5 = _mm256_maskstore_ps(zmm2, zmm3)
        var_600_4 = _mm256_maskstore_ps(zmm2, zmm3)
    
    arg15 = var_6e0_5
    zmm0 = _mm256_add_ps(zmm1, zmm0)
    float var_580_3[0x8] = zmm0
    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_660_2[0].o, arg6[0].o)
    int32_t rbx_20 = arg4[2]
    zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
    zmm1[0].o = zx.o(rbx_20 - 1)
    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
    zmm3[0].o = zmm0[0].o & arg7[0].o
    zmm2[0].o &= zmm1[0].o
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm1[0].o = zx.o(rbx_20 - 2)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
        float var_6e0_6[0x8] = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
        zmm1 = data_142fc95a0
        var_600_4 = _mm256_maskstore_ps(zmm0, zmm1)
        arg15 = var_6e0_6
    
    zmm0[0].o = zx.o(*(arg16 + 4))
    arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    var_660_2[0].o = var_720_4[0].o
    arg5[0].o = var_720_4[4].o
    zmm3[0].o = var_700_4[0].o
    arg10[0].o = var_700_4[4].o
    arg13[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, var_660_2[0].o)
    arg14[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg10[0].o)
    var_670.o = arg7[0].o
    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
    var_520_2[0].o = zmm1[0].o
    zmm0[0].o = zx.o(*(arg16 + 8))
    zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
    var_500.o = zmm2[0].o
    zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
    var_5c0.o = zmm0[0].o
    arg12[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
    int32_t var_540_2[0x8] = zmm0
    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
    zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_660_2[0].o, zmm0[0].o)
    arg9[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
    var_660_2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
    zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_660_2[0].o, arg10[0].o)
    arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
    zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
    zmm1 = var_660_2
    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
    var_5a0.32 = zmm1
    arg7[0].o = var_560_1
    arg11 = _mm256_insertf128_ps(zmm1, arg7[0].o, 1)
    zmm2 = _mm256_and_ps(arg11, zmm2)
    int32_t temp0_876 = __vextractps_gpr32_xmmdq_immb(zmm2[0].o, 1)
    int32_t temp0_877 = __vextractps_gpr32_xmmdq_immb(zmm2[0].o, 2)
    int32_t temp0_878 = __vextractps_gpr32_xmmdq_immb(zmm2[0].o, 3)
    int32_t rsi_9 = zmm2[0].d
    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    int32_t temp0_880 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
    int32_t temp0_881 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
    int32_t temp0_882 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
    float* rcx_53 = *(arg16 + 0x10)
    zmm2[0].o = *(rcx_53 + sx.q(zmm2[0].d))
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_53 + sx.q(temp0_880)), 0x10)
    zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_53 + sx.q(temp0_881)), 0x20)
    arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_53 + sx.q(temp0_882)), 0x30)
    zmm2[0].o = *(rcx_53 + sx.q(rsi_9))
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_53 + sx.q(temp0_876)), 0x10)
    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
    zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
    arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg15[0].o)
    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
    zmm1 = _mm256_and_ps(arg11, _mm256_insertf128_ps(zmm1, arg5[0].o, 1))
    int32_t temp0_899 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1)
    int32_t temp0_900 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2)
    int32_t temp0_901 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3)
    uint32_t rdi_27 = zmm1[0]
    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    int32_t temp0_903 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
    int32_t temp0_904 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
    int32_t temp0_905 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
    uint32_t r8_5 = zmm1[0]
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_53 + sx.q(temp0_877)), 0x20)
    arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_53 + sx.q(temp0_878)), 0x30)
    zmm1[0].o = *(rcx_53 + sx.q(r8_5))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_53 + sx.q(temp0_903)), 0x10)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_660_2[0].o, zmm0[0].o)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_53 + sx.q(temp0_904)), 0x20)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
    var_660_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_53 + sx.q(temp0_905)), 0x30)
    arg5 = __vandps_ymmqq_ymmqq_memqq(arg11, var_540_2)
    var_540_2[0] = __vextractps_memd_xmmdq_immb(arg5[0].o, 1)
    zmm2[0].o = *(rcx_53 + sx.q(rdi_27))
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_53 + sx.q(temp0_899)), 0x10)
    int32_t temp0_916 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 2)
    zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
    zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg15[0].o)
    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_53 + sx.q(temp0_900)), 0x20)
    float r13_5 = arg5[0]
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_53 + sx.q(temp0_901)), 0x30)
    int32_t temp0_926 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
    zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    zmm0 = _mm256_and_ps(arg11, zmm0)
    int32_t temp0_929 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
    int32_t temp0_930 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
    int32_t rbx_25 = zmm2[0].d
    int32_t temp0_931 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    int64_t rdx_36 = sx.q(zmm2[0].d)
    int32_t temp0_933 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
    int32_t temp0_934 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
    int32_t temp0_935 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3)
    float r14_3 = zmm0[0]
    zmm0[0].o = *(rcx_53 + rdx_36)
    int64_t rdx_38 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_53 + rdx_38), 0x10)
    int32_t temp0_938 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
    int32_t temp0_939 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
    zmm2[0].o = *(rcx_53 + sx.q(r14_3))
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_53 + sx.q(temp0_938)), 0x20)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_53 + sx.q(temp0_939)), 0x30)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_53 + sx.q(temp0_933)), 0x10)
    int64_t r13_6 = sx.q(r13_5)
    int64_t r14_5 = sx.q(var_540_2[0])
    int64_t r8_7 = sx.q(temp0_916)
    int64_t rbx_26 = sx.q(rbx_25)
    int64_t rsi_12 = sx.q(temp0_929)
    int64_t rdx_41 = sx.q(temp0_930)
    int64_t r10_6 = sx.q(temp0_931)
    zmm2[0].o = *(rcx_53 + rbx_26)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_53 + rsi_12), 0x10)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_53 + rdx_41), 0x20)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_53 + r10_6), 0x30)
    int64_t rax_119 = sx.q(temp0_926)
    zmm1[0].o = *(rcx_53 + r13_6)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_53 + r14_5), 0x10)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_53 + r8_7), 0x20)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_53 + rax_119), 0x30)
    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_53 + sx.q(temp0_934)), 0x20)
    arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_53 + sx.q(temp0_935)), 0x30)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_670.o)
    arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_520_2[0].o)
    zmm2 = var_640_4
    arg10 = _mm256_add_ps(zmm1, 
        _mm256_mul_ps(zmm2, _mm256_sub_ps(_mm256_insertf128_ps(arg13, arg10[0].o, 1), zmm1)))
    int32_t* r9_4 = var_730.q
    zmm1[0].o = *(r9_4 + rcx_53 + rbx_26)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_82 + rcx_53 + rsi_12), 0x10)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_83 + rcx_53 + rdx_41), 0x20)
    arg8 = _mm256_insertf128_ps(zmm3, var_660_2[0].o, 1)
    zmm3[0].o = *(rax_80 + rcx_53 + r13_6)
    arg13[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
    arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
    zmm0 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
    arg9[0].o = arg7[0].o
    zmm0 = _mm256_mul_ps(zmm2, _mm256_sub_ps(zmm0, arg8))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_84 + rcx_53 + r10_6), 0x30)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_85 + rcx_53 + r14_5), 0x10)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_86 + rcx_53 + r8_7), 0x20)
    arg8 = _mm256_add_ps(arg8, zmm0)
    float* r12_5 = var_728.q
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r12_5 + rcx_53 + rax_119), 0x30)
    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0 = _mm256_and_ps(arg11, _mm256_insertf128_ps(zmm3, zmm0[0].o, 1))
    int64_t rax_122 = sx.q(zmm0[0])
    int32_t temp0_978 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
    int32_t temp0_979 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
    zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    arg5[0].o = *(r9_4 + sx.q(zmm3[0].d) + rcx_53)
    void* rdi_38 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)) + rcx_53
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_82 + rdi_38), 0x10)
    void* rdi_41 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)) + rcx_53
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_83 + rdi_41), 0x20)
    int32_t temp0_985 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = *(rax_80 + rax_122 + rcx_53)
    void* rax_126 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)) + rcx_53
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_84 + rax_126), 0x30)
    zmm0[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_85 + sx.q(temp0_978) + rcx_53), 0x10)
    zmm0[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_86 + sx.q(temp0_979) + rcx_53), 0x20)
    zmm0[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r12_5 + sx.q(temp0_985) + rcx_53), 0x30)
    zmm0 = _mm256_mul_ps(zmm2, _mm256_sub_ps(_mm256_insertf128_ps(zmm0, zmm3[0].o, 1), zmm1))
    zmm1 = _mm256_add_ps(zmm1, zmm0)
    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg15[0].o)
    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_5c0.o)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, var_500.o)
    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0 = _mm256_and_ps(arg11, _mm256_insertf128_ps(zmm3, zmm0[0].o, 1))
    void* rdx_49 = sx.q(zmm0[0]) + rcx_53
    int32_t temp0_1003 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
    int32_t temp0_1004 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
    int32_t temp0_1005 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
    zmm3[0].o = *(rax_80 + rdx_49)
    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    arg7[0].o = *(r9_4 + sx.q(zmm0[0]) + rcx_53)
    void* rdx_55 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)) + rcx_53
    arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_82 + rdx_55), 0x10)
    void* rdx_58 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)) + rcx_53
    arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_83 + rdx_58), 0x20)
    void* rdx_61 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)) + rcx_53
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_84 + rdx_61), 0x30)
    zmm3[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_85 + sx.q(temp0_1003) + rcx_53), 0x10)
    zmm3[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_86 + sx.q(temp0_1004) + rcx_53), 0x20)
    zmm3[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r12_5 + sx.q(temp0_1005) + rcx_53), 0x30)
    arg7 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0 = _mm256_and_ps(arg11, _mm256_insertf128_ps(zmm3, zmm0[0].o, 1))
    void* rdx_63 = sx.q(zmm0[0]) + rcx_53
    int32_t temp0_1023 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
    int32_t temp0_1024 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
    int32_t temp0_1025 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
    zmm3[0].o = *(rax_80 + rdx_63)
    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    arg5[0].o = *(r9_4 + sx.q(zmm0[0]) + rcx_53)
    int32_t temp0_1027 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
    int32_t temp0_1028 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
    int32_t temp0_1029 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_82 + sx.q(temp0_1027) + rcx_53), 0x10)
    zmm0[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_83 + sx.q(temp0_1028) + rcx_53), 0x20)
    zmm0[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_84 + sx.q(temp0_1029) + rcx_53), 0x30)
    zmm3[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_85 + sx.q(temp0_1023) + rcx_53), 0x10)
    zmm3[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_86 + sx.q(temp0_1024) + rcx_53), 0x20)
    zmm3[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r12_5 + sx.q(temp0_1025) + rcx_53), 0x30)
    zmm0 = _mm256_add_ps(arg7, 
        _mm256_mul_ps(zmm2, _mm256_sub_ps(_mm256_insertf128_ps(zmm3, zmm0[0].o, 1), arg7)))
    zmm3 = _mm256_add_ps(arg10, _mm256_mul_ps(_mm256_sub_ps(arg8, arg10), var_620_4))
    zmm0 = _mm256_add_ps(zmm3, 
        __vmulps_ymmqq_ymmqq_memqq(
            _mm256_sub_ps(_mm256_add_ps(zmm1, _mm256_mul_ps(var_620_4, _mm256_sub_ps(zmm0, zmm1))), 
                zmm3), 
            var_600_4))
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm3 = var_580_3
    zmm1 = _mm256_cmp_ps(zmm3, zmm1, 0xc)
    var_620_4[0].o = __vandps_xmmdq_xmmdq_memdq(zmm1[0].o, var_5a0.o)
    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o &= arg9[0].o
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_620_4[0].o, zmm1[0].o)
    var_620_4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(var_620_4[0].o) != 0)
        zmm2 = _mm256_rsqrt_ps(zmm3)
        zmm3 = _mm256_mul_ps(zmm2, _mm256_mul_ps(zmm3, zmm2))
        zmm2 = __vmulps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm2, _mm256_sub_ps(data_142fc9480, zmm3)), 
            data_142fc94a0)
        zmm3 = _mm256_rcp_ps(zmm2)
        zmm2 = _mm256_mul_ps(zmm3, zmm2)
        zmm2 = _mm256_add_ps(zmm0, _mm256_mul_ps(zmm3, _mm256_sub_ps(data_142fc94c0, zmm2)))
        zmm3[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
        zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
        zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
    
    rcx_54 = arg22
    zmm3 = arg6
    zmm1[0].o = arg20
    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
    zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    zmm0 = _mm256_sub_ps(zmm0, zmm1)
    zmm2 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc94e0, 1)
    zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_660_2[0].o, zmm3[0].o)
    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    zmm1[0].o &= arg9[0].o
    var_660_2[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_660_2[0].o, zmm1[0].o)
    var_660_2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(var_660_2[0].o) == 0)
        arg5 = var_4c0_2
    else
        zmm3 = _mm256_insertf128_ps(zmm3, arg9[0].o, 1)
        arg5 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_2c0_1)
        zmm5 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_2a0_1)
        arg6 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_280_1)
        arg5 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_4a0)
        zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_480)
        arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_460)
        zmm2 = _mm256_and_ps(zmm2, zmm3)
        var_4a0 = _mm256_maskstore_ps(zmm2, arg5)
        var_480 = _mm256_maskstore_ps(zmm2, zmm5)
        var_460 = _mm256_maskstore_ps(zmm2, arg6)
        zmm0 = _mm256_add_ps(var_4c0_2, zmm0)
        zmm2[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
        arg5 = _mm256_blendv_ps(var_4c0_2, zmm0, _mm256_insertf128_ps(zmm2, zmm1[0].o, 1))
    
    result = arg21

zmm1 = var_480
zmm0 = _mm256_hadd_ps(var_4a0, var_4a0)
zmm2 = var_460
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm0[0].o = zmm0[0].o f+ zmm3[0].d
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
zmm1[0].o = zmm1[0].o f+ zmm3[0].d
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
zmm1[0].o = zmm2[0].o f+ zmm1[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
zmm1[0].o = __vmovsd_xmmdq_memq(*rcx_54)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, rcx_54[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
*rcx_54 = zmm0[0]
*(rcx_54 + 4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
rcx_54[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0 = _mm256_hadd_ps(arg5, arg5)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm1[0]
zmm0[0].o = zmm0[0].o f+ *result
*result = zmm0[0]
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
