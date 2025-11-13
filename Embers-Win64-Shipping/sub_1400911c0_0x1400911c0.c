// 函数: sub_1400911c0
// 地址: 0x1400911c0
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
float zmm0[0x8]
zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, data_142fc9560)
uint32_t zmm1[0x8]
zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
float var_6d8 = zmm1[0]
float temp0_6 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float temp0_7 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float var_6e8 = zmm0[0]
float temp0_11 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float temp0_12 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
int32_t r8_4 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
uint32_t var_670[0x4]
int32_t* var_610
double var_550[0x2]
int32_t var_540
float var_340[0x8]
int32_t result
uint64_t rsi
float zmm2[0x8]
double zmm3[0x4]
float zmm4[0x8]
float zmm5[0x8]

if (r8_4 s<= 0)
    rsi = 0
    result = 0
else
    result = 0
    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
    rsi = 0
    var_610 = arg4
    var_540 = r8_4
    
    while (true)
        bool cond:1_1 = (result.b & 1) != 0
        result.b = 1
        
        if (not(cond:1_1))
            int64_t rax_2 = sx.q((rsi << 2).d)
            zmm2[0].o = *(arg18 + rax_2)
            zmm1[0].o = *(arg18 + rax_2 + 0x10)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            var_550 = zmm1[0].o
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            var_340 = zmm2
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            int64_t rbx_1 = sx.q(zmm1[0])
            int64_t r10_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
            int64_t r8_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
            int64_t r11_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
            int64_t rax_5 = sx.q(zmm0[0])
            int64_t rdi_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t rdx_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t rcx_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = *(arg17 + (rax_5 << 2))
            zmm1[0].o = *(arg17 + (rax_5 << 2) + 4)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + (rdi_2 << 2)), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + (rdx_4 << 2)), 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg17 + (rcx_2 << 2)), 0x30)
            zmm2[0].o = *(arg17 + (rbx_1 << 2))
            zmm3[0].o = *(arg17 + (rbx_1 << 2) + 4)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r10_1 << 2)), 0x10)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r8_5 << 2)), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r11_1 << 2)), 0x30)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + (rdi_2 << 2) + 4), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + (rdx_4 << 2) + 4), 0x20)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg17 + (rcx_2 << 2) + 4), 0x30)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (r10_1 << 2) + 4), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (r8_5 << 2) + 4), 0x20)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (r11_1 << 2) + 4), 0x30)
            zmm0 = _mm256_insertf128_ps(zmm2, zmm0[0].o, 1)
            zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            zmm2[0].o = *(arg17 + (rbx_1 << 2) + 8)
            zmm3[0].o = *(arg17 + (rax_5 << 2) + 8)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rdi_2 << 2) + 8), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rdx_4 << 2) + 8), 0x20)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rcx_2 << 2) + 8), 0x30)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r10_1 << 2) + 8), 0x10)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r8_5 << 2) + 8), 0x20)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (r11_1 << 2) + 8), 0x30)
            zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
            float var_5e0_1[0x8] = zmm0
            uint32_t var_5c0_1[0x8] = zmm1
            float var_5a0_1[0x8] = zmm2
            float var_580_1[0x8] = arg11
            zmm3 = _mm256_broadcast_ss(arg16[3])
            double var_6c0_1[0x4] = zmm3
            double var_6a0_1[0x4] = zmm3
            double var_680_1[0x4] = zmm3
            double var_660_1[0x4] = zmm3
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
            arg8 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_5e0_1)
            arg9 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_5c0_1)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_5a0_1)
            zmm3 = _mm256_mul_ps(zmm4, zmm5)
            arg10 = _mm256_mul_ps(arg6, arg5)
            zmm0 = _mm256_mul_ps(zmm2, arg7)
            zmm2 = _mm256_add_ps(arg8, _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm2, arg5)))
            zmm4 = _mm256_add_ps(arg9, _mm256_sub_ps(arg10, _mm256_mul_ps(zmm4, arg7)))
            zmm3 = _mm256_mul_ps(arg6, zmm5)
            arg8 = _mm256_add_ps(zmm2, _mm256_broadcast_ss(arg16[4]))
            zmm5 = _mm256_broadcast_ss(arg16[5])
            zmm2 = _mm256_broadcast_ss(arg16[6])
            arg6 = _mm256_broadcast_ss(var_6d8)
            arg5 = _mm256_cmp_ps(arg6, arg8, 1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                var_6c0_1 = _mm256_maskstore_ps(arg5, arg6)
            
            zmm3 = _mm256_sub_ps(zmm0, zmm3)
            arg7 = _mm256_add_ps(zmm4, zmm5)
            zmm0 = _mm256_cmp_ps(arg11, arg11, 0xf)
            zmm4 = _mm256_xor_ps(arg5, zmm0)
            
            if (_mm256_movemask_ps(zmm4) != 0)
                arg5 = _mm256_broadcast_ss(var_6e8)
                zmm5 = _mm256_cmp_ps(arg8, arg5, 1)
                arg6 = _mm256_and_ps(zmm5, zmm4)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_6c0_1 = _mm256_maskstore_ps(arg6, arg5)
                
                zmm4 = _mm256_andnot_ps(zmm5, zmm4)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    var_6c0_1 = _mm256_maskstore_ps(zmm4, arg8)
            
            zmm1 = _mm256_add_ps(zmm1, zmm3)
            zmm4 = _mm256_broadcast_ss(temp0_6)
            zmm3 = _mm256_cmp_ps(zmm4, arg7, 1)
            
            if (_mm256_movemask_ps(zmm3) != 0)
                var_6a0_1 = _mm256_maskstore_ps(zmm3, zmm4)
            
            zmm5 = _mm256_add_ps(zmm1, zmm2)
            zmm1 = _mm256_xor_ps(zmm3, zmm0)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm3 = _mm256_broadcast_ss(temp0_11)
                zmm2 = _mm256_cmp_ps(arg7, zmm3, 1)
                zmm4 = _mm256_and_ps(zmm2, zmm1)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    var_6a0_1 = _mm256_maskstore_ps(zmm4, zmm3)
                
                zmm1 = _mm256_andnot_ps(zmm2, zmm1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_6a0_1 = _mm256_maskstore_ps(zmm1, arg7)
            
            zmm2 = _mm256_broadcast_ss(temp0_7)
            zmm1 = _mm256_cmp_ps(zmm2, zmm5, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_680_1 = _mm256_maskstore_ps(zmm1, zmm2)
            
            zmm0 = _mm256_xor_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm2 = _mm256_broadcast_ss(temp0_12)
                zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_680_1 = _mm256_maskstore_ps(zmm3, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_680_1 = _mm256_maskstore_ps(zmm0, zmm5)
            
            int64_t var_4c0
            var_4c0.32 = zmm5
            int64_t var_4a0
            var_4a0.32 = arg8
            arg13 = var_6a0_1
            zmm2 = var_680_1
            arg9 = _mm256_broadcast_ss(*arg1)
            zmm0 = _mm256_sub_ps(var_6c0_1, arg9)
            arg11 = _mm256_broadcast_ss(*(arg1 + 4))
            zmm1 = _mm256_sub_ps(arg13, arg11)
            zmm5 = _mm256_broadcast_ss(*arg3)
            zmm0 = _mm256_div_ps(zmm0, zmm5)
            arg5 = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, arg5)
            arg12 = _mm256_broadcast_ss(arg1[1].d)
            float var_600_1[0x8] = zmm2
            zmm2 = _mm256_sub_ps(zmm2, arg12)
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
            int64_t var_480
            var_480.32 = arg8
            arg8 = _mm256_mul_ps(arg14, _mm256_cvtepi32_ps(arg8))
            float var_4e0_1[0x8] = arg9
            zmm0 = _mm256_add_ps(zmm0, arg9)
            float var_460_1[0x8] = arg11
            arg9 = _mm256_add_ps(arg6, arg11)
            int64_t var_300
            var_300.32 = arg12
            arg11 = _mm256_add_ps(arg8, arg12)
            zmm1[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9580)
            arg6[0].o = _mm_permute_ps(zmm1[0].o, 0)
            zmm3 = _mm256_insertf128_ps(arg6, arg6[0].o, 1)
            arg6 = arg13
            int64_t var_320
            var_320.32 = zmm3
            zmm0 = _mm256_add_ps(zmm3, zmm0)
            arg8[0].o = _mm_permute_ps(zmm1[0].o, 0x55)
            arg8 = _mm256_insertf128_ps(arg8, arg8[0].o, 1)
            arg12 = _mm256_add_ps(arg8, arg9)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
            arg9 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            zmm0 = _mm256_blendv_ps(zmm4, zmm2, _mm256_cmp_ps(zmm0, var_6c0_1, 1))
            float var_6c0_2[0x8] = zmm0
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
            float var_6a0_2[0x8] = arg10
            arg13 = var_600_1
            zmm1 = _mm256_cmp_ps(arg11, arg13, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm2 = var_480.32
            
            zmm3 = _mm256_cmp_ps(arg11, arg13, 5)
            arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            bool cond:3_1 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0
            arg11[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            
            if (not(cond:3_1))
                zmm4 = var_480.32
                zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg11[0].o)
                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
                zmm4 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
            
            zmm1 = _mm256_blendv_ps(zmm4, zmm2, zmm1)
            zmm2 =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm5, _mm256_cvtepi32_ps(zmm0)), var_4e0_1)
            zmm3 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg5, _mm256_cvtepi32_ps(arg10)), 
                var_460_1)
            float var_680_2[0x8] = zmm1
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg14, _mm256_cvtepi32_ps(zmm1)), 
                var_300.32)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_320.32)
            zmm3 = _mm256_add_ps(arg8, zmm3)
            zmm1 = _mm256_add_ps(arg9, zmm1)
            zmm2 = _mm256_div_ps(_mm256_sub_ps(var_6c0_1, zmm2), zmm5)
            zmm3 = _mm256_div_ps(_mm256_sub_ps(arg12, zmm3), arg5)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(arg13, zmm1), arg14)
            float var_5e0_2[0x8] = zmm2
            double var_5c0_2[0x4] = zmm3
            uint32_t var_5a0_2[0x8] = zmm1
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg11[0].o)
            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            bool cond:4_1 = _mm256_movemask_ps(zmm1) == 0
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            
            if (not(cond:4_1))
                var_6c0_2 = _mm256_maskstore_ps(zmm1, arg5)
                var_5e0_2 = _mm256_maskstore_ps(zmm1, arg5)
                zmm0 = var_6c0_2
            
            int32_t rax_25 = *arg4
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm2[0].o = zx.o(rax_25 - 1)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
            zmm4 = var_4a0.32
            zmm5 = var_4c0.32
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rax_25 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                var_6c0_2 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                zmm1 = data_142fc95a0
                var_5e0_2 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_6a0_2[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_6a0_2[4].o)
            zmm0 = _mm256_sub_ps(var_6c0_1, zmm4)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_6a0_2 = _mm256_maskstore_ps(zmm1, arg5)
                var_5c0_2 = _mm256_maskstore_ps(zmm1, arg5)
            
            zmm1 = _mm256_sub_ps(arg12, arg7)
            zmm0 = _mm256_mul_ps(zmm0, zmm0)
            int32_t rax_28 = arg4[1]
            arg7[0].o = _mm256_extractf128_ps(var_6a0_2[0].o, 1)
            zmm4[0].o = zx.o(rax_28 - 1)
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0)
            arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
            var_6a0_2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_6a0_2[0].o, zmm4[0].o)
            zmm2 = _mm256_insertf128_ps(var_6a0_2, arg7[0].o, 1)
            
            if (_mm256_movemask_ps(zmm2) != 0)
                arg7[0].o = zx.o(rax_28 - 2)
                arg7[0].o = __vpshufd_xmmdq_xmmdq_immb(arg7[0].o, 0)
                var_6a0_2 = _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(arg7, arg7[0].o, 1))
                var_5c0_2 = _mm256_maskstore_ps(zmm2, data_142fc95a0)
            
            zmm2 = _mm256_sub_ps(arg13, zmm5)
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_680_2[0].o)
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg11[0].o, var_670)
            zmm3 = _mm256_add_ps(zmm0, arg5)
            zmm0 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_680_2 = _mm256_maskstore_ps(zmm0, arg5)
                var_5a0_2 = _mm256_maskstore_ps(zmm0, arg5)
            
            arg9 = var_680_2
            zmm0 = _mm256_mul_ps(zmm2, zmm2)
            zmm1 = _mm256_add_ps(zmm3, zmm1)
            int32_t rax_31 = arg4[2]
            zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            zmm3[0].o = zx.o(rax_31 - 1)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            
            if (_mm256_movemask_ps(zmm2) != 0)
                zmm3[0].o = zx.o(rax_31 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                float var_680_3[0x8] =
                    _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                zmm3 = data_142fc95a0
                var_5a0_2 = _mm256_maskstore_ps(zmm2, zmm3)
                arg9 = var_680_3
            
            zmm0 = _mm256_add_ps(zmm1, zmm0)
            float var_640_2[0x8] = zmm0
            zmm0[0].o = zx.o(*(arg15 + 4))
            arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            arg8[0].o = var_6c0_2[0].o
            zmm2[0].o = var_6c0_2[4].o
            var_6c0_1[0].o = var_6a0_2[0].o
            zmm4[0].o = var_6a0_2[4].o
            arg13[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
            arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
            arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, var_6c0_1[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
            zmm5[0].o = zx.o(*(arg15 + 8))
            zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            var_4c0.o = zmm3[0].o
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
            var_4a0.o = zmm0[0].o
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
            arg10[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_286 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_287 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            float rbx_2 = zmm0[0]
            int32_t temp0_288 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
            float* rax_34 = *(arg15 + 0x10)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            int64_t r15_1 = sx.q(rbx_2)
            int64_t r12_1 = sx.q(temp0_286)
            int64_t rbx_3 = sx.q(temp0_287)
            var_600_1[0].q = rbx_3
            int64_t r10_2 = sx.q(zmm0[0])
            int64_t r14_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t r11_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int32_t temp0_293 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = *(rax_34 + r10_2)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_34 + r14_1), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_34 + r11_2), 0x20)
            int64_t r13_1 = sx.q(temp0_293)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_34 + r13_1), 0x30)
            arg5[0].o = *(rax_34 + r15_1)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_34 + r12_1), 0x10)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_34 + rbx_3), 0x20)
            int64_t r9 = sx.q(temp0_288)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_34 + r9), 0x30)
            arg11 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            arg8[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm3[0].o)
            zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            arg5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
            arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg6[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_312 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_313 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_314 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            uint32_t rbx_4 = zmm1[0]
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, var_6c0_1[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_319 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            zmm2[0].o = *(rax_34 + sx.q(rbx_4))
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_34 + sx.q(temp0_312)), 0x10)
            int32_t temp0_321 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_322 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            uint32_t rcx_14 = zmm1[0]
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_34 + sx.q(temp0_313)), 0x20)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_34 + sx.q(temp0_314)), 0x30)
            zmm2[0].o = *(rax_34 + sx.q(rcx_14))
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_34 + sx.q(temp0_319)), 0x10)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_34 + sx.q(temp0_321)), 0x20)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_34 + sx.q(temp0_322)), 0x30)
            zmm0 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
            zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_6c0_1[0].o, zmm3[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
            zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg9[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg10[0].o)
            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            float rcx_16 = zmm4[0]
            int32_t temp0_339 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1)
            int32_t temp0_340 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
            int32_t temp0_341 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3)
            zmm4[0].o = *(rax_34 + sx.q(rcx_16))
            int32_t temp0_342 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            zmm0 = _mm256_sub_ps(zmm0, arg11)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_34 + sx.q(temp0_339)), 0x10)
            int32_t temp0_345 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_34 + sx.q(temp0_340)), 0x20)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_34 + sx.q(temp0_341)), 0x30)
            int32_t rbx_10 = zmm3[0].d
            int32_t temp0_348 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            arg7 = var_5e0_2
            zmm0 = _mm256_mul_ps(arg7, zmm0)
            zmm3[0].o = *(rax_34 + sx.q(rbx_10))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_34 + sx.q(temp0_342)), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_34 + sx.q(temp0_345)), 0x20)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_34 + sx.q(temp0_348)), 0x30)
            arg11 = _mm256_add_ps(arg11, zmm0)
            zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg9[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            int64_t rcx_21 = sx.q(zmm0[0])
            int64_t rdx_16 = sx.q(zmm1[0])
            int32_t temp0_363 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            zmm2[0].o = *(rax_34 + rdx_16)
            int32_t temp0_364 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_34 + sx.q(temp0_363)), 0x10)
            int32_t temp0_366 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = *(rax_34 + rcx_21)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_34 + sx.q(temp0_364)), 0x20)
            int64_t rcx_24 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_34 + sx.q(temp0_366)), 0x30)
            int32_t temp0_370 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_34 + rcx_24), 0x10)
            int32_t temp0_372 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm4[0].o = *(rax_34 + r10_2 + 4)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_34 + sx.q(temp0_370)), 0x20)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_34 + sx.q(temp0_372)), 0x30)
            zmm2 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
            arg5[0].o = *(rax_34 + r15_1 + 4)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
            zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
            zmm2 = _mm256_mul_ps(arg7, _mm256_sub_ps(zmm2, zmm3))
            arg8 = _mm256_add_ps(zmm3, zmm2)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_34 + r14_1 + 4), 0x10)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_34 + r11_2 + 4), 0x20)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_34 + r13_1 + 4), 0x30)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_34 + r12_1 + 4), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_34 + var_600_1[0].q + 4), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_34 + r9 + 4), 0x30)
            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
            int32_t rcx_28 = zmm3[0].d
            int32_t temp0_392 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_393 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_394 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = *(rax_34 + sx.q(rcx_28) + 4)
            int64_t rbx_16 = sx.q(zmm4[0])
            int32_t temp0_395 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1)
            int32_t temp0_396 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
            int32_t temp0_397 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3)
            zmm4[0].o = *(rax_34 + rbx_16 + 4)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_34 + sx.q(temp0_395) + 4), 0x10)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_34 + sx.q(temp0_396) + 4), 0x20)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_34 + sx.q(temp0_397) + 4), 0x30)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_34 + sx.q(temp0_392) + 4), 0x10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_34 + sx.q(temp0_393) + 4), 0x20)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_34 + sx.q(temp0_394) + 4), 0x30)
            zmm4 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg10[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg9[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_4a0.o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm3[0].o, var_4c0.o)
            arg6[0].o = __vpslld_xmmdq_xmmdq_immb(arg6[0].o, 2)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
            int64_t rcx_33 = sx.q(arg5[0])
            int32_t temp0_411 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_412 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_413 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = *(rax_34 + rcx_33 + 4)
            float rcx_34 = arg6[0]
            int32_t temp0_414 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
            int32_t temp0_415 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
            int32_t temp0_416 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
            arg6[0].o = *(rax_34 + sx.q(rcx_34) + 4)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_34 + sx.q(temp0_414) + 4), 0x10)
            zmm4 = _mm256_mul_ps(arg7, _mm256_sub_ps(zmm4, zmm2))
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_34 + sx.q(temp0_415) + 4), 0x20)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_34 + sx.q(temp0_416) + 4), 0x30)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_34 + sx.q(temp0_411) + 4), 0x10)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_34 + sx.q(temp0_412) + 4), 0x20)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_34 + sx.q(temp0_413) + 4), 0x30)
            zmm2 = _mm256_add_ps(zmm2, zmm4)
            zmm4 = _mm256_insertf128_ps(arg5, arg6[0].o, 1)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_431 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int64_t rdx_28 = sx.q(zmm0[0])
            int32_t temp0_432 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_433 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_434 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = *(rax_34 + rdx_28 + 4)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_34 + sx.q(temp0_432) + 4), 0x10)
            uint32_t rdx_30 = zmm1[0]
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_34 + sx.q(temp0_433) + 4), 0x20)
            int32_t temp0_437 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_34 + sx.q(temp0_434) + 4), 0x30)
            int32_t temp0_439 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = *(rax_34 + sx.q(rdx_30) + 4)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_34 + sx.q(temp0_431) + 4), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_34 + sx.q(temp0_437) + 4), 0x20)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_34 + sx.q(temp0_439) + 4), 0x30)
            zmm0 = _mm256_add_ps(zmm4, 
                _mm256_mul_ps(arg7, _mm256_sub_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), zmm4)))
            zmm1 = var_5c0_2
            zmm3 = _mm256_add_ps(arg11, _mm256_mul_ps(_mm256_sub_ps(arg8, arg11), zmm1))
            zmm0 = _mm256_add_ps(zmm3, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_add_ps(zmm2, _mm256_mul_ps(zmm1, _mm256_sub_ps(zmm0, zmm2))), zmm3), 
                    var_5a0_2))
            zmm3 = var_640_2
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            zmm1 = _mm256_cmp_ps(zmm3, arg11, 0xc)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm2 = _mm256_rsqrt_ps(zmm3)
                zmm3 = _mm256_mul_ps(zmm2, _mm256_mul_ps(zmm3, zmm2))
                zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(zmm2, _mm256_sub_ps(data_142fc9480, zmm3)), data_142fc94a0)
                zmm3 = _mm256_rcp_ps(zmm2)
                zmm2 = _mm256_mul_ps(zmm3, zmm2)
                zmm2 = _mm256_add_ps(zmm0, _mm256_mul_ps(zmm3, _mm256_sub_ps(data_142fc94c0, zmm2)))
                zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
            
            arg4 = var_610
            r8_4 = var_540
            zmm1 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg20), 1)
            char i_2 = _mm256_movemask_ps(zmm1)
            
            if (i_2 == 0)
                result = 0
                rsi = zx.q(rsi.d + 8)
                
                if (rsi.d s>= r8_4)
                    break
                
                continue
            else
                zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(var_340, var_550, 1)
                uint64_t i = zx.q(i_2)
                result = 0
                
                do
                    uint64_t rdx_32
                    
                    if (i == 0)
                        rdx_32 = 0x40
                        i &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_140092191:
                            float var_240[0x8] = zmm0
                            uint64_t rdx_33 = zx.q(rdx_32.d) & 7
                            zmm2[0].o = var_240[rdx_33]
                            *arg20 = zmm2[0]
                            uint32_t var_220[0x8] = zmm1
                            *arg19 = var_220[rdx_33]
                    else
                        uint64_t rflags_1
                        rdx_32, rflags_1 = _bit_scan_forward(i)
                        i &= not.q(1 << (rdx_32 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_140092191
                    result.b = 1
                while (i != 0)
        
        rsi = zx.q(rsi.d + 8)
        
        if (rsi.d s>= r8_4)
            break

if (rsi.d s< arg21)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
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
        double var_600_2[0x4] = zmm3
        float var_640_3[0x8] = zmm4
        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
        zmm0 = _mm256_maskload_ps(arg13, *(arg18 + sx.q(rsi.d << 2)))
        zmm1 = _mm256_insertf128_ps(arg7, arg14[0].o, 1)
        zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        float var_460_2[0x8] = zmm0
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        zmm2 = _mm256_and_ps(zmm1, _mm256_insertf128_ps(zmm3, zmm2[0].o, 1))
        int64_t rax_39 = sx.q(zmm2[0])
        int64_t rbx_24 = arg17 + (rax_39 << 2)
        zmm3[0].o = *(arg17 + (rax_39 << 2))
        int64_t rax_41 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
        int64_t r8_9 = arg17 + (rax_41 << 2)
        int64_t rcx_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
        int64_t r10_3 = arg17 + (rcx_45 << 2)
        int64_t rdi_17 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
        int64_t r11_3 = arg17 + (rdi_17 << 2)
        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        int64_t rdx_36 = sx.q(zmm2[0])
        zmm4[0].o = *(arg17 + (rdx_36 << 2))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rax_41 << 2)), 0x10)
        int64_t rdx_37 = arg17 + (rdx_36 << 2)
        int64_t rax_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rcx_45 << 2)), 0x20)
        int32_t temp0_503 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg17 + (rax_43 << 2)), 0x10)
        int64_t rax_44 = arg17 + (rax_43 << 2)
        int64_t rcx_47 = sx.q(temp0_503)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rdi_17 << 2)), 0x30)
        int32_t temp0_506 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg17 + (rcx_47 << 2)), 0x20)
        int64_t rcx_48 = arg17 + (rcx_47 << 2)
        int64_t rdi_19 = sx.q(temp0_506)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (rdi_19 << 2)), 0x30)
        int64_t rdi_20 = arg17 + (rdi_19 << 2)
        arg8 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
        zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9520)
        zmm1 = __vandps_ymmqq_ymmqq_memqq(zmm1, data_142fc9540)
        zmm4[0].o = *(zx.q(zmm1[0]) + rbx_24)
        uint64_t rsi_13 = zx.q(zmm3[0].d)
        zmm5[0].o = *(rsi_13 + rbx_24)
        arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm0[0].o = *(zx.q(arg6[0]) + rdx_37)
        uint64_t rsi_14 = zx.q(arg5[0])
        var_550[0] = rsi_14
        zmm2[0].o = *(rsi_14 + rdx_37)
        uint64_t rdx_38 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rdx_38 + rax_44), 0x10)
        uint64_t rdx_39 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_39 + rax_44), 0x10)
        uint64_t rax_45 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_45 + rcx_48), 0x20)
        uint64_t rax_46 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_46 + rcx_48), 0x20)
        uint64_t rax_47 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_47 + rdi_20), 0x30)
        uint64_t rax_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_48 + rdi_20), 0x30)
        uint64_t rax_49 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_49 + r8_9), 0x10)
        uint64_t rax_50 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_50 + r8_9), 0x10)
        uint64_t rax_51 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_51 + r10_3), 0x20)
        uint64_t rax_52 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_52 + r10_3), 0x20)
        uint64_t rax_53 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_53 + r11_3), 0x30)
        uint64_t rax_54 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        var_340[0].q = rax_54
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_54 + r11_3), 0x30)
        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        float var_200_1[0x8] = arg8
        float var_1e0_1[0x8] = zmm2
        float var_1c0_1[0x8] = zmm0
        arg12[0].o = zx.o(0)
        zmm3 = _mm256_broadcast_ss(arg16[3])
        double var_6c0_3[0x4] = zmm3
        float var_6a0_3[0x8] = zmm3
        double var_680_4[0x4] = zmm3
        double var_660_2[0x4] = zmm3
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
        float var_5e0_3[0x8] = zmm5
        float var_5c0_3[0x8] = zmm0
        float var_5a0_3[0x8] = arg5
        float var_580_2[0x8] = zmm2
        zmm4 = _mm256_mul_ps(zmm3, zmm5)
        arg6 = _mm256_mul_ps(zmm3, zmm0)
        arg8 = _mm256_mul_ps(zmm3, arg5)
        zmm3 = _mm256_mul_ps(zmm3, zmm2)
        zmm4 = __vaddps_ymmqq_ymmqq_memqq(zmm4, var_200_1)
        arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_1e0_1)
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg8, var_1c0_1)
        float var_180_1[0x8] = zmm4
        float var_160_1[0x8] = arg6
        float var_140_1[0x8] = zmm2
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
        arg6 = _mm256_broadcast_ss(var_6d8)
        zmm4 = _mm256_cmp_ps(arg6, arg9, 1)
        zmm0[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        zmm0[0].o &= arg14[0].o
        zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        arg7 = _mm256_broadcast_ss(arg16[5])
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        char temp0_589 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
        zmm0 = _mm256_broadcast_ss(arg16[6])
        
        if (temp0_589 != 0)
            var_6c0_3 = _mm256_maskstore_ps(zmm4, arg6)
        
        zmm3 = _mm256_sub_ps(zmm3, zmm5)
        arg8 = _mm256_add_ps(arg5, arg7)
        arg7 = var_640_3
        
        if (_mm256_movemask_ps(_mm256_andnot_ps(zmm4, arg13)) != 0)
            zmm1 = _mm256_xor_ps(zmm4, _mm256_cmp_ps(arg12, arg12, 0xf))
            zmm5 = _mm256_broadcast_ss(var_6e8)
            zmm4 = _mm256_cmp_ps(arg9, zmm5, 1)
            arg5 = _mm256_and_ps(zmm4, zmm1)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg13)) != 0)
                var_6c0_3 = _mm256_maskstore_ps(arg5, zmm5)
            
            zmm1 = _mm256_andnot_ps(zmm4, zmm1)
            zmm4 = _mm256_and_ps(zmm1, arg13)
            
            if (_mm256_movemask_ps(zmm4) != 0)
                var_6c0_3 = _mm256_maskstore_ps(zmm1, arg9)
        
        zmm2 = _mm256_add_ps(zmm2, zmm3)
        arg5 = var_600_2
        zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
        zmm3 = _mm256_broadcast_ss(temp0_6)
        zmm1 = _mm256_cmp_ps(zmm3, arg8, 1)
        zmm5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm5[0].o &= arg14[0].o
        zmm4[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
            var_6a0_3 = _mm256_maskstore_ps(zmm1, zmm3)
        
        zmm5 = _mm256_add_ps(zmm2, zmm0)
        zmm0 = _mm256_andnot_ps(zmm1, arg13)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm0 = _mm256_xor_ps(zmm1, _mm256_cmp_ps(zmm0, zmm0, 0xf))
            zmm2 = _mm256_broadcast_ss(temp0_11)
            zmm1 = _mm256_cmp_ps(arg8, zmm2, 1)
            zmm3 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg13)) != 0)
                var_6a0_3 = _mm256_maskstore_ps(zmm3, zmm2)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
                var_6a0_3 = _mm256_maskstore_ps(zmm0, arg8)
        
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
        zmm1 = _mm256_broadcast_ss(temp0_7)
        zmm0 = _mm256_cmp_ps(zmm1, zmm5, 1)
        zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm3[0].o &= arg14[0].o
        zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            var_680_4 = _mm256_maskstore_ps(zmm0, zmm1)
        
        arg10[0].o = arg14[0].o
        zmm2[0].o = zx.o(0)
        
        if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg13)) != 0)
            zmm0 = _mm256_xor_ps(zmm0, _mm256_cmp_ps(zmm2, zmm2, 0xf))
            zmm2 = _mm256_broadcast_ss(temp0_12)
            zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
            zmm3 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg13)) != 0)
                var_680_4 = _mm256_maskstore_ps(zmm3, zmm2)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
                var_680_4 = _mm256_maskstore_ps(zmm0, zmm5)
        
        float var_4e0_2[0x8] = zmm5
        float var_360_1[0x8] = arg9
        var_540.32 = arg8
        int32_t var_440_2[0x8] = arg13
        arg6 = var_6c0_3
        arg8 = _mm256_broadcast_ss(*arg1)
        zmm0 = _mm256_sub_ps(arg6, arg8)
        zmm4 = _mm256_broadcast_ss(*(arg1 + 4))
        zmm1 = _mm256_sub_ps(var_6a0_3, zmm4)
        arg7 = _mm256_broadcast_ss(*arg3)
        zmm2 = _mm256_div_ps(zmm0, arg7)
        zmm3 = _mm256_broadcast_ss(*(arg3 + 4))
        zmm1 = _mm256_div_ps(zmm1, zmm3)
        zmm0[0].o = arg3[1].d
        arg9 = _mm256_cvttps_epi32(zmm2)
        zmm1 = _mm256_cvttps_epi32(zmm1)
        float var_2c0_1[0x8] = zmm1
        float var_3c0_1[0x8] = zmm3
        float var_400_1[0x8] = zmm4
        zmm1 = _mm256_add_ps(_mm256_mul_ps(zmm3, _mm256_cvtepi32_ps(zmm1)), zmm4)
        zmm2[0].o = __vmovsd_xmmdq_memq(*arg3)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0x20)
        zmm4[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm2[0].o, data_142fc9580)
        zmm2[0].o = _mm_permute_ps(zmm4[0].o, 0x55)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm2[0].o, 1)
        float var_420_1[0x8] = zmm2
        zmm5 = _mm256_add_ps(zmm2, zmm1)
        zmm1[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
        arg12 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        arg14 = _mm256_cmp_ps(zmm5, var_6a0_3, 1)
        zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        zmm1[0].o &= arg10[0].o
        arg5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_640_3[0].o, arg5[0].o)
        var_640_3[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg5[0].o)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_640_3[0].o, zmm1[0].o)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
        zmm2 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
        zmm0 = var_680_4
        arg13 = _mm256_broadcast_ss(arg1[1].d)
        double* var_520
        var_520.32 = zmm0
        zmm3 = _mm256_div_ps(_mm256_sub_ps(zmm0, arg13), zmm2)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        char temp0_692 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
        zmm0 = _mm256_cvttps_epi32(zmm3)
        float var_3a0_1[0x8] = arg7
        zmm1 = _mm256_mul_ps(arg7, _mm256_cvtepi32_ps(arg9))
        zmm3 = _mm256_mul_ps(zmm2, _mm256_cvtepi32_ps(zmm0))
        float var_3e0_1[0x8] = arg8
        arg7 = _mm256_add_ps(zmm1, arg8)
        zmm1 = _mm256_add_ps(zmm3, arg13)
        zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0)
        zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
        arg7 = _mm256_add_ps(zmm3, arg7)
        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xaa)
        float var_380_1[0x8] = arg6
        arg7 = _mm256_blendv_ps(arg12, arg9, _mm256_cmp_ps(arg7, arg6, 1))
        zmm4 = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
        double var_6c0_4[0x4] = arg7
        double* var_500
        var_500.32 = var_6a0_3
        zmm5 = _mm256_cmp_ps(zmm5, var_6a0_3, 5)
        
        if (temp0_692 != 0)
            arg9 = var_2c0_1
        
        zmm1 = _mm256_add_ps(zmm4, zmm1)
        zmm0[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        zmm0[0].o &= arg10[0].o
        zmm5[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
            zmm0[0].o = _mm256_extractf128_ps(var_2c0_1[0].o, 1)
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_2c0_1[0].o, zmm5[0].o)
            arg12 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
        
        arg8 = _mm256_blendv_ps(arg12, arg9, arg14)
        float var_6a0_4[0x8] = arg8
        arg11 = var_520.32
        zmm5 = _mm256_cmp_ps(zmm1, arg11, 5)
        arg14 = _mm256_cmp_ps(zmm1, arg11, 1)
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
        zmm1 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(var_3a0_1, _mm256_cvtepi32_ps(arg7)), 
            var_3e0_1)
        zmm5 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(var_3c0_1, _mm256_cvtepi32_ps(arg8)), 
            var_400_1)
        float var_680_5[0x8] = zmm0
        zmm0 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm2, _mm256_cvtepi32_ps(zmm0)), arg13)
        zmm1 = _mm256_add_ps(zmm3, zmm1)
        zmm3 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_420_1)
        zmm0 = _mm256_add_ps(zmm4, zmm0)
        zmm1 = _mm256_div_ps(_mm256_sub_ps(var_380_1, zmm1), var_3a0_1)
        arg8 = var_500.32
        zmm3 = _mm256_div_ps(_mm256_sub_ps(arg8, zmm3), var_3c0_1)
        zmm0 = _mm256_div_ps(_mm256_sub_ps(arg11, zmm0), zmm2)
        float var_5e0_4[0x8] = zmm1
        double var_5c0_4[0x4] = zmm3
        float var_5a0_4[0x8] = zmm0
        zmm0[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
        zmm0[0].o = zmm1[0].o & arg10[0].o
        zmm3[0].o = zmm2[0].o & arg5[0].o
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        bool cond:5_1 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o) == 0
        arg14[0].o = arg10[0].o
        
        if (not(cond:5_1))
            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            zmm2[0].o = zx.o(0)
            var_6c0_4 = _mm256_maskstore_ps(zmm1, zmm2)
            var_5e0_4 = _mm256_maskstore_ps(zmm1, zmm2)
            arg7 = var_6c0_4
        
        zmm2 = __vsubps_ymmqq_ymmqq_memqq(var_380_1, var_360_1)
        arg6 = var_600_2
        var_380_1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_640_3[0].o, arg6[0].o)
        int32_t rax_73 = *arg4
        zmm1[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
        zmm3[0].o = zx.o(rax_73 - 1)
        zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
        zmm5[0].o = zmm1[0].o & arg14[0].o
        var_380_1[0].o &= zmm3[0].o
        var_380_1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(var_380_1[0].o, zmm5[0].o)
        var_380_1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_380_1[0].o, var_640_3[0].o)
        zmm0 = var_540.32
        
        if (__vpmovmskb_gpr32d_xmmdq(var_380_1[0].o) != 0)
            zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
            zmm3[0].o = zx.o(rax_73 - 2)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            var_6c0_4 = _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
            var_5e0_4 = _mm256_maskstore_ps(zmm1, data_142fc95a0)
        
        zmm3 = _mm256_sub_ps(arg8, zmm0)
        zmm1 = _mm256_mul_ps(zmm2, zmm2)
        arg7 = var_640_3
        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
        var_380_1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_380_1[0].o, var_380_1[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_380_1[0].o, var_6a0_4[0].o)
        var_380_1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_380_1[0].o, var_6a0_4[4].o)
        arg5[0].o = var_380_1[0].o & arg14[0].o
        zmm5[0].o &= zmm2[0].o
        zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
        zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
            zmm2 = _mm256_insertf128_ps(zmm2, var_380_1[0].o, 1)
            var_380_1[0].o = zx.o(0)
            var_6a0_4 = _mm256_maskstore_ps(zmm2, var_380_1)
            var_5c0_4 = _mm256_maskstore_ps(zmm2, var_380_1)
        
        zmm4 = var_6a0_4
        zmm0 = _mm256_sub_ps(arg11, var_4e0_2)
        zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, data_142fc9440)
        zmm2 = _mm256_mul_ps(zmm3, zmm3)
        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
        int32_t rdx_41 = arg4[1]
        zmm3[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        arg5[0].o = zx.o(rdx_41 - 1)
        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg5[0].o, 0)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
        arg5[0].o = zmm3[0].o & arg14[0].o
        zmm5[0].o &= zmm4[0].o
        zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
        zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
            zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
            zmm4[0].o = zx.o(rdx_41 - 2)
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0)
            var_6a0_4 = _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(zmm4, zmm4[0].o, 1))
            zmm4 = data_142fc95a0
            var_5c0_4 = _mm256_maskstore_ps(zmm3, zmm4)
        
        zmm1 = _mm256_add_ps(zmm1, zmm2)
        zmm0 = _mm256_mul_ps(zmm0, zmm0)
        zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_680_5[0].o)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_670)
        zmm5[0].o = zmm3[0].o & arg14[0].o
        zmm4[0].o &= zmm2[0].o
        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
            zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
            zmm3[0].o = zx.o(0)
            var_680_5 = _mm256_maskstore_ps(zmm2, zmm3)
            var_5a0_4 = _mm256_maskstore_ps(zmm2, zmm3)
        
        arg12 = var_680_5
        zmm0 = _mm256_add_ps(zmm1, zmm0)
        float var_4e0_3[0x8] = zmm0
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
        int32_t rdx_44 = arg4[2]
        zmm0[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        zmm1[0].o = zx.o(rdx_44 - 1)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
        zmm3[0].o = zmm0[0].o & arg14[0].o
        zmm2[0].o &= zmm1[0].o
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm1[0].o = zx.o(rdx_44 - 2)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            float var_680_6[0x8] =
                _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
            zmm1 = data_142fc95a0
            var_5a0_4 = _mm256_maskstore_ps(zmm0, zmm1)
            arg12 = var_680_6
        
        arg8[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg6[0].o)
        int32_t var_640_4[0x4] = arg8[0].o
        zmm0[0].o = zx.o(*(arg15 + 4))
        arg6[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm1[0].o = var_6c0_4[0].o
        zmm3[0].o = var_6c0_4[2].o
        zmm2[0].o = var_6a0_4[0].o
        arg7[0].o = var_6a0_4[4].o
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        var_420_1[0].o = zmm0[0].o
        arg11[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, arg7[0].o)
        var_610.o = zmm4[0].o
        arg5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        var_520.o = arg5[0].o
        zmm0[0].o = zx.o(*(arg15 + 8))
        zmm5[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
        var_500.o = zmm0[0].o
        zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
        var_400_1[0].o = zmm4[0].o
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
        arg13[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
        zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm4[0].o, 1)
        arg10 = _mm256_insertf128_ps(arg8, arg14[0].o, 1)
        zmm0 = _mm256_and_ps(arg10, zmm0)
        int32_t temp0_851 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_852 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
        float rbx_30 = zmm0[0]
        int32_t temp0_853 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        int32_t temp0_855 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_856 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        float rsi_15 = zmm0[0]
        int32_t temp0_857 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        int32_t* rcx_54 = *(arg15 + 0x10)
        int64_t rbx_31 = sx.q(rbx_30)
        int64_t rdi_21 = sx.q(temp0_851)
        var_3a0_1[0].q = rdi_21
        int64_t r8_11 = sx.q(temp0_852)
        var_3c0_1[0].q = r8_11
        int64_t rdx_46 = sx.q(temp0_853)
        var_3e0_1[0].q = rdx_46
        int64_t r15_2 = sx.q(rsi_15)
        int64_t rax_75 = sx.q(temp0_855)
        var_380_1[0].q = rax_75
        int64_t rsi_16 = sx.q(temp0_856)
        var_360_1[0].q = rsi_16
        zmm0[0].o = *(rcx_54 + r15_2)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_54 + rax_75), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_54 + rsi_16), 0x20)
        int64_t rax_76 = sx.q(temp0_857)
        var_540.q = rax_76
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rcx_54 + rax_76), 0x30)
        zmm4[0].o = *(rcx_54 + rbx_31)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_54 + rdi_21), 0x10)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_54 + r8_11), 0x20)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rcx_54 + rdx_46), 0x30)
        arg5 = _mm256_insertf128_ps(zmm4, zmm0[0].o, 1)
        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
        zmm1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
        var_3c0_1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_3c0_1[0].o, zmm2[0].o)
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
        var_600_2[0].o = arg14[0].o
        arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
        zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm5[0].o)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg12[0].o)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
        zmm0 = _mm256_and_ps(arg10, _mm256_insertf128_ps(zmm0, zmm3[0].o, 1))
        int32_t temp0_880 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_881 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_882 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 3)
        float r13_2 = zmm0[0]
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        int32_t temp0_884 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_885 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_886 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        float rax_77 = zmm0[0]
        zmm2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm4[0].o)
        zmm3[0].o = *(rcx_54 + sx.q(rax_77))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + sx.q(temp0_884)), 0x10)
        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm2[0].o, var_420_1[0].o)
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
        arg7 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + sx.q(temp0_885)), 0x20)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        arg8[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_54 + sx.q(temp0_886)), 0x30)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_3c0_1[0].o, zmm2[0].o)
        zmm2[0].o = *(rcx_54 + sx.q(r13_2))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_54 + sx.q(temp0_880)), 0x10)
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg12[0].o)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm3[0].o, 1)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_54 + sx.q(temp0_881)), 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_54 + sx.q(temp0_882)), 0x30)
        zmm3 = _mm256_and_ps(arg10, arg7)
        int32_t temp0_914 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
        int32_t temp0_915 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
        int32_t r14_4 = zmm3[0].d
        int32_t temp0_916 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        int64_t rdi_23 = sx.q(zmm3[0].d)
        int32_t temp0_918 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
        int32_t temp0_919 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
        int32_t temp0_920 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
        zmm3[0].o = *(rcx_54 + rdi_23)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + sx.q(temp0_918)), 0x10)
        zmm1 = _mm256_and_ps(arg10, zmm1)
        zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        int32_t temp0_924 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1)
        int32_t temp0_925 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
        int32_t temp0_926 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3)
        float rax_86 = zmm4[0]
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + sx.q(temp0_919)), 0x20)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + sx.q(temp0_920)), 0x30)
        zmm3[0].o = *(rcx_54 + sx.q(r14_4))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + sx.q(temp0_914)), 0x10)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + sx.q(temp0_915)), 0x20)
        arg7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + sx.q(temp0_916)), 0x30)
        zmm3[0].o = *(rcx_54 + sx.q(rax_86))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + sx.q(temp0_924)), 0x10)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_610.o)
        arg6[0].o = __vpaddd_xmmdq_xmmdq_memdq(arg6[0].o, var_520.o)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + sx.q(temp0_925)), 0x20)
        arg11 = var_5e0_4
        zmm2 = _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm2, arg8[0].o, 1), arg5))
        arg8 = _mm256_add_ps(arg5, zmm2)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_54 + sx.q(temp0_926)), 0x30)
        int64_t rax_91 = sx.q(zmm1[0])
        int32_t temp0_941 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
        int32_t temp0_942 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
        int32_t temp0_943 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
        zmm1[0].o = *(rcx_54 + rax_91)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_54 + sx.q(temp0_941)), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_54 + sx.q(temp0_942)), 0x20)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rcx_54 + sx.q(temp0_943)), 0x30)
        zmm3 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
        zmm4[0].o = *(rsi_13 + rcx_54 + rbx_31)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        double r9_6 = var_550[0]
        zmm2[0].o = *(r9_6 i+ rcx_54 + r15_2)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_39 + rcx_54 + var_380_1[0].q), 0x10)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_46 + rcx_54 + var_360_1[0].q), 0x20)
        void* rax_102 = rcx_54 + var_3a0_1[0].q
        void* rdx_55 = rcx_54 + var_3c0_1[0].q
        void* rbx_33 = rcx_54 + var_3e0_1[0].q
        arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
        zmm1 = _mm256_mul_ps(arg11, _mm256_sub_ps(zmm1, zmm3))
        float* r13_4 = rax_48
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r13_4 + rcx_54 + var_540.q), 0x30)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_50 + rax_102), 0x10)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_52 + rdx_55), 0x20)
        arg7 = _mm256_add_ps(zmm3, zmm1)
        float* r12_5 = var_340[0].q
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r12_5 + rbx_33), 0x30)
        zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg12[0].o)
        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
        zmm3 = _mm256_and_ps(arg10, zmm2)
        zmm2[0].o = *(rsi_13 + sx.q(zmm3[0].d) + rcx_54)
        int32_t temp0_967 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
        int32_t temp0_968 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
        int32_t temp0_969 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        void* rdi_30 = sx.q(zmm3[0].d) + rcx_54
        int32_t temp0_971 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
        int32_t temp0_972 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
        int32_t temp0_973 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
        zmm3[0].o = *(r9_6 i+ rdi_30)
        zmm3[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rdx_39 + sx.q(temp0_971) + rcx_54), 0x10)
        zmm3[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_46 + sx.q(temp0_972) + rcx_54), 0x20)
        zmm3[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(r13_4 + sx.q(temp0_973) + rcx_54), 0x30)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_50 + sx.q(temp0_967) + rcx_54), 0x10)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_52 + sx.q(temp0_968) + rcx_54), 0x20)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r12_5 + sx.q(temp0_969) + rcx_54), 0x30)
        zmm2 = _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm2, zmm3[0].o, 1), zmm1))
        arg9 = _mm256_add_ps(zmm1, zmm2)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg12[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg13[0].o)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm2[0].o, var_400_1[0].o)
        zmm4[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_500.o)
        zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
        zmm3 = _mm256_and_ps(arg10, _mm256_insertf128_ps(zmm4, zmm3[0].o, 1))
        void* rdx_60 = sx.q(zmm3[0].d) + rcx_54
        int32_t temp0_992 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
        int32_t temp0_993 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
        int32_t temp0_994 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
        zmm4[0].o = *(rsi_13 + rdx_60)
        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        zmm5[0].o = *(r9_6 i+ sx.q(zmm3[0].d) + rcx_54)
        void* rdx_66 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)) + rcx_54
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rdx_39 + rdx_66), 0x10)
        void* rdx_69 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)) + rcx_54
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_46 + rdx_69), 0x20)
        void* rdx_72 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)) + rcx_54
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(r13_4 + rdx_72), 0x30)
        zmm4[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_50 + sx.q(temp0_992) + rcx_54), 0x10)
        zmm4[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_52 + sx.q(temp0_993) + rcx_54), 0x20)
        zmm4[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(r12_5 + sx.q(temp0_994) + rcx_54), 0x30)
        zmm4 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
        zmm0 = _mm256_and_ps(arg10, _mm256_insertf128_ps(zmm1, zmm0[0].o, 1))
        void* rdx_74 = sx.q(zmm0[0]) + rcx_54
        int32_t temp0_1012 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_1013 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_1014 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm1[0].o = *(rsi_13 + rdx_74)
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm2[0].o = *(r9_6 i+ sx.q(zmm0[0]) + rcx_54)
        int32_t temp0_1016 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_1017 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_1018 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
            *(rdx_39 + sx.q(temp0_1016) + rcx_54), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
            *(rax_46 + sx.q(temp0_1017) + rcx_54), 0x20)
        zmm0[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r13_4 + sx.q(temp0_1018) + rcx_54), 0x30)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
            *(rax_50 + sx.q(temp0_1012) + rcx_54), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
            *(rax_52 + sx.q(temp0_1013) + rcx_54), 0x20)
        zmm1[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(r12_5 + sx.q(temp0_1014) + rcx_54), 0x30)
        zmm0 = _mm256_add_ps(zmm4, 
            _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), zmm4)))
        zmm1 = var_5c0_4
        zmm2 = _mm256_add_ps(arg8, _mm256_mul_ps(_mm256_sub_ps(arg7, arg8), zmm1))
        zmm0 = _mm256_add_ps(zmm2, 
            __vmulps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(_mm256_add_ps(arg9, _mm256_mul_ps(zmm1, _mm256_sub_ps(zmm0, arg9))), 
                    zmm2), 
                var_5a0_4))
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm3 = var_4e0_3
        zmm1 = _mm256_cmp_ps(zmm3, zmm1, 0xc)
        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm2[0].o &= var_600_2[0].o
        zmm1[0].o = __vandps_xmmdq_xmmdq_memdq(zmm1[0].o, var_640_4)
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
        
        zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg20), 1), var_440_2)
        int32_t i_3 = _mm256_movemask_ps(zmm1)
        
        if (i_3 == 0)
            result = 0
        else
            uint64_t i_1 = zx.q(i_3)
            result = 0
            
            do
                uint64_t rdx_83
                
                if (i_1 == 0)
                    rdx_83 = 0x40
                    i_1 &= 0xfffffffffffffffe
                    
                    if ((result.b & 1) == 0)
                    label_1400935f1:
                        float var_280[0x8] = zmm0
                        uint64_t rdx_84 = zx.q(rdx_83.d) & 7
                        zmm1[0].o = var_280[rdx_84]
                        *arg20 = zmm1[0]
                        float var_260[0x8] = var_460_2
                        *arg19 = var_260[rdx_84]
                else
                    uint64_t rflags_2
                    rdx_83, rflags_2 = _bit_scan_forward(i_1)
                    i_1 &= not.q(1 << (rdx_83 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_1400935f1
                result.b = 1
            while (i_1 != 0)

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
