// 函数: sub_140093690
// 地址: 0x140093690
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
zmm2[0].o = arg19
arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
float var_480[0x8] = arg5
float var_4a0[0x8] = arg5
float zmm0[0x8]
zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, data_142fc9560)
uint32_t zmm1[0x8]
zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
float var_758 = zmm1[0]
float temp0_7 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float var_4c0[0x8] = arg5
float temp0_8 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float var_768 = zmm0[0]
float temp0_12 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float temp0_13 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
int32_t rcx_4 = ((arg22 s>> 0x1f u>> 0x1d) + arg22) & 0xfffffff8
uint32_t var_6f0[0x4]
int32_t* var_690
int32_t rsi
float zmm3[0x8]
float zmm5[0x8]

if (rcx_4 s<= 0)
    rsi = 0
else
    zmm0[0].o = _mm_permute_ps(zmm2[0].o, 0)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
    float var_540_1[0x8] = zmm0
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    int32_t rax_1 = 0
    rsi = 0
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    var_690 = arg4
    
    do
        float var_4e0_1[0x8] = arg5
        int64_t rcx_5 = sx.q(rax_1)
        zmm0[0].o = *(arg18 + rcx_5)
        zmm1[0].o = *(arg18 + rcx_5 + 0x10)
        zmm2[0].o = *(arg18 + rcx_5 + 0x20)
        zmm3[0].o = *(arg18 + rcx_5 + 0x30)
        arg5[0].o = *(arg18 + rcx_5 + 0x40)
        zmm5[0].o = *(arg18 + rcx_5 + 0x50)
        arg6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xec)
        arg7[0].o = _mm_permute_ps(zmm2[0].o, 0x44)
        arg8[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg7[0].o, 8)
        arg7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg5[0].o, 0xec)
        arg6[0].o = _mm_permute_ps(zmm5[0].o, 0x44)
        arg9[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg6[0].o, 8)
        arg7[0].o = _mm_permute_ps(zmm0[0].o, 0xe5)
        arg6[0].o = _mm_permute_ps(zmm1[0].o, 0xf0)
        arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg7[0].o, 1)
        arg7[0].o = _mm_permute_ps(zmm2[0].o, 0xa4)
        arg10[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg7[0].o, 8)
        arg7[0].o = _mm_permute_ps(zmm3[0].o, 0xe5)
        arg6[0].o = _mm_permute_ps(arg5[0].o, 0xf0)
        arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg7[0].o, 1)
        arg7[0].o = _mm_permute_ps(zmm5[0].o, 0xa4)
        arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg7[0].o, 8)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x4e)
        zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 2)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0xc4)
        zmm1[0].o = _mm_permute_ps(zmm3[0].o, 0x4e)
        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5[0].o, 2)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0xc4)
        zmm2 = _mm256_insertf128_ps(arg8, arg9[0].o, 1)
        zmm3 = _mm256_insertf128_ps(arg10, arg6[0].o, 1)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        double var_660_1[0x4] = zmm2
        float var_640_1[0x8] = zmm3
        float var_620_1[0x8] = zmm0
        float var_600_1[0x8] = arg12
        zmm1 = _mm256_broadcast_ss(arg17[3])
        uint32_t var_740_1[0x8] = zmm1
        uint32_t var_720_1[0x8] = zmm1
        uint32_t var_700_1[0x8] = zmm1
        uint32_t var_6e0_1[0x8] = zmm1
        arg5 = _mm256_broadcast_ss(arg17[1])
        zmm5 = _mm256_mul_ps(arg5, zmm0)
        arg6 = _mm256_broadcast_ss(arg17[2])
        arg7 = _mm256_mul_ps(arg6, zmm2)
        arg8 = _mm256_broadcast_ss(*arg17)
        arg9 = _mm256_mul_ps(arg8, zmm3)
        zmm3 = _mm256_sub_ps(zmm5, _mm256_mul_ps(arg6, zmm3))
        zmm0 = _mm256_sub_ps(arg7, _mm256_mul_ps(arg8, zmm0))
        zmm2 = _mm256_sub_ps(arg9, _mm256_mul_ps(arg5, zmm2))
        zmm3 = _mm256_add_ps(zmm3, zmm3)
        zmm0 = _mm256_add_ps(zmm0, zmm0)
        zmm2 = _mm256_add_ps(zmm2, zmm2)
        zmm5 = _mm256_mul_ps(zmm1, zmm3)
        arg7 = _mm256_mul_ps(zmm1, zmm0)
        zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_660_1)
        arg7 = __vaddps_ymmqq_ymmqq_memqq(arg7, var_640_1)
        zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm1, zmm2), var_620_1)
        arg9 = _mm256_mul_ps(zmm2, arg5)
        arg10 = _mm256_mul_ps(zmm3, arg6)
        arg11 = _mm256_mul_ps(zmm0, arg8)
        zmm0 = _mm256_add_ps(zmm5, _mm256_sub_ps(arg9, _mm256_mul_ps(zmm0, arg6)))
        zmm2 = _mm256_add_ps(arg7, _mm256_sub_ps(arg10, _mm256_mul_ps(zmm2, arg8)))
        zmm1 = _mm256_add_ps(zmm1, _mm256_sub_ps(arg11, _mm256_mul_ps(zmm3, arg5)))
        zmm3 = _mm256_broadcast_ss(arg17[4])
        arg7 = _mm256_add_ps(zmm0, zmm3)
        arg6 = _mm256_add_ps(zmm2, _mm256_broadcast_ss(arg17[5]))
        zmm5 = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg17[6]))
        float var_260_1[0x8] = arg7
        float var_240_1[0x8] = arg6
        float var_220_1[0x8] = zmm5
        zmm0 = _mm256_broadcast_ss(var_758)
        zmm1 = _mm256_cmp_ps(zmm0, arg7, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_740_1 = _mm256_maskstore_ps(zmm1, zmm0)
        
        zmm0 = _mm256_cmp_ps(arg12, arg12, 0xf)
        zmm1 = _mm256_xor_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm3 = _mm256_broadcast_ss(var_768)
            zmm2 = _mm256_cmp_ps(arg7, zmm3, 1)
            arg5 = _mm256_and_ps(zmm2, zmm1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                var_740_1 = _mm256_maskstore_ps(arg5, zmm3)
            
            zmm1 = _mm256_andnot_ps(zmm2, zmm1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_740_1 = _mm256_maskstore_ps(zmm1, arg7)
        
        zmm2 = _mm256_broadcast_ss(temp0_7)
        zmm1 = _mm256_cmp_ps(zmm2, arg6, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_720_1 = _mm256_maskstore_ps(zmm1, zmm2)
        
        zmm1 = _mm256_xor_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm3 = _mm256_broadcast_ss(temp0_12)
            zmm2 = _mm256_cmp_ps(arg6, zmm3, 1)
            arg5 = _mm256_and_ps(zmm2, zmm1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                var_720_1 = _mm256_maskstore_ps(arg5, zmm3)
            
            zmm1 = _mm256_andnot_ps(zmm2, zmm1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_720_1 = _mm256_maskstore_ps(zmm1, arg6)
        
        zmm2 = _mm256_broadcast_ss(temp0_8)
        zmm1 = _mm256_cmp_ps(zmm2, zmm5, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_700_1 = _mm256_maskstore_ps(zmm1, zmm2)
        
        zmm0 = _mm256_xor_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm2 = _mm256_broadcast_ss(temp0_13)
            zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
            zmm3 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(zmm3) != 0)
                var_700_1 = _mm256_maskstore_ps(zmm3, zmm2)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_700_1 = _mm256_maskstore_ps(zmm0, zmm5)
        
        int32_t var_580[0x4]
        var_580.32 = arg7
        float var_680_1[0x8] = arg6
        float var_6c0_1[0x8] = zmm5
        zmm5 = var_720_1
        zmm2 = var_700_1
        arg10 = _mm256_broadcast_ss(*arg1)
        zmm0 = _mm256_sub_ps(var_740_1, arg10)
        arg11 = _mm256_broadcast_ss(*(arg1 + 4))
        zmm1 = _mm256_sub_ps(zmm5, arg11)
        arg6 = _mm256_broadcast_ss(*arg3)
        zmm0 = _mm256_div_ps(zmm0, arg6)
        arg7 = _mm256_broadcast_ss(*(arg3 + 4))
        zmm1 = _mm256_div_ps(zmm1, arg7)
        arg9 = _mm256_broadcast_ss(arg1[1].d)
        int64_t var_500
        var_500.32 = zmm2
        zmm2 = _mm256_sub_ps(zmm2, arg9)
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
        int64_t var_460
        var_460.32 = arg8
        arg8 = _mm256_mul_ps(arg15, _mm256_cvtepi32_ps(arg8))
        int64_t var_3e0
        var_3e0.32 = arg10
        zmm0 = _mm256_add_ps(zmm0, arg10)
        int64_t var_400
        var_400.32 = arg11
        arg12 = _mm256_add_ps(zmm1, arg11)
        int64_t var_420
        var_420.32 = arg9
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
        int64_t var_3c0
        var_3c0.32 = var_740_1
        zmm2 = _mm256_blendv_ps(arg5, zmm3, _mm256_cmp_ps(zmm0, var_740_1, 1))
        double var_740_2[0x4] = zmm2
        zmm0 = _mm256_cmp_ps(arg8, zmm5, 1)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm3 = arg13
        
        zmm1 = _mm256_add_ps(arg12, zmm1)
        int64_t var_5a0
        var_5a0.32 = zmm5
        arg8 = _mm256_cmp_ps(arg8, zmm5, 5)
        var_740_1[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
        zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, var_740_1[0].o)
        zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
        bool cond:0_1 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o) == 0
        arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        
        if (not(cond:0_1))
            arg5[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg8[0].o)
            arg5 = _mm256_insertf128_ps(zmm5, arg5[0].o, 1)
        
        arg13 = _mm256_blendv_ps(arg5, zmm3, zmm0)
        uint32_t var_720_2[0x8] = arg13
        arg14 = var_500.32
        zmm0 = _mm256_cmp_ps(zmm1, arg14, 1)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm3 = var_460.32
        
        zmm1 = _mm256_cmp_ps(zmm1, arg14, 5)
        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            arg5 = var_460.32
            zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
            arg5 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
        
        zmm0 = _mm256_blendv_ps(arg5, zmm3, zmm0)
        zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg6, _mm256_cvtepi32_ps(zmm2)), var_3e0.32)
        zmm3 =
            __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg7, _mm256_cvtepi32_ps(arg13)), var_400.32)
        float var_700_2[0x8] = zmm0
        zmm0 =
            __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg15, _mm256_cvtepi32_ps(zmm0)), var_420.32)
        zmm1 = _mm256_add_ps(arg10, zmm1)
        zmm3 = _mm256_add_ps(arg11, zmm3)
        zmm0 = _mm256_add_ps(arg12, zmm0)
        arg9 = var_3c0.32
        zmm1 = _mm256_div_ps(_mm256_sub_ps(arg9, zmm1), arg6)
        arg5 = var_5a0.32
        zmm3 = _mm256_div_ps(_mm256_sub_ps(arg5, zmm3), arg7)
        zmm0 = _mm256_div_ps(_mm256_sub_ps(arg14, zmm0), arg15)
        uint32_t var_660_2[0x8] = zmm1
        float var_640_2[0x8] = zmm3
        float var_620_2[0x8] = zmm0
        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        bool cond:2_1 = _mm256_movemask_ps(zmm0) == 0
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        
        if (not(cond:2_1))
            var_740_2 = _mm256_maskstore_ps(zmm0, arg6)
            var_660_2 = _mm256_maskstore_ps(zmm0, arg6)
            zmm2 = var_740_2
        
        int32_t rcx_24 = *arg4
        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm1[0].o = zx.o(rcx_24 - 1)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm3 = var_580.32
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm1[0].o = zx.o(rcx_24 - 2)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            var_740_2 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
            zmm1 = data_142fc95a0
            var_660_2 = _mm256_maskstore_ps(zmm0, zmm1)
        
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg8[0].o, var_720_2[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg8[0].o, var_720_2[4].o)
        zmm0 = _mm256_sub_ps(arg9, zmm3)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_720_2 = _mm256_maskstore_ps(zmm1, arg6)
            var_640_2 = _mm256_maskstore_ps(zmm1, arg6)
        
        zmm2 = var_720_2
        zmm1 = __vsubps_ymmqq_ymmqq_memqq(arg5, var_680_1)
        zmm0 = _mm256_mul_ps(zmm0, zmm0)
        int32_t rcx_27 = arg4[1]
        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        arg5[0].o = zx.o(rcx_27 - 1)
        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
        
        if (_mm256_movemask_ps(zmm2) != 0)
            zmm3[0].o = zx.o(rcx_27 - 2)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            var_720_2 = _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
            var_640_2 = _mm256_maskstore_ps(zmm2, data_142fc95a0)
        
        zmm2 = _mm256_sub_ps(arg14, var_6c0_1)
        zmm1 = _mm256_mul_ps(zmm1, zmm1)
        arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg8[0].o, var_700_2[0].o)
        var_6c0_1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg8[0].o, var_6f0)
        zmm3 = _mm256_add_ps(zmm0, arg6)
        zmm0 = _mm256_insertf128_ps(arg5, var_6c0_1[0].o, 1)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            var_700_2 = _mm256_maskstore_ps(zmm0, arg6)
            var_620_2 = _mm256_maskstore_ps(zmm0, arg6)
        
        arg11 = var_700_2
        var_5a0.d = rsi
        zmm0 = _mm256_mul_ps(zmm2, zmm2)
        zmm1 = _mm256_add_ps(zmm3, zmm1)
        int32_t rcx_30 = arg4[2]
        zmm2[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
        zmm3[0].o = zx.o(rcx_30 - 1)
        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
        
        if (_mm256_movemask_ps(zmm2) != 0)
            zmm3[0].o = zx.o(rcx_30 - 2)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            float var_700_3[0x8] =
                _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
            zmm3 = data_142fc95a0
            var_620_2 = _mm256_maskstore_ps(zmm2, zmm3)
            arg11 = var_700_3
        
        zmm0 = _mm256_add_ps(zmm1, zmm0)
        float var_6c0_2[0x8] = zmm0
        zmm0[0].o = zx.o(*(arg16 + 4))
        arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm3[0].o = var_740_2[0].o
        arg10[0].o = var_740_2[2].o
        var_6c0_1[0].o = var_720_2[0].o
        arg6[0].o = var_720_2[4].o
        arg14[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, arg10[0].o)
        arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
        arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, var_6c0_1[0].o)
        arg15[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg6[0].o)
        zmm0[0].o = zx.o(*(arg16 + 8))
        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
        var_580 = zmm0[0].o
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
        var_680_1[0].o = zmm1[0].o
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
        arg9[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_283 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        int32_t temp0_284 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        uint32_t rsi_1 = zmm1[0]
        int32_t temp0_285 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
        float* rbx_7 = *(arg16 + 0x10)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        int64_t r15_1 = sx.q(rsi_1)
        int64_t r11_1 = sx.q(temp0_283)
        int64_t rax_6 = sx.q(temp0_284)
        int64_t r13_1 = sx.q(zmm1[0])
        int64_t r14_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        int64_t r12_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        int32_t temp0_290 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = *(rbx_7 + r13_1)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + r14_1), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + r12_1), 0x20)
        int64_t r10_1 = sx.q(temp0_290)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + r10_1), 0x30)
        zmm2[0].o = *(rbx_7 + r15_1)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_7 + r11_1), 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_7 + rax_6), 0x20)
        int64_t r9 = sx.q(temp0_285)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_7 + r9), 0x30)
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
        int32_t temp0_309 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        int32_t temp0_310 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_311 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        uint32_t r8 = zmm1[0]
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, var_6c0_1[0].o)
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_316 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        zmm2[0].o = *(rbx_7 + sx.q(r8))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_7 + sx.q(temp0_309)), 0x10)
        int32_t temp0_318 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_319 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        uint32_t rax_8 = zmm1[0]
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_7 + sx.q(temp0_310)), 0x20)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + sx.q(temp0_311)), 0x30)
        zmm2[0].o = *(rbx_7 + sx.q(rax_8))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_7 + sx.q(temp0_316)), 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_7 + sx.q(temp0_318)), 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_7 + sx.q(temp0_319)), 0x30)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        var_6c0_1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_6c0_1[0].o, zmm0[0].o)
        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, var_6c0_1[0].o)
        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
        arg7[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
        arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg11[0].o)
        arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        arg7[0].o = __vpslld_xmmdq_xmmdq_immb(arg7[0].o, 2)
        arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
        float rax_10 = arg7[0]
        int32_t temp0_336 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1)
        int32_t temp0_337 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
        int32_t temp0_338 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3)
        arg7[0].o = *(rbx_7 + sx.q(rax_10))
        int32_t temp0_339 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
        zmm2 = _mm256_sub_ps(zmm2, arg13)
        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_7 + sx.q(temp0_336)), 0x10)
        int32_t temp0_342 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_7 + sx.q(temp0_337)), 0x20)
        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_7 + sx.q(temp0_338)), 0x30)
        float rdx_7 = arg6[0]
        int32_t temp0_345 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
        arg12 = var_660_2
        zmm2 = _mm256_mul_ps(arg12, zmm2)
        arg6[0].o = *(rbx_7 + sx.q(rdx_7))
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_7 + sx.q(temp0_339)), 0x10)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_7 + sx.q(temp0_342)), 0x20)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_7 + sx.q(temp0_345)), 0x30)
        arg13 = _mm256_add_ps(arg13, zmm2)
        arg6 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, var_6c0_1[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg11[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
        int64_t rax_15 = sx.q(zmm2[0].d)
        int64_t rcx_43 = sx.q(zmm1[0])
        int32_t temp0_360 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        zmm3[0].o = *(rbx_7 + rcx_43)
        int32_t temp0_361 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_7 + sx.q(temp0_360)), 0x10)
        int32_t temp0_363 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = *(rbx_7 + rax_15)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_7 + sx.q(temp0_361)), 0x20)
        int64_t rax_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_7 + sx.q(temp0_363)), 0x30)
        int32_t temp0_367 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + rax_18), 0x10)
        int32_t temp0_369 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
        var_6c0_1[0].o = *(rbx_7 + r13_1 + 4)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + sx.q(temp0_367)), 0x20)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + sx.q(temp0_369)), 0x30)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
        arg7[0].o = *(rbx_7 + r15_1 + 4)
        zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg15[0].o, arg5[0].o)
        zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
        zmm1 = _mm256_mul_ps(arg12, _mm256_sub_ps(zmm1, arg6))
        arg8 = _mm256_add_ps(arg6, zmm1)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_6c0_1[0].o, *(rbx_7 + r14_1 + 4), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + r12_1 + 4), 0x20)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + r10_1 + 4), 0x30)
        var_6c0_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rbx_7 + r11_1 + 4), 0x10)
        var_6c0_1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(var_6c0_1[0].o, *(rbx_7 + rax_6 + 4), 0x20)
        var_6c0_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_6c0_1[0].o, *(rbx_7 + r9 + 4), 0x30)
        zmm5 = _mm256_insertf128_ps(var_6c0_1, zmm1[0].o, 1)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
        arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        uint32_t rax_22 = zmm1[0]
        int32_t temp0_389 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        int32_t temp0_390 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_391 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = *(rbx_7 + sx.q(rax_22) + 4)
        int64_t rdx_13 = sx.q(arg6[0])
        int32_t temp0_392 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
        int32_t temp0_393 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
        int32_t temp0_394 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
        arg6[0].o = *(rbx_7 + rdx_13 + 4)
        arg6[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_7 + sx.q(temp0_392) + 4), 0x10)
        arg6[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_7 + sx.q(temp0_393) + 4), 0x20)
        arg6[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rbx_7 + sx.q(temp0_394) + 4), 0x30)
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + sx.q(temp0_389) + 4), 0x10)
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + sx.q(temp0_390) + 4), 0x20)
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + sx.q(temp0_391) + 4), 0x30)
        arg7 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
        arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg11[0].o)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_680_1[0].o)
        arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_580)
        arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
        int64_t rax_27 = sx.q(zmm0[0])
        int32_t temp0_408 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_409 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_410 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = *(rbx_7 + rax_27 + 4)
        float rax_28 = arg5[0]
        int32_t temp0_411 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
        int32_t temp0_412 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
        int32_t temp0_413 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
        arg5[0].o = *(rbx_7 + sx.q(rax_28) + 4)
        arg5[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_7 + sx.q(temp0_411) + 4), 0x10)
        arg7 = _mm256_mul_ps(arg12, _mm256_sub_ps(arg7, zmm5))
        arg5[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_7 + sx.q(temp0_412) + 4), 0x20)
        arg5[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_7 + sx.q(temp0_413) + 4), 0x30)
        zmm0[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_7 + sx.q(temp0_408) + 4), 0x10)
        zmm0[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_7 + sx.q(temp0_409) + 4), 0x20)
        arg9[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_7 + sx.q(temp0_410) + 4), 0x30)
        zmm0 = _mm256_add_ps(zmm5, arg7)
        arg5 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
        int32_t temp0_428 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
        int64_t rcx_55 = sx.q(zmm1[0])
        int32_t temp0_429 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        int32_t temp0_430 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_431 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = *(rbx_7 + rcx_55 + 4)
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + sx.q(temp0_429) + 4), 0x10)
        int32_t rcx_57 = zmm2[0].d
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + sx.q(temp0_430) + 4), 0x20)
        int32_t temp0_434 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_7 + sx.q(temp0_431) + 4), 0x30)
        int32_t temp0_436 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
        zmm2[0].o = *(rbx_7 + sx.q(rcx_57) + 4)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_7 + sx.q(temp0_428) + 4), 0x10)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_7 + sx.q(temp0_434) + 4), 0x20)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_7 + sx.q(temp0_436) + 4), 0x30)
        zmm1 = _mm256_add_ps(arg5, 
            _mm256_mul_ps(arg12, _mm256_sub_ps(_mm256_insertf128_ps(zmm2, zmm1[0].o, 1), arg5)))
        zmm2 = var_640_2
        zmm3 = _mm256_add_ps(arg13, _mm256_mul_ps(_mm256_sub_ps(arg8, arg13), zmm2))
        zmm0 = _mm256_add_ps(zmm3, 
            __vmulps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(_mm256_add_ps(zmm0, _mm256_mul_ps(zmm2, _mm256_sub_ps(zmm1, zmm0))), 
                    zmm3), 
                var_620_2))
        zmm3 = var_6c0_2
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
        
        arg4 = var_690
        zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm0, var_540_1)
        zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc94e0, 1)
        
        if (_mm256_movemask_ps(zmm1) == 0)
            arg5 = var_4e0_1
        else
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_260_1)
            zmm3 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_240_1)
            arg5 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_220_1)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_4c0)
            zmm3 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_4a0)
            arg5 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_480)
            var_4c0 = _mm256_maskstore_ps(zmm1, zmm2)
            var_4a0 = _mm256_maskstore_ps(zmm1, zmm3)
            var_480 = _mm256_maskstore_ps(zmm1, arg5)
            zmm0 = _mm256_add_ps(var_4e0_1, zmm0)
            arg5 = _mm256_blendv_ps(var_4e0_1, zmm0, zmm1)
        
        rsi = var_5a0.d + 8
        rax_1 += 0x60
    while (rsi s< rcx_4)

