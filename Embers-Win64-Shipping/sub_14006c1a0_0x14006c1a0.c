// 函数: sub_14006c1a0
// 地址: 0x14006c1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = arg16[0].o
int128_t var_48 = arg15[0].o
int128_t var_58 = arg14[0].o
int128_t var_68 = arg13[0].o
int128_t var_78 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t var_b8 = arg8[0].o
int128_t var_c8 = arg7[0].o
float zmm4[0x8]
zmm4[0].o = arg17
arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
float var_360[0x8] = arg5
float var_380_1[0x8] = arg5
int32_t rsi_4 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
float var_3a0[0x8] = arg5
int32_t* r10
float* r11
uint32_t zmm1[0x8]
int32_t zmm3[0x8]
int32_t var_3c0[0x8]
int32_t rbx
float zmm2[0x8]

if (rsi_4 s<= 0)
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    var_3c0 = arg5
    rbx = 0
    r11 = arg19
    r10 = arg18
    
    if (0 s>= arg20)
        zmm4 = var_3c0
    else
    label_14006c4c9:
        arg5[0].o = zx.o(rbx)
        arg5 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(arg5[0]), data_142fc93a0)
        zmm1[0].o = zx.o(arg20)
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        zmm2 = _mm256_mullo_epi32(arg5, __vpbroadcastd_ymmqq_memd(3))
        zmm1 = _mm256_cmpgt_epi32(zmm1, arg5)
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        int128_t temp0_82
        int32_t temp1_4
        temp0_82, temp1_4 = _mm256_i32gather_ps(zmm4, *(arg4 + (zmm2[0].q << 2)), zmm1)
        zmm4 = temp0_82
        arg5 = _mm256_mullo_epi32(arg5, __vpbroadcastd_ymmqq_memd(0xc))
        zmm2 = _mm256_add_epi32(arg5, __vpbroadcastd_ymmqq_memd(4))
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int128_t temp0_88
        int32_t temp1_5
        temp0_88, temp1_5 = _mm256_i32gather_ps(arg6, *(arg4 + zmm2[0].q), zmm1)
        arg6 = temp0_88
        zmm3 = temp1_5
        arg5 = _mm256_add_epi32(arg5, __vpbroadcastd_ymmqq_memd(8))
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        int128_t temp0_92
        int32_t temp1_6
        temp0_92, temp1_6 = _mm256_i32gather_ps(zmm3, *(arg4 + arg5[0].q), zmm1)
        zmm3 = temp0_92
        float var_260_1[0x8] = zmm4
        int32_t var_240_1[0x8] = arg6
        float var_220_1[0x8] = zmm3
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        float var_200_1[0x8] = arg5
        zmm2 = _mm256_broadcast_ss(arg3[3])
        float var_1e0_2[0x8] = zmm2
        float var_1c0_2[0x8] = zmm2
        float var_1a0_2[0x8] = zmm2
        float var_180_2[0x8] = zmm2
        arg7 = _mm256_broadcast_ss(arg3[1])
        arg8 = _mm256_broadcast_ss(arg3[2])
        arg9 = _mm256_broadcast_ss(*arg3)
        arg5 = _mm256_mul_ps(zmm2, arg5)
        arg10 = _mm256_mul_ps(arg6, arg8)
        arg11 = _mm256_mul_ps(zmm3, arg9)
        arg12 = _mm256_mul_ps(zmm4, arg7)
        arg10 = _mm256_fmsub_ps(arg10, arg7, zmm3)
        arg11 = _mm256_fmsub_ps(arg11, arg8, zmm4)
        arg12 = _mm256_fmsub_ps(arg12, arg9, arg6)
        arg5 = _mm256_sub_ps(arg5, arg5)
        zmm4 = _mm256_add_ps(arg10, arg10)
        zmm3 = _mm256_add_ps(arg11, arg11)
        arg6 = _mm256_add_ps(arg12, arg12)
        arg5 = _mm256_add_ps(arg5, arg5)
        float var_340_2[0x8] = zmm4
        int32_t var_320_2[0x8] = zmm3
        int32_t var_300_2[0x8] = arg6
        float var_2e0_2[0x8] = arg5
        arg7 = _mm256_fmadd_ps(var_260_1, zmm2, zmm4)
        arg8 = _mm256_fmadd_ps(var_240_1, zmm2, zmm3)
        arg9 = _mm256_fmadd_ps(var_220_1, zmm2, arg6)
        float var_160_1[0x8] = arg7
        float var_140_1[0x8] = arg8
        float var_120_1[0x8] = arg9
        float var_100_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(arg5, zmm2, var_200_1)
        arg5 = _mm256_broadcast_ss(arg3[1])
        zmm2 = _mm256_broadcast_ss(arg3[2])
        arg10 = _mm256_broadcast_ss(*arg3)
        arg11 = _mm256_mul_ps(zmm3, zmm2)
        arg12 = _mm256_mul_ps(arg6, arg10)
        arg13 = _mm256_mul_ps(zmm4, arg5)
        arg11 = _mm256_fmsub_ps(arg11, arg6, arg5)
        arg12 = _mm256_fmsub_ps(arg12, zmm4, zmm2)
        arg13 = _mm256_fmsub_ps(arg13, zmm3, arg10)
        arg5 = _mm256_add_ps(arg7, arg11)
        zmm3 = _mm256_add_ps(arg8, arg12)
        zmm4 = _mm256_add_ps(arg9, arg13)
        zmm2 = _mm256_add_ps(arg5, _mm256_broadcast_ss(arg3[4]))
        zmm3 = _mm256_add_ps(zmm3, _mm256_broadcast_ss(arg3[5]))
        zmm4 = _mm256_add_ps(zmm4, _mm256_broadcast_ss(arg3[6]))
        arg5 = _mm256_sub_ps(zmm2, _mm256_broadcast_ss(*arg2))
        arg6 = _mm256_sub_ps(zmm3, _mm256_broadcast_ss(arg2[1]))
        arg7 = _mm256_sub_ps(zmm4, _mm256_broadcast_ss(arg2[2]))
        arg8 = _mm256_broadcast_ss(*arg1)
        arg9 = _mm256_broadcast_ss(arg1[1])
        arg6 = _mm256_fmadd_ps(_mm256_mul_ps(arg6, arg9), arg5, arg8)
        arg5 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg1[2]), arg7, arg6)
        arg6[0].o = arg17
        arg6 = _mm256_sub_ps(arg5, _mm256_broadcastss_ps(arg6[0].o))
        arg5 = _mm256_cmp_ps(arg6, _mm256_broadcast_ss(-9.99999975e-05f), 1)
        zmm1 = _mm256_and_ps(arg5, zmm1)
        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) == 0)
            zmm4 = var_3c0
        else
            zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg6, var_3a0)
            zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, arg6, var_380_1)
            zmm4 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, arg6, var_360)
            var_3a0 = _mm256_maskstore_ps(zmm1, zmm2)
            var_380_1 = _mm256_maskstore_ps(zmm1, zmm3)
            var_360 = _mm256_maskstore_ps(zmm1, zmm4)
            zmm4 = var_3c0
            zmm4 =
                _mm256_blendv_ps(zmm4, _mm256_add_ps(zmm4, arg6), _mm256_cvtepi16_epi32(arg7[0].o))
