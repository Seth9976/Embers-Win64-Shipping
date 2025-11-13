// 函数: sub_1400793e0
// 地址: 0x1400793e0
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
float zmm1[0x8] = *arg22
float zmm0[0x8]
zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, data_142fc9560)
int32_t temp0_3 = _mm256_movemask_ps(zmm1)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
double zmm2[0x4]
zmm2[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
double zmm3[0x4]
zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
int32_t* var_6a0 = arg4
double* var_768 = r12
int32_t result
int32_t var_5e0
uint64_t var_5a0
int64_t var_580
double* var_560
double var_540[0x2]
int64_t var_4e0
float var_4c0[0x8]
int64_t var_480
int64_t var_460
int64_t var_3c0
int64_t var_3a0
float zmm4[0x8]
float zmm5[0x8]

if (temp0_3 != 0xff)
    float var_6d0_1 = zmm1[0]
    float var_6cc_1 = zmm2[0].d
    float var_6c8_1 = zmm3[0].d
    zmm1[0].o = __vmovsd_xmmdq_memq(*r12)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, r12[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_6e0_1 = zmm0[0]
    float temp0_478 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_479 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t r8_18 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
    uint64_t rsi_17
    
    if (r8_18 s<= 0)
        result = 0
        rsi_17 = 0
    else
        rsi_17 = 0
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        result = 0
        var_5e0 = r8_18
        
        while (true)
            bool cond:3_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:3_1))
                int64_t rax_39 = sx.q((rsi_17 << 2).d)
                zmm2[0].o = *(arg18 + rax_39)
                zmm1[0].o = *(arg18 + rax_39 + 0x10)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                var_540 = zmm1[0].o
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                double var_520_2[0x4] = zmm2
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                int64_t rdi_17 = sx.q(zmm1[0])
                int64_t r11_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                int64_t r10_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                int64_t r8_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                int64_t rax_42 = sx.q(zmm0[0])
                int64_t rsi_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                int64_t rdx_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                int64_t rcx_46 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                zmm0[0].o = *(arg17 + (rax_42 << 2))
                zmm1[0].o = *(arg17 + (rax_42 << 2) + 4)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + (rsi_19 << 2)), 0x10)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + (rdx_22 << 2)), 0x20)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + (rcx_46 << 2)), 0x30)
                zmm2[0].o = *(arg17 + (rdi_17 << 2))
                zmm3[0].o = *(arg17 + (rdi_17 << 2) + 4)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r11_2 << 2)), 0x10)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r10_3 << 2)), 0x20)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r8_19 << 2)), 0x30)
                zmm1[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + (rsi_19 << 2) + 4), 0x10)
                zmm1[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + (rdx_22 << 2) + 4), 0x20)
                zmm1[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + (rcx_46 << 2) + 4), 0x30)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (r11_2 << 2) + 4), 0x10)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (r10_3 << 2) + 4), 0x20)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (r8_19 << 2) + 4), 0x30)
                zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                zmm2[0].o = *(arg17 + (rdi_17 << 2) + 8)
                zmm3[0].o = *(arg17 + (rax_42 << 2) + 8)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rsi_19 << 2) + 8), 0x10)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rdx_22 << 2) + 8), 0x20)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rcx_46 << 2) + 8), 0x30)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r11_2 << 2) + 8), 0x10)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r10_3 << 2) + 8), 0x20)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r8_19 << 2) + 8), 0x30)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                float var_660_3[0x8] = zmm0
                float var_640_3[0x8] = zmm1
                double var_620_3[0x4] = zmm2
                float var_600_2[0x8] = arg11
                zmm3 = _mm256_broadcast_ss(arg16[3])
                double var_760_3[0x4] = zmm3
                double var_740_3[0x4] = zmm3
                double var_720_4[0x4] = zmm3
                double var_700_2[0x4] = zmm3
                zmm5 = _mm256_broadcast_ss(arg16[1])
                zmm4 = _mm256_mul_ps(zmm2, zmm5)
                arg5 = _mm256_broadcast_ss(arg16[2])
                arg6 = _mm256_mul_ps(zmm0, arg5)
                arg7 = _mm256_broadcast_ss(*arg16)
                arg8 = _mm256_mul_ps(zmm1, arg7)
                zmm1 = _mm256_sub_ps(zmm4, _mm256_mul_ps(zmm1, arg5))
                zmm2 = _mm256_sub_ps(arg6, _mm256_mul_ps(zmm2, arg7))
                zmm0 = _mm256_sub_ps(arg8, _mm256_mul_ps(zmm0, zmm5))
                arg6 = _mm256_add_ps(zmm1, zmm1)
                zmm2 = _mm256_add_ps(zmm2, zmm2)
                zmm4 = _mm256_add_ps(zmm0, zmm0)
                zmm0 = _mm256_mul_ps(zmm3, arg6)
                zmm1 = _mm256_mul_ps(zmm3, zmm2)
                zmm3 = _mm256_mul_ps(zmm3, zmm4)
                arg8 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_660_3)
                arg9 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_640_3)
                zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_620_3)
                zmm3 = _mm256_mul_ps(zmm4, zmm5)
                arg10 = _mm256_mul_ps(arg6, arg5)
                zmm0 = _mm256_mul_ps(zmm2, arg7)
                zmm2 = _mm256_add_ps(arg8, _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm2, arg5)))
                zmm4 = _mm256_add_ps(arg9, _mm256_sub_ps(arg10, _mm256_mul_ps(zmm4, arg7)))
                zmm3 = _mm256_mul_ps(arg6, zmm5)
                arg8 = _mm256_add_ps(zmm2, _mm256_broadcast_ss(arg16[4]))
                zmm5 = _mm256_broadcast_ss(arg16[5])
                zmm2 = _mm256_broadcast_ss(arg16[6])
                arg6 = _mm256_broadcast_ss(var_6d0_1)
                arg5 = _mm256_cmp_ps(arg6, arg8, 1)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_760_3 = _mm256_maskstore_ps(arg5, arg6)
                
                zmm3 = _mm256_sub_ps(zmm0, zmm3)
                arg7 = _mm256_add_ps(zmm4, zmm5)
                zmm0 = _mm256_cmp_ps(arg11, arg11, 0xf)
                zmm4 = _mm256_xor_ps(arg5, zmm0)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    arg5 = _mm256_broadcast_ss(var_6e0_1)
                    zmm5 = _mm256_cmp_ps(arg8, arg5, 1)
                    arg6 = _mm256_and_ps(zmm5, zmm4)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        var_760_3 = _mm256_maskstore_ps(arg6, arg5)
                    
                    zmm4 = _mm256_andnot_ps(zmm5, zmm4)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_760_3 = _mm256_maskstore_ps(zmm4, arg8)
                
                zmm1 = _mm256_add_ps(zmm1, zmm3)
                zmm4 = _mm256_broadcast_ss(var_6cc_1)
                zmm3 = _mm256_cmp_ps(zmm4, arg7, 1)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_740_3 = _mm256_maskstore_ps(zmm3, zmm4)
                
                zmm5 = _mm256_add_ps(zmm1, zmm2)
                zmm1 = _mm256_xor_ps(zmm3, zmm0)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm3 = _mm256_broadcast_ss(temp0_478)
                    zmm2 = _mm256_cmp_ps(arg7, zmm3, 1)
                    zmm4 = _mm256_and_ps(zmm2, zmm1)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_740_3 = _mm256_maskstore_ps(zmm4, zmm3)
                    
                    zmm1 = _mm256_andnot_ps(zmm2, zmm1)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_740_3 = _mm256_maskstore_ps(zmm1, arg7)
                
                zmm2 = _mm256_broadcast_ss(var_6c8_1)
                zmm1 = _mm256_cmp_ps(zmm2, zmm5, 1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_720_4 = _mm256_maskstore_ps(zmm1, zmm2)
                
                zmm0 = _mm256_xor_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm2 = _mm256_broadcast_ss(temp0_479)
                    zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
                    zmm3 = _mm256_and_ps(zmm1, zmm0)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        var_720_4 = _mm256_maskstore_ps(zmm3, zmm2)
                    
                    zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_720_4 = _mm256_maskstore_ps(zmm0, zmm5)
                
                var_4c0 = zmm5
                float var_680_2[0x8] = arg8
                var_580.32 = arg7
                arg13 = var_740_3
                arg9 = _mm256_broadcast_ss(*r12)
                zmm0 = _mm256_sub_ps(var_760_3, arg9)
                arg11 = _mm256_broadcast_ss(*(r12 + 4))
                zmm1 = _mm256_sub_ps(arg13, arg11)
                zmm5 = _mm256_broadcast_ss(*arg3)
                zmm0 = _mm256_div_ps(zmm0, zmm5)
                arg5 = _mm256_broadcast_ss(*(arg3 + 4))
                zmm1 = _mm256_div_ps(zmm1, arg5)
                arg12 = _mm256_broadcast_ss(r12[1].d)
                var_4e0.32 = var_720_4
                zmm2 = _mm256_sub_ps(var_720_4, arg12)
                zmm4[0].o = arg3[1].d
                zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0)
                arg14 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
                zmm3 = _mm256_div_ps(zmm2, arg14)
                zmm2 = _mm256_cvttps_epi32(zmm0)
                arg10 = _mm256_cvttps_epi32(zmm1)
                arg8 = _mm256_cvttps_epi32(zmm3)
                zmm0 = _mm256_mul_ps(zmm5, _mm256_cvtepi32_ps(zmm2))
                zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4[0].o, 0x20)
                zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                zmm4 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                arg6 = _mm256_mul_ps(arg5, _mm256_cvtepi32_ps(arg10))
                float var_5c0_2[0x8] = arg8
                arg8 = _mm256_mul_ps(arg14, _mm256_cvtepi32_ps(arg8))
                var_480.32 = arg9
                zmm0 = _mm256_add_ps(zmm0, arg9)
                var_3a0.32 = arg11
                arg9 = _mm256_add_ps(arg6, arg11)
                var_3c0.32 = arg12
                arg11 = _mm256_add_ps(arg8, arg12)
                zmm1[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9580)
                arg6[0].o = _mm_permute_ps(zmm1[0].o, 0)
                zmm3 = _mm256_insertf128_ps(arg6, arg6[0].o, 1)
                arg6 = arg13
                double var_500_2[0x4] = zmm3
                zmm0 = _mm256_add_ps(zmm3, zmm0)
                arg8[0].o = _mm_permute_ps(zmm1[0].o, 0x55)
                arg8 = _mm256_insertf128_ps(arg8, arg8[0].o, 1)
                arg12 = _mm256_add_ps(arg8, arg9)
                zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
                arg9 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
                var_460.32 = var_760_3
                zmm0 = _mm256_blendv_ps(zmm4, zmm2, _mm256_cmp_ps(zmm0, var_760_3, 1))
                float var_760_4[0x8] = zmm0
                zmm1 = _mm256_cmp_ps(arg12, arg13, 1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm2 = arg10
                
                arg11 = _mm256_add_ps(arg9, arg11)
                arg12 = _mm256_cmp_ps(arg12, arg6, 5)
                arg13[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
                zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                    zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                    zmm4 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                
                arg12 = arg6
                arg10 = _mm256_blendv_ps(zmm4, zmm2, zmm1)
                float var_740_4[0x8] = arg10
                arg13 = var_4e0.32
                zmm1 = _mm256_cmp_ps(arg11, arg13, 1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm2 = var_5c0_2
                
                zmm3 = _mm256_cmp_ps(arg11, arg13, 5)
                arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                bool cond:7_1 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0
                arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                
                if (not(cond:7_1))
                    zmm3[0].o = _mm256_extractf128_ps(var_5c0_2[0].o, 1)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
                    var_5c0_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_5c0_2[0].o, arg11[0].o)
                    zmm4 = _mm256_insertf128_ps(var_5c0_2, zmm3[0].o, 1)
                
                zmm1 = _mm256_blendv_ps(zmm4, zmm2, zmm1)
                zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm5, _mm256_cvtepi32_ps(zmm0)), 
                    var_480.32)
                zmm3 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg5, _mm256_cvtepi32_ps(arg10)), 
                    var_3a0.32)
                float var_720_5[0x8] = zmm1
                zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg14, _mm256_cvtepi32_ps(zmm1)), 
                    var_3c0.32)
                zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_500_2)
                zmm3 = _mm256_add_ps(arg8, zmm3)
                zmm1 = _mm256_add_ps(arg9, zmm1)
                arg7 = var_460.32
                zmm2 = _mm256_div_ps(_mm256_sub_ps(arg7, zmm2), zmm5)
                zmm3 = _mm256_div_ps(_mm256_sub_ps(arg12, zmm3), arg5)
                zmm1 = _mm256_div_ps(_mm256_sub_ps(arg13, zmm1), arg14)
                double var_660_4[0x4] = zmm2
                double var_640_4[0x4] = zmm3
                float var_620_4[0x8] = zmm1
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                bool cond:9_1 = _mm256_movemask_ps(zmm1) == 0
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                
                if (not(cond:9_1))
                    var_760_4 = _mm256_maskstore_ps(zmm1, arg5)
                    var_660_4 = _mm256_maskstore_ps(zmm1, arg5)
                    zmm0 = var_760_4
                
                int32_t rax_62 = *arg4
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm2[0].o = zx.o(rax_62 - 1)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                zmm3 = var_580.32
                zmm5 = var_4c0
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm1[0].o = zx.o(rax_62 - 2)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                    var_760_4 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                    zmm1 = data_142fc95a0
                    var_660_4 = _mm256_maskstore_ps(zmm0, zmm1)
                
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_740_4[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_740_4[4].o)
                zmm0 = _mm256_sub_ps(arg7, var_680_2)
                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_740_4 = _mm256_maskstore_ps(zmm1, arg5)
                    var_640_4 = _mm256_maskstore_ps(zmm1, arg5)
                
                zmm2 = var_740_4
                zmm1 = _mm256_sub_ps(arg12, zmm3)
                zmm0 = _mm256_mul_ps(zmm0, zmm0)
                int32_t rax_65 = arg4[1]
                zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                var_680_2[0].o = zx.o(rax_65 - 1)
                var_680_2[0].o = __vpshufd_xmmdq_xmmdq_immb(var_680_2[0].o, 0)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_680_2[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_680_2[0].o)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                
                if (_mm256_movemask_ps(zmm2) != 0)
                    zmm3[0].o = zx.o(rax_65 - 2)
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                    var_740_4 = _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                    var_640_4 = _mm256_maskstore_ps(zmm2, data_142fc95a0)
                
                zmm2 = _mm256_sub_ps(arg13, zmm5)
                zmm1 = _mm256_mul_ps(zmm1, zmm1)
                var_680_2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_720_5[0].o)
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_720_5[4].o)
                zmm3 = _mm256_add_ps(zmm0, arg5)
                zmm0 = _mm256_insertf128_ps(var_680_2, zmm5[0].o, 1)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_720_5 = _mm256_maskstore_ps(zmm0, arg5)
                    var_620_4 = _mm256_maskstore_ps(zmm0, arg5)
                
                arg9 = var_720_5
                zmm0 = _mm256_mul_ps(zmm2, zmm2)
                zmm1 = _mm256_add_ps(zmm3, zmm1)
                int32_t rax_68 = arg4[2]
                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                zmm3[0].o = zx.o(rax_68 - 1)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                
                if (_mm256_movemask_ps(zmm2) != 0)
                    zmm3[0].o = zx.o(rax_68 - 2)
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                    float var_720_6[0x8] =
                        _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                    zmm3 = data_142fc95a0
                    var_620_4 = _mm256_maskstore_ps(zmm2, zmm3)
                    arg9 = var_720_6
                
                zmm0 = _mm256_add_ps(zmm1, zmm0)
                var_580.32 = zmm0
                zmm0[0].o = zx.o(*(arg15 + 4))
                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                arg8[0].o = var_760_4[0].o
                zmm2[0].o = var_760_4[4].o
                arg7[0].o = var_740_4[0].o
                var_680_2[0].o = var_740_4[4].o
                arg13[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg7[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, var_680_2[0].o)
                zmm5[0].o = zx.o(*(arg15 + 8))
                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0)
                zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                var_4c0[0].o = zmm3[0].o
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
                var_680_2[0].o = zmm0[0].o
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                arg10[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
                int32_t temp0_753 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                int32_t temp0_754 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                float rbx_29 = zmm0[0]
                int32_t temp0_755 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                float* rax_71 = *(arg15 + 0x10)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
                int64_t r15_3 = sx.q(rbx_29)
                int64_t r14_2 = sx.q(temp0_753)
                int64_t rbx_30 = sx.q(temp0_754)
                int64_t r10_4 = sx.q(zmm0[0])
                int64_t r11_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                int64_t r9_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                int32_t temp0_760 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = *(rax_71 + r10_4)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_71 + r11_3), 0x10)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_71 + r9_3), 0x20)
                int64_t r13_2 = sx.q(temp0_760)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_71 + r13_2), 0x30)
                arg5[0].o = *(rax_71 + r15_3)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_71 + r14_2), 0x10)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_71 + rbx_30), 0x20)
                int64_t r8_20 = sx.q(temp0_755)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_71 + r8_20), 0x30)
                arg11 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                arg8[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm3[0].o)
                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg6[0].o)
                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, var_680_2[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
                int32_t temp0_779 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                int32_t temp0_780 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                int32_t temp0_781 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                float rbx_31 = zmm1[0]
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
                int32_t temp0_786 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                zmm2[0].o = *(rax_71 + sx.q(rbx_31))
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_71 + sx.q(temp0_779)), 0x10)
                int32_t temp0_788 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                int32_t temp0_789 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                float rcx_57 = zmm1[0]
                zmm1[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_71 + sx.q(temp0_780)), 0x20)
                zmm1[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_71 + sx.q(temp0_781)), 0x30)
                zmm2[0].o = *(rax_71 + sx.q(rcx_57))
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_71 + sx.q(temp0_786)), 0x10)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_71 + sx.q(temp0_788)), 0x20)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_71 + sx.q(temp0_789)), 0x30)
                zmm0 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_680_2[0].o, zmm3[0].o)
                zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                var_680_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                var_680_2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_680_2[0].o, zmm5[0].o)
                zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg9[0].o)
                var_680_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_680_2[0].o, arg10[0].o)
                var_680_2[0].o = __vpslld_xmmdq_xmmdq_immb(var_680_2[0].o, 2)
                zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
                float rcx_59 = var_680_2[0]
                int32_t temp0_806 = __vpextrd_gpr32d_xmmdq_immb(var_680_2[0].o, 1)
                int32_t temp0_807 = __vpextrd_gpr32d_xmmdq_immb(var_680_2[0].o, 2)
                int32_t temp0_808 = __vpextrd_gpr32d_xmmdq_immb(var_680_2[0].o, 3)
                var_680_2[0].o = *(rax_71 + sx.q(rcx_59))
                int32_t temp0_809 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
                zmm0 = _mm256_sub_ps(zmm0, arg11)
                var_680_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_680_2[0].o, 
                    *(rax_71 + sx.q(temp0_806)), 0x10)
                int32_t temp0_812 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
                var_680_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_680_2[0].o, 
                    *(rax_71 + sx.q(temp0_807)), 0x20)
                var_680_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_680_2[0].o, 
                    *(rax_71 + sx.q(temp0_808)), 0x30)
                int32_t rsi_27 = zmm3[0].d
                int32_t temp0_815 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
                arg7 = var_660_4
                zmm0 = _mm256_mul_ps(arg7, zmm0)
                zmm3[0].o = *(rax_71 + sx.q(rsi_27))
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_71 + sx.q(temp0_809)), 0x10)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_71 + sx.q(temp0_812)), 0x20)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_71 + sx.q(temp0_815)), 0x30)
                arg11 = _mm256_add_ps(arg11, zmm0)
                zmm3 = _mm256_insertf128_ps(zmm3, var_680_2[0].o, 1)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
                int64_t rcx_64 = sx.q(zmm0[0])
                int64_t rdx_34 = sx.q(zmm1[0])
                int32_t temp0_830 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                zmm2[0].o = *(rax_71 + rdx_34)
                int32_t temp0_831 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_71 + sx.q(temp0_830)), 0x10)
                int32_t temp0_833 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                zmm1[0].o = *(rax_71 + rcx_64)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_71 + sx.q(temp0_831)), 0x20)
                int64_t rcx_67 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_71 + sx.q(temp0_833)), 0x30)
                int32_t temp0_837 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_71 + rcx_67), 0x10)
                int32_t temp0_839 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                var_680_2[0].o = *(rax_71 + r10_4 + 4)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_71 + sx.q(temp0_837)), 0x20)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_71 + sx.q(temp0_839)), 0x30)
                zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                arg5[0].o = *(rax_71 + r15_3 + 4)
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
                zmm2 = _mm256_mul_ps(arg7, _mm256_sub_ps(zmm2, zmm3))
                arg8 = _mm256_add_ps(zmm3, zmm2)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(var_680_2[0].o, *(rax_71 + r11_3 + 4), 0x10)
                zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_71 + r9_3 + 4), 0x20)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_71 + r13_2 + 4), 0x30)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_71 + r14_2 + 4), 0x10)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_71 + rbx_30 + 4), 0x20)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_71 + r8_20 + 4), 0x30)
                zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                var_680_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                var_680_2[0].o = __vpslld_xmmdq_xmmdq_immb(var_680_2[0].o, 2)
                zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
                int32_t rcx_71 = zmm3[0].d
                int32_t temp0_859 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
                int32_t temp0_860 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
                int32_t temp0_861 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
                zmm3[0].o = *(rax_71 + sx.q(rcx_71) + 4)
                int64_t rbx_36 = sx.q(var_680_2[0])
                int32_t temp0_862 = __vpextrd_gpr32d_xmmdq_immb(var_680_2[0].o, 1)
                int32_t temp0_863 = __vpextrd_gpr32d_xmmdq_immb(var_680_2[0].o, 2)
                int32_t temp0_864 = __vpextrd_gpr32d_xmmdq_immb(var_680_2[0].o, 3)
                var_680_2[0].o = *(rax_71 + rbx_36 + 4)
                var_680_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_680_2[0].o, 
                    *(rax_71 + sx.q(temp0_862) + 4), 0x10)
                var_680_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_680_2[0].o, 
                    *(rax_71 + sx.q(temp0_863) + 4), 0x20)
                var_680_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_680_2[0].o, 
                    *(rax_71 + sx.q(temp0_864) + 4), 0x30)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                    *(rax_71 + sx.q(temp0_859) + 4), 0x10)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                    *(rax_71 + sx.q(temp0_860) + 4), 0x20)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                    *(rax_71 + sx.q(temp0_861) + 4), 0x30)
                zmm4 = _mm256_insertf128_ps(zmm3, var_680_2[0].o, 1)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_680_2[0].o)
                arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm3[0].o, var_4c0[0].o)
                arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
                int64_t rcx_76 = sx.q(arg5[0])
                int32_t temp0_878 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
                int32_t temp0_879 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                int32_t temp0_880 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
                arg5[0].o = *(rax_71 + rcx_76 + 4)
                float rcx_77 = arg6[0]
                int32_t temp0_881 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
                int32_t temp0_882 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                int32_t temp0_883 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
                arg6[0].o = *(rax_71 + sx.q(rcx_77) + 4)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                    *(rax_71 + sx.q(temp0_881) + 4), 0x10)
                zmm4 = _mm256_mul_ps(arg7, _mm256_sub_ps(zmm4, zmm2))
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                    *(rax_71 + sx.q(temp0_882) + 4), 0x20)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                    *(rax_71 + sx.q(temp0_883) + 4), 0x30)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                    *(rax_71 + sx.q(temp0_878) + 4), 0x10)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                    *(rax_71 + sx.q(temp0_879) + 4), 0x20)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                    *(rax_71 + sx.q(temp0_880) + 4), 0x30)
                zmm2 = _mm256_add_ps(zmm2, zmm4)
                zmm4 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
                int32_t temp0_898 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                int64_t rdx_46 = sx.q(zmm0[0])
                int32_t temp0_899 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                int32_t temp0_900 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                int32_t temp0_901 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = *(rax_71 + rdx_46 + 4)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                    *(rax_71 + sx.q(temp0_899) + 4), 0x10)
                float rdx_48 = zmm1[0]
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                    *(rax_71 + sx.q(temp0_900) + 4), 0x20)
                int32_t temp0_904 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                    *(rax_71 + sx.q(temp0_901) + 4), 0x30)
                int32_t temp0_906 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                zmm1[0].o = *(rax_71 + sx.q(rdx_48) + 4)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                    *(rax_71 + sx.q(temp0_898) + 4), 0x10)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                    *(rax_71 + sx.q(temp0_904) + 4), 0x20)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                    *(rax_71 + sx.q(temp0_906) + 4), 0x30)
                zmm0 = _mm256_add_ps(zmm4, 
                    _mm256_mul_ps(arg7, 
                        _mm256_sub_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), zmm4)))
                zmm1 = var_640_4
                zmm3 = _mm256_add_ps(arg11, _mm256_mul_ps(_mm256_sub_ps(arg8, arg11), zmm1))
                zmm0 = _mm256_add_ps(zmm3, 
                    __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_sub_ps(
                            _mm256_add_ps(zmm2, _mm256_mul_ps(zmm1, _mm256_sub_ps(zmm0, zmm2))), 
                            zmm3), 
                        var_620_4))
                zmm3 = var_580.32
                arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                zmm1 = _mm256_cmp_ps(zmm3, arg11, 0xc)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm2 = _mm256_rsqrt_ps(zmm3)
                    zmm3 = _mm256_mul_ps(zmm2, _mm256_mul_ps(zmm3, zmm2))
                    zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_mul_ps(zmm2, _mm256_sub_ps(data_142fc9480, zmm3)), data_142fc94a0)
                    zmm3 = _mm256_rcp_ps(zmm2)
                    zmm2 = _mm256_mul_ps(zmm3, zmm2)
                    zmm2 = _mm256_add_ps(zmm0, 
                        _mm256_mul_ps(zmm3, _mm256_sub_ps(data_142fc94c0, zmm2)))
                    zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
                
                arg4 = var_6a0
                r12 = var_768
                r8_18 = var_5e0
                zmm1 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg20), 1)
                char i_5 = _mm256_movemask_ps(zmm1)
                
                if (i_5 == 0)
                    result = 0
                    rsi_17 = zx.q(rsi_17.d + 8)
                    
                    if (rsi_17.d s>= r8_18)
                        break
                    
                    continue
                else
                    zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_520_2, var_540, 1)
                    uint64_t i = zx.q(i_5)
                    result = 0
                    
                    do
                        uint64_t rdx_50
                        
                        if (i == 0)
                            rdx_50 = 0x40
                            i &= 0xfffffffffffffffe
                            
                            if ((result.b & 1) == 0)
                            label_14007b3a1:
                                float var_1c0[0x8] = zmm0
                                uint64_t rdx_51 = zx.q(rdx_50.d) & 7
                                zmm2[0].o = var_1c0[rdx_51]
                                *arg20 = zmm2[0].d
                                float var_1a0[0x8] = zmm1
                                *arg19 = var_1a0[rdx_51]
                        else
                            uint64_t rflags_2
                            rdx_50, rflags_2 = _bit_scan_forward(i)
                            i &= not.q(1 << (rdx_50 u% 0x40))
                            
                            if ((result.b & 1) == 0)
                                goto label_14007b3a1
                        result.b = 1
                    while (i != 0)
            
            rsi_17 = zx.q(rsi_17.d + 8)
            
            if (rsi_17.d s>= r8_18)
                break
    
    if (rsi_17.d s< arg21)
        bool cond:1_1 = result.b != 0
        result.b = 1
        
        if (not(cond:1_1))
            zmm0[0].o = zx.o(rsi_17.d)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
            zmm3 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm2[0].o = zx.o(arg21)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
            zmm4 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            arg13 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            float var_680_4[0x8] = zmm3
            var_6a0.32 = zmm4
            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
            zmm0 = _mm256_maskload_ps(arg13, *(arg18 + sx.q(rsi_17.d << 2)))
            zmm1 = _mm256_insertf128_ps(arg7, arg14[0].o, 1)
            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            float var_340_2[0x8] = zmm0
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm2 = _mm256_and_ps(zmm1, _mm256_insertf128_ps(zmm3, zmm2[0].o, 1))
            int64_t rax_165 = sx.q(zmm2[0].d)
            int64_t r8_31 = arg17 + (rax_165 << 2)
            zmm3[0].o = *(arg17 + (rax_165 << 2))
            int64_t rax_167 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            int64_t r10_10 = arg17 + (rax_167 << 2)
            int64_t rsi_46 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
            int64_t r11_8 = arg17 + (rsi_46 << 2)
            int64_t rdx_107 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
            int64_t r14_7 = arg17 + (rdx_107 << 2)
            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            int64_t rcx_105 = sx.q(zmm2[0].d)
            zmm4[0].o = *(arg17 + (rcx_105 << 2))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rax_167 << 2)), 0x10)
            int64_t rcx_106 = arg17 + (rcx_105 << 2)
            int64_t rax_169 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rsi_46 << 2)), 0x20)
            int32_t temp0_1560 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg17 + (rax_169 << 2)), 0x10)
            int64_t rdi_52 = arg17 + (rax_169 << 2)
            int64_t rax_170 = sx.q(temp0_1560)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rdx_107 << 2)), 0x30)
            int32_t temp0_1563 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg17 + (rax_170 << 2)), 0x20)
            int64_t rax_171 = arg17 + (rax_170 << 2)
            int64_t rdx_109 = sx.q(temp0_1563)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (rdx_109 << 2)), 0x30)
            int64_t rsi_48 = arg17 + (rdx_109 << 2)
            arg8 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9520)
            zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9540)
            zmm4[0].o = *(zx.q(zmm1[0]) + r8_31)
            int32_t* rdx_111 = zx.q(zmm3[0].d)
            zmm5[0].o = *(rdx_111 + r8_31)
            arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm0[0].o = *(zx.q(arg6[0]) + rcx_106)
            uint64_t rdx_113 = zx.q(arg5[0])
            zmm2[0].o = *(rdx_113 + rcx_106)
            uint64_t rcx_107 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_107 + rdi_52), 0x10)
            uint64_t rbx_69 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_69 + rdi_52), 0x10)
            uint64_t rcx_108 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_108 + rax_171), 0x20)
            uint64_t rcx_109 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_109 + rax_171), 0x20)
            uint64_t rax_172 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_172 + rsi_48), 0x30)
            uint64_t rax_173 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_173 + rsi_48), 0x30)
            uint64_t rax_174 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_174 + r10_10), 0x10)
            float* rax_175 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_175 + r10_10), 0x10)
            uint64_t rax_176 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_176 + r11_8), 0x20)
            float* rax_177 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_177 + r11_8), 0x20)
            uint64_t rax_178 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_178 + r14_7), 0x30)
            float* rax_179 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_179 + r14_7), 0x30)
            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            float var_300_2[0x8] = arg8
            float var_2e0_2[0x8] = zmm2
            float var_2c0_2[0x8] = zmm0
            arg12[0].o = zx.o(0)
            zmm3 = _mm256_broadcast_ss(arg16[3])
            float var_760_7[0x8] = zmm3
            float var_740_7[0x8] = zmm3
            double var_720_10[0x4] = zmm3
            double var_700_4[0x4] = zmm3
            zmm4 = _mm256_broadcast_ss(arg16[1])
            zmm5 = _mm256_mul_ps(zmm0, zmm4)
            arg5 = _mm256_broadcast_ss(arg16[2])
            arg6 = _mm256_mul_ps(arg8, arg5)
            arg9 = _mm256_broadcast_ss(*arg16)
            arg5 = _mm256_mul_ps(zmm2, arg5)
            zmm2 = _mm256_mul_ps(zmm2, arg9)
            zmm5 = _mm256_sub_ps(zmm5, arg5)
            arg5 = _mm256_mul_ps(zmm3, arg12)
            zmm0 = _mm256_sub_ps(arg6, _mm256_mul_ps(zmm0, arg9))
            zmm2 = _mm256_sub_ps(zmm2, _mm256_mul_ps(arg8, zmm4))
            zmm4 = _mm256_sub_ps(arg5, arg5)
            zmm5 = _mm256_add_ps(zmm5, zmm5)
            zmm0 = _mm256_add_ps(zmm0, zmm0)
            arg5 = _mm256_add_ps(zmm2, zmm2)
            zmm2 = _mm256_add_ps(zmm4, zmm4)
            float var_660_7[0x8] = zmm5
            float var_640_7[0x8] = zmm0
            float var_620_7[0x8] = arg5
            double var_600_4[0x4] = zmm2
            zmm4 = _mm256_mul_ps(zmm3, zmm5)
            arg6 = _mm256_mul_ps(zmm3, zmm0)
            arg8 = _mm256_mul_ps(zmm3, arg5)
            zmm3 = _mm256_mul_ps(zmm3, zmm2)
            zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, var_300_2)
            arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_2e0_2)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg8, var_2c0_2)
            float var_180_2[0x8] = zmm4
            float var_160_2[0x8] = arg6
            double var_140_2[0x4] = zmm2
            double var_120_2[0x4] = __vaddps_ymmqq_ymmqq_memqq(zmm3, arg12)
            arg8 = _mm256_broadcast_ss(arg16[1])
            zmm3 = _mm256_mul_ps(arg5, arg8)
            arg9 = _mm256_broadcast_ss(arg16[2])
            arg10 = _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm0, arg9))
            arg11 = _mm256_broadcast_ss(*arg16)
            zmm3 = _mm256_mul_ps(zmm0, arg11)
            zmm0 = _mm256_mul_ps(arg5, arg11)
            zmm0 = _mm256_sub_ps(_mm256_mul_ps(zmm5, arg9), zmm0)
            zmm5 = _mm256_mul_ps(zmm5, arg8)
            zmm4 = _mm256_add_ps(zmm4, arg10)
            arg5 = _mm256_add_ps(arg6, zmm0)
            zmm0 = _mm256_broadcast_ss(arg16[4])
            arg9 = _mm256_add_ps(zmm4, zmm0)
            arg6 = _mm256_broadcast_ss(var_6d0_1)
            zmm4 = _mm256_cmp_ps(arg6, arg9, 1)
            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            zmm0[0].o &= arg14[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            arg7 = _mm256_broadcast_ss(arg16[5])
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            char temp0_1646 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
            zmm0 = _mm256_broadcast_ss(arg16[6])
            
            if (temp0_1646 != 0)
                var_760_7 = _mm256_maskstore_ps(zmm4, arg6)
            
            zmm3 = _mm256_sub_ps(zmm3, zmm5)
            arg8 = _mm256_add_ps(arg5, arg7)
            arg7 = var_6a0.32
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(zmm4, arg13)) != 0)
                zmm1 = _mm256_xor_ps(zmm4, _mm256_cmp_ps(arg12, arg12, 0xf))
                zmm5 = _mm256_broadcast_ss(var_6e0_1)
                zmm4 = _mm256_cmp_ps(arg9, zmm5, 1)
                arg5 = _mm256_and_ps(zmm4, zmm1)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg13)) != 0)
                    var_760_7 = _mm256_maskstore_ps(arg5, zmm5)
                
                zmm1 = _mm256_andnot_ps(zmm4, zmm1)
                zmm4 = _mm256_and_ps(zmm1, arg13)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    var_760_7 = _mm256_maskstore_ps(zmm1, arg9)
            
            zmm2 = _mm256_add_ps(zmm2, zmm3)
            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, var_680_4[0].o)
            zmm3 = _mm256_broadcast_ss(var_6cc_1)
            zmm1 = _mm256_cmp_ps(zmm3, arg8, 1)
            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm5[0].o &= arg14[0].o
            zmm4[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
            zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                var_740_7 = _mm256_maskstore_ps(zmm1, zmm3)
            
            zmm5 = _mm256_add_ps(zmm2, zmm0)
            zmm0 = _mm256_andnot_ps(zmm1, arg13)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm0 = _mm256_xor_ps(zmm1, _mm256_cmp_ps(zmm0, zmm0, 0xf))
                zmm2 = _mm256_broadcast_ss(temp0_478)
                zmm1 = _mm256_cmp_ps(arg8, zmm2, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg13)) != 0)
                    var_740_7 = _mm256_maskstore_ps(zmm3, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
                    var_740_7 = _mm256_maskstore_ps(zmm0, arg8)
            
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, var_680_4[0].o)
            zmm1 = _mm256_broadcast_ss(var_6c8_1)
            zmm0 = _mm256_cmp_ps(zmm1, zmm5, 1)
            zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm3[0].o &= arg14[0].o
            zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                var_720_10 = _mm256_maskstore_ps(zmm0, zmm1)
            
            arg10[0].o = arg14[0].o
            zmm2[0].o = zx.o(0)
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg13)) != 0)
                zmm0 = _mm256_xor_ps(zmm0, _mm256_cmp_ps(zmm2, zmm2, 0xf))
                zmm2 = _mm256_broadcast_ss(temp0_479)
                zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg13)) != 0)
                    var_720_10 = _mm256_maskstore_ps(zmm3, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
                    var_720_10 = _mm256_maskstore_ps(zmm0, zmm5)
            
            float var_4a0_2[0x8] = zmm5
            var_5a0.32 = arg9
            float var_500_4[0x8] = arg8
            int32_t var_320_2[0x8] = arg13
            arg8 = _mm256_broadcast_ss(*r12)
            zmm0 = _mm256_sub_ps(var_760_7, arg8)
            zmm4 = _mm256_broadcast_ss(*(r12 + 4))
            zmm1 = _mm256_sub_ps(var_740_7, zmm4)
            arg7 = _mm256_broadcast_ss(*arg3)
            zmm2 = _mm256_div_ps(zmm0, arg7)
            zmm3 = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, zmm3)
            zmm0[0].o = arg3[1].d
            arg9 = _mm256_cvttps_epi32(zmm2)
            zmm1 = _mm256_cvttps_epi32(zmm1)
            float var_360_2[0x8] = zmm1
            var_5e0.32 = zmm3
            float var_400_2[0x8] = zmm4
            zmm1 = _mm256_add_ps(_mm256_mul_ps(zmm3, _mm256_cvtepi32_ps(zmm1)), zmm4)
            zmm2[0].o = __vmovsd_xmmdq_memq(*arg3)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0x20)
            zmm4[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm2[0].o, data_142fc9580)
            zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0x55)
            zmm2 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
            float var_420_2[0x8] = zmm2
            zmm5 = _mm256_add_ps(zmm2, zmm1)
            zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
            arg12 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            arg14 = _mm256_cmp_ps(zmm5, var_740_7, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm1[0].o &= arg10[0].o
            zmm2 = var_6a0.32
            var_680_4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_680_4[0].o)
            zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg14[0].o, var_680_4[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
            zmm2 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
            zmm0 = var_720_10
            arg13 = _mm256_broadcast_ss(r12[1].d)
            float var_5c0_4[0x8] = zmm0
            zmm3 = _mm256_div_ps(_mm256_sub_ps(zmm0, arg13), zmm2)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            char temp0_1749 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            zmm0 = _mm256_cvttps_epi32(zmm3)
            var_540.32 = arg7
            zmm1 = _mm256_mul_ps(arg7, _mm256_cvtepi32_ps(arg9))
            zmm3 = _mm256_mul_ps(zmm2, _mm256_cvtepi32_ps(zmm0))
            float var_3e0_2[0x8] = arg8
            arg7 = _mm256_add_ps(zmm1, arg8)
            zmm1 = _mm256_add_ps(zmm3, arg13)
            zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0)
            zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
            arg7 = _mm256_add_ps(zmm3, arg7)
            zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xaa)
            arg7 = _mm256_blendv_ps(arg12, arg9, _mm256_cmp_ps(arg7, var_760_7, 1))
            zmm4 = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
            double var_760_8[0x4] = arg7
            var_560.32 = var_740_7
            zmm5 = _mm256_cmp_ps(zmm5, var_740_7, 5)
            
            if (temp0_1749 != 0)
                arg9 = var_360_2
            
            zmm1 = _mm256_add_ps(zmm4, zmm1)
            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm0[0].o &= arg10[0].o
            zmm5[0].o = __vandps_xmmdq_xmmdq_xmmdq(var_680_4[0].o, zmm5[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                zmm0[0].o = _mm256_extractf128_ps(var_360_2[0].o, 1)
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_360_2[0].o, zmm5[0].o)
                arg12 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
            
            arg8 = _mm256_blendv_ps(arg12, arg9, arg14)
            float var_740_8[0x8] = arg8
            zmm5 = _mm256_cmp_ps(zmm1, var_5c0_4, 5)
            arg14 = _mm256_cmp_ps(zmm1, var_5c0_4, 1)
            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm0[0].o &= arg10[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg14[0].o, var_680_4[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                arg9 = zmm0
            
            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm0[0].o &= arg10[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(var_680_4[0].o, zmm5[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                arg12 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            
            zmm0 = _mm256_blendv_ps(arg12, arg9, arg14)
            arg6 = var_540.32
            zmm1 =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg6, _mm256_cvtepi32_ps(arg7)), var_3e0_2)
            arg9 = var_5e0.32
            zmm5 =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg9, _mm256_cvtepi32_ps(arg8)), var_400_2)
            float var_720_11[0x8] = zmm0
            zmm0 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm2, _mm256_cvtepi32_ps(zmm0)), arg13)
            zmm1 = _mm256_add_ps(zmm3, zmm1)
            zmm3 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_420_2)
            zmm0 = _mm256_add_ps(zmm4, zmm0)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_760_7, zmm1), arg6)
            arg8 = var_560.32
            zmm3 = _mm256_div_ps(_mm256_sub_ps(arg8, zmm3), arg9)
            zmm0 = _mm256_div_ps(_mm256_sub_ps(var_5c0_4, zmm0), zmm2)
            float var_660_8[0x8] = zmm1
            double var_640_8[0x4] = zmm3
            float var_620_8[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
            zmm0[0].o = zmm1[0].o & arg10[0].o
            zmm3[0].o = zmm2[0].o & var_680_4[0].o
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            bool cond:11_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            arg14[0].o = arg10[0].o
            
            if (not(cond:11_1))
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm2[0].o = zx.o(0)
                var_760_8 = _mm256_maskstore_ps(zmm1, zmm2)
                var_660_8 = _mm256_maskstore_ps(zmm1, zmm2)
                arg7 = var_760_8
            
            zmm2 = __vsubps_ymmqq_ymmqq_memqq(var_760_7, var_5a0.32)
            arg6 = var_680_4
            zmm0 = var_6a0.32
            var_760_7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
            int32_t rax_198 = *arg4
            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            zmm3[0].o = zx.o(rax_198 - 1)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
            zmm5[0].o = zmm1[0].o & arg14[0].o
            var_760_7[0].o &= zmm3[0].o
            var_760_7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_760_7[0].o, zmm5[0].o)
            var_760_7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_760_7[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(var_760_7[0].o) != 0)
                zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                zmm3[0].o = zx.o(rax_198 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                var_760_8 = _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                var_660_8 = _mm256_maskstore_ps(zmm1, data_142fc95a0)
            
            zmm3 = _mm256_sub_ps(arg8, var_500_4)
            zmm1 = _mm256_mul_ps(zmm2, zmm2)
            arg7 = var_6a0.32
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
            var_760_7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_760_7[0].o, var_760_7[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_760_7[0].o, var_740_8[0].o)
            var_760_7[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_760_7[0].o, var_740_8[4].o)
            var_680_4[0].o = var_760_7[0].o & arg14[0].o
            zmm5[0].o &= zmm2[0].o
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_680_4[0].o)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_500_4[0].o)
            bool cond:17_1 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o) == 0
            var_4c0[0].q = rbx_69
            
            if (not(cond:17_1))
                zmm2 = _mm256_insertf128_ps(zmm2, var_760_7[0].o, 1)
                var_760_7[0].o = zx.o(0)
                var_740_8 = _mm256_maskstore_ps(zmm2, var_760_7)
                var_640_8 = _mm256_maskstore_ps(zmm2, var_760_7)
            
            zmm4 = var_740_8
            zmm0 = _mm256_sub_ps(var_5c0_4, var_4a0_2)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, data_142fc9440)
            zmm2 = _mm256_mul_ps(zmm3, zmm3)
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
            int32_t rdx_115 = arg4[1]
            zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            var_680_4[0].o = zx.o(rdx_115 - 1)
            var_680_4[0].o = __vpshufd_xmmdq_xmmdq_immb(var_680_4[0].o, 0)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_680_4[0].o)
            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_680_4[0].o)
            var_680_4[0].o = zmm3[0].o & arg14[0].o
            zmm5[0].o &= zmm4[0].o
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_680_4[0].o)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                zmm4[0].o = zx.o(rdx_115 - 2)
                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0)
                var_740_8 = _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(zmm4, zmm4[0].o, 1))
                zmm4 = data_142fc95a0
                var_640_8 = _mm256_maskstore_ps(zmm3, zmm4)
            
            zmm1 = _mm256_add_ps(zmm1, zmm2)
            zmm0 = _mm256_mul_ps(zmm0, zmm0)
            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_720_11[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_720_11[4].o)
            zmm5[0].o = zmm3[0].o & arg14[0].o
            zmm4[0].o &= zmm2[0].o
            zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                zmm3[0].o = zx.o(0)
                var_720_11 = _mm256_maskstore_ps(zmm2, zmm3)
                var_620_8 = _mm256_maskstore_ps(zmm2, zmm3)
            
            arg12 = var_720_11
            zmm0 = _mm256_add_ps(zmm1, zmm0)
            var_560.32 = zmm0
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
            int32_t rdx_118 = arg4[2]
            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            zmm1[0].o = zx.o(rdx_118 - 1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
            zmm3[0].o = zmm0[0].o & arg14[0].o
            zmm2[0].o &= zmm1[0].o
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(rdx_118 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                float var_720_12[0x8] =
                    _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                zmm1 = data_142fc95a0
                var_620_8 = _mm256_maskstore_ps(zmm0, zmm1)
                arg12 = var_720_12
            
            arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
            var_6a0.32 = arg8
            zmm0[0].o = zx.o(*(arg15 + 4))
            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            zmm1[0].o = var_760_8[0].o
            zmm3[0].o = var_760_8[2].o
            zmm2[0].o = var_740_8[0].o
            arg7[0].o = var_740_8[4].o
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            var_4a0_2[0].o = zmm0[0].o
            var_5c0_4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_5c0_4[0].o, arg7[0].o)
            var_5c0_4[0].o = zmm4[0].o
            var_680_4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            var_5a0.o = var_680_4[0].o
            zmm0[0].o = zx.o(*(arg15 + 8))
            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_680_4[0].o, zmm5[0].o)
            var_500_4[0].o = zmm0[0].o
            zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            arg13[0].o = zmm4[0].o
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            arg13[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
            arg10 = _mm256_insertf128_ps(arg8, arg14[0].o, 1)
            zmm0 = _mm256_and_ps(arg10, zmm0)
            int32_t temp0_1908 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_1909 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
            float rbx_74 = zmm0[0]
            int32_t temp0_1910 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int32_t temp0_1912 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_1913 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            float rdx_120 = zmm0[0]
            int32_t temp0_1914 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            int32_t* rcx_114 = *(arg15 + 0x10)
            int64_t r14_8 = sx.q(rbx_74)
            int64_t rbx_75 = sx.q(temp0_1908)
            var_3e0_2[0].q = rbx_75
            int64_t rdi_53 = sx.q(temp0_1909)
            var_400_2[0].q = rdi_53
            int64_t rsi_49 = sx.q(temp0_1910)
            var_420_2[0].q = rsi_49
            int64_t r12_5 = sx.q(rdx_120)
            int64_t rdx_121 = sx.q(temp0_1912)
            var_5e0.q = rdx_121
            int64_t rax_201 = sx.q(temp0_1913)
            var_540[0] = rax_201
            zmm0[0].o = *(rcx_114 + r12_5)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_114 + rdx_121), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_114 + rax_201), 0x20)
            int64_t rax_202 = sx.q(temp0_1914)
            var_760_7[0].q = rax_202
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_114 + rax_202), 0x30)
            zmm4[0].o = *(rcx_114 + r14_8)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_114 + rbx_75), 0x10)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_114 + rdi_53), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_114 + rsi_49), 0x30)
            arg5 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
            arg9[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
            var_680_4[0].o = arg14[0].o
            arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm0 = _mm256_and_ps(arg10, _mm256_insertf128_ps(zmm0, zmm3[0].o, 1))
            int32_t temp0_1937 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_1938 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_1939 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3)
            float r13_6 = zmm0[0]
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int32_t temp0_1941 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_1942 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_1943 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            float rax_203 = zmm0[0]
            zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
            zmm3[0].o = *(rcx_114 + sx.q(rax_203))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_114 + sx.q(temp0_1941)), 0x10)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_5c0_4[0].o, zmm0[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm2[0].o, var_4a0_2[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
            arg7 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_114 + sx.q(temp0_1942)), 0x20)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_114 + sx.q(temp0_1943)), 0x30)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
            zmm2[0].o = *(rcx_114 + sx.q(r13_6))
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_114 + sx.q(temp0_1937)), 0x10)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_114 + sx.q(temp0_1938)), 0x20)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_114 + sx.q(temp0_1939)), 0x30)
            zmm3 = _mm256_and_ps(arg10, arg7)
            int32_t temp0_1971 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1972 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
            int32_t r15_10 = zmm3[0].d
            int32_t temp0_1973 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            int64_t rdi_55 = sx.q(zmm3[0].d)
            int32_t temp0_1975 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1976 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_1977 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = *(rcx_114 + rdi_55)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_114 + sx.q(temp0_1975)), 0x10)
            zmm1 = _mm256_and_ps(arg10, zmm1)
            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            int32_t temp0_1981 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1)
            int32_t temp0_1982 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
            int32_t temp0_1983 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3)
            float rax_210 = zmm4[0]
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_114 + sx.q(temp0_1976)), 0x20)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_114 + sx.q(temp0_1977)), 0x30)
            zmm3[0].o = *(rcx_114 + sx.q(r15_10))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_114 + sx.q(temp0_1971)), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_114 + sx.q(temp0_1972)), 0x20)
            arg7[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_114 + sx.q(temp0_1973)), 0x30)
            zmm3[0].o = *(rcx_114 + sx.q(rax_210))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_114 + sx.q(temp0_1981)), 0x10)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_5c0_4[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_5a0.o)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_114 + sx.q(temp0_1982)), 0x20)
            arg11 = var_660_8
            zmm2 =
                _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm2, arg8[0].o, 1), arg5))
            arg8 = _mm256_add_ps(arg5, zmm2)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_114 + sx.q(temp0_1983)), 0x30)
            int64_t rax_215 = sx.q(zmm1[0])
            int32_t temp0_1998 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_1999 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_2000 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = *(rcx_114 + rax_215)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_114 + sx.q(temp0_1998)), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_114 + sx.q(temp0_1999)), 0x20)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_114 + sx.q(temp0_2000)), 0x30)
            zmm3 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
            zmm4[0].o = *(rdx_111 + rcx_114 + r14_8)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            zmm2[0].o = *(rdx_113 + rcx_114 + r12_5)
            float* r11_11 = var_4c0[0].q
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_11 + rcx_114 + var_5e0.q), 0x10)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rcx_109 + rcx_114 i+ var_540[0]), 0x20)
            void* rax_226 = rcx_114 + var_3e0_2[0].q
            void* rdx_132 = rcx_114 + var_400_2[0].q
            void* rbx_83 = rcx_114 + var_420_2[0].q
            void* rdi_59 = rcx_114 + var_760_7[0].q
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
            zmm1 = _mm256_mul_ps(arg11, _mm256_sub_ps(zmm1, zmm3))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_173 + rdi_59), 0x30)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_175 + rax_226), 0x10)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_177 + rdx_132), 0x20)
            arg7 = _mm256_add_ps(zmm3, zmm1)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_179 + rbx_83), 0x30)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            zmm3 = _mm256_and_ps(arg10, zmm2)
            zmm2[0].o = *(rdx_111 + sx.q(zmm3[0].d) + rcx_114)
            int32_t temp0_2024 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_2025 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_2026 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            void* rdi_62 = sx.q(zmm3[0].d) + rcx_114
            int32_t temp0_2028 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_2029 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_2030 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = *(rdx_113 + rdi_62)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(r11_11 + sx.q(temp0_2028) + rcx_114), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rcx_109 + sx.q(temp0_2029) + rcx_114), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rax_173 + sx.q(temp0_2030) + rcx_114), 0x30)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rax_175 + sx.q(temp0_2024) + rcx_114), 0x10)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rax_177 + sx.q(temp0_2025) + rcx_114), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rax_179 + sx.q(temp0_2026) + rcx_114), 0x30)
            zmm2 =
                _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm2, zmm3[0].o, 1), zmm1))
            arg9 = _mm256_add_ps(zmm1, zmm2)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm2[0].o, arg13[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_500_4[0].o)
            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm3 = _mm256_and_ps(arg10, _mm256_insertf128_ps(zmm4, zmm3[0].o, 1))
            void* rdx_137 = sx.q(zmm3[0].d) + rcx_114
            int32_t temp0_2049 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_2050 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_2051 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm4[0].o = *(rdx_111 + rdx_137)
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm5[0].o = *(rdx_113 + sx.q(zmm3[0].d) + rcx_114)
            void* rdx_143 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)) + rcx_114
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r11_11 + rdx_143), 0x10)
            void* rdx_146 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)) + rcx_114
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_109 + rdx_146), 0x20)
            void* rdx_149 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)) + rcx_114
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_173 + rdx_149), 0x30)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                *(rax_175 + sx.q(temp0_2049) + rcx_114), 0x10)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                *(rax_177 + sx.q(temp0_2050) + rcx_114), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                *(rax_179 + sx.q(temp0_2051) + rcx_114), 0x30)
            zmm4 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            zmm0 = _mm256_and_ps(arg10, _mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
            void* rdx_151 = sx.q(zmm0[0]) + rcx_114
            int32_t temp0_2069 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_2070 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_2071 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm1[0].o = *(rdx_111 + rdx_151)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm2[0].o = *(rdx_113 + sx.q(zmm0[0]) + rcx_114)
            int32_t temp0_2073 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_2074 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_2075 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(r11_11 + sx.q(temp0_2073) + rcx_114), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                *(rcx_109 + sx.q(temp0_2074) + rcx_114), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                *(rax_173 + sx.q(temp0_2075) + rcx_114), 0x30)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_175 + sx.q(temp0_2069) + rcx_114), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_177 + sx.q(temp0_2070) + rcx_114), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_179 + sx.q(temp0_2071) + rcx_114), 0x30)
            zmm0 = _mm256_add_ps(zmm4, 
                _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), zmm4)))
            zmm1 = var_640_8
            zmm2 = _mm256_add_ps(arg8, _mm256_mul_ps(_mm256_sub_ps(arg7, arg8), zmm1))
            zmm0 = _mm256_add_ps(zmm2, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_add_ps(arg9, _mm256_mul_ps(zmm1, _mm256_sub_ps(zmm0, arg9))), zmm2), 
                    var_620_8))
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm3 = var_560.32
            zmm1 = _mm256_cmp_ps(zmm3, zmm1, 0xc)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm2[0].o &= var_680_4[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_memdq(zmm1[0].o, var_6a0.o)
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
            
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg20), 1), var_320_2)
            int32_t i_7 = _mm256_movemask_ps(zmm1)
            
            if (i_7 == 0)
                result = 0
            else
                uint64_t i_1 = zx.q(i_7)
                result = 0
                
                do
                    uint64_t rdx_160
                    
                    if (i_1 == 0)
                        rdx_160 = 0x40
                        i_1 &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_14007dc41:
                            float var_200[0x8] = zmm0
                            uint64_t rdx_161 = zx.q(rdx_160.d) & 7
                            zmm1[0].o = var_200[rdx_161]
                            *arg20 = zmm1[0]
                            double var_1e0[0x4] = var_340_2
                            *arg19 = *(&var_1e0 + (rdx_161 << 2))
                    else
                        uint64_t rflags_4
                        rdx_160, rflags_4 = _bit_scan_forward(i_1)
                        i_1 &= not.q(1 << (rdx_160 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_14007dc41
                    result.b = 1
                while (i_1 != 0)
else
    float var_6b0_1 = zmm1[0]
    float var_6ac_1 = zmm2[0].d
    float var_6a8_1 = zmm3[0].d
    zmm1[0].o = __vmovsd_xmmdq_memq(*r12)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, r12[1].d, 0x20)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_6c0_1 = zmm0[0]
    float temp0_12 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float temp0_13 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    int32_t r8_4 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
    uint64_t rsi
    
    if (r8_4 s<= 0)
        rsi = 0
        result = 0
    else
        result = 0
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        rsi = 0
        var_5e0 = r8_4
        
        while (true)
            bool cond:4_1 = (result.b & 1) != 0
            result.b = 1
            
            if (not(cond:4_1))
                int64_t rax_3 = sx.q((rsi << 2).d)
                zmm2[0].o = *(arg18 + rax_3)
                zmm1[0].o = *(arg18 + rax_3 + 0x10)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                var_540 = zmm1[0].o
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                float var_520_1[0x8] = zmm2
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                int64_t rbx_1 = sx.q(zmm1[0])
                int64_t r15_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                int64_t r10_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                int64_t r8_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                int64_t rax_6 = sx.q(zmm0[0])
                int64_t rdi_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                int64_t rsi_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                int64_t rcx_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                zmm0[0].o = *(arg17 + (rax_6 << 2))
                zmm1[0].o = *(arg17 + (rax_6 << 2) + 4)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + (rdi_2 << 2)), 0x10)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + (rsi_3 << 2)), 0x20)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + (rcx_3 << 2)), 0x30)
                zmm2[0].o = *(arg17 + (rbx_1 << 2))
                zmm3[0].o = *(arg17 + (rbx_1 << 2) + 4)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r15_1 << 2)), 0x10)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r10_1 << 2)), 0x20)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r8_5 << 2)), 0x30)
                zmm1[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + (rdi_2 << 2) + 4), 0x10)
                zmm1[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + (rsi_3 << 2) + 4), 0x20)
                zmm1[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + (rcx_3 << 2) + 4), 0x30)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (r15_1 << 2) + 4), 0x10)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (r10_1 << 2) + 4), 0x20)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (r8_5 << 2) + 4), 0x30)
                zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
                zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                zmm2[0].o = *(arg17 + (rbx_1 << 2) + 8)
                zmm3[0].o = *(arg17 + (rax_6 << 2) + 8)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rdi_2 << 2) + 8), 0x10)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rsi_3 << 2) + 8), 0x20)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rcx_3 << 2) + 8), 0x30)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r15_1 << 2) + 8), 0x10)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r10_1 << 2) + 8), 0x20)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r8_5 << 2) + 8), 0x30)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                float var_660_1[0x8] = zmm0
                float var_640_1[0x8] = zmm1
                double var_620_1[0x4] = zmm2
                float var_600_1[0x8] = arg11
                zmm3 = _mm256_broadcast_ss(arg16[3])
                double var_760_1[0x4] = zmm3
                double var_740_1[0x4] = zmm3
                double var_720_1[0x4] = zmm3
                double var_700_1[0x4] = zmm3
                zmm5 = _mm256_broadcast_ss(arg16[1])
                zmm4 = _mm256_mul_ps(zmm2, zmm5)
                arg5 = _mm256_broadcast_ss(arg16[2])
                arg6 = _mm256_mul_ps(zmm0, arg5)
                arg7 = _mm256_broadcast_ss(*arg16)
                arg8 = _mm256_mul_ps(zmm1, arg7)
                zmm1 = _mm256_sub_ps(zmm4, _mm256_mul_ps(zmm1, arg5))
                zmm2 = _mm256_sub_ps(arg6, _mm256_mul_ps(zmm2, arg7))
                zmm0 = _mm256_sub_ps(arg8, _mm256_mul_ps(zmm0, zmm5))
                arg6 = _mm256_add_ps(zmm1, zmm1)
                zmm2 = _mm256_add_ps(zmm2, zmm2)
                zmm4 = _mm256_add_ps(zmm0, zmm0)
                zmm0 = _mm256_mul_ps(zmm3, arg6)
                zmm1 = _mm256_mul_ps(zmm3, zmm2)
                zmm3 = _mm256_mul_ps(zmm3, zmm4)
                arg8 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_660_1)
                arg9 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_640_1)
                zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_620_1)
                zmm3 = _mm256_mul_ps(zmm4, zmm5)
                arg10 = _mm256_mul_ps(arg6, arg5)
                zmm0 = _mm256_mul_ps(zmm2, arg7)
                zmm2 = _mm256_add_ps(arg8, _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm2, arg5)))
                zmm4 = _mm256_add_ps(arg9, _mm256_sub_ps(arg10, _mm256_mul_ps(zmm4, arg7)))
                zmm3 = _mm256_mul_ps(arg6, zmm5)
                arg8 = _mm256_add_ps(zmm2, _mm256_broadcast_ss(arg16[4]))
                zmm5 = _mm256_broadcast_ss(arg16[5])
                zmm2 = _mm256_broadcast_ss(arg16[6])
                arg6 = _mm256_broadcast_ss(var_6b0_1)
                arg5 = _mm256_cmp_ps(arg6, arg8, 1)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_760_1 = _mm256_maskstore_ps(arg5, arg6)
                
                zmm3 = _mm256_sub_ps(zmm0, zmm3)
                arg7 = _mm256_add_ps(zmm4, zmm5)
                zmm0 = _mm256_cmp_ps(arg11, arg11, 0xf)
                zmm4 = _mm256_xor_ps(arg5, zmm0)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    arg5 = _mm256_broadcast_ss(var_6c0_1)
                    zmm5 = _mm256_cmp_ps(arg8, arg5, 1)
                    arg6 = _mm256_and_ps(zmm5, zmm4)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        var_760_1 = _mm256_maskstore_ps(arg6, arg5)
                    
                    zmm4 = _mm256_andnot_ps(zmm5, zmm4)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_760_1 = _mm256_maskstore_ps(zmm4, arg8)
                
                zmm1 = _mm256_add_ps(zmm1, zmm3)
                zmm4 = _mm256_broadcast_ss(var_6ac_1)
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
                
                zmm2 = _mm256_broadcast_ss(var_6a8_1)
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
                
                var_4c0 = zmm5
                float var_680_1[0x8] = arg8
                var_580.32 = arg7
                arg13 = var_740_1
                arg9 = _mm256_broadcast_ss(*r12)
                zmm0 = _mm256_sub_ps(var_760_1, arg9)
                arg11 = _mm256_broadcast_ss(*(r12 + 4))
                zmm1 = _mm256_sub_ps(arg13, arg11)
                zmm5 = _mm256_broadcast_ss(*arg3)
                zmm0 = _mm256_div_ps(zmm0, zmm5)
                arg5 = _mm256_broadcast_ss(*(arg3 + 4))
                zmm1 = _mm256_div_ps(zmm1, arg5)
                arg12 = _mm256_broadcast_ss(r12[1].d)
                var_4e0.32 = var_720_1
                zmm2 = _mm256_sub_ps(var_720_1, arg12)
                zmm4[0].o = arg3[1].d
                zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0)
                arg14 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
                zmm3 = _mm256_div_ps(zmm2, arg14)
                zmm2 = _mm256_cvttps_epi32(zmm0)
                arg10 = _mm256_cvttps_epi32(zmm1)
                arg8 = _mm256_cvttps_epi32(zmm3)
                zmm0 = _mm256_mul_ps(zmm5, _mm256_cvtepi32_ps(zmm2))
                zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4[0].o, 0x20)
                zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                zmm4 = _mm256_insertf128_ps(arg6, zmm4[0].o, 1)
                arg6 = _mm256_mul_ps(arg5, _mm256_cvtepi32_ps(arg10))
                float var_5c0_1[0x8] = arg8
                arg8 = _mm256_mul_ps(arg14, _mm256_cvtepi32_ps(arg8))
                var_480.32 = arg9
                zmm0 = _mm256_add_ps(zmm0, arg9)
                var_3a0.32 = arg11
                arg9 = _mm256_add_ps(arg6, arg11)
                var_3c0.32 = arg12
                arg11 = _mm256_add_ps(arg8, arg12)
                zmm1[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9580)
                arg6[0].o = _mm_permute_ps(zmm1[0].o, 0)
                zmm3 = _mm256_insertf128_ps(arg6, arg6[0].o, 1)
                arg6 = arg13
                double var_500_1[0x4] = zmm3
                zmm0 = _mm256_add_ps(zmm3, zmm0)
                arg8[0].o = _mm_permute_ps(zmm1[0].o, 0x55)
                arg8 = _mm256_insertf128_ps(arg8, arg8[0].o, 1)
                arg12 = _mm256_add_ps(arg8, arg9)
                zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
                arg9 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
                var_460.32 = var_760_1
                zmm0 = _mm256_blendv_ps(zmm4, zmm2, _mm256_cmp_ps(zmm0, var_760_1, 1))
                float var_760_2[0x8] = zmm0
                zmm1 = _mm256_cmp_ps(arg12, arg13, 1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm2 = arg10
                
                arg11 = _mm256_add_ps(arg9, arg11)
                arg12 = _mm256_cmp_ps(arg12, arg6, 5)
                arg13[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
                zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
                zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                    zmm3[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                    zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                    zmm4 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                
                arg12 = arg6
                arg10 = _mm256_blendv_ps(zmm4, zmm2, zmm1)
                float var_740_2[0x8] = arg10
                arg13 = var_4e0.32
                zmm1 = _mm256_cmp_ps(arg11, arg13, 1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm2 = var_5c0_1
                
                zmm3 = _mm256_cmp_ps(arg11, arg13, 5)
                arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
                zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                bool cond:8_1 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0
                arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                
                if (not(cond:8_1))
                    zmm3[0].o = _mm256_extractf128_ps(var_5c0_1[0].o, 1)
                    zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
                    var_5c0_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_5c0_1[0].o, arg11[0].o)
                    zmm4 = _mm256_insertf128_ps(var_5c0_1, zmm3[0].o, 1)
                
                zmm1 = _mm256_blendv_ps(zmm4, zmm2, zmm1)
                zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm5, _mm256_cvtepi32_ps(zmm0)), 
                    var_480.32)
                zmm3 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg5, _mm256_cvtepi32_ps(arg10)), 
                    var_3a0.32)
                float var_720_2[0x8] = zmm1
                zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg14, _mm256_cvtepi32_ps(zmm1)), 
                    var_3c0.32)
                zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_500_1)
                zmm3 = _mm256_add_ps(arg8, zmm3)
                zmm1 = _mm256_add_ps(arg9, zmm1)
                arg7 = var_460.32
                zmm2 = _mm256_div_ps(_mm256_sub_ps(arg7, zmm2), zmm5)
                zmm3 = _mm256_div_ps(_mm256_sub_ps(arg12, zmm3), arg5)
                zmm1 = _mm256_div_ps(_mm256_sub_ps(arg13, zmm1), arg14)
                double var_660_2[0x4] = zmm2
                double var_640_2[0x4] = zmm3
                float var_620_2[0x8] = zmm1
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                bool cond:10_1 = _mm256_movemask_ps(zmm1) == 0
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                
                if (not(cond:10_1))
                    var_760_2 = _mm256_maskstore_ps(zmm1, arg5)
                    var_660_2 = _mm256_maskstore_ps(zmm1, arg5)
                    zmm0 = var_760_2
                
                int32_t rax_26 = *arg4
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm2[0].o = zx.o(rax_26 - 1)
                zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
                zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
                zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                zmm3 = var_580.32
                zmm5 = var_4c0
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm1[0].o = zx.o(rax_26 - 2)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                    var_760_2 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                    zmm1 = data_142fc95a0
                    var_660_2 = _mm256_maskstore_ps(zmm0, zmm1)
                
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_740_2[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_740_2[4].o)
                zmm0 = _mm256_sub_ps(arg7, var_680_1)
                zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_740_2 = _mm256_maskstore_ps(zmm1, arg5)
                    var_640_2 = _mm256_maskstore_ps(zmm1, arg5)
                
                zmm2 = var_740_2
                zmm1 = _mm256_sub_ps(arg12, zmm3)
                zmm0 = _mm256_mul_ps(zmm0, zmm0)
                int32_t rax_29 = arg4[1]
                zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                var_680_1[0].o = zx.o(rax_29 - 1)
                var_680_1[0].o = __vpshufd_xmmdq_xmmdq_immb(var_680_1[0].o, 0)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_680_1[0].o)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_680_1[0].o)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                
                if (_mm256_movemask_ps(zmm2) != 0)
                    zmm3[0].o = zx.o(rax_29 - 2)
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                    var_740_2 = _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                    var_640_2 = _mm256_maskstore_ps(zmm2, data_142fc95a0)
                
                zmm2 = _mm256_sub_ps(arg13, zmm5)
                zmm1 = _mm256_mul_ps(zmm1, zmm1)
                var_680_1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_720_2[0].o)
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_720_2[4].o)
                zmm3 = _mm256_add_ps(zmm0, arg5)
                zmm0 = _mm256_insertf128_ps(var_680_1, zmm5[0].o, 1)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_720_2 = _mm256_maskstore_ps(zmm0, arg5)
                    var_620_2 = _mm256_maskstore_ps(zmm0, arg5)
                
                arg9 = var_720_2
                zmm0 = _mm256_mul_ps(zmm2, zmm2)
                zmm1 = _mm256_add_ps(zmm3, zmm1)
                int32_t rax_32 = arg4[2]
                zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                zmm3[0].o = zx.o(rax_32 - 1)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
                zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                
                if (_mm256_movemask_ps(zmm2) != 0)
                    zmm3[0].o = zx.o(rax_32 - 2)
                    zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                    float var_720_3[0x8] =
                        _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                    zmm3 = data_142fc95a0
                    var_620_2 = _mm256_maskstore_ps(zmm2, zmm3)
                    arg9 = var_720_3
                
                zmm0 = _mm256_add_ps(zmm1, zmm0)
                var_580.32 = zmm0
                zmm0[0].o = zx.o(*(arg15 + 4))
                arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
                arg8[0].o = var_760_2[0].o
                zmm2[0].o = var_760_2[4].o
                arg7[0].o = var_740_2[0].o
                var_680_1[0].o = var_740_2[4].o
                arg13[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
                arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg7[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, var_680_1[0].o)
                zmm5[0].o = zx.o(*(arg15 + 8))
                zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0)
                zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                var_4c0[0].o = zmm3[0].o
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
                var_680_1[0].o = zmm0[0].o
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                arg10[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
                int32_t temp0_287 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                int32_t temp0_288 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                float rbx_2 = zmm0[0]
                int32_t temp0_289 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
                float* rax_35 = *(arg15 + 0x10)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
                int64_t rsi_4 = sx.q(rbx_2)
                int64_t rdi_3 = sx.q(temp0_287)
                int64_t rbx_3 = sx.q(temp0_288)
                int64_t r10_2 = sx.q(zmm0[0])
                int64_t r12_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                int32_t temp0_294 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = *(rax_35 + r10_2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_35 + r12_1), 0x10)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_35 + r15_2), 0x20)
                int64_t rdx_5 = sx.q(temp0_294)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_35 + rdx_5), 0x30)
                arg5[0].o = *(rax_35 + rsi_4)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_35 + rdi_3), 0x10)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_35 + rbx_3), 0x20)
                int64_t r13_1 = sx.q(temp0_289)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_35 + r13_1), 0x30)
                arg11 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
                zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                arg8[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm3[0].o)
                zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg6[0].o)
                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, var_680_1[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
                int32_t temp0_313 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                int32_t temp0_314 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                int32_t temp0_315 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                float r8_7 = zmm1[0]
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
                int32_t temp0_320 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                zmm2[0].o = *(rax_35 + sx.q(r8_7))
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_35 + sx.q(temp0_313)), 0x10)
                int32_t temp0_322 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                int32_t temp0_323 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                float rcx_14 = zmm1[0]
                zmm1[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_35 + sx.q(temp0_314)), 0x20)
                zmm1[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_35 + sx.q(temp0_315)), 0x30)
                zmm2[0].o = *(rax_35 + sx.q(rcx_14))
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_35 + sx.q(temp0_320)), 0x10)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_35 + sx.q(temp0_322)), 0x20)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_35 + sx.q(temp0_323)), 0x30)
                zmm0 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_680_1[0].o, zmm3[0].o)
                zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
                var_680_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
                var_680_1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_680_1[0].o, zmm5[0].o)
                zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg9[0].o)
                var_680_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_680_1[0].o, arg10[0].o)
                var_680_1[0].o = __vpslld_xmmdq_xmmdq_immb(var_680_1[0].o, 2)
                zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
                float r8_11 = var_680_1[0]
                int32_t temp0_340 = __vpextrd_gpr32d_xmmdq_immb(var_680_1[0].o, 1)
                int32_t temp0_341 = __vpextrd_gpr32d_xmmdq_immb(var_680_1[0].o, 2)
                int32_t temp0_342 = __vpextrd_gpr32d_xmmdq_immb(var_680_1[0].o, 3)
                var_680_1[0].o = *(rax_35 + sx.q(r8_11))
                int32_t temp0_343 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
                zmm0 = _mm256_sub_ps(zmm0, arg11)
                var_680_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_680_1[0].o, 
                    *(rax_35 + sx.q(temp0_340)), 0x10)
                int32_t temp0_346 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
                var_680_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_680_1[0].o, 
                    *(rax_35 + sx.q(temp0_341)), 0x20)
                var_680_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_680_1[0].o, 
                    *(rax_35 + sx.q(temp0_342)), 0x30)
                int32_t rcx_18 = zmm3[0].d
                int32_t temp0_349 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
                arg7 = var_660_2
                zmm0 = _mm256_mul_ps(arg7, zmm0)
                zmm3[0].o = *(rax_35 + sx.q(rcx_18))
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_35 + sx.q(temp0_343)), 0x10)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_35 + sx.q(temp0_346)), 0x20)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_35 + sx.q(temp0_349)), 0x30)
                arg11 = _mm256_add_ps(arg11, zmm0)
                zmm3 = _mm256_insertf128_ps(zmm3, var_680_1[0].o, 1)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
                int64_t rcx_21 = sx.q(zmm0[0])
                int64_t rbx_12 = sx.q(zmm1[0])
                int32_t temp0_364 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                zmm2[0].o = *(rax_35 + rbx_12)
                int32_t temp0_365 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_35 + sx.q(temp0_364)), 0x10)
                int32_t temp0_367 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                zmm1[0].o = *(rax_35 + rcx_21)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_35 + sx.q(temp0_365)), 0x20)
                int64_t rcx_24 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_35 + sx.q(temp0_367)), 0x30)
                int32_t temp0_371 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_35 + rcx_24), 0x10)
                int32_t temp0_373 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                var_680_1[0].o = *(rax_35 + r10_2 + 4)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_35 + sx.q(temp0_371)), 0x20)
                zmm0[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_35 + sx.q(temp0_373)), 0x30)
                zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
                arg5[0].o = *(rax_35 + rsi_4 + 4)
                zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
                zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
                zmm2 = _mm256_mul_ps(arg7, _mm256_sub_ps(zmm2, zmm3))
                arg8 = _mm256_add_ps(zmm3, zmm2)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(var_680_1[0].o, *(rax_35 + r12_1 + 4), 0x10)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_35 + r15_2 + 4), 0x20)
                zmm2[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_35 + rdx_5 + 4), 0x30)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_35 + rdi_3 + 4), 0x10)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_35 + rbx_3 + 4), 0x20)
                zmm3[0].o =
                    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_35 + r13_1 + 4), 0x30)
                zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
                var_680_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                var_680_1[0].o = __vpslld_xmmdq_xmmdq_immb(var_680_1[0].o, 2)
                zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
                int32_t rcx_30 = zmm3[0].d
                int32_t temp0_393 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
                int32_t temp0_394 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
                int32_t temp0_395 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
                zmm3[0].o = *(rax_35 + sx.q(rcx_30) + 4)
                int64_t rbx_20 = sx.q(var_680_1[0])
                int32_t temp0_396 = __vpextrd_gpr32d_xmmdq_immb(var_680_1[0].o, 1)
                int32_t temp0_397 = __vpextrd_gpr32d_xmmdq_immb(var_680_1[0].o, 2)
                int32_t temp0_398 = __vpextrd_gpr32d_xmmdq_immb(var_680_1[0].o, 3)
                var_680_1[0].o = *(rax_35 + rbx_20 + 4)
                var_680_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_680_1[0].o, 
                    *(rax_35 + sx.q(temp0_396) + 4), 0x10)
                var_680_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_680_1[0].o, 
                    *(rax_35 + sx.q(temp0_397) + 4), 0x20)
                var_680_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_680_1[0].o, 
                    *(rax_35 + sx.q(temp0_398) + 4), 0x30)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                    *(rax_35 + sx.q(temp0_393) + 4), 0x10)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                    *(rax_35 + sx.q(temp0_394) + 4), 0x20)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                    *(rax_35 + sx.q(temp0_395) + 4), 0x30)
                zmm4 = _mm256_insertf128_ps(zmm3, var_680_1[0].o, 1)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
                arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_680_1[0].o)
                arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm3[0].o, var_4c0[0].o)
                arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
                arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
                int64_t rcx_35 = sx.q(arg5[0])
                int32_t temp0_412 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
                int32_t temp0_413 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                int32_t temp0_414 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
                arg5[0].o = *(rax_35 + rcx_35 + 4)
                float rcx_36 = arg6[0]
                int32_t temp0_415 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
                int32_t temp0_416 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                int32_t temp0_417 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
                arg6[0].o = *(rax_35 + sx.q(rcx_36) + 4)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                    *(rax_35 + sx.q(temp0_415) + 4), 0x10)
                zmm4 = _mm256_mul_ps(arg7, _mm256_sub_ps(zmm4, zmm2))
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                    *(rax_35 + sx.q(temp0_416) + 4), 0x20)
                arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, 
                    *(rax_35 + sx.q(temp0_417) + 4), 0x30)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                    *(rax_35 + sx.q(temp0_412) + 4), 0x10)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                    *(rax_35 + sx.q(temp0_413) + 4), 0x20)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, 
                    *(rax_35 + sx.q(temp0_414) + 4), 0x30)
                zmm2 = _mm256_add_ps(zmm2, zmm4)
                zmm4 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
                int32_t temp0_432 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                int64_t rdx_12 = sx.q(zmm0[0])
                int32_t temp0_433 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                int32_t temp0_434 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                int32_t temp0_435 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                zmm0[0].o = *(rax_35 + rdx_12 + 4)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                    *(rax_35 + sx.q(temp0_433) + 4), 0x10)
                float rdx_14 = zmm1[0]
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                    *(rax_35 + sx.q(temp0_434) + 4), 0x20)
                int32_t temp0_438 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                    *(rax_35 + sx.q(temp0_435) + 4), 0x30)
                int32_t temp0_440 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                zmm1[0].o = *(rax_35 + sx.q(rdx_14) + 4)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                    *(rax_35 + sx.q(temp0_432) + 4), 0x10)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                    *(rax_35 + sx.q(temp0_438) + 4), 0x20)
                zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                    *(rax_35 + sx.q(temp0_440) + 4), 0x30)
                zmm0 = _mm256_add_ps(zmm4, 
                    _mm256_mul_ps(arg7, 
                        _mm256_sub_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), zmm4)))
                zmm1 = var_640_2
                zmm3 = _mm256_add_ps(arg11, _mm256_mul_ps(_mm256_sub_ps(arg8, arg11), zmm1))
                zmm0 = _mm256_add_ps(zmm3, 
                    __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_sub_ps(
                            _mm256_add_ps(zmm2, _mm256_mul_ps(zmm1, _mm256_sub_ps(zmm0, zmm2))), 
                            zmm3), 
                        var_620_2))
                zmm3 = var_580.32
                arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                zmm1 = _mm256_cmp_ps(zmm3, arg11, 0xc)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm2 = _mm256_rsqrt_ps(zmm3)
                    zmm3 = _mm256_mul_ps(zmm2, _mm256_mul_ps(zmm3, zmm2))
                    zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                        _mm256_mul_ps(zmm2, _mm256_sub_ps(data_142fc9480, zmm3)), data_142fc94a0)
                    zmm3 = _mm256_rcp_ps(zmm2)
                    zmm2 = _mm256_mul_ps(zmm3, zmm2)
                    zmm2 = _mm256_add_ps(zmm0, 
                        _mm256_mul_ps(zmm3, _mm256_sub_ps(data_142fc94c0, zmm2)))
                    zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
                
                arg4 = var_6a0
                r12 = var_768
                r8_4 = var_5e0
                zmm1 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg20), 1)
                char i_4 = _mm256_movemask_ps(zmm1)
                
                if (i_4 == 0)
                    result = 0
                    rsi = zx.q(rsi.d + 8)
                    
                    if (rsi.d s>= r8_4)
                        break
                    
                    continue
                else
                    zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_520_1, var_540, 1)
                    uint64_t i_2 = zx.q(i_4)
                    result = 0
                    
                    do
                        uint64_t rdx_16
                        
                        if (i_2 == 0)
                            rdx_16 = 0x40
                            i_2 &= 0xfffffffffffffffe
                            
                            if ((result.b & 1) == 0)
                            label_14007a411:
                                float var_240[0x8] = zmm0
                                uint64_t rdx_17 = zx.q(rdx_16.d) & 7
                                zmm2[0].o = var_240[rdx_17]
                                *arg20 = zmm2[0].d
                                float var_220[0x8] = zmm1
                                *arg19 = var_220[rdx_17]
                        else
                            uint64_t rflags_1
                            rdx_16, rflags_1 = _bit_scan_forward(i_2)
                            i_2 &= not.q(1 << (rdx_16 u% 0x40))
                            
                            if ((result.b & 1) == 0)
                                goto label_14007a411
                        result.b = 1
                    while (i_2 != 0)
            
            rsi = zx.q(rsi.d + 8)
            
            if (rsi.d s>= r8_4)
                break
    
    if (rsi.d s< arg21)
        bool cond:2_1 = result.b != 0
        result.b = 1
        
        if (not(cond:2_1))
            zmm0[0].o = zx.o(rsi.d)
            zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
            zmm3 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm2[0].o = zx.o(arg21)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
            zmm4 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
            zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            arg13 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            arg14[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            double var_680_3[0x4] = zmm3
            var_6a0.32 = zmm4
            arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
            zmm0 = _mm256_maskload_ps(arg13, *(arg18 + sx.q(rsi.d << 2)))
            zmm1 = _mm256_insertf128_ps(arg7, arg14[0].o, 1)
            zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            float var_340_1[0x8] = zmm0
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm2 = _mm256_and_ps(zmm1, _mm256_insertf128_ps(zmm3, zmm2[0].o, 1))
            int64_t rax_76 = sx.q(zmm2[0].d)
            int64_t r8_23 = arg17 + (rax_76 << 2)
            zmm3[0].o = *(arg17 + (rax_76 << 2))
            int64_t rax_78 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            int64_t r10_5 = arg17 + (rax_78 << 2)
            int64_t rsi_36 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
            int64_t r11_4 = arg17 + (rsi_36 << 2)
            int64_t rdx_52 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
            int64_t r14_3 = arg17 + (rdx_52 << 2)
            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            int64_t rcx_90 = sx.q(zmm2[0].d)
            zmm4[0].o = *(arg17 + (rcx_90 << 2))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rax_78 << 2)), 0x10)
            int64_t rcx_91 = arg17 + (rcx_90 << 2)
            int64_t rax_80 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rsi_36 << 2)), 0x20)
            int32_t temp0_970 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg17 + (rax_80 << 2)), 0x10)
            int64_t rdi_32 = arg17 + (rax_80 << 2)
            int64_t rax_81 = sx.q(temp0_970)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rdx_52 << 2)), 0x30)
            int32_t temp0_973 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg17 + (rax_81 << 2)), 0x20)
            int64_t rax_82 = arg17 + (rax_81 << 2)
            int64_t rdx_54 = sx.q(temp0_973)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (rdx_54 << 2)), 0x30)
            int64_t rsi_38 = arg17 + (rdx_54 << 2)
            arg8 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9520)
            zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9540)
            zmm4[0].o = *(zx.q(zmm1[0]) + r8_23)
            uint64_t rdx_56 = zx.q(zmm3[0].d)
            zmm5[0].o = *(rdx_56 + r8_23)
            arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm0[0].o = *(zx.q(arg6[0]) + rcx_91)
            uint64_t rdx_58 = zx.q(arg5[0])
            zmm2[0].o = *(rdx_58 + rcx_91)
            uint64_t rcx_92 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_92 + rdi_32), 0x10)
            uint64_t rbx_45 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_45 + rdi_32), 0x10)
            uint64_t rcx_93 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_93 + rax_82), 0x20)
            uint64_t rcx_94 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_94 + rax_82), 0x20)
            uint64_t rax_83 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_83 + rsi_38), 0x30)
            uint64_t rax_84 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_84 + rsi_38), 0x30)
            uint64_t rax_85 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_85 + r10_5), 0x10)
            uint64_t rax_86 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_86 + r10_5), 0x10)
            uint64_t rax_87 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_87 + r11_4), 0x20)
            uint64_t rax_88 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_88 + r11_4), 0x20)
            uint64_t rax_89 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_89 + r14_3), 0x30)
            uint64_t rax_90 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_90 + r14_3), 0x30)
            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            float var_300_1[0x8] = arg8
            double var_2e0_1[0x4] = zmm2
            float var_2c0_1[0x8] = zmm0
            arg12[0].o = zx.o(0)
            zmm3 = _mm256_broadcast_ss(arg16[3])
            double var_760_5[0x4] = zmm3
            double var_740_5[0x4] = zmm3
            double var_720_7[0x4] = zmm3
            double var_700_3[0x4] = zmm3
            zmm4 = _mm256_broadcast_ss(arg16[1])
            zmm5 = _mm256_mul_ps(zmm0, zmm4)
            arg5 = _mm256_broadcast_ss(arg16[2])
            arg6 = _mm256_mul_ps(arg8, arg5)
            arg9 = _mm256_broadcast_ss(*arg16)
            arg5 = _mm256_mul_ps(zmm2, arg5)
            zmm2 = _mm256_mul_ps(zmm2, arg9)
            zmm5 = _mm256_sub_ps(zmm5, arg5)
            arg5 = _mm256_mul_ps(zmm3, arg12)
            zmm0 = _mm256_sub_ps(arg6, _mm256_mul_ps(zmm0, arg9))
            zmm2 = _mm256_sub_ps(zmm2, _mm256_mul_ps(arg8, zmm4))
            zmm4 = _mm256_sub_ps(arg5, arg5)
            zmm5 = _mm256_add_ps(zmm5, zmm5)
            zmm0 = _mm256_add_ps(zmm0, zmm0)
            arg5 = _mm256_add_ps(zmm2, zmm2)
            zmm2 = _mm256_add_ps(zmm4, zmm4)
            float var_660_5[0x8] = zmm5
            float var_640_5[0x8] = zmm0
            float var_620_5[0x8] = arg5
            double var_600_3[0x4] = zmm2
            zmm4 = _mm256_mul_ps(zmm3, zmm5)
            arg6 = _mm256_mul_ps(zmm3, zmm0)
            arg8 = _mm256_mul_ps(zmm3, arg5)
            zmm3 = _mm256_mul_ps(zmm3, zmm2)
            zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, var_300_1)
            arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_2e0_1)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg8, var_2c0_1)
            float var_180_1[0x8] = zmm4
            float var_160_1[0x8] = arg6
            double var_140_1[0x4] = zmm2
            double var_120_1[0x4] = __vaddps_ymmqq_ymmqq_memqq(zmm3, arg12)
            arg8 = _mm256_broadcast_ss(arg16[1])
            zmm3 = _mm256_mul_ps(arg5, arg8)
            arg9 = _mm256_broadcast_ss(arg16[2])
            arg10 = _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm0, arg9))
            arg11 = _mm256_broadcast_ss(*arg16)
            zmm3 = _mm256_mul_ps(zmm0, arg11)
            zmm0 = _mm256_mul_ps(arg5, arg11)
            zmm0 = _mm256_sub_ps(_mm256_mul_ps(zmm5, arg9), zmm0)
            zmm5 = _mm256_mul_ps(zmm5, arg8)
            zmm4 = _mm256_add_ps(zmm4, arg10)
            arg5 = _mm256_add_ps(arg6, zmm0)
            zmm0 = _mm256_broadcast_ss(arg16[4])
            arg9 = _mm256_add_ps(zmm4, zmm0)
            arg6 = _mm256_broadcast_ss(var_6b0_1)
            zmm4 = _mm256_cmp_ps(arg6, arg9, 1)
            zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            zmm0[0].o &= arg14[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            arg7 = _mm256_broadcast_ss(arg16[5])
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            char temp0_1056 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
            zmm0 = _mm256_broadcast_ss(arg16[6])
            
            if (temp0_1056 != 0)
                var_760_5 = _mm256_maskstore_ps(zmm4, arg6)
            
            zmm3 = _mm256_sub_ps(zmm3, zmm5)
            arg8 = _mm256_add_ps(arg5, arg7)
            arg7 = var_6a0.32
            
            if (_mm256_movemask_ps(_mm256_andnot_ps(zmm4, arg13)) != 0)
                zmm1 = _mm256_xor_ps(zmm4, _mm256_cmp_ps(arg12, arg12, 0xf))
                zmm5 = _mm256_broadcast_ss(var_6c0_1)
                zmm4 = _mm256_cmp_ps(arg9, zmm5, 1)
                arg5 = _mm256_and_ps(zmm4, zmm1)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg13)) != 0)
                    var_760_5 = _mm256_maskstore_ps(arg5, zmm5)
                
                zmm1 = _mm256_andnot_ps(zmm4, zmm1)
                zmm4 = _mm256_and_ps(zmm1, arg13)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    var_760_5 = _mm256_maskstore_ps(zmm1, arg9)
            
            zmm2 = _mm256_add_ps(zmm2, zmm3)
            arg5 = var_680_3
            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
            zmm3 = _mm256_broadcast_ss(var_6ac_1)
            zmm1 = _mm256_cmp_ps(zmm3, arg8, 1)
            zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm5[0].o &= arg14[0].o
            zmm4[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
            zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                var_740_5 = _mm256_maskstore_ps(zmm1, zmm3)
            
            zmm5 = _mm256_add_ps(zmm2, zmm0)
            zmm0 = _mm256_andnot_ps(zmm1, arg13)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm0 = _mm256_xor_ps(zmm1, _mm256_cmp_ps(zmm0, zmm0, 0xf))
                zmm2 = _mm256_broadcast_ss(temp0_12)
                zmm1 = _mm256_cmp_ps(arg8, zmm2, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg13)) != 0)
                    var_740_5 = _mm256_maskstore_ps(zmm3, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
                    var_740_5 = _mm256_maskstore_ps(zmm0, arg8)
            
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
            zmm1 = _mm256_broadcast_ss(var_6a8_1)
            zmm0 = _mm256_cmp_ps(zmm1, zmm5, 1)
            zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm3[0].o &= arg14[0].o
            zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                var_720_7 = _mm256_maskstore_ps(zmm0, zmm1)
            
            arg10[0].o = arg14[0].o
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
            var_5a0.32 = arg9
            float var_500_3[0x8] = arg8
            int32_t var_320_1[0x8] = arg13
            arg6 = var_760_5
            arg11 = var_740_5
            arg8 = _mm256_broadcast_ss(*r12)
            zmm0 = _mm256_sub_ps(arg6, arg8)
            zmm4 = _mm256_broadcast_ss(*(r12 + 4))
            zmm1 = _mm256_sub_ps(arg11, zmm4)
            arg7 = _mm256_broadcast_ss(*arg3)
            zmm2 = _mm256_div_ps(zmm0, arg7)
            zmm3 = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, zmm3)
            zmm0[0].o = arg3[1].d
            arg9 = _mm256_cvttps_epi32(zmm2)
            zmm1 = _mm256_cvttps_epi32(zmm1)
            float var_360_1[0x8] = zmm1
            var_5e0.32 = zmm3
            float var_400_1[0x8] = zmm4
            zmm1 = _mm256_add_ps(_mm256_mul_ps(zmm3, _mm256_cvtepi32_ps(zmm1)), zmm4)
            zmm2[0].o = __vmovsd_xmmdq_memq(*arg3)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0x20)
            zmm4[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm2[0].o, data_142fc9580)
            zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0x55)
            zmm2 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
            double var_420_1[0x4] = zmm2
            zmm5 = _mm256_add_ps(zmm2, zmm1)
            zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
            arg12 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            arg14 = _mm256_cmp_ps(zmm5, arg11, 1)
            zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm1[0].o &= arg10[0].o
            zmm2 = var_6a0.32
            arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg5[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
            zmm2 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
            zmm0 = var_720_7
            arg13 = _mm256_broadcast_ss(r12[1].d)
            float var_5c0_3[0x8] = zmm0
            zmm3 = _mm256_div_ps(_mm256_sub_ps(zmm0, arg13), zmm2)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            char temp0_1159 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
            zmm0 = _mm256_cvttps_epi32(zmm3)
            var_540.32 = arg7
            zmm1 = _mm256_mul_ps(arg7, _mm256_cvtepi32_ps(arg9))
            zmm3 = _mm256_mul_ps(zmm2, _mm256_cvtepi32_ps(zmm0))
            float var_3e0_1[0x8] = arg8
            arg7 = _mm256_add_ps(zmm1, arg8)
            zmm1 = _mm256_add_ps(zmm3, arg13)
            zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0)
            zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
            arg7 = _mm256_add_ps(zmm3, arg7)
            zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xaa)
            float var_520_3[0x8] = arg6
            arg7 = _mm256_blendv_ps(arg12, arg9, _mm256_cmp_ps(arg7, arg6, 1))
            zmm4 = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
            double var_760_6[0x4] = arg7
            var_560.32 = arg11
            zmm5 = _mm256_cmp_ps(zmm5, arg11, 5)
            
            if (temp0_1159 != 0)
                arg9 = var_360_1
            
            zmm1 = _mm256_add_ps(zmm4, zmm1)
            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm0[0].o &= arg10[0].o
            zmm5[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                zmm0[0].o = _mm256_extractf128_ps(var_360_1[0].o, 1)
                zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
                zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_360_1[0].o, zmm5[0].o)
                arg12 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
            
            arg8 = _mm256_blendv_ps(arg12, arg9, arg14)
            float var_740_6[0x8] = arg8
            zmm5 = _mm256_cmp_ps(zmm1, var_5c0_3, 5)
            arg14 = _mm256_cmp_ps(zmm1, var_5c0_3, 1)
            zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
            zmm0[0].o &= arg10[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg5[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                arg9 = zmm0
            
            zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
            zmm0[0].o &= arg10[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
                zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                arg12 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            
            zmm0 = _mm256_blendv_ps(arg12, arg9, arg14)
            arg6 = var_540.32
            zmm1 =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg6, _mm256_cvtepi32_ps(arg7)), var_3e0_1)
            arg9 = var_5e0.32
            zmm5 =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg9, _mm256_cvtepi32_ps(arg8)), var_400_1)
            float var_720_8[0x8] = zmm0
            zmm0 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm2, _mm256_cvtepi32_ps(zmm0)), arg13)
            zmm1 = _mm256_add_ps(zmm3, zmm1)
            zmm3 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_420_1)
            zmm0 = _mm256_add_ps(zmm4, zmm0)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(var_520_3, zmm1), arg6)
            arg8 = var_560.32
            zmm3 = _mm256_div_ps(_mm256_sub_ps(arg8, zmm3), arg9)
            zmm0 = _mm256_div_ps(_mm256_sub_ps(var_5c0_3, zmm0), zmm2)
            float var_660_6[0x8] = zmm1
            double var_640_6[0x4] = zmm3
            float var_620_6[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
            zmm0[0].o = zmm1[0].o & arg10[0].o
            zmm3[0].o = zmm2[0].o & arg5[0].o
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            bool cond:13_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
            arg14[0].o = arg10[0].o
            
            if (not(cond:13_1))
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                zmm2[0].o = zx.o(0)
                var_760_6 = _mm256_maskstore_ps(zmm1, zmm2)
                var_660_6 = _mm256_maskstore_ps(zmm1, zmm2)
                arg7 = var_760_6
            
            zmm2 = __vsubps_ymmqq_ymmqq_memqq(var_520_3, var_5a0.32)
            arg6 = var_680_3
            zmm0 = var_6a0.32
            var_520_3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
            int32_t rax_109 = *arg4
            zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
            zmm3[0].o = zx.o(rax_109 - 1)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
            zmm5[0].o = zmm1[0].o & arg14[0].o
            var_520_3[0].o &= zmm3[0].o
            var_520_3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_520_3[0].o, zmm5[0].o)
            var_520_3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_520_3[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(var_520_3[0].o) != 0)
                zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
                zmm3[0].o = zx.o(rax_109 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                var_760_6 = _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                var_660_6 = _mm256_maskstore_ps(zmm1, data_142fc95a0)
            
            zmm3 = _mm256_sub_ps(arg8, var_500_3)
            zmm1 = _mm256_mul_ps(zmm2, zmm2)
            arg7 = var_6a0.32
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
            var_520_3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_520_3[0].o, var_520_3[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_520_3[0].o, var_740_6[0].o)
            var_520_3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_520_3[0].o, var_740_6[4].o)
            arg5[0].o = var_520_3[0].o & arg14[0].o
            zmm5[0].o &= zmm2[0].o
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_500_3[0].o)
            bool cond:18_1 = __vpmovmskb_gpr32d_xmmdq(zmm5[0].o) == 0
            var_4c0[0].q = rbx_45
            
            if (not(cond:18_1))
                zmm2 = _mm256_insertf128_ps(zmm2, var_520_3[0].o, 1)
                var_520_3[0].o = zx.o(0)
                var_740_6 = _mm256_maskstore_ps(zmm2, var_520_3)
                var_640_6 = _mm256_maskstore_ps(zmm2, var_520_3)
            
            zmm4 = var_740_6
            zmm0 = _mm256_sub_ps(var_5c0_3, var_4a0_1)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, data_142fc9440)
            zmm2 = _mm256_mul_ps(zmm3, zmm3)
            zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
            int32_t rdx_60 = arg4[1]
            zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            arg5[0].o = zx.o(rdx_60 - 1)
            arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
            arg5[0].o = zmm3[0].o & arg14[0].o
            zmm5[0].o &= zmm4[0].o
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
            zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
                zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
                zmm4[0].o = zx.o(rdx_60 - 2)
                zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0)
                var_740_6 = _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(zmm4, zmm4[0].o, 1))
                zmm4 = data_142fc95a0
                var_640_6 = _mm256_maskstore_ps(zmm3, zmm4)
            
            zmm1 = _mm256_add_ps(zmm1, zmm2)
            zmm0 = _mm256_mul_ps(zmm0, zmm0)
            zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_720_8[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_720_8[4].o)
            zmm5[0].o = zmm3[0].o & arg14[0].o
            zmm4[0].o &= zmm2[0].o
            zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
                zmm3[0].o = zx.o(0)
                var_720_8 = _mm256_maskstore_ps(zmm2, zmm3)
                var_620_6 = _mm256_maskstore_ps(zmm2, zmm3)
            
            arg12 = var_720_8
            zmm0 = _mm256_add_ps(zmm1, zmm0)
            var_560.32 = zmm0
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
            int32_t rdx_63 = arg4[2]
            zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            zmm1[0].o = zx.o(rdx_63 - 1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
            zmm3[0].o = zmm0[0].o & arg14[0].o
            zmm2[0].o &= zmm1[0].o
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                zmm1[0].o = zx.o(rdx_63 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                float var_720_9[0x8] =
                    _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                zmm1 = data_142fc95a0
                var_620_6 = _mm256_maskstore_ps(zmm0, zmm1)
                arg12 = var_720_9
            
            arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
            var_6a0.32 = arg8
            zmm0[0].o = zx.o(*(arg15 + 4))
            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            zmm1[0].o = var_760_6[0].o
            zmm3[0].o = var_760_6[2].o
            zmm2[0].o = var_740_6[0].o
            arg7[0].o = var_740_6[4].o
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            var_4a0_1[0].o = zmm0[0].o
            var_5c0_3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_5c0_3[0].o, arg7[0].o)
            var_5c0_3[0].o = zmm4[0].o
            arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            var_5a0.o = arg5[0].o
            zmm0[0].o = zx.o(*(arg15 + 8))
            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            var_500_3[0].o = zmm0[0].o
            zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            arg13[0].o = zmm4[0].o
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            arg13[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
            arg10 = _mm256_insertf128_ps(arg8, arg14[0].o, 1)
            zmm0 = _mm256_and_ps(arg10, zmm0)
            int32_t temp0_1318 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_1319 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
            float rbx_50 = zmm0[0]
            int32_t temp0_1320 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int32_t temp0_1322 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_1323 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            float rdx_65 = zmm0[0]
            int32_t temp0_1324 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            float* rcx_99 = *(arg15 + 0x10)
            int64_t r14_4 = sx.q(rbx_50)
            int64_t rbx_51 = sx.q(temp0_1318)
            var_3e0_1[0].q = rbx_51
            int64_t rdi_33 = sx.q(temp0_1319)
            var_400_1[0].q = rdi_33
            int64_t rsi_39 = sx.q(temp0_1320)
            var_420_1[0] = rsi_39
            int64_t r12_3 = sx.q(rdx_65)
            int64_t rdx_66 = sx.q(temp0_1322)
            var_5e0.q = rdx_66
            int64_t rax_112 = sx.q(temp0_1323)
            var_540[0] = rax_112
            zmm0[0].o = *(rcx_99 + r12_3)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_99 + rdx_66), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_99 + rax_112), 0x20)
            int64_t rax_113 = sx.q(temp0_1324)
            var_520_3[0].q = rax_113
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_99 + rax_113), 0x30)
            zmm4[0].o = *(rcx_99 + r14_4)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_99 + rbx_51), 0x10)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_99 + rdi_33), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_99 + rsi_39), 0x30)
            arg5 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
            arg9[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
            var_680_3[0].o = arg14[0].o
            arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm0 = _mm256_and_ps(arg10, _mm256_insertf128_ps(zmm0, zmm3[0].o, 1))
            int32_t temp0_1347 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_1348 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_1349 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3)
            float r13_3 = zmm0[0]
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            int32_t temp0_1351 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_1352 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_1353 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            float rax_114 = zmm0[0]
            zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
            zmm3[0].o = *(rcx_99 + sx.q(rax_114))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_99 + sx.q(temp0_1351)), 0x10)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_5c0_3[0].o, zmm0[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm2[0].o, var_4a0_1[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
            arg7 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_99 + sx.q(temp0_1352)), 0x20)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_99 + sx.q(temp0_1353)), 0x30)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
            zmm2[0].o = *(rcx_99 + sx.q(r13_3))
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_99 + sx.q(temp0_1347)), 0x10)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_99 + sx.q(temp0_1348)), 0x20)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_99 + sx.q(temp0_1349)), 0x30)
            zmm3 = _mm256_and_ps(arg10, arg7)
            int32_t temp0_1381 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1382 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
            int32_t r15_6 = zmm3[0].d
            int32_t temp0_1383 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            int64_t rdi_35 = sx.q(zmm3[0].d)
            int32_t temp0_1385 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1386 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_1387 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = *(rcx_99 + rdi_35)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_99 + sx.q(temp0_1385)), 0x10)
            zmm1 = _mm256_and_ps(arg10, zmm1)
            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            int32_t temp0_1391 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1)
            int32_t temp0_1392 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
            int32_t temp0_1393 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3)
            float rax_121 = zmm4[0]
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_99 + sx.q(temp0_1386)), 0x20)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_99 + sx.q(temp0_1387)), 0x30)
            zmm3[0].o = *(rcx_99 + sx.q(r15_6))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_99 + sx.q(temp0_1381)), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_99 + sx.q(temp0_1382)), 0x20)
            arg7[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_99 + sx.q(temp0_1383)), 0x30)
            zmm3[0].o = *(rcx_99 + sx.q(rax_121))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_99 + sx.q(temp0_1391)), 0x10)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_5c0_3[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_5a0.o)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_99 + sx.q(temp0_1392)), 0x20)
            arg11 = var_660_6
            zmm2 =
                _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm2, arg8[0].o, 1), arg5))
            arg8 = _mm256_add_ps(arg5, zmm2)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_99 + sx.q(temp0_1393)), 0x30)
            int64_t rax_126 = sx.q(zmm1[0])
            int32_t temp0_1408 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_1409 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_1410 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = *(rcx_99 + rax_126)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_99 + sx.q(temp0_1408)), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_99 + sx.q(temp0_1409)), 0x20)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_99 + sx.q(temp0_1410)), 0x30)
            zmm3 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
            zmm4[0].o = *(rdx_56 + rcx_99 + r14_4)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            zmm2[0].o = *(rdx_58 + rcx_99 + r12_3)
            float* r11_7 = var_4c0[0].q
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r11_7 + rcx_99 + var_5e0.q), 0x10)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_94 + rcx_99 i+ var_540[0]), 0x20)
            void* rax_137 = rcx_99 + var_3e0_1[0].q
            void* rdx_77 = rcx_99 + var_400_1[0].q
            void* rbx_59 = rcx_99 i+ var_420_1[0]
            void* rdi_39 = rcx_99 + var_520_3[0].q
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
            zmm1 = _mm256_mul_ps(arg11, _mm256_sub_ps(zmm1, zmm3))
            float* r13_5 = rax_84
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r13_5 + rdi_39), 0x30)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_86 + rax_137), 0x10)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_88 + rdx_77), 0x20)
            arg7 = _mm256_add_ps(zmm3, zmm1)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_90 + rbx_59), 0x30)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            zmm3 = _mm256_and_ps(arg10, zmm2)
            zmm2[0].o = *(rdx_56 + sx.q(zmm3[0].d) + rcx_99)
            int32_t temp0_1434 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1435 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_1436 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            void* rdi_42 = sx.q(zmm3[0].d) + rcx_99
            int32_t temp0_1438 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1439 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_1440 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = *(rdx_58 + rdi_42)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(r11_7 + sx.q(temp0_1438) + rcx_99), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(rcx_94 + sx.q(temp0_1439) + rcx_99), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 
                *(r13_5 + sx.q(temp0_1440) + rcx_99), 0x30)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rax_86 + sx.q(temp0_1434) + rcx_99), 0x10)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rax_88 + sx.q(temp0_1435) + rcx_99), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(rax_90 + sx.q(temp0_1436) + rcx_99), 0x30)
            zmm2 =
                _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm2, zmm3[0].o, 1), zmm1))
            arg9 = _mm256_add_ps(zmm1, zmm2)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm2[0].o, arg13[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_500_3[0].o)
            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            zmm3 = _mm256_and_ps(arg10, _mm256_insertf128_ps(zmm4, zmm3[0].o, 1))
            void* rdx_82 = sx.q(zmm3[0].d) + rcx_99
            int32_t temp0_1459 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_1460 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_1461 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm4[0].o = *(rdx_56 + rdx_82)
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm5[0].o = *(rdx_58 + sx.q(zmm3[0].d) + rcx_99)
            void* rdx_88 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)) + rcx_99
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r11_7 + rdx_88), 0x10)
            void* rdx_91 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)) + rcx_99
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_94 + rdx_91), 0x20)
            void* rdx_94 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)) + rcx_99
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r13_5 + rdx_94), 0x30)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                *(rax_86 + sx.q(temp0_1459) + rcx_99), 0x10)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                *(rax_88 + sx.q(temp0_1460) + rcx_99), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, 
                *(rax_90 + sx.q(temp0_1461) + rcx_99), 0x30)
            zmm4 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            zmm0 = _mm256_and_ps(arg10, _mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
            void* rdx_96 = sx.q(zmm0[0]) + rcx_99
            int32_t temp0_1479 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_1480 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_1481 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm1[0].o = *(rdx_56 + rdx_96)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm2[0].o = *(rdx_58 + sx.q(zmm0[0]) + rcx_99)
            int32_t temp0_1483 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_1484 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_1485 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
                *(r11_7 + sx.q(temp0_1483) + rcx_99), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                *(rcx_94 + sx.q(temp0_1484) + rcx_99), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
                *(r13_5 + sx.q(temp0_1485) + rcx_99), 0x30)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_86 + sx.q(temp0_1479) + rcx_99), 0x10)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_88 + sx.q(temp0_1480) + rcx_99), 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
                *(rax_90 + sx.q(temp0_1481) + rcx_99), 0x30)
            zmm0 = _mm256_add_ps(zmm4, 
                _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), zmm4)))
            zmm1 = var_640_6
            zmm2 = _mm256_add_ps(arg8, _mm256_mul_ps(_mm256_sub_ps(arg7, arg8), zmm1))
            zmm0 = _mm256_add_ps(zmm2, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_add_ps(arg9, _mm256_mul_ps(zmm1, _mm256_sub_ps(zmm0, arg9))), zmm2), 
                    var_620_6))
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm3 = var_560.32
            zmm1 = _mm256_cmp_ps(zmm3, zmm1, 0xc)
            zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm2[0].o &= var_680_3[0].o
            zmm1[0].o = __vandps_xmmdq_xmmdq_memdq(zmm1[0].o, var_6a0.o)
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
            
            zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg20), 1), var_320_1)
            int32_t i_6 = _mm256_movemask_ps(zmm1)
            
            if (i_6 == 0)
                result = 0
            else
                uint64_t i_3 = zx.q(i_6)
                result = 0
                
                do
                    uint64_t rdx_105
                    
                    if (i_3 == 0)
                        rdx_105 = 0x40
                        i_3 &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_14007c801:
                            float var_280[0x8] = zmm0
                            uint64_t rdx_106 = zx.q(rdx_105.d) & 7
                            zmm1[0].o = var_280[rdx_106]
                            *arg20 = zmm1[0]
                            double var_260[0x4] = var_340_1
                            *arg19 = *(&var_260 + (rdx_106 << 2))
                    else
                        uint64_t rflags_3
                        rdx_105, rflags_3 = _bit_scan_forward(i_3)
                        i_3 &= not.q(1 << (rdx_105 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_14007c801
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