double* rcx_68 = arg21
int32_t* result = arg20

if (rsi s< arg22)
    float var_4e0_2[0x8] = arg5
    zmm0[0].o = zx.o(rsi)
    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    arg14[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
    arg15[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
    zmm2[0].o = zx.o(arg22)
    arg12[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg15[0].o)
    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg14[0].o)
    zmm5 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
    arg11[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg15[0].o)
    zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg14[0].o)
    int32_t var_6c0_3[0x4] = zmm0[0].o
    arg8 = _mm256_insertf128_ps(zmm0, arg11[0].o, 1)
    zmm5 = _mm256_and_ps(arg8, zmm5)
    int64_t rax_39 = sx.q(zmm5[0])
    void* rsi_10 = arg18 + (rax_39 << 2)
    arg6[0].o = *(arg18 + (rax_39 << 2))
    int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
    void* r11_2 = arg18 + (r10_2 << 2)
    int64_t r14_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
    void* r13_2 = arg18 + (r14_2 << 2)
    int64_t rcx_60 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
    void* rbx_9 = arg18 + (rcx_60 << 2)
    arg7[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    int64_t rax_43 = sx.q(arg7[0])
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg18 + (r10_2 << 2)), 0x10)
    int32_t temp0_500 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1)
    arg6[0].o = *(arg18 + (rax_43 << 2))
    int64_t rdx_22 = sx.q(temp0_500)
    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg18 + (rdx_22 << 2)), 0x10)
    void* r12_2 = arg18 + (rax_43 << 2)
    void* r10_3 = arg18 + (rdx_22 << 2)
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg18 + (r14_2 << 2)), 0x20)
    int32_t temp0_503 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
    arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg18 + (rcx_60 << 2)), 0x30)
    int64_t rax_45 = sx.q(temp0_503)
    int64_t rcx_62 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg18 + (rax_45 << 2)), 0x20)
    arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg18 + (rcx_62 << 2)), 0x30)
    void* rdx_23 = arg18 + (rax_45 << 2)
    void* rdi_17 = arg18 + (rcx_62 << 2)
    arg7 = __vandps_ymmqq_ymmqq_memqq(arg8, data_142fc9520)
    arg9 = __vandps_ymmqq_ymmqq_memqq(arg8, data_142fc9540)
    zmm3[0].o = *(zx.q(arg9[0]) + rsi_10)
    uint64_t rax_47 = zx.q(arg7[0])
    arg5[0].o = *(rax_47 + rsi_10)
    zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
    zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
    zmm0[0].o = *(zx.q(zmm5[0]) + r12_2)
    uint64_t rax_49 = zx.q(zmm2[0].d)
    zmm1[0].o = *(rax_49 + r12_2)
    uint64_t rax_50 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_50 + r10_3), 0x10)
    uint64_t rax_51 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_51 + r10_3), 0x10)
    uint64_t rax_52 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_52 + rdx_23), 0x20)
    uint64_t rax_53 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_53 + rdx_23), 0x20)
    uint64_t rax_54 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_54 + rdi_17), 0x30)
    uint64_t rax_55 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_55 + rdi_17), 0x30)
    uint64_t rax_56 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_56 + r11_2), 0x10)
    uint64_t rax_57 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_57 + r11_2), 0x10)
    uint64_t rax_58 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_58 + r13_2), 0x20)
    uint64_t rax_59 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_59 + r13_2), 0x20)
    uint64_t rax_60 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_60 + rbx_9), 0x30)
    uint64_t rax_61 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
    int32_t var_748
    var_748.q = rax_61
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_61 + rbx_9), 0x30)
    arg5 = _mm256_insertf128_ps(arg13, arg6[0].o, 1)
    zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
    float var_200_1[0x8] = arg5
    uint32_t var_1e0_1[0x8] = zmm1
    float var_1c0_1[0x8] = zmm0
    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
    zmm2 = _mm256_broadcast_ss(arg17[3])
    double var_740_3[0x4] = zmm2
    double var_720_3[0x4] = zmm2
    double var_700_4[0x4] = zmm2
    double var_6e0_2[0x4] = zmm2
    zmm3 = _mm256_broadcast_ss(arg17[1])
    zmm5 = _mm256_mul_ps(zmm0, zmm3)
    arg6 = _mm256_broadcast_ss(arg17[2])
    arg7 = _mm256_mul_ps(arg5, arg6)
    arg13 = _mm256_broadcast_ss(*arg17)
    arg6 = _mm256_mul_ps(zmm1, arg6)
    zmm1 = _mm256_mul_ps(zmm1, arg13)
    zmm5 = _mm256_sub_ps(zmm5, arg6)
    arg6 = _mm256_mul_ps(zmm2, arg9)
    zmm0 = _mm256_sub_ps(arg7, _mm256_mul_ps(zmm0, arg13))
    zmm1 = _mm256_sub_ps(zmm1, _mm256_mul_ps(arg5, zmm3))
    zmm3 = _mm256_sub_ps(arg6, arg6)
    arg5 = _mm256_add_ps(zmm5, zmm5)
    zmm0 = _mm256_add_ps(zmm0, zmm0)
    zmm1 = _mm256_add_ps(zmm1, zmm1)
    zmm3 = _mm256_add_ps(zmm3, zmm3)
    float var_660_3[0x8] = arg5
    float var_640_3[0x8] = zmm0
    uint32_t var_620_3[0x8] = zmm1
    float var_600_2[0x8] = zmm3
    zmm5 = _mm256_mul_ps(zmm2, arg5)
    arg6 = _mm256_mul_ps(zmm2, zmm0)
    arg7 = _mm256_mul_ps(zmm2, zmm1)
    zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_200_1)
    arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_1e0_1)
    arg7 = __vaddps_ymmqq_ymmqq_memqq(arg7, var_1c0_1)
    float var_180_1[0x8] = zmm5
    float var_160_1[0x8] = arg6
    float var_140_1[0x8] = arg7
    double var_120_1[0x4] = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm2, zmm3), arg9)
    zmm2 = _mm256_broadcast_ss(arg17[1])
    zmm3 = _mm256_mul_ps(zmm1, zmm2)
    arg13 = _mm256_broadcast_ss(arg17[2])
    zmm3 = _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm0, arg13))
    arg10 = _mm256_broadcast_ss(*arg17)
    zmm0 = _mm256_mul_ps(zmm0, arg10)
    zmm1 = _mm256_mul_ps(zmm1, arg10)
    zmm1 = _mm256_sub_ps(_mm256_mul_ps(arg5, arg13), zmm1)
    zmm0 = _mm256_sub_ps(zmm0, _mm256_mul_ps(arg5, zmm2))
    zmm2 = _mm256_add_ps(zmm5, zmm3)
    zmm1 = _mm256_add_ps(arg6, zmm1)
    zmm0 = _mm256_add_ps(arg7, zmm0)
    zmm3 = _mm256_broadcast_ss(arg17[4])
    arg13 = _mm256_add_ps(zmm2, zmm3)
    zmm2 = _mm256_broadcast_ss(arg17[5])
    arg10 = _mm256_add_ps(zmm1, zmm2)
    zmm1 = _mm256_broadcast_ss(arg17[6])
    arg7 = _mm256_add_ps(zmm0, zmm1)
    arg6 = _mm256_broadcast_ss(var_758)
    zmm5 = _mm256_cmp_ps(arg6, arg13, 1)
    zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    zmm0[0].o &= arg11[0].o
    zmm1[0].o = __vandps_xmmdq_xmmdq_memdq(zmm5[0].o, var_6c0_3)
    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    uint32_t var_2c0_1[0x8] = arg13
    float var_2a0_1[0x8] = arg10
    float var_280_1[0x8] = arg7
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
        var_740_3 = _mm256_maskstore_ps(zmm5, arg6)
    
    arg6 = _mm256_insertf128_ps(arg14, arg15[0].o, 1)
    arg12 = _mm256_insertf128_ps(arg12, arg12[0].o, 1)
    zmm0 = _mm256_andnot_ps(zmm5, arg8)
    
    if (_mm256_movemask_ps(zmm0) != 0)
        zmm0 = _mm256_xor_ps(zmm5, _mm256_cmp_ps(arg9, arg9, 0xf))
        zmm2 = _mm256_broadcast_ss(var_768)
        zmm1 = _mm256_cmp_ps(arg13, zmm2, 1)
        zmm3 = _mm256_and_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg8)) != 0)
            var_740_3 = _mm256_maskstore_ps(zmm3, zmm2)
        
        zmm0 = _mm256_andnot_ps(zmm1, zmm0)
        zmm1 = _mm256_and_ps(zmm0, arg8)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_740_3 = _mm256_maskstore_ps(zmm0, arg13)
    
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
        var_720_3 = _mm256_maskstore_ps(zmm0, zmm1)
    
    zmm1 = _mm256_andnot_ps(zmm0, arg8)
    
    if (_mm256_movemask_ps(zmm1) != 0)
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm0 = _mm256_xor_ps(zmm0, _mm256_cmp_ps(zmm1, zmm1, 0xf))
        zmm2 = _mm256_broadcast_ss(temp0_12)
        zmm1 = _mm256_cmp_ps(arg10, zmm2, 1)
        zmm3 = _mm256_and_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg8)) != 0)
            var_720_3 = _mm256_maskstore_ps(zmm3, zmm2)
        
        zmm0 = _mm256_andnot_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg8)) != 0)
            var_720_3 = _mm256_maskstore_ps(zmm0, arg10)
    
    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg6[0].o)
    zmm1 = _mm256_broadcast_ss(temp0_8)
    zmm0 = _mm256_cmp_ps(zmm1, arg7, 1)
    zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    zmm3[0].o &= zmm5[0].o
    zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        var_700_4 = _mm256_maskstore_ps(zmm0, zmm1)
    
    int128_t var_580_1 = zmm5[0].o
    zmm2[0].o = zx.o(0)
    
    if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg8)) != 0)
        zmm0 = _mm256_xor_ps(zmm0, _mm256_cmp_ps(zmm2, zmm2, 0xf))
        zmm2 = _mm256_broadcast_ss(temp0_13)
        zmm1 = _mm256_cmp_ps(arg7, zmm2, 1)
        zmm3 = _mm256_and_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg8)) != 0)
            var_700_4 = _mm256_maskstore_ps(zmm3, zmm2)
        
        zmm0 = _mm256_andnot_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg8)) != 0)
            var_700_4 = _mm256_maskstore_ps(zmm0, arg7)
    
    uint32_t var_440_1[0x8] = arg13
    float var_540_2[0x8] = arg10
    int32_t var_520
    var_520.32 = arg7
    arg11 = var_740_3
    arg10 = var_720_3
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
    float var_300_1[0x8] = zmm3
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
    arg6[0].o = var_580_1
    zmm0[0].o &= arg6[0].o
    float var_680_2[0x8] = arg12
    arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg12[0].o, arg6[0].o)
    arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0)
    arg5 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
    zmm5 = _mm256_broadcast_ss(arg1[1].d)
    zmm2 = _mm256_div_ps(_mm256_sub_ps(var_700_4, zmm5), arg5)
    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    char temp0_697 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
    arg12 = _mm256_cvttps_epi32(zmm2)
    float var_2e0_1[0x8] = arg15
    zmm0 = _mm256_mul_ps(arg15, _mm256_cvtepi32_ps(arg9))
    zmm2 = _mm256_mul_ps(arg5, _mm256_cvtepi32_ps(arg12))
    double var_320_1[0x4] = arg8
    arg15 = _mm256_add_ps(zmm0, arg8)
    zmm0 = _mm256_add_ps(zmm2, zmm5)
    zmm2[0].o = _mm_permute_ps(arg7[0].o, 0)
    zmm2 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
    double var_380_1[0x4] = zmm2
    zmm2 = _mm256_add_ps(zmm2, arg15)
    arg7[0].o = _mm_permute_ps(arg7[0].o, 0xaa)
    double* var_5e0
    var_5e0.32 = arg11
    arg15 = _mm256_blendv_ps(zmm3, arg9, _mm256_cmp_ps(zmm2, arg11, 1))
    arg7 = _mm256_insertf128_ps(arg7, arg7[0].o, 1)
    float var_740_4[0x8] = arg15
    double* var_5c0
    var_5c0.32 = arg10
    zmm2 = _mm256_cmp_ps(zmm1, arg10, 5)
    
    if (temp0_697 != 0)
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
    double var_720_4[0x4] = arg8
    arg10 = var_700_4
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
    zmm1 =
        __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(var_2e0_1, _mm256_cvtepi32_ps(arg15)), var_320_1)
    arg9 = var_300_1
    zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg9, _mm256_cvtepi32_ps(arg8)), var_340_1)
    float var_700_5[0x8] = zmm0
    zmm0 = _mm256_add_ps(_mm256_mul_ps(arg5, _mm256_cvtepi32_ps(zmm0)), zmm5)
    zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_380_1)
    zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_360_1)
    zmm0 = _mm256_add_ps(arg7, zmm0)
    arg8 = var_5e0.32
    zmm1 = _mm256_div_ps(_mm256_sub_ps(arg8, zmm1), var_2e0_1)
    zmm5 = var_5c0.32
    zmm2 = _mm256_div_ps(_mm256_sub_ps(zmm5, zmm2), arg9)
    zmm0 = _mm256_div_ps(_mm256_sub_ps(arg10, zmm0), arg5)
    uint32_t var_660_4[0x8] = zmm1
    double var_640_4[0x4] = zmm2
    float var_620_4[0x8] = zmm0
    zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg11[0].o)
    zmm2[0].o = zmm0[0].o & arg6[0].o
    var_2e0_1[0].o = zmm1[0].o & arg14[0].o
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_2e0_1[0].o, zmm2[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    bool cond:3_1 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o) == 0
    arg7[0].o = arg6[0].o
    
    if (not(cond:3_1))
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm1[0].o = zx.o(0)
        var_740_4 = _mm256_maskstore_ps(zmm0, zmm1)
        var_660_4 = _mm256_maskstore_ps(zmm0, zmm1)
        arg15 = var_740_4
    
    zmm0 = __vsubps_ymmqq_ymmqq_memqq(arg8, var_440_1)
    arg8 = var_680_2
    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
    int32_t rax_81 = *arg4
    zmm1[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
    var_2e0_1[0].o = zx.o(rax_81 - 1)
    var_2e0_1[0].o = __vpshufd_xmmdq_xmmdq_immb(var_2e0_1[0].o, 0)
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_2e0_1[0].o)
    var_2e0_1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, var_2e0_1[0].o)
    arg5[0].o = zmm1[0].o & arg7[0].o
    zmm2[0].o &= var_2e0_1[0].o
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        zmm1 = _mm256_insertf128_ps(var_2e0_1, zmm1[0].o, 1)
        zmm2[0].o = zx.o(rax_81 - 2)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        var_740_4 = _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(zmm2, zmm2[0].o, 1))
        zmm2 = data_142fc95a0
        var_660_4 = _mm256_maskstore_ps(zmm1, zmm2)
    
    zmm3 = _mm256_sub_ps(zmm5, var_540_2)
    zmm1 = _mm256_mul_ps(zmm0, zmm0)
    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
    var_540_2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_540_2[0].o, var_540_2[0].o)
    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_540_2[0].o, var_720_4[0].o)
    var_540_2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_540_2[0].o, var_720_4[2].o)
    zmm5[0].o = var_540_2[0].o & arg7[0].o
    zmm2[0].o &= zmm0[0].o
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        zmm0 = _mm256_insertf128_ps(zmm0, var_540_2[0].o, 1)
        zmm2[0].o = zx.o(0)
        var_720_4 = _mm256_maskstore_ps(zmm0, zmm2)
        var_640_4 = _mm256_maskstore_ps(zmm0, zmm2)
    
    arg5 = var_720_4
    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
    zmm0 = __vsubps_ymmqq_ymmqq_memqq(arg10, var_520.32)
    zmm1 = _mm256_add_ps(zmm1, zmm2)
    zmm2 = _mm256_mul_ps(zmm3, zmm3)
    zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
    int32_t rbx_11 = arg4[1]
    zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    arg6[0].o = zx.o(rbx_11 - 1)
    arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0].o, 0)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
    arg6[0].o = zmm3[0].o & arg7[0].o
    zmm5[0].o &= arg5[0].o
    zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
    zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
        zmm3 = _mm256_insertf128_ps(arg5, zmm3[0].o, 1)
        arg5[0].o = zx.o(rbx_11 - 2)
        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
        var_720_4 = _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(arg5, arg5[0].o, 1))
        arg5 = data_142fc95a0
        var_640_4 = _mm256_maskstore_ps(zmm3, arg5)
    
    zmm1 = _mm256_add_ps(zmm1, zmm2)
    zmm0 = _mm256_mul_ps(zmm0, zmm0)
    arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_700_5[0].o)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_6f0)
    zmm5[0].o = zmm3[0].o & arg7[0].o
    arg5[0].o &= zmm2[0].o
    arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
        zmm3[0].o = zx.o(0)
        var_700_5 = _mm256_maskstore_ps(zmm2, zmm3)
        var_620_4 = _mm256_maskstore_ps(zmm2, zmm3)
    
    arg15 = var_700_5
    zmm0 = _mm256_add_ps(zmm1, zmm0)
    var_5c0.32 = zmm0
    zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
    int32_t rbx_14 = arg4[2]
    zmm0[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
    zmm1[0].o = zx.o(rbx_14 - 1)
    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm1[0].o)
    zmm3[0].o = zmm0[0].o & arg7[0].o
    zmm2[0].o &= zmm1[0].o
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm1[0].o = zx.o(rbx_14 - 2)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
        float var_700_6[0x8] = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
        zmm1 = data_142fc95a0
        var_620_4 = _mm256_maskstore_ps(zmm0, zmm1)
        arg15 = var_700_6
    
    zmm0[0].o = zx.o(*(arg16 + 4))
    arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    arg8[0].o = var_740_4[0].o
    arg5[0].o = var_740_4[4].o
    zmm3[0].o = var_720_4[0].o
    arg10[0].o = var_720_4[2].o
    arg13[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
    arg14[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
    arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg10[0].o)
    var_440_1[0].o = arg7[0].o
    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
    var_690.o = zmm1[0].o
    zmm0[0].o = zx.o(*(arg16 + 8))
    zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
    zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
    var_540_2[0].o = zmm2[0].o
    zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm5[0].o)
    var_520.o = zmm0[0].o
    arg12[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
    int32_t var_560_2[0x8] = zmm0
    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
    zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
    arg9[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
    arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
    zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg10[0].o)
    arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
    zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg15[0].o)
    zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
    zmm2 = _mm256_insertf128_ps(zmm2, arg5[0].o, 1)
    zmm1 = var_680_2
    zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
    var_5e0.32 = zmm1
    arg7[0].o = var_580_1
    arg11 = _mm256_insertf128_ps(zmm1, arg7[0].o, 1)
    zmm2 = _mm256_and_ps(arg11, zmm2)
    int32_t temp0_868 = __vextractps_gpr32_xmmdq_immb(zmm2[0].o, 1)
    int32_t temp0_869 = __vextractps_gpr32_xmmdq_immb(zmm2[0].o, 2)
    int32_t temp0_870 = __vextractps_gpr32_xmmdq_immb(zmm2[0].o, 3)
    int32_t rsi_11 = zmm2[0].d
    zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    int32_t temp0_872 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
    int32_t temp0_873 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
    int32_t temp0_874 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
    float* rcx_67 = *(arg16 + 0x10)
    zmm2[0].o = *(rcx_67 + sx.q(zmm2[0].d))
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_67 + sx.q(temp0_872)), 0x10)
    zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_67 + sx.q(temp0_873)), 0x20)
    arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_67 + sx.q(temp0_874)), 0x30)
    zmm2[0].o = *(rcx_67 + sx.q(rsi_11))
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_67 + sx.q(temp0_868)), 0x10)
    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm0[0].o)
    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
    zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
    arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg12[0].o)
    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg15[0].o)
    zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
    arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
    zmm1 = _mm256_and_ps(arg11, _mm256_insertf128_ps(zmm1, arg5[0].o, 1))
    int32_t temp0_891 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1)
    int32_t temp0_892 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2)
    int32_t temp0_893 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 3)
    uint32_t rax_87 = zmm1[0]
    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    int32_t temp0_895 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
    int32_t temp0_896 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
    int32_t temp0_897 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
    uint32_t r12_3 = zmm1[0]
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_67 + sx.q(temp0_869)), 0x20)
    arg13[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_67 + sx.q(temp0_870)), 0x30)
    zmm1[0].o = *(rcx_67 + sx.q(r12_3))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_67 + sx.q(temp0_895)), 0x10)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_67 + sx.q(temp0_896)), 0x20)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
    arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_67 + sx.q(temp0_897)), 0x30)
    arg5 = __vandps_ymmqq_ymmqq_memqq(arg11, var_560_2)
    var_560_2[0] = __vextractps_memd_xmmdq_immb(arg5[0].o, 1)
    zmm2[0].o = *(rcx_67 + sx.q(rax_87))
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_67 + sx.q(temp0_891)), 0x10)
    int32_t temp0_908 = __vextractps_gpr32_xmmdq_immb(arg5[0].o, 2)
    zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
    zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg15[0].o)
    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_67 + sx.q(temp0_892)), 0x20)
    float r12_4 = arg5[0]
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_67 + sx.q(temp0_893)), 0x30)
    int32_t temp0_918 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
    zmm2[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    zmm0 = _mm256_and_ps(arg11, zmm0)
    int32_t temp0_921 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
    int32_t temp0_922 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
    int32_t rbx_22 = zmm2[0].d
    int32_t temp0_923 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
    zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    int64_t rdx_31 = sx.q(zmm2[0].d)
    int32_t temp0_925 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
    int32_t temp0_926 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
    int32_t temp0_927 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3)
    float r14_3 = zmm0[0]
    zmm0[0].o = *(rcx_67 + rdx_31)
    int64_t rdx_33 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_67 + rdx_33), 0x10)
    int32_t temp0_930 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
    int32_t temp0_931 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
    zmm2[0].o = *(rcx_67 + sx.q(r14_3))
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_67 + sx.q(temp0_930)), 0x20)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_67 + sx.q(temp0_931)), 0x30)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_67 + sx.q(temp0_925)), 0x10)
    int64_t r12_5 = sx.q(r12_4)
    int64_t r14_5 = sx.q(var_560_2[0])
    int64_t r8_6 = sx.q(temp0_908)
    int64_t rbx_23 = sx.q(rbx_22)
    int64_t rdx_36 = sx.q(temp0_921)
    int64_t rax_91 = sx.q(temp0_922)
    int64_t r10_6 = sx.q(temp0_923)
    zmm2[0].o = *(rcx_67 + rbx_23)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_67 + rdx_36), 0x10)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_67 + rax_91), 0x20)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_67 + r10_6), 0x30)
    int64_t rdi_26 = sx.q(temp0_918)
    zmm1[0].o = *(rcx_67 + r12_5)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_67 + r14_5), 0x10)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_67 + r8_6), 0x20)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_67 + rdi_26), 0x30)
    zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_67 + sx.q(temp0_926)), 0x20)
    arg9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_67 + sx.q(temp0_927)), 0x30)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_440_1[0].o)
    arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_690.o)
    zmm2 = var_660_4
    arg10 = _mm256_add_ps(zmm1, 
        _mm256_mul_ps(zmm2, _mm256_sub_ps(_mm256_insertf128_ps(arg13, arg10[0].o, 1), zmm1)))
    zmm1[0].o = *(rax_49 + rcx_67 + rbx_23)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_51 + rcx_67 + rdx_36), 0x10)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_53 + rcx_67 + rax_91), 0x20)
    arg8 = _mm256_insertf128_ps(zmm3, arg8[0].o, 1)
    zmm3[0].o = *(rax_47 + rcx_67 + r12_5)
    arg13[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
    arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
    zmm0 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
    arg9[0].o = arg7[0].o
    zmm0 = _mm256_mul_ps(zmm2, _mm256_sub_ps(zmm0, arg8))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_55 + rcx_67 + r10_6), 0x30)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_57 + rcx_67 + r14_5), 0x10)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_59 + rcx_67 + r8_6), 0x20)
    arg8 = _mm256_add_ps(arg8, zmm0)
    float* r12_6 = var_748.q
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r12_6 + rcx_67 + rdi_26), 0x30)
    zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg15[0].o)
    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0 = _mm256_and_ps(arg11, _mm256_insertf128_ps(zmm3, zmm0[0].o, 1))
    int64_t rax_96 = sx.q(zmm0[0])
    int32_t temp0_970 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
    int32_t temp0_971 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
    zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    arg5[0].o = *(rax_49 + sx.q(zmm3[0]) + rcx_67)
    void* rdi_33 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)) + rcx_67
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_51 + rdi_33), 0x10)
    void* rdi_36 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)) + rcx_67
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_53 + rdi_36), 0x20)
    int32_t temp0_977 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = *(rax_47 + rax_96 + rcx_67)
    void* rax_100 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)) + rcx_67
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_55 + rax_100), 0x30)
    zmm0[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_57 + sx.q(temp0_970) + rcx_67), 0x10)
    zmm0[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_59 + sx.q(temp0_971) + rcx_67), 0x20)
    zmm0[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r12_6 + sx.q(temp0_977) + rcx_67), 0x30)
    zmm0 = _mm256_mul_ps(zmm2, _mm256_sub_ps(_mm256_insertf128_ps(zmm0, zmm3[0].o, 1), zmm1))
    zmm1 = _mm256_add_ps(zmm1, zmm0)
    arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg15[0].o)
    zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_520.o)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg5[0].o, var_540_2[0].o)
    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0 = _mm256_and_ps(arg11, _mm256_insertf128_ps(zmm3, zmm0[0].o, 1))
    void* rdx_43 = sx.q(zmm0[0]) + rcx_67
    int32_t temp0_995 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
    int32_t temp0_996 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
    int32_t temp0_997 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
    zmm3[0].o = *(rax_47 + rdx_43)
    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    arg7[0].o = *(rax_49 + sx.q(zmm0[0]) + rcx_67)
    void* rdx_49 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)) + rcx_67
    arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_51 + rdx_49), 0x10)
    void* rdx_52 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)) + rcx_67
    arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_53 + rdx_52), 0x20)
    void* rdx_55 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)) + rcx_67
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, *(rax_55 + rdx_55), 0x30)
    zmm3[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_57 + sx.q(temp0_995) + rcx_67), 0x10)
    zmm3[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_59 + sx.q(temp0_996) + rcx_67), 0x20)
    zmm3[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r12_6 + sx.q(temp0_997) + rcx_67), 0x30)
    arg7 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg13[0].o)
    zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
    zmm0 = _mm256_and_ps(arg11, _mm256_insertf128_ps(zmm3, zmm0[0].o, 1))
    void* rdx_57 = sx.q(zmm0[0]) + rcx_67
    int32_t temp0_1015 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
    int32_t temp0_1016 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
    int32_t temp0_1017 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
    zmm3[0].o = *(rax_47 + rdx_57)
    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    arg5[0].o = *(rax_49 + sx.q(zmm0[0]) + rcx_67)
    int32_t temp0_1019 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
    int32_t temp0_1020 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
    int32_t temp0_1021 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_51 + sx.q(temp0_1019) + rcx_67), 0x10)
    zmm0[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_53 + sx.q(temp0_1020) + rcx_67), 0x20)
    zmm0[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_55 + sx.q(temp0_1021) + rcx_67), 0x30)
    zmm3[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_57 + sx.q(temp0_1015) + rcx_67), 0x10)
    zmm3[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_59 + sx.q(temp0_1016) + rcx_67), 0x20)
    zmm3[0].o =
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r12_6 + sx.q(temp0_1017) + rcx_67), 0x30)
    zmm0 = _mm256_add_ps(arg7, 
        _mm256_mul_ps(zmm2, _mm256_sub_ps(_mm256_insertf128_ps(zmm3, zmm0[0].o, 1), arg7)))
    zmm3 = _mm256_add_ps(arg10, _mm256_mul_ps(_mm256_sub_ps(arg8, arg10), var_640_4))
    zmm0 = _mm256_add_ps(zmm3, 
        __vmulps_ymmqq_ymmqq_memqq(
            _mm256_sub_ps(_mm256_add_ps(zmm1, _mm256_mul_ps(var_640_4, _mm256_sub_ps(zmm0, zmm1))), 
                zmm3), 
            var_620_4))
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm3 = var_5c0.32
    zmm1 = _mm256_cmp_ps(zmm3, zmm1, 0xc)
    var_640_4[0].o = __vandps_xmmdq_xmmdq_memdq(zmm1[0].o, var_5e0.o)
    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o &= arg9[0].o
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_640_4[0].o, zmm1[0].o)
    var_640_4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(var_640_4[0].o) != 0)
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
    
    rcx_68 = arg21
    zmm3 = arg6
    zmm1[0].o = arg19
    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
    zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
    zmm0 = _mm256_sub_ps(zmm0, zmm1)
    zmm2 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc94e0, 1)
    zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_680_2[0].o, zmm3[0].o)
    zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    zmm1[0].o &= arg9[0].o
    var_680_2[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_680_2[0].o, zmm1[0].o)
    var_680_2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(var_680_2[0].o) == 0)
        arg5 = var_4e0_2
    else
        zmm3 = _mm256_insertf128_ps(zmm3, arg9[0].o, 1)
        arg5 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_2c0_1)
        zmm5 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_2a0_1)
        arg6 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_280_1)
        arg5 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_4c0)
        zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_4a0)
        arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_480)
        zmm2 = _mm256_and_ps(zmm2, zmm3)
        var_4c0 = _mm256_maskstore_ps(zmm2, arg5)
        var_4a0 = _mm256_maskstore_ps(zmm2, zmm5)
        var_480 = _mm256_maskstore_ps(zmm2, arg6)
        zmm0 = _mm256_add_ps(var_4e0_2, zmm0)
        zmm2[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
        zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
        arg5 = _mm256_blendv_ps(var_4e0_2, zmm0, _mm256_insertf128_ps(zmm2, zmm1[0].o, 1))
    
    result = arg20

zmm1 = var_4a0
zmm0 = _mm256_hadd_ps(var_4c0, var_4c0)
zmm2 = var_480
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
zmm1[0].o = __vmovsd_xmmdq_memq(*rcx_68)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, rcx_68[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
*rcx_68 = zmm0[0]
*(rcx_68 + 4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
rcx_68[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
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