else
    zmm2 = _mm256_broadcast_ss(arg3[3])
    arg5[0].o = *arg3
    zmm1[0].o = arg3[1]
    zmm3[0].o = arg3[2]
    float var_280_1[0x8] = _mm256_broadcast_ss(*arg2)
    float var_2a0_1[0x8] = _mm256_broadcast_ss(arg2[1])
    arg6 = _mm256_broadcast_ss(arg2[2])
    float var_2c0_1[0x8] = arg6
    arg7 = _mm256_broadcast_ss(*arg1)
    arg8 = _mm256_broadcast_ss(arg1[1])
    arg9 = _mm256_broadcast_ss(arg1[2])
    arg10 = _mm256_broadcastss_ps(zmm4[0].o)
    rbx = 0
    arg12 = __vpbroadcastd_ymmqq_memd(0xc)
    arg16 = _mm256_broadcastss_ps(zmm1[0].o)
    zmm1 = _mm256_broadcastss_ps(zmm3[0].o)
    arg11 = _mm256_broadcastss_ps(arg5[0].o)
    arg13 = _mm256_broadcast_ss(-9.99999975e-05f)
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    var_3c0 = arg5
    
    do
        zmm3[0].o = zx.o(rbx)
        zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg12[0].o)
        zmm3 = _mm256_broadcastd_epi32(zmm3[0])
        zmm4 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc93c0)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        arg14 = _mm256_cmpeq_epi32(arg14, arg14)
        int128_t temp0_20
        int32_t temp1_1
        temp0_20, temp1_1 = _mm256_i32gather_ps(arg6, *(arg4 + zmm4[0].q), arg14)
        arg6 = temp0_20
        arg14 = temp1_1
        zmm4 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc93e0)
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        arg15 = _mm256_cmpeq_epi32(arg15, arg15)
        int128_t temp0_24
        int32_t temp1_2
        temp0_24, temp1_2 = _mm256_i32gather_ps(arg14, *(arg4 + zmm4[0].q), arg15)
        arg14 = temp0_24
        arg15 = temp1_2
        zmm3 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc9400)
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        arg15 = _mm256_cmpeq_epi32(arg15, arg15)
        int128_t temp0_28
        int32_t temp1_3
        temp0_28, temp1_3 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm3[0].q), arg15)
        zmm4 = temp0_28
        int32_t var_340_1[0x8] = arg6
        uint32_t var_320_1[0x8] = arg14
        float var_300_1[0x8] = zmm4
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        float var_2e0_1[0x8] = arg5
        zmm3 = _mm256_mul_ps(arg14, zmm1)
        arg15 = _mm256_mul_ps(zmm4, arg11)
        arg5 = _mm256_mul_ps(arg6, arg16)
        zmm4 = _mm256_fmsub_ps(zmm4, arg16, zmm3)
        arg6 = _mm256_fmsub_ps(arg6, zmm1, arg15)
        arg14 = _mm256_fmsub_ps(arg14, arg11, arg5)
        arg5 = _mm256_add_ps(zmm4, zmm4)
        zmm3 = _mm256_add_ps(arg6, arg6)
        zmm4 = _mm256_add_ps(arg14, arg14)
        arg6 = _mm256_fmadd_ps(var_300_1, zmm2, zmm4)
        arg14 = _mm256_mul_ps(zmm3, zmm1)
        arg15 = _mm256_mul_ps(zmm4, arg11)
        zmm4 = _mm256_fmsub_ps(zmm4, arg16, arg14)
        zmm4 = _mm256_add_ps(_mm256_fmadd_ps(var_340_1, zmm2, arg5), zmm4)
        arg14 = _mm256_mul_ps(arg5, arg16)
        arg5 = _mm256_fmsub_ps(arg5, zmm1, arg15)
        arg5 = _mm256_add_ps(_mm256_fmadd_ps(var_320_1, zmm2, zmm3), arg5)
        float var_1e0_1[0x8] = zmm2
        float var_1c0_1[0x8] = zmm2
        float var_1a0_1[0x8] = zmm2
        float var_180_1[0x8] = zmm2
        zmm3 = _mm256_add_ps(arg6, _mm256_fmsub_ps(zmm3, arg11, arg14))
        arg14 = _mm256_add_ps(zmm4, _mm256_broadcast_ss(arg3[4]))
        arg15 = _mm256_add_ps(arg5, _mm256_broadcast_ss(arg3[5]))
        zmm3 = _mm256_add_ps(zmm3, _mm256_broadcast_ss(arg3[6]))
        arg5 = _mm256_fmadd_ps(__vsubps_ymmqq_ymmqq_memqq(arg14, var_280_1), arg7, 
            _mm256_mul_ps(__vsubps_ymmqq_ymmqq_memqq(arg15, var_2a0_1), arg8))
        zmm4 = _mm256_sub_ps(
            _mm256_fmadd_ps(__vsubps_ymmqq_ymmqq_memqq(zmm3, var_2c0_1), arg9, arg5), arg10)
        arg6 = _mm256_cmp_ps(zmm4, arg13, 1)
        
        if (_mm256_movemask_ps(arg6) != 0)
            arg14 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg14, zmm4, var_3a0)
            arg15 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg15, zmm4, var_380_1)
            zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, zmm4, var_360)
            var_3a0 = _mm256_maskstore_ps(arg6, arg14)
            var_380_1 = _mm256_maskstore_ps(arg6, arg15)
            var_360 = _mm256_maskstore_ps(arg6, zmm3)
            arg5 = _mm256_add_ps(var_3c0, zmm4)
            zmm3 = _mm256_blendv_ps(var_3c0, arg5, arg6)
            var_3c0 = zmm3
        
        rbx += 8
    while (rbx s< rsi_4)
    
    r11 = arg19
    r10 = arg18
    
    if (rbx s< arg20)
        goto label_14006c4c9
    
    zmm4 = var_3c0
