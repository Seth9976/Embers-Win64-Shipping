// 函数: sub_140095b80
// 地址: 0x140095b80
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
float var_678 = zmm1[0]
float temp0_6 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float temp0_7 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float var_688 = zmm0[0]
float temp0_11 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float temp0_12 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
int32_t r8_4 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
int32_t var_668
uint32_t var_610[0x4]
int32_t* var_570
int32_t result
uint64_t r15
float zmm2[0x8]
double zmm3[0x4]
float zmm4[0x8]
float zmm5[0x8]

if (r8_4 s<= 0)
    r15 = 0
    result = 0
else
    result = 0
    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
    r15 = 0
    var_570 = arg4
    var_668 = r8_4
    
    while (true)
        bool cond:1_1 = (result.b & 1) != 0
        result.b = 1
        
        if (not(cond:1_1))
            int64_t rax_3 = sx.q((r15 << 2).d * 3)
            zmm0[0].o = *(arg17 + rax_3)
            zmm1[0].o = *(arg17 + rax_3 + 0x10)
            zmm2[0].o = *(arg17 + rax_3 + 0x20)
            zmm3[0].o = *(arg17 + rax_3 + 0x30)
            zmm4[0].o = *(arg17 + rax_3 + 0x40)
            zmm5[0].o = *(arg17 + rax_3 + 0x50)
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
            float var_540_1[0x8] = zmm2
            double var_520_1[0x4] = zmm3
            float var_500_1[0x8] = zmm0
            float var_4e0_1[0x8] = arg11
            zmm1 = _mm256_broadcast_ss(arg16[3])
            uint32_t var_660_1[0x8] = zmm1
            uint32_t var_640_1[0x8] = zmm1
            uint32_t var_620_1[0x8] = zmm1
            uint32_t var_600_1[0x8] = zmm1
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
            arg8 = __vaddps_ymmqq_ymmqq_memqq(zmm0, var_540_1)
            arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_520_1)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_500_1)
            arg9 = _mm256_mul_ps(zmm2, zmm5)
            arg10 = _mm256_mul_ps(zmm3, arg5)
            zmm0 = _mm256_mul_ps(zmm4, arg7)
            arg5 = _mm256_add_ps(arg8, _mm256_sub_ps(arg9, _mm256_mul_ps(zmm4, arg5)))
            zmm4 = _mm256_add_ps(arg6, _mm256_sub_ps(arg10, _mm256_mul_ps(zmm2, arg7)))
            zmm3 = _mm256_mul_ps(zmm3, zmm5)
            arg8 = _mm256_add_ps(arg5, _mm256_broadcast_ss(arg16[4]))
            zmm5 = _mm256_broadcast_ss(arg16[5])
            zmm2 = _mm256_broadcast_ss(arg16[6])
            arg6 = _mm256_broadcast_ss(var_678)
            arg5 = _mm256_cmp_ps(arg6, arg8, 1)
            
            if (_mm256_movemask_ps(arg5) != 0)
                var_660_1 = _mm256_maskstore_ps(arg5, arg6)
            
            zmm3 = _mm256_sub_ps(zmm0, zmm3)
            arg7 = _mm256_add_ps(zmm4, zmm5)
            zmm0 = _mm256_cmp_ps(arg11, arg11, 0xf)
            zmm4 = _mm256_xor_ps(arg5, zmm0)
            
            if (_mm256_movemask_ps(zmm4) != 0)
                arg5 = _mm256_broadcast_ss(var_688)
                zmm5 = _mm256_cmp_ps(arg8, arg5, 1)
                arg6 = _mm256_and_ps(zmm5, zmm4)
                
                if (_mm256_movemask_ps(arg6) != 0)
                    var_660_1 = _mm256_maskstore_ps(arg6, arg5)
                
                zmm4 = _mm256_andnot_ps(zmm5, zmm4)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    var_660_1 = _mm256_maskstore_ps(zmm4, arg8)
            
            zmm1 = _mm256_add_ps(zmm1, zmm3)
            zmm4 = _mm256_broadcast_ss(temp0_6)
            zmm3 = _mm256_cmp_ps(zmm4, arg7, 1)
            
            if (_mm256_movemask_ps(zmm3) != 0)
                var_640_1 = _mm256_maskstore_ps(zmm3, zmm4)
            
            zmm5 = _mm256_add_ps(zmm1, zmm2)
            zmm1 = _mm256_xor_ps(zmm3, zmm0)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm3 = _mm256_broadcast_ss(temp0_11)
                zmm2 = _mm256_cmp_ps(arg7, zmm3, 1)
                zmm4 = _mm256_and_ps(zmm2, zmm1)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    var_640_1 = _mm256_maskstore_ps(zmm4, zmm3)
                
                zmm1 = _mm256_andnot_ps(zmm2, zmm1)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_640_1 = _mm256_maskstore_ps(zmm1, arg7)
            
            zmm2 = _mm256_broadcast_ss(temp0_7)
            zmm1 = _mm256_cmp_ps(zmm2, zmm5, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_620_1 = _mm256_maskstore_ps(zmm1, zmm2)
            
            zmm0 = _mm256_xor_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm2 = _mm256_broadcast_ss(temp0_12)
                zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_620_1 = _mm256_maskstore_ps(zmm3, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_620_1 = _mm256_maskstore_ps(zmm0, zmm5)
            
            float var_5c0_1[0x8] = zmm5
            float var_560_1[0x8] = arg8
            int128_t var_5a0
            var_5a0.32 = arg7
            arg6 = var_640_1
            zmm2 = var_620_1
            arg9 = _mm256_broadcast_ss(*arg1)
            zmm0 = _mm256_sub_ps(var_660_1, arg9)
            arg11 = _mm256_broadcast_ss(*(arg1 + 4))
            zmm1 = _mm256_sub_ps(arg6, arg11)
            zmm5 = _mm256_broadcast_ss(*arg3)
            zmm0 = _mm256_div_ps(zmm0, zmm5)
            arg5 = _mm256_broadcast_ss(*(arg3 + 4))
            zmm1 = _mm256_div_ps(zmm1, arg5)
            arg13 = _mm256_broadcast_ss(arg1[1].d)
            float var_5e0_1[0x8] = zmm2
            zmm2 = _mm256_sub_ps(zmm2, arg13)
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
            int64_t var_420
            var_420.32 = arg8
            arg8 = _mm256_mul_ps(arg12, _mm256_cvtepi32_ps(arg8))
            double var_400_1[0x4] = arg9
            zmm0 = _mm256_add_ps(zmm0, arg9)
            float var_460_1[0x8] = arg11
            arg9 = _mm256_add_ps(arg7, arg11)
            int64_t var_2e0
            var_2e0.32 = arg13
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
            int64_t var_3e0
            var_3e0.32 = var_660_1
            zmm3 = _mm256_blendv_ps(zmm1, zmm2, _mm256_cmp_ps(zmm0, var_660_1, 1))
            double var_660_2[0x4] = zmm3
            zmm0 = _mm256_cmp_ps(arg13, arg6, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm2 = arg10
            
            arg11 = _mm256_add_ps(arg9, arg11)
            int64_t var_440
            var_440.32 = arg6
            arg13 = _mm256_cmp_ps(arg13, arg6, 5)
            var_660_1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg13[0].o, var_660_1[0].o)
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            bool cond:3_1 = __vpmovmskb_gpr32d_xmmdq(arg6[0].o) == 0
            arg13[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            
            if (not(cond:3_1))
                zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg13[0].o)
                zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
            
            arg10 = _mm256_blendv_ps(zmm1, zmm2, zmm0)
            float var_640_2[0x8] = arg10
            arg14 = var_5e0_1
            zmm0 = _mm256_cmp_ps(arg11, arg14, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm2 = var_420.32
            
            arg6 = _mm256_cmp_ps(arg11, arg14, 5)
            zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm4[0].o)
            zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
                zmm4 = var_420.32
                zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg13[0].o)
                zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
                zmm1 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
            
            zmm0 = _mm256_blendv_ps(zmm1, zmm2, zmm0)
            zmm1 =
                __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(zmm5, _mm256_cvtepi32_ps(zmm3)), var_400_1)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg5, _mm256_cvtepi32_ps(arg10)), 
                var_460_1)
            float var_620_2[0x8] = zmm0
            zmm0 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg12, _mm256_cvtepi32_ps(zmm0)), 
                var_2e0.32)
            zmm1 = _mm256_add_ps(arg7, zmm1)
            zmm2 = _mm256_add_ps(arg8, zmm2)
            zmm0 = _mm256_add_ps(arg9, zmm0)
            arg7 = var_3e0.32
            zmm1 = _mm256_div_ps(_mm256_sub_ps(arg7, zmm1), zmm5)
            arg6 = var_440.32
            zmm2 = _mm256_div_ps(_mm256_sub_ps(arg6, zmm2), arg5)
            zmm0 = _mm256_div_ps(_mm256_sub_ps(arg14, zmm0), arg12)
            uint32_t var_540_2[0x8] = zmm1
            float var_520_2[0x8] = zmm2
            float var_500_2[0x8] = zmm0
            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            bool cond:7_1 = _mm256_movemask_ps(zmm0) == 0
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            
            if (not(cond:7_1))
                var_660_2 = _mm256_maskstore_ps(zmm0, arg5)
                var_540_2 = _mm256_maskstore_ps(zmm0, arg5)
                zmm3 = var_660_2
            
            int32_t rax_23 = *arg4
            zmm0[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm1[0].o = zx.o(rax_23 - 1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm3 = var_5a0.32
            zmm5 = var_5c0_1
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rax_23 - 2)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                var_660_2 = _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
                zmm1 = data_142fc95a0
                var_540_2 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg13[0].o, var_640_2[0].o)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg13[0].o, var_640_2[4].o)
            zmm0 = _mm256_sub_ps(arg7, var_560_1)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_640_2 = _mm256_maskstore_ps(zmm1, arg5)
                var_520_2 = _mm256_maskstore_ps(zmm1, arg5)
            
            zmm1 = _mm256_sub_ps(arg6, zmm3)
            zmm0 = _mm256_mul_ps(zmm0, zmm0)
            int32_t rax_26 = arg4[1]
            zmm3[0].o = _mm256_extractf128_ps(var_640_2[0].o, 1)
            var_560_1[0].o = zx.o(rax_26 - 1)
            var_560_1[0].o = __vpshufd_xmmdq_xmmdq_immb(var_560_1[0].o, 0)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_560_1[0].o)
            var_640_2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_640_2[0].o, var_560_1[0].o)
            zmm2 = _mm256_insertf128_ps(var_640_2, zmm3[0].o, 1)
            
            if (_mm256_movemask_ps(zmm2) != 0)
                zmm3[0].o = zx.o(rax_26 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                var_640_2 = _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                var_520_2 = _mm256_maskstore_ps(zmm2, data_142fc95a0)
            
            zmm2 = _mm256_sub_ps(arg14, zmm5)
            zmm1 = _mm256_mul_ps(zmm1, zmm1)
            var_560_1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg13[0].o, var_620_2[0].o)
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(arg13[0].o, var_610)
            zmm3 = _mm256_add_ps(zmm0, arg5)
            zmm0 = _mm256_insertf128_ps(var_560_1, zmm5[0].o, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_620_2 = _mm256_maskstore_ps(zmm0, arg5)
                var_500_2 = _mm256_maskstore_ps(zmm0, arg5)
            
            arg9 = var_620_2
            zmm0 = _mm256_mul_ps(zmm2, zmm2)
            zmm1 = _mm256_add_ps(zmm3, zmm1)
            int32_t rax_29 = arg4[2]
            zmm2[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            zmm3[0].o = zx.o(rax_29 - 1)
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            
            if (_mm256_movemask_ps(zmm2) != 0)
                zmm3[0].o = zx.o(rax_29 - 2)
                zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
                double var_620_3[0x4] =
                    _mm256_maskstore_ps(zmm2, _mm256_insertf128_ps(zmm3, zmm3[0].o, 1))
                zmm3 = data_142fc95a0
                var_500_2 = _mm256_maskstore_ps(zmm2, zmm3)
                arg9 = var_620_3
            
            zmm0 = _mm256_add_ps(zmm1, zmm0)
            var_5a0.32 = zmm0
            zmm0[0].o = zx.o(*(arg15 + 4))
            zmm3[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
            arg6[0].o = var_660_2[0].o
            arg7[0].o = var_660_2[2].o
            arg5[0].o = var_640_2[0].o
            zmm0[0].o = var_640_2[4].o
            arg13[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg7[0].o)
            arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm0[0].o)
            zmm1[0].o = zx.o(*(arg15 + 8))
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
            var_5c0_1[0].o = zmm2[0].o
            var_560_1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
            var_560_1[0].o = var_560_1[0].o
            var_560_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_560_1[0].o, arg9[0].o)
            arg10[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            var_560_1[0].o = __vpslld_xmmdq_xmmdq_immb(var_560_1[0].o, 2)
            int32_t temp0_279 = __vpextrd_gpr32d_xmmdq_immb(var_560_1[0].o, 1)
            int32_t temp0_280 = __vpextrd_gpr32d_xmmdq_immb(var_560_1[0].o, 2)
            float rsi_1 = var_560_1[0]
            int32_t temp0_281 = __vpextrd_gpr32d_xmmdq_immb(var_560_1[0].o, 3)
            var_560_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
            float* rax_32 = *(arg15 + 0x10)
            var_560_1[0].o = __vpslld_xmmdq_xmmdq_immb(var_560_1[0].o, 2)
            int64_t r13_1 = sx.q(rsi_1)
            int64_t rsi_2 = sx.q(temp0_279)
            int64_t rdx = sx.q(temp0_280)
            var_5e0_1[0].q = rdx
            int64_t r10_1 = sx.q(var_560_1[0])
            int64_t r11_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(var_560_1[0].o, 1))
            int64_t r9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(var_560_1[0].o, 2))
            int32_t temp0_286 = __vpextrd_gpr32d_xmmdq_immb(var_560_1[0].o, 3)
            var_560_1[0].o = *(rax_32 + r10_1)
            var_560_1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(var_560_1[0].o, *(rax_32 + r11_1), 0x10)
            var_560_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_560_1[0].o, *(rax_32 + r9), 0x20)
            int64_t r12_1 = sx.q(temp0_286)
            var_560_1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(var_560_1[0].o, *(rax_32 + r12_1), 0x30)
            zmm5[0].o = *(rax_32 + r13_1)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + rsi_2), 0x10)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + rdx), 0x20)
            int64_t rcx_12 = sx.q(temp0_281)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + rcx_12), 0x30)
            arg11 = _mm256_insertf128_ps(zmm5, var_560_1[0].o, 1)
            zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            var_560_1[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
            zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
            arg6[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
            arg7[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_560_1[0].o)
            arg14[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm3[0].o)
            arg8[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm3[0].o)
            var_560_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            var_560_1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_560_1[0].o, zmm1[0].o)
            var_560_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_560_1[0].o, arg10[0].o)
            var_560_1[0].o = __vpslld_xmmdq_xmmdq_immb(var_560_1[0].o, 2)
            int32_t temp0_305 = __vpextrd_gpr32d_xmmdq_immb(var_560_1[0].o, 1)
            int32_t temp0_306 = __vpextrd_gpr32d_xmmdq_immb(var_560_1[0].o, 2)
            int32_t temp0_307 = __vpextrd_gpr32d_xmmdq_immb(var_560_1[0].o, 3)
            float rdx_1 = var_560_1[0]
            var_560_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
            var_560_1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_560_1[0].o, zmm1[0].o)
            var_560_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_560_1[0].o, arg9[0].o)
            var_560_1[0].o = __vpslld_xmmdq_xmmdq_immb(var_560_1[0].o, 2)
            int32_t temp0_312 = __vpextrd_gpr32d_xmmdq_immb(var_560_1[0].o, 1)
            zmm5[0].o = *(rax_32 + sx.q(rdx_1))
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + sx.q(temp0_305)), 0x10)
            int32_t temp0_314 = __vpextrd_gpr32d_xmmdq_immb(var_560_1[0].o, 2)
            int32_t temp0_315 = __vpextrd_gpr32d_xmmdq_immb(var_560_1[0].o, 3)
            float r8_5 = var_560_1[0]
            var_560_1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + sx.q(temp0_306)), 0x20)
            var_560_1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(var_560_1[0].o, *(rax_32 + sx.q(temp0_307)), 0x30)
            zmm5[0].o = *(rax_32 + sx.q(r8_5))
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + sx.q(temp0_312)), 0x10)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + sx.q(temp0_314)), 0x20)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + sx.q(temp0_315)), 0x30)
            zmm4 = _mm256_insertf128_ps(zmm5, var_560_1[0].o, 1)
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
            int32_t rdx_5 = zmm3[0].d
            int32_t temp0_332 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            int32_t temp0_333 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
            int32_t temp0_334 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
            zmm3[0].o = *(rax_32 + sx.q(rdx_5))
            int32_t temp0_335 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            zmm4 = _mm256_sub_ps(zmm4, arg11)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_32 + sx.q(temp0_332)), 0x10)
            int32_t temp0_338 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_32 + sx.q(temp0_333)), 0x20)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_32 + sx.q(temp0_334)), 0x30)
            float rdi_9 = zmm5[0]
            int32_t temp0_341 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            arg12 = var_540_2
            zmm4 = _mm256_mul_ps(arg12, zmm4)
            zmm5[0].o = *(rax_32 + sx.q(rdi_9))
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + sx.q(temp0_335)), 0x10)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + sx.q(temp0_338)), 0x20)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + sx.q(temp0_341)), 0x30)
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
            int64_t rbx_9 = sx.q(zmm0[0])
            int32_t temp0_356 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            zmm3[0].o = *(rax_32 + rbx_9)
            int32_t temp0_357 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_32 + sx.q(temp0_356)), 0x10)
            int32_t temp0_359 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = *(rax_32 + rdx_10)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_32 + sx.q(temp0_357)), 0x20)
            int64_t rdx_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_32 + sx.q(temp0_359)), 0x30)
            int32_t temp0_363 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_32 + rdx_13), 0x10)
            int32_t temp0_365 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm5[0].o = *(rax_32 + r10_1 + 4)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_32 + sx.q(temp0_363)), 0x20)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_32 + sx.q(temp0_365)), 0x30)
            zmm3 = _mm256_insertf128_ps(zmm0, zmm3[0].o, 1)
            arg6[0].o = *(rax_32 + r13_1 + 4)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm1[0].o)
            zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
            zmm3 = _mm256_mul_ps(arg12, _mm256_sub_ps(zmm3, zmm4))
            arg7 = _mm256_add_ps(zmm4, zmm3)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + r11_1 + 4), 0x10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_32 + r9 + 4), 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_32 + r12_1 + 4), 0x30)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_32 + rsi_2 + 4), 0x10)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_32 + var_5e0_1[0].q + 4), 0x20)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_32 + rcx_12 + 4), 0x30)
            zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg9[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
            zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
            zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 2)
            float rcx_13 = zmm4[0]
            int32_t temp0_385 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1)
            int32_t temp0_386 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2)
            int32_t temp0_387 = __vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3)
            zmm4[0].o = *(rax_32 + sx.q(rcx_13) + 4)
            int64_t rbx_17 = sx.q(zmm5[0])
            int32_t temp0_388 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
            int32_t temp0_389 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
            int32_t temp0_390 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
            zmm5[0].o = *(rax_32 + rbx_17 + 4)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + sx.q(temp0_388) + 4), 0x10)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + sx.q(temp0_389) + 4), 0x20)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_32 + sx.q(temp0_390) + 4), 0x30)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_32 + sx.q(temp0_385) + 4), 0x10)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_32 + sx.q(temp0_386) + 4), 0x20)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_32 + sx.q(temp0_387) + 4), 0x30)
            arg6 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
            zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
            zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm5[0].o, var_560_1[0].o)
            arg5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm4[0].o, var_5c0_1[0].o)
            arg5[0].o = __vpslld_xmmdq_xmmdq_immb(arg5[0].o, 2)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 2)
            int64_t rcx_18 = sx.q(zmm1[0])
            int32_t temp0_404 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
            int32_t temp0_405 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2)
            int32_t temp0_406 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
            zmm1[0].o = *(rax_32 + rcx_18 + 4)
            float rcx_19 = arg5[0]
            int32_t temp0_407 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1)
            int32_t temp0_408 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
            int32_t temp0_409 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
            arg5[0].o = *(rax_32 + sx.q(rcx_19) + 4)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_32 + sx.q(temp0_407) + 4), 0x10)
            arg6 = _mm256_mul_ps(arg12, _mm256_sub_ps(arg6, zmm3))
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_32 + sx.q(temp0_408) + 4), 0x20)
            arg5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rax_32 + sx.q(temp0_409) + 4), 0x30)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_32 + sx.q(temp0_404) + 4), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_32 + sx.q(temp0_405) + 4), 0x20)
            arg8[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_32 + sx.q(temp0_406) + 4), 0x30)
            zmm1 = _mm256_add_ps(zmm3, arg6)
            zmm3 = _mm256_insertf128_ps(arg8, arg5[0].o, 1)
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
            zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
            int32_t temp0_424 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
            int64_t rdx_24 = sx.q(zmm0[0])
            int32_t temp0_425 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
            int32_t temp0_426 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
            int32_t temp0_427 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
            zmm0[0].o = *(rax_32 + rdx_24 + 4)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_32 + sx.q(temp0_425) + 4), 0x10)
            float rdx_26 = zmm2[0]
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_32 + sx.q(temp0_426) + 4), 0x20)
            int32_t temp0_430 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
            zmm0[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rax_32 + sx.q(temp0_427) + 4), 0x30)
            int32_t temp0_432 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
            zmm2[0].o = *(rax_32 + sx.q(rdx_26) + 4)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_32 + sx.q(temp0_424) + 4), 0x10)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_32 + sx.q(temp0_430) + 4), 0x20)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_32 + sx.q(temp0_432) + 4), 0x30)
            zmm0 = _mm256_add_ps(zmm3, 
                _mm256_mul_ps(arg12, _mm256_sub_ps(_mm256_insertf128_ps(zmm2, zmm0[0].o, 1), zmm3)))
            zmm2 = var_520_2
            zmm3 = _mm256_add_ps(arg11, _mm256_mul_ps(_mm256_sub_ps(arg7, arg11), zmm2))
            zmm0 = _mm256_add_ps(zmm3, 
                __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_sub_ps(
                        _mm256_add_ps(zmm1, _mm256_mul_ps(zmm2, _mm256_sub_ps(zmm0, zmm1))), zmm3), 
                    var_500_2))
            zmm3 = var_5a0.32
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
            
            arg4 = var_570
            r8_4 = var_668
            zmm1 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg19), 1)
            char i_2 = _mm256_movemask_ps(zmm1)
            
            if (i_2 == 0)
                result = 0
                r15 = zx.q(r15.d + 8)
                
                if (r15.d s>= r8_4)
                    break
                
                continue
            else
                zmm1[0].o = zx.o(r15.d)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
                zmm2[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142e11d00)
                zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, data_142fc9500)
                zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
                uint64_t i = zx.q(i_2)
                result = 0
                
                do
                    uint64_t rdi_20
                    
                    if (i == 0)
                        rdi_20 = 0x40
                        i &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_140096ae1:
                            float var_240[0x8] = zmm0
                            uint64_t rdi_21 = zx.q(rdi_20.d) & 7
                            zmm2[0].o = zx.o(var_240[rdi_21])
                            *arg19 = zmm2[0]
                            uint32_t var_220[0x8] = zmm1
                            *arg18 = var_220[rdi_21]
                    else
                        uint64_t rflags_1
                        rdi_20, rflags_1 = _bit_scan_forward(i)
                        i &= not.q(1 << (rdi_20 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_140096ae1
                    result.b = 1
                while (i != 0)
        
        r15 = zx.q(r15.d + 8)
        
        if (r15.d s>= r8_4)
            break

if (r15.d s< arg20)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        zmm0[0].o = zx.o(r15.d)
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
        float var_5c0_2[0x8] = zmm3
        arg7[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
        zmm0 = _mm256_insertf128_ps(arg7, arg14[0].o, 1)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        float var_560_2[0x8] = zmm4
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
        zmm2 = _mm256_and_ps(zmm0, _mm256_insertf128_ps(zmm3, zmm2[0].o, 1))
        int64_t rax_36 = sx.q(zmm2[0])
        void* r14_2 = arg17 + (rax_36 << 2)
        zmm3[0].o = *(arg17 + (rax_36 << 2))
        int64_t rax_38 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
        void* rsi_15 = arg17 + (rax_38 << 2)
        int64_t rcx_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
        void* r10_2 = arg17 + (rcx_29 << 2)
        int64_t rdi_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
        void* r11_2 = arg17 + (rdi_22 << 2)
        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        int64_t rdx_31 = sx.q(zmm2[0])
        zmm4[0].o = *(arg17 + (rdx_31 << 2))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rax_38 << 2)), 0x10)
        void* rdx_32 = arg17 + (rdx_31 << 2)
        int64_t rax_40 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rcx_29 << 2)), 0x20)
        int32_t temp0_497 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg17 + (rax_40 << 2)), 0x10)
        void* rax_41 = arg17 + (rax_40 << 2)
        int64_t rcx_31 = sx.q(temp0_497)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg17 + (rdi_22 << 2)), 0x30)
        int32_t temp0_500 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg17 + (rcx_31 << 2)), 0x20)
        void* rcx_32 = arg17 + (rcx_31 << 2)
        int64_t rdi_24 = sx.q(temp0_500)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg17 + (rdi_24 << 2)), 0x30)
        void* rdi_25 = arg17 + (rdi_24 << 2)
        arg8 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
        zmm3 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9520)
        zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9540)
        zmm4[0].o = *(zx.q(zmm0[0]) + r14_2)
        int32_t* rbx_27 = zx.q(zmm3[0].d)
        zmm5[0].o = *(rbx_27 + r14_2)
        arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm1[0].o = *(zx.q(arg6[0]) + rdx_32)
        int32_t* rbx_29 = zx.q(arg5[0])
        zmm2[0].o = *(rbx_29 + rdx_32)
        uint64_t rdx_33 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rdx_33 + rax_41), 0x10)
        float* rdx_34 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_34 + rax_41), 0x10)
        float* rax_42 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_42 + rcx_32), 0x20)
        float* rax_43 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_43 + rcx_32), 0x20)
        float* rax_44 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_44 + rdi_25), 0x30)
        float* rax_45 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
        var_668.q = rax_45
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_45 + rdi_25), 0x30)
        uint64_t rax_46 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_46 + rsi_15), 0x10)
        float* rax_47 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_47 + rsi_15), 0x10)
        uint64_t rax_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_48 + r10_2), 0x20)
        float* rax_49 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_49 + r10_2), 0x20)
        uint64_t rax_50 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(rax_50 + r11_2), 0x30)
        float* rax_51 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_51 + r11_2), 0x30)
        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
        zmm1 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
        float var_200_1[0x8] = arg8
        float var_1e0_1[0x8] = zmm2
        float var_1c0_1[0x8] = zmm1
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        zmm3 = _mm256_broadcast_ss(arg16[3])
        float var_660_3[0x8] = zmm3
        double var_640_3[0x4] = zmm3
        double var_620_4[0x4] = zmm3
        double var_600_2[0x4] = zmm3
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
        float var_540_3[0x8] = arg5
        uint32_t var_520_3[0x8] = zmm1
        float var_500_3[0x8] = zmm4
        float var_4e0_2[0x8] = zmm2
        zmm5 = _mm256_mul_ps(zmm3, arg5)
        arg6 = _mm256_mul_ps(zmm3, zmm1)
        arg8 = _mm256_mul_ps(zmm3, zmm4)
        zmm3 = _mm256_mul_ps(zmm3, zmm2)
        arg9 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_200_1)
        arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_1e0_1)
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg8, var_1c0_1)
        double var_180_1[0x4] = arg9
        float var_160_1[0x8] = arg6
        float var_140_1[0x8] = zmm2
        double var_120_1[0x4] = __vaddps_ymmqq_ymmqq_memqq(zmm3, zmm0)
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
        arg6 = _mm256_broadcast_ss(var_678)
        zmm4 = _mm256_cmp_ps(arg6, arg10, 1)
        zmm1[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
        double var_5a0_1[0x2] = arg14[0].o
        zmm1[0].o &= arg14[0].o
        zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        arg7 = _mm256_broadcast_ss(arg16[5])
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        char temp0_584 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
        zmm1 = _mm256_broadcast_ss(arg16[6])
        
        if (temp0_584 != 0)
            var_660_3 = _mm256_maskstore_ps(zmm4, arg6)
        
        zmm3 = _mm256_sub_ps(zmm3, zmm5)
        arg9 = _mm256_add_ps(arg5, arg7)
        zmm0 = _mm256_andnot_ps(zmm4, arg13)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm0 = _mm256_xor_ps(zmm4, _mm256_cmp_ps(zmm0, zmm0, 0xf))
            zmm5 = _mm256_broadcast_ss(var_688)
            zmm4 = _mm256_cmp_ps(arg10, zmm5, 1)
            arg5 = _mm256_and_ps(zmm4, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg13)) != 0)
                var_660_3 = _mm256_maskstore_ps(arg5, zmm5)
            
            zmm0 = _mm256_andnot_ps(zmm4, zmm0)
            zmm4 = _mm256_and_ps(zmm0, arg13)
            
            if (_mm256_movemask_ps(zmm4) != 0)
                var_660_3 = _mm256_maskstore_ps(zmm0, arg10)
        
        zmm2 = _mm256_add_ps(zmm2, zmm3)
        zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_5c0_2[0].o, var_560_2[0].o)
        zmm3 = _mm256_broadcast_ss(temp0_6)
        zmm0 = _mm256_cmp_ps(zmm3, arg9, 1)
        zmm5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm5[0].o &= var_5a0_1
        zmm4[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
            var_640_3 = _mm256_maskstore_ps(zmm0, zmm3)
        
        zmm5 = _mm256_add_ps(zmm2, zmm1)
        zmm1 = _mm256_andnot_ps(zmm0, arg13)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm0 = _mm256_xor_ps(zmm0, _mm256_cmp_ps(zmm1, zmm1, 0xf))
            zmm2 = _mm256_broadcast_ss(temp0_11)
            zmm1 = _mm256_cmp_ps(arg9, zmm2, 1)
            zmm3 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg13)) != 0)
                var_640_3 = _mm256_maskstore_ps(zmm3, zmm2)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
                var_640_3 = _mm256_maskstore_ps(zmm0, arg9)
        
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(var_5c0_2[0].o, var_560_2[0].o)
        zmm1 = _mm256_broadcast_ss(temp0_7)
        zmm0 = _mm256_cmp_ps(zmm1, zmm5, 1)
        zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm3[0].o &= var_5a0_1
        zmm2[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            var_620_4 = _mm256_maskstore_ps(zmm0, zmm1)
        
        zmm2[0].o = zx.o(0)
        
        if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg13)) != 0)
            zmm0 = _mm256_xor_ps(zmm0, _mm256_cmp_ps(zmm2, zmm2, 0xf))
            zmm2 = _mm256_broadcast_ss(temp0_12)
            zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
            zmm3 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm3, arg13)) != 0)
                var_620_4 = _mm256_maskstore_ps(zmm3, zmm2)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
                var_620_4 = _mm256_maskstore_ps(zmm0, zmm5)
        
        float var_460_2[0x8] = zmm5
        float var_320_1[0x8] = arg10
        double var_300_1[0x4] = arg9
        float var_400_2[0x8] = arg13
        arg9 = _mm256_broadcast_ss(*arg1)
        zmm0 = _mm256_sub_ps(var_660_3, arg9)
        zmm4 = _mm256_broadcast_ss(*(arg1 + 4))
        zmm1 = _mm256_sub_ps(var_640_3, zmm4)
        arg14 = _mm256_broadcast_ss(*arg3)
        zmm2 = _mm256_div_ps(zmm0, arg14)
        zmm3 = _mm256_broadcast_ss(*(arg3 + 4))
        zmm1 = _mm256_div_ps(zmm1, zmm3)
        zmm0[0].o = arg3[1].d
        zmm2 = _mm256_cvttps_epi32(zmm2)
        zmm1 = _mm256_cvttps_epi32(zmm1)
        uint32_t var_2c0_1[0x8] = zmm1
        double var_360_1[0x4] = zmm3
        float var_3a0_1[0x8] = zmm4
        zmm1 = _mm256_add_ps(_mm256_mul_ps(zmm3, _mm256_cvtepi32_ps(zmm1)), zmm4)
        zmm3[0].o = __vmovsd_xmmdq_memq(*arg3)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0x20)
        arg5[0].o = __vdivps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142fc9580)
        zmm3[0].o = _mm_permute_ps(arg5[0].o, 0x55)
        zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
        double var_3c0_1[0x4] = zmm3
        arg6 = _mm256_add_ps(zmm3, zmm1)
        zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        arg8 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
        arg13 = _mm256_cmp_ps(arg6, var_640_3, 1)
        zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
        arg10[0].o = var_5a0_1
        zmm1[0].o &= arg10[0].o
        zmm3 = var_5c0_2
        zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_560_2[0].o)
        zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
        zmm5 = _mm256_broadcast_ss(arg1[1].d)
        float var_5e0_2[0x8] = var_620_4
        zmm3 = _mm256_div_ps(_mm256_sub_ps(var_620_4, zmm5), zmm0)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        char temp0_688 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
        arg12 = _mm256_cvttps_epi32(zmm3)
        float var_340_1[0x8] = arg14
        zmm1 = _mm256_mul_ps(arg14, _mm256_cvtepi32_ps(zmm2))
        zmm3 = _mm256_mul_ps(zmm0, _mm256_cvtepi32_ps(arg12))
        double var_380_1[0x4] = arg9
        arg14 = _mm256_add_ps(zmm1, arg9)
        zmm1 = _mm256_add_ps(zmm3, zmm5)
        zmm3[0].o = _mm_permute_ps(arg5[0].o, 0)
        zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
        double var_2a0_1[0x4] = zmm3
        arg14 = _mm256_add_ps(zmm3, arg14)
        arg5[0].o = _mm_permute_ps(arg5[0].o, 0xaa)
        double* var_4a0
        var_4a0.32 = var_660_3
        arg14 = _mm256_blendv_ps(arg8, zmm2, _mm256_cmp_ps(arg14, var_660_3, 1))
        arg5 = _mm256_insertf128_ps(arg5, arg5[0].o, 1)
        uint32_t var_660_4[0x8] = arg14
        double* var_480
        var_480.32 = var_640_3
        arg6 = _mm256_cmp_ps(arg6, var_640_3, 5)
        
        if (temp0_688 != 0)
            zmm2 = var_2c0_1
        
        zmm1 = _mm256_add_ps(arg5, zmm1)
        var_640_3[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        zmm3[0].o = arg10[0].o & var_640_3[0].o
        arg6[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
        zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        bool cond:4_1 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0
        var_640_3[0].o = arg10[0].o
        
        if (not(cond:4_1))
            arg6 = var_2c0_1
            zmm3[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
            arg6[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
            arg8 = _mm256_insertf128_ps(arg6, zmm3[0].o, 1)
        
        arg9 = _mm256_blendv_ps(arg8, zmm2, arg13)
        double var_640_4[0x4] = arg9
        zmm3 = var_5e0_2
        arg6 = _mm256_cmp_ps(zmm1, zmm3, 5)
        arg13 = _mm256_cmp_ps(zmm1, zmm3, 1)
        zmm1[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
        zmm1[0].o &= var_640_3[0].o
        zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        arg10 = var_320_1
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm2 = arg12
        
        zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        zmm1[0].o &= var_640_3[0].o
        zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm1[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
            zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm3[0].o)
            arg8 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
        
        zmm1 = _mm256_blendv_ps(arg8, zmm2, arg13)
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(var_340_1, _mm256_cvtepi32_ps(arg14)), 
            var_380_1)
        zmm3 = __vaddps_ymmqq_ymmqq_memqq(_mm256_mul_ps(var_360_1, _mm256_cvtepi32_ps(arg9)), 
            var_3a0_1)
        uint32_t var_620_5[0x8] = zmm1
        zmm1 = _mm256_add_ps(_mm256_mul_ps(zmm0, _mm256_cvtepi32_ps(zmm1)), zmm5)
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_2a0_1)
        zmm3 = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_3c0_1)
        zmm1 = _mm256_add_ps(arg5, zmm1)
        arg8 = var_4a0.32
        zmm2 = _mm256_div_ps(_mm256_sub_ps(arg8, zmm2), var_340_1)
        zmm5 = var_480.32
        zmm3 = _mm256_div_ps(_mm256_sub_ps(zmm5, zmm3), var_360_1)
        zmm1 = _mm256_sub_ps(var_5e0_2, zmm1)
        zmm0 = _mm256_div_ps(zmm1, zmm0)
        float var_540_4[0x8] = zmm2
        double var_520_4[0x4] = zmm3
        float var_500_4[0x8] = zmm0
        zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
        zmm2[0].o = zmm0[0].o & var_640_3[0].o
        zmm3[0].o = zmm1[0].o & zmm4[0].o
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm1[0].o = zx.o(0)
            var_660_4 = _mm256_maskstore_ps(zmm0, zmm1)
            var_540_4 = _mm256_maskstore_ps(zmm0, zmm1)
            arg14 = var_660_4
        
        zmm0 = _mm256_sub_ps(arg8, arg10)
        arg8 = var_5c0_2
        zmm3[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, var_560_2[0].o)
        int32_t rax_70 = *arg4
        zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        zmm2[0].o = zx.o(rax_70 - 1)
        zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm2[0].o)
        zmm4[0].o = zmm1[0].o & var_640_3[0].o
        zmm3[0].o &= zmm2[0].o
        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
        zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        bool cond:9_1 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0
        var_5e0_2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_5e0_2[0].o, var_5e0_2[0].o)
        
        if (not(cond:9_1))
            zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            zmm2[0].o = zx.o(rax_70 - 2)
            zmm2[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm2[0].o, 0)
            var_660_4 = _mm256_maskstore_ps(zmm1, _mm256_insertf128_ps(zmm2, zmm2[0].o, 1))
            var_540_4 = _mm256_maskstore_ps(zmm1, data_142fc95a0)
        
        zmm2 = _mm256_sub_ps(zmm5, var_300_1)
        zmm1 = _mm256_mul_ps(zmm0, zmm0)
        zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, var_560_2[0].o)
        var_300_1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(var_300_1[0].o, var_300_1[0].o)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_300_1[0].o, var_640_4[0].o)
        var_300_1[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(var_300_1[0].o, var_640_4[2].o)
        zmm5[0].o = var_300_1[0].o & var_640_3[0].o
        zmm4[0].o &= zmm0[0].o
        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
            zmm0 = _mm256_insertf128_ps(zmm0, var_300_1[0].o, 1)
            var_300_1[0].o = zx.o(0)
            var_640_4 = _mm256_maskstore_ps(zmm0, var_300_1)
            var_520_4 = _mm256_maskstore_ps(zmm0, var_300_1)
        
        zmm3 = var_640_4
        zmm4 = var_5e0_2
        zmm0 = _mm256_sub_ps(zmm4, var_460_2)
        zmm1 = _mm256_add_ps(zmm1, var_5e0_2)
        zmm2 = _mm256_mul_ps(zmm2, zmm2)
        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, var_560_2[0].o)
        int32_t rdx_36 = arg4[1]
        zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        var_5e0_2[0].o = zx.o(rdx_36 - 1)
        var_5e0_2[0].o = __vpshufd_xmmdq_xmmdq_immb(var_5e0_2[0].o, 0)
        zmm4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm4[0].o, var_5e0_2[0].o)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_5e0_2[0].o)
        var_5e0_2[0].o = zmm4[0].o & var_640_3[0].o
        zmm5[0].o &= zmm3[0].o
        zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_5e0_2[0].o)
        zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
            zmm3 = _mm256_insertf128_ps(zmm3, zmm4[0].o, 1)
            zmm4[0].o = zx.o(rdx_36 - 2)
            zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm4[0].o, 0)
            var_640_4 = _mm256_maskstore_ps(zmm3, _mm256_insertf128_ps(zmm4, zmm4[0].o, 1))
            zmm4 = data_142fc95a0
            var_520_4 = _mm256_maskstore_ps(zmm3, zmm4)
        
        zmm1 = _mm256_add_ps(zmm1, zmm2)
        zmm0 = _mm256_mul_ps(zmm0, zmm0)
        zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, var_560_2[0].o)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_620_5[0].o)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_memdq(zmm3[0].o, var_610)
        zmm5[0].o = zmm3[0].o & var_640_3[0].o
        zmm4[0].o &= zmm2[0].o
        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm4[0].o) != 0)
            zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
            zmm3[0].o = zx.o(0)
            var_620_5 = _mm256_maskstore_ps(zmm2, zmm3)
            var_500_4 = _mm256_maskstore_ps(zmm2, zmm3)
        
        arg14 = var_620_5
        zmm0 = _mm256_add_ps(zmm1, zmm0)
        float var_5e0_3[0x8] = zmm0
        zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg8[0].o, var_560_2[0].o)
        int32_t rdx_39 = arg4[2]
        zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        zmm1[0].o = zx.o(rdx_39 - 1)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
        zmm3[0].o = zmm0[0].o & var_640_3[0].o
        zmm2[0].o &= zmm1[0].o
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            zmm1[0].o = zx.o(rdx_39 - 2)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0)
            uint32_t var_620_6[0x8] =
                _mm256_maskstore_ps(zmm0, _mm256_insertf128_ps(zmm1, zmm1[0].o, 1))
            zmm1 = data_142fc95a0
            var_500_4 = _mm256_maskstore_ps(zmm0, zmm1)
            arg14 = var_620_6
        
        zmm0[0].o = zx.o(*(arg15 + 4))
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        var_340_1[0].o = var_660_4[0].o
        zmm2[0].o = var_660_4[4].o
        var_5e0_2[0].o = var_640_4[0].o
        var_640_3[0].o = var_640_4[2].o
        arg12[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_340_1[0].o)
        arg10[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, var_640_3[0].o)
        var_570.o = zmm5[0].o
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, var_5e0_2[0].o)
        var_4a0.o = zmm0[0].o
        zmm3[0].o = zx.o(*(arg15 + 8))
        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
        zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        var_460_2[0].o = zmm3[0].o
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
        var_480.o = zmm0[0].o
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
        arg13[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        var_560_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg13[0].o)
        var_560_2[0].o = __vpslld_xmmdq_xmmdq_immb(var_560_2[0].o, 2)
        zmm3 = _mm256_insertf128_ps(zmm3, var_560_2[0].o, 1)
        zmm5[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg8[0].o, var_560_2[0].o)
        int32_t var_5c0_3[0x4] = zmm5[0].o
        arg9 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm5, var_5a0_1, 1)
        zmm3 = _mm256_and_ps(arg9, zmm3)
        int32_t temp0_848 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
        int32_t temp0_849 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
        int32_t rdi_26 = zmm3[0].d
        int32_t temp0_850 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
        zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        int32_t temp0_852 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
        int32_t temp0_853 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
        int32_t rbx_34 = zmm3[0].d
        int32_t temp0_854 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3)
        float* rcx_38 = *(arg15 + 0x10)
        int64_t rdi_27 = sx.q(rdi_26)
        int64_t rsi_16 = sx.q(temp0_848)
        var_360_1[0] = rsi_16
        int64_t r8_9 = sx.q(temp0_849)
        var_380_1[0] = r8_9
        int64_t rdx_41 = sx.q(temp0_850)
        var_3a0_1[0].q = rdx_41
        int64_t r15_1 = sx.q(rbx_34)
        int64_t rax_72 = sx.q(temp0_852)
        var_340_1[0].q = rax_72
        int64_t rbx_35 = sx.q(temp0_853)
        var_320_1[0].q = rbx_35
        zmm3[0].o = *(rcx_38 + r15_1)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_38 + rax_72), 0x10)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_38 + rbx_35), 0x20)
        int64_t rax_73 = sx.q(temp0_854)
        var_300_1[0] = rax_73
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_38 + rax_73), 0x30)
        var_560_2[0].o = *(rcx_38 + rdi_27)
        var_560_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_560_2[0].o, *(rcx_38 + rsi_16), 0x10)
        var_560_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_560_2[0].o, *(rcx_38 + r8_9), 0x20)
        var_560_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_560_2[0].o, *(rcx_38 + rdx_41), 0x30)
        zmm0 = _mm256_insertf128_ps(var_560_2, zmm3[0].o, 1)
        zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm5[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        zmm0[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_340_1[0].o, zmm3[0].o)
        arg8[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, var_5e0_2[0].o)
        zmm5[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
        var_340_1[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_640_3[0].o)
        var_560_2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_340_1[0].o, zmm4[0].o)
        var_560_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_560_2[0].o, arg13[0].o)
        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg14[0].o)
        zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
        var_560_2[0].o = __vpslld_xmmdq_xmmdq_immb(var_560_2[0].o, 2)
        zmm5 = _mm256_and_ps(arg9, _mm256_insertf128_ps(zmm5, var_560_2[0].o, 1))
        int32_t temp0_877 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 1)
        int32_t temp0_878 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 2)
        int32_t temp0_879 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 3)
        float r13_2 = zmm5[0]
        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        int32_t temp0_881 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
        int32_t temp0_882 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
        int32_t temp0_883 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
        float rax_74 = zmm5[0]
        var_5e0_2[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_5e0_2[0].o, zmm3[0].o)
        zmm3[0].o = __vpsubd_xmmdq_xmmdq_xmmdq(var_640_3[0].o, zmm3[0].o)
        zmm5[0].o = *(rcx_38 + sx.q(rax_74))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_38 + sx.q(temp0_881)), 0x10)
        var_560_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm3[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg12[0].o, var_5e0_2[0].o)
        zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        var_560_2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(var_560_2[0].o, zmm4[0].o)
        var_560_2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(var_560_2[0].o, arg13[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
        var_560_2[0].o = __vpslld_xmmdq_xmmdq_immb(var_560_2[0].o, 2)
        arg7 = _mm256_insertf128_ps(zmm2, var_560_2[0].o, 1)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_38 + sx.q(temp0_882)), 0x20)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
        arg10[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_38 + sx.q(temp0_883)), 0x30)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(arg8[0].o, var_5e0_2[0].o)
        zmm5[0].o = *(rcx_38 + sx.q(r13_2))
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_38 + sx.q(temp0_877)), 0x10)
        zmm2[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
        zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg14[0].o)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
        zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 2)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_38 + sx.q(temp0_878)), 0x20)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rcx_38 + sx.q(temp0_879)), 0x30)
        zmm5 = _mm256_and_ps(arg9, arg7)
        int32_t temp0_911 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 1)
        int32_t temp0_912 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 2)
        float r14_5 = zmm5[0]
        int32_t temp0_913 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        int64_t rbx_37 = sx.q(zmm5[0])
        int32_t temp0_915 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1)
        int32_t temp0_916 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
        int32_t temp0_917 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3)
        zmm5[0].o = *(rcx_38 + rbx_37)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_38 + sx.q(temp0_915)), 0x10)
        zmm2 = _mm256_and_ps(arg9, zmm2)
        var_5e0_2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        int32_t temp0_921 = __vpextrd_gpr32d_xmmdq_immb(var_5e0_2[0].o, 1)
        int32_t temp0_922 = __vpextrd_gpr32d_xmmdq_immb(var_5e0_2[0].o, 2)
        int32_t temp0_923 = __vpextrd_gpr32d_xmmdq_immb(var_5e0_2[0].o, 3)
        float rax_83 = var_5e0_2[0]
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_38 + sx.q(temp0_916)), 0x20)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rcx_38 + sx.q(temp0_917)), 0x30)
        var_5e0_2[0].o = *(rcx_38 + sx.q(r14_5))
        var_5e0_2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(var_5e0_2[0].o, *(rcx_38 + sx.q(temp0_911)), 0x10)
        var_5e0_2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(var_5e0_2[0].o, *(rcx_38 + sx.q(temp0_912)), 0x20)
        var_5e0_2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(var_5e0_2[0].o, *(rcx_38 + sx.q(temp0_913)), 0x30)
        var_560_2[0].o = *(rcx_38 + sx.q(rax_83))
        var_560_2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(var_560_2[0].o, *(rcx_38 + sx.q(temp0_921)), 0x10)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_570.o)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm1[0].o, var_4a0.o)
        var_560_2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(var_560_2[0].o, *(rcx_38 + sx.q(temp0_922)), 0x20)
        arg7 = zmm0
        arg11 = var_540_4
        zmm3 = _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm3, arg10[0].o, 1), arg7))
        arg7 = _mm256_add_ps(arg7, zmm3)
        zmm3[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(var_560_2[0].o, *(rcx_38 + sx.q(temp0_923)), 0x30)
        int64_t rax_88 = sx.q(zmm2[0])
        int32_t temp0_938 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
        int32_t temp0_939 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
        int32_t temp0_940 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
        zmm2[0].o = *(rcx_38 + rax_88)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_38 + sx.q(temp0_938)), 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_38 + sx.q(temp0_939)), 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rcx_38 + sx.q(temp0_940)), 0x30)
        zmm5 = _mm256_insertf128_ps(var_5e0_2, zmm5[0].o, 1)
        var_5e0_2[0].o = *(rbx_27 + rcx_38 + rdi_27)
        arg6 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
        zmm2[0].o = *(rbx_29 + rcx_38 + r15_1)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_34 + rcx_38 + var_340_1[0].q), 0x10)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_43 + rcx_38 + var_320_1[0].q), 0x20)
        void* rax_99 = rcx_38 i+ var_360_1[0]
        void* rdx_50 = rcx_38 i+ var_380_1[0]
        void* rbx_41 = rcx_38 + var_3a0_1[0].q
        void* rdi_29 = rcx_38 i+ var_300_1[0]
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
        zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        zmm0 = _mm256_mul_ps(arg11, _mm256_sub_ps(arg6, zmm5))
        float* r13_4 = var_668.q
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r13_4 + rdi_29), 0x30)
        var_5e0_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_5e0_2[0].o, *(rax_47 + rax_99), 0x10)
        var_5e0_2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_5e0_2[0].o, *(rax_49 + rdx_50), 0x20)
        arg12 = _mm256_add_ps(zmm5, zmm0)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_5e0_2[0].o, *(rax_51 + rbx_41), 0x30)
        zmm0 = _mm256_insertf128_ps(zmm0, zmm2[0].o, 1)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg14[0].o)
        zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
        zmm2 = _mm256_and_ps(arg9, _mm256_insertf128_ps(zmm5, zmm2[0].o, 1))
        var_5e0_2[0].o = *(rbx_27 + sx.q(zmm2[0]) + rcx_38)
        int32_t temp0_964 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
        int32_t temp0_965 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
        int32_t temp0_966 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        void* rdi_32 = sx.q(zmm2[0]) + rcx_38
        int32_t temp0_968 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
        int32_t temp0_969 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
        int32_t temp0_970 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
        zmm2[0].o = *(rbx_29 + rdi_32)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rdx_34 + sx.q(temp0_968) + rcx_38), 0x10)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rax_43 + sx.q(temp0_969) + rcx_38), 0x20)
        zmm2[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(r13_4 + sx.q(temp0_970) + rcx_38), 0x30)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_5e0_2[0].o, 
            *(rax_47 + sx.q(temp0_964) + rcx_38), 0x10)
        zmm5[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_49 + sx.q(temp0_965) + rcx_38), 0x20)
        zmm5[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_51 + sx.q(temp0_966) + rcx_38), 0x30)
        zmm2 = _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm5, zmm2[0].o, 1), zmm0))
        arg5 = _mm256_add_ps(zmm0, zmm2)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg13[0].o)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm4[0].o, var_480.o)
        zmm5[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, var_460_2[0].o)
        zmm5[0].o = __vpslld_xmmdq_xmmdq_immb(zmm5[0].o, 2)
        zmm2[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
        zmm2 = _mm256_and_ps(arg9, _mm256_insertf128_ps(zmm5, zmm2[0].o, 1))
        void* rdx_55 = sx.q(zmm2[0]) + rcx_38
        int32_t temp0_989 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
        int32_t temp0_990 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
        int32_t temp0_991 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
        zmm5[0].o = *(rbx_27 + rdx_55)
        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        arg6[0].o = *(rbx_29 + sx.q(zmm2[0]) + rcx_38)
        void* rdx_61 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)) + rcx_38
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rdx_34 + rdx_61), 0x10)
        void* rdx_64 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)) + rcx_38
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(rax_43 + rdx_64), 0x20)
        void* rdx_67 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)) + rcx_38
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(r13_4 + rdx_67), 0x30)
        zmm5[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_47 + sx.q(temp0_989) + rcx_38), 0x10)
        zmm5[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_49 + sx.q(temp0_990) + rcx_38), 0x20)
        zmm5[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(rax_51 + sx.q(temp0_991) + rcx_38), 0x30)
        zmm5 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
        zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 2)
        zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm2[0].o, 2)
        zmm0 = _mm256_and_ps(arg9, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
        void* rdx_69 = sx.q(zmm0[0]) + rcx_38
        int32_t temp0_1009 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_1010 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_1011 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm1[0].o = *(rbx_27 + rdx_69)
        zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm2[0].o = *(rbx_29 + sx.q(zmm0[0]) + rcx_38)
        int32_t temp0_1013 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
        int32_t temp0_1014 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int32_t temp0_1015 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 
            *(rdx_34 + sx.q(temp0_1013) + rcx_38), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 
            *(rax_43 + sx.q(temp0_1014) + rcx_38), 0x20)
        zmm0[0].o =
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(r13_4 + sx.q(temp0_1015) + rcx_38), 0x30)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
            *(rax_47 + sx.q(temp0_1009) + rcx_38), 0x10)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
            *(rax_49 + sx.q(temp0_1010) + rcx_38), 0x20)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 
            *(rax_51 + sx.q(temp0_1011) + rcx_38), 0x30)
        zmm0 = _mm256_add_ps(zmm5, 
            _mm256_mul_ps(arg11, _mm256_sub_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), zmm5)))
        zmm1 = var_520_4
        zmm2 = _mm256_add_ps(arg7, _mm256_mul_ps(_mm256_sub_ps(arg12, arg7), zmm1))
        zmm0 = _mm256_add_ps(zmm2, 
            __vmulps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(_mm256_add_ps(arg5, _mm256_mul_ps(zmm1, _mm256_sub_ps(zmm0, arg5))), 
                    zmm2), 
                var_500_4))
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm3 = var_5e0_3
        zmm1 = _mm256_cmp_ps(zmm3, zmm1, 0xc)
        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm2[0].o &= var_5a0_1
        zmm1[0].o = __vandps_xmmdq_xmmdq_memdq(zmm1[0].o, var_5c0_3)
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
        
        zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg19), 1), var_400_2)
        int32_t i_3 = _mm256_movemask_ps(zmm1)
        
        if (i_3 == 0)
            result = 0
        else
            uint64_t i_1 = zx.q(i_3)
            result = 0
            
            do
                uint64_t rdx_78
                
                if (i_1 == 0)
                    rdx_78 = 0x40
                    i_1 &= 0xfffffffffffffffe
                    
                    if ((result.b & 1) == 0)
                    label_140097f41:
                        float var_280[0x8] = zmm0
                        uint64_t rdx_79 = zx.q(rdx_78.d) & 7
                        zmm1[0].o = var_280[rdx_79]
                        *arg19 = zmm1[0]
                        float var_260[0x8] = var_560_2
                        *arg18 = var_260[rdx_79]
                else
                    uint64_t rflags_2
                    rdx_78, rflags_2 = _bit_scan_forward(i_1)
                    i_1 &= not.q(1 << (rdx_78 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_140097f41
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
