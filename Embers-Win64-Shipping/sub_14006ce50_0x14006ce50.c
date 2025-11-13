// 函数: sub_14006ce50
// 地址: 0x14006ce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = arg15[0].o
int128_t var_48 = arg14[0].o
int128_t var_58 = arg13[0].o
int128_t var_68 = arg12[0].o
int128_t var_78 = arg11[0].o
int128_t var_88 = arg10[0].o
int128_t var_98 = arg9[0].o
int128_t var_a8 = arg8[0].o
int128_t var_b8 = arg7[0].o
int128_t var_c8 = arg6[0].o
float zmm4[0x8]
zmm4[0].o = arg16
arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
float var_3a0[0x8] = arg5
float var_3c0_1[0x8] = arg5
int32_t rsi_4 = ((arg19 s>> 0x1f u>> 0x1d) + arg19) & 0xfffffff8
float var_3e0[0x8] = arg5
int32_t* r10
double* r11
float zmm1[0x8]
float zmm2[0x8]
int32_t zmm3[0x8]
float var_400[0x8]
int32_t rbx
float zmm5[0x8]

if (rsi_4 s<= 0)
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    var_400 = arg5
    rbx = 0
    r11 = arg18
    r10 = arg17
    
    if (0 s>= arg19)
        arg5 = var_400
    else
    label_14006d1c7:
        zmm1[0].o = zx.o(rbx)
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        zmm2 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, data_142fc93a0)
        zmm1[0].o = zx.o(arg19)
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        zmm3 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(3))
        zmm1 = _mm256_cmpgt_epi32(zmm1, zmm2)
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        int128_t temp0_91
        int32_t temp1_4
        temp0_91, temp1_4 = _mm256_i32gather_ps(zmm4, *(arg4 + (zmm3[0].q << 2)), zmm1)
        zmm4 = temp0_91
        zmm5 = temp1_4
        zmm3 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(0xc))
        zmm2 = _mm256_add_epi32(zmm3, __vpbroadcastd_ymmqq_memd(4))
        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        int128_t temp0_97
        int32_t temp1_5
        temp0_97, temp1_5 = _mm256_i32gather_ps(zmm5, *(arg4 + zmm2[0].q), zmm1)
        zmm5 = temp0_97
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        arg6 = __vpbroadcastd_ymmqq_memd(8)
        zmm3 = _mm256_add_epi32(zmm3, arg6)
        arg6[0].o = zx.o(0)
        int128_t temp0_101
        int32_t temp1_6
        temp0_101, temp1_6 = _mm256_i32gather_ps(arg6, *(arg4 + zmm3[0].q), zmm1)
        arg6 = temp0_101
        float var_260_1[0x8] = zmm4
        float var_240_1[0x8] = zmm5
        float var_220_1[0x8] = arg6
        zmm3 = _mm256_broadcast_ss(arg3[3])
        int32_t var_1e0_2[0x8] = zmm3
        int32_t var_1c0_2[0x8] = zmm3
        int32_t var_1a0_2[0x8] = zmm3
        int32_t var_180_2[0x8] = zmm3
        arg7 = _mm256_broadcast_ss(arg3[1])
        arg8 = _mm256_broadcast_ss(arg3[2])
        arg9 = _mm256_broadcast_ss(*arg3)
        arg10 = _mm256_mul_ps(zmm3, zmm2)
        arg11 = _mm256_mul_ps(zmm5, arg8)
        arg12 = _mm256_mul_ps(arg6, arg9)
        arg13 = _mm256_mul_ps(zmm4, arg7)
        arg11 = _mm256_fmsub_ps(arg11, arg7, arg6)
        arg12 = _mm256_fmsub_ps(arg12, arg8, zmm4)
        arg13 = _mm256_fmsub_ps(arg13, arg9, zmm5)
        zmm5 = _mm256_sub_ps(arg10, arg10)
        arg6 = _mm256_add_ps(arg11, arg11)
        zmm4 = _mm256_add_ps(arg12, arg12)
        arg7 = _mm256_add_ps(arg13, arg13)
        zmm5 = _mm256_add_ps(zmm5, zmm5)
        uint32_t var_380_2[0x8] = arg6
        float var_360_2[0x8] = zmm4
        float var_340_2[0x8] = arg7
        float var_320_2[0x8] = zmm5
        arg8 = _mm256_fmadd_ps(var_260_1, zmm3, arg6)
        arg9 = _mm256_fmadd_ps(var_240_1, zmm3, zmm4)
        arg10 = _mm256_fmadd_ps(var_220_1, zmm3, arg7)
        float var_160_1[0x8] = arg8
        float var_140_1[0x8] = arg9
        float var_120_1[0x8] = arg10
        float var_100_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm5, zmm3, zmm2)
        zmm3 = _mm256_broadcast_ss(arg3[1])
        zmm5 = _mm256_broadcast_ss(arg3[2])
        arg11 = _mm256_broadcast_ss(*arg3)
        arg12 = _mm256_mul_ps(zmm4, zmm5)
        arg13 = _mm256_mul_ps(arg7, arg11)
        arg14 = _mm256_mul_ps(arg6, zmm3)
        arg12 = _mm256_fmsub_ps(arg12, arg7, zmm3)
        arg13 = _mm256_fmsub_ps(arg13, arg6, zmm5)
        arg14 = _mm256_fmsub_ps(arg14, zmm4, arg11)
        zmm3 = _mm256_add_ps(arg8, arg12)
        zmm4 = _mm256_add_ps(arg9, arg13)
        zmm5 = _mm256_add_ps(arg10, arg14)
        zmm3 = _mm256_add_ps(zmm3, _mm256_broadcast_ss(arg3[4]))
        zmm4 = _mm256_add_ps(zmm4, _mm256_broadcast_ss(arg3[5]))
        zmm5 = _mm256_add_ps(zmm5, _mm256_broadcast_ss(arg3[6]))
        arg6 = _mm256_sub_ps(zmm3, _mm256_broadcast_ss(*arg2))
        arg7 = _mm256_sub_ps(zmm4, _mm256_broadcast_ss(arg2[1]))
        arg8 = _mm256_sub_ps(zmm5, _mm256_broadcast_ss(arg2[2]))
        arg6 = _mm256_fmadd_ps(_mm256_fmadd_ps(_mm256_fmadd_ps(arg6, arg6, zmm2), arg7, arg7), 
            arg8, arg8)
        zmm2 = _mm256_rsqrt_ps(arg6)
        arg7 = _mm256_broadcast_ss(*arg1)
        arg6 = _mm256_mul_ps(arg6, zmm2)
        zmm2 = _mm256_mul_ps(
            _mm256_mul_ps(zmm2, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), zmm2, arg6)), 
            _mm256_broadcast_ss(0.5f))
        arg6 = _mm256_rcp_ps(zmm2)
        arg8 = _mm256_fnmadd_ps(_mm256_fnmadd_ps(_mm256_broadcast_ss(2f), arg6, zmm2), arg6, arg7)
        zmm2[0].o = arg16
        zmm2 = _mm256_sub_ps(arg8, _mm256_broadcastss_ps(zmm2[0].o))
        arg6 = _mm256_cmp_ps(zmm2, _mm256_broadcast_ss(-9.99999975e-05f), 1)
        zmm1 = _mm256_and_ps(arg6, zmm1)
        arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
        arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg7[0].o) == 0)
            arg5 = var_400
        else
            zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, zmm2, var_3e0)
            zmm4 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, zmm2, var_3c0_1)
            zmm5 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm5, zmm2, var_3a0)
            var_3e0 = _mm256_maskstore_ps(zmm1, zmm3)
            var_3c0_1 = _mm256_maskstore_ps(zmm1, zmm4)
            var_3a0 = _mm256_maskstore_ps(zmm1, zmm5)
            arg5 = _mm256_blendv_ps(var_400, _mm256_add_ps(var_400, zmm2), 
                _mm256_cvtepi16_epi32(arg6[0].o))
