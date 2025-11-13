// 函数: sub_140082630
// 地址: 0x140082630
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
double* r12 = arg1
float zmm1[0x8] = *arg21
float zmm0[0x8]
zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, data_142fc9560)
int32_t temp0_3 = _mm256_movemask_ps(zmm1)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
float zmm2[0x8]
zmm2[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
float zmm3[0x8]
zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
int32_t* var_6d0 = arg4
double* var_660 = r12
int32_t result
int128_t var_750
double* var_640
int32_t var_5a0
int64_t var_560
float var_540[0x8]
int64_t var_520
int64_t var_500
double var_4e0[0x4]
int64_t var_480
int64_t var_360
int64_t var_340
float zmm4[0x8]
float zmm5[0x8]

if (temp0_3 != 0xff)
    float var_6b0_1 = zmm1[0]
    float var_6ac_1 = zmm2[0]
    float var_6a8_1 = zmm3[0]
    zmm1[0].o = __vmovsd_xmmdq_memq(*r12)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, r12[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_6c0_1 = zmm0[0]
    float temp0_474 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_475 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t r8_17 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
    int64_t rsi_15
    
    if (r8_17 s<= 0)
        result = 0
        rsi_15 = 0
    else
        rsi_15 = 0
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        result = 0
        var_5a0 = r8_17
        
        while (true)
            bool cond:3_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:3_1))
                int64_t rax_38 = sx.q((rsi_15 << 2).d * 3)
                zmm0[0].o = *(arg17 + rax_38)
                zmm1[0].o = *(arg17 + rax_38 + 0x10)
                zmm2[0].o = *(arg17 + rax_38 + 0x20)
                zmm3[0].o = *(arg17 + rax_38 + 0x30)
                zmm4[0].o = *(arg17 + rax_38 + 0x40)
                zmm5[0].o = *(arg17 + rax_38 + 0x50)
                arg5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xec)
                arg6[0].o = _mm_permute_ps(zmm2[0].o, 0x44)
                arg7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 8)
                arg6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0xec)
                arg5[0].o = _mm_permute_ps(zmm5[0].o, 0x44)
                arg8[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg5[0].o, 8)
                arg6[0].o = _mm_permute_ps(zmm0[0].o, 0xe5)
                arg5[0].o = _mm_permute_ps(zmm1[0].o, 0xf0)
                arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 1)
                arg6[0].o = _mm_permute_ps(zmm2[0].o, 0xa4)
                arg9[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 8)
                arg6[0].o = _mm_permute_ps(zmm3[0].o, 0xe5)
                arg5[0].o = _mm_permute_ps(zmm4[0].o, 0xf0)
                arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 1)
                arg6[0].o = _mm_permute_ps(zmm5[0].o, 0xa4)
                arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 8)
                zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x4e)
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 2)
                zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0xc4)
                zmm1[0].o = _mm_permute_ps(zmm3[0].o, 0x4e)
                zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4[0].o, 2)
                zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0xc4)
                zmm2 = _mm256_insertf128_ps(arg7, arg8[0].o, 1)
                zmm3 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
                zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                float var_620_3[0x8] = zmm2
                float var_600_3[0x8] = zmm3
                float var_5e0_3[0x8] = zmm0
                float var_5c0_2[0x8] = arg11
                zmm1 = _mm256_broadcast_ss(arg16[3])
                float var_760_3[0x8] = zmm1
                float var_740_3[0x8] = zmm1
                float var_720_4[0x8] = zmm1
                float var_700_2[0x8] = zmm1
                zmm5 = _mm256_broadcast_ss(arg16[1])
                zmm4 = _mm256_mul_ps(zmm5, zmm0)
                arg5 = _mm256_broadcast_ss(arg16[2])
                arg6 = _mm256_mul_ps(arg5, zmm2)
                arg7 = _mm256_broadcast_ss(*arg16)
                arg8 = _mm256_mul_ps(arg7, zmm3)
                zmm3 = _mm256_sub_ps(zmm4, _mm256_mul_ps(arg5, zmm3))
                zmm0 = _mm256_sub_ps(arg6, _mm256_mul_ps(arg7, zmm0))
                zmm2 = _mm256_sub_ps(arg8, _mm256_mul_ps(zmm5, zmm2))
                zmm3 = _mm256_add_ps(zmm3, zmm3)
                zmm4 = _mm256_add_ps(zmm0, zmm0)
                zmm2 = _mm256_add_ps(zmm2, zmm2)
                zmm0 = _mm256_mul_ps(zmm1, zmm3)
                arg6 = _mm256_mul_ps(zmm1, zmm4)
                zmm1 = _mm256_mul_ps(zmm1, zmm2)
                arg8 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_620_3)
                arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_600_3)
                zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_5e0_3)
                arg9 = _mm256_mul_ps(zmm2, zmm5)
                arg10 = _mm256_mul_ps(zmm3, arg5)
                zmm0 = _mm256_mul_ps(zmm4, arg7)
                arg5 = _mm256_add_ps(arg8, _mm256_sub_ps(arg9, _mm256_mul_ps(zmm4, arg5)))
                zmm4 = _mm256_add_ps(arg6, _mm256_sub_ps(arg10, _mm256_mul_ps(zmm2, arg7)))
                zmm3 = _mm256_mul_ps(zmm3, zmm5)
                arg8 = _mm256_add_ps(arg5, _mm256_broadcast_ss(arg16[4]))
                zmm5 = _mm256_broadcast_ss(arg16[5])
                zmm2 = _mm256_broadcast_ss(arg16[6])
                arg6 = _mm256_broadcast_ss(var_6b0_1)
                arg5 = _mm256_cmp_ps(arg6, arg8, 1)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_760_3 = _mm256_maskstore_ps(arg5, arg6)
                
                zmm3 = _mm256_sub_ps(zmm0, zmm3)
                arg7 = _mm256_add_ps(zmm4, zmm5)
                zmm0 = _mm256_cmp_ps(arg11, arg11, 0xf)
                zmm4 = _mm256_xor_ps(arg5, zmm0)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    arg5 = _mm256_broadcast_ss(var_6c0_1)
                    zmm5 = _mm256_cmp_ps(arg8, arg5, 1)
                    arg6 = _mm256_and_ps(zmm5, zmm4)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        var_760_3 = _mm256_maskstore_ps(arg6, arg5)
                    
                    zmm4 = _mm256_andnot_ps(zmm5, zmm4)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_760_3 = _mm256_maskstore_ps(zmm4, arg8)
                
                zmm1 = _mm256_add_ps(zmm1, zmm3)
                zmm4 = _mm256_broadcast_ss(var_6ac_1)
                zmm3 = _mm256_cmp_ps(zmm4, arg7, 1)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_740_3 = _mm256_maskstore_ps(zmm3, zmm4)
                
                zmm5 = _mm256_add_ps(zmm1, zmm2)
                zmm1 = _mm256_xor_ps(zmm3, zmm0)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm3 = _mm256_broadcast_ss(temp0_474)
                    zmm2 = _mm256_cmp_ps(arg7, zmm3, 1)
                    zmm4 = _mm256_and_ps(zmm2, zmm1)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_740_3 = _mm256_maskstore_ps(zmm4, zmm3)
                    
                    zmm1 = _mm256_andnot_ps(zmm2, zmm1)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_740_3 = _mm256_maskstore_ps(zmm1, arg7)
                
                zmm2 = _mm256_broadcast_ss(var_6a8_1)
                zmm1 = _mm256_cmp_ps(zmm2, zmm5, 1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_720_4 = _mm256_maskstore_ps(zmm1, zmm2)
                
                zmm0 = _mm256_xor_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2 = _mm256_broadcast_ss(temp0_475)
                    zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
                    zmm3 = _mm256_and_ps(zmm1, zmm0)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_720_4 = _mm256_maskstore_ps(zmm3, zmm2)
                    
                    zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_720_4 = _mm256_maskstore_ps(zmm0, zmm5)
                
                var_560.32 = zmm5
                var_540 = arg8
                double var_680_3[0x4] = arg7
                arg9 = _mm256_broadcast_ss(*r12)
                zmm0 = _mm256_sub_ps(var_760_3, arg9)
                arg11 = _mm256_broadcast_ss(*(r12 + 4))
                zmm1 = _mm256_sub_ps(var_740_3, arg11)
                zmm5 = _mm256_broadcast_ss(*arg3)
                zmm0 = _mm256_div_ps(zmm0, zmm5)
                arg5 = _mm256_broadcast_ss(*(arg3 + 4))
                zmm1 = _mm256_div_ps(zmm1, arg5)
                arg13 = _mm256_broadcast_ss(r12[1].d)
                var_500.32 = var_720_4
                zmm2 = _mm256_sub_ps(var_720_4, arg13)
                zmm3[0].o = arg3[1].d
                zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0)
                arg12 = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
                zmm4 = _mm256_div_ps(zmm2, arg12)
                zmm2 = _mm256_cvttps_epi32(zmm0)
                arg10 = _mm256_cvttps_epi32(zmm1)
                arg8 = _mm256_cvttps_epi32(zmm4)
                zmm0 = _mm256_mul_ps(zmm5, _mm256_cvtepi32_ps(zmm2))
                zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x20)
                zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                zmm1 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                arg7 = _mm256_mul_ps(arg5, _mm256_cvtepi32_ps(arg10))
                float var_580_2[0x8] = arg8
                arg8 = _mm256_mul_ps(arg12, _mm256_cvtepi32_ps(arg8))
                var_4e0 = arg9
                zmm0 = _mm256_add_ps(zmm0, arg9)
                var_340.32 = arg11
                arg9 = _mm256_add_ps(arg7, arg11)
                var_360.32 = arg13
                arg11 = _mm256_add_ps(arg8, arg13)
                zmm3[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142fc9580)
                arg7[0].o = _mm_permute_ps(zmm3[0].o, 0)
                arg7 = _mm256_insertf128_ps(arg7, arg7[0].o, 1)
                zmm0 = _mm256_add_ps(arg7, zmm0)
                arg8[0].o = _mm_permute_ps(zmm3[0].o, 0x55)
                arg8 = _mm256_insertf128_ps(arg8, arg8[0].o, 1)
                arg13 = _mm256_add_ps(arg8, arg9)
                zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xaa)
                arg9 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
                var_480.32 = var_760_3
                zmm3 = _mm256_blendv_ps(zmm1, zmm2, _mm256_cmp_ps(zmm0, var_760_3, 1))
                float var_760_4[0x8] = zmm3
                zmm0 = _mm256_cmp_ps(arg13, var_740_3, 1)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2 = arg10
                
                arg11 = _mm256_add_ps(arg9, arg11)
                var_520.32 = var_740_3
                arg13 = _mm256_cmp_ps(arg13, var_740_3, 5)
                var_760_3[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                var_740_3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg13[0].o, var_760_3[0].o)
                var_740_3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_740_3[0].o, zmm0[0].o)
                bool cond:7_1 = __vpmovmskb_gpr32d_xmmdq(var_740_3[0].o) == 0
                arg13[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                
                if (not(cond:7_1))
                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                    var_740_3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg13[0].o)
                    zmm1 = _mm256_insertf128_ps(var_740_3, zmm1[0].o, 1)
                
                arg10 = _mm256_blendv_ps(zmm1, zmm2, zmm0)
                float var_740_4[0x8] = arg10
                arg14 = var_500.32
                zmm0 = _mm256_cmp_ps(arg11, arg14, 1)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2 = var_580_2
                
                arg6 = _mm256_cmp_ps(arg11, arg14, 5)
                zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                    zmm1[0].o = _mm256_extractf128_ps(var_580_2[0].o, 1)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                    var_580_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_580_2[0].o, arg13[0].o)
                    zmm1 = _mm256_insertf128_ps(var_580_2, zmm1[0].o, 1)
                
                zmm0 = _mm256_blendv_ps(zmm1, zmm2, zmm0)
                zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm5, _mm256_cvtepi32_ps(zmm3)), 
                    var_4e0)
                zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg5, _mm256_cvtepi32_ps(arg10)), 
                    var_340.32)
                float var_720_5[0x8] = zmm0
                zmm0 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg12, _mm256_cvtepi32_ps(zmm0)), 
                    var_360.32)
                zmm1 = _mm256_add_ps(arg7, zmm1)
                zmm2 = _mm256_add_ps(arg8, zmm2)
                zmm0 = _mm256_add_ps(arg9, zmm0)
                arg7 = var_480.32
                zmm1 = _mm256_div_ps(_mm256_sub_ps(arg7, zmm1), zmm5)
                arg6 = var_520.32
                zmm2 = _mm256_div_ps(_mm256_sub_ps(arg6, zmm2), arg5)
                zmm0 = _mm256_div_ps(_mm256_sub_ps(arg14, zmm0), arg12)
                float var_620_4[0x8] = zmm1
                float var_600_4[0x8] = zmm2
                float var_5e0_4[0x8] = zmm0
                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                bool cond:14_1 = _mm256_movemask_ps(zmm0) == 0
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                
                if (not(cond:14_1))
                    var_760_4 = _mm256_maskstore_ps(zmm0, arg5)
                    var_620_4 = _mm256_maskstore_ps(zmm0, arg5)
                    zmm3 = var_760_4
                
                int32_t rax_58 = *arg4
                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                zmm1[0].o = zx.o(rax_58 - 1)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm3 = var_680_3
                zmm5 = var_560.32
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm1[0].o = zx.o(rax_58 - 2)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                    var_760_4 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                    zmm1 = data_142fc95a0
                    var_620_4 = _mm256_maskstore_ps(zmm0, zmm1)
                
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg13[0].o, var_740_4[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg13[0].o, var_740_4[4].o)
                zmm0 = _mm256_sub_ps(arg7, var_540)
                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_740_4 = _mm256_maskstore_ps(zmm1, arg5)
                    var_600_4 = _mm256_maskstore_ps(zmm1, arg5)
                
                zmm1 = _mm256_sub_ps(arg6, zmm3)
                zmm0 = _mm256_mul_ps(zmm0, zmm0)
                int32_t rax_61 = arg4[1]
                zmm3[0].o = _mm256_extractf128_ps(var_740_4[0].o, 1)
                var_540[0].o = zx.o(rax_61 - 1)
                var_540[0].o = __vpshufd_xmmdq_xmmdq_immb(var_540[0].o, 0)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_540[0].o)
                var_740_4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_740_4[0].o, var_540[0].o)
                zmm2 = _mm256_insertf128_ps(var_740_4, zmm3[0].o, 1)
                
                if (_mm256_movemask_ps(zmm2) != 0)
                    zmm3[0].o = zx.o(rax_61 - 2)
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                    var_740_4 = _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                    var_600_4 = _mm256_maskstore_ps(zmm2, data_142fc95a0)
                
                zmm2 = _mm256_sub_ps(arg14, zmm5)
                zmm1 = _mm256_mul_ps(zmm1, zmm1)
                var_540[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg13[0].o, var_720_5[0].o)
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg13[0].o, var_720_5[4].o)
                zmm3 = _mm256_add_ps(zmm0, arg5)
                zmm0 = _mm256_insertf128_ps(var_540, zmm5[0].o, 1)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_720_5 = _mm256_maskstore_ps(zmm0, arg5)
                    var_5e0_4 = _mm256_maskstore_ps(zmm0, arg5)
                
                arg9 = var_720_5
                zmm0 = _mm256_mul_ps(zmm2, zmm2)
                zmm1 = _mm256_add_ps(zmm3, zmm1)
                int32_t rax_64 = arg4[2]
                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                zmm3[0].o = zx.o(rax_64 - 1)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                
                if (_mm256_movemask_ps(zmm2) != 0)
                    zmm3[0].o = zx.o(rax_64 - 2)
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                    double var_720_6[0x4] =
                        _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                    zmm3 = data_142fc95a0
                    var_5e0_4 = _mm256_maskstore_ps(zmm2, zmm3)
                    arg9 = var_720_6
                
                zmm0 = _mm256_add_ps(zmm1, zmm0)
                float var_680_4[0x8] = zmm0
                zmm0[0].o = zx.o(*(arg15 + 4))
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                arg6[0].o = var_760_4[0].o
                arg7[0].o = var_750
                arg5[0].o = var_740_4[0].o
                zmm0[0].o = var_740_4[4].o
                arg13[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg7[0].o)
                arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                zmm1[0].o = zx.o(*(arg15 + 8))
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                var_560.o = zmm2[0].o
                var_540[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                var_540[0].o = var_540[0].o
                var_540[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_540[0].o, arg9[0].o)
                arg10[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                var_540[0].o = __vpslld_xmmdq_xmmdq_immb(var_540[0].o, 2)
                int32_t temp0_742 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 1)
                int32_t temp0_743 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 2)
                float rbx_23 = var_540[0]
                int32_t temp0_744 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 3)
                var_540[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
                float* rax_67 = *(arg15 + 0x10)
                var_540[0].o = __vpslld_xmmdq_xmmdq_immb(var_540[0].o, 2)
                int64_t r14_2 = sx.q(rbx_23)
                int64_t r13_2 = sx.q(temp0_742)
                int64_t rbx_24 = sx.q(temp0_743)
                int64_t r10_2 = sx.q(var_540[0])
                int64_t rdi_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 1))
                int64_t r11_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 2))
                int32_t temp0_749 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 3)
                var_540[0].o = *(rax_67 + r10_2)
                var_540[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(var_540[0].o, *(rax_67 + rdi_10), 0x10)
                var_540[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(var_540[0].o, *(rax_67 + r11_3), 0x20)
                int64_t r12_2 = sx.q(temp0_749)
                var_540[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(var_540[0].o, *(rax_67 + r12_2), 0x30)
                zmm5[0].o = *(rax_67 + r14_2)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_67 + r13_2), 0x10)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_67 + rbx_24), 0x20)
                int64_t r9_7 = sx.q(temp0_744)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_67 + r9_7), 0x30)
                arg11 = _mm256_insertf128_ps(zmm5, var_540[0].o, 1)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                var_540[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                arg7[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_540[0].o)
                arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm3[0].o)
                arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm3[0].o)
                var_540[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                var_540[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_540[0].o, zmm1[0].o)
                var_540[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_540[0].o, arg10[0].o)
                var_540[0].o = __vpslld_xmmdq_xmmdq_immb(var_540[0].o, 2)
                int32_t temp0_768 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 1)
                int32_t temp0_769 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 2)
                int32_t temp0_770 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 3)
                float r8_18 = var_540[0]
                var_540[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                var_540[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_540[0].o, zmm1[0].o)
                var_540[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_540[0].o, arg9[0].o)
                var_540[0].o = __vpslld_xmmdq_xmmdq_immb(var_540[0].o, 2)
                int32_t temp0_775 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 1)
                zmm5[0].o = *(rax_67 + sx.q(r8_18))
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_67 + sx.q(temp0_768)), 0x10)
                int32_t temp0_777 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 2)
                int32_t temp0_778 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 3)
                float rcx_40 = var_540[0]
                var_540[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_67 + sx.q(temp0_769)), 0x20)
                var_540[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_540[0].o, 
                    *(rax_67 + sx.q(temp0_770)), 0x30)
                zmm5[0].o = *(rax_67 + sx.q(rcx_40))
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_67 + sx.q(temp0_775)), 0x10)
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_67 + sx.q(temp0_777)), 0x20)
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_67 + sx.q(temp0_778)), 0x30)
                zmm4 = _mm256_insertf128_ps(zmm5, var_540[0].o, 1)
                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
                zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
                float rcx_42 = zmm3[0]
                int32_t temp0_795 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
                int32_t temp0_796 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
                int32_t temp0_797 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
                zmm3[0].o = *(rax_67 + sx.q(rcx_42))
                int32_t temp0_798 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
                zmm4 = _mm256_sub_ps(zmm4, arg11)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_67 + sx.q(temp0_795)), 0x10)
                int32_t temp0_801 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_67 + sx.q(temp0_796)), 0x20)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_67 + sx.q(temp0_797)), 0x30)
                float rbx_29 = zmm5[0]
                int32_t temp0_804 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
                arg12 = var_620_4
                zmm4 = _mm256_mul_ps(arg12, zmm4)
                zmm5[0].o = *(rax_67 + sx.q(rbx_29))
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_67 + sx.q(temp0_798)), 0x10)
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_67 + sx.q(temp0_801)), 0x20)
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_67 + sx.q(temp0_804)), 0x30)
                arg11 = _mm256_add_ps(arg11, zmm4)
                zmm4 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
                int64_t rcx_47 = sx.q(zmm2[0])
                int64_t rdx_39 = sx.q(zmm0[0])
                int32_t temp0_819 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                zmm3[0].o = *(rax_67 + rdx_39)
                int32_t temp0_820 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_67 + sx.q(temp0_819)), 0x10)
                int32_t temp0_822 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = *(rax_67 + rcx_47)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_67 + sx.q(temp0_820)), 0x20)
                int64_t rcx_50 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_67 + sx.q(temp0_822)), 0x30)
                int32_t temp0_826 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_67 + rcx_50), 0x10)
                int32_t temp0_828 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
                zmm5[0].o = *(rax_67 + r10_2 + 4)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_67 + sx.q(temp0_826)), 0x20)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_67 + sx.q(temp0_828)), 0x30)
                zmm3 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                arg6[0].o = *(rax_67 + r14_2 + 4)
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                zmm3 = _mm256_mul_ps(arg12, _mm256_sub_ps(zmm3, zmm4))
                arg7 = _mm256_add_ps(zmm4, zmm3)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_67 + rdi_10 + 4), 0x10)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_67 + r11_3 + 4), 0x20)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_67 + r12_2 + 4), 0x30)
                zmm4[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_67 + r13_2 + 4), 0x10)
                zmm4[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_67 + rbx_24 + 4), 0x20)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_67 + r9_7 + 4), 0x30)
                zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
                zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
                float rcx_54 = zmm4[0]
                int32_t temp0_848 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1)
                int32_t temp0_849 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
                int32_t temp0_850 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3)
                zmm4[0].o = *(rax_67 + sx.q(rcx_54) + 4)
                int64_t rbx_35 = sx.q(zmm5[0])
                int32_t temp0_851 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
                int32_t temp0_852 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
                int32_t temp0_853 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
                zmm5[0].o = *(rax_67 + rbx_35 + 4)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                    *(rax_67 + sx.q(temp0_851) + 4), 0x10)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                    *(rax_67 + sx.q(temp0_852) + 4), 0x20)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                    *(rax_67 + sx.q(temp0_853) + 4), 0x30)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                    *(rax_67 + sx.q(temp0_848) + 4), 0x10)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                    *(rax_67 + sx.q(temp0_849) + 4), 0x20)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                    *(rax_67 + sx.q(temp0_850) + 4), 0x30)
                arg6 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_540[0].o)
                arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm4[0].o, var_560.o)
                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
                int64_t rcx_59 = sx.q(zmm1[0])
                int32_t temp0_867 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                int32_t temp0_868 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                int32_t temp0_869 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                zmm1[0].o = *(rax_67 + rcx_59 + 4)
                float rcx_60 = arg5[0]
                int32_t temp0_870 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
                int32_t temp0_871 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                int32_t temp0_872 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
                arg5[0].o = *(rax_67 + sx.q(rcx_60) + 4)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                    *(rax_67 + sx.q(temp0_870) + 4), 0x10)
                arg6 = _mm256_mul_ps(arg12, _mm256_sub_ps(arg6, zmm3))
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                    *(rax_67 + sx.q(temp0_871) + 4), 0x20)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                    *(rax_67 + sx.q(temp0_872) + 4), 0x30)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                    *(rax_67 + sx.q(temp0_867) + 4), 0x10)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                    *(rax_67 + sx.q(temp0_868) + 4), 0x20)
                arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                    *(rax_67 + sx.q(temp0_869) + 4), 0x30)
                zmm1 = _mm256_add_ps(zmm3, arg6)
                zmm3 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
                int32_t temp0_887 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
                int64_t rdx_51 = sx.q(zmm0[0])
                int32_t temp0_888 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                int32_t temp0_889 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                int32_t temp0_890 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = *(rax_67 + rdx_51 + 4)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                    *(rax_67 + sx.q(temp0_888) + 4), 0x10)
                float rdx_53 = zmm2[0]
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                    *(rax_67 + sx.q(temp0_889) + 4), 0x20)
                int32_t temp0_893 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                    *(rax_67 + sx.q(temp0_890) + 4), 0x30)
                int32_t temp0_895 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
                zmm2[0].o = *(rax_67 + sx.q(rdx_53) + 4)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                    *(rax_67 + sx.q(temp0_887) + 4), 0x10)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                    *(rax_67 + sx.q(temp0_893) + 4), 0x20)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                    *(rax_67 + sx.q(temp0_895) + 4), 0x30)
                zmm0 = _mm256_add_ps(zmm3, 
                    _mm256_mul_ps(arg12, 
                        _mm256_sub_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1), zmm3)))
                zmm2 = var_600_4
                zmm3 = _mm256_add_ps(arg11, _mm256_mul_ps(_mm256_sub_ps(arg7, arg11), zmm2))
                zmm0 = _mm256_add_ps(zmm3, 
                    __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_sub_ps(
                            _mm256_add_ps(zmm1, _mm256_mul_ps(zmm2, _mm256_sub_ps(zmm0, zmm1))), 
                            zmm3), 
                        var_5e0_4))
                zmm3 = var_680_4
                arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                zmm1 = _mm256_cmp_ps(zmm3, arg11, 0xc)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm2 = _mm256_rsqrt_ps(zmm3)
                    zmm3 = _mm256_mul_ps(zmm2, _mm256_mul_ps(zmm3, zmm2))
                    zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_mul_ps(zmm2, _mm256_sub_ps(data_142fc9480, zmm3)), data_142fc94a0)
                    zmm3 = _mm256_rcp_ps(zmm2)
                    zmm2 = _mm256_mul_ps(zmm3, zmm2)
                    zmm4 = data_142fc94c0
                    zmm2 = _mm256_add_ps(zmm0, _mm256_mul_ps(zmm3, _mm256_sub_ps(zmm4, zmm2)))
                    zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
                
                arg4 = var_6d0
                r12 = var_660
                r8_17 = var_5a0
                zmm1 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg19), 1)
                char i_5 = _mm256_movemask_ps(zmm1)
                
                if (i_5 == 0)
                    result = 0
                    rsi_15 = zx.q(rsi_15.d + 8)
                    
                    if (rsi_15.d s>= r8_17)
                        break
                    
                    continue
                else
                    zmm1[0].o = zx.o(rsi_15.d)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    uint64_t i = zx.q(i_5)
                    result = 0
                    
                    do
                        uint64_t rbx_42
                        
                        if (i == 0)
                            rbx_42 = 0x40
                            i &= 0xfffffffffffffffe
                            
                            if ((result.b & 1) == 0)
                            label_1400844d1:
                                float var_1c0[0x8] = zmm0
                                uint64_t rbx_43 = zx.q(rbx_42.d) & 7
                                zmm2[0].o = zx.o(var_1c0[rbx_43])
                                *arg19 = zmm2[0]
                                float var_1a0[0x8] = zmm1
                                *arg18 = var_1a0[rbx_43]
                        else
                            uint64_t rflags_2
                            rbx_42, rflags_2 = _bit_scan_forward(i)
                            i &= not.q(1 << (rbx_42 u% 0x40))
                            
                            if ((result.b & 1) == 0)
                                goto label_1400844d1
                        result.b = 1
                    while (i != 0)
            
            rsi_15 = zx.q(rsi_15.d + 8)
            
            if (rsi_15.d s>= r8_17)
                break
    
    if (rsi_15.d s< arg20)
        bool cond:1_1 = result.b != 0
        result.b = 1
        
        if (not(cond:1_1))
            zmm0[0].o = zx.o(rsi_15.d)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
            zmm4 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm2[0].o = zx.o(arg20)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
            zmm3 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            arg13 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm2[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            float var_680_7[0x8] = zmm3
            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm0 = _mm256_insertf128_ps(arg7, arg14[0].o, 1)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            var_660.32 = zmm4
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm2 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(zmm3, zmm2[0].o, 1))
            int64_t rax_156 = sx.q(zmm2[0])
            void* r14_8 = arg17 + (rax_156 << 2)
            zmm3[0].o = *(arg17 + (rax_156 << 2))
            int64_t rax_158 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            void* r8_32 = arg17 + (rax_158 << 2)
            int64_t rdx_113 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
            void* r10_9 = arg17 + (rdx_113 << 2)
            int64_t rbx_66 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
            void* r11_8 = arg17 + (rbx_66 << 2)
            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            int64_t rcx_87 = sx.q(zmm2[0])
            zmm4[0].o = *(arg17 + (rcx_87 << 2))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rax_158 << 2)), 0x10)
            void* rcx_88 = arg17 + (rcx_87 << 2)
            int64_t rax_160 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rdx_113 << 2)), 0x20)
            int32_t temp0_1551 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg17 + (rax_160 << 2)), 0x10)
            void* r15_8 = arg17 + (rax_160 << 2)
            int64_t rax_161 = sx.q(temp0_1551)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rbx_66 << 2)), 0x30)
            int32_t temp0_1554 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg17 + (rax_161 << 2)), 0x20)
            void* rax_162 = arg17 + (rax_161 << 2)
            int64_t rdx_116 = sx.q(temp0_1554)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (rdx_116 << 2)), 0x30)
            void* rbx_67 = arg17 + (rdx_116 << 2)
            arg8 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9540)
            zmm4[0].o = *(zx.q(zmm0[0]) + r14_8)
            int32_t* rdx_118 = zx.q(zmm3[0])
            zmm5[0].o = *(rdx_118 + r14_8)
            arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm1[0].o = *(zx.q(arg6[0]) + rcx_88)
            int32_t* rdx_120 = zx.q(arg5[0])
            zmm2[0].o = *(rdx_120 + rcx_88)
            float* rcx_89 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_89 + r15_8), 0x10)
            float* rcx_90 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_90 + r15_8), 0x10)
            float* rcx_91 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_91 + rax_162), 0x20)
            float* rcx_92 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_92 + rax_162), 0x20)
            uint64_t rax_163 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_163 + rbx_67), 0x30)
            float* rax_164 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_164 + rbx_67), 0x30)
            float* rax_165 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_165 + r8_32), 0x10)
            float* rdi_44 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_44 + r8_32), 0x10)
            float* rax_166 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_166 + r10_9), 0x20)
            float* rbx_68 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_68 + r10_9), 0x20)
            float* rax_167 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_167 + r11_8), 0x30)
            float* rax_168 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_168 + r11_8), 0x30)
            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            float var_300_2[0x8] = arg8
            float var_2e0_2[0x8] = zmm2
            float var_2c0_2[0x8] = zmm1
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm3 = _mm256_broadcast_ss(arg16[3])
            float var_760_7[0x8] = zmm3
            float var_740_7[0x8] = zmm3
            float var_720_10[0x8] = zmm3
            float var_700_4[0x8] = zmm3
            zmm4 = _mm256_broadcast_ss(arg16[1])
            zmm5 = _mm256_mul_ps(zmm1, zmm4)
            arg5 = _mm256_broadcast_ss(arg16[2])
            arg6 = _mm256_mul_ps(arg8, arg5)
            arg9 = _mm256_broadcast_ss(*arg16)
            arg10 = _mm256_mul_ps(zmm2, arg9)
            zmm2 = _mm256_mul_ps(zmm2, arg5)
            arg5 = _mm256_mul_ps(zmm3, zmm0)
            zmm2 = _mm256_sub_ps(zmm5, zmm2)
            zmm1 = _mm256_sub_ps(arg6, _mm256_mul_ps(zmm1, arg9))
            zmm4 = _mm256_sub_ps(arg10, _mm256_mul_ps(arg8, zmm4))
            zmm5 = _mm256_sub_ps(arg5, arg5)
            arg5 = _mm256_add_ps(zmm2, zmm2)
            zmm1 = _mm256_add_ps(zmm1, zmm1)
            zmm4 = _mm256_add_ps(zmm4, zmm4)
            zmm2 = _mm256_add_ps(zmm5, zmm5)
            float var_620_7[0x8] = arg5
            float var_600_7[0x8] = zmm1
            float var_5e0_7[0x8] = zmm4
            float var_5c0_4[0x8] = zmm2
            zmm5 = _mm256_mul_ps(zmm3, arg5)
            arg6 = _mm256_mul_ps(zmm3, zmm1)
            arg8 = _mm256_mul_ps(zmm3, zmm4)
            zmm3 = _mm256_mul_ps(zmm3, zmm2)
            arg9 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_300_2)
            arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_2e0_2)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg8, var_2c0_2)
            double var_180_2[0x4] = arg9
            float var_160_2[0x8] = arg6
            float var_140_2[0x8] = zmm2
            float var_120_2[0x8] = __vaddps_ymmqq_ymmqq_memqq(zmm3, zmm0)
            zmm5 = _mm256_broadcast_ss(arg16[1])
            zmm3 = _mm256_mul_ps(zmm4, zmm5)
            arg8 = _mm256_broadcast_ss(arg16[2])
            arg10 = _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm1, arg8))
            arg11 = _mm256_broadcast_ss(*arg16)
            zmm3 = _mm256_mul_ps(zmm1, arg11)
            zmm1 = _mm256_mul_ps(zmm4, arg11)
            zmm1 = _mm256_sub_ps(_mm256_mul_ps(arg5, arg8), zmm1)
            zmm5 = _mm256_mul_ps(arg5, zmm5)
            zmm4 = _mm256_add_ps(arg9, arg10)
            arg5 = _mm256_add_ps(arg6, zmm1)
            zmm1 = _mm256_broadcast_ss(arg16[4])
            arg10 = _mm256_add_ps(zmm4, zmm1)
            arg6 = _mm256_broadcast_ss(var_6b0_1)
            zmm4 = _mm256_cmp_ps(arg6, arg10, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            var_6d0.o = arg14[0].o
            zmm1[0].o &= arg14[0].o
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            arg7 = _mm256_broadcast_ss(arg16[5])
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            char temp0_1638 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
            zmm1 = _mm256_broadcast_ss(arg16[6])
            
            if (temp0_1638 != 0)
                var_760_7 = _mm256_maskstore_ps(zmm4, arg6)
            
            zmm3 = _mm256_sub_ps(zmm3, zmm5)
            arg9 = _mm256_add_ps(arg5, arg7)
            zmm0 = _mm256_andnot_ps(zmm4, arg13)
            arg12 = var_660.32
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm0 = _mm256_xor_ps(zmm4, _mm256_cmp_ps(zmm0, zmm0, 0xf))
                zmm5 = _mm256_broadcast_ss(var_6c0_1)
                zmm4 = _mm256_cmp_ps(arg10, zmm5, 1)
                arg5 = _mm256_and_ps(zmm4, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg13)) != 0)
                    var_760_7 = _mm256_maskstore_ps(arg5, zmm5)
                
                zmm0 = _mm256_andnot_ps(zmm4, zmm0)
                zmm4 = _mm256_and_ps(zmm0, arg13)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    var_760_7 = _mm256_maskstore_ps(zmm0, arg10)
            
            zmm2 = _mm256_add_ps(zmm2, zmm3)
            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_680_7[0].o, arg12[0].o)
            zmm3 = _mm256_broadcast_ss(var_6ac_1)
            zmm0 = _mm256_cmp_ps(zmm3, arg9, 1)
            zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm5[0].o &= var_6d0.o
            zmm4[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                var_740_7 = _mm256_maskstore_ps(zmm0, zmm3)
            
            zmm5 = _mm256_add_ps(zmm2, zmm1)
            zmm1 = _mm256_andnot_ps(zmm0, arg13)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                zmm0 = _mm256_xor_ps(zmm0, _mm256_cmp_ps(zmm1, zmm1, 0xf))
                zmm2 = _mm256_broadcast_ss(temp0_474)
                zmm1 = _mm256_cmp_ps(arg9, zmm2, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg13)) != 0)
                    var_740_7 = _mm256_maskstore_ps(zmm3, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
                    var_740_7 = _mm256_maskstore_ps(zmm0, arg9)
            
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_680_7[0].o, arg12[0].o)
            zmm1 = _mm256_broadcast_ss(var_6a8_1)
            zmm0 = _mm256_cmp_ps(zmm1, zmm5, 1)
            zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm3[0].o &= var_6d0.o
            zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                var_720_10 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm2[0].o = zx.o(0)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg13)) != 0)
                zmm0 = _mm256_xor_ps(zmm0, _mm256_cmp_ps(zmm2, zmm2, 0xf))
                zmm2 = _mm256_broadcast_ss(temp0_475)
                zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg13)) != 0)
                    var_720_10 = _mm256_maskstore_ps(zmm3, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
                    var_720_10 = _mm256_maskstore_ps(zmm0, zmm5)
            
            float var_4a0_2[0x8] = zmm5
            var_5a0.32 = arg10
            double var_580_4[0x4] = arg9
            float var_320_2[0x8] = arg13
            arg7 = var_740_7
            arg9 = _mm256_broadcast_ss(*r12)
            zmm0 = _mm256_sub_ps(var_760_7, arg9)
            zmm4 = _mm256_broadcast_ss(*(r12 + 4))
            zmm1 = _mm256_sub_ps(arg7, zmm4)
            arg14 = _mm256_broadcast_ss(*arg3)
            zmm2 = _mm256_div_ps(zmm0, arg14)
            zmm3 = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, zmm3)
            zmm0[0].o = arg3[1].d
            zmm2 = _mm256_cvttps_epi32(zmm2)
            zmm1 = _mm256_cvttps_epi32(zmm1)
            float var_4c0_3[0x8] = zmm1
            float var_3e0_2[0x8] = zmm3
            float var_420_2[0x8] = zmm4
            zmm1 = _mm256_add_ps(_mm256_mul_ps(zmm3, _mm256_cvtepi32_ps(zmm1)), zmm4)
            zmm3[0].o = __vmovsd_xmmdq_memq(*arg3)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0x20)
            arg5[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142fc9580)
            zmm3[0].o = _mm_permute_ps(arg5[0].o, 0x55)
            zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
            float var_440_2[0x8] = zmm3
            arg6 = _mm256_add_ps(zmm3, zmm1)
            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            arg8 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            arg13 = _mm256_cmp_ps(arg6, arg7, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            arg10[0].o = var_6d0.o
            zmm1[0].o &= arg10[0].o
            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_680_7[0].o, arg12[0].o)
            var_680_7[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_680_7[0].o, zmm1[0].o)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
            zmm5 = _mm256_broadcast_ss(r12[1].d)
            var_640.32 = var_720_10
            zmm3 = _mm256_div_ps(_mm256_sub_ps(var_720_10, zmm5), zmm0)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            char temp0_1742 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            arg12 = _mm256_cvttps_epi32(zmm3)
            float var_3c0_2[0x8] = arg14
            zmm1 = _mm256_mul_ps(arg14, _mm256_cvtepi32_ps(zmm2))
            zmm3 = _mm256_mul_ps(zmm0, _mm256_cvtepi32_ps(arg12))
            double var_400_2[0x4] = arg9
            arg14 = _mm256_add_ps(zmm1, arg9)
            zmm1 = _mm256_add_ps(zmm3, zmm5)
            zmm3[0].o = _mm_permute_ps(arg5[0].o, 0)
            zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
            float var_460_2[0x8] = zmm3
            arg14 = _mm256_add_ps(zmm3, arg14)
            arg5[0].o = _mm_permute_ps(arg5[0].o, 0xaa)
            arg14 = _mm256_blendv_ps(arg8, zmm2, _mm256_cmp_ps(arg14, var_760_7, 1))
            arg5 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
            float var_760_8[0x8] = arg14
            double var_380_2[0x4] = arg7
            arg6 = _mm256_cmp_ps(arg6, arg7, 5)
            
            if (temp0_1742 != 0)
                zmm2 = var_4c0_3
            
            zmm1 = _mm256_add_ps(arg5, zmm1)
            arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm3[0].o = arg10[0].o & arg7[0].o
            arg6[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            bool cond:9_1 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0
            arg7[0].o = arg10[0].o
            
            if (not(cond:9_1))
                zmm3[0].o = _mm256_extractf128_ps(var_4c0_3[0].o, 1)
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                var_4c0_3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_4c0_3[0].o, zmm5[0].o)
                arg8 = _mm256_insertf128_ps(var_4c0_3, zmm3[0].o, 1)
            
            arg9 = _mm256_blendv_ps(arg8, zmm2, arg13)
            double var_740_8[0x4] = arg9
            zmm3 = var_640.32
            arg6 = _mm256_cmp_ps(zmm1, zmm3, 5)
            arg13 = _mm256_cmp_ps(zmm1, zmm3, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            zmm1[0].o &= arg7[0].o
            zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            arg10 = var_5a0.32
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm2 = arg12
            
            zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm1[0].o &= arg7[0].o
            zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            arg6 = var_660.32
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm3[0].o)
                arg8 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            
            zmm1 = _mm256_blendv_ps(arg8, zmm2, arg13)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(var_3c0_2, _mm256_cvtepi32_ps(arg14)), 
                var_400_2)
            zmm3 = _mm256_cvtepi32_ps(arg9)
            arg9 = var_3e0_2
            zmm3 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg9, zmm3), var_420_2)
            float var_720_11[0x8] = zmm1
            zmm1 = _mm256_add_ps(_mm256_mul_ps(zmm0, _mm256_cvtepi32_ps(zmm1)), zmm5)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_460_2)
            zmm3 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_440_2)
            zmm1 = _mm256_add_ps(arg5, zmm1)
            zmm2 = _mm256_div_ps(_mm256_sub_ps(var_760_7, zmm2), var_3c0_2)
            zmm5 = var_380_2
            zmm3 = _mm256_div_ps(_mm256_sub_ps(zmm5, zmm3), arg9)
            arg5 = var_640.32
            zmm1 = _mm256_sub_ps(arg5, zmm1)
            zmm0 = _mm256_div_ps(zmm1, zmm0)
            float var_620_8[0x8] = zmm2
            float var_600_8[0x8] = zmm3
            float var_5e0_8[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
            zmm2[0].o = zmm0[0].o & arg7[0].o
            zmm3[0].o = zmm1[0].o & zmm4[0].o
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(0)
                var_760_8 = _mm256_maskstore_ps(zmm0, zmm1)
                var_620_8 = _mm256_maskstore_ps(zmm0, zmm1)
                arg14 = var_760_8
            
            zmm0 = _mm256_sub_ps(var_760_7, arg10)
            arg8 = var_680_7
            zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
            int32_t rax_187 = *arg4
            zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm2[0].o = zx.o(rax_187 - 1)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
            zmm4[0].o = zmm1[0].o & arg7[0].o
            zmm3[0].o &= zmm2[0].o
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            bool cond:19_1 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0
            zmm3 = var_580_4
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            
            if (not(cond:19_1))
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm2[0].o = zx.o(rax_187 - 2)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                var_760_8 = _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(zmm2, zmm2[0].o, 1))
                var_620_8 = _mm256_maskstore_ps(zmm1, data_142fc95a0)
            
            zmm2 = _mm256_sub_ps(zmm5, zmm3)
            zmm1 = _mm256_mul_ps(zmm0, zmm0)
            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_740_8[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_740_8[2].o)
            zmm5[0].o = zmm3[0].o & arg7[0].o
            zmm4[0].o &= zmm0[0].o
            zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            bool cond:21_1 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o) == 0
            var_4e0[0] = rdi_44
            var_540[0].q = rbx_68
            
            if (not(cond:21_1))
                zmm0 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                zmm3[0].o = zx.o(0)
                var_740_8 = _mm256_maskstore_ps(zmm0, zmm3)
                var_600_8 = _mm256_maskstore_ps(zmm0, zmm3)
            
            zmm3 = var_740_8
            zmm4 = var_640.32
            zmm0 = _mm256_sub_ps(zmm4, var_4a0_2)
            zmm1 = _mm256_add_ps(zmm1, arg5)
            zmm2 = _mm256_mul_ps(zmm2, zmm2)
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
            int32_t rdx_122 = arg4[1]
            zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            arg5[0].o = zx.o(rdx_122 - 1)
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            arg5[0].o = zmm4[0].o & arg7[0].o
            zmm5[0].o &= zmm3[0].o
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                zmm4[0].o = zx.o(rdx_122 - 2)
                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0)
                var_740_8 = _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(zmm4, zmm4[0].o, 1))
                zmm4 = data_142fc95a0
                var_600_8 = _mm256_maskstore_ps(zmm3, zmm4)
            
            zmm1 = _mm256_add_ps(zmm1, zmm2)
            zmm0 = _mm256_mul_ps(zmm0, zmm0)
            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_720_11[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_720_11[4].o)
            zmm5[0].o = zmm3[0].o & arg7[0].o
            zmm4[0].o &= zmm2[0].o
            zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                zmm3[0].o = zx.o(0)
                var_720_11 = _mm256_maskstore_ps(zmm2, zmm3)
                var_5e0_8 = _mm256_maskstore_ps(zmm2, zmm3)
            
            arg14 = var_720_11
            zmm0 = _mm256_add_ps(zmm1, zmm0)
            var_640.32 = zmm0
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
            int32_t rdx_125 = arg4[2]
            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm1[0].o = zx.o(rdx_125 - 1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
            zmm3[0].o = zmm0[0].o & arg7[0].o
            zmm2[0].o &= zmm1[0].o
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(rdx_125 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                float var_720_12[0x8] =
                    _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                zmm1 = data_142fc95a0
                var_5e0_8 = _mm256_maskstore_ps(zmm0, zmm1)
                arg14 = var_720_12
            
            zmm0[0].o = zx.o(*(arg15 + 4))
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            var_3c0_2[0].o = var_760_8[0].o
            zmm2[0].o = var_750
            arg5[0].o = var_740_8[0].o
            arg7[0].o = var_740_8[2].o
            arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_3c0_2[0].o)
            arg10[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg7[0].o)
            var_760_7[0].o = zmm5[0].o
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
            var_380_2[0].o = zmm0[0].o
            zmm3[0].o = zx.o(*(arg15 + 8))
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            var_580_4[0].o = zmm3[0].o
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
            var_5a0.o = zmm0[0].o
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            arg13[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            zmm3 = _mm256_insertf128_ps(zmm3, arg6[0].o, 1)
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg8[0].o, var_660.o)
            int32_t var_680_8[0x4] = zmm5[0].o
            arg9 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm5, var_6d0.o, 1)
            zmm3 = _mm256_and_ps(arg9, zmm3)
            int32_t temp0_1902 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1903 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
            float rdi_45 = zmm3[0]
            int32_t temp0_1904 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            int32_t temp0_1906 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1907 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            float rbx_73 = zmm3[0]
            int32_t temp0_1908 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            float* rcx_97 = *(arg15 + 0x10)
            int64_t r15_9 = sx.q(rdi_45)
            int64_t rdi_46 = sx.q(temp0_1902)
            var_420_2[0].q = rdi_46
            int64_t rsi_37 = sx.q(temp0_1903)
            var_440_2[0].q = rsi_37
            int64_t r8_34 = sx.q(temp0_1904)
            var_460_2[0].q = r8_34
            int64_t rax_189 = sx.q(rbx_73)
            var_4a0_2[0].q = rax_189
            int64_t rbx_74 = sx.q(temp0_1906)
            var_400_2[0] = rbx_74
            int64_t rdx_128 = sx.q(temp0_1907)
            var_3e0_2[0].q = rdx_128
            zmm3[0].o = *(rcx_97 + rax_189)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_97 + rbx_74), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_97 + rdx_128), 0x20)
            int64_t rdx_129 = sx.q(temp0_1908)
            var_3c0_2[0].q = rdx_129
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_97 + rdx_129), 0x30)
            arg6[0].o = *(rcx_97 + r15_9)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_97 + rdi_46), 0x10)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_97 + rsi_37), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_97 + r8_34), 0x30)
            zmm0 = _mm256_insertf128_ps(arg6, zmm3[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_3c0_2[0].o, zmm3[0].o)
            arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
            zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
            var_3c0_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_3c0_2[0].o, zmm4[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg14[0].o)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            zmm5 = _mm256_and_ps(arg9, _mm256_insertf128_ps(zmm5, arg6[0].o, 1))
            int32_t temp0_1931 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 1)
            int32_t temp0_1932 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 2)
            int32_t temp0_1933 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 3)
            float r12_6 = zmm5[0]
            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            int32_t temp0_1935 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            int32_t temp0_1936 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
            int32_t temp0_1937 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            float rax_190 = zmm5[0]
            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
            zmm5[0].o = *(rcx_97 + sx.q(rax_190))
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_97 + sx.q(temp0_1935)), 0x10)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
            zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            arg7 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_97 + sx.q(temp0_1936)), 0x20)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            arg10[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_97 + sx.q(temp0_1937)), 0x30)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
            zmm5[0].o = *(rcx_97 + sx.q(r12_6))
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_97 + sx.q(temp0_1931)), 0x10)
            zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_97 + sx.q(temp0_1932)), 0x20)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_97 + sx.q(temp0_1933)), 0x30)
            zmm5 = _mm256_and_ps(arg9, arg7)
            int32_t temp0_1965 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 1)
            int32_t temp0_1966 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 2)
            float r14_11 = zmm5[0]
            int32_t temp0_1967 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            int64_t rsi_39 = sx.q(zmm5[0])
            int32_t temp0_1969 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            int32_t temp0_1970 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
            int32_t temp0_1971 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            zmm5[0].o = *(rcx_97 + rsi_39)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_97 + sx.q(temp0_1969)), 0x10)
            zmm2 = _mm256_and_ps(arg9, zmm2)
            arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            int32_t temp0_1975 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_1976 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_1977 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            float rax_197 = arg5[0]
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_97 + sx.q(temp0_1970)), 0x20)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_97 + sx.q(temp0_1971)), 0x30)
            arg5[0].o = *(rcx_97 + sx.q(r14_11))
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_97 + sx.q(temp0_1965)), 0x10)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_97 + sx.q(temp0_1966)), 0x20)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_97 + sx.q(temp0_1967)), 0x30)
            arg6[0].o = *(rcx_97 + sx.q(rax_197))
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_97 + sx.q(temp0_1975)), 0x10)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_760_7[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_380_2[0].o)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_97 + sx.q(temp0_1976)), 0x20)
            arg7 = zmm0
            arg11 = var_620_8
            zmm3 =
                _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm3, arg10[0].o, 1), arg7))
            arg7 = _mm256_add_ps(arg7, zmm3)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_97 + sx.q(temp0_1977)), 0x30)
            int64_t rax_202 = sx.q(zmm2[0])
            int32_t temp0_1992 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
            int32_t temp0_1993 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            int32_t temp0_1994 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm2[0].o = *(rcx_97 + rax_202)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_97 + sx.q(temp0_1992)), 0x10)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_97 + sx.q(temp0_1993)), 0x20)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_97 + sx.q(temp0_1994)), 0x30)
            zmm5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
            arg5[0].o = *(rdx_118 + rcx_97 + r15_9)
            void* rax_208 = rcx_97 + var_4a0_2[0].q
            arg6 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
            zmm2[0].o = *(rdx_120 + rax_208)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rcx_90 + rcx_97 i+ var_400_2[0]), 0x10)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rcx_92 + rcx_97 + var_3e0_2[0].q), 0x20)
            void* rax_214 = rcx_97 + var_420_2[0].q
            void* rdx_140 = rcx_97 + var_440_2[0].q
            void* rbx_79 = rcx_97 + var_460_2[0].q
            void* rdi_54 = rcx_97 + var_3c0_2[0].q
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            zmm0 = _mm256_mul_ps(arg11, _mm256_sub_ps(arg6, zmm5))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_164 + rdi_54), 0x30)
            double r15_10 = var_4e0[0]
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_10 i+ rax_214), 0x10)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(var_540[0].q + rdx_140), 0x20)
            arg12 = _mm256_add_ps(zmm5, zmm0)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_168 + rbx_79), 0x30)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            zmm2 = _mm256_and_ps(arg9, _mm256_insertf128_ps(zmm5, zmm2[0].o, 1))
            arg5[0].o = *(rdx_118 + sx.q(zmm2[0]) + rcx_97)
            int32_t temp0_2018 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
            int32_t temp0_2019 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            int32_t temp0_2020 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            void* rdi_57 = sx.q(zmm2[0]) + rcx_97
            int32_t temp0_2022 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
            int32_t temp0_2023 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            int32_t temp0_2024 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm2[0].o = *(rdx_120 + rdi_57)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rcx_90 + sx.q(temp0_2022) + rcx_97), 0x10)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rcx_92 + sx.q(temp0_2023) + rcx_97), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rax_164 + sx.q(temp0_2024) + rcx_97), 0x30)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                *(r15_10 i+ sx.q(temp0_2018) + rcx_97), 0x10)
            float* r10_14 = var_540[0].q
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                *(r10_14 + sx.q(temp0_2019) + rcx_97), 0x20)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                *(rax_168 + sx.q(temp0_2020) + rcx_97), 0x30)
            zmm2 =
                _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm5, zmm2[0].o, 1), zmm0))
            arg5 = _mm256_add_ps(zmm0, zmm2)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm4[0].o, var_5a0.o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, var_580_4[0].o)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            zmm2 = _mm256_and_ps(arg9, _mm256_insertf128_ps(zmm5, zmm2[0].o, 1))
            void* rdx_145 = sx.q(zmm2[0]) + rcx_97
            int32_t temp0_2043 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
            int32_t temp0_2044 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            int32_t temp0_2045 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm5[0].o = *(rdx_118 + rdx_145)
            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            arg6[0].o = *(rdx_120 + sx.q(zmm2[0]) + rcx_97)
            void* rdx_151 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)) + rcx_97
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_90 + rdx_151), 0x10)
            void* rdx_154 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)) + rcx_97
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_92 + rdx_154), 0x20)
            void* rdx_157 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)) + rcx_97
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_164 + rdx_157), 0x30)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                *(r15_10 i+ sx.q(temp0_2043) + rcx_97), 0x10)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                *(r10_14 + sx.q(temp0_2044) + rcx_97), 0x20)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                *(rax_168 + sx.q(temp0_2045) + rcx_97), 0x30)
            zmm5 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            zmm0 = _mm256_and_ps(arg9, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
            void* rdx_159 = sx.q(zmm0[0]) + rcx_97
            int32_t temp0_2063 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_2064 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_2065 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm1[0].o = *(rdx_118 + rdx_159)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm2[0].o = *(rdx_120 + sx.q(zmm0[0]) + rcx_97)
            int32_t temp0_2067 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_2068 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_2069 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rcx_90 + sx.q(temp0_2067) + rcx_97), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                *(rcx_92 + sx.q(temp0_2068) + rcx_97), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                *(rax_164 + sx.q(temp0_2069) + rcx_97), 0x30)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(r15_10 i+ sx.q(temp0_2063) + rcx_97), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(r10_14 + sx.q(temp0_2064) + rcx_97), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_168 + sx.q(temp0_2065) + rcx_97), 0x30)
            zmm0 = _mm256_add_ps(zmm5, 
                _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), zmm5)))
            zmm2 = _mm256_add_ps(arg7, _mm256_mul_ps(_mm256_sub_ps(arg12, arg7), var_600_8))
            zmm0 = _mm256_add_ps(zmm2, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_add_ps(arg5, _mm256_mul_ps(var_600_8, _mm256_sub_ps(zmm0, arg5))), 
                        zmm2), 
                    var_5e0_8))
            var_600_8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_600_8[0].o, var_600_8[0].o)
            zmm3 = var_640.32
            zmm1 = _mm256_cmp_ps(zmm3, var_600_8, 0xc)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm2[0].o &= var_6d0.o
            zmm1[0].o = __vandps_xmmdq_xmmdq_memdq(zmm1[0].o, var_680_8)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm2 = _mm256_rsqrt_ps(zmm3)
                zmm3 = _mm256_mul_ps(zmm2, _mm256_mul_ps(zmm3, zmm2))
                zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(zmm2, _mm256_sub_ps(data_142fc9480, zmm3)), data_142fc94a0)
                zmm3 = _mm256_rcp_ps(zmm2)
                zmm2 = _mm256_mul_ps(zmm3, zmm2)
                zmm2 = _mm256_add_ps(zmm0, _mm256_mul_ps(zmm3, _mm256_sub_ps(data_142fc94c0, zmm2)))
                zmm3[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm0 = _mm256_blendv_ps(zmm0, zmm2, _mm256_insertf128_ps(zmm3, zmm1[0].o, 1))
            
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg19), 1), var_320_2)
            int32_t i_7 = _mm256_movemask_ps(zmm1)
            
            if (i_7 == 0)
                result = 0
            else
                uint64_t i_1 = zx.q(i_7)
                result = 0
                
                do
                    uint64_t rdx_168
                    
                    if (i_1 == 0)
                        rdx_168 = 0x40
                        i_1 &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_140086d71:
                            float var_200[0x8] = zmm0
                            uint64_t rdx_169 = zx.q(rdx_168.d) & 7
                            zmm1[0].o = var_200[rdx_169]
                            *arg19 = zmm1[0]
                            float var_1e0[0x8] = var_660.32
                            *arg18 = var_1e0[rdx_169]
                    else
                        uint64_t rflags_4
                        rdx_168, rflags_4 = _bit_scan_forward(i_1)
                        i_1 &= not.q(1 << (rdx_168 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_140086d71
                    result.b = 1
                while (i_1 != 0)
else
    float var_690_1 = zmm1[0]
    float var_68c_1 = zmm2[0]
    float var_688_1 = zmm3[0]
    zmm1[0].o = __vmovsd_xmmdq_memq(*r12)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, r12[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_6a0_1 = zmm0[0]
    float temp0_12 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_13 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t r8_4 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
    double rsi
    
    if (r8_4 s<= 0)
        rsi = 0.0
        result = 0
    else
        result = 0
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        rsi = 0.0
        var_5a0 = r8_4
        
        while (true)
            bool cond:4_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:4_1))
                int64_t rax_4 = sx.q((rsi << 2).d * 3)
                zmm0[0].o = *(arg17 + rax_4)
                zmm1[0].o = *(arg17 + rax_4 + 0x10)
                zmm2[0].o = *(arg17 + rax_4 + 0x20)
                zmm3[0].o = *(arg17 + rax_4 + 0x30)
                zmm4[0].o = *(arg17 + rax_4 + 0x40)
                zmm5[0].o = *(arg17 + rax_4 + 0x50)
                arg5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xec)
                arg6[0].o = _mm_permute_ps(zmm2[0].o, 0x44)
                arg7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 8)
                arg6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0xec)
                arg5[0].o = _mm_permute_ps(zmm5[0].o, 0x44)
                arg8[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg5[0].o, 8)
                arg6[0].o = _mm_permute_ps(zmm0[0].o, 0xe5)
                arg5[0].o = _mm_permute_ps(zmm1[0].o, 0xf0)
                arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 1)
                arg6[0].o = _mm_permute_ps(zmm2[0].o, 0xa4)
                arg9[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 8)
                arg6[0].o = _mm_permute_ps(zmm3[0].o, 0xe5)
                arg5[0].o = _mm_permute_ps(zmm4[0].o, 0xf0)
                arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 1)
                arg6[0].o = _mm_permute_ps(zmm5[0].o, 0xa4)
                arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg6[0].o, 8)
                zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x4e)
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 2)
                zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0xc4)
                zmm1[0].o = _mm_permute_ps(zmm3[0].o, 0x4e)
                zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4[0].o, 2)
                zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0xc4)
                zmm2 = _mm256_insertf128_ps(arg7, arg8[0].o, 1)
                zmm3 = _mm256_insertf128_ps(arg9, arg5[0].o, 1)
                zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                float var_620_1[0x8] = zmm2
                float var_600_1[0x8] = zmm3
                float var_5e0_1[0x8] = zmm0
                float var_5c0_1[0x8] = arg11
                zmm1 = _mm256_broadcast_ss(arg16[3])
                float var_760_1[0x8] = zmm1
                float var_740_1[0x8] = zmm1
                float var_720_1[0x8] = zmm1
                float var_700_1[0x8] = zmm1
                zmm5 = _mm256_broadcast_ss(arg16[1])
                zmm4 = _mm256_mul_ps(zmm5, zmm0)
                arg5 = _mm256_broadcast_ss(arg16[2])
                arg6 = _mm256_mul_ps(arg5, zmm2)
                arg7 = _mm256_broadcast_ss(*arg16)
                arg8 = _mm256_mul_ps(arg7, zmm3)
                zmm3 = _mm256_sub_ps(zmm4, _mm256_mul_ps(arg5, zmm3))
                zmm0 = _mm256_sub_ps(arg6, _mm256_mul_ps(arg7, zmm0))
                zmm2 = _mm256_sub_ps(arg8, _mm256_mul_ps(zmm5, zmm2))
                zmm3 = _mm256_add_ps(zmm3, zmm3)
                zmm4 = _mm256_add_ps(zmm0, zmm0)
                zmm2 = _mm256_add_ps(zmm2, zmm2)
                zmm0 = _mm256_mul_ps(zmm1, zmm3)
                arg6 = _mm256_mul_ps(zmm1, zmm4)
                zmm1 = _mm256_mul_ps(zmm1, zmm2)
                arg8 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_620_1)
                arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_600_1)
                zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_5e0_1)
                arg9 = _mm256_mul_ps(zmm2, zmm5)
                arg10 = _mm256_mul_ps(zmm3, arg5)
                zmm0 = _mm256_mul_ps(zmm4, arg7)
                arg5 = _mm256_add_ps(arg8, _mm256_sub_ps(arg9, _mm256_mul_ps(zmm4, arg5)))
                zmm4 = _mm256_add_ps(arg6, _mm256_sub_ps(arg10, _mm256_mul_ps(zmm2, arg7)))
                zmm3 = _mm256_mul_ps(zmm3, zmm5)
                arg8 = _mm256_add_ps(arg5, _mm256_broadcast_ss(arg16[4]))
                zmm5 = _mm256_broadcast_ss(arg16[5])
                zmm2 = _mm256_broadcast_ss(arg16[6])
                arg6 = _mm256_broadcast_ss(var_690_1)
                arg5 = _mm256_cmp_ps(arg6, arg8, 1)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_760_1 = _mm256_maskstore_ps(arg5, arg6)
                
                zmm3 = _mm256_sub_ps(zmm0, zmm3)
                arg7 = _mm256_add_ps(zmm4, zmm5)
                zmm0 = _mm256_cmp_ps(arg11, arg11, 0xf)
                zmm4 = _mm256_xor_ps(arg5, zmm0)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    arg5 = _mm256_broadcast_ss(var_6a0_1)
                    zmm5 = _mm256_cmp_ps(arg8, arg5, 1)
                    arg6 = _mm256_and_ps(zmm5, zmm4)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        var_760_1 = _mm256_maskstore_ps(arg6, arg5)
                    
                    zmm4 = _mm256_andnot_ps(zmm5, zmm4)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_760_1 = _mm256_maskstore_ps(zmm4, arg8)
                
                zmm1 = _mm256_add_ps(zmm1, zmm3)
                zmm4 = _mm256_broadcast_ss(var_68c_1)
                zmm3 = _mm256_cmp_ps(zmm4, arg7, 1)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_740_1 = _mm256_maskstore_ps(zmm3, zmm4)
                
                zmm5 = _mm256_add_ps(zmm1, zmm2)
                zmm1 = _mm256_xor_ps(zmm3, zmm0)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm3 = _mm256_broadcast_ss(temp0_12)
                    zmm2 = _mm256_cmp_ps(arg7, zmm3, 1)
                    zmm4 = _mm256_and_ps(zmm2, zmm1)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_740_1 = _mm256_maskstore_ps(zmm4, zmm3)
                    
                    zmm1 = _mm256_andnot_ps(zmm2, zmm1)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_740_1 = _mm256_maskstore_ps(zmm1, arg7)
                
                zmm2 = _mm256_broadcast_ss(var_688_1)
                zmm1 = _mm256_cmp_ps(zmm2, zmm5, 1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_720_1 = _mm256_maskstore_ps(zmm1, zmm2)
                
                zmm0 = _mm256_xor_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2 = _mm256_broadcast_ss(temp0_13)
                    zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
                    zmm3 = _mm256_and_ps(zmm1, zmm0)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_720_1 = _mm256_maskstore_ps(zmm3, zmm2)
                    
                    zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_720_1 = _mm256_maskstore_ps(zmm0, zmm5)
                
                var_560.32 = zmm5
                var_540 = arg8
                double var_680_1[0x4] = arg7
                arg9 = _mm256_broadcast_ss(*r12)
                zmm0 = _mm256_sub_ps(var_760_1, arg9)
                arg11 = _mm256_broadcast_ss(*(r12 + 4))
                zmm1 = _mm256_sub_ps(var_740_1, arg11)
                zmm5 = _mm256_broadcast_ss(*arg3)
                zmm0 = _mm256_div_ps(zmm0, zmm5)
                arg5 = _mm256_broadcast_ss(*(arg3 + 4))
                zmm1 = _mm256_div_ps(zmm1, arg5)
                arg13 = _mm256_broadcast_ss(r12[1].d)
                var_500.32 = var_720_1
                zmm2 = _mm256_sub_ps(var_720_1, arg13)
                zmm3[0].o = arg3[1].d
                zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0)
                arg12 = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
                zmm4 = _mm256_div_ps(zmm2, arg12)
                zmm2 = _mm256_cvttps_epi32(zmm0)
                arg10 = _mm256_cvttps_epi32(zmm1)
                arg8 = _mm256_cvttps_epi32(zmm4)
                zmm0 = _mm256_mul_ps(zmm5, _mm256_cvtepi32_ps(zmm2))
                zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x20)
                zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                arg7[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                zmm1 = _mm256_insertf128_ps(arg7, zmm1[0].o, 1)
                arg7 = _mm256_mul_ps(arg5, _mm256_cvtepi32_ps(arg10))
                float var_580_1[0x8] = arg8
                arg8 = _mm256_mul_ps(arg12, _mm256_cvtepi32_ps(arg8))
                var_4e0 = arg9
                zmm0 = _mm256_add_ps(zmm0, arg9)
                var_340.32 = arg11
                arg9 = _mm256_add_ps(arg7, arg11)
                var_360.32 = arg13
                arg11 = _mm256_add_ps(arg8, arg13)
                zmm3[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142fc9580)
                arg7[0].o = _mm_permute_ps(zmm3[0].o, 0)
                arg7 = _mm256_insertf128_ps(arg7, arg7[0].o, 1)
                zmm0 = _mm256_add_ps(arg7, zmm0)
                arg8[0].o = _mm_permute_ps(zmm3[0].o, 0x55)
                arg8 = _mm256_insertf128_ps(arg8, arg8[0].o, 1)
                arg13 = _mm256_add_ps(arg8, arg9)
                zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xaa)
                arg9 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
                var_480.32 = var_760_1
                zmm3 = _mm256_blendv_ps(zmm1, zmm2, _mm256_cmp_ps(zmm0, var_760_1, 1))
                float var_760_2[0x8] = zmm3
                zmm0 = _mm256_cmp_ps(arg13, var_740_1, 1)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2 = arg10
                
                arg11 = _mm256_add_ps(arg9, arg11)
                var_520.32 = var_740_1
                arg13 = _mm256_cmp_ps(arg13, var_740_1, 5)
                var_760_1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
                var_740_1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg13[0].o, var_760_1[0].o)
                var_740_1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_740_1[0].o, zmm0[0].o)
                bool cond:8_1 = __vpmovmskb_gpr32d_xmmdq(var_740_1[0].o) == 0
                arg13[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                
                if (not(cond:8_1))
                    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                    var_740_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg13[0].o)
                    zmm1 = _mm256_insertf128_ps(var_740_1, zmm1[0].o, 1)
                
                arg10 = _mm256_blendv_ps(zmm1, zmm2, zmm0)
                float var_740_2[0x8] = arg10
                arg14 = var_500.32
                zmm0 = _mm256_cmp_ps(arg11, arg14, 1)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2 = var_580_1
                
                arg6 = _mm256_cmp_ps(arg11, arg14, 5)
                zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
                zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                    zmm1[0].o = _mm256_extractf128_ps(var_580_1[0].o, 1)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                    var_580_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_580_1[0].o, arg13[0].o)
                    zmm1 = _mm256_insertf128_ps(var_580_1, zmm1[0].o, 1)
                
                zmm0 = _mm256_blendv_ps(zmm1, zmm2, zmm0)
                zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm5, _mm256_cvtepi32_ps(zmm3)), 
                    var_4e0)
                zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg5, _mm256_cvtepi32_ps(arg10)), 
                    var_340.32)
                float var_720_2[0x8] = zmm0
                zmm0 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg12, _mm256_cvtepi32_ps(zmm0)), 
                    var_360.32)
                zmm1 = _mm256_add_ps(arg7, zmm1)
                zmm2 = _mm256_add_ps(arg8, zmm2)
                zmm0 = _mm256_add_ps(arg9, zmm0)
                arg7 = var_480.32
                zmm1 = _mm256_div_ps(_mm256_sub_ps(arg7, zmm1), zmm5)
                arg6 = var_520.32
                zmm2 = _mm256_div_ps(_mm256_sub_ps(arg6, zmm2), arg5)
                zmm0 = _mm256_div_ps(_mm256_sub_ps(arg14, zmm0), arg12)
                float var_620_2[0x8] = zmm1
                float var_600_2[0x8] = zmm2
                float var_5e0_2[0x8] = zmm0
                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                bool cond:16_1 = _mm256_movemask_ps(zmm0) == 0
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                
                if (not(cond:16_1))
                    var_760_2 = _mm256_maskstore_ps(zmm0, arg5)
                    var_620_2 = _mm256_maskstore_ps(zmm0, arg5)
                    zmm3 = var_760_2
                
                int32_t rax_24 = *arg4
                zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                zmm1[0].o = zx.o(rax_24 - 1)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm3 = var_680_1
                zmm5 = var_560.32
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm1[0].o = zx.o(rax_24 - 2)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                    var_760_2 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                    zmm1 = data_142fc95a0
                    var_620_2 = _mm256_maskstore_ps(zmm0, zmm1)
                
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg13[0].o, var_740_2[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg13[0].o, var_740_2[4].o)
                zmm0 = _mm256_sub_ps(arg7, var_540)
                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_740_2 = _mm256_maskstore_ps(zmm1, arg5)
                    var_600_2 = _mm256_maskstore_ps(zmm1, arg5)
                
                zmm1 = _mm256_sub_ps(arg6, zmm3)
                zmm0 = _mm256_mul_ps(zmm0, zmm0)
                int32_t rax_27 = arg4[1]
                zmm3[0].o = _mm256_extractf128_ps(var_740_2[0].o, 1)
                var_540[0].o = zx.o(rax_27 - 1)
                var_540[0].o = __vpshufd_xmmdq_xmmdq_immb(var_540[0].o, 0)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_540[0].o)
                var_740_2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_740_2[0].o, var_540[0].o)
                zmm2 = _mm256_insertf128_ps(var_740_2, zmm3[0].o, 1)
                
                if (_mm256_movemask_ps(zmm2) != 0)
                    zmm3[0].o = zx.o(rax_27 - 2)
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                    var_740_2 = _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                    var_600_2 = _mm256_maskstore_ps(zmm2, data_142fc95a0)
                
                zmm2 = _mm256_sub_ps(arg14, zmm5)
                zmm1 = _mm256_mul_ps(zmm1, zmm1)
                var_540[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg13[0].o, var_720_2[0].o)
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg13[0].o, var_720_2[4].o)
                zmm3 = _mm256_add_ps(zmm0, arg5)
                zmm0 = _mm256_insertf128_ps(var_540, zmm5[0].o, 1)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_720_2 = _mm256_maskstore_ps(zmm0, arg5)
                    var_5e0_2 = _mm256_maskstore_ps(zmm0, arg5)
                
                arg9 = var_720_2
                var_4e0[0] = rsi
                zmm0 = _mm256_mul_ps(zmm2, zmm2)
                zmm1 = _mm256_add_ps(zmm3, zmm1)
                int32_t rax_30 = arg4[2]
                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                zmm3[0].o = zx.o(rax_30 - 1)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                
                if (_mm256_movemask_ps(zmm2) != 0)
                    zmm3[0].o = zx.o(rax_30 - 2)
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                    double var_720_3[0x4] =
                        _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                    zmm3 = data_142fc95a0
                    var_5e0_2 = _mm256_maskstore_ps(zmm2, zmm3)
                    arg9 = var_720_3
                
                zmm0 = _mm256_add_ps(zmm1, zmm0)
                float var_680_2[0x8] = zmm0
                zmm0[0].o = zx.o(*(arg15 + 4))
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                arg6[0].o = var_760_2[0].o
                arg7[0].o = var_750
                arg5[0].o = var_740_2[0].o
                zmm0[0].o = var_740_2[4].o
                arg13[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg7[0].o)
                arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
                arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                zmm1[0].o = zx.o(*(arg15 + 8))
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                var_560.o = zmm2[0].o
                var_540[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                var_540[0].o = var_540[0].o
                var_540[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_540[0].o, arg9[0].o)
                arg10[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                var_540[0].o = __vpslld_xmmdq_xmmdq_immb(var_540[0].o, 2)
                int32_t temp0_280 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 1)
                int32_t temp0_281 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 2)
                float rbx_1 = var_540[0]
                int32_t temp0_282 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 3)
                var_540[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
                float* rax_33 = *(arg15 + 0x10)
                var_540[0].o = __vpslld_xmmdq_xmmdq_immb(var_540[0].o, 2)
                int64_t rbx_2 = sx.q(rbx_1)
                int64_t rsi_1 = sx.q(temp0_280)
                int64_t r9 = sx.q(temp0_281)
                int64_t rdi_1 = sx.q(var_540[0])
                int64_t r14_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 1))
                int64_t r10_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 2))
                int32_t temp0_287 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 3)
                var_540[0].o = *(rax_33 + rdi_1)
                var_540[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(var_540[0].o, *(rax_33 + r14_1), 0x10)
                var_540[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(var_540[0].o, *(rax_33 + r10_1), 0x20)
                int64_t rcx_12 = sx.q(temp0_287)
                var_540[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(var_540[0].o, *(rax_33 + rcx_12), 0x30)
                zmm5[0].o = *(rax_33 + rbx_2)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_33 + rsi_1), 0x10)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_33 + r9), 0x20)
                int64_t r12_1 = sx.q(temp0_282)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_33 + r12_1), 0x30)
                arg11 = _mm256_insertf128_ps(zmm5, var_540[0].o, 1)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                var_540[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                arg7[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_540[0].o)
                arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm3[0].o)
                arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm3[0].o)
                var_540[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                var_540[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_540[0].o, zmm1[0].o)
                var_540[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_540[0].o, arg10[0].o)
                var_540[0].o = __vpslld_xmmdq_xmmdq_immb(var_540[0].o, 2)
                int32_t temp0_306 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 1)
                int32_t temp0_307 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 2)
                int32_t temp0_308 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 3)
                float r15_1 = var_540[0]
                var_540[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
                var_540[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_540[0].o, zmm1[0].o)
                var_540[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_540[0].o, arg9[0].o)
                var_540[0].o = __vpslld_xmmdq_xmmdq_immb(var_540[0].o, 2)
                int32_t temp0_313 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 1)
                zmm5[0].o = *(rax_33 + sx.q(r15_1))
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_33 + sx.q(temp0_306)), 0x10)
                int32_t temp0_315 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 2)
                int32_t temp0_316 = __vpextrd_gpr32d_xmmdq_immb(var_540[0].o, 3)
                float r8_6 = var_540[0]
                var_540[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_33 + sx.q(temp0_307)), 0x20)
                var_540[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_540[0].o, 
                    *(rax_33 + sx.q(temp0_308)), 0x30)
                zmm5[0].o = *(rax_33 + sx.q(r8_6))
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_33 + sx.q(temp0_313)), 0x10)
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_33 + sx.q(temp0_315)), 0x20)
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_33 + sx.q(temp0_316)), 0x30)
                zmm4 = _mm256_insertf128_ps(zmm5, var_540[0].o, 1)
                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
                zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
                zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
                float r8_8 = zmm3[0]
                int32_t temp0_333 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
                int32_t temp0_334 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
                int32_t temp0_335 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
                zmm3[0].o = *(rax_33 + sx.q(r8_8))
                int32_t temp0_336 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
                zmm4 = _mm256_sub_ps(zmm4, arg11)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_33 + sx.q(temp0_333)), 0x10)
                int32_t temp0_339 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_33 + sx.q(temp0_334)), 0x20)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_33 + sx.q(temp0_335)), 0x30)
                float rdx_7 = zmm5[0]
                int32_t temp0_342 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
                arg12 = var_620_2
                zmm4 = _mm256_mul_ps(arg12, zmm4)
                zmm5[0].o = *(rax_33 + sx.q(rdx_7))
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_33 + sx.q(temp0_336)), 0x10)
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_33 + sx.q(temp0_339)), 0x20)
                zmm5[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_33 + sx.q(temp0_342)), 0x30)
                arg11 = _mm256_add_ps(arg11, zmm4)
                zmm4 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
                int64_t rdx_10 = sx.q(zmm2[0])
                int64_t rbx_7 = sx.q(zmm0[0])
                int32_t temp0_357 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                zmm3[0].o = *(rax_33 + rbx_7)
                int32_t temp0_358 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_33 + sx.q(temp0_357)), 0x10)
                int32_t temp0_360 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = *(rax_33 + rdx_10)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_33 + sx.q(temp0_358)), 0x20)
                int64_t rdx_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_33 + sx.q(temp0_360)), 0x30)
                int32_t temp0_364 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_33 + rdx_13), 0x10)
                int32_t temp0_366 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
                zmm5[0].o = *(rax_33 + rdi_1 + 4)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_33 + sx.q(temp0_364)), 0x20)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_33 + sx.q(temp0_366)), 0x30)
                zmm3 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                arg6[0].o = *(rax_33 + rbx_2 + 4)
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
                zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
                zmm3 = _mm256_mul_ps(arg12, _mm256_sub_ps(zmm3, zmm4))
                arg7 = _mm256_add_ps(zmm4, zmm3)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_33 + r14_1 + 4), 0x10)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_33 + r10_1 + 4), 0x20)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_33 + rcx_12 + 4), 0x30)
                zmm4[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_33 + rsi_1 + 4), 0x10)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_33 + r9 + 4), 0x20)
                zmm4[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_33 + r12_1 + 4), 0x30)
                zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
                zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
                float rcx_15 = zmm4[0]
                int32_t temp0_386 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1)
                int32_t temp0_387 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
                int32_t temp0_388 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3)
                zmm4[0].o = *(rax_33 + sx.q(rcx_15) + 4)
                int64_t rbx_15 = sx.q(zmm5[0])
                int32_t temp0_389 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
                int32_t temp0_390 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
                int32_t temp0_391 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
                zmm5[0].o = *(rax_33 + rbx_15 + 4)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                    *(rax_33 + sx.q(temp0_389) + 4), 0x10)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                    *(rax_33 + sx.q(temp0_390) + 4), 0x20)
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                    *(rax_33 + sx.q(temp0_391) + 4), 0x30)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                    *(rax_33 + sx.q(temp0_386) + 4), 0x10)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                    *(rax_33 + sx.q(temp0_387) + 4), 0x20)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                    *(rax_33 + sx.q(temp0_388) + 4), 0x30)
                arg6 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_540[0].o)
                arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm4[0].o, var_560.o)
                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
                int64_t rcx_20 = sx.q(zmm1[0])
                int32_t temp0_405 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                int32_t temp0_406 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                int32_t temp0_407 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                zmm1[0].o = *(rax_33 + rcx_20 + 4)
                float rcx_21 = arg5[0]
                int32_t temp0_408 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
                int32_t temp0_409 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                int32_t temp0_410 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
                arg5[0].o = *(rax_33 + sx.q(rcx_21) + 4)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                    *(rax_33 + sx.q(temp0_408) + 4), 0x10)
                arg6 = _mm256_mul_ps(arg12, _mm256_sub_ps(arg6, zmm3))
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                    *(rax_33 + sx.q(temp0_409) + 4), 0x20)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                    *(rax_33 + sx.q(temp0_410) + 4), 0x30)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                    *(rax_33 + sx.q(temp0_405) + 4), 0x10)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                    *(rax_33 + sx.q(temp0_406) + 4), 0x20)
                arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                    *(rax_33 + sx.q(temp0_407) + 4), 0x30)
                zmm1 = _mm256_add_ps(zmm3, arg6)
                zmm3 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
                zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
                zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
                int32_t temp0_425 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
                int64_t rdx_23 = sx.q(zmm0[0])
                int32_t temp0_426 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                int32_t temp0_427 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                int32_t temp0_428 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = *(rax_33 + rdx_23 + 4)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                    *(rax_33 + sx.q(temp0_426) + 4), 0x10)
                float rdx_25 = zmm2[0]
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                    *(rax_33 + sx.q(temp0_427) + 4), 0x20)
                int32_t temp0_431 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                    *(rax_33 + sx.q(temp0_428) + 4), 0x30)
                int32_t temp0_433 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
                zmm2[0].o = *(rax_33 + sx.q(rdx_25) + 4)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                    *(rax_33 + sx.q(temp0_425) + 4), 0x10)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                    *(rax_33 + sx.q(temp0_431) + 4), 0x20)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                    *(rax_33 + sx.q(temp0_433) + 4), 0x30)
                zmm0 = _mm256_add_ps(zmm3, 
                    _mm256_mul_ps(arg12, 
                        _mm256_sub_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1), zmm3)))
                zmm2 = var_600_2
                zmm3 = _mm256_add_ps(arg11, _mm256_mul_ps(_mm256_sub_ps(arg7, arg11), zmm2))
                zmm0 = _mm256_add_ps(zmm3, 
                    __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_sub_ps(
                            _mm256_add_ps(zmm1, _mm256_mul_ps(zmm2, _mm256_sub_ps(zmm0, zmm1))), 
                            zmm3), 
                        var_5e0_2))
                zmm3 = var_680_2
                arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                zmm1 = _mm256_cmp_ps(zmm3, arg11, 0xc)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm2 = _mm256_rsqrt_ps(zmm3)
                    zmm3 = _mm256_mul_ps(zmm2, _mm256_mul_ps(zmm3, zmm2))
                    zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_mul_ps(zmm2, _mm256_sub_ps(data_142fc9480, zmm3)), data_142fc94a0)
                    zmm3 = _mm256_rcp_ps(zmm2)
                    zmm2 = _mm256_mul_ps(zmm3, zmm2)
                    zmm4 = data_142fc94c0
                    zmm2 = _mm256_add_ps(zmm0, _mm256_mul_ps(zmm3, _mm256_sub_ps(zmm4, zmm2)))
                    zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
                
                arg4 = var_6d0
                r12 = var_660
                r8_4 = var_5a0
                rsi = var_4e0[0]
                zmm1 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg19), 1)
                char i_4 = _mm256_movemask_ps(zmm1)
                
                if (i_4 == 0)
                    result = 0
                    rsi = zx.q(rsi.d + 8)
                    
                    if (rsi.d s>= r8_4)
                        break
                    
                    continue
                else
                    zmm1[0].o = zx.o(rsi.d)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                    zmm2[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
                    zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
                    zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                    uint64_t i_2 = zx.q(i_4)
                    result = 0
                    
                    do
                        uint64_t rdx_27
                        
                        if (i_2 == 0)
                            rdx_27 = 0x40
                            i_2 &= 0xfffffffffffffffe
                            
                            if ((result.b & 1) == 0)
                            label_1400835d1:
                                float var_240[0x8] = zmm0
                                uint64_t rdx_28 = zx.q(rdx_27.d) & 7
                                zmm2[0].o = zx.o(var_240[rdx_28])
                                *arg19 = zmm2[0]
                                float var_220[0x8] = zmm1
                                *arg18 = var_220[rdx_28]
                        else
                            uint64_t rflags_1
                            rdx_27, rflags_1 = _bit_scan_forward(i_2)
                            i_2 &= not.q(1 << (rdx_27 u% 0x40))
                            
                            if ((result.b & 1) == 0)
                                goto label_1400835d1
                        result.b = 1
                    while (i_2 != 0)
            
            rsi = zx.q(rsi.d + 8)
            
            if (rsi.d s>= r8_4)
                break
    
    if (rsi.d s< arg20)
        bool cond:2_1 = result.b != 0
        result.b = 1
        
        if (not(cond:2_1))
            zmm0[0].o = zx.o(rsi.d)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
            zmm4 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm2[0].o = zx.o(arg20)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
            zmm3 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            arg13 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm2[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            float var_680_5[0x8] = zmm3
            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm0 = _mm256_insertf128_ps(arg7, arg14[0].o, 1)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            var_660.32 = zmm4
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm2 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(zmm3, zmm2[0].o, 1))
            int64_t rax_71 = sx.q(zmm2[0])
            void* r14_3 = arg17 + (rax_71 << 2)
            zmm3[0].o = *(arg17 + (rax_71 << 2))
            int64_t rax_73 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            void* r8_23 = arg17 + (rax_73 << 2)
            int64_t rdx_56 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
            void* r10_3 = arg17 + (rdx_56 << 2)
            int64_t rbx_44 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
            void* r11_4 = arg17 + (rbx_44 << 2)
            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            int64_t rcx_72 = sx.q(zmm2[0])
            zmm4[0].o = *(arg17 + (rcx_72 << 2))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rax_73 << 2)), 0x10)
            void* rcx_73 = arg17 + (rcx_72 << 2)
            int64_t rax_75 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rdx_56 << 2)), 0x20)
            int32_t temp0_960 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg17 + (rax_75 << 2)), 0x10)
            void* r15_5 = arg17 + (rax_75 << 2)
            int64_t rax_76 = sx.q(temp0_960)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rbx_44 << 2)), 0x30)
            int32_t temp0_963 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg17 + (rax_76 << 2)), 0x20)
            void* rax_77 = arg17 + (rax_76 << 2)
            int64_t rdx_59 = sx.q(temp0_963)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (rdx_59 << 2)), 0x30)
            void* rbx_45 = arg17 + (rdx_59 << 2)
            arg8 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
            zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9540)
            zmm4[0].o = *(zx.q(zmm0[0]) + r14_3)
            int32_t* rdx_61 = zx.q(zmm3[0])
            zmm5[0].o = *(rdx_61 + r14_3)
            arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm1[0].o = *(zx.q(arg6[0]) + rcx_73)
            int32_t* rdx_63 = zx.q(arg5[0])
            zmm2[0].o = *(rdx_63 + rcx_73)
            uint64_t rcx_74 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_74 + r15_5), 0x10)
            float* rcx_75 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_75 + r15_5), 0x10)
            uint64_t rcx_76 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_76 + rax_77), 0x20)
            float* rcx_77 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_77 + rax_77), 0x20)
            float* rax_78 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_78 + rbx_45), 0x30)
            float* rax_79 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_79 + rbx_45), 0x30)
            uint64_t rax_80 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_80 + r8_23), 0x10)
            float* rdi_20 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdi_20 + r8_23), 0x10)
            uint64_t rax_81 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_81 + r10_3), 0x20)
            float* rbx_46 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rbx_46 + r10_3), 0x20)
            uint64_t rax_82 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_82 + r11_4), 0x30)
            float* rax_83 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_83 + r11_4), 0x30)
            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            float var_300_1[0x8] = arg8
            float var_2e0_1[0x8] = zmm2
            float var_2c0_1[0x8] = zmm1
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm3 = _mm256_broadcast_ss(arg16[3])
            float var_760_5[0x8] = zmm3
            float var_740_5[0x8] = zmm3
            float var_720_7[0x8] = zmm3
            float var_700_3[0x8] = zmm3
            zmm4 = _mm256_broadcast_ss(arg16[1])
            zmm5 = _mm256_mul_ps(zmm1, zmm4)
            arg5 = _mm256_broadcast_ss(arg16[2])
            arg6 = _mm256_mul_ps(arg8, arg5)
            arg9 = _mm256_broadcast_ss(*arg16)
            arg10 = _mm256_mul_ps(zmm2, arg9)
            zmm2 = _mm256_mul_ps(zmm2, arg5)
            arg5 = _mm256_mul_ps(zmm3, zmm0)
            zmm2 = _mm256_sub_ps(zmm5, zmm2)
            zmm1 = _mm256_sub_ps(arg6, _mm256_mul_ps(zmm1, arg9))
            zmm4 = _mm256_sub_ps(arg10, _mm256_mul_ps(arg8, zmm4))
            zmm5 = _mm256_sub_ps(arg5, arg5)
            arg5 = _mm256_add_ps(zmm2, zmm2)
            zmm1 = _mm256_add_ps(zmm1, zmm1)
            zmm4 = _mm256_add_ps(zmm4, zmm4)
            zmm2 = _mm256_add_ps(zmm5, zmm5)
            float var_620_5[0x8] = arg5
            float var_600_5[0x8] = zmm1
            float var_5e0_5[0x8] = zmm4
            float var_5c0_3[0x8] = zmm2
            zmm5 = _mm256_mul_ps(zmm3, arg5)
            arg6 = _mm256_mul_ps(zmm3, zmm1)
            arg8 = _mm256_mul_ps(zmm3, zmm4)
            zmm3 = _mm256_mul_ps(zmm3, zmm2)
            arg9 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_300_1)
            arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_2e0_1)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg8, var_2c0_1)
            double var_180_1[0x4] = arg9
            float var_160_1[0x8] = arg6
            float var_140_1[0x8] = zmm2
            float var_120_1[0x8] = __vaddps_ymmqq_ymmqq_memqq(zmm3, zmm0)
            zmm5 = _mm256_broadcast_ss(arg16[1])
            zmm3 = _mm256_mul_ps(zmm4, zmm5)
            arg8 = _mm256_broadcast_ss(arg16[2])
            arg10 = _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm1, arg8))
            arg11 = _mm256_broadcast_ss(*arg16)
            zmm3 = _mm256_mul_ps(zmm1, arg11)
            zmm1 = _mm256_mul_ps(zmm4, arg11)
            zmm1 = _mm256_sub_ps(_mm256_mul_ps(arg5, arg8), zmm1)
            zmm5 = _mm256_mul_ps(arg5, zmm5)
            zmm4 = _mm256_add_ps(arg9, arg10)
            arg5 = _mm256_add_ps(arg6, zmm1)
            zmm1 = _mm256_broadcast_ss(arg16[4])
            arg10 = _mm256_add_ps(zmm4, zmm1)
            arg6 = _mm256_broadcast_ss(var_690_1)
            zmm4 = _mm256_cmp_ps(arg6, arg10, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            var_6d0.o = arg14[0].o
            zmm1[0].o &= arg14[0].o
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            arg7 = _mm256_broadcast_ss(arg16[5])
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            char temp0_1047 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
            zmm1 = _mm256_broadcast_ss(arg16[6])
            
            if (temp0_1047 != 0)
                var_760_5 = _mm256_maskstore_ps(zmm4, arg6)
            
            zmm3 = _mm256_sub_ps(zmm3, zmm5)
            arg9 = _mm256_add_ps(arg5, arg7)
            zmm0 = _mm256_andnot_ps(zmm4, arg13)
            arg12 = var_660.32
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm0 = _mm256_xor_ps(zmm4, _mm256_cmp_ps(zmm0, zmm0, 0xf))
                zmm5 = _mm256_broadcast_ss(var_6a0_1)
                zmm4 = _mm256_cmp_ps(arg10, zmm5, 1)
                arg5 = _mm256_and_ps(zmm4, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg13)) != 0)
                    var_760_5 = _mm256_maskstore_ps(arg5, zmm5)
                
                zmm0 = _mm256_andnot_ps(zmm4, zmm0)
                zmm4 = _mm256_and_ps(zmm0, arg13)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    var_760_5 = _mm256_maskstore_ps(zmm0, arg10)
            
            zmm2 = _mm256_add_ps(zmm2, zmm3)
            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_680_5[0].o, arg12[0].o)
            zmm3 = _mm256_broadcast_ss(var_68c_1)
            zmm0 = _mm256_cmp_ps(zmm3, arg9, 1)
            zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm5[0].o &= var_6d0.o
            zmm4[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                var_740_5 = _mm256_maskstore_ps(zmm0, zmm3)
            
            zmm5 = _mm256_add_ps(zmm2, zmm1)
            zmm1 = _mm256_andnot_ps(zmm0, arg13)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                zmm0 = _mm256_xor_ps(zmm0, _mm256_cmp_ps(zmm1, zmm1, 0xf))
                zmm2 = _mm256_broadcast_ss(temp0_12)
                zmm1 = _mm256_cmp_ps(arg9, zmm2, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg13)) != 0)
                    var_740_5 = _mm256_maskstore_ps(zmm3, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
                    var_740_5 = _mm256_maskstore_ps(zmm0, arg9)
            
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_680_5[0].o, arg12[0].o)
            zmm1 = _mm256_broadcast_ss(var_688_1)
            zmm0 = _mm256_cmp_ps(zmm1, zmm5, 1)
            zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm3[0].o &= var_6d0.o
            zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                var_720_7 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm2[0].o = zx.o(0)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg13)) != 0)
                zmm0 = _mm256_xor_ps(zmm0, _mm256_cmp_ps(zmm2, zmm2, 0xf))
                zmm2 = _mm256_broadcast_ss(temp0_13)
                zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg13)) != 0)
                    var_720_7 = _mm256_maskstore_ps(zmm3, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
                    var_720_7 = _mm256_maskstore_ps(zmm0, zmm5)
            
            float var_4a0_1[0x8] = zmm5
            var_5a0.32 = arg10
            double var_580_3[0x4] = arg9
            float var_320_1[0x8] = arg13
            arg7 = var_740_5
            arg9 = _mm256_broadcast_ss(*r12)
            zmm0 = _mm256_sub_ps(var_760_5, arg9)
            zmm4 = _mm256_broadcast_ss(*(r12 + 4))
            zmm1 = _mm256_sub_ps(arg7, zmm4)
            arg14 = _mm256_broadcast_ss(*arg3)
            zmm2 = _mm256_div_ps(zmm0, arg14)
            zmm3 = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, zmm3)
            zmm0[0].o = arg3[1].d
            zmm2 = _mm256_cvttps_epi32(zmm2)
            zmm1 = _mm256_cvttps_epi32(zmm1)
            float var_4c0_1[0x8] = zmm1
            float var_3e0_1[0x8] = zmm3
            float var_420_1[0x8] = zmm4
            zmm1 = _mm256_add_ps(_mm256_mul_ps(zmm3, _mm256_cvtepi32_ps(zmm1)), zmm4)
            zmm3[0].o = __vmovsd_xmmdq_memq(*arg3)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0x20)
            arg5[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142fc9580)
            zmm3[0].o = _mm_permute_ps(arg5[0].o, 0x55)
            zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
            float var_440_1[0x8] = zmm3
            arg6 = _mm256_add_ps(zmm3, zmm1)
            zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            arg8 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            arg13 = _mm256_cmp_ps(arg6, arg7, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            arg10[0].o = var_6d0.o
            zmm1[0].o &= arg10[0].o
            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_680_5[0].o, arg12[0].o)
            var_680_5[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_680_5[0].o, zmm1[0].o)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
            zmm5 = _mm256_broadcast_ss(r12[1].d)
            var_640.32 = var_720_7
            zmm3 = _mm256_div_ps(_mm256_sub_ps(var_720_7, zmm5), zmm0)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            char temp0_1151 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            arg12 = _mm256_cvttps_epi32(zmm3)
            float var_3c0_1[0x8] = arg14
            zmm1 = _mm256_mul_ps(arg14, _mm256_cvtepi32_ps(zmm2))
            zmm3 = _mm256_mul_ps(zmm0, _mm256_cvtepi32_ps(arg12))
            double var_400_1[0x4] = arg9
            arg14 = _mm256_add_ps(zmm1, arg9)
            zmm1 = _mm256_add_ps(zmm3, zmm5)
            zmm3[0].o = _mm_permute_ps(arg5[0].o, 0)
            zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
            float var_460_1[0x8] = zmm3
            arg14 = _mm256_add_ps(zmm3, arg14)
            arg5[0].o = _mm_permute_ps(arg5[0].o, 0xaa)
            arg14 = _mm256_blendv_ps(arg8, zmm2, _mm256_cmp_ps(arg14, var_760_5, 1))
            arg5 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
            float var_760_6[0x8] = arg14
            double var_380_1[0x4] = arg7
            arg6 = _mm256_cmp_ps(arg6, arg7, 5)
            
            if (temp0_1151 != 0)
                zmm2 = var_4c0_1
            
            zmm1 = _mm256_add_ps(arg5, zmm1)
            arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm3[0].o = arg10[0].o & arg7[0].o
            arg6[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            bool cond:10_1 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0
            arg7[0].o = arg10[0].o
            
            if (not(cond:10_1))
                zmm3[0].o = _mm256_extractf128_ps(var_4c0_1[0].o, 1)
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                var_4c0_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_4c0_1[0].o, zmm5[0].o)
                arg8 = _mm256_insertf128_ps(var_4c0_1, zmm3[0].o, 1)
            
            arg9 = _mm256_blendv_ps(arg8, zmm2, arg13)
            double var_740_6[0x4] = arg9
            zmm3 = var_640.32
            arg6 = _mm256_cmp_ps(zmm1, zmm3, 5)
            arg13 = _mm256_cmp_ps(zmm1, zmm3, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            zmm1[0].o &= arg7[0].o
            zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            arg10 = var_5a0.32
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm2 = arg12
            
            zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm1[0].o &= arg7[0].o
            zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            arg6 = var_660.32
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
                zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm3[0].o)
                arg8 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            
            zmm1 = _mm256_blendv_ps(arg8, zmm2, arg13)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(var_3c0_1, _mm256_cvtepi32_ps(arg14)), 
                var_400_1)
            zmm3 = _mm256_cvtepi32_ps(arg9)
            arg9 = var_3e0_1
            zmm3 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg9, zmm3), var_420_1)
            float var_720_8[0x8] = zmm1
            zmm1 = _mm256_add_ps(_mm256_mul_ps(zmm0, _mm256_cvtepi32_ps(zmm1)), zmm5)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_460_1)
            zmm3 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_440_1)
            zmm1 = _mm256_add_ps(arg5, zmm1)
            zmm2 = _mm256_div_ps(_mm256_sub_ps(var_760_5, zmm2), var_3c0_1)
            zmm5 = var_380_1
            zmm3 = _mm256_div_ps(_mm256_sub_ps(zmm5, zmm3), arg9)
            arg5 = var_640.32
            zmm1 = _mm256_sub_ps(arg5, zmm1)
            zmm0 = _mm256_div_ps(zmm1, zmm0)
            float var_620_6[0x8] = zmm2
            float var_600_6[0x8] = zmm3
            float var_5e0_6[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
            zmm2[0].o = zmm0[0].o & arg7[0].o
            zmm3[0].o = zmm1[0].o & zmm4[0].o
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(0)
                var_760_6 = _mm256_maskstore_ps(zmm0, zmm1)
                var_620_6 = _mm256_maskstore_ps(zmm0, zmm1)
                arg14 = var_760_6
            
            zmm0 = _mm256_sub_ps(var_760_5, arg10)
            arg8 = var_680_5
            zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
            int32_t rax_102 = *arg4
            zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm2[0].o = zx.o(rax_102 - 1)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
            zmm4[0].o = zmm1[0].o & arg7[0].o
            zmm3[0].o &= zmm2[0].o
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            bool cond:20_1 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0
            zmm3 = var_580_3
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            
            if (not(cond:20_1))
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm2[0].o = zx.o(rax_102 - 2)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                var_760_6 = _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(zmm2, zmm2[0].o, 1))
                var_620_6 = _mm256_maskstore_ps(zmm1, data_142fc95a0)
            
            zmm2 = _mm256_sub_ps(zmm5, zmm3)
            zmm1 = _mm256_mul_ps(zmm0, zmm0)
            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_740_6[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_740_6[2].o)
            zmm5[0].o = zmm3[0].o & arg7[0].o
            zmm4[0].o &= zmm0[0].o
            zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            bool cond:22_1 = __vpmovmskb_gpr32d_xmmdq(zmm4[0].o) == 0
            var_4e0[0] = rdi_20
            var_540[0].q = rbx_46
            
            if (not(cond:22_1))
                zmm0 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
                zmm3[0].o = zx.o(0)
                var_740_6 = _mm256_maskstore_ps(zmm0, zmm3)
                var_600_6 = _mm256_maskstore_ps(zmm0, zmm3)
            
            zmm3 = var_740_6
            zmm4 = var_640.32
            zmm0 = _mm256_sub_ps(zmm4, var_4a0_1)
            zmm1 = _mm256_add_ps(zmm1, arg5)
            zmm2 = _mm256_mul_ps(zmm2, zmm2)
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
            int32_t rdx_65 = arg4[1]
            zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            arg5[0].o = zx.o(rdx_65 - 1)
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            arg5[0].o = zmm4[0].o & arg7[0].o
            zmm5[0].o &= zmm3[0].o
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
                zmm4[0].o = zx.o(rdx_65 - 2)
                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0)
                var_740_6 = _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(zmm4, zmm4[0].o, 1))
                zmm4 = data_142fc95a0
                var_600_6 = _mm256_maskstore_ps(zmm3, zmm4)
            
            zmm1 = _mm256_add_ps(zmm1, zmm2)
            zmm0 = _mm256_mul_ps(zmm0, zmm0)
            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_720_8[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_720_8[4].o)
            zmm5[0].o = zmm3[0].o & arg7[0].o
            zmm4[0].o &= zmm2[0].o
            zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                zmm3[0].o = zx.o(0)
                var_720_8 = _mm256_maskstore_ps(zmm2, zmm3)
                var_5e0_6 = _mm256_maskstore_ps(zmm2, zmm3)
            
            arg14 = var_720_8
            zmm0 = _mm256_add_ps(zmm1, zmm0)
            var_640.32 = zmm0
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
            int32_t rdx_68 = arg4[2]
            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm1[0].o = zx.o(rdx_68 - 1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
            zmm3[0].o = zmm0[0].o & arg7[0].o
            zmm2[0].o &= zmm1[0].o
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(rdx_68 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                float var_720_9[0x8] =
                    _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                zmm1 = data_142fc95a0
                var_5e0_6 = _mm256_maskstore_ps(zmm0, zmm1)
                arg14 = var_720_9
            
            zmm0[0].o = zx.o(*(arg15 + 4))
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            var_3c0_1[0].o = var_760_6[0].o
            zmm2[0].o = var_750
            arg5[0].o = var_740_6[0].o
            arg7[0].o = var_740_6[2].o
            arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_3c0_1[0].o)
            arg10[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg7[0].o)
            var_760_5[0].o = zmm5[0].o
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
            var_380_1[0].o = zmm0[0].o
            zmm3[0].o = zx.o(*(arg15 + 8))
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            var_580_3[0].o = zmm3[0].o
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
            var_5a0.o = zmm0[0].o
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            arg13[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            zmm3 = _mm256_insertf128_ps(zmm3, arg6[0].o, 1)
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg8[0].o, var_660.o)
            int32_t var_680_6[0x4] = zmm5[0].o
            arg9 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm5, var_6d0.o, 1)
            zmm3 = _mm256_and_ps(arg9, zmm3)
            int32_t temp0_1311 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1312 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
            float rdi_21 = zmm3[0]
            int32_t temp0_1313 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            int32_t temp0_1315 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1316 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            float rbx_51 = zmm3[0]
            int32_t temp0_1317 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            float* rcx_82 = *(arg15 + 0x10)
            int64_t r15_6 = sx.q(rdi_21)
            int64_t rdi_22 = sx.q(temp0_1311)
            var_420_1[0].q = rdi_22
            int64_t rsi_30 = sx.q(temp0_1312)
            var_440_1[0].q = rsi_30
            int64_t r8_25 = sx.q(temp0_1313)
            var_460_1[0].q = r8_25
            int64_t rax_104 = sx.q(rbx_51)
            var_4a0_1[0].q = rax_104
            int64_t rbx_52 = sx.q(temp0_1315)
            var_400_1[0] = rbx_52
            int64_t rdx_71 = sx.q(temp0_1316)
            var_3e0_1[0].q = rdx_71
            zmm3[0].o = *(rcx_82 + rax_104)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_82 + rbx_52), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_82 + rdx_71), 0x20)
            int64_t rdx_72 = sx.q(temp0_1317)
            var_3c0_1[0].q = rdx_72
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_82 + rdx_72), 0x30)
            arg6[0].o = *(rcx_82 + r15_6)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_82 + rdi_22), 0x10)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_82 + rsi_30), 0x20)
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_82 + r8_25), 0x30)
            zmm0 = _mm256_insertf128_ps(arg6, zmm3[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_3c0_1[0].o, zmm3[0].o)
            arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
            zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
            var_3c0_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_3c0_1[0].o, zmm4[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg14[0].o)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            zmm5 = _mm256_and_ps(arg9, _mm256_insertf128_ps(zmm5, arg6[0].o, 1))
            int32_t temp0_1340 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 1)
            int32_t temp0_1341 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 2)
            int32_t temp0_1342 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 3)
            float r12_3 = zmm5[0]
            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            int32_t temp0_1344 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            int32_t temp0_1345 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
            int32_t temp0_1346 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            float rax_105 = zmm5[0]
            arg5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
            zmm5[0].o = *(rcx_82 + sx.q(rax_105))
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_82 + sx.q(temp0_1344)), 0x10)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
            zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg13[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            arg7 = _mm256_insertf128_ps(zmm2, arg6[0].o, 1)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_82 + sx.q(temp0_1345)), 0x20)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            arg10[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_82 + sx.q(temp0_1346)), 0x30)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg5[0].o)
            zmm5[0].o = *(rcx_82 + sx.q(r12_3))
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_82 + sx.q(temp0_1340)), 0x10)
            zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_82 + sx.q(temp0_1341)), 0x20)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_82 + sx.q(temp0_1342)), 0x30)
            zmm5 = _mm256_and_ps(arg9, arg7)
            int32_t temp0_1374 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 1)
            int32_t temp0_1375 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 2)
            float r14_6 = zmm5[0]
            int32_t temp0_1376 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            int64_t rsi_32 = sx.q(zmm5[0])
            int32_t temp0_1378 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            int32_t temp0_1379 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
            int32_t temp0_1380 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            zmm5[0].o = *(rcx_82 + rsi_32)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_82 + sx.q(temp0_1378)), 0x10)
            zmm2 = _mm256_and_ps(arg9, zmm2)
            arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            int32_t temp0_1384 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_1385 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_1386 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            float rax_112 = arg5[0]
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_82 + sx.q(temp0_1379)), 0x20)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_82 + sx.q(temp0_1380)), 0x30)
            arg5[0].o = *(rcx_82 + sx.q(r14_6))
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_82 + sx.q(temp0_1374)), 0x10)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_82 + sx.q(temp0_1375)), 0x20)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rcx_82 + sx.q(temp0_1376)), 0x30)
            arg6[0].o = *(rcx_82 + sx.q(rax_112))
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_82 + sx.q(temp0_1384)), 0x10)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_760_5[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_380_1[0].o)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_82 + sx.q(temp0_1385)), 0x20)
            arg7 = zmm0
            arg11 = var_620_6
            zmm3 =
                _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm3, arg10[0].o, 1), arg7))
            arg7 = _mm256_add_ps(arg7, zmm3)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_82 + sx.q(temp0_1386)), 0x30)
            int64_t rax_117 = sx.q(zmm2[0])
            int32_t temp0_1401 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
            int32_t temp0_1402 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            int32_t temp0_1403 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm2[0].o = *(rcx_82 + rax_117)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_82 + sx.q(temp0_1401)), 0x10)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_82 + sx.q(temp0_1402)), 0x20)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_82 + sx.q(temp0_1403)), 0x30)
            zmm5 = _mm256_insertf128_ps(arg5, zmm5[0].o, 1)
            arg5[0].o = *(rdx_61 + rcx_82 + r15_6)
            void* rax_123 = rcx_82 + var_4a0_1[0].q
            arg6 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
            zmm2[0].o = *(rdx_63 + rax_123)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rcx_75 + rcx_82 i+ var_400_1[0]), 0x10)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rcx_77 + rcx_82 + var_3e0_1[0].q), 0x20)
            void* rax_129 = rcx_82 + var_420_1[0].q
            void* rdx_83 = rcx_82 + var_440_1[0].q
            void* rbx_57 = rcx_82 + var_460_1[0].q
            void* rdi_30 = rcx_82 + var_3c0_1[0].q
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            zmm0 = _mm256_mul_ps(arg11, _mm256_sub_ps(arg6, zmm5))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_79 + rdi_30), 0x30)
            double r15_7 = var_4e0[0]
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(r15_7 i+ rax_129), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(var_540[0].q + rdx_83), 0x20)
            arg12 = _mm256_add_ps(zmm5, zmm0)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_83 + rbx_57), 0x30)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            zmm2 = _mm256_and_ps(arg9, _mm256_insertf128_ps(zmm5, zmm2[0].o, 1))
            arg5[0].o = *(rdx_61 + sx.q(zmm2[0]) + rcx_82)
            int32_t temp0_1427 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
            int32_t temp0_1428 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            int32_t temp0_1429 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            void* rdi_33 = sx.q(zmm2[0]) + rcx_82
            int32_t temp0_1431 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
            int32_t temp0_1432 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            int32_t temp0_1433 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm2[0].o = *(rdx_63 + rdi_33)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rcx_75 + sx.q(temp0_1431) + rcx_82), 0x10)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rcx_77 + sx.q(temp0_1432) + rcx_82), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rax_79 + sx.q(temp0_1433) + rcx_82), 0x30)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                *(r15_7 i+ sx.q(temp0_1427) + rcx_82), 0x10)
            float* r10_8 = var_540[0].q
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                *(r10_8 + sx.q(temp0_1428) + rcx_82), 0x20)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                *(rax_83 + sx.q(temp0_1429) + rcx_82), 0x30)
            zmm2 =
                _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm5, zmm2[0].o, 1), zmm0))
            arg5 = _mm256_add_ps(zmm0, zmm2)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm4[0].o, var_5a0.o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, var_580_3[0].o)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            zmm2 = _mm256_and_ps(arg9, _mm256_insertf128_ps(zmm5, zmm2[0].o, 1))
            void* rdx_88 = sx.q(zmm2[0]) + rcx_82
            int32_t temp0_1452 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
            int32_t temp0_1453 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            int32_t temp0_1454 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm5[0].o = *(rdx_61 + rdx_88)
            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            arg6[0].o = *(rdx_63 + sx.q(zmm2[0]) + rcx_82)
            void* rdx_94 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)) + rcx_82
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_75 + rdx_94), 0x10)
            void* rdx_97 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)) + rcx_82
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rcx_77 + rdx_97), 0x20)
            void* rdx_100 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)) + rcx_82
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_79 + rdx_100), 0x30)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                *(r15_7 i+ sx.q(temp0_1452) + rcx_82), 0x10)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                *(r10_8 + sx.q(temp0_1453) + rcx_82), 0x20)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 
                *(rax_83 + sx.q(temp0_1454) + rcx_82), 0x30)
            zmm5 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            zmm0 = _mm256_and_ps(arg9, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
            void* rdx_102 = sx.q(zmm0[0]) + rcx_82
            int32_t temp0_1472 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_1473 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_1474 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm1[0].o = *(rdx_61 + rdx_102)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm2[0].o = *(rdx_63 + sx.q(zmm0[0]) + rcx_82)
            int32_t temp0_1476 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_1477 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_1478 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rcx_75 + sx.q(temp0_1476) + rcx_82), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                *(rcx_77 + sx.q(temp0_1477) + rcx_82), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                *(rax_79 + sx.q(temp0_1478) + rcx_82), 0x30)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(r15_7 i+ sx.q(temp0_1472) + rcx_82), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(r10_8 + sx.q(temp0_1473) + rcx_82), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_83 + sx.q(temp0_1474) + rcx_82), 0x30)
            zmm0 = _mm256_add_ps(zmm5, 
                _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), zmm5)))
            zmm2 = _mm256_add_ps(arg7, _mm256_mul_ps(_mm256_sub_ps(arg12, arg7), var_600_6))
            zmm0 = _mm256_add_ps(zmm2, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_add_ps(arg5, _mm256_mul_ps(var_600_6, _mm256_sub_ps(zmm0, arg5))), 
                        zmm2), 
                    var_5e0_6))
            var_600_6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_600_6[0].o, var_600_6[0].o)
            zmm3 = var_640.32
            zmm1 = _mm256_cmp_ps(zmm3, var_600_6, 0xc)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm2[0].o &= var_6d0.o
            zmm1[0].o = __vandps_xmmdq_xmmdq_memdq(zmm1[0].o, var_680_6)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm2 = _mm256_rsqrt_ps(zmm3)
                zmm3 = _mm256_mul_ps(zmm2, _mm256_mul_ps(zmm3, zmm2))
                zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(zmm2, _mm256_sub_ps(data_142fc9480, zmm3)), data_142fc94a0)
                zmm3 = _mm256_rcp_ps(zmm2)
                zmm2 = _mm256_mul_ps(zmm3, zmm2)
                zmm2 = _mm256_add_ps(zmm0, _mm256_mul_ps(zmm3, _mm256_sub_ps(data_142fc94c0, zmm2)))
                zmm3[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0].q)
                zmm0 = _mm256_blendv_ps(zmm0, zmm2, _mm256_insertf128_ps(zmm3, zmm1[0].o, 1))
            
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg19), 1), var_320_1)
            int32_t i_6 = _mm256_movemask_ps(zmm1)
            
            if (i_6 == 0)
                result = 0
            else
                uint64_t i_3 = zx.q(i_6)
                result = 0
                
                do
                    uint64_t rdx_111
                    
                    if (i_3 == 0)
                        rdx_111 = 0x40
                        i_3 &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_140085931:
                            float var_280[0x8] = zmm0
                            uint64_t rdx_112 = zx.q(rdx_111.d) & 7
                            zmm1[0].o = var_280[rdx_112]
                            *arg19 = zmm1[0]
                            float var_260[0x8] = var_660.32
                            *arg18 = var_260[rdx_112]
                    else
                        uint64_t rflags_3
                        rdx_111, rflags_3 = _bit_scan_forward(i_3)
                        i_3 &= not.q(1 << (rdx_111 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_140085931
                    result.b = 1
                while (i_3 != 0)
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