arg5 = _mm256_hadd_ps(var_3a0, var_3a0)
arg5 = _mm256_hadd_ps(arg5, arg5)
zmm1 = var_380_1
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm3[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
arg5[0].o = arg5[0].o f+ zmm3[0]
zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ zmm3[0]
arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm1[0].o, 0x10)
zmm1 = _mm256_hadd_ps(var_360, var_360)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
var_360[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ var_360[0]
var_360[0].o = __vmovsd_xmmdq_memq(*r11)
var_360[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_360[0].o, r11[2], 0x20)
arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm1[0].o, 0x20)
arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, var_360[0].o)
*r11 = arg5[0]
r11[1] = __vextractps_memd_xmmdq_immb(arg5[0].o, 1)
r11[2] = __vextractps_memd_xmmdq_immb(arg5[0].o, 2)
arg5 = _mm256_hadd_ps(zmm4, zmm4)
arg5 = _mm256_hadd_ps(arg5, arg5)
zmm1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
arg5[0].o = arg5[0].o f+ zmm1[0]
arg5[0].o = arg5[0].o f+ *r10
*r10 = arg5[0]
arg7[0].o = var_c8
arg8[0].o = var_b8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_78
arg13[0].o = var_68
arg14[0].o = var_58
arg15[0].o = var_48
arg16[0].o = var_38
_mm256_zeroupper()