else
    zmm2 = _mm256_broadcast_ss(arg3[3])
    arg5[0].o = *arg3
    zmm1[0].o = arg3[1]
    zmm3[0].o = arg3[2]
    float var_280_1[0x8] = _mm256_broadcast_ss(*arg1)
    float var_2a0_1[0x8] = _mm256_broadcast_ss(*arg2)
    float var_2c0_1[0x8] = _mm256_broadcast_ss(arg2[1])
    zmm5 = _mm256_broadcast_ss(arg2[2])
    float var_2e0_1[0x8] = zmm5
    float var_300_1[0x8] = _mm256_broadcastss_ps(zmm4[0].o)
    rbx = 0
    arg9 = __vpbroadcastd_ymmqq_memd(0xc)
    arg13 = _mm256_broadcastss_ps(zmm1[0].o)
    arg14 = _mm256_broadcastss_ps(zmm3[0].o)
    arg15 = _mm256_broadcastss_ps(arg5[0].o)
    zmm1 = _mm256_broadcast_ss(3f)
    arg10 = _mm256_broadcast_ss(0.5f)
    arg11 = _mm256_broadcast_ss(2f)
    arg12 = _mm256_broadcast_ss(-9.99999975e-05f)
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    var_400 = arg5
    
    do
        zmm3[0].o = zx.o(rbx)
        zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg9[0].o)
        zmm3 = _mm256_broadcastd_epi32(zmm3[0])
        zmm4 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc93c0)
        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        arg6 = _mm256_cmpeq_epi32(arg6, arg6)
        int128_t temp0_21
        int32_t temp1_1
        temp0_21, temp1_1 = _mm256_i32gather_ps(zmm5, *(arg4 + zmm4[0].q), arg6)
        zmm5 = temp0_21
        arg6 = temp1_1
        zmm4 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc93e0)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
        int128_t temp0_25
        int32_t temp1_2
        temp0_25, temp1_2 = _mm256_i32gather_ps(arg6, *(arg4 + zmm4[0].q), arg8)
        arg6 = temp0_25
        arg8 = temp1_2
        zmm3 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc9400)
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
        int128_t temp0_29
        int32_t temp1_3
        temp0_29, temp1_3 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm3[0].q), arg8)
        zmm4 = temp0_29
        float var_380_1[0x8] = zmm5
        uint32_t var_360_1[0x8] = arg6
        float var_340_1[0x8] = zmm4
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        float var_320_1[0x8] = arg5
        float var_1e0_1[0x8] = zmm2
        float var_1c0_1[0x8] = zmm2
        zmm3 = _mm256_mul_ps(arg6, arg14)
        arg8 = _mm256_mul_ps(zmm4, arg15)
        arg7 = _mm256_mul_ps(zmm5, arg13)
        zmm4 = _mm256_fmsub_ps(zmm4, arg13, zmm3)
        zmm5 = _mm256_fmsub_ps(zmm5, arg14, arg8)
        arg6 = _mm256_fmsub_ps(arg6, arg15, arg7)
        zmm3 = _mm256_add_ps(zmm4, zmm4)
        zmm4 = _mm256_add_ps(zmm5, zmm5)
        zmm5 = _mm256_add_ps(arg6, arg6)
        arg6 = _mm256_fmadd_ps(var_340_1, zmm2, zmm5)
        arg7 = _mm256_mul_ps(zmm4, arg14)
        arg8 = _mm256_mul_ps(zmm5, arg15)
        zmm5 = _mm256_fmsub_ps(zmm5, arg13, arg7)
        zmm5 = _mm256_add_ps(_mm256_fmadd_ps(var_380_1, zmm2, zmm3), zmm5)
        arg7 = _mm256_mul_ps(zmm3, arg13)
        zmm3 = _mm256_fmsub_ps(zmm3, arg14, arg8)
        arg8 = _mm256_add_ps(_mm256_fmadd_ps(var_360_1, zmm2, zmm4), zmm3)
        float var_1a0_1[0x8] = zmm2
        arg6 = _mm256_add_ps(arg6, _mm256_fmsub_ps(zmm4, arg15, arg7))
        zmm3 = _mm256_add_ps(zmm5, _mm256_broadcast_ss(arg3[4]))
        zmm4 = _mm256_add_ps(arg8, _mm256_broadcast_ss(arg3[5]))
        zmm5 = _mm256_add_ps(arg6, _mm256_broadcast_ss(arg3[6]))
        arg6 = __vsubps_ymmqq_ymmqq_memqq(zmm3, var_2a0_1)
        arg7 = __vsubps_ymmqq_ymmqq_memqq(zmm4, var_2c0_1)
        arg6 = _mm256_fmadd_ps(_mm256_fmadd_ps(arg6, arg6, arg5), arg7, arg7)
        arg7 = __vsubps_ymmqq_ymmqq_memqq(zmm5, var_2e0_1)
        arg6 = _mm256_fmadd_ps(arg6, arg7, arg7)
        arg7 = _mm256_rsqrt_ps(arg6)
        arg6 = _mm256_mul_ps(
            _mm256_mul_ps(arg7, _mm256_fnmadd_ps(_mm256_mul_ps(arg6, arg7), arg7, zmm1)), arg10)
        arg7 = _mm256_rcp_ps(arg6)
        float var_180_1[0x8] = zmm2
        arg8 = __vsubps_ymmqq_ymmqq_memqq(
            __vfnmadd213ps_ymmqq_ymmqq_memqq(_mm256_fnmadd_ps(arg6, arg7, arg11), arg7, var_280_1), 
            var_300_1)
        arg6 = _mm256_cmp_ps(arg8, arg12, 1)
        
        if (_mm256_movemask_ps(arg6) != 0)
            zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, arg8, var_3e0)
            zmm4 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, arg8, var_3c0_1)
            zmm5 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm5, arg8, var_3a0)
            var_3e0 = _mm256_maskstore_ps(arg6, zmm3)
            var_3c0_1 = _mm256_maskstore_ps(arg6, zmm4)
            var_3a0 = _mm256_maskstore_ps(arg6, zmm5)
            zmm3 = _mm256_add_ps(var_400, arg8)
            arg5 = _mm256_blendv_ps(var_400, zmm3, arg6)
            var_400 = arg5
        
        rbx += 8
    while (rbx s< rsi_4)
    
    r11 = arg18
    r10 = arg17
    
    if (rbx s< arg19)
        goto label_14006d1c7
    
    arg5 = var_400
zmm1 = _mm256_hadd_ps(var_3e0, var_3e0)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm2 = _mm256_hadd_ps(var_3c0_1, var_3c0_1)
zmm3 = var_3a0
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ zmm4[0]
zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
zmm2[0].o = zmm2[0].o f+ zmm4[0]
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x10)
zmm2 = _mm256_hadd_ps(zmm3, zmm3)
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
zmm2[0].o = zmm2[0].o f+ zmm3[0]
zmm3[0].o = __vmovsd_xmmdq_memq(*r11)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, r11[1].d, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x20)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
*r11 = zmm1[0]
*(r11 + 4) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
r11[1].d = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
arg5 = _mm256_hadd_ps(arg5, arg5)
arg5 = _mm256_hadd_ps(arg5, arg5)
zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
arg5[0].o = arg5[0].o f+ zmm1[0]
arg5[0].o = arg5[0].o f+ *r10
*r10 = arg5[0]
arg6[0].o = var_c8
arg7[0].o = var_b8
arg8[0].o = var_a8
arg9[0].o = var_98
arg10[0].o = var_88
arg11[0].o = var_78
arg12[0].o = var_68
arg13[0].o = var_58
arg14[0].o = var_48
arg15[0].o = var_38
_mm256_zeroupper()
